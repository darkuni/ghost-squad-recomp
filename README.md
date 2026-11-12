# Ghost Squad (Wii, NTSC-U) - native recompilation

A static recompilation of **Ghost Squad** for Wii (disc, NTSC-U, `RGSE8P`, Sega / Polygon Magic, 2007) to native
code. The game's PowerPC executable is translated to C++ and runs on Windows and Linux (SteamOS / Steam Deck) with a
small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

In progress: boots through the strap screens, logos, title, save creation, MODE SELECT, Arcade entry and name
entry, the How To Shoot tutorial, MISSION SELECT and into Mission 2 (Air Force One). Not released yet.

## Download

[Releases](https://github.com/darkuni/ghost-squad-recomp/releases) and the build artifacts of each
[Actions](https://github.com/darkuni/ghost-squad-recomp/actions) run: Windows zip and Linux tar.gz. Unpack, put your
disc image in the same folder and run `ghostsquad.exe` (Windows) or `./ghostsquad` (Linux / Steam Deck): the first
start builds the `game` folder from it. The package's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (Resident Evil: The Umbrella Chronicles, House of the Dead: Overkill, Martian
Panic, Zack & Wiki, TARGET: Terror, Lost in Shadow): the generated C++ is in `src/gen`; GitHub Actions cross-compiles
the Windows exe with mingw-w64 and SDL2 and builds the Linux one with `-DUSE_SDL=ON`. Regenerating needs the game's
`main.dol` from your disc (`tools/prepare_disc.py`). Function boundaries come from `tools/funcfind.py` instead of dtk;
SDK function names from matching against the other recomps. See [NOTES.md](NOTES.md).

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Sega, Polygon Magic or Nintendo.
*Ghost Squad* and all related names and marks belong to their respective owners. This repository and its builds
contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
