# Ghost Squad (RGSE8P, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as Resident Evil: The Umbrella Chronicles (copied from that repo), which is the closest
SDK match.

## Source
- main.dol sha1 3c68fc28ef606bd260c06267077202b4b468b17f, entry 0x8000403C, r13 0x806DA580, r2 0x806DCEA0.
  RVL SDK: OS/DVD Apr 24 2007, VI/PAD/AI/GX/NAND/SC Nov 30 2006, AX Dec 18 2006, WPAD/KPAD May 17 2007, HBM May 2007,
  NWC24 / SO / NCD / DWC (Nintendo Wi-Fi Connection rankings). CRI ADX + Sofdec. No REL modules, no symbols.

## Splitting without dtk
- `tools/funcfind.py main.dol config/symbols.txt [ref.dol ref_symbols.txt ...]` writes a dtk-style symbols.txt.
  Starts: entry, bl targets, code pointers in data that are not switch-table entries, lis/addi address constants,
  unconditional tail branches to a frame-opening function, branches that leave their function, unreachable code after
  a function's last reachable instruction (when it opens a frame or follows padding), and exact masked matches of
  functions from already-split games. Switch tables: lis/addi base before a bctr, bounded by the cmplwi before it.
  CodeWarrior _savegpr/_restgpr entry points are dropped (the recompiler inlines calls to them).
- Checked against Umbrella Chronicles' dtk output: 16,135 of 16,158 starts identical (16,111 with the same size);
  the rest are dead 4-byte stubs, TRK handlers and save/restore entry points.
- `src/recomp.py` now calls the next function when one runs off its end into a known start (was REL-only).
- Names: `tools/xmatch.py` against Martian Panic, House of the Dead: Overkill, Umbrella Chronicles, Zack & Wiki and
  Lost in Shadow (`tools/xm_*.json`, applied in that order) renames 3,504 functions. WPADGetStatus (0x802ABE50, a
  1-word branch to WUDGetStatus) by hand (`tools/manual_names.txt`).

## game.h constants
- __AXDSPResumeCallback 0x801D5C2C, DecrementerExceptionCallback 0x801B9BE0, iosFree 0x80205148, OSExitThread
  0x801C19A8, OSDisableScheduler 0x801C11DC / OSEnableScheduler 0x801C1218, __OSReschedule 0x801C1724, SelectThread
  idle branch 0x801C1650 (SelectThread + 0x154, as in Umbrella Chronicles), interrupt table r13-0x6308, IOS heap
  r13-0x7A0C. KPADStatus stride 0x84 (older KPADRead(chan, buf, len)).

## Runtime fixes
- NAND /tmp is emptied at boot, as IOS does: the game creates /tmp/capdat.bin at start and shows "The Wii system
  memory has been corrupted" if that fails with EEXIST.
- WPADSetConnectCallback is answered (returns the old callback) and reports remote 0 connected through the new
  callback: the game marks a channel connected (r13-0x68A8[chan]) only from its connect callback (0x8019D6D8), and
  its button reader (fn_80024578) ignores channels that are not marked.
- WPADGetStatus returns 3 (WPAD_STATE_SETUP): the game waits for it after KPADInit.

## Input
- KPADRead is called for channels 0-3 once per frame (fn_80024380) into 0x804DCFD8 (16 samples, stride 0x840 per
  channel). fn_8002C828 turns it into arcade cabinet inputs at 0x804F7B78 (stride 0x208): B = trigger (0x100, only
  with a valid pointer), A = Action (0x400), + = start.
- The pointer maps 1:1 (KPAD pos -1..1 across the picture): no gain needed.
- Reload: aim off the picture and shoot (G_RELOAD_OFFSCREEN, as in House of the Dead: Overkill).

## Status
- Boots through the strap and Zapper screens, ESRB / SEGA / AM2 / Polygon Magic, the title (PRESS THE + BUTTON),
  save creation (NAND save.dat, banner.bin), MODE SELECT, Arcade -> player entry, name entry, player data, the
  How To Shoot tutorial (+ = Shot Selector, A = Action button), MISSION SELECT, Mission 2 briefing and intro.
- The title movie (gs_wii_title_8mbps_29.97fps.sfd) is read but shows as a grey picture in the headless test runs.

## Testing
- `POINTER=x,y` takes 0..1 fractions of the picture (or a timeline `x,y;x,y@frame;...` with `AUTOPRESS_FRAMES=1`).
  `AUTOPRESS=PLUS@1400-1406,B@1520-1524` gets from the attract loop to Arcade's entry screen.
