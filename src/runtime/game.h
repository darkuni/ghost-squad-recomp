// Per-game constants for Ghost Squad (Wii disc, NTSC-U, RGSE8P, Sega / Polygon Magic, 2007).
// Function boundaries come from tools/funcfind.py (no dtk), SDK names from xmatch against Umbrella Chronicles,
// House of the Dead: Overkill, Martian Panic, Zack & Wiki and Lost in Shadow. r13 = 0x806DA580, r2 = 0x806DCEA0.
// RVL SDK: OS/DVD Apr 24 2007, AX Dec 18 2006, WPAD/KPAD May 17 2007 (the older KPADRead(chan, buf, len) entry).
#pragma once
#define GAME_NAME        "Ghost Squad"
#define GAME_EXE         "ghostsquad"
#define GAME_INI         "ghostsquad.ini"
#define GAME_SETUP_WHAT  "Ghost Squad disc image (.iso, .ciso or .wbfs)"

#define G_AX_RESUME_CB          0x801D5C2Cu   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x801B9BE0u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x80205148u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x801C19A8u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x6308u       // __OSGetInterruptHandler: lwz r4,-0x6308(r13)
#define G_SDA_IOS_HEAP          0x7A0Cu       // __ios_Ipc2: lwz r3,-0x7A0C(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_801C19A8
#define G_FN_IOS_FREE           f_80205148
#define G_KPAD_STATUS_SIZE      0x84u         // KPADStatus (KPADRead: mulli 0x84)
#define G_FN_OS_DISABLE_SCHEDULER f_801C11DC  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_801C1218
#define G_FN_OS_RESCHEDULE        f_801C1724  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_RELOAD_OFFSCREEN      1             // reload = aim off the picture: middle mouse / V / LB / LT (as in HOTD: Overkill)
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
