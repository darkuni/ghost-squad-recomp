#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// PPCMthid2
void f_801B8270(Ctx* __restrict c) {
  trace_call(0x801B8270u);
  mtspr(c,920,c->r[3]); // 801B8270
  return; // 801B8274
}

// PPCMtwpar
void f_801B8278(Ctx* __restrict c) {
  trace_call(0x801B8278u);
  mtspr(c,921,c->r[3]); // 801B8278
  return; // 801B827C
}

// PPCDisableSpeculation
void f_801B8280(Ctx* __restrict c) {
  trace_call(0x801B8280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8280
  c->r[0]=c->lr; // 801B8284
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8288
  c->lr=0x801B8290u; f_801B81AC(c); // 801B828C
  c->r[3]=c->r[3]|0x00000200u; // 801B8290
  c->lr=0x801B8298u; f_801B81B4(c); // 801B8294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8298
  c->lr=c->r[0]; // 801B829C
  c->r[1]=c->r[1]+0x00000010u; // 801B82A0
  return; // 801B82A4
}

// PPCSetFpNonIEEEMode
void f_801B82A8(Ctx* __restrict c) {
  trace_call(0x801B82A8u);
  c->fpscr|=0x00000004u; // 801B82A8
  return; // 801B82AC
}

// PPCMthid4
void f_801B82B0(Ctx* __restrict c) {
  trace_call(0x801B82B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B82B0
  c->r[0]=c->lr; // 801B82B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B82B8
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 801B82BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B82C0
  c->r[31]=c->r[3]|c->r[3]; // 801B82C4
  if (crb(c,2)) { goto L_801B82D4; } // 801B82C8
  mtspr(c,1011,c->r[3]); // 801B82CC
  goto L_801B82EC; // 801B82D0
L_801B82D4:;
  c->r[3]=0u+0x804A0000u; // 801B82D4
  c->r[3]=c->r[3]+0x00002518u; // 801B82D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B82DC
  c->lr=0x801B82E4u; f_801BB3FC(c); // 801B82E0
  c->r[31]=c->r[31]|0x80000000u; // 801B82E4
  mtspr(c,1011,c->r[31]); // 801B82E8
L_801B82EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B82EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B82F0
  c->lr=c->r[0]; // 801B82F4
  c->r[1]=c->r[1]+0x00000010u; // 801B82F8
  return; // 801B82FC
}

// DBInit
void f_801B8300(Ctx* __restrict c) {
  trace_call(0x801B8300u);
  c->r[4]=0u+0x80000000u; // 801B8300
  c->r[3]=0u+0x801C0000u; // 801B8304
  c->r[5]=c->r[4]+0x00000040u; // 801B8308
  c->r[0]=0u+0x00000001u; // 801B830C
  c->r[3]=c->r[3]+0xFFFF8370u; // 801B8310
  W32(c->r[13]+0xFFFF9C48u,c->r[5]); // 801B8314
  c->r[3]=c->r[3]+0x80000000u; // 801B8318
  W32(c->r[4]+0x00000048u,c->r[3]); // 801B831C
  W32(c->r[13]+0xFFFF9C4Cu,c->r[0]); // 801B8320
  return; // 801B8324
}

// __DBExceptionDestinationAux
void f_801B8328(Ctx* __restrict c) {
  trace_call(0x801B8328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8328
  c->r[0]=c->lr; // 801B832C
  c->r[3]=0u+0x804A0000u; // 801B8330
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8334
  c->r[3]=c->r[3]+0x00002550u; // 801B8338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B833C
  c->r[4]=R32(0u+0x000000C0u); // 801B8340
  c->r[31]=c->r[4]+0x80000000u; // 801B8344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8348
  c->lr=0x801B8350u; f_801BB3FC(c); // 801B834C
  c->r[3]=c->r[31]|c->r[31]; // 801B8350
  c->lr=0x801B8358u; f_801BB0D0(c); // 801B8354
  c->lr=0x801B835Cu; f_801B81DC(c); // 801B8358
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B835C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8360
  c->lr=c->r[0]; // 801B8364
  c->r[1]=c->r[1]+0x00000010u; // 801B8368
  return; // 801B836C
}

// __DBExceptionDestination
void f_801B8370(Ctx* __restrict c) {
  trace_call(0x801B8370u);
  c->r[3]=c->msr; // 801B8370
  c->r[3]=c->r[3]|0x00000030u; // 801B8374
  c->msr=c->r[3]; // 801B8378
  f_801B8328(c); return; // 801B837C
}

// __DBIsExceptionMarked
void f_801B8380(Ctx* __restrict c) {
  trace_call(0x801B8380u);
  c->r[4]=R32(c->r[13]+0xFFFF9C48u); // 801B8380
  c->r[0]=0u+0x00000001u; // 801B8384
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 801B8388
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B838C
  c->r[3]=c->r[3]&c->r[0]; // 801B8390
  return; // 801B8394
}

// DBPrintf
void f_801B8398(Ctx* __restrict c) {
  trace_call(0x801B8398u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8398
  if (!crb(c,6)) { goto L_801B83C0; } // 801B839C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801B83A0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801B83A4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801B83A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801B83AC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801B83B0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801B83B4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801B83B8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801B83BC
L_801B83C0:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B83C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B83C4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B83C8
  W32(c->r[1]+0x00000014u,c->r[6]); // 801B83CC
  W32(c->r[1]+0x00000018u,c->r[7]); // 801B83D0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801B83D4
  W32(c->r[1]+0x00000020u,c->r[9]); // 801B83D8
  W32(c->r[1]+0x00000024u,c->r[10]); // 801B83DC
  c->r[1]=c->r[1]+0x00000070u; // 801B83E0
  return; // 801B83E4
}

// __OSFPRInit
void f_801B83E8(Ctx* __restrict c) {
  trace_call(0x801B83E8u);
  c->r[3]=c->msr; // 801B83E8
  c->r[3]=c->r[3]|0x00002000u; // 801B83EC
  c->msr=c->r[3]; // 801B83F0
  c->r[3]=mfspr(c,920); // 801B83F4
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 801B83F8
  if (crb(c,2)) { goto L_801B8488; } // 801B83FC
  c->r[3]=0u+0x806D0000u; // 801B8400
  c->r[3]=c->r[3]+0x000041E8u; // 801B8404
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801B8408
  {double t0=c->f[0], t1=c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 801B840C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 801B8410
  {double t0=c->f[0], t1=c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 801B8414
  {double t0=c->f[0], t1=c->ps1[0]; c->f[4]=t0; c->ps1[4]=t1;} // 801B8418
  {double t0=c->f[0], t1=c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 801B841C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[6]=t0; c->ps1[6]=t1;} // 801B8420
  {double t0=c->f[0], t1=c->ps1[0]; c->f[7]=t0; c->ps1[7]=t1;} // 801B8424
  {double t0=c->f[0], t1=c->ps1[0]; c->f[8]=t0; c->ps1[8]=t1;} // 801B8428
  {double t0=c->f[0], t1=c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 801B842C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[10]=t0; c->ps1[10]=t1;} // 801B8430
  {double t0=c->f[0], t1=c->ps1[0]; c->f[11]=t0; c->ps1[11]=t1;} // 801B8434
  {double t0=c->f[0], t1=c->ps1[0]; c->f[12]=t0; c->ps1[12]=t1;} // 801B8438
  {double t0=c->f[0], t1=c->ps1[0]; c->f[13]=t0; c->ps1[13]=t1;} // 801B843C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[14]=t0; c->ps1[14]=t1;} // 801B8440
  {double t0=c->f[0], t1=c->ps1[0]; c->f[15]=t0; c->ps1[15]=t1;} // 801B8444
  {double t0=c->f[0], t1=c->ps1[0]; c->f[16]=t0; c->ps1[16]=t1;} // 801B8448
  {double t0=c->f[0], t1=c->ps1[0]; c->f[17]=t0; c->ps1[17]=t1;} // 801B844C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[18]=t0; c->ps1[18]=t1;} // 801B8450
  {double t0=c->f[0], t1=c->ps1[0]; c->f[19]=t0; c->ps1[19]=t1;} // 801B8454
  {double t0=c->f[0], t1=c->ps1[0]; c->f[20]=t0; c->ps1[20]=t1;} // 801B8458
  {double t0=c->f[0], t1=c->ps1[0]; c->f[21]=t0; c->ps1[21]=t1;} // 801B845C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[22]=t0; c->ps1[22]=t1;} // 801B8460
  {double t0=c->f[0], t1=c->ps1[0]; c->f[23]=t0; c->ps1[23]=t1;} // 801B8464
  {double t0=c->f[0], t1=c->ps1[0]; c->f[24]=t0; c->ps1[24]=t1;} // 801B8468
  {double t0=c->f[0], t1=c->ps1[0]; c->f[25]=t0; c->ps1[25]=t1;} // 801B846C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[26]=t0; c->ps1[26]=t1;} // 801B8470
  {double t0=c->f[0], t1=c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 801B8474
  {double t0=c->f[0], t1=c->ps1[0]; c->f[28]=t0; c->ps1[28]=t1;} // 801B8478
  {double t0=c->f[0], t1=c->ps1[0]; c->f[29]=t0; c->ps1[29]=t1;} // 801B847C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[30]=t0; c->ps1[30]=t1;} // 801B8480
  {double t0=c->f[0], t1=c->ps1[0]; c->f[31]=t0; c->ps1[31]=t1;} // 801B8484
L_801B8488:;
  {uint32_t ea=c->r[13]+0xFFFF9C70u; c->f[0]=RF64(ea);} // 801B8488
  c->f[1]=c->f[0]; // 801B848C
  c->f[2]=c->f[0]; // 801B8490
  c->f[3]=c->f[0]; // 801B8494
  c->f[4]=c->f[0]; // 801B8498
  c->f[5]=c->f[0]; // 801B849C
  c->f[6]=c->f[0]; // 801B84A0
  c->f[7]=c->f[0]; // 801B84A4
  c->f[8]=c->f[0]; // 801B84A8
  c->f[9]=c->f[0]; // 801B84AC
  c->f[10]=c->f[0]; // 801B84B0
  c->f[11]=c->f[0]; // 801B84B4
  c->f[12]=c->f[0]; // 801B84B8
  c->f[13]=c->f[0]; // 801B84BC
  c->f[14]=c->f[0]; // 801B84C0
  c->f[15]=c->f[0]; // 801B84C4
  c->f[16]=c->f[0]; // 801B84C8
  c->f[17]=c->f[0]; // 801B84CC
  c->f[18]=c->f[0]; // 801B84D0
  c->f[19]=c->f[0]; // 801B84D4
  c->f[20]=c->f[0]; // 801B84D8
  c->f[21]=c->f[0]; // 801B84DC
  c->f[22]=c->f[0]; // 801B84E0
  c->f[23]=c->f[0]; // 801B84E4
  c->f[24]=c->f[0]; // 801B84E8
  c->f[25]=c->f[0]; // 801B84EC
  c->f[26]=c->f[0]; // 801B84F0
  c->f[27]=c->f[0]; // 801B84F4
  c->f[28]=c->f[0]; // 801B84F8
  c->f[29]=c->f[0]; // 801B84FC
  c->f[30]=c->f[0]; // 801B8500
  c->f[31]=c->f[0]; // 801B8504
  c->fpscr=(uint32_t)d2u(c->f[0]); // 801B8508
  return; // 801B850C
}

// __OSGetIOSRev
void f_801B8510(Ctx* __restrict c) {
  trace_call(0x801B8510u);
  c->r[4]=0u+0xC0000000u; // 801B8510
  c->r[10]=R32(c->r[4]+0x00003144u); // 801B8514
  c->r[9]=R32(c->r[4]+0x00003140u); // 801B8518
  c->r[0]=rotl(c->r[10],28)&0x0000000Fu; // 801B851C
  c->r[6]=rotl(c->r[10],12)&0x0000000Fu; // 801B8520
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801B8524
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 801B8528
  c->r[0]=rotl(c->r[10],0)&0x0000000Fu; // 801B852C
  W8(c->r[3]+0x00000000u,c->r[7]); // 801B8530
  c->r[8]=rotl(c->r[9],16)&0x000000FFu; // 801B8534
  c->r[4]=c->r[0]+c->r[4]; // 801B8538
  c->r[0]=c->r[4]+0x000007D0u; // 801B853C
  c->r[5]=rotl(c->r[10],20)&0x0000000Fu; // 801B8540
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 801B8544
  W8(c->r[3]+0x00000001u,c->r[8]); // 801B8548
  c->r[5]=rotl(c->r[10],24)&0x0000000Fu; // 801B854C
  c->r[8]=rotl(c->r[9],24)&0x000000FFu; // 801B8550
  W8(c->r[3]+0x00000003u,c->r[9]); // 801B8554
  c->r[4]=c->r[5]+c->r[4]; // 801B8558
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 801B855C
  c->r[7]=rotl(c->r[10],16)&0x0000000Fu; // 801B8560
  W8(c->r[3]+0x00000002u,c->r[8]); // 801B8564
  c->r[6]=c->r[7]+c->r[6]; // 801B8568
  W8(c->r[3]+0x00000005u,c->r[4]); // 801B856C
  W8(c->r[3]+0x00000004u,c->r[6]); // 801B8570
  W16(c->r[3]+0x00000006u,c->r[0]); // 801B8574
  return; // 801B8578
}

// OSGetConsoleType
void f_801B857C(Ctx* __restrict c) {
  trace_call(0x801B857Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B857C
  c->r[0]=c->lr; // 801B8580
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8588
  c->r[3]=R32(c->r[13]+0xFFFF9C88u); // 801B858C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8590
  if (crb(c,2)) { goto L_801B85A4; } // 801B8594
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801B8598
  cmps(c,0,(int32_t)c->r[0],0); // 801B859C
  if (!crb(c,2)) { goto L_801B85B0; } // 801B85A0
L_801B85A4:;
  c->r[3]=0u+0x10000000u; // 801B85A4
  c->r[3]=c->r[3]+0x00000002u; // 801B85A8
  goto L_801B87D8; // 801B85AC
L_801B85B0:;
  c->r[3]=0u+0x80000000u; // 801B85B0
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801B85B4
  c->r[31]=R32(c->r[3]+0x00003138u); // 801B85B8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 801B85BC
  if (crb(c,2)) { goto L_801B86E8; } // 801B85C0
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801B85C4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801B85C8
  cmps(c,0,(int32_t)c->r[0],513); // 801B85CC
  if (!crb(c,0)) { goto L_801B85E8; } // 801B85D0
  cmps(c,0,(int32_t)c->r[0],4); // 801B85D4
  if (!crb(c,0)) { goto L_801B86E8; } // 801B85D8
  cmps(c,0,(int32_t)c->r[0],2); // 801B85DC
  if (!crb(c,0)) { goto L_801B85F8; } // 801B85E0
  goto L_801B86E8; // 801B85E4
L_801B85E8:;
  cmps(c,0,(int32_t)c->r[0],515); // 801B85E8
  if (crb(c,2)) { goto L_801B85F8; } // 801B85EC
  if (!crb(c,0)) { goto L_801B86E8; } // 801B85F0
  goto L_801B8664; // 801B85F4
L_801B85F8:;
  cmps(c,0,(int32_t)c->r[31],2); // 801B85F8
  if (crb(c,2)) { goto L_801B863C; } // 801B85FC
  if (!crb(c,0)) { goto L_801B8614; } // 801B8600
  cmps(c,0,(int32_t)c->r[31],0); // 801B8604
  if (crb(c,2)) { goto L_801B862C; } // 801B8608
  if (!crb(c,0)) { goto L_801B8634; } // 801B860C
  goto L_801B8654; // 801B8610
L_801B8614:;
  cmps(c,0,(int32_t)c->r[31],17); // 801B8614
  if (crb(c,2)) { goto L_801B864C; } // 801B8618
  if (!crb(c,0)) { goto L_801B8654; } // 801B861C
  cmps(c,0,(int32_t)c->r[31],16); // 801B8620
  if (!crb(c,0)) { goto L_801B8644; } // 801B8624
  goto L_801B8654; // 801B8628
L_801B862C:;
  c->r[3]=0u+0x00000010u; // 801B862C
  goto L_801B87D8; // 801B8630
L_801B8634:;
  c->r[3]=0u+0x00000011u; // 801B8634
  goto L_801B87D8; // 801B8638
L_801B863C:;
  c->r[3]=0u+0x00000012u; // 801B863C
  goto L_801B87D8; // 801B8640
L_801B8644:;
  c->r[3]=0u+0x00000020u; // 801B8644
  goto L_801B87D8; // 801B8648
L_801B864C:;
  c->r[3]=0u+0x00000021u; // 801B864C
  goto L_801B87D8; // 801B8650
L_801B8654:;
  cmpu(c,0,c->r[31],0x00000011u); // 801B8654
  if (!crb(c,1)) { goto L_801B8664; } // 801B8658
  c->r[3]=0u+0x00000021u; // 801B865C
  goto L_801B87D8; // 801B8660
L_801B8664:;
  cmps(c,0,(int32_t)c->r[31],2); // 801B8664
  if (crb(c,2)) { goto L_801B86B0; } // 801B8668
  if (!crb(c,0)) { goto L_801B8680; } // 801B866C
  cmps(c,0,(int32_t)c->r[31],0); // 801B8670
  if (crb(c,2)) { goto L_801B8698; } // 801B8674
  if (!crb(c,0)) { goto L_801B86A4; } // 801B8678
  goto L_801B86D4; // 801B867C
L_801B8680:;
  cmps(c,0,(int32_t)c->r[31],17); // 801B8680
  if (crb(c,2)) { goto L_801B86C8; } // 801B8684
  if (!crb(c,0)) { goto L_801B86D4; } // 801B8688
  cmps(c,0,(int32_t)c->r[31],16); // 801B868C
  if (!crb(c,0)) { goto L_801B86BC; } // 801B8690
  goto L_801B86D4; // 801B8694
L_801B8698:;
  c->r[3]=0u+0x10000000u; // 801B8698
  c->r[3]=c->r[3]+0x00000010u; // 801B869C
  goto L_801B87D8; // 801B86A0
L_801B86A4:;
  c->r[3]=0u+0x10000000u; // 801B86A4
  c->r[3]=c->r[3]+0x00000011u; // 801B86A8
  goto L_801B87D8; // 801B86AC
L_801B86B0:;
  c->r[3]=0u+0x10000000u; // 801B86B0
  c->r[3]=c->r[3]+0x00000012u; // 801B86B4
  goto L_801B87D8; // 801B86B8
L_801B86BC:;
  c->r[3]=0u+0x10000000u; // 801B86BC
  c->r[3]=c->r[3]+0x00000020u; // 801B86C0
  goto L_801B87D8; // 801B86C4
L_801B86C8:;
  c->r[3]=0u+0x10000000u; // 801B86C8
  c->r[3]=c->r[3]+0x00000021u; // 801B86CC
  goto L_801B87D8; // 801B86D0
L_801B86D4:;
  cmpu(c,0,c->r[31],0x00000011u); // 801B86D4
  if (!crb(c,1)) { goto L_801B86E8; } // 801B86D8
  c->r[3]=0u+0x10000000u; // 801B86DC
  c->r[3]=c->r[3]+0x00000021u; // 801B86E0
  goto L_801B87D8; // 801B86E4
L_801B86E8:;
  c->lr=0x801B86ECu; f_801BF0F8(c); // 801B86E8
  cmps(c,0,(int32_t)c->r[31],2); // 801B86EC
  if (crb(c,2)) { goto L_801B8758; } // 801B86F0
  if (!crb(c,0)) { goto L_801B8708; } // 801B86F4
  cmps(c,0,(int32_t)c->r[31],0); // 801B86F8
  if (crb(c,2)) { goto L_801B8720; } // 801B86FC
  if (!crb(c,0)) { goto L_801B873C; } // 801B8700
  goto L_801B87AC; // 801B8704
L_801B8708:;
  cmps(c,0,(int32_t)c->r[31],17); // 801B8708
  if (crb(c,2)) { goto L_801B8790; } // 801B870C
  if (!crb(c,0)) { goto L_801B87AC; } // 801B8710
  cmps(c,0,(int32_t)c->r[31],16); // 801B8714
  if (!crb(c,0)) { goto L_801B8774; } // 801B8718
  goto L_801B87AC; // 801B871C
L_801B8720:;
  c->r[0]=c->r[3]+0xFC000000u; // 801B8720
  c->r[3]=0u+0x10000000u; // 801B8724
  cmpu(c,0,c->r[0],0x00000000u); // 801B8728
  c->r[3]=c->r[3]+0x00000010u; // 801B872C
  if (!crb(c,2)) { goto L_801B87D8; } // 801B8730
  c->r[3]=0u+0x00000010u; // 801B8734
  goto L_801B87D8; // 801B8738
L_801B873C:;
  c->r[0]=c->r[3]+0xFC000000u; // 801B873C
  c->r[3]=0u+0x10000000u; // 801B8740
  cmpu(c,0,c->r[0],0x00000000u); // 801B8744
  c->r[3]=c->r[3]+0x00000011u; // 801B8748
  if (!crb(c,2)) { goto L_801B87D8; } // 801B874C
  c->r[3]=0u+0x00000011u; // 801B8750
  goto L_801B87D8; // 801B8754
L_801B8758:;
  c->r[0]=c->r[3]+0xFC000000u; // 801B8758
  c->r[3]=0u+0x10000000u; // 801B875C
  cmpu(c,0,c->r[0],0x00000000u); // 801B8760
  c->r[3]=c->r[3]+0x00000012u; // 801B8764
  if (!crb(c,2)) { goto L_801B87D8; } // 801B8768
  c->r[3]=0u+0x00000012u; // 801B876C
  goto L_801B87D8; // 801B8770
L_801B8774:;
  c->r[0]=c->r[3]+0xFC000000u; // 801B8774
  c->r[3]=0u+0x10000000u; // 801B8778
  cmpu(c,0,c->r[0],0x00000000u); // 801B877C
  c->r[3]=c->r[3]+0x00000020u; // 801B8780
  if (!crb(c,2)) { goto L_801B87D8; } // 801B8784
  c->r[3]=0u+0x00000020u; // 801B8788
  goto L_801B87D8; // 801B878C
L_801B8790:;
  c->r[0]=c->r[3]+0xFC000000u; // 801B8790
  c->r[3]=0u+0x10000000u; // 801B8794
  cmpu(c,0,c->r[0],0x00000000u); // 801B8798
  c->r[3]=c->r[3]+0x00000021u; // 801B879C
  if (!crb(c,2)) { goto L_801B87D8; } // 801B87A0
  c->r[3]=0u+0x00000021u; // 801B87A4
  goto L_801B87D8; // 801B87A8
L_801B87AC:;
  cmpu(c,0,c->r[31],0x00000011u); // 801B87AC
  if (!crb(c,1)) { goto L_801B87D0; } // 801B87B0
  c->r[0]=c->r[3]+0xFC000000u; // 801B87B4
  c->r[3]=0u+0x10000000u; // 801B87B8
  cmpu(c,0,c->r[0],0x00000000u); // 801B87BC
  c->r[3]=c->r[3]+0x00000021u; // 801B87C0
  if (!crb(c,2)) { goto L_801B87D8; } // 801B87C4
  c->r[3]=0u+0x00000021u; // 801B87C8
  goto L_801B87D8; // 801B87CC
L_801B87D0:;
  c->r[3]=R32(c->r[13]+0xFFFF9C88u); // 801B87D0
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 801B87D4
L_801B87D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B87D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B87DC
  c->lr=c->r[0]; // 801B87E0
  c->r[1]=c->r[1]+0x00000010u; // 801B87E4
  return; // 801B87E8
}

// ClearArena
void f_801B87EC(Ctx* __restrict c) {
  trace_call(0x801B87ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B87EC
  c->r[0]=c->lr; // 801B87F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B87F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B87F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B87FC
  c->lr=0x801B8804u; f_801C03B4(c); // 801B8800
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 801B8804
  if (!crb(c,2)) { goto L_801B8854; } // 801B8808
  c->lr=0x801B8810u; f_801BA218(c); // 801B880C
  c->r[31]=c->r[3]|c->r[3]; // 801B8810
  c->lr=0x801B8818u; f_801BA230(c); // 801B8814
  c->r[31]=c->r[31]-c->r[3]; // 801B8818
  c->lr=0x801B8820u; f_801BA230(c); // 801B881C
  c->r[0]=0u+0x00040000u; // 801B8820
  cmpu(c,0,c->r[31],c->r[0]); // 801B8824
  if (!crb(c,1)) { goto L_801B8838; } // 801B8828
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B882C
  c->r[30]=c->r[3]+c->r[30]; // 801B8830
  goto L_801B883C; // 801B8834
L_801B8838:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8838
L_801B883C:;
  c->r[4]=c->r[31]|c->r[31]; // 801B883C
  c->lr=0x801B8844u; f_801BA848(c); // 801B8840
  c->r[3]=c->r[30]|c->r[30]; // 801B8844
  c->r[4]=0u+0x00040000u; // 801B8848
  c->lr=0x801B8850u; f_801BA790(c); // 801B884C
  goto L_801B89B0; // 801B8850
L_801B8854:;
  c->r[31]=0u+0x80560000u; // 801B8854
  c->r[31]=c->r[31]+0xFFFF8BE0u; // 801B8858
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B885C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8860
  if (crb(c,2)) { goto L_801B8870; } // 801B8864
  c->r[0]=rotl(c->r[0],0)&0x30000000u; cr0(c,c->r[0]); // 801B8868
  if (crb(c,2)) { goto L_801B88B8; } // 801B886C
L_801B8870:;
  c->lr=0x801B8874u; f_801BA218(c); // 801B8870
  c->r[31]=c->r[3]|c->r[3]; // 801B8874
  c->lr=0x801B887Cu; f_801BA230(c); // 801B8878
  c->r[31]=c->r[31]-c->r[3]; // 801B887C
  c->lr=0x801B8884u; f_801BA230(c); // 801B8880
  c->r[0]=0u+0x00040000u; // 801B8884
  cmpu(c,0,c->r[31],c->r[0]); // 801B8888
  if (!crb(c,1)) { goto L_801B889C; } // 801B888C
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B8890
  c->r[30]=c->r[3]+c->r[30]; // 801B8894
  goto L_801B88A0; // 801B8898
L_801B889C:;
  c->r[30]=c->r[3]|c->r[3]; // 801B889C
L_801B88A0:;
  c->r[4]=c->r[31]|c->r[31]; // 801B88A0
  c->lr=0x801B88A8u; f_801BA848(c); // 801B88A4
  c->r[3]=c->r[30]|c->r[30]; // 801B88A8
  c->r[4]=0u+0x00040000u; // 801B88AC
  c->lr=0x801B88B4u; f_801BA790(c); // 801B88B0
  goto L_801B89B0; // 801B88B4
L_801B88B8:;
  c->lr=0x801B88BCu; f_801BA230(c); // 801B88B8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B88BC
  cmpu(c,0,c->r[3],c->r[0]); // 801B88C0
  if (!crb(c,0)) { goto L_801B89B0; } // 801B88C4
  c->lr=0x801B88CCu; f_801BA218(c); // 801B88C8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B88CC
  cmpu(c,0,c->r[3],c->r[0]); // 801B88D0
  if (crb(c,1)) { goto L_801B8920; } // 801B88D4
  c->lr=0x801B88DCu; f_801BA218(c); // 801B88D8
  c->r[31]=c->r[3]|c->r[3]; // 801B88DC
  c->lr=0x801B88E4u; f_801BA230(c); // 801B88E0
  c->r[31]=c->r[31]-c->r[3]; // 801B88E4
  c->lr=0x801B88ECu; f_801BA230(c); // 801B88E8
  c->r[0]=0u+0x00040000u; // 801B88EC
  cmpu(c,0,c->r[31],c->r[0]); // 801B88F0
  if (!crb(c,1)) { goto L_801B8904; } // 801B88F4
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B88F8
  c->r[30]=c->r[3]+c->r[30]; // 801B88FC
  goto L_801B8908; // 801B8900
L_801B8904:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8904
L_801B8908:;
  c->r[4]=c->r[31]|c->r[31]; // 801B8908
  c->lr=0x801B8910u; f_801BA848(c); // 801B890C
  c->r[3]=c->r[30]|c->r[30]; // 801B8910
  c->r[4]=0u+0x00040000u; // 801B8914
  c->lr=0x801B891Cu; f_801BA790(c); // 801B8918
  goto L_801B89B0; // 801B891C
L_801B8920:;
  c->lr=0x801B8924u; f_801BA230(c); // 801B8920
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B8924
  c->r[31]=c->r[0]-c->r[3]; // 801B8928
  c->lr=0x801B8930u; f_801BA230(c); // 801B892C
  c->r[0]=0u+0x00040000u; // 801B8930
  cmpu(c,0,c->r[31],c->r[0]); // 801B8934
  if (!crb(c,1)) { goto L_801B8948; } // 801B8938
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B893C
  c->r[30]=c->r[3]+c->r[30]; // 801B8940
  goto L_801B894C; // 801B8944
L_801B8948:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8948
L_801B894C:;
  c->r[4]=c->r[31]|c->r[31]; // 801B894C
  c->lr=0x801B8954u; f_801BA848(c); // 801B8950
  c->r[3]=c->r[30]|c->r[30]; // 801B8954
  c->r[4]=0u+0x00040000u; // 801B8958
  c->lr=0x801B8960u; f_801BA790(c); // 801B895C
  c->r[3]=0u+0x80560000u; // 801B8960
  c->r[3]=c->r[3]+0xFFFF8BE0u; // 801B8964
  c->r[31]=R32(c->r[3]+0x00000010u); // 801B8968
  c->lr=0x801B8970u; f_801BA218(c); // 801B896C
  cmpu(c,0,c->r[3],c->r[31]); // 801B8970
  if (!crb(c,1)) { goto L_801B89B0; } // 801B8974
  c->lr=0x801B897Cu; f_801BA218(c); // 801B8978
  c->r[4]=c->r[3]-c->r[31]; // 801B897C
  c->r[0]=0u+0x00040000u; // 801B8980
  cmpu(c,0,c->r[4],c->r[0]); // 801B8984
  if (!crb(c,1)) { goto L_801B8998; } // 801B8988
  c->r[30]=c->r[4]+0xFFFC0000u; // 801B898C
  c->r[30]=c->r[31]+c->r[30]; // 801B8990
  goto L_801B899C; // 801B8994
L_801B8998:;
  c->r[30]=c->r[31]|c->r[31]; // 801B8998
L_801B899C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B899C
  c->lr=0x801B89A4u; f_801BA848(c); // 801B89A0
  c->r[3]=c->r[30]|c->r[30]; // 801B89A4
  c->r[4]=0u+0x00040000u; // 801B89A8
  c->lr=0x801B89B0u; f_801BA790(c); // 801B89AC
L_801B89B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B89B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B89B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B89B8
  c->lr=c->r[0]; // 801B89BC
  c->r[1]=c->r[1]+0x00000010u; // 801B89C0
  return; // 801B89C4
}

// ClearMEM2Arena
void f_801B89C8(Ctx* __restrict c) {
  trace_call(0x801B89C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B89C8
  c->r[0]=c->lr; // 801B89CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B89D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B89D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B89D8
  c->lr=0x801B89E0u; f_801C03B4(c); // 801B89DC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 801B89E0
  if (!crb(c,2)) { goto L_801B8A30; } // 801B89E4
  c->lr=0x801B89ECu; f_801BA210(c); // 801B89E8
  c->r[31]=c->r[3]|c->r[3]; // 801B89EC
  c->lr=0x801B89F4u; f_801BA228(c); // 801B89F0
  c->r[31]=c->r[31]-c->r[3]; // 801B89F4
  c->lr=0x801B89FCu; f_801BA228(c); // 801B89F8
  c->r[0]=0u+0x00040000u; // 801B89FC
  cmpu(c,0,c->r[31],c->r[0]); // 801B8A00
  if (!crb(c,1)) { goto L_801B8A14; } // 801B8A04
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B8A08
  c->r[30]=c->r[3]+c->r[30]; // 801B8A0C
  goto L_801B8A18; // 801B8A10
L_801B8A14:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8A14
L_801B8A18:;
  c->r[4]=c->r[31]|c->r[31]; // 801B8A18
  c->lr=0x801B8A20u; f_801BA848(c); // 801B8A1C
  c->r[3]=c->r[30]|c->r[30]; // 801B8A20
  c->r[4]=0u+0x00040000u; // 801B8A24
  c->lr=0x801B8A2Cu; f_801BA790(c); // 801B8A28
  goto L_801B8B94; // 801B8A2C
L_801B8A30:;
  c->r[31]=0u+0x80560000u; // 801B8A30
  c->r[31]=c->r[31]+0xFFFF8BE0u; // 801B8A34
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B8A38
  cmps(c,0,(int32_t)c->r[0],0); // 801B8A3C
  if (crb(c,2)) { goto L_801B8A54; } // 801B8A40
  c->r[3]=rotl(c->r[0],0)&0x30000000u; // 801B8A44
  c->r[0]=c->r[3]+0xF0000000u; // 801B8A48
  cmpu(c,0,c->r[0],0x00000000u); // 801B8A4C
  if (crb(c,2)) { goto L_801B8A9C; } // 801B8A50
L_801B8A54:;
  c->lr=0x801B8A58u; f_801BA210(c); // 801B8A54
  c->r[31]=c->r[3]|c->r[3]; // 801B8A58
  c->lr=0x801B8A60u; f_801BA228(c); // 801B8A5C
  c->r[31]=c->r[31]-c->r[3]; // 801B8A60
  c->lr=0x801B8A68u; f_801BA228(c); // 801B8A64
  c->r[0]=0u+0x00040000u; // 801B8A68
  cmpu(c,0,c->r[31],c->r[0]); // 801B8A6C
  if (!crb(c,1)) { goto L_801B8A80; } // 801B8A70
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B8A74
  c->r[30]=c->r[3]+c->r[30]; // 801B8A78
  goto L_801B8A84; // 801B8A7C
L_801B8A80:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8A80
L_801B8A84:;
  c->r[4]=c->r[31]|c->r[31]; // 801B8A84
  c->lr=0x801B8A8Cu; f_801BA848(c); // 801B8A88
  c->r[3]=c->r[30]|c->r[30]; // 801B8A8C
  c->r[4]=0u+0x00040000u; // 801B8A90
  c->lr=0x801B8A98u; f_801BA790(c); // 801B8A94
  goto L_801B8B94; // 801B8A98
L_801B8A9C:;
  c->lr=0x801B8AA0u; f_801BA228(c); // 801B8A9C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B8AA0
  cmpu(c,0,c->r[3],c->r[0]); // 801B8AA4
  if (!crb(c,0)) { goto L_801B8B94; } // 801B8AA8
  c->lr=0x801B8AB0u; f_801BA210(c); // 801B8AAC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B8AB0
  cmpu(c,0,c->r[3],c->r[0]); // 801B8AB4
  if (crb(c,1)) { goto L_801B8B04; } // 801B8AB8
  c->lr=0x801B8AC0u; f_801BA210(c); // 801B8ABC
  c->r[31]=c->r[3]|c->r[3]; // 801B8AC0
  c->lr=0x801B8AC8u; f_801BA228(c); // 801B8AC4
  c->r[31]=c->r[31]-c->r[3]; // 801B8AC8
  c->lr=0x801B8AD0u; f_801BA228(c); // 801B8ACC
  c->r[0]=0u+0x00040000u; // 801B8AD0
  cmpu(c,0,c->r[31],c->r[0]); // 801B8AD4
  if (!crb(c,1)) { goto L_801B8AE8; } // 801B8AD8
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B8ADC
  c->r[30]=c->r[3]+c->r[30]; // 801B8AE0
  goto L_801B8AEC; // 801B8AE4
L_801B8AE8:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8AE8
L_801B8AEC:;
  c->r[4]=c->r[31]|c->r[31]; // 801B8AEC
  c->lr=0x801B8AF4u; f_801BA848(c); // 801B8AF0
  c->r[3]=c->r[30]|c->r[30]; // 801B8AF4
  c->r[4]=0u+0x00040000u; // 801B8AF8
  c->lr=0x801B8B00u; f_801BA790(c); // 801B8AFC
  goto L_801B8B94; // 801B8B00
L_801B8B04:;
  c->lr=0x801B8B08u; f_801BA228(c); // 801B8B04
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B8B08
  c->r[31]=c->r[0]-c->r[3]; // 801B8B0C
  c->lr=0x801B8B14u; f_801BA228(c); // 801B8B10
  c->r[0]=0u+0x00040000u; // 801B8B14
  cmpu(c,0,c->r[31],c->r[0]); // 801B8B18
  if (!crb(c,1)) { goto L_801B8B2C; } // 801B8B1C
  c->r[30]=c->r[31]+0xFFFC0000u; // 801B8B20
  c->r[30]=c->r[3]+c->r[30]; // 801B8B24
  goto L_801B8B30; // 801B8B28
L_801B8B2C:;
  c->r[30]=c->r[3]|c->r[3]; // 801B8B2C
L_801B8B30:;
  c->r[4]=c->r[31]|c->r[31]; // 801B8B30
  c->lr=0x801B8B38u; f_801BA848(c); // 801B8B34
  c->r[3]=c->r[30]|c->r[30]; // 801B8B38
  c->r[4]=0u+0x00040000u; // 801B8B3C
  c->lr=0x801B8B44u; f_801BA790(c); // 801B8B40
  c->r[3]=0u+0x80560000u; // 801B8B44
  c->r[3]=c->r[3]+0xFFFF8BE0u; // 801B8B48
  c->r[31]=R32(c->r[3]+0x00000010u); // 801B8B4C
  c->lr=0x801B8B54u; f_801BA210(c); // 801B8B50
  cmpu(c,0,c->r[3],c->r[31]); // 801B8B54
  if (!crb(c,1)) { goto L_801B8B94; } // 801B8B58
  c->lr=0x801B8B60u; f_801BA210(c); // 801B8B5C
  c->r[4]=c->r[3]-c->r[31]; // 801B8B60
  c->r[0]=0u+0x00040000u; // 801B8B64
  cmpu(c,0,c->r[4],c->r[0]); // 801B8B68
  if (!crb(c,1)) { goto L_801B8B7C; } // 801B8B6C
  c->r[30]=c->r[4]+0xFFFC0000u; // 801B8B70
  c->r[30]=c->r[31]+c->r[30]; // 801B8B74
  goto L_801B8B80; // 801B8B78
L_801B8B7C:;
  c->r[30]=c->r[31]|c->r[31]; // 801B8B7C
L_801B8B80:;
  c->r[3]=c->r[31]|c->r[31]; // 801B8B80
  c->lr=0x801B8B88u; f_801BA848(c); // 801B8B84
  c->r[3]=c->r[30]|c->r[30]; // 801B8B88
  c->r[4]=0u+0x00040000u; // 801B8B8C
  c->lr=0x801B8B94u; f_801BA790(c); // 801B8B90
L_801B8B94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8B94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8B98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B8B9C
  c->lr=c->r[0]; // 801B8BA0
  c->r[1]=c->r[1]+0x00000010u; // 801B8BA4
  return; // 801B8BA8
}

// InquiryCallback
void f_801B8BAC(Ctx* __restrict c) {
  trace_call(0x801B8BACu);
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B8BAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B8BB0
  if (crb(c,2)) { goto L_801B8BBC; } // 801B8BB4
  goto L_801B8BD8; // 801B8BB8
L_801B8BBC:;
  c->r[4]=0u+0x80560000u; // 801B8BBC
  c->r[3]=0u+0x80000000u; // 801B8BC0
  c->r[4]=c->r[4]+0xFFFF8C00u; // 801B8BC4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B8BC8
  c->r[0]=c->r[0]|0x00008000u; // 801B8BCC
  W16(c->r[3]+0x000030E6u,c->r[0]); // 801B8BD0
  return; // 801B8BD4
L_801B8BD8:;
  c->r[0]=0u+0x00000001u; // 801B8BD8
  c->r[3]=0u+0x80000000u; // 801B8BDC
  W16(c->r[3]+0x000030E6u,c->r[0]); // 801B8BE0
  return; // 801B8BE4
}

// ReportOSInfo
void f_801B8BE8(Ctx* __restrict c) {
  trace_call(0x801B8BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8BE8
  c->r[0]=c->lr; // 801B8BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8BF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8BF4
  c->r[31]=0u+0x804A0000u; // 801B8BF8
  c->r[31]=c->r[31]+0x00002568u; // 801B8BFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B8C00
  c->r[3]=c->r[31]+0x00000048u; // 801B8C04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8C08
  c->lr=0x801B8C10u; f_801BB3FC(c); // 801B8C0C
  c->r[3]=c->r[31]+0x00000058u; // 801B8C10
  c->r[4]=c->r[31]+0x00000070u; // 801B8C14
  c->r[5]=c->r[31]+0x0000007Cu; // 801B8C18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8C1C
  c->lr=0x801B8C24u; f_801BB3FC(c); // 801B8C20
  c->r[3]=c->r[31]+0x00000088u; // 801B8C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8C28
  c->lr=0x801B8C30u; f_801BB3FC(c); // 801B8C2C
  c->lr=0x801B8C34u; f_801B857C(c); // 801B8C30
  c->r[4]=rotl(c->r[3],0)&0xF0000000u; // 801B8C34
  c->r[0]=0u+0x10000000u; // 801B8C38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B8C3C
  if (crb(c,2)) { goto L_801B8CCC; } // 801B8C40
  if (!crb(c,0)) { goto L_801B8C54; } // 801B8C44
  cmps(c,0,(int32_t)c->r[4],0); // 801B8C48
  if (crb(c,2)) { goto L_801B8C64; } // 801B8C4C
  goto L_801B8D80; // 801B8C50
L_801B8C54:;
  c->r[0]=0u+0x20000000u; // 801B8C54
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B8C58
  if (crb(c,2)) { goto L_801B8D68; } // 801B8C5C
  goto L_801B8D80; // 801B8C60
L_801B8C64:;
  cmps(c,0,(int32_t)c->r[3],18); // 801B8C64
  if (crb(c,2)) { goto L_801B8C98; } // 801B8C68
  if (!crb(c,0)) { goto L_801B8C7C; } // 801B8C6C
  cmps(c,0,(int32_t)c->r[3],17); // 801B8C70
  if (!crb(c,0)) { goto L_801B8C88; } // 801B8C74
  goto L_801B8CB8; // 801B8C78
L_801B8C7C:;
  cmps(c,0,(int32_t)c->r[3],32); // 801B8C7C
  if (crb(c,2)) { goto L_801B8CA8; } // 801B8C80
  goto L_801B8CB8; // 801B8C84
L_801B8C88:;
  c->r[3]=c->r[31]+0x00000098u; // 801B8C88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8C8C
  c->lr=0x801B8C94u; f_801BB3FC(c); // 801B8C90
  goto L_801B8D90; // 801B8C94
L_801B8C98:;
  c->r[3]=c->r[31]+0x000000B0u; // 801B8C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8C9C
  c->lr=0x801B8CA4u; f_801BB3FC(c); // 801B8CA0
  goto L_801B8D90; // 801B8CA4
L_801B8CA8:;
  c->r[3]=c->r[31]+0x000000CCu; // 801B8CA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8CAC
  c->lr=0x801B8CB4u; f_801BB3FC(c); // 801B8CB0
  goto L_801B8D90; // 801B8CB4
L_801B8CB8:;
  c->r[4]=c->r[3]|c->r[3]; // 801B8CB8
  c->r[3]=c->r[31]+0x000000E8u; // 801B8CBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8CC0
  c->lr=0x801B8CC8u; f_801BB3FC(c); // 801B8CC4
  goto L_801B8D90; // 801B8CC8
L_801B8CCC:;
  c->r[5]=c->r[3]+0xF0000000u; // 801B8CCC
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801B8CD0
  cmpu(c,0,c->r[5],0x00000019u); // 801B8CD4
  if (crb(c,1)) { goto L_801B8D54; } // 801B8CD8
  c->r[4]=0u+0x804A0000u; // 801B8CDC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B8CE0
  c->r[4]=c->r[4]+0x00002758u; // 801B8CE4
  c->r[4]=R32(c->r[4]+c->r[5]); // 801B8CE8
  c->ctr=c->r[4]; // 801B8CEC
  if (true) { switch (c->ctr) { case 0x801B8CF4u: goto L_801B8CF4; case 0x801B8D04u: goto L_801B8D04; case 0x801B8D14u: goto L_801B8D14; case 0x801B8D24u: goto L_801B8D24; case 0x801B8D34u: goto L_801B8D34; case 0x801B8D44u: goto L_801B8D44; case 0x801B8D54u: goto L_801B8D54; default: break; } dispatch(c,c->ctr); return; } // 801B8CF0
L_801B8CF4:;
  c->r[3]=c->r[31]+0x000000F4u; // 801B8CF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8CF8
  c->lr=0x801B8D00u; f_801BB3FC(c); // 801B8CFC
  goto L_801B8D90; // 801B8D00
L_801B8D04:;
  c->r[3]=c->r[31]+0x00000100u; // 801B8D04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D08
  c->lr=0x801B8D10u; f_801BB3FC(c); // 801B8D0C
  goto L_801B8D90; // 801B8D10
L_801B8D14:;
  c->r[3]=c->r[31]+0x0000010Cu; // 801B8D14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D18
  c->lr=0x801B8D20u; f_801BB3FC(c); // 801B8D1C
  goto L_801B8D90; // 801B8D20
L_801B8D24:;
  c->r[3]=c->r[31]+0x00000118u; // 801B8D24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D28
  c->lr=0x801B8D30u; f_801BB3FC(c); // 801B8D2C
  goto L_801B8D90; // 801B8D30
L_801B8D34:;
  c->r[3]=c->r[31]+0x00000124u; // 801B8D34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D38
  c->lr=0x801B8D40u; f_801BB3FC(c); // 801B8D3C
  goto L_801B8D90; // 801B8D40
L_801B8D44:;
  c->r[3]=c->r[31]+0x00000130u; // 801B8D44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D48
  c->lr=0x801B8D50u; f_801BB3FC(c); // 801B8D4C
  goto L_801B8D90; // 801B8D50
L_801B8D54:;
  c->r[4]=c->r[3]|c->r[3]; // 801B8D54
  c->r[3]=c->r[31]+0x00000148u; // 801B8D58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D5C
  c->lr=0x801B8D64u; f_801BB3FC(c); // 801B8D60
  goto L_801B8D90; // 801B8D64
L_801B8D68:;
  c->r[4]=rotl(c->r[3],0)&0x0FFFFFFFu; // 801B8D68
  c->r[3]=c->r[31]+0x00000164u; // 801B8D6C
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 801B8D70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D74
  c->lr=0x801B8D7Cu; f_801BB3FC(c); // 801B8D78
  goto L_801B8D90; // 801B8D7C
L_801B8D80:;
  c->r[4]=c->r[3]|c->r[3]; // 801B8D80
  c->r[3]=c->r[13]+0xFFFF83DCu; // 801B8D84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8D88
  c->lr=0x801B8D90u; f_801BB3FC(c); // 801B8D8C
L_801B8D90:;
  c->r[4]=0u+0xC0000000u; // 801B8D90
  c->r[3]=c->r[31]+0x00000180u; // 801B8D94
  c->r[0]=R32(c->r[4]+0x00003140u); // 801B8D98
  c->r[30]=R32(c->r[4]+0x00003144u); // 801B8D9C
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 801B8DA0
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 801B8DA4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 801B8DA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8DAC
  c->lr=0x801B8DB4u; f_801BB3FC(c); // 801B8DB0
  c->r[3]=rotl(c->r[30],28)&0x0000000Fu; // 801B8DB4
  c->r[6]=rotl(c->r[30],12)&0x0000000Fu; // 801B8DB8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801B8DBC
  c->r[5]=rotl(c->r[30],20)&0x0000000Fu; // 801B8DC0
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; // 801B8DC4
  c->r[8]=rotl(c->r[30],16)&0x0000000Fu; // 801B8DC8
  c->r[4]=c->r[0]+c->r[4]; // 801B8DCC
  c->r[7]=rotl(c->r[30],24)&0x0000000Fu; // 801B8DD0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 801B8DD4
  c->r[3]=c->r[31]+0x0000019Cu; // 801B8DD8
  c->r[0]=c->r[4]+0x000007D0u; // 801B8DDC
  c->r[4]=c->r[8]+c->r[6]; // 801B8DE0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 801B8DE4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B8DE8
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801B8DEC
  c->r[0]=c->r[7]+c->r[5]; // 801B8DF0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801B8DF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8DF8
  c->lr=0x801B8E00u; f_801BB3FC(c); // 801B8DFC
  c->lr=0x801B8E04u; f_801BF110(c); // 801B8E00
  c->r[30]=c->r[3]|c->r[3]; // 801B8E04
  c->lr=0x801B8E0Cu; f_801BF104(c); // 801B8E08
  c->r[0]=c->r[3]+c->r[30]; // 801B8E0C
  c->r[3]=c->r[31]+0x000001A8u; // 801B8E10
  c->r[4]=rotl(c->r[0],12)&0x00000FFFu; // 801B8E14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8E18
  c->lr=0x801B8E20u; f_801BB3FC(c); // 801B8E1C
  c->lr=0x801B8E24u; f_801BA208(c); // 801B8E20
  c->r[30]=c->r[3]|c->r[3]; // 801B8E24
  c->lr=0x801B8E2Cu; f_801BA220(c); // 801B8E28
  c->r[4]=c->r[3]|c->r[3]; // 801B8E2C
  c->r[5]=c->r[30]|c->r[30]; // 801B8E30
  c->r[3]=c->r[31]+0x000001B8u; // 801B8E34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8E38
  c->lr=0x801B8E40u; f_801BB3FC(c); // 801B8E3C
  c->lr=0x801B8E44u; f_801BA210(c); // 801B8E40
  c->r[30]=c->r[3]|c->r[3]; // 801B8E44
  c->lr=0x801B8E4Cu; f_801BA228(c); // 801B8E48
  c->r[4]=c->r[3]|c->r[3]; // 801B8E4C
  c->r[5]=c->r[30]|c->r[30]; // 801B8E50
  c->r[3]=c->r[31]+0x000001D4u; // 801B8E54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8E58
  c->lr=0x801B8E60u; f_801BB3FC(c); // 801B8E5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8E60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B8E64
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B8E68
  c->lr=c->r[0]; // 801B8E6C
  c->r[1]=c->r[1]+0x00000010u; // 801B8E70
  return; // 801B8E74
}

// OSInit
void f_801B8E78(Ctx* __restrict c) {
  trace_call(0x801B8E78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8E78
  c->r[0]=c->lr; // 801B8E7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8E80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8E84
  c->r[31]=0u+0x804A0000u; // 801B8E88
  c->r[31]=c->r[31]+0x00002568u; // 801B8E8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B8E90
  c->r[30]=0u+0x80560000u; // 801B8E94
  c->r[30]=c->r[30]+0xFFFF8BE0u; // 801B8E98
  c->r[0]=R32(c->r[13]+0xFFFF9C5Cu); // 801B8E9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8EA0
  if (!crb(c,2)) { goto L_801B9264; } // 801B8EA4
  c->r[0]=0u+0x00000001u; // 801B8EA8
  W32(c->r[13]+0xFFFF9C5Cu,c->r[0]); // 801B8EAC
  c->lr=0x801B8EB4u; f_801C259C(c); // 801B8EB0
  W32(c->r[13]+0xFFFF9C94u,c->r[4]); // 801B8EB4
  W32(c->r[13]+0xFFFF9C90u,c->r[3]); // 801B8EB8
  c->lr=0x801B8EC0u; f_801BE74C(c); // 801B8EBC
  c->r[3]=c->r[30]+0x00000000u; // 801B8EC0
  c->lr=0x801B8EC8u; f_801BBCF8(c); // 801B8EC4
  c->r[3]=0u+0x00000000u; // 801B8EC8
  c->lr=0x801B8ED0u; f_801B81F0(c); // 801B8ECC
  c->r[3]=0u+0x00000000u; // 801B8ED0
  c->lr=0x801B8ED8u; f_801B81F8(c); // 801B8ED4
  c->r[3]=0u+0x00000000u; // 801B8ED8
  c->lr=0x801B8EE0u; f_801B8200(c); // 801B8EDC
  c->r[3]=0u+0x00000000u; // 801B8EE0
  c->lr=0x801B8EE8u; f_801B8208(c); // 801B8EE4
  c->r[3]=0u+0x00000000u; // 801B8EE8
  c->lr=0x801B8EF0u; f_801B8210(c); // 801B8EEC
  c->r[3]=0u+0x00000000u; // 801B8EF0
  c->lr=0x801B8EF8u; f_801B8218(c); // 801B8EF4
  c->r[3]=0u+0x83900000u; // 801B8EF8
  c->lr=0x801B8F00u; f_801B82B0(c); // 801B8EFC
  c->lr=0x801B8F04u; f_801B8280(c); // 801B8F00
  c->lr=0x801B8F08u; f_801B82A8(c); // 801B8F04
  c->r[0]=0u+0x00000000u; // 801B8F08
  c->r[4]=0u+0x80000000u; // 801B8F0C
  W32(c->r[13]+0xFFFF9C88u,c->r[4]); // 801B8F10
  W32(c->r[13]+0xFFFF9C84u,c->r[0]); // 801B8F14
  W32(c->r[13]+0xFFFF8458u,c->r[0]); // 801B8F18
  c->r[5]=R32(c->r[4]+0x000000F4u); // 801B8F1C
  cmps(c,0,(int32_t)c->r[5],0); // 801B8F20
  if (crb(c,2)) { goto L_801B8F4C; } // 801B8F24
  c->r[3]=c->r[5]+0x0000000Cu; // 801B8F28
  W32(c->r[13]+0xFFFF9C84u,c->r[3]); // 801B8F2C
  c->r[0]=R32(c->r[5]+0x00000024u); // 801B8F30
  W32(c->r[13]+0xFFFF9F40u,c->r[0]); // 801B8F34
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B8F38
  W8(c->r[4]+0x000030E8u,c->r[0]); // 801B8F3C
  c->r[0]=R32(c->r[13]+0xFFFF9F40u); // 801B8F40
  W8(c->r[4]+0x000030E9u,c->r[0]); // 801B8F44
  goto L_801B8F70; // 801B8F48
L_801B8F4C:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 801B8F4C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8F50
  if (crb(c,2)) { goto L_801B8F70; } // 801B8F54
  c->r[3]=R8(c->r[4]+0x000030E8u); // 801B8F58
  c->r[0]=c->r[13]+0xFFFF9C80u; // 801B8F5C
  W32(c->r[13]+0xFFFF9C80u,c->r[3]); // 801B8F60
  W32(c->r[13]+0xFFFF9C84u,c->r[0]); // 801B8F64
  c->r[0]=R8(c->r[4]+0x000030E9u); // 801B8F68
  W32(c->r[13]+0xFFFF9F40u,c->r[0]); // 801B8F6C
L_801B8F70:;
  c->r[0]=0u+0x00000001u; // 801B8F70
  c->r[4]=0u+0x80000000u; // 801B8F74
  W32(c->r[13]+0xFFFF8458u,c->r[0]); // 801B8F78
  c->r[3]=R32(c->r[4]+0x0000310Cu); // 801B8F7C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8F80
  if (!crb(c,2)) { goto L_801B8FF0; } // 801B8F84
  c->r[3]=0u+0x806F0000u; // 801B8F88
  c->r[3]=c->r[3]+0xFFFFC280u; // 801B8F8C
  c->r[0]=rotl(c->r[3],0)&0x30000000u; cr0(c,c->r[0]); // 801B8F90
  if (!crb(c,2)) { goto L_801B8FEC; } // 801B8F94
  c->r[4]=R32(c->r[13]+0xFFFF9C88u); // 801B8F98
  c->r[0]=R32(c->r[4]+0x00000030u); // 801B8F9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8FA0
  if (!crb(c,2)) { goto L_801B8FAC; } // 801B8FA4
  goto L_801B8FB0; // 801B8FA8
L_801B8FAC:;
  c->r[3]=c->r[0]|c->r[0]; // 801B8FAC
L_801B8FB0:;
  c->r[4]=R32(c->r[13]+0xFFFF9C88u); // 801B8FB0
  c->r[0]=R32(c->r[4]+0x00000030u); // 801B8FB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B8FB8
  if (!crb(c,2)) { goto L_801B8FF0; } // 801B8FBC
  c->r[4]=R32(c->r[13]+0xFFFF9C84u); // 801B8FC0
  cmps(c,0,(int32_t)c->r[4],0); // 801B8FC4
  if (crb(c,2)) { goto L_801B8FF0; } // 801B8FC8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B8FCC
  cmpu(c,0,c->r[0],0x00000002u); // 801B8FD0
  if (!crb(c,0)) { goto L_801B8FF0; } // 801B8FD4
  c->r[3]=0u+0x806F0000u; // 801B8FD8
  c->r[3]=c->r[3]+0xFFFFA278u; // 801B8FDC
  c->r[0]=c->r[3]+0x0000001Fu; // 801B8FE0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B8FE4
  goto L_801B8FF0; // 801B8FE8
L_801B8FEC:;
  c->r[3]=c->r[4]+0x00004000u; // 801B8FEC
L_801B8FF0:;
  c->lr=0x801B8FF4u; f_801BA250(c); // 801B8FF0
  c->r[3]=0u+0x80000000u; // 801B8FF4
  c->r[3]=R32(c->r[3]+0x00003110u); // 801B8FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B8FFC
  if (!crb(c,2)) { goto L_801B901C; } // 801B9000
  c->r[3]=R32(c->r[13]+0xFFFF9C88u); // 801B9004
  c->r[3]=R32(c->r[3]+0x00000034u); // 801B9008
  cmps(c,0,(int32_t)c->r[3],0); // 801B900C
  if (!crb(c,2)) { goto L_801B901C; } // 801B9010
  c->r[3]=0u+0x81700000u; // 801B9014
  c->r[3]=c->r[3]+0x00000000u; // 801B9018
L_801B901C:;
  c->lr=0x801B9020u; f_801BA238(c); // 801B901C
  c->r[3]=0u+0x80000000u; // 801B9020
  c->r[3]=R32(c->r[3]+0x00003124u); // 801B9024
  cmps(c,0,(int32_t)c->r[3],0); // 801B9028
  if (crb(c,2)) { goto L_801B9098; } // 801B902C
  c->r[5]=0u+0x806F0000u; // 801B9030
  c->r[5]=c->r[5]+0xFFFFC280u; // 801B9034
  c->r[4]=rotl(c->r[5],0)&0x30000000u; // 801B9038
  c->r[0]=c->r[4]+0xF0000000u; // 801B903C
  cmpu(c,0,c->r[0],0x00000000u); // 801B9040
  if (!crb(c,2)) { goto L_801B9078; } // 801B9044
  c->r[4]=R32(c->r[13]+0xFFFF9C84u); // 801B9048
  c->r[3]=c->r[5]|c->r[5]; // 801B904C
  cmps(c,0,(int32_t)c->r[4],0); // 801B9050
  if (crb(c,2)) { goto L_801B9094; } // 801B9054
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B9058
  cmpu(c,0,c->r[0],0x00000002u); // 801B905C
  if (!crb(c,0)) { goto L_801B9094; } // 801B9060
  c->r[3]=0u+0x806F0000u; // 801B9064
  c->r[3]=c->r[3]+0xFFFFA278u; // 801B9068
  c->r[0]=c->r[3]+0x0000001Fu; // 801B906C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B9070
  goto L_801B9094; // 801B9074
L_801B9078:;
  c->r[4]=0u+0x90000000u; // 801B9078
  cmpu(c,0,c->r[3],c->r[4]); // 801B907C
  if (crb(c,0)) { goto L_801B9094; } // 801B9080
  c->r[0]=c->r[4]+0x00000800u; // 801B9084
  cmpu(c,0,c->r[3],c->r[0]); // 801B9088
  if (!crb(c,0)) { goto L_801B9094; } // 801B908C
  c->r[3]=c->r[0]|c->r[0]; // 801B9090
L_801B9094:;
  c->lr=0x801B9098u; f_801BA258(c); // 801B9094
L_801B9098:;
  c->r[3]=0u+0x80000000u; // 801B9098
  c->r[3]=R32(c->r[3]+0x00003128u); // 801B909C
  cmps(c,0,(int32_t)c->r[3],0); // 801B90A0
  if (crb(c,2)) { goto L_801B90AC; } // 801B90A4
  c->lr=0x801B90ACu; f_801BA240(c); // 801B90A8
L_801B90AC:;
  c->lr=0x801B90B0u; f_801C2E78(c); // 801B90AC
  c->lr=0x801B90B4u; f_801B927C(c); // 801B90B0
  c->lr=0x801B90B8u; f_801C0EAC(c); // 801B90B4
  c->lr=0x801B90BCu; f_801B971C(c); // 801B90B8
  c->lr=0x801B90C0u; f_801BEED0(c); // 801B90BC
  c->lr=0x801B90C4u; f_801BE7BC(c); // 801B90C0
  c->lr=0x801B90C8u; f_801BB3B4(c); // 801B90C4
  c->lr=0x801B90CCu; f_801BAA3C(c); // 801B90C8
  c->lr=0x801B90D0u; f_801F8704(c); // 801B90CC
  c->lr=0x801B90D4u; f_801F9BC4(c); // 801B90D0
  c->lr=0x801B90D8u; f_801C0538(c); // 801B90D4
  c->lr=0x801B90DCu; f_801C0F10(c); // 801B90D8
  c->lr=0x801B90E0u; f_801BA4BC(c); // 801B90DC
  c->lr=0x801B90E4u; f_801B8268(c); // 801B90E0
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801B90E4
  c->lr=0x801B90ECu; f_801B8270(c); // 801B90E8
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801B90EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B90F0
  if (!crb(c,2)) { goto L_801B90FC; } // 801B90F4
  c->lr=0x801B90FCu; f_801BF850(c); // 801B90F8
L_801B90FC:;
  c->lr=0x801B9100u; f_801B8BE8(c); // 801B90FC
  c->r[4]=R32(c->r[13]+0xFFFF83D8u); // 801B9100
  c->r[3]=c->r[13]+0xFFFF83E4u; // 801B9104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9108
  c->lr=0x801B9110u; f_801BB3FC(c); // 801B910C
  c->r[3]=R32(c->r[13]+0xFFFF9C84u); // 801B9110
  cmps(c,0,(int32_t)c->r[3],0); // 801B9114
  if (crb(c,2)) { goto L_801B912C; } // 801B9118
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B911C
  cmpu(c,0,c->r[0],0x00000002u); // 801B9120
  if (crb(c,0)) { goto L_801B912C; } // 801B9124
  c->lr=0x801B912Cu; f_801FF574(c); // 801B9128
L_801B912C:;
  c->lr=0x801B9130u; f_801B87EC(c); // 801B912C
  c->lr=0x801B9134u; f_801B89C8(c); // 801B9130
  c->lr=0x801B9138u; f_801BE760(c); // 801B9134
  c->lr=0x801B913Cu; f_80203B4C(c); // 801B9138
  c->r[0]=R32(c->r[13]+0xFFFF9C54u); // 801B913C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9140
  if (!crb(c,2)) { goto L_801B916C; } // 801B9144
  c->r[0]=R32(c->r[13]+0xFFFF9CC0u); // 801B9148
  cmps(c,0,(int32_t)c->r[0],0); // 801B914C
  if (!crb(c,2)) { goto L_801B916C; } // 801B9150
  c->lr=0x801B9158u; f_801C2FFC(c); // 801B9154
  c->lr=0x801B915Cu; f_80207F2C(c); // 801B9158
L_801B915C:;
  c->lr=0x801B9160u; f_80207FCC(c); // 801B915C
  cmpu(c,0,c->r[3],0x00000001u); // 801B9160
  if (crb(c,2)) { IRQCHK(c); goto L_801B915C; } // 801B9164
  c->lr=0x801B916Cu; f_801C3E58(c); // 801B9168
L_801B916C:;
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801B916C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9170
  if (!crb(c,2)) { goto L_801B923C; } // 801B9174
  c->r[3]=0u+0x80000000u; // 801B9178
  c->r[0]=R8(c->r[3]+0x0000315Cu); // 801B917C
  cmps(c,0,(int32_t)c->r[0],129); // 801B9180
  if (crb(c,2)) { goto L_801B9190; } // 801B9184
  if (!crb(c,0)) { goto L_801B91B0; } // 801B9188
  goto L_801B91B0; // 801B918C
L_801B9190:;
  c->r[3]=c->r[31]+0x00000258u; // 801B9190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9194
  c->lr=0x801B919Cu; f_801BB3FC(c); // 801B9198
  c->r[5]=c->r[31]+0x000002A8u; // 801B919C
  c->r[3]=c->r[13]+0xFFFF83E8u; // 801B91A0
  c->r[4]=0u+0x00000458u; // 801B91A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B91A8
  c->lr=0x801B91B0u; f_801BB48C(c); // 801B91AC
L_801B91B0:;
  c->r[3]=0u+0x80000000u; // 801B91B0
  c->r[0]=R8(c->r[3]+0x0000315Du); // 801B91B4
  cmps(c,0,(int32_t)c->r[0],129); // 801B91B8
  if (crb(c,2)) { goto L_801B91C8; } // 801B91BC
  if (!crb(c,0)) { goto L_801B91E8; } // 801B91C0
  goto L_801B91E8; // 801B91C4
L_801B91C8:;
  c->r[3]=c->r[31]+0x000002C0u; // 801B91C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B91CC
  c->lr=0x801B91D4u; f_801BB3FC(c); // 801B91D0
  c->r[5]=c->r[31]+0x000002A8u; // 801B91D4
  c->r[3]=c->r[13]+0xFFFF83E8u; // 801B91D8
  c->r[4]=0u+0x0000046Au; // 801B91DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B91E0
  c->lr=0x801B91E8u; f_801BB48C(c); // 801B91E4
L_801B91E8:;
  c->lr=0x801B91ECu; f_801C6F5C(c); // 801B91E8
  c->r[0]=R32(c->r[13]+0xFFFF9C58u); // 801B91EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B91F0
  if (crb(c,2)) { goto L_801B920C; } // 801B91F4
  c->r[4]=0u+0x00010000u; // 801B91F8
  c->r[3]=0u+0x80000000u; // 801B91FC
  c->r[0]=c->r[4]+0xFFFF9000u; // 801B9200
  W16(c->r[3]+0x000030E6u,c->r[0]); // 801B9204
  goto L_801B923C; // 801B9208
L_801B920C:;
  c->r[3]=0u+0x80000000u; // 801B920C
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801B9210
  cmps(c,0,(int32_t)c->r[0],0); // 801B9214
  if (!crb(c,2)) { goto L_801B923C; } // 801B9218
  c->r[3]=c->r[30]+0x00000020u; // 801B921C
  c->r[4]=0u+0x00000020u; // 801B9220
  c->lr=0x801B9228u; f_801BA764(c); // 801B9224
  c->r[5]=0u+0x801C0000u; // 801B9228
  c->r[3]=c->r[30]+0x00000040u; // 801B922C
  c->r[4]=c->r[30]+0x00000020u; // 801B9230
  c->r[5]=c->r[5]+0xFFFF8BACu; // 801B9234
  c->lr=0x801B923Cu; f_801CA970(c); // 801B9238
L_801B923C:;
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801B923C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9240
  if (!crb(c,2)) { goto L_801B9264; } // 801B9244
  c->r[0]=R32(c->r[13]+0xFFFF9C54u); // 801B9248
  cmps(c,0,(int32_t)c->r[0],0); // 801B924C
  if (!crb(c,2)) { goto L_801B9264; } // 801B9250
  c->r[0]=R32(c->r[13]+0xFFFF9CC0u); // 801B9254
  cmps(c,0,(int32_t)c->r[0],0); // 801B9258
  if (!crb(c,2)) { goto L_801B9264; } // 801B925C
  c->lr=0x801B9264u; f_801C3A10(c); // 801B9260
L_801B9264:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9268
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B926C
  c->lr=c->r[0]; // 801B9270
  c->r[1]=c->r[1]+0x00000010u; // 801B9274
  return; // 801B9278
}

// OSExceptionInit
void f_801B927C(Ctx* __restrict c) {
  trace_call(0x801B927Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B927C
  c->r[0]=c->lr; // 801B9280
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B9284
  c->r[11]=c->r[1]+0x00000040u; // 801B9288
  c->lr=0x801B9290u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B928C
  c->r[22]=0u+0x80000000u; // 801B9290
  c->r[26]=0u+0x801C0000u; // 801B9294
  c->r[0]=R32(c->r[22]+0x00000060u); // 801B9298
  c->r[3]=0u+0x801C0000u; // 801B929C
  c->r[28]=0u+0x801C0000u; // 801B92A0
  c->r[30]=0u+0x804A0000u; // 801B92A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B92A8
  c->r[26]=c->r[26]+0xFFFF9548u; // 801B92AC
  c->r[3]=c->r[3]+0xFFFF95E0u; // 801B92B0
  {uint32_t ea=c->r[28]+0xFFFF95B0u; c->r[27]=R32(ea); c->r[28]=ea;} // 801B92B4
  c->r[30]=c->r[30]+0x00002568u; // 801B92B8
  c->r[25]=c->r[3]-c->r[26]; // 801B92BC
  if (!crb(c,2)) { goto L_801B930C; } // 801B92C0
  c->r[3]=c->r[30]+0x00000354u; // 801B92C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B92C8
  c->lr=0x801B92D0u; f_801B8398(c); // 801B92CC
  c->r[4]=0u+0x801C0000u; // 801B92D0
  c->r[5]=0u+0x801C0000u; // 801B92D4
  c->r[4]=c->r[4]+0xFFFF94FCu; // 801B92D8
  c->r[3]=c->r[22]+0x00000060u; // 801B92DC
  c->r[5]=c->r[5]+0xFFFF9520u; // 801B92E0
  c->r[21]=c->r[5]-c->r[4]; // 801B92E4
  c->r[5]=c->r[21]|c->r[21]; // 801B92E8
  c->lr=0x801B92F0u; f_80004338(c); // 801B92EC
  c->r[4]=c->r[21]|c->r[21]; // 801B92F0
  c->r[3]=c->r[22]+0x00000060u; // 801B92F4
  c->lr=0x801B92FCu; f_801BA7F0(c); // 801B92F8
  /* sync */ // 801B92FC
  c->r[4]=c->r[21]|c->r[21]; // 801B9300
  c->r[3]=c->r[22]+0x00000060u; // 801B9304
  c->lr=0x801B930Cu; f_801BA874(c); // 801B9308
L_801B930C:;
  c->r[31]=0u+0x801C0000u; // 801B930C
  c->r[3]=0u+0x801C0000u; // 801B9310
  c->r[0]=c->r[31]+0xFFFF9520u; // 801B9314
  c->r[24]=c->r[30]+0x00000318u; // 801B9318
  c->r[3]=c->r[3]+0xFFFF9524u; // 801B931C
  c->r[29]=0u+0x00000000u; // 801B9320
  c->r[21]=c->r[3]-c->r[0]; // 801B9324
  c->r[23]=0u+0x60000000u; // 801B9328
  c->r[22]=0u+0x801C0000u; // 801B932C
L_801B9330:;
  c->r[3]=R32(c->r[13]+0xFFFF9C84u); // 801B9330
  cmps(c,0,(int32_t)c->r[3],0); // 801B9334
  if (crb(c,2)) { goto L_801B936C; } // 801B9338
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B933C
  cmpu(c,0,c->r[0],0x00000002u); // 801B9340
  if (crb(c,0)) { goto L_801B936C; } // 801B9344
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B9348
  c->lr=0x801B9350u; f_801B8380(c); // 801B934C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9350
  if (crb(c,2)) { goto L_801B936C; } // 801B9354
  c->r[3]=c->r[30]+0x00000370u; // 801B9358
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801B935C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9360
  c->lr=0x801B9368u; f_801B8398(c); // 801B9364
  goto L_801B9440; // 801B9368
L_801B936C:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801B936C
  c->r[0]=c->r[27]|c->r[3]; // 801B9370
  W32(c->r[28]+0x00000000u,c->r[0]); // 801B9374
  c->lr=0x801B937Cu; f_801B8380(c); // 801B9378
  cmps(c,0,(int32_t)c->r[3],0); // 801B937C
  if (crb(c,2)) { goto L_801B93A8; } // 801B9380
  c->r[3]=c->r[30]+0x000003A0u; // 801B9384
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801B9388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B938C
  c->lr=0x801B9394u; f_801B8398(c); // 801B9390
  c->r[5]=c->r[21]|c->r[21]; // 801B9394
  c->r[3]=c->r[22]+0xFFFF95A0u; // 801B9398
  c->r[4]=c->r[31]+0xFFFF9520u; // 801B939C
  c->lr=0x801B93A4u; f_80004338(c); // 801B93A0
  goto L_801B9408; // 801B93A4
L_801B93A8:;
  cmpu(c,0,c->r[21],0x00000000u); // 801B93A8
  c->r[3]=c->r[21]+0x00000003u; // 801B93AC
  c->r[4]=c->r[22]+0xFFFF95A0u; // 801B93B0
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801B93B4
  if (!crb(c,1)) { goto L_801B9408; } // 801B93B8
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B93BC
  c->ctr=c->r[0]; // 801B93C0
  if (crb(c,2)) { goto L_801B93F8; } // 801B93C4
L_801B93C8:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 801B93C8
  W32(c->r[4]+0x00000004u,c->r[23]); // 801B93CC
  W32(c->r[4]+0x00000008u,c->r[23]); // 801B93D0
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 801B93D4
  W32(c->r[4]+0x00000010u,c->r[23]); // 801B93D8
  W32(c->r[4]+0x00000014u,c->r[23]); // 801B93DC
  W32(c->r[4]+0x00000018u,c->r[23]); // 801B93E0
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 801B93E4
  c->r[4]=c->r[4]+0x00000020u; // 801B93E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B93C8; } // 801B93EC
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801B93F0
  if (crb(c,2)) { goto L_801B9408; } // 801B93F4
L_801B93F8:;
  c->ctr=c->r[3]; // 801B93F8
L_801B93FC:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 801B93FC
  c->r[4]=c->r[4]+0x00000004u; // 801B9400
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B93FC; } // 801B9404
L_801B9408:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801B9408
  c->r[4]=c->r[26]|c->r[26]; // 801B940C
  c->r[3]=R32(c->r[24]+c->r[0]); // 801B9410
  c->r[5]=c->r[25]|c->r[25]; // 801B9414
  c->r[20]=c->r[3]+0x80000000u; // 801B9418
  c->r[3]=c->r[20]|c->r[20]; // 801B941C
  c->lr=0x801B9424u; f_80004338(c); // 801B9420
  c->r[3]=c->r[20]|c->r[20]; // 801B9424
  c->r[4]=c->r[25]|c->r[25]; // 801B9428
  c->lr=0x801B9430u; f_801BA7F0(c); // 801B942C
  /* sync */ // 801B9430
  c->r[3]=c->r[20]|c->r[20]; // 801B9434
  c->r[4]=c->r[25]|c->r[25]; // 801B9438
  c->lr=0x801B9440u; f_801BA874(c); // 801B943C
L_801B9440:;
  c->r[29]=c->r[29]+0x00000001u; // 801B9440
  cmpu(c,0,c->r[29],0x0000000Fu); // 801B9444
  if (crb(c,0)) { IRQCHK(c); goto L_801B9330; } // 801B9448
  c->r[3]=0u+0x80000000u; // 801B944C
  c->r[5]=0u+0x801C0000u; // 801B9450
  c->r[4]=c->r[3]+0x00003000u; // 801B9454
  W32(c->r[13]+0xFFFF9C60u,c->r[4]); // 801B9458
  c->r[5]=c->r[5]+0xFFFF95E4u; // 801B945C
  c->r[3]=c->r[30]+0x000003D0u; // 801B9460
  W32(c->r[4]+0x00000000u,c->r[5]); // 801B9464
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9468
  W32(c->r[4]+0x00000004u,c->r[5]); // 801B946C
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9470
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B9474
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9478
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 801B947C
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9480
  W32(c->r[4]+0x00000010u,c->r[5]); // 801B9484
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9488
  W32(c->r[4]+0x00000014u,c->r[5]); // 801B948C
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9490
  W32(c->r[4]+0x00000018u,c->r[5]); // 801B9494
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9498
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 801B949C
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94A0
  W32(c->r[4]+0x00000020u,c->r[5]); // 801B94A4
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94A8
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B94AC
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94B0
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B94B4
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94B8
  W32(c->r[4]+0x0000002Cu,c->r[5]); // 801B94BC
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94C0
  W32(c->r[4]+0x00000030u,c->r[5]); // 801B94C4
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94C8
  W32(c->r[4]+0x00000034u,c->r[5]); // 801B94CC
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B94D0
  W32(c->r[4]+0x00000038u,c->r[5]); // 801B94D4
  W32(c->r[28]+0x00000000u,c->r[27]); // 801B94D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B94DC
  c->lr=0x801B94E4u; f_801B8398(c); // 801B94E0
  c->r[11]=c->r[1]+0x00000040u; // 801B94E4
  c->lr=0x801B94ECu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B94E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B94EC
  c->lr=c->r[0]; // 801B94F0
  c->r[1]=c->r[1]+0x00000040u; // 801B94F4
  return; // 801B94F8
}

// __OSDBIntegrator
void f_801B94FC(Ctx* __restrict c) {
  trace_call(0x801B94FCu);
  c->r[5]=0u+0x00000040u; // 801B94FC
  c->r[3]=c->lr; // 801B9500
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801B9504
  c->r[3]=R32(c->r[5]+0x00000008u); // 801B9508
  c->r[3]=c->r[3]|0x80000000u; // 801B950C
  c->lr=c->r[3]; // 801B9510
  c->r[3]=0u+0x00000030u; // 801B9514
  c->msr=c->r[3]; // 801B9518
  return; // 801B951C
}

// fn_801B9520
void f_801B9520(Ctx* __restrict c) {
  trace_call(0x801B9520u);
  c->lr=0x801B9524u; f_801B9580(c); // 801B9520
  f_801B9524(c);
}

// __OSSetExceptionHandler
void f_801B9524(Ctx* __restrict c) {
  trace_call(0x801B9524u);
  c->r[5]=R32(c->r[13]+0xFFFF9C60u); // 801B9524
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801B9528
  c->r[3]=R32(c->r[5]+c->r[0]); // 801B952C
  W32(c->r[5]+c->r[0],c->r[4]); // 801B9530
  return; // 801B9534
}

// __OSGetExceptionHandler
void f_801B9538(Ctx* __restrict c) {
  trace_call(0x801B9538u);
  c->r[4]=R32(c->r[13]+0xFFFF9C60u); // 801B9538
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801B953C
  c->r[3]=R32(c->r[4]+c->r[0]); // 801B9540
  return; // 801B9544
}

// fn_801B9548
void f_801B9548(Ctx* __restrict c) {
  trace_call(0x801B9548u);
  mtspr(c,272,c->r[4]); // 801B9548
  c->r[4]=R32(0u+0x000000C0u); // 801B954C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801B9550
  c->r[3]=mfspr(c,272); // 801B9554
  W32(c->r[4]+0x00000010u,c->r[3]); // 801B9558
  W32(c->r[4]+0x00000014u,c->r[5]); // 801B955C
  c->r[3]=R16(c->r[4]+0x000001A2u); // 801B9560
  c->r[3]=c->r[3]|0x00000002u; // 801B9564
  W16(c->r[4]+0x000001A2u,c->r[3]); // 801B9568
  c->r[3]=c->cr; // 801B956C
  W32(c->r[4]+0x00000080u,c->r[3]); // 801B9570
  c->r[3]=c->lr; // 801B9574
  W32(c->r[4]+0x00000084u,c->r[3]); // 801B9578
  c->r[3]=c->ctr; // 801B957C
  f_801B9580(c);
}

// fn_801B9580
void f_801B9580(Ctx* __restrict c) {
  trace_call(0x801B9580u);
  W32(c->r[4]+0x00000088u,c->r[3]); // 801B9580
  c->r[3]=mfspr(c,1); // 801B9584
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 801B9588
  c->r[3]=mfspr(c,26); // 801B958C
  W32(c->r[4]+0x00000198u,c->r[3]); // 801B9590
  c->r[3]=mfspr(c,27); // 801B9594
  W32(c->r[4]+0x0000019Cu,c->r[3]); // 801B9598
  c->r[5]=c->r[3]|c->r[3]; // 801B959C
  c->r[0]=c->r[0]|0x00000000u; // 801B95A0
  c->r[3]=c->msr; // 801B95A4
  c->r[3]=c->r[3]|0x00000030u; // 801B95A8
  mtspr(c,27,c->r[3]); // 801B95AC
  c->r[3]=0u+0x00000000u; // 801B95B0
  c->r[4]=R32(0u+0x000000D4u); // 801B95B4
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 801B95B8
  if (!crb(c,2)) { goto L_801B95D0; } // 801B95BC
  c->r[5]=0u+0x801C0000u; // 801B95C0
  c->r[5]=c->r[5]+0xFFFF95E4u; // 801B95C4
  mtspr(c,26,c->r[5]); // 801B95C8
  return; /* rfi */ // 801B95CC
L_801B95D0:;
  c->r[5]=rotl(c->r[3],2)&0x000003FCu; // 801B95D0
  c->r[5]=R32(c->r[5]+0x00003000u); // 801B95D4
  mtspr(c,26,c->r[5]); // 801B95D8
  return; /* rfi */ // 801B95DC
  f_801B95E0(c);
}

// fn_801B95E0
void f_801B95E0(Ctx* __restrict c) {
  trace_call(0x801B95E0u);
  c->r[0]=c->r[0]|0x00000000u; // 801B95E0
  f_801B95E4(c);
}

// OSDefaultExceptionHandler
void f_801B95E4(Ctx* __restrict c) {
  trace_call(0x801B95E4u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B95E4
  W32(c->r[4]+0x00000004u,c->r[1]); // 801B95E8
  W32(c->r[4]+0x00000008u,c->r[2]); // 801B95EC
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B95F0
  c->r[0]=mfspr(c,913); // 801B95F4
  W32(c->r[4]+0x000001A8u,c->r[0]); // 801B95F8
  c->r[0]=mfspr(c,914); // 801B95FC
  W32(c->r[4]+0x000001ACu,c->r[0]); // 801B9600
  c->r[0]=mfspr(c,915); // 801B9604
  W32(c->r[4]+0x000001B0u,c->r[0]); // 801B9608
  c->r[0]=mfspr(c,916); // 801B960C
  W32(c->r[4]+0x000001B4u,c->r[0]); // 801B9610
  c->r[0]=mfspr(c,917); // 801B9614
  W32(c->r[4]+0x000001B8u,c->r[0]); // 801B9618
  c->r[0]=mfspr(c,918); // 801B961C
  W32(c->r[4]+0x000001BCu,c->r[0]); // 801B9620
  c->r[0]=mfspr(c,919); // 801B9624
  W32(c->r[4]+0x000001C0u,c->r[0]); // 801B9628
  c->r[5]=mfspr(c,18); // 801B962C
  c->r[6]=mfspr(c,19); // 801B9630
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9634
  f_801BB840(c); return; // 801B9638
}

// __OSPSInit
void f_801B963C(Ctx* __restrict c) {
  trace_call(0x801B963Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B963C
  c->r[0]=c->lr; // 801B9640
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9644
  c->lr=0x801B964Cu; f_801B8268(c); // 801B9648
  c->r[3]=c->r[3]|0xA0000000u; // 801B964C
  c->lr=0x801B9654u; f_801B8270(c); // 801B9650
  c->lr=0x801B9658u; f_801BA8A8(c); // 801B9654
  /* sync */ // 801B9658
  c->r[3]=0u+0x00000000u; // 801B965C
  mtspr(c,912,c->r[3]); // 801B9660
  mtspr(c,913,c->r[3]); // 801B9664
  mtspr(c,914,c->r[3]); // 801B9668
  mtspr(c,915,c->r[3]); // 801B966C
  mtspr(c,916,c->r[3]); // 801B9670
  mtspr(c,917,c->r[3]); // 801B9674
  mtspr(c,918,c->r[3]); // 801B9678
  mtspr(c,919,c->r[3]); // 801B967C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9680
  c->lr=c->r[0]; // 801B9684
  c->r[1]=c->r[1]+0x00000010u; // 801B9688
  return; // 801B968C
}

// __OSGetDIConfig
void f_801B9690(Ctx* __restrict c) {
  trace_call(0x801B9690u);
  c->r[3]=0u+0xCD000000u; // 801B9690
  c->r[0]=R32(c->r[3]+0x00006024u); // 801B9694
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801B9698
  return; // 801B969C
}

// OSRegisterVersion
void f_801B96A0(Ctx* __restrict c) {
  trace_call(0x801B96A0u);
  c->r[4]=c->r[3]|c->r[3]; // 801B96A0
  c->r[3]=c->r[13]+0xFFFF83E4u; // 801B96A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B96A8
  f_801BB3FC(c); return; // 801B96AC
}

// OSGetAppGamename
void f_801B96B0(Ctx* __restrict c) {
  trace_call(0x801B96B0u);
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801B96B0
  c->r[3]=0u+0x80000000u; // 801B96B4
  c->r[6]=c->r[3]+0x00003180u; // 801B96B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B96BC
  if (crb(c,2)) { goto L_801B96C8; } // 801B96C0
  c->r[6]=R32(c->r[13]+0xFFFF83F8u); // 801B96C4
L_801B96C8:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 801B96C8
  c->r[5]=c->r[13]+0xFFFF9C78u; // 801B96CC
  c->r[0]=0u+0x00000000u; // 801B96D0
  c->r[3]=c->r[13]+0xFFFF9C78u; // 801B96D4
  W8(c->r[13]+0xFFFF9C78u,c->r[4]); // 801B96D8
  c->r[4]=R8(c->r[6]+0x00000001u); // 801B96DC
  W8(c->r[5]+0x00000001u,c->r[4]); // 801B96E0
  c->r[4]=R8(c->r[6]+0x00000002u); // 801B96E4
  W8(c->r[5]+0x00000002u,c->r[4]); // 801B96E8
  c->r[4]=R8(c->r[6]+0x00000003u); // 801B96EC
  W8(c->r[5]+0x00000003u,c->r[4]); // 801B96F0
  W8(c->r[5]+0x00000004u,c->r[0]); // 801B96F4
  return; // 801B96F8
}

// OSGetAppType
void f_801B96FC(Ctx* __restrict c) {
  trace_call(0x801B96FCu);
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801B96FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B9700
  if (crb(c,2)) { goto L_801B9710; } // 801B9704
  c->r[3]=0u+0x00000040u; // 801B9708
  return; // 801B970C
L_801B9710:;
  c->r[3]=0u+0x80000000u; // 801B9710
  c->r[3]=R8(c->r[3]+0x00003184u); // 801B9714
  return; // 801B9718
}

// __OSInitAlarm
void f_801B971C(Ctx* __restrict c) {
  trace_call(0x801B971Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B971C
  c->r[0]=c->lr; // 801B9720
  c->r[3]=0u+0x00000008u; // 801B9724
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9728
  c->lr=0x801B9730u; f_801B9538(c); // 801B972C
  c->r[4]=0u+0x801C0000u; // 801B9730
  c->r[4]=c->r[4]+0xFFFF9E0Cu; // 801B9734
  cmpu(c,0,c->r[3],c->r[4]); // 801B9738
  if (crb(c,2)) { goto L_801B9764; } // 801B973C
  c->r[0]=0u+0x00000000u; // 801B9740
  c->r[3]=c->r[13]+0xFFFF9C98u; // 801B9744
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B9748
  c->r[3]=0u+0x00000008u; // 801B974C
  W32(c->r[13]+0xFFFF9C98u,c->r[0]); // 801B9750
  c->lr=0x801B9758u; f_801B9524(c); // 801B9754
  c->r[3]=0u+0x804A0000u; // 801B9758
  c->r[3]=c->r[3]+0x00002958u; // 801B975C
  c->lr=0x801B9764u; f_801BFD5C(c); // 801B9760
L_801B9764:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9764
  c->lr=c->r[0]; // 801B9768
  c->r[1]=c->r[1]+0x00000010u; // 801B976C
  return; // 801B9770
}

// OSCreateAlarm
void f_801B9774(Ctx* __restrict c) {
  trace_call(0x801B9774u);
  c->r[0]=0u+0x00000000u; // 801B9774
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B9778
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B977C
  return; // 801B9780
}

// InsertAlarm
void f_801B9784(Ctx* __restrict c) {
  trace_call(0x801B9784u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9784
  c->r[0]=c->lr; // 801B9788
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B978C
  c->r[11]=c->r[1]+0x00000030u; // 801B9790
  c->lr=0x801B9798u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9794
  c->r[4]=R32(c->r[3]+0x00000018u); // 801B9798
  c->r[29]=0u+0x00000000u; // 801B979C
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801B97A0
  c->r[30]=c->r[3]|c->r[3]; // 801B97A4
  c->r[0]=c->r[29]^0x80000000u; // 801B97A8
  c->r[4]=c->r[4]^0x80000000u; // 801B97AC
  c->r[3]=addc(c,~c->r[8],c->r[29],1); // 801B97B0
  c->r[31]=c->r[7]|c->r[7]; // 801B97B4
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801B97B8
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B97BC
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801B97C0
  if (crb(c,2)) { goto L_801B9840; } // 801B97C4
  c->lr=0x801B97CCu; f_801C259C(c); // 801B97C8
  c->r[28]=R32(c->r[30]+0x00000020u); // 801B97CC
  c->r[7]=c->r[3]^0x80000000u; // 801B97D0
  c->r[27]=R32(c->r[30]+0x00000024u); // 801B97D4
  c->r[0]=c->r[28]^0x80000000u; // 801B97D8
  c->r[5]=c->r[28]|c->r[28]; // 801B97DC
  c->r[6]=addc(c,~c->r[4],c->r[27],1); // 801B97E0
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 801B97E4
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B97E8
  c->r[6]=c->r[27]|c->r[27]; // 801B97EC
  c->r[7]=0u-c->r[7]; cr0(c,c->r[7]); // 801B97F0
  if (crb(c,2)) { goto L_801B9840; } // 801B97F4
  c->r[26]=R32(c->r[30]+0x00000018u); // 801B97F8
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801B97FC
  c->r[25]=R32(c->r[30]+0x0000001Cu); // 801B9800
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801B9804
  c->r[5]=c->r[26]|c->r[26]; // 801B9808
  c->r[6]=c->r[25]|c->r[25]; // 801B980C
  c->lr=0x801B9814u; f_801E7AAC(c); // 801B9810
  c->r[0]=0u+0x00000001u; // 801B9814
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 801B9818
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[4])>>32); // 801B981C
  c->r[5]=addc(c,c->r[3],c->r[29],c->xer_ca); // 801B9820
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[4]); // 801B9824
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[4]); // 801B9828
  c->r[3]=c->r[0]+c->r[3]; // 801B982C
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[5]); // 801B9830
  c->r[6]=addc(c,c->r[27],c->r[4],0); // 801B9834
  c->r[0]=c->r[3]+c->r[0]; // 801B9838
  c->r[5]=addc(c,c->r[28],c->r[0],c->xer_ca); // 801B983C
L_801B9840:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801B9840
  c->r[0]=c->r[5]^0x80000000u; // 801B9844
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 801B9848
  W32(c->r[30]+0x00000008u,c->r[5]); // 801B984C
  c->r[7]=R32(c->r[13]+0xFFFF9C98u); // 801B9850
  goto L_801B9918; // 801B9854
L_801B9858:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 801B9858
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 801B985C
  c->r[4]=c->r[3]^0x80000000u; // 801B9860
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 801B9864
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801B9868
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B986C
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801B9870
  if (crb(c,2)) { goto L_801B9914; } // 801B9874
  c->r[0]=R32(c->r[7]+0x00000010u); // 801B9878
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B987C
  W32(c->r[7]+0x00000010u,c->r[30]); // 801B9880
  c->r[3]=R32(c->r[30]+0x00000010u); // 801B9884
  W32(c->r[30]+0x00000014u,c->r[7]); // 801B9888
  cmps(c,0,(int32_t)c->r[3],0); // 801B988C
  if (crb(c,2)) { goto L_801B989C; } // 801B9890
  W32(c->r[3]+0x00000014u,c->r[30]); // 801B9894
  goto L_801B99BC; // 801B9898
L_801B989C:;
  W32(c->r[13]+0xFFFF9C98u,c->r[30]); // 801B989C
  c->lr=0x801B98A4u; f_801C259C(c); // 801B98A0
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801B98A4
  c->r[7]=0u+0x00000000u; // 801B98A8
  c->r[0]=R32(c->r[30]+0x00000008u); // 801B98AC
  c->r[6]=c->r[7]^0x80000000u; // 801B98B0
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 801B98B4
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 801B98B8
  c->r[5]=c->r[0]^0x80000000u; // 801B98BC
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 801B98C0
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 801B98C4
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B98C8
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801B98CC
  if (crb(c,2)) { goto L_801B98E0; } // 801B98D0
  c->r[3]=0u+0x00000000u; // 801B98D4
  c->lr=0x801B98DCu; f_801B81CC(c); // 801B98D8
  goto L_801B99BC; // 801B98DC
L_801B98E0:;
  c->r[4]=0u+0x80000000u; // 801B98E0
  c->r[3]=c->r[7]^0x80000000u; // 801B98E4
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 801B98E8
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801B98EC
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B98F0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801B98F4
  if (crb(c,2)) { goto L_801B9908; } // 801B98F8
  c->r[3]=c->r[8]|c->r[8]; // 801B98FC
  c->lr=0x801B9904u; f_801B81CC(c); // 801B9900
  goto L_801B99BC; // 801B9904
L_801B9908:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801B9908
  c->lr=0x801B9910u; f_801B81CC(c); // 801B990C
  goto L_801B99BC; // 801B9910
L_801B9914:;
  c->r[7]=R32(c->r[7]+0x00000014u); // 801B9914
L_801B9918:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9918
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9858; } // 801B991C
  c->r[31]=0u+0x00000000u; // 801B9920
  c->r[3]=c->r[13]+0xFFFF9C98u; // 801B9924
  W32(c->r[30]+0x00000014u,c->r[31]); // 801B9928
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B992C
  W32(c->r[3]+0x00000004u,c->r[30]); // 801B9930
  cmps(c,0,(int32_t)c->r[4],0); // 801B9934
  W32(c->r[30]+0x00000010u,c->r[4]); // 801B9938
  if (crb(c,2)) { goto L_801B9948; } // 801B993C
  W32(c->r[4]+0x00000014u,c->r[30]); // 801B9940
  goto L_801B99BC; // 801B9944
L_801B9948:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 801B9948
  W32(c->r[13]+0xFFFF9C98u,c->r[30]); // 801B994C
  c->lr=0x801B9954u; f_801C259C(c); // 801B9950
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801B9954
  c->r[6]=c->r[31]^0x80000000u; // 801B9958
  c->r[0]=R32(c->r[30]+0x00000008u); // 801B995C
  c->r[7]=addc(c,~c->r[4],c->r[5],1); // 801B9960
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 801B9964
  c->r[5]=c->r[0]^0x80000000u; // 801B9968
  c->r[0]=addc(c,~c->r[31],c->r[7],1); // 801B996C
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 801B9970
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9974
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801B9978
  if (crb(c,2)) { goto L_801B998C; } // 801B997C
  c->r[3]=0u+0x00000000u; // 801B9980
  c->lr=0x801B9988u; f_801B81CC(c); // 801B9984
  goto L_801B99BC; // 801B9988
L_801B998C:;
  c->r[4]=0u+0x80000000u; // 801B998C
  c->r[3]=c->r[31]^0x80000000u; // 801B9990
  c->r[0]=addc(c,~c->r[4],c->r[7],1); // 801B9994
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801B9998
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B999C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801B99A0
  if (crb(c,2)) { goto L_801B99B4; } // 801B99A4
  c->r[3]=c->r[7]|c->r[7]; // 801B99A8
  c->lr=0x801B99B0u; f_801B81CC(c); // 801B99AC
  goto L_801B99BC; // 801B99B0
L_801B99B4:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801B99B4
  c->lr=0x801B99BCu; f_801B81CC(c); // 801B99B8
L_801B99BC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B99BC
  c->lr=0x801B99C4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B99C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B99C4
  c->lr=c->r[0]; // 801B99C8
  c->r[1]=c->r[1]+0x00000030u; // 801B99CC
  return; // 801B99D0
}

// OSSetAlarm
void f_801B99D4(Ctx* __restrict c) {
  trace_call(0x801B99D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B99D4
  c->r[0]=c->lr; // 801B99D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B99DC
  c->r[11]=c->r[1]+0x00000020u; // 801B99E0
  c->lr=0x801B99E8u; f_801E795C(c); // 801B99E4
  c->r[27]=c->r[3]|c->r[3]; // 801B99E8
  c->r[29]=c->r[5]|c->r[5]; // 801B99EC
  c->r[28]=c->r[6]|c->r[6]; // 801B99F0
  c->r[30]=c->r[7]|c->r[7]; // 801B99F4
  c->lr=0x801B99FCu; f_801BE74C(c); // 801B99F8
  c->r[0]=0u+0x00000000u; // 801B99FC
  c->r[31]=c->r[3]|c->r[3]; // 801B9A00
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 801B9A04
  W32(c->r[27]+0x00000018u,c->r[0]); // 801B9A08
  c->lr=0x801B9A10u; f_801C259C(c); // 801B9A0C
  c->r[6]=addc(c,c->r[28],c->r[4],0); // 801B9A10
  c->r[7]=c->r[30]|c->r[30]; // 801B9A14
  c->r[5]=addc(c,c->r[29],c->r[3],c->xer_ca); // 801B9A18
  c->r[3]=c->r[27]|c->r[27]; // 801B9A1C
  c->lr=0x801B9A24u; f_801B9784(c); // 801B9A20
  c->r[3]=c->r[31]|c->r[31]; // 801B9A24
  c->lr=0x801B9A2Cu; f_801BE774(c); // 801B9A28
  c->r[11]=c->r[1]+0x00000020u; // 801B9A2C
  c->lr=0x801B9A34u; f_801E79A8(c); // 801B9A30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9A34
  c->lr=c->r[0]; // 801B9A38
  c->r[1]=c->r[1]+0x00000020u; // 801B9A3C
  return; // 801B9A40
}

// OSSetPeriodicAlarm
void f_801B9A44(Ctx* __restrict c) {
  trace_call(0x801B9A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9A44
  c->r[0]=c->lr; // 801B9A48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9A4C
  c->r[11]=c->r[1]+0x00000020u; // 801B9A50
  c->lr=0x801B9A58u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9A54
  c->r[26]=c->r[3]|c->r[3]; // 801B9A58
  c->r[28]=c->r[5]|c->r[5]; // 801B9A5C
  c->r[27]=c->r[6]|c->r[6]; // 801B9A60
  c->r[29]=c->r[7]|c->r[7]; // 801B9A64
  c->r[31]=c->r[8]|c->r[8]; // 801B9A68
  c->r[30]=c->r[9]|c->r[9]; // 801B9A6C
  c->lr=0x801B9A74u; f_801BE74C(c); // 801B9A70
  W32(c->r[26]+0x0000001Cu,c->r[31]); // 801B9A74
  c->r[31]=c->r[3]|c->r[3]; // 801B9A78
  c->r[4]=c->r[27]|c->r[27]; // 801B9A7C
  c->r[3]=c->r[28]|c->r[28]; // 801B9A80
  W32(c->r[26]+0x00000018u,c->r[29]); // 801B9A84
  c->lr=0x801B9A8Cu; f_801C2600(c); // 801B9A88
  W32(c->r[26]+0x00000020u,c->r[3]); // 801B9A8C
  c->r[3]=c->r[26]|c->r[26]; // 801B9A90
  c->r[7]=c->r[30]|c->r[30]; // 801B9A94
  c->r[6]=0u+0x00000000u; // 801B9A98
  W32(c->r[26]+0x00000024u,c->r[4]); // 801B9A9C
  c->r[5]=0u+0x00000000u; // 801B9AA0
  c->lr=0x801B9AA8u; f_801B9784(c); // 801B9AA4
  c->r[3]=c->r[31]|c->r[31]; // 801B9AA8
  c->lr=0x801B9AB0u; f_801BE774(c); // 801B9AAC
  c->r[11]=c->r[1]+0x00000020u; // 801B9AB0
  c->lr=0x801B9AB8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9AB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9AB8
  c->lr=c->r[0]; // 801B9ABC
  c->r[1]=c->r[1]+0x00000020u; // 801B9AC0
  return; // 801B9AC4
}

// OSCancelAlarm
void f_801B9AC8(Ctx* __restrict c) {
  trace_call(0x801B9AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9AC8
  c->r[0]=c->lr; // 801B9ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9AD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B9AD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B9AD8
  c->r[30]=c->r[3]|c->r[3]; // 801B9ADC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B9AE0
  c->lr=0x801B9AE8u; f_801BE74C(c); // 801B9AE4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B9AE8
  c->r[31]=c->r[3]|c->r[3]; // 801B9AEC
  cmps(c,0,(int32_t)c->r[0],0); // 801B9AF0
  if (!crb(c,2)) { goto L_801B9B00; } // 801B9AF4
  c->lr=0x801B9AFCu; f_801BE774(c); // 801B9AF8
  goto L_801B9BC4; // 801B9AFC
L_801B9B00:;
  c->r[29]=R32(c->r[30]+0x00000014u); // 801B9B00
  cmps(c,0,(int32_t)c->r[29],0); // 801B9B04
  if (!crb(c,2)) { goto L_801B9B1C; } // 801B9B08
  c->r[0]=R32(c->r[30]+0x00000010u); // 801B9B0C
  c->r[3]=c->r[13]+0xFFFF9C98u; // 801B9B10
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B9B14
  goto L_801B9B24; // 801B9B18
L_801B9B1C:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801B9B1C
  W32(c->r[29]+0x00000010u,c->r[0]); // 801B9B20
L_801B9B24:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801B9B24
  cmps(c,0,(int32_t)c->r[3],0); // 801B9B28
  if (crb(c,2)) { goto L_801B9B38; } // 801B9B2C
  W32(c->r[3]+0x00000014u,c->r[29]); // 801B9B30
  goto L_801B9BB4; // 801B9B34
L_801B9B38:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B9B38
  W32(c->r[13]+0xFFFF9C98u,c->r[29]); // 801B9B3C
  if (crb(c,2)) { goto L_801B9BB4; } // 801B9B40
  c->lr=0x801B9B48u; f_801C259C(c); // 801B9B44
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 801B9B48
  c->r[7]=0u+0x00000000u; // 801B9B4C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801B9B50
  c->r[6]=c->r[7]^0x80000000u; // 801B9B54
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 801B9B58
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 801B9B5C
  c->r[5]=c->r[0]^0x80000000u; // 801B9B60
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 801B9B64
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 801B9B68
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9B6C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801B9B70
  if (crb(c,2)) { goto L_801B9B84; } // 801B9B74
  c->r[3]=0u+0x00000000u; // 801B9B78
  c->lr=0x801B9B80u; f_801B81CC(c); // 801B9B7C
  goto L_801B9BB4; // 801B9B80
L_801B9B84:;
  c->r[4]=0u+0x80000000u; // 801B9B84
  c->r[3]=c->r[7]^0x80000000u; // 801B9B88
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 801B9B8C
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801B9B90
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9B94
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801B9B98
  if (crb(c,2)) { goto L_801B9BAC; } // 801B9B9C
  c->r[3]=c->r[8]|c->r[8]; // 801B9BA0
  c->lr=0x801B9BA8u; f_801B81CC(c); // 801B9BA4
  goto L_801B9BB4; // 801B9BA8
L_801B9BAC:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801B9BAC
  c->lr=0x801B9BB4u; f_801B81CC(c); // 801B9BB0
L_801B9BB4:;
  c->r[0]=0u+0x00000000u; // 801B9BB4
  c->r[3]=c->r[31]|c->r[31]; // 801B9BB8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B9BBC
  c->lr=0x801B9BC4u; f_801BE774(c); // 801B9BC0
L_801B9BC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9BC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9BC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9BCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9BD0
  c->lr=c->r[0]; // 801B9BD4
  c->r[1]=c->r[1]+0x00000020u; // 801B9BD8
  return; // 801B9BDC
}

// DecrementerExceptionCallback
void f_801B9BE0(Ctx* __restrict c) {
  trace_call(0x801B9BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9BE0
  c->r[0]=c->lr; // 801B9BE4
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801B9BE8
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801B9BEC
  W32(c->r[1]+0x000002D8u,c->r[30]); // 801B9BF0
  W32(c->r[1]+0x000002D4u,c->r[29]); // 801B9BF4
  c->r[29]=c->r[4]|c->r[4]; // 801B9BF8
  W32(c->r[1]+0x000002D0u,c->r[28]); // 801B9BFC
  c->lr=0x801B9C04u; f_801C259C(c); // 801B9C00
  c->r[31]=R32(c->r[13]+0xFFFF9C98u); // 801B9C04
  c->r[28]=c->r[4]|c->r[4]; // 801B9C08
  c->r[30]=c->r[3]|c->r[3]; // 801B9C0C
  cmps(c,0,(int32_t)c->r[31],0); // 801B9C10
  if (!crb(c,2)) { goto L_801B9C20; } // 801B9C14
  c->r[3]=c->r[29]|c->r[29]; // 801B9C18
  c->lr=0x801B9C20u; f_801BAEB0(c); // 801B9C1C
L_801B9C20:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801B9C20
  c->r[0]=c->r[30]^0x80000000u; // 801B9C24
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 801B9C28
  c->r[4]=c->r[3]^0x80000000u; // 801B9C2C
  c->r[3]=addc(c,~c->r[5],c->r[28],1); // 801B9C30
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801B9C34
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B9C38
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801B9C3C
  if (crb(c,2)) { goto L_801B9CBC; } // 801B9C40
  c->lr=0x801B9C48u; f_801C259C(c); // 801B9C44
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 801B9C48
  c->r[7]=0u+0x00000000u; // 801B9C4C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B9C50
  c->r[6]=c->r[7]^0x80000000u; // 801B9C54
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 801B9C58
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 801B9C5C
  c->r[5]=c->r[0]^0x80000000u; // 801B9C60
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 801B9C64
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 801B9C68
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9C6C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801B9C70
  if (crb(c,2)) { goto L_801B9C84; } // 801B9C74
  c->r[3]=0u+0x00000000u; // 801B9C78
  c->lr=0x801B9C80u; f_801B81CC(c); // 801B9C7C
  goto L_801B9CB4; // 801B9C80
L_801B9C84:;
  c->r[4]=0u+0x80000000u; // 801B9C84
  c->r[3]=c->r[7]^0x80000000u; // 801B9C88
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 801B9C8C
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801B9C90
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9C94
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801B9C98
  if (crb(c,2)) { goto L_801B9CAC; } // 801B9C9C
  c->r[3]=c->r[8]|c->r[8]; // 801B9CA0
  c->lr=0x801B9CA8u; f_801B81CC(c); // 801B9CA4
  goto L_801B9CB4; // 801B9CA8
L_801B9CAC:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801B9CAC
  c->lr=0x801B9CB4u; f_801B81CC(c); // 801B9CB0
L_801B9CB4:;
  c->r[3]=c->r[29]|c->r[29]; // 801B9CB4
  c->lr=0x801B9CBCu; f_801BAEB0(c); // 801B9CB8
L_801B9CBC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801B9CBC
  cmps(c,0,(int32_t)c->r[3],0); // 801B9CC0
  W32(c->r[13]+0xFFFF9C98u,c->r[3]); // 801B9CC4
  if (!crb(c,2)) { goto L_801B9CDC; } // 801B9CC8
  c->r[0]=0u+0x00000000u; // 801B9CCC
  c->r[3]=c->r[13]+0xFFFF9C98u; // 801B9CD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B9CD4
  goto L_801B9CE4; // 801B9CD8
L_801B9CDC:;
  c->r[0]=0u+0x00000000u; // 801B9CDC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801B9CE0
L_801B9CE4:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 801B9CE4
  c->r[6]=0u+0x00000000u; // 801B9CE8
  c->r[0]=c->r[6]^0x80000000u; // 801B9CEC
  W32(c->r[31]+0x00000000u,c->r[6]); // 801B9CF0
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B9CF4
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 801B9CF8
  c->r[4]=c->r[3]^0x80000000u; // 801B9CFC
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 801B9D00
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801B9D04
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B9D08
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801B9D0C
  if (crb(c,2)) { goto L_801B9D28; } // 801B9D10
  c->r[3]=c->r[31]|c->r[31]; // 801B9D14
  c->r[7]=c->r[30]|c->r[30]; // 801B9D18
  c->r[6]=0u+0x00000000u; // 801B9D1C
  c->r[5]=0u+0x00000000u; // 801B9D20
  c->lr=0x801B9D28u; f_801B9784(c); // 801B9D24
L_801B9D28:;
  c->r[28]=R32(c->r[13]+0xFFFF9C98u); // 801B9D28
  cmps(c,0,(int32_t)c->r[28],0); // 801B9D2C
  if (crb(c,2)) { goto L_801B9DA4; } // 801B9D30
  c->lr=0x801B9D38u; f_801C259C(c); // 801B9D34
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 801B9D38
  c->r[7]=0u+0x00000000u; // 801B9D3C
  c->r[0]=R32(c->r[28]+0x00000008u); // 801B9D40
  c->r[6]=c->r[7]^0x80000000u; // 801B9D44
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 801B9D48
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 801B9D4C
  c->r[5]=c->r[0]^0x80000000u; // 801B9D50
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 801B9D54
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 801B9D58
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9D5C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801B9D60
  if (crb(c,2)) { goto L_801B9D74; } // 801B9D64
  c->r[3]=0u+0x00000000u; // 801B9D68
  c->lr=0x801B9D70u; f_801B81CC(c); // 801B9D6C
  goto L_801B9DA4; // 801B9D70
L_801B9D74:;
  c->r[4]=0u+0x80000000u; // 801B9D74
  c->r[3]=c->r[7]^0x80000000u; // 801B9D78
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 801B9D7C
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801B9D80
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801B9D84
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801B9D88
  if (crb(c,2)) { goto L_801B9D9C; } // 801B9D8C
  c->r[3]=c->r[8]|c->r[8]; // 801B9D90
  c->lr=0x801B9D98u; f_801B81CC(c); // 801B9D94
  goto L_801B9DA4; // 801B9D98
L_801B9D9C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801B9D9C
  c->lr=0x801B9DA4u; f_801B81CC(c); // 801B9DA0
L_801B9DA4:;
  c->lr=0x801B9DA8u; f_801C11DC(c); // 801B9DA4
  c->r[3]=c->r[1]+0x00000008u; // 801B9DA8
  c->lr=0x801B9DB0u; f_801BAFF0(c); // 801B9DAC
  c->r[3]=c->r[1]+0x00000008u; // 801B9DB0
  c->lr=0x801B9DB8u; f_801BADC8(c); // 801B9DB4
  c->r[12]=c->r[30]|c->r[30]; // 801B9DB8
  c->r[3]=c->r[31]|c->r[31]; // 801B9DBC
  c->r[4]=c->r[29]|c->r[29]; // 801B9DC0
  c->ctr=c->r[12]; // 801B9DC4
  if (true) { c->lr=0x801B9DCCu; dispatch(c,c->ctr); } // 801B9DC8
  c->r[3]=c->r[1]+0x00000008u; // 801B9DCC
  c->lr=0x801B9DD4u; f_801BAFF0(c); // 801B9DD0
  c->r[3]=c->r[29]|c->r[29]; // 801B9DD4
  c->lr=0x801B9DDCu; f_801BADC8(c); // 801B9DD8
  c->lr=0x801B9DE0u; f_801C1218(c); // 801B9DDC
  c->lr=0x801B9DE4u; f_801C1724(c); // 801B9DE0
  c->r[3]=c->r[29]|c->r[29]; // 801B9DE4
  c->lr=0x801B9DECu; f_801BAEB0(c); // 801B9DE8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801B9DEC
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801B9DF0
  c->r[30]=R32(c->r[1]+0x000002D8u); // 801B9DF4
  c->r[29]=R32(c->r[1]+0x000002D4u); // 801B9DF8
  c->r[28]=R32(c->r[1]+0x000002D0u); // 801B9DFC
  c->lr=c->r[0]; // 801B9E00
  c->r[1]=c->r[1]+0x000002E0u; // 801B9E04
  return; // 801B9E08
}

// fn_801B9E0C
void f_801B9E0C(Ctx* __restrict c) {
  trace_call(0x801B9E0Cu);
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B9E0C
  W32(c->r[4]+0x00000004u,c->r[1]); // 801B9E10
  W32(c->r[4]+0x00000008u,c->r[2]); // 801B9E14
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B9E18
  c->r[0]=mfspr(c,913); // 801B9E1C
  W32(c->r[4]+0x000001A8u,c->r[0]); // 801B9E20
  c->r[0]=mfspr(c,914); // 801B9E24
  W32(c->r[4]+0x000001ACu,c->r[0]); // 801B9E28
  c->r[0]=mfspr(c,915); // 801B9E2C
  W32(c->r[4]+0x000001B0u,c->r[0]); // 801B9E30
  c->r[0]=mfspr(c,916); // 801B9E34
  W32(c->r[4]+0x000001B4u,c->r[0]); // 801B9E38
  c->r[0]=mfspr(c,917); // 801B9E3C
  W32(c->r[4]+0x000001B8u,c->r[0]); // 801B9E40
  c->r[0]=mfspr(c,918); // 801B9E44
  W32(c->r[4]+0x000001BCu,c->r[0]); // 801B9E48
  c->r[0]=mfspr(c,919); // 801B9E4C
  W32(c->r[4]+0x000001C0u,c->r[0]); // 801B9E50
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9E54
  f_801B9BE0(c); return; // 801B9E58
}

// OSSetAlarmTag
void f_801B9E5C(Ctx* __restrict c) {
  trace_call(0x801B9E5Cu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B9E5C
  return; // 801B9E60
}

// OnReset
void f_801B9E64(Ctx* __restrict c) {
  trace_call(0x801B9E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9E64
  c->r[0]=c->lr; // 801B9E68
  cmps(c,0,(int32_t)c->r[3],0); // 801B9E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9E74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9E78
  if (crb(c,2)) { goto L_801B9ED4; } // 801B9E7C
  c->r[31]=R32(c->r[13]+0xFFFF9C98u); // 801B9E80
  cmps(c,0,(int32_t)c->r[31],0); // 801B9E84
  if (crb(c,2)) { goto L_801B9E94; } // 801B9E88
  c->r[30]=R32(c->r[31]+0x00000014u); // 801B9E8C
  goto L_801B9ECC; // 801B9E90
L_801B9E94:;
  c->r[30]=0u+0x00000000u; // 801B9E94
  goto L_801B9ECC; // 801B9E98
L_801B9E9C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B9E9C
  c->lr=0x801B9EA4u; f_801CB4AC(c); // 801B9EA0
  cmps(c,0,(int32_t)c->r[3],0); // 801B9EA4
  if (!crb(c,2)) { goto L_801B9EB4; } // 801B9EA8
  c->r[3]=c->r[31]|c->r[31]; // 801B9EAC
  c->lr=0x801B9EB4u; f_801B9AC8(c); // 801B9EB0
L_801B9EB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B9EB4
  c->r[31]=c->r[30]|c->r[30]; // 801B9EB8
  if (crb(c,2)) { goto L_801B9EC8; } // 801B9EBC
  c->r[30]=R32(c->r[30]+0x00000014u); // 801B9EC0
  goto L_801B9ECC; // 801B9EC4
L_801B9EC8:;
  c->r[30]=0u+0x00000000u; // 801B9EC8
L_801B9ECC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9ECC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9E9C; } // 801B9ED0
L_801B9ED4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9ED4
  c->r[3]=0u+0x00000001u; // 801B9ED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9EE0
  c->lr=c->r[0]; // 801B9EE4
  c->r[1]=c->r[1]+0x00000010u; // 801B9EE8
  return; // 801B9EEC
}

// OSSetAlarmUserData
void f_801B9EF0(Ctx* __restrict c) {
  trace_call(0x801B9EF0u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 801B9EF0
  return; // 801B9EF4
}

// OSGetAlarmUserData
void f_801B9EF8(Ctx* __restrict c) {
  trace_call(0x801B9EF8u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 801B9EF8
  return; // 801B9EFC
}

// DLInsert
void f_801B9F00(Ctx* __restrict c) {
  trace_call(0x801B9F00u);
  c->r[7]=c->r[3]|c->r[3]; // 801B9F00
  c->r[6]=0u+0x00000000u; // 801B9F04
  goto L_801B9F1C; // 801B9F08
L_801B9F0C:;
  cmpu(c,0,c->r[4],c->r[7]); // 801B9F0C
  if (!crb(c,1)) { goto L_801B9F24; } // 801B9F10
  c->r[6]=c->r[7]|c->r[7]; // 801B9F14
  c->r[7]=R32(c->r[7]+0x00000004u); // 801B9F18
L_801B9F1C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9F1C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9F0C; } // 801B9F20
L_801B9F24:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B9F24
  W32(c->r[4]+0x00000004u,c->r[7]); // 801B9F28
  W32(c->r[4]+0x00000000u,c->r[6]); // 801B9F2C
  if (crb(c,2)) { goto L_801B9F68; } // 801B9F30
  W32(c->r[7]+0x00000000u,c->r[4]); // 801B9F34
  c->r[5]=R32(c->r[4]+0x00000008u); // 801B9F38
  c->r[0]=c->r[4]+c->r[5]; // 801B9F3C
  cmpu(c,0,c->r[0],c->r[7]); // 801B9F40
  if (!crb(c,2)) { goto L_801B9F68; } // 801B9F44
  c->r[0]=R32(c->r[7]+0x00000008u); // 801B9F48
  c->r[0]=c->r[5]+c->r[0]; // 801B9F4C
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B9F50
  c->r[7]=R32(c->r[7]+0x00000004u); // 801B9F54
  cmps(c,0,(int32_t)c->r[7],0); // 801B9F58
  W32(c->r[4]+0x00000004u,c->r[7]); // 801B9F5C
  if (crb(c,2)) { goto L_801B9F68; } // 801B9F60
  W32(c->r[7]+0x00000000u,c->r[4]); // 801B9F64
L_801B9F68:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B9F68
  if (crb(c,2)) { goto L_801B9FA4; } // 801B9F6C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801B9F70
  c->r[5]=R32(c->r[6]+0x00000008u); // 801B9F74
  c->r[0]=c->r[6]+c->r[5]; // 801B9F78
  cmpu(c,0,c->r[0],c->r[4]); // 801B9F7C
  if (!crb(c,2)) return; // 801B9F80
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B9F84
  cmps(c,0,(int32_t)c->r[7],0); // 801B9F88
  c->r[0]=c->r[5]+c->r[0]; // 801B9F8C
  W32(c->r[6]+0x00000008u,c->r[0]); // 801B9F90
  W32(c->r[6]+0x00000004u,c->r[7]); // 801B9F94
  if (crb(c,2)) return; // 801B9F98
  W32(c->r[7]+0x00000000u,c->r[6]); // 801B9F9C
  return; // 801B9FA0
L_801B9FA4:;
  c->r[3]=c->r[4]|c->r[4]; // 801B9FA4
  return; // 801B9FA8
}

// OSAllocFromHeap
void f_801B9FAC(Ctx* __restrict c) {
  trace_call(0x801B9FACu);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B9FAC
  c->r[5]=R32(c->r[13]+0xFFFF9CACu); // 801B9FB0
  c->r[0]=c->r[4]+0x0000003Fu; // 801B9FB4
  c->r[5]=c->r[5]+c->r[3]; // 801B9FB8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B9FBC
  c->r[3]=R32(c->r[5]+0x00000004u); // 801B9FC0
  c->r[6]=c->r[3]|c->r[3]; // 801B9FC4
  goto L_801B9FDC; // 801B9FC8
L_801B9FCC:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 801B9FCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B9FD0
  if (!crb(c,1)) { goto L_801B9FE4; } // 801B9FD4
  c->r[6]=R32(c->r[6]+0x00000004u); // 801B9FD8
L_801B9FDC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B9FDC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9FCC; } // 801B9FE0
L_801B9FE4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B9FE4
  if (!crb(c,2)) { goto L_801B9FF4; } // 801B9FE8
  c->r[3]=0u+0x00000000u; // 801B9FEC
  return; // 801B9FF0
L_801B9FF4:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 801B9FF4
  c->r[0]=c->r[0]-c->r[4]; // 801B9FF8
  cmpu(c,0,c->r[0],0x00000040u); // 801B9FFC
  if (!crb(c,0)) { goto L_801BA03C; } // 801BA000
  c->r[4]=R32(c->r[6]+0x00000004u); // 801BA004
  cmps(c,0,(int32_t)c->r[4],0); // 801BA008
  if (crb(c,2)) { goto L_801BA018; } // 801BA00C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801BA010
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BA014
L_801BA018:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801BA018
  cmps(c,0,(int32_t)c->r[4],0); // 801BA01C
  if (!crb(c,2)) { goto L_801BA02C; } // 801BA020
  c->r[3]=R32(c->r[6]+0x00000004u); // 801BA024
  goto L_801BA034; // 801BA028
L_801BA02C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 801BA02C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801BA030
L_801BA034:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BA034
  goto L_801BA07C; // 801BA038
L_801BA03C:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 801BA03C
  c->r[4]=c->r[6]+c->r[4]; // 801BA040
  W32(c->r[4]+0x00000008u,c->r[0]); // 801BA044
  c->r[0]=R32(c->r[6]+0x00000000u); // 801BA048
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BA04C
  c->r[3]=R32(c->r[6]+0x00000004u); // 801BA050
  cmps(c,0,(int32_t)c->r[3],0); // 801BA054
  W32(c->r[4]+0x00000004u,c->r[3]); // 801BA058
  if (crb(c,2)) { goto L_801BA064; } // 801BA05C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BA060
L_801BA064:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801BA064
  cmps(c,0,(int32_t)c->r[3],0); // 801BA068
  if (crb(c,2)) { goto L_801BA078; } // 801BA06C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801BA070
  goto L_801BA07C; // 801BA074
L_801BA078:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 801BA078
L_801BA07C:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801BA07C
  c->r[0]=0u+0x00000000u; // 801BA080
  W32(c->r[6]+0x00000004u,c->r[3]); // 801BA084
  cmps(c,0,(int32_t)c->r[3],0); // 801BA088
  W32(c->r[6]+0x00000000u,c->r[0]); // 801BA08C
  if (crb(c,2)) { goto L_801BA098; } // 801BA090
  W32(c->r[3]+0x00000000u,c->r[6]); // 801BA094
L_801BA098:;
  W32(c->r[5]+0x00000008u,c->r[6]); // 801BA098
  c->r[3]=c->r[6]+0x00000020u; // 801BA09C
  return; // 801BA0A0
}

// OSFreeToHeap
void f_801BA0A4(Ctx* __restrict c) {
  trace_call(0x801BA0A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA0A4
  c->r[0]=c->lr; // 801BA0A8
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 801BA0AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA0B0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801BA0B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA0B8
  c->r[5]=R32(c->r[13]+0xFFFF9CACu); // 801BA0BC
  c->r[6]=R32(c->r[4]+0x00000004u); // 801BA0C0
  c->r[31]=c->r[5]+c->r[0]; // 801BA0C4
  cmps(c,0,(int32_t)c->r[6],0); // 801BA0C8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801BA0CC
  if (crb(c,2)) { goto L_801BA0DC; } // 801BA0D0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BA0D4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801BA0D8
L_801BA0DC:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801BA0DC
  cmps(c,0,(int32_t)c->r[5],0); // 801BA0E0
  if (!crb(c,2)) { goto L_801BA0F0; } // 801BA0E4
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BA0E8
  goto L_801BA0F8; // 801BA0EC
L_801BA0F0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BA0F0
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BA0F4
L_801BA0F8:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 801BA0F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BA0FC
  c->lr=0x801BA104u; f_801B9F00(c); // 801BA100
  W32(c->r[31]+0x00000004u,c->r[3]); // 801BA104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA108
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA10C
  c->lr=c->r[0]; // 801BA110
  c->r[1]=c->r[1]+0x00000010u; // 801BA114
  return; // 801BA118
}

// OSSetCurrentHeap
void f_801BA11C(Ctx* __restrict c) {
  trace_call(0x801BA11Cu);
  c->r[0]=R32(c->r[13]+0xFFFF8400u); // 801BA11C
  W32(c->r[13]+0xFFFF8400u,c->r[3]); // 801BA120
  c->r[3]=c->r[0]|c->r[0]; // 801BA124
  return; // 801BA128
}

// OSInitAlloc
void f_801BA12C(Ctx* __restrict c) {
  trace_call(0x801BA12Cu);
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801BA12C
  W32(c->r[13]+0xFFFF9CACu,c->r[3]); // 801BA130
  c->r[8]=0u+0x00000000u; // 801BA134
  W32(c->r[13]+0xFFFF9CA8u,c->r[5]); // 801BA138
  c->r[6]=0u+0x00000000u; // 801BA13C
  c->r[5]=0u+0xFFFFFFFFu; // 801BA140
  c->r[3]=0u+0x00000000u; // 801BA144
  goto L_801BA168; // 801BA148
L_801BA14C:;
  c->r[0]=R32(c->r[13]+0xFFFF9CACu); // 801BA14C
  c->r[8]=c->r[8]+0x00000001u; // 801BA150
  W32(c->r[6]+c->r[0],c->r[5]); // 801BA154
  c->r[9]=c->r[0]+c->r[6]; // 801BA158
  c->r[6]=c->r[6]+0x0000000Cu; // 801BA15C
  W32(c->r[9]+0x00000008u,c->r[3]); // 801BA160
  W32(c->r[9]+0x00000004u,c->r[3]); // 801BA164
L_801BA168:;
  c->r[0]=R32(c->r[13]+0xFFFF9CA8u); // 801BA168
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801BA16C
  if (crb(c,0)) { IRQCHK(c); goto L_801BA14C; } // 801BA170
  c->r[3]=R32(c->r[13]+0xFFFF9CACu); // 801BA174
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801BA178
  c->r[4]=0u+0xFFFFFFFFu; // 801BA17C
  W32(c->r[13]+0xFFFF9CA0u,c->r[0]); // 801BA180
  c->r[3]=c->r[3]+c->r[7]; // 801BA184
  c->r[0]=c->r[3]+0x0000001Fu; // 801BA188
  W32(c->r[13]+0xFFFF8400u,c->r[4]); // 801BA18C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BA190
  W32(c->r[13]+0xFFFF9CA4u,c->r[3]); // 801BA194
  return; // 801BA198
}

// OSCreateHeap
void f_801BA19C(Ctx* __restrict c) {
  trace_call(0x801BA19Cu);
  c->r[6]=R32(c->r[13]+0xFFFF9CA8u); // 801BA19C
  c->r[0]=c->r[3]+0x0000001Fu; // 801BA1A0
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BA1A4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801BA1A8
  c->r[5]=R32(c->r[13]+0xFFFF9CACu); // 801BA1AC
  c->r[3]=0u+0x00000000u; // 801BA1B0
  c->ctr=c->r[6]; // 801BA1B4
  cmps(c,0,(int32_t)c->r[6],0); // 801BA1B8
  if (!crb(c,1)) { goto L_801BA200; } // 801BA1BC
L_801BA1C0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BA1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801BA1C4
  if (!crb(c,0)) { goto L_801BA1F4; } // 801BA1C8
  c->r[0]=c->r[4]-c->r[7]; // 801BA1CC
  c->r[4]=0u+0x00000000u; // 801BA1D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801BA1D4
  W32(c->r[7]+0x00000000u,c->r[4]); // 801BA1D8
  W32(c->r[7]+0x00000004u,c->r[4]); // 801BA1DC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BA1E0
  W32(c->r[7]+0x00000008u,c->r[0]); // 801BA1E4
  W32(c->r[5]+0x00000004u,c->r[7]); // 801BA1E8
  W32(c->r[5]+0x00000008u,c->r[4]); // 801BA1EC
  return; // 801BA1F0
L_801BA1F4:;
  c->r[5]=c->r[5]+0x0000000Cu; // 801BA1F4
  c->r[3]=c->r[3]+0x00000001u; // 801BA1F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA1C0; } // 801BA1FC
L_801BA200:;
  c->r[3]=0u+0xFFFFFFFFu; // 801BA200
  return; // 801BA204
}

// OSGetMEM1ArenaHi
void f_801BA208(Ctx* __restrict c) {
  trace_call(0x801BA208u);
  c->r[3]=R32(c->r[13]+0xFFFF9CB0u); // 801BA208
  return; // 801BA20C
}

// OSGetMEM2ArenaHi
void f_801BA210(Ctx* __restrict c) {
  trace_call(0x801BA210u);
  c->r[3]=R32(c->r[13]+0xFFFF9CB4u); // 801BA210
  return; // 801BA214
}

// OSGetArenaHi
void f_801BA218(Ctx* __restrict c) {
  trace_call(0x801BA218u);
  c->r[3]=R32(c->r[13]+0xFFFF9CB0u); // 801BA218
  return; // 801BA21C
}

// OSGetMEM1ArenaLo
void f_801BA220(Ctx* __restrict c) {
  trace_call(0x801BA220u);
  c->r[3]=R32(c->r[13]+0xFFFF8408u); // 801BA220
  return; // 801BA224
}

// OSGetMEM2ArenaLo
void f_801BA228(Ctx* __restrict c) {
  trace_call(0x801BA228u);
  c->r[3]=R32(c->r[13]+0xFFFF840Cu); // 801BA228
  return; // 801BA22C
}

// OSGetArenaLo
void f_801BA230(Ctx* __restrict c) {
  trace_call(0x801BA230u);
  c->r[3]=R32(c->r[13]+0xFFFF8408u); // 801BA230
  return; // 801BA234
}

// OSSetMEM1ArenaHi
void f_801BA238(Ctx* __restrict c) {
  trace_call(0x801BA238u);
  W32(c->r[13]+0xFFFF9CB0u,c->r[3]); // 801BA238
  return; // 801BA23C
}

// OSSetMEM2ArenaHi
void f_801BA240(Ctx* __restrict c) {
  trace_call(0x801BA240u);
  W32(c->r[13]+0xFFFF9CB4u,c->r[3]); // 801BA240
  return; // 801BA244
}

// OSSetArenaHi
void f_801BA248(Ctx* __restrict c) {
  trace_call(0x801BA248u);
  W32(c->r[13]+0xFFFF9CB0u,c->r[3]); // 801BA248
  return; // 801BA24C
}

// OSSetMEM1ArenaLo
void f_801BA250(Ctx* __restrict c) {
  trace_call(0x801BA250u);
  W32(c->r[13]+0xFFFF8408u,c->r[3]); // 801BA250
  return; // 801BA254
}

// OSSetMEM2ArenaLo
void f_801BA258(Ctx* __restrict c) {
  trace_call(0x801BA258u);
  W32(c->r[13]+0xFFFF840Cu,c->r[3]); // 801BA258
  return; // 801BA25C
}

// OSSetArenaLo
void f_801BA260(Ctx* __restrict c) {
  trace_call(0x801BA260u);
  W32(c->r[13]+0xFFFF8408u,c->r[3]); // 801BA260
  return; // 801BA264
}

// OSAllocFromMEM1ArenaLo
void f_801BA268(Ctx* __restrict c) {
  trace_call(0x801BA268u);
  c->r[0]=R32(c->r[13]+0xFFFF8408u); // 801BA268
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801BA26C
  c->r[6]=~(c->r[5]|c->r[5]); // 801BA270
  c->r[5]=c->r[4]+c->r[0]; // 801BA274
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801BA278
  c->r[0]=c->r[6]&c->r[0]; // 801BA27C
  c->r[3]=c->r[0]+c->r[3]; // 801BA280
  c->r[4]=c->r[3]+c->r[4]; // 801BA284
  c->r[3]=c->r[0]|c->r[0]; // 801BA288
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801BA28C
  c->r[0]=c->r[6]&c->r[0]; // 801BA290
  W32(c->r[13]+0xFFFF8408u,c->r[0]); // 801BA294
  return; // 801BA298
}

// __AIClockInit
void f_801BA29C(Ctx* __restrict c) {
  trace_call(0x801BA29Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA29C
  c->r[0]=c->lr; // 801BA2A0
  c->r[4]=0u+0xCD800000u; // 801BA2A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA2A8
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BA2AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA2B0
  c->r[31]=c->r[3]|c->r[3]; // 801BA2B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA2B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA2BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BA2C0
  c->r[5]=R32(c->r[4]+0x00000180u); // 801BA2C4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 801BA2C8
  c->r[5]=c->r[5]|c->r[0]; // 801BA2CC
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 801BA2D0
  W32(c->r[4]+0x00000180u,c->r[0]); // 801BA2D4
  c->r[0]=R32(c->r[4]+0x000001D0u); // 801BA2D8
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 801BA2DC
  W32(c->r[4]+0x000001D0u,c->r[0]); // 801BA2E0
  c->lr=0x801BA2E8u; f_801C2594(c); // 801BA2E4
  c->r[4]=0u+0x431C0000u; // 801BA2E8
  c->r[28]=c->r[3]|c->r[3]; // 801BA2EC
  c->r[30]=c->r[4]+0xFFFFDE83u; // 801BA2F0
  c->r[29]=0u+0x80000000u; // 801BA2F4
L_801BA2F8:;
  c->lr=0x801BA2FCu; f_801C2594(c); // 801BA2F8
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801BA2FC
  c->r[3]=c->r[3]-c->r[28]; // 801BA300
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BA304
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BA308
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801BA30C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 801BA310
  c->r[0]=divwu(c->r[3],c->r[0]); // 801BA314
  cmpu(c,0,c->r[0],0x00000064u); // 801BA318
  if (crb(c,0)) { IRQCHK(c); goto L_801BA2F8; } // 801BA31C
  cmps(c,0,(int32_t)c->r[31],0); // 801BA320
  if (!crb(c,2)) { goto L_801BA350; } // 801BA324
  c->r[4]=0u+0xCD800000u; // 801BA328
  c->r[3]=0u+0xF8040000u; // 801BA32C
  c->r[5]=R32(c->r[4]+0x000001CCu); // 801BA330
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 801BA334
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 801BA338
  c->r[3]=c->r[3]|0x00000FC0u; // 801BA33C
  c->r[0]=c->r[3]&c->r[0]; // 801BA340
  c->r[0]=c->r[0]|0x04640000u; // 801BA344
  W32(c->r[4]+0x000001CCu,c->r[0]); // 801BA348
  goto L_801BA374; // 801BA34C
L_801BA350:;
  c->r[3]=0u+0xCD800000u; // 801BA350
  c->r[0]=R32(c->r[3]+0x000001CCu); // 801BA354
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 801BA358
  c->r[0]=c->r[0]|0x0000FFC0u; // 801BA35C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 801BA360
  c->r[0]=c->r[0]|0x0000000Eu; // 801BA364
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 801BA368
  c->r[0]=c->r[0]|0x04B00000u; // 801BA36C
  W32(c->r[3]+0x000001CCu,c->r[0]); // 801BA370
L_801BA374:;
  c->lr=0x801BA378u; f_801C2594(c); // 801BA374
  c->r[4]=0u+0x431C0000u; // 801BA378
  c->r[31]=c->r[3]|c->r[3]; // 801BA37C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 801BA380
  c->r[29]=0u+0x80000000u; // 801BA384
L_801BA388:;
  c->lr=0x801BA38Cu; f_801C2594(c); // 801BA388
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801BA38C
  c->r[3]=c->r[3]-c->r[31]; // 801BA390
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BA394
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BA398
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801BA39C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 801BA3A0
  c->r[0]=divwu(c->r[3],c->r[0]); // 801BA3A4
  cmpu(c,0,c->r[0],0x00000064u); // 801BA3A8
  if (crb(c,0)) { IRQCHK(c); goto L_801BA388; } // 801BA3AC
  c->r[3]=0u+0xCD800000u; // 801BA3B0
  c->r[0]=R32(c->r[3]+0x000001D0u); // 801BA3B4
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 801BA3B8
  W32(c->r[3]+0x000001D0u,c->r[0]); // 801BA3BC
  c->lr=0x801BA3C4u; f_801C2594(c); // 801BA3C0
  c->r[4]=0u+0x431C0000u; // 801BA3C4
  c->r[31]=c->r[3]|c->r[3]; // 801BA3C8
  c->r[30]=c->r[4]+0xFFFFDE83u; // 801BA3CC
  c->r[29]=0u+0x80000000u; // 801BA3D0
L_801BA3D4:;
  c->lr=0x801BA3D8u; f_801C2594(c); // 801BA3D4
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801BA3D8
  c->r[3]=c->r[3]-c->r[31]; // 801BA3DC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BA3E0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BA3E4
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801BA3E8
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 801BA3EC
  c->r[0]=divwu(c->r[3],c->r[0]); // 801BA3F0
  cmpu(c,0,c->r[0],0x000003E8u); // 801BA3F4
  if (crb(c,0)) { IRQCHK(c); goto L_801BA3D4; } // 801BA3F8
  c->r[3]=0u+0xCD800000u; // 801BA3FC
  c->r[0]=R32(c->r[3]+0x000001D0u); // 801BA400
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801BA404
  c->r[0]=c->r[0]|0x40000000u; // 801BA408
  W32(c->r[3]+0x000001D0u,c->r[0]); // 801BA40C
  c->lr=0x801BA414u; f_801C2594(c); // 801BA410
  c->r[4]=0u+0x431C0000u; // 801BA414
  c->r[31]=c->r[3]|c->r[3]; // 801BA418
  c->r[30]=c->r[4]+0xFFFFDE83u; // 801BA41C
  c->r[29]=0u+0x80000000u; // 801BA420
L_801BA424:;
  c->lr=0x801BA428u; f_801C2594(c); // 801BA424
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801BA428
  c->r[3]=c->r[3]-c->r[31]; // 801BA42C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BA430
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BA434
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801BA438
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 801BA43C
  c->r[0]=divwu(c->r[3],c->r[0]); // 801BA440
  cmpu(c,0,c->r[0],0x000003E8u); // 801BA444
  if (crb(c,0)) { IRQCHK(c); goto L_801BA424; } // 801BA448
  c->r[3]=0u+0xCD800000u; // 801BA44C
  c->r[0]=R32(c->r[3]+0x000001D0u); // 801BA450
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801BA454
  c->r[0]=c->r[0]|0x80000000u; // 801BA458
  W32(c->r[3]+0x000001D0u,c->r[0]); // 801BA45C
  c->lr=0x801BA464u; f_801C2594(c); // 801BA460
  c->r[4]=0u+0x431C0000u; // 801BA464
  c->r[29]=c->r[3]|c->r[3]; // 801BA468
  c->r[30]=c->r[4]+0xFFFFDE83u; // 801BA46C
  c->r[31]=0u+0x80000000u; // 801BA470
L_801BA474:;
  c->lr=0x801BA478u; f_801C2594(c); // 801BA474
  c->r[0]=R32(c->r[31]+0x000000F8u); // 801BA478
  c->r[3]=c->r[3]-c->r[29]; // 801BA47C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BA480
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BA484
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801BA488
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 801BA48C
  c->r[0]=divwu(c->r[3],c->r[0]); // 801BA490
  cmpu(c,0,c->r[0],0x000003E8u); // 801BA494
  if (crb(c,0)) { IRQCHK(c); goto L_801BA474; } // 801BA498
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA49C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA4A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA4A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA4A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BA4AC
  c->lr=c->r[0]; // 801BA4B0
  c->r[1]=c->r[1]+0x00000020u; // 801BA4B4
  return; // 801BA4B8
}

// __OSInitAudioSystem
void f_801BA4BC(Ctx* __restrict c) {
  stub_log(0x801BA4BCu);  return;
}

// __OSStopAudioSystem
void f_801BA684(Ctx* __restrict c) {
  trace_call(0x801BA684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA684
  c->r[0]=c->lr; // 801BA688
  c->r[3]=0u+0xCC000000u; // 801BA68C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA690
  c->r[0]=0u+0x00000804u; // 801BA694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA698
  W16(c->r[3]+0x0000500Au,c->r[0]); // 801BA69C
  c->r[0]=R16(c->r[3]+0x00005036u); // 801BA6A0
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801BA6A4
  W16(c->r[3]+0x00005036u,c->r[0]); // 801BA6A8
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA6AC
  goto L_801BA6B8; // 801BA6B0
L_801BA6B4:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA6B4
L_801BA6B8:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801BA6B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA6B4; } // 801BA6BC
  c->r[3]=0u+0xCC000000u; // 801BA6C0
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA6C4
  goto L_801BA6D0; // 801BA6C8
L_801BA6CC:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA6CC
L_801BA6D0:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801BA6D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA6CC; } // 801BA6D4
  c->r[4]=0u+0xCC000000u; // 801BA6D8
  c->r[0]=0u+0x000008ACu; // 801BA6DC
  W16(c->r[4]+0x0000500Au,c->r[0]); // 801BA6E0
  c->r[0]=0u+0x00000000u; // 801BA6E4
  W16(c->r[4]+0x00005000u,c->r[0]); // 801BA6E8
L_801BA6EC:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 801BA6EC
  c->r[0]=R16(c->r[4]+0x00005006u); // 801BA6F0
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 801BA6F4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801BA6F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA6EC; } // 801BA6FC
  c->lr=0x801BA704u; f_801C2594(c); // 801BA700
  c->r[31]=c->r[3]|c->r[3]; // 801BA704
L_801BA708:;
  c->lr=0x801BA70Cu; f_801C2594(c); // 801BA708
  c->r[0]=c->r[3]-c->r[31]; // 801BA70C
  cmps(c,0,(int32_t)c->r[0],44); // 801BA710
  if (crb(c,0)) { IRQCHK(c); goto L_801BA708; } // 801BA714
  c->r[3]=0u+0xCC000000u; // 801BA718
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA71C
  c->r[0]=c->r[0]|0x00000001u; // 801BA720
  W16(c->r[3]+0x0000500Au,c->r[0]); // 801BA724
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA728
  goto L_801BA734; // 801BA72C
L_801BA730:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 801BA730
L_801BA734:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BA734
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA730; } // 801BA738
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA73C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA740
  c->lr=c->r[0]; // 801BA744
  c->r[1]=c->r[1]+0x00000010u; // 801BA748
  return; // 801BA74C
}

// DCEnable
void f_801BA750(Ctx* __restrict c) {
  trace_call(0x801BA750u);
  /* sync */ // 801BA750
  c->r[3]=mfspr(c,1008); // 801BA754
  c->r[3]=c->r[3]|0x00004000u; // 801BA758
  mtspr(c,1008,c->r[3]); // 801BA75C
  return; // 801BA760
}

// DCInvalidateRange
void f_801BA764(Ctx* __restrict c) {
  trace_call(0x801BA764u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA764
  if (!crb(c,1)) return; // 801BA768
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA76C
  c->r[4]=c->r[4]+c->r[5]; // 801BA770
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA774
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA778
  c->ctr=c->r[4]; // 801BA77C
L_801BA780:;
  /* dcbi */ // 801BA780
  c->r[3]=c->r[3]+0x00000020u; // 801BA784
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA780; } // 801BA788
  return; // 801BA78C
}

// DCFlushRange
void f_801BA790(Ctx* __restrict c) {
  trace_call(0x801BA790u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA790
  if (!crb(c,1)) return; // 801BA794
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA798
  c->r[4]=c->r[4]+c->r[5]; // 801BA79C
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA7A0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA7A4
  c->ctr=c->r[4]; // 801BA7A8
L_801BA7AC:;
  /* dcbf */ // 801BA7AC
  c->r[3]=c->r[3]+0x00000020u; // 801BA7B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA7AC; } // 801BA7B4
  sc(c,0x801BA7B8u); // 801BA7B8
  return; // 801BA7BC
}

// DCStoreRange
void f_801BA7C0(Ctx* __restrict c) {
  trace_call(0x801BA7C0u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA7C0
  if (!crb(c,1)) return; // 801BA7C4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA7C8
  c->r[4]=c->r[4]+c->r[5]; // 801BA7CC
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA7D0
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA7D4
  c->ctr=c->r[4]; // 801BA7D8
L_801BA7DC:;
  /* dcbst */ // 801BA7DC
  c->r[3]=c->r[3]+0x00000020u; // 801BA7E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA7DC; } // 801BA7E4
  sc(c,0x801BA7E8u); // 801BA7E8
  return; // 801BA7EC
}

// DCFlushRangeNoSync
void f_801BA7F0(Ctx* __restrict c) {
  trace_call(0x801BA7F0u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA7F0
  if (!crb(c,1)) return; // 801BA7F4
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA7F8
  c->r[4]=c->r[4]+c->r[5]; // 801BA7FC
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA800
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA804
  c->ctr=c->r[4]; // 801BA808
L_801BA80C:;
  /* dcbf */ // 801BA80C
  c->r[3]=c->r[3]+0x00000020u; // 801BA810
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA80C; } // 801BA814
  return; // 801BA818
}

// DCStoreRangeNoSync
void f_801BA81C(Ctx* __restrict c) {
  trace_call(0x801BA81Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA81C
  if (!crb(c,1)) return; // 801BA820
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA824
  c->r[4]=c->r[4]+c->r[5]; // 801BA828
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA82C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA830
  c->ctr=c->r[4]; // 801BA834
L_801BA838:;
  /* dcbst */ // 801BA838
  c->r[3]=c->r[3]+0x00000020u; // 801BA83C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA838; } // 801BA840
  return; // 801BA844
}

// DCZeroRange
void f_801BA848(Ctx* __restrict c) {
  trace_call(0x801BA848u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA848
  if (!crb(c,1)) return; // 801BA84C
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA850
  c->r[4]=c->r[4]+c->r[5]; // 801BA854
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA858
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA85C
  c->ctr=c->r[4]; // 801BA860
L_801BA864:;
  dcbz(0u+c->r[3]); // 801BA864
  c->r[3]=c->r[3]+0x00000020u; // 801BA868
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA864; } // 801BA86C
  return; // 801BA870
}

// ICInvalidateRange
void f_801BA874(Ctx* __restrict c) {
  trace_call(0x801BA874u);
  cmpu(c,0,c->r[4],0x00000000u); // 801BA874
  if (!crb(c,1)) return; // 801BA878
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 801BA87C
  c->r[4]=c->r[4]+c->r[5]; // 801BA880
  c->r[4]=c->r[4]+0x0000001Fu; // 801BA884
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801BA888
  c->ctr=c->r[4]; // 801BA88C
L_801BA890:;
  /* icbi */ // 801BA890
  c->r[3]=c->r[3]+0x00000020u; // 801BA894
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA890; } // 801BA898
  /* sync */ // 801BA89C
  /* isync */ // 801BA8A0
  return; // 801BA8A4
}

// ICFlashInvalidate
void f_801BA8A8(Ctx* __restrict c) {
  trace_call(0x801BA8A8u);
  c->r[3]=mfspr(c,1008); // 801BA8A8
  c->r[3]=c->r[3]|0x00000800u; // 801BA8AC
  mtspr(c,1008,c->r[3]); // 801BA8B0
  return; // 801BA8B4
}

// ICEnable
void f_801BA8B8(Ctx* __restrict c) {
  trace_call(0x801BA8B8u);
  /* isync */ // 801BA8B8
  c->r[3]=mfspr(c,1008); // 801BA8BC
  c->r[3]=c->r[3]|0x00008000u; // 801BA8C0
  mtspr(c,1008,c->r[3]); // 801BA8C4
  return; // 801BA8C8
}

// LCDisable
void f_801BA8CC(Ctx* __restrict c) {
  trace_call(0x801BA8CCu);
  c->r[3]=0u+0xE0000000u; // 801BA8CC
  c->r[4]=0u+0x00000200u; // 801BA8D0
  c->ctr=c->r[4]; // 801BA8D4
L_801BA8D8:;
  /* dcbi */ // 801BA8D8
  c->r[3]=c->r[3]+0x00000020u; // 801BA8DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA8D8; } // 801BA8E0
  c->r[4]=mfspr(c,920); // 801BA8E4
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 801BA8E8
  mtspr(c,920,c->r[4]); // 801BA8EC
  return; // 801BA8F0
}

// DMAErrorHandler
void f_801BA8F4(Ctx* __restrict c) {
  trace_call(0x801BA8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA8F4
  c->r[0]=c->lr; // 801BA8F8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801BA8FC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801BA900
  W32(c->r[1]+0x00000078u,c->r[30]); // 801BA904
  W32(c->r[1]+0x00000074u,c->r[29]); // 801BA908
  c->r[29]=c->r[4]|c->r[4]; // 801BA90C
  if (!crb(c,6)) { goto L_801BA934; } // 801BA910
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801BA914
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801BA918
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801BA91C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801BA920
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801BA924
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801BA928
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801BA92C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801BA930
L_801BA934:;
  c->r[31]=0u+0x804A0000u; // 801BA934
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BA938
  c->r[31]=c->r[31]+0x000029E8u; // 801BA93C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801BA940
  W32(c->r[1]+0x00000010u,c->r[5]); // 801BA944
  W32(c->r[1]+0x00000014u,c->r[6]); // 801BA948
  W32(c->r[1]+0x00000018u,c->r[7]); // 801BA94C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801BA950
  W32(c->r[1]+0x00000020u,c->r[9]); // 801BA954
  W32(c->r[1]+0x00000024u,c->r[10]); // 801BA958
  c->lr=0x801BA960u; f_801B8268(c); // 801BA95C
  c->r[30]=c->r[3]|c->r[3]; // 801BA960
  c->r[3]=c->r[31]+0x00000030u; // 801BA964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA968
  c->lr=0x801BA970u; f_801BB3FC(c); // 801BA96C
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 801BA970
  c->r[4]=c->r[30]|c->r[30]; // 801BA974
  c->r[3]=c->r[31]+0x00000048u; // 801BA978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA97C
  c->lr=0x801BA984u; f_801BB3FC(c); // 801BA980
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 801BA984
  if (crb(c,2)) { goto L_801BA998; } // 801BA988
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 801BA98C
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 801BA990
  if (!crb(c,2)) { goto L_801BA9B0; } // 801BA994
L_801BA998:;
  c->r[3]=c->r[31]+0x00000068u; // 801BA998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA99C
  c->lr=0x801BA9A4u; f_801BB3FC(c); // 801BA9A0
  c->r[3]=c->r[29]|c->r[29]; // 801BA9A4
  c->lr=0x801BA9ACu; f_801BB0D0(c); // 801BA9A8
  c->lr=0x801BA9B0u; f_801B81DC(c); // 801BA9AC
L_801BA9B0:;
  c->r[3]=c->r[31]+0x00000098u; // 801BA9B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA9B4
  c->lr=0x801BA9BCu; f_801BB3FC(c); // 801BA9B8
  c->r[3]=c->r[31]+0x000000D4u; // 801BA9BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA9C0
  c->lr=0x801BA9C8u; f_801BB3FC(c); // 801BA9C4
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 801BA9C8
  if (crb(c,2)) { goto L_801BA9DC; } // 801BA9CC
  c->r[3]=c->r[31]+0x0000010Cu; // 801BA9D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA9D4
  c->lr=0x801BA9DCu; f_801BB3FC(c); // 801BA9D8
L_801BA9DC:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 801BA9DC
  if (crb(c,2)) { goto L_801BA9F0; } // 801BA9E0
  c->r[3]=c->r[31]+0x0000014Cu; // 801BA9E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA9E8
  c->lr=0x801BA9F0u; f_801BB3FC(c); // 801BA9EC
L_801BA9F0:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 801BA9F0
  if (crb(c,2)) { goto L_801BAA04; } // 801BA9F4
  c->r[3]=c->r[31]+0x00000178u; // 801BA9F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA9FC
  c->lr=0x801BAA04u; f_801BB3FC(c); // 801BAA00
L_801BAA04:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 801BAA04
  if (crb(c,2)) { goto L_801BAA18; } // 801BAA08
  c->r[3]=c->r[31]+0x00000198u; // 801BAA0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA10
  c->lr=0x801BAA18u; f_801BB3FC(c); // 801BAA14
L_801BAA18:;
  c->r[3]=c->r[30]|c->r[30]; // 801BAA18
  c->lr=0x801BAA20u; f_801B8270(c); // 801BAA1C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801BAA20
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801BAA24
  c->r[30]=R32(c->r[1]+0x00000078u); // 801BAA28
  c->r[29]=R32(c->r[1]+0x00000074u); // 801BAA2C
  c->lr=c->r[0]; // 801BAA30
  c->r[1]=c->r[1]+0x00000080u; // 801BAA34
  return; // 801BAA38
}

// __OSCacheInit
void f_801BAA3C(Ctx* __restrict c) {
  trace_call(0x801BAA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAA3C
  c->r[0]=c->lr; // 801BAA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BAA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BAA48
  c->r[31]=0u+0x804A0000u; // 801BAA4C
  c->r[31]=c->r[31]+0x000029E8u; // 801BAA50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BAA54
  c->lr=0x801BAA5Cu; f_801B81AC(c); // 801BAA58
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801BAA5C
  if (!crb(c,2)) { goto L_801BAA74; } // 801BAA60
  c->lr=0x801BAA68u; f_801BA8B8(c); // 801BAA64
  c->r[3]=c->r[31]+0x000001B4u; // 801BAA68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA6C
  c->lr=0x801BAA74u; f_801B8398(c); // 801BAA70
L_801BAA74:;
  c->lr=0x801BAA78u; f_801B81AC(c); // 801BAA74
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 801BAA78
  if (!crb(c,2)) { goto L_801BAA90; } // 801BAA7C
  c->lr=0x801BAA84u; f_801BA750(c); // 801BAA80
  c->r[3]=c->r[31]+0x000001D0u; // 801BAA84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA88
  c->lr=0x801BAA90u; f_801B8398(c); // 801BAA8C
L_801BAA90:;
  c->lr=0x801BAA94u; f_801B81BC(c); // 801BAA90
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 801BAA94
  if (!crb(c,2)) { goto L_801BAB40; } // 801BAA98
  c->lr=0x801BAAA0u; f_801B819C(c); // 801BAA9C
  c->r[30]=c->r[3]|c->r[3]; // 801BAAA0
  /* sync */ // 801BAAA4
  c->r[3]=0u+0x00000030u; // 801BAAA8
  c->lr=0x801BAAB0u; f_801B81A4(c); // 801BAAAC
  /* sync */ // 801BAAB0
  /* sync */ // 801BAAB4
  c->lr=0x801BAABCu; f_801B81BC(c); // 801BAAB8
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801BAABC
  c->lr=0x801BAAC4u; f_801B81C4(c); // 801BAAC0
  /* sync */ // 801BAAC4
  /* sync */ // 801BAAC8
  c->lr=0x801BAAD0u; f_801B81BC(c); // 801BAACC
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801BAAD0
  c->lr=0x801BAAD8u; f_801B81C4(c); // 801BAAD4
  /* sync */ // 801BAAD8
  c->lr=0x801BAAE0u; f_801B81BC(c); // 801BAADC
  c->r[3]=c->r[3]|0x00200000u; // 801BAAE0
  c->lr=0x801BAAE8u; f_801B81C4(c); // 801BAAE4
L_801BAAE8:;
  c->lr=0x801BAAECu; f_801B81BC(c); // 801BAAE8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BAAEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801BAAE8; } // 801BAAF0
  c->lr=0x801BAAF8u; f_801B81BC(c); // 801BAAF4
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 801BAAF8
  c->lr=0x801BAB00u; f_801B81C4(c); // 801BAAFC
  goto L_801BAB10; // 801BAB00
L_801BAB04:;
  c->r[3]=c->r[31]+0x00000000u; // 801BAB04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB08
  c->lr=0x801BAB10u; f_801B8398(c); // 801BAB0C
L_801BAB10:;
  c->lr=0x801BAB14u; f_801B81BC(c); // 801BAB10
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BAB14
  if (!crb(c,2)) { IRQCHK(c); goto L_801BAB04; } // 801BAB18
  c->r[3]=c->r[30]|c->r[30]; // 801BAB1C
  c->lr=0x801BAB24u; f_801B81A4(c); // 801BAB20
  c->lr=0x801BAB28u; f_801B81BC(c); // 801BAB24
  c->r[0]=c->r[3]|0x80000000u; // 801BAB28
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 801BAB2C
  c->lr=0x801BAB34u; f_801B81C4(c); // 801BAB30
  c->r[3]=c->r[31]+0x000001ECu; // 801BAB34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB38
  c->lr=0x801BAB40u; f_801B8398(c); // 801BAB3C
L_801BAB40:;
  c->r[4]=0u+0x801C0000u; // 801BAB40
  c->r[3]=0u+0x00000001u; // 801BAB44
  c->r[4]=c->r[4]+0xFFFFA8F4u; // 801BAB48
  c->lr=0x801BAB50u; f_801BB5B8(c); // 801BAB4C
  c->r[3]=c->r[31]+0x00000204u; // 801BAB50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB54
  c->lr=0x801BAB5Cu; f_801B8398(c); // 801BAB58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BAB5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BAB60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BAB64
  c->lr=c->r[0]; // 801BAB68
  c->r[1]=c->r[1]+0x00000010u; // 801BAB6C
  return; // 801BAB70
}

// __OSLoadFPUContext
void f_801BAB74(Ctx* __restrict c) {
  trace_call(0x801BAB74u);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 801BAB74
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 801BAB78
  if (crb(c,2)) { goto L_801BAC94; } // 801BAB7C
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 801BAB80
  c->fpscr=(uint32_t)d2u(c->f[0]); // 801BAB84
  c->r[5]=mfspr(c,920); // 801BAB88
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 801BAB8C
  if (crb(c,2)) { goto L_801BAC14; } // 801BAB90
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 801BAB94
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 801BAB98
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 801BAB9C
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 801BABA0
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 801BABA4
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 801BABA8
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 801BABAC
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 801BABB0
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 801BABB4
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 801BABB8
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 801BABBC
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 801BABC0
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 801BABC4
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 801BABC8
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 801BABCC
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 801BABD0
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 801BABD4
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 801BABD8
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 801BABDC
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 801BABE0
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 801BABE4
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 801BABE8
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 801BABEC
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 801BABF0
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 801BABF4
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 801BABF8
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 801BABFC
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 801BAC00
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 801BAC04
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 801BAC08
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 801BAC0C
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 801BAC10
L_801BAC14:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 801BAC14
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 801BAC18
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 801BAC1C
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 801BAC20
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 801BAC24
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 801BAC28
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 801BAC2C
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 801BAC30
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 801BAC34
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 801BAC38
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 801BAC3C
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 801BAC40
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 801BAC44
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 801BAC48
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 801BAC4C
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 801BAC50
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 801BAC54
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 801BAC58
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 801BAC5C
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 801BAC60
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 801BAC64
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 801BAC68
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 801BAC6C
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 801BAC70
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 801BAC74
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 801BAC78
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 801BAC7C
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 801BAC80
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 801BAC84
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 801BAC88
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 801BAC8C
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 801BAC90
L_801BAC94:;
  return; // 801BAC94
}

// __OSSaveFPUContext
void f_801BAC98(Ctx* __restrict c) {
  trace_call(0x801BAC98u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 801BAC98
  c->r[3]=c->r[3]|0x00000001u; // 801BAC9C
  W16(c->r[5]+0x000001A2u,c->r[3]); // 801BACA0
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 801BACA4
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 801BACA8
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 801BACAC
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 801BACB0
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 801BACB4
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 801BACB8
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 801BACBC
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 801BACC0
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 801BACC4
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 801BACC8
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 801BACCC
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 801BACD0
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 801BACD4
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 801BACD8
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 801BACDC
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 801BACE0
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 801BACE4
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 801BACE8
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 801BACEC
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 801BACF0
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 801BACF4
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 801BACF8
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 801BACFC
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 801BAD00
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 801BAD04
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 801BAD08
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 801BAD0C
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 801BAD10
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 801BAD14
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 801BAD18
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 801BAD1C
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 801BAD20
  c->f[0]=u2d((uint64_t)c->fpscr); // 801BAD24
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 801BAD28
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 801BAD2C
  c->r[3]=mfspr(c,920); // 801BAD30
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 801BAD34
  if (crb(c,2)) { goto L_801BADBC; } // 801BAD38
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 801BAD3C
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 801BAD40
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 801BAD44
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 801BAD48
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 801BAD4C
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 801BAD50
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 801BAD54
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 801BAD58
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 801BAD5C
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 801BAD60
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 801BAD64
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 801BAD68
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 801BAD6C
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 801BAD70
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 801BAD74
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 801BAD78
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 801BAD7C
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 801BAD80
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 801BAD84
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 801BAD88
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 801BAD8C
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 801BAD90
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 801BAD94
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 801BAD98
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 801BAD9C
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 801BADA0
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 801BADA4
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 801BADA8
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 801BADAC
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 801BADB0
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 801BADB4
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 801BADB8
L_801BADBC:;
  return; // 801BADBC
}

// OSSaveFPUContext
void f_801BADC0(Ctx* __restrict c) {
  trace_call(0x801BADC0u);
  c->r[5]=c->r[3]+0x00000000u; // 801BADC0
  f_801BAC98(c); return; // 801BADC4
}

// OSSetCurrentContext
void f_801BADC8(Ctx* __restrict c) {
  trace_call(0x801BADC8u);
  c->r[4]=0u+0x80000000u; // 801BADC8
  W32(c->r[4]+0x000000D4u,c->r[3]); // 801BADCC
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 801BADD0
  W32(c->r[4]+0x000000C0u,c->r[5]); // 801BADD4
  c->r[5]=R32(c->r[4]+0x000000D8u); // 801BADD8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 801BADDC
  if (!crb(c,2)) { goto L_801BAE00; } // 801BADE0
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 801BADE4
  c->r[6]=c->r[6]|0x00002000u; // 801BADE8
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 801BADEC
  c->r[6]=c->msr; // 801BADF0
  c->r[6]=c->r[6]|0x00000002u; // 801BADF4
  c->msr=c->r[6]; // 801BADF8
  return; // 801BADFC
L_801BAE00:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 801BAE00
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 801BAE04
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 801BAE08
  c->r[6]=c->msr; // 801BAE0C
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 801BAE10
  c->r[6]=c->r[6]|0x00000002u; // 801BAE14
  c->msr=c->r[6]; // 801BAE18
  /* isync */ // 801BAE1C
  return; // 801BAE20
}

// OSGetCurrentContext
void f_801BAE24(Ctx* __restrict c) {
  trace_call(0x801BAE24u);
  c->r[3]=0u+0x80000000u; // 801BAE24
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801BAE28
  return; // 801BAE2C
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_801BAE30(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_801BAEB0(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_801BAF88(Ctx* __restrict c) {
  trace_call(0x801BAF88u);
  c->r[3]=c->r[1]|c->r[1]; // 801BAF88
  return; // 801BAF8C
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_801BAF90(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_801BAFC0(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_801BAFF0(Ctx* __restrict c) {
  trace_call(0x801BAFF0u);
  c->r[5]=0u+0x00000000u; // 801BAFF0
  c->r[4]=0u+0x80000000u; // 801BAFF4
  W16(c->r[3]+0x000001A0u,c->r[5]); // 801BAFF8
  W16(c->r[3]+0x000001A2u,c->r[5]); // 801BAFFC
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801BB000
  cmpu(c,0,c->r[3],c->r[0]); // 801BB004
  if (!crb(c,2)) return; // 801BB008
  W32(c->r[4]+0x000000D8u,c->r[5]); // 801BB00C
  return; // 801BB010
}

// OSInitContext
void f_801BB014(Ctx* __restrict c) {
  trace_call(0x801BB014u);
  W32(c->r[3]+0x00000198u,c->r[4]); // 801BB014
  W32(c->r[3]+0x00000004u,c->r[5]); // 801BB018
  c->r[11]=0u+0x00000000u; // 801BB01C
  c->r[11]=c->r[11]|0x00009032u; // 801BB020
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 801BB024
  c->r[0]=0u+0x00000000u; // 801BB028
  W32(c->r[3]+0x00000080u,c->r[0]); // 801BB02C
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801BB030
  W32(c->r[3]+0x00000008u,c->r[2]); // 801BB034
  W32(c->r[3]+0x00000034u,c->r[13]); // 801BB038
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BB03C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801BB040
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BB044
  W32(c->r[3]+0x00000018u,c->r[0]); // 801BB048
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801BB04C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801BB050
  W32(c->r[3]+0x00000024u,c->r[0]); // 801BB054
  W32(c->r[3]+0x00000028u,c->r[0]); // 801BB058
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801BB05C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BB060
  W32(c->r[3]+0x00000038u,c->r[0]); // 801BB064
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801BB068
  W32(c->r[3]+0x00000040u,c->r[0]); // 801BB06C
  W32(c->r[3]+0x00000044u,c->r[0]); // 801BB070
  W32(c->r[3]+0x00000048u,c->r[0]); // 801BB074
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801BB078
  W32(c->r[3]+0x00000050u,c->r[0]); // 801BB07C
  W32(c->r[3]+0x00000054u,c->r[0]); // 801BB080
  W32(c->r[3]+0x00000058u,c->r[0]); // 801BB084
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801BB088
  W32(c->r[3]+0x00000060u,c->r[0]); // 801BB08C
  W32(c->r[3]+0x00000064u,c->r[0]); // 801BB090
  W32(c->r[3]+0x00000068u,c->r[0]); // 801BB094
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801BB098
  W32(c->r[3]+0x00000070u,c->r[0]); // 801BB09C
  W32(c->r[3]+0x00000074u,c->r[0]); // 801BB0A0
  W32(c->r[3]+0x00000078u,c->r[0]); // 801BB0A4
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801BB0A8
  W32(c->r[3]+0x000001A4u,c->r[0]); // 801BB0AC
  W32(c->r[3]+0x000001A8u,c->r[0]); // 801BB0B0
  W32(c->r[3]+0x000001ACu,c->r[0]); // 801BB0B4
  W32(c->r[3]+0x000001B0u,c->r[0]); // 801BB0B8
  W32(c->r[3]+0x000001B4u,c->r[0]); // 801BB0BC
  W32(c->r[3]+0x000001B8u,c->r[0]); // 801BB0C0
  W32(c->r[3]+0x000001BCu,c->r[0]); // 801BB0C4
  W32(c->r[3]+0x000001C0u,c->r[0]); // 801BB0C8
  f_801BAFF0(c); return; // 801BB0CC
}

// OSDumpContext
void f_801BB0D0(Ctx* __restrict c) {
  trace_call(0x801BB0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB0D0
  c->r[0]=c->lr; // 801BB0D4
  W32(c->r[1]+0x000002F4u,c->r[0]); // 801BB0D8
  c->r[11]=c->r[1]+0x000002F0u; // 801BB0DC
  c->lr=0x801BB0E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB0E0
  c->r[28]=0u+0x804A0000u; // 801BB0E4
  c->r[30]=c->r[3]|c->r[3]; // 801BB0E8
  c->r[28]=c->r[28]+0x00002C20u; // 801BB0EC
  c->r[4]=c->r[30]|c->r[30]; // 801BB0F0
  c->r[3]=c->r[28]+0x00000000u; // 801BB0F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB0F8
  c->lr=0x801BB100u; f_801BB3FC(c); // 801BB0FC
  c->r[26]=c->r[30]|c->r[30]; // 801BB100
  c->r[25]=0u+0x00000000u; // 801BB104
L_801BB108:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 801BB108
  c->r[4]=c->r[25]|c->r[25]; // 801BB10C
  c->r[5]=R32(c->r[26]+0x00000000u); // 801BB110
  c->r[3]=c->r[28]+0x00000048u; // 801BB114
  c->r[9]=c->r[8]|c->r[8]; // 801BB118
  c->r[7]=c->r[25]+0x00000010u; // 801BB11C
  c->r[6]=c->r[5]|c->r[5]; // 801BB120
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB124
  c->lr=0x801BB12Cu; f_801BB3FC(c); // 801BB128
  c->r[25]=c->r[25]+0x00000001u; // 801BB12C
  c->r[26]=c->r[26]+0x00000004u; // 801BB130
  cmpu(c,0,c->r[25],0x00000010u); // 801BB134
  if (crb(c,0)) { IRQCHK(c); goto L_801BB108; } // 801BB138
  c->r[4]=R32(c->r[30]+0x00000084u); // 801BB13C
  c->r[3]=c->r[28]+0x00000078u; // 801BB140
  c->r[5]=R32(c->r[30]+0x00000080u); // 801BB144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB148
  c->lr=0x801BB150u; f_801BB3FC(c); // 801BB14C
  c->r[4]=R32(c->r[30]+0x00000198u); // 801BB150
  c->r[3]=c->r[28]+0x000000A8u; // 801BB154
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 801BB158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB15C
  c->lr=0x801BB164u; f_801BB3FC(c); // 801BB160
  c->r[3]=c->r[28]+0x000000D8u; // 801BB164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB168
  c->lr=0x801BB170u; f_801BB3FC(c); // 801BB16C
  c->r[26]=c->r[30]|c->r[30]; // 801BB170
  c->r[25]=0u+0x00000000u; // 801BB174
L_801BB178:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 801BB178
  c->r[4]=c->r[25]|c->r[25]; // 801BB17C
  c->r[7]=R32(c->r[26]+0x000001B4u); // 801BB180
  c->r[3]=c->r[28]+0x000000ECu; // 801BB184
  c->r[6]=c->r[25]+0x00000004u; // 801BB188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB18C
  c->lr=0x801BB194u; f_801BB3FC(c); // 801BB190
  c->r[25]=c->r[25]+0x00000001u; // 801BB194
  c->r[26]=c->r[26]+0x00000004u; // 801BB198
  cmpu(c,0,c->r[25],0x00000004u); // 801BB19C
  if (crb(c,0)) { IRQCHK(c); goto L_801BB178; } // 801BB1A0
  c->r[0]=R16(c->r[30]+0x000001A2u); // 801BB1A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BB1A8
  if (crb(c,2)) { goto L_801BB2C4; } // 801BB1AC
  c->lr=0x801BB1B4u; f_801BE74C(c); // 801BB1B0
  c->r[6]=0u+0x80000000u; // 801BB1B4
  c->r[5]=0u+0x00000000u; // 801BB1B8
  c->r[27]=R32(c->r[6]+0x000000D4u); // 801BB1BC
  c->r[4]=c->r[1]+0x00000008u; // 801BB1C0
  c->r[31]=c->r[3]|c->r[3]; // 801BB1C4
  W16(c->r[1]+0x000001A8u,c->r[5]); // 801BB1C8
  W16(c->r[1]+0x000001AAu,c->r[5]); // 801BB1CC
  c->r[0]=R32(c->r[6]+0x000000D8u); // 801BB1D0
  cmpu(c,0,c->r[4],c->r[0]); // 801BB1D4
  if (!crb(c,2)) { goto L_801BB1E0; } // 801BB1D8
  W32(c->r[6]+0x000000D8u,c->r[5]); // 801BB1DC
L_801BB1E0:;
  c->r[3]=c->r[1]+0x00000008u; // 801BB1E0
  c->lr=0x801BB1E8u; f_801BADC8(c); // 801BB1E4
  c->r[3]=c->r[28]+0x00000110u; // 801BB1E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB1EC
  c->lr=0x801BB1F4u; f_801BB3FC(c); // 801BB1F0
  c->r[26]=c->r[30]|c->r[30]; // 801BB1F4
  c->r[25]=0u+0x00000000u; // 801BB1F8
L_801BB1FC:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 801BB1FC
  c->lr=0x801BB204u; f_801E7834(c); // 801BB200
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 801BB204
  c->r[29]=c->r[3]|c->r[3]; // 801BB208
  c->lr=0x801BB210u; f_801E7834(c); // 801BB20C
  c->r[5]=c->r[3]|c->r[3]; // 801BB210
  c->r[4]=c->r[25]|c->r[25]; // 801BB214
  c->r[7]=c->r[29]|c->r[29]; // 801BB218
  c->r[3]=c->r[28]+0x00000124u; // 801BB21C
  c->r[6]=c->r[25]+0x00000001u; // 801BB220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB224
  c->lr=0x801BB22Cu; f_801BB3FC(c); // 801BB228
  c->r[25]=c->r[25]+0x00000002u; // 801BB22C
  c->r[26]=c->r[26]+0x00000010u; // 801BB230
  cmpu(c,0,c->r[25],0x00000020u); // 801BB234
  if (crb(c,0)) { IRQCHK(c); goto L_801BB1FC; } // 801BB238
  c->r[3]=c->r[28]+0x00000140u; // 801BB23C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB240
  c->lr=0x801BB248u; f_801BB3FC(c); // 801BB244
  c->r[26]=c->r[30]|c->r[30]; // 801BB248
  c->r[25]=0u+0x00000000u; // 801BB24C
L_801BB250:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 801BB250
  c->lr=0x801BB258u; f_801E7834(c); // 801BB254
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 801BB258
  c->r[29]=c->r[3]|c->r[3]; // 801BB25C
  c->lr=0x801BB264u; f_801E7834(c); // 801BB260
  c->r[5]=c->r[3]|c->r[3]; // 801BB264
  c->r[4]=c->r[25]|c->r[25]; // 801BB268
  c->r[7]=c->r[29]|c->r[29]; // 801BB26C
  c->r[3]=c->r[28]+0x00000154u; // 801BB270
  c->r[6]=c->r[25]+0x00000001u; // 801BB274
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB278
  c->lr=0x801BB280u; f_801BB3FC(c); // 801BB27C
  c->r[25]=c->r[25]+0x00000002u; // 801BB280
  c->r[26]=c->r[26]+0x00000010u; // 801BB284
  cmpu(c,0,c->r[25],0x00000020u); // 801BB288
  if (crb(c,0)) { IRQCHK(c); goto L_801BB250; } // 801BB28C
  c->r[5]=0u+0x00000000u; // 801BB290
  c->r[3]=0u+0x80000000u; // 801BB294
  W16(c->r[1]+0x000001A8u,c->r[5]); // 801BB298
  c->r[4]=c->r[1]+0x00000008u; // 801BB29C
  W16(c->r[1]+0x000001AAu,c->r[5]); // 801BB2A0
  c->r[0]=R32(c->r[3]+0x000000D8u); // 801BB2A4
  cmpu(c,0,c->r[4],c->r[0]); // 801BB2A8
  if (!crb(c,2)) { goto L_801BB2B4; } // 801BB2AC
  W32(c->r[3]+0x000000D8u,c->r[5]); // 801BB2B0
L_801BB2B4:;
  c->r[3]=c->r[27]|c->r[27]; // 801BB2B4
  c->lr=0x801BB2BCu; f_801BADC8(c); // 801BB2B8
  c->r[3]=c->r[31]|c->r[31]; // 801BB2BC
  c->lr=0x801BB2C4u; f_801BE774(c); // 801BB2C0
L_801BB2C4:;
  c->r[3]=c->r[28]+0x00000174u; // 801BB2C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB2C8
  c->lr=0x801BB2D0u; f_801BB3FC(c); // 801BB2CC
  c->r[25]=R32(c->r[30]+0x00000004u); // 801BB2D0
  c->r[26]=0u+0x00000000u; // 801BB2D4
  goto L_801BB2F8; // 801BB2D8
L_801BB2DC:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 801BB2DC
  c->r[4]=c->r[25]|c->r[25]; // 801BB2E0
  c->r[6]=R32(c->r[25]+0x00000004u); // 801BB2E4
  c->r[3]=c->r[28]+0x0000019Cu; // 801BB2E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB2EC
  c->lr=0x801BB2F4u; f_801BB3FC(c); // 801BB2F0
  c->r[25]=R32(c->r[25]+0x00000000u); // 801BB2F4
L_801BB2F8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801BB2F8
  if (crb(c,2)) { goto L_801BB318; } // 801BB2FC
  c->r[0]=c->r[25]+0x00010000u; // 801BB300
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BB304
  if (crb(c,2)) { goto L_801BB318; } // 801BB308
  cmpu(c,0,c->r[26],0x00000010u); // 801BB30C
  c->r[26]=c->r[26]+0x00000001u; // 801BB310
  if (crb(c,0)) { IRQCHK(c); goto L_801BB2DC; } // 801BB314
L_801BB318:;
  c->r[11]=c->r[1]+0x000002F0u; // 801BB318
  c->lr=0x801BB320u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB31C
  c->r[0]=R32(c->r[1]+0x000002F4u); // 801BB320
  c->lr=c->r[0]; // 801BB324
  c->r[1]=c->r[1]+0x000002F0u; // 801BB328
  return; // 801BB32C
}

// OSSwitchFPUContext
void f_801BB330(Ctx* __restrict c) {
  trace_call(0x801BB330u);
  c->r[5]=c->msr; // 801BB330
  c->r[5]=c->r[5]|0x00002000u; // 801BB334
  c->msr=c->r[5]; // 801BB338
  /* isync */ // 801BB33C
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 801BB340
  c->r[5]=c->r[5]|0x00002000u; // 801BB344
  mtspr(c,27,c->r[5]); // 801BB348
  c->r[3]=0u+0x80000000u; // 801BB34C
  c->r[5]=R32(c->r[3]+0x000000D8u); // 801BB350
  W32(c->r[3]+0x000000D8u,c->r[4]); // 801BB354
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801BB358
  if (crb(c,2)) { goto L_801BB370; } // 801BB35C
  cmps(c,0,(int32_t)c->r[5],0); // 801BB360
  if (crb(c,2)) { goto L_801BB36C; } // 801BB364
  c->lr=0x801BB36Cu; f_801BAC98(c); // 801BB368
L_801BB36C:;
  c->lr=0x801BB370u; f_801BAB74(c); // 801BB36C
L_801BB370:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 801BB370
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 801BB374
  c->r[3]=R32(c->r[4]+0x00000084u); // 801BB378
  c->lr=c->r[3]; // 801BB37C
  c->r[3]=R32(c->r[4]+0x00000198u); // 801BB380
  mtspr(c,26,c->r[3]); // 801BB384
  c->r[3]=R32(c->r[4]+0x00000088u); // 801BB388
  c->ctr=c->r[3]; // 801BB38C
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 801BB390
  mtspr(c,1,c->r[3]); // 801BB394
  c->r[3]=R16(c->r[4]+0x000001A2u); // 801BB398
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801BB39C
  W16(c->r[4]+0x000001A2u,c->r[3]); // 801BB3A0
  c->r[5]=R32(c->r[4]+0x00000014u); // 801BB3A4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801BB3A8
  c->r[4]=R32(c->r[4]+0x00000010u); // 801BB3AC
  return; /* rfi */ // 801BB3B0
  f_801BB3B4(c);
}

// __OSContextInit
void f_801BB3B4(Ctx* __restrict c) {
  trace_call(0x801BB3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB3B4
  c->r[0]=c->lr; // 801BB3B8
  c->r[4]=0u+0x801C0000u; // 801BB3BC
  c->r[3]=0u+0x00000007u; // 801BB3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB3C4
  c->r[4]=c->r[4]+0xFFFFB330u; // 801BB3C8
  c->lr=0x801BB3D0u; f_801B9524(c); // 801BB3CC
  c->r[0]=0u+0x00000000u; // 801BB3D0
  c->r[4]=0u+0x80000000u; // 801BB3D4
  c->r[3]=0u+0x804A0000u; // 801BB3D8
  W32(c->r[4]+0x000000D8u,c->r[0]); // 801BB3DC
  c->r[3]=c->r[3]+0x00002DD8u; // 801BB3E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB3E4
  c->lr=0x801BB3ECu; f_801B8398(c); // 801BB3E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB3EC
  c->lr=c->r[0]; // 801BB3F0
  c->r[1]=c->r[1]+0x00000010u; // 801BB3F4
  return; // 801BB3F8
}

void hle_OSReport(Ctx*);
// OSReport
void f_801BB3FC(Ctx* __restrict c) {
  hle_OSReport(c);
}

// fn_801BB488
void f_801BB488(Ctx* __restrict c) {
  trace_call(0x801BB488u);
  f_801EEFCC(c); return; // 801BB488
}

void hle_OSPanic(Ctx*);
// OSPanic
void f_801BB48C(Ctx* __restrict c) {
  hle_OSPanic(c);
}

// OSSetErrorHandler
void f_801BB5B8(Ctx* __restrict c) {
  trace_call(0x801BB5B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB5B8
  c->r[0]=c->lr; // 801BB5BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB5C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB5C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB5C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BB5CC
  c->r[29]=c->r[3]|c->r[3]; // 801BB5D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BB5D4
  c->r[28]=c->r[4]|c->r[4]; // 801BB5D8
  c->lr=0x801BB5E0u; f_801BE74C(c); // 801BB5DC
  c->r[4]=0u+0x80560000u; // 801BB5E0
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 801BB5E4
  c->r[4]=c->r[4]+0xFFFF8C50u; // 801BB5E8
  cmpu(c,0,c->r[29],0x00000010u); // 801BB5EC
  c->r[30]=R32(c->r[4]+c->r[0]); // 801BB5F0
  c->r[29]=c->r[3]|c->r[3]; // 801BB5F4
  W32(c->r[4]+c->r[0],c->r[28]); // 801BB5F8
  if (!crb(c,2)) { goto L_801BB814; } // 801BB5FC
  c->lr=0x801BB604u; f_801B819C(c); // 801BB600
  c->r[31]=c->r[3]|c->r[3]; // 801BB604
  c->r[3]=c->r[3]|0x00002000u; // 801BB608
  c->lr=0x801BB610u; f_801B81A4(c); // 801BB60C
  c->lr=0x801BB614u; f_801B8220(c); // 801BB610
  cmps(c,0,(int32_t)c->r[28],0); // 801BB614
  if (crb(c,2)) { goto L_801BB7B0; } // 801BB618
  c->r[5]=0u+0x80000000u; // 801BB61C
  c->r[4]=0u+0x60060000u; // 801BB620
  c->r[9]=R32(c->r[5]+0x000000DCu); // 801BB624
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 801BB628
  c->r[8]=0u+0xFFFFFFFFu; // 801BB62C
  c->r[7]=0u+0x00000004u; // 801BB630
  c->r[0]=0u+0x00000002u; // 801BB634
  goto L_801BB794; // 801BB638
L_801BB63C:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 801BB63C
  c->r[4]=c->r[4]|0x00000900u; // 801BB640
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 801BB644
  c->r[6]=R16(c->r[9]+0x000001A2u); // 801BB648
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 801BB64C
  if (!crb(c,2)) { goto L_801BB778; } // 801BB650
  c->r[4]=c->r[6]|0x00000001u; // 801BB654
  c->r[6]=c->r[9]+0x00000090u; // 801BB658
  W16(c->r[9]+0x000001A2u,c->r[4]); // 801BB65C
  c->r[4]=c->r[9]+0x000001C8u; // 801BB660
  c->ctr=c->r[0]; // 801BB664
L_801BB668:;
  W32(c->r[6]+0x00000004u,c->r[8]); // 801BB668
  W32(c->r[6]+0x00000000u,c->r[8]); // 801BB66C
  W32(c->r[4]+0x00000004u,c->r[8]); // 801BB670
  W32(c->r[4]+0x00000000u,c->r[8]); // 801BB674
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 801BB678
  W32(c->r[6]+0x00000008u,c->r[8]); // 801BB67C
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801BB680
  W32(c->r[4]+0x00000008u,c->r[8]); // 801BB684
  W32(c->r[6]+0x00000014u,c->r[8]); // 801BB688
  W32(c->r[6]+0x00000010u,c->r[8]); // 801BB68C
  W32(c->r[4]+0x00000014u,c->r[8]); // 801BB690
  W32(c->r[4]+0x00000010u,c->r[8]); // 801BB694
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 801BB698
  W32(c->r[6]+0x00000018u,c->r[8]); // 801BB69C
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 801BB6A0
  W32(c->r[4]+0x00000018u,c->r[8]); // 801BB6A4
  W32(c->r[6]+0x00000024u,c->r[8]); // 801BB6A8
  W32(c->r[6]+0x00000020u,c->r[8]); // 801BB6AC
  W32(c->r[4]+0x00000024u,c->r[8]); // 801BB6B0
  W32(c->r[4]+0x00000020u,c->r[8]); // 801BB6B4
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 801BB6B8
  W32(c->r[6]+0x00000028u,c->r[8]); // 801BB6BC
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 801BB6C0
  W32(c->r[4]+0x00000028u,c->r[8]); // 801BB6C4
  W32(c->r[6]+0x00000034u,c->r[8]); // 801BB6C8
  W32(c->r[6]+0x00000030u,c->r[8]); // 801BB6CC
  W32(c->r[4]+0x00000034u,c->r[8]); // 801BB6D0
  W32(c->r[4]+0x00000030u,c->r[8]); // 801BB6D4
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 801BB6D8
  W32(c->r[6]+0x00000038u,c->r[8]); // 801BB6DC
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 801BB6E0
  W32(c->r[4]+0x00000038u,c->r[8]); // 801BB6E4
  W32(c->r[6]+0x00000044u,c->r[8]); // 801BB6E8
  W32(c->r[6]+0x00000040u,c->r[8]); // 801BB6EC
  W32(c->r[4]+0x00000044u,c->r[8]); // 801BB6F0
  W32(c->r[4]+0x00000040u,c->r[8]); // 801BB6F4
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 801BB6F8
  W32(c->r[6]+0x00000048u,c->r[8]); // 801BB6FC
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 801BB700
  W32(c->r[4]+0x00000048u,c->r[8]); // 801BB704
  W32(c->r[6]+0x00000054u,c->r[8]); // 801BB708
  W32(c->r[6]+0x00000050u,c->r[8]); // 801BB70C
  W32(c->r[4]+0x00000054u,c->r[8]); // 801BB710
  W32(c->r[4]+0x00000050u,c->r[8]); // 801BB714
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 801BB718
  W32(c->r[6]+0x00000058u,c->r[8]); // 801BB71C
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 801BB720
  W32(c->r[4]+0x00000058u,c->r[8]); // 801BB724
  W32(c->r[6]+0x00000064u,c->r[8]); // 801BB728
  W32(c->r[6]+0x00000060u,c->r[8]); // 801BB72C
  W32(c->r[4]+0x00000064u,c->r[8]); // 801BB730
  W32(c->r[4]+0x00000060u,c->r[8]); // 801BB734
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 801BB738
  W32(c->r[6]+0x00000068u,c->r[8]); // 801BB73C
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801BB740
  W32(c->r[4]+0x00000068u,c->r[8]); // 801BB744
  W32(c->r[6]+0x00000074u,c->r[8]); // 801BB748
  W32(c->r[6]+0x00000070u,c->r[8]); // 801BB74C
  W32(c->r[4]+0x00000074u,c->r[8]); // 801BB750
  W32(c->r[4]+0x00000070u,c->r[8]); // 801BB754
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 801BB758
  W32(c->r[6]+0x00000078u,c->r[8]); // 801BB75C
  c->r[6]=c->r[6]+0x00000080u; // 801BB760
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 801BB764
  W32(c->r[4]+0x00000078u,c->r[8]); // 801BB768
  c->r[4]=c->r[4]+0x00000080u; // 801BB76C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB668; } // 801BB770
  W32(c->r[9]+0x00000194u,c->r[7]); // 801BB774
L_801BB778:;
  c->r[4]=R32(c->r[13]+0xFFFF8410u); // 801BB778
  c->r[6]=R32(c->r[9]+0x00000194u); // 801BB77C
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 801BB780
  c->r[4]=c->r[6]|c->r[4]; // 801BB784
  c->r[4]=c->r[4]&c->r[5]; // 801BB788
  W32(c->r[9]+0x00000194u,c->r[4]); // 801BB78C
  c->r[9]=R32(c->r[9]+0x000002FCu); // 801BB790
L_801BB794:;
  cmps(c,0,(int32_t)c->r[9],0); // 801BB794
  if (!crb(c,2)) { IRQCHK(c); goto L_801BB63C; } // 801BB798
  c->r[0]=R32(c->r[13]+0xFFFF8410u); // 801BB79C
  c->r[31]=c->r[31]|0x00000900u; // 801BB7A0
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BB7A4
  c->r[4]=c->r[3]|c->r[0]; // 801BB7A8
  goto L_801BB7FC; // 801BB7AC
L_801BB7B0:;
  c->r[5]=0u+0x80000000u; // 801BB7B0
  c->r[4]=0u+0x60060000u; // 801BB7B4
  c->r[6]=R32(c->r[5]+0x000000DCu); // 801BB7B8
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 801BB7BC
  c->r[5]=0u+0xFFFFF6FFu; // 801BB7C0
  goto L_801BB7E8; // 801BB7C4
L_801BB7C8:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 801BB7C8
  c->r[0]=c->r[0]&c->r[5]; // 801BB7CC
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 801BB7D0
  c->r[0]=R32(c->r[6]+0x00000194u); // 801BB7D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 801BB7D8
  c->r[0]=c->r[0]&c->r[4]; // 801BB7DC
  W32(c->r[6]+0x00000194u,c->r[0]); // 801BB7E0
  c->r[6]=R32(c->r[6]+0x000002FCu); // 801BB7E4
L_801BB7E8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801BB7E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BB7C8; } // 801BB7EC
  c->r[0]=0u+0xFFFFF6FFu; // 801BB7F0
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 801BB7F4
  c->r[31]=c->r[31]&c->r[0]; // 801BB7F8
L_801BB7FC:;
  c->r[3]=0u+0x60060000u; // 801BB7FC
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 801BB800
  c->r[3]=c->r[4]&c->r[0]; // 801BB804
  c->lr=0x801BB80Cu; f_801B8240(c); // 801BB808
  c->r[3]=c->r[31]|c->r[31]; // 801BB80C
  c->lr=0x801BB814u; f_801B81A4(c); // 801BB810
L_801BB814:;
  c->r[3]=c->r[29]|c->r[29]; // 801BB814
  c->lr=0x801BB81Cu; f_801BE774(c); // 801BB818
  c->r[3]=c->r[30]|c->r[30]; // 801BB81C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB820
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB824
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BB828
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BB82C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB830
  c->lr=c->r[0]; // 801BB834
  c->r[1]=c->r[1]+0x00000020u; // 801BB838
  return; // 801BB83C
}

// __OSUnhandledException
void f_801BB840(Ctx* __restrict c) {
  trace_call(0x801BB840u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB840
  c->r[0]=c->lr; // 801BB844
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB848
  c->r[11]=c->r[1]+0x00000030u; // 801BB84C
  c->lr=0x801BB854u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB850
  c->r[31]=0u+0x804A0000u; // 801BB854
  c->r[25]=c->r[3]|c->r[3]; // 801BB858
  c->r[26]=c->r[4]|c->r[4]; // 801BB85C
  c->r[27]=c->r[5]|c->r[5]; // 801BB860
  c->r[28]=c->r[6]|c->r[6]; // 801BB864
  c->r[31]=c->r[31]+0x00002E00u; // 801BB868
  c->lr=0x801BB870u; f_801C257C(c); // 801BB86C
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 801BB870
  c->r[29]=c->r[4]|c->r[4]; // 801BB874
  c->r[30]=c->r[3]|c->r[3]; // 801BB878
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801BB87C
  if (!crb(c,2)) { goto L_801BB898; } // 801BB880
  c->r[4]=c->r[25]|c->r[25]; // 801BB884
  c->r[3]=c->r[31]+0x0000005Cu; // 801BB888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB88C
  c->lr=0x801BB894u; f_801BB3FC(c); // 801BB890
  goto L_801BB9F4; // 801BB894
L_801BB898:;
  cmpu(c,0,c->r[25],0x00000006u); // 801BB898
  if (!crb(c,2)) { goto L_801BB988; } // 801BB89C
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 801BB8A0
  if (crb(c,2)) { goto L_801BB988; } // 801BB8A4
  c->r[3]=0u+0x80560000u; // 801BB8A8
  c->r[3]=c->r[3]+0xFFFF8C50u; // 801BB8AC
  c->r[0]=R32(c->r[3]+0x00000040u); // 801BB8B0
  cmps(c,0,(int32_t)c->r[0],0); // 801BB8B4
  if (crb(c,2)) { goto L_801BB988; } // 801BB8B8
  c->r[25]=0u+0x00000010u; // 801BB8BC
  c->lr=0x801BB8C4u; f_801B819C(c); // 801BB8C0
  c->r[23]=c->r[3]|c->r[3]; // 801BB8C4
  c->r[3]=c->r[3]|0x00002000u; // 801BB8C8
  c->lr=0x801BB8D0u; f_801B81A4(c); // 801BB8CC
  c->r[3]=0u+0x80000000u; // 801BB8D0
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801BB8D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BB8D8
  if (crb(c,2)) { goto L_801BB8E4; } // 801BB8DC
  c->lr=0x801BB8E4u; f_801BADC0(c); // 801BB8E0
L_801BB8E4:;
  c->lr=0x801BB8E8u; f_801B8220(c); // 801BB8E4
  c->r[24]=0u+0x60060000u; // 801BB8E8
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 801BB8EC
  c->r[3]=c->r[3]&c->r[0]; // 801BB8F0
  c->lr=0x801BB8F8u; f_801B8240(c); // 801BB8F4
  c->r[3]=c->r[23]|c->r[23]; // 801BB8F8
  c->lr=0x801BB900u; f_801B81A4(c); // 801BB8FC
  c->r[23]=0u+0x80000000u; // 801BB900
  c->r[0]=R32(c->r[23]+0x000000D8u); // 801BB904
  cmpu(c,0,c->r[0],c->r[26]); // 801BB908
  if (!crb(c,2)) { goto L_801BB96C; } // 801BB90C
  c->lr=0x801BB914u; f_801C11DC(c); // 801BB910
  c->r[4]=c->r[26]|c->r[26]; // 801BB914
  c->r[5]=c->r[27]|c->r[27]; // 801BB918
  c->r[6]=c->r[28]|c->r[28]; // 801BB91C
  c->r[3]=0u+0x00000010u; // 801BB920
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB924
  c->r[7]=0u+0x80560000u; // 801BB928
  c->r[7]=c->r[7]+0xFFFF8C50u; // 801BB92C
  c->r[12]=R32(c->r[7]+0x00000040u); // 801BB930
  c->ctr=c->r[12]; // 801BB934
  if (true) { c->lr=0x801BB93Cu; dispatch(c,c->ctr); } // 801BB938
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 801BB93C
  c->r[3]=0u+0x00000000u; // 801BB940
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 801BB944
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 801BB948
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 801BB94C
  W32(c->r[23]+0x000000D8u,c->r[3]); // 801BB950
  c->r[3]=R32(c->r[26]+0x00000194u); // 801BB954
  c->r[0]=c->r[3]&c->r[0]; // 801BB958
  W32(c->r[26]+0x00000194u,c->r[0]); // 801BB95C
  c->lr=0x801BB964u; f_801C1218(c); // 801BB960
  c->lr=0x801BB968u; f_801C1724(c); // 801BB964
  goto L_801BB980; // 801BB968
L_801BB96C:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 801BB96C
  c->r[0]=0u+0x00000000u; // 801BB970
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 801BB974
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 801BB978
  W32(c->r[23]+0x000000D8u,c->r[0]); // 801BB97C
L_801BB980:;
  c->r[3]=c->r[26]|c->r[26]; // 801BB980
  c->lr=0x801BB988u; f_801BAEB0(c); // 801BB984
L_801BB988:;
  c->r[24]=0u+0x80560000u; // 801BB988
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 801BB98C
  c->r[24]=c->r[24]+0xFFFF8C50u; // 801BB990
  c->r[0]=R32(c->r[24]+c->r[23]); // 801BB994
  cmps(c,0,(int32_t)c->r[0],0); // 801BB998
  if (crb(c,2)) { goto L_801BB9D4; } // 801BB99C
  c->lr=0x801BB9A4u; f_801C11DC(c); // 801BB9A0
  c->r[3]=c->r[25]|c->r[25]; // 801BB9A4
  c->r[4]=c->r[26]|c->r[26]; // 801BB9A8
  c->r[5]=c->r[27]|c->r[27]; // 801BB9AC
  c->r[6]=c->r[28]|c->r[28]; // 801BB9B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB9B4
  c->r[12]=R32(c->r[24]+c->r[23]); // 801BB9B8
  c->ctr=c->r[12]; // 801BB9BC
  if (true) { c->lr=0x801BB9C4u; dispatch(c,c->ctr); } // 801BB9C0
  c->lr=0x801BB9C8u; f_801C1218(c); // 801BB9C4
  c->lr=0x801BB9CCu; f_801C1724(c); // 801BB9C8
  c->r[3]=c->r[26]|c->r[26]; // 801BB9CC
  c->lr=0x801BB9D4u; f_801BAEB0(c); // 801BB9D0
L_801BB9D4:;
  cmpu(c,0,c->r[25],0x00000008u); // 801BB9D4
  if (!crb(c,2)) { goto L_801BB9E4; } // 801BB9D8
  c->r[3]=c->r[26]|c->r[26]; // 801BB9DC
  c->lr=0x801BB9E4u; f_801BAEB0(c); // 801BB9E0
L_801BB9E4:;
  c->r[4]=c->r[25]|c->r[25]; // 801BB9E4
  c->r[3]=c->r[31]+0x0000007Cu; // 801BB9E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB9EC
  c->lr=0x801BB9F4u; f_801BB3FC(c); // 801BB9F0
L_801BB9F4:;
  c->r[3]=c->r[13]+0xFFFF8414u; // 801BB9F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB9F8
  c->lr=0x801BBA00u; f_801BB3FC(c); // 801BB9FC
  c->r[3]=c->r[26]|c->r[26]; // 801BBA00
  c->lr=0x801BBA08u; f_801BB0D0(c); // 801BBA04
  c->r[4]=c->r[27]|c->r[27]; // 801BBA08
  c->r[5]=c->r[28]|c->r[28]; // 801BBA0C
  c->r[3]=c->r[31]+0x00000094u; // 801BBA10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBA14
  c->lr=0x801BBA1Cu; f_801BB3FC(c); // 801BBA18
  c->r[6]=c->r[29]|c->r[29]; // 801BBA1C
  c->r[5]=c->r[30]|c->r[30]; // 801BBA20
  c->r[3]=c->r[31]+0x000000C8u; // 801BBA24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBA28
  c->lr=0x801BBA30u; f_801BB3FC(c); // 801BBA2C
  cmpu(c,0,c->r[25],0x0000000Fu); // 801BBA30
  if (crb(c,1)) { goto L_801BBAF8; } // 801BBA34
  c->r[3]=0u+0x804A0000u; // 801BBA38
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801BBA3C
  c->r[3]=c->r[3]+0x000030DCu; // 801BBA40
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BBA44
  c->ctr=c->r[3]; // 801BBA48
  if (true) { switch (c->ctr) { case 0x801BBA50u: goto L_801BBA50; case 0x801BBA68u: goto L_801BBA68; case 0x801BBA7Cu: goto L_801BBA7C; case 0x801BBA94u: goto L_801BBA94; case 0x801BBAACu: goto L_801BBAAC; case 0x801BBAF8u: goto L_801BBAF8; default: break; } dispatch(c,c->ctr); return; } // 801BBA4C
L_801BBA50:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 801BBA50
  c->r[5]=c->r[28]|c->r[28]; // 801BBA54
  c->r[3]=c->r[31]+0x000000D8u; // 801BBA58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBA5C
  c->lr=0x801BBA64u; f_801BB3FC(c); // 801BBA60
  goto L_801BBAF8; // 801BBA64
L_801BBA68:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 801BBA68
  c->r[3]=c->r[31]+0x00000138u; // 801BBA6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBA70
  c->lr=0x801BBA78u; f_801BB3FC(c); // 801BBA74
  goto L_801BBAF8; // 801BBA78
L_801BBA7C:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 801BBA7C
  c->r[5]=c->r[28]|c->r[28]; // 801BBA80
  c->r[3]=c->r[31]+0x00000184u; // 801BBA84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBA88
  c->lr=0x801BBA90u; f_801BB3FC(c); // 801BBA8C
  goto L_801BBAF8; // 801BBA90
L_801BBA94:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 801BBA94
  c->r[5]=c->r[28]|c->r[28]; // 801BBA98
  c->r[3]=c->r[31]+0x000001E8u; // 801BBA9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBAA0
  c->lr=0x801BBAA8u; f_801BB3FC(c); // 801BBAA4
  goto L_801BBAF8; // 801BBAA8
L_801BBAAC:;
  c->r[3]=c->r[13]+0xFFFF8414u; // 801BBAAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBAB0
  c->lr=0x801BBAB8u; f_801BB3FC(c); // 801BBAB4
  c->r[25]=0u+0xCC000000u; // 801BBAB8
  c->r[3]=c->r[31]+0x00000248u; // 801BBABC
  c->r[4]=R16(c->r[25]+0x00005030u); // 801BBAC0
  c->r[5]=R16(c->r[25]+0x00005032u); // 801BBAC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBAC8
  c->lr=0x801BBAD0u; f_801BB3FC(c); // 801BBACC
  c->r[4]=R16(c->r[25]+0x00005020u); // 801BBAD0
  c->r[3]=c->r[31]+0x00000268u; // 801BBAD4
  c->r[5]=R16(c->r[25]+0x00005022u); // 801BBAD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBADC
  c->lr=0x801BBAE4u; f_801BB3FC(c); // 801BBAE0
  c->r[4]=0u+0xCD000000u; // 801BBAE4
  c->r[3]=c->r[31]+0x00000288u; // 801BBAE8
  c->r[4]=R32(c->r[4]+0x00006014u); // 801BBAEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBAF0
  c->lr=0x801BBAF8u; f_801BB3FC(c); // 801BBAF4
L_801BBAF8:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9CECu); // 801BBAF8
  c->r[3]=c->r[31]+0x000002A4u; // 801BBAFC
  c->r[5]=R32(c->r[13]+0xFFFF9CE8u); // 801BBB00
  c->r[7]=R32(c->r[13]+0xFFFF9CF0u); // 801BBB04
  c->r[8]=R32(c->r[13]+0xFFFF9CF4u); // 801BBB08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBB0C
  c->lr=0x801BBB14u; f_801BB3FC(c); // 801BBB10
  c->lr=0x801BBB18u; f_801B81DC(c); // 801BBB14
  c->r[11]=c->r[1]+0x00000030u; // 801BBB18
  c->lr=0x801BBB20u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBB1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BBB20
  c->lr=c->r[0]; // 801BBB24
  c->r[1]=c->r[1]+0x00000030u; // 801BBB28
  return; // 801BBB2C
}

// fn_801BBB30
void f_801BBB30(Ctx* __restrict c) {
  trace_call(0x801BBB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBB30
  c->r[0]=c->lr; // 801BBB34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BBB38
  c->r[11]=c->r[1]+0x00000030u; // 801BBB3C
  c->lr=0x801BBB44u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BBB40
  c->r[25]=c->r[4]|c->r[4]; // 801BBB44
  c->r[29]=c->r[5]|c->r[5]; // 801BBB48
  c->r[30]=c->r[3]|c->r[3]; // 801BBB4C
  c->r[4]=0u+0x00000000u; // 801BBB50
  c->r[5]=0u+0x00002000u; // 801BBB54
  c->lr=0x801BBB5Cu; f_8000443C(c); // 801BBB58
  cmps(c,0,(int32_t)c->r[25],0); // 801BBB5C
  if (!crb(c,2)) { goto L_801BBB70; } // 801BBB60
  c->r[0]=0u+0x00000000u; // 801BBB64
  W32(c->r[30]+0x00000008u,c->r[0]); // 801BBB68
  goto L_801BBC94; // 801BBB6C
L_801BBB70:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801BBB70
  c->r[31]=c->r[25]|c->r[25]; // 801BBB74
  c->r[26]=c->r[30]+0x00002000u; // 801BBB78
  c->r[28]=c->r[29]+c->r[0]; // 801BBB7C
  goto L_801BBBAC; // 801BBB80
L_801BBB84:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 801BBB84
  c->r[3]=c->r[27]|c->r[27]; // 801BBB88
  c->lr=0x801BBB90u; f_801E6E58(c); // 801BBB8C
  c->r[0]=c->r[3]+0x00000001u; // 801BBB90
  c->r[4]=c->r[27]|c->r[27]; // 801BBB94
  c->r[26]=c->r[26]-c->r[0]; // 801BBB98
  c->r[3]=c->r[26]|c->r[26]; // 801BBB9C
  c->lr=0x801BBBA4u; f_801F0AA4(c); // 801BBBA0
  c->r[0]=c->r[26]-c->r[30]; // 801BBBA4
  W32(c->r[28]+0x00000000u,c->r[0]); // 801BBBA8
L_801BBBAC:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 801BBBAC
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 801BBBB0
  if (!crb(c,0)) { IRQCHK(c); goto L_801BBB84; } // 801BBBB4
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 801BBBB8
  c->r[0]=c->r[26]-c->r[30]; // 801BBBBC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801BBBC0
  c->r[7]=0u+0x00000000u; // 801BBBC4
  c->r[6]=c->r[30]+c->r[4]; // 801BBBC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BBBCC
  c->r[6]=c->r[6]-c->r[0]; // 801BBBD0
  if (crb(c,2)) { goto L_801BBC84; } // 801BBBD4
  cmpu(c,0,c->r[3],0x00000008u); // 801BBBD8
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 801BBBDC
  if (!crb(c,1)) { goto L_801BBC50; } // 801BBBE0
  c->r[0]=c->r[3]+0x00000007u; // 801BBBE4
  c->r[4]=c->r[29]|c->r[29]; // 801BBBE8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BBBEC
  c->r[5]=c->r[6]|c->r[6]; // 801BBBF0
  c->ctr=c->r[0]; // 801BBBF4
  cmpu(c,0,c->r[3],0x00000000u); // 801BBBF8
  if (!crb(c,1)) { goto L_801BBC50; } // 801BBBFC
L_801BBC00:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BBC00
  c->r[7]=c->r[7]+0x00000008u; // 801BBC04
  W32(c->r[5]+0x00000000u,c->r[0]); // 801BBC08
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BBC0C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BBC10
  c->r[0]=R32(c->r[4]+0x00000008u); // 801BBC14
  W32(c->r[5]+0x00000008u,c->r[0]); // 801BBC18
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801BBC1C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801BBC20
  c->r[0]=R32(c->r[4]+0x00000010u); // 801BBC24
  W32(c->r[5]+0x00000010u,c->r[0]); // 801BBC28
  c->r[0]=R32(c->r[4]+0x00000014u); // 801BBC2C
  W32(c->r[5]+0x00000014u,c->r[0]); // 801BBC30
  c->r[0]=R32(c->r[4]+0x00000018u); // 801BBC34
  W32(c->r[5]+0x00000018u,c->r[0]); // 801BBC38
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801BBC3C
  c->r[4]=c->r[4]+0x00000020u; // 801BBC40
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801BBC44
  c->r[5]=c->r[5]+0x00000020u; // 801BBC48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BBC00; } // 801BBC4C
L_801BBC50:;
  c->r[3]=c->r[31]+0x00000001u; // 801BBC50
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801BBC54
  c->r[0]=c->r[3]-c->r[7]; // 801BBC58
  c->r[4]=c->r[29]+c->r[5]; // 801BBC5C
  c->r[5]=c->r[6]+c->r[5]; // 801BBC60
  c->ctr=c->r[0]; // 801BBC64
  cmpu(c,0,c->r[7],c->r[3]); // 801BBC68
  if (!crb(c,0)) { goto L_801BBC84; } // 801BBC6C
L_801BBC70:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BBC70
  c->r[4]=c->r[4]+0x00000004u; // 801BBC74
  W32(c->r[5]+0x00000000u,c->r[0]); // 801BBC78
  c->r[5]=c->r[5]+0x00000004u; // 801BBC7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BBC70; } // 801BBC80
L_801BBC84:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 801BBC84
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 801BBC88
  c->r[0]=c->r[0]-c->r[30]; // 801BBC8C
  W32(c->r[30]+0x00000008u,c->r[0]); // 801BBC90
L_801BBC94:;
  c->r[11]=c->r[1]+0x00000030u; // 801BBC94
  c->r[3]=0u+0x00000001u; // 801BBC98
  c->lr=0x801BBCA0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBC9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BBCA0
  c->lr=c->r[0]; // 801BBCA4
  c->r[1]=c->r[1]+0x00000030u; // 801BBCA8
  return; // 801BBCAC
}

// Run
void f_801BBCB0(Ctx* __restrict c) {
  trace_call(0x801BBCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBCB0
  c->r[0]=c->lr; // 801BBCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBCB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BBCBC
  c->r[31]=c->r[3]|c->r[3]; // 801BBCC0
  c->lr=0x801BBCC8u; f_801BA8A8(c); // 801BBCC4
  /* sync */ // 801BBCC8
  /* isync */ // 801BBCCC
  c->ctr=c->r[31]; // 801BBCD0
  if (true) { dispatch(c,c->ctr); return; } // 801BBCD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BBCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BBCDC
  c->lr=c->r[0]; // 801BBCE0
  c->r[1]=c->r[1]+0x00000010u; // 801BBCE4
  return; // 801BBCE8
}

// fn_801BBCEC
void f_801BBCEC(Ctx* __restrict c) {
  trace_call(0x801BBCECu);
  c->r[0]=0u+0x00000001u; // 801BBCEC
  W32(c->r[13]+0xFFFF9CD4u,c->r[0]); // 801BBCF0
  return; // 801BBCF4
}

// __OSGetExecParams
void f_801BBCF8(Ctx* __restrict c) {
  trace_call(0x801BBCF8u);
  c->r[5]=0u+0x80000000u; // 801BBCF8
  c->r[4]=R32(c->r[5]+0x000030F0u); // 801BBCFC
  cmpu(c,0,c->r[4],c->r[5]); // 801BBD00
  if (crb(c,0)) { goto L_801BBD10; } // 801BBD04
  c->r[5]=0u+0x0000001Cu; // 801BBD08
  f_80004338(c); return; // 801BBD0C
L_801BBD10:;
  c->r[0]=0u+0x00000000u; // 801BBD10
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BBD14
  return; // 801BBD18
}

// fn_801BBD1C
void f_801BBD1C(Ctx* __restrict c) {
  trace_call(0x801BBD1Cu);
  W32(c->r[13]+0xFFFF9CBCu,c->r[3]); // 801BBD1C
  return; // 801BBD20
}

// fn_801BBD24
void f_801BBD24(Ctx* __restrict c) {
  trace_call(0x801BBD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBD24
  c->r[0]=c->lr; // 801BBD28
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BBD2C
  c->r[11]=c->r[1]+0x00000030u; // 801BBD30
  c->lr=0x801BBD38u; f_801E795C(c); // 801BBD34
  c->r[7]=R8(c->r[2]+0xFFFFC0E0u); // 801BBD38
  c->r[10]=0u+0x80560000u; // 801BBD3C
  c->r[6]=R8(c->r[2]+0xFFFFC0E1u); // 801BBD40
  c->r[9]=0u+0x00000001u; // 801BBD44
  c->r[10]=c->r[10]+0xFFFF8CC0u; // 801BBD48
  c->r[5]=R8(c->r[2]+0xFFFFC0E2u); // 801BBD4C
  c->r[4]=R8(c->r[2]+0xFFFFC0E3u); // 801BBD50
  c->r[8]=0u+0xFFFFFFFFu; // 801BBD54
  c->r[0]=0u+0x00000000u; // 801BBD58
  c->r[3]=0u+0x801C0000u; // 801BBD5C
  W32(c->r[1]+0x00000010u,c->r[9]); // 801BBD60
  c->r[31]=c->r[10]+0x00010000u; // 801BBD64
  c->r[30]=c->r[10]+0x00000000u; // 801BBD68
  c->r[3]=c->r[3]+0xFFFFBD1Cu; // 801BBD6C
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801BBD70
  W8(c->r[1]+0x00000008u,c->r[7]); // 801BBD74
  W8(c->r[1]+0x00000009u,c->r[6]); // 801BBD78
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801BBD7C
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801BBD80
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BBD84
  c->lr=0x801BBD8Cu; f_801CC42C(c); // 801BBD88
L_801BBD8C:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBD8C
  cmps(c,0,(int32_t)c->r[0],0); // 801BBD90
  if (crb(c,2)) { IRQCHK(c); goto L_801BBD8C; } // 801BBD94
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBD98
  cmpu(c,0,c->r[0],0x00000001u); // 801BBD9C
  if (crb(c,2)) { goto L_801BBDBC; } // 801BBDA0
  c->r[3]=0u+0x804A0000u; // 801BBDA4
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BBDA8
  c->r[3]=c->r[3]+0x00003120u; // 801BBDAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBDB0
  c->lr=0x801BBDB8u; f_801BB3FC(c); // 801BBDB4
  c->lr=0x801BBDBCu; f_801C0348(c); // 801BBDB8
L_801BBDBC:;
  c->r[3]=c->r[31]+0xFFFFBD00u; // 801BBDBC
  c->r[0]=0u+0x00000000u; // 801BBDC0
  c->r[6]=0u+0x801C0000u; // 801BBDC4
  W32(c->r[13]+0xFFFF9CD0u,c->r[3]); // 801BBDC8
  c->r[4]=0u+0x00000020u; // 801BBDCC
  c->r[5]=0u+0x00010000u; // 801BBDD0
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BBDD4
  c->r[6]=c->r[6]+0xFFFFBD1Cu; // 801BBDD8
  c->lr=0x801BBDE0u; f_801CC590(c); // 801BBDDC
L_801BBDE0:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801BBDE4
  if (crb(c,2)) { IRQCHK(c); goto L_801BBDE0; } // 801BBDE8
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBDEC
  cmpu(c,0,c->r[0],0x00000001u); // 801BBDF0
  if (crb(c,2)) { goto L_801BBE10; } // 801BBDF4
  c->r[3]=0u+0x804A0000u; // 801BBDF8
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BBDFC
  c->r[3]=c->r[3]+0x00003120u; // 801BBE00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBE04
  c->lr=0x801BBE0Cu; f_801BB3FC(c); // 801BBE08
  c->lr=0x801BBE10u; f_801C0348(c); // 801BBE0C
L_801BBE10:;
  c->r[3]=c->r[31]+0xFFFFBD20u; // 801BBE10
  c->r[0]=0u+0x00000000u; // 801BBE14
  W32(c->r[13]+0xFFFF9CCCu,c->r[3]); // 801BBE18
  c->r[6]=0u+0x801C0000u; // 801BBE1C
  c->r[5]=R32(c->r[13]+0xFFFF9CD0u); // 801BBE20
  c->r[6]=c->r[6]+0xFFFFBD1Cu; // 801BBE24
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BBE28
  c->r[4]=0u+0x00000020u; // 801BBE2C
  c->r[5]=R32(c->r[5]+0x00000004u); // 801BBE30
  c->lr=0x801BBE38u; f_801CC590(c); // 801BBE34
L_801BBE38:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBE38
  cmps(c,0,(int32_t)c->r[0],0); // 801BBE3C
  if (crb(c,2)) { IRQCHK(c); goto L_801BBE38; } // 801BBE40
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBE44
  cmpu(c,0,c->r[0],0x00000001u); // 801BBE48
  if (crb(c,2)) { goto L_801BBE68; } // 801BBE4C
  c->r[3]=0u+0x804A0000u; // 801BBE50
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BBE54
  c->r[3]=c->r[3]+0x00003120u; // 801BBE58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBE5C
  c->lr=0x801BBE64u; f_801BB3FC(c); // 801BBE60
  c->lr=0x801BBE68u; f_801C0348(c); // 801BBE64
L_801BBE68:;
  c->r[3]=0u+0x00000000u; // 801BBE68
  c->r[6]=R32(c->r[13]+0xFFFF9CCCu); // 801BBE6C
  W32(c->r[13]+0xFFFF9CC8u,c->r[3]); // 801BBE70
  c->r[7]=0u+0x00000000u; // 801BBE74
  c->r[4]=R32(c->r[13]+0xFFFF9CD0u); // 801BBE78
  goto L_801BBEA0; // 801BBE7C
L_801BBE80:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 801BBE80
  cmps(c,0,(int32_t)c->r[0],0); // 801BBE84
  if (!crb(c,2)) { goto L_801BBE94; } // 801BBE88
  c->r[3]=c->r[6]|c->r[6]; // 801BBE8C
  W32(c->r[13]+0xFFFF9CC8u,c->r[6]); // 801BBE90
L_801BBE94:;
  c->r[6]=c->r[6]+0x00000008u; // 801BBE94
  c->r[7]=c->r[7]+0x00000001u; // 801BBE98
  W32(c->r[13]+0xFFFF9CCCu,c->r[6]); // 801BBE9C
L_801BBEA0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BBEA0
  c->r[5]=rotl(c->r[7],0)&0x000000FFu; // 801BBEA4
  cmpu(c,0,c->r[5],c->r[0]); // 801BBEA8
  if (crb(c,0)) { IRQCHK(c); goto L_801BBE80; } // 801BBEAC
  c->r[0]=0u+0x00000000u; // 801BBEB0
  c->r[8]=0u+0x801C0000u; // 801BBEB4
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BBEB8
  c->r[7]=c->r[31]+0xFFFFBD40u; // 801BBEBC
  c->r[8]=c->r[8]+0xFFFFBD1Cu; // 801BBEC0
  c->r[4]=0u+0x00000000u; // 801BBEC4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BBEC8
  c->r[5]=0u+0x00000000u; // 801BBECC
  c->r[6]=0u+0x00000000u; // 801BBED0
  c->lr=0x801BBED8u; f_801CC1C4(c); // 801BBED4
L_801BBED8:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBED8
  cmps(c,0,(int32_t)c->r[0],0); // 801BBEDC
  if (crb(c,2)) { IRQCHK(c); goto L_801BBED8; } // 801BBEE0
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBEE4
  cmpu(c,0,c->r[0],0x00000001u); // 801BBEE8
  if (crb(c,2)) { goto L_801BBF08; } // 801BBEEC
  c->r[3]=0u+0x804A0000u; // 801BBEF0
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BBEF4
  c->r[3]=c->r[3]+0x00003120u; // 801BBEF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBEFC
  c->lr=0x801BBF04u; f_801BB3FC(c); // 801BBF00
  c->lr=0x801BBF08u; f_801C0348(c); // 801BBF04
L_801BBF08:;
  c->r[0]=0u+0x00000000u; // 801BBF08
  c->r[3]=0u+0x801C0000u; // 801BBF0C
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BBF10
  c->r[3]=c->r[3]+0xFFFFBD1Cu; // 801BBF14
  c->lr=0x801BBF1Cu; f_801CC42C(c); // 801BBF18
L_801BBF1C:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBF1C
  cmps(c,0,(int32_t)c->r[0],0); // 801BBF20
  if (crb(c,2)) { IRQCHK(c); goto L_801BBF1C; } // 801BBF24
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BBF28
  cmpu(c,0,c->r[0],0x00000001u); // 801BBF2C
  if (crb(c,2)) { goto L_801BBF4C; } // 801BBF30
  c->r[3]=0u+0x804A0000u; // 801BBF34
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BBF38
  c->r[3]=c->r[3]+0x00003120u; // 801BBF3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBF40
  c->lr=0x801BBF48u; f_801BB3FC(c); // 801BBF44
  c->lr=0x801BBF4Cu; f_801C0348(c); // 801BBF48
L_801BBF4C:;
  c->r[5]=c->r[31]+0xFFFFBD40u; // 801BBF4C
  c->r[29]=0u+0x00000000u; // 801BBF50
  W32(c->r[13]+0xFFFF9CC4u,c->r[5]); // 801BBF54
  c->r[3]=c->r[13]+0xFFFF8418u; // 801BBF58
  c->r[28]=R32(c->r[5]+0x00000184u); // 801BBF5C
  c->r[4]=0u+0x00000000u; // 801BBF60
  c->r[27]=R32(c->r[5]+0x00000188u); // 801BBF64
  c->lr=0x801BBF6Cu; f_80203F64(c); // 801BBF68
  cmps(c,0,(int32_t)c->r[3],0); // 801BBF6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BBF70
  if (!crb(c,0)) { goto L_801BBF7C; } // 801BBF74
  c->r[29]=c->r[3]|c->r[3]; // 801BBF78
L_801BBF7C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BBF7C
  if (crb(c,2)) { goto L_801BBF9C; } // 801BBF80
  c->r[3]=0u+0x804A0000u; // 801BBF84
  c->r[4]=c->r[29]|c->r[29]; // 801BBF88
  c->r[3]=c->r[3]+0x00003120u; // 801BBF8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBF90
  c->lr=0x801BBF98u; f_801BB3FC(c); // 801BBF94
  c->lr=0x801BBF9Cu; f_801C318C(c); // 801BBF98
L_801BBF9C:;
  c->r[6]=c->r[27]|c->r[27]; // 801BBF9C
  c->r[5]=c->r[28]|c->r[28]; // 801BBFA0
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBFA4
  c->r[8]=c->r[1]+0x00000010u; // 801BBFA8
  c->r[7]=0u+0x00000000u; // 801BBFAC
  c->lr=0x801BBFB4u; f_801BCCB0(c); // 801BBFB0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BBFB4
  c->r[4]=c->r[3]|c->r[3]; // 801BBFB8
  cmpu(c,0,c->r[0],0x00000001u); // 801BBFBC
  if (!crb(c,2)) { goto L_801BBFCC; } // 801BBFC0
  cmps(c,0,(int32_t)c->r[3],0); // 801BBFC4
  if (crb(c,2)) { goto L_801BBFE0; } // 801BBFC8
L_801BBFCC:;
  c->r[3]=0u+0x804A0000u; // 801BBFCC
  c->r[3]=c->r[3]+0x00003120u; // 801BBFD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBFD4
  c->lr=0x801BBFDCu; f_801BB3FC(c); // 801BBFD8
  c->lr=0x801BBFE0u; f_801C318C(c); // 801BBFDC
L_801BBFE0:;
  c->r[6]=c->r[27]|c->r[27]; // 801BBFE0
  c->r[5]=c->r[28]|c->r[28]; // 801BBFE4
  c->r[7]=c->r[30]|c->r[30]; // 801BBFE8
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBFEC
  c->r[8]=c->r[1]+0x00000010u; // 801BBFF0
  c->lr=0x801BBFF8u; f_801BCCB0(c); // 801BBFF4
  cmps(c,0,(int32_t)c->r[3],0); // 801BBFF8
  c->r[4]=c->r[3]|c->r[3]; // 801BBFFC
  if (crb(c,2)) { goto L_801BC018; } // 801BC000
  c->r[3]=0u+0x804A0000u; // 801BC004
  c->r[3]=c->r[3]+0x00003120u; // 801BC008
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC00C
  c->lr=0x801BC014u; f_801BB3FC(c); // 801BC010
  c->lr=0x801BC018u; f_801C318C(c); // 801BC014
L_801BC018:;
  c->r[6]=c->r[27]|c->r[27]; // 801BC018
  c->r[5]=c->r[28]|c->r[28]; // 801BC01C
  c->r[7]=c->r[30]|c->r[30]; // 801BC020
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC024
  c->lr=0x801BC02Cu; f_801BCDD0(c); // 801BC028
  cmps(c,0,(int32_t)c->r[3],0); // 801BC02C
  c->r[4]=c->r[3]|c->r[3]; // 801BC030
  if (crb(c,2)) { goto L_801BC04C; } // 801BC034
  c->r[3]=0u+0x804A0000u; // 801BC038
  c->r[3]=c->r[3]+0x00003120u; // 801BC03C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC040
  c->lr=0x801BC048u; f_801BB3FC(c); // 801BC044
  c->lr=0x801BC04Cu; f_801C318C(c); // 801BC048
L_801BC04C:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801BC04C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC050
  if (crb(c,0)) { goto L_801BC06C; } // 801BC054
  c->lr=0x801BC05Cu; f_80204144(c); // 801BC058
  cmps(c,0,(int32_t)c->r[3],0); // 801BC05C
  if (!crb(c,2)) { goto L_801BC06C; } // 801BC060
  c->r[0]=0u+0xFFFFFFFFu; // 801BC064
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC068
L_801BC06C:;
  c->lr=0x801BC070u; f_801CBDD8(c); // 801BC06C
  c->r[0]=0u+0x00000000u; // 801BC070
  c->r[4]=0u+0x801C0000u; // 801BC074
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BC078
  c->r[3]=c->r[31]+0x00000740u; // 801BC07C
  c->r[4]=c->r[4]+0xFFFFBD1Cu; // 801BC080
  c->lr=0x801BC088u; f_801CC03C(c); // 801BC084
L_801BC088:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC088
  cmps(c,0,(int32_t)c->r[0],0); // 801BC08C
  if (crb(c,2)) { IRQCHK(c); goto L_801BC088; } // 801BC090
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC094
  cmpu(c,0,c->r[0],0x00000001u); // 801BC098
  if (crb(c,2)) { goto L_801BC0B8; } // 801BC09C
  c->r[3]=0u+0x804A0000u; // 801BC0A0
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BC0A4
  c->r[3]=c->r[3]+0x00003120u; // 801BC0A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC0AC
  c->lr=0x801BC0B4u; f_801BB3FC(c); // 801BC0B0
  c->lr=0x801BC0B8u; f_801C0348(c); // 801BC0B4
L_801BC0B8:;
  c->r[3]=c->r[31]+0xFFFFBD00u; // 801BC0B8
  c->r[0]=0u+0x00000000u; // 801BC0BC
  c->r[6]=0u+0x801C0000u; // 801BC0C0
  W32(c->r[13]+0xFFFF9CD0u,c->r[3]); // 801BC0C4
  c->r[4]=0u+0x00000020u; // 801BC0C8
  c->r[5]=0u+0x00010000u; // 801BC0CC
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BC0D0
  c->r[6]=c->r[6]+0xFFFFBD1Cu; // 801BC0D4
  c->lr=0x801BC0DCu; f_801CC590(c); // 801BC0D8
L_801BC0DC:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC0DC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC0E0
  if (crb(c,2)) { IRQCHK(c); goto L_801BC0DC; } // 801BC0E4
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC0E8
  cmpu(c,0,c->r[0],0x00000001u); // 801BC0EC
  if (crb(c,2)) { goto L_801BC10C; } // 801BC0F0
  c->r[3]=0u+0x804A0000u; // 801BC0F4
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BC0F8
  c->r[3]=c->r[3]+0x00003120u; // 801BC0FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC100
  c->lr=0x801BC108u; f_801BB3FC(c); // 801BC104
  c->lr=0x801BC10Cu; f_801C0348(c); // 801BC108
L_801BC10C:;
  c->r[3]=c->r[31]+0xFFFFBD20u; // 801BC10C
  c->r[0]=0u+0x00000000u; // 801BC110
  W32(c->r[13]+0xFFFF9CCCu,c->r[3]); // 801BC114
  c->r[6]=0u+0x801C0000u; // 801BC118
  c->r[5]=R32(c->r[13]+0xFFFF9CD0u); // 801BC11C
  c->r[6]=c->r[6]+0xFFFFBD1Cu; // 801BC120
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BC124
  c->r[4]=0u+0x00000020u; // 801BC128
  c->r[5]=R32(c->r[5]+0x00000004u); // 801BC12C
  c->lr=0x801BC134u; f_801CC590(c); // 801BC130
L_801BC134:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC134
  cmps(c,0,(int32_t)c->r[0],0); // 801BC138
  if (crb(c,2)) { IRQCHK(c); goto L_801BC134; } // 801BC13C
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC140
  cmpu(c,0,c->r[0],0x00000001u); // 801BC144
  if (crb(c,2)) { goto L_801BC164; } // 801BC148
  c->r[3]=0u+0x804A0000u; // 801BC14C
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BC150
  c->r[3]=c->r[3]+0x00003120u; // 801BC154
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC158
  c->lr=0x801BC160u; f_801BB3FC(c); // 801BC15C
  c->lr=0x801BC164u; f_801C0348(c); // 801BC160
L_801BC164:;
  c->r[3]=0u+0x00000000u; // 801BC164
  c->r[6]=R32(c->r[13]+0xFFFF9CCCu); // 801BC168
  W32(c->r[13]+0xFFFF9CC8u,c->r[3]); // 801BC16C
  c->r[7]=0u+0x00000000u; // 801BC170
  c->r[4]=R32(c->r[13]+0xFFFF9CD0u); // 801BC174
  goto L_801BC19C; // 801BC178
L_801BC17C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 801BC17C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC180
  if (!crb(c,2)) { goto L_801BC190; } // 801BC184
  c->r[3]=c->r[6]|c->r[6]; // 801BC188
  W32(c->r[13]+0xFFFF9CC8u,c->r[6]); // 801BC18C
L_801BC190:;
  c->r[6]=c->r[6]+0x00000008u; // 801BC190
  c->r[7]=c->r[7]+0x00000001u; // 801BC194
  W32(c->r[13]+0xFFFF9CCCu,c->r[6]); // 801BC198
L_801BC19C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BC19C
  c->r[5]=rotl(c->r[7],0)&0x000000FFu; // 801BC1A0
  cmpu(c,0,c->r[5],c->r[0]); // 801BC1A4
  if (crb(c,0)) { IRQCHK(c); goto L_801BC17C; } // 801BC1A8
  c->r[0]=0u+0x00000000u; // 801BC1AC
  c->r[8]=0u+0x801C0000u; // 801BC1B0
  W32(c->r[13]+0xFFFF9CBCu,c->r[0]); // 801BC1B4
  c->r[7]=c->r[31]+0xFFFFBD40u; // 801BC1B8
  c->r[8]=c->r[8]+0xFFFFBD1Cu; // 801BC1BC
  c->r[4]=0u+0x00000000u; // 801BC1C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BC1C4
  c->r[5]=0u+0x00000000u; // 801BC1C8
  c->r[6]=0u+0x00000000u; // 801BC1CC
  c->lr=0x801BC1D4u; f_801CC1C4(c); // 801BC1D0
L_801BC1D4:;
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC1D4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC1D8
  if (crb(c,2)) { IRQCHK(c); goto L_801BC1D4; } // 801BC1DC
  c->r[0]=R32(c->r[13]+0xFFFF9CBCu); // 801BC1E0
  cmpu(c,0,c->r[0],0x00000001u); // 801BC1E4
  if (crb(c,2)) { goto L_801BC204; } // 801BC1E8
  c->r[3]=0u+0x804A0000u; // 801BC1EC
  c->r[4]=R32(c->r[13]+0xFFFF9CBCu); // 801BC1F0
  c->r[3]=c->r[3]+0x00003120u; // 801BC1F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC1F8
  c->lr=0x801BC200u; f_801BB3FC(c); // 801BC1FC
  c->lr=0x801BC204u; f_801C0348(c); // 801BC200
L_801BC204:;
  c->r[11]=c->r[1]+0x00000030u; // 801BC204
  c->lr=0x801BC20Cu; f_801E79A8(c); // 801BC208
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BC20C
  c->lr=c->r[0]; // 801BC210
  c->r[1]=c->r[1]+0x00000030u; // 801BC214
  return; // 801BC218
}

// fn_801BC21C
void f_801BC21C(Ctx* __restrict c) {
  trace_call(0x801BC21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC21C
  c->r[0]=c->lr; // 801BC220
  c->r[3]=0u+0x00000001u; // 801BC224
  c->r[8]=0u+0xFFFFFFFFu; // 801BC228
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC22C
  c->r[4]=0u+0x00000000u; // 801BC230
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BC234
  c->r[31]=0u+0x00000000u; // 801BC238
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BC23C
  c->r[30]=0u+0x80560000u; // 801BC240
  c->r[30]=c->r[30]+0xFFFF8CC0u; // 801BC244
  c->r[7]=R8(c->r[2]+0xFFFFC0E4u); // 801BC248
  c->r[6]=R8(c->r[2]+0xFFFFC0E5u); // 801BC24C
  c->r[5]=R8(c->r[2]+0xFFFFC0E6u); // 801BC250
  c->r[0]=R8(c->r[2]+0xFFFFC0E7u); // 801BC254
  W32(c->r[1]+0x00000010u,c->r[3]); // 801BC258
  c->r[3]=c->r[13]+0xFFFF8418u; // 801BC25C
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801BC260
  W8(c->r[1]+0x00000008u,c->r[7]); // 801BC264
  W8(c->r[1]+0x00000009u,c->r[6]); // 801BC268
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801BC26C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BC270
  c->lr=0x801BC278u; f_80203F64(c); // 801BC274
  cmps(c,0,(int32_t)c->r[3],0); // 801BC278
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BC27C
  if (!crb(c,0)) { goto L_801BC288; } // 801BC280
  c->r[31]=c->r[3]|c->r[3]; // 801BC284
L_801BC288:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC288
  if (!crb(c,2)) { goto L_801BC300; } // 801BC28C
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC290
  c->r[8]=c->r[1]+0x00000010u; // 801BC294
  c->r[6]=0u+0x00000002u; // 801BC298
  c->r[5]=0u+0x00000001u; // 801BC29C
  c->r[7]=0u+0x00000000u; // 801BC2A0
  c->lr=0x801BC2A8u; f_801BCCB0(c); // 801BC2A4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BC2A8
  cmpu(c,0,c->r[0],0x00000001u); // 801BC2AC
  if (!crb(c,2)) { goto L_801BC300; } // 801BC2B0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC2B4
  if (crb(c,2)) { goto L_801BC2C0; } // 801BC2B8
  goto L_801BC300; // 801BC2BC
L_801BC2C0:;
  c->r[7]=c->r[30]|c->r[30]; // 801BC2C0
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC2C4
  c->r[8]=c->r[1]+0x00000010u; // 801BC2C8
  c->r[6]=0u+0x00000002u; // 801BC2CC
  c->r[5]=0u+0x00000001u; // 801BC2D0
  c->lr=0x801BC2D8u; f_801BCCB0(c); // 801BC2D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC2D8
  if (!crb(c,2)) { goto L_801BC300; } // 801BC2DC
  c->r[7]=c->r[30]|c->r[30]; // 801BC2E0
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC2E4
  c->r[6]=0u+0x00000002u; // 801BC2E8
  c->r[5]=0u+0x00000001u; // 801BC2EC
  c->lr=0x801BC2F4u; f_801BCDD0(c); // 801BC2F0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC2F4
  if (!crb(c,2)) { goto L_801BC300; } // 801BC2F8
L_801BC2FC:;
  IRQCHK(c); goto L_801BC2FC; // 801BC2FC
L_801BC300:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC300
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BC304
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BC308
  c->lr=c->r[0]; // 801BC30C
  c->r[1]=c->r[1]+0x00000020u; // 801BC310
  return; // 801BC314
}

// fn_801BC318
void f_801BC318(Ctx* __restrict c) {
  trace_call(0x801BC318u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801BC318
  c->r[12]=c->r[1]|c->r[1]; // 801BC31C
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 801BC320
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC324
  c->r[0]=c->lr; // 801BC328
  c->r[3]=0u+0x00000001u; // 801BC32C
  c->r[4]=0u+0x00000000u; // 801BC330
  W32(c->r[12]+0x00000004u,c->r[0]); // 801BC334
  c->r[0]=0u+0xFFFFFFFFu; // 801BC338
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801BC33C
  c->r[31]=0u+0x00000000u; // 801BC340
  W32(c->r[1]+0x00000024u,c->r[3]); // 801BC344
  c->r[3]=c->r[13]+0xFFFF8418u; // 801BC348
  W32(c->r[1]+0x00000020u,c->r[0]); // 801BC34C
  c->lr=0x801BC354u; f_80203F64(c); // 801BC350
  cmps(c,0,(int32_t)c->r[3],0); // 801BC354
  W32(c->r[1]+0x00000020u,c->r[3]); // 801BC358
  c->r[0]=c->r[3]|c->r[3]; // 801BC35C
  if (!crb(c,0)) { goto L_801BC368; } // 801BC360
  c->r[31]=c->r[3]|c->r[3]; // 801BC364
L_801BC368:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC368
  if (!crb(c,2)) { goto L_801BC44C; } // 801BC36C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC370
  c->r[7]=c->r[1]+0x00000060u; // 801BC374
  c->r[5]=c->r[1]+0x00000080u; // 801BC378
  if (crb(c,0)) { goto L_801BC390; } // 801BC37C
  c->r[4]=c->r[1]+0x00000040u; // 801BC380
  c->r[3]=0u+0x00000000u; // 801BC384
  cmpu(c,0,c->r[4],c->r[3]); // 801BC388
  if (!crb(c,2)) { goto L_801BC398; } // 801BC38C
L_801BC390:;
  c->r[3]=0u+0xFFFFFC07u; // 801BC390
  goto L_801BC3D0; // 801BC394
L_801BC398:;
  c->r[4]=0u+0x00000008u; // 801BC398
  W32(c->r[1]+0x00000060u,c->r[5]); // 801BC39C
  c->r[3]=c->r[0]|c->r[0]; // 801BC3A0
  c->r[5]=0u+0x00000000u; // 801BC3A4
  W32(c->r[1]+0x00000064u,c->r[4]); // 801BC3A8
  c->r[4]=0u+0x00000020u; // 801BC3AC
  c->r[6]=0u+0x00000001u; // 801BC3B0
  c->lr=0x801BC3B8u; f_80204C4C(c); // 801BC3B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC3B8
  if (!crb(c,2)) { goto L_801BC3D0; } // 801BC3BC
  c->r[0]=R32(c->r[1]+0x00000080u); // 801BC3C0
  c->r[4]=R32(c->r[1]+0x00000084u); // 801BC3C4
  W32(c->r[1]+0x00000040u,c->r[0]); // 801BC3C8
  W32(c->r[1]+0x00000044u,c->r[4]); // 801BC3CC
L_801BC3D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BC3D0
  if (!crb(c,2)) { goto L_801BC44C; } // 801BC3D4
  c->r[5]=R32(c->r[1]+0x00000040u); // 801BC3D8
  c->r[3]=c->r[1]+0x00000020u; // 801BC3DC
  c->r[6]=R32(c->r[1]+0x00000044u); // 801BC3E0
  c->r[8]=c->r[1]+0x00000024u; // 801BC3E4
  c->r[7]=0u+0x00000000u; // 801BC3E8
  c->lr=0x801BC3F0u; f_801BCCB0(c); // 801BC3EC
  cmps(c,0,(int32_t)c->r[3],0); // 801BC3F0
  if (!crb(c,2)) { goto L_801BC44C; } // 801BC3F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC3F8
  c->r[4]=0u+0x00000020u; // 801BC3FC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801BC400
  c->lr=0x801BC408u; f_801BA268(c); // 801BC404
  c->r[31]=c->r[3]|c->r[3]; // 801BC408
  c->r[5]=R32(c->r[1]+0x00000040u); // 801BC40C
  c->r[6]=R32(c->r[1]+0x00000044u); // 801BC410
  c->r[7]=c->r[31]|c->r[31]; // 801BC414
  c->r[3]=c->r[1]+0x00000020u; // 801BC418
  c->r[8]=c->r[1]+0x00000024u; // 801BC41C
  c->lr=0x801BC424u; f_801BCCB0(c); // 801BC420
  cmps(c,0,(int32_t)c->r[3],0); // 801BC424
  if (!crb(c,2)) { goto L_801BC44C; } // 801BC428
  c->r[5]=R32(c->r[1]+0x00000040u); // 801BC42C
  c->r[7]=c->r[31]|c->r[31]; // 801BC430
  c->r[6]=R32(c->r[1]+0x00000044u); // 801BC434
  c->r[3]=c->r[1]+0x00000020u; // 801BC438
  c->lr=0x801BC440u; f_801BCDD0(c); // 801BC43C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC440
  if (!crb(c,2)) { goto L_801BC44C; } // 801BC444
L_801BC448:;
  IRQCHK(c); goto L_801BC448; // 801BC448
L_801BC44C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801BC44C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801BC450
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801BC454
  c->lr=c->r[0]; // 801BC458
  c->r[1]=c->r[10]|c->r[10]; // 801BC45C
  return; // 801BC460
}

// fn_801BC464
void f_801BC464(Ctx* __restrict c) {
  trace_call(0x801BC464u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC464
  c->r[0]=c->lr; // 801BC468
  W32(c->r[1]+0x000001C4u,c->r[0]); // 801BC46C
  c->r[11]=c->r[1]+0x000001C0u; // 801BC470
  c->lr=0x801BC478u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC474
  c->r[27]=c->r[3]|c->r[3]; // 801BC478
  c->r[24]=c->r[4]|c->r[4]; // 801BC47C
  c->r[28]=c->r[5]|c->r[5]; // 801BC480
  c->r[29]=c->r[6]|c->r[6]; // 801BC484
  c->r[25]=c->r[7]|c->r[7]; // 801BC488
  c->r[31]=c->r[8]|c->r[8]; // 801BC48C
  c->r[26]=c->r[9]|c->r[9]; // 801BC490
  c->lr=0x801BC498u; f_801BE74C(c); // 801BC494
  c->r[3]=0u+0x0000001Cu; // 801BC498
  c->r[4]=0u+0x00000001u; // 801BC49C
  c->lr=0x801BC4A4u; f_801BA268(c); // 801BC4A0
  c->r[0]=0u+0x00000001u; // 801BC4A4
  cmps(c,0,(int32_t)c->r[25],0); // 801BC4A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BC4AC
  c->r[30]=c->r[3]|c->r[3]; // 801BC4B0
  W32(c->r[3]+0x00000004u,c->r[24]); // 801BC4B4
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 801BC4B8
  W32(c->r[3]+0x00000010u,c->r[29]); // 801BC4BC
  W32(c->r[3]+0x00000014u,c->r[25]); // 801BC4C0
  if (!crb(c,2)) { goto L_801BC4E4; } // 801BC4C4
  c->r[3]=0u+0x00002000u; // 801BC4C8
  c->r[4]=0u+0x00000001u; // 801BC4CC
  c->lr=0x801BC4D4u; f_801BA268(c); // 801BC4D0
  W32(c->r[30]+0x00000018u,c->r[3]); // 801BC4D4
  c->r[4]=c->r[31]|c->r[31]; // 801BC4D8
  c->r[5]=c->r[26]|c->r[26]; // 801BC4DC
  c->lr=0x801BC4E4u; f_801BBB30(c); // 801BC4E0
L_801BC4E4:;
  c->lr=0x801BC4E8u; f_801C6F5C(c); // 801BC4E4
  c->r[3]=0u+0x00000001u; // 801BC4E8
  c->lr=0x801BC4F0u; f_801CABAC(c); // 801BC4EC
  c->lr=0x801BC4F4u; f_801CABBC(c); // 801BC4F0
  c->r[0]=0u+0x00000000u; // 801BC4F4
  c->r[3]=0u+0x801C0000u; // 801BC4F8
  W32(c->r[13]+0xFFFF9CD4u,c->r[0]); // 801BC4FC
  c->r[3]=c->r[3]+0xFFFFBCECu; // 801BC500
  c->lr=0x801BC508u; f_801CB250(c); // 801BC504
  c->r[3]=0u+0xFFFFFFF0u; // 801BC508
  c->lr=0x801BC510u; f_801BEADC(c); // 801BC50C
  c->r[3]=0u+0x00000010u; // 801BC510
  c->lr=0x801BC518u; f_801BEB5C(c); // 801BC514
  c->lr=0x801BC51Cu; f_801BE760(c); // 801BC518
L_801BC51C:;
  c->r[0]=R32(c->r[13]+0xFFFF9CD4u); // 801BC51C
  cmps(c,0,(int32_t)c->r[0],1); // 801BC520
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC51C; } // 801BC524
  c->lr=0x801BC52Cu; f_801BBD24(c); // 801BC528
  c->r[3]=0u+0x00000020u; // 801BC52C
  c->r[4]=0u+0x00000020u; // 801BC530
  c->lr=0x801BC538u; f_801BA268(c); // 801BC534
  c->r[6]=R32(c->r[13]+0xFFFF9CB8u); // 801BC538
  c->r[31]=c->r[3]|c->r[3]; // 801BC53C
  cmps(c,0,(int32_t)c->r[6],0); // 801BC540
  if (crb(c,2)) { goto L_801BC54C; } // 801BC544
  goto L_801BC5E8; // 801BC548
L_801BC54C:;
  c->r[26]=0u+0x80000000u; // 801BC54C
  c->r[0]=R32(c->r[26]+0x000030F4u); // 801BC550
  cmps(c,0,(int32_t)c->r[0],0); // 801BC554
  if (crb(c,2)) { goto L_801BC5E0; } // 801BC558
  c->r[3]=0u+0x00000040u; // 801BC55C
  c->r[4]=0u+0x00000020u; // 801BC560
  c->lr=0x801BC568u; f_801BA268(c); // 801BC564
  c->r[0]=R32(c->r[26]+0x000030F4u); // 801BC568
  c->r[26]=c->r[3]|c->r[3]; // 801BC56C
  c->r[3]=c->r[1]+0x000000E0u; // 801BC570
  c->r[5]=0u+0x00000040u; // 801BC574
  c->r[4]=c->r[26]|c->r[26]; // 801BC578
  c->r[6]=sraw(c,c->r[0],2); // 801BC57C
  c->r[7]=0u+0x00000000u; // 801BC580
  c->r[8]=0u+0x00000000u; // 801BC584
  c->lr=0x801BC58Cu; f_801CA88C(c); // 801BC588
  goto L_801BC5B4; // 801BC58C
L_801BC590:;
  c->r[3]=c->r[1]+0x000000E0u; // 801BC590
  c->lr=0x801BC598u; f_801CAA48(c); // 801BC594
  cmps(c,0,(int32_t)c->r[3],2); // 801BC598
  if (crb(c,1)) { goto L_801BC5B0; } // 801BC59C
  c->r[3]=c->r[1]+0x000000E0u; // 801BC5A0
  c->lr=0x801BC5A8u; f_801CAA48(c); // 801BC5A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5A8
  if (!crb(c,0)) { goto L_801BC5B4; } // 801BC5AC
L_801BC5B0:;
  c->lr=0x801BC5B4u; f_801C0348(c); // 801BC5B0
L_801BC5B4:;
  c->r[3]=c->r[1]+0x000000E0u; // 801BC5B4
  c->lr=0x801BC5BCu; f_801CAA48(c); // 801BC5B8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC590; } // 801BC5C0
  c->r[3]=0u+0x80000000u; // 801BC5C4
  c->r[0]=R32(c->r[26]+0x00000038u); // 801BC5C8
  c->r[3]=R32(c->r[3]+0x000030F4u); // 801BC5CC
  c->r[0]=c->r[3]+c->r[0]; // 801BC5D0
  c->r[6]=sraw(c,c->r[0],2); // 801BC5D4
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC5D8
  goto L_801BC5E8; // 801BC5DC
L_801BC5E0:;
  c->r[6]=0u+0x00000910u; // 801BC5E0
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC5E4
L_801BC5E8:;
  c->r[4]=c->r[31]|c->r[31]; // 801BC5E8
  c->r[3]=c->r[1]+0x00000110u; // 801BC5EC
  c->r[5]=0u+0x00000020u; // 801BC5F0
  c->r[7]=0u+0x00000000u; // 801BC5F4
  c->r[8]=0u+0x00000000u; // 801BC5F8
  c->lr=0x801BC600u; f_801CA88C(c); // 801BC5FC
  goto L_801BC628; // 801BC600
L_801BC604:;
  c->r[3]=c->r[1]+0x00000110u; // 801BC604
  c->lr=0x801BC60Cu; f_801CAA48(c); // 801BC608
  cmps(c,0,(int32_t)c->r[3],2); // 801BC60C
  if (crb(c,1)) { goto L_801BC624; } // 801BC610
  c->r[3]=c->r[1]+0x00000110u; // 801BC614
  c->lr=0x801BC61Cu; f_801CAA48(c); // 801BC618
  cmps(c,0,(int32_t)c->r[3],0); // 801BC61C
  if (!crb(c,0)) { goto L_801BC628; } // 801BC620
L_801BC624:;
  c->lr=0x801BC628u; f_801C0348(c); // 801BC624
L_801BC628:;
  c->r[3]=c->r[1]+0x00000110u; // 801BC628
  c->lr=0x801BC630u; f_801CAA48(c); // 801BC62C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC630
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC604; } // 801BC634
  c->r[6]=R32(c->r[13]+0xFFFF9CB8u); // 801BC638
  cmps(c,0,(int32_t)c->r[6],0); // 801BC63C
  if (crb(c,2)) { goto L_801BC648; } // 801BC640
  goto L_801BC6E4; // 801BC644
L_801BC648:;
  c->r[26]=0u+0x80000000u; // 801BC648
  c->r[0]=R32(c->r[26]+0x000030F4u); // 801BC64C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC650
  if (crb(c,2)) { goto L_801BC6DC; } // 801BC654
  c->r[3]=0u+0x00000040u; // 801BC658
  c->r[4]=0u+0x00000020u; // 801BC65C
  c->lr=0x801BC664u; f_801BA268(c); // 801BC660
  c->r[0]=R32(c->r[26]+0x000030F4u); // 801BC664
  c->r[26]=c->r[3]|c->r[3]; // 801BC668
  c->r[3]=c->r[1]+0x00000140u; // 801BC66C
  c->r[5]=0u+0x00000040u; // 801BC670
  c->r[4]=c->r[26]|c->r[26]; // 801BC674
  c->r[6]=sraw(c,c->r[0],2); // 801BC678
  c->r[7]=0u+0x00000000u; // 801BC67C
  c->r[8]=0u+0x00000000u; // 801BC680
  c->lr=0x801BC688u; f_801CA88C(c); // 801BC684
  goto L_801BC6B0; // 801BC688
L_801BC68C:;
  c->r[3]=c->r[1]+0x00000140u; // 801BC68C
  c->lr=0x801BC694u; f_801CAA48(c); // 801BC690
  cmps(c,0,(int32_t)c->r[3],2); // 801BC694
  if (crb(c,1)) { goto L_801BC6AC; } // 801BC698
  c->r[3]=c->r[1]+0x00000140u; // 801BC69C
  c->lr=0x801BC6A4u; f_801CAA48(c); // 801BC6A0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC6A4
  if (!crb(c,0)) { goto L_801BC6B0; } // 801BC6A8
L_801BC6AC:;
  c->lr=0x801BC6B0u; f_801C0348(c); // 801BC6AC
L_801BC6B0:;
  c->r[3]=c->r[1]+0x00000140u; // 801BC6B0
  c->lr=0x801BC6B8u; f_801CAA48(c); // 801BC6B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC6B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC68C; } // 801BC6BC
  c->r[3]=0u+0x80000000u; // 801BC6C0
  c->r[0]=R32(c->r[26]+0x00000038u); // 801BC6C4
  c->r[3]=R32(c->r[3]+0x000030F4u); // 801BC6C8
  c->r[0]=c->r[3]+c->r[0]; // 801BC6CC
  c->r[6]=sraw(c,c->r[0],2); // 801BC6D0
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC6D4
  goto L_801BC6E4; // 801BC6D8
L_801BC6DC:;
  c->r[6]=0u+0x00000910u; // 801BC6DC
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC6E0
L_801BC6E4:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 801BC6E4
  c->r[3]=c->r[1]+0x00000170u; // 801BC6E8
  c->r[6]=c->r[6]+0x00000008u; // 801BC6EC
  c->r[4]=0u+0x81200000u; // 801BC6F0
  c->r[0]=c->r[5]+0x0000001Fu; // 801BC6F4
  c->r[7]=0u+0x00000000u; // 801BC6F8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BC6FC
  c->r[8]=0u+0x00000000u; // 801BC700
  c->lr=0x801BC708u; f_801CA88C(c); // 801BC704
  goto L_801BC730; // 801BC708
L_801BC70C:;
  c->r[3]=c->r[1]+0x00000170u; // 801BC70C
  c->lr=0x801BC714u; f_801CAA48(c); // 801BC710
  cmps(c,0,(int32_t)c->r[3],2); // 801BC714
  if (crb(c,1)) { goto L_801BC72C; } // 801BC718
  c->r[3]=c->r[1]+0x00000170u; // 801BC71C
  c->lr=0x801BC724u; f_801CAA48(c); // 801BC720
  cmps(c,0,(int32_t)c->r[3],0); // 801BC724
  if (!crb(c,0)) { goto L_801BC730; } // 801BC728
L_801BC72C:;
  c->lr=0x801BC730u; f_801C0348(c); // 801BC72C
L_801BC730:;
  c->r[3]=c->r[1]+0x00000170u; // 801BC730
  c->lr=0x801BC738u; f_801CAA48(c); // 801BC734
  cmps(c,0,(int32_t)c->r[3],0); // 801BC738
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC70C; } // 801BC73C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801BC740
  c->r[3]=0u+0x81200000u; // 801BC744
  c->r[0]=c->r[4]+0x0000001Fu; // 801BC748
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BC74C
  c->lr=0x801BC754u; f_801BA874(c); // 801BC750
  c->r[4]=0u+0x804A0000u; // 801BC754
  c->r[3]=c->r[31]|c->r[31]; // 801BC758
  c->r[4]=c->r[4]+0x00003144u; // 801BC75C
  c->r[5]=0u+0x0000000Au; // 801BC760
  c->lr=0x801BC768u; f_801F0D3C(c); // 801BC764
  c->r[0]=0u-c->r[3]; // 801BC768
  c->r[0]=c->r[0]&~c->r[3]; // 801BC76C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BC770
  if (crb(c,2)) { goto L_801BC96C; } // 801BC774
  c->r[0]=c->r[27]+0x00010000u; // 801BC778
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BC77C
  if (!crb(c,2)) { goto L_801BC840; } // 801BC780
  c->r[6]=R32(c->r[13]+0xFFFF9CB8u); // 801BC784
  cmps(c,0,(int32_t)c->r[6],0); // 801BC788
  if (crb(c,2)) { goto L_801BC794; } // 801BC78C
  goto L_801BC830; // 801BC790
L_801BC794:;
  c->r[27]=0u+0x80000000u; // 801BC794
  c->r[0]=R32(c->r[27]+0x000030F4u); // 801BC798
  cmps(c,0,(int32_t)c->r[0],0); // 801BC79C
  if (crb(c,2)) { goto L_801BC828; } // 801BC7A0
  c->r[3]=0u+0x00000040u; // 801BC7A4
  c->r[4]=0u+0x00000020u; // 801BC7A8
  c->lr=0x801BC7B0u; f_801BA268(c); // 801BC7AC
  c->r[0]=R32(c->r[27]+0x000030F4u); // 801BC7B0
  c->r[26]=c->r[3]|c->r[3]; // 801BC7B4
  c->r[3]=c->r[1]+0x000000B0u; // 801BC7B8
  c->r[5]=0u+0x00000040u; // 801BC7BC
  c->r[4]=c->r[26]|c->r[26]; // 801BC7C0
  c->r[6]=sraw(c,c->r[0],2); // 801BC7C4
  c->r[7]=0u+0x00000000u; // 801BC7C8
  c->r[8]=0u+0x00000000u; // 801BC7CC
  c->lr=0x801BC7D4u; f_801CA88C(c); // 801BC7D0
  goto L_801BC7FC; // 801BC7D4
L_801BC7D8:;
  c->r[3]=c->r[1]+0x000000B0u; // 801BC7D8
  c->lr=0x801BC7E0u; f_801CAA48(c); // 801BC7DC
  cmps(c,0,(int32_t)c->r[3],2); // 801BC7E0
  if (crb(c,1)) { goto L_801BC7F8; } // 801BC7E4
  c->r[3]=c->r[1]+0x000000B0u; // 801BC7E8
  c->lr=0x801BC7F0u; f_801CAA48(c); // 801BC7EC
  cmps(c,0,(int32_t)c->r[3],0); // 801BC7F0
  if (!crb(c,0)) { goto L_801BC7FC; } // 801BC7F4
L_801BC7F8:;
  c->lr=0x801BC7FCu; f_801C0348(c); // 801BC7F8
L_801BC7FC:;
  c->r[3]=c->r[1]+0x000000B0u; // 801BC7FC
  c->lr=0x801BC804u; f_801CAA48(c); // 801BC800
  cmps(c,0,(int32_t)c->r[3],0); // 801BC804
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC7D8; } // 801BC808
  c->r[3]=0u+0x80000000u; // 801BC80C
  c->r[0]=R32(c->r[26]+0x00000038u); // 801BC810
  c->r[3]=R32(c->r[3]+0x000030F4u); // 801BC814
  c->r[0]=c->r[3]+c->r[0]; // 801BC818
  c->r[6]=sraw(c,c->r[0],2); // 801BC81C
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC820
  goto L_801BC830; // 801BC824
L_801BC828:;
  c->r[6]=0u+0x00000910u; // 801BC828
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BC82C
L_801BC830:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801BC830
  c->r[0]=c->r[3]+0x00000020u; // 801BC834
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BC838
  c->r[27]=c->r[0]+c->r[6]; // 801BC83C
L_801BC840:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 801BC840
  c->r[3]=c->r[1]+0x00000008u; // 801BC844
  c->r[4]=c->r[1]+0x0000000Cu; // 801BC848
  c->r[5]=c->r[1]+0x00000010u; // 801BC84C
  c->r[12]=R32(c->r[31]+0x00000010u); // 801BC850
  c->ctr=c->r[12]; // 801BC854
  if (true) { c->lr=0x801BC85Cu; dispatch(c,c->ctr); } // 801BC858
  c->r[3]=0u+0x0000001Cu; // 801BC85C
  c->r[4]=0u+0x00000001u; // 801BC860
  c->lr=0x801BC868u; f_801BA268(c); // 801BC864
  c->r[26]=c->r[3]|c->r[3]; // 801BC868
  c->r[4]=c->r[30]|c->r[30]; // 801BC86C
  c->r[5]=0u+0x0000001Cu; // 801BC870
  c->lr=0x801BC878u; f_80004338(c); // 801BC874
  c->r[4]=0u+0x80000000u; // 801BC878
  c->r[3]=0u+0x801C0000u; // 801BC87C
  W32(c->r[4]+0x000030F0u,c->r[26]); // 801BC880
  c->r[3]=c->r[3]+0xFFFFB3FCu; // 801BC884
  c->r[12]=R32(c->r[1]+0x00000008u); // 801BC888
  c->ctr=c->r[12]; // 801BC88C
  if (true) { c->lr=0x801BC894u; dispatch(c,c->ctr); } // 801BC890
  c->r[3]=c->r[26]|c->r[26]; // 801BC894
  c->lr=0x801BC89Cu; f_801BA260(c); // 801BC898
  goto L_801BC8FC; // 801BC89C
L_801BC8A0:;
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 801BC8A0
  c->r[3]=c->r[1]+0x00000080u; // 801BC8A4
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801BC8A8
  c->r[7]=0u+0x00000000u; // 801BC8AC
  c->r[5]=R32(c->r[1]+0x00000018u); // 801BC8B0
  c->r[8]=0u+0x00000000u; // 801BC8B4
  c->r[4]=R32(c->r[1]+0x00000014u); // 801BC8B8
  c->r[6]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 801BC8BC
  c->lr=0x801BC8C4u; f_801CA88C(c); // 801BC8C0
  goto L_801BC8EC; // 801BC8C4
L_801BC8C8:;
  c->r[3]=c->r[1]+0x00000080u; // 801BC8C8
  c->lr=0x801BC8D0u; f_801CAA48(c); // 801BC8CC
  cmps(c,0,(int32_t)c->r[3],2); // 801BC8D0
  if (crb(c,1)) { goto L_801BC8E8; } // 801BC8D4
  c->r[3]=c->r[1]+0x00000080u; // 801BC8D8
  c->lr=0x801BC8E0u; f_801CAA48(c); // 801BC8DC
  cmps(c,0,(int32_t)c->r[3],0); // 801BC8E0
  if (!crb(c,0)) { goto L_801BC8EC; } // 801BC8E4
L_801BC8E8:;
  c->lr=0x801BC8ECu; f_801C0348(c); // 801BC8E8
L_801BC8EC:;
  c->r[3]=c->r[1]+0x00000080u; // 801BC8EC
  c->lr=0x801BC8F4u; f_801CAA48(c); // 801BC8F0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC8F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC8C8; } // 801BC8F8
L_801BC8FC:;
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 801BC8FC
  c->r[3]=c->r[1]+0x00000014u; // 801BC900
  c->r[4]=c->r[1]+0x00000018u; // 801BC904
  c->r[5]=c->r[1]+0x0000001Cu; // 801BC908
  c->ctr=c->r[12]; // 801BC90C
  if (true) { c->lr=0x801BC914u; dispatch(c,c->ctr); } // 801BC910
  cmps(c,0,(int32_t)c->r[3],0); // 801BC914
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC8A0; } // 801BC918
  c->r[12]=R32(c->r[1]+0x00000010u); // 801BC91C
  c->ctr=c->r[12]; // 801BC920
  if (true) { c->lr=0x801BC928u; dispatch(c,c->ctr); } // 801BC924
  c->r[26]=c->r[3]|c->r[3]; // 801BC928
  c->r[3]=0u+0x0000001Cu; // 801BC92C
  c->r[4]=0u+0x00000001u; // 801BC930
  c->lr=0x801BC938u; f_801BA268(c); // 801BC934
  c->r[27]=c->r[3]|c->r[3]; // 801BC938
  c->r[4]=c->r[30]|c->r[30]; // 801BC93C
  c->r[5]=0u+0x0000001Cu; // 801BC940
  c->lr=0x801BC948u; f_80004338(c); // 801BC944
  c->r[3]=0u+0x80000000u; // 801BC948
  c->r[0]=0u+0x00000007u; // 801BC94C
  W32(c->r[3]+0x000030F0u,c->r[27]); // 801BC950
  c->r[3]=0u+0xCC000000u; // 801BC954
  W32(c->r[3]+0x00003024u,c->r[0]); // 801BC958
  c->lr=0x801BC960u; f_801BE74C(c); // 801BC95C
  c->r[3]=c->r[26]|c->r[26]; // 801BC960
  c->lr=0x801BC968u; f_801BBCB0(c); // 801BC964
  goto L_801BCAB8; // 801BC968
L_801BC96C:;
  c->r[3]=0u+0x81300000u; // 801BC96C
  c->r[6]=R32(c->r[13]+0xFFFF9CB8u); // 801BC970
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 801BC974
  c->r[0]=0u+0x00000001u; // 801BC978
  cmps(c,0,(int32_t)c->r[6],0); // 801BC97C
  c->r[27]=0u+0x80000000u; // 801BC980
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 801BC984
  W8(c->r[27]+0x000030E2u,c->r[0]); // 801BC988
  if (crb(c,2)) { goto L_801BC994; } // 801BC98C
  goto L_801BCA2C; // 801BC990
L_801BC994:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 801BC994
  cmps(c,0,(int32_t)c->r[0],0); // 801BC998
  if (crb(c,2)) { goto L_801BCA24; } // 801BC99C
  c->r[3]=0u+0x00000040u; // 801BC9A0
  c->r[4]=0u+0x00000020u; // 801BC9A4
  c->lr=0x801BC9ACu; f_801BA268(c); // 801BC9A8
  c->r[0]=R32(c->r[27]+0x000030F4u); // 801BC9AC
  c->r[26]=c->r[3]|c->r[3]; // 801BC9B0
  c->r[3]=c->r[1]+0x00000050u; // 801BC9B4
  c->r[5]=0u+0x00000040u; // 801BC9B8
  c->r[4]=c->r[26]|c->r[26]; // 801BC9BC
  c->r[6]=sraw(c,c->r[0],2); // 801BC9C0
  c->r[7]=0u+0x00000000u; // 801BC9C4
  c->r[8]=0u+0x00000000u; // 801BC9C8
  c->lr=0x801BC9D0u; f_801CA88C(c); // 801BC9CC
  goto L_801BC9F8; // 801BC9D0
L_801BC9D4:;
  c->r[3]=c->r[1]+0x00000050u; // 801BC9D4
  c->lr=0x801BC9DCu; f_801CAA48(c); // 801BC9D8
  cmps(c,0,(int32_t)c->r[3],2); // 801BC9DC
  if (crb(c,1)) { goto L_801BC9F4; } // 801BC9E0
  c->r[3]=c->r[1]+0x00000050u; // 801BC9E4
  c->lr=0x801BC9ECu; f_801CAA48(c); // 801BC9E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC9EC
  if (!crb(c,0)) { goto L_801BC9F8; } // 801BC9F0
L_801BC9F4:;
  c->lr=0x801BC9F8u; f_801C0348(c); // 801BC9F4
L_801BC9F8:;
  c->r[3]=c->r[1]+0x00000050u; // 801BC9F8
  c->lr=0x801BCA00u; f_801CAA48(c); // 801BC9FC
  cmps(c,0,(int32_t)c->r[3],0); // 801BCA00
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC9D4; } // 801BCA04
  c->r[3]=0u+0x80000000u; // 801BCA08
  c->r[0]=R32(c->r[26]+0x00000038u); // 801BCA0C
  c->r[3]=R32(c->r[3]+0x000030F4u); // 801BCA10
  c->r[0]=c->r[3]+c->r[0]; // 801BCA14
  c->r[6]=sraw(c,c->r[0],2); // 801BCA18
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BCA1C
  goto L_801BCA2C; // 801BCA20
L_801BCA24:;
  c->r[6]=0u+0x00000910u; // 801BCA24
  W32(c->r[13]+0xFFFF9CB8u,c->r[6]); // 801BCA28
L_801BCA2C:;
  c->r[7]=R32(c->r[31]+0x00000014u); // 801BCA2C
  c->r[3]=c->r[1]+0x00000020u; // 801BCA30
  c->r[5]=R32(c->r[31]+0x00000018u); // 801BCA34
  c->r[4]=0u+0x81330000u; // 801BCA38
  c->r[0]=c->r[7]+0x00000020u; // 801BCA3C
  c->r[7]=0u+0x00000000u; // 801BCA40
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BCA44
  c->r[0]=c->r[5]+0x0000001Fu; // 801BCA48
  c->r[6]=c->r[8]+c->r[6]; // 801BCA4C
  c->r[8]=0u+0x00000000u; // 801BCA50
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BCA54
  c->lr=0x801BCA5Cu; f_801CA88C(c); // 801BCA58
  goto L_801BCA84; // 801BCA5C
L_801BCA60:;
  c->r[3]=c->r[1]+0x00000020u; // 801BCA60
  c->lr=0x801BCA68u; f_801CAA48(c); // 801BCA64
  cmps(c,0,(int32_t)c->r[3],2); // 801BCA68
  if (crb(c,1)) { goto L_801BCA80; } // 801BCA6C
  c->r[3]=c->r[1]+0x00000020u; // 801BCA70
  c->lr=0x801BCA78u; f_801CAA48(c); // 801BCA74
  cmps(c,0,(int32_t)c->r[3],0); // 801BCA78
  if (!crb(c,0)) { goto L_801BCA84; } // 801BCA7C
L_801BCA80:;
  c->lr=0x801BCA84u; f_801C0348(c); // 801BCA80
L_801BCA84:;
  c->r[3]=c->r[1]+0x00000020u; // 801BCA84
  c->lr=0x801BCA8Cu; f_801CAA48(c); // 801BCA88
  cmps(c,0,(int32_t)c->r[3],0); // 801BCA8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BCA60; } // 801BCA90
  c->r[4]=R32(c->r[31]+0x00000018u); // 801BCA94
  c->r[3]=0u+0x81330000u; // 801BCA98
  c->r[0]=c->r[4]+0x0000001Fu; // 801BCA9C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BCAA0
  c->lr=0x801BCAA8u; f_801BA874(c); // 801BCAA4
  c->lr=0x801BCAACu; f_801BE74C(c); // 801BCAA8
  c->lr=0x801BCAB0u; f_801BA8A8(c); // 801BCAAC
  c->r[3]=0u+0x81330000u; // 801BCAB0
  c->lr=0x801BCAB8u; f_801BBCB0(c); // 801BCAB4
L_801BCAB8:;
  c->r[11]=c->r[1]+0x000001C0u; // 801BCAB8
  c->lr=0x801BCAC0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BCABC
  c->r[0]=R32(c->r[1]+0x000001C4u); // 801BCAC0
  c->lr=c->r[0]; // 801BCAC4
  c->r[1]=c->r[1]+0x000001C0u; // 801BCAC8
  return; // 801BCACC
}

// __OSBootDol
void f_801BCAD0(Ctx* __restrict c) {
  trace_call(0x801BCAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCAD0
  c->r[0]=c->lr; // 801BCAD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BCAD8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801BCADC
  c->r[31]=c->r[3]|c->r[3]; // 801BCAE0
  c->r[3]=c->r[1]+0x0000000Cu; // 801BCAE4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801BCAE8
  c->r[30]=c->r[5]|c->r[5]; // 801BCAEC
  W32(c->r[1]+0x00000034u,c->r[29]); // 801BCAF0
  c->r[29]=c->r[4]|c->r[4]; // 801BCAF4
  c->r[4]=c->r[1]+0x00000008u; // 801BCAF8
  c->lr=0x801BCB00u; f_801BFD48(c); // 801BCAFC
  c->r[5]=c->r[31]|c->r[31]; // 801BCB00
  c->r[3]=c->r[1]+0x00000010u; // 801BCB04
  c->r[4]=c->r[13]+0xFFFF8420u; // 801BCB08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCB0C
  c->lr=0x801BCB14u; f_801EF220(c); // 801BCB10
  cmps(c,0,(int32_t)c->r[30],0); // 801BCB14
  c->r[31]=0u+0x00000000u; // 801BCB18
  if (crb(c,2)) { goto L_801BCB3C; } // 801BCB1C
  c->r[3]=c->r[30]|c->r[30]; // 801BCB20
  goto L_801BCB30; // 801BCB24
L_801BCB28:;
  c->r[3]=c->r[3]+0x00000004u; // 801BCB28
  c->r[31]=c->r[31]+0x00000001u; // 801BCB2C
L_801BCB30:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCB30
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB34
  if (!crb(c,2)) { IRQCHK(c); goto L_801BCB28; } // 801BCB38
L_801BCB3C:;
  c->r[0]=c->r[31]+0x00000002u; // 801BCB3C
  c->r[4]=0u+0x00000001u; // 801BCB40
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCB44
  c->lr=0x801BCB4Cu; f_801BA268(c); // 801BCB48
  c->r[6]=c->r[31]+0x00000001u; // 801BCB4C
  c->r[0]=c->r[1]+0x00000010u; // 801BCB50
  cmps(c,1,(int32_t)c->r[6],1); // 801BCB54
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BCB58
  c->r[4]=0u+0x00000001u; // 801BCB5C
  if (!crb(c,5)) { goto L_801BCC74; } // 801BCB60
  cmps(c,0,(int32_t)c->r[31],8); // 801BCB64
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 801BCB68
  if (!crb(c,1)) { goto L_801BCC40; } // 801BCB6C
  c->r[8]=0u+0x00000000u; // 801BCB70
  c->r[9]=0u+0x00000000u; // 801BCB74
  if (crb(c,4)) { goto L_801BCB90; } // 801BCB78
  c->r[5]=0u+0x80000000u; // 801BCB7C
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 801BCB80
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801BCB84
  if (crb(c,1)) { goto L_801BCB90; } // 801BCB88
  c->r[9]=0u+0x00000001u; // 801BCB8C
L_801BCB90:;
  cmps(c,0,(int32_t)c->r[9],0); // 801BCB90
  if (crb(c,2)) { goto L_801BCBCC; } // 801BCB94
  c->r[0]=c->r[31]+0x00000001u; // 801BCB98
  c->r[5]=0u+0x00000001u; // 801BCB9C
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 801BCBA0
  c->r[0]=c->r[6]+0x80000000u; // 801BCBA4
  cmpu(c,0,c->r[0],0x00000000u); // 801BCBA8
  if (!crb(c,2)) { goto L_801BCBC0; } // 801BCBAC
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 801BCBB0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801BCBB4
  if (crb(c,2)) { goto L_801BCBC0; } // 801BCBB8
  c->r[5]=0u+0x00000000u; // 801BCBBC
L_801BCBC0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BCBC0
  if (crb(c,2)) { goto L_801BCBCC; } // 801BCBC4
  c->r[8]=0u+0x00000001u; // 801BCBC8
L_801BCBCC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801BCBCC
  if (crb(c,2)) { goto L_801BCC40; } // 801BCBD0
  c->r[0]=c->r[7]+0x00000006u; // 801BCBD4
  c->r[5]=c->r[30]+0x00000004u; // 801BCBD8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BCBDC
  c->r[6]=c->r[3]+0x00000004u; // 801BCBE0
  c->ctr=c->r[0]; // 801BCBE4
  cmps(c,0,(int32_t)c->r[7],1); // 801BCBE8
  if (!crb(c,1)) { goto L_801BCC40; } // 801BCBEC
L_801BCBF0:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 801BCBF0
  c->r[4]=c->r[4]+0x00000008u; // 801BCBF4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801BCBF8
  c->r[0]=R32(c->r[5]+0x00000000u); // 801BCBFC
  W32(c->r[6]+0x00000004u,c->r[0]); // 801BCC00
  c->r[0]=R32(c->r[5]+0x00000004u); // 801BCC04
  W32(c->r[6]+0x00000008u,c->r[0]); // 801BCC08
  c->r[0]=R32(c->r[5]+0x00000008u); // 801BCC0C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801BCC10
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801BCC14
  W32(c->r[6]+0x00000010u,c->r[0]); // 801BCC18
  c->r[0]=R32(c->r[5]+0x00000010u); // 801BCC1C
  W32(c->r[6]+0x00000014u,c->r[0]); // 801BCC20
  c->r[0]=R32(c->r[5]+0x00000014u); // 801BCC24
  W32(c->r[6]+0x00000018u,c->r[0]); // 801BCC28
  c->r[0]=R32(c->r[5]+0x00000018u); // 801BCC2C
  c->r[5]=c->r[5]+0x00000020u; // 801BCC30
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801BCC34
  c->r[6]=c->r[6]+0x00000020u; // 801BCC38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCBF0; } // 801BCC3C
L_801BCC40:;
  c->r[5]=c->r[31]+0x00000001u; // 801BCC40
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BCC44
  c->r[0]=c->r[5]-c->r[4]; // 801BCC48
  c->r[6]=c->r[30]+c->r[7]; // 801BCC4C
  c->r[7]=c->r[3]+c->r[7]; // 801BCC50
  c->ctr=c->r[0]; // 801BCC54
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801BCC58
  if (!crb(c,0)) { goto L_801BCC74; } // 801BCC5C
L_801BCC60:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 801BCC60
  c->r[6]=c->r[6]+0x00000004u; // 801BCC64
  W32(c->r[7]+0x00000000u,c->r[0]); // 801BCC68
  c->r[7]=c->r[7]+0x00000004u; // 801BCC6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCC60; } // 801BCC70
L_801BCC74:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801BCC74
  c->r[9]=c->r[3]|c->r[3]; // 801BCC78
  c->r[6]=R32(c->r[1]+0x00000008u); // 801BCC7C
  c->r[4]=c->r[29]|c->r[29]; // 801BCC80
  c->r[8]=c->r[31]+0x00000001u; // 801BCC84
  c->r[3]=0u+0xFFFFFFFFu; // 801BCC88
  c->r[7]=0u+0x00000000u; // 801BCC8C
  c->lr=0x801BCC94u; f_801BC464(c); // 801BCC90
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BCC94
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801BCC98
  c->r[30]=R32(c->r[1]+0x00000038u); // 801BCC9C
  c->r[29]=R32(c->r[1]+0x00000034u); // 801BCCA0
  c->lr=c->r[0]; // 801BCCA4
  c->r[1]=c->r[1]+0x00000040u; // 801BCCA8
  return; // 801BCCAC
}

// fn_801BCCB0
void f_801BCCB0(Ctx* __restrict c) {
  trace_call(0x801BCCB0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801BCCB0
  c->r[12]=c->r[1]|c->r[1]; // 801BCCB4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEA0u,1); // 801BCCB8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCCBC
  c->r[0]=c->lr; // 801BCCC0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801BCCC4
  c->r[10]=c->r[1]+0x00000020u; // 801BCCC8
  c->r[11]=c->r[1]+0x00000040u; // 801BCCCC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801BCCD0
  c->r[31]=c->r[8]|c->r[8]; // 801BCCD4
  c->r[12]=c->r[1]+0x00000060u; // 801BCCD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCCDC
  cmps(c,0,(int32_t)c->r[0],0); // 801BCCE0
  if (crb(c,0)) { goto L_801BCCF4; } // 801BCCE4
  c->r[4]=0u+0x00000000u; // 801BCCE8
  cmpu(c,0,c->r[8],c->r[4]); // 801BCCEC
  if (!crb(c,2)) { goto L_801BCCFC; } // 801BCCF0
L_801BCCF4:;
  c->r[3]=0u+0xFFFFFC07u; // 801BCCF4
  goto L_801BCDB8; // 801BCCF8
L_801BCCFC:;
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801BCCFC
  if (crb(c,2)) { goto L_801BCD0C; } // 801BCD00
  c->r[3]=0u+0xFFFFFC07u; // 801BCD04
  goto L_801BCDB8; // 801BCD08
L_801BCD0C:;
  cmpu(c,0,c->r[7],c->r[4]); // 801BCD0C
  W32(c->r[1]+0x00000044u,c->r[6]); // 801BCD10
  W32(c->r[1]+0x00000040u,c->r[5]); // 801BCD14
  if (!crb(c,2)) { goto L_801BCD60; } // 801BCD18
  c->r[6]=0u+0x00000008u; // 801BCD1C
  c->r[0]=0u+0x00000004u; // 801BCD20
  W32(c->r[1]+0x00000024u,c->r[6]); // 801BCD24
  c->r[7]=c->r[10]|c->r[10]; // 801BCD28
  c->r[4]=0u+0x00000012u; // 801BCD2C
  c->r[5]=0u+0x00000001u; // 801BCD30
  W32(c->r[1]+0x00000020u,c->r[11]); // 801BCD34
  c->r[6]=0u+0x00000001u; // 801BCD38
  W32(c->r[1]+0x00000028u,c->r[12]); // 801BCD3C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BCD40
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BCD44
  c->lr=0x801BCD4Cu; f_80204C4C(c); // 801BCD48
  cmps(c,0,(int32_t)c->r[3],0); // 801BCD4C
  if (!crb(c,2)) { goto L_801BCDB8; } // 801BCD50
  c->r[0]=R32(c->r[1]+0x00000060u); // 801BCD54
  W32(c->r[31]+0x00000000u,c->r[0]); // 801BCD58
  goto L_801BCDB8; // 801BCD5C
L_801BCD60:;
  c->r[6]=R32(c->r[8]+0x00000000u); // 801BCD60
  cmps(c,0,(int32_t)c->r[6],0); // 801BCD64
  if (!crb(c,2)) { goto L_801BCD74; } // 801BCD68
  c->r[3]=0u+0xFFFFFC07u; // 801BCD6C
  goto L_801BCDB8; // 801BCD70
L_801BCD74:;
  c->r[9]=0u+0x00000008u; // 801BCD74
  c->r[0]=0u+0x00000004u; // 801BCD78
  W32(c->r[1]+0x00000030u,c->r[7]); // 801BCD7C
  c->r[7]=c->r[10]|c->r[10]; // 801BCD80
  c->r[4]=0u+0x00000013u; // 801BCD84
  c->r[5]=0u+0x00000002u; // 801BCD88
  W32(c->r[1]+0x00000060u,c->r[6]); // 801BCD8C
  c->r[6]=0u+0x00000001u; // 801BCD90
  W32(c->r[1]+0x00000020u,c->r[11]); // 801BCD94
  W32(c->r[1]+0x00000024u,c->r[9]); // 801BCD98
  W32(c->r[1]+0x00000028u,c->r[12]); // 801BCD9C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BCDA0
  c->r[0]=R32(c->r[8]+0x00000000u); // 801BCDA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 801BCDA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BCDAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BCDB0
  c->lr=0x801BCDB8u; f_80204C4C(c); // 801BCDB4
L_801BCDB8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801BCDB8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801BCDBC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801BCDC0
  c->lr=c->r[0]; // 801BCDC4
  c->r[1]=c->r[10]|c->r[10]; // 801BCDC8
  return; // 801BCDCC
}

// fn_801BCDD0
void f_801BCDD0(Ctx* __restrict c) {
  trace_call(0x801BCDD0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801BCDD0
  c->r[12]=c->r[1]|c->r[1]; // 801BCDD4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801BCDD8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCDDC
  c->r[0]=c->lr; // 801BCDE0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801BCDE4
  c->r[9]=c->r[1]+0x00000020u; // 801BCDE8
  c->r[10]=c->r[1]+0x00000040u; // 801BCDEC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCDF0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCDF4
  if (!crb(c,0)) { goto L_801BCE04; } // 801BCDF8
  c->r[3]=0u+0xFFFFFC07u; // 801BCDFC
  goto L_801BCE4C; // 801BCE00
L_801BCE04:;
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801BCE04
  if (crb(c,2)) { goto L_801BCE14; } // 801BCE08
  c->r[3]=0u+0xFFFFFC07u; // 801BCE0C
  goto L_801BCE4C; // 801BCE10
L_801BCE14:;
  c->r[8]=0u+0x00000008u; // 801BCE14
  c->r[0]=0u+0x000000D8u; // 801BCE18
  W32(c->r[1]+0x00000044u,c->r[6]); // 801BCE1C
  c->r[4]=0u+0x00000008u; // 801BCE20
  c->r[6]=0u+0x00000000u; // 801BCE24
  W32(c->r[1]+0x00000040u,c->r[5]); // 801BCE28
  c->r[5]=0u+0x00000002u; // 801BCE2C
  W32(c->r[1]+0x00000028u,c->r[7]); // 801BCE30
  c->r[7]=c->r[9]|c->r[9]; // 801BCE34
  W32(c->r[1]+0x00000020u,c->r[10]); // 801BCE38
  W32(c->r[1]+0x00000024u,c->r[8]); // 801BCE3C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BCE40
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BCE44
  c->lr=0x801BCE4Cu; f_80204D28(c); // 801BCE48
L_801BCE4C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801BCE4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801BCE50
  c->lr=c->r[0]; // 801BCE54
  c->r[1]=c->r[10]|c->r[10]; // 801BCE58
  return; // 801BCE5C
}

// ScreenReport
void f_801BCE60(Ctx* __restrict c) {
  trace_call(0x801BCE60u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCE60
  c->r[0]=c->lr; // 801BCE64
  W32(c->r[1]+0x00000174u,c->r[0]); // 801BCE68
  c->r[11]=c->r[1]+0x00000170u; // 801BCE6C
  c->lr=0x801BCE74u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BCE70
  c->r[22]=c->r[3]|c->r[3]; // 801BCE74
  c->r[23]=c->r[4]|c->r[4]; // 801BCE78
  c->r[24]=c->r[6]|c->r[6]; // 801BCE7C
  c->r[25]=c->r[7]|c->r[7]; // 801BCE80
  c->r[26]=c->r[8]|c->r[8]; // 801BCE84
  c->r[27]=c->r[9]|c->r[9]; // 801BCE88
  c->r[31]=c->r[5]+0xFFFFFFE8u; // 801BCE8C
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 801BCE90
  c->r[18]=0u+0x80810000u; // 801BCE94
  c->r[19]=0u+0x88890000u; // 801BCE98
  c->r[17]=0u+0x00000000u; // 801BCE9C
  c->r[21]=0u+0x00000018u; // 801BCEA0
  c->r[20]=0u+0x00000003u; // 801BCEA4
L_801BCEA8:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 801BCEA8
  if (crb(c,0)) { goto L_801BD16C; } // 801BCEAC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[23]); // 801BCEB0
  c->r[28]=c->r[25]|c->r[25]; // 801BCEB4
  c->r[0]=c->r[25]+c->r[0]; // 801BCEB8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801BCEBC
  c->r[29]=c->r[22]+c->r[0]; // 801BCEC0
  goto L_801BD160; // 801BCEC4
L_801BCEC8:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801BCEC8
  cmps(c,0,(int32_t)c->r[0],10); // 801BCECC
  if (!crb(c,2)) { goto L_801BCEE0; } // 801BCED0
  c->r[26]=c->r[26]+c->r[27]; // 801BCED4
  c->r[10]=c->r[10]+0x00000001u; // 801BCED8
  IRQCHK(c); goto L_801BCEA8; // 801BCEDC
L_801BCEE0:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 801BCEE0
  if (!crb(c,0)) { goto L_801BCEF0; } // 801BCEE4
  c->r[26]=c->r[26]+c->r[27]; // 801BCEE8
  IRQCHK(c); goto L_801BCEA8; // 801BCEEC
L_801BCEF0:;
  c->r[6]=0u+0x00000000u; // 801BCEF0
  c->r[7]=0u+0x00000000u; // 801BCEF4
  c->ctr=c->r[20]; // 801BCEF8
L_801BCEFC:;
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 801BCEFC
  c->r[3]=c->r[6]+0x00000001u; // 801BCF00
  c->r[0]=c->r[0]+c->r[7]; // 801BCF04
  c->r[4]=c->r[1]+0x00000010u; // 801BCF08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCF0C
  c->r[5]=c->r[6]+0x00000002u; // 801BCF10
  c->r[4]=c->r[4]+c->r[0]; // 801BCF14
  c->r[8]=c->r[6]+0x00000003u; // 801BCF18
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 801BCF1C
  W32(c->r[4]+0x00000000u,c->r[17]); // 801BCF20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801BCF24
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 801BCF28
  W32(c->r[4]+0x00000020u,c->r[17]); // 801BCF2C
  c->r[9]=c->r[6]+0x00000004u; // 801BCF30
  c->r[11]=c->r[6]+0x00000006u; // 801BCF34
  c->r[0]=c->r[3]+c->r[0]; // 801BCF38
  W32(c->r[4]+0x00000040u,c->r[17]); // 801BCF3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCF40
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801BCF44
  c->r[3]=c->r[1]+0x00000010u; // 801BCF48
  c->r[3]=c->r[3]+c->r[0]; // 801BCF4C
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 801BCF50
  W32(c->r[3]+0x00000000u,c->r[17]); // 801BCF54
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 801BCF58
  c->r[0]=c->r[6]+0x00000005u; // 801BCF5C
  W32(c->r[3]+0x00000020u,c->r[17]); // 801BCF60
  c->r[7]=c->r[7]+0x00000018u; // 801BCF64
  c->r[5]=c->r[5]+c->r[4]; // 801BCF68
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801BCF6C
  W32(c->r[3]+0x00000040u,c->r[17]); // 801BCF70
  c->r[5]=rotl(c->r[8],29)&0x1FFFFFFFu; // 801BCF74
  c->r[4]=c->r[1]+0x00000010u; // 801BCF78
  {uint32_t ea=c->r[4]+c->r[12]; W32(ea,c->r[17]); c->r[4]=ea;} // 801BCF7C
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 801BCF80
  c->r[12]=rotl(c->r[8],0)&0x00000007u; // 801BCF84
  W32(c->r[4]+0x00000020u,c->r[17]); // 801BCF88
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 801BCF8C
  c->r[12]=c->r[12]+c->r[3]; // 801BCF90
  c->r[5]=c->r[6]+0x00000007u; // 801BCF94
  W32(c->r[4]+0x00000040u,c->r[17]); // 801BCF98
  c->r[3]=c->r[1]+0x00000010u; // 801BCF9C
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801BCFA0
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 801BCFA4
  c->r[3]=c->r[3]+c->r[12]; // 801BCFA8
  c->r[4]=c->r[1]+0x00000010u; // 801BCFAC
  W32(c->r[3]+0x00000000u,c->r[17]); // 801BCFB0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 801BCFB4
  c->r[12]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BCFB8
  W32(c->r[3]+0x00000020u,c->r[17]); // 801BCFBC
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801BCFC0
  c->r[8]=c->r[9]+c->r[8]; // 801BCFC4
  c->r[9]=rotl(c->r[11],29)&0x1FFFFFFFu; // 801BCFC8
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801BCFCC
  W32(c->r[3]+0x00000040u,c->r[17]); // 801BCFD0
  c->r[4]=c->r[4]+c->r[8]; // 801BCFD4
  c->r[3]=c->r[1]+0x00000010u; // 801BCFD8
  W32(c->r[4]+0x00000000u,c->r[17]); // 801BCFDC
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)24); // 801BCFE0
  c->r[11]=rotl(c->r[11],0)&0x00000007u; // 801BCFE4
  W32(c->r[4]+0x00000020u,c->r[17]); // 801BCFE8
  c->r[8]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801BCFEC
  c->r[0]=c->r[0]+c->r[12]; // 801BCFF0
  c->r[6]=c->r[6]+0x00000008u; // 801BCFF4
  W32(c->r[4]+0x00000040u,c->r[17]); // 801BCFF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BCFFC
  c->r[4]=c->r[1]+0x00000010u; // 801BD000
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[17]); c->r[3]=ea;} // 801BD004
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)24); // 801BD008
  c->r[9]=rotl(c->r[5],0)&0x00000007u; // 801BD00C
  W32(c->r[3]+0x00000020u,c->r[17]); // 801BD010
  c->r[5]=c->r[4]|c->r[4]; // 801BD014
  c->r[0]=c->r[11]+c->r[0]; // 801BD018
  W32(c->r[3]+0x00000040u,c->r[17]); // 801BD01C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD020
  {uint32_t ea=c->r[4]+c->r[0]; W32(ea,c->r[17]); c->r[4]=ea;} // 801BD024
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 801BD028
  W32(c->r[4]+0x00000020u,c->r[17]); // 801BD02C
  c->r[0]=c->r[9]+c->r[0]; // 801BD030
  W32(c->r[4]+0x00000040u,c->r[17]); // 801BD034
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD038
  {uint32_t ea=c->r[5]+c->r[0]; W32(ea,c->r[17]); c->r[5]=ea;} // 801BD03C
  W32(c->r[5]+0x00000020u,c->r[17]); // 801BD040
  W32(c->r[5]+0x00000040u,c->r[17]); // 801BD044
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCEFC; } // 801BD048
  c->r[3]=c->r[10]|c->r[10]; // 801BD04C
  c->r[4]=c->r[1]+0x00000010u; // 801BD050
  c->r[7]=c->r[1]+0x00000008u; // 801BD054
  c->r[5]=0u+0x00000000u; // 801BD058
  c->r[6]=0u+0x00000006u; // 801BD05C
  c->lr=0x801BD064u; f_801BE4BC(c); // 801BD060
  c->r[10]=c->r[3]|c->r[3]; // 801BD064
  c->r[7]=0u+0x00000000u; // 801BD068
  c->r[3]=0u+0x00000000u; // 801BD06C
L_801BD070:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 801BD070
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 801BD074
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801BD078
  c->r[5]=c->r[1]+0x00000010u; // 801BD07C
  c->r[4]=c->r[28]|c->r[28]; // 801BD080
  c->r[8]=0u+0x00000000u; // 801BD084
  c->r[0]=c->r[6]+c->r[0]; // 801BD088
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD08C
  c->r[5]=c->r[5]+c->r[0]; // 801BD090
  c->ctr=c->r[21]; // 801BD094
L_801BD098:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 801BD098
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 801BD09C
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 801BD0A0
  c->r[6]=R32(c->r[5]+c->r[6]); // 801BD0A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD0A8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 801BD0AC
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 801BD0B0
  if (crb(c,2)) { goto L_801BD134; } // 801BD0B4
  c->r[6]=R8(c->r[24]+0x00000000u); // 801BD0B8
  c->r[0]=c->r[8]+c->r[3]; // 801BD0BC
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801BD0C0
  c->r[11]=c->r[18]+0xFFFF8081u; // 801BD0C4
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 801BD0C8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801BD0CC
  c->r[6]=c->r[29]+c->r[12]; // 801BD0D0
  c->r[0]=c->r[19]+0xFFFF8889u; // 801BD0D4
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 801BD0D8
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 801BD0DC
  c->r[9]=c->r[11]+c->r[9]; // 801BD0E0
  c->r[9]=sraw(c,c->r[9],7); // 801BD0E4
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 801BD0E8
  c->r[9]=c->r[9]+c->r[11]; // 801BD0EC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 801BD0F0
  c->r[0]=c->r[0]+c->r[9]; // 801BD0F4
  c->r[0]=sraw(c,c->r[0],3); // 801BD0F8
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 801BD0FC
  c->r[9]=c->r[0]+c->r[9]; // 801BD100
  c->r[0]=c->r[9]+0x00000010u; // 801BD104
  W8(c->r[29]+c->r[12],c->r[0]); // 801BD108
  if (crb(c,2)) { goto L_801BD124; } // 801BD10C
  c->r[9]=R8(c->r[24]+0x00000001u); // 801BD110
  c->r[0]=R8(c->r[24]+0x00000002u); // 801BD114
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 801BD118
  W8(c->r[6]+0x00000001u,c->r[0]); // 801BD11C
  goto L_801BD134; // 801BD120
L_801BD124:;
  c->r[9]=R8(c->r[24]+0x00000002u); // 801BD124
  c->r[0]=R8(c->r[24]+0x00000001u); // 801BD128
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 801BD12C
  W8(c->r[6]+0x00000001u,c->r[0]); // 801BD130
L_801BD134:;
  c->r[4]=c->r[4]+0x00000001u; // 801BD134
  c->r[8]=c->r[8]+0x00000001u; // 801BD138
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BD098; } // 801BD13C
  c->r[7]=c->r[7]+0x00000001u; // 801BD140
  c->r[3]=c->r[3]+c->r[23]; // 801BD144
  cmpu(c,0,c->r[7],0x00000018u); // 801BD148
  if (crb(c,0)) { IRQCHK(c); goto L_801BD070; } // 801BD14C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BD150
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801BD154
  c->r[28]=c->r[28]+c->r[3]; // 801BD158
  c->r[29]=c->r[29]+c->r[0]; // 801BD15C
L_801BD160:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 801BD160
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801BD164
  if (!crb(c,2)) { IRQCHK(c); goto L_801BCEC8; } // 801BD168
L_801BD16C:;
  c->r[11]=c->r[1]+0x00000170u; // 801BD16C
  c->lr=0x801BD174u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BD170
  c->r[0]=R32(c->r[1]+0x00000174u); // 801BD174
  c->lr=c->r[0]; // 801BD178
  c->r[1]=c->r[1]+0x00000170u; // 801BD17C
  return; // 801BD180
}

// ConfigureVideo
void f_801BD184(Ctx* __restrict c) {
  trace_call(0x801BD184u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD184
  c->r[0]=c->lr; // 801BD188
  c->r[6]=0u+0x000001E0u; // 801BD18C
  c->r[5]=0u+0x00000028u; // 801BD190
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BD194
  c->r[0]=0u+0x00000280u; // 801BD198
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 801BD19C
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801BD1A0
  W16(c->r[1]+0x00000010u,c->r[4]); // 801BD1A4
  W16(c->r[1]+0x00000012u,c->r[5]); // 801BD1A8
  W16(c->r[1]+0x00000016u,c->r[0]); // 801BD1AC
  W16(c->r[1]+0x00000018u,c->r[4]); // 801BD1B0
  c->lr=0x801BD1B8u; f_801CFB94(c); // 801BD1B4
  cmps(c,0,(int32_t)c->r[3],2); // 801BD1B8
  if (crb(c,2)) { goto L_801BD1E0; } // 801BD1BC
  if (!crb(c,0)) { goto L_801BD1D4; } // 801BD1C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BD1C4
  if (crb(c,2)) { goto L_801BD1E0; } // 801BD1C8
  if (!crb(c,0)) { goto L_801BD23C; } // 801BD1CC
  goto L_801BD254; // 801BD1D0
L_801BD1D4:;
  cmps(c,0,(int32_t)c->r[3],5); // 801BD1D4
  if (crb(c,2)) { goto L_801BD220; } // 801BD1D8
  goto L_801BD254; // 801BD1DC
L_801BD1E0:;
  c->r[3]=0u+0xCC000000u; // 801BD1E0
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 801BD1E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BD1E8
  if (crb(c,2)) { goto L_801BD208; } // 801BD1EC
  c->r[0]=0u+0x00000000u; // 801BD1F0
  c->r[3]=0u+0x00000002u; // 801BD1F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BD1F8
  W16(c->r[1]+0x00000014u,c->r[0]); // 801BD1FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BD200
  goto L_801BD254; // 801BD204
L_801BD208:;
  c->r[3]=0u+0x00000000u; // 801BD208
  c->r[0]=0u+0x00000001u; // 801BD20C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BD210
  W16(c->r[1]+0x00000014u,c->r[3]); // 801BD214
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BD218
  goto L_801BD254; // 801BD21C
L_801BD220:;
  c->r[4]=0u+0x00000014u; // 801BD220
  c->r[3]=0u+0x00000000u; // 801BD224
  c->r[0]=0u+0x00000001u; // 801BD228
  W32(c->r[1]+0x00000008u,c->r[4]); // 801BD22C
  W16(c->r[1]+0x00000014u,c->r[3]); // 801BD230
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BD234
  goto L_801BD254; // 801BD238
L_801BD23C:;
  c->r[4]=0u+0x00000004u; // 801BD23C
  c->r[3]=0u+0x0000002Fu; // 801BD240
  c->r[0]=0u+0x00000001u; // 801BD244
  W32(c->r[1]+0x00000008u,c->r[4]); // 801BD248
  W16(c->r[1]+0x00000014u,c->r[3]); // 801BD24C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BD250
L_801BD254:;
  c->r[3]=c->r[1]+0x00000008u; // 801BD254
  c->lr=0x801BD25Cu; f_801CED78(c); // 801BD258
  c->r[3]=0u+0x00000000u; // 801BD25C
  c->r[4]=0u+0x00000000u; // 801BD260
  c->r[5]=0u+0x00000280u; // 801BD264
  c->r[6]=0u+0x000001E0u; // 801BD268
  c->lr=0x801BD270u; f_801CF50C(c); // 801BD26C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BD270
  c->lr=c->r[0]; // 801BD274
  c->r[1]=c->r[1]+0x00000050u; // 801BD278
  return; // 801BD27C
}

// fn_801BD280
void f_801BD280(Ctx* __restrict c) {
  trace_call(0x801BD280u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD280
  c->r[0]=c->lr; // 801BD284
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BD288
  c->r[11]=c->r[1]+0x00000030u; // 801BD28C
  c->lr=0x801BD294u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD290
  c->r[27]=c->r[3]|c->r[3]; // 801BD294
  c->r[28]=c->r[4]|c->r[4]; // 801BD298
  c->r[29]=c->r[5]|c->r[5]; // 801BD29C
  c->lr=0x801BD2A4u; f_801BE74C(c); // 801BD2A0
  c->lr=0x801BD2A8u; f_801C11DC(c); // 801BD2A4
  c->r[24]=0u+0x80570000u; // 801BD2A8
  c->r[3]=c->r[24]+0xFFFF9420u; // 801BD2AC
  c->lr=0x801BD2B4u; f_801BAFF0(c); // 801BD2B0
  c->r[3]=c->r[24]+0xFFFF9420u; // 801BD2B4
  c->lr=0x801BD2BCu; f_801BADC8(c); // 801BD2B8
  c->lr=0x801BD2C0u; f_801BA684(c); // 801BD2BC
  c->lr=0x801BD2C4u; f_801CE394(c); // 801BD2C0
  c->r[3]=0u+0x00000080u; // 801BD2C4
  c->lr=0x801BD2CCu; f_801BEB5C(c); // 801BD2C8
  c->r[3]=0u+0x00000001u; // 801BD2CC
  c->lr=0x801BD2D4u; f_801CF9E8(c); // 801BD2D0
  c->lr=0x801BD2D8u; f_801CF860(c); // 801BD2D4
  c->r[3]=0u+0x00000000u; // 801BD2D8
  c->lr=0x801BD2E0u; f_801CDFF4(c); // 801BD2DC
  c->r[3]=0u+0x00000000u; // 801BD2E0
  c->lr=0x801BD2E8u; f_801CE038(c); // 801BD2E4
  c->lr=0x801BD2ECu; f_801BE760(c); // 801BD2E8
  c->lr=0x801BD2F0u; f_801CFA60(c); // 801BD2EC
  c->r[24]=c->r[3]|c->r[3]; // 801BD2F0
L_801BD2F4:;
  c->lr=0x801BD2F8u; f_801CFA60(c); // 801BD2F4
  c->r[0]=c->r[3]-c->r[24]; // 801BD2F8
  cmps(c,0,(int32_t)c->r[0],1); // 801BD2FC
  if (crb(c,0)) { IRQCHK(c); goto L_801BD2F4; } // 801BD300
  c->lr=0x801BD308u; f_801C257C(c); // 801BD304
  c->r[5]=0u+0x10620000u; // 801BD308
  c->r[30]=c->r[4]|c->r[4]; // 801BD30C
  c->r[31]=c->r[3]|c->r[3]; // 801BD310
  c->r[25]=0u+0x80000000u; // 801BD314
  c->r[24]=c->r[5]+0x00004DD3u; // 801BD318
  c->r[26]=0u+0x00000000u; // 801BD31C
L_801BD320:;
  c->r[3]=0u+0x00000000u; // 801BD320
  c->r[4]=0u+0x00000000u; // 801BD324
  c->lr=0x801BD32Cu; f_801BFDE4(c); // 801BD328
  cmps(c,0,(int32_t)c->r[3],0); // 801BD32C
  if (!crb(c,2)) { goto L_801BD370; } // 801BD330
  c->lr=0x801BD338u; f_801C257C(c); // 801BD334
  c->r[0]=R32(c->r[25]+0x000000F8u); // 801BD338
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 801BD33C
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 801BD340
  c->r[4]=c->r[26]^0x80000000u; // 801BD344
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801BD348
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 801BD34C
  c->r[0]=c->r[5]^0x80000000u; // 801BD350
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 801BD354
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 801BD358
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 801BD35C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801BD360
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801BD364
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801BD368
  if (!crb(c,2)) { IRQCHK(c); goto L_801BD320; } // 801BD36C
L_801BD370:;
  c->lr=0x801BD374u; f_801BE74C(c); // 801BD370
  c->r[3]=0u+0x00000001u; // 801BD374
  c->r[4]=0u+0x00000000u; // 801BD378
  c->lr=0x801BD380u; f_801BFDE4(c); // 801BD37C
  c->r[3]=0u+0x00000000u; // 801BD380
  c->r[4]=0u+0x00000000u; // 801BD384
  c->lr=0x801BD38Cu; f_801F7D60(c); // 801BD388
  c->r[3]=0u+0x00000002u; // 801BD38C
  c->r[4]=0u+0x00000000u; // 801BD390
  c->lr=0x801BD398u; f_801F7D60(c); // 801BD394
  goto L_801BD3B4; // 801BD398
L_801BD39C:;
  c->r[3]=0u+0x00000000u; // 801BD39C
  c->lr=0x801BD3A4u; f_801F7AE4(c); // 801BD3A0
  c->r[3]=0u+0x00000000u; // 801BD3A4
  c->lr=0x801BD3ACu; f_801F8264(c); // 801BD3A8
  c->r[3]=0u+0x00000000u; // 801BD3AC
  c->lr=0x801BD3B4u; f_801F89C4(c); // 801BD3B0
L_801BD3B4:;
  c->r[3]=0u+0x00000000u; // 801BD3B4
  c->r[4]=0u+0x00000001u; // 801BD3B8
  c->r[5]=0u+0x00000000u; // 801BD3BC
  c->lr=0x801BD3C4u; f_801F88C8(c); // 801BD3C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BD3C4
  if (crb(c,2)) { IRQCHK(c); goto L_801BD39C; } // 801BD3C8
  c->r[3]=0u+0x00000000u; // 801BD3CC
  c->lr=0x801BD3D4u; f_801F89C4(c); // 801BD3D0
  c->r[3]=0u+0xCD000000u; // 801BD3D4
L_801BD3D8:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 801BD3D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801BD3DC
  cmpu(c,0,c->r[0],0x00000001u); // 801BD3E0
  if (crb(c,2)) { IRQCHK(c); goto L_801BD3D8; } // 801BD3E4
  c->r[4]=0u+0x801C0000u; // 801BD3E8
  c->r[3]=0u+0x00000008u; // 801BD3EC
  c->r[4]=c->r[4]+0xFFFF95E4u; // 801BD3F0
  c->lr=0x801BD3F8u; f_801B9524(c); // 801BD3F4
  c->lr=0x801BD3FCu; f_801E20C4(c); // 801BD3F8
  c->r[3]=0u+0x81400000u; // 801BD3FC
  c->lr=0x801BD404u; f_801BA260(c); // 801BD400
  c->r[3]=0u+0x80000000u; // 801BD404
  c->r[3]=R32(c->r[3]+0x00000038u); // 801BD408
  c->lr=0x801BD410u; f_801BA248(c); // 801BD40C
  c->r[9]=R8(c->r[27]+0x00000000u); // 801BD410
  c->r[10]=0u+0x80570000u; // 801BD414
  c->r[8]=R8(c->r[27]+0x00000001u); // 801BD418
  {uint32_t ea=c->r[10]+0xFFFF96E8u; W8(ea,c->r[9]); c->r[10]=ea;} // 801BD41C
  c->r[7]=R8(c->r[27]+0x00000002u); // 801BD420
  c->r[6]=R8(c->r[27]+0x00000003u); // 801BD424
  c->r[5]=R8(c->r[28]+0x00000000u); // 801BD428
  c->r[4]=R8(c->r[28]+0x00000001u); // 801BD42C
  c->r[3]=R8(c->r[28]+0x00000002u); // 801BD430
  c->r[0]=R8(c->r[28]+0x00000003u); // 801BD434
  W8(c->r[10]+0x00000001u,c->r[8]); // 801BD438
  W8(c->r[10]+0x00000002u,c->r[7]); // 801BD43C
  W8(c->r[10]+0x00000003u,c->r[6]); // 801BD440
  W8(c->r[10]+0x00000004u,c->r[5]); // 801BD444
  W8(c->r[10]+0x00000005u,c->r[4]); // 801BD448
  W8(c->r[10]+0x00000006u,c->r[3]); // 801BD44C
  W8(c->r[10]+0x00000007u,c->r[0]); // 801BD450
  W32(c->r[10]+0x00000008u,c->r[29]); // 801BD454
  c->lr=0x801BD45Cu; f_801BA218(c); // 801BD458
  c->r[5]=0u+0x801C0000u; // 801BD45C
  c->r[4]=c->r[3]|c->r[3]; // 801BD460
  c->r[3]=c->r[5]+0xFFFFD484u; // 801BD464
  c->lr=0x801BD46Cu; f_801BAF90(c); // 801BD468
  c->r[11]=c->r[1]+0x00000030u; // 801BD46C
  c->lr=0x801BD474u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BD470
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD474
  c->lr=c->r[0]; // 801BD478
  c->r[1]=c->r[1]+0x00000030u; // 801BD47C
  return; // 801BD480
}

// Halt
void f_801BD484(Ctx* __restrict c) {
  trace_call(0x801BD484u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD484
  c->r[0]=c->lr; // 801BD488
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BD48C
  c->r[0]=0u+0x43300000u; // 801BD490
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801BD494
  W32(c->r[1]+0x00000048u,c->r[30]); // 801BD498
  W32(c->r[1]+0x00000044u,c->r[29]); // 801BD49C
  W32(c->r[1]+0x00000040u,c->r[28]); // 801BD4A0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801BD4A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BD4A8
  c->lr=0x801BD4B0u; f_801BE760(c); // 801BD4AC
  c->r[29]=0u+0x80570000u; // 801BD4B0
  c->r[29]=c->r[29]+0xFFFF96E8u; // 801BD4B4
  c->r[28]=R32(c->r[29]+0x00000008u); // 801BD4B8
  c->r[3]=c->r[28]|c->r[28]; // 801BD4BC
  c->lr=0x801BD4C4u; f_801E6E58(c); // 801BD4C0
  c->r[30]=c->r[3]+0x00000001u; // 801BD4C4
  c->r[4]=0u+0x00000020u; // 801BD4C8
  c->r[3]=c->r[30]|c->r[30]; // 801BD4CC
  c->lr=0x801BD4D4u; f_801BA268(c); // 801BD4D0
  c->r[4]=c->r[28]|c->r[28]; // 801BD4D4
  c->r[5]=c->r[30]|c->r[30]; // 801BD4D8
  c->lr=0x801BD4E0u; f_801EC914(c); // 801BD4DC
  W32(c->r[29]+0x00000008u,c->r[3]); // 801BD4E0
  c->r[3]=0u+0x000A0000u; // 801BD4E4
  c->r[3]=c->r[3]+0x00001004u; // 801BD4E8
  c->r[4]=0u+0x00000020u; // 801BD4EC
  c->lr=0x801BD4F4u; f_801BA268(c); // 801BD4F0
  c->r[31]=c->r[3]|c->r[3]; // 801BD4F4
  c->lr=0x801BD4FCu; f_801BA230(c); // 801BD4F8
  c->r[4]=c->r[3]|c->r[3]; // 801BD4FC
  c->r[3]=c->r[31]|c->r[31]; // 801BD500
  c->lr=0x801BD508u; f_801BE0DC(c); // 801BD504
  c->r[3]=0u+0x00090000u; // 801BD508
  c->r[4]=0u+0x00000020u; // 801BD50C
  c->r[3]=c->r[3]+0x00006000u; // 801BD510
  c->lr=0x801BD518u; f_801BA268(c); // 801BD514
  c->r[4]=R8(c->r[29]+0x00000006u); // 801BD518
  c->r[30]=c->r[3]|c->r[3]; // 801BD51C
  c->r[5]=R8(c->r[29]+0x00000004u); // 801BD520
  W32(c->r[1]+0x00000024u,c->r[4]); // 801BD524
  c->r[3]=R8(c->r[29]+0x00000005u); // 801BD528
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801BD52C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 801BD530
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 801BD534
  {uint32_t ea=c->r[2]+0xFFFFC120u; c->f[0]=RF64(ea);} // 801BD538
  W32(c->r[1]+0x00000024u,c->r[3]); // 801BD53C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801BD540
  {uint32_t ea=c->r[2]+0xFFFFC0F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD544
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801BD548
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 801BD54C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801BD550
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 801BD554
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BD558
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 801BD55C
  W32(c->r[1]+0x00000024u,c->r[5]); // 801BD560
  {uint32_t ea=c->r[2]+0xFFFFC0F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BD564
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801BD568
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801BD56C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 801BD570
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801BD574
  {uint32_t ea=c->r[2]+0xFFFFC0F0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BD578
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 801BD57C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BD580
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 801BD584
  {uint32_t ea=c->r[2]+0xFFFFC100u; c->f[11]=c->ps1[11]=RF32(ea);} // 801BD588
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 801BD58C
  {uint32_t ea=c->r[2]+0xFFFFC104u; c->f[8]=c->ps1[8]=RF32(ea);} // 801BD590
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 801BD594
  W32(c->r[1]+0x00000024u,c->r[5]); // 801BD598
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 801BD59C
  {uint32_t ea=c->r[2]+0xFFFFC108u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BD5A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801BD5A4
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801BD5A8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 801BD5AC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801BD5B0
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 801BD5B4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BD5B8
  W32(c->r[1]+0x00000024u,c->r[4]); // 801BD5BC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801BD5C0
  {uint32_t ea=c->r[2]+0xFFFFC10Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD5C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801BD5C8
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 801BD5CC
  {uint32_t ea=c->r[2]+0xFFFFC110u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD5D0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801BD5D4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 801BD5D8
  c->r[0]=R8(c->r[29]+0x00000007u); // 801BD5DC
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 801BD5E0
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 801BD5E4
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[9]=c->ps1[9]=RF32(ea);} // 801BD5E8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 801BD5EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BD5F0
  {uint32_t ea=c->r[2]+0xFFFFC0E8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BD5F4
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 801BD5F8
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 801BD5FC
  {uint32_t ea=c->r[2]+0xFFFFC0FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD600
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801BD604
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 801BD608
  {uint32_t ea=c->r[2]+0xFFFFC114u; c->f[7]=c->ps1[7]=RF32(ea);} // 801BD60C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801BD610
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801BD614
  W8(c->r[1]+0x00000018u,c->r[5]); // 801BD618
  fcmp(c,0,c->f[4],c->f[7]); // 801BD61C
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 801BD620
  W8(c->r[1]+0x00000019u,c->r[3]); // 801BD624
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 801BD628
  W8(c->r[1]+0x0000001Au,c->r[4]); // 801BD62C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BD630
  if (!crb(c,1)) { goto L_801BD63C; } // 801BD634
  goto L_801BD650; // 801BD638
L_801BD63C:;
  fcmp(c,0,c->f[4],c->f[9]); // 801BD63C
  if (!crb(c,0)) { goto L_801BD648; } // 801BD640
  goto L_801BD64C; // 801BD644
L_801BD648:;
  c->f[9]=c->f[4]; // 801BD648
L_801BD64C:;
  c->f[7]=c->f[9]; // 801BD64C
L_801BD650:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 801BD650
  {uint32_t ea=c->r[2]+0xFFFFC118u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD654
  fcmp(c,0,c->f[2],c->f[3]); // 801BD658
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD65C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD660
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BD664
  if (!crb(c,1)) { goto L_801BD670; } // 801BD668
  goto L_801BD684; // 801BD66C
L_801BD670:;
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD670
  fcmp(c,0,c->f[2],c->f[3]); // 801BD674
  if (!crb(c,0)) { goto L_801BD680; } // 801BD678
  goto L_801BD684; // 801BD67C
L_801BD680:;
  c->f[3]=c->f[2]; // 801BD680
L_801BD684:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801BD684
  {uint32_t ea=c->r[2]+0xFFFFC118u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD688
  fcmp(c,0,c->f[1],c->f[2]); // 801BD68C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD690
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD694
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BD698
  if (!crb(c,1)) { goto L_801BD6A4; } // 801BD69C
  goto L_801BD6B8; // 801BD6A0
L_801BD6A4:;
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD6A4
  fcmp(c,0,c->f[1],c->f[2]); // 801BD6A8
  if (!crb(c,0)) { goto L_801BD6B4; } // 801BD6AC
  goto L_801BD6B8; // 801BD6B0
L_801BD6B4:;
  c->f[2]=c->f[1]; // 801BD6B4
L_801BD6B8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BD6B8
  c->r[0]=0u+0x00000000u; // 801BD6BC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801BD6C0
  c->r[4]=c->r[30]|c->r[30]; // 801BD6C4
  c->r[5]=0u+0x00000000u; // 801BD6C8
  c->r[0]=0u+0x00000014u; // 801BD6CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD6D0
  c->r[3]=R32(c->r[1]+0x00000034u); // 801BD6D4
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801BD6D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801BD6DC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801BD6E0
  c->r[6]=R8(c->r[1]+0x0000001Du); // 801BD6E4
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 801BD6E8
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 801BD6EC
L_801BD6F0:;
  c->ctr=c->r[0]; // 801BD6F0
L_801BD6F4:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 801BD6F4
  W8(c->r[4]+0x00000001u,c->r[6]); // 801BD6F8
  W8(c->r[4]+0x00000002u,c->r[3]); // 801BD6FC
  W8(c->r[4]+0x00000003u,c->r[7]); // 801BD700
  W8(c->r[4]+0x00000004u,c->r[3]); // 801BD704
  W8(c->r[4]+0x00000005u,c->r[6]); // 801BD708
  W8(c->r[4]+0x00000006u,c->r[3]); // 801BD70C
  W8(c->r[4]+0x00000007u,c->r[7]); // 801BD710
  W8(c->r[4]+0x00000008u,c->r[3]); // 801BD714
  W8(c->r[4]+0x00000009u,c->r[6]); // 801BD718
  W8(c->r[4]+0x0000000Au,c->r[3]); // 801BD71C
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 801BD720
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 801BD724
  W8(c->r[4]+0x0000000Du,c->r[6]); // 801BD728
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 801BD72C
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 801BD730
  W8(c->r[4]+0x00000010u,c->r[3]); // 801BD734
  W8(c->r[4]+0x00000011u,c->r[6]); // 801BD738
  W8(c->r[4]+0x00000012u,c->r[3]); // 801BD73C
  W8(c->r[4]+0x00000013u,c->r[7]); // 801BD740
  W8(c->r[4]+0x00000014u,c->r[3]); // 801BD744
  W8(c->r[4]+0x00000015u,c->r[6]); // 801BD748
  W8(c->r[4]+0x00000016u,c->r[3]); // 801BD74C
  W8(c->r[4]+0x00000017u,c->r[7]); // 801BD750
  W8(c->r[4]+0x00000018u,c->r[3]); // 801BD754
  W8(c->r[4]+0x00000019u,c->r[6]); // 801BD758
  W8(c->r[4]+0x0000001Au,c->r[3]); // 801BD75C
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 801BD760
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 801BD764
  W8(c->r[4]+0x0000001Du,c->r[6]); // 801BD768
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 801BD76C
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 801BD770
  W8(c->r[4]+0x00000020u,c->r[3]); // 801BD774
  W8(c->r[4]+0x00000021u,c->r[6]); // 801BD778
  W8(c->r[4]+0x00000022u,c->r[3]); // 801BD77C
  W8(c->r[4]+0x00000023u,c->r[7]); // 801BD780
  W8(c->r[4]+0x00000024u,c->r[3]); // 801BD784
  W8(c->r[4]+0x00000025u,c->r[6]); // 801BD788
  W8(c->r[4]+0x00000026u,c->r[3]); // 801BD78C
  W8(c->r[4]+0x00000027u,c->r[7]); // 801BD790
  W8(c->r[4]+0x00000028u,c->r[3]); // 801BD794
  W8(c->r[4]+0x00000029u,c->r[6]); // 801BD798
  W8(c->r[4]+0x0000002Au,c->r[3]); // 801BD79C
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 801BD7A0
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 801BD7A4
  W8(c->r[4]+0x0000002Du,c->r[6]); // 801BD7A8
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 801BD7AC
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 801BD7B0
  W8(c->r[4]+0x00000030u,c->r[3]); // 801BD7B4
  W8(c->r[4]+0x00000031u,c->r[6]); // 801BD7B8
  W8(c->r[4]+0x00000032u,c->r[3]); // 801BD7BC
  W8(c->r[4]+0x00000033u,c->r[7]); // 801BD7C0
  W8(c->r[4]+0x00000034u,c->r[3]); // 801BD7C4
  W8(c->r[4]+0x00000035u,c->r[6]); // 801BD7C8
  W8(c->r[4]+0x00000036u,c->r[3]); // 801BD7CC
  W8(c->r[4]+0x00000037u,c->r[7]); // 801BD7D0
  W8(c->r[4]+0x00000038u,c->r[3]); // 801BD7D4
  W8(c->r[4]+0x00000039u,c->r[6]); // 801BD7D8
  W8(c->r[4]+0x0000003Au,c->r[3]); // 801BD7DC
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 801BD7E0
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 801BD7E4
  W8(c->r[4]+0x0000003Du,c->r[6]); // 801BD7E8
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 801BD7EC
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 801BD7F0
  c->r[4]=c->r[4]+0x00000040u; // 801BD7F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BD6F4; } // 801BD7F8
  c->r[5]=c->r[5]+0x00000001u; // 801BD7FC
  cmps(c,0,(int32_t)c->r[5],480); // 801BD800
  if (crb(c,0)) { IRQCHK(c); goto L_801BD6F0; } // 801BD804
  c->r[3]=c->r[30]|c->r[30]; // 801BD808
  c->lr=0x801BD810u; f_801CF974(c); // 801BD80C
  c->r[3]=0u+0x00000280u; // 801BD810
  c->r[4]=0u+0x000001E0u; // 801BD814
  c->lr=0x801BD81Cu; f_801BD184(c); // 801BD818
  c->lr=0x801BD820u; f_801CF860(c); // 801BD81C
  c->lr=0x801BD824u; f_801CFA60(c); // 801BD820
  c->r[28]=c->r[3]|c->r[3]; // 801BD824
L_801BD828:;
  c->lr=0x801BD82Cu; f_801CFA60(c); // 801BD828
  c->r[0]=c->r[3]-c->r[28]; // 801BD82C
  cmps(c,0,(int32_t)c->r[0],2); // 801BD830
  if (crb(c,0)) { IRQCHK(c); goto L_801BD828; } // 801BD834
  c->r[3]=R8(c->r[29]+0x00000002u); // 801BD838
  c->r[5]=R8(c->r[29]+0x00000000u); // 801BD83C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801BD840
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BD844
  W32(c->r[1]+0x00000024u,c->r[5]); // 801BD848
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 801BD84C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801BD850
  {uint32_t ea=c->r[2]+0xFFFFC120u; c->f[0]=RF64(ea);} // 801BD854
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801BD858
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 801BD85C
  {uint32_t ea=c->r[2]+0xFFFFC0F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD860
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BD864
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 801BD868
  W32(c->r[1]+0x00000024u,c->r[3]); // 801BD86C
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 801BD870
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801BD874
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 801BD878
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801BD87C
  {uint32_t ea=c->r[2]+0xFFFFC0F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BD880
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801BD884
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 801BD888
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 801BD88C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801BD890
  {uint32_t ea=c->r[2]+0xFFFFC0F0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BD894
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 801BD898
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801BD89C
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 801BD8A0
  {uint32_t ea=c->r[2]+0xFFFFC100u; c->f[11]=c->ps1[11]=RF32(ea);} // 801BD8A4
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 801BD8A8
  {uint32_t ea=c->r[2]+0xFFFFC104u; c->f[8]=c->ps1[8]=RF32(ea);} // 801BD8AC
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 801BD8B0
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801BD8B4
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 801BD8B8
  {uint32_t ea=c->r[2]+0xFFFFC108u; c->f[6]=c->ps1[6]=RF32(ea);} // 801BD8BC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BD8C0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801BD8C4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 801BD8C8
  W32(c->r[1]+0x00000024u,c->r[4]); // 801BD8CC
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 801BD8D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801BD8D4
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801BD8D8
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 801BD8DC
  {uint32_t ea=c->r[2]+0xFFFFC10Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD8E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 801BD8E4
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 801BD8E8
  {uint32_t ea=c->r[2]+0xFFFFC110u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD8EC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801BD8F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 801BD8F4
  c->r[0]=R8(c->r[29]+0x00000003u); // 801BD8F8
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 801BD8FC
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 801BD900
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[9]=c->ps1[9]=RF32(ea);} // 801BD904
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 801BD908
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BD90C
  {uint32_t ea=c->r[2]+0xFFFFC0E8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BD910
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 801BD914
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 801BD918
  {uint32_t ea=c->r[2]+0xFFFFC0FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD91C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801BD920
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 801BD924
  {uint32_t ea=c->r[2]+0xFFFFC114u; c->f[7]=c->ps1[7]=RF32(ea);} // 801BD928
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801BD92C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801BD930
  W8(c->r[1]+0x00000010u,c->r[5]); // 801BD934
  fcmp(c,0,c->f[4],c->f[7]); // 801BD938
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 801BD93C
  W8(c->r[1]+0x00000011u,c->r[4]); // 801BD940
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 801BD944
  W8(c->r[1]+0x00000012u,c->r[3]); // 801BD948
  W8(c->r[1]+0x00000013u,c->r[0]); // 801BD94C
  if (!crb(c,1)) { goto L_801BD958; } // 801BD950
  goto L_801BD96C; // 801BD954
L_801BD958:;
  fcmp(c,0,c->f[4],c->f[9]); // 801BD958
  if (!crb(c,0)) { goto L_801BD964; } // 801BD95C
  goto L_801BD968; // 801BD960
L_801BD964:;
  c->f[9]=c->f[4]; // 801BD964
L_801BD968:;
  c->f[7]=c->f[9]; // 801BD968
L_801BD96C:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 801BD96C
  {uint32_t ea=c->r[2]+0xFFFFC118u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD970
  fcmp(c,0,c->f[2],c->f[3]); // 801BD974
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD978
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD97C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BD980
  if (!crb(c,1)) { goto L_801BD98C; } // 801BD984
  goto L_801BD9A0; // 801BD988
L_801BD98C:;
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BD98C
  fcmp(c,0,c->f[2],c->f[3]); // 801BD990
  if (!crb(c,0)) { goto L_801BD99C; } // 801BD994
  goto L_801BD9A0; // 801BD998
L_801BD99C:;
  c->f[3]=c->f[2]; // 801BD99C
L_801BD9A0:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801BD9A0
  {uint32_t ea=c->r[2]+0xFFFFC118u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD9A4
  fcmp(c,0,c->f[1],c->f[2]); // 801BD9A8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD9AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD9B0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BD9B4
  if (!crb(c,1)) { goto L_801BD9C0; } // 801BD9B8
  goto L_801BD9D4; // 801BD9BC
L_801BD9C0:;
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD9C0
  fcmp(c,0,c->f[1],c->f[2]); // 801BD9C4
  if (!crb(c,0)) { goto L_801BD9D0; } // 801BD9C8
  goto L_801BD9D4; // 801BD9CC
L_801BD9D0:;
  c->f[2]=c->f[1]; // 801BD9D0
L_801BD9D4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801BD9D4
  c->r[0]=0u+0x00000000u; // 801BD9D8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BD9DC
  c->r[3]=c->r[30]|c->r[30]; // 801BD9E0
  c->r[10]=R32(c->r[29]+0x00000008u); // 801BD9E4
  c->r[6]=c->r[1]+0x00000014u; // 801BD9E8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801BD9EC
  c->r[4]=0u+0x00000280u; // 801BD9F0
  c->r[5]=0u+0x000001E0u; // 801BD9F4
  c->r[7]=0u+0x00000030u; // 801BD9F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD9FC
  c->r[8]=0u+0x00000064u; // 801BDA00
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BDA04
  c->r[0]=R32(c->r[1]+0x00000008u); // 801BDA08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDA0C
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 801BDA10
  c->lr=0x801BDA18u; f_801BCE60(c); // 801BDA14
  c->r[4]=0u+0x00090000u; // 801BDA18
  c->r[3]=c->r[30]|c->r[30]; // 801BDA1C
  c->r[4]=c->r[4]+0x00006000u; // 801BDA20
  c->lr=0x801BDA28u; f_801BA790(c); // 801BDA24
  c->r[3]=0u+0x00000000u; // 801BDA28
  c->lr=0x801BDA30u; f_801CF9E8(c); // 801BDA2C
  c->lr=0x801BDA34u; f_801CF860(c); // 801BDA30
  c->lr=0x801BDA38u; f_801CFA60(c); // 801BDA34
  c->r[30]=c->r[3]|c->r[3]; // 801BDA38
L_801BDA3C:;
  c->lr=0x801BDA40u; f_801CFA60(c); // 801BDA3C
  c->r[0]=c->r[3]-c->r[30]; // 801BDA40
  cmps(c,0,(int32_t)c->r[0],1); // 801BDA44
  if (crb(c,0)) { IRQCHK(c); goto L_801BDA3C; } // 801BDA48
  c->lr=0x801BDA50u; f_801BE74C(c); // 801BDA4C
  c->r[4]=R32(c->r[29]+0x00000008u); // 801BDA50
  c->r[3]=c->r[13]+0xFFFF8428u; // 801BDA54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BDA58
  c->lr=0x801BDA60u; f_801BB3FC(c); // 801BDA5C
  c->lr=0x801BDA64u; f_801B81DC(c); // 801BDA60
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BDA64
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801BDA68
  c->r[30]=R32(c->r[1]+0x00000048u); // 801BDA6C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801BDA70
  c->r[28]=R32(c->r[1]+0x00000040u); // 801BDA74
  c->lr=c->r[0]; // 801BDA78
  c->r[1]=c->r[1]+0x00000050u; // 801BDA7C
  return; // 801BDA80
}

// GetFontCode
void f_801BDA84(Ctx* __restrict c) {
  trace_call(0x801BDA84u);
  cmpu(c,0,c->r[3],0x00000001u); // 801BDA84
  if (!crb(c,2)) { goto L_801BDB98; } // 801BDA88
  cmpu(c,0,c->r[4],0x00000020u); // 801BDA8C
  if (crb(c,0)) { goto L_801BDAB4; } // 801BDA90
  cmpu(c,0,c->r[4],0x000000DFu); // 801BDA94
  if (crb(c,1)) { goto L_801BDAB4; } // 801BDA98
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 801BDA9C
  c->r[3]=0u+0x804A0000u; // 801BDAA0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801BDAA4
  c->r[3]=c->r[3]+0x00003150u; // 801BDAA8
  c->r[3]=R16(c->r[3]+c->r[0]); // 801BDAAC
  return; // 801BDAB0
L_801BDAB4:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 801BDAB4
  if (!crb(c,1)) { goto L_801BDB20; } // 801BDAB8
  cmpu(c,0,c->r[4],0x00009872u); // 801BDABC
  if (crb(c,1)) { goto L_801BDB20; } // 801BDAC0
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 801BDAC4
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801BDAC8
  c->r[3]=c->r[3]+0xFFFFFF78u; // 801BDACC
  c->r[0]=0u+0x00000000u; // 801BDAD0
  cmpu(c,0,c->r[4],0x00000040u); // 801BDAD4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 801BDAD8
  if (crb(c,0)) { goto L_801BDAF4; } // 801BDADC
  cmpu(c,0,c->r[4],0x000000FCu); // 801BDAE0
  if (crb(c,1)) { goto L_801BDAF4; } // 801BDAE4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BDAE8
  if (crb(c,2)) { goto L_801BDAF4; } // 801BDAEC
  c->r[0]=0u+0x00000001u; // 801BDAF0
L_801BDAF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BDAF4
  if (!crb(c,2)) { goto L_801BDB04; } // 801BDAF8
  c->r[3]=0u+0x00000000u; // 801BDAFC
  return; // 801BDB00
L_801BDB04:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801BDB04
  cmps(c,0,(int32_t)c->r[4],64); // 801BDB08
  if (crb(c,0)) { goto L_801BDB14; } // 801BDB0C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801BDB10
L_801BDB14:;
  c->r[3]=c->r[3]+c->r[4]; // 801BDB14
  c->r[3]=c->r[3]+0x000002BEu; // 801BDB18
  return; // 801BDB1C
L_801BDB20:;
  cmpu(c,0,c->r[4],0x00008140u); // 801BDB20
  if (crb(c,0)) { goto L_801BDBB0; } // 801BDB24
  cmpu(c,0,c->r[4],0x0000879Eu); // 801BDB28
  if (!crb(c,0)) { goto L_801BDBB0; } // 801BDB2C
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 801BDB30
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801BDB34
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 801BDB38
  c->r[0]=0u+0x00000000u; // 801BDB3C
  cmpu(c,0,c->r[4],0x00000040u); // 801BDB40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 801BDB44
  if (crb(c,0)) { goto L_801BDB60; } // 801BDB48
  cmpu(c,0,c->r[4],0x000000FCu); // 801BDB4C
  if (crb(c,1)) { goto L_801BDB60; } // 801BDB50
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BDB54
  if (crb(c,2)) { goto L_801BDB60; } // 801BDB58
  c->r[0]=0u+0x00000001u; // 801BDB5C
L_801BDB60:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BDB60
  if (!crb(c,2)) { goto L_801BDB70; } // 801BDB64
  c->r[3]=0u+0x00000000u; // 801BDB68
  return; // 801BDB6C
L_801BDB70:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801BDB70
  cmps(c,0,(int32_t)c->r[4],64); // 801BDB74
  if (crb(c,0)) { goto L_801BDB80; } // 801BDB78
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801BDB7C
L_801BDB80:;
  c->r[0]=c->r[3]+c->r[4]; // 801BDB80
  c->r[3]=0u+0x804A0000u; // 801BDB84
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801BDB88
  c->r[3]=c->r[3]+0x000032D0u; // 801BDB8C
  c->r[3]=R16(c->r[3]+c->r[0]); // 801BDB90
  return; // 801BDB94
L_801BDB98:;
  cmpu(c,0,c->r[4],0x00000020u); // 801BDB98
  if (!crb(c,1)) { goto L_801BDBB0; } // 801BDB9C
  cmpu(c,0,c->r[4],0x000000FFu); // 801BDBA0
  if (crb(c,1)) { goto L_801BDBB0; } // 801BDBA4
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 801BDBA8
  return; // 801BDBAC
L_801BDBB0:;
  c->r[3]=0u+0x00000000u; // 801BDBB0
  return; // 801BDBB4
}

// Decode
void f_801BDBB8(Ctx* __restrict c) {
  trace_call(0x801BDBB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDBB8
  c->r[0]=c->lr; // 801BDBBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDBC0
  c->r[11]=c->r[1]+0x00000020u; // 801BDBC4
  c->lr=0x801BDBCCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDBC8
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801BDBCC
  c->r[30]=c->r[3]+0x00000010u; // 801BDBD0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BDBD4
  c->r[8]=0u+0x00000000u; // 801BDBD8
  c->r[29]=c->r[3]+c->r[5]; // 801BDBDC
  c->r[9]=R32(c->r[3]+0x00000008u); // 801BDBE0
  c->r[11]=0u+0x00000000u; // 801BDBE4
  c->r[5]=0u+0x80000000u; // 801BDBE8
L_801BDBEC:;
  cmps(c,0,(int32_t)c->r[11],0); // 801BDBEC
  if (!crb(c,2)) { goto L_801BDC00; } // 801BDBF0
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BDBF4
  c->r[11]=0u+0x00000020u; // 801BDBF8
  c->r[30]=c->r[30]+0x00000004u; // 801BDBFC
L_801BDC00:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 801BDC00
  if (crb(c,2)) { goto L_801BDC1C; } // 801BDC04
  c->r[6]=R8(c->r[29]+0x00000000u); // 801BDC08
  c->r[29]=c->r[29]+0x00000001u; // 801BDC0C
  W8(c->r[4]+c->r[8],c->r[6]); // 801BDC10
  c->r[8]=c->r[8]+0x00000001u; // 801BDC14
  goto L_801BDD34; // 801BDC18
L_801BDC1C:;
  c->r[7]=c->r[3]+c->r[9]; // 801BDC1C
  c->r[6]=R8(c->r[3]+c->r[9]); // 801BDC20
  c->r[7]=R8(c->r[7]+0x00000001u); // 801BDC24
  c->r[9]=c->r[9]+0x00000002u; // 801BDC28
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801BDC2C
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 801BDC30
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 801BDC34
  c->r[7]=c->r[8]-c->r[6]; // 801BDC38
  if (!crb(c,2)) { goto L_801BDC50; } // 801BDC3C
  c->r[6]=R8(c->r[29]+0x00000000u); // 801BDC40
  c->r[29]=c->r[29]+0x00000001u; // 801BDC44
  c->r[10]=c->r[6]+0x00000012u; // 801BDC48
  goto L_801BDC54; // 801BDC4C
L_801BDC50:;
  c->r[10]=c->r[10]+0x00000002u; // 801BDC50
L_801BDC54:;
  cmps(c,1,(int32_t)c->r[10],0); // 801BDC54
  c->r[6]=0u+0x00000000u; // 801BDC58
  if (!crb(c,5)) { goto L_801BDD34; } // 801BDC5C
  cmps(c,0,(int32_t)c->r[10],8); // 801BDC60
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 801BDC64
  if (!crb(c,1)) { goto L_801BDD00; } // 801BDC68
  c->r[28]=0u+0x00000000u; // 801BDC6C
  if (crb(c,4)) { goto L_801BDC84; } // 801BDC70
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 801BDC74
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 801BDC78
  if (crb(c,1)) { goto L_801BDC84; } // 801BDC7C
  c->r[28]=0u+0x00000001u; // 801BDC80
L_801BDC84:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BDC84
  if (crb(c,2)) { goto L_801BDD00; } // 801BDC88
  c->r[31]=c->r[27]+0x00000007u; // 801BDC8C
  c->r[28]=c->r[4]+c->r[8]; // 801BDC90
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 801BDC94
  c->ctr=c->r[31]; // 801BDC98
  cmps(c,0,(int32_t)c->r[27],0); // 801BDC9C
  if (!crb(c,1)) { goto L_801BDD00; } // 801BDCA0
L_801BDCA4:;
  c->r[26]=c->r[4]+c->r[7]; // 801BDCA4
  c->r[27]=c->r[8]+c->r[4]; // 801BDCA8
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 801BDCAC
  c->r[8]=c->r[8]+0x00000008u; // 801BDCB0
  c->r[6]=c->r[6]+0x00000008u; // 801BDCB4
  W8(c->r[28]+0x00000000u,c->r[31]); // 801BDCB8
  c->r[28]=c->r[28]+0x00000008u; // 801BDCBC
  c->r[31]=R8(c->r[4]+c->r[7]); // 801BDCC0
  c->r[7]=c->r[7]+0x00000008u; // 801BDCC4
  W8(c->r[27]+0x00000001u,c->r[31]); // 801BDCC8
  c->r[31]=R8(c->r[26]+0x00000001u); // 801BDCCC
  W8(c->r[27]+0x00000002u,c->r[31]); // 801BDCD0
  c->r[31]=R8(c->r[26]+0x00000002u); // 801BDCD4
  W8(c->r[27]+0x00000003u,c->r[31]); // 801BDCD8
  c->r[31]=R8(c->r[26]+0x00000003u); // 801BDCDC
  W8(c->r[27]+0x00000004u,c->r[31]); // 801BDCE0
  c->r[31]=R8(c->r[26]+0x00000004u); // 801BDCE4
  W8(c->r[27]+0x00000005u,c->r[31]); // 801BDCE8
  c->r[31]=R8(c->r[26]+0x00000005u); // 801BDCEC
  W8(c->r[27]+0x00000006u,c->r[31]); // 801BDCF0
  c->r[31]=R8(c->r[26]+0x00000006u); // 801BDCF4
  W8(c->r[27]+0x00000007u,c->r[31]); // 801BDCF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDCA4; } // 801BDCFC
L_801BDD00:;
  c->r[31]=c->r[10]-c->r[6]; // 801BDD00
  c->r[28]=c->r[4]+c->r[8]; // 801BDD04
  c->ctr=c->r[31]; // 801BDD08
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 801BDD0C
  if (!crb(c,0)) { goto L_801BDD34; } // 801BDD10
L_801BDD14:;
  c->r[10]=c->r[4]+c->r[7]; // 801BDD14
  c->r[6]=c->r[6]+0x00000001u; // 801BDD18
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 801BDD1C
  c->r[8]=c->r[8]+0x00000001u; // 801BDD20
  c->r[7]=c->r[7]+0x00000001u; // 801BDD24
  W8(c->r[28]+0x00000000u,c->r[10]); // 801BDD28
  c->r[28]=c->r[28]+0x00000001u; // 801BDD2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDD14; } // 801BDD30
L_801BDD34:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801BDD34
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 801BDD38
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801BDD3C
  if (crb(c,0)) { IRQCHK(c); goto L_801BDBEC; } // 801BDD40
  c->r[11]=c->r[1]+0x00000020u; // 801BDD44
  c->lr=0x801BDD4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDD48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDD4C
  c->lr=c->r[0]; // 801BDD50
  c->r[1]=c->r[1]+0x00000020u; // 801BDD54
  return; // 801BDD58
}

// OSSetFontEncode
void f_801BDD5C(Ctx* __restrict c) {
  trace_call(0x801BDD5Cu);
  c->r[0]=R16(c->r[13]+0xFFFF8430u); // 801BDD5C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BDD60
  if (crb(c,2)) { goto L_801BDD6C; } // 801BDD64
  goto L_801BDDB0; // 801BDD68
L_801BDD6C:;
  c->r[4]=0u+0x80000000u; // 801BDD6C
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801BDD70
  cmps(c,0,(int32_t)c->r[0],0); // 801BDD74
  if (crb(c,2)) { goto L_801BDD84; } // 801BDD78
  if (crb(c,0)) { goto L_801BDD98; } // 801BDD7C
  goto L_801BDD98; // 801BDD80
L_801BDD84:;
  c->r[4]=0u+0xCC000000u; // 801BDD84
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801BDD88
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801BDD8C
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BDD90
  goto L_801BDDA0; // 801BDD94
L_801BDD98:;
  c->r[0]=0u+0x00000000u; // 801BDD98
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BDD9C
L_801BDDA0:;
  c->r[4]=0u+0x801C0000u; // 801BDDA0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BDDA4
  c->r[4]=c->r[4]+0xFFFFE204u; // 801BDDA8
  W32(c->r[13]+0xFFFF9CD8u,c->r[4]); // 801BDDAC
L_801BDDB0:;
  cmpu(c,1,c->r[3],0x00000005u); // 801BDDB0
  if (crb(c,5)) { goto L_801BDDD4; } // 801BDDB4
  cmpu(c,0,c->r[3],0x00000003u); // 801BDDB8
  W16(c->r[13]+0xFFFF8430u,c->r[3]); // 801BDDBC
  if (crb(c,0)) { goto L_801BDDD4; } // 801BDDC0
  if (crb(c,5)) { goto L_801BDDD4; } // 801BDDC4
  c->r[3]=0u+0x801C0000u; // 801BDDC8
  c->r[3]=c->r[3]+0xFFFFE300u; // 801BDDCC
  W32(c->r[13]+0xFFFF9CD8u,c->r[3]); // 801BDDD0
L_801BDDD4:;
  c->r[3]=c->r[0]|c->r[0]; // 801BDDD4
  return; // 801BDDD8
}

// ReadFont
void f_801BDDDC(Ctx* __restrict c) {
  trace_call(0x801BDDDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDDDC
  c->r[0]=c->lr; // 801BDDE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BDDE4
  c->r[11]=c->r[1]+0x00000030u; // 801BDDE8
  c->lr=0x801BDDF0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDDEC
  cmpu(c,0,c->r[4],0x00000001u); // 801BDDF0
  c->r[28]=c->r[3]|c->r[3]; // 801BDDF4
  c->r[29]=c->r[4]|c->r[4]; // 801BDDF8
  c->r[26]=c->r[5]|c->r[5]; // 801BDDFC
  if (!crb(c,2)) { goto L_801BDE5C; } // 801BDE00
  c->r[4]=0u+0x001B0000u; // 801BDE04
  c->r[3]=0u+0x00050000u; // 801BDE08
  c->r[27]=c->r[28]|c->r[28]; // 801BDE0C
  c->r[31]=c->r[4]+0xFFFFFF00u; // 801BDE10
  c->r[30]=c->r[3]+0xFFFFD000u; // 801BDE14
  goto L_801BDE50; // 801BDE18
L_801BDE1C:;
  cmps(c,0,(int32_t)c->r[30],256); // 801BDE1C
  c->r[25]=0u+0x00000100u; // 801BDE20
  if (crb(c,1)) { goto L_801BDE2C; } // 801BDE24
  c->r[25]=c->r[30]|c->r[30]; // 801BDE28
L_801BDE2C:;
  c->r[30]=c->r[30]-c->r[25]; // 801BDE2C
L_801BDE30:;
  c->r[3]=c->r[27]|c->r[27]; // 801BDE30
  c->r[4]=c->r[25]|c->r[25]; // 801BDE34
  c->r[5]=c->r[31]|c->r[31]; // 801BDE38
  c->lr=0x801BDE40u; f_801C0A28(c); // 801BDE3C
  cmps(c,0,(int32_t)c->r[3],0); // 801BDE40
  if (crb(c,2)) { IRQCHK(c); goto L_801BDE30; } // 801BDE44
  c->r[31]=c->r[31]+c->r[25]; // 801BDE48
  c->r[27]=c->r[27]+c->r[25]; // 801BDE4C
L_801BDE50:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BDE50
  if (crb(c,1)) { IRQCHK(c); goto L_801BDE1C; } // 801BDE54
  goto L_801BDEAC; // 801BDE58
L_801BDE5C:;
  c->r[3]=0u+0x00200000u; // 801BDE5C
  c->r[27]=c->r[28]|c->r[28]; // 801BDE60
  c->r[31]=c->r[3]+0xFFFFCF00u; // 801BDE64
  c->r[30]=0u+0x00003000u; // 801BDE68
  goto L_801BDEA4; // 801BDE6C
L_801BDE70:;
  cmps(c,0,(int32_t)c->r[30],256); // 801BDE70
  c->r[25]=0u+0x00000100u; // 801BDE74
  if (crb(c,1)) { goto L_801BDE80; } // 801BDE78
  c->r[25]=c->r[30]|c->r[30]; // 801BDE7C
L_801BDE80:;
  c->r[30]=c->r[30]-c->r[25]; // 801BDE80
L_801BDE84:;
  c->r[3]=c->r[27]|c->r[27]; // 801BDE84
  c->r[4]=c->r[25]|c->r[25]; // 801BDE88
  c->r[5]=c->r[31]|c->r[31]; // 801BDE8C
  c->lr=0x801BDE94u; f_801C0A28(c); // 801BDE90
  cmps(c,0,(int32_t)c->r[3],0); // 801BDE94
  if (crb(c,2)) { IRQCHK(c); goto L_801BDE84; } // 801BDE98
  c->r[31]=c->r[31]+c->r[25]; // 801BDE9C
  c->r[27]=c->r[27]+c->r[25]; // 801BDEA0
L_801BDEA4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BDEA4
  if (crb(c,1)) { IRQCHK(c); goto L_801BDE70; } // 801BDEA8
L_801BDEAC:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801BDEAC
  cmpu(c,0,c->r[0],0x00000059u); // 801BDEB0
  if (!crb(c,2)) { goto L_801BDED8; } // 801BDEB4
  c->r[0]=R8(c->r[28]+0x00000001u); // 801BDEB8
  cmpu(c,0,c->r[0],0x00000061u); // 801BDEBC
  if (!crb(c,2)) { goto L_801BDED8; } // 801BDEC0
  c->r[0]=R8(c->r[28]+0x00000002u); // 801BDEC4
  cmpu(c,0,c->r[0],0x00000079u); // 801BDEC8
  if (!crb(c,2)) { goto L_801BDED8; } // 801BDECC
  c->r[27]=R32(c->r[28]+0x00000004u); // 801BDED0
  goto L_801BDEDC; // 801BDED4
L_801BDED8:;
  c->r[27]=0u+0x00000000u; // 801BDED8
L_801BDEDC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BDEDC
  if (!crb(c,2)) { goto L_801BDEEC; } // 801BDEE0
  c->r[3]=0u+0x00000000u; // 801BDEE4
  goto L_801BE0C4; // 801BDEE8
L_801BDEEC:;
  c->r[3]=c->r[28]|c->r[28]; // 801BDEEC
  c->r[4]=c->r[26]|c->r[26]; // 801BDEF0
  c->lr=0x801BDEF8u; f_801BDBB8(c); // 801BDEF4
  cmpu(c,0,c->r[29],0x00000001u); // 801BDEF8
  if (!crb(c,2)) { goto L_801BE0C0; } // 801BDEFC
  c->r[3]=c->r[29]|c->r[29]; // 801BDF00
  c->r[28]=R16(c->r[2]+0xFFFFC128u); // 801BDF04
  c->r[29]=R16(c->r[2]+0xFFFFC12Au); // 801BDF08
  c->r[4]=0u+0x00000054u; // 801BDF0C
  c->r[30]=R16(c->r[2]+0xFFFFC12Cu); // 801BDF10
  c->r[31]=R16(c->r[2]+0xFFFFC12Eu); // 801BDF14
  c->lr=0x801BDF1Cu; f_801BDA84(c); // 801BDF18
  c->r[9]=R16(c->r[26]+0x0000001Au); // 801BDF1C
  c->r[4]=R16(c->r[26]+0x0000001Cu); // 801BDF20
  c->r[0]=R16(c->r[26]+0x0000001Eu); // 801BDF24
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[4]); // 801BDF28
  c->r[5]=R32(c->r[26]+0x00000024u); // 801BDF2C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 801BDF30
  c->r[6]=R16(c->r[26]+0x00000012u); // 801BDF34
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801BDF38
  c->r[7]=R16(c->r[26]+0x00000010u); // 801BDF3C
  c->r[12]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 801BDF40
  c->r[0]=c->r[0]+c->r[4]; // 801BDF44
  c->r[4]=c->r[26]+c->r[5]; // 801BDF48
  c->r[8]=R32(c->r[26]+0x00000014u); // 801BDF4C
  c->r[11]=sraw(c,c->r[0],1); // 801BDF50
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 801BDF54
  c->r[3]=c->r[3]-c->r[0]; // 801BDF58
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 801BDF5C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 801BDF60
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801BDF64
  c->r[25]=c->r[3]-c->r[0]; // 801BDF68
  c->r[6]=c->r[5]+0x00000004u; // 801BDF6C
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[7]); // 801BDF70
  c->r[10]=c->r[5]+0x00000005u; // 801BDF74
  c->r[3]=sraw(c,c->r[6],3); // 801BDF78
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 801BDF7C
  c->r[9]=addc(c,c->r[3],0,c->xer_ca); // 801BDF80
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801BDF84
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 801BDF88
  c->r[3]=sraw(c,c->r[25],3); // 801BDF8C
  c->r[0]=c->r[0]-c->r[7]; // 801BDF90
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 801BDF94
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801BDF98
  c->r[0]=rotl(c->r[25],29)&0xE0000000u; // 801BDF9C
  c->r[6]=rotl(c->r[25],1)&0x00000001u; // 801BDFA0
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 801BDFA4
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 801BDFA8
  c->r[7]=c->r[3]+c->r[7]; // 801BDFAC
  c->r[0]=c->r[0]-c->r[6]; // 801BDFB0
  c->r[4]=c->r[4]+c->r[12]; // 801BDFB4
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801BDFB8
  c->r[0]=rotl(c->r[8],4)&0xFFFFFFF0u; // 801BDFBC
  c->r[3]=c->r[3]+c->r[6]; // 801BDFC0
  c->r[9]=c->r[4]+c->r[9]; // 801BDFC4
  c->r[8]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801BDFC8
  c->r[6]=rotl(c->r[10],29)&0xE0000000u; // 801BDFCC
  c->r[3]=sraw(c,c->r[3],2); // 801BDFD0
  c->r[9]=c->r[9]+c->r[0]; // 801BDFD4
  c->r[9]=c->r[9]+c->r[8]; // 801BDFD8
  c->r[7]=rotl(c->r[10],1)&0x00000001u; // 801BDFDC
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801BDFE0
  c->r[8]=c->r[5]+0x00000006u; // 801BDFE4
  W16(c->r[9]+c->r[3],c->r[28]); // 801BDFE8
  c->r[6]=c->r[6]-c->r[7]; // 801BDFEC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 801BDFF0
  c->r[6]=c->r[6]+c->r[7]; // 801BDFF4
  c->r[11]=R16(c->r[26]+0x0000001Eu); // 801BDFF8
  c->r[9]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801BDFFC
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 801BE000
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFE0u; // 801BE004
  c->r[11]=rotl(c->r[11],3)&0x00000001u; // 801BE008
  c->r[11]=c->r[11]+c->r[12]; // 801BE00C
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 801BE010
  c->r[11]=sraw(c,c->r[11],1); // 801BE014
  c->r[10]=sraw(c,c->r[10],3); // 801BE018
  c->r[6]=c->r[6]-c->r[7]; // 801BE01C
  c->r[10]=addc(c,c->r[10],0,c->xer_ca); // 801BE020
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 801BE024
  c->r[6]=c->r[6]+c->r[7]; // 801BE028
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 801BE02C
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801BE030
  c->r[7]=c->r[4]+c->r[10]; // 801BE034
  c->r[7]=c->r[7]+c->r[0]; // 801BE038
  c->r[7]=c->r[7]+c->r[9]; // 801BE03C
  W16(c->r[7]+c->r[3],c->r[29]); // 801BE040
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801BE044
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 801BE048
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 801BE04C
  c->r[7]=c->r[7]+c->r[9]; // 801BE050
  c->r[9]=sraw(c,c->r[7],1); // 801BE054
  c->r[7]=sraw(c,c->r[8],3); // 801BE058
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 801BE05C
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 801BE060
  c->r[7]=c->r[4]+c->r[7]; // 801BE064
  c->r[7]=c->r[7]+c->r[0]; // 801BE068
  c->r[7]=c->r[7]+c->r[6]; // 801BE06C
  W16(c->r[7]+c->r[3],c->r[30]); // 801BE070
  c->r[7]=c->r[5]+0x00000007u; // 801BE074
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 801BE078
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801BE07C
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 801BE080
  c->r[5]=c->r[5]-c->r[6]; // 801BE084
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFE0u; // 801BE088
  c->r[8]=rotl(c->r[8],3)&0x00000001u; // 801BE08C
  c->r[8]=c->r[8]+c->r[9]; // 801BE090
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 801BE094
  c->r[8]=sraw(c,c->r[8],1); // 801BE098
  c->r[7]=sraw(c,c->r[7],3); // 801BE09C
  c->r[5]=c->r[5]+c->r[6]; // 801BE0A0
  c->r[6]=addc(c,c->r[7],0,c->xer_ca); // 801BE0A4
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 801BE0A8
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801BE0AC
  c->r[4]=c->r[4]+c->r[6]; // 801BE0B0
  c->r[4]=c->r[4]+c->r[0]; // 801BE0B4
  c->r[4]=c->r[4]+c->r[5]; // 801BE0B8
  W16(c->r[4]+c->r[3],c->r[31]); // 801BE0BC
L_801BE0C0:;
  c->r[3]=c->r[27]|c->r[27]; // 801BE0C0
L_801BE0C4:;
  c->r[11]=c->r[1]+0x00000030u; // 801BE0C4
  c->lr=0x801BE0CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE0C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BE0CC
  c->lr=c->r[0]; // 801BE0D0
  c->r[1]=c->r[1]+0x00000030u; // 801BE0D4
  return; // 801BE0D8
}

// OSLoadFont
void f_801BE0DC(Ctx* __restrict c) {
  trace_call(0x801BE0DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE0DC
  c->r[0]=c->lr; // 801BE0E0
  c->r[5]=c->r[3]|c->r[3]; // 801BE0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE0E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE0EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE0F0
  c->r[30]=c->r[4]|c->r[4]; // 801BE0F4
  c->r[0]=R16(c->r[13]+0xFFFF8430u); // 801BE0F8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BE0FC
  if (crb(c,2)) { goto L_801BE108; } // 801BE100
  goto L_801BE14C; // 801BE104
L_801BE108:;
  c->r[4]=0u+0x80000000u; // 801BE108
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801BE10C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE110
  if (crb(c,2)) { goto L_801BE120; } // 801BE114
  if (crb(c,0)) { goto L_801BE134; } // 801BE118
  goto L_801BE134; // 801BE11C
L_801BE120:;
  c->r[4]=0u+0xCC000000u; // 801BE120
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801BE124
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801BE128
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BE12C
  goto L_801BE13C; // 801BE130
L_801BE134:;
  c->r[0]=0u+0x00000000u; // 801BE134
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BE138
L_801BE13C:;
  c->r[4]=0u+0x801C0000u; // 801BE13C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE140
  c->r[4]=c->r[4]+0xFFFFE204u; // 801BE144
  W32(c->r[13]+0xFFFF9CD8u,c->r[4]); // 801BE148
L_801BE14C:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE14C
  cmps(c,0,(int32_t)c->r[0],2); // 801BE150
  if (crb(c,2)) { goto L_801BE1E4; } // 801BE154
  if (!crb(c,0)) { goto L_801BE16C; } // 801BE158
  cmps(c,0,(int32_t)c->r[0],0); // 801BE15C
  if (crb(c,2)) { goto L_801BE178; } // 801BE160
  if (!crb(c,0)) { goto L_801BE190; } // 801BE164
  goto L_801BE1E4; // 801BE168
L_801BE16C:;
  cmps(c,0,(int32_t)c->r[0],6); // 801BE16C
  if (!crb(c,0)) { goto L_801BE1E4; } // 801BE170
  goto L_801BE1A8; // 801BE174
L_801BE178:;
  W32(c->r[13]+0xFFFF9CE4u,c->r[3]); // 801BE178
  c->r[3]=c->r[30]|c->r[30]; // 801BE17C
  c->r[4]=0u+0x00000000u; // 801BE180
  c->lr=0x801BE188u; f_801BDDDC(c); // 801BE184
  c->r[31]=c->r[3]|c->r[3]; // 801BE188
  goto L_801BE1E8; // 801BE18C
L_801BE190:;
  W32(c->r[13]+0xFFFF9CE0u,c->r[3]); // 801BE190
  c->r[3]=c->r[30]|c->r[30]; // 801BE194
  c->r[4]=0u+0x00000001u; // 801BE198
  c->lr=0x801BE1A0u; f_801BDDDC(c); // 801BE19C
  c->r[31]=c->r[3]|c->r[3]; // 801BE1A0
  goto L_801BE1E8; // 801BE1A4
L_801BE1A8:;
  W32(c->r[13]+0xFFFF9CE4u,c->r[3]); // 801BE1A8
  c->r[3]=c->r[30]|c->r[30]; // 801BE1AC
  c->r[4]=0u+0x00000000u; // 801BE1B0
  c->lr=0x801BE1B8u; f_801BDDDC(c); // 801BE1B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE1B8
  c->r[31]=c->r[3]|c->r[3]; // 801BE1BC
  if (crb(c,2)) { goto L_801BE1E8; } // 801BE1C0
  c->r[0]=R32(c->r[13]+0xFFFF9CE4u); // 801BE1C4
  c->r[4]=0u+0x00000001u; // 801BE1C8
  c->r[5]=c->r[0]+c->r[3]; // 801BE1CC
  c->r[3]=c->r[30]|c->r[30]; // 801BE1D0
  W32(c->r[13]+0xFFFF9CE0u,c->r[5]); // 801BE1D4
  c->lr=0x801BE1DCu; f_801BDDDC(c); // 801BE1D8
  c->r[31]=c->r[31]+c->r[3]; // 801BE1DC
  goto L_801BE1E8; // 801BE1E0
L_801BE1E4:;
  c->r[31]=0u+0x00000000u; // 801BE1E4
L_801BE1E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BE1E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE1EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BE1F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE1F4
  c->lr=c->r[0]; // 801BE1F8
  c->r[1]=c->r[1]+0x00000010u; // 801BE1FC
  return; // 801BE200
}

// ParseStringS
void f_801BE204(Ctx* __restrict c) {
  trace_call(0x801BE204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE204
  c->r[0]=c->lr; // 801BE208
  cmps(c,0,(int32_t)c->r[3],1); // 801BE20C
  c->r[7]=0u+0x00000000u; // 801BE210
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE218
  c->r[31]=c->r[6]|c->r[6]; // 801BE21C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE220
  c->r[30]=c->r[4]|c->r[4]; // 801BE224
  if (crb(c,2)) { goto L_801BE254; } // 801BE228
  if (!crb(c,0)) { goto L_801BE2D4; } // 801BE22C
  cmps(c,0,(int32_t)c->r[3],0); // 801BE230
  if (!crb(c,0)) { goto L_801BE23C; } // 801BE234
  goto L_801BE2D4; // 801BE238
L_801BE23C:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 801BE23C
  c->r[6]=R32(c->r[13]+0xFFFF9CE4u); // 801BE240
  cmps(c,0,(int32_t)c->r[7],0); // 801BE244
  if (crb(c,2)) { goto L_801BE2D4; } // 801BE248
  c->r[30]=c->r[4]+0x00000001u; // 801BE24C
  goto L_801BE2D4; // 801BE250
L_801BE254:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 801BE254
  c->r[6]=R32(c->r[13]+0xFFFF9CE0u); // 801BE258
  cmps(c,0,(int32_t)c->r[7],0); // 801BE25C
  if (crb(c,2)) { goto L_801BE2D4; } // 801BE260
  cmpu(c,0,c->r[7],0x00000081u); // 801BE264
  c->r[30]=c->r[4]+0x00000001u; // 801BE268
  c->r[0]=0u+0x00000000u; // 801BE26C
  if (crb(c,0)) { goto L_801BE27C; } // 801BE270
  cmpu(c,0,c->r[7],0x0000009Fu); // 801BE274
  if (!crb(c,1)) { goto L_801BE28C; } // 801BE278
L_801BE27C:;
  cmpu(c,0,c->r[7],0x000000E0u); // 801BE27C
  if (crb(c,0)) { goto L_801BE290; } // 801BE280
  cmpu(c,0,c->r[7],0x000000FCu); // 801BE284
  if (crb(c,1)) { goto L_801BE290; } // 801BE288
L_801BE28C:;
  c->r[0]=0u+0x00000001u; // 801BE28C
L_801BE290:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE290
  if (crb(c,2)) { goto L_801BE2D4; } // 801BE294
  c->r[4]=R8(c->r[30]+0x00000000u); // 801BE298
  c->r[0]=0u+0x00000000u; // 801BE29C
  cmpu(c,0,c->r[4],0x00000040u); // 801BE2A0
  if (crb(c,0)) { goto L_801BE2BC; } // 801BE2A4
  cmpu(c,0,c->r[4],0x000000FCu); // 801BE2A8
  if (crb(c,1)) { goto L_801BE2BC; } // 801BE2AC
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BE2B0
  if (crb(c,2)) { goto L_801BE2BC; } // 801BE2B4
  c->r[0]=0u+0x00000001u; // 801BE2B8
L_801BE2BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE2BC
  if (crb(c,2)) { goto L_801BE2D4; } // 801BE2C0
  c->r[0]=R8(c->r[30]+0x00000000u); // 801BE2C4
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 801BE2C8
  c->r[30]=c->r[30]+0x00000001u; // 801BE2CC
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE2D0
L_801BE2D4:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 801BE2D4
  c->r[4]=c->r[7]|c->r[7]; // 801BE2D8
  c->lr=0x801BE2E0u; f_801BDA84(c); // 801BE2DC
  W32(c->r[31]+0x00000000u,c->r[3]); // 801BE2E0
  c->r[3]=c->r[30]|c->r[30]; // 801BE2E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE2E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BE2EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE2F0
  c->lr=c->r[0]; // 801BE2F4
  c->r[1]=c->r[1]+0x00000010u; // 801BE2F8
  return; // 801BE2FC
}

// ParseStringW
void f_801BE300(Ctx* __restrict c) {
  trace_call(0x801BE300u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE300
  c->r[0]=c->lr; // 801BE304
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE308
  c->r[11]=c->r[1]+0x00000030u; // 801BE30C
  c->lr=0x801BE314u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE310
  c->r[30]=0u+0x00000000u; // 801BE314
  cmps(c,0,(int32_t)c->r[3],3); // 801BE318
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE31C
  c->r[26]=c->r[3]|c->r[3]; // 801BE320
  c->r[27]=c->r[4]|c->r[4]; // 801BE324
  c->r[28]=c->r[5]|c->r[5]; // 801BE328
  c->r[29]=c->r[6]|c->r[6]; // 801BE32C
  if (crb(c,2)) { goto L_801BE3FC; } // 801BE330
  if (!crb(c,0)) { goto L_801BE350; } // 801BE334
  cmps(c,0,(int32_t)c->r[3],1); // 801BE338
  if (crb(c,2)) { goto L_801BE378; } // 801BE33C
  if (!crb(c,0)) { goto L_801BE438; } // 801BE340
  cmps(c,0,(int32_t)c->r[3],0); // 801BE344
  if (!crb(c,0)) { goto L_801BE360; } // 801BE348
  goto L_801BE438; // 801BE34C
L_801BE350:;
  cmps(c,0,(int32_t)c->r[3],5); // 801BE350
  if (crb(c,2)) { goto L_801BE424; } // 801BE354
  if (!crb(c,0)) { goto L_801BE438; } // 801BE358
  goto L_801BE410; // 801BE35C
L_801BE360:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 801BE360
  c->r[31]=R32(c->r[13]+0xFFFF9CE4u); // 801BE364
  cmps(c,0,(int32_t)c->r[30],0); // 801BE368
  if (crb(c,2)) { goto L_801BE438; } // 801BE36C
  c->r[27]=c->r[4]+0x00000001u; // 801BE370
  goto L_801BE438; // 801BE374
L_801BE378:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 801BE378
  c->r[31]=R32(c->r[13]+0xFFFF9CE0u); // 801BE37C
  cmps(c,0,(int32_t)c->r[30],0); // 801BE380
  if (crb(c,2)) { goto L_801BE438; } // 801BE384
  cmpu(c,0,c->r[30],0x00000081u); // 801BE388
  c->r[27]=c->r[4]+0x00000001u; // 801BE38C
  c->r[0]=0u+0x00000000u; // 801BE390
  if (crb(c,0)) { goto L_801BE3A0; } // 801BE394
  cmpu(c,0,c->r[30],0x0000009Fu); // 801BE398
  if (!crb(c,1)) { goto L_801BE3B0; } // 801BE39C
L_801BE3A0:;
  cmpu(c,0,c->r[30],0x000000E0u); // 801BE3A0
  if (crb(c,0)) { goto L_801BE3B4; } // 801BE3A4
  cmpu(c,0,c->r[30],0x000000FCu); // 801BE3A8
  if (crb(c,1)) { goto L_801BE3B4; } // 801BE3AC
L_801BE3B0:;
  c->r[0]=0u+0x00000001u; // 801BE3B0
L_801BE3B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE3B4
  if (crb(c,2)) { goto L_801BE438; } // 801BE3B8
  c->r[3]=R8(c->r[27]+0x00000000u); // 801BE3BC
  c->r[0]=0u+0x00000000u; // 801BE3C0
  cmpu(c,0,c->r[3],0x00000040u); // 801BE3C4
  if (crb(c,0)) { goto L_801BE3E0; } // 801BE3C8
  cmpu(c,0,c->r[3],0x000000FCu); // 801BE3CC
  if (crb(c,1)) { goto L_801BE3E0; } // 801BE3D0
  cmpu(c,0,c->r[3],0x0000007Fu); // 801BE3D4
  if (crb(c,2)) { goto L_801BE3E0; } // 801BE3D8
  c->r[0]=0u+0x00000001u; // 801BE3DC
L_801BE3E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BE3E0
  if (crb(c,2)) { goto L_801BE438; } // 801BE3E4
  c->r[0]=R8(c->r[27]+0x00000000u); // 801BE3E8
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 801BE3EC
  c->r[27]=c->r[27]+0x00000001u; // 801BE3F0
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE3F4
  goto L_801BE438; // 801BE3F8
L_801BE3FC:;
  c->r[3]=c->r[27]|c->r[27]; // 801BE3FC
  c->r[4]=c->r[1]+0x00000008u; // 801BE400
  c->lr=0x801BE408u; f_801C2C30(c); // 801BE404
  c->r[27]=c->r[3]|c->r[3]; // 801BE408
  goto L_801BE438; // 801BE40C
L_801BE410:;
  c->r[3]=c->r[27]|c->r[27]; // 801BE410
  c->r[4]=c->r[1]+0x00000008u; // 801BE414
  c->lr=0x801BE41Cu; f_801C2D40(c); // 801BE418
  c->r[27]=c->r[3]|c->r[3]; // 801BE41C
  goto L_801BE438; // 801BE420
L_801BE424:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BE424
  cmps(c,0,(int32_t)c->r[0],0); // 801BE428
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BE42C
  if (crb(c,2)) { goto L_801BE438; } // 801BE430
  c->r[27]=c->r[4]+0x00000004u; // 801BE434
L_801BE438:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE438
  cmps(c,0,(int32_t)c->r[3],0); // 801BE43C
  if (crb(c,2)) { goto L_801BE48C; } // 801BE440
  c->r[31]=R32(c->r[13]+0xFFFF9CE4u); // 801BE444
  c->r[26]=0u+0x00000000u; // 801BE448
  c->lr=0x801BE450u; f_801C2DB0(c); // 801BE44C
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 801BE450
  if (crb(c,2)) { goto L_801BE470; } // 801BE454
  c->r[0]=R32(c->r[13]+0xFFFF9CDCu); // 801BE458
  cmps(c,0,(int32_t)c->r[0],0); // 801BE45C
  if (crb(c,2)) { goto L_801BE48C; } // 801BE460
  c->r[0]=R32(c->r[1]+0x00000008u); // 801BE464
  cmpu(c,0,c->r[0],0x0000007Fu); // 801BE468
  if (crb(c,1)) { goto L_801BE48C; } // 801BE46C
L_801BE470:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BE470
  c->lr=0x801BE478u; f_801C2E28(c); // 801BE474
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BE478
  c->r[30]=c->r[3]|c->r[3]; // 801BE47C
  if (crb(c,2)) { goto L_801BE48C; } // 801BE480
  c->r[26]=0u+0x00000001u; // 801BE484
  c->r[31]=R32(c->r[13]+0xFFFF9CE0u); // 801BE488
L_801BE48C:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 801BE48C
  c->r[3]=c->r[26]|c->r[26]; // 801BE490
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801BE494
  c->lr=0x801BE49Cu; f_801BDA84(c); // 801BE498
  W32(c->r[29]+0x00000000u,c->r[3]); // 801BE49C
  c->r[11]=c->r[1]+0x00000030u; // 801BE4A0
  c->r[3]=c->r[27]|c->r[27]; // 801BE4A4
  c->lr=0x801BE4ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE4A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BE4AC
  c->lr=c->r[0]; // 801BE4B0
  c->r[1]=c->r[1]+0x00000030u; // 801BE4B4
  return; // 801BE4B8
}

// OSGetFontTexel
void f_801BE4BC(Ctx* __restrict c) {
  trace_call(0x801BE4BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE4BC
  c->r[0]=c->lr; // 801BE4C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE4C4
  c->r[11]=c->r[1]+0x00000050u; // 801BE4C8
  c->lr=0x801BE4D0u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE4CC
  c->r[0]=R16(c->r[13]+0xFFFF8430u); // 801BE4D0
  c->r[29]=c->r[4]|c->r[4]; // 801BE4D4
  c->r[30]=c->r[5]|c->r[5]; // 801BE4D8
  c->r[17]=c->r[6]|c->r[6]; // 801BE4DC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BE4E0
  c->r[31]=c->r[7]|c->r[7]; // 801BE4E4
  if (crb(c,2)) { goto L_801BE4F0; } // 801BE4E8
  goto L_801BE534; // 801BE4EC
L_801BE4F0:;
  c->r[4]=0u+0x80000000u; // 801BE4F0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801BE4F4
  cmps(c,0,(int32_t)c->r[0],0); // 801BE4F8
  if (crb(c,2)) { goto L_801BE508; } // 801BE4FC
  if (crb(c,0)) { goto L_801BE51C; } // 801BE500
  goto L_801BE51C; // 801BE504
L_801BE508:;
  c->r[4]=0u+0xCC000000u; // 801BE508
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801BE50C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 801BE510
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BE514
  goto L_801BE524; // 801BE518
L_801BE51C:;
  c->r[0]=0u+0x00000000u; // 801BE51C
  W16(c->r[13]+0xFFFF8430u,c->r[0]); // 801BE520
L_801BE524:;
  c->r[4]=0u+0x801C0000u; // 801BE524
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE528
  c->r[4]=c->r[4]+0xFFFFE204u; // 801BE52C
  W32(c->r[13]+0xFFFF9CD8u,c->r[4]); // 801BE530
L_801BE534:;
  c->r[12]=R32(c->r[13]+0xFFFF9CD8u); // 801BE534
  c->r[4]=c->r[3]|c->r[3]; // 801BE538
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801BE53C
  c->r[5]=c->r[1]+0x0000000Cu; // 801BE540
  c->r[6]=c->r[1]+0x00000008u; // 801BE544
  c->ctr=c->r[12]; // 801BE548
  if (true) { c->lr=0x801BE550u; dispatch(c,c->ctr); } // 801BE54C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801BE550
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 801BE554
  c->r[0]=sraw(c,c->r[0],3); // 801BE558
  c->r[11]=R32(c->r[1]+0x00000008u); // 801BE55C
  c->r[9]=R16(c->r[4]+0x0000001Au); // 801BE560
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801BE564
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 801BE568
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801BE56C
  c->r[6]=R32(c->r[4]+0x00000024u); // 801BE570
  c->r[23]=c->r[4]+0x0000002Cu; // 801BE574
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 801BE578
  c->r[5]=R32(c->r[4]+0x00000014u); // 801BE57C
  c->r[22]=c->r[4]+c->r[6]; // 801BE580
  c->r[7]=R16(c->r[4]+0x00000012u); // 801BE584
  c->r[6]=R16(c->r[4]+0x00000010u); // 801BE588
  c->r[24]=0u+0x00000000u; // 801BE58C
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 801BE590
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 801BE594
  c->r[11]=c->r[11]-c->r[0]; // 801BE598
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 801BE59C
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 801BE5A0
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 801BE5A4
  c->r[26]=c->r[11]-c->r[9]; // 801BE5A8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801BE5AC
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 801BE5B0
  c->r[22]=c->r[22]+c->r[0]; // 801BE5B4
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 801BE5B8
  goto L_801BE708; // 801BE5BC
L_801BE5C0:;
  c->r[7]=c->r[27]+c->r[24]; // 801BE5C0
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 801BE5C4
  c->r[5]=sraw(c,c->r[7],3); // 801BE5C8
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 801BE5CC
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 801BE5D0
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 801BE5D4
  c->r[5]=sraw(c,c->r[24],3); // 801BE5D8
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 801BE5DC
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 801BE5E0
  c->r[0]=c->r[0]-c->r[4]; // 801BE5E4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 801BE5E8
  c->r[6]=c->r[6]-c->r[7]; // 801BE5EC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801BE5F0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 801BE5F4
  c->r[0]=c->r[0]+c->r[4]; // 801BE5F8
  c->r[4]=c->r[6]+c->r[7]; // 801BE5FC
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801BE600
  c->r[11]=c->r[29]+c->r[5]; // 801BE604
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE608
  c->r[25]=0u+0x00000000u; // 801BE60C
  goto L_801BE6F4; // 801BE610
L_801BE614:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 801BE614
  c->r[28]=c->r[30]+c->r[25]; // 801BE618
  c->r[5]=c->r[26]+c->r[25]; // 801BE61C
  c->r[0]=0u+0x000000F0u; // 801BE620
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 801BE624
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 801BE628
  c->r[4]=c->r[4]+c->r[6]; // 801BE62C
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 801BE630
  c->r[7]=sraw(c,c->r[4],1); // 801BE634
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 801BE638
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 801BE63C
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 801BE640
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 801BE644
  c->r[18]=sraw(c,c->r[5],3); // 801BE648
  c->r[6]=c->r[6]-c->r[4]; // 801BE64C
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 801BE650
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 801BE654
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 801BE658
  c->r[17]=c->r[17]+c->r[4]; // 801BE65C
  c->r[20]=c->r[20]-c->r[19]; // 801BE660
  c->r[21]=c->r[21]^c->r[19]; // 801BE664
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 801BE668
  c->r[18]=sraw(c,c->r[17],2); // 801BE66C
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 801BE670
  c->r[17]=c->r[5]-c->r[4]; // 801BE674
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 801BE678
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 801BE67C
  c->r[20]=c->r[20]+c->r[19]; // 801BE680
  c->r[18]=sraw(c,c->r[28],3); // 801BE684
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 801BE688
  c->r[7]=c->r[22]+c->r[7]; // 801BE68C
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 801BE690
  c->r[7]=c->r[7]+c->r[6]; // 801BE694
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 801BE698
  c->r[7]=c->r[7]+c->r[10]; // 801BE69C
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 801BE6A0
  c->r[28]=c->r[17]+c->r[4]; // 801BE6A4
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 801BE6A8
  c->r[4]=c->r[21]+c->r[20]; // 801BE6AC
  c->r[7]=R8(c->r[7]+c->r[5]); // 801BE6B0
  c->r[6]=c->r[11]+c->r[6]; // 801BE6B4
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801BE6B8
  c->r[4]=sraw(c,c->r[4],1); // 801BE6BC
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 801BE6C0
  c->r[6]=c->r[6]+c->r[12]; // 801BE6C4
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 801BE6C8
  c->r[7]=R8(c->r[6]+c->r[4]); // 801BE6CC
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 801BE6D0
  c->r[5]=R8(c->r[23]+c->r[5]); // 801BE6D4
  if (crb(c,2)) { goto L_801BE6E0; } // 801BE6D8
  c->r[0]=0u+0x0000000Fu; // 801BE6DC
L_801BE6E0:;
  c->r[0]=c->r[5]&c->r[0]; // 801BE6E0
  c->r[25]=c->r[25]+0x00000001u; // 801BE6E4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BE6E8
  c->r[0]=c->r[7]|c->r[0]; // 801BE6EC
  W8(c->r[6]+c->r[4],c->r[0]); // 801BE6F0
L_801BE6F4:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801BE6F4
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BE6F8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801BE6FC
  if (crb(c,0)) { IRQCHK(c); goto L_801BE614; } // 801BE700
  c->r[24]=c->r[24]+0x00000001u; // 801BE704
L_801BE708:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 801BE708
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801BE70C
  if (crb(c,0)) { IRQCHK(c); goto L_801BE5C0; } // 801BE710
  cmps(c,0,(int32_t)c->r[31],0); // 801BE714
  if (crb(c,2)) { goto L_801BE734; } // 801BE718
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801BE71C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801BE720
  c->r[0]=R16(c->r[5]+0x00000022u); // 801BE724
  c->r[0]=c->r[5]+c->r[0]; // 801BE728
  c->r[0]=R8(c->r[4]+c->r[0]); // 801BE72C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801BE730
L_801BE734:;
  c->r[11]=c->r[1]+0x00000050u; // 801BE734
  c->lr=0x801BE73Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE738
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BE73C
  c->lr=c->r[0]; // 801BE740
  c->r[1]=c->r[1]+0x00000050u; // 801BE744
  return; // 801BE748
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_801BE74C(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_801BE760(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_801BE774(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_801BE798(Ctx* __restrict c) {
  trace_call(0x801BE798u);
  c->r[5]=R32(c->r[13]+0xFFFF9CF8u); // 801BE798
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BE79C
  c->r[3]=R32(c->r[5]+c->r[0]); // 801BE7A0
  W32(c->r[5]+c->r[0],c->r[4]); // 801BE7A4
  return; // 801BE7A8
}

// __OSGetInterruptHandler
void f_801BE7AC(Ctx* __restrict c) {
  trace_call(0x801BE7ACu);
  c->r[4]=R32(c->r[13]+0xFFFF9CF8u); // 801BE7AC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BE7B0
  c->r[3]=R32(c->r[4]+c->r[0]); // 801BE7B4
  return; // 801BE7B8
}

// __OSInterruptInit
void f_801BE7BC(Ctx* __restrict c) {
  trace_call(0x801BE7BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE7BC
  c->r[0]=c->lr; // 801BE7C0
  c->r[4]=0u+0x00000000u; // 801BE7C4
  c->r[5]=0u+0x00000080u; // 801BE7C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE7CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE7D0
  c->r[31]=0u+0x80000000u; // 801BE7D4
  c->r[3]=c->r[31]+0x00003040u; // 801BE7D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE7DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE7E0
  W32(c->r[13]+0xFFFF9CF8u,c->r[3]); // 801BE7E4
  c->lr=0x801BE7ECu; f_8000443C(c); // 801BE7E8
  c->r[6]=0u+0x00000000u; // 801BE7EC
  c->r[5]=0u+0x000000F0u; // 801BE7F0
  W32(c->r[31]+0x000000C4u,c->r[6]); // 801BE7F4
  c->r[4]=0u+0xCC000000u; // 801BE7F8
  c->r[0]=0u+0x40000000u; // 801BE7FC
  c->r[3]=0u+0xCD000000u; // 801BE800
  W32(c->r[31]+0x000000C8u,c->r[6]); // 801BE804
  c->r[30]=0u+0xFFFFFFF0u; // 801BE808
  W32(c->r[4]+0x00003004u,c->r[5]); // 801BE80C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BE810
  c->lr=0x801BE818u; f_801BE74C(c); // 801BE814
  c->r[0]=R32(c->r[31]+0x000000C4u); // 801BE818
  c->r[29]=c->r[3]|c->r[3]; // 801BE81C
  c->r[4]=R32(c->r[31]+0x000000C8u); // 801BE820
  c->r[30]=c->r[30]|c->r[0]; // 801BE824
  c->r[0]=~(c->r[0]|c->r[4]); // 801BE828
  W32(c->r[31]+0x000000C4u,c->r[30]); // 801BE82C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 801BE830
  c->r[30]=c->r[30]|c->r[4]; // 801BE834
  goto L_801BE844; // 801BE838
L_801BE83C:;
  c->r[4]=c->r[30]|c->r[30]; // 801BE83C
  c->lr=0x801BE844u; f_801BE880(c); // 801BE840
L_801BE844:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BE844
  if (!crb(c,2)) { IRQCHK(c); goto L_801BE83C; } // 801BE848
  c->r[3]=c->r[29]|c->r[29]; // 801BE84C
  c->lr=0x801BE854u; f_801BE774(c); // 801BE850
  c->r[4]=0u+0x801C0000u; // 801BE854
  c->r[3]=0u+0x00000004u; // 801BE858
  c->r[4]=c->r[4]+0xFFFFEE80u; // 801BE85C
  c->lr=0x801BE864u; f_801B9524(c); // 801BE860
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE864
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE868
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE86C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE870
  c->lr=c->r[0]; // 801BE874
  c->r[1]=c->r[1]+0x00000020u; // 801BE878
  return; // 801BE87C
}

// SetInterruptMask
void f_801BE880(Ctx* __restrict c) {
  trace_call(0x801BE880u);
  c->r[0]=cntlz(c->r[3]); // 801BE880
  cmps(c,0,(int32_t)c->r[0],12); // 801BE884
  if (!crb(c,0)) { goto L_801BE8AC; } // 801BE888
  cmps(c,0,(int32_t)c->r[0],8); // 801BE88C
  if (crb(c,2)) { goto L_801BE95C; } // 801BE890
  if (!crb(c,0)) { goto L_801BE988; } // 801BE894
  cmps(c,0,(int32_t)c->r[0],5); // 801BE898
  if (!crb(c,0)) { goto L_801BE91C; } // 801BE89C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE8A0
  if (!crb(c,0)) { goto L_801BE8CC; } // 801BE8A4
  return; // 801BE8A8
L_801BE8AC:;
  cmps(c,0,(int32_t)c->r[0],17); // 801BE8AC
  if (!crb(c,0)) { goto L_801BE8C0; } // 801BE8B0
  cmps(c,0,(int32_t)c->r[0],15); // 801BE8B4
  if (!crb(c,0)) { goto L_801BEA10; } // 801BE8B8
  goto L_801BE9CC; // 801BE8BC
L_801BE8C0:;
  cmps(c,0,(int32_t)c->r[0],28); // 801BE8C0
  if (!crb(c,0)) return; // 801BE8C4
  goto L_801BEA44; // 801BE8C8
L_801BE8CC:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 801BE8CC
  c->r[5]=0u+0x00000000u; // 801BE8D0
  if (!crb(c,2)) { goto L_801BE8DC; } // 801BE8D4
  c->r[5]=c->r[5]|0x00000001u; // 801BE8D8
L_801BE8DC:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 801BE8DC
  if (!crb(c,2)) { goto L_801BE8E8; } // 801BE8E0
  c->r[5]=c->r[5]|0x00000002u; // 801BE8E4
L_801BE8E8:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 801BE8E8
  if (!crb(c,2)) { goto L_801BE8F4; } // 801BE8EC
  c->r[5]=c->r[5]|0x00000004u; // 801BE8F0
L_801BE8F4:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 801BE8F4
  if (!crb(c,2)) { goto L_801BE900; } // 801BE8F8
  c->r[5]=c->r[5]|0x00000008u; // 801BE8FC
L_801BE900:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 801BE900
  if (!crb(c,2)) { goto L_801BE90C; } // 801BE904
  c->r[5]=c->r[5]|0x00000010u; // 801BE908
L_801BE90C:;
  c->r[4]=0u+0xCC000000u; // 801BE90C
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 801BE910
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 801BE914
  return; // 801BE918
L_801BE91C:;
  c->r[5]=0u+0xCC000000u; // 801BE91C
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 801BE920
  c->r[5]=R16(c->r[5]+0x0000500Au); // 801BE924
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 801BE928
  if (!crb(c,2)) { goto L_801BE934; } // 801BE92C
  c->r[5]=c->r[5]|0x00000010u; // 801BE930
L_801BE934:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 801BE934
  if (!crb(c,2)) { goto L_801BE940; } // 801BE938
  c->r[5]=c->r[5]|0x00000040u; // 801BE93C
L_801BE940:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 801BE940
  if (!crb(c,2)) { goto L_801BE94C; } // 801BE944
  c->r[5]=c->r[5]|0x00000100u; // 801BE948
L_801BE94C:;
  c->r[4]=0u+0xCC000000u; // 801BE94C
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 801BE950
  W16(c->r[4]+0x0000500Au,c->r[5]); // 801BE954
  return; // 801BE958
L_801BE95C:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 801BE95C
  c->r[4]=0u+0xCD000000u; // 801BE960
  c->r[5]=R32(c->r[4]+0x00006C00u); // 801BE964
  c->r[0]=0u+0xFFFFFFD3u; // 801BE968
  c->r[5]=c->r[5]&c->r[0]; // 801BE96C
  if (!crb(c,2)) { goto L_801BE978; } // 801BE970
  c->r[5]=c->r[5]|0x00000004u; // 801BE974
L_801BE978:;
  c->r[4]=0u+0xCD000000u; // 801BE978
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 801BE97C
  W32(c->r[4]+0x00006C00u,c->r[5]); // 801BE980
  return; // 801BE984
L_801BE988:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 801BE988
  c->r[5]=0u+0xCD000000u; // 801BE98C
  c->r[5]=R32(c->r[5]+0x00006800u); // 801BE990
  c->r[0]=0u+0xFFFFD3F0u; // 801BE994
  c->r[5]=c->r[5]&c->r[0]; // 801BE998
  if (!crb(c,2)) { goto L_801BE9A4; } // 801BE99C
  c->r[5]=c->r[5]|0x00000001u; // 801BE9A0
L_801BE9A4:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 801BE9A4
  if (!crb(c,2)) { goto L_801BE9B0; } // 801BE9A8
  c->r[5]=c->r[5]|0x00000004u; // 801BE9AC
L_801BE9B0:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 801BE9B0
  if (!crb(c,2)) { goto L_801BE9BC; } // 801BE9B4
  c->r[5]=c->r[5]|0x00000400u; // 801BE9B8
L_801BE9BC:;
  c->r[4]=0u+0xCD000000u; // 801BE9BC
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 801BE9C0
  W32(c->r[4]+0x00006800u,c->r[5]); // 801BE9C4
  return; // 801BE9C8
L_801BE9CC:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 801BE9CC
  c->r[5]=0u+0xCD000000u; // 801BE9D0
  c->r[5]=R32(c->r[5]+0x00006814u); // 801BE9D4
  c->r[0]=0u+0xFFFFF3F0u; // 801BE9D8
  c->r[5]=c->r[5]&c->r[0]; // 801BE9DC
  if (!crb(c,2)) { goto L_801BE9E8; } // 801BE9E0
  c->r[5]=c->r[5]|0x00000001u; // 801BE9E4
L_801BE9E8:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 801BE9E8
  if (!crb(c,2)) { goto L_801BE9F4; } // 801BE9EC
  c->r[5]=c->r[5]|0x00000004u; // 801BE9F0
L_801BE9F4:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 801BE9F4
  if (!crb(c,2)) { goto L_801BEA00; } // 801BE9F8
  c->r[5]=c->r[5]|0x00000400u; // 801BE9FC
L_801BEA00:;
  c->r[4]=0u+0xCD000000u; // 801BEA00
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 801BEA04
  W32(c->r[4]+0x00006814u,c->r[5]); // 801BEA08
  return; // 801BEA0C
L_801BEA10:;
  c->r[5]=0u+0xCD000000u; // 801BEA10
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 801BEA14
  c->r[5]=R32(c->r[5]+0x00006828u); // 801BEA18
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 801BEA1C
  if (!crb(c,2)) { goto L_801BEA28; } // 801BEA20
  c->r[5]=c->r[5]|0x00000001u; // 801BEA24
L_801BEA28:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 801BEA28
  if (!crb(c,2)) { goto L_801BEA34; } // 801BEA2C
  c->r[5]=c->r[5]|0x00000004u; // 801BEA30
L_801BEA34:;
  c->r[4]=0u+0xCD000000u; // 801BEA34
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 801BEA38
  W32(c->r[4]+0x00006828u,c->r[5]); // 801BEA3C
  return; // 801BEA40
L_801BEA44:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 801BEA44
  c->r[5]=0u+0x000000F0u; // 801BEA48
  if (!crb(c,2)) { goto L_801BEA54; } // 801BEA4C
  c->r[5]=c->r[5]|0x00000800u; // 801BEA50
L_801BEA54:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 801BEA54
  if (!crb(c,2)) { goto L_801BEA60; } // 801BEA58
  c->r[5]=c->r[5]|0x00000008u; // 801BEA5C
L_801BEA60:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801BEA60
  if (!crb(c,2)) { goto L_801BEA6C; } // 801BEA64
  c->r[5]=c->r[5]|0x00000004u; // 801BEA68
L_801BEA6C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 801BEA6C
  if (!crb(c,2)) { goto L_801BEA78; } // 801BEA70
  c->r[5]=c->r[5]|0x00000002u; // 801BEA74
L_801BEA78:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 801BEA78
  if (!crb(c,2)) { goto L_801BEA84; } // 801BEA7C
  c->r[5]=c->r[5]|0x00000001u; // 801BEA80
L_801BEA84:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801BEA84
  if (!crb(c,2)) { goto L_801BEA90; } // 801BEA88
  c->r[5]=c->r[5]|0x00000100u; // 801BEA8C
L_801BEA90:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 801BEA90
  if (!crb(c,2)) { goto L_801BEA9C; } // 801BEA94
  c->r[5]=c->r[5]|0x00001000u; // 801BEA98
L_801BEA9C:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 801BEA9C
  if (!crb(c,2)) { goto L_801BEAA8; } // 801BEAA0
  c->r[5]=c->r[5]|0x00000200u; // 801BEAA4
L_801BEAA8:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 801BEAA8
  if (!crb(c,2)) { goto L_801BEAB4; } // 801BEAAC
  c->r[5]=c->r[5]|0x00000400u; // 801BEAB0
L_801BEAB4:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 801BEAB4
  if (!crb(c,2)) { goto L_801BEAC0; } // 801BEAB8
  c->r[5]=c->r[5]|0x00002000u; // 801BEABC
L_801BEAC0:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801BEAC0
  if (!crb(c,2)) { goto L_801BEACC; } // 801BEAC4
  c->r[5]=c->r[5]|0x00004000u; // 801BEAC8
L_801BEACC:;
  c->r[4]=0u+0xCC000000u; // 801BEACC
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 801BEAD0
  W32(c->r[4]+0x00003004u,c->r[5]); // 801BEAD4
  return; // 801BEAD8
}

// __OSMaskInterrupts
void f_801BEADC(Ctx* __restrict c) {
  trace_call(0x801BEADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEADC
  c->r[0]=c->lr; // 801BEAE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEAE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEAE8
  c->r[31]=c->r[3]|c->r[3]; // 801BEAEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEAF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEAF4
  c->lr=0x801BEAFCu; f_801BE74C(c); // 801BEAF8
  c->r[4]=0u+0x80000000u; // 801BEAFC
  c->r[30]=c->r[3]|c->r[3]; // 801BEB00
  c->r[29]=R32(c->r[4]+0x000000C4u); // 801BEB04
  c->r[5]=R32(c->r[4]+0x000000C8u); // 801BEB08
  c->r[0]=c->r[29]|c->r[5]; // 801BEB0C
  c->r[3]=c->r[31]&~c->r[0]; // 801BEB10
  c->r[31]=c->r[31]|c->r[29]; // 801BEB14
  W32(c->r[4]+0x000000C4u,c->r[31]); // 801BEB18
  c->r[31]=c->r[31]|c->r[5]; // 801BEB1C
  goto L_801BEB2C; // 801BEB20
L_801BEB24:;
  c->r[4]=c->r[31]|c->r[31]; // 801BEB24
  c->lr=0x801BEB2Cu; f_801BE880(c); // 801BEB28
L_801BEB2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BEB2C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEB24; } // 801BEB30
  c->r[3]=c->r[30]|c->r[30]; // 801BEB34
  c->lr=0x801BEB3Cu; f_801BE774(c); // 801BEB38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEB3C
  c->r[3]=c->r[29]|c->r[29]; // 801BEB40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEB44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEB48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEB4C
  c->lr=c->r[0]; // 801BEB50
  c->r[1]=c->r[1]+0x00000020u; // 801BEB54
  return; // 801BEB58
}

// __OSUnmaskInterrupts
void f_801BEB5C(Ctx* __restrict c) {
  trace_call(0x801BEB5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEB5C
  c->r[0]=c->lr; // 801BEB60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEB64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEB68
  c->r[31]=c->r[3]|c->r[3]; // 801BEB6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEB70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEB74
  c->lr=0x801BEB7Cu; f_801BE74C(c); // 801BEB78
  c->r[4]=0u+0x80000000u; // 801BEB7C
  c->r[30]=c->r[3]|c->r[3]; // 801BEB80
  c->r[29]=R32(c->r[4]+0x000000C4u); // 801BEB84
  c->r[5]=R32(c->r[4]+0x000000C8u); // 801BEB88
  c->r[0]=c->r[29]|c->r[5]; // 801BEB8C
  c->r[3]=c->r[31]&c->r[0]; // 801BEB90
  c->r[31]=c->r[29]&~c->r[31]; // 801BEB94
  W32(c->r[4]+0x000000C4u,c->r[31]); // 801BEB98
  c->r[31]=c->r[31]|c->r[5]; // 801BEB9C
  goto L_801BEBAC; // 801BEBA0
L_801BEBA4:;
  c->r[4]=c->r[31]|c->r[31]; // 801BEBA4
  c->lr=0x801BEBACu; f_801BE880(c); // 801BEBA8
L_801BEBAC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BEBAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEBA4; } // 801BEBB0
  c->r[3]=c->r[30]|c->r[30]; // 801BEBB4
  c->lr=0x801BEBBCu; f_801BE774(c); // 801BEBB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEBBC
  c->r[3]=c->r[29]|c->r[29]; // 801BEBC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEBC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEBC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEBCC
  c->lr=c->r[0]; // 801BEBD0
  c->r[1]=c->r[1]+0x00000020u; // 801BEBD4
  return; // 801BEBD8
}

// __OSDispatchInterrupt
void f_801BEBDC(Ctx* __restrict c) {
  trace_call(0x801BEBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEBDC
  c->r[0]=c->lr; // 801BEBE0
  c->r[3]=0u+0xCC000000u; // 801BEBE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEBE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEBEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEBF0
  c->r[30]=c->r[4]|c->r[4]; // 801BEBF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEBF8
  c->r[31]=R32(c->r[3]+0x00003000u); // 801BEBFC
  c->r[0]=R32(c->r[3]+0x00003004u); // 801BEC00
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 801BEC04
  if (crb(c,2)) { goto L_801BEC14; } // 801BEC08
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 801BEC0C
  if (!crb(c,2)) { goto L_801BEC1C; } // 801BEC10
L_801BEC14:;
  c->r[3]=c->r[30]|c->r[30]; // 801BEC14
  c->lr=0x801BEC1Cu; f_801BAEB0(c); // 801BEC18
L_801BEC1C:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 801BEC1C
  c->r[0]=0u+0x00000000u; // 801BEC20
  if (crb(c,2)) { goto L_801BEC6C; } // 801BEC24
  c->r[3]=0u+0xCC000000u; // 801BEC28
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 801BEC2C
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 801BEC30
  if (crb(c,2)) { goto L_801BEC3C; } // 801BEC34
  c->r[0]=c->r[0]|0x80000000u; // 801BEC38
L_801BEC3C:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801BEC3C
  if (crb(c,2)) { goto L_801BEC48; } // 801BEC40
  c->r[0]=c->r[0]|0x40000000u; // 801BEC44
L_801BEC48:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 801BEC48
  if (crb(c,2)) { goto L_801BEC54; } // 801BEC4C
  c->r[0]=c->r[0]|0x20000000u; // 801BEC50
L_801BEC54:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801BEC54
  if (crb(c,2)) { goto L_801BEC60; } // 801BEC58
  c->r[0]=c->r[0]|0x10000000u; // 801BEC5C
L_801BEC60:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 801BEC60
  if (crb(c,2)) { goto L_801BEC6C; } // 801BEC64
  c->r[0]=c->r[0]|0x08000000u; // 801BEC68
L_801BEC6C:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 801BEC6C
  if (crb(c,2)) { goto L_801BECA0; } // 801BEC70
  c->r[3]=0u+0xCC000000u; // 801BEC74
  c->r[4]=R16(c->r[3]+0x0000500Au); // 801BEC78
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801BEC7C
  if (crb(c,2)) { goto L_801BEC88; } // 801BEC80
  c->r[0]=c->r[0]|0x04000000u; // 801BEC84
L_801BEC88:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 801BEC88
  if (crb(c,2)) { goto L_801BEC94; } // 801BEC8C
  c->r[0]=c->r[0]|0x02000000u; // 801BEC90
L_801BEC94:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 801BEC94
  if (crb(c,2)) { goto L_801BECA0; } // 801BEC98
  c->r[0]=c->r[0]|0x01000000u; // 801BEC9C
L_801BECA0:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 801BECA0
  if (crb(c,2)) { goto L_801BECBC; } // 801BECA4
  c->r[3]=0u+0xCD000000u; // 801BECA8
  c->r[3]=R32(c->r[3]+0x00006C00u); // 801BECAC
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 801BECB0
  if (crb(c,2)) { goto L_801BECBC; } // 801BECB4
  c->r[0]=c->r[0]|0x00800000u; // 801BECB8
L_801BECBC:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 801BECBC
  if (crb(c,2)) { goto L_801BED3C; } // 801BECC0
  c->r[3]=0u+0xCD000000u; // 801BECC4
  c->r[4]=R32(c->r[3]+0x00006800u); // 801BECC8
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801BECCC
  if (crb(c,2)) { goto L_801BECD8; } // 801BECD0
  c->r[0]=c->r[0]|0x00400000u; // 801BECD4
L_801BECD8:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801BECD8
  if (crb(c,2)) { goto L_801BECE4; } // 801BECDC
  c->r[0]=c->r[0]|0x00200000u; // 801BECE0
L_801BECE4:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 801BECE4
  if (crb(c,2)) { goto L_801BECF0; } // 801BECE8
  c->r[0]=c->r[0]|0x00100000u; // 801BECEC
L_801BECF0:;
  c->r[3]=0u+0xCD000000u; // 801BECF0
  c->r[4]=R32(c->r[3]+0x00006814u); // 801BECF4
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801BECF8
  if (crb(c,2)) { goto L_801BED04; } // 801BECFC
  c->r[0]=c->r[0]|0x00080000u; // 801BED00
L_801BED04:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801BED04
  if (crb(c,2)) { goto L_801BED10; } // 801BED08
  c->r[0]=c->r[0]|0x00040000u; // 801BED0C
L_801BED10:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 801BED10
  if (crb(c,2)) { goto L_801BED1C; } // 801BED14
  c->r[0]=c->r[0]|0x00020000u; // 801BED18
L_801BED1C:;
  c->r[3]=0u+0xCD000000u; // 801BED1C
  c->r[4]=R32(c->r[3]+0x00006828u); // 801BED20
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 801BED24
  if (crb(c,2)) { goto L_801BED30; } // 801BED28
  c->r[0]=c->r[0]|0x00010000u; // 801BED2C
L_801BED30:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 801BED30
  if (crb(c,2)) { goto L_801BED3C; } // 801BED34
  c->r[0]=c->r[0]|0x00008000u; // 801BED38
L_801BED3C:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 801BED3C
  if (crb(c,2)) { goto L_801BED48; } // 801BED40
  c->r[0]=c->r[0]|0x00000020u; // 801BED44
L_801BED48:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 801BED48
  if (crb(c,2)) { goto L_801BED54; } // 801BED4C
  c->r[0]=c->r[0]|0x00000040u; // 801BED50
L_801BED54:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 801BED54
  if (crb(c,2)) { goto L_801BED60; } // 801BED58
  c->r[0]=c->r[0]|0x00001000u; // 801BED5C
L_801BED60:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 801BED60
  if (crb(c,2)) { goto L_801BED6C; } // 801BED64
  c->r[0]=c->r[0]|0x00002000u; // 801BED68
L_801BED6C:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 801BED6C
  if (crb(c,2)) { goto L_801BED78; } // 801BED70
  c->r[0]=c->r[0]|0x00000080u; // 801BED74
L_801BED78:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 801BED78
  if (crb(c,2)) { goto L_801BED84; } // 801BED7C
  c->r[0]=c->r[0]|0x00000800u; // 801BED80
L_801BED84:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 801BED84
  if (crb(c,2)) { goto L_801BED90; } // 801BED88
  c->r[0]=c->r[0]|0x00000400u; // 801BED8C
L_801BED90:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 801BED90
  if (crb(c,2)) { goto L_801BED9C; } // 801BED94
  c->r[0]=c->r[0]|0x00000200u; // 801BED98
L_801BED9C:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 801BED9C
  if (crb(c,2)) { goto L_801BEDA8; } // 801BEDA0
  c->r[0]=c->r[0]|0x00004000u; // 801BEDA4
L_801BEDA8:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 801BEDA8
  if (crb(c,2)) { goto L_801BEDB4; } // 801BEDAC
  c->r[0]=c->r[0]|0x00000100u; // 801BEDB0
L_801BEDB4:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 801BEDB4
  if (crb(c,2)) { goto L_801BEDC0; } // 801BEDB8
  c->r[0]=c->r[0]|0x00000010u; // 801BEDBC
L_801BEDC0:;
  c->r[3]=0u+0x80000000u; // 801BEDC0
  c->r[4]=R32(c->r[3]+0x000000C4u); // 801BEDC4
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801BEDC8
  c->r[3]=c->r[4]|c->r[3]; // 801BEDCC
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 801BEDD0
  if (crb(c,2)) { goto L_801BEE5C; } // 801BEDD4
  c->r[4]=0u+0x804A0000u; // 801BEDD8
  c->r[4]=c->r[4]+0x00003C60u; // 801BEDDC
L_801BEDE0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BEDE0
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801BEDE4
  if (crb(c,2)) { goto L_801BEDF8; } // 801BEDE8
  c->r[0]=cntlz(c->r[0]); // 801BEDEC
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801BEDF0
  goto L_801BEE00; // 801BEDF4
L_801BEDF8:;
  c->r[4]=c->r[4]+0x00000004u; // 801BEDF8
  IRQCHK(c); goto L_801BEDE0; // 801BEDFC
L_801BEE00:;
  c->r[3]=R32(c->r[13]+0xFFFF9CF8u); // 801BEE00
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801BEE04
  c->r[31]=R32(c->r[3]+c->r[0]); // 801BEE08
  cmps(c,0,(int32_t)c->r[31],0); // 801BEE0C
  if (crb(c,2)) { goto L_801BEE5C; } // 801BEE10
  cmps(c,0,(int32_t)c->r[29],4); // 801BEE14
  if (!crb(c,1)) { goto L_801BEE34; } // 801BEE18
  W16(c->r[13]+0xFFFF9CECu,c->r[29]); // 801BEE1C
  c->lr=0x801BEE24u; f_801C257C(c); // 801BEE20
  W32(c->r[13]+0xFFFF9CF4u,c->r[4]); // 801BEE24
  W32(c->r[13]+0xFFFF9CF0u,c->r[3]); // 801BEE28
  c->r[0]=R32(c->r[30]+0x00000198u); // 801BEE2C
  W32(c->r[13]+0xFFFF9CE8u,c->r[0]); // 801BEE30
L_801BEE34:;
  c->lr=0x801BEE38u; f_801C11DC(c); // 801BEE34
  c->r[12]=c->r[31]|c->r[31]; // 801BEE38
  c->r[3]=c->r[29]|c->r[29]; // 801BEE3C
  c->r[4]=c->r[30]|c->r[30]; // 801BEE40
  c->ctr=c->r[12]; // 801BEE44
  if (true) { c->lr=0x801BEE4Cu; dispatch(c,c->ctr); } // 801BEE48
  c->lr=0x801BEE50u; f_801C1218(c); // 801BEE4C
  c->lr=0x801BEE54u; f_801C1724(c); // 801BEE50
  c->r[3]=c->r[30]|c->r[30]; // 801BEE54
  c->lr=0x801BEE5Cu; f_801BAEB0(c); // 801BEE58
L_801BEE5C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BEE5C
  c->lr=0x801BEE64u; f_801BAEB0(c); // 801BEE60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEE64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEE68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEE6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEE70
  c->lr=c->r[0]; // 801BEE74
  c->r[1]=c->r[1]+0x00000020u; // 801BEE78
  return; // 801BEE7C
}

// fn_801BEE80
void f_801BEE80(Ctx* __restrict c) {
  trace_call(0x801BEE80u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BEE80
  W32(c->r[4]+0x00000004u,c->r[1]); // 801BEE84
  W32(c->r[4]+0x00000008u,c->r[2]); // 801BEE88
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BEE8C
  c->r[0]=mfspr(c,913); // 801BEE90
  W32(c->r[4]+0x000001A8u,c->r[0]); // 801BEE94
  c->r[0]=mfspr(c,914); // 801BEE98
  W32(c->r[4]+0x000001ACu,c->r[0]); // 801BEE9C
  c->r[0]=mfspr(c,915); // 801BEEA0
  W32(c->r[4]+0x000001B0u,c->r[0]); // 801BEEA4
  c->r[0]=mfspr(c,916); // 801BEEA8
  W32(c->r[4]+0x000001B4u,c->r[0]); // 801BEEAC
  c->r[0]=mfspr(c,917); // 801BEEB0
  W32(c->r[4]+0x000001B8u,c->r[0]); // 801BEEB4
  c->r[0]=mfspr(c,918); // 801BEEB8
  W32(c->r[4]+0x000001BCu,c->r[0]); // 801BEEBC
  c->r[0]=mfspr(c,919); // 801BEEC0
  W32(c->r[4]+0x000001C0u,c->r[0]); // 801BEEC4
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEEC8
  f_801BEBDC(c); return; // 801BEECC
}

// __OSModuleInit
void f_801BEED0(Ctx* __restrict c) {
  trace_call(0x801BEED0u);
  c->r[0]=0u+0x00000000u; // 801BEED0
  c->r[3]=0u+0x80000000u; // 801BEED4
  W32(c->r[3]+0x000030CCu,c->r[0]); // 801BEED8
  W32(c->r[3]+0x000030C8u,c->r[0]); // 801BEEDC
  W32(c->r[3]+0x000030D0u,c->r[0]); // 801BEEE0
  return; // 801BEEE4
}

// OSInitMessageQueue
void f_801BEEE8(Ctx* __restrict c) {
  trace_call(0x801BEEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEEE8
  c->r[0]=c->lr; // 801BEEEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEEF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEEF4
  c->r[31]=c->r[5]|c->r[5]; // 801BEEF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEEFC
  c->r[30]=c->r[4]|c->r[4]; // 801BEF00
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEF04
  c->r[29]=c->r[3]|c->r[3]; // 801BEF08
  c->lr=0x801BEF10u; f_801C1194(c); // 801BEF0C
  c->r[3]=c->r[29]+0x00000008u; // 801BEF10
  c->lr=0x801BEF18u; f_801C1194(c); // 801BEF14
  c->r[0]=0u+0x00000000u; // 801BEF18
  W32(c->r[29]+0x00000010u,c->r[30]); // 801BEF1C
  W32(c->r[29]+0x00000014u,c->r[31]); // 801BEF20
  W32(c->r[29]+0x00000018u,c->r[0]); // 801BEF24
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801BEF28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEF2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEF30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEF34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEF38
  c->lr=c->r[0]; // 801BEF3C
  c->r[1]=c->r[1]+0x00000020u; // 801BEF40
  return; // 801BEF44
}

// OSSendMessage
void f_801BEF48(Ctx* __restrict c) {
  trace_call(0x801BEF48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEF48
  c->r[0]=c->lr; // 801BEF4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEF50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEF54
  c->r[31]=c->r[5]|c->r[5]; // 801BEF58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEF5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEF60
  c->r[29]=c->r[4]|c->r[4]; // 801BEF64
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BEF68
  c->r[28]=c->r[3]|c->r[3]; // 801BEF6C
  c->lr=0x801BEF74u; f_801BE74C(c); // 801BEF70
  c->r[30]=c->r[3]|c->r[3]; // 801BEF74
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 801BEF78
  goto L_801BEFA0; // 801BEF7C
L_801BEF80:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BEF80
  if (!crb(c,2)) { goto L_801BEF98; } // 801BEF84
  c->r[3]=c->r[30]|c->r[30]; // 801BEF88
  c->lr=0x801BEF90u; f_801BE774(c); // 801BEF8C
  c->r[3]=0u+0x00000000u; // 801BEF90
  goto L_801BEFF0; // 801BEF94
L_801BEF98:;
  c->r[3]=c->r[28]|c->r[28]; // 801BEF98
  c->lr=0x801BEFA0u; f_801C21D0(c); // 801BEF9C
L_801BEFA0:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801BEFA0
  c->r[6]=R32(c->r[28]+0x00000014u); // 801BEFA4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 801BEFA8
  if (!crb(c,1)) { IRQCHK(c); goto L_801BEF80; } // 801BEFAC
  c->r[0]=R32(c->r[28]+0x00000018u); // 801BEFB0
  c->r[3]=c->r[28]+0x00000008u; // 801BEFB4
  c->r[5]=R32(c->r[28]+0x00000010u); // 801BEFB8
  c->r[4]=c->r[0]+c->r[4]; // 801BEFBC
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 801BEFC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 801BEFC4
  c->r[0]=c->r[4]-c->r[0]; // 801BEFC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BEFCC
  W32(c->r[5]+c->r[0],c->r[29]); // 801BEFD0
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801BEFD4
  c->r[0]=c->r[4]+0x00000001u; // 801BEFD8
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 801BEFDC
  c->lr=0x801BEFE4u; f_801C22BC(c); // 801BEFE0
  c->r[3]=c->r[30]|c->r[30]; // 801BEFE4
  c->lr=0x801BEFECu; f_801BE774(c); // 801BEFE8
  c->r[3]=0u+0x00000001u; // 801BEFEC
L_801BEFF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEFF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEFF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEFF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEFFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BF000
  c->lr=c->r[0]; // 801BF004
  c->r[1]=c->r[1]+0x00000020u; // 801BF008
  return; // 801BF00C
}

// fn_801BF010
void f_801BF010(Ctx* __restrict c) {
  trace_call(0x801BF010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF010
  c->r[0]=c->lr; // 801BF014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF01C
  c->r[31]=c->r[3]|c->r[3]; // 801BF020
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF024
  c->r[30]=c->r[5]|c->r[5]; // 801BF028
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BF02C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BF030
  c->r[28]=c->r[4]|c->r[4]; // 801BF034
  c->lr=0x801BF03Cu; f_801BE74C(c); // 801BF038
  c->r[29]=c->r[3]|c->r[3]; // 801BF03C
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 801BF040
  goto L_801BF068; // 801BF044
L_801BF048:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BF048
  if (!crb(c,2)) { goto L_801BF060; } // 801BF04C
  c->r[3]=c->r[29]|c->r[29]; // 801BF050
  c->lr=0x801BF058u; f_801BE774(c); // 801BF054
  c->r[3]=0u+0x00000000u; // 801BF058
  goto L_801BF0CC; // 801BF05C
L_801BF060:;
  c->r[3]=c->r[31]+0x00000008u; // 801BF060
  c->lr=0x801BF068u; f_801C21D0(c); // 801BF064
L_801BF068:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801BF068
  cmps(c,0,(int32_t)c->r[0],0); // 801BF06C
  if (crb(c,2)) { IRQCHK(c); goto L_801BF048; } // 801BF070
  cmps(c,0,(int32_t)c->r[28],0); // 801BF074
  if (crb(c,2)) { goto L_801BF090; } // 801BF078
  c->r[0]=R32(c->r[31]+0x00000018u); // 801BF07C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801BF080
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BF084
  c->r[0]=R32(c->r[3]+c->r[0]); // 801BF088
  W32(c->r[28]+0x00000000u,c->r[0]); // 801BF08C
L_801BF090:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 801BF090
  c->r[3]=c->r[31]|c->r[31]; // 801BF094
  c->r[6]=R32(c->r[31]+0x00000014u); // 801BF098
  c->r[7]=c->r[4]+0x00000001u; // 801BF09C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801BF0A0
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 801BF0A4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801BF0A8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801BF0AC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801BF0B0
  c->r[0]=c->r[7]-c->r[0]; // 801BF0B4
  W32(c->r[31]+0x00000018u,c->r[0]); // 801BF0B8
  c->lr=0x801BF0C0u; f_801C22BC(c); // 801BF0BC
  c->r[3]=c->r[29]|c->r[29]; // 801BF0C0
  c->lr=0x801BF0C8u; f_801BE774(c); // 801BF0C4
  c->r[3]=0u+0x00000001u; // 801BF0C8
L_801BF0CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF0CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF0D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF0D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF0D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BF0DC
  c->lr=c->r[0]; // 801BF0E0
  c->r[1]=c->r[1]+0x00000020u; // 801BF0E4
  return; // 801BF0E8
  c->r[3]=0u+0x80000000u; // 801BF0EC
  c->r[3]=R32(c->r[3]+0x00003100u); // 801BF0F0
  return; // 801BF0F4
}

// OSGetPhysicalMem2Size
void f_801BF0F8(Ctx* __restrict c) {
  trace_call(0x801BF0F8u);
  c->r[3]=0u+0x80000000u; // 801BF0F8
  c->r[3]=R32(c->r[3]+0x00003118u); // 801BF0FC
  return; // 801BF100
}

// OSGetConsoleSimulatedMem1Size
void f_801BF104(Ctx* __restrict c) {
  trace_call(0x801BF104u);
  c->r[3]=0u+0x80000000u; // 801BF104
  c->r[3]=R32(c->r[3]+0x00003104u); // 801BF108
  return; // 801BF10C
}

// OSGetConsoleSimulatedMem2Size
void f_801BF110(Ctx* __restrict c) {
  trace_call(0x801BF110u);
  c->r[3]=0u+0x80000000u; // 801BF110
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 801BF114
  return; // 801BF118
}

// OnShutdown
void f_801BF11C(Ctx* __restrict c) {
  trace_call(0x801BF11Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF11C
  c->r[0]=c->lr; // 801BF120
  cmps(c,0,(int32_t)c->r[3],0); // 801BF124
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF128
  if (crb(c,2)) { goto L_801BF144; } // 801BF12C
  c->r[0]=0u+0x000000FFu; // 801BF130
  c->r[3]=0u+0xCC000000u; // 801BF134
  W16(c->r[3]+0x00004010u,c->r[0]); // 801BF138
  c->r[3]=0u+0xF0000000u; // 801BF13C
  c->lr=0x801BF144u; f_801BEADC(c); // 801BF140
L_801BF144:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF144
  c->r[3]=0u+0x00000001u; // 801BF148
  c->lr=c->r[0]; // 801BF14C
  c->r[1]=c->r[1]+0x00000010u; // 801BF150
  return; // 801BF154
}

// MEMIntrruptHandler
void f_801BF158(Ctx* __restrict c) {
  trace_call(0x801BF158u);
  c->r[8]=0u+0xCC000000u; // 801BF158
  c->r[3]=0u+0x80560000u; // 801BF15C
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 801BF160
  c->r[0]=0u+0x00000000u; // 801BF164
  c->r[7]=R16(c->r[8]+0x00004024u); // 801BF168
  c->r[3]=c->r[3]+0xFFFF8C50u; // 801BF16C
  c->r[6]=R16(c->r[8]+0x00004022u); // 801BF170
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 801BF174
  W16(c->r[8]+0x00004020u,c->r[0]); // 801BF178
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 801BF17C
  cmps(c,0,(int32_t)c->r[12],0); // 801BF180
  if (crb(c,2)) { goto L_801BF198; } // 801BF184
  c->r[3]=0u+0x0000000Fu; // 801BF188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF18C
  c->ctr=c->r[12]; // 801BF190
  if (true) { dispatch(c,c->ctr); return; } // 801BF194
L_801BF198:;
  c->r[3]=0u+0x0000000Fu; // 801BF198
  f_801BB840(c); return; // 801BF19C
}

// fn_801BF1A0
void f_801BF1A0(Ctx* __restrict c) {
  trace_call(0x801BF1A0u);
  c->r[7]=0u+0x00000000u; // 801BF1A0
  c->r[4]=0u+0x00000000u; // 801BF1A4
  c->r[4]=c->r[4]+0x00000002u; // 801BF1A8
  c->r[3]=0u+0x80000000u; // 801BF1AC
  c->r[3]=c->r[3]+0x000001FFu; // 801BF1B0
  c->r[6]=0u+0x01000000u; // 801BF1B4
  c->r[6]=c->r[6]+0x00000002u; // 801BF1B8
  c->r[5]=0u+0x81000000u; // 801BF1BC
  c->r[5]=c->r[5]+0x000000FFu; // 801BF1C0
  /* isync */ // 801BF1C4
  mtspr(c,536,c->r[7]); // 801BF1C8
  mtspr(c,537,c->r[4]); // 801BF1CC
  mtspr(c,536,c->r[3]); // 801BF1D0
  /* isync */ // 801BF1D4
  mtspr(c,528,c->r[7]); // 801BF1D8
  mtspr(c,529,c->r[4]); // 801BF1DC
  mtspr(c,528,c->r[3]); // 801BF1E0
  /* isync */ // 801BF1E4
  mtspr(c,540,c->r[7]); // 801BF1E8
  mtspr(c,541,c->r[6]); // 801BF1EC
  mtspr(c,540,c->r[5]); // 801BF1F0
  /* isync */ // 801BF1F4
  mtspr(c,532,c->r[7]); // 801BF1F8
  mtspr(c,533,c->r[6]); // 801BF1FC
  mtspr(c,532,c->r[5]); // 801BF200
  /* isync */ // 801BF204
  c->r[3]=c->msr; // 801BF208
  c->r[3]=c->r[3]|0x00000030u; // 801BF20C
  mtspr(c,27,c->r[3]); // 801BF210
  c->r[3]=c->lr; // 801BF214
  mtspr(c,26,c->r[3]); // 801BF218
  return; /* rfi */ // 801BF21C
  f_801BF220(c);
}

// fn_801BF220
void f_801BF220(Ctx* __restrict c) {
  trace_call(0x801BF220u);
  c->r[7]=0u+0x00000000u; // 801BF220
  c->r[4]=0u+0x00000000u; // 801BF224
  c->r[4]=c->r[4]+0x00000002u; // 801BF228
  c->r[3]=0u+0x80000000u; // 801BF22C
  c->r[3]=c->r[3]+0x000003FFu; // 801BF230
  c->r[6]=0u+0x02000000u; // 801BF234
  c->r[6]=c->r[6]+0x00000002u; // 801BF238
  c->r[5]=0u+0x82000000u; // 801BF23C
  c->r[5]=c->r[5]+0x000001FFu; // 801BF240
  /* isync */ // 801BF244
  mtspr(c,536,c->r[7]); // 801BF248
  mtspr(c,537,c->r[4]); // 801BF24C
  mtspr(c,536,c->r[3]); // 801BF250
  /* isync */ // 801BF254
  mtspr(c,528,c->r[7]); // 801BF258
  mtspr(c,529,c->r[4]); // 801BF25C
  mtspr(c,528,c->r[3]); // 801BF260
  /* isync */ // 801BF264
  mtspr(c,540,c->r[7]); // 801BF268
  mtspr(c,541,c->r[6]); // 801BF26C
  mtspr(c,540,c->r[5]); // 801BF270
  /* isync */ // 801BF274
  mtspr(c,532,c->r[7]); // 801BF278
  mtspr(c,533,c->r[6]); // 801BF27C
  mtspr(c,532,c->r[5]); // 801BF280
  /* isync */ // 801BF284
  c->r[3]=c->msr; // 801BF288
  c->r[3]=c->r[3]|0x00000030u; // 801BF28C
  mtspr(c,27,c->r[3]); // 801BF290
  c->r[3]=c->lr; // 801BF294
  mtspr(c,26,c->r[3]); // 801BF298
  return; /* rfi */ // 801BF29C
  f_801BF2A0(c);
}

// fn_801BF2A0
void f_801BF2A0(Ctx* __restrict c) {
  trace_call(0x801BF2A0u);
  c->r[7]=0u+0x00000000u; // 801BF2A0
  c->r[4]=0u+0x10000000u; // 801BF2A4
  c->r[4]=c->r[4]+0x00000002u; // 801BF2A8
  c->r[3]=0u+0x90000000u; // 801BF2AC
  c->r[3]=c->r[3]+0x000003FFu; // 801BF2B0
  c->r[6]=0u+0x10000000u; // 801BF2B4
  c->r[6]=c->r[6]+0x0000002Au; // 801BF2B8
  c->r[5]=0u+0xD0000000u; // 801BF2BC
  c->r[5]=c->r[5]+0x000007FFu; // 801BF2C0
  /* isync */ // 801BF2C4
  mtspr(c,568,c->r[7]); // 801BF2C8
  mtspr(c,569,c->r[4]); // 801BF2CC
  mtspr(c,568,c->r[3]); // 801BF2D0
  /* isync */ // 801BF2D4
  mtspr(c,560,c->r[7]); // 801BF2D8
  mtspr(c,561,c->r[4]); // 801BF2DC
  mtspr(c,560,c->r[3]); // 801BF2E0
  /* isync */ // 801BF2E4
  mtspr(c,570,c->r[7]); // 801BF2E8
  mtspr(c,571,c->r[6]); // 801BF2EC
  mtspr(c,570,c->r[5]); // 801BF2F0
  /* isync */ // 801BF2F4
  mtspr(c,562,c->r[7]); // 801BF2F8
  mtspr(c,563,c->r[7]); // 801BF2FC
  /* isync */ // 801BF300
  c->r[4]=0u+0x12000000u; // 801BF304
  c->r[4]=c->r[4]+0x00000002u; // 801BF308
  c->r[3]=0u+0x92000000u; // 801BF30C
  c->r[3]=c->r[3]+0x000001FFu; // 801BF310
  c->r[6]=0u+0x13000000u; // 801BF314
  c->r[6]=c->r[6]+0x00000002u; // 801BF318
  c->r[5]=0u+0x93000000u; // 801BF31C
  c->r[5]=c->r[5]+0x0000007Fu; // 801BF320
  /* isync */ // 801BF324
  mtspr(c,572,c->r[7]); // 801BF328
  mtspr(c,573,c->r[4]); // 801BF32C
  mtspr(c,572,c->r[3]); // 801BF330
  /* isync */ // 801BF334
  mtspr(c,564,c->r[7]); // 801BF338
  mtspr(c,565,c->r[4]); // 801BF33C
  mtspr(c,564,c->r[3]); // 801BF340
  /* isync */ // 801BF344
  mtspr(c,574,c->r[7]); // 801BF348
  mtspr(c,575,c->r[6]); // 801BF34C
  mtspr(c,574,c->r[5]); // 801BF350
  /* isync */ // 801BF354
  mtspr(c,566,c->r[7]); // 801BF358
  mtspr(c,567,c->r[6]); // 801BF35C
  mtspr(c,566,c->r[5]); // 801BF360
  /* isync */ // 801BF364
  c->r[3]=c->msr; // 801BF368
  c->r[3]=c->r[3]|0x00000030u; // 801BF36C
  mtspr(c,27,c->r[3]); // 801BF370
  c->r[3]=c->lr; // 801BF374
  mtspr(c,26,c->r[3]); // 801BF378
  return; /* rfi */ // 801BF37C
  f_801BF380(c);
}

// fn_801BF380
void f_801BF380(Ctx* __restrict c) {
  trace_call(0x801BF380u);
  c->r[7]=0u+0x00000000u; // 801BF380
  c->r[4]=0u+0x10000000u; // 801BF384
  c->r[4]=c->r[4]+0x00000002u; // 801BF388
  c->r[3]=0u+0x90000000u; // 801BF38C
  c->r[3]=c->r[3]+0x000003FFu; // 801BF390
  c->r[6]=0u+0x10000000u; // 801BF394
  c->r[6]=c->r[6]+0x0000002Au; // 801BF398
  c->r[5]=0u+0xD0000000u; // 801BF39C
  c->r[5]=c->r[5]+0x000007FFu; // 801BF3A0
  /* isync */ // 801BF3A4
  mtspr(c,568,c->r[7]); // 801BF3A8
  mtspr(c,569,c->r[4]); // 801BF3AC
  mtspr(c,568,c->r[3]); // 801BF3B0
  /* isync */ // 801BF3B4
  mtspr(c,560,c->r[7]); // 801BF3B8
  mtspr(c,561,c->r[4]); // 801BF3BC
  mtspr(c,560,c->r[3]); // 801BF3C0
  /* isync */ // 801BF3C4
  mtspr(c,570,c->r[7]); // 801BF3C8
  mtspr(c,571,c->r[6]); // 801BF3CC
  mtspr(c,570,c->r[5]); // 801BF3D0
  /* isync */ // 801BF3D4
  mtspr(c,562,c->r[7]); // 801BF3D8
  mtspr(c,563,c->r[7]); // 801BF3DC
  /* isync */ // 801BF3E0
  c->r[4]=0u+0x12000000u; // 801BF3E4
  c->r[4]=c->r[4]+0x00000002u; // 801BF3E8
  c->r[3]=0u+0x92000000u; // 801BF3EC
  c->r[3]=c->r[3]+0x000001FFu; // 801BF3F0
  c->r[6]=0u+0x13000000u; // 801BF3F4
  c->r[6]=c->r[6]+0x00000002u; // 801BF3F8
  c->r[5]=0u+0x93000000u; // 801BF3FC
  c->r[5]=c->r[5]+0x000000FFu; // 801BF400
  /* isync */ // 801BF404
  mtspr(c,572,c->r[7]); // 801BF408
  mtspr(c,573,c->r[4]); // 801BF40C
  mtspr(c,572,c->r[3]); // 801BF410
  /* isync */ // 801BF414
  mtspr(c,564,c->r[7]); // 801BF418
  mtspr(c,565,c->r[4]); // 801BF41C
  mtspr(c,564,c->r[3]); // 801BF420
  /* isync */ // 801BF424
  mtspr(c,574,c->r[7]); // 801BF428
  mtspr(c,575,c->r[6]); // 801BF42C
  mtspr(c,574,c->r[5]); // 801BF430
  /* isync */ // 801BF434
  mtspr(c,566,c->r[7]); // 801BF438
  mtspr(c,567,c->r[6]); // 801BF43C
  mtspr(c,566,c->r[5]); // 801BF440
  /* isync */ // 801BF444
  c->r[3]=c->msr; // 801BF448
  c->r[3]=c->r[3]|0x00000030u; // 801BF44C
  mtspr(c,27,c->r[3]); // 801BF450
  c->r[3]=c->lr; // 801BF454
  mtspr(c,26,c->r[3]); // 801BF458
  return; /* rfi */ // 801BF45C
  f_801BF460(c);
}

// fn_801BF460
void f_801BF460(Ctx* __restrict c) {
  trace_call(0x801BF460u);
  c->r[7]=0u+0x00000000u; // 801BF460
  c->r[4]=0u+0x10000000u; // 801BF464
  c->r[4]=c->r[4]+0x00000002u; // 801BF468
  c->r[3]=0u+0x90000000u; // 801BF46C
  c->r[3]=c->r[3]+0x000007FFu; // 801BF470
  c->r[6]=0u+0x10000000u; // 801BF474
  c->r[6]=c->r[6]+0x0000002Au; // 801BF478
  c->r[5]=0u+0xD0000000u; // 801BF47C
  c->r[5]=c->r[5]+0x000007FFu; // 801BF480
  /* isync */ // 801BF484
  mtspr(c,568,c->r[7]); // 801BF488
  mtspr(c,569,c->r[4]); // 801BF48C
  mtspr(c,568,c->r[3]); // 801BF490
  /* isync */ // 801BF494
  mtspr(c,560,c->r[7]); // 801BF498
  mtspr(c,561,c->r[4]); // 801BF49C
  mtspr(c,560,c->r[3]); // 801BF4A0
  /* isync */ // 801BF4A4
  mtspr(c,570,c->r[7]); // 801BF4A8
  mtspr(c,571,c->r[6]); // 801BF4AC
  mtspr(c,570,c->r[5]); // 801BF4B0
  /* isync */ // 801BF4B4
  mtspr(c,562,c->r[7]); // 801BF4B8
  mtspr(c,563,c->r[7]); // 801BF4BC
  /* isync */ // 801BF4C0
  mtspr(c,564,c->r[7]); // 801BF4C4
  mtspr(c,565,c->r[7]); // 801BF4C8
  /* isync */ // 801BF4CC
  mtspr(c,566,c->r[7]); // 801BF4D0
  mtspr(c,567,c->r[7]); // 801BF4D4
  /* isync */ // 801BF4D8
  mtspr(c,572,c->r[7]); // 801BF4DC
  mtspr(c,573,c->r[7]); // 801BF4E0
  /* isync */ // 801BF4E4
  mtspr(c,574,c->r[7]); // 801BF4E8
  mtspr(c,575,c->r[7]); // 801BF4EC
  /* isync */ // 801BF4F0
  c->r[3]=c->msr; // 801BF4F4
  c->r[3]=c->r[3]|0x00000030u; // 801BF4F8
  mtspr(c,27,c->r[3]); // 801BF4FC
  c->r[3]=c->lr; // 801BF500
  mtspr(c,26,c->r[3]); // 801BF504
  return; /* rfi */ // 801BF508
  f_801BF50C(c);
}

// fn_801BF50C
void f_801BF50C(Ctx* __restrict c) {
  trace_call(0x801BF50Cu);
  c->r[7]=0u+0x00000000u; // 801BF50C
  c->r[4]=0u+0x10000000u; // 801BF510
  c->r[4]=c->r[4]+0x00000002u; // 801BF514
  c->r[3]=0u+0x90000000u; // 801BF518
  c->r[3]=c->r[3]+0x000007FFu; // 801BF51C
  c->r[6]=0u+0x10000000u; // 801BF520
  c->r[6]=c->r[6]+0x0000002Au; // 801BF524
  c->r[5]=0u+0xD0000000u; // 801BF528
  c->r[5]=c->r[5]+0x00000FFFu; // 801BF52C
  /* isync */ // 801BF530
  mtspr(c,568,c->r[7]); // 801BF534
  mtspr(c,569,c->r[4]); // 801BF538
  mtspr(c,568,c->r[3]); // 801BF53C
  /* isync */ // 801BF540
  mtspr(c,560,c->r[7]); // 801BF544
  mtspr(c,561,c->r[4]); // 801BF548
  mtspr(c,560,c->r[3]); // 801BF54C
  /* isync */ // 801BF550
  mtspr(c,570,c->r[7]); // 801BF554
  mtspr(c,571,c->r[6]); // 801BF558
  mtspr(c,570,c->r[5]); // 801BF55C
  /* isync */ // 801BF560
  mtspr(c,562,c->r[7]); // 801BF564
  mtspr(c,563,c->r[7]); // 801BF568
  /* isync */ // 801BF56C
  c->r[4]=0u+0x14000000u; // 801BF570
  c->r[4]=c->r[4]+0x00000002u; // 801BF574
  c->r[3]=0u+0x94000000u; // 801BF578
  c->r[3]=c->r[3]+0x000003FFu; // 801BF57C
  c->r[6]=0u+0x16000000u; // 801BF580
  c->r[6]=c->r[6]+0x00000002u; // 801BF584
  c->r[5]=0u+0x96000000u; // 801BF588
  c->r[5]=c->r[5]+0x000001FFu; // 801BF58C
  /* isync */ // 801BF590
  mtspr(c,572,c->r[7]); // 801BF594
  mtspr(c,573,c->r[4]); // 801BF598
  mtspr(c,572,c->r[3]); // 801BF59C
  /* isync */ // 801BF5A0
  mtspr(c,564,c->r[7]); // 801BF5A4
  mtspr(c,565,c->r[4]); // 801BF5A8
  mtspr(c,564,c->r[3]); // 801BF5AC
  /* isync */ // 801BF5B0
  mtspr(c,574,c->r[7]); // 801BF5B4
  mtspr(c,575,c->r[6]); // 801BF5B8
  mtspr(c,574,c->r[5]); // 801BF5BC
  /* isync */ // 801BF5C0
  mtspr(c,566,c->r[7]); // 801BF5C4
  mtspr(c,567,c->r[6]); // 801BF5C8
  mtspr(c,566,c->r[5]); // 801BF5CC
  /* isync */ // 801BF5D0
  c->r[3]=c->msr; // 801BF5D4
  c->r[3]=c->r[3]|0x00000030u; // 801BF5D8
  mtspr(c,27,c->r[3]); // 801BF5DC
  c->r[3]=c->lr; // 801BF5E0
  mtspr(c,26,c->r[3]); // 801BF5E4
  return; /* rfi */ // 801BF5E8
  f_801BF5EC(c);
}

// fn_801BF5EC
void f_801BF5EC(Ctx* __restrict c) {
  trace_call(0x801BF5ECu);
  c->r[7]=0u+0x00000000u; // 801BF5EC
  c->r[4]=0u+0x10000000u; // 801BF5F0
  c->r[4]=c->r[4]+0x00000002u; // 801BF5F4
  c->r[3]=0u+0x90000000u; // 801BF5F8
  c->r[3]=c->r[3]+0x00000FFFu; // 801BF5FC
  c->r[6]=0u+0x10000000u; // 801BF600
  c->r[6]=c->r[6]+0x0000002Au; // 801BF604
  c->r[5]=0u+0xD0000000u; // 801BF608
  c->r[5]=c->r[5]+0x00000FFFu; // 801BF60C
  /* isync */ // 801BF610
  mtspr(c,568,c->r[7]); // 801BF614
  mtspr(c,569,c->r[4]); // 801BF618
  mtspr(c,568,c->r[3]); // 801BF61C
  /* isync */ // 801BF620
  mtspr(c,560,c->r[7]); // 801BF624
  mtspr(c,561,c->r[4]); // 801BF628
  mtspr(c,560,c->r[3]); // 801BF62C
  /* isync */ // 801BF630
  mtspr(c,570,c->r[7]); // 801BF634
  mtspr(c,571,c->r[6]); // 801BF638
  mtspr(c,570,c->r[5]); // 801BF63C
  /* isync */ // 801BF640
  mtspr(c,562,c->r[7]); // 801BF644
  mtspr(c,563,c->r[7]); // 801BF648
  /* isync */ // 801BF64C
  mtspr(c,564,c->r[7]); // 801BF650
  mtspr(c,565,c->r[7]); // 801BF654
  /* isync */ // 801BF658
  mtspr(c,566,c->r[7]); // 801BF65C
  mtspr(c,567,c->r[7]); // 801BF660
  /* isync */ // 801BF664
  mtspr(c,572,c->r[7]); // 801BF668
  mtspr(c,573,c->r[7]); // 801BF66C
  /* isync */ // 801BF670
  mtspr(c,574,c->r[7]); // 801BF674
  mtspr(c,575,c->r[7]); // 801BF678
  /* isync */ // 801BF67C
  c->r[3]=c->msr; // 801BF680
  c->r[3]=c->r[3]|0x00000030u; // 801BF684
  mtspr(c,27,c->r[3]); // 801BF688
  c->r[3]=c->lr; // 801BF68C
  mtspr(c,26,c->r[3]); // 801BF690
  return; /* rfi */ // 801BF694
  f_801BF698(c);
}

// ConfigMEM_ES1_0
void f_801BF698(Ctx* __restrict c) {
  trace_call(0x801BF698u);
  c->r[7]=0u+0x00000000u; // 801BF698
  c->r[4]=0u+0x00000000u; // 801BF69C
  c->r[4]=c->r[4]+0x00000002u; // 801BF6A0
  c->r[3]=0u+0x80000000u; // 801BF6A4
  c->r[3]=c->r[3]+0x00000FFFu; // 801BF6A8
  /* isync */ // 801BF6AC
  mtspr(c,536,c->r[7]); // 801BF6B0
  mtspr(c,537,c->r[4]); // 801BF6B4
  mtspr(c,536,c->r[3]); // 801BF6B8
  /* isync */ // 801BF6BC
  mtspr(c,528,c->r[7]); // 801BF6C0
  mtspr(c,529,c->r[4]); // 801BF6C4
  mtspr(c,528,c->r[3]); // 801BF6C8
  /* isync */ // 801BF6CC
  c->r[3]=c->msr; // 801BF6D0
  c->r[3]=c->r[3]|0x00000030u; // 801BF6D4
  mtspr(c,27,c->r[3]); // 801BF6D8
  c->r[3]=c->lr; // 801BF6DC
  mtspr(c,26,c->r[3]); // 801BF6E0
  return; /* rfi */ // 801BF6E4
  f_801BF6E8(c);
}

// RealMode
void f_801BF6E8(Ctx* __restrict c) {
  trace_call(0x801BF6E8u);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 801BF6E8
  mtspr(c,26,c->r[3]); // 801BF6EC
  c->r[3]=c->msr; // 801BF6F0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 801BF6F4
  mtspr(c,27,c->r[3]); // 801BF6F8
  return; /* rfi */ // 801BF6FC
  f_801BF700(c);
}

// BATConfig
void f_801BF700(Ctx* __restrict c) {
  trace_call(0x801BF700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF700
  c->r[0]=c->lr; // 801BF704
  c->r[3]=0u+0x80000000u; // 801BF708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF70C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF710
  c->r[0]=R32(c->r[3]+0x00003138u); // 801BF714
  cmps(c,0,(int32_t)c->r[0],0); // 801BF718
  if (!crb(c,2)) { goto L_801BF73C; } // 801BF71C
  c->r[0]=0u+0x801C0000u; // 801BF720
  c->r[0]=addc(c,c->r[0],0xFFFFF0ECu,0); cr0(c,c->r[0]); // 801BF724
  if (!crb(c,2)) { goto L_801BF73C; } // 801BF728
  c->r[3]=0u+0x801C0000u; // 801BF72C
  c->r[3]=c->r[3]+0xFFFFF698u; // 801BF730
  c->lr=0x801BF738u; f_801BF6E8(c); // 801BF734
  goto L_801BF83C; // 801BF738
L_801BF73C:;
  c->r[3]=0u+0x80000000u; // 801BF73C
  c->r[31]=R32(c->r[3]+0x00003104u); // 801BF740
  c->r[0]=R32(c->r[3]+0x00003100u); // 801BF744
  cmpu(c,0,c->r[31],c->r[0]); // 801BF748
  if (!crb(c,0)) { goto L_801BF774; } // 801BF74C
  c->r[0]=c->r[31]+0xFE800000u; // 801BF750
  cmpu(c,0,c->r[0],0x00000000u); // 801BF754
  if (!crb(c,2)) { goto L_801BF774; } // 801BF758
  c->r[3]=0u+0x81800000u; // 801BF75C
  c->r[4]=0u+0x01800000u; // 801BF760
  c->lr=0x801BF768u; f_801BA764(c); // 801BF764
  c->r[0]=0u+0x00000002u; // 801BF768
  c->r[3]=0u+0xCC000000u; // 801BF76C
  W16(c->r[3]+0x00004028u,c->r[0]); // 801BF770
L_801BF774:;
  c->r[0]=0u+0x01800000u; // 801BF774
  cmpu(c,0,c->r[31],c->r[0]); // 801BF778
  if (crb(c,1)) { goto L_801BF790; } // 801BF77C
  c->r[3]=0u+0x801C0000u; // 801BF780
  c->r[3]=c->r[3]+0xFFFFF1A0u; // 801BF784
  c->lr=0x801BF78Cu; f_801BF6E8(c); // 801BF788
  goto L_801BF7A8; // 801BF78C
L_801BF790:;
  c->r[0]=0u+0x03000000u; // 801BF790
  cmpu(c,0,c->r[31],c->r[0]); // 801BF794
  if (crb(c,1)) { goto L_801BF7A8; } // 801BF798
  c->r[3]=0u+0x801C0000u; // 801BF79C
  c->r[3]=c->r[3]+0xFFFFF220u; // 801BF7A0
  c->lr=0x801BF7A8u; f_801BF6E8(c); // 801BF7A4
L_801BF7A8:;
  c->r[3]=0u+0x80000000u; // 801BF7A8
  c->r[0]=0u+0x04000000u; // 801BF7AC
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 801BF7B0
  c->r[3]=R32(c->r[3]+0x00003120u); // 801BF7B4
  cmpu(c,0,c->r[4],c->r[0]); // 801BF7B8
  if (crb(c,1)) { goto L_801BF808; } // 801BF7BC
  c->r[0]=0u+0x93400000u; // 801BF7C0
  cmpu(c,0,c->r[3],c->r[0]); // 801BF7C4
  if (crb(c,1)) { goto L_801BF7DC; } // 801BF7C8
  c->r[3]=0u+0x801C0000u; // 801BF7CC
  c->r[3]=c->r[3]+0xFFFFF2A0u; // 801BF7D0
  c->lr=0x801BF7D8u; f_801BF6E8(c); // 801BF7D4
  goto L_801BF83C; // 801BF7D8
L_801BF7DC:;
  c->r[0]=0u+0x93800000u; // 801BF7DC
  cmpu(c,0,c->r[3],c->r[0]); // 801BF7E0
  if (crb(c,1)) { goto L_801BF7F8; } // 801BF7E4
  c->r[3]=0u+0x801C0000u; // 801BF7E8
  c->r[3]=c->r[3]+0xFFFFF380u; // 801BF7EC
  c->lr=0x801BF7F4u; f_801BF6E8(c); // 801BF7F0
  goto L_801BF83C; // 801BF7F4
L_801BF7F8:;
  c->r[3]=0u+0x801C0000u; // 801BF7F8
  c->r[3]=c->r[3]+0xFFFFF460u; // 801BF7FC
  c->lr=0x801BF804u; f_801BF6E8(c); // 801BF800
  goto L_801BF83C; // 801BF804
L_801BF808:;
  c->r[0]=0u+0x08000000u; // 801BF808
  cmpu(c,0,c->r[4],c->r[0]); // 801BF80C
  if (crb(c,1)) { goto L_801BF83C; } // 801BF810
  c->r[0]=0u+0x97000000u; // 801BF814
  cmpu(c,0,c->r[3],c->r[0]); // 801BF818
  if (crb(c,1)) { goto L_801BF830; } // 801BF81C
  c->r[3]=0u+0x801C0000u; // 801BF820
  c->r[3]=c->r[3]+0xFFFFF50Cu; // 801BF824
  c->lr=0x801BF82Cu; f_801BF6E8(c); // 801BF828
  goto L_801BF83C; // 801BF82C
L_801BF830:;
  c->r[3]=0u+0x801C0000u; // 801BF830
  c->r[3]=c->r[3]+0xFFFFF5ECu; // 801BF834
  c->lr=0x801BF83Cu; f_801BF6E8(c); // 801BF838
L_801BF83C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF83C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF840
  c->lr=c->r[0]; // 801BF844
  c->r[1]=c->r[1]+0x00000010u; // 801BF848
  return; // 801BF84C
}

// __OSInitMemoryProtection
void f_801BF850(Ctx* __restrict c) {
  trace_call(0x801BF850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF850
  c->r[0]=c->lr; // 801BF854
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF85C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF860
  c->lr=0x801BF868u; f_801BE74C(c); // 801BF864
  c->r[4]=0u+0xCC000000u; // 801BF868
  c->r[0]=0u+0x00000000u; // 801BF86C
  W16(c->r[4]+0x00004020u,c->r[0]); // 801BF870
  c->r[0]=0u+0x000000FFu; // 801BF874
  c->r[30]=c->r[3]|c->r[3]; // 801BF878
  c->r[3]=0u+0xF0000000u; // 801BF87C
  W16(c->r[4]+0x00004010u,c->r[0]); // 801BF880
  c->lr=0x801BF888u; f_801BEADC(c); // 801BF884
  c->r[31]=0u+0x801C0000u; // 801BF888
  c->r[3]=0u+0x00000000u; // 801BF88C
  c->r[4]=c->r[31]+0xFFFFF158u; // 801BF890
  c->lr=0x801BF898u; f_801BE798(c); // 801BF894
  c->r[4]=c->r[31]+0xFFFFF158u; // 801BF898
  c->r[3]=0u+0x00000001u; // 801BF89C
  c->lr=0x801BF8A4u; f_801BE798(c); // 801BF8A0
  c->r[4]=c->r[31]+0xFFFFF158u; // 801BF8A4
  c->r[3]=0u+0x00000002u; // 801BF8A8
  c->lr=0x801BF8B0u; f_801BE798(c); // 801BF8AC
  c->r[4]=c->r[31]+0xFFFFF158u; // 801BF8B0
  c->r[3]=0u+0x00000003u; // 801BF8B4
  c->lr=0x801BF8BCu; f_801BE798(c); // 801BF8B8
  c->r[4]=c->r[31]+0xFFFFF158u; // 801BF8BC
  c->r[3]=0u+0x00000004u; // 801BF8C0
  c->lr=0x801BF8C8u; f_801BE798(c); // 801BF8C4
  c->r[3]=0u+0x804A0000u; // 801BF8C8
  c->r[3]=c->r[3]+0x00003C90u; // 801BF8CC
  c->lr=0x801BF8D4u; f_801BFD5C(c); // 801BF8D0
  c->lr=0x801BF8D8u; f_801BF700(c); // 801BF8D4
  c->r[3]=0u+0x08000000u; // 801BF8D8
  c->lr=0x801BF8E0u; f_801BEB5C(c); // 801BF8DC
  c->r[3]=c->r[30]|c->r[30]; // 801BF8E0
  c->lr=0x801BF8E8u; f_801BE774(c); // 801BF8E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF8E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF8EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF8F0
  c->lr=c->r[0]; // 801BF8F4
  c->r[1]=c->r[1]+0x00000010u; // 801BF8F8
  return; // 801BF8FC
}

// OSInitMutex
void f_801BF900(Ctx* __restrict c) {
  trace_call(0x801BF900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF900
  c->r[0]=c->lr; // 801BF904
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF90C
  c->r[31]=c->r[3]|c->r[3]; // 801BF910
  c->lr=0x801BF918u; f_801C1194(c); // 801BF914
  c->r[0]=0u+0x00000000u; // 801BF918
  W32(c->r[31]+0x00000008u,c->r[0]); // 801BF91C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801BF920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF924
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF928
  c->lr=c->r[0]; // 801BF92C
  c->r[1]=c->r[1]+0x00000010u; // 801BF930
  return; // 801BF934
}

// OSLockMutex
void f_801BF938(Ctx* __restrict c) {
  trace_call(0x801BF938u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF938
  c->r[0]=c->lr; // 801BF93C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF940
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF944
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF948
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BF94C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BF950
  c->r[28]=c->r[3]|c->r[3]; // 801BF954
  c->lr=0x801BF95Cu; f_801BE74C(c); // 801BF958
  c->r[29]=c->r[3]|c->r[3]; // 801BF95C
  c->lr=0x801BF964u; f_801C11A4(c); // 801BF960
  c->r[30]=c->r[3]|c->r[3]; // 801BF964
  c->r[31]=0u+0x00000000u; // 801BF968
L_801BF96C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801BF96C
  cmps(c,0,(int32_t)c->r[0],0); // 801BF970
  if (!crb(c,2)) { goto L_801BF9B4; } // 801BF974
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801BF978
  W32(c->r[28]+0x00000008u,c->r[30]); // 801BF97C
  c->r[0]=c->r[3]+0x00000001u; // 801BF980
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801BF984
  c->r[3]=R32(c->r[30]+0x000002F8u); // 801BF988
  cmps(c,0,(int32_t)c->r[3],0); // 801BF98C
  if (!crb(c,2)) { goto L_801BF99C; } // 801BF990
  W32(c->r[30]+0x000002F4u,c->r[28]); // 801BF994
  goto L_801BF9A0; // 801BF998
L_801BF99C:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 801BF99C
L_801BF9A0:;
  c->r[0]=0u+0x00000000u; // 801BF9A0
  W32(c->r[28]+0x00000014u,c->r[3]); // 801BF9A4
  W32(c->r[28]+0x00000010u,c->r[0]); // 801BF9A8
  W32(c->r[30]+0x000002F8u,c->r[28]); // 801BF9AC
  goto L_801BF9EC; // 801BF9B0
L_801BF9B4:;
  cmpu(c,0,c->r[0],c->r[30]); // 801BF9B4
  if (!crb(c,2)) { goto L_801BF9CC; } // 801BF9B8
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801BF9BC
  c->r[0]=c->r[3]+0x00000001u; // 801BF9C0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801BF9C4
  goto L_801BF9EC; // 801BF9C8
L_801BF9CC:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 801BF9CC
  c->r[3]=R32(c->r[28]+0x00000008u); // 801BF9D0
  c->r[4]=R32(c->r[30]+0x000002D0u); // 801BF9D4
  c->lr=0x801BF9DCu; f_801C14AC(c); // 801BF9D8
  c->r[3]=c->r[28]|c->r[28]; // 801BF9DC
  c->lr=0x801BF9E4u; f_801C21D0(c); // 801BF9E0
  W32(c->r[30]+0x000002F0u,c->r[31]); // 801BF9E4
  IRQCHK(c); goto L_801BF96C; // 801BF9E8
L_801BF9EC:;
  c->r[3]=c->r[29]|c->r[29]; // 801BF9EC
  c->lr=0x801BF9F4u; f_801BE774(c); // 801BF9F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF9F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF9F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF9FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFA00
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BFA04
  c->lr=c->r[0]; // 801BFA08
  c->r[1]=c->r[1]+0x00000020u; // 801BFA0C
  return; // 801BFA10
}

// OSUnlockMutex
void f_801BFA14(Ctx* __restrict c) {
  trace_call(0x801BFA14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFA14
  c->r[0]=c->lr; // 801BFA18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFA1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFA20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFA24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFA28
  c->r[29]=c->r[3]|c->r[3]; // 801BFA2C
  c->lr=0x801BFA34u; f_801BE74C(c); // 801BFA30
  c->r[31]=c->r[3]|c->r[3]; // 801BFA34
  c->lr=0x801BFA3Cu; f_801C11A4(c); // 801BFA38
  c->r[0]=R32(c->r[29]+0x00000008u); // 801BFA3C
  c->r[30]=c->r[3]|c->r[3]; // 801BFA40
  cmpu(c,0,c->r[0],c->r[3]); // 801BFA44
  if (!crb(c,2)) { goto L_801BFAB8; } // 801BFA48
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801BFA4C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801BFA50
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801BFA54
  if (!crb(c,2)) { goto L_801BFAB8; } // 801BFA58
  c->r[4]=R32(c->r[29]+0x00000010u); // 801BFA5C
  c->r[5]=R32(c->r[29]+0x00000014u); // 801BFA60
  cmps(c,0,(int32_t)c->r[4],0); // 801BFA64
  if (!crb(c,2)) { goto L_801BFA74; } // 801BFA68
  W32(c->r[3]+0x000002F8u,c->r[5]); // 801BFA6C
  goto L_801BFA78; // 801BFA70
L_801BFA74:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 801BFA74
L_801BFA78:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BFA78
  if (!crb(c,2)) { goto L_801BFA88; } // 801BFA7C
  W32(c->r[3]+0x000002F4u,c->r[4]); // 801BFA80
  goto L_801BFA8C; // 801BFA84
L_801BFA88:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 801BFA88
L_801BFA8C:;
  c->r[0]=0u+0x00000000u; // 801BFA8C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801BFA90
  c->r[4]=R32(c->r[3]+0x000002D0u); // 801BFA94
  c->r[0]=R32(c->r[3]+0x000002D4u); // 801BFA98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BFA9C
  if (!crb(c,0)) { goto L_801BFAB0; } // 801BFAA0
  c->r[3]=c->r[30]|c->r[30]; // 801BFAA4
  c->lr=0x801BFAACu; f_801C12BC(c); // 801BFAA8
  W32(c->r[30]+0x000002D0u,c->r[3]); // 801BFAAC
L_801BFAB0:;
  c->r[3]=c->r[29]|c->r[29]; // 801BFAB0
  c->lr=0x801BFAB8u; f_801C22BC(c); // 801BFAB4
L_801BFAB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BFAB8
  c->lr=0x801BFAC0u; f_801BE774(c); // 801BFABC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFAC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFAC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFAC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFACC
  c->lr=c->r[0]; // 801BFAD0
  c->r[1]=c->r[1]+0x00000020u; // 801BFAD4
  return; // 801BFAD8
}

// __OSUnlockAllMutex
void f_801BFADC(Ctx* __restrict c) {
  trace_call(0x801BFADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFADC
  c->r[0]=c->lr; // 801BFAE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFAE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFAE8
  c->r[31]=0u+0x00000000u; // 801BFAEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BFAF0
  c->r[30]=c->r[3]|c->r[3]; // 801BFAF4
  goto L_801BFB24; // 801BFAF8
L_801BFAFC:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801BFAFC
  cmps(c,0,(int32_t)c->r[4],0); // 801BFB00
  if (!crb(c,2)) { goto L_801BFB10; } // 801BFB04
  W32(c->r[30]+0x000002F8u,c->r[31]); // 801BFB08
  goto L_801BFB14; // 801BFB0C
L_801BFB10:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 801BFB10
L_801BFB14:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 801BFB14
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801BFB18
  W32(c->r[3]+0x00000008u,c->r[31]); // 801BFB1C
  c->lr=0x801BFB24u; f_801C22BC(c); // 801BFB20
L_801BFB24:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 801BFB24
  cmps(c,0,(int32_t)c->r[3],0); // 801BFB28
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFAFC; } // 801BFB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFB30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFB34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BFB38
  c->lr=c->r[0]; // 801BFB3C
  c->r[1]=c->r[1]+0x00000010u; // 801BFB40
  return; // 801BFB44
}

// OSTryLockMutex
void f_801BFB48(Ctx* __restrict c) {
  trace_call(0x801BFB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFB48
  c->r[0]=c->lr; // 801BFB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFB50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFB54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFB58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFB5C
  c->r[29]=c->r[3]|c->r[3]; // 801BFB60
  c->lr=0x801BFB68u; f_801BE74C(c); // 801BFB64
  c->r[31]=c->r[3]|c->r[3]; // 801BFB68
  c->lr=0x801BFB70u; f_801C11A4(c); // 801BFB6C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801BFB70
  cmps(c,0,(int32_t)c->r[0],0); // 801BFB74
  if (!crb(c,2)) { goto L_801BFBBC; } // 801BFB78
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801BFB7C
  W32(c->r[29]+0x00000008u,c->r[3]); // 801BFB80
  c->r[0]=c->r[4]+0x00000001u; // 801BFB84
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801BFB88
  c->r[4]=R32(c->r[3]+0x000002F8u); // 801BFB8C
  cmps(c,0,(int32_t)c->r[4],0); // 801BFB90
  if (!crb(c,2)) { goto L_801BFBA0; } // 801BFB94
  W32(c->r[3]+0x000002F4u,c->r[29]); // 801BFB98
  goto L_801BFBA4; // 801BFB9C
L_801BFBA0:;
  W32(c->r[4]+0x00000010u,c->r[29]); // 801BFBA0
L_801BFBA4:;
  c->r[0]=0u+0x00000000u; // 801BFBA4
  W32(c->r[29]+0x00000014u,c->r[4]); // 801BFBA8
  c->r[30]=0u+0x00000001u; // 801BFBAC
  W32(c->r[29]+0x00000010u,c->r[0]); // 801BFBB0
  W32(c->r[3]+0x000002F8u,c->r[29]); // 801BFBB4
  goto L_801BFBDC; // 801BFBB8
L_801BFBBC:;
  cmpu(c,0,c->r[0],c->r[3]); // 801BFBBC
  if (!crb(c,2)) { goto L_801BFBD8; } // 801BFBC0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801BFBC4
  c->r[30]=0u+0x00000001u; // 801BFBC8
  c->r[0]=c->r[3]+0x00000001u; // 801BFBCC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801BFBD0
  goto L_801BFBDC; // 801BFBD4
L_801BFBD8:;
  c->r[30]=0u+0x00000000u; // 801BFBD8
L_801BFBDC:;
  c->r[3]=c->r[31]|c->r[31]; // 801BFBDC
  c->lr=0x801BFBE4u; f_801BE774(c); // 801BFBE0
  c->r[3]=c->r[30]|c->r[30]; // 801BFBE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFBE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFBEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFBF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFBF4
  c->lr=c->r[0]; // 801BFBF8
  c->r[1]=c->r[1]+0x00000020u; // 801BFBFC
  return; // 801BFC00
}

// fn_801BFC04
void f_801BFC04(Ctx* __restrict c) {
  trace_call(0x801BFC04u);
  f_801C1194(c); return; // 801BFC04
}

// fn_801BFC08
void f_801BFC08(Ctx* __restrict c) {
  trace_call(0x801BFC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFC08
  c->r[0]=c->lr; // 801BFC0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFC10
  c->r[11]=c->r[1]+0x00000020u; // 801BFC14
  c->lr=0x801BFC1Cu; f_801E795C(c); // 801BFC18
  c->r[27]=c->r[3]|c->r[3]; // 801BFC1C
  c->r[28]=c->r[4]|c->r[4]; // 801BFC20
  c->lr=0x801BFC28u; f_801BE74C(c); // 801BFC24
  c->r[31]=c->r[3]|c->r[3]; // 801BFC28
  c->lr=0x801BFC30u; f_801C11A4(c); // 801BFC2C
  c->r[0]=R32(c->r[28]+0x00000008u); // 801BFC30
  c->r[30]=c->r[3]|c->r[3]; // 801BFC34
  cmpu(c,0,c->r[0],c->r[3]); // 801BFC38
  if (!crb(c,2)) { goto L_801BFCC4; } // 801BFC3C
  c->r[4]=R32(c->r[28]+0x00000010u); // 801BFC40
  c->r[0]=0u+0x00000000u; // 801BFC44
  c->r[29]=R32(c->r[28]+0x0000000Cu); // 801BFC48
  cmps(c,0,(int32_t)c->r[4],0); // 801BFC4C
  c->r[5]=R32(c->r[28]+0x00000014u); // 801BFC50
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801BFC54
  if (!crb(c,2)) { goto L_801BFC64; } // 801BFC58
  W32(c->r[3]+0x000002F8u,c->r[5]); // 801BFC5C
  goto L_801BFC68; // 801BFC60
L_801BFC64:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 801BFC64
L_801BFC68:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BFC68
  if (!crb(c,2)) { goto L_801BFC78; } // 801BFC6C
  W32(c->r[3]+0x000002F4u,c->r[4]); // 801BFC70
  goto L_801BFC7C; // 801BFC74
L_801BFC78:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 801BFC78
L_801BFC7C:;
  c->r[0]=0u+0x00000000u; // 801BFC7C
  W32(c->r[28]+0x00000008u,c->r[0]); // 801BFC80
  c->r[4]=R32(c->r[3]+0x000002D0u); // 801BFC84
  c->r[0]=R32(c->r[3]+0x000002D4u); // 801BFC88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BFC8C
  if (!crb(c,0)) { goto L_801BFCA0; } // 801BFC90
  c->r[3]=c->r[30]|c->r[30]; // 801BFC94
  c->lr=0x801BFC9Cu; f_801C12BC(c); // 801BFC98
  W32(c->r[30]+0x000002D0u,c->r[3]); // 801BFC9C
L_801BFCA0:;
  c->lr=0x801BFCA4u; f_801C11DC(c); // 801BFCA0
  c->r[3]=c->r[28]|c->r[28]; // 801BFCA4
  c->lr=0x801BFCACu; f_801C22BC(c); // 801BFCA8
  c->lr=0x801BFCB0u; f_801C1218(c); // 801BFCAC
  c->r[3]=c->r[27]|c->r[27]; // 801BFCB0
  c->lr=0x801BFCB8u; f_801C21D0(c); // 801BFCB4
  c->r[3]=c->r[28]|c->r[28]; // 801BFCB8
  c->lr=0x801BFCC0u; f_801BF938(c); // 801BFCBC
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 801BFCC0
L_801BFCC4:;
  c->r[3]=c->r[31]|c->r[31]; // 801BFCC4
  c->lr=0x801BFCCCu; f_801BE774(c); // 801BFCC8
  c->r[11]=c->r[1]+0x00000020u; // 801BFCCC
  c->lr=0x801BFCD4u; f_801E79A8(c); // 801BFCD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFCD4
  c->lr=c->r[0]; // 801BFCD8
  c->r[1]=c->r[1]+0x00000020u; // 801BFCDC
  return; // 801BFCE0
}

// fn_801BFCE4
void f_801BFCE4(Ctx* __restrict c) {
  trace_call(0x801BFCE4u);
  f_801C22BC(c); return; // 801BFCE4
}

// fn_801BFCE8
void f_801BFCE8(Ctx* __restrict c) {
  trace_call(0x801BFCE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFCE8
  c->r[0]=c->lr; // 801BFCEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFCF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFCF4
  c->r[31]=c->r[4]|c->r[4]; // 801BFCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFCFC
  c->r[30]=c->r[3]|c->r[3]; // 801BFD00
  c->lr=0x801BFD08u; f_801BE74C(c); // 801BFD04
  c->r[3]=0u+0x81280000u; // 801BFD08
  c->lr=0x801BFD10u; f_801BA260(c); // 801BFD0C
  c->r[3]=0u+0x812F0000u; // 801BFD10
  c->lr=0x801BFD18u; f_801BA248(c); // 801BFD14
  c->r[0]=0u+0x00000000u; // 801BFD18
  c->r[3]=c->r[31]|c->r[31]; // 801BFD1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BFD20
  c->r[4]=c->r[30]|0x80000000u; // 801BFD24
  c->r[5]=c->r[1]+0x00000008u; // 801BFD28
  c->lr=0x801BFD30u; f_801BCAD0(c); // 801BFD2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFD30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFD34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFD38
  c->lr=c->r[0]; // 801BFD3C
  c->r[1]=c->r[1]+0x00000020u; // 801BFD40
  return; // 801BFD44
}

// OSGetSaveRegion
void f_801BFD48(Ctx* __restrict c) {
  trace_call(0x801BFD48u);
  c->r[0]=R32(c->r[13]+0xFFFF9D00u); // 801BFD48
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BFD4C
  c->r[0]=R32(c->r[13]+0xFFFF9D04u); // 801BFD50
  W32(c->r[4]+0x00000000u,c->r[0]); // 801BFD54
  return; // 801BFD58
}

// OSRegisterShutdownFunction
void f_801BFD5C(Ctx* __restrict c) {
  trace_call(0x801BFD5Cu);
  c->r[5]=R32(c->r[13]+0xFFFF9D10u); // 801BFD5C
  goto L_801BFD68; // 801BFD60
L_801BFD64:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 801BFD64
L_801BFD68:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BFD68
  if (crb(c,2)) { goto L_801BFD80; } // 801BFD6C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801BFD70
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BFD74
  cmpu(c,0,c->r[4],c->r[0]); // 801BFD78
  if (!crb(c,1)) { IRQCHK(c); goto L_801BFD64; } // 801BFD7C
L_801BFD80:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BFD80
  if (!crb(c,2)) { goto L_801BFDBC; } // 801BFD84
  c->r[4]=c->r[13]+0xFFFF9D10u; // 801BFD88
  c->r[4]=R32(c->r[4]+0x00000004u); // 801BFD8C
  cmps(c,0,(int32_t)c->r[4],0); // 801BFD90
  if (!crb(c,2)) { goto L_801BFDA0; } // 801BFD94
  W32(c->r[13]+0xFFFF9D10u,c->r[3]); // 801BFD98
  goto L_801BFDA4; // 801BFD9C
L_801BFDA0:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 801BFDA0
L_801BFDA4:;
  c->r[0]=0u+0x00000000u; // 801BFDA4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801BFDA8
  c->r[4]=c->r[13]+0xFFFF9D10u; // 801BFDAC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BFDB0
  W32(c->r[4]+0x00000004u,c->r[3]); // 801BFDB4
  return; // 801BFDB8
L_801BFDBC:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 801BFDBC
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801BFDC0
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801BFDC4
  cmps(c,0,(int32_t)c->r[4],0); // 801BFDC8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801BFDCC
  if (!crb(c,2)) { goto L_801BFDDC; } // 801BFDD0
  W32(c->r[13]+0xFFFF9D10u,c->r[3]); // 801BFDD4
  return; // 801BFDD8
L_801BFDDC:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 801BFDDC
  return; // 801BFDE0
}

// __OSCallShutdownFunctions
void f_801BFDE4(Ctx* __restrict c) {
  trace_call(0x801BFDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFDE4
  c->r[0]=c->lr; // 801BFDE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFDEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFDF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFDF4
  c->r[30]=0u+0x00000000u; // 801BFDF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFDFC
  c->r[29]=c->r[4]|c->r[4]; // 801BFE00
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BFE04
  c->r[28]=c->r[3]|c->r[3]; // 801BFE08
  c->r[3]=0u+0x00000000u; // 801BFE0C
  c->r[31]=R32(c->r[13]+0xFFFF9D10u); // 801BFE10
  goto L_801BFE54; // 801BFE14
L_801BFE18:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BFE18
  if (crb(c,2)) { goto L_801BFE2C; } // 801BFE1C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BFE20
  cmpu(c,0,c->r[3],c->r[0]); // 801BFE24
  if (!crb(c,2)) { goto L_801BFE5C; } // 801BFE28
L_801BFE2C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BFE2C
  c->r[3]=c->r[28]|c->r[28]; // 801BFE30
  c->r[4]=c->r[29]|c->r[29]; // 801BFE34
  c->ctr=c->r[12]; // 801BFE38
  if (true) { c->lr=0x801BFE40u; dispatch(c,c->ctr); } // 801BFE3C
  c->r[0]=cntlz(c->r[3]); // 801BFE40
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BFE44
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFE48
  c->r[31]=R32(c->r[31]+0x00000008u); // 801BFE4C
  c->r[30]=c->r[30]|c->r[0]; // 801BFE50
L_801BFE54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BFE54
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFE18; } // 801BFE58
L_801BFE5C:;
  c->lr=0x801BFE60u; f_801C0A18(c); // 801BFE5C
  c->r[0]=cntlz(c->r[3]); // 801BFE60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFE64
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFE68
  c->r[30]=c->r[30]|c->r[0]; // 801BFE6C
  c->r[0]=cntlz(c->r[30]); // 801BFE70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFE74
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFE78
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFE7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BFE80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFE84
  c->lr=c->r[0]; // 801BFE88
  c->r[1]=c->r[1]+0x00000020u; // 801BFE8C
  return; // 801BFE90
}

// __OSShutdownDevices
void f_801BFE94(Ctx* __restrict c) {
  trace_call(0x801BFE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFE94
  c->r[0]=c->lr; // 801BFE98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFE9C
  c->r[11]=c->r[1]+0x00000020u; // 801BFEA0
  c->lr=0x801BFEA8u; f_801E795C(c); // 801BFEA4
  cmps(c,0,(int32_t)c->r[3],4); // 801BFEA8
  c->r[27]=c->r[3]|c->r[3]; // 801BFEAC
  if (!crb(c,0)) { goto L_801BFEC0; } // 801BFEB0
  cmps(c,0,(int32_t)c->r[3],0); // 801BFEB4
  if (crb(c,2)) { goto L_801BFEC8; } // 801BFEB8
  goto L_801BFED0; // 801BFEBC
L_801BFEC0:;
  cmps(c,0,(int32_t)c->r[3],7); // 801BFEC0
  if (!crb(c,0)) { goto L_801BFED0; } // 801BFEC4
L_801BFEC8:;
  c->r[28]=0u+0x00000000u; // 801BFEC8
  goto L_801BFED4; // 801BFECC
L_801BFED0:;
  c->r[28]=0u+0x00000001u; // 801BFED0
L_801BFED4:;
  c->lr=0x801BFED8u; f_801BA684(c); // 801BFED4
  cmps(c,0,(int32_t)c->r[28],0); // 801BFED8
  if (!crb(c,2)) { goto L_801BFEEC; } // 801BFEDC
  c->r[3]=0u+0x00000001u; // 801BFEE0
  c->lr=0x801BFEE8u; f_801D3A4C(c); // 801BFEE4
  c->r[29]=c->r[3]|c->r[3]; // 801BFEE8
L_801BFEEC:;
  c->r[30]=R32(c->r[13]+0xFFFF9D10u); // 801BFEEC
  c->r[3]=0u+0x00000000u; // 801BFEF0
  c->r[31]=0u+0x00000000u; // 801BFEF4
  goto L_801BFF38; // 801BFEF8
L_801BFEFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BFEFC
  if (crb(c,2)) { goto L_801BFF10; } // 801BFF00
  c->r[0]=R32(c->r[30]+0x00000004u); // 801BFF04
  cmpu(c,0,c->r[3],c->r[0]); // 801BFF08
  if (!crb(c,2)) { goto L_801BFF40; } // 801BFF0C
L_801BFF10:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BFF10
  c->r[4]=c->r[27]|c->r[27]; // 801BFF14
  c->r[3]=0u+0x00000000u; // 801BFF18
  c->ctr=c->r[12]; // 801BFF1C
  if (true) { c->lr=0x801BFF24u; dispatch(c,c->ctr); } // 801BFF20
  c->r[0]=cntlz(c->r[3]); // 801BFF24
  c->r[3]=R32(c->r[30]+0x00000004u); // 801BFF28
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFF2C
  c->r[30]=R32(c->r[30]+0x00000008u); // 801BFF30
  c->r[31]=c->r[31]|c->r[0]; // 801BFF34
L_801BFF38:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BFF38
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFEFC; } // 801BFF3C
L_801BFF40:;
  c->lr=0x801BFF44u; f_801C0A18(c); // 801BFF40
  c->r[0]=cntlz(c->r[3]); // 801BFF44
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFF48
  c->r[31]=c->r[31]|c->r[0]; cr0(c,c->r[31]); // 801BFF4C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFEEC; } // 801BFF50
L_801BFF54:;
  c->lr=0x801BFF58u; f_801C0A18(c); // 801BFF54
  cmps(c,0,(int32_t)c->r[3],0); // 801BFF58
  if (crb(c,2)) { IRQCHK(c); goto L_801BFF54; } // 801BFF5C
  c->lr=0x801BFF64u; f_801BE74C(c); // 801BFF60
  c->r[31]=R32(c->r[13]+0xFFFF9D10u); // 801BFF64
  c->r[3]=0u+0x00000000u; // 801BFF68
  c->r[30]=0u+0x00000000u; // 801BFF6C
  goto L_801BFFB0; // 801BFF70
L_801BFF74:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BFF74
  if (crb(c,2)) { goto L_801BFF88; } // 801BFF78
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BFF7C
  cmpu(c,0,c->r[3],c->r[0]); // 801BFF80
  if (!crb(c,2)) { goto L_801BFFB8; } // 801BFF84
L_801BFF88:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BFF88
  c->r[4]=c->r[27]|c->r[27]; // 801BFF8C
  c->r[3]=0u+0x00000001u; // 801BFF90
  c->ctr=c->r[12]; // 801BFF94
  if (true) { c->lr=0x801BFF9Cu; dispatch(c,c->ctr); } // 801BFF98
  c->r[0]=cntlz(c->r[3]); // 801BFF9C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BFFA0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BFFA4
  c->r[31]=R32(c->r[31]+0x00000008u); // 801BFFA8
  c->r[30]=c->r[30]|c->r[0]; // 801BFFAC
L_801BFFB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BFFB0
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFF74; } // 801BFFB4
L_801BFFB8:;
  c->lr=0x801BFFBCu; f_801C0A18(c); // 801BFFB8
  c->lr=0x801BFFC0u; f_801BA8CC(c); // 801BFFBC
  cmps(c,0,(int32_t)c->r[28],0); // 801BFFC0
  if (!crb(c,2)) { goto L_801BFFD0; } // 801BFFC4
  c->r[3]=c->r[29]|c->r[29]; // 801BFFC8
  c->lr=0x801BFFD0u; f_801D3A4C(c); // 801BFFCC
L_801BFFD0:;
  c->r[3]=0u+0x80000000u; // 801BFFD0
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801BFFD4
  goto L_801C0004; // 801BFFD8
L_801BFFDC:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 801BFFDC
  c->r[30]=R32(c->r[3]+0x000002FCu); // 801BFFE0
  cmps(c,0,(int32_t)c->r[0],4); // 801BFFE4
  if (crb(c,2)) { goto L_801BFFFC; } // 801BFFE8
  if (!crb(c,0)) { goto L_801C0000; } // 801BFFEC
  cmps(c,0,(int32_t)c->r[0],1); // 801BFFF0
  if (crb(c,2)) { goto L_801BFFFC; } // 801BFFF4
  goto L_801C0000; // 801BFFF8
L_801BFFFC:;
  c->lr=0x801C0000u; f_801C1A8C(c); // 801BFFFC
L_801C0000:;
  c->r[3]=c->r[30]|c->r[30]; // 801C0000
L_801C0004:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C0004
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFFDC; } // 801C0008
  c->r[11]=c->r[1]+0x00000020u; // 801C000C
  c->lr=0x801C0014u; f_801E79A8(c); // 801C0010
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0014
  c->lr=c->r[0]; // 801C0018
  c->r[1]=c->r[1]+0x00000020u; // 801C001C
  return; // 801C0020
}

// fn_801C0024
void f_801C0024(Ctx* __restrict c) {
  trace_call(0x801C0024u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0024
  c->r[0]=c->lr; // 801C0028
  c->r[4]=0u+0x00000000u; // 801C002C
  c->r[5]=0u+0x00000002u; // 801C0030
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C0034
  c->r[3]=c->r[1]+0x00000008u; // 801C0038
  c->lr=0x801C0040u; f_8000443C(c); // 801C003C
  c->lr=0x801C0044u; f_80207F2C(c); // 801C0040
L_801C0044:;
  c->lr=0x801C0048u; f_80207FCC(c); // 801C0044
  cmpu(c,0,c->r[3],0x00000001u); // 801C0048
  if (crb(c,2)) { IRQCHK(c); goto L_801C0044; } // 801C004C
  c->r[3]=c->r[1]+0x00000008u; // 801C0050
  c->lr=0x801C0058u; f_80209904(c); // 801C0054
  c->lr=0x801C005Cu; f_801C3A64(c); // 801C0058
  c->lr=0x801C0060u; f_801C3334(c); // 801C005C
  c->lr=0x801C0064u; f_801CB378(c); // 801C0060
  c->r[3]=c->r[1]+0x00000018u; // 801C0064
  c->lr=0x801C006Cu; f_801C3D30(c); // 801C0068
  c->lr=0x801C0070u; f_801CB188(c); // 801C006C
  cmpu(c,0,c->r[3],0x00000002u); // 801C0070
  if (crb(c,2)) { goto L_801C0084; } // 801C0074
  c->r[0]=0u+0x00000003u; // 801C0078
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801C007C
  goto L_801C00C0; // 801C0080
L_801C0084:;
  c->r[0]=R8(c->r[1]+0x0000001Eu); // 801C0084
  cmpu(c,0,c->r[0],0x00000001u); // 801C0088
  if (!crb(c,2)) { goto L_801C00AC; } // 801C008C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C0090
  c->lr=0x801C0098u; f_801C0C60(c); // 801C0094
  cmps(c,0,(int32_t)c->r[3],0); // 801C0098
  if (crb(c,2)) { goto L_801C00B8; } // 801C009C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801C00A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C00A4
  if (crb(c,2)) { goto L_801C00B8; } // 801C00A8
L_801C00AC:;
  c->r[0]=0u+0x00000002u; // 801C00AC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801C00B0
  goto L_801C00C0; // 801C00B4
L_801C00B8:;
  c->r[0]=0u+0x00000001u; // 801C00B8
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801C00BC
L_801C00C0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C00C0
  cmpu(c,0,c->r[0],0x00000001u); // 801C00C4
  if (!crb(c,2)) { goto L_801C00D8; } // 801C00C8
  c->r[0]=0u+0x00000005u; // 801C00CC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801C00D0
  goto L_801C00E0; // 801C00D4
L_801C00D8:;
  c->r[0]=0u+0x00000001u; // 801C00D8
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801C00DC
L_801C00E0:;
  c->lr=0x801C00E4u; f_801C0D7C(c); // 801C00E0
  c->r[3]=c->r[1]+0x00000018u; // 801C00E4
  c->lr=0x801C00ECu; f_801C3C4C(c); // 801C00E8
  c->r[3]=c->r[1]+0x00000010u; // 801C00EC
  c->lr=0x801C00F4u; f_801B8510(c); // 801C00F0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C00F4
  cmpu(c,0,c->r[0],0x00000001u); // 801C00F8
  if (!crb(c,2)) { goto L_801C0118; } // 801C00FC
  c->lr=0x801C0104u; f_801C11DC(c); // 801C0100
  c->r[3]=0u+0x00000005u; // 801C0104
  c->lr=0x801C010Cu; f_801BFE94(c); // 801C0108
  c->lr=0x801C0110u; f_801C1218(c); // 801C010C
  c->lr=0x801C0114u; f_801BC21C(c); // 801C0110
  goto L_801C0128; // 801C0114
L_801C0118:;
  c->lr=0x801C011Cu; f_801C11DC(c); // 801C0118
  c->r[3]=0u+0x00000002u; // 801C011C
  c->lr=0x801C0124u; f_801BFE94(c); // 801C0120
  c->lr=0x801C0128u; f_801C3114(c); // 801C0124
L_801C0128:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C0128
  c->lr=c->r[0]; // 801C012C
  c->r[1]=c->r[1]+0x00000040u; // 801C0130
  return; // 801C0134
}

// fn_801C0138
void f_801C0138(Ctx* __restrict c) {
  trace_call(0x801C0138u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0138
  c->r[0]=c->lr; // 801C013C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C0140
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C0144
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C0148
  c->r[30]=c->r[3]|c->r[3]; // 801C014C
  c->r[3]=0u+0x81280000u; // 801C0150
  c->lr=0x801C0158u; f_801BA260(c); // 801C0154
  c->r[3]=0u+0x812F0000u; // 801C0158
  c->lr=0x801C0160u; f_801BA248(c); // 801C015C
  c->r[3]=0u+0x00001020u; // 801C0160
  c->r[4]=0u+0x00000020u; // 801C0164
  c->lr=0x801C016Cu; f_801BA268(c); // 801C0168
  c->r[31]=c->r[3]|c->r[3]; // 801C016C
  c->r[4]=0u+0x00000000u; // 801C0170
  c->r[5]=0u+0x00001020u; // 801C0174
  c->lr=0x801C017Cu; f_8000443C(c); // 801C0178
  c->r[3]=c->r[31]|c->r[31]; // 801C017C
  c->lr=0x801C0184u; f_801C4054(c); // 801C0180
  c->r[3]=0u+0x00000001u; // 801C0184
  c->r[0]=c->r[30]|0x80000000u; // 801C0188
  W32(c->r[31]+0x00000008u,c->r[3]); // 801C018C
  c->r[3]=c->r[31]|c->r[31]; // 801C0190
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C0194
  c->lr=0x801C019Cu; f_801C3EFC(c); // 801C0198
  c->r[3]=c->r[1]+0x00000008u; // 801C019C
  c->lr=0x801C01A4u; f_801C3D30(c); // 801C01A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C01A4
  if (crb(c,2)) { goto L_801C01BC; } // 801C01A8
  c->r[0]=0u+0x00000003u; // 801C01AC
  c->r[3]=c->r[1]+0x00000008u; // 801C01B0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801C01B4
  c->lr=0x801C01BCu; f_801C3C4C(c); // 801C01B8
L_801C01BC:;
  c->lr=0x801C01C0u; f_801C11DC(c); // 801C01BC
  c->r[3]=0u+0x00000004u; // 801C01C0
  c->lr=0x801C01C8u; f_801BFE94(c); // 801C01C4
  c->lr=0x801C01CCu; f_801C1218(c); // 801C01C8
  c->lr=0x801C01D0u; f_801BC318(c); // 801C01CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C01D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C01D4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C01D8
  c->lr=c->r[0]; // 801C01DC
  c->r[1]=c->r[1]+0x00000030u; // 801C01E0
  return; // 801C01E4
}

// fn_801C01E8
void f_801C01E8(Ctx* __restrict c) {
  trace_call(0x801C01E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C01E8
  c->r[0]=c->lr; // 801C01EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C01F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C01F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C01F8
  c->r[30]=c->r[3]|c->r[3]; // 801C01FC
  c->lr=0x801C0204u; f_801B96FC(c); // 801C0200
  c->r[31]=c->r[3]|c->r[3]; // 801C0204
  c->lr=0x801C020Cu; f_801C3A64(c); // 801C0208
  c->lr=0x801C0210u; f_801C3334(c); // 801C020C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801C0210
  cmpu(c,0,c->r[0],0x00000081u); // 801C0214
  if (!crb(c,2)) { goto L_801C0228; } // 801C0218
  c->r[3]=c->r[30]|c->r[30]; // 801C021C
  c->lr=0x801C0224u; f_801C0138(c); // 801C0220
  goto L_801C024C; // 801C0224
L_801C0228:;
  cmpu(c,0,c->r[0],0x00000080u); // 801C0228
  if (!crb(c,2)) { goto L_801C024C; } // 801C022C
  c->lr=0x801C0234u; f_801C11DC(c); // 801C0230
  c->r[3]=0u+0x00000004u; // 801C0234
  c->lr=0x801C023Cu; f_801BFE94(c); // 801C0238
  c->lr=0x801C0240u; f_801C1218(c); // 801C023C
  c->r[4]=R32(c->r[13]+0xFFFF9D08u); // 801C0240
  c->r[3]=c->r[30]|c->r[30]; // 801C0244
  c->lr=0x801C024Cu; f_801BFCE8(c); // 801C0248
L_801C024C:;
  c->lr=0x801C0250u; f_801C11DC(c); // 801C024C
  c->r[3]=0u+0x00000001u; // 801C0250
  c->lr=0x801C0258u; f_801BFE94(c); // 801C0254
  c->lr=0x801C025Cu; f_801C318C(c); // 801C0258
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C025C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0260
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0264
  c->lr=c->r[0]; // 801C0268
  c->r[1]=c->r[1]+0x00000010u; // 801C026C
  return; // 801C0270
}

// fn_801C0274
void f_801C0274(Ctx* __restrict c) {
  trace_call(0x801C0274u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0274
  c->r[0]=c->lr; // 801C0278
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C027C
  c->lr=0x801C0284u; f_801C3A64(c); // 801C0280
  c->lr=0x801C0288u; f_801C3334(c); // 801C0284
  c->lr=0x801C028Cu; f_801CB378(c); // 801C0288
  c->r[3]=c->r[1]+0x00000010u; // 801C028C
  c->lr=0x801C0294u; f_801C3D30(c); // 801C0290
  c->lr=0x801C0298u; f_801CB188(c); // 801C0294
  cmpu(c,0,c->r[3],0x00000002u); // 801C0298
  if (crb(c,2)) { goto L_801C02AC; } // 801C029C
  c->r[0]=0u+0x00000003u; // 801C02A0
  W8(c->r[1]+0x00000016u,c->r[0]); // 801C02A4
  goto L_801C02E8; // 801C02A8
L_801C02AC:;
  c->r[0]=R8(c->r[1]+0x00000016u); // 801C02AC
  cmpu(c,0,c->r[0],0x00000001u); // 801C02B0
  if (!crb(c,2)) { goto L_801C02D4; } // 801C02B4
  c->r[3]=c->r[1]+0x00000008u; // 801C02B8
  c->lr=0x801C02C0u; f_801C0C60(c); // 801C02BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C02C0
  if (crb(c,2)) { goto L_801C02E0; } // 801C02C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C02C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C02CC
  if (crb(c,2)) { goto L_801C02E0; } // 801C02D0
L_801C02D4:;
  c->r[0]=0u+0x00000002u; // 801C02D4
  W8(c->r[1]+0x00000016u,c->r[0]); // 801C02D8
  goto L_801C02E8; // 801C02DC
L_801C02E0:;
  c->r[0]=0u+0x00000001u; // 801C02E0
  W8(c->r[1]+0x00000016u,c->r[0]); // 801C02E4
L_801C02E8:;
  c->r[0]=0u+0x00000003u; // 801C02E8
  W8(c->r[1]+0x00000015u,c->r[0]); // 801C02EC
  c->lr=0x801C02F4u; f_801C0D7C(c); // 801C02F0
  c->r[3]=c->r[1]+0x00000010u; // 801C02F4
  c->lr=0x801C02FCu; f_801C3C4C(c); // 801C02F8
  c->lr=0x801C0300u; f_801C11DC(c); // 801C02FC
  c->r[3]=0u+0x00000005u; // 801C0300
  c->lr=0x801C0308u; f_801BFE94(c); // 801C0304
  c->lr=0x801C030Cu; f_801C1218(c); // 801C0308
  c->lr=0x801C0310u; f_801BC21C(c); // 801C030C
  c->lr=0x801C0314u; f_801C11DC(c); // 801C0310
  c->lr=0x801C0318u; f_801D1C34(c); // 801C0314
  c->lr=0x801C031Cu; f_801C318C(c); // 801C0318
  c->r[3]=0u+0x804A0000u; // 801C031C
  c->r[5]=0u+0x804A0000u; // 801C0320
  c->r[3]=c->r[3]+0x00003CA0u; // 801C0324
  c->r[4]=0u+0x0000034Bu; // 801C0328
  c->r[5]=c->r[5]+0x00003CACu; // 801C032C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0330
  c->lr=0x801C0338u; f_801BB48C(c); // 801C0334
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C0338
  c->lr=c->r[0]; // 801C033C
  c->r[1]=c->r[1]+0x00000030u; // 801C0340
  return; // 801C0344
}

// fn_801C0348
void f_801C0348(Ctx* __restrict c) {
  trace_call(0x801C0348u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0348
  c->r[0]=c->lr; // 801C034C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C0350
  c->r[3]=c->r[1]+0x00000008u; // 801C0354
  c->lr=0x801C035Cu; f_801C3D30(c); // 801C0358
  c->r[3]=0u+0x00000002u; // 801C035C
  c->r[0]=0u+0x00000003u; // 801C0360
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801C0364
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801C0368
  c->lr=0x801C0370u; f_801C0D7C(c); // 801C036C
  c->r[3]=c->r[1]+0x00000008u; // 801C0370
  c->lr=0x801C0378u; f_801C3C4C(c); // 801C0374
  c->lr=0x801C037Cu; f_801BC21C(c); // 801C0378
  c->lr=0x801C0380u; f_801C11DC(c); // 801C037C
  c->lr=0x801C0384u; f_801D1C34(c); // 801C0380
  c->lr=0x801C0388u; f_801C318C(c); // 801C0384
  c->r[3]=0u+0x804A0000u; // 801C0388
  c->r[5]=0u+0x804A0000u; // 801C038C
  c->r[3]=c->r[3]+0x00003CA0u; // 801C0390
  c->r[4]=0u+0x00000365u; // 801C0394
  c->r[5]=c->r[5]+0x00003CDCu; // 801C0398
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C039C
  c->lr=0x801C03A4u; f_801BB48C(c); // 801C03A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C03A4
  c->lr=c->r[0]; // 801C03A8
  c->r[1]=c->r[1]+0x00000030u; // 801C03AC
  return; // 801C03B0
}

// OSGetResetCode
void f_801C03B4(Ctx* __restrict c) {
  trace_call(0x801C03B4u);
  c->r[3]=0u+0x80560000u; // 801C03B4
  c->r[0]=R32(c->r[3]+0xFFFF8BE0u); // 801C03B8
  cmps(c,0,(int32_t)c->r[0],0); // 801C03BC
  if (crb(c,2)) { goto L_801C03D4; } // 801C03C0
  c->r[3]=c->r[3]+0xFFFF8BE0u; // 801C03C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C03C8
  c->r[3]=c->r[0]|0x80000000u; // 801C03CC
  return; // 801C03D0
L_801C03D4:;
  c->r[3]=0u+0xCC000000u; // 801C03D4
  c->r[0]=R32(c->r[3]+0x00003024u); // 801C03D8
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C03DC
  return; // 801C03E0
}

// OSResetSystem
void f_801C03E4(Ctx* __restrict c) {
  trace_call(0x801C03E4u);
  c->r[3]=0u+0x804A0000u; // 801C03E4
  c->r[5]=0u+0x804A0000u; // 801C03E8
  c->r[3]=c->r[3]+0x00003CA0u; // 801C03EC
  c->r[4]=0u+0x000003FCu; // 801C03F0
  c->r[5]=c->r[5]+0x00003D10u; // 801C03F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C03F8
  f_801BB48C(c); return; // 801C03FC
}

// WriteSramCallback
void f_801C0400(Ctx* __restrict c) {
  trace_call(0x801C0400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0400
  c->r[0]=c->lr; // 801C0404
  c->r[6]=0u+0x80570000u; // 801C0408
  c->r[5]=0u+0x801C0000u; // 801C040C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0410
  c->r[6]=c->r[6]+0xFFFF9700u; // 801C0414
  c->r[3]=0u+0x00000000u; // 801C0418
  c->r[5]=c->r[5]+0x00000400u; // 801C041C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0420
  c->r[4]=0u+0x00000001u; // 801C0424
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0428
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C042C
  c->r[31]=R32(c->r[6]+0x00000040u); // 801C0430
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 801C0434
  c->r[30]=c->r[6]+c->r[31]; // 801C0438
  c->lr=0x801C0440u; f_801F88C8(c); // 801C043C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0440
  if (!crb(c,2)) { goto L_801C0450; } // 801C0444
  c->r[0]=0u+0x00000000u; // 801C0448
  goto L_801C0500; // 801C044C
L_801C0450:;
  c->r[3]=0u+0x00000000u; // 801C0450
  c->r[4]=0u+0x00000001u; // 801C0454
  c->r[5]=0u+0x00000003u; // 801C0458
  c->lr=0x801C0460u; f_801F8134(c); // 801C045C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0460
  if (!crb(c,2)) { goto L_801C0478; } // 801C0464
  c->r[3]=0u+0x00000000u; // 801C0468
  c->lr=0x801C0470u; f_801F89C4(c); // 801C046C
  c->r[0]=0u+0x00000000u; // 801C0470
  goto L_801C0500; // 801C0474
L_801C0478:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 801C0478
  c->r[4]=c->r[1]+0x00000008u; // 801C047C
  c->r[0]=c->r[3]+0x00000100u; // 801C0480
  c->r[5]=0u+0x00000004u; // 801C0484
  c->r[0]=c->r[0]|0xA0000000u; // 801C0488
  c->r[3]=0u+0x00000000u; // 801C048C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0490
  c->r[6]=0u+0x00000001u; // 801C0494
  c->r[7]=0u+0x00000000u; // 801C0498
  c->lr=0x801C04A0u; f_801F76CC(c); // 801C049C
  c->r[0]=cntlz(c->r[3]); // 801C04A0
  c->r[3]=0u+0x00000000u; // 801C04A4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C04A8
  c->lr=0x801C04B0u; f_801F7AE4(c); // 801C04AC
  c->r[0]=cntlz(c->r[3]); // 801C04B0
  c->r[4]=c->r[30]|c->r[30]; // 801C04B4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C04B8
  c->r[5]=c->r[29]|c->r[29]; // 801C04BC
  c->r[29]=c->r[31]|c->r[0]; // 801C04C0
  c->r[3]=0u+0x00000000u; // 801C04C4
  c->r[6]=0u+0x00000001u; // 801C04C8
  c->lr=0x801C04D0u; f_801F7948(c); // 801C04CC
  c->r[0]=cntlz(c->r[3]); // 801C04D0
  c->r[3]=0u+0x00000000u; // 801C04D4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C04D8
  c->r[29]=c->r[29]|c->r[0]; // 801C04DC
  c->lr=0x801C04E4u; f_801F8264(c); // 801C04E0
  c->r[0]=cntlz(c->r[3]); // 801C04E4
  c->r[3]=0u+0x00000000u; // 801C04E8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C04EC
  c->r[29]=c->r[29]|c->r[0]; // 801C04F0
  c->lr=0x801C04F8u; f_801F89C4(c); // 801C04F4
  c->r[0]=cntlz(c->r[29]); // 801C04F8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C04FC
L_801C0500:;
  c->r[3]=0u+0x80570000u; // 801C0500
  cmps(c,0,(int32_t)c->r[0],0); // 801C0504
  c->r[3]=c->r[3]+0xFFFF9700u; // 801C0508
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801C050C
  if (crb(c,2)) { goto L_801C051C; } // 801C0510
  c->r[0]=0u+0x00000040u; // 801C0514
  W32(c->r[3]+0x00000040u,c->r[0]); // 801C0518
L_801C051C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C051C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0520
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0524
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0528
  c->lr=c->r[0]; // 801C052C
  c->r[1]=c->r[1]+0x00000020u; // 801C0530
  return; // 801C0534
}

// __OSInitSram
void f_801C0538(Ctx* __restrict c) {
  trace_call(0x801C0538u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0538
  c->r[0]=c->lr; // 801C053C
  c->r[4]=0u+0x00000040u; // 801C0540
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0544
  c->r[0]=0u+0x00000000u; // 801C0548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C054C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0550
  c->r[30]=0u+0x80570000u; // 801C0554
  c->r[30]=c->r[30]+0xFFFF9700u; // 801C0558
  W32(c->r[30]+0x00000044u,c->r[0]); // 801C055C
  c->r[3]=c->r[30]|c->r[30]; // 801C0560
  W32(c->r[30]+0x00000048u,c->r[0]); // 801C0564
  c->lr=0x801C056Cu; f_801BA764(c); // 801C0568
  c->r[3]=0u+0x00000000u; // 801C056C
  c->r[4]=0u+0x00000001u; // 801C0570
  c->r[5]=0u+0x00000000u; // 801C0574
  c->lr=0x801C057Cu; f_801F88C8(c); // 801C0578
  cmps(c,0,(int32_t)c->r[3],0); // 801C057C
  if (!crb(c,2)) { goto L_801C058C; } // 801C0580
  c->r[3]=0u+0x00000000u; // 801C0584
  goto L_801C0650; // 801C0588
L_801C058C:;
  c->r[3]=0u+0x00000000u; // 801C058C
  c->r[4]=0u+0x00000001u; // 801C0590
  c->r[5]=0u+0x00000003u; // 801C0594
  c->lr=0x801C059Cu; f_801F8134(c); // 801C0598
  cmps(c,0,(int32_t)c->r[3],0); // 801C059C
  if (!crb(c,2)) { goto L_801C05B4; } // 801C05A0
  c->r[3]=0u+0x00000000u; // 801C05A4
  c->lr=0x801C05ACu; f_801F89C4(c); // 801C05A8
  c->r[3]=0u+0x00000000u; // 801C05AC
  goto L_801C0650; // 801C05B0
L_801C05B4:;
  c->r[3]=0u+0x20000000u; // 801C05B4
  c->r[4]=c->r[1]+0x00000008u; // 801C05B8
  c->r[0]=c->r[3]+0x00000100u; // 801C05BC
  c->r[5]=0u+0x00000004u; // 801C05C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C05C4
  c->r[3]=0u+0x00000000u; // 801C05C8
  c->r[6]=0u+0x00000001u; // 801C05CC
  c->r[7]=0u+0x00000000u; // 801C05D0
  c->lr=0x801C05D8u; f_801F76CC(c); // 801C05D4
  c->r[0]=cntlz(c->r[3]); // 801C05D8
  c->r[3]=0u+0x00000000u; // 801C05DC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C05E0
  c->lr=0x801C05E8u; f_801F7AE4(c); // 801C05E4
  c->r[0]=cntlz(c->r[3]); // 801C05E8
  c->r[4]=c->r[30]|c->r[30]; // 801C05EC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C05F0
  c->r[3]=0u+0x00000000u; // 801C05F4
  c->r[30]=c->r[31]|c->r[0]; // 801C05F8
  c->r[5]=0u+0x00000040u; // 801C05FC
  c->r[6]=0u+0x00000000u; // 801C0600
  c->r[7]=0u+0x00000000u; // 801C0604
  c->lr=0x801C060Cu; f_801F79EC(c); // 801C0608
  c->r[0]=cntlz(c->r[3]); // 801C060C
  c->r[3]=0u+0x00000000u; // 801C0610
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0614
  c->r[30]=c->r[30]|c->r[0]; // 801C0618
  c->lr=0x801C0620u; f_801F7AE4(c); // 801C061C
  c->r[0]=cntlz(c->r[3]); // 801C0620
  c->r[3]=0u+0x00000000u; // 801C0624
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0628
  c->r[30]=c->r[30]|c->r[0]; // 801C062C
  c->lr=0x801C0634u; f_801F8264(c); // 801C0630
  c->r[0]=cntlz(c->r[3]); // 801C0634
  c->r[3]=0u+0x00000000u; // 801C0638
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C063C
  c->r[30]=c->r[30]|c->r[0]; // 801C0640
  c->lr=0x801C0648u; f_801F89C4(c); // 801C0644
  c->r[0]=cntlz(c->r[30]); // 801C0648
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C064C
L_801C0650:;
  c->r[31]=0u+0x80570000u; // 801C0650
  c->r[0]=0u+0x00000040u; // 801C0654
  c->r[31]=c->r[31]+0xFFFF9700u; // 801C0658
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801C065C
  W32(c->r[31]+0x00000040u,c->r[0]); // 801C0660
  c->lr=0x801C0668u; f_801BE74C(c); // 801C0664
  c->r[0]=R32(c->r[31]+0x00000048u); // 801C0668
  cmps(c,0,(int32_t)c->r[0],0); // 801C066C
  if (crb(c,2)) { goto L_801C0680; } // 801C0670
  c->lr=0x801C0678u; f_801BE774(c); // 801C0674
  c->r[3]=0u+0x00000000u; // 801C0678
  goto L_801C0690; // 801C067C
L_801C0680:;
  c->r[0]=0u+0x00000001u; // 801C0680
  W32(c->r[31]+0x00000044u,c->r[3]); // 801C0684
  c->r[3]=c->r[31]+0x00000014u; // 801C0688
  W32(c->r[31]+0x00000048u,c->r[0]); // 801C068C
L_801C0690:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 801C0690
  c->r[3]=0u+0x00000000u; // 801C0694
  c->r[4]=0u+0x00000014u; // 801C0698
  c->lr=0x801C06A0u; f_801C0738(c); // 801C069C
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 801C06A0
  cmpu(c,0,c->r[0],0x00005000u); // 801C06A4
  if (crb(c,2)) { goto L_801C06B8; } // 801C06A8
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 801C06AC
  cmpu(c,0,c->r[0],0x000000C0u); // 801C06B0
  if (!crb(c,2)) { goto L_801C06BC; } // 801C06B4
L_801C06B8:;
  c->r[30]=0u+0x00000000u; // 801C06B8
L_801C06BC:;
  c->lr=0x801C06C0u; f_801BE74C(c); // 801C06BC
  c->r[4]=0u+0x80570000u; // 801C06C0
  c->r[4]=c->r[4]+0xFFFF9700u; // 801C06C4
  c->r[0]=R32(c->r[4]+0x00000048u); // 801C06C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C06CC
  if (crb(c,2)) { goto L_801C06E0; } // 801C06D0
  c->lr=0x801C06D8u; f_801BE774(c); // 801C06D4
  c->r[5]=0u+0x00000000u; // 801C06D8
  goto L_801C06F0; // 801C06DC
L_801C06E0:;
  c->r[0]=0u+0x00000001u; // 801C06E0
  W32(c->r[4]+0x00000044u,c->r[3]); // 801C06E4
  c->r[5]=c->r[4]+0x00000014u; // 801C06E8
  W32(c->r[4]+0x00000048u,c->r[0]); // 801C06EC
L_801C06F0:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 801C06F0
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801C06F4
  cmpu(c,0,c->r[3],c->r[0]); // 801C06F8
  if (!crb(c,2)) { goto L_801C0710; } // 801C06FC
  c->r[3]=0u+0x00000000u; // 801C0700
  c->r[4]=0u+0x00000014u; // 801C0704
  c->lr=0x801C070Cu; f_801C0738(c); // 801C0708
  goto L_801C0720; // 801C070C
L_801C0710:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 801C0710
  c->r[3]=0u+0x00000001u; // 801C0714
  c->r[4]=0u+0x00000014u; // 801C0718
  c->lr=0x801C0720u; f_801C0738(c); // 801C071C
L_801C0720:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0720
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0724
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0728
  c->lr=c->r[0]; // 801C072C
  c->r[1]=c->r[1]+0x00000020u; // 801C0730
  return; // 801C0734
}

// UnlockSram
void f_801C0738(Ctx* __restrict c) {
  trace_call(0x801C0738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0738
  c->r[0]=c->lr; // 801C073C
  cmps(c,0,(int32_t)c->r[3],0); // 801C0740
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0748
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C074C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C0750
  if (crb(c,2)) { goto L_801C09E0; } // 801C0754
  cmps(c,0,(int32_t)c->r[4],0); // 801C0758
  if (!crb(c,2)) { goto L_801C088C; } // 801C075C
  c->r[8]=0u+0x80570000u; // 801C0760
  c->r[8]=c->r[8]+0xFFFF9700u; // 801C0764
  c->r[3]=R8(c->r[8]+0x00000013u); // 801C0768
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801C076C
  cmpu(c,0,c->r[0],0x00000002u); // 801C0770
  if (!crb(c,1)) { goto L_801C0780; } // 801C0774
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 801C0778
  W8(c->r[8]+0x00000013u,c->r[0]); // 801C077C
L_801C0780:;
  c->r[3]=0u+0x80570000u; // 801C0780
  c->r[0]=0u+0x00000000u; // 801C0784
  c->r[3]=c->r[3]+0xFFFF9700u; // 801C0788
  c->r[7]=c->r[8]+0x0000000Cu; // 801C078C
  c->r[5]=c->r[3]+0x00000014u; // 801C0790
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C0794
  c->r[3]=c->r[5]+0x00000001u; // 801C0798
  c->r[3]=c->r[3]-c->r[7]; // 801C079C
  cmpu(c,0,c->r[7],c->r[5]); // 801C07A0
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C07A4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801C07A8
  if (!crb(c,0)) { goto L_801C088C; } // 801C07AC
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801C07B0
  c->ctr=c->r[0]; // 801C07B4
  if (crb(c,2)) { goto L_801C085C; } // 801C07B8
L_801C07BC:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 801C07BC
  c->r[0]=R16(c->r[7]+0x00000000u); // 801C07C0
  c->r[5]=R16(c->r[8]+0x00000002u); // 801C07C4
  c->r[0]=c->r[6]+c->r[0]; // 801C07C8
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C07CC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801C07D0
  c->r[0]=R16(c->r[7]+0x00000000u); // 801C07D4
  c->r[0]=~(c->r[0]|c->r[0]); // 801C07D8
  c->r[0]=c->r[5]+c->r[0]; // 801C07DC
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C07E0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801C07E4
  c->r[0]=R16(c->r[7]+0x00000002u); // 801C07E8
  c->r[0]=c->r[6]+c->r[0]; // 801C07EC
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C07F0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801C07F4
  c->r[0]=R16(c->r[7]+0x00000002u); // 801C07F8
  c->r[0]=~(c->r[0]|c->r[0]); // 801C07FC
  c->r[0]=c->r[5]+c->r[0]; // 801C0800
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C0804
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801C0808
  c->r[0]=R16(c->r[7]+0x00000004u); // 801C080C
  c->r[0]=c->r[6]+c->r[0]; // 801C0810
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C0814
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801C0818
  c->r[0]=R16(c->r[7]+0x00000004u); // 801C081C
  c->r[0]=~(c->r[0]|c->r[0]); // 801C0820
  c->r[0]=c->r[5]+c->r[0]; // 801C0824
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C0828
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801C082C
  c->r[0]=R16(c->r[7]+0x00000006u); // 801C0830
  c->r[0]=c->r[6]+c->r[0]; // 801C0834
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C0838
  c->r[0]=R16(c->r[7]+0x00000006u); // 801C083C
  c->r[7]=c->r[7]+0x00000008u; // 801C0840
  c->r[0]=~(c->r[0]|c->r[0]); // 801C0844
  c->r[0]=c->r[5]+c->r[0]; // 801C0848
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C084C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C07BC; } // 801C0850
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 801C0854
  if (crb(c,2)) { goto L_801C088C; } // 801C0858
L_801C085C:;
  c->ctr=c->r[3]; // 801C085C
L_801C0860:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 801C0860
  c->r[0]=R16(c->r[7]+0x00000000u); // 801C0864
  c->r[5]=R16(c->r[8]+0x00000002u); // 801C0868
  c->r[0]=c->r[6]+c->r[0]; // 801C086C
  W16(c->r[8]+0x00000000u,c->r[0]); // 801C0870
  c->r[0]=R16(c->r[7]+0x00000000u); // 801C0874
  c->r[7]=c->r[7]+0x00000002u; // 801C0878
  c->r[0]=~(c->r[0]|c->r[0]); // 801C087C
  c->r[0]=c->r[5]+c->r[0]; // 801C0880
  W16(c->r[8]+0x00000002u,c->r[0]); // 801C0884
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C0860; } // 801C0888
L_801C088C:;
  c->r[3]=0u+0x80570000u; // 801C088C
  c->r[3]=c->r[3]+0xFFFF9700u; // 801C0890
  c->r[0]=R32(c->r[3]+0x00000040u); // 801C0894
  cmpu(c,0,c->r[4],c->r[0]); // 801C0898
  if (!crb(c,0)) { goto L_801C08A4; } // 801C089C
  W32(c->r[3]+0x00000040u,c->r[4]); // 801C08A0
L_801C08A4:;
  c->r[4]=0u+0x80570000u; // 801C08A4
  c->r[4]=c->r[4]+0xFFFF9700u; // 801C08A8
  c->r[0]=R32(c->r[4]+0x00000040u); // 801C08AC
  cmpu(c,0,c->r[0],0x00000014u); // 801C08B0
  if (crb(c,1)) { goto L_801C08DC; } // 801C08B4
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 801C08B8
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 801C08BC
  cmpu(c,0,c->r[0],0x00005000u); // 801C08C0
  if (crb(c,2)) { goto L_801C08D4; } // 801C08C4
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 801C08C8
  cmpu(c,0,c->r[0],0x000000C0u); // 801C08CC
  if (!crb(c,2)) { goto L_801C08DC; } // 801C08D0
L_801C08D4:;
  c->r[0]=0u+0x00000000u; // 801C08D4
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 801C08D8
L_801C08DC:;
  c->r[6]=0u+0x80570000u; // 801C08DC
  c->r[5]=0u+0x801C0000u; // 801C08E0
  c->r[6]=c->r[6]+0xFFFF9700u; // 801C08E4
  c->r[3]=0u+0x00000000u; // 801C08E8
  c->r[31]=R32(c->r[6]+0x00000040u); // 801C08EC
  c->r[5]=c->r[5]+0x00000400u; // 801C08F0
  c->r[4]=0u+0x00000001u; // 801C08F4
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 801C08F8
  c->r[30]=c->r[6]+c->r[31]; // 801C08FC
  c->lr=0x801C0904u; f_801F88C8(c); // 801C0900
  cmps(c,0,(int32_t)c->r[3],0); // 801C0904
  if (!crb(c,2)) { goto L_801C0914; } // 801C0908
  c->r[0]=0u+0x00000000u; // 801C090C
  goto L_801C09C4; // 801C0910
L_801C0914:;
  c->r[3]=0u+0x00000000u; // 801C0914
  c->r[4]=0u+0x00000001u; // 801C0918
  c->r[5]=0u+0x00000003u; // 801C091C
  c->lr=0x801C0924u; f_801F8134(c); // 801C0920
  cmps(c,0,(int32_t)c->r[3],0); // 801C0924
  if (!crb(c,2)) { goto L_801C093C; } // 801C0928
  c->r[3]=0u+0x00000000u; // 801C092C
  c->lr=0x801C0934u; f_801F89C4(c); // 801C0930
  c->r[0]=0u+0x00000000u; // 801C0934
  goto L_801C09C4; // 801C0938
L_801C093C:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 801C093C
  c->r[4]=c->r[1]+0x00000008u; // 801C0940
  c->r[0]=c->r[3]+0x00000100u; // 801C0944
  c->r[5]=0u+0x00000004u; // 801C0948
  c->r[0]=c->r[0]|0xA0000000u; // 801C094C
  c->r[3]=0u+0x00000000u; // 801C0950
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0954
  c->r[6]=0u+0x00000001u; // 801C0958
  c->r[7]=0u+0x00000000u; // 801C095C
  c->lr=0x801C0964u; f_801F76CC(c); // 801C0960
  c->r[0]=cntlz(c->r[3]); // 801C0964
  c->r[3]=0u+0x00000000u; // 801C0968
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C096C
  c->lr=0x801C0974u; f_801F7AE4(c); // 801C0970
  c->r[0]=cntlz(c->r[3]); // 801C0974
  c->r[4]=c->r[30]|c->r[30]; // 801C0978
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C097C
  c->r[5]=c->r[29]|c->r[29]; // 801C0980
  c->r[29]=c->r[31]|c->r[0]; // 801C0984
  c->r[3]=0u+0x00000000u; // 801C0988
  c->r[6]=0u+0x00000001u; // 801C098C
  c->lr=0x801C0994u; f_801F7948(c); // 801C0990
  c->r[0]=cntlz(c->r[3]); // 801C0994
  c->r[3]=0u+0x00000000u; // 801C0998
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C099C
  c->r[29]=c->r[29]|c->r[0]; // 801C09A0
  c->lr=0x801C09A8u; f_801F8264(c); // 801C09A4
  c->r[0]=cntlz(c->r[3]); // 801C09A8
  c->r[3]=0u+0x00000000u; // 801C09AC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C09B0
  c->r[29]=c->r[29]|c->r[0]; // 801C09B4
  c->lr=0x801C09BCu; f_801F89C4(c); // 801C09B8
  c->r[0]=cntlz(c->r[29]); // 801C09BC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C09C0
L_801C09C4:;
  c->r[3]=0u+0x80570000u; // 801C09C4
  cmps(c,0,(int32_t)c->r[0],0); // 801C09C8
  c->r[3]=c->r[3]+0xFFFF9700u; // 801C09CC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801C09D0
  if (crb(c,2)) { goto L_801C09E0; } // 801C09D4
  c->r[0]=0u+0x00000040u; // 801C09D8
  W32(c->r[3]+0x00000040u,c->r[0]); // 801C09DC
L_801C09E0:;
  c->r[31]=0u+0x80570000u; // 801C09E0
  c->r[0]=0u+0x00000000u; // 801C09E4
  c->r[31]=c->r[31]+0xFFFF9700u; // 801C09E8
  W32(c->r[31]+0x00000048u,c->r[0]); // 801C09EC
  c->r[3]=R32(c->r[31]+0x00000044u); // 801C09F0
  c->lr=0x801C09F8u; f_801BE774(c); // 801C09F4
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801C09F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C09FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0A00
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C0A04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0A08
  c->lr=c->r[0]; // 801C0A0C
  c->r[1]=c->r[1]+0x00000020u; // 801C0A10
  return; // 801C0A14
}

// __OSSyncSram
void f_801C0A18(Ctx* __restrict c) {
  trace_call(0x801C0A18u);
  c->r[3]=0u+0x80570000u; // 801C0A18
  c->r[3]=c->r[3]+0xFFFF9700u; // 801C0A1C
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 801C0A20
  return; // 801C0A24
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_801C0A28(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_801C0B4C(Ctx* __restrict c) {
  trace_call(0x801C0B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0B4C
  c->r[0]=c->lr; // 801C0B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0B58
  c->r[31]=c->r[3]|c->r[3]; // 801C0B5C
  c->lr=0x801C0B64u; f_801BE74C(c); // 801C0B60
  c->r[4]=0u+0x80570000u; // 801C0B64
  c->r[4]=c->r[4]+0xFFFF9700u; // 801C0B68
  c->r[0]=R32(c->r[4]+0x00000048u); // 801C0B6C
  cmps(c,0,(int32_t)c->r[0],0); // 801C0B70
  if (crb(c,2)) { goto L_801C0B84; } // 801C0B74
  c->lr=0x801C0B7Cu; f_801BE774(c); // 801C0B78
  c->r[5]=0u+0x00000000u; // 801C0B7C
  goto L_801C0B94; // 801C0B80
L_801C0B84:;
  c->r[0]=0u+0x00000001u; // 801C0B84
  W32(c->r[4]+0x00000044u,c->r[3]); // 801C0B88
  c->r[5]=c->r[4]+0x00000014u; // 801C0B8C
  W32(c->r[4]+0x00000048u,c->r[0]); // 801C0B90
L_801C0B94:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801C0B94
  c->r[3]=0u+0x00000000u; // 801C0B98
  c->r[5]=c->r[5]+c->r[0]; // 801C0B9C
  c->r[4]=0u+0x00000014u; // 801C0BA0
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 801C0BA4
  c->lr=0x801C0BACu; f_801C0738(c); // 801C0BA8
  c->r[3]=c->r[31]|c->r[31]; // 801C0BAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0BB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0BB4
  c->lr=c->r[0]; // 801C0BB8
  c->r[1]=c->r[1]+0x00000010u; // 801C0BBC
  return; // 801C0BC0
}

// OSSetWirelessID
void f_801C0BC4(Ctx* __restrict c) {
  trace_call(0x801C0BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0BC4
  c->r[0]=c->lr; // 801C0BC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0BCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0BD0
  c->r[31]=c->r[4]|c->r[4]; // 801C0BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0BD8
  c->r[30]=c->r[3]|c->r[3]; // 801C0BDC
  c->lr=0x801C0BE4u; f_801BE74C(c); // 801C0BE0
  c->r[4]=0u+0x80570000u; // 801C0BE4
  c->r[4]=c->r[4]+0xFFFF9700u; // 801C0BE8
  c->r[0]=R32(c->r[4]+0x00000048u); // 801C0BEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C0BF0
  if (crb(c,2)) { goto L_801C0C04; } // 801C0BF4
  c->lr=0x801C0BFCu; f_801BE774(c); // 801C0BF8
  c->r[3]=0u+0x00000000u; // 801C0BFC
  goto L_801C0C14; // 801C0C00
L_801C0C04:;
  c->r[0]=0u+0x00000001u; // 801C0C04
  W32(c->r[4]+0x00000044u,c->r[3]); // 801C0C08
  c->r[3]=c->r[4]+0x00000014u; // 801C0C0C
  W32(c->r[4]+0x00000048u,c->r[0]); // 801C0C10
L_801C0C14:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801C0C14
  c->r[3]=c->r[3]+c->r[0]; // 801C0C18
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 801C0C1C
  cmpu(c,0,c->r[31],c->r[0]); // 801C0C20
  if (crb(c,2)) { goto L_801C0C3C; } // 801C0C24
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 801C0C28
  c->r[3]=0u+0x00000001u; // 801C0C2C
  c->r[4]=0u+0x00000014u; // 801C0C30
  c->lr=0x801C0C38u; f_801C0738(c); // 801C0C34
  goto L_801C0C48; // 801C0C38
L_801C0C3C:;
  c->r[3]=0u+0x00000000u; // 801C0C3C
  c->r[4]=0u+0x00000014u; // 801C0C40
  c->lr=0x801C0C48u; f_801C0738(c); // 801C0C44
L_801C0C48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0C50
  c->lr=c->r[0]; // 801C0C54
  c->r[1]=c->r[1]+0x00000010u; // 801C0C58
  return; // 801C0C5C
}

// __OSGetRTCFlags
void f_801C0C60(Ctx* __restrict c) {
  trace_call(0x801C0C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0C60
  c->r[0]=c->lr; // 801C0C64
  c->r[4]=0u+0x00000001u; // 801C0C68
  c->r[5]=0u+0x00000000u; // 801C0C6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0C74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0C78
  c->r[30]=c->r[3]|c->r[3]; // 801C0C7C
  c->r[3]=0u+0x00000000u; // 801C0C80
  c->lr=0x801C0C88u; f_801F88C8(c); // 801C0C84
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C88
  if (!crb(c,2)) { goto L_801C0C98; } // 801C0C8C
  c->r[3]=0u+0x00000000u; // 801C0C90
  goto L_801C0D64; // 801C0C94
L_801C0C98:;
  c->r[3]=0u+0x00000000u; // 801C0C98
  c->r[4]=0u+0x00000001u; // 801C0C9C
  c->r[5]=0u+0x00000003u; // 801C0CA0
  c->lr=0x801C0CA8u; f_801F8134(c); // 801C0CA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C0CA8
  if (!crb(c,2)) { goto L_801C0CC0; } // 801C0CAC
  c->r[3]=0u+0x00000000u; // 801C0CB0
  c->lr=0x801C0CB8u; f_801F89C4(c); // 801C0CB4
  c->r[3]=0u+0x00000000u; // 801C0CB8
  goto L_801C0D64; // 801C0CBC
L_801C0CC0:;
  c->r[3]=0u+0x21000000u; // 801C0CC0
  c->r[4]=c->r[1]+0x00000008u; // 801C0CC4
  c->r[0]=c->r[3]+0x00000800u; // 801C0CC8
  c->r[5]=0u+0x00000004u; // 801C0CCC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0CD0
  c->r[3]=0u+0x00000000u; // 801C0CD4
  c->r[6]=0u+0x00000001u; // 801C0CD8
  c->r[7]=0u+0x00000000u; // 801C0CDC
  c->lr=0x801C0CE4u; f_801F76CC(c); // 801C0CE0
  c->r[0]=cntlz(c->r[3]); // 801C0CE4
  c->r[3]=0u+0x00000000u; // 801C0CE8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0CEC
  c->lr=0x801C0CF4u; f_801F7AE4(c); // 801C0CF0
  c->r[0]=cntlz(c->r[3]); // 801C0CF4
  c->r[4]=c->r[1]+0x00000008u; // 801C0CF8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0CFC
  c->r[3]=0u+0x00000000u; // 801C0D00
  c->r[31]=c->r[31]|c->r[0]; // 801C0D04
  c->r[5]=0u+0x00000004u; // 801C0D08
  c->r[6]=0u+0x00000000u; // 801C0D0C
  c->r[7]=0u+0x00000000u; // 801C0D10
  c->lr=0x801C0D18u; f_801F76CC(c); // 801C0D14
  c->r[0]=cntlz(c->r[3]); // 801C0D18
  c->r[3]=0u+0x00000000u; // 801C0D1C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0D20
  c->r[31]=c->r[31]|c->r[0]; // 801C0D24
  c->lr=0x801C0D2Cu; f_801F7AE4(c); // 801C0D28
  c->r[0]=cntlz(c->r[3]); // 801C0D2C
  c->r[3]=0u+0x00000000u; // 801C0D30
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0D34
  c->r[31]=c->r[31]|c->r[0]; // 801C0D38
  c->lr=0x801C0D40u; f_801F8264(c); // 801C0D3C
  c->r[0]=cntlz(c->r[3]); // 801C0D40
  c->r[3]=0u+0x00000000u; // 801C0D44
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0D48
  c->r[31]=c->r[31]|c->r[0]; // 801C0D4C
  c->lr=0x801C0D54u; f_801F89C4(c); // 801C0D50
  c->r[4]=R32(c->r[1]+0x00000008u); // 801C0D54
  c->r[0]=cntlz(c->r[31]); // 801C0D58
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0D5C
  W32(c->r[30]+0x00000000u,c->r[4]); // 801C0D60
L_801C0D64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0D64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0D68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0D6C
  c->lr=c->r[0]; // 801C0D70
  c->r[1]=c->r[1]+0x00000020u; // 801C0D74
  return; // 801C0D78
}

// __OSClearRTCFlags
void f_801C0D7C(Ctx* __restrict c) {
  trace_call(0x801C0D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0D7C
  c->r[0]=c->lr; // 801C0D80
  c->r[3]=0u+0x00000000u; // 801C0D84
  c->r[4]=0u+0x00000001u; // 801C0D88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0D8C
  c->r[0]=0u+0x00000000u; // 801C0D90
  c->r[5]=0u+0x00000000u; // 801C0D94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0D98
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0D9C
  c->lr=0x801C0DA4u; f_801F88C8(c); // 801C0DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C0DA4
  if (!crb(c,2)) { goto L_801C0DB4; } // 801C0DA8
  c->r[3]=0u+0x00000000u; // 801C0DAC
  goto L_801C0E78; // 801C0DB0
L_801C0DB4:;
  c->r[3]=0u+0x00000000u; // 801C0DB4
  c->r[4]=0u+0x00000001u; // 801C0DB8
  c->r[5]=0u+0x00000003u; // 801C0DBC
  c->lr=0x801C0DC4u; f_801F8134(c); // 801C0DC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C0DC4
  if (!crb(c,2)) { goto L_801C0DDC; } // 801C0DC8
  c->r[3]=0u+0x00000000u; // 801C0DCC
  c->lr=0x801C0DD4u; f_801F89C4(c); // 801C0DD0
  c->r[3]=0u+0x00000000u; // 801C0DD4
  goto L_801C0E78; // 801C0DD8
L_801C0DDC:;
  c->r[3]=0u+0xA1000000u; // 801C0DDC
  c->r[4]=c->r[1]+0x0000000Cu; // 801C0DE0
  c->r[0]=c->r[3]+0x00000800u; // 801C0DE4
  c->r[5]=0u+0x00000004u; // 801C0DE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C0DEC
  c->r[3]=0u+0x00000000u; // 801C0DF0
  c->r[6]=0u+0x00000001u; // 801C0DF4
  c->r[7]=0u+0x00000000u; // 801C0DF8
  c->lr=0x801C0E00u; f_801F76CC(c); // 801C0DFC
  c->r[0]=cntlz(c->r[3]); // 801C0E00
  c->r[3]=0u+0x00000000u; // 801C0E04
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E08
  c->lr=0x801C0E10u; f_801F7AE4(c); // 801C0E0C
  c->r[0]=cntlz(c->r[3]); // 801C0E10
  c->r[4]=c->r[1]+0x00000008u; // 801C0E14
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E18
  c->r[3]=0u+0x00000000u; // 801C0E1C
  c->r[31]=c->r[31]|c->r[0]; // 801C0E20
  c->r[5]=0u+0x00000004u; // 801C0E24
  c->r[6]=0u+0x00000001u; // 801C0E28
  c->r[7]=0u+0x00000000u; // 801C0E2C
  c->lr=0x801C0E34u; f_801F76CC(c); // 801C0E30
  c->r[0]=cntlz(c->r[3]); // 801C0E34
  c->r[3]=0u+0x00000000u; // 801C0E38
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E3C
  c->r[31]=c->r[31]|c->r[0]; // 801C0E40
  c->lr=0x801C0E48u; f_801F7AE4(c); // 801C0E44
  c->r[0]=cntlz(c->r[3]); // 801C0E48
  c->r[3]=0u+0x00000000u; // 801C0E4C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E50
  c->r[31]=c->r[31]|c->r[0]; // 801C0E54
  c->lr=0x801C0E5Cu; f_801F8264(c); // 801C0E58
  c->r[0]=cntlz(c->r[3]); // 801C0E5C
  c->r[3]=0u+0x00000000u; // 801C0E60
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E64
  c->r[31]=c->r[31]|c->r[0]; // 801C0E68
  c->lr=0x801C0E70u; f_801F89C4(c); // 801C0E6C
  c->r[0]=cntlz(c->r[31]); // 801C0E70
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C0E74
L_801C0E78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0E78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0E7C
  c->lr=c->r[0]; // 801C0E80
  c->r[1]=c->r[1]+0x00000020u; // 801C0E84
  return; // 801C0E88
}

// fn_801C0E8C
void f_801C0E8C(Ctx* __restrict c) {
  trace_call(0x801C0E8Cu);
  c->r[9]=mfspr(c,1008); // 801C0E8C
  c->r[10]=c->r[9]|0x00000008u; // 801C0E90
  mtspr(c,1008,c->r[10]); // 801C0E94
  /* isync */ // 801C0E98
  /* sync */ // 801C0E9C
  mtspr(c,1008,c->r[9]); // 801C0EA0
  return; /* rfi */ // 801C0EA4
  f_801C0EA8(c);
}

// fn_801C0EA8
void f_801C0EA8(Ctx* __restrict c) {
  trace_call(0x801C0EA8u);
  c->r[0]=c->r[0]|0x00000000u; // 801C0EA8
  f_801C0EAC(c);
}

// __OSInitSystemCall
void f_801C0EAC(Ctx* __restrict c) {
  trace_call(0x801C0EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0EAC
  c->r[0]=c->lr; // 801C0EB0
  c->r[4]=0u+0x801C0000u; // 801C0EB4
  c->r[5]=0u+0x801C0000u; // 801C0EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0EBC
  c->r[4]=c->r[4]+0x00000E8Cu; // 801C0EC0
  c->r[5]=c->r[5]+0x00000EA8u; // 801C0EC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0EC8
  c->r[31]=0u+0x80000000u; // 801C0ECC
  c->r[3]=c->r[31]+0x00000C00u; // 801C0ED0
  c->r[5]=c->r[5]-c->r[4]; // 801C0ED4
  c->lr=0x801C0EDCu; f_80004338(c); // 801C0ED8
  c->r[3]=c->r[31]+0x00000C00u; // 801C0EDC
  c->r[4]=0u+0x00000100u; // 801C0EE0
  c->lr=0x801C0EE8u; f_801BA7F0(c); // 801C0EE4
  /* sync */ // 801C0EE8
  c->r[3]=c->r[31]+0x00000C00u; // 801C0EEC
  c->r[4]=0u+0x00000100u; // 801C0EF0
  c->lr=0x801C0EF8u; f_801BA874(c); // 801C0EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0EFC
  c->lr=c->r[0]; // 801C0F00
  c->r[1]=c->r[1]+0x00000010u; // 801C0F04
  return; // 801C0F08
}

// fn_801C0F0C
void f_801C0F0C(Ctx* __restrict c) {
  trace_call(0x801C0F0Cu);
  return; // 801C0F0C
}

// __OSThreadInit
void f_801C0F10(Ctx* __restrict c) {
  trace_call(0x801C0F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0F10
  c->r[0]=c->lr; // 801C0F14
  c->r[3]=0u+0x00000002u; // 801C0F18
  c->r[6]=0u+0x00000001u; // 801C0F1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0F20
  c->r[4]=0u+0x00000000u; // 801C0F24
  c->r[5]=0u+0x00000010u; // 801C0F28
  c->r[0]=0u+0xFFFFFFFFu; // 801C0F2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0F30
  c->r[31]=0u+0x80570000u; // 801C0F34
  c->r[31]=c->r[31]+0xFFFF9758u; // 801C0F38
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C0F3C
  c->r[30]=c->r[31]+0x00000000u; // 801C0F40
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C0F44
  c->r[29]=0u+0x80000000u; // 801C0F48
  W16(c->r[30]+0x000002C8u,c->r[3]); // 801C0F4C
  c->r[3]=c->r[30]|c->r[30]; // 801C0F50
  W16(c->r[30]+0x000002CAu,c->r[6]); // 801C0F54
  W32(c->r[30]+0x000002D4u,c->r[5]); // 801C0F58
  W32(c->r[30]+0x000002D0u,c->r[5]); // 801C0F5C
  W32(c->r[30]+0x000002CCu,c->r[4]); // 801C0F60
  W32(c->r[30]+0x000002D8u,c->r[0]); // 801C0F64
  W32(c->r[30]+0x000002F0u,c->r[4]); // 801C0F68
  W32(c->r[30]+0x000002ECu,c->r[4]); // 801C0F6C
  W32(c->r[30]+0x000002E8u,c->r[4]); // 801C0F70
  W32(c->r[30]+0x000002F8u,c->r[4]); // 801C0F74
  W32(c->r[30]+0x000002F4u,c->r[4]); // 801C0F78
  W32(c->r[29]+0x000000D8u,c->r[30]); // 801C0F7C
  c->lr=0x801C0F84u; f_801BAFF0(c); // 801C0F80
  c->r[3]=c->r[30]|c->r[30]; // 801C0F84
  c->lr=0x801C0F8Cu; f_801BADC8(c); // 801C0F88
  c->r[4]=0u+0x806F0000u; // 801C0F8C
  c->r[5]=0u+0x806E0000u; // 801C0F90
  c->r[4]=c->r[4]+0xFFFFA278u; // 801C0F94
  c->r[3]=0u+0xDEAE0000u; // 801C0F98
  c->r[5]=c->r[5]+0xFFFFA278u; // 801C0F9C
  W32(c->r[30]+0x00000304u,c->r[4]); // 801C0FA0
  c->r[0]=c->r[3]+0xFFFFBABEu; // 801C0FA4
  c->r[4]=c->r[30]|c->r[30]; // 801C0FA8
  W32(c->r[30]+0x00000308u,c->r[5]); // 801C0FAC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801C0FB0
  c->r[12]=R32(c->r[13]+0xFFFF8438u); // 801C0FB4
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801C0FB8
  c->ctr=c->r[12]; // 801C0FBC
  if (true) { c->lr=0x801C0FC4u; dispatch(c,c->ctr); } // 801C0FC0
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801C0FC4
  c->lr=0x801C0FCCu; f_801BAF88(c); // 801C0FC8
  c->r[4]=R32(c->r[29]+0x000000E4u); // 801C0FCC
  c->r[4]=R32(c->r[4]+0x00000308u); // 801C0FD0
  c->r[8]=c->r[4]+0x00000004u; // 801C0FD4
  cmpu(c,1,c->r[8],c->r[3]); // 801C0FD8
  if (!crb(c,4)) { goto L_801C109C; } // 801C0FDC
  c->r[5]=c->r[3]-c->r[8]; // 801C0FE0
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 801C0FE4
  c->r[4]=c->r[5]+0x00000003u; // 801C0FE8
  c->r[0]=sraw(c,c->r[4],2); // 801C0FEC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C0FF0
  cmps(c,0,(int32_t)c->r[0],8); // 801C0FF4
  if (!crb(c,1)) { goto L_801C1074; } // 801C0FF8
  c->r[7]=0u+0x00000000u; // 801C0FFC
  if (crb(c,5)) { goto L_801C1028; } // 801C1000
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 801C1004
  c->r[5]=0u+0x00000001u; // 801C1008
  if (!crb(c,2)) { goto L_801C101C; } // 801C100C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 801C1010
  if (crb(c,2)) { goto L_801C101C; } // 801C1014
  c->r[5]=0u+0x00000000u; // 801C1018
L_801C101C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C101C
  if (crb(c,2)) { goto L_801C1028; } // 801C1020
  c->r[7]=0u+0x00000001u; // 801C1024
L_801C1028:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C1028
  if (crb(c,2)) { goto L_801C1074; } // 801C102C
  c->r[0]=c->r[6]+0x0000001Fu; // 801C1030
  c->r[4]=0u+0x00000000u; // 801C1034
  c->r[0]=c->r[0]-c->r[8]; // 801C1038
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C103C
  c->ctr=c->r[0]; // 801C1040
  cmpu(c,0,c->r[8],c->r[6]); // 801C1044
  if (!crb(c,0)) { goto L_801C1074; } // 801C1048
L_801C104C:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 801C104C
  W32(c->r[8]+0x00000004u,c->r[4]); // 801C1050
  W32(c->r[8]+0x00000008u,c->r[4]); // 801C1054
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 801C1058
  W32(c->r[8]+0x00000010u,c->r[4]); // 801C105C
  W32(c->r[8]+0x00000014u,c->r[4]); // 801C1060
  W32(c->r[8]+0x00000018u,c->r[4]); // 801C1064
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 801C1068
  c->r[8]=c->r[8]+0x00000020u; // 801C106C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C104C; } // 801C1070
L_801C1074:;
  c->r[0]=c->r[3]+0x00000003u; // 801C1074
  c->r[4]=0u+0x00000000u; // 801C1078
  c->r[0]=c->r[0]-c->r[8]; // 801C107C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C1080
  c->ctr=c->r[0]; // 801C1084
  cmpu(c,0,c->r[8],c->r[3]); // 801C1088
  if (!crb(c,0)) { goto L_801C109C; } // 801C108C
L_801C1090:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 801C1090
  c->r[8]=c->r[8]+0x00000004u; // 801C1094
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C1090; } // 801C1098
L_801C109C:;
  c->r[3]=0u+0x00000000u; // 801C109C
  c->r[0]=0u+0x00000002u; // 801C10A0
  W32(c->r[13]+0xFFFF9D20u,c->r[3]); // 801C10A4
  c->r[4]=c->r[31]+0x00000318u; // 801C10A8
  W32(c->r[13]+0xFFFF9D1Cu,c->r[3]); // 801C10AC
  c->ctr=c->r[0]; // 801C10B0
L_801C10B4:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C10B4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C10B8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C10BC
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C10C0
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C10C4
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C10C8
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C10CC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C10D0
  W32(c->r[4]+0x00000024u,c->r[3]); // 801C10D4
  W32(c->r[4]+0x00000020u,c->r[3]); // 801C10D8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C10DC
  W32(c->r[4]+0x00000028u,c->r[3]); // 801C10E0
  W32(c->r[4]+0x00000034u,c->r[3]); // 801C10E4
  W32(c->r[4]+0x00000030u,c->r[3]); // 801C10E8
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801C10EC
  W32(c->r[4]+0x00000038u,c->r[3]); // 801C10F0
  W32(c->r[4]+0x00000044u,c->r[3]); // 801C10F4
  W32(c->r[4]+0x00000040u,c->r[3]); // 801C10F8
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 801C10FC
  W32(c->r[4]+0x00000048u,c->r[3]); // 801C1100
  W32(c->r[4]+0x00000054u,c->r[3]); // 801C1104
  W32(c->r[4]+0x00000050u,c->r[3]); // 801C1108
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 801C110C
  W32(c->r[4]+0x00000058u,c->r[3]); // 801C1110
  W32(c->r[4]+0x00000064u,c->r[3]); // 801C1114
  W32(c->r[4]+0x00000060u,c->r[3]); // 801C1118
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 801C111C
  W32(c->r[4]+0x00000068u,c->r[3]); // 801C1120
  W32(c->r[4]+0x00000074u,c->r[3]); // 801C1124
  W32(c->r[4]+0x00000070u,c->r[3]); // 801C1128
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 801C112C
  W32(c->r[4]+0x00000078u,c->r[3]); // 801C1130
  c->r[4]=c->r[4]+0x00000080u; // 801C1134
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C10B4; } // 801C1138
  c->r[4]=0u+0x00000000u; // 801C113C
  c->r[3]=0u+0x80000000u; // 801C1140
  W32(c->r[3]+0x000000E0u,c->r[4]); // 801C1144
  W32(c->r[3]+0x000000DCu,c->r[4]); // 801C1148
  W32(c->r[3]+0x000000DCu,c->r[30]); // 801C114C
  goto L_801C1158; // 801C1150
  W32(c->r[4]+0x000002FCu,c->r[30]); // 801C1154
L_801C1158:;
  c->r[29]=0u+0x00000000u; // 801C1158
  W32(c->r[30]+0x00000300u,c->r[4]); // 801C115C
  c->r[4]=0u+0x80000000u; // 801C1160
  c->r[3]=c->r[31]+0x00000418u; // 801C1164
  W32(c->r[30]+0x000002FCu,c->r[29]); // 801C1168
  W32(c->r[4]+0x000000E0u,c->r[30]); // 801C116C
  c->lr=0x801C1174u; f_801BAFF0(c); // 801C1170
  W32(c->r[13]+0xFFFF9D18u,c->r[29]); // 801C1174
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1178
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C117C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1180
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1184
  c->lr=c->r[0]; // 801C1188
  c->r[1]=c->r[1]+0x00000020u; // 801C118C
  return; // 801C1190
}

// OSInitThreadQueue
void f_801C1194(Ctx* __restrict c) {
  trace_call(0x801C1194u);
  c->r[0]=0u+0x00000000u; // 801C1194
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C1198
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C119C
  return; // 801C11A0
}

// OSGetCurrentThread
void f_801C11A4(Ctx* __restrict c) {
  trace_call(0x801C11A4u);
  c->r[3]=0u+0x80000000u; // 801C11A4
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801C11A8
  return; // 801C11AC
}

// OSIsThreadTerminated
void f_801C11B0(Ctx* __restrict c) {
  trace_call(0x801C11B0u);
  c->r[0]=R16(c->r[3]+0x000002C8u); // 801C11B0
  c->r[3]=0u+0x00000001u; // 801C11B4
  cmpu(c,0,c->r[0],0x00000008u); // 801C11B8
  if (crb(c,2)) { goto L_801C11CC; } // 801C11BC
  cmps(c,0,(int32_t)c->r[0],0); // 801C11C0
  if (crb(c,2)) { goto L_801C11CC; } // 801C11C4
  c->r[3]=0u+0x00000000u; // 801C11C8
L_801C11CC:;
  c->r[0]=0u-c->r[3]; // 801C11CC
  c->r[0]=c->r[0]|c->r[3]; // 801C11D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C11D4
  return; // 801C11D8
}

// OSDisableScheduler
void f_801C11DC(Ctx* __restrict c) {
  trace_call(0x801C11DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C11DC
  c->r[0]=c->lr; // 801C11E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C11E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C11E8
  c->lr=0x801C11F0u; f_801BE74C(c); // 801C11EC
  c->r[31]=R32(c->r[13]+0xFFFF9D18u); // 801C11F0
  c->r[0]=c->r[31]+0x00000001u; // 801C11F4
  W32(c->r[13]+0xFFFF9D18u,c->r[0]); // 801C11F8
  c->lr=0x801C1200u; f_801BE774(c); // 801C11FC
  c->r[3]=c->r[31]|c->r[31]; // 801C1200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1204
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1208
  c->lr=c->r[0]; // 801C120C
  c->r[1]=c->r[1]+0x00000010u; // 801C1210
  return; // 801C1214
}

// OSEnableScheduler
void f_801C1218(Ctx* __restrict c) {
  trace_call(0x801C1218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1218
  c->r[0]=c->lr; // 801C121C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1224
  c->lr=0x801C122Cu; f_801BE74C(c); // 801C1228
  c->r[31]=R32(c->r[13]+0xFFFF9D18u); // 801C122C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801C1230
  W32(c->r[13]+0xFFFF9D18u,c->r[0]); // 801C1234
  c->lr=0x801C123Cu; f_801BE774(c); // 801C1238
  c->r[3]=c->r[31]|c->r[31]; // 801C123C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1244
  c->lr=c->r[0]; // 801C1248
  c->r[1]=c->r[1]+0x00000010u; // 801C124C
  return; // 801C1250
}

// UnsetRun
void f_801C1254(Ctx* __restrict c) {
  trace_call(0x801C1254u);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 801C1254
  c->r[4]=R32(c->r[3]+0x000002DCu); // 801C1258
  cmps(c,0,(int32_t)c->r[5],0); // 801C125C
  c->r[6]=R32(c->r[3]+0x000002E4u); // 801C1260
  if (!crb(c,2)) { goto L_801C1270; } // 801C1264
  W32(c->r[4]+0x00000004u,c->r[6]); // 801C1268
  goto L_801C1274; // 801C126C
L_801C1270:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 801C1270
L_801C1274:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C1274
  if (!crb(c,2)) { goto L_801C1284; } // 801C1278
  W32(c->r[4]+0x00000000u,c->r[5]); // 801C127C
  goto L_801C1288; // 801C1280
L_801C1284:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 801C1284
L_801C1288:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C1288
  cmps(c,0,(int32_t)c->r[0],0); // 801C128C
  if (!crb(c,2)) { goto L_801C12B0; } // 801C1290
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C1294
  c->r[4]=0u+0x00000001u; // 801C1298
  c->r[5]=R32(c->r[13]+0xFFFF9D20u); // 801C129C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801C12A0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801C12A4
  c->r[0]=c->r[5]&~c->r[0]; // 801C12A8
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C12AC
L_801C12B0:;
  c->r[0]=0u+0x00000000u; // 801C12B0
  W32(c->r[3]+0x000002DCu,c->r[0]); // 801C12B4
  return; // 801C12B8
}

// __OSGetEffectivePriority
void f_801C12BC(Ctx* __restrict c) {
  trace_call(0x801C12BCu);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 801C12BC
  c->r[3]=R32(c->r[3]+0x000002F4u); // 801C12C0
  goto L_801C12E8; // 801C12C4
L_801C12C8:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C12C8
  cmps(c,0,(int32_t)c->r[5],0); // 801C12CC
  if (crb(c,2)) { goto L_801C12E4; } // 801C12D0
  c->r[0]=R32(c->r[5]+0x000002D0u); // 801C12D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C12D8
  if (!crb(c,0)) { goto L_801C12E4; } // 801C12DC
  c->r[4]=c->r[0]|c->r[0]; // 801C12E0
L_801C12E4:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C12E4
L_801C12E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C12E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C12C8; } // 801C12EC
  c->r[3]=c->r[4]|c->r[4]; // 801C12F0
  return; // 801C12F4
}

// SetEffectivePriority
void f_801C12F8(Ctx* __restrict c) {
  trace_call(0x801C12F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C12F8
  c->r[0]=c->lr; // 801C12FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1300
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1304
  c->r[31]=c->r[4]|c->r[4]; // 801C1308
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C130C
  c->r[30]=c->r[3]|c->r[3]; // 801C1310
  c->r[0]=R16(c->r[3]+0x000002C8u); // 801C1314
  cmps(c,0,(int32_t)c->r[0],3); // 801C1318
  if (crb(c,2)) { goto L_801C1490; } // 801C131C
  if (!crb(c,0)) { goto L_801C1334; } // 801C1320
  cmps(c,0,(int32_t)c->r[0],1); // 801C1324
  if (crb(c,2)) { goto L_801C1340; } // 801C1328
  if (!crb(c,0)) { goto L_801C1484; } // 801C132C
  goto L_801C1490; // 801C1330
L_801C1334:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C1334
  if (!crb(c,0)) { goto L_801C1490; } // 801C1338
  goto L_801C13AC; // 801C133C
L_801C1340:;
  c->lr=0x801C1344u; f_801C1254(c); // 801C1340
  c->r[3]=0u+0x80570000u; // 801C1344
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801C1348
  c->r[3]=c->r[3]+0xFFFF9A70u; // 801C134C
  W32(c->r[30]+0x000002D0u,c->r[31]); // 801C1350
  c->r[3]=c->r[3]+c->r[0]; // 801C1354
  W32(c->r[30]+0x000002DCu,c->r[3]); // 801C1358
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C135C
  cmps(c,0,(int32_t)c->r[4],0); // 801C1360
  if (!crb(c,2)) { goto L_801C1370; } // 801C1364
  W32(c->r[3]+0x00000000u,c->r[30]); // 801C1368
  goto L_801C1374; // 801C136C
L_801C1370:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 801C1370
L_801C1374:;
  c->r[0]=0u+0x00000000u; // 801C1374
  W32(c->r[30]+0x000002E4u,c->r[4]); // 801C1378
  c->r[4]=R32(c->r[30]+0x000002DCu); // 801C137C
  c->r[3]=0u+0x00000001u; // 801C1380
  W32(c->r[30]+0x000002E0u,c->r[0]); // 801C1384
  W32(c->r[4]+0x00000004u,c->r[30]); // 801C1388
  c->r[0]=R32(c->r[30]+0x000002D0u); // 801C138C
  c->r[4]=R32(c->r[13]+0xFFFF9D20u); // 801C1390
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801C1394
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C1398
  c->r[0]=c->r[4]|c->r[0]; // 801C139C
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C13A0
  W32(c->r[13]+0xFFFF9D1Cu,c->r[3]); // 801C13A4
  goto L_801C1490; // 801C13A8
L_801C13AC:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 801C13AC
  c->r[7]=R32(c->r[3]+0x000002E4u); // 801C13B0
  cmps(c,0,(int32_t)c->r[6],0); // 801C13B4
  if (!crb(c,2)) { goto L_801C13C8; } // 801C13B8
  c->r[5]=R32(c->r[3]+0x000002DCu); // 801C13BC
  W32(c->r[5]+0x00000004u,c->r[7]); // 801C13C0
  goto L_801C13CC; // 801C13C4
L_801C13C8:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 801C13C8
L_801C13CC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C13CC
  if (!crb(c,2)) { goto L_801C13E0; } // 801C13D0
  c->r[5]=R32(c->r[3]+0x000002DCu); // 801C13D4
  W32(c->r[5]+0x00000000u,c->r[6]); // 801C13D8
  goto L_801C13E4; // 801C13DC
L_801C13E0:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 801C13E0
L_801C13E4:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 801C13E4
  c->r[5]=R32(c->r[3]+0x000002DCu); // 801C13E8
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C13EC
  goto L_801C13F8; // 801C13F0
L_801C13F4:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 801C13F4
L_801C13F8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C13F8
  if (crb(c,2)) { goto L_801C1410; } // 801C13FC
  c->r[4]=R32(c->r[6]+0x000002D0u); // 801C1400
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C1404
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C1408
  if (!crb(c,1)) { IRQCHK(c); goto L_801C13F4; } // 801C140C
L_801C1410:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C1410
  if (!crb(c,2)) { goto L_801C1448; } // 801C1414
  c->r[4]=R32(c->r[5]+0x00000004u); // 801C1418
  cmps(c,0,(int32_t)c->r[4],0); // 801C141C
  if (!crb(c,2)) { goto L_801C142C; } // 801C1420
  W32(c->r[5]+0x00000000u,c->r[3]); // 801C1424
  goto L_801C1430; // 801C1428
L_801C142C:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 801C142C
L_801C1430:;
  c->r[0]=0u+0x00000000u; // 801C1430
  W32(c->r[3]+0x000002E4u,c->r[4]); // 801C1434
  c->r[4]=R32(c->r[3]+0x000002DCu); // 801C1438
  W32(c->r[3]+0x000002E0u,c->r[0]); // 801C143C
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C1440
  goto L_801C1470; // 801C1444
L_801C1448:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 801C1448
  c->r[4]=R32(c->r[6]+0x000002E4u); // 801C144C
  W32(c->r[6]+0x000002E4u,c->r[3]); // 801C1450
  cmps(c,0,(int32_t)c->r[4],0); // 801C1454
  W32(c->r[3]+0x000002E4u,c->r[4]); // 801C1458
  if (!crb(c,2)) { goto L_801C146C; } // 801C145C
  c->r[4]=R32(c->r[3]+0x000002DCu); // 801C1460
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C1464
  goto L_801C1470; // 801C1468
L_801C146C:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 801C146C
L_801C1470:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 801C1470
  cmps(c,0,(int32_t)c->r[3],0); // 801C1474
  if (crb(c,2)) { goto L_801C1490; } // 801C1478
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C147C
  goto L_801C1494; // 801C1480
L_801C1484:;
  c->r[0]=0u+0x00000001u; // 801C1484
  W32(c->r[13]+0xFFFF9D1Cu,c->r[0]); // 801C1488
  W32(c->r[3]+0x000002D0u,c->r[4]); // 801C148C
L_801C1490:;
  c->r[3]=0u+0x00000000u; // 801C1490
L_801C1494:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1494
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1498
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C149C
  c->lr=c->r[0]; // 801C14A0
  c->r[1]=c->r[1]+0x00000010u; // 801C14A4
  return; // 801C14A8
}

// __OSPromoteThread
void f_801C14AC(Ctx* __restrict c) {
  trace_call(0x801C14ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C14AC
  c->r[0]=c->lr; // 801C14B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C14B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C14B8
  c->r[31]=c->r[4]|c->r[4]; // 801C14BC
L_801C14C0:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 801C14C0
  cmps(c,0,(int32_t)c->r[0],0); // 801C14C4
  if (crb(c,1)) { goto L_801C14E8; } // 801C14C8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C14CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C14D0
  if (!crb(c,1)) { goto L_801C14E8; } // 801C14D4
  c->r[4]=c->r[31]|c->r[31]; // 801C14D8
  c->lr=0x801C14E0u; f_801C12F8(c); // 801C14DC
  cmps(c,0,(int32_t)c->r[3],0); // 801C14E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C14C0; } // 801C14E4
L_801C14E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C14E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C14EC
  c->lr=c->r[0]; // 801C14F0
  c->r[1]=c->r[1]+0x00000010u; // 801C14F4
  return; // 801C14F8
}

// SelectThread
void f_801C14FC(Ctx* __restrict c) {
  trace_call(0x801C14FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C14FC
  c->r[0]=c->lr; // 801C1500
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1508
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C150C
  c->r[30]=c->r[3]|c->r[3]; // 801C1510
  c->r[0]=R32(c->r[13]+0xFFFF9D18u); // 801C1514
  cmps(c,0,(int32_t)c->r[0],0); // 801C1518
  if (!crb(c,1)) { goto L_801C1528; } // 801C151C
  c->r[3]=0u+0x00000000u; // 801C1520
  goto L_801C170C; // 801C1524
L_801C1528:;
  c->lr=0x801C152Cu; f_801BAE24(c); // 801C1528
  c->r[4]=0u+0x80000000u; // 801C152C
  c->r[5]=R32(c->r[4]+0x000000E4u); // 801C1530
  cmpu(c,0,c->r[3],c->r[5]); // 801C1534
  if (crb(c,2)) { goto L_801C1544; } // 801C1538
  c->r[3]=0u+0x00000000u; // 801C153C
  goto L_801C170C; // 801C1540
L_801C1544:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1544
  if (crb(c,2)) { goto L_801C160C; } // 801C1548
  c->r[0]=R16(c->r[5]+0x000002C8u); // 801C154C
  cmpu(c,0,c->r[0],0x00000002u); // 801C1550
  if (!crb(c,2)) { goto L_801C15E8; } // 801C1554
  cmps(c,0,(int32_t)c->r[30],0); // 801C1558
  if (!crb(c,2)) { goto L_801C157C; } // 801C155C
  c->r[3]=R32(c->r[13]+0xFFFF9D20u); // 801C1560
  c->r[0]=R32(c->r[5]+0x000002D0u); // 801C1564
  c->r[3]=cntlz(c->r[3]); // 801C1568
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801C156C
  if (crb(c,1)) { goto L_801C157C; } // 801C1570
  c->r[3]=0u+0x00000000u; // 801C1574
  goto L_801C170C; // 801C1578
L_801C157C:;
  c->r[0]=0u+0x00000001u; // 801C157C
  c->r[3]=0u+0x80570000u; // 801C1580
  W16(c->r[5]+0x000002C8u,c->r[0]); // 801C1584
  c->r[3]=c->r[3]+0xFFFF9A70u; // 801C1588
  c->r[0]=R32(c->r[5]+0x000002D0u); // 801C158C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801C1590
  c->r[3]=c->r[3]+c->r[0]; // 801C1594
  W32(c->r[5]+0x000002DCu,c->r[3]); // 801C1598
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C159C
  cmps(c,0,(int32_t)c->r[4],0); // 801C15A0
  if (!crb(c,2)) { goto L_801C15B0; } // 801C15A4
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C15A8
  goto L_801C15B4; // 801C15AC
L_801C15B0:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 801C15B0
L_801C15B4:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 801C15B4
  c->r[0]=0u+0x00000000u; // 801C15B8
  c->r[3]=0u+0x00000001u; // 801C15BC
  W32(c->r[5]+0x000002E0u,c->r[0]); // 801C15C0
  c->r[4]=R32(c->r[5]+0x000002DCu); // 801C15C4
  W32(c->r[4]+0x00000004u,c->r[5]); // 801C15C8
  c->r[0]=R32(c->r[5]+0x000002D0u); // 801C15CC
  c->r[4]=R32(c->r[13]+0xFFFF9D20u); // 801C15D0
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801C15D4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C15D8
  c->r[0]=c->r[4]|c->r[0]; // 801C15DC
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C15E0
  W32(c->r[13]+0xFFFF9D1Cu,c->r[3]); // 801C15E4
L_801C15E8:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 801C15E8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801C15EC
  if (!crb(c,2)) { goto L_801C160C; } // 801C15F0
  c->r[3]=c->r[5]|c->r[5]; // 801C15F4
  c->lr=0x801C15FCu; f_801BAE30(c); // 801C15F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C15FC
  if (crb(c,2)) { goto L_801C160C; } // 801C1600
  c->r[3]=0u+0x00000000u; // 801C1604
  goto L_801C170C; // 801C1608
L_801C160C:;
  c->r[0]=R32(c->r[13]+0xFFFF9D20u); // 801C160C
  cmps(c,0,(int32_t)c->r[0],0); // 801C1610
  if (!crb(c,2)) { goto L_801C1670; } // 801C1614
  c->r[12]=R32(c->r[13]+0xFFFF8438u); // 801C1618
  c->r[31]=0u+0x80000000u; // 801C161C
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801C1620
  c->r[4]=0u+0x00000000u; // 801C1624
  c->ctr=c->r[12]; // 801C1628
  if (true) { c->lr=0x801C1630u; dispatch(c,c->ctr); } // 801C162C
  c->r[0]=0u+0x00000000u; // 801C1630
  c->r[3]=0u+0x80570000u; // 801C1634
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801C1638
  c->r[3]=c->r[3]+0xFFFF9B70u; // 801C163C
  c->lr=0x801C1644u; f_801BADC8(c); // 801C1640
L_801C1644:;
  c->lr=0x801C1648u; f_801BE760(c); // 801C1644
L_801C1648:;
  c->r[0]=R32(c->r[13]+0xFFFF9D20u); // 801C1648
  cmps(c,0,(int32_t)c->r[0],0); // 801C164C
  if (crb(c,2)) { IDLEWAIT(c); goto L_801C1648; } // 801C1650
  c->lr=0x801C1658u; f_801BE74C(c); // 801C1654
  c->r[0]=R32(c->r[13]+0xFFFF9D20u); // 801C1658
  cmps(c,0,(int32_t)c->r[0],0); // 801C165C
  if (crb(c,2)) { IRQCHK(c); goto L_801C1644; } // 801C1660
  c->r[3]=0u+0x80570000u; // 801C1664
  c->r[3]=c->r[3]+0xFFFF9B70u; // 801C1668
  c->lr=0x801C1670u; f_801BAFF0(c); // 801C166C
L_801C1670:;
  c->r[4]=0u+0x00000000u; // 801C1670
  c->r[3]=0u+0x80570000u; // 801C1674
  W32(c->r[13]+0xFFFF9D1Cu,c->r[4]); // 801C1678
  c->r[3]=c->r[3]+0xFFFF9A70u; // 801C167C
  c->r[0]=R32(c->r[13]+0xFFFF9D20u); // 801C1680
  c->r[5]=cntlz(c->r[0]); // 801C1684
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801C1688
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 801C168C
  c->r[6]=R32(c->r[30]+0x000002E0u); // 801C1690
  cmps(c,0,(int32_t)c->r[6],0); // 801C1694
  if (!crb(c,2)) { goto L_801C16A4; } // 801C1698
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C169C
  goto L_801C16A8; // 801C16A0
L_801C16A4:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 801C16A4
L_801C16A8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C16A8
  W32(c->r[3]+0x00000000u,c->r[6]); // 801C16AC
  if (!crb(c,2)) { goto L_801C16CC; } // 801C16B0
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801C16B4
  c->r[3]=0u+0x00000001u; // 801C16B8
  c->r[4]=R32(c->r[13]+0xFFFF9D20u); // 801C16BC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C16C0
  c->r[0]=c->r[4]&~c->r[0]; // 801C16C4
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C16C8
L_801C16CC:;
  c->r[3]=0u+0x00000000u; // 801C16CC
  c->r[0]=0u+0x00000002u; // 801C16D0
  W32(c->r[30]+0x000002DCu,c->r[3]); // 801C16D4
  c->r[31]=0u+0x80000000u; // 801C16D8
  c->r[4]=c->r[30]|c->r[30]; // 801C16DC
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801C16E0
  c->r[12]=R32(c->r[13]+0xFFFF8438u); // 801C16E4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801C16E8
  c->ctr=c->r[12]; // 801C16EC
  if (true) { c->lr=0x801C16F4u; dispatch(c,c->ctr); } // 801C16F0
  W32(c->r[31]+0x000000E4u,c->r[30]); // 801C16F4
  c->r[3]=c->r[30]|c->r[30]; // 801C16F8
  c->lr=0x801C1700u; f_801BADC8(c); // 801C16FC
  c->r[3]=c->r[30]|c->r[30]; // 801C1700
  c->lr=0x801C1708u; f_801BAEB0(c); // 801C1704
  c->r[3]=c->r[30]|c->r[30]; // 801C1708
L_801C170C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C170C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1710
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1714
  c->lr=c->r[0]; // 801C1718
  c->r[1]=c->r[1]+0x00000010u; // 801C171C
  return; // 801C1720
}

// __OSReschedule
void f_801C1724(Ctx* __restrict c) {
  trace_call(0x801C1724u);
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C1724
  cmps(c,0,(int32_t)c->r[0],0); // 801C1728
  if (crb(c,2)) return; // 801C172C
  c->r[3]=0u+0x00000000u; // 801C1730
  f_801C14FC(c); return; // 801C1734
  return; // 801C1738
}

void f_801C173C_orig(Ctx* __restrict c);
// OSCreateThread
void f_801C173C_orig(Ctx* __restrict c) {
  trace_call(0x801C173Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C173C
  c->r[0]=c->lr; // 801C1740
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1744
  c->r[11]=c->r[1]+0x00000020u; // 801C1748
  c->lr=0x801C1750u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C174C
  cmps(c,0,(int32_t)c->r[8],0); // 801C1750
  c->r[31]=c->r[3]|c->r[3]; // 801C1754
  c->r[26]=c->r[5]|c->r[5]; // 801C1758
  c->r[27]=c->r[6]|c->r[6]; // 801C175C
  c->r[28]=c->r[7]|c->r[7]; // 801C1760
  if (crb(c,0)) { goto L_801C1770; } // 801C1764
  cmps(c,0,(int32_t)c->r[8],31); // 801C1768
  if (!crb(c,1)) { goto L_801C1778; } // 801C176C
L_801C1770:;
  c->r[3]=0u+0x00000000u; // 801C1770
  goto L_801C1990; // 801C1774
L_801C1778:;
  c->r[30]=0u+0x00000000u; // 801C1778
  c->r[7]=0u+0x00000001u; // 801C177C
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 801C1780
  c->r[29]=0u+0xFFFFFFFFu; // 801C1784
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 801C1788
  W16(c->r[3]+0x000002C8u,c->r[7]); // 801C178C
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 801C1790
  W16(c->r[3]+0x000002CAu,c->r[0]); // 801C1794
  W32(c->r[3]+0x000002D4u,c->r[8]); // 801C1798
  W32(c->r[3]+0x000002D0u,c->r[8]); // 801C179C
  W32(c->r[3]+0x000002CCu,c->r[7]); // 801C17A0
  W32(c->r[3]+0x000002D8u,c->r[29]); // 801C17A4
  W32(c->r[3]+0x000002F0u,c->r[30]); // 801C17A8
  W32(c->r[3]+0x000002ECu,c->r[30]); // 801C17AC
  W32(c->r[3]+0x000002E8u,c->r[30]); // 801C17B0
  W32(c->r[3]+0x000002F8u,c->r[30]); // 801C17B4
  W32(c->r[3]+0x000002F4u,c->r[30]); // 801C17B8
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 801C17BC
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 801C17C0
  c->lr=0x801C17C8u; f_801BB014(c); // 801C17C4
  c->r[5]=0u+0x801C0000u; // 801C17C8
  c->r[4]=c->r[27]-c->r[28]; // 801C17CC
  c->r[5]=c->r[5]+0x000019A8u; // 801C17D0
  c->r[3]=0u+0xDEAE0000u; // 801C17D4
  W32(c->r[31]+0x00000084u,c->r[5]); // 801C17D8
  c->r[0]=c->r[3]+0xFFFFBABEu; // 801C17DC
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 801C17E0
  W32(c->r[31]+0x00000304u,c->r[27]); // 801C17E4
  W32(c->r[31]+0x00000308u,c->r[4]); // 801C17E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C17EC
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 801C17F0
  W32(c->r[31]+0x00000310u,c->r[30]); // 801C17F4
  W32(c->r[31]+0x00000314u,c->r[30]); // 801C17F8
  c->lr=0x801C1800u; f_801BE74C(c); // 801C17FC
  c->r[4]=0u+0x80560000u; // 801C1800
  c->r[4]=c->r[4]+0xFFFF8C50u; // 801C1804
  c->r[0]=R32(c->r[4]+0x00000040u); // 801C1808
  cmps(c,0,(int32_t)c->r[0],0); // 801C180C
  if (crb(c,2)) { goto L_801C1958; } // 801C1810
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 801C1814
  c->r[0]=0u+0x00000002u; // 801C1818
  c->r[4]=R16(c->r[31]+0x000001A2u); // 801C181C
  c->r[6]=c->r[31]+0x00000090u; // 801C1820
  c->r[5]=c->r[5]|0x00000900u; // 801C1824
  c->r[7]=c->r[31]+0x000001C8u; // 801C1828
  c->r[4]=c->r[4]|0x00000001u; // 801C182C
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 801C1830
  W16(c->r[31]+0x000001A2u,c->r[4]); // 801C1834
  c->r[4]=R32(c->r[13]+0xFFFF8410u); // 801C1838
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 801C183C
  c->r[4]=c->r[4]|0x00000004u; // 801C1840
  W32(c->r[31]+0x00000194u,c->r[4]); // 801C1844
  c->ctr=c->r[0]; // 801C1848
L_801C184C:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 801C184C
  W32(c->r[6]+0x00000000u,c->r[29]); // 801C1850
  W32(c->r[7]+0x00000004u,c->r[29]); // 801C1854
  W32(c->r[7]+0x00000000u,c->r[29]); // 801C1858
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 801C185C
  W32(c->r[6]+0x00000008u,c->r[29]); // 801C1860
  W32(c->r[7]+0x0000000Cu,c->r[29]); // 801C1864
  W32(c->r[7]+0x00000008u,c->r[29]); // 801C1868
  W32(c->r[6]+0x00000014u,c->r[29]); // 801C186C
  W32(c->r[6]+0x00000010u,c->r[29]); // 801C1870
  W32(c->r[7]+0x00000014u,c->r[29]); // 801C1874
  W32(c->r[7]+0x00000010u,c->r[29]); // 801C1878
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 801C187C
  W32(c->r[6]+0x00000018u,c->r[29]); // 801C1880
  W32(c->r[7]+0x0000001Cu,c->r[29]); // 801C1884
  W32(c->r[7]+0x00000018u,c->r[29]); // 801C1888
  W32(c->r[6]+0x00000024u,c->r[29]); // 801C188C
  W32(c->r[6]+0x00000020u,c->r[29]); // 801C1890
  W32(c->r[7]+0x00000024u,c->r[29]); // 801C1894
  W32(c->r[7]+0x00000020u,c->r[29]); // 801C1898
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 801C189C
  W32(c->r[6]+0x00000028u,c->r[29]); // 801C18A0
  W32(c->r[7]+0x0000002Cu,c->r[29]); // 801C18A4
  W32(c->r[7]+0x00000028u,c->r[29]); // 801C18A8
  W32(c->r[6]+0x00000034u,c->r[29]); // 801C18AC
  W32(c->r[6]+0x00000030u,c->r[29]); // 801C18B0
  W32(c->r[7]+0x00000034u,c->r[29]); // 801C18B4
  W32(c->r[7]+0x00000030u,c->r[29]); // 801C18B8
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 801C18BC
  W32(c->r[6]+0x00000038u,c->r[29]); // 801C18C0
  W32(c->r[7]+0x0000003Cu,c->r[29]); // 801C18C4
  W32(c->r[7]+0x00000038u,c->r[29]); // 801C18C8
  W32(c->r[6]+0x00000044u,c->r[29]); // 801C18CC
  W32(c->r[6]+0x00000040u,c->r[29]); // 801C18D0
  W32(c->r[7]+0x00000044u,c->r[29]); // 801C18D4
  W32(c->r[7]+0x00000040u,c->r[29]); // 801C18D8
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 801C18DC
  W32(c->r[6]+0x00000048u,c->r[29]); // 801C18E0
  W32(c->r[7]+0x0000004Cu,c->r[29]); // 801C18E4
  W32(c->r[7]+0x00000048u,c->r[29]); // 801C18E8
  W32(c->r[6]+0x00000054u,c->r[29]); // 801C18EC
  W32(c->r[6]+0x00000050u,c->r[29]); // 801C18F0
  W32(c->r[7]+0x00000054u,c->r[29]); // 801C18F4
  W32(c->r[7]+0x00000050u,c->r[29]); // 801C18F8
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 801C18FC
  W32(c->r[6]+0x00000058u,c->r[29]); // 801C1900
  W32(c->r[7]+0x0000005Cu,c->r[29]); // 801C1904
  W32(c->r[7]+0x00000058u,c->r[29]); // 801C1908
  W32(c->r[6]+0x00000064u,c->r[29]); // 801C190C
  W32(c->r[6]+0x00000060u,c->r[29]); // 801C1910
  W32(c->r[7]+0x00000064u,c->r[29]); // 801C1914
  W32(c->r[7]+0x00000060u,c->r[29]); // 801C1918
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 801C191C
  W32(c->r[6]+0x00000068u,c->r[29]); // 801C1920
  W32(c->r[7]+0x0000006Cu,c->r[29]); // 801C1924
  W32(c->r[7]+0x00000068u,c->r[29]); // 801C1928
  W32(c->r[6]+0x00000074u,c->r[29]); // 801C192C
  W32(c->r[6]+0x00000070u,c->r[29]); // 801C1930
  W32(c->r[7]+0x00000074u,c->r[29]); // 801C1934
  W32(c->r[7]+0x00000070u,c->r[29]); // 801C1938
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 801C193C
  W32(c->r[6]+0x00000078u,c->r[29]); // 801C1940
  c->r[6]=c->r[6]+0x00000080u; // 801C1944
  W32(c->r[7]+0x0000007Cu,c->r[29]); // 801C1948
  W32(c->r[7]+0x00000078u,c->r[29]); // 801C194C
  c->r[7]=c->r[7]+0x00000080u; // 801C1950
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C184C; } // 801C1954
L_801C1958:;
  c->r[4]=0u+0x80000000u; // 801C1958
  c->r[5]=R32(c->r[4]+0x000000E0u); // 801C195C
  cmps(c,0,(int32_t)c->r[5],0); // 801C1960
  if (!crb(c,2)) { goto L_801C1970; } // 801C1964
  W32(c->r[4]+0x000000DCu,c->r[31]); // 801C1968
  goto L_801C1974; // 801C196C
L_801C1970:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 801C1970
L_801C1974:;
  c->r[0]=0u+0x00000000u; // 801C1974
  W32(c->r[31]+0x00000300u,c->r[5]); // 801C1978
  c->r[4]=0u+0x80000000u; // 801C197C
  W32(c->r[31]+0x000002FCu,c->r[0]); // 801C1980
  W32(c->r[4]+0x000000E0u,c->r[31]); // 801C1984
  c->lr=0x801C198Cu; f_801BE774(c); // 801C1988
  c->r[3]=0u+0x00000001u; // 801C198C
L_801C1990:;
  c->r[11]=c->r[1]+0x00000020u; // 801C1990
  c->lr=0x801C1998u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C1994
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1998
  c->lr=c->r[0]; // 801C199C
  c->r[1]=c->r[1]+0x00000020u; // 801C19A0
  return; // 801C19A4
}
void hle_wrap_OSCreateThread(Ctx*, GuestFn);
void f_801C173C(Ctx* __restrict c) { hle_wrap_OSCreateThread(c, f_801C173C_orig); }

void f_801C19A8_orig(Ctx* __restrict c);
// OSExitThread
void f_801C19A8_orig(Ctx* __restrict c) {
  trace_call(0x801C19A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C19A8
  c->r[0]=c->lr; // 801C19AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C19B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C19B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C19B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C19BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C19C0
  c->r[28]=c->r[3]|c->r[3]; // 801C19C4
  c->lr=0x801C19CCu; f_801BE74C(c); // 801C19C8
  c->r[31]=0u+0x80000000u; // 801C19CC
  c->r[29]=c->r[3]|c->r[3]; // 801C19D0
  c->r[30]=R32(c->r[31]+0x000000E4u); // 801C19D4
  c->r[3]=c->r[30]|c->r[30]; // 801C19D8
  c->lr=0x801C19E0u; f_801BAFF0(c); // 801C19DC
  c->r[0]=R16(c->r[30]+0x000002CAu); // 801C19E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C19E4
  if (crb(c,2)) { goto L_801C1A2C; } // 801C19E8
  c->r[4]=R32(c->r[30]+0x000002FCu); // 801C19EC
  c->r[3]=R32(c->r[30]+0x00000300u); // 801C19F0
  cmps(c,0,(int32_t)c->r[4],0); // 801C19F4
  if (!crb(c,2)) { goto L_801C1A04; } // 801C19F8
  W32(c->r[31]+0x000000E0u,c->r[3]); // 801C19FC
  goto L_801C1A08; // 801C1A00
L_801C1A04:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 801C1A04
L_801C1A08:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C1A08
  if (!crb(c,2)) { goto L_801C1A1C; } // 801C1A0C
  c->r[3]=0u+0x80000000u; // 801C1A10
  W32(c->r[3]+0x000000DCu,c->r[4]); // 801C1A14
  goto L_801C1A20; // 801C1A18
L_801C1A1C:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 801C1A1C
L_801C1A20:;
  c->r[0]=0u+0x00000000u; // 801C1A20
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801C1A24
  goto L_801C1A38; // 801C1A28
L_801C1A2C:;
  c->r[0]=0u+0x00000008u; // 801C1A2C
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801C1A30
  W32(c->r[30]+0x000002D8u,c->r[28]); // 801C1A34
L_801C1A38:;
  c->r[3]=c->r[30]|c->r[30]; // 801C1A38
  c->lr=0x801C1A40u; f_801BFADC(c); // 801C1A3C
  c->r[3]=c->r[30]+0x000002E8u; // 801C1A40
  c->lr=0x801C1A48u; f_801C22BC(c); // 801C1A44
  c->r[0]=0u+0x00000001u; // 801C1A48
  W32(c->r[13]+0xFFFF9D1Cu,c->r[0]); // 801C1A4C
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C1A50
  cmps(c,0,(int32_t)c->r[0],0); // 801C1A54
  if (crb(c,2)) { goto L_801C1A64; } // 801C1A58
  c->r[3]=0u+0x00000000u; // 801C1A5C
  c->lr=0x801C1A64u; f_801C14FC(c); // 801C1A60
L_801C1A64:;
  c->r[3]=c->r[29]|c->r[29]; // 801C1A64
  c->lr=0x801C1A6Cu; f_801BE774(c); // 801C1A68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1A70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1A74
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1A78
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C1A7C
  c->lr=c->r[0]; // 801C1A80
  c->r[1]=c->r[1]+0x00000020u; // 801C1A84
  return; // 801C1A88
}
void hle_wrap_OSExitThread(Ctx*, GuestFn);
void f_801C19A8(Ctx* __restrict c) { hle_wrap_OSExitThread(c, f_801C19A8_orig); }

// OSCancelThread
void f_801C1A8C(Ctx* __restrict c) {
  trace_call(0x801C1A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A8C
  c->r[0]=c->lr; // 801C1A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1A98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1A9C
  c->r[30]=c->r[3]|c->r[3]; // 801C1AA0
  c->lr=0x801C1AA8u; f_801BE74C(c); // 801C1AA4
  c->r[0]=R16(c->r[30]+0x000002C8u); // 801C1AA8
  c->r[31]=c->r[3]|c->r[3]; // 801C1AAC
  cmps(c,0,(int32_t)c->r[0],3); // 801C1AB0
  if (crb(c,2)) { goto L_801C1BB4; } // 801C1AB4
  if (!crb(c,0)) { goto L_801C1ACC; } // 801C1AB8
  cmps(c,0,(int32_t)c->r[0],1); // 801C1ABC
  if (crb(c,2)) { goto L_801C1AD8; } // 801C1AC0
  if (!crb(c,0)) { goto L_801C1AF0; } // 801C1AC4
  goto L_801C1BB4; // 801C1AC8
L_801C1ACC:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C1ACC
  if (!crb(c,0)) { goto L_801C1BB4; } // 801C1AD0
  goto L_801C1AFC; // 801C1AD4
L_801C1AD8:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 801C1AD8
  cmps(c,0,(int32_t)c->r[0],0); // 801C1ADC
  if (crb(c,1)) { goto L_801C1BC0; } // 801C1AE0
  c->r[3]=c->r[30]|c->r[30]; // 801C1AE4
  c->lr=0x801C1AECu; f_801C1254(c); // 801C1AE8
  goto L_801C1BC0; // 801C1AEC
L_801C1AF0:;
  c->r[0]=0u+0x00000001u; // 801C1AF0
  W32(c->r[13]+0xFFFF9D1Cu,c->r[0]); // 801C1AF4
  goto L_801C1BC0; // 801C1AF8
L_801C1AFC:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 801C1AFC
  c->r[5]=R32(c->r[30]+0x000002E4u); // 801C1B00
  cmps(c,0,(int32_t)c->r[4],0); // 801C1B04
  if (!crb(c,2)) { goto L_801C1B18; } // 801C1B08
  c->r[3]=R32(c->r[30]+0x000002DCu); // 801C1B0C
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C1B10
  goto L_801C1B1C; // 801C1B14
L_801C1B18:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 801C1B18
L_801C1B1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1B1C
  if (!crb(c,2)) { goto L_801C1B30; } // 801C1B20
  c->r[3]=R32(c->r[30]+0x000002DCu); // 801C1B24
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C1B28
  goto L_801C1B34; // 801C1B2C
L_801C1B30:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 801C1B30
L_801C1B34:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 801C1B34
  c->r[3]=0u+0x00000000u; // 801C1B38
  W32(c->r[30]+0x000002DCu,c->r[3]); // 801C1B3C
  cmps(c,0,(int32_t)c->r[0],0); // 801C1B40
  if (crb(c,1)) { goto L_801C1BC0; } // 801C1B44
  c->r[3]=R32(c->r[30]+0x000002F0u); // 801C1B48
  cmps(c,0,(int32_t)c->r[3],0); // 801C1B4C
  if (crb(c,2)) { goto L_801C1BC0; } // 801C1B50
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C1B54
L_801C1B58:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 801C1B58
  cmps(c,0,(int32_t)c->r[0],0); // 801C1B5C
  if (crb(c,1)) { goto L_801C1BC0; } // 801C1B60
  c->r[4]=R32(c->r[3]+0x000002D4u); // 801C1B64
  c->r[5]=R32(c->r[3]+0x000002F4u); // 801C1B68
  goto L_801C1B90; // 801C1B6C
L_801C1B70:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C1B70
  cmps(c,0,(int32_t)c->r[6],0); // 801C1B74
  if (crb(c,2)) { goto L_801C1B8C; } // 801C1B78
  c->r[0]=R32(c->r[6]+0x000002D0u); // 801C1B7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1B80
  if (!crb(c,0)) { goto L_801C1B8C; } // 801C1B84
  c->r[4]=c->r[0]|c->r[0]; // 801C1B88
L_801C1B8C:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 801C1B8C
L_801C1B90:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1B90
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1B70; } // 801C1B94
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C1B98
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1B9C
  if (crb(c,2)) { goto L_801C1BC0; } // 801C1BA0
  c->lr=0x801C1BA8u; f_801C12F8(c); // 801C1BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C1BA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1B58; } // 801C1BAC
  goto L_801C1BC0; // 801C1BB0
L_801C1BB4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C1BB4
  c->lr=0x801C1BBCu; f_801BE774(c); // 801C1BB8
  goto L_801C1C4C; // 801C1BBC
L_801C1BC0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C1BC0
  c->lr=0x801C1BC8u; f_801BAFF0(c); // 801C1BC4
  c->r[0]=R16(c->r[30]+0x000002CAu); // 801C1BC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C1BCC
  if (crb(c,2)) { goto L_801C1C18; } // 801C1BD0
  c->r[4]=R32(c->r[30]+0x000002FCu); // 801C1BD4
  c->r[5]=R32(c->r[30]+0x00000300u); // 801C1BD8
  cmps(c,0,(int32_t)c->r[4],0); // 801C1BDC
  if (!crb(c,2)) { goto L_801C1BF0; } // 801C1BE0
  c->r[3]=0u+0x80000000u; // 801C1BE4
  W32(c->r[3]+0x000000E0u,c->r[5]); // 801C1BE8
  goto L_801C1BF4; // 801C1BEC
L_801C1BF0:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 801C1BF0
L_801C1BF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1BF4
  if (!crb(c,2)) { goto L_801C1C08; } // 801C1BF8
  c->r[3]=0u+0x80000000u; // 801C1BFC
  W32(c->r[3]+0x000000DCu,c->r[4]); // 801C1C00
  goto L_801C1C0C; // 801C1C04
L_801C1C08:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 801C1C08
L_801C1C0C:;
  c->r[0]=0u+0x00000000u; // 801C1C0C
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801C1C10
  goto L_801C1C20; // 801C1C14
L_801C1C18:;
  c->r[0]=0u+0x00000008u; // 801C1C18
  W16(c->r[30]+0x000002C8u,c->r[0]); // 801C1C1C
L_801C1C20:;
  c->r[3]=c->r[30]|c->r[30]; // 801C1C20
  c->lr=0x801C1C28u; f_801BFADC(c); // 801C1C24
  c->r[3]=c->r[30]+0x000002E8u; // 801C1C28
  c->lr=0x801C1C30u; f_801C22BC(c); // 801C1C2C
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C1C30
  cmps(c,0,(int32_t)c->r[0],0); // 801C1C34
  if (crb(c,2)) { goto L_801C1C44; } // 801C1C38
  c->r[3]=0u+0x00000000u; // 801C1C3C
  c->lr=0x801C1C44u; f_801C14FC(c); // 801C1C40
L_801C1C44:;
  c->r[3]=c->r[31]|c->r[31]; // 801C1C44
  c->lr=0x801C1C4Cu; f_801BE774(c); // 801C1C48
L_801C1C4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1C4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1C50
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1C54
  c->lr=c->r[0]; // 801C1C58
  c->r[1]=c->r[1]+0x00000010u; // 801C1C5C
  return; // 801C1C60
}

// OSJoinThread
void f_801C1C64(Ctx* __restrict c) {
  trace_call(0x801C1C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C64
  c->r[0]=c->lr; // 801C1C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1C6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1C70
  c->r[31]=c->r[3]|c->r[3]; // 801C1C74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C1C78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C1C7C
  c->r[29]=c->r[4]|c->r[4]; // 801C1C80
  c->lr=0x801C1C88u; f_801BE74C(c); // 801C1C84
  c->r[0]=R16(c->r[31]+0x000002CAu); // 801C1C88
  c->r[30]=c->r[3]|c->r[3]; // 801C1C8C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C1C90
  if (!crb(c,2)) { goto L_801C1D10; } // 801C1C94
  c->r[0]=R16(c->r[31]+0x000002C8u); // 801C1C98
  cmpu(c,0,c->r[0],0x00000008u); // 801C1C9C
  if (crb(c,2)) { goto L_801C1D10; } // 801C1CA0
  c->r[0]=R32(c->r[31]+0x000002E8u); // 801C1CA4
  cmps(c,0,(int32_t)c->r[0],0); // 801C1CA8
  if (!crb(c,2)) { goto L_801C1D10; } // 801C1CAC
  c->r[3]=c->r[31]+0x000002E8u; // 801C1CB0
  c->lr=0x801C1CB8u; f_801C21D0(c); // 801C1CB4
  c->r[0]=R16(c->r[31]+0x000002C8u); // 801C1CB8
  cmps(c,0,(int32_t)c->r[0],0); // 801C1CBC
  if (!crb(c,2)) { goto L_801C1CCC; } // 801C1CC0
  c->r[0]=0u+0x00000000u; // 801C1CC4
  goto L_801C1CF8; // 801C1CC8
L_801C1CCC:;
  c->r[3]=0u+0x80000000u; // 801C1CCC
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801C1CD0
  goto L_801C1CEC; // 801C1CD4
L_801C1CD8:;
  cmpu(c,0,c->r[31],c->r[3]); // 801C1CD8
  if (!crb(c,2)) { goto L_801C1CE8; } // 801C1CDC
  c->r[0]=0u+0x00000001u; // 801C1CE0
  goto L_801C1CF8; // 801C1CE4
L_801C1CE8:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 801C1CE8
L_801C1CEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C1CEC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1CD8; } // 801C1CF0
  c->r[0]=0u+0x00000000u; // 801C1CF4
L_801C1CF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1CF8
  if (!crb(c,2)) { goto L_801C1D10; } // 801C1CFC
  c->r[3]=c->r[30]|c->r[30]; // 801C1D00
  c->lr=0x801C1D08u; f_801BE774(c); // 801C1D04
  c->r[3]=0u+0x00000000u; // 801C1D08
  goto L_801C1D88; // 801C1D0C
L_801C1D10:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 801C1D10
  cmpu(c,0,c->r[0],0x00000008u); // 801C1D14
  if (!crb(c,2)) { goto L_801C1D7C; } // 801C1D18
  cmps(c,0,(int32_t)c->r[29],0); // 801C1D1C
  if (crb(c,2)) { goto L_801C1D2C; } // 801C1D20
  c->r[0]=R32(c->r[31]+0x000002D8u); // 801C1D24
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C1D28
L_801C1D2C:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 801C1D2C
  c->r[5]=R32(c->r[31]+0x00000300u); // 801C1D30
  cmps(c,0,(int32_t)c->r[4],0); // 801C1D34
  if (!crb(c,2)) { goto L_801C1D48; } // 801C1D38
  c->r[3]=0u+0x80000000u; // 801C1D3C
  W32(c->r[3]+0x000000E0u,c->r[5]); // 801C1D40
  goto L_801C1D4C; // 801C1D44
L_801C1D48:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 801C1D48
L_801C1D4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1D4C
  if (!crb(c,2)) { goto L_801C1D60; } // 801C1D50
  c->r[3]=0u+0x80000000u; // 801C1D54
  W32(c->r[3]+0x000000DCu,c->r[4]); // 801C1D58
  goto L_801C1D64; // 801C1D5C
L_801C1D60:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 801C1D60
L_801C1D64:;
  c->r[0]=0u+0x00000000u; // 801C1D64
  c->r[3]=c->r[30]|c->r[30]; // 801C1D68
  W16(c->r[31]+0x000002C8u,c->r[0]); // 801C1D6C
  c->lr=0x801C1D74u; f_801BE774(c); // 801C1D70
  c->r[3]=0u+0x00000001u; // 801C1D74
  goto L_801C1D88; // 801C1D78
L_801C1D7C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C1D7C
  c->lr=0x801C1D84u; f_801BE774(c); // 801C1D80
  c->r[3]=0u+0x00000000u; // 801C1D84
L_801C1D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1D94
  c->lr=c->r[0]; // 801C1D98
  c->r[1]=c->r[1]+0x00000020u; // 801C1D9C
  return; // 801C1DA0
}

// OSResumeThread
void f_801C1DA4(Ctx* __restrict c) {
  trace_call(0x801C1DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1DA4
  c->r[0]=c->lr; // 801C1DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1DAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1DB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C1DB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C1DB8
  c->r[29]=c->r[3]|c->r[3]; // 801C1DBC
  c->lr=0x801C1DC4u; f_801BE74C(c); // 801C1DC0
  c->r[30]=R32(c->r[29]+0x000002CCu); // 801C1DC4
  c->r[31]=c->r[3]|c->r[3]; // 801C1DC8
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801C1DCC
  W32(c->r[29]+0x000002CCu,c->r[0]); // 801C1DD0
  if (!crb(c,0)) { goto L_801C1DE4; } // 801C1DD4
  c->r[0]=0u+0x00000000u; // 801C1DD8
  W32(c->r[29]+0x000002CCu,c->r[0]); // 801C1DDC
  goto L_801C2014; // 801C1DE0
L_801C1DE4:;
  if (!crb(c,2)) { goto L_801C2014; } // 801C1DE4
  c->r[0]=R16(c->r[29]+0x000002C8u); // 801C1DE8
  cmps(c,0,(int32_t)c->r[0],4); // 801C1DEC
  if (crb(c,2)) { goto L_801C1EA0; } // 801C1DF0
  if (!crb(c,0)) { goto L_801C2000; } // 801C1DF4
  cmps(c,0,(int32_t)c->r[0],1); // 801C1DF8
  if (crb(c,2)) { goto L_801C1E04; } // 801C1DFC
  goto L_801C2000; // 801C1E00
L_801C1E04:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 801C1E04
  c->r[4]=R32(c->r[29]+0x000002F4u); // 801C1E08
  goto L_801C1E30; // 801C1E0C
L_801C1E10:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C1E10
  cmps(c,0,(int32_t)c->r[3],0); // 801C1E14
  if (crb(c,2)) { goto L_801C1E2C; } // 801C1E18
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C1E1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C1E20
  if (!crb(c,0)) { goto L_801C1E2C; } // 801C1E24
  c->r[5]=c->r[0]|c->r[0]; // 801C1E28
L_801C1E2C:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 801C1E2C
L_801C1E30:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C1E30
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1E10; } // 801C1E34
  c->r[3]=0u+0x80570000u; // 801C1E38
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801C1E3C
  c->r[3]=c->r[3]+0xFFFF9A70u; // 801C1E40
  W32(c->r[29]+0x000002D0u,c->r[5]); // 801C1E44
  c->r[3]=c->r[3]+c->r[0]; // 801C1E48
  W32(c->r[29]+0x000002DCu,c->r[3]); // 801C1E4C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C1E50
  cmps(c,0,(int32_t)c->r[4],0); // 801C1E54
  if (!crb(c,2)) { goto L_801C1E64; } // 801C1E58
  W32(c->r[3]+0x00000000u,c->r[29]); // 801C1E5C
  goto L_801C1E68; // 801C1E60
L_801C1E64:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 801C1E64
L_801C1E68:;
  c->r[0]=0u+0x00000000u; // 801C1E68
  W32(c->r[29]+0x000002E4u,c->r[4]); // 801C1E6C
  c->r[4]=R32(c->r[29]+0x000002DCu); // 801C1E70
  c->r[3]=0u+0x00000001u; // 801C1E74
  W32(c->r[29]+0x000002E0u,c->r[0]); // 801C1E78
  W32(c->r[4]+0x00000004u,c->r[29]); // 801C1E7C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 801C1E80
  c->r[4]=R32(c->r[13]+0xFFFF9D20u); // 801C1E84
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801C1E88
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C1E8C
  c->r[0]=c->r[4]|c->r[0]; // 801C1E90
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C1E94
  W32(c->r[13]+0xFFFF9D1Cu,c->r[3]); // 801C1E98
  goto L_801C2000; // 801C1E9C
L_801C1EA0:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 801C1EA0
  c->r[5]=R32(c->r[29]+0x000002E4u); // 801C1EA4
  cmps(c,0,(int32_t)c->r[4],0); // 801C1EA8
  if (!crb(c,2)) { goto L_801C1EBC; } // 801C1EAC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C1EB0
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C1EB4
  goto L_801C1EC0; // 801C1EB8
L_801C1EBC:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 801C1EBC
L_801C1EC0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1EC0
  if (!crb(c,2)) { goto L_801C1ED4; } // 801C1EC4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C1EC8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C1ECC
  goto L_801C1ED8; // 801C1ED0
L_801C1ED4:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 801C1ED4
L_801C1ED8:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 801C1ED8
  c->r[4]=R32(c->r[29]+0x000002F4u); // 801C1EDC
  goto L_801C1F04; // 801C1EE0
L_801C1EE4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C1EE4
  cmps(c,0,(int32_t)c->r[3],0); // 801C1EE8
  if (crb(c,2)) { goto L_801C1F00; } // 801C1EEC
  c->r[3]=R32(c->r[3]+0x000002D0u); // 801C1EF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C1EF4
  if (!crb(c,0)) { goto L_801C1F00; } // 801C1EF8
  c->r[0]=c->r[3]|c->r[3]; // 801C1EFC
L_801C1F00:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 801C1F00
L_801C1F04:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C1F04
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1EE4; } // 801C1F08
  W32(c->r[29]+0x000002D0u,c->r[0]); // 801C1F0C
  c->r[4]=R32(c->r[29]+0x000002DCu); // 801C1F10
  c->r[5]=R32(c->r[4]+0x00000000u); // 801C1F14
  goto L_801C1F20; // 801C1F18
L_801C1F1C:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 801C1F1C
L_801C1F20:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1F20
  if (crb(c,2)) { goto L_801C1F38; } // 801C1F24
  c->r[3]=R32(c->r[5]+0x000002D0u); // 801C1F28
  c->r[0]=R32(c->r[29]+0x000002D0u); // 801C1F2C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C1F30
  if (!crb(c,1)) { IRQCHK(c); goto L_801C1F1C; } // 801C1F34
L_801C1F38:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1F38
  if (!crb(c,2)) { goto L_801C1F70; } // 801C1F3C
  c->r[3]=R32(c->r[4]+0x00000004u); // 801C1F40
  cmps(c,0,(int32_t)c->r[3],0); // 801C1F44
  if (!crb(c,2)) { goto L_801C1F54; } // 801C1F48
  W32(c->r[4]+0x00000000u,c->r[29]); // 801C1F4C
  goto L_801C1F58; // 801C1F50
L_801C1F54:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 801C1F54
L_801C1F58:;
  c->r[0]=0u+0x00000000u; // 801C1F58
  W32(c->r[29]+0x000002E4u,c->r[3]); // 801C1F5C
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C1F60
  W32(c->r[29]+0x000002E0u,c->r[0]); // 801C1F64
  W32(c->r[3]+0x00000004u,c->r[29]); // 801C1F68
  goto L_801C1F98; // 801C1F6C
L_801C1F70:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 801C1F70
  c->r[3]=R32(c->r[5]+0x000002E4u); // 801C1F74
  W32(c->r[5]+0x000002E4u,c->r[29]); // 801C1F78
  cmps(c,0,(int32_t)c->r[3],0); // 801C1F7C
  W32(c->r[29]+0x000002E4u,c->r[3]); // 801C1F80
  if (!crb(c,2)) { goto L_801C1F94; } // 801C1F84
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C1F88
  W32(c->r[3]+0x00000000u,c->r[29]); // 801C1F8C
  goto L_801C1F98; // 801C1F90
L_801C1F94:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 801C1F94
L_801C1F98:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 801C1F98
  cmps(c,0,(int32_t)c->r[3],0); // 801C1F9C
  if (crb(c,2)) { goto L_801C2000; } // 801C1FA0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C1FA4
L_801C1FA8:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 801C1FA8
  cmps(c,0,(int32_t)c->r[0],0); // 801C1FAC
  if (crb(c,1)) { goto L_801C2000; } // 801C1FB0
  c->r[4]=R32(c->r[3]+0x000002D4u); // 801C1FB4
  c->r[5]=R32(c->r[3]+0x000002F4u); // 801C1FB8
  goto L_801C1FE0; // 801C1FBC
L_801C1FC0:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C1FC0
  cmps(c,0,(int32_t)c->r[6],0); // 801C1FC4
  if (crb(c,2)) { goto L_801C1FDC; } // 801C1FC8
  c->r[0]=R32(c->r[6]+0x000002D0u); // 801C1FCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1FD0
  if (!crb(c,0)) { goto L_801C1FDC; } // 801C1FD4
  c->r[4]=c->r[0]|c->r[0]; // 801C1FD8
L_801C1FDC:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 801C1FDC
L_801C1FE0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C1FE0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1FC0; } // 801C1FE4
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C1FE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1FEC
  if (crb(c,2)) { goto L_801C2000; } // 801C1FF0
  c->lr=0x801C1FF8u; f_801C12F8(c); // 801C1FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C1FF8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1FA8; } // 801C1FFC
L_801C2000:;
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C2000
  cmps(c,0,(int32_t)c->r[0],0); // 801C2004
  if (crb(c,2)) { goto L_801C2014; } // 801C2008
  c->r[3]=0u+0x00000000u; // 801C200C
  c->lr=0x801C2014u; f_801C14FC(c); // 801C2010
L_801C2014:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2014
  c->lr=0x801C201Cu; f_801BE774(c); // 801C2018
  c->r[3]=c->r[30]|c->r[30]; // 801C201C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2028
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C202C
  c->lr=c->r[0]; // 801C2030
  c->r[1]=c->r[1]+0x00000020u; // 801C2034
  return; // 801C2038
}

// OSSuspendThread
void f_801C203C(Ctx* __restrict c) {
  trace_call(0x801C203Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C203C
  c->r[0]=c->lr; // 801C2040
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2044
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2048
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C204C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2050
  c->r[29]=c->r[3]|c->r[3]; // 801C2054
  c->lr=0x801C205Cu; f_801BE74C(c); // 801C2058
  c->r[30]=R32(c->r[29]+0x000002CCu); // 801C205C
  c->r[31]=c->r[3]|c->r[3]; // 801C2060
  c->r[0]=c->r[30]+0x00000001u; // 801C2064
  cmps(c,0,(int32_t)c->r[30],0); // 801C2068
  W32(c->r[29]+0x000002CCu,c->r[0]); // 801C206C
  if (!crb(c,2)) { goto L_801C21A8; } // 801C2070
  c->r[0]=R16(c->r[29]+0x000002C8u); // 801C2074
  cmps(c,0,(int32_t)c->r[0],3); // 801C2078
  if (crb(c,2)) { goto L_801C2194; } // 801C207C
  if (!crb(c,0)) { goto L_801C2094; } // 801C2080
  cmps(c,0,(int32_t)c->r[0],1); // 801C2084
  if (crb(c,2)) { goto L_801C20B0; } // 801C2088
  if (!crb(c,0)) { goto L_801C20A0; } // 801C208C
  goto L_801C2194; // 801C2090
L_801C2094:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C2094
  if (!crb(c,0)) { goto L_801C2194; } // 801C2098
  goto L_801C20BC; // 801C209C
L_801C20A0:;
  c->r[0]=0u+0x00000001u; // 801C20A0
  W32(c->r[13]+0xFFFF9D1Cu,c->r[0]); // 801C20A4
  W16(c->r[29]+0x000002C8u,c->r[0]); // 801C20A8
  goto L_801C2194; // 801C20AC
L_801C20B0:;
  c->r[3]=c->r[29]|c->r[29]; // 801C20B0
  c->lr=0x801C20B8u; f_801C1254(c); // 801C20B4
  goto L_801C2194; // 801C20B8
L_801C20BC:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 801C20BC
  c->r[5]=R32(c->r[29]+0x000002E4u); // 801C20C0
  cmps(c,0,(int32_t)c->r[4],0); // 801C20C4
  if (!crb(c,2)) { goto L_801C20D8; } // 801C20C8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C20CC
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C20D0
  goto L_801C20DC; // 801C20D4
L_801C20D8:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 801C20D8
L_801C20DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C20DC
  if (!crb(c,2)) { goto L_801C20F0; } // 801C20E0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C20E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C20E8
  goto L_801C20F4; // 801C20EC
L_801C20F0:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 801C20F0
L_801C20F4:;
  c->r[0]=0u+0x00000020u; // 801C20F4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C20F8
  W32(c->r[29]+0x000002D0u,c->r[0]); // 801C20FC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C2100
  cmps(c,0,(int32_t)c->r[4],0); // 801C2104
  if (!crb(c,2)) { goto L_801C2114; } // 801C2108
  W32(c->r[3]+0x00000000u,c->r[29]); // 801C210C
  goto L_801C2118; // 801C2110
L_801C2114:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 801C2114
L_801C2118:;
  c->r[0]=0u+0x00000000u; // 801C2118
  W32(c->r[29]+0x000002E4u,c->r[4]); // 801C211C
  c->r[3]=R32(c->r[29]+0x000002DCu); // 801C2120
  W32(c->r[29]+0x000002E0u,c->r[0]); // 801C2124
  W32(c->r[3]+0x00000004u,c->r[29]); // 801C2128
  c->r[3]=R32(c->r[29]+0x000002F0u); // 801C212C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2130
  if (crb(c,2)) { goto L_801C2194; } // 801C2134
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C2138
L_801C213C:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 801C213C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2140
  if (crb(c,1)) { goto L_801C2194; } // 801C2144
  c->r[4]=R32(c->r[3]+0x000002D4u); // 801C2148
  c->r[5]=R32(c->r[3]+0x000002F4u); // 801C214C
  goto L_801C2174; // 801C2150
L_801C2154:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 801C2154
  cmps(c,0,(int32_t)c->r[6],0); // 801C2158
  if (crb(c,2)) { goto L_801C2170; } // 801C215C
  c->r[0]=R32(c->r[6]+0x000002D0u); // 801C2160
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C2164
  if (!crb(c,0)) { goto L_801C2170; } // 801C2168
  c->r[4]=c->r[0]|c->r[0]; // 801C216C
L_801C2170:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 801C2170
L_801C2174:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C2174
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2154; } // 801C2178
  c->r[0]=R32(c->r[3]+0x000002D0u); // 801C217C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C2180
  if (crb(c,2)) { goto L_801C2194; } // 801C2184
  c->lr=0x801C218Cu; f_801C12F8(c); // 801C2188
  cmps(c,0,(int32_t)c->r[3],0); // 801C218C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C213C; } // 801C2190
L_801C2194:;
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C2194
  cmps(c,0,(int32_t)c->r[0],0); // 801C2198
  if (crb(c,2)) { goto L_801C21A8; } // 801C219C
  c->r[3]=0u+0x00000000u; // 801C21A0
  c->lr=0x801C21A8u; f_801C14FC(c); // 801C21A4
L_801C21A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C21A8
  c->lr=0x801C21B0u; f_801BE774(c); // 801C21AC
  c->r[3]=c->r[30]|c->r[30]; // 801C21B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C21B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C21B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C21BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C21C0
  c->lr=c->r[0]; // 801C21C4
  c->r[1]=c->r[1]+0x00000020u; // 801C21C8
  return; // 801C21CC
}

// OSSleepThread
void f_801C21D0(Ctx* __restrict c) {
  trace_call(0x801C21D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C21D0
  c->r[0]=c->lr; // 801C21D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C21D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C21DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C21E0
  c->r[30]=c->r[3]|c->r[3]; // 801C21E4
  c->lr=0x801C21ECu; f_801BE74C(c); // 801C21E8
  c->r[4]=0u+0x80000000u; // 801C21EC
  c->r[0]=0u+0x00000004u; // 801C21F0
  c->r[4]=R32(c->r[4]+0x000000E4u); // 801C21F4
  c->r[31]=c->r[3]|c->r[3]; // 801C21F8
  W16(c->r[4]+0x000002C8u,c->r[0]); // 801C21FC
  W32(c->r[4]+0x000002DCu,c->r[30]); // 801C2200
  c->r[5]=R32(c->r[30]+0x00000000u); // 801C2204
  goto L_801C2210; // 801C2208
L_801C220C:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 801C220C
L_801C2210:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C2210
  if (crb(c,2)) { goto L_801C2228; } // 801C2214
  c->r[3]=R32(c->r[5]+0x000002D0u); // 801C2218
  c->r[0]=R32(c->r[4]+0x000002D0u); // 801C221C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C2220
  if (!crb(c,1)) { IRQCHK(c); goto L_801C220C; } // 801C2224
L_801C2228:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C2228
  if (!crb(c,2)) { goto L_801C225C; } // 801C222C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801C2230
  cmps(c,0,(int32_t)c->r[3],0); // 801C2234
  if (!crb(c,2)) { goto L_801C2244; } // 801C2238
  W32(c->r[30]+0x00000000u,c->r[4]); // 801C223C
  goto L_801C2248; // 801C2240
L_801C2244:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 801C2244
L_801C2248:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 801C2248
  c->r[0]=0u+0x00000000u; // 801C224C
  W32(c->r[4]+0x000002E0u,c->r[0]); // 801C2250
  W32(c->r[30]+0x00000004u,c->r[4]); // 801C2254
  goto L_801C2280; // 801C2258
L_801C225C:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 801C225C
  c->r[3]=R32(c->r[5]+0x000002E4u); // 801C2260
  W32(c->r[5]+0x000002E4u,c->r[4]); // 801C2264
  cmps(c,0,(int32_t)c->r[3],0); // 801C2268
  W32(c->r[4]+0x000002E4u,c->r[3]); // 801C226C
  if (!crb(c,2)) { goto L_801C227C; } // 801C2270
  W32(c->r[30]+0x00000000u,c->r[4]); // 801C2274
  goto L_801C2280; // 801C2278
L_801C227C:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 801C227C
L_801C2280:;
  c->r[0]=0u+0x00000001u; // 801C2280
  W32(c->r[13]+0xFFFF9D1Cu,c->r[0]); // 801C2284
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C2288
  cmps(c,0,(int32_t)c->r[0],0); // 801C228C
  if (crb(c,2)) { goto L_801C229C; } // 801C2290
  c->r[3]=0u+0x00000000u; // 801C2294
  c->lr=0x801C229Cu; f_801C14FC(c); // 801C2298
L_801C229C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C229C
  c->lr=0x801C22A4u; f_801BE774(c); // 801C22A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C22A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C22A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C22AC
  c->lr=c->r[0]; // 801C22B0
  c->r[1]=c->r[1]+0x00000010u; // 801C22B4
  return; // 801C22B8
}

// OSWakeupThread
void f_801C22BC(Ctx* __restrict c) {
  trace_call(0x801C22BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C22BC
  c->r[0]=c->lr; // 801C22C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C22C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C22C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C22CC
  c->r[30]=c->r[3]|c->r[3]; // 801C22D0
  c->lr=0x801C22D8u; f_801BE74C(c); // 801C22D4
  c->r[5]=0u+0x80570000u; // 801C22D8
  c->r[31]=c->r[3]|c->r[3]; // 801C22DC
  c->r[5]=c->r[5]+0xFFFF9A70u; // 801C22E0
  c->r[6]=0u+0x00000000u; // 801C22E4
  c->r[3]=0u+0x00000001u; // 801C22E8
  goto L_801C2370; // 801C22EC
L_801C22F0:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 801C22F0
  cmps(c,0,(int32_t)c->r[4],0); // 801C22F4
  if (!crb(c,2)) { goto L_801C2304; } // 801C22F8
  W32(c->r[30]+0x00000004u,c->r[6]); // 801C22FC
  goto L_801C2308; // 801C2300
L_801C2304:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 801C2304
L_801C2308:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801C2308
  W16(c->r[8]+0x000002C8u,c->r[3]); // 801C230C
  c->r[0]=R32(c->r[8]+0x000002CCu); // 801C2310
  cmps(c,0,(int32_t)c->r[0],0); // 801C2314
  if (crb(c,1)) { goto L_801C2370; } // 801C2318
  c->r[0]=R32(c->r[8]+0x000002D0u); // 801C231C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801C2320
  c->r[4]=c->r[5]+c->r[0]; // 801C2324
  W32(c->r[8]+0x000002DCu,c->r[4]); // 801C2328
  c->r[7]=R32(c->r[4]+0x00000004u); // 801C232C
  cmps(c,0,(int32_t)c->r[7],0); // 801C2330
  if (!crb(c,2)) { goto L_801C2340; } // 801C2334
  W32(c->r[4]+0x00000000u,c->r[8]); // 801C2338
  goto L_801C2344; // 801C233C
L_801C2340:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 801C2340
L_801C2344:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 801C2344
  W32(c->r[8]+0x000002E0u,c->r[6]); // 801C2348
  c->r[4]=R32(c->r[8]+0x000002DCu); // 801C234C
  W32(c->r[4]+0x00000004u,c->r[8]); // 801C2350
  c->r[0]=R32(c->r[8]+0x000002D0u); // 801C2354
  c->r[4]=R32(c->r[13]+0xFFFF9D20u); // 801C2358
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801C235C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C2360
  c->r[0]=c->r[4]|c->r[0]; // 801C2364
  W32(c->r[13]+0xFFFF9D20u,c->r[0]); // 801C2368
  W32(c->r[13]+0xFFFF9D1Cu,c->r[3]); // 801C236C
L_801C2370:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 801C2370
  cmps(c,0,(int32_t)c->r[8],0); // 801C2374
  if (!crb(c,2)) { IRQCHK(c); goto L_801C22F0; } // 801C2378
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C237C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2380
  if (crb(c,2)) { goto L_801C2390; } // 801C2384
  c->r[3]=0u+0x00000000u; // 801C2388
  c->lr=0x801C2390u; f_801C14FC(c); // 801C238C
L_801C2390:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2390
  c->lr=0x801C2398u; f_801BE774(c); // 801C2394
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C239C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C23A0
  c->lr=c->r[0]; // 801C23A4
  c->r[1]=c->r[1]+0x00000010u; // 801C23A8
  return; // 801C23AC
}

// fn_801C23B0
void f_801C23B0(Ctx* __restrict c) {
  trace_call(0x801C23B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C23B0
  c->r[0]=c->lr; // 801C23B4
  cmps(c,0,(int32_t)c->r[4],0); // 801C23B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C23BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C23C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C23C4
  c->r[30]=c->r[4]|c->r[4]; // 801C23C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C23CC
  c->r[29]=c->r[3]|c->r[3]; // 801C23D0
  if (crb(c,0)) { goto L_801C23E0; } // 801C23D4
  cmps(c,0,(int32_t)c->r[4],31); // 801C23D8
  if (!crb(c,1)) { goto L_801C23E8; } // 801C23DC
L_801C23E0:;
  c->r[3]=0u+0x00000000u; // 801C23E0
  goto L_801C2480; // 801C23E4
L_801C23E8:;
  c->lr=0x801C23ECu; f_801BE74C(c); // 801C23E8
  c->r[0]=R32(c->r[29]+0x000002D4u); // 801C23EC
  c->r[31]=c->r[3]|c->r[3]; // 801C23F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801C23F4
  if (crb(c,2)) { goto L_801C2474; } // 801C23F8
  W32(c->r[29]+0x000002D4u,c->r[30]); // 801C23FC
L_801C2400:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 801C2400
  cmps(c,0,(int32_t)c->r[0],0); // 801C2404
  if (crb(c,1)) { goto L_801C2460; } // 801C2408
  c->r[4]=R32(c->r[29]+0x000002D4u); // 801C240C
  c->r[3]=R32(c->r[29]+0x000002F4u); // 801C2410
  goto L_801C2438; // 801C2414
L_801C2418:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C2418
  cmps(c,0,(int32_t)c->r[5],0); // 801C241C
  if (crb(c,2)) { goto L_801C2434; } // 801C2420
  c->r[0]=R32(c->r[5]+0x000002D0u); // 801C2424
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C2428
  if (!crb(c,0)) { goto L_801C2434; } // 801C242C
  c->r[4]=c->r[0]|c->r[0]; // 801C2430
L_801C2434:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C2434
L_801C2438:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C2438
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2418; } // 801C243C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 801C2440
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C2444
  if (crb(c,2)) { goto L_801C2460; } // 801C2448
  c->r[3]=c->r[29]|c->r[29]; // 801C244C
  c->lr=0x801C2454u; f_801C12F8(c); // 801C2450
  cmps(c,0,(int32_t)c->r[3],0); // 801C2454
  c->r[29]=c->r[3]|c->r[3]; // 801C2458
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2400; } // 801C245C
L_801C2460:;
  c->r[0]=R32(c->r[13]+0xFFFF9D1Cu); // 801C2460
  cmps(c,0,(int32_t)c->r[0],0); // 801C2464
  if (crb(c,2)) { goto L_801C2474; } // 801C2468
  c->r[3]=0u+0x00000000u; // 801C246C
  c->lr=0x801C2474u; f_801C14FC(c); // 801C2470
L_801C2474:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2474
  c->lr=0x801C247Cu; f_801BE774(c); // 801C2478
  c->r[3]=0u+0x00000001u; // 801C247C
L_801C2480:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2480
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2484
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2488
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C248C
  c->lr=c->r[0]; // 801C2490
  c->r[1]=c->r[1]+0x00000020u; // 801C2494
  return; // 801C2498
}

// fn_801C249C
void f_801C249C(Ctx* __restrict c) {
  trace_call(0x801C249Cu);
  c->r[3]=R32(c->r[3]+0x000002D4u); // 801C249C
  return; // 801C24A0
}

// fn_801C24A4
void f_801C24A4(Ctx* __restrict c) {
  trace_call(0x801C24A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C24A4
  c->r[0]=c->lr; // 801C24A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C24AC
  c->lr=0x801C24B4u; f_801B9EF8(c); // 801C24B0
  c->lr=0x801C24B8u; f_801C1DA4(c); // 801C24B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C24B8
  c->lr=c->r[0]; // 801C24BC
  c->r[1]=c->r[1]+0x00000010u; // 801C24C0
  return; // 801C24C4
}

// OSSleepTicks
void f_801C24C8(Ctx* __restrict c) {
  trace_call(0x801C24C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C24C8
  c->r[0]=c->lr; // 801C24CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C24D0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801C24D4
  W32(c->r[1]+0x00000048u,c->r[30]); // 801C24D8
  W32(c->r[1]+0x00000044u,c->r[29]); // 801C24DC
  c->r[29]=c->r[3]|c->r[3]; // 801C24E0
  W32(c->r[1]+0x00000040u,c->r[28]); // 801C24E4
  c->r[28]=c->r[4]|c->r[4]; // 801C24E8
  c->lr=0x801C24F0u; f_801BE74C(c); // 801C24EC
  c->r[4]=0u+0x80000000u; // 801C24F0
  c->r[30]=c->r[3]|c->r[3]; // 801C24F4
  c->r[31]=R32(c->r[4]+0x000000E4u); // 801C24F8
  cmps(c,0,(int32_t)c->r[31],0); // 801C24FC
  if (!crb(c,2)) { goto L_801C250C; } // 801C2500
  c->lr=0x801C2508u; f_801BE774(c); // 801C2504
  goto L_801C255C; // 801C2508
L_801C250C:;
  c->r[3]=c->r[1]+0x00000008u; // 801C250C
  c->lr=0x801C2514u; f_801B9774(c); // 801C2510
  c->r[4]=c->r[31]|c->r[31]; // 801C2514
  c->r[3]=c->r[1]+0x00000008u; // 801C2518
  c->lr=0x801C2520u; f_801B9E5C(c); // 801C251C
  c->r[4]=c->r[31]|c->r[31]; // 801C2520
  c->r[3]=c->r[1]+0x00000008u; // 801C2524
  c->lr=0x801C252Cu; f_801B9EF0(c); // 801C2528
  c->r[7]=0u+0x801C0000u; // 801C252C
  c->r[6]=c->r[28]|c->r[28]; // 801C2530
  c->r[5]=c->r[29]|c->r[29]; // 801C2534
  c->r[3]=c->r[1]+0x00000008u; // 801C2538
  c->r[7]=c->r[7]+0x000024A4u; // 801C253C
  c->lr=0x801C2544u; f_801B99D4(c); // 801C2540
  c->r[3]=c->r[31]|c->r[31]; // 801C2544
  c->lr=0x801C254Cu; f_801C203C(c); // 801C2548
  c->r[3]=c->r[1]+0x00000008u; // 801C254C
  c->lr=0x801C2554u; f_801B9AC8(c); // 801C2550
  c->r[3]=c->r[30]|c->r[30]; // 801C2554
  c->lr=0x801C255Cu; f_801BE774(c); // 801C2558
L_801C255C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C255C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801C2560
  c->r[30]=R32(c->r[1]+0x00000048u); // 801C2564
  c->r[29]=R32(c->r[1]+0x00000044u); // 801C2568
  c->r[28]=R32(c->r[1]+0x00000040u); // 801C256C
  c->lr=c->r[0]; // 801C2570
  c->r[1]=c->r[1]+0x00000050u; // 801C2574
  return; // 801C2578
}

// OSGetTime
void f_801C257C(Ctx* __restrict c) {
  trace_call(0x801C257Cu);
L_801C257C:;
  c->r[3]=mftb(c,269); // 801C257C
  c->r[4]=mftb(c,268); // 801C2580
  c->r[5]=mftb(c,269); // 801C2584
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 801C2588
  if (!crb(c,2)) { IRQCHK(c); goto L_801C257C; } // 801C258C
  return; // 801C2590
}

// OSGetTick
void f_801C2594(Ctx* __restrict c) {
  trace_call(0x801C2594u);
  c->r[3]=mftb(c,268); // 801C2594
  return; // 801C2598
}

// __OSGetSystemTime
void f_801C259C(Ctx* __restrict c) {
  trace_call(0x801C259Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C259C
  c->r[0]=c->lr; // 801C25A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C25A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C25A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C25AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C25B0
  c->lr=0x801C25B8u; f_801BE74C(c); // 801C25B4
  c->r[31]=c->r[3]|c->r[3]; // 801C25B8
  c->lr=0x801C25C0u; f_801C257C(c); // 801C25BC
  c->r[6]=0u+0x80000000u; // 801C25C0
  c->r[5]=R32(c->r[6]+0x000030DCu); // 801C25C4
  c->r[0]=R32(c->r[6]+0x000030D8u); // 801C25C8
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 801C25CC
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801C25D0
  c->r[3]=c->r[31]|c->r[31]; // 801C25D4
  c->lr=0x801C25DCu; f_801BE774(c); // 801C25D8
  c->r[4]=c->r[29]|c->r[29]; // 801C25DC
  c->r[3]=c->r[30]|c->r[30]; // 801C25E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C25E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C25E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C25EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C25F0
  c->lr=c->r[0]; // 801C25F4
  c->r[1]=c->r[1]+0x00000020u; // 801C25F8
  return; // 801C25FC
}

// __OSTimeToSystemTime
void f_801C2600(Ctx* __restrict c) {
  trace_call(0x801C2600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2600
  c->r[0]=c->lr; // 801C2604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C260C
  c->r[31]=c->r[3]|c->r[3]; // 801C2610
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C2614
  c->r[30]=c->r[4]|c->r[4]; // 801C2618
  c->lr=0x801C2620u; f_801BE74C(c); // 801C261C
  c->r[5]=0u+0x80000000u; // 801C2620
  c->r[4]=R32(c->r[5]+0x000030DCu); // 801C2624
  c->r[0]=R32(c->r[5]+0x000030D8u); // 801C2628
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 801C262C
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 801C2630
  c->lr=0x801C2638u; f_801BE774(c); // 801C2634
  c->r[3]=c->r[31]|c->r[31]; // 801C2638
  c->r[4]=c->r[30]|c->r[30]; // 801C263C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2640
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C2644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2648
  c->lr=c->r[0]; // 801C264C
  c->r[1]=c->r[1]+0x00000010u; // 801C2650
  return; // 801C2654
}

// GetDates
void f_801C2658(Ctx* __restrict c) {
  trace_call(0x801C2658u);
  c->r[7]=0u+0x92490000u; // 801C2658
  c->r[6]=0u+0xB38D0000u; // 801C265C
  c->r[8]=c->r[3]+0x00000006u; // 801C2660
  c->r[5]=0u+0x51EC0000u; // 801C2664
  c->r[0]=c->r[6]+0xFFFFF9B1u; // 801C2668
  c->r[7]=c->r[7]+0x00002493u; // 801C266C
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[8])>>32); // 801C2670
  c->r[10]=c->r[5]+0xFFFF851Fu; // 801C2674
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801C2678
  c->r[5]=c->r[6]+c->r[8]; // 801C267C
  c->r[5]=sraw(c,c->r[5],2); // 801C2680
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801C2684
  c->r[5]=c->r[5]+c->r[6]; // 801C2688
  c->r[0]=c->r[0]+c->r[3]; // 801C268C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)7); // 801C2690
  c->r[0]=sraw(c,c->r[0],8); // 801C2694
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801C2698
  c->r[5]=c->r[0]+c->r[5]; // 801C269C
  c->r[0]=c->r[8]-c->r[6]; // 801C26A0
  c->r[11]=(uint32_t)((int32_t)c->r[5]*(int32_t)365); // 801C26A4
  W32(c->r[4]+0x00000018u,c->r[0]); // 801C26A8
  goto L_801C26B8; // 801C26AC
L_801C26B0:;
  c->r[11]=c->r[11]+0xFFFFFE93u; // 801C26B0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C26B4
L_801C26B8:;
  cmps(c,0,(int32_t)c->r[5],1); // 801C26B8
  if (crb(c,0)) { goto L_801C26F8; } // 801C26BC
  c->r[6]=c->r[5]+0xFFFFFFFFu; // 801C26C0
  c->r[0]=c->r[5]+0x00000003u; // 801C26C4
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 801C26C8
  c->r[8]=sraw(c,c->r[6],7); // 801C26CC
  c->r[6]=sraw(c,c->r[6],5); // 801C26D0
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801C26D4
  c->r[0]=sraw(c,c->r[0],2); // 801C26D8
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 801C26DC
  c->r[6]=c->r[6]+c->r[7]; // 801C26E0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C26E4
  c->r[7]=c->r[8]+c->r[9]; // 801C26E8
  c->r[0]=c->r[0]-c->r[6]; // 801C26EC
  c->r[0]=c->r[7]+c->r[0]; // 801C26F0
  goto L_801C26FC; // 801C26F4
L_801C26F8:;
  c->r[0]=0u+0x00000000u; // 801C26F8
L_801C26FC:;
  c->r[8]=c->r[11]+c->r[0]; // 801C26FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 801C2700
  if (crb(c,0)) { IRQCHK(c); goto L_801C26B0; } // 801C2704
  c->r[0]=rotl(c->r[5],30)&0xC0000000u; // 801C2708
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801C270C
  c->r[6]=c->r[0]-c->r[7]; // 801C2710
  W32(c->r[4]+0x00000014u,c->r[5]); // 801C2714
  c->r[0]=c->r[3]-c->r[8]; // 801C2718
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFFu; // 801C271C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801C2720
  c->r[3]=c->r[3]+c->r[7]; cr0(c,c->r[3]); // 801C2724
  c->r[7]=0u+0x00000000u; // 801C2728
  if (!crb(c,2)) { goto L_801C2754; } // 801C272C
  c->r[3]=0u+0x51EC0000u; // 801C2730
  c->r[3]=c->r[3]+0xFFFF851Fu; // 801C2734
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 801C2738
  c->r[3]=sraw(c,c->r[3],5); // 801C273C
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 801C2740
  c->r[3]=c->r[3]+c->r[6]; // 801C2744
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801C2748
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 801C274C
  if (!crb(c,2)) { goto L_801C2778; } // 801C2750
L_801C2754:;
  c->r[3]=0u+0x51EC0000u; // 801C2754
  c->r[3]=c->r[3]+0xFFFF851Fu; // 801C2758
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 801C275C
  c->r[3]=sraw(c,c->r[3],7); // 801C2760
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 801C2764
  c->r[3]=c->r[3]+c->r[6]; // 801C2768
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)400); // 801C276C
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 801C2770
  if (!crb(c,2)) { goto L_801C277C; } // 801C2774
L_801C2778:;
  c->r[7]=0u+0x00000001u; // 801C2778
L_801C277C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C277C
  c->r[6]=0u+0x804A0000u; // 801C2780
  c->r[6]=c->r[6]+0x00003D50u; // 801C2784
  if (crb(c,2)) { goto L_801C2794; } // 801C2788
  c->r[6]=0u+0x804A0000u; // 801C278C
  c->r[6]=c->r[6]+0x00003D80u; // 801C2790
L_801C2794:;
  c->r[7]=0u+0x0000000Cu; // 801C2794
  c->r[3]=0u+0x00000030u; // 801C2798
L_801C279C:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801C279C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801C27A0
  c->r[5]=R32(c->r[6]+c->r[3]); // 801C27A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C27A8
  if (crb(c,0)) { IRQCHK(c); goto L_801C279C; } // 801C27AC
  W32(c->r[4]+0x00000010u,c->r[7]); // 801C27B0
  c->r[3]=R32(c->r[6]+c->r[3]); // 801C27B4
  c->r[3]=c->r[0]-c->r[3]; // 801C27B8
  c->r[0]=c->r[3]+0x00000001u; // 801C27BC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C27C0
  return; // 801C27C4
}

// OSTicksToCalendarTime
void f_801C27C8(Ctx* __restrict c) {
  trace_call(0x801C27C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C27C8
  c->r[0]=c->lr; // 801C27CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C27D0
  c->r[11]=c->r[1]+0x00000020u; // 801C27D4
  c->lr=0x801C27DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C27D8
  c->r[6]=0u+0x80000000u; // 801C27DC
  c->r[29]=c->r[5]|c->r[5]; // 801C27E0
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801C27E4
  c->r[28]=c->r[3]|c->r[3]; // 801C27E8
  c->r[27]=c->r[4]|c->r[4]; // 801C27EC
  c->r[5]=0u+0x00000000u; // 801C27F0
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C27F4
  c->r[6]=c->r[26]|c->r[26]; // 801C27F8
  c->lr=0x801C2800u; f_801E7CC8(c); // 801C27FC
  c->r[7]=0u+0x00000000u; // 801C2800
  c->r[0]=c->r[3]^0x80000000u; // 801C2804
  c->r[6]=c->r[7]^0x80000000u; // 801C2808
  c->r[30]=c->r[4]|c->r[4]; // 801C280C
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 801C2810
  c->r[31]=c->r[3]|c->r[3]; // 801C2814
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 801C2818
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C281C
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801C2820
  if (crb(c,2)) { goto L_801C2830; } // 801C2824
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 801C2828
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 801C282C
L_801C2830:;
  c->r[4]=0u+0x431C0000u; // 801C2830
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801C2834
  c->r[0]=c->r[4]+0xFFFFDE83u; // 801C2838
  c->r[5]=0u+0x00000000u; // 801C283C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 801C2840
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801C2844
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801C2848
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801C284C
  c->lr=0x801C2854u; f_801E7AAC(c); // 801C2850
  c->r[6]=0u+0x000003E8u; // 801C2854
  c->r[5]=0u+0x00000000u; // 801C2858
  c->lr=0x801C2860u; f_801E7CC8(c); // 801C285C
  W32(c->r[29]+0x00000024u,c->r[4]); // 801C2860
  c->r[26]=0u+0x80000000u; // 801C2864
  c->r[4]=0u+0x10620000u; // 801C2868
  c->r[3]=c->r[31]|c->r[31]; // 801C286C
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801C2870
  c->r[6]=c->r[4]+0x00004DD3u; // 801C2874
  c->r[4]=c->r[30]|c->r[30]; // 801C2878
  c->r[5]=0u+0x00000000u; // 801C287C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C2880
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 801C2884
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C2888
  c->lr=0x801C2890u; f_801E7AAC(c); // 801C288C
  c->r[6]=0u+0x000003E8u; // 801C2890
  c->r[5]=0u+0x00000000u; // 801C2894
  c->lr=0x801C289Cu; f_801E7CC8(c); // 801C2898
  W32(c->r[29]+0x00000020u,c->r[4]); // 801C289C
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 801C28A0
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 801C28A4
  c->r[5]=0u+0x00000000u; // 801C28A8
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801C28AC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C28B0
  c->lr=0x801C28B8u; f_801E7AAC(c); // 801C28B4
  c->r[27]=0u+0x00010000u; // 801C28B8
  c->r[28]=c->r[4]|c->r[4]; // 801C28BC
  c->r[26]=c->r[3]|c->r[3]; // 801C28C0
  c->r[5]=0u+0x00000000u; // 801C28C4
  c->r[6]=c->r[27]+0x00005180u; // 801C28C8
  c->lr=0x801C28D0u; f_801E7AAC(c); // 801C28CC
  c->r[3]=0u+0x000B0000u; // 801C28D0
  c->r[6]=c->r[27]+0x00005180u; // 801C28D4
  c->r[0]=c->r[3]+0x00002575u; // 801C28D8
  c->r[5]=0u+0x00000000u; // 801C28DC
  c->r[3]=c->r[26]|c->r[26]; // 801C28E0
  c->r[26]=addc(c,c->r[4],c->r[0],0); // 801C28E4
  c->r[4]=c->r[28]|c->r[28]; // 801C28E8
  c->lr=0x801C28F0u; f_801E7CC8(c); // 801C28EC
  cmps(c,0,(int32_t)c->r[4],0); // 801C28F0
  c->r[31]=c->r[4]|c->r[4]; // 801C28F4
  if (!crb(c,0)) { goto L_801C2908; } // 801C28F8
  c->r[31]=c->r[4]+0x00010000u; // 801C28FC
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 801C2900
  c->r[31]=c->r[31]+0x00005180u; // 801C2904
L_801C2908:;
  c->r[3]=c->r[26]|c->r[26]; // 801C2908
  c->r[4]=c->r[29]|c->r[29]; // 801C290C
  c->lr=0x801C2914u; f_801C2658(c); // 801C2910
  c->r[3]=0u+0x88890000u; // 801C2914
  c->r[11]=c->r[1]+0x00000020u; // 801C2918
  c->r[5]=c->r[3]+0xFFFF8889u; // 801C291C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[31])>>32); // 801C2920
  c->r[3]=c->r[0]+c->r[31]; // 801C2924
  c->r[0]=sraw(c,c->r[3],5); // 801C2928
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C292C
  c->r[8]=c->r[0]+c->r[4]; // 801C2930
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[8])>>32); // 801C2934
  c->r[0]=c->r[0]+c->r[8]; // 801C2938
  c->r[6]=sraw(c,c->r[0],5); // 801C293C
  c->r[4]=sraw(c,c->r[0],5); // 801C2940
  c->r[0]=sraw(c,c->r[3],5); // 801C2944
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801C2948
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801C294C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C2950
  c->r[6]=c->r[6]+c->r[7]; // 801C2954
  c->r[0]=c->r[0]+c->r[3]; // 801C2958
  c->r[4]=c->r[4]+c->r[5]; // 801C295C
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 801C2960
  W32(c->r[29]+0x00000008u,c->r[6]); // 801C2964
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801C2968
  c->r[3]=c->r[8]-c->r[3]; // 801C296C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801C2970
  c->r[0]=c->r[31]-c->r[0]; // 801C2974
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C2978
  c->lr=0x801C2980u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C297C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2980
  c->lr=c->r[0]; // 801C2984
  c->r[1]=c->r[1]+0x00000020u; // 801C2988
  return; // 801C298C
}

// fn_801C2990
void f_801C2990(Ctx* __restrict c) {
  trace_call(0x801C2990u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2990
  c->r[0]=c->lr; // 801C2994
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C2998
  c->r[11]=c->r[1]+0x00000040u; // 801C299C
  c->lr=0x801C29A4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C29A0
  c->r[4]=0u+0x2AAB0000u; // 801C29A4
  c->r[5]=R32(c->r[3]+0x00000010u); // 801C29A8
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801C29AC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801C29B0
  c->r[0]=sraw(c,c->r[0],1); // 801C29B4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C29B8
  c->r[6]=c->r[0]+c->r[4]; // 801C29BC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801C29C0
  c->r[4]=c->r[5]-c->r[0]; cr0(c,c->r[4]); // 801C29C4
  if (!crb(c,0)) { goto L_801C29D4; } // 801C29C8
  c->r[4]=c->r[4]+0x0000000Cu; // 801C29CC
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801C29D0
L_801C29D4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C29D4
  c->r[9]=c->r[0]+c->r[6]; // 801C29D8
  cmps(c,0,(int32_t)c->r[9],1); // 801C29DC
  if (!crb(c,0)) { goto L_801C29EC; } // 801C29E0
  c->r[7]=0u+0x00000000u; // 801C29E4
  goto L_801C2A28; // 801C29E8
L_801C29EC:;
  c->r[5]=0u+0x51EC0000u; // 801C29EC
  c->r[6]=c->r[9]+0xFFFFFFFFu; // 801C29F0
  c->r[5]=c->r[5]+0xFFFF851Fu; // 801C29F4
  c->r[0]=c->r[9]+0x00000003u; // 801C29F8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 801C29FC
  c->r[7]=sraw(c,c->r[5],7); // 801C2A00
  c->r[5]=sraw(c,c->r[5],5); // 801C2A04
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801C2A08
  c->r[0]=sraw(c,c->r[0],2); // 801C2A0C
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 801C2A10
  c->r[5]=c->r[5]+c->r[6]; // 801C2A14
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C2A18
  c->r[6]=c->r[7]+c->r[8]; // 801C2A1C
  c->r[0]=c->r[0]-c->r[5]; // 801C2A20
  c->r[7]=c->r[6]+c->r[0]; // 801C2A24
L_801C2A28:;
  c->r[0]=rotl(c->r[9],30)&0xC0000000u; // 801C2A28
  c->r[5]=rotl(c->r[9],1)&0x00000001u; // 801C2A2C
  c->r[0]=c->r[0]-c->r[5]; // 801C2A30
  c->r[6]=0u+0x00000000u; // 801C2A34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 801C2A38
  c->r[0]=c->r[0]+c->r[5]; cr0(c,c->r[0]); // 801C2A3C
  if (!crb(c,2)) { goto L_801C2A68; } // 801C2A40
  c->r[5]=0u+0x51EC0000u; // 801C2A44
  c->r[0]=c->r[5]+0xFFFF851Fu; // 801C2A48
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 801C2A4C
  c->r[0]=sraw(c,c->r[0],5); // 801C2A50
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801C2A54
  c->r[0]=c->r[0]+c->r[5]; // 801C2A58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C2A5C
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 801C2A60
  if (!crb(c,2)) { goto L_801C2A8C; } // 801C2A64
L_801C2A68:;
  c->r[5]=0u+0x51EC0000u; // 801C2A68
  c->r[0]=c->r[5]+0xFFFF851Fu; // 801C2A6C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 801C2A70
  c->r[0]=sraw(c,c->r[0],7); // 801C2A74
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801C2A78
  c->r[0]=c->r[0]+c->r[5]; // 801C2A7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)400); // 801C2A80
  c->r[0]=c->r[9]-c->r[0]; cr0(c,c->r[0]); // 801C2A84
  if (!crb(c,2)) { goto L_801C2A90; } // 801C2A88
L_801C2A8C:;
  c->r[6]=0u+0x00000001u; // 801C2A8C
L_801C2A90:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C2A90
  c->r[22]=0u+0x804A0000u; // 801C2A94
  c->r[22]=c->r[22]+0x00003D50u; // 801C2A98
  if (crb(c,2)) { goto L_801C2AA8; } // 801C2A9C
  c->r[22]=0u+0x804A0000u; // 801C2AA0
  c->r[22]=c->r[22]+0x00003D80u; // 801C2AA4
L_801C2AA8:;
  c->r[5]=0u+0x80000000u; // 801C2AA8
  c->r[6]=R32(c->r[3]+0x00000024u); // 801C2AAC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C2AB0
  c->r[12]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C2AB4
  c->r[10]=0u+0x431C0000u; // 801C2AB8
  c->r[5]=0u+0x00000000u; // 801C2ABC
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C2AC0
  c->r[20]=sraw(c,c->r[6],31); // 801C2AC4
  c->r[0]=c->r[10]+0xFFFFDE83u; // 801C2AC8
  c->r[23]=R32(c->r[3]+0x0000000Cu); // 801C2ACC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[8])>>32); // 801C2AD0
  c->r[22]=R32(c->r[22]+c->r[12]); // 801C2AD4
  c->r[12]=c->r[23]+c->r[7]; // 801C2AD8
  c->r[27]=R32(c->r[3]+0x00000004u); // 801C2ADC
  c->r[10]=0u+0x00010000u; // 801C2AE0
  c->r[29]=R32(c->r[3]+0x00000008u); // 801C2AE4
  c->r[4]=rotl(c->r[0],17)&0x0001FFFFu; // 801C2AE8
  c->r[7]=0u+0x10620000u; // 801C2AEC
  c->r[21]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 801C2AF0
  c->r[11]=0u+0x01E10000u; // 801C2AF4
  c->r[7]=c->r[7]+0x00004DD3u; // 801C2AF8
  c->r[26]=R32(c->r[3]+0x00000000u); // 801C2AFC
  c->r[0]=c->r[11]+0x00003380u; // 801C2B00
  c->r[11]=R32(c->r[3]+0x00000020u); // 801C2B04
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801C2B08
  c->r[23]=c->r[10]+0x00005180u; // 801C2B0C
  c->r[3]=c->r[22]+c->r[12]; // 801C2B10
  c->r[28]=0u+0x0000003Cu; // 801C2B14
  c->r[22]=c->r[3]+0xFFFFFFFFu; // 801C2B18
  c->r[3]=0u+0x4E1E0000u; // 801C2B1C
  c->r[25]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 801C2B20
  c->r[10]=c->r[21]+c->r[24]; // 801C2B24
  c->r[31]=c->r[3]+0x00004080u; // 801C2B28
  c->r[30]=0u+0x00000E10u; // 801C2B2C
  c->r[12]=0u+0xFFFFFFF1u; // 801C2B30
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[20]); // 801C2B34
  c->r[4]=rotl(c->r[25],29)&0xFFFFFFFFu; // 801C2B38
  c->r[10]=c->r[10]+c->r[6]; // 801C2B3C
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[8])>>32); // 801C2B40
  c->r[3]=c->r[10]|c->r[10]; // 801C2B44
  c->r[4]=(rotl(c->r[10],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 801C2B48
  c->r[3]=(rotl(c->r[25],0)&0x00000007u)|(c->r[3]&~0x00000007u); // 801C2B4C
  c->r[3]=sraw(c,c->r[3],3); // 801C2B50
  c->r[10]=rotl(c->r[6],26)&0x03FFFFFFu; // 801C2B54
  c->r[4]=addc(c,c->r[4],0,c->xer_ca); // 801C2B58
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801C2B5C
  c->r[24]=sraw(c,c->r[9],31); // 801C2B60
  c->r[7]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 801C2B64
  c->r[25]=sraw(c,c->r[22],31); // 801C2B68
  c->r[21]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 801C2B6C
  c->r[20]=c->r[7]+c->r[21]; // 801C2B70
  c->r[21]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[24]); // 801C2B74
  c->r[6]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[22])>>32); // 801C2B78
  c->r[20]=c->r[20]+c->r[21]; // 801C2B7C
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 801C2B80
  c->r[24]=c->r[6]+c->r[7]; // 801C2B84
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[9]); // 801C2B88
  c->r[6]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[25]); // 801C2B8C
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[22]); // 801C2B90
  c->r[24]=c->r[24]+c->r[6]; // 801C2B94
  c->r[25]=addc(c,c->r[7],c->r[0],0); // 801C2B98
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[27]*(int64_t)(int32_t)c->r[28])>>32); // 801C2B9C
  c->r[28]=addc(c,c->r[20],c->r[24],c->xer_ca); // 801C2BA0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[29]*(int64_t)(int32_t)c->r[30])>>32); // 801C2BA4
  c->r[9]=(uint32_t)((int32_t)c->r[27]*(int32_t)60); // 801C2BA8
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)3600); // 801C2BAC
  c->r[6]=addc(c,c->r[9],c->r[6],0); // 801C2BB0
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 801C2BB4
  c->r[0]=sraw(c,c->r[26],31); // 801C2BB8
  c->r[6]=addc(c,c->r[6],c->r[26],0); // 801C2BBC
  c->r[0]=addc(c,c->r[7],c->r[0],c->xer_ca); // 801C2BC0
  c->r[6]=addc(c,c->r[6],c->r[31],0); // 801C2BC4
  c->r[0]=addc(c,c->r[0],c->r[12],c->xer_ca); // 801C2BC8
  c->r[12]=addc(c,c->r[25],c->r[6],0); // 801C2BCC
  c->r[6]=addc(c,c->r[28],c->r[0],c->xer_ca); // 801C2BD0
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[8]); // 801C2BD4
  c->r[0]=sraw(c,c->r[11],31); // 801C2BD8
  c->r[7]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[8])>>32); // 801C2BDC
  c->r[6]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[11])>>32); // 801C2BE0
  c->r[9]=c->r[7]+c->r[9]; // 801C2BE4
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[11]); // 801C2BE8
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 801C2BEC
  c->r[6]=c->r[6]+c->r[7]; // 801C2BF0
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 801C2BF4
  c->r[7]=c->r[9]+c->r[5]; // 801C2BF8
  c->r[6]=c->r[6]+c->r[0]; // 801C2BFC
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[11]); // 801C2C00
  c->r[11]=c->r[1]+0x00000040u; // 801C2C04
  c->r[5]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 801C2C08
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 801C2C0C
  c->r[0]=addc(c,c->r[7],c->r[6],c->xer_ca); // 801C2C10
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 801C2C14
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 801C2C18
  c->lr=0x801C2C20u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2C1C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C2C20
  c->lr=c->r[0]; // 801C2C24
  c->r[1]=c->r[1]+0x00000040u; // 801C2C28
  return; // 801C2C2C
}

// OSUTF8to32
void f_801C2C30(Ctx* __restrict c) {
  trace_call(0x801C2C30u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 801C2C30
  cmps(c,0,(int32_t)c->r[6],0); // 801C2C34
  if (crb(c,2)) { goto L_801C2C40; } // 801C2C38
  c->r[3]=c->r[3]+0x00000001u; // 801C2C3C
L_801C2C40:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 801C2C40
  if (!crb(c,2)) { goto L_801C2C50; } // 801C2C44
  c->r[7]=0u+0x00000000u; // 801C2C48
  goto L_801C2CA0; // 801C2C4C
L_801C2C50:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 801C2C50
  cmpu(c,0,c->r[0],0x000000C0u); // 801C2C54
  if (!crb(c,2)) { goto L_801C2C68; } // 801C2C58
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 801C2C5C
  c->r[7]=0u+0x00000001u; // 801C2C60
  goto L_801C2CA0; // 801C2C64
L_801C2C68:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 801C2C68
  cmpu(c,0,c->r[0],0x000000E0u); // 801C2C6C
  if (!crb(c,2)) { goto L_801C2C80; } // 801C2C70
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 801C2C74
  c->r[7]=0u+0x00000002u; // 801C2C78
  goto L_801C2CA0; // 801C2C7C
L_801C2C80:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 801C2C80
  cmpu(c,0,c->r[0],0x000000F0u); // 801C2C84
  if (!crb(c,2)) { goto L_801C2C98; } // 801C2C88
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801C2C8C
  c->r[7]=0u+0x00000003u; // 801C2C90
  goto L_801C2CA0; // 801C2C94
L_801C2C98:;
  c->r[3]=0u+0x00000000u; // 801C2C98
  return; // 801C2C9C
L_801C2CA0:;
  c->ctr=c->r[7]; // 801C2CA0
  cmpu(c,0,c->r[7],0x00000000u); // 801C2CA4
  if (!crb(c,1)) { goto L_801C2CD8; } // 801C2CA8
L_801C2CAC:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 801C2CAC
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 801C2CB0
  c->r[3]=c->r[3]+0x00000001u; // 801C2CB4
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 801C2CB8
  cmpu(c,0,c->r[0],0x00000080u); // 801C2CBC
  if (crb(c,2)) { goto L_801C2CCC; } // 801C2CC0
  c->r[3]=0u+0x00000000u; // 801C2CC4
  return; // 801C2CC8
L_801C2CCC:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 801C2CCC
  c->r[6]=c->r[6]|c->r[0]; // 801C2CD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2CAC; } // 801C2CD4
L_801C2CD8:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 801C2CD8
  if (crb(c,1)) { goto L_801C2CF0; } // 801C2CDC
  cmps(c,0,(int32_t)c->r[7],0); // 801C2CE0
  if (crb(c,2)) { goto L_801C2D20; } // 801C2CE4
  c->r[3]=0u+0x00000000u; // 801C2CE8
  return; // 801C2CEC
L_801C2CF0:;
  cmpu(c,0,c->r[6],0x000007FFu); // 801C2CF0
  if (crb(c,1)) { goto L_801C2D08; } // 801C2CF4
  cmpu(c,0,c->r[7],0x00000001u); // 801C2CF8
  if (crb(c,2)) { goto L_801C2D20; } // 801C2CFC
  c->r[3]=0u+0x00000000u; // 801C2D00
  return; // 801C2D04
L_801C2D08:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 801C2D08
  if (crb(c,1)) { goto L_801C2D20; } // 801C2D0C
  cmpu(c,0,c->r[7],0x00000002u); // 801C2D10
  if (crb(c,2)) { goto L_801C2D20; } // 801C2D14
  c->r[3]=0u+0x00000000u; // 801C2D18
  return; // 801C2D1C
L_801C2D20:;
  cmpu(c,0,c->r[6],0x0000D800u); // 801C2D20
  if (crb(c,0)) { goto L_801C2D38; } // 801C2D24
  cmpu(c,0,c->r[6],0x0000DFFFu); // 801C2D28
  if (crb(c,1)) { goto L_801C2D38; } // 801C2D2C
  c->r[3]=0u+0x00000000u; // 801C2D30
  return; // 801C2D34
L_801C2D38:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 801C2D38
  return; // 801C2D3C
}

// OSUTF16to32
void f_801C2D40(Ctx* __restrict c) {
  trace_call(0x801C2D40u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 801C2D40
  cmps(c,0,(int32_t)c->r[5],0); // 801C2D44
  if (crb(c,2)) { goto L_801C2D50; } // 801C2D48
  c->r[3]=c->r[3]+0x00000002u; // 801C2D4C
L_801C2D50:;
  cmpu(c,0,c->r[5],0x0000D800u); // 801C2D50
  if (crb(c,0)) { goto L_801C2D60; } // 801C2D54
  cmpu(c,0,c->r[5],0x0000DFFFu); // 801C2D58
  if (!crb(c,1)) { goto L_801C2D68; } // 801C2D5C
L_801C2D60:;
  c->r[6]=c->r[5]|c->r[5]; // 801C2D60
  goto L_801C2DA8; // 801C2D64
L_801C2D68:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 801C2D68
  if (crb(c,1)) { goto L_801C2DA0; } // 801C2D6C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801C2D70
  c->r[3]=c->r[3]+0x00000002u; // 801C2D74
  cmpu(c,0,c->r[0],0x0000DC00u); // 801C2D78
  if (crb(c,0)) { goto L_801C2D98; } // 801C2D7C
  cmpu(c,0,c->r[0],0x0000DFFFu); // 801C2D80
  if (crb(c,1)) { goto L_801C2D98; } // 801C2D84
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 801C2D88
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 801C2D8C
  c->r[6]=c->r[6]+0x00010000u; // 801C2D90
  goto L_801C2DA8; // 801C2D94
L_801C2D98:;
  c->r[3]=0u+0x00000000u; // 801C2D98
  return; // 801C2D9C
L_801C2DA0:;
  c->r[3]=0u+0x00000000u; // 801C2DA0
  return; // 801C2DA4
L_801C2DA8:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 801C2DA8
  return; // 801C2DAC
}

// OSUTF32toANSI
void f_801C2DB0(Ctx* __restrict c) {
  trace_call(0x801C2DB0u);
  cmpu(c,0,c->r[3],0x000000FFu); // 801C2DB0
  if (!crb(c,1)) { goto L_801C2DC0; } // 801C2DB4
  c->r[3]=0u+0x00000000u; // 801C2DB8
  return; // 801C2DBC
L_801C2DC0:;
  cmpu(c,0,c->r[3],0x00000080u); // 801C2DC0
  if (crb(c,0)) { goto L_801C2DD0; } // 801C2DC4
  cmpu(c,0,c->r[3],0x0000009Fu); // 801C2DC8
  if (!crb(c,1)) { goto L_801C2DD8; } // 801C2DCC
L_801C2DD0:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801C2DD0
  return; // 801C2DD4
L_801C2DD8:;
  cmpu(c,0,c->r[3],0x00000152u); // 801C2DD8
  if (crb(c,0)) { goto L_801C2E20; } // 801C2DDC
  cmpu(c,0,c->r[3],0x00002122u); // 801C2DE0
  if (crb(c,1)) { goto L_801C2E20; } // 801C2DE4
  c->r[4]=0u+0x804A0000u; // 801C2DE8
  c->r[0]=0u+0x00000020u; // 801C2DEC
  c->r[4]=c->r[4]+0x00003DB0u; // 801C2DF0
  c->r[5]=0u+0x00000000u; // 801C2DF4
  c->ctr=c->r[0]; // 801C2DF8
L_801C2DFC:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801C2DFC
  cmpu(c,0,c->r[3],c->r[0]); // 801C2E00
  if (!crb(c,2)) { goto L_801C2E14; } // 801C2E04
  c->r[0]=c->r[5]+0x00000080u; // 801C2E08
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801C2E0C
  return; // 801C2E10
L_801C2E14:;
  c->r[4]=c->r[4]+0x00000002u; // 801C2E14
  c->r[5]=c->r[5]+0x00000001u; // 801C2E18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2DFC; } // 801C2E1C
L_801C2E20:;
  c->r[3]=0u+0x00000000u; // 801C2E20
  return; // 801C2E24
}

// OSUTF32toSJIS
void f_801C2E28(Ctx* __restrict c) {
  trace_call(0x801C2E28u);
  c->r[0]=0u+0x00010000u; // 801C2E28
  cmpu(c,0,c->r[3],c->r[0]); // 801C2E2C
  if (crb(c,0)) { goto L_801C2E3C; } // 801C2E30
  c->r[3]=0u+0x00000000u; // 801C2E34
  return; // 801C2E38
L_801C2E3C:;
  c->r[4]=0u+0x804B0000u; // 801C2E3C
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 801C2E40
  c->r[4]=c->r[4]+0xFFFFF7F0u; // 801C2E44
  c->r[4]=R32(c->r[4]+c->r[0]); // 801C2E48
  cmps(c,0,(int32_t)c->r[4],0); // 801C2E4C
  if (crb(c,2)) { goto L_801C2E60; } // 801C2E50
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 801C2E54
  c->r[3]=R16(c->r[4]+c->r[0]); // 801C2E58
  return; // 801C2E5C
L_801C2E60:;
  c->r[3]=0u+0x00000000u; // 801C2E60
  return; // 801C2E64
}

// __OSGetIPCBufferHi
void f_801C2E68(Ctx* __restrict c) {
  trace_call(0x801C2E68u);
  c->r[3]=R32(c->r[13]+0xFFFF9D28u); // 801C2E68
  return; // 801C2E6C
}

// __OSGetIPCBufferLo
void f_801C2E70(Ctx* __restrict c) {
  trace_call(0x801C2E70u);
  c->r[3]=R32(c->r[13]+0xFFFF8440u); // 801C2E70
  return; // 801C2E74
}

// __OSInitIPCBuffer
void f_801C2E78(Ctx* __restrict c) {
  trace_call(0x801C2E78u);
  c->r[3]=0u+0x80000000u; // 801C2E78
  c->r[0]=R32(c->r[3]+0x00003130u); // 801C2E7C
  W32(c->r[13]+0xFFFF8440u,c->r[0]); // 801C2E80
  c->r[0]=R32(c->r[3]+0x00003134u); // 801C2E84
  W32(c->r[13]+0xFFFF9D28u,c->r[0]); // 801C2E88
  return; // 801C2E8C
}

// fn_801C2E90
void f_801C2E90(Ctx* __restrict c) {
  trace_call(0x801C2E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2E90
  c->r[0]=c->lr; // 801C2E94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2E98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2E9C
  c->r[31]=c->r[3]|c->r[3]; // 801C2EA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2EA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2EA8
  c->lr=0x801C2EB0u; f_801BE74C(c); // 801C2EAC
  c->r[0]=R32(c->r[13]+0xFFFF9D40u); // 801C2EB0
  c->r[30]=c->r[3]|c->r[3]; // 801C2EB4
  c->r[29]=R32(c->r[13]+0xFFFF9D48u); // 801C2EB8
  cmps(c,0,(int32_t)c->r[0],0); // 801C2EBC
  W32(c->r[13]+0xFFFF9D48u,c->r[31]); // 801C2EC0
  if (!crb(c,2)) { goto L_801C2F24; } // 801C2EC4
  c->lr=0x801C2ECCu; f_801BE74C(c); // 801C2EC8
  c->r[31]=c->r[3]|c->r[3]; // 801C2ECC
  c->r[5]=0u+0x80570000u; // 801C2ED0
  c->r[7]=0u+0x80570000u; // 801C2ED4
  c->r[9]=0u+0x801C0000u; // 801C2ED8
  c->r[3]=R32(c->r[13]+0xFFFF9D3Cu); // 801C2EDC
  c->r[5]=c->r[5]+0xFFFFA160u; // 801C2EE0
  c->r[7]=c->r[7]+0xFFFFA180u; // 801C2EE4
  c->r[9]=c->r[9]+0x000033C4u; // 801C2EE8
  c->r[4]=0u+0x00001000u; // 801C2EEC
  c->r[6]=0u+0x00000020u; // 801C2EF0
  c->r[8]=0u+0x00000020u; // 801C2EF4
  c->r[10]=0u+0x00000000u; // 801C2EF8
  c->lr=0x801C2F00u; f_802047C4(c); // 801C2EFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C2F00
  if (!crb(c,2)) { goto L_801C2F14; } // 801C2F04
  c->r[0]=0u+0x00000001u; // 801C2F08
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C2F0C
  goto L_801C2F1C; // 801C2F10
L_801C2F14:;
  c->r[0]=0u+0x00000000u; // 801C2F14
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C2F18
L_801C2F1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C2F1C
  c->lr=0x801C2F24u; f_801BE774(c); // 801C2F20
L_801C2F24:;
  c->r[3]=c->r[30]|c->r[30]; // 801C2F24
  c->lr=0x801C2F2Cu; f_801BE774(c); // 801C2F28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2F2C
  c->r[3]=c->r[29]|c->r[29]; // 801C2F30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2F34
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2F38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2F3C
  c->lr=c->r[0]; // 801C2F40
  c->r[1]=c->r[1]+0x00000020u; // 801C2F44
  return; // 801C2F48
}

// fn_801C2F4C
void f_801C2F4C(Ctx* __restrict c) {
  trace_call(0x801C2F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F4C
  c->r[0]=c->lr; // 801C2F50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2F54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2F58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2F5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2F60
  c->lr=0x801C2F68u; f_801BE74C(c); // 801C2F64
  c->r[29]=R32(c->r[13]+0xFFFF9D30u); // 801C2F68
  c->r[31]=0u+0x00000000u; // 801C2F6C
  W32(c->r[13]+0xFFFF9D30u,c->r[31]); // 801C2F70
  c->lr=0x801C2F78u; f_801BE774(c); // 801C2F74
  c->r[0]=R32(c->r[13]+0xFFFF9D40u); // 801C2F78
  cmps(c,0,(int32_t)c->r[0],0); // 801C2F7C
  if (!crb(c,2)) { goto L_801C2FDC; } // 801C2F80
  c->lr=0x801C2F88u; f_801BE74C(c); // 801C2F84
  c->r[30]=c->r[3]|c->r[3]; // 801C2F88
  c->r[5]=0u+0x80570000u; // 801C2F8C
  c->r[7]=0u+0x80570000u; // 801C2F90
  c->r[9]=0u+0x801C0000u; // 801C2F94
  c->r[3]=R32(c->r[13]+0xFFFF9D3Cu); // 801C2F98
  c->r[5]=c->r[5]+0xFFFFA160u; // 801C2F9C
  c->r[7]=c->r[7]+0xFFFFA180u; // 801C2FA0
  c->r[9]=c->r[9]+0x000033C4u; // 801C2FA4
  c->r[4]=0u+0x00001000u; // 801C2FA8
  c->r[6]=0u+0x00000020u; // 801C2FAC
  c->r[8]=0u+0x00000020u; // 801C2FB0
  c->r[10]=0u+0x00000000u; // 801C2FB4
  c->lr=0x801C2FBCu; f_802047C4(c); // 801C2FB8
  cmps(c,0,(int32_t)c->r[3],0); // 801C2FBC
  if (!crb(c,2)) { goto L_801C2FD0; } // 801C2FC0
  c->r[0]=0u+0x00000001u; // 801C2FC4
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C2FC8
  goto L_801C2FD4; // 801C2FCC
L_801C2FD0:;
  W32(c->r[13]+0xFFFF9D40u,c->r[31]); // 801C2FD0
L_801C2FD4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C2FD4
  c->lr=0x801C2FDCu; f_801BE774(c); // 801C2FD8
L_801C2FDC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2FDC
  c->r[3]=c->r[29]|c->r[29]; // 801C2FE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2FE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2FE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2FEC
  c->lr=c->r[0]; // 801C2FF0
  c->r[1]=c->r[1]+0x00000020u; // 801C2FF4
  return; // 801C2FF8
}

// __OSInitSTM
void f_801C2FFC(Ctx* __restrict c) {
  trace_call(0x801C2FFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2FFC
  c->r[0]=c->lr; // 801C3000
  c->r[4]=0u+0x801C0000u; // 801C3004
  c->r[3]=0u+0x801C0000u; // 801C3008
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C300C
  c->r[4]=c->r[4]+0x000033C0u; // 801C3010
  c->r[3]=c->r[3]+0x000033BCu; // 801C3014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3018
  c->r[31]=0u+0x00000000u; // 801C301C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C3020
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C3024
  W32(c->r[13]+0xFFFF9D48u,c->r[4]); // 801C3028
  cmps(c,0,(int32_t)c->r[0],0); // 801C302C
  W32(c->r[13]+0xFFFF9D4Cu,c->r[3]); // 801C3030
  W32(c->r[13]+0xFFFF9D30u,c->r[31]); // 801C3034
  if (crb(c,2)) { goto L_801C3044; } // 801C3038
  c->r[3]=0u+0x00000001u; // 801C303C
  goto L_801C30FC; // 801C3040
L_801C3044:;
  c->r[3]=0u+0x804B0000u; // 801C3044
  W32(c->r[13]+0xFFFF9D44u,c->r[31]); // 801C3048
  c->r[4]=0u+0x00000000u; // 801C304C
  c->r[3]=c->r[3]+0xFFFFFBF0u; // 801C3050
  c->lr=0x801C3058u; f_80203F64(c); // 801C3054
  cmps(c,0,(int32_t)c->r[3],0); // 801C3058
  W32(c->r[13]+0xFFFF9D38u,c->r[3]); // 801C305C
  if (!crb(c,0)) { goto L_801C3070; } // 801C3060
  W32(c->r[13]+0xFFFF9D34u,c->r[31]); // 801C3064
  c->r[3]=0u+0x00000000u; // 801C3068
  goto L_801C30FC; // 801C306C
L_801C3070:;
  c->r[3]=0u+0x804B0000u; // 801C3070
  c->r[4]=0u+0x00000000u; // 801C3074
  c->r[3]=c->r[3]+0xFFFFFC04u; // 801C3078
  c->lr=0x801C3080u; f_80203F64(c); // 801C307C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3080
  W32(c->r[13]+0xFFFF9D3Cu,c->r[3]); // 801C3084
  if (!crb(c,0)) { goto L_801C3098; } // 801C3088
  W32(c->r[13]+0xFFFF9D34u,c->r[31]); // 801C308C
  c->r[3]=0u+0x00000000u; // 801C3090
  goto L_801C30FC; // 801C3094
L_801C3098:;
  c->lr=0x801C309Cu; f_801BE74C(c); // 801C3098
  c->r[30]=c->r[3]|c->r[3]; // 801C309C
  c->r[5]=0u+0x80570000u; // 801C30A0
  c->r[7]=0u+0x80570000u; // 801C30A4
  c->r[9]=0u+0x801C0000u; // 801C30A8
  c->r[3]=R32(c->r[13]+0xFFFF9D3Cu); // 801C30AC
  c->r[5]=c->r[5]+0xFFFFA160u; // 801C30B0
  c->r[7]=c->r[7]+0xFFFFA180u; // 801C30B4
  c->r[9]=c->r[9]+0x000033C4u; // 801C30B8
  c->r[4]=0u+0x00001000u; // 801C30BC
  c->r[6]=0u+0x00000020u; // 801C30C0
  c->r[8]=0u+0x00000020u; // 801C30C4
  c->r[10]=0u+0x00000000u; // 801C30C8
  c->lr=0x801C30D0u; f_802047C4(c); // 801C30CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C30D0
  if (!crb(c,2)) { goto L_801C30E4; } // 801C30D4
  c->r[0]=0u+0x00000001u; // 801C30D8
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C30DC
  goto L_801C30E8; // 801C30E0
L_801C30E4:;
  W32(c->r[13]+0xFFFF9D40u,c->r[31]); // 801C30E4
L_801C30E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801C30E8
  c->lr=0x801C30F0u; f_801BE774(c); // 801C30EC
  c->r[0]=0u+0x00000001u; // 801C30F0
  c->r[3]=0u+0x00000001u; // 801C30F4
  W32(c->r[13]+0xFFFF9D34u,c->r[0]); // 801C30F8
L_801C30FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C30FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3100
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C3104
  c->lr=c->r[0]; // 801C3108
  c->r[1]=c->r[1]+0x00000010u; // 801C310C
  return; // 801C3110
}

// __OSShutdownToSBY
void f_801C3114(Ctx* __restrict c) {
  trace_call(0x801C3114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3114
  c->r[0]=c->lr; // 801C3118
  c->r[3]=0u+0xCC000000u; // 801C311C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3120
  c->r[0]=0u+0x00000000u; // 801C3124
  W16(c->r[3]+0x00002002u,c->r[0]); // 801C3128
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C312C
  cmps(c,0,(int32_t)c->r[0],0); // 801C3130
  if (!crb(c,2)) { goto L_801C3154; } // 801C3134
  c->r[3]=0u+0x804B0000u; // 801C3138
  c->r[5]=0u+0x804B0000u; // 801C313C
  c->r[3]=c->r[3]+0xFFFFFC18u; // 801C3140
  c->r[4]=0u+0x00000114u; // 801C3144
  c->r[5]=c->r[5]+0xFFFFFC24u; // 801C3148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C314C
  c->lr=0x801C3154u; f_801BB48C(c); // 801C3150
L_801C3154:;
  c->r[4]=0u+0x80570000u; // 801C3154
  c->r[0]=0u+0x00000000u; // 801C3158
  c->r[7]=0u+0x80570000u; // 801C315C
  W32(c->r[4]+0xFFFFA1A0u,c->r[0]); // 801C3160
  c->r[5]=c->r[4]+0xFFFFA1A0u; // 801C3164
  c->r[3]=R32(c->r[13]+0xFFFF9D38u); // 801C3168
  c->r[7]=c->r[7]+0xFFFFA1C0u; // 801C316C
  c->r[4]=0u+0x00002003u; // 801C3170
  c->r[6]=0u+0x00000020u; // 801C3174
  c->r[8]=0u+0x00000020u; // 801C3178
  c->lr=0x801C3180u; f_802048FC(c); // 801C317C
  c->lr=0x801C3184u; f_801BE74C(c); // 801C3180
  c->lr=0x801C3188u; f_801BA8A8(c); // 801C3184
L_801C3188:;
  IRQCHK(c); goto L_801C3188; // 801C3188
}

// __OSHotReset
void f_801C318C(Ctx* __restrict c) {
  trace_call(0x801C318Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C318C
  c->r[0]=c->lr; // 801C3190
  c->r[3]=0u+0xCC000000u; // 801C3194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3198
  c->r[0]=0u+0x00000000u; // 801C319C
  W16(c->r[3]+0x00002002u,c->r[0]); // 801C31A0
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C31A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C31A8
  if (!crb(c,2)) { goto L_801C31CC; } // 801C31AC
  c->r[3]=0u+0x804B0000u; // 801C31B0
  c->r[5]=0u+0x804B0000u; // 801C31B4
  c->r[3]=c->r[3]+0xFFFFFC18u; // 801C31B8
  c->r[4]=0u+0x00000154u; // 801C31BC
  c->r[5]=c->r[5]+0xFFFFFC5Cu; // 801C31C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C31C4
  c->lr=0x801C31CCu; f_801BB48C(c); // 801C31C8
L_801C31CC:;
  c->r[5]=0u+0x80570000u; // 801C31CC
  c->r[7]=0u+0x80570000u; // 801C31D0
  c->r[3]=R32(c->r[13]+0xFFFF9D38u); // 801C31D4
  c->r[5]=c->r[5]+0xFFFFA1A0u; // 801C31D8
  c->r[7]=c->r[7]+0xFFFFA1C0u; // 801C31DC
  c->r[4]=0u+0x00002001u; // 801C31E0
  c->r[6]=0u+0x00000020u; // 801C31E4
  c->r[8]=0u+0x00000020u; // 801C31E8
  c->lr=0x801C31F0u; f_802048FC(c); // 801C31EC
  c->lr=0x801C31F4u; f_801BE74C(c); // 801C31F0
  c->lr=0x801C31F8u; f_801BA8A8(c); // 801C31F4
L_801C31F8:;
  IRQCHK(c); goto L_801C31F8; // 801C31F8
}

// __OSSetVIForceDimming
void f_801C31FC(Ctx* __restrict c) {
  trace_call(0x801C31FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C31FC
  c->r[0]=c->lr; // 801C3200
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3204
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3208
  c->r[31]=c->r[5]|c->r[5]; // 801C320C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3210
  c->r[30]=c->r[4]|c->r[4]; // 801C3214
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3218
  c->r[29]=c->r[3]|c->r[3]; // 801C321C
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C3220
  cmps(c,0,(int32_t)c->r[0],0); // 801C3224
  if (!crb(c,2)) { goto L_801C3234; } // 801C3228
  c->r[3]=0u+0xFFFFFFF6u; // 801C322C
  goto L_801C32D8; // 801C3230
L_801C3234:;
  c->lr=0x801C3238u; f_801BE74C(c); // 801C3234
  c->r[0]=R32(c->r[13]+0xFFFF9D44u); // 801C3238
  cmps(c,0,(int32_t)c->r[0],0); // 801C323C
  if (crb(c,2)) { goto L_801C3250; } // 801C3240
  c->lr=0x801C3248u; f_801BE774(c); // 801C3244
  c->r[3]=0u+0x00000000u; // 801C3248
  goto L_801C32D8; // 801C324C
L_801C3250:;
  c->r[0]=0u+0x00000001u; // 801C3250
  W32(c->r[13]+0xFFFF9D44u,c->r[0]); // 801C3254
  c->lr=0x801C325Cu; f_801BE774(c); // 801C3258
  c->r[0]=rotl(c->r[29],7)&0xFFFFFF80u; // 801C325C
  c->r[3]=0u+0x80570000u; // 801C3260
  c->r[4]=c->r[0]|c->r[31]; // 801C3264
  c->r[7]=0u+0x80570000u; // 801C3268
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801C326C
  c->r[5]=c->r[3]+0xFFFFA1E0u; // 801C3270
  c->r[12]=0u+0x00000000u; // 801C3274
  c->r[11]=0u+0xFFFFFFFFu; // 801C3278
  c->r[4]=c->r[4]|c->r[0]; // 801C327C
  c->r[0]=0u+0xFFFF0000u; // 801C3280
  W32(c->r[3]+0xFFFFA1E0u,c->r[4]); // 801C3284
  c->r[9]=0u+0x801C0000u; // 801C3288
  c->r[3]=R32(c->r[13]+0xFFFF9D38u); // 801C328C
  c->r[7]=c->r[7]+0xFFFFA200u; // 801C3290
  W32(c->r[5]+0x00000004u,c->r[12]); // 801C3294
  c->r[9]=c->r[9]+0x000033ACu; // 801C3298
  c->r[4]=0u+0x00005001u; // 801C329C
  c->r[6]=0u+0x00000020u; // 801C32A0
  W32(c->r[5]+0x00000008u,c->r[12]); // 801C32A4
  c->r[8]=0u+0x00000020u; // 801C32A8
  c->r[10]=0u+0x00000000u; // 801C32AC
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 801C32B0
  W32(c->r[5]+0x00000010u,c->r[12]); // 801C32B4
  W32(c->r[5]+0x00000014u,c->r[11]); // 801C32B8
  W32(c->r[5]+0x00000018u,c->r[0]); // 801C32BC
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 801C32C0
  c->lr=0x801C32C8u; f_802047C4(c); // 801C32C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C32C8
  if (crb(c,2)) { goto L_801C32D4; } // 801C32CC
  goto L_801C32D8; // 801C32D0
L_801C32D4:;
  c->r[3]=0u+0x00000001u; // 801C32D4
L_801C32D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C32D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C32DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C32E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C32E4
  c->lr=c->r[0]; // 801C32E8
  c->r[1]=c->r[1]+0x00000020u; // 801C32EC
  return; // 801C32F0
}

// fn_801C32F4
void f_801C32F4(Ctx* __restrict c) {
  trace_call(0x801C32F4u);
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C32F4
  cmps(c,0,(int32_t)c->r[0],0); // 801C32F8
  if (!crb(c,2)) { goto L_801C3308; } // 801C32FC
  c->r[3]=0u+0xFFFFFFFAu; // 801C3300
  return; // 801C3304
L_801C3308:;
  c->r[4]=0u+0x80570000u; // 801C3308
  c->r[7]=0u+0x80570000u; // 801C330C
  W32(c->r[4]+0xFFFFA1A0u,c->r[3]); // 801C3310
  c->r[5]=c->r[4]+0xFFFFA1A0u; // 801C3314
  c->r[3]=R32(c->r[13]+0xFFFF9D38u); // 801C3318
  c->r[7]=c->r[7]+0xFFFFA1C0u; // 801C331C
  c->r[4]=0u+0x00006002u; // 801C3320
  c->r[6]=0u+0x00000020u; // 801C3324
  c->r[8]=0u+0x00000020u; // 801C3328
  f_802048FC(c); return; // 801C332C
  return; // 801C3330
}

// __OSUnRegisterStateEvent
void f_801C3334(Ctx* __restrict c) {
  trace_call(0x801C3334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3334
  c->r[0]=c->lr; // 801C3338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C333C
  c->r[0]=R32(c->r[13]+0xFFFF9D40u); // 801C3340
  cmps(c,0,(int32_t)c->r[0],0); // 801C3344
  if (!crb(c,2)) { goto L_801C3354; } // 801C3348
  c->r[3]=0u+0x00000000u; // 801C334C
  goto L_801C339C; // 801C3350
L_801C3354:;
  c->r[0]=R32(c->r[13]+0xFFFF9D34u); // 801C3354
  cmps(c,0,(int32_t)c->r[0],0); // 801C3358
  if (!crb(c,2)) { goto L_801C3368; } // 801C335C
  c->r[3]=0u+0xFFFFFFFAu; // 801C3360
  goto L_801C339C; // 801C3364
L_801C3368:;
  c->r[5]=0u+0x80570000u; // 801C3368
  c->r[7]=0u+0x80570000u; // 801C336C
  c->r[3]=R32(c->r[13]+0xFFFF9D38u); // 801C3370
  c->r[5]=c->r[5]+0xFFFFA1A0u; // 801C3374
  c->r[7]=c->r[7]+0xFFFFA1C0u; // 801C3378
  c->r[4]=0u+0x00003002u; // 801C337C
  c->r[6]=0u+0x00000020u; // 801C3380
  c->r[8]=0u+0x00000020u; // 801C3384
  c->lr=0x801C338Cu; f_802048FC(c); // 801C3388
  cmps(c,0,(int32_t)c->r[3],0); // 801C338C
  if (!crb(c,2)) { goto L_801C339C; } // 801C3390
  c->r[0]=0u+0x00000000u; // 801C3394
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C3398
L_801C339C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C339C
  c->lr=c->r[0]; // 801C33A0
  c->r[1]=c->r[1]+0x00000010u; // 801C33A4
  return; // 801C33A8
}

// fn_801C33AC
void f_801C33AC(Ctx* __restrict c) {
  trace_call(0x801C33ACu);
  c->r[0]=0u+0x00000000u; // 801C33AC
  c->r[3]=0u+0x00000000u; // 801C33B0
  W32(c->r[13]+0xFFFF9D44u,c->r[0]); // 801C33B4
  return; // 801C33B8
}

// fn_801C33BC
void f_801C33BC(Ctx* __restrict c) {
  trace_call(0x801C33BCu);
  return; // 801C33BC
}

// fn_801C33C0
void f_801C33C0(Ctx* __restrict c) {
  trace_call(0x801C33C0u);
  return; // 801C33C0
}

// __OSStateEventHandler
void f_801C33C4(Ctx* __restrict c) {
  trace_call(0x801C33C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C33C4
  c->r[0]=c->lr; // 801C33C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C33CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C33D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C33D4
  if (crb(c,2)) { goto L_801C33F8; } // 801C33D8
  c->r[3]=0u+0x804B0000u; // 801C33DC
  c->r[5]=0u+0x804B0000u; // 801C33E0
  c->r[3]=c->r[3]+0xFFFFFC18u; // 801C33E4
  c->r[4]=0u+0x000002ECu; // 801C33E8
  c->r[5]=c->r[5]+0xFFFFFC94u; // 801C33EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C33F0
  c->lr=0x801C33F8u; f_801BB48C(c); // 801C33F4
L_801C33F8:;
  c->r[3]=0u+0x80570000u; // 801C33F8
  c->r[0]=0u+0x00000000u; // 801C33FC
  c->r[3]=R32(c->r[3]+0xFFFFA180u); // 801C3400
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C3404
  c->r[0]=c->r[3]+0xFFFE0000u; // 801C3408
  cmpu(c,0,c->r[0],0x00000000u); // 801C340C
  if (!crb(c,2)) { goto L_801C34C4; } // 801C3410
  c->r[3]=0u+0xCC000000u; // 801C3414
  c->r[0]=R32(c->r[3]+0x00003000u); // 801C3418
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 801C341C
  if (!crb(c,2)) { goto L_801C342C; } // 801C3420
  c->r[0]=0u+0x00000001u; // 801C3424
  goto L_801C3430; // 801C3428
L_801C342C:;
  c->r[0]=0u+0x00000000u; // 801C342C
L_801C3430:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3430
  if (crb(c,2)) { goto L_801C3468; } // 801C3434
  c->lr=0x801C343Cu; f_801BE74C(c); // 801C3438
  c->r[4]=0u+0x801C0000u; // 801C343C
  c->r[12]=R32(c->r[13]+0xFFFF9D4Cu); // 801C3440
  c->r[4]=c->r[4]+0x000033BCu; // 801C3444
  c->r[0]=0u+0x00000001u; // 801C3448
  c->r[31]=c->r[3]|c->r[3]; // 801C344C
  W32(c->r[13]+0xFFFF9D30u,c->r[0]); // 801C3450
  W32(c->r[13]+0xFFFF9D4Cu,c->r[4]); // 801C3454
  c->ctr=c->r[12]; // 801C3458
  if (true) { c->lr=0x801C3460u; dispatch(c,c->ctr); } // 801C345C
  c->r[3]=c->r[31]|c->r[31]; // 801C3460
  c->lr=0x801C3468u; f_801BE774(c); // 801C3464
L_801C3468:;
  c->lr=0x801C346Cu; f_801BE74C(c); // 801C3468
  c->r[31]=c->r[3]|c->r[3]; // 801C346C
  c->r[5]=0u+0x80570000u; // 801C3470
  c->r[7]=0u+0x80570000u; // 801C3474
  c->r[9]=0u+0x801C0000u; // 801C3478
  c->r[3]=R32(c->r[13]+0xFFFF9D3Cu); // 801C347C
  c->r[5]=c->r[5]+0xFFFFA160u; // 801C3480
  c->r[7]=c->r[7]+0xFFFFA180u; // 801C3484
  c->r[9]=c->r[9]+0x000033C4u; // 801C3488
  c->r[4]=0u+0x00001000u; // 801C348C
  c->r[6]=0u+0x00000020u; // 801C3490
  c->r[8]=0u+0x00000020u; // 801C3494
  c->r[10]=0u+0x00000000u; // 801C3498
  c->lr=0x801C34A0u; f_802047C4(c); // 801C349C
  cmps(c,0,(int32_t)c->r[3],0); // 801C34A0
  if (!crb(c,2)) { goto L_801C34B4; } // 801C34A4
  c->r[0]=0u+0x00000001u; // 801C34A8
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C34AC
  goto L_801C34BC; // 801C34B0
L_801C34B4:;
  c->r[0]=0u+0x00000000u; // 801C34B4
  W32(c->r[13]+0xFFFF9D40u,c->r[0]); // 801C34B8
L_801C34BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801C34BC
  c->lr=0x801C34C4u; f_801BE774(c); // 801C34C0
L_801C34C4:;
  c->r[3]=0u+0x80570000u; // 801C34C4
  c->r[0]=R32(c->r[3]+0xFFFFA180u); // 801C34C8
  cmpu(c,0,c->r[0],0x00000800u); // 801C34CC
  if (!crb(c,2)) { goto L_801C34FC; } // 801C34D0
  c->lr=0x801C34D8u; f_801BE74C(c); // 801C34D4
  c->r[4]=0u+0x801C0000u; // 801C34D8
  c->r[12]=R32(c->r[13]+0xFFFF9D48u); // 801C34DC
  c->r[4]=c->r[4]+0x000033C0u; // 801C34E0
  c->r[31]=c->r[3]|c->r[3]; // 801C34E4
  W32(c->r[13]+0xFFFF9D48u,c->r[4]); // 801C34E8
  c->ctr=c->r[12]; // 801C34EC
  if (true) { c->lr=0x801C34F4u; dispatch(c,c->ctr); } // 801C34F0
  c->r[3]=c->r[31]|c->r[31]; // 801C34F4
  c->lr=0x801C34FCu; f_801BE774(c); // 801C34F8
L_801C34FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C34FC
  c->r[3]=0u+0x00000000u; // 801C3500
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3504
  c->lr=c->r[0]; // 801C3508
  c->r[1]=c->r[1]+0x00000010u; // 801C350C
  return; // 801C3510
}

// fn_801C3514
void f_801C3514(Ctx* __restrict c) {
  trace_call(0x801C3514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3514
  c->r[0]=c->lr; // 801C3518
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C351C
  c->lr=0x801C3524u; f_801C257C(c); // 801C3520
  c->r[6]=0u+0x80000000u; // 801C3524
  c->r[5]=0u+0x00000000u; // 801C3528
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801C352C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C3530
  c->lr=0x801C3538u; f_801E7AAC(c); // 801C3534
  c->r[3]=0u+0xBC180000u; // 801C3538
  c->r[0]=c->r[3]+0xFFFFC200u; // 801C353C
  c->r[3]=addc(c,c->r[4],c->r[0],0); // 801C3540
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3544
  c->lr=c->r[0]; // 801C3548
  c->r[1]=c->r[1]+0x00000010u; // 801C354C
  return; // 801C3550
}

// PlayRecordAlarmCallback
void f_801C3554(Ctx* __restrict c) {
  trace_call(0x801C3554u);
  c->r[3]=0u+0x00000000u; // 801C3554
  c->r[4]=0u+0x00000000u; // 801C3558
  f_801C3560(c); return; // 801C355C
}

// PlayRecordCallback
void f_801C3560(Ctx* __restrict c) {
  trace_call(0x801C3560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3560
  c->r[0]=c->lr; // 801C3564
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3568
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C356C
  c->r[31]=0u+0x80570000u; // 801C3570
  c->r[31]=c->r[31]+0xFFFFA220u; // 801C3574
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3578
  c->r[30]=0u+0x00000000u; // 801C357C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3580
  c->r[0]=R32(c->r[13]+0xFFFF9D60u); // 801C3584
  W32(c->r[13]+0xFFFF9D6Cu,c->r[3]); // 801C3588
  cmps(c,0,(int32_t)c->r[0],0); // 801C358C
  if (crb(c,2)) { goto L_801C35A0; } // 801C3590
  c->r[0]=0u+0x00000001u; // 801C3594
  W32(c->r[13]+0xFFFF9D64u,c->r[0]); // 801C3598
  goto L_801C39F4; // 801C359C
L_801C35A0:;
  c->r[0]=R32(c->r[13]+0xFFFF9D68u); // 801C35A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C35A4
  if (!crb(c,2)) { goto L_801C37C0; } // 801C35A8
  c->r[0]=R32(c->r[13]+0xFFFF8448u); // 801C35AC
  cmpu(c,0,c->r[0],0x00000006u); // 801C35B0
  if (crb(c,1)) { goto L_801C37AC; } // 801C35B4
  c->r[4]=0u+0x804B0000u; // 801C35B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C35BC
  c->r[4]=c->r[4]+0xFFFFFCE4u; // 801C35C0
  c->r[4]=R32(c->r[4]+c->r[0]); // 801C35C4
  c->ctr=c->r[4]; // 801C35C8
  if (true) { switch (c->ctr) { case 0x801C35D0u: goto L_801C35D0; case 0x801C35DCu: goto L_801C35DC; case 0x801C3658u: goto L_801C3658; case 0x801C369Cu: goto L_801C369C; case 0x801C36C4u: goto L_801C36C4; case 0x801C36D0u: goto L_801C36D0; case 0x801C3758u: goto L_801C3758; default: break; } dispatch(c,c->ctr); return; } // 801C35CC
L_801C35D0:;
  c->r[0]=0u+0x00000001u; // 801C35D0
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C35D4
  goto L_801C37C0; // 801C35D8
L_801C35DC:;
  cmps(c,0,(int32_t)c->r[3],-10); // 801C35DC
  if (!crb(c,2)) { goto L_801C3618; } // 801C35E0
  c->r[0]=0u+0x00000001u; // 801C35E4
  c->r[3]=c->r[31]+0x00000080u; // 801C35E8
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C35EC
  c->lr=0x801C35F4u; f_801B9774(c); // 801C35F0
  c->r[3]=0u+0x80000000u; // 801C35F4
  c->r[7]=0u+0x801C0000u; // 801C35F8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C35FC
  c->r[3]=c->r[31]+0x00000080u; // 801C3600
  c->r[7]=c->r[7]+0x00003554u; // 801C3604
  c->r[5]=0u+0x00000000u; // 801C3608
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C360C
  c->lr=0x801C3614u; f_801B99D4(c); // 801C3610
  goto L_801C39F4; // 801C3614
L_801C3618:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C3618
  if (!crb(c,2)) { goto L_801C3644; } // 801C361C
  c->r[0]=R32(c->r[13]+0xFFFF9D58u); // 801C3620
  cmps(c,0,(int32_t)c->r[0],0); // 801C3624
  if (!crb(c,2)) { goto L_801C3638; } // 801C3628
  c->r[0]=0u+0x00000002u; // 801C362C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3630
  goto L_801C37C0; // 801C3634
L_801C3638:;
  c->r[0]=0u+0x00000004u; // 801C3638
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C363C
  goto L_801C37C0; // 801C3640
L_801C3644:;
  c->r[3]=0u+0x00000001u; // 801C3644
  c->r[0]=0u+0x00000007u; // 801C3648
  W32(c->r[13]+0xFFFF9D5Cu,c->r[3]); // 801C364C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3650
  goto L_801C39F4; // 801C3654
L_801C3658:;
  cmpu(c,0,c->r[3],0x00000080u); // 801C3658
  if (!crb(c,2)) { goto L_801C3688; } // 801C365C
  c->r[4]=c->r[31]+0x00000000u; // 801C3660
  c->r[5]=0u+0x00000001u; // 801C3664
  c->r[3]=R32(c->r[4]+0x00000060u); // 801C3668
  c->r[0]=0u+0x00000003u; // 801C366C
  c->r[4]=R32(c->r[4]+0x00000064u); // 801C3670
  W32(c->r[13]+0xFFFF9D58u,c->r[5]); // 801C3674
  W32(c->r[13]+0xFFFF9D74u,c->r[4]); // 801C3678
  W32(c->r[13]+0xFFFF9D70u,c->r[3]); // 801C367C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3680
  goto L_801C37C0; // 801C3684
L_801C3688:;
  c->r[3]=0u+0x00000001u; // 801C3688
  c->r[0]=0u+0x00000006u; // 801C368C
  W32(c->r[13]+0xFFFF9D5Cu,c->r[3]); // 801C3690
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3694
  goto L_801C37C0; // 801C3698
L_801C369C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C369C
  if (!crb(c,2)) { goto L_801C36B0; } // 801C36A0
  c->r[0]=0u+0x00000004u; // 801C36A4
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C36A8
  goto L_801C37C0; // 801C36AC
L_801C36B0:;
  c->r[3]=0u+0x00000001u; // 801C36B0
  c->r[0]=0u+0x00000006u; // 801C36B4
  W32(c->r[13]+0xFFFF9D5Cu,c->r[3]); // 801C36B8
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C36BC
  goto L_801C37C0; // 801C36C0
L_801C36C4:;
  c->r[0]=0u+0x00000005u; // 801C36C4
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C36C8
  goto L_801C37C0; // 801C36CC
L_801C36D0:;
  cmpu(c,0,c->r[3],0x00000080u); // 801C36D0
  if (!crb(c,2)) { goto L_801C3744; } // 801C36D4
  c->lr=0x801C36DCu; f_801C257C(c); // 801C36D8
  c->r[5]=0u+0x80000000u; // 801C36DC
  c->r[8]=R32(c->r[13]+0xFFFF9D74u); // 801C36E0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C36E4
  c->r[5]=0u+0x0000012Cu; // 801C36E8
  c->r[9]=R32(c->r[13]+0xFFFF9D70u); // 801C36EC
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 801C36F0
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C36F4
  c->r[6]=0u+0x00000000u; // 801C36F8
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 801C36FC
  c->r[4]=c->r[3]^0x80000000u; // 801C3700
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 801C3704
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 801C3708
  c->r[0]=c->r[0]+c->r[3]; // 801C370C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 801C3710
  c->r[0]=c->r[0]^0x80000000u; // 801C3714
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 801C3718
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801C371C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C3720
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 801C3724
  if (crb(c,2)) { goto L_801C3738; } // 801C3728
  c->r[0]=0u+0x00000006u; // 801C372C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3730
  goto L_801C37C0; // 801C3734
L_801C3738:;
  c->r[0]=0u+0x00000003u; // 801C3738
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C373C
  goto L_801C37C0; // 801C3740
L_801C3744:;
  c->r[3]=0u+0x00000001u; // 801C3744
  c->r[0]=0u+0x00000006u; // 801C3748
  W32(c->r[13]+0xFFFF9D5Cu,c->r[3]); // 801C374C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3750
  goto L_801C37C0; // 801C3754
L_801C3758:;
  c->r[0]=R32(c->r[13]+0xFFFF9D5Cu); // 801C3758
  cmps(c,0,(int32_t)c->r[0],0); // 801C375C
  if (crb(c,2)) { goto L_801C3770; } // 801C3760
  c->r[0]=0u+0x00000007u; // 801C3764
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3768
  goto L_801C39F4; // 801C376C
L_801C3770:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C3770
  if (!crb(c,2)) { goto L_801C3798; } // 801C3774
  c->r[4]=c->r[31]+0x00000000u; // 801C3778
  c->r[0]=0u+0x00000001u; // 801C377C
  c->r[3]=R32(c->r[4]+0x00000060u); // 801C3780
  c->r[4]=R32(c->r[4]+0x00000064u); // 801C3784
  W32(c->r[13]+0xFFFF9D70u,c->r[3]); // 801C3788
  W32(c->r[13]+0xFFFF9D74u,c->r[4]); // 801C378C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3790
  goto L_801C37C0; // 801C3794
L_801C3798:;
  c->r[3]=0u+0x00000007u; // 801C3798
  c->r[0]=0u+0x00000001u; // 801C379C
  W32(c->r[13]+0xFFFF8448u,c->r[3]); // 801C37A0
  W32(c->r[13]+0xFFFF9D5Cu,c->r[0]); // 801C37A4
  goto L_801C39F4; // 801C37A8
L_801C37AC:;
  c->r[3]=0u+0x00000007u; // 801C37AC
  c->r[0]=0u+0x00000001u; // 801C37B0
  W32(c->r[13]+0xFFFF8448u,c->r[3]); // 801C37B4
  W32(c->r[13]+0xFFFF9D5Cu,c->r[0]); // 801C37B8
  goto L_801C39F4; // 801C37BC
L_801C37C0:;
  c->r[0]=R32(c->r[13]+0xFFFF8448u); // 801C37C0
  c->r[29]=0u+0x00000000u; // 801C37C4
  W32(c->r[13]+0xFFFF9D68u,c->r[29]); // 801C37C8
  cmps(c,0,(int32_t)c->r[0],4); // 801C37CC
  if (crb(c,2)) { goto L_801C3870; } // 801C37D0
  if (!crb(c,0)) { goto L_801C37F0; } // 801C37D4
  cmps(c,0,(int32_t)c->r[0],2); // 801C37D8
  if (crb(c,2)) { goto L_801C3828; } // 801C37DC
  if (!crb(c,0)) { goto L_801C384C; } // 801C37E0
  cmps(c,0,(int32_t)c->r[0],1); // 801C37E4
  if (!crb(c,0)) { goto L_801C3800; } // 801C37E8
  goto L_801C391C; // 801C37EC
L_801C37F0:;
  cmps(c,0,(int32_t)c->r[0],6); // 801C37F0
  if (crb(c,2)) { goto L_801C3904; } // 801C37F4
  if (!crb(c,0)) { goto L_801C391C; } // 801C37F8
  goto L_801C38AC; // 801C37FC
L_801C3800:;
  c->r[3]=0u+0x804B0000u; // 801C3800
  c->r[6]=0u+0x801C0000u; // 801C3804
  c->r[3]=c->r[3]+0xFFFFFCB8u; // 801C3808
  c->r[4]=c->r[31]+0x000000B0u; // 801C380C
  c->r[6]=c->r[6]+0x00003560u; // 801C3810
  c->r[7]=c->r[31]+0x00000140u; // 801C3814
  c->r[5]=0u+0x00000003u; // 801C3818
  c->lr=0x801C3820u; f_80206478(c); // 801C381C
  c->r[30]=c->r[3]|c->r[3]; // 801C3820
  goto L_801C391C; // 801C3824
L_801C3828:;
  c->r[6]=0u+0x801C0000u; // 801C3828
  c->r[3]=c->r[31]+0x000000B0u; // 801C382C
  c->r[4]=c->r[31]+0x00000000u; // 801C3830
  c->r[7]=c->r[31]+0x00000140u; // 801C3834
  c->r[6]=c->r[6]+0x00003560u; // 801C3838
  c->r[5]=0u+0x00000080u; // 801C383C
  c->lr=0x801C3844u; f_80205958(c); // 801C3840
  c->r[30]=c->r[3]|c->r[3]; // 801C3844
  goto L_801C391C; // 801C3848
L_801C384C:;
  c->r[6]=0u+0x801C0000u; // 801C384C
  c->r[3]=c->r[31]+0x000000B0u; // 801C3850
  c->r[6]=c->r[6]+0x00003560u; // 801C3854
  c->r[7]=c->r[31]+0x00000140u; // 801C3858
  c->r[4]=0u+0x00000000u; // 801C385C
  c->r[5]=0u+0x00000000u; // 801C3860
  c->lr=0x801C3868u; f_80205B50(c); // 801C3864
  c->r[30]=c->r[3]|c->r[3]; // 801C3868
  goto L_801C391C; // 801C386C
L_801C3870:;
  c->r[3]=c->r[31]+0x00000080u; // 801C3870
  c->lr=0x801C3878u; f_801B9774(c); // 801C3874
  c->r[3]=0u+0x80000000u; // 801C3878
  c->r[0]=0u+0x0000003Cu; // 801C387C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801C3880
  c->r[7]=0u+0x801C0000u; // 801C3884
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801C3888
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801C388C
  c->r[3]=c->r[31]+0x00000080u; // 801C3890
  c->r[7]=c->r[7]+0x00003554u; // 801C3894
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801C3898
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 801C389C
  c->r[5]=c->r[0]+c->r[4]; // 801C38A0
  c->lr=0x801C38A8u; f_801B99D4(c); // 801C38A4
  goto L_801C391C; // 801C38A8
L_801C38AC:;
  c->lr=0x801C38B0u; f_801C257C(c); // 801C38AC
  c->r[5]=c->r[31]+0x00000000u; // 801C38B0
  c->r[0]=0u+0x0000001Fu; // 801C38B4
  W32(c->r[5]+0x00000064u,c->r[4]); // 801C38B8
  c->r[6]=c->r[5]+0x00000004u; // 801C38BC
  c->r[4]=0u+0x00000000u; // 801C38C0
  W32(c->r[5]+0x00000060u,c->r[3]); // 801C38C4
  c->ctr=c->r[0]; // 801C38C8
L_801C38CC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801C38CC
  c->r[6]=c->r[6]+0x00000004u; // 801C38D0
  c->r[4]=c->r[4]+c->r[0]; // 801C38D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C38CC; } // 801C38D8
  c->r[6]=0u+0x801C0000u; // 801C38DC
  W32(c->r[31]+0x00000000u,c->r[4]); // 801C38E0
  c->r[3]=c->r[31]+0x000000B0u; // 801C38E4
  c->r[4]=c->r[31]+0x00000000u; // 801C38E8
  c->r[6]=c->r[6]+0x00003560u; // 801C38EC
  c->r[7]=c->r[31]+0x00000140u; // 801C38F0
  c->r[5]=0u+0x00000080u; // 801C38F4
  c->lr=0x801C38FCu; f_80205A38(c); // 801C38F8
  c->r[30]=c->r[3]|c->r[3]; // 801C38FC
  goto L_801C391C; // 801C3900
L_801C3904:;
  c->r[4]=0u+0x801C0000u; // 801C3904
  c->r[3]=c->r[31]+0x000000B0u; // 801C3908
  c->r[4]=c->r[4]+0x00003560u; // 801C390C
  c->r[5]=c->r[31]+0x00000140u; // 801C3910
  c->lr=0x801C3918u; f_8020664C(c); // 801C3914
  c->r[30]=c->r[3]|c->r[3]; // 801C3918
L_801C391C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C391C
  if (crb(c,2)) { goto L_801C39F0; } // 801C3920
  cmps(c,0,(int32_t)c->r[30],-3); // 801C3924
  if (!crb(c,2)) { goto L_801C3960; } // 801C3928
  c->r[3]=c->r[31]+0x00000080u; // 801C392C
  c->lr=0x801C3934u; f_801B9774(c); // 801C3930
  c->r[3]=0u+0x80000000u; // 801C3934
  c->r[7]=0u+0x801C0000u; // 801C3938
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C393C
  c->r[3]=c->r[31]+0x00000080u; // 801C3940
  c->r[7]=c->r[7]+0x00003554u; // 801C3944
  c->r[5]=0u+0x00000000u; // 801C3948
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C394C
  c->lr=0x801C3954u; f_801B99D4(c); // 801C3950
  c->r[0]=0u+0x00000001u; // 801C3954
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C3958
  goto L_801C39F0; // 801C395C
L_801C3960:;
  c->r[0]=R32(c->r[13]+0xFFFF8448u); // 801C3960
  c->r[3]=0u+0x00000001u; // 801C3964
  W32(c->r[13]+0xFFFF9D5Cu,c->r[3]); // 801C3968
  cmps(c,0,(int32_t)c->r[0],4); // 801C396C
  if (crb(c,2)) { goto L_801C39E8; } // 801C3970
  if (!crb(c,0)) { goto L_801C3984; } // 801C3974
  cmps(c,0,(int32_t)c->r[0],2); // 801C3978
  if (!crb(c,0)) { goto L_801C398C; } // 801C397C
  goto L_801C39E8; // 801C3980
L_801C3984:;
  cmps(c,0,(int32_t)c->r[0],6); // 801C3984
  if (!crb(c,0)) { goto L_801C39E8; } // 801C3988
L_801C398C:;
  c->r[0]=0u+0x00000006u; // 801C398C
  c->r[4]=0u+0x801C0000u; // 801C3990
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3994
  c->r[3]=c->r[31]+0x000000B0u; // 801C3998
  c->r[4]=c->r[4]+0x00003560u; // 801C399C
  c->r[5]=c->r[31]+0x00000140u; // 801C39A0
  c->lr=0x801C39A8u; f_8020664C(c); // 801C39A4
  cmps(c,0,(int32_t)c->r[3],-3); // 801C39A8
  c->r[30]=c->r[3]|c->r[3]; // 801C39AC
  if (!crb(c,2)) { goto L_801C39F0; } // 801C39B0
  c->r[0]=0u+0x00000001u; // 801C39B4
  c->r[3]=c->r[31]+0x00000080u; // 801C39B8
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C39BC
  c->lr=0x801C39C4u; f_801B9774(c); // 801C39C0
  c->r[3]=0u+0x80000000u; // 801C39C4
  c->r[7]=0u+0x801C0000u; // 801C39C8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C39CC
  c->r[3]=c->r[31]+0x00000080u; // 801C39D0
  c->r[7]=c->r[7]+0x00003554u; // 801C39D4
  c->r[5]=0u+0x00000000u; // 801C39D8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C39DC
  c->lr=0x801C39E4u; f_801B99D4(c); // 801C39E0
  goto L_801C39F0; // 801C39E4
L_801C39E8:;
  c->r[0]=0u+0x00000007u; // 801C39E8
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C39EC
L_801C39F0:;
  W32(c->r[13]+0xFFFF9D6Cu,c->r[30]); // 801C39F0
L_801C39F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C39F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C39F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C39FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3A00
  c->lr=c->r[0]; // 801C3A04
  c->r[1]=c->r[1]+0x00000020u; // 801C3A08
  return; // 801C3A0C
}

// __OSStartPlayRecord
void f_801C3A10(Ctx* __restrict c) {
  trace_call(0x801C3A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A10
  c->r[0]=c->lr; // 801C3A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3A18
  c->lr=0x801C3A20u; f_80206C50(c); // 801C3A1C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3A20
  if (!crb(c,2)) { goto L_801C3A54; } // 801C3A24
  c->r[0]=0u+0x00000000u; // 801C3A28
  c->r[3]=0u+0x00000000u; // 801C3A2C
  W32(c->r[13]+0xFFFF9D60u,c->r[0]); // 801C3A30
  c->r[4]=0u+0x00000000u; // 801C3A34
  W32(c->r[13]+0xFFFF9D58u,c->r[0]); // 801C3A38
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3A3C
  W32(c->r[13]+0xFFFF9D5Cu,c->r[0]); // 801C3A40
  W32(c->r[13]+0xFFFF9D68u,c->r[0]); // 801C3A44
  W32(c->r[13]+0xFFFF9D64u,c->r[0]); // 801C3A48
  W32(c->r[13]+0xFFFF9D6Cu,c->r[0]); // 801C3A4C
  c->lr=0x801C3A54u; f_801C3560(c); // 801C3A50
L_801C3A54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3A54
  c->lr=c->r[0]; // 801C3A58
  c->r[1]=c->r[1]+0x00000010u; // 801C3A5C
  return; // 801C3A60
}

// __OSStopPlayRecord
void f_801C3A64(Ctx* __restrict c) {
  trace_call(0x801C3A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A64
  c->r[0]=c->lr; // 801C3A68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3A6C
  c->r[11]=c->r[1]+0x00000020u; // 801C3A70
  c->lr=0x801C3A78u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3A74
  c->r[29]=0u+0x80570000u; // 801C3A78
  c->r[29]=c->r[29]+0xFFFFA220u; // 801C3A7C
  c->lr=0x801C3A84u; f_801BE74C(c); // 801C3A80
  c->r[0]=R32(c->r[13]+0xFFFF8448u); // 801C3A84
  c->r[4]=0u+0x00000001u; // 801C3A88
  W32(c->r[13]+0xFFFF9D60u,c->r[4]); // 801C3A8C
  c->r[26]=c->r[3]|c->r[3]; // 801C3A90
  cmps(c,0,(int32_t)c->r[0],7); // 801C3A94
  if (crb(c,2)) { goto L_801C3AB4; } // 801C3A98
  cmps(c,0,(int32_t)c->r[0],0); // 801C3A9C
  if (crb(c,2)) { goto L_801C3AB4; } // 801C3AA0
  cmps(c,0,(int32_t)c->r[0],9); // 801C3AA4
  if (crb(c,2)) { goto L_801C3AB4; } // 801C3AA8
  cmps(c,0,(int32_t)c->r[0],8); // 801C3AAC
  if (!crb(c,2)) { goto L_801C3AC0; } // 801C3AB0
L_801C3AB4:;
  c->r[3]=c->r[26]|c->r[26]; // 801C3AB4
  c->lr=0x801C3ABCu; f_801BE774(c); // 801C3AB8
  goto L_801C3C2C; // 801C3ABC
L_801C3AC0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801C3AC0
  if (!crb(c,2)) { goto L_801C3B28; } // 801C3AC4
  c->r[3]=c->r[29]+0x00000080u; // 801C3AC8
  c->lr=0x801C3AD0u; f_801B9AC8(c); // 801C3ACC
  c->r[3]=c->r[26]|c->r[26]; // 801C3AD0
  c->lr=0x801C3AD8u; f_801BE774(c); // 801C3AD4
  c->lr=0x801C3ADCu; f_801C257C(c); // 801C3AD8
  c->r[5]=c->r[29]+0x00000000u; // 801C3ADC
  c->r[0]=0u+0x0000001Fu; // 801C3AE0
  W32(c->r[5]+0x00000064u,c->r[4]); // 801C3AE4
  c->r[6]=c->r[5]+0x00000004u; // 801C3AE8
  c->r[4]=0u+0x00000000u; // 801C3AEC
  W32(c->r[5]+0x00000060u,c->r[3]); // 801C3AF0
  c->ctr=c->r[0]; // 801C3AF4
L_801C3AF8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801C3AF8
  c->r[6]=c->r[6]+0x00000004u; // 801C3AFC
  c->r[4]=c->r[4]+c->r[0]; // 801C3B00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C3AF8; } // 801C3B04
  W32(c->r[29]+0x00000000u,c->r[4]); // 801C3B08
  c->r[3]=c->r[29]+0x000000B0u; // 801C3B0C
  c->r[4]=c->r[29]+0x00000000u; // 801C3B10
  c->r[5]=0u+0x00000080u; // 801C3B14
  c->lr=0x801C3B1Cu; f_802059D0(c); // 801C3B18
  c->r[3]=c->r[29]+0x000000B0u; // 801C3B1C
  c->lr=0x801C3B24u; f_802065E0(c); // 801C3B20
  goto L_801C3C2C; // 801C3B24
L_801C3B28:;
  c->r[0]=R32(c->r[13]+0xFFFF9D68u); // 801C3B28
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B2C
  if (crb(c,2)) { goto L_801C3B48; } // 801C3B30
  c->r[3]=c->r[29]+0x00000080u; // 801C3B34
  c->lr=0x801C3B3Cu; f_801B9AC8(c); // 801C3B38
  c->r[3]=c->r[26]|c->r[26]; // 801C3B3C
  c->lr=0x801C3B44u; f_801BE774(c); // 801C3B40
  goto L_801C3BBC; // 801C3B44
L_801C3B48:;
  c->lr=0x801C3B4Cu; f_801BE774(c); // 801C3B48
  c->lr=0x801C3B50u; f_801C257C(c); // 801C3B4C
  c->r[5]=0u+0x10620000u; // 801C3B50
  c->r[0]=0u+0x00000000u; // 801C3B54
  c->r[30]=c->r[4]|c->r[4]; // 801C3B58
  c->r[31]=c->r[3]|c->r[3]; // 801C3B5C
  c->r[26]=c->r[5]+0x00004DD3u; // 801C3B60
  c->r[28]=c->r[0]^0x80000000u; // 801C3B64
  c->r[27]=0u+0x80000000u; // 801C3B68
L_801C3B6C:;
  c->r[0]=R32(c->r[13]+0xFFFF9D64u); // 801C3B6C
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B70
  if (!crb(c,2)) { goto L_801C3BBC; } // 801C3B74
  c->lr=0x801C3B7Cu; f_801C257C(c); // 801C3B78
  c->r[0]=R32(c->r[27]+0x000000F8u); // 801C3B7C
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 801C3B80
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 801C3B84
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C3B88
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 801C3B8C
  c->r[3]=c->r[3]^0x80000000u; // 801C3B90
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C3B94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 801C3B98
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 801C3B9C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 801C3BA0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 801C3BA4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801C3BA8
  if (crb(c,2)) { IRQCHK(c); goto L_801C3B6C; } // 801C3BAC
  c->r[0]=0u+0x00000008u; // 801C3BB0
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3BB4
  goto L_801C3C34; // 801C3BB8
L_801C3BBC:;
  c->r[0]=R32(c->r[13]+0xFFFF8448u); // 801C3BBC
  cmps(c,0,(int32_t)c->r[0],4); // 801C3BC0
  if (crb(c,2)) { goto L_801C3C2C; } // 801C3BC4
  if (!crb(c,0)) { goto L_801C3BDC; } // 801C3BC8
  cmps(c,0,(int32_t)c->r[0],1); // 801C3BCC
  if (crb(c,2)) { goto L_801C3BF4; } // 801C3BD0
  if (!crb(c,0)) { goto L_801C3BE8; } // 801C3BD4
  goto L_801C3C2C; // 801C3BD8
L_801C3BDC:;
  cmps(c,0,(int32_t)c->r[0],6); // 801C3BDC
  if (crb(c,2)) { goto L_801C3C18; } // 801C3BE0
  if (!crb(c,0)) { goto L_801C3C2C; } // 801C3BE4
L_801C3BE8:;
  c->r[3]=c->r[29]+0x000000B0u; // 801C3BE8
  c->lr=0x801C3BF0u; f_802065E0(c); // 801C3BEC
  goto L_801C3C2C; // 801C3BF0
L_801C3BF4:;
  c->r[0]=R32(c->r[13]+0xFFFF9D6Cu); // 801C3BF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C3BF8
  if (!crb(c,2)) { goto L_801C3C2C; } // 801C3BFC
  c->r[0]=R32(c->r[13]+0xFFFF9D68u); // 801C3C00
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C04
  if (!crb(c,2)) { goto L_801C3C2C; } // 801C3C08
  c->r[3]=c->r[29]+0x000000B0u; // 801C3C0C
  c->lr=0x801C3C14u; f_802065E0(c); // 801C3C10
  goto L_801C3C2C; // 801C3C14
L_801C3C18:;
  c->r[0]=R32(c->r[13]+0xFFFF9D68u); // 801C3C18
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C1C
  if (crb(c,2)) { goto L_801C3C2C; } // 801C3C20
  c->r[3]=c->r[29]+0x000000B0u; // 801C3C24
  c->lr=0x801C3C2Cu; f_802065E0(c); // 801C3C28
L_801C3C2C:;
  c->r[0]=0u+0x00000009u; // 801C3C2C
  W32(c->r[13]+0xFFFF8448u,c->r[0]); // 801C3C30
L_801C3C34:;
  c->r[11]=c->r[1]+0x00000020u; // 801C3C34
  c->lr=0x801C3C3Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3C38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3C3C
  c->lr=c->r[0]; // 801C3C40
  c->r[1]=c->r[1]+0x00000020u; // 801C3C44
  return; // 801C3C48
}

// __OSWriteStateFlags
void f_801C3C4C(Ctx* __restrict c) {
  trace_call(0x801C3C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C4C
  c->r[0]=c->lr; // 801C3C50
  c->r[4]=c->r[3]|c->r[3]; // 801C3C54
  c->r[5]=0u+0x00000020u; // 801C3C58
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C3C5C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C3C60
  W32(c->r[1]+0x00000098u,c->r[30]); // 801C3C64
  c->r[30]=0u+0x80570000u; // 801C3C68
  c->r[3]=c->r[30]+0xFFFFA420u; // 801C3C6C
  c->lr=0x801C3C74u; f_80004338(c); // 801C3C70
  c->r[31]=c->r[30]+0xFFFFA420u; // 801C3C74
  c->r[3]=0u+0x804B0000u; // 801C3C78
  c->r[6]=R32(c->r[31]+0x00000004u); // 801C3C7C
  c->r[3]=c->r[3]+0xFFFFFD00u; // 801C3C80
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C3C84
  c->r[4]=c->r[1]+0x00000008u; // 801C3C88
  c->r[5]=0u+0x00000002u; // 801C3C8C
  c->r[6]=c->r[6]+c->r[0]; // 801C3C90
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C3C94
  c->r[6]=c->r[6]+c->r[0]; // 801C3C98
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C3C9C
  c->r[6]=c->r[6]+c->r[0]; // 801C3CA0
  c->r[0]=R32(c->r[31]+0x00000014u); // 801C3CA4
  c->r[6]=c->r[6]+c->r[0]; // 801C3CA8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801C3CAC
  c->r[6]=c->r[6]+c->r[0]; // 801C3CB0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801C3CB4
  c->r[6]=c->r[6]+c->r[0]; // 801C3CB8
  W32(c->r[30]+0xFFFFA420u,c->r[6]); // 801C3CBC
  c->lr=0x801C3CC4u; f_80206360(c); // 801C3CC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CC4
  if (!crb(c,2)) { goto L_801C3D0C; } // 801C3CC8
  c->r[4]=c->r[31]|c->r[31]; // 801C3CCC
  c->r[3]=c->r[1]+0x00000008u; // 801C3CD0
  c->r[5]=0u+0x00000020u; // 801C3CD4
  c->lr=0x801C3CDCu; f_802059D0(c); // 801C3CD8
  cmpu(c,0,c->r[3],0x00000020u); // 801C3CDC
  if (crb(c,2)) { goto L_801C3CF4; } // 801C3CE0
  c->r[3]=c->r[1]+0x00000008u; // 801C3CE4
  c->lr=0x801C3CECu; f_802065E0(c); // 801C3CE8
  c->r[3]=0u+0x00000000u; // 801C3CEC
  goto L_801C3D18; // 801C3CF0
L_801C3CF4:;
  c->r[3]=c->r[1]+0x00000008u; // 801C3CF4
  c->lr=0x801C3CFCu; f_802065E0(c); // 801C3CF8
  cmps(c,0,(int32_t)c->r[3],0); // 801C3CFC
  if (crb(c,2)) { goto L_801C3D14; } // 801C3D00
  c->r[3]=0u+0x00000000u; // 801C3D04
  goto L_801C3D18; // 801C3D08
L_801C3D0C:;
  c->r[3]=0u+0x00000000u; // 801C3D0C
  goto L_801C3D18; // 801C3D10
L_801C3D14:;
  c->r[3]=0u+0x00000001u; // 801C3D14
L_801C3D18:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C3D18
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C3D1C
  c->r[30]=R32(c->r[1]+0x00000098u); // 801C3D20
  c->lr=c->r[0]; // 801C3D24
  c->r[1]=c->r[1]+0x000000A0u; // 801C3D28
  return; // 801C3D2C
}

// __OSReadStateFlags
void f_801C3D30(Ctx* __restrict c) {
  trace_call(0x801C3D30u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3D30
  c->r[0]=c->lr; // 801C3D34
  c->r[5]=0u+0x00000001u; // 801C3D38
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C3D3C
  c->r[4]=c->r[1]+0x00000008u; // 801C3D40
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801C3D44
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801C3D48
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801C3D4C
  c->r[29]=0u+0x804B0000u; // 801C3D50
  W32(c->r[1]+0x000000A0u,c->r[28]); // 801C3D54
  c->r[28]=c->r[3]|c->r[3]; // 801C3D58
  c->r[3]=c->r[29]+0xFFFFFD00u; // 801C3D5C
  c->lr=0x801C3D64u; f_80206360(c); // 801C3D60
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D64
  if (!crb(c,2)) { goto L_801C3DB4; } // 801C3D68
  c->r[30]=0u+0x80570000u; // 801C3D6C
  c->r[3]=c->r[1]+0x00000008u; // 801C3D70
  c->r[4]=c->r[30]+0xFFFFA420u; // 801C3D74
  c->r[5]=0u+0x00000020u; // 801C3D78
  c->lr=0x801C3D80u; f_802058F0(c); // 801C3D7C
  c->r[31]=c->r[3]|c->r[3]; // 801C3D80
  c->r[3]=c->r[1]+0x00000008u; // 801C3D84
  c->lr=0x801C3D8Cu; f_802065E0(c); // 801C3D88
  cmpu(c,0,c->r[31],0x00000020u); // 801C3D8C
  if (crb(c,2)) { goto L_801C3DCC; } // 801C3D90
  c->r[3]=c->r[29]+0xFFFFFD00u; // 801C3D94
  c->lr=0x801C3D9Cu; f_80205780(c); // 801C3D98
  c->r[3]=c->r[28]|c->r[28]; // 801C3D9C
  c->r[4]=0u+0x00000000u; // 801C3DA0
  c->r[5]=0u+0x00000020u; // 801C3DA4
  c->lr=0x801C3DACu; f_8000443C(c); // 801C3DA8
  c->r[3]=0u+0x00000000u; // 801C3DAC
  goto L_801C3E38; // 801C3DB0
L_801C3DB4:;
  c->r[3]=c->r[28]|c->r[28]; // 801C3DB4
  c->r[4]=0u+0x00000000u; // 801C3DB8
  c->r[5]=0u+0x00000020u; // 801C3DBC
  c->lr=0x801C3DC4u; f_8000443C(c); // 801C3DC0
  c->r[3]=0u+0x00000000u; // 801C3DC4
  goto L_801C3E38; // 801C3DC8
L_801C3DCC:;
  c->r[4]=c->r[30]+0xFFFFA420u; // 801C3DCC
  c->r[0]=R32(c->r[30]+0xFFFFA420u); // 801C3DD0
  c->r[5]=R32(c->r[4]+0x00000004u); // 801C3DD4
  c->r[3]=R32(c->r[4]+0x00000008u); // 801C3DD8
  c->r[5]=c->r[5]+c->r[3]; // 801C3DDC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801C3DE0
  c->r[5]=c->r[5]+c->r[3]; // 801C3DE4
  c->r[3]=R32(c->r[4]+0x00000010u); // 801C3DE8
  c->r[5]=c->r[5]+c->r[3]; // 801C3DEC
  c->r[3]=R32(c->r[4]+0x00000014u); // 801C3DF0
  c->r[5]=c->r[5]+c->r[3]; // 801C3DF4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801C3DF8
  c->r[5]=c->r[5]+c->r[3]; // 801C3DFC
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 801C3E00
  c->r[5]=c->r[5]+c->r[3]; // 801C3E04
  cmpu(c,0,c->r[0],c->r[5]); // 801C3E08
  if (crb(c,2)) { goto L_801C3E28; } // 801C3E0C
  c->r[3]=c->r[28]|c->r[28]; // 801C3E10
  c->r[4]=0u+0x00000000u; // 801C3E14
  c->r[5]=0u+0x00000020u; // 801C3E18
  c->lr=0x801C3E20u; f_8000443C(c); // 801C3E1C
  c->r[3]=0u+0x00000000u; // 801C3E20
  goto L_801C3E38; // 801C3E24
L_801C3E28:;
  c->r[3]=c->r[28]|c->r[28]; // 801C3E28
  c->r[5]=0u+0x00000020u; // 801C3E2C
  c->lr=0x801C3E34u; f_80004338(c); // 801C3E30
  c->r[3]=0u+0x00000001u; // 801C3E34
L_801C3E38:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801C3E38
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801C3E3C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801C3E40
  c->r[29]=R32(c->r[1]+0x000000A4u); // 801C3E44
  c->r[28]=R32(c->r[1]+0x000000A0u); // 801C3E48
  c->lr=c->r[0]; // 801C3E4C
  c->r[1]=c->r[1]+0x000000B0u; // 801C3E50
  return; // 801C3E54
}

// __OSInitNet
void f_801C3E58(Ctx* __restrict c) {
  trace_call(0x801C3E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3E58
  c->r[0]=c->lr; // 801C3E5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3E60
  c->r[3]=c->r[1]+0x00000008u; // 801C3E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3E68
  c->r[31]=0u+0x804B0000u; // 801C3E6C
  c->r[31]=c->r[31]+0xFFFFFD28u; // 801C3E70
  c->lr=0x801C3E78u; f_801B8510(c); // 801C3E74
  c->r[0]=R8(c->r[1]+0x00000009u); // 801C3E78
  cmpu(c,0,c->r[0],0x00000004u); // 801C3E7C
  if (!crb(c,1)) { goto L_801C3EE8; } // 801C3E80
  cmpu(c,0,c->r[0],0x00000009u); // 801C3E84
  if (!crb(c,2)) { goto L_801C3E90; } // 801C3E88
  goto L_801C3EE8; // 801C3E8C
L_801C3E90:;
  c->lr=0x801C3E94u; f_8034AD84(c); // 801C3E90
  cmps(c,0,(int32_t)c->r[3],0); // 801C3E94
  if (crb(c,2)) { goto L_801C3ECC; } // 801C3E98
  if (!crb(c,0)) { goto L_801C3EB0; } // 801C3E9C
  c->r[4]=c->r[3]|c->r[3]; // 801C3EA0
  c->r[3]=c->r[31]+0x00000000u; // 801C3EA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3EA8
  c->lr=0x801C3EB0u; f_801BB3FC(c); // 801C3EAC
L_801C3EB0:;
  c->lr=0x801C3EB4u; f_80349A5C(c); // 801C3EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C3EB4
  if (!crb(c,0)) { goto L_801C3ECC; } // 801C3EB8
  c->r[4]=c->r[3]|c->r[3]; // 801C3EBC
  c->r[3]=c->r[31]+0x00000034u; // 801C3EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3EC4
  c->lr=0x801C3ECCu; f_801BB3FC(c); // 801C3EC8
L_801C3ECC:;
  c->lr=0x801C3ED0u; f_8034A650(c); // 801C3ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3ED0
  if (crb(c,2)) { goto L_801C3EE8; } // 801C3ED4
  c->r[4]=c->r[3]|c->r[3]; // 801C3ED8
  c->r[3]=c->r[31]+0x00000068u; // 801C3EDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3EE0
  c->lr=0x801C3EE8u; f_801BB3FC(c); // 801C3EE4
L_801C3EE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3EE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3EEC
  c->lr=c->r[0]; // 801C3EF0
  c->r[1]=c->r[1]+0x00000020u; // 801C3EF4
  return; // 801C3EF8
}

// __OSWriteNandbootInfo
void f_801C3EFC(Ctx* __restrict c) {
  trace_call(0x801C3EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3EFC
  c->r[0]=c->lr; // 801C3F00
  c->r[8]=c->r[3]+0x00000004u; // 801C3F04
  c->r[7]=0u+0x00000000u; // 801C3F08
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C3F0C
  c->r[0]=0u+0x00000040u; // 801C3F10
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C3F14
  c->r[31]=c->r[3]|c->r[3]; // 801C3F18
  c->ctr=c->r[0]; // 801C3F1C
L_801C3F20:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 801C3F20
  c->r[0]=R32(c->r[8]+0x00000004u); // 801C3F24
  c->r[7]=c->r[7]+c->r[4]; // 801C3F28
  c->r[4]=R32(c->r[8]+0x00000008u); // 801C3F2C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F30
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801C3F34
  c->r[7]=c->r[7]+c->r[4]; // 801C3F38
  c->r[4]=R32(c->r[8]+0x00000010u); // 801C3F3C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F40
  c->r[0]=R32(c->r[8]+0x00000014u); // 801C3F44
  c->r[7]=c->r[7]+c->r[4]; // 801C3F48
  c->r[4]=R32(c->r[8]+0x00000018u); // 801C3F4C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F50
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801C3F54
  c->r[7]=c->r[7]+c->r[4]; // 801C3F58
  c->r[4]=R32(c->r[8]+0x00000020u); // 801C3F5C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F60
  c->r[0]=R32(c->r[8]+0x00000024u); // 801C3F64
  c->r[7]=c->r[7]+c->r[4]; // 801C3F68
  c->r[4]=R32(c->r[8]+0x00000028u); // 801C3F6C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F70
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 801C3F74
  c->r[7]=c->r[7]+c->r[4]; // 801C3F78
  c->r[4]=R32(c->r[8]+0x00000030u); // 801C3F7C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F80
  c->r[0]=R32(c->r[8]+0x00000034u); // 801C3F84
  c->r[7]=c->r[7]+c->r[4]; // 801C3F88
  c->r[4]=R32(c->r[8]+0x00000038u); // 801C3F8C
  c->r[7]=c->r[7]+c->r[0]; // 801C3F90
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801C3F94
  c->r[7]=c->r[7]+c->r[4]; // 801C3F98
  c->r[8]=c->r[8]+0x00000040u; // 801C3F9C
  c->r[7]=c->r[7]+c->r[0]; // 801C3FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C3F20; } // 801C3FA4
  c->r[0]=R32(c->r[8]+0x00000000u); // 801C3FA8
  c->r[6]=0u+0x804B0000u; // 801C3FAC
  c->r[5]=R32(c->r[8]+0x00000004u); // 801C3FB0
  c->r[4]=c->r[1]+0x00000008u; // 801C3FB4
  c->r[7]=c->r[7]+c->r[0]; // 801C3FB8
  c->r[0]=R32(c->r[8]+0x00000008u); // 801C3FBC
  c->r[7]=c->r[7]+c->r[5]; // 801C3FC0
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 801C3FC4
  c->r[7]=c->r[7]+c->r[0]; // 801C3FC8
  c->r[0]=R32(c->r[8]+0x00000010u); // 801C3FCC
  c->r[7]=c->r[7]+c->r[5]; // 801C3FD0
  c->r[5]=R32(c->r[8]+0x00000014u); // 801C3FD4
  c->r[7]=c->r[7]+c->r[0]; // 801C3FD8
  c->r[0]=R32(c->r[8]+0x00000018u); // 801C3FDC
  c->r[7]=c->r[7]+c->r[5]; // 801C3FE0
  c->r[5]=0u+0x00000002u; // 801C3FE4
  c->r[7]=c->r[7]+c->r[0]; // 801C3FE8
  W32(c->r[3]+0x00000000u,c->r[7]); // 801C3FEC
  c->r[3]=c->r[6]+0xFFFFFE90u; // 801C3FF0
  c->lr=0x801C3FF8u; f_802063EC(c); // 801C3FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C3FF8
  if (!crb(c,2)) { goto L_801C403C; } // 801C3FFC
  c->r[4]=c->r[31]|c->r[31]; // 801C4000
  c->r[3]=c->r[1]+0x00000008u; // 801C4004
  c->r[5]=0u+0x00001020u; // 801C4008
  c->lr=0x801C4010u; f_802059D0(c); // 801C400C
  cmpu(c,0,c->r[3],0x00001020u); // 801C4010
  if (crb(c,2)) { goto L_801C4028; } // 801C4014
  c->r[3]=c->r[1]+0x00000008u; // 801C4018
  c->lr=0x801C4020u; f_802065E0(c); // 801C401C
  c->r[3]=0u+0x00000000u; // 801C4020
  goto L_801C4040; // 801C4024
L_801C4028:;
  c->r[3]=c->r[1]+0x00000008u; // 801C4028
  c->lr=0x801C4030u; f_802065E0(c); // 801C402C
  c->r[0]=cntlz(c->r[3]); // 801C4030
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C4034
  goto L_801C4040; // 801C4038
L_801C403C:;
  c->r[3]=0u+0x00000000u; // 801C403C
L_801C4040:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C4040
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C4044
  c->lr=c->r[0]; // 801C4048
  c->r[1]=c->r[1]+0x000000A0u; // 801C404C
  return; // 801C4050
}

// fn_801C4054
void f_801C4054(Ctx* __restrict c) {
  trace_call(0x801C4054u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4054
  c->r[0]=c->lr; // 801C4058
  c->r[4]=0u+0x804B0000u; // 801C405C
  c->r[5]=0u+0x00000001u; // 801C4060
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C4064
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C4068
  c->r[31]=c->r[3]|c->r[3]; // 801C406C
  c->r[3]=c->r[4]+0xFFFFFE90u; // 801C4070
  c->r[4]=c->r[1]+0x00000008u; // 801C4074
  W32(c->r[1]+0x00000098u,c->r[30]); // 801C4078
  c->lr=0x801C4080u; f_802063EC(c); // 801C407C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4080
  if (!crb(c,2)) { goto L_801C40C4; } // 801C4084
  c->r[4]=c->r[31]|c->r[31]; // 801C4088
  c->r[3]=c->r[1]+0x00000008u; // 801C408C
  c->r[5]=0u+0x00001020u; // 801C4090
  c->lr=0x801C4098u; f_802058F0(c); // 801C4094
  c->r[30]=c->r[3]|c->r[3]; // 801C4098
  c->r[3]=c->r[1]+0x00000008u; // 801C409C
  c->lr=0x801C40A4u; f_802065E0(c); // 801C40A0
  cmpu(c,0,c->r[30],0x00001020u); // 801C40A4
  if (crb(c,2)) { goto L_801C40DC; } // 801C40A8
  c->r[3]=c->r[31]|c->r[31]; // 801C40AC
  c->r[4]=0u+0x00000000u; // 801C40B0
  c->r[5]=0u+0x00001020u; // 801C40B4
  c->lr=0x801C40BCu; f_8000443C(c); // 801C40B8
  c->r[3]=0u+0x00000000u; // 801C40BC
  goto L_801C41D4; // 801C40C0
L_801C40C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C40C4
  c->r[4]=0u+0x00000000u; // 801C40C8
  c->r[5]=0u+0x00001020u; // 801C40CC
  c->lr=0x801C40D4u; f_8000443C(c); // 801C40D0
  c->r[3]=0u+0x00000000u; // 801C40D4
  goto L_801C41D4; // 801C40D8
L_801C40DC:;
  c->r[0]=0u+0x00000040u; // 801C40DC
  c->r[5]=c->r[31]+0x00000004u; // 801C40E0
  c->r[4]=0u+0x00000000u; // 801C40E4
  c->ctr=c->r[0]; // 801C40E8
L_801C40EC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801C40EC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801C40F0
  c->r[4]=c->r[4]+c->r[3]; // 801C40F4
  c->r[3]=R32(c->r[5]+0x00000008u); // 801C40F8
  c->r[4]=c->r[4]+c->r[0]; // 801C40FC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801C4100
  c->r[4]=c->r[4]+c->r[3]; // 801C4104
  c->r[3]=R32(c->r[5]+0x00000010u); // 801C4108
  c->r[4]=c->r[4]+c->r[0]; // 801C410C
  c->r[0]=R32(c->r[5]+0x00000014u); // 801C4110
  c->r[4]=c->r[4]+c->r[3]; // 801C4114
  c->r[3]=R32(c->r[5]+0x00000018u); // 801C4118
  c->r[4]=c->r[4]+c->r[0]; // 801C411C
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801C4120
  c->r[4]=c->r[4]+c->r[3]; // 801C4124
  c->r[3]=R32(c->r[5]+0x00000020u); // 801C4128
  c->r[4]=c->r[4]+c->r[0]; // 801C412C
  c->r[0]=R32(c->r[5]+0x00000024u); // 801C4130
  c->r[4]=c->r[4]+c->r[3]; // 801C4134
  c->r[3]=R32(c->r[5]+0x00000028u); // 801C4138
  c->r[4]=c->r[4]+c->r[0]; // 801C413C
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801C4140
  c->r[4]=c->r[4]+c->r[3]; // 801C4144
  c->r[3]=R32(c->r[5]+0x00000030u); // 801C4148
  c->r[4]=c->r[4]+c->r[0]; // 801C414C
  c->r[0]=R32(c->r[5]+0x00000034u); // 801C4150
  c->r[4]=c->r[4]+c->r[3]; // 801C4154
  c->r[3]=R32(c->r[5]+0x00000038u); // 801C4158
  c->r[4]=c->r[4]+c->r[0]; // 801C415C
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 801C4160
  c->r[4]=c->r[4]+c->r[3]; // 801C4164
  c->r[5]=c->r[5]+0x00000040u; // 801C4168
  c->r[4]=c->r[4]+c->r[0]; // 801C416C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C40EC; } // 801C4170
  c->r[3]=R32(c->r[5]+0x00000000u); // 801C4174
  c->r[0]=R32(c->r[5]+0x00000004u); // 801C4178
  c->r[4]=c->r[4]+c->r[3]; // 801C417C
  c->r[3]=R32(c->r[5]+0x00000008u); // 801C4180
  c->r[4]=c->r[4]+c->r[0]; // 801C4184
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801C4188
  c->r[4]=c->r[4]+c->r[3]; // 801C418C
  c->r[3]=R32(c->r[5]+0x00000010u); // 801C4190
  c->r[4]=c->r[4]+c->r[0]; // 801C4194
  c->r[0]=R32(c->r[5]+0x00000014u); // 801C4198
  c->r[4]=c->r[4]+c->r[3]; // 801C419C
  c->r[3]=R32(c->r[5]+0x00000018u); // 801C41A0
  c->r[4]=c->r[4]+c->r[0]; // 801C41A4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C41A8
  c->r[4]=c->r[4]+c->r[3]; // 801C41AC
  cmpu(c,0,c->r[0],c->r[4]); // 801C41B0
  if (crb(c,2)) { goto L_801C41D0; } // 801C41B4
  c->r[3]=c->r[31]|c->r[31]; // 801C41B8
  c->r[4]=0u+0x00000000u; // 801C41BC
  c->r[5]=0u+0x00001020u; // 801C41C0
  c->lr=0x801C41C8u; f_8000443C(c); // 801C41C4
  c->r[3]=0u+0x00000000u; // 801C41C8
  goto L_801C41D4; // 801C41CC
L_801C41D0:;
  c->r[3]=0u+0x00000001u; // 801C41D0
L_801C41D4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C41D4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C41D8
  c->r[30]=R32(c->r[1]+0x00000098u); // 801C41DC
  c->lr=c->r[0]; // 801C41E0
  c->r[1]=c->r[1]+0x000000A0u; // 801C41E4
  return; // 801C41E8
}

// __init_user
void f_801C41EC(Ctx* __restrict c) {
  trace_call(0x801C41ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C41EC
  c->r[0]=c->lr; // 801C41F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C41F4
  c->lr=0x801C41FCu; f_801C420C(c); // 801C41F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C41FC
  c->lr=c->r[0]; // 801C4200
  c->r[1]=c->r[1]+0x00000010u; // 801C4204
  return; // 801C4208
}

// __init_cpp
void f_801C420C(Ctx* __restrict c) {
  trace_call(0x801C420Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C420C
  c->r[0]=c->lr; // 801C4210
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4218
  c->r[31]=0u+0x803A0000u; // 801C421C
  c->r[31]=c->r[31]+0x00007E40u; // 801C4220
  goto L_801C4234; // 801C4224
L_801C4228:;
  c->ctr=c->r[12]; // 801C4228
  if (true) { c->lr=0x801C4230u; dispatch(c,c->ctr); } // 801C422C
  c->r[31]=c->r[31]+0x00000004u; // 801C4230
L_801C4234:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C4234
  cmps(c,0,(int32_t)c->r[12],0); // 801C4238
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4228; } // 801C423C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4244
  c->lr=c->r[0]; // 801C4248
  c->r[1]=c->r[1]+0x00000010u; // 801C424C
  return; // 801C4250
}

// exit
void f_801C4254(Ctx* __restrict c) {
  trace_call(0x801C4254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4254
  c->r[0]=c->lr; // 801C4258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C425C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4260
  c->r[31]=0u+0x803A0000u; // 801C4264
  c->r[31]=c->r[31]+0x00007F20u; // 801C4268
  goto L_801C427C; // 801C426C
L_801C4270:;
  c->ctr=c->r[12]; // 801C4270
  if (true) { c->lr=0x801C4278u; dispatch(c,c->ctr); } // 801C4274
  c->r[31]=c->r[31]+0x00000004u; // 801C4278
L_801C427C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C427C
  cmps(c,0,(int32_t)c->r[12],0); // 801C4280
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4270; } // 801C4284
  c->lr=0x801C428Cu; f_801B81DC(c); // 801C4288
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C428C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4290
  c->lr=c->r[0]; // 801C4294
  c->r[1]=c->r[1]+0x00000010u; // 801C4298
  return; // 801C429C
}

// fn_801C42A0
void f_801C42A0(Ctx* __restrict c) {
  trace_call(0x801C42A0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 801C42A0
  c->r[0]=c->r[4]+0x80000000u; // 801C42A4
  c->r[5]=c->r[3]+0x00000004u; // 801C42A8
  c->r[4]=0u+0x00000000u; // 801C42AC
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 801C42B0
  c->r[7]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801C42B4
  c->r[8]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C42B8
  c->r[10]=0u+0x00000000u; // 801C42BC
  c->r[6]=c->r[3]+c->r[6]; // 801C42C0
  c->r[6]=c->r[6]+0x00000004u; // 801C42C4
  goto L_801C4438; // 801C42C8
L_801C42CC:;
  c->r[9]=R32(c->r[5]+0x00000000u); // 801C42CC
  cmps(c,0,(int32_t)c->r[9],3); // 801C42D0
  if (crb(c,2)) { goto L_801C43A0; } // 801C42D4
  if (!crb(c,0)) { goto L_801C42F4; } // 801C42D8
  cmps(c,0,(int32_t)c->r[9],1); // 801C42DC
  if (crb(c,2)) { goto L_801C4338; } // 801C42E0
  if (!crb(c,0)) { goto L_801C4374; } // 801C42E4
  cmps(c,0,(int32_t)c->r[9],0); // 801C42E8
  if (!crb(c,0)) { goto L_801C4304; } // 801C42EC
  goto L_801C4430; // 801C42F0
L_801C42F4:;
  cmps(c,0,(int32_t)c->r[9],5); // 801C42F4
  if (crb(c,2)) { goto L_801C4400; } // 801C42F8
  if (!crb(c,0)) { goto L_801C4430; } // 801C42FC
  goto L_801C43D4; // 801C4300
L_801C4304:;
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C4304
  c->r[9]=c->r[7]+c->r[9]; // 801C4308
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C430C
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 801C4310
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C4314
  c->r[9]=c->r[9]+c->r[7]; // 801C4318
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C431C
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C4320
  c->r[9]=c->r[9]+c->r[7]; // 801C4324
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C4328
  W32(c->r[5]+0x00000018u,c->r[6]); // 801C432C
  c->r[6]=c->r[6]+0x0000002Eu; // 801C4330
  goto L_801C4430; // 801C4334
L_801C4338:;
  c->r[9]=R32(c->r[5]+0x00000008u); // 801C4338
  c->r[9]=c->r[9]+c->r[7]; // 801C433C
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C4340
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 801C4344
  c->r[9]=c->r[9]+c->r[7]; // 801C4348
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 801C434C
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C4350
  c->r[9]=c->r[9]+c->r[7]; // 801C4354
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C4358
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C435C
  c->r[9]=c->r[9]+c->r[7]; // 801C4360
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C4364
  W32(c->r[5]+0x00000018u,c->r[6]); // 801C4368
  c->r[6]=c->r[6]+0x0000002Eu; // 801C436C
  goto L_801C4430; // 801C4370
L_801C4374:;
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C4374
  c->r[9]=c->r[8]+c->r[9]; // 801C4378
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C437C
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 801C4380
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C4384
  c->r[9]=c->r[9]+c->r[8]; // 801C4388
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C438C
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C4390
  c->r[9]=c->r[9]+c->r[8]; // 801C4394
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C4398
  goto L_801C4430; // 801C439C
L_801C43A0:;
  c->r[9]=R32(c->r[5]+0x00000008u); // 801C43A0
  c->r[9]=c->r[9]+c->r[8]; // 801C43A4
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C43A8
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 801C43AC
  c->r[9]=c->r[9]+c->r[8]; // 801C43B0
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 801C43B4
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C43B8
  c->r[9]=c->r[9]+c->r[8]; // 801C43BC
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C43C0
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C43C4
  c->r[9]=c->r[9]+c->r[8]; // 801C43C8
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C43CC
  goto L_801C4430; // 801C43D0
L_801C43D4:;
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C43D4
  c->r[9]=c->r[0]+c->r[9]; // 801C43D8
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C43DC
  W32(c->r[5]+0x0000000Cu,c->r[10]); // 801C43E0
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C43E4
  c->r[9]=c->r[9]+c->r[0]; // 801C43E8
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C43EC
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C43F0
  c->r[9]=c->r[9]+c->r[0]; // 801C43F4
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C43F8
  goto L_801C4430; // 801C43FC
L_801C4400:;
  c->r[9]=R32(c->r[5]+0x00000008u); // 801C4400
  c->r[9]=c->r[9]+c->r[0]; // 801C4404
  W32(c->r[5]+0x00000008u,c->r[9]); // 801C4408
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 801C440C
  c->r[9]=c->r[9]+c->r[0]; // 801C4410
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 801C4414
  c->r[9]=R32(c->r[5]+0x00000010u); // 801C4418
  c->r[9]=c->r[9]+c->r[0]; // 801C441C
  W32(c->r[5]+0x00000010u,c->r[9]); // 801C4420
  c->r[9]=R32(c->r[5]+0x00000014u); // 801C4424
  c->r[9]=c->r[9]+c->r[0]; // 801C4428
  W32(c->r[5]+0x00000014u,c->r[9]); // 801C442C
L_801C4430:;
  c->r[5]=c->r[5]+0x0000001Cu; // 801C4430
  c->r[4]=c->r[4]+0x00000001u; // 801C4434
L_801C4438:;
  c->r[9]=R32(c->r[3]+0x00000000u); // 801C4438
  cmpu(c,0,c->r[4],c->r[9]); // 801C443C
  if (crb(c,0)) { IRQCHK(c); goto L_801C42CC; } // 801C4440
  return; // 801C4444
}

// fn_801C4448
void f_801C4448(Ctx* __restrict c) {
  trace_call(0x801C4448u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C4448
  cmpu(c,0,c->r[0],c->r[4]); // 801C444C
  if (!crb(c,1)) { f_801C4464(c); return; } // 801C4450
  f_801C4454(c);
}

// fn_801C4454
void f_801C4454(Ctx* __restrict c) {
  trace_call(0x801C4454u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801C4454
  c->r[3]=c->r[3]+c->r[0]; // 801C4458
  c->r[3]=c->r[3]+0x00000004u; // 801C445C
  return; // 801C4460
}

// fn_801C4464
void f_801C4464(Ctx* __restrict c) {
  trace_call(0x801C4464u);
  c->r[3]=0u+0x00000000u; // 801C4464
  return; // 801C4468
}

// fn_801C446C
void f_801C446C(Ctx* __restrict c) {
  trace_call(0x801C446Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C446C
  c->r[0]=c->lr; // 801C4470
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C4474
  c->r[11]=c->r[1]+0x00000030u; // 801C4478
  c->lr=0x801C4480u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C447C
  c->r[0]=0u+0x43300000u; // 801C4480
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C4484
  {uint32_t ea=c->r[2]+0xFFFFC138u; c->f[3]=RF64(ea);} // 801C4488
  c->r[30]=c->r[3]|c->r[3]; // 801C448C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4490
  c->r[29]=c->r[4]|c->r[4]; // 801C4494
  {uint32_t ea=c->r[2]+0xFFFFC134u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4498
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C449C
  {uint32_t ea=c->r[2]+0xFFFFC130u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C44A0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C44A4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C44A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C44AC
  c->lr=0x801C44B4u; f_801E7834(c); // 801C44B0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C44B4
  c->r[31]=c->r[3]|c->r[3]; // 801C44B8
  cmps(c,0,(int32_t)c->r[0],3); // 801C44BC
  if (crb(c,2)) { goto L_801C4814; } // 801C44C0
  if (!crb(c,0)) { goto L_801C44E0; } // 801C44C4
  cmps(c,0,(int32_t)c->r[0],1); // 801C44C8
  if (crb(c,2)) { goto L_801C460C; } // 801C44CC
  if (!crb(c,0)) { goto L_801C4744; } // 801C44D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C44D4
  if (!crb(c,0)) { goto L_801C44F0; } // 801C44D8
  goto L_801C4A88; // 801C44DC
L_801C44E0:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C44E0
  if (crb(c,2)) { goto L_801C49B8; } // 801C44E4
  if (!crb(c,0)) { goto L_801C4A88; } // 801C44E8
  goto L_801C48E8; // 801C44EC
L_801C44F0:;
  c->r[26]=R32(c->r[30]+0x00000008u); // 801C44F0
  c->r[27]=R32(c->r[30]+0x00000010u); // 801C44F4
  c->r[28]=R32(c->r[30]+0x00000014u); // 801C44F8
  c->r[30]=R32(c->r[30]+0x00000018u); // 801C44FC
  c->lr=0x801C4504u; f_801BE74C(c); // 801C4500
  c->r[0]=0u+0x00000000u; // 801C4504
  c->r[9]=rotl(c->r[26],16)&0x0000FFFFu; // 801C4508
  c->r[8]=rotl(c->r[27],16)&0x0000FFFFu; // 801C450C
  c->r[7]=rotl(c->r[28],16)&0x0000FFFFu; // 801C4510
  W16(c->r[29]+0x00000096u,c->r[0]); // 801C4514
  c->r[6]=rotl(c->r[31],16)&0x0000FFFFu; // 801C4518
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 801C451C
  W16(c->r[29]+0x00000098u,c->r[0]); // 801C4520
  c->r[5]=c->r[5]|0x00010000u; // 801C4524
  W16(c->r[29]+0x0000009Au,c->r[9]); // 801C4528
  c->r[5]=c->r[5]|0x00008400u; // 801C452C
  W16(c->r[29]+0x0000009Cu,c->r[26]); // 801C4530
  W16(c->r[29]+0x0000009Eu,c->r[8]); // 801C4534
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4538
  W16(c->r[29]+0x000000A2u,c->r[7]); // 801C453C
  W16(c->r[29]+0x000000A4u,c->r[28]); // 801C4540
  c->r[7]=R16(c->r[30]+0x00000000u); // 801C4544
  W16(c->r[29]+0x000000A6u,c->r[7]); // 801C4548
  c->r[7]=R16(c->r[30]+0x00000002u); // 801C454C
  W16(c->r[29]+0x000000A8u,c->r[7]); // 801C4550
  c->r[7]=R16(c->r[30]+0x00000004u); // 801C4554
  W16(c->r[29]+0x000000AAu,c->r[7]); // 801C4558
  c->r[7]=R16(c->r[30]+0x00000006u); // 801C455C
  W16(c->r[29]+0x000000ACu,c->r[7]); // 801C4560
  c->r[7]=R16(c->r[30]+0x00000008u); // 801C4564
  W16(c->r[29]+0x000000AEu,c->r[7]); // 801C4568
  c->r[7]=R16(c->r[30]+0x0000000Au); // 801C456C
  W16(c->r[29]+0x000000B0u,c->r[7]); // 801C4570
  c->r[7]=R16(c->r[30]+0x0000000Cu); // 801C4574
  W16(c->r[29]+0x000000B2u,c->r[7]); // 801C4578
  c->r[7]=R16(c->r[30]+0x0000000Eu); // 801C457C
  W16(c->r[29]+0x000000B4u,c->r[7]); // 801C4580
  c->r[7]=R16(c->r[30]+0x00000010u); // 801C4584
  W16(c->r[29]+0x000000B6u,c->r[7]); // 801C4588
  c->r[7]=R16(c->r[30]+0x00000012u); // 801C458C
  W16(c->r[29]+0x000000B8u,c->r[7]); // 801C4590
  c->r[7]=R16(c->r[30]+0x00000014u); // 801C4594
  W16(c->r[29]+0x000000BAu,c->r[7]); // 801C4598
  c->r[7]=R16(c->r[30]+0x00000016u); // 801C459C
  W16(c->r[29]+0x000000BCu,c->r[7]); // 801C45A0
  c->r[7]=R16(c->r[30]+0x00000018u); // 801C45A4
  W16(c->r[29]+0x000000BEu,c->r[7]); // 801C45A8
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801C45AC
  W16(c->r[29]+0x000000C0u,c->r[7]); // 801C45B0
  c->r[7]=R16(c->r[30]+0x0000001Cu); // 801C45B4
  W16(c->r[29]+0x000000C2u,c->r[7]); // 801C45B8
  c->r[7]=R16(c->r[30]+0x0000001Eu); // 801C45BC
  W16(c->r[29]+0x000000C4u,c->r[7]); // 801C45C0
  c->r[7]=R16(c->r[30]+0x00000020u); // 801C45C4
  W16(c->r[29]+0x000000C6u,c->r[7]); // 801C45C8
  c->r[7]=R16(c->r[30]+0x00000022u); // 801C45CC
  W16(c->r[29]+0x000000C8u,c->r[7]); // 801C45D0
  c->r[7]=R16(c->r[30]+0x00000024u); // 801C45D4
  W16(c->r[29]+0x000000CAu,c->r[7]); // 801C45D8
  c->r[7]=R16(c->r[30]+0x00000026u); // 801C45DC
  W16(c->r[29]+0x000000CCu,c->r[7]); // 801C45E0
  W16(c->r[29]+0x000000CEu,c->r[6]); // 801C45E4
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C45E8
  W16(c->r[29]+0x000000D2u,c->r[0]); // 801C45EC
  W16(c->r[29]+0x000000D4u,c->r[0]); // 801C45F0
  W16(c->r[29]+0x000000D6u,c->r[0]); // 801C45F4
  W16(c->r[29]+0x000000D8u,c->r[0]); // 801C45F8
  W16(c->r[29]+0x000000DAu,c->r[0]); // 801C45FC
  W32(c->r[29]+0x0000001Cu,c->r[5]); // 801C4600
  c->lr=0x801C4608u; f_801BE774(c); // 801C4604
  goto L_801C4A88; // 801C4608
L_801C460C:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 801C460C
  c->r[27]=R32(c->r[30]+0x0000000Cu); // 801C4610
  c->r[26]=R32(c->r[30]+0x00000014u); // 801C4614
  c->r[30]=R32(c->r[30]+0x00000018u); // 801C4618
  c->lr=0x801C4620u; f_801BE74C(c); // 801C461C
  c->r[0]=0u+0x00000000u; // 801C4620
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 801C4624
  c->r[8]=rotl(c->r[27],16)&0x0000FFFFu; // 801C4628
  c->r[7]=rotl(c->r[26],16)&0x0000FFFFu; // 801C462C
  c->r[6]=0u+0x00000001u; // 801C4630
  W16(c->r[29]+0x00000098u,c->r[0]); // 801C4634
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 801C4638
  W16(c->r[29]+0x00000096u,c->r[6]); // 801C463C
  c->r[6]=rotl(c->r[31],16)&0x0000FFFFu; // 801C4640
  c->r[5]=c->r[5]|0x00050000u; // 801C4644
  W16(c->r[29]+0x0000009Au,c->r[9]); // 801C4648
  c->r[5]=c->r[5]|0x00008400u; // 801C464C
  W16(c->r[29]+0x0000009Cu,c->r[28]); // 801C4650
  W16(c->r[29]+0x0000009Eu,c->r[8]); // 801C4654
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4658
  W16(c->r[29]+0x000000A2u,c->r[7]); // 801C465C
  W16(c->r[29]+0x000000A4u,c->r[26]); // 801C4660
  c->r[7]=R16(c->r[30]+0x00000000u); // 801C4664
  W16(c->r[29]+0x000000A6u,c->r[7]); // 801C4668
  c->r[7]=R16(c->r[30]+0x00000002u); // 801C466C
  W16(c->r[29]+0x000000A8u,c->r[7]); // 801C4670
  c->r[7]=R16(c->r[30]+0x00000004u); // 801C4674
  W16(c->r[29]+0x000000AAu,c->r[7]); // 801C4678
  c->r[7]=R16(c->r[30]+0x00000006u); // 801C467C
  W16(c->r[29]+0x000000ACu,c->r[7]); // 801C4680
  c->r[7]=R16(c->r[30]+0x00000008u); // 801C4684
  W16(c->r[29]+0x000000AEu,c->r[7]); // 801C4688
  c->r[7]=R16(c->r[30]+0x0000000Au); // 801C468C
  W16(c->r[29]+0x000000B0u,c->r[7]); // 801C4690
  c->r[7]=R16(c->r[30]+0x0000000Cu); // 801C4694
  W16(c->r[29]+0x000000B2u,c->r[7]); // 801C4698
  c->r[7]=R16(c->r[30]+0x0000000Eu); // 801C469C
  W16(c->r[29]+0x000000B4u,c->r[7]); // 801C46A0
  c->r[7]=R16(c->r[30]+0x00000010u); // 801C46A4
  W16(c->r[29]+0x000000B6u,c->r[7]); // 801C46A8
  c->r[7]=R16(c->r[30]+0x00000012u); // 801C46AC
  W16(c->r[29]+0x000000B8u,c->r[7]); // 801C46B0
  c->r[7]=R16(c->r[30]+0x00000014u); // 801C46B4
  W16(c->r[29]+0x000000BAu,c->r[7]); // 801C46B8
  c->r[7]=R16(c->r[30]+0x00000016u); // 801C46BC
  W16(c->r[29]+0x000000BCu,c->r[7]); // 801C46C0
  c->r[7]=R16(c->r[30]+0x00000018u); // 801C46C4
  W16(c->r[29]+0x000000BEu,c->r[7]); // 801C46C8
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801C46CC
  W16(c->r[29]+0x000000C0u,c->r[7]); // 801C46D0
  c->r[7]=R16(c->r[30]+0x0000001Cu); // 801C46D4
  W16(c->r[29]+0x000000C2u,c->r[7]); // 801C46D8
  c->r[7]=R16(c->r[30]+0x0000001Eu); // 801C46DC
  W16(c->r[29]+0x000000C4u,c->r[7]); // 801C46E0
  c->r[7]=R16(c->r[30]+0x00000020u); // 801C46E4
  W16(c->r[29]+0x000000C6u,c->r[7]); // 801C46E8
  c->r[7]=R16(c->r[30]+0x00000022u); // 801C46EC
  W16(c->r[29]+0x000000C8u,c->r[7]); // 801C46F0
  c->r[7]=R16(c->r[30]+0x00000024u); // 801C46F4
  W16(c->r[29]+0x000000CAu,c->r[7]); // 801C46F8
  c->r[7]=R16(c->r[30]+0x00000026u); // 801C46FC
  W16(c->r[29]+0x000000CCu,c->r[7]); // 801C4700
  W16(c->r[29]+0x000000CEu,c->r[6]); // 801C4704
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C4708
  W16(c->r[29]+0x000000D2u,c->r[0]); // 801C470C
  W16(c->r[29]+0x000000D4u,c->r[0]); // 801C4710
  W16(c->r[29]+0x000000D6u,c->r[0]); // 801C4714
  W16(c->r[29]+0x000000D8u,c->r[0]); // 801C4718
  W16(c->r[29]+0x000000DAu,c->r[0]); // 801C471C
  c->r[0]=R16(c->r[30]+0x00000028u); // 801C4720
  W16(c->r[29]+0x000000DCu,c->r[0]); // 801C4724
  c->r[0]=R16(c->r[30]+0x0000002Au); // 801C4728
  W16(c->r[29]+0x000000DEu,c->r[0]); // 801C472C
  c->r[0]=R16(c->r[30]+0x0000002Cu); // 801C4730
  W16(c->r[29]+0x000000E0u,c->r[0]); // 801C4734
  W32(c->r[29]+0x0000001Cu,c->r[5]); // 801C4738
  c->lr=0x801C4740u; f_801BE774(c); // 801C473C
  goto L_801C4A88; // 801C4740
L_801C4744:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 801C4744
  c->r[27]=R32(c->r[30]+0x00000010u); // 801C4748
  c->r[30]=R32(c->r[30]+0x00000014u); // 801C474C
  c->lr=0x801C4754u; f_801BE74C(c); // 801C4750
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C4754
  c->r[10]=0u+0x00000000u; // 801C4758
  c->r[8]=rotl(c->r[28],16)&0x0000FFFFu; // 801C475C
  c->r[7]=rotl(c->r[27],16)&0x0000FFFFu; // 801C4760
  c->r[0]=c->r[0]|0x00010000u; // 801C4764
  c->r[6]=rotl(c->r[30],16)&0x0000FFFFu; // 801C4768
  c->r[4]=rotl(c->r[31],16)&0x0000FFFFu; // 801C476C
  c->r[9]=0u+0x0000000Au; // 801C4770
  c->r[0]=c->r[0]|0x00008400u; // 801C4774
  c->r[5]=0u+0x00000800u; // 801C4778
  W16(c->r[29]+0x00000096u,c->r[10]); // 801C477C
  W16(c->r[29]+0x00000098u,c->r[9]); // 801C4780
  W16(c->r[29]+0x0000009Au,c->r[8]); // 801C4784
  W16(c->r[29]+0x0000009Cu,c->r[28]); // 801C4788
  W16(c->r[29]+0x0000009Eu,c->r[7]); // 801C478C
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4790
  W16(c->r[29]+0x000000A2u,c->r[6]); // 801C4794
  W16(c->r[29]+0x000000A4u,c->r[30]); // 801C4798
  W16(c->r[29]+0x000000A6u,c->r[10]); // 801C479C
  W16(c->r[29]+0x000000A8u,c->r[10]); // 801C47A0
  W16(c->r[29]+0x000000AAu,c->r[10]); // 801C47A4
  W16(c->r[29]+0x000000ACu,c->r[10]); // 801C47A8
  W16(c->r[29]+0x000000AEu,c->r[10]); // 801C47AC
  W16(c->r[29]+0x000000B0u,c->r[10]); // 801C47B0
  W16(c->r[29]+0x000000B2u,c->r[10]); // 801C47B4
  W16(c->r[29]+0x000000B4u,c->r[10]); // 801C47B8
  W16(c->r[29]+0x000000B6u,c->r[10]); // 801C47BC
  W16(c->r[29]+0x000000B8u,c->r[10]); // 801C47C0
  W16(c->r[29]+0x000000BAu,c->r[10]); // 801C47C4
  W16(c->r[29]+0x000000BCu,c->r[10]); // 801C47C8
  W16(c->r[29]+0x000000BEu,c->r[10]); // 801C47CC
  W16(c->r[29]+0x000000C0u,c->r[10]); // 801C47D0
  W16(c->r[29]+0x000000C2u,c->r[10]); // 801C47D4
  W16(c->r[29]+0x000000C4u,c->r[10]); // 801C47D8
  W16(c->r[29]+0x000000C6u,c->r[5]); // 801C47DC
  W16(c->r[29]+0x000000C8u,c->r[10]); // 801C47E0
  W16(c->r[29]+0x000000CAu,c->r[10]); // 801C47E4
  W16(c->r[29]+0x000000CCu,c->r[10]); // 801C47E8
  W16(c->r[29]+0x000000CEu,c->r[4]); // 801C47EC
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C47F0
  W16(c->r[29]+0x000000D2u,c->r[10]); // 801C47F4
  W16(c->r[29]+0x000000D4u,c->r[10]); // 801C47F8
  W16(c->r[29]+0x000000D6u,c->r[10]); // 801C47FC
  W16(c->r[29]+0x000000D8u,c->r[10]); // 801C4800
  W16(c->r[29]+0x000000DAu,c->r[10]); // 801C4804
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C4808
  c->lr=0x801C4810u; f_801BE774(c); // 801C480C
  goto L_801C4A88; // 801C4810
L_801C4814:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 801C4814
  c->r[27]=R32(c->r[30]+0x0000000Cu); // 801C4818
  c->r[30]=R32(c->r[30]+0x00000014u); // 801C481C
  c->lr=0x801C4824u; f_801BE74C(c); // 801C4820
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C4824
  c->r[6]=0u+0x00000000u; // 801C4828
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 801C482C
  c->r[8]=rotl(c->r[27],16)&0x0000FFFFu; // 801C4830
  c->r[0]=c->r[0]|0x00010000u; // 801C4834
  c->r[7]=rotl(c->r[30],16)&0x0000FFFFu; // 801C4838
  c->r[4]=rotl(c->r[31],16)&0x0000FFFFu; // 801C483C
  c->r[11]=0u+0x00000001u; // 801C4840
  c->r[0]=c->r[0]|0x00008400u; // 801C4844
  c->r[10]=0u+0x0000000Au; // 801C4848
  c->r[5]=0u+0x00000800u; // 801C484C
  W16(c->r[29]+0x00000096u,c->r[11]); // 801C4850
  W16(c->r[29]+0x00000098u,c->r[10]); // 801C4854
  W16(c->r[29]+0x0000009Au,c->r[9]); // 801C4858
  W16(c->r[29]+0x0000009Cu,c->r[28]); // 801C485C
  W16(c->r[29]+0x0000009Eu,c->r[8]); // 801C4860
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4864
  W16(c->r[29]+0x000000A2u,c->r[7]); // 801C4868
  W16(c->r[29]+0x000000A4u,c->r[30]); // 801C486C
  W16(c->r[29]+0x000000A6u,c->r[6]); // 801C4870
  W16(c->r[29]+0x000000A8u,c->r[6]); // 801C4874
  W16(c->r[29]+0x000000AAu,c->r[6]); // 801C4878
  W16(c->r[29]+0x000000ACu,c->r[6]); // 801C487C
  W16(c->r[29]+0x000000AEu,c->r[6]); // 801C4880
  W16(c->r[29]+0x000000B0u,c->r[6]); // 801C4884
  W16(c->r[29]+0x000000B2u,c->r[6]); // 801C4888
  W16(c->r[29]+0x000000B4u,c->r[6]); // 801C488C
  W16(c->r[29]+0x000000B6u,c->r[6]); // 801C4890
  W16(c->r[29]+0x000000B8u,c->r[6]); // 801C4894
  W16(c->r[29]+0x000000BAu,c->r[6]); // 801C4898
  W16(c->r[29]+0x000000BCu,c->r[6]); // 801C489C
  W16(c->r[29]+0x000000BEu,c->r[6]); // 801C48A0
  W16(c->r[29]+0x000000C0u,c->r[6]); // 801C48A4
  W16(c->r[29]+0x000000C2u,c->r[6]); // 801C48A8
  W16(c->r[29]+0x000000C4u,c->r[6]); // 801C48AC
  W16(c->r[29]+0x000000C6u,c->r[5]); // 801C48B0
  W16(c->r[29]+0x000000C8u,c->r[6]); // 801C48B4
  W16(c->r[29]+0x000000CAu,c->r[6]); // 801C48B8
  W16(c->r[29]+0x000000CCu,c->r[6]); // 801C48BC
  W16(c->r[29]+0x000000CEu,c->r[4]); // 801C48C0
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C48C4
  W16(c->r[29]+0x000000D2u,c->r[6]); // 801C48C8
  W16(c->r[29]+0x000000D4u,c->r[6]); // 801C48CC
  W16(c->r[29]+0x000000D6u,c->r[6]); // 801C48D0
  W16(c->r[29]+0x000000D8u,c->r[6]); // 801C48D4
  W16(c->r[29]+0x000000DAu,c->r[6]); // 801C48D8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C48DC
  c->lr=0x801C48E4u; f_801BE774(c); // 801C48E0
  goto L_801C4A88; // 801C48E4
L_801C48E8:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 801C48E8
  c->r[27]=R32(c->r[30]+0x00000010u); // 801C48EC
  c->r[30]=R32(c->r[30]+0x00000014u); // 801C48F0
  c->lr=0x801C48F8u; f_801BE74C(c); // 801C48F4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C48F8
  c->r[10]=0u+0x00000000u; // 801C48FC
  c->r[8]=rotl(c->r[28],16)&0x0000FFFFu; // 801C4900
  c->r[7]=rotl(c->r[27],16)&0x0000FFFFu; // 801C4904
  c->r[0]=c->r[0]|0x00010000u; // 801C4908
  c->r[6]=rotl(c->r[30],16)&0x0000FFFFu; // 801C490C
  c->r[4]=rotl(c->r[31],16)&0x0000FFFFu; // 801C4910
  c->r[9]=0u+0x00000019u; // 801C4914
  c->r[0]=c->r[0]|0x00008400u; // 801C4918
  c->r[5]=0u+0x00000100u; // 801C491C
  W16(c->r[29]+0x00000096u,c->r[10]); // 801C4920
  W16(c->r[29]+0x00000098u,c->r[9]); // 801C4924
  W16(c->r[29]+0x0000009Au,c->r[8]); // 801C4928
  W16(c->r[29]+0x0000009Cu,c->r[28]); // 801C492C
  W16(c->r[29]+0x0000009Eu,c->r[7]); // 801C4930
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4934
  W16(c->r[29]+0x000000A2u,c->r[6]); // 801C4938
  W16(c->r[29]+0x000000A4u,c->r[30]); // 801C493C
  W16(c->r[29]+0x000000A6u,c->r[10]); // 801C4940
  W16(c->r[29]+0x000000A8u,c->r[10]); // 801C4944
  W16(c->r[29]+0x000000AAu,c->r[10]); // 801C4948
  W16(c->r[29]+0x000000ACu,c->r[10]); // 801C494C
  W16(c->r[29]+0x000000AEu,c->r[10]); // 801C4950
  W16(c->r[29]+0x000000B0u,c->r[10]); // 801C4954
  W16(c->r[29]+0x000000B2u,c->r[10]); // 801C4958
  W16(c->r[29]+0x000000B4u,c->r[10]); // 801C495C
  W16(c->r[29]+0x000000B6u,c->r[10]); // 801C4960
  W16(c->r[29]+0x000000B8u,c->r[10]); // 801C4964
  W16(c->r[29]+0x000000BAu,c->r[10]); // 801C4968
  W16(c->r[29]+0x000000BCu,c->r[10]); // 801C496C
  W16(c->r[29]+0x000000BEu,c->r[10]); // 801C4970
  W16(c->r[29]+0x000000C0u,c->r[10]); // 801C4974
  W16(c->r[29]+0x000000C2u,c->r[10]); // 801C4978
  W16(c->r[29]+0x000000C4u,c->r[10]); // 801C497C
  W16(c->r[29]+0x000000C6u,c->r[5]); // 801C4980
  W16(c->r[29]+0x000000C8u,c->r[10]); // 801C4984
  W16(c->r[29]+0x000000CAu,c->r[10]); // 801C4988
  W16(c->r[29]+0x000000CCu,c->r[10]); // 801C498C
  W16(c->r[29]+0x000000CEu,c->r[4]); // 801C4990
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C4994
  W16(c->r[29]+0x000000D2u,c->r[10]); // 801C4998
  W16(c->r[29]+0x000000D4u,c->r[10]); // 801C499C
  W16(c->r[29]+0x000000D6u,c->r[10]); // 801C49A0
  W16(c->r[29]+0x000000D8u,c->r[10]); // 801C49A4
  W16(c->r[29]+0x000000DAu,c->r[10]); // 801C49A8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C49AC
  c->lr=0x801C49B4u; f_801BE774(c); // 801C49B0
  goto L_801C4A88; // 801C49B4
L_801C49B8:;
  c->r[28]=R32(c->r[30]+0x00000008u); // 801C49B8
  c->r[27]=R32(c->r[30]+0x0000000Cu); // 801C49BC
  c->r[30]=R32(c->r[30]+0x00000014u); // 801C49C0
  c->lr=0x801C49C8u; f_801BE74C(c); // 801C49C4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C49C8
  c->r[6]=0u+0x00000000u; // 801C49CC
  c->r[9]=rotl(c->r[28],16)&0x0000FFFFu; // 801C49D0
  c->r[8]=rotl(c->r[27],16)&0x0000FFFFu; // 801C49D4
  c->r[0]=c->r[0]|0x00010000u; // 801C49D8
  c->r[7]=rotl(c->r[30],16)&0x0000FFFFu; // 801C49DC
  c->r[4]=rotl(c->r[31],16)&0x0000FFFFu; // 801C49E0
  c->r[11]=0u+0x00000001u; // 801C49E4
  c->r[0]=c->r[0]|0x00008400u; // 801C49E8
  c->r[10]=0u+0x00000019u; // 801C49EC
  c->r[5]=0u+0x00000100u; // 801C49F0
  W16(c->r[29]+0x00000096u,c->r[11]); // 801C49F4
  W16(c->r[29]+0x00000098u,c->r[10]); // 801C49F8
  W16(c->r[29]+0x0000009Au,c->r[9]); // 801C49FC
  W16(c->r[29]+0x0000009Cu,c->r[28]); // 801C4A00
  W16(c->r[29]+0x0000009Eu,c->r[8]); // 801C4A04
  W16(c->r[29]+0x000000A0u,c->r[27]); // 801C4A08
  W16(c->r[29]+0x000000A2u,c->r[7]); // 801C4A0C
  W16(c->r[29]+0x000000A4u,c->r[30]); // 801C4A10
  W16(c->r[29]+0x000000A6u,c->r[6]); // 801C4A14
  W16(c->r[29]+0x000000A8u,c->r[6]); // 801C4A18
  W16(c->r[29]+0x000000AAu,c->r[6]); // 801C4A1C
  W16(c->r[29]+0x000000ACu,c->r[6]); // 801C4A20
  W16(c->r[29]+0x000000AEu,c->r[6]); // 801C4A24
  W16(c->r[29]+0x000000B0u,c->r[6]); // 801C4A28
  W16(c->r[29]+0x000000B2u,c->r[6]); // 801C4A2C
  W16(c->r[29]+0x000000B4u,c->r[6]); // 801C4A30
  W16(c->r[29]+0x000000B6u,c->r[6]); // 801C4A34
  W16(c->r[29]+0x000000B8u,c->r[6]); // 801C4A38
  W16(c->r[29]+0x000000BAu,c->r[6]); // 801C4A3C
  W16(c->r[29]+0x000000BCu,c->r[6]); // 801C4A40
  W16(c->r[29]+0x000000BEu,c->r[6]); // 801C4A44
  W16(c->r[29]+0x000000C0u,c->r[6]); // 801C4A48
  W16(c->r[29]+0x000000C2u,c->r[6]); // 801C4A4C
  W16(c->r[29]+0x000000C4u,c->r[6]); // 801C4A50
  W16(c->r[29]+0x000000C6u,c->r[5]); // 801C4A54
  W16(c->r[29]+0x000000C8u,c->r[6]); // 801C4A58
  W16(c->r[29]+0x000000CAu,c->r[6]); // 801C4A5C
  W16(c->r[29]+0x000000CCu,c->r[6]); // 801C4A60
  W16(c->r[29]+0x000000CEu,c->r[4]); // 801C4A64
  W16(c->r[29]+0x000000D0u,c->r[31]); // 801C4A68
  W16(c->r[29]+0x000000D2u,c->r[6]); // 801C4A6C
  W16(c->r[29]+0x000000D4u,c->r[6]); // 801C4A70
  W16(c->r[29]+0x000000D6u,c->r[6]); // 801C4A74
  W16(c->r[29]+0x000000D8u,c->r[6]); // 801C4A78
  W16(c->r[29]+0x000000DAu,c->r[6]); // 801C4A7C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C4A80
  c->lr=0x801C4A88u; f_801BE774(c); // 801C4A84
L_801C4A88:;
  c->r[11]=c->r[1]+0x00000030u; // 801C4A88
  c->lr=0x801C4A90u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4A8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C4A90
  c->lr=c->r[0]; // 801C4A94
  c->r[1]=c->r[1]+0x00000030u; // 801C4A98
  return; // 801C4A9C
}

// fn_801C4AA0
void f_801C4AA0(Ctx* __restrict c) {
  trace_call(0x801C4AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4AA0
  c->r[0]=c->lr; // 801C4AA4
  {uint32_t ea=c->r[2]+0xFFFFC140u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4AAC
  c->r[0]=0u+0x00000000u; // 801C4AB0
  W32(c->r[13]+0xFFFF9D78u,c->r[0]); // 801C4AB4
  c->lr=0x801C4ABCu; f_801C5804(c); // 801C4AB8
  {uint32_t ea=c->r[2]+0xFFFFC144u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4ABC
  c->lr=0x801C4AC4u; f_801C57FC(c); // 801C4AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4AC4
  c->lr=c->r[0]; // 801C4AC8
  c->r[1]=c->r[1]+0x00000010u; // 801C4ACC
  return; // 801C4AD0
}

// fn_801C4AD4
void f_801C4AD4(Ctx* __restrict c) {
  trace_call(0x801C4AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4AD4
  c->r[0]=c->lr; // 801C4AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4AE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4AE4
  c->lr=0x801C4AECu; f_801BE74C(c); // 801C4AE8
  c->r[30]=R32(c->r[13]+0xFFFF9D78u); // 801C4AEC
  c->r[31]=c->r[3]|c->r[3]; // 801C4AF0
  goto L_801C4B04; // 801C4AF4
L_801C4AF8:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801C4AF8
  c->lr=0x801C4B00u; f_801DCF14(c); // 801C4AFC
  c->r[30]=R32(c->r[30]+0x00000000u); // 801C4B00
L_801C4B04:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C4B04
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4AF8; } // 801C4B08
  c->r[0]=0u+0x00000000u; // 801C4B0C
  c->r[3]=c->r[31]|c->r[31]; // 801C4B10
  W32(c->r[13]+0xFFFF9D78u,c->r[0]); // 801C4B14
  c->lr=0x801C4B1Cu; f_801BE774(c); // 801C4B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4B1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C4B24
  c->lr=c->r[0]; // 801C4B28
  c->r[1]=c->r[1]+0x00000010u; // 801C4B2C
  return; // 801C4B30
}

// fn_801C4B34
void f_801C4B34(Ctx* __restrict c) {
  trace_call(0x801C4B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4B34
  c->r[0]=c->lr; // 801C4B38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4B40
  c->r[31]=R32(c->r[13]+0xFFFF9D78u); // 801C4B44
  goto L_801C4B58; // 801C4B48
L_801C4B4C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4B4C
  c->lr=0x801C4B54u; f_801C5160(c); // 801C4B50
  c->r[31]=R32(c->r[31]+0x00000000u); // 801C4B54
L_801C4B58:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C4B58
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4B4C; } // 801C4B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4B60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B64
  c->lr=c->r[0]; // 801C4B68
  c->r[1]=c->r[1]+0x00000010u; // 801C4B6C
  return; // 801C4B70
}

// fn_801C4B74
void f_801C4B74(Ctx* __restrict c) {
  trace_call(0x801C4B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4B74
  c->r[0]=0u+0x43300000u; // 801C4B78
  c->r[6]=0u+0x00000000u; // 801C4B7C
  {uint32_t ea=c->r[2]+0xFFFFC148u; c->f[1]=RF64(ea);} // 801C4B80
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C4B84
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4B88
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C4B8C
  W32(c->r[3]+0x00000010u,c->r[6]); // 801C4B90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C4B94
  W32(c->r[3]+0x00000008u,c->r[4]); // 801C4B98
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C4B9C
  c->r[1]=c->r[1]+0x00000010u; // 801C4BA0
  return; // 801C4BA4
}

// fn_801C4BA8
void f_801C4BA8(Ctx* __restrict c) {
  trace_call(0x801C4BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4BA8
  c->r[0]=c->lr; // 801C4BAC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C4BB0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801C4BB4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801C4BB8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801C4BBC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801C4BC0
  c->r[11]=c->r[1]+0x00000080u; // 801C4BC4
  c->lr=0x801C4BCCu; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C4BC8
  c->r[0]=0u+0x43300000u; // 801C4BCC
  c->r[15]=c->r[3]|c->r[3]; // 801C4BD0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C4BD4
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C4BD8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C4BDC
  c->lr=0x801C4BE4u; f_801D750C(c); // 801C4BE0
  {uint32_t ea=c->r[15]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4BE4
  c->r[16]=0u+0xFC400000u; // 801C4BE8
  {uint32_t ea=c->r[2]+0xFFFFC150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BEC
  c->r[0]=0u+0x00000000u; // 801C4BF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C4BF4
  c->r[0]=0u+0x00000000u; // 801C4BF8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801C4BFC
  c->r[31]=R32(c->r[15]+0x00000010u); // 801C4C00
  W16(c->r[1]+0x00000030u,c->r[0]); // 801C4C04
  c->r[0]=0u+0x00000000u; // 801C4C08
  {uint32_t ea=c->r[2]+0xFFFFC158u; c->f[30]=RF64(ea);} // 801C4C0C
  c->r[17]=c->r[16]|c->r[16]; // 801C4C10
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C4C14
  c->r[0]=0u+0x00000000u; // 801C4C18
  c->r[18]=c->r[16]|c->r[16]; // 801C4C1C
  c->r[19]=c->r[16]|c->r[16]; // 801C4C20
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C4C24
  c->r[26]=0u+0x00000000u; // 801C4C28
  c->r[27]=0u+0x00000000u; // 801C4C2C
  c->r[28]=0u+0x00000000u; // 801C4C30
  c->r[29]=0u+0x00000000u; // 801C4C34
  c->r[30]=0u+0x00000000u; // 801C4C38
  c->r[25]=0u+0x00000040u; // 801C4C3C
  c->r[24]=0u+0x0000007Fu; // 801C4C40
  c->r[23]=0u+0x00000001u; // 801C4C44
  c->r[21]=0u+0x00000000u; // 801C4C48
  c->r[22]=0u+0x00000000u; // 801C4C4C
  c->r[20]=0u+0x00000000u; // 801C4C50
  c->r[14]=0u+0x00000000u; // 801C4C54
  goto L_801C4E90; // 801C4C58
L_801C4C5C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C4C5C
  cmpu(c,0,c->r[0],0x00000019u); // 801C4C60
  if (crb(c,1)) { goto L_801C4E8C; } // 801C4C64
  c->r[3]=0u+0x804B0000u; // 801C4C68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C4C6C
  c->r[3]=c->r[3]+0xFFFFFEB0u; // 801C4C70
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C4C74
  c->ctr=c->r[3]; // 801C4C78
  if (true) { switch (c->ctr) { case 0x801C4C80u: goto L_801C4C80; case 0x801C4CB0u: goto L_801C4CB0; case 0x801C4CBCu: goto L_801C4CBC; case 0x801C4CC8u: goto L_801C4CC8; case 0x801C4CD0u: goto L_801C4CD0; case 0x801C4CDCu: goto L_801C4CDC; case 0x801C4CE8u: goto L_801C4CE8; case 0x801C4D18u: goto L_801C4D18; case 0x801C4D24u: goto L_801C4D24; case 0x801C4D30u: goto L_801C4D30; case 0x801C4D3Cu: goto L_801C4D3C; case 0x801C4D48u: goto L_801C4D48; case 0x801C4D54u: goto L_801C4D54; case 0x801C4D60u: goto L_801C4D60; case 0x801C4D6Cu: goto L_801C4D6C; case 0x801C4D78u: goto L_801C4D78; case 0x801C4DA8u: goto L_801C4DA8; case 0x801C4DD8u: goto L_801C4DD8; case 0x801C4E08u: goto L_801C4E08; case 0x801C4E38u: goto L_801C4E38; case 0x801C4E48u: goto L_801C4E48; case 0x801C4E54u: goto L_801C4E54; case 0x801C4E60u: goto L_801C4E60; case 0x801C4E7Cu: goto L_801C4E7C; case 0x801C4E8Cu: goto L_801C4E8C; default: break; } dispatch(c,c->ctr); return; } // 801C4C7C
L_801C4C80:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4C80
  c->lr=0x801C4C88u; f_801C580C(c); // 801C4C84
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4C88
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4C8C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801C4C90
  c->r[25]=R8(c->r[31]+0x0000001Cu); // 801C4C94
  c->r[24]=R8(c->r[31]+0x0000001Du); // 801C4C98
  c->r[29]=c->r[29]+c->r[0]; // 801C4C9C
  c->r[22]=R16(c->r[31]+0x00000020u); // 801C4CA0
  c->r[21]=R16(c->r[31]+0x00000022u); // 801C4CA4
  c->r[23]=R8(c->r[31]+0x0000001Eu); // 801C4CA8
  goto L_801C4E8C; // 801C4CAC
L_801C4CB0:;
  c->r[25]=R8(c->r[31]+0x00000008u); // 801C4CB0
  c->r[24]=R8(c->r[31]+0x00000009u); // 801C4CB4
  goto L_801C4E8C; // 801C4CB8
L_801C4CBC:;
  c->r[22]=R16(c->r[31]+0x00000008u); // 801C4CBC
  c->r[21]=R16(c->r[31]+0x0000000Au); // 801C4CC0
  goto L_801C4E8C; // 801C4CC4
L_801C4CC8:;
  c->r[23]=R8(c->r[31]+0x00000008u); // 801C4CC8
  goto L_801C4E8C; // 801C4CCC
L_801C4CD0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4CD0
  c->r[30]=c->r[30]+c->r[0]; // 801C4CD4
  goto L_801C4E8C; // 801C4CD8
L_801C4CDC:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4CDC
  c->r[30]=c->r[30]+c->r[0]; // 801C4CE0
  goto L_801C4E8C; // 801C4CE4
L_801C4CE8:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4CE8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4CEC
  c->r[0]=c->r[0]^0x80000000u; // 801C4CF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4CF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C4CF8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C4CFC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4D00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C4D04
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C4D08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4D0C
  c->r[30]=c->r[30]+c->r[0]; // 801C4D10
  goto L_801C4E8C; // 801C4D14
L_801C4D18:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4D18
  c->r[29]=c->r[29]+c->r[0]; // 801C4D1C
  goto L_801C4E8C; // 801C4D20
L_801C4D24:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4D24
  c->r[28]=c->r[28]+c->r[0]; // 801C4D28
  goto L_801C4E8C; // 801C4D2C
L_801C4D30:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4D30
  c->r[27]=c->r[27]+c->r[0]; // 801C4D34
  goto L_801C4E8C; // 801C4D38
L_801C4D3C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4D3C
  c->r[26]=c->r[26]+c->r[0]; // 801C4D40
  goto L_801C4E8C; // 801C4D44
L_801C4D48:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4D48
  c->r[29]=c->r[29]+c->r[0]; // 801C4D4C
  goto L_801C4E8C; // 801C4D50
L_801C4D54:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4D54
  c->r[28]=c->r[28]+c->r[0]; // 801C4D58
  goto L_801C4E8C; // 801C4D5C
L_801C4D60:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4D60
  c->r[27]=c->r[27]+c->r[0]; // 801C4D64
  goto L_801C4E8C; // 801C4D68
L_801C4D6C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4D6C
  c->r[26]=c->r[26]+c->r[0]; // 801C4D70
  goto L_801C4E8C; // 801C4D74
L_801C4D78:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4D78
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4D7C
  c->r[0]=c->r[0]^0x80000000u; // 801C4D80
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C4D84
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801C4D88
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C4D8C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4D90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C4D94
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C4D98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4D9C
  c->r[29]=c->r[29]+c->r[0]; // 801C4DA0
  goto L_801C4E8C; // 801C4DA4
L_801C4DA8:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4DA8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4DAC
  c->r[0]=c->r[0]^0x80000000u; // 801C4DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4DB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C4DB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C4DBC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4DC0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C4DC4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C4DC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4DCC
  c->r[28]=c->r[28]+c->r[0]; // 801C4DD0
  goto L_801C4E8C; // 801C4DD4
L_801C4DD8:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4DD8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4DDC
  c->r[0]=c->r[0]^0x80000000u; // 801C4DE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C4DE4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801C4DE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C4DEC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4DF0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C4DF4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C4DF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4DFC
  c->r[27]=c->r[27]+c->r[0]; // 801C4E00
  goto L_801C4E8C; // 801C4E04
L_801C4E08:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C4E08
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4E0C
  c->r[0]=c->r[0]^0x80000000u; // 801C4E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4E14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C4E18
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C4E1C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4E20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C4E24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C4E28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4E2C
  c->r[26]=c->r[26]+c->r[0]; // 801C4E30
  goto L_801C4E8C; // 801C4E34
L_801C4E38:;
  c->r[4]=R32(c->r[15]+0x00000008u); // 801C4E38
  c->r[3]=c->r[31]|c->r[31]; // 801C4E3C
  c->lr=0x801C4E44u; f_801C599C(c); // 801C4E40
  goto L_801C4E8C; // 801C4E44
L_801C4E48:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4E48
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C4E4C
  goto L_801C4E8C; // 801C4E50
L_801C4E54:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801C4E54
  W16(c->r[1]+0x00000030u,c->r[0]); // 801C4E58
  goto L_801C4E8C; // 801C4E5C
L_801C4E60:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C4E60
  c->r[14]=R32(c->r[31]+0x00000010u); // 801C4E64
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C4E68
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C4E6C
  c->r[20]=R32(c->r[31]+0x00000014u); // 801C4E70
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C4E74
  goto L_801C4E8C; // 801C4E78
L_801C4E7C:;
  c->r[19]=R32(c->r[31]+0x00000008u); // 801C4E7C
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 801C4E80
  c->r[17]=R32(c->r[31]+0x00000010u); // 801C4E84
  c->r[16]=R32(c->r[31]+0x00000014u); // 801C4E88
L_801C4E8C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801C4E8C
L_801C4E90:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C4E90
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4C5C; } // 801C4E94
  c->r[3]=sraw(c,c->r[30],16); // 801C4E98
  c->lr=0x801C4EA0u; f_801C55A8(c); // 801C4E9C
  c->r[30]=R32(c->r[15]+0x00000008u); // 801C4EA0
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801C4EA4
  c->r[4]=c->r[23]|c->r[23]; // 801C4EA8
  c->r[3]=c->r[30]|c->r[30]; // 801C4EAC
  c->lr=0x801C4EB4u; f_801D7150(c); // 801C4EB0
  c->f[1]=c->f[30]; // 801C4EB4
  c->r[3]=c->r[30]|c->r[30]; // 801C4EB8
  c->lr=0x801C4EC0u; f_801D7830(c); // 801C4EBC
  c->r[3]=c->r[30]|c->r[30]; // 801C4EC0
  c->r[4]=c->r[22]|c->r[22]; // 801C4EC4
  c->r[5]=c->r[21]|c->r[21]; // 801C4EC8
  c->lr=0x801C4ED0u; f_801D7568(c); // 801C4ECC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C4ED0
  c->r[9]=c->r[25]|c->r[25]; // 801C4ED4
  c->r[10]=c->r[24]|c->r[24]; // 801C4ED8
  c->r[4]=0u+0x00000000u; // 801C4EDC
  c->r[0]=sraw(c,c->r[0],16); // 801C4EE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4EE4
  c->r[5]=sraw(c,c->r[29],16); // 801C4EE8
  c->r[6]=sraw(c,c->r[28],16); // 801C4EEC
  c->r[7]=sraw(c,c->r[27],16); // 801C4EF0
  c->r[3]=R32(c->r[15]+0x00000008u); // 801C4EF4
  c->r[8]=sraw(c,c->r[26],16); // 801C4EF8
  c->lr=0x801C4F00u; f_801DB854(c); // 801C4EFC
  c->r[4]=R16(c->r[1]+0x00000030u); // 801C4F00
  c->r[3]=c->r[30]|c->r[30]; // 801C4F04
  c->lr=0x801C4F0Cu; f_801D7A98(c); // 801C4F08
  c->r[0]=sraw(c,c->r[17],16); // 801C4F0C
  c->r[3]=c->r[30]|c->r[30]; // 801C4F10
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4F14
  c->r[7]=sraw(c,c->r[16],16); // 801C4F18
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801C4F1C
  c->r[4]=0u+0x00000000u; // 801C4F20
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801C4F24
  c->r[5]=sraw(c,c->r[0],16); // 801C4F28
  c->r[0]=R32(c->r[1]+0x00000028u); // 801C4F2C
  c->r[6]=sraw(c,c->r[0],16); // 801C4F30
  c->r[7]=sraw(c,c->r[14],16); // 801C4F34
  c->r[8]=sraw(c,c->r[20],16); // 801C4F38
  c->r[9]=sraw(c,c->r[19],16); // 801C4F3C
  c->r[10]=sraw(c,c->r[18],16); // 801C4F40
  c->lr=0x801C4F48u; f_801DE7C0(c); // 801C4F44
  c->lr=0x801C4F4Cu; f_801BE74C(c); // 801C4F48
  c->r[4]=R32(c->r[13]+0xFFFF9D78u); // 801C4F4C
  cmps(c,0,(int32_t)c->r[4],0); // 801C4F50
  if (crb(c,2)) { goto L_801C4F68; } // 801C4F54
  W32(c->r[4]+0x00000004u,c->r[15]); // 801C4F58
  c->r[0]=R32(c->r[13]+0xFFFF9D78u); // 801C4F5C
  W32(c->r[15]+0x00000000u,c->r[0]); // 801C4F60
  goto L_801C4F70; // 801C4F64
L_801C4F68:;
  c->r[0]=0u+0x00000000u; // 801C4F68
  W32(c->r[15]+0x00000000u,c->r[0]); // 801C4F6C
L_801C4F70:;
  c->r[0]=0u+0x00000000u; // 801C4F70
  W32(c->r[15]+0x00000004u,c->r[0]); // 801C4F74
  W32(c->r[13]+0xFFFF9D78u,c->r[15]); // 801C4F78
  c->lr=0x801C4F80u; f_801BE774(c); // 801C4F7C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801C4F80
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801C4F84
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801C4F88
  c->r[11]=c->r[1]+0x00000080u; // 801C4F8C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801C4F90
  c->lr=0x801C4F98u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4F94
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C4F98
  c->lr=c->r[0]; // 801C4F9C
  c->r[1]=c->r[1]+0x000000A0u; // 801C4FA0
  return; // 801C4FA4
}

// fn_801C4FA8
void f_801C4FA8(Ctx* __restrict c) {
  trace_call(0x801C4FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4FA8
  c->r[0]=c->lr; // 801C4FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4FB4
  c->r[31]=c->r[3]|c->r[3]; // 801C4FB8
  c->lr=0x801C4FC0u; f_801BE74C(c); // 801C4FBC
  c->r[0]=R32(c->r[13]+0xFFFF9D78u); // 801C4FC0
  cmpu(c,0,c->r[31],c->r[0]); // 801C4FC4
  if (!crb(c,2)) { goto L_801C4FE8; } // 801C4FC8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801C4FCC
  cmps(c,0,(int32_t)c->r[4],0); // 801C4FD0
  W32(c->r[13]+0xFFFF9D78u,c->r[4]); // 801C4FD4
  if (crb(c,2)) { goto L_801C5000; } // 801C4FD8
  c->r[0]=0u+0x00000000u; // 801C4FDC
  W32(c->r[4]+0x00000004u,c->r[0]); // 801C4FE0
  goto L_801C5000; // 801C4FE4
L_801C4FE8:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 801C4FE8
  c->r[4]=R32(c->r[31]+0x00000004u); // 801C4FEC
  cmps(c,0,(int32_t)c->r[5],0); // 801C4FF0
  W32(c->r[4]+0x00000000u,c->r[5]); // 801C4FF4
  if (crb(c,2)) { goto L_801C5000; } // 801C4FF8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801C4FFC
L_801C5000:;
  c->lr=0x801C5004u; f_801BE774(c); // 801C5000
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C5004
  c->lr=0x801C500Cu; f_801DCF14(c); // 801C5008
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C500C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5010
  c->lr=c->r[0]; // 801C5014
  c->r[1]=c->r[1]+0x00000010u; // 801C5018
  return; // 801C501C
}

// fn_801C5020
void f_801C5020(Ctx* __restrict c) {
  trace_call(0x801C5020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5020
  c->r[6]=0u+0x00000000u; // 801C5024
  c->r[0]=0u+0x43300000u; // 801C5028
  c->r[7]=0u+0x00000001u; // 801C502C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C5030
  c->r[5]=0u+0x00000040u; // 801C5034
  {uint32_t ea=c->r[2]+0xFFFFC160u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5038
  c->r[4]=0u+0x0000007Fu; // 801C503C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801C5040
  c->r[0]=0u+0xFC400000u; // 801C5044
  {uint32_t ea=c->r[2]+0xFFFFC148u; c->f[2]=RF64(ea);} // 801C5048
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C504C
  W32(c->r[3]+0x00000004u,c->r[7]); // 801C5050
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C5054
  W32(c->r[3]+0x00000018u,c->r[6]); // 801C5058
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C505C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801C5060
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C5064
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801C5068
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 801C506C
  W8(c->r[3]+0x0000001Du,c->r[4]); // 801C5070
  W8(c->r[3]+0x0000001Eu,c->r[7]); // 801C5074
  W16(c->r[3]+0x00000022u,c->r[6]); // 801C5078
  W16(c->r[3]+0x00000020u,c->r[6]); // 801C507C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C5080
  W32(c->r[3]+0x00000028u,c->r[0]); // 801C5084
  c->r[1]=c->r[1]+0x00000010u; // 801C5088
  return; // 801C508C
}

// fn_801C5090
void f_801C5090(Ctx* __restrict c) {
  trace_call(0x801C5090u);
  c->r[5]=0u+0x00000002u; // 801C5090
  c->r[4]=0u+0x00000040u; // 801C5094
  c->r[0]=0u+0x0000007Fu; // 801C5098
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C509C
  W8(c->r[3]+0x00000008u,c->r[4]); // 801C50A0
  W8(c->r[3]+0x00000009u,c->r[0]); // 801C50A4
  return; // 801C50A8
}

// fn_801C50AC
void f_801C50AC(Ctx* __restrict c) {
  trace_call(0x801C50ACu);
  c->r[4]=0u+0x00000005u; // 801C50AC
  c->r[0]=0u+0x00000000u; // 801C50B0
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C50B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C50B8
  return; // 801C50BC
}

// fn_801C50C0
void f_801C50C0(Ctx* __restrict c) {
  trace_call(0x801C50C0u);
  c->r[4]=0u+0x00000008u; // 801C50C0
  c->r[0]=0u+0x00000000u; // 801C50C4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C50C8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C50CC
  return; // 801C50D0
}

// fn_801C50D4
void f_801C50D4(Ctx* __restrict c) {
  trace_call(0x801C50D4u);
  c->r[4]=0u+0x00000009u; // 801C50D4
  c->r[0]=0u+0x00000000u; // 801C50D8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C50DC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C50E0
  return; // 801C50E4
}

// fn_801C50E8
void f_801C50E8(Ctx* __restrict c) {
  trace_call(0x801C50E8u);
  c->r[4]=0u+0x0000000Au; // 801C50E8
  c->r[0]=0u+0x00000000u; // 801C50EC
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C50F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C50F4
  return; // 801C50F8
}

// fn_801C50FC
void f_801C50FC(Ctx* __restrict c) {
  trace_call(0x801C50FCu);
  c->r[0]=0u+0x00000000u; // 801C50FC
  c->r[4]=0u+0x0000000Cu; // 801C5100
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C5104
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C5108
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C510C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C5110
  return; // 801C5114
}

// fn_801C5118
void f_801C5118(Ctx* __restrict c) {
  trace_call(0x801C5118u);
  c->r[4]=0u+0x00000015u; // 801C5118
  c->r[0]=0u+0x00000000u; // 801C511C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C5120
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C5124
  return; // 801C5128
}

// fn_801C512C
void f_801C512C(Ctx* __restrict c) {
  trace_call(0x801C512Cu);
  c->r[4]=0u+0x00000016u; // 801C512C
  c->r[0]=0u+0x00000001u; // 801C5130
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C5134
  W16(c->r[3]+0x00000008u,c->r[0]); // 801C5138
  return; // 801C513C
}

// fn_801C5140
void f_801C5140(Ctx* __restrict c) {
  trace_call(0x801C5140u);
  c->r[0]=0u+0x00000000u; // 801C5140
  c->r[4]=0u+0x00000018u; // 801C5144
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C5148
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C514C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C5150
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C5154
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C5158
  return; // 801C515C
}

// fn_801C5160
void f_801C5160(Ctx* __restrict c) {
  trace_call(0x801C5160u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5160
  c->r[0]=c->lr; // 801C5164
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C5168
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801C516C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801C5170
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801C5174
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801C5178
  c->r[11]=c->r[1]+0x00000080u; // 801C517C
  c->lr=0x801C5184u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C5180
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5184
  c->r[16]=0u+0xFC400000u; // 801C5188
  {uint32_t ea=c->r[2]+0xFFFFC168u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C518C
  c->r[0]=0u+0x43300000u; // 801C5190
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C5194
  c->r[15]=c->r[3]|c->r[3]; // 801C5198
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801C519C
  c->r[31]=R32(c->r[3]+0x00000010u); // 801C51A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C51A4
  c->r[0]=0u+0x00000000u; // 801C51A8
  {uint32_t ea=c->r[2]+0xFFFFC170u; c->f[30]=RF64(ea);} // 801C51AC
  c->r[17]=c->r[16]|c->r[16]; // 801C51B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C51B4
  c->r[0]=0u+0x00000000u; // 801C51B8
  c->r[18]=c->r[16]|c->r[16]; // 801C51BC
  c->r[19]=c->r[16]|c->r[16]; // 801C51C0
  W16(c->r[1]+0x00000030u,c->r[0]); // 801C51C4
  c->r[0]=0u+0x00000000u; // 801C51C8
  c->r[26]=0u+0x00000000u; // 801C51CC
  c->r[27]=0u+0x00000000u; // 801C51D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C51D4
  c->r[0]=0u+0x00000000u; // 801C51D8
  c->r[28]=0u+0x00000000u; // 801C51DC
  c->r[29]=0u+0x00000000u; // 801C51E0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C51E4
  c->r[30]=0u+0x00000000u; // 801C51E8
  c->r[25]=0u+0x00000040u; // 801C51EC
  c->r[24]=0u+0x0000007Fu; // 801C51F0
  c->r[23]=0u+0x00000001u; // 801C51F4
  c->r[21]=0u+0x00000000u; // 801C51F8
  c->r[22]=0u+0x00000000u; // 801C51FC
  c->r[20]=0u+0x00000000u; // 801C5200
  c->r[14]=0u+0x00000000u; // 801C5204
  goto L_801C5490; // 801C5208
L_801C520C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C520C
  cmpu(c,0,c->r[0],0x00000019u); // 801C5210
  if (crb(c,1)) { goto L_801C548C; } // 801C5214
  c->r[3]=0u+0x804B0000u; // 801C5218
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C521C
  c->r[3]=c->r[3]+0xFFFFFF18u; // 801C5220
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C5224
  c->ctr=c->r[3]; // 801C5228
  if (true) { switch (c->ctr) { case 0x801C5230u: goto L_801C5230; case 0x801C5260u: goto L_801C5260; case 0x801C526Cu: goto L_801C526C; case 0x801C5278u: goto L_801C5278; case 0x801C5280u: goto L_801C5280; case 0x801C528Cu: goto L_801C528C; case 0x801C52A0u: goto L_801C52A0; case 0x801C52D8u: goto L_801C52D8; case 0x801C52E4u: goto L_801C52E4; case 0x801C52F0u: goto L_801C52F0; case 0x801C52FCu: goto L_801C52FC; case 0x801C5308u: goto L_801C5308; case 0x801C531Cu: goto L_801C531C; case 0x801C5330u: goto L_801C5330; case 0x801C5344u: goto L_801C5344; case 0x801C5358u: goto L_801C5358; case 0x801C5390u: goto L_801C5390; case 0x801C53C8u: goto L_801C53C8; case 0x801C5400u: goto L_801C5400; case 0x801C5438u: goto L_801C5438; case 0x801C5448u: goto L_801C5448; case 0x801C5454u: goto L_801C5454; case 0x801C5460u: goto L_801C5460; case 0x801C547Cu: goto L_801C547C; case 0x801C548Cu: goto L_801C548C; default: break; } dispatch(c,c->ctr); return; } // 801C522C
L_801C5230:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5230
  c->lr=0x801C5238u; f_801C580C(c); // 801C5234
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5238
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C523C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801C5240
  c->r[25]=R8(c->r[31]+0x0000001Cu); // 801C5244
  c->r[24]=R8(c->r[31]+0x0000001Du); // 801C5248
  c->r[29]=c->r[29]+c->r[0]; // 801C524C
  c->r[22]=R16(c->r[31]+0x00000020u); // 801C5250
  c->r[21]=R16(c->r[31]+0x00000022u); // 801C5254
  c->r[23]=R8(c->r[31]+0x0000001Eu); // 801C5258
  goto L_801C548C; // 801C525C
L_801C5260:;
  c->r[25]=R8(c->r[31]+0x00000008u); // 801C5260
  c->r[24]=R8(c->r[31]+0x00000009u); // 801C5264
  goto L_801C548C; // 801C5268
L_801C526C:;
  c->r[22]=R16(c->r[31]+0x00000008u); // 801C526C
  c->r[21]=R16(c->r[31]+0x0000000Au); // 801C5270
  goto L_801C548C; // 801C5274
L_801C5278:;
  c->r[23]=R8(c->r[31]+0x00000008u); // 801C5278
  goto L_801C548C; // 801C527C
L_801C5280:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C5280
  c->r[30]=c->r[30]+c->r[0]; // 801C5284
  goto L_801C548C; // 801C5288
L_801C528C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C528C
  c->lr=0x801C5294u; f_801C56AC(c); // 801C5290
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5294
  c->r[30]=c->r[30]+c->r[0]; // 801C5298
  goto L_801C548C; // 801C529C
L_801C52A0:;
  c->r[3]=c->r[31]+0x00000008u; // 801C52A0
  c->lr=0x801C52A8u; f_801C573C(c); // 801C52A4
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C52A8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C52AC
  c->r[0]=c->r[0]^0x80000000u; // 801C52B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C52B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C52B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C52BC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C52C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C52C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C52C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C52CC
  c->r[30]=c->r[30]+c->r[0]; // 801C52D0
  goto L_801C548C; // 801C52D4
L_801C52D8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C52D8
  c->r[29]=c->r[29]+c->r[0]; // 801C52DC
  goto L_801C548C; // 801C52E0
L_801C52E4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C52E4
  c->r[28]=c->r[28]+c->r[0]; // 801C52E8
  goto L_801C548C; // 801C52EC
L_801C52F0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C52F0
  c->r[27]=c->r[27]+c->r[0]; // 801C52F4
  goto L_801C548C; // 801C52F8
L_801C52FC:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C52FC
  c->r[26]=c->r[26]+c->r[0]; // 801C5300
  goto L_801C548C; // 801C5304
L_801C5308:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5308
  c->lr=0x801C5310u; f_801C56F4(c); // 801C530C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5310
  c->r[29]=c->r[29]+c->r[0]; // 801C5314
  goto L_801C548C; // 801C5318
L_801C531C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C531C
  c->lr=0x801C5324u; f_801C56F4(c); // 801C5320
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5324
  c->r[28]=c->r[28]+c->r[0]; // 801C5328
  goto L_801C548C; // 801C532C
L_801C5330:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5330
  c->lr=0x801C5338u; f_801C56F4(c); // 801C5334
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5338
  c->r[27]=c->r[27]+c->r[0]; // 801C533C
  goto L_801C548C; // 801C5340
L_801C5344:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5344
  c->lr=0x801C534Cu; f_801C56F4(c); // 801C5348
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C534C
  c->r[26]=c->r[26]+c->r[0]; // 801C5350
  goto L_801C548C; // 801C5354
L_801C5358:;
  c->r[3]=c->r[31]+0x00000008u; // 801C5358
  c->lr=0x801C5360u; f_801C573C(c); // 801C535C
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C5360
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5364
  c->r[0]=c->r[0]^0x80000000u; // 801C5368
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C536C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801C5370
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C5374
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C5378
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C537C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C5380
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5384
  c->r[29]=c->r[29]+c->r[0]; // 801C5388
  goto L_801C548C; // 801C538C
L_801C5390:;
  c->r[3]=c->r[31]+0x00000008u; // 801C5390
  c->lr=0x801C5398u; f_801C573C(c); // 801C5394
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C5398
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C539C
  c->r[0]=c->r[0]^0x80000000u; // 801C53A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C53A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C53A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C53AC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C53B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C53B4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C53B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C53BC
  c->r[28]=c->r[28]+c->r[0]; // 801C53C0
  goto L_801C548C; // 801C53C4
L_801C53C8:;
  c->r[3]=c->r[31]+0x00000008u; // 801C53C8
  c->lr=0x801C53D0u; f_801C573C(c); // 801C53CC
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C53D0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C53D4
  c->r[0]=c->r[0]^0x80000000u; // 801C53D8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C53DC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801C53E0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C53E4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C53E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C53EC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C53F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C53F4
  c->r[27]=c->r[27]+c->r[0]; // 801C53F8
  goto L_801C548C; // 801C53FC
L_801C5400:;
  c->r[3]=c->r[31]+0x00000008u; // 801C5400
  c->lr=0x801C5408u; f_801C573C(c); // 801C5404
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C5408
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C540C
  c->r[0]=c->r[0]^0x80000000u; // 801C5410
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5414
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C5418
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801C541C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C5420
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C5424
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801C5428
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C542C
  c->r[26]=c->r[26]+c->r[0]; // 801C5430
  goto L_801C548C; // 801C5434
L_801C5438:;
  c->r[4]=R32(c->r[15]+0x00000008u); // 801C5438
  c->r[3]=c->r[31]|c->r[31]; // 801C543C
  c->lr=0x801C5444u; f_801C599C(c); // 801C5440
  goto L_801C548C; // 801C5444
L_801C5448:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C5448
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C544C
  goto L_801C548C; // 801C5450
L_801C5454:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801C5454
  W16(c->r[1]+0x00000030u,c->r[0]); // 801C5458
  goto L_801C548C; // 801C545C
L_801C5460:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C5460
  c->r[14]=R32(c->r[31]+0x00000010u); // 801C5464
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C5468
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C546C
  c->r[20]=R32(c->r[31]+0x00000014u); // 801C5470
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C5474
  goto L_801C548C; // 801C5478
L_801C547C:;
  c->r[19]=R32(c->r[31]+0x00000008u); // 801C547C
  c->r[18]=R32(c->r[31]+0x0000000Cu); // 801C5480
  c->r[17]=R32(c->r[31]+0x00000010u); // 801C5484
  c->r[16]=R32(c->r[31]+0x00000014u); // 801C5488
L_801C548C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801C548C
L_801C5490:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C5490
  if (!crb(c,2)) { IRQCHK(c); goto L_801C520C; } // 801C5494
  c->r[3]=sraw(c,c->r[30],16); // 801C5498
  c->lr=0x801C54A0u; f_801C55A8(c); // 801C549C
  c->r[15]=R32(c->r[15]+0x00000008u); // 801C54A0
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 801C54A4
  c->r[4]=c->r[23]|c->r[23]; // 801C54A8
  c->r[3]=c->r[15]|c->r[15]; // 801C54AC
  c->lr=0x801C54B4u; f_801D7150(c); // 801C54B0
  c->f[1]=c->f[30]; // 801C54B4
  c->r[3]=c->r[15]|c->r[15]; // 801C54B8
  c->lr=0x801C54C0u; f_801D7830(c); // 801C54BC
  c->r[3]=c->r[15]|c->r[15]; // 801C54C0
  c->r[4]=c->r[22]|c->r[22]; // 801C54C4
  c->r[5]=c->r[21]|c->r[21]; // 801C54C8
  c->lr=0x801C54D0u; f_801D7568(c); // 801C54CC
  c->r[3]=c->r[15]|c->r[15]; // 801C54D0
  c->r[4]=sraw(c,c->r[29],16); // 801C54D4
  c->lr=0x801C54DCu; f_801DCF2C(c); // 801C54D8
  c->r[3]=c->r[15]|c->r[15]; // 801C54DC
  c->r[4]=sraw(c,c->r[28],16); // 801C54E0
  c->lr=0x801C54E8u; f_801DCF74(c); // 801C54E4
  c->r[3]=c->r[15]|c->r[15]; // 801C54E8
  c->r[4]=sraw(c,c->r[27],16); // 801C54EC
  c->lr=0x801C54F4u; f_801DCFBC(c); // 801C54F0
  c->r[3]=c->r[15]|c->r[15]; // 801C54F4
  c->r[4]=sraw(c,c->r[26],16); // 801C54F8
  c->lr=0x801C5500u; f_801DD004(c); // 801C54FC
  c->r[3]=c->r[15]|c->r[15]; // 801C5500
  c->r[4]=c->r[25]|c->r[25]; // 801C5504
  c->lr=0x801C550Cu; f_801DD034(c); // 801C5508
  c->r[3]=c->r[15]|c->r[15]; // 801C550C
  c->r[4]=c->r[24]|c->r[24]; // 801C5510
  c->lr=0x801C5518u; f_801DD0A0(c); // 801C5514
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C5518
  c->r[3]=c->r[15]|c->r[15]; // 801C551C
  c->r[4]=sraw(c,c->r[0],16); // 801C5520
  c->lr=0x801C5528u; f_801DD10C(c); // 801C5524
  c->r[4]=R16(c->r[1]+0x00000030u); // 801C5528
  c->r[3]=c->r[15]|c->r[15]; // 801C552C
  c->lr=0x801C5534u; f_801D7A98(c); // 801C5530
  c->r[0]=sraw(c,c->r[17],16); // 801C5534
  c->r[3]=c->r[15]|c->r[15]; // 801C5538
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C553C
  c->r[7]=sraw(c,c->r[16],16); // 801C5540
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801C5544
  c->r[4]=0u+0x00000000u; // 801C5548
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801C554C
  c->r[5]=sraw(c,c->r[0],16); // 801C5550
  c->r[0]=R32(c->r[1]+0x00000028u); // 801C5554
  c->r[6]=sraw(c,c->r[0],16); // 801C5558
  c->r[7]=sraw(c,c->r[14],16); // 801C555C
  c->r[8]=sraw(c,c->r[20],16); // 801C5560
  c->r[9]=sraw(c,c->r[19],16); // 801C5564
  c->r[10]=sraw(c,c->r[18],16); // 801C5568
  c->lr=0x801C5570u; f_801DE7C0(c); // 801C556C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801C5570
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801C5574
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801C5578
  c->r[11]=c->r[1]+0x00000080u; // 801C557C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801C5580
  c->lr=0x801C5588u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5584
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C5588
  c->lr=c->r[0]; // 801C558C
  c->r[1]=c->r[1]+0x000000A0u; // 801C5590
  return; // 801C5594
}

// fn_801C5598
void f_801C5598(Ctx* __restrict c) {
  trace_call(0x801C5598u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C5598
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C559C
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C55A0
  return; // 801C55A4
}

// fn_801C55A8
void f_801C55A8(Ctx* __restrict c) {
  trace_call(0x801C55A8u);
  cmps(c,0,(int32_t)c->r[3],0); // 801C55A8
  c->r[7]=0u+0x804B0000u; // 801C55AC
  c->r[7]=c->r[7]+0xFFFFFF80u; // 801C55B0
  if (!crb(c,1)) { goto L_801C5644; } // 801C55B4
  c->r[5]=0u+0x1B4F0000u; // 801C55B8
  c->r[4]=0u+0x51EC0000u; // 801C55BC
  c->r[0]=c->r[5]+0xFFFF81B5u; // 801C55C0
  c->r[6]=c->r[7]+0x00000000u; // 801C55C4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801C55C8
  c->r[8]=c->r[4]+0xFFFF851Fu; // 801C55CC
  c->r[5]=c->r[7]+0x00000190u; // 801C55D0
  c->r[4]=c->r[7]+0x000001C0u; // 801C55D4
  c->r[9]=sraw(c,c->r[0],7); // 801C55D8
  c->r[0]=sraw(c,c->r[0],7); // 801C55DC
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801C55E0
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 801C55E4
  c->r[0]=c->r[0]+c->r[7]; // 801C55E8
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)1200); // 801C55EC
  c->r[0]=c->r[9]+c->r[10]; // 801C55F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C55F4
  c->r[7]=c->r[3]-c->r[7]; // 801C55F8
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801C55FC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 801C5600
  c->r[5]=sraw(c,c->r[0],5); // 801C5604
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[3])>>32); // 801C5608
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801C560C
  c->r[7]=c->r[5]+c->r[7]; // 801C5610
  c->r[5]=sraw(c,c->r[0],5); // 801C5614
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801C5618
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C561C
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801C5620
  c->r[0]=c->r[5]+c->r[7]; // 801C5624
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C5628
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C562C
  c->r[3]=c->r[3]-c->r[0]; // 801C5630
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801C5634
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5638
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C563C
  return; // 801C5640
L_801C5644:;
  if (!crb(c,0)) { goto L_801C56A4; } // 801C5644
  c->r[4]=0u+0x51EC0000u; // 801C5648
  c->r[0]=c->r[4]+0xFFFF851Fu; // 801C564C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801C5650
  c->r[5]=sraw(c,c->r[0],5); // 801C5654
  c->r[0]=sraw(c,c->r[0],5); // 801C5658
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801C565C
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 801C5660
  c->r[0]=c->r[0]+c->r[4]; // 801C5664
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C5668
  c->r[4]=c->r[5]+c->r[6]; // 801C566C
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 801C5670
  if (crb(c,2)) { goto L_801C5680; } // 801C5674
  c->r[3]=c->r[3]+0x00000064u; // 801C5678
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C567C
L_801C5680:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C5680
  c->r[4]=c->r[7]+0x000001F0u; // 801C5684
  c->r[5]=0u-c->r[0]; // 801C5688
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801C568C
  c->r[3]=c->r[7]+0x00000000u; // 801C5690
  {uint32_t ea=c->r[4]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5694
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5698
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C569C
  return; // 801C56A0
L_801C56A4:;
  {uint32_t ea=c->r[2]+0xFFFFC178u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C56A4
  return; // 801C56A8
}

// fn_801C56AC
void f_801C56AC(Ctx* __restrict c) {
  trace_call(0x801C56ACu);
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C56AC
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801C56B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C56B4
  if (crb(c,2)) return; // 801C56B8
  c->r[4]=R32(c->r[3]+0x00000008u); // 801C56BC
  c->r[0]=c->r[0]+c->r[4]; // 801C56C0
  cmps(c,0,(int32_t)c->r[4],0); // 801C56C4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C56C8
  if (!crb(c,1)) { goto L_801C56E0; } // 801C56CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C56D0
  if (!crb(c,1)) return; // 801C56D4
  W32(c->r[3]+0x00000010u,c->r[5]); // 801C56D8
  return; // 801C56DC
L_801C56E0:;
  if (!crb(c,0)) return; // 801C56E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C56E4
  if (!crb(c,0)) return; // 801C56E8
  W32(c->r[3]+0x00000010u,c->r[5]); // 801C56EC
  return; // 801C56F0
}

// fn_801C56F4
void f_801C56F4(Ctx* __restrict c) {
  trace_call(0x801C56F4u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C56F4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801C56F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C56FC
  if (crb(c,2)) return; // 801C5700
  c->r[4]=R32(c->r[3]+0x00000008u); // 801C5704
  c->r[0]=c->r[0]+c->r[4]; // 801C5708
  cmps(c,0,(int32_t)c->r[4],0); // 801C570C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C5710
  if (!crb(c,1)) { goto L_801C5728; } // 801C5714
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C5718
  if (!crb(c,1)) return; // 801C571C
  W32(c->r[3]+0x00000010u,c->r[5]); // 801C5720
  return; // 801C5724
L_801C5728:;
  if (!crb(c,0)) return; // 801C5728
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C572C
  if (!crb(c,0)) return; // 801C5730
  W32(c->r[3]+0x00000010u,c->r[5]); // 801C5734
  return; // 801C5738
}

// fn_801C573C
void f_801C573C(Ctx* __restrict c) {
  trace_call(0x801C573Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C573C
  c->r[0]=c->lr; // 801C5740
  {uint32_t ea=c->r[2]+0xFFFFC180u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5744
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5748
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C574C
  c->r[31]=c->r[3]|c->r[3]; // 801C5750
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5754
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5758
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C575C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5760
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801C5764
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5768
  if (!crb(c,2)) { goto L_801C57CC; } // 801C576C
  c->lr=0x801C5774u; f_801E7834(c); // 801C5770
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C5774
  c->r[6]=0u+0x43300000u; // 801C5778
  c->r[4]=R32(c->r[31]+0x00000004u); // 801C577C
  c->r[5]=c->r[0]+c->r[3]; // 801C5780
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C5784
  c->r[0]=divwu(c->r[5],c->r[4]); // 801C5788
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C578C
  W32(c->r[1]+0x00000008u,c->r[6]); // 801C5790
  {uint32_t ea=c->r[2]+0xFFFFC188u; c->f[3]=RF64(ea);} // 801C5794
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C5798
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C579C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801C57A0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C57A4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801C57A8
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C57AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 801C57B0
  c->r[4]=c->r[5]-c->r[0]; // 801C57B4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 801C57B8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C57BC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801C57C0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57C4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801C57C8
L_801C57CC:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C57CC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C57D0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57D4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801C57D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C57DC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801C57E0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C57E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C57E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C57EC
  c->lr=c->r[0]; // 801C57F0
  c->r[1]=c->r[1]+0x00000020u; // 801C57F4
  return; // 801C57F8
}

// fn_801C57FC
void f_801C57FC(Ctx* __restrict c) {
  trace_call(0x801C57FCu);
  {uint32_t ea=c->r[13]+0xFFFF9D84u; WF32(ea,c->f[1]);} // 801C57FC
  return; // 801C5800
}

// fn_801C5804
void f_801C5804(Ctx* __restrict c) {
  trace_call(0x801C5804u);
  {uint32_t ea=c->r[13]+0xFFFF9D80u; WF32(ea,c->f[1]);} // 801C5804
  return; // 801C5808
}

// fn_801C580C
void f_801C580C(Ctx* __restrict c) {
  trace_call(0x801C580Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C580C
  c->r[0]=c->lr; // 801C5810
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5814
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5818
  c->r[31]=c->r[3]|c->r[3]; // 801C581C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5820
  c->r[30]=0u+0x804B0000u; // 801C5824
  c->r[30]=c->r[30]+0x00000370u; // 801C5828
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C582C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5830
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C5834
  cmps(c,0,(int32_t)c->r[0],0); // 801C5838
  if (crb(c,2)) { goto L_801C597C; } // 801C583C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5840
  {uint32_t ea=c->r[2]+0xFFFFC190u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5844
  fcmp(c,0,c->f[2],c->f[0]); // 801C5848
  if (!crb(c,1)) { goto L_801C586C; } // 801C584C
  {uint32_t ea=c->r[2]+0xFFFFC198u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5850
  {uint32_t ea=c->r[2]+0xFFFFC194u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5854
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C5858
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C585C
  c->lr=0x801C5864u; f_801E7834(c); // 801C5860
  c->r[29]=c->r[3]|c->r[3]; // 801C5864
  goto L_801C5894; // 801C5868
L_801C586C:;
  if (!crb(c,0)) { goto L_801C588C; } // 801C586C
  {uint32_t ea=c->r[2]+0xFFFFC198u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5870
  {uint32_t ea=c->r[2]+0xFFFFC194u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5874
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801C5878
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C587C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801C5880
  c->lr=0x801C5888u; f_801E7834(c); // 801C5884
  goto L_801C5890; // 801C5888
L_801C588C:;
  c->r[3]=0u+0x00000000u; // 801C588C
L_801C5890:;
  c->r[29]=c->r[3]|c->r[3]; // 801C5890
L_801C5894:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5894
  {uint32_t ea=c->r[2]+0xFFFFC190u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5898
  fcmp(c,0,c->f[2],c->f[0]); // 801C589C
  if (!crb(c,1)) { goto L_801C58C0; } // 801C58A0
  {uint32_t ea=c->r[2]+0xFFFFC198u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C58A4
  {uint32_t ea=c->r[2]+0xFFFFC194u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C58A8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C58AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C58B0
  c->lr=0x801C58B8u; f_801E7834(c); // 801C58B4
  c->r[28]=c->r[3]|c->r[3]; // 801C58B8
  goto L_801C58E8; // 801C58BC
L_801C58C0:;
  if (!crb(c,0)) { goto L_801C58E0; } // 801C58C0
  {uint32_t ea=c->r[2]+0xFFFFC198u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C58C4
  {uint32_t ea=c->r[2]+0xFFFFC194u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C58C8
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801C58CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C58D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801C58D4
  c->lr=0x801C58DCu; f_801E7834(c); // 801C58D8
  goto L_801C58E4; // 801C58DC
L_801C58E0:;
  c->r[3]=0u+0x00000000u; // 801C58E0
L_801C58E4:;
  c->r[28]=c->r[3]|c->r[3]; // 801C58E4
L_801C58E8:;
  c->r[0]=0u+0x00000000u; // 801C58E8
  W32(c->r[31]+0x00000018u,c->r[0]); // 801C58EC
  c->lr=0x801C58F4u; f_801DB84C(c); // 801C58F0
  cmpu(c,0,c->r[3],0x00000003u); // 801C58F4
  if (!crb(c,2)) { goto L_801C590C; } // 801C58F8
  c->r[3]=c->r[30]+0x000002D0u; // 801C58FC
  c->r[0]=R8(c->r[3]+c->r[29]); // 801C5900
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 801C5904
  goto L_801C5918; // 801C5908
L_801C590C:;
  c->r[3]=c->r[30]+0x00000000u; // 801C590C
  c->r[0]=R8(c->r[3]+c->r[29]); // 801C5910
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 801C5914
L_801C5918:;
  c->r[3]=c->r[30]+0x00000168u; // 801C5918
  c->r[5]=c->r[30]+0x00000438u; // 801C591C
  c->r[0]=R8(c->r[3]+c->r[29]); // 801C5920
  c->r[4]=c->r[30]+0x000005A0u; // 801C5924
  c->r[3]=c->r[30]+0x00000708u; // 801C5928
  {uint32_t ea=c->r[31]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C592C
  W8(c->r[31]+0x0000001Du,c->r[0]); // 801C5930
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5934
  c->r[0]=R8(c->r[5]+c->r[29]); // 801C5938
  {uint32_t ea=c->r[2]+0xFFFFC19Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C593C
  W16(c->r[31]+0x00000020u,c->r[0]); // 801C5940
  c->r[0]=R8(c->r[4]+c->r[29]); // 801C5944
  W16(c->r[31]+0x00000022u,c->r[0]); // 801C5948
  c->r[0]=R8(c->r[3]+c->r[28]); // 801C594C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801C5950
  {uint32_t ea=c->r[13]+0xFFFF9D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5954
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 801C5958
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C595C
  {uint32_t ea=c->r[13]+0xFFFF9D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5960
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C5964
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C5968
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C596C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801C5970
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801C5974
  W32(c->r[31]+0x00000028u,c->r[0]); // 801C5978
L_801C597C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C597C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5980
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5984
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5988
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C598C
  c->lr=c->r[0]; // 801C5990
  c->r[1]=c->r[1]+0x00000020u; // 801C5994
  return; // 801C5998
}

// fn_801C599C
void f_801C599C(Ctx* __restrict c) {
  trace_call(0x801C599Cu);
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C599C
  cmps(c,0,(int32_t)c->r[0],0); // 801C59A0
  if (crb(c,2)) return; // 801C59A4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C59A8
  cmps(c,0,(int32_t)c->r[0],0); // 801C59AC
  if (crb(c,2)) { goto L_801C59D8; } // 801C59B0
  c->r[6]=0u+0x00000000u; // 801C59B4
  c->r[5]=0u+0x00000001u; // 801C59B8
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C59BC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C59C0
  W16(c->r[4]+0x000000E2u,c->r[5]); // 801C59C4
  c->r[0]=c->r[0]|0x00080000u; // 801C59C8
  W16(c->r[4]+0x000000E4u,c->r[6]); // 801C59CC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801C59D0
  goto L_801C59E4; // 801C59D4
L_801C59D8:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C59D8
  c->r[0]=c->r[0]|0x00100000u; // 801C59DC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801C59E0
L_801C59E4:;
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 801C59E4
  c->r[7]=0u+0x804B0000u; // 801C59E8
  c->r[7]=c->r[7]+0x00000BE8u; // 801C59EC
  c->r[0]=0u+0x00000000u; // 801C59F0
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801C59F4
  c->r[5]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801C59F8
  c->r[6]=R16(c->r[7]+c->r[5]); // 801C59FC
  c->r[5]=c->r[8]+0x00000001u; // 801C5A00
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801C5A04
  W16(c->r[4]+0x000000E6u,c->r[6]); // 801C5A08
  c->r[5]=R16(c->r[7]+c->r[5]); // 801C5A0C
  W16(c->r[4]+0x000000E8u,c->r[5]); // 801C5A10
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C5A14
  return; // 801C5A18
}

// PSMTXIdentity
void f_801C5A1C(Ctx* __restrict c) {
  trace_call(0x801C5A1Cu);
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5A1C
  {uint32_t ea=c->r[2]+0xFFFFC1A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5A20
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801C5A24
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801C5A28
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801C5A2C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801C5A30
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801C5A34
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 801C5A38
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801C5A3C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 801C5A40
  return; // 801C5A44
}

// PSMTXCopy
void f_801C5A48(Ctx* __restrict c) {
  trace_call(0x801C5A48u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C5A48
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801C5A4C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 801C5A50
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 801C5A54
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 801C5A58
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 801C5A5C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 801C5A60
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,3,ea,0,0);} // 801C5A64
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 801C5A68
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,4,ea,0,0);} // 801C5A6C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 801C5A70
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,5,ea,0,0);} // 801C5A74
  return; // 801C5A78
}

// PSMTXConcat
void f_801C5A7C(Ctx* __restrict c) {
  trace_call(0x801C5A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A7C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C5A80
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[14]);} // 801C5A84
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 801C5A88
  c->r[6]=0u+0x806D0000u; // 801C5A8C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 801C5A90
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[15]);} // 801C5A94
  c->r[6]=c->r[6]+0x000029D0u; // 801C5A98
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801C5A9C
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,8,ea,0,0);} // 801C5AA0
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 801C5AA4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 801C5AA8
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 801C5AAC
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,31,ea,0,0);} // 801C5AB0
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[14]=t0; c->ps1[14]=t1;} // 801C5AB4
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,0,0);} // 801C5AB8
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[15]=t0; c->ps1[15]=t1;} // 801C5ABC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 801C5AC0
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801C5AC4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 801C5AC8
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[14])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 801C5ACC
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,10,ea,0,0);} // 801C5AD0
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 801C5AD4
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,11,ea,0,0);} // 801C5AD8
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[15])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 801C5ADC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 801C5AE0
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 801C5AE4
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801C5AE8
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 801C5AEC
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[14])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 801C5AF0
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[15])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 801C5AF4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,12,ea,0,0);} // 801C5AF8
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 801C5AFC
  {double t0=S(std::fma(c->f[31],c->ps1[1],c->f[13])), t1=S(std::fma(c->ps1[31],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 801C5B00
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 801C5B04
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,14,ea,0,0);} // 801C5B08
  {double t0=S(std::fma(c->f[31],c->ps1[3],c->f[15])), t1=S(std::fma(c->ps1[31],c->ps1[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 801C5B0C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 801C5B10
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801C5B14
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[0])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801C5B18
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801C5B1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[14]=RF64(ea);} // 801C5B20
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,15,ea,0,0);} // 801C5B24
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[0])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801C5B28
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 801C5B2C
  {double t0=S(std::fma(c->f[31],c->ps1[5],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 801C5B30
  {uint32_t ea=c->r[1]+0x00000010u; c->f[15]=RF64(ea);} // 801C5B34
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,0,ea,0,0);} // 801C5B38
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801C5B3C
  c->r[1]=c->r[1]+0x00000040u; // 801C5B40
  return; // 801C5B44
}

// PSMTXTranspose
void f_801C5B48(Ctx* __restrict c) {
  trace_call(0x801C5B48u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801C5B48
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 801C5B4C
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5B50
  {double t0=S(c->f[1]), t1=S(c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 801C5B54
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 801C5B58
  {double t0=S(c->ps1[1]), t1=S(c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5B5C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,1,0);} // 801C5B60
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801C5B64
  {double t0=S(c->f[3]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801C5B68
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 801C5B6C
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801C5B70
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5B74
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,5,ea,0,0);} // 801C5B78
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5B7C
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C5B80
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,2,ea,0,0);} // 801C5B84
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,4,ea,0,0);} // 801C5B88
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,5,ea,0,0);} // 801C5B8C
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[3]);} // 801C5B90
  return; // 801C5B94
}

// PSMTXInverse
void f_801C5B98(Ctx* __restrict c) {
  trace_call(0x801C5B98u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 801C5B98
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 801C5B9C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,1,0);} // 801C5BA0
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5BA4
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,0,0);} // 801C5BA8
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,1,0);} // 801C5BAC
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5BB0
  {uint32_t ea=c->r[3]+0x00000024u; psq_load(c,5,ea,0,0);} // 801C5BB4
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 801C5BB8
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 801C5BBC
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 801C5BC0
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 801C5BC4
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 801C5BC8
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 801C5BCC
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 801C5BD0
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 801C5BD4
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 801C5BD8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 801C5BDC
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5BE0
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 801C5BE4
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5BE8
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 801C5BEC
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801C5BF0
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 801C5BF4
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801C5BF8
  fcmp(c,0,c->f[7],c->f[6]); // 801C5BFC
  if (!crb(c,2)) { goto L_801C5C0C; } // 801C5C00
  c->r[3]=0u+0x00000000u; // 801C5C04
  return; // 801C5C08
L_801C5C0C:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 801C5C0C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5C10
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5C14
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 801C5C18
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5C1C
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 801C5C20
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5C24
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 801C5C28
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5C2C
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 801C5C30
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5C34
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 801C5C38
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 801C5C3C
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 801C5C40
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801C5C44
  {double t0=S(c->f[13]*c->f[1]), t1=S(c->ps1[13]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5C48
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,4,ea,0,0);} // 801C5C4C
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 801C5C50
  {double t0=S(std::fma(c->f[12],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[12],c->ps1[2],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 801C5C54
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,10,ea,1,0);} // 801C5C58
  {double t0=S(-std::fma(c->f[11],c->f[3],c->f[6])), t1=S(-std::fma(c->ps1[11],c->ps1[3],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 801C5C5C
  {uint32_t ea=c->r[4]+0x00000024u; psq_store(c,9,ea,1,0);} // 801C5C60
  {double t0=S(c->f[10]*c->f[1]), t1=S(c->ps1[10]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5C64
  {double t0=S(c->f[11]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5C68
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,1,0);} // 801C5C6C
  {double t0=S(c->ps1[11]), t1=S(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 801C5C70
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 801C5C74
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[7])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801C5C78
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,4,ea,0,0);} // 801C5C7C
  {double t0=S(-std::fma(c->f[8],c->f[3],c->f[7])), t1=S(-std::fma(c->ps1[8],c->ps1[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801C5C80
  c->r[3]=0u+0x00000001u; // 801C5C84
  {uint32_t ea=c->r[4]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 801C5C88
  return; // 801C5C8C
}

// PSMTXRotRad
void f_801C5C90(Ctx* __restrict c) {
  trace_call(0x801C5C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5C90
  c->r[0]=c->lr; // 801C5C94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C5C98
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801C5C9C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801C5CA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801C5CA4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801C5CA8
  c->f[30]=c->f[1]; // 801C5CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5CB0
  c->r[31]=c->r[4]|c->r[4]; // 801C5CB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C5CB8
  c->r[30]=c->r[3]|c->r[3]; // 801C5CBC
  c->lr=0x801C5CC4u; f_801F721C(c); // 801C5CC0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 801C5CC4
  c->f[1]=c->f[30]; // 801C5CC8
  c->lr=0x801C5CD0u; f_801F6E10(c); // 801C5CCC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801C5CD0
  c->r[3]=c->r[30]|c->r[30]; // 801C5CD4
  c->f[1]=c->f[31]; // 801C5CD8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801C5CDC
  c->lr=0x801C5CE4u; f_801C5D0C(c); // 801C5CE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801C5CE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801C5CE8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 801C5CEC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801C5CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5CF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C5CF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C5CFC
  c->lr=c->r[0]; // 801C5D00
  c->r[1]=c->r[1]+0x00000030u; // 801C5D04
  return; // 801C5D08
}

// PSMTXRotTrig
void f_801C5D0C(Ctx* __restrict c) {
  trace_call(0x801C5D0Cu);
  c->f[5]=c->ps1[5]=S(c->f[1]); // 801C5D0C
  c->r[0]=c->r[4]|0x00000020u; // 801C5D10
  c->f[4]=c->ps1[4]=S(c->f[2]); // 801C5D14
  cmpu(c,0,c->r[0],0x00000078u); // 801C5D18
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5D1C
  {double t0=-c->f[5], t1=-c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 801C5D20
  {uint32_t ea=c->r[2]+0xFFFFC1A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5D24
  if (crb(c,2)) { goto L_801C5D40; } // 801C5D28
  cmpu(c,0,c->r[0],0x00000079u); // 801C5D2C
  if (crb(c,2)) { goto L_801C5D68; } // 801C5D30
  cmpu(c,0,c->r[0],0x0000007Au); // 801C5D34
  if (crb(c,2)) { goto L_801C5D94; } // 801C5D38
  return; // 801C5D3C
L_801C5D40:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 801C5D40
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,0);} // 801C5D44
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801C5D48
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 801C5D4C
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 801C5D50
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,0,ea,0,0);} // 801C5D54
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 801C5D58
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,3,ea,0,0);} // 801C5D5C
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,1,ea,0,0);} // 801C5D60
  return; // 801C5D64
L_801C5D68:;
  {double t0=S(c->f[4]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 801C5D68
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801C5D6C
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801C5D70
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 801C5D74
  {double t0=S(c->f[5]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801C5D78
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 801C5D7C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,3,ea,0,0);} // 801C5D80
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 801C5D84
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801C5D88
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 801C5D8C
  return; // 801C5D90
L_801C5D94:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 801C5D94
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 801C5D98
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801C5D9C
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801C5DA0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801C5DA4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801C5DA8
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 801C5DAC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801C5DB0
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 801C5DB4
  return; // 801C5DB8
}

// PSMTXTrans
void f_801C5DBC(Ctx* __restrict c) {
  trace_call(0x801C5DBCu);
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5DBC
  {uint32_t ea=c->r[2]+0xFFFFC1A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C5DC0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C5DC4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C5DC8
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 801C5DCC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801C5DD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801C5DD4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 801C5DD8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801C5DDC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[4]);} // 801C5DE0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 801C5DE4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 801C5DE8
  return; // 801C5DEC
}

// PSMTXTransApply
void f_801C5DF0(Ctx* __restrict c) {
  trace_call(0x801C5DF0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 801C5DF0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801C5DF4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 801C5DF8
  c->f[2]=c->ps1[2]=S(c->f[2]); // 801C5DFC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,0,0);} // 801C5E00
  c->f[3]=c->ps1[3]=S(c->f[3]); // 801C5E04
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,8,ea,0,0);} // 801C5E08
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 801C5E0C
  {double t0=S(c->f[5]), t1=S(c->f[1]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5E10
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 801C5E14
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 801C5E18
  {double t0=S(c->f[7]), t1=S(c->f[2]+c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5E1C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,9,ea,0,0);} // 801C5E20
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,6,ea,0,0);} // 801C5E24
  {double t0=S(c->f[8]), t1=S(c->f[3]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 801C5E28
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,7,ea,0,0);} // 801C5E2C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,9,ea,0,0);} // 801C5E30
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,0,0);} // 801C5E34
  return; // 801C5E38
}

// PSMTXScale
void f_801C5E3C(Ctx* __restrict c) {
  trace_call(0x801C5E3Cu);
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5E3C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801C5E40
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 801C5E44
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 801C5E48
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801C5E4C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 801C5E50
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 801C5E54
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 801C5E58
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C5E5C
  return; // 801C5E60
}

// PSMTXQuat
void f_801C5E64(Ctx* __restrict c) {
  trace_call(0x801C5E64u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 801C5E64
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,5,ea,0,0);} // 801C5E68
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5E6C
  {uint32_t ea=c->r[2]+0xFFFFC1A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5E70
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[9]=t0; c->ps1[9]=t1;} // 801C5E74
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[1]); // 801C5E78
  {double t0=S(std::fma(c->f[5],c->f[5],c->f[6])), t1=S(std::fma(c->ps1[5],c->ps1[5],c->ps1[6])); c->f[8]=t0; c->ps1[8]=t1;} // 801C5E7C
  {double t0=S(c->f[5]*c->ps1[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[10]=t0; c->ps1[10]=t1;} // 801C5E80
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[1]); // 801C5E84
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,1,0);} // 801C5E88
  {double t0=S(c->f[8]+c->ps1[8]), t1=S(c->ps1[8]); c->f[3]=t0; c->ps1[3]=t1;} // 801C5E8C
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5E90
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 801C5E94
  {double t0=S(std::fma(c->f[4],c->f[9],c->f[10])), t1=S(std::fma(c->ps1[4],c->ps1[9],c->ps1[10])); c->f[12]=t0; c->ps1[12]=t1;} // 801C5E98
  c->f[13]=c->ps1[13]=fres(c->f[3]); // 801C5E9C
  {double t0=S(-std::fma(c->f[3],c->f[13],-c->f[2])), t1=S(-std::fma(c->ps1[3],c->ps1[13],-c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 801C5EA0
  {double t0=S(c->f[9]*c->ps1[5]), t1=S(c->ps1[9]*c->ps1[5]); c->f[11]=t0; c->ps1[11]=t1;} // 801C5EA4
  {double t0=S(std::fma(c->f[4],c->f[9],-c->f[10])), t1=S(std::fma(c->ps1[4],c->ps1[9],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 801C5EA8
  {double t0=S(c->f[13]*c->f[3]), t1=S(c->ps1[13]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 801C5EAC
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[11])), t1=S(std::fma(c->ps1[4],c->f[5],c->ps1[11])); c->f[9]=t0; c->ps1[9]=t1;} // 801C5EB0
  {double t0=S(c->f[8]), t1=S(c->f[7]+c->ps1[6]); c->f[8]=t0; c->ps1[8]=t1;} // 801C5EB4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 801C5EB8
  {double t0=S(-std::fma(c->f[11],c->f[2],-c->f[9])), t1=S(-std::fma(c->ps1[11],c->ps1[2],-c->ps1[9])); c->f[11]=t0; c->ps1[11]=t1;} // 801C5EBC
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801C5EC0
  {double t0=S(c->f[9]*c->f[3]), t1=S(c->ps1[9]*c->ps1[3]); c->f[9]=t0; c->ps1[9]=t1;} // 801C5EC4
  {double t0=S(c->f[11]*c->f[3]), t1=S(c->ps1[11]*c->ps1[3]); c->f[11]=t0; c->ps1[11]=t1;} // 801C5EC8
  {double t0=S(-std::fma(c->f[8],c->f[3],-c->f[1])), t1=S(-std::fma(c->ps1[8],c->ps1[3],-c->ps1[1])); c->f[8]=t0; c->ps1[8]=t1;} // 801C5ECC
  {double t0=S(c->f[12]*c->f[3]), t1=S(c->ps1[12]*c->ps1[3]); c->f[12]=t0; c->ps1[12]=t1;} // 801C5ED0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,9,ea,1,0);} // 801C5ED4
  {double t0=S(c->f[10]*c->f[3]), t1=S(c->ps1[10]*c->ps1[3]); c->f[10]=t0; c->ps1[10]=t1;} // 801C5ED8
  {double t0=S(c->ps1[11]), t1=S(c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 801C5EDC
  {double t0=S(c->f[12]), t1=S(c->f[8]); c->f[5]=t0; c->ps1[5]=t1;} // 801C5EE0
  {double t0=S(c->ps1[8]), t1=S(c->f[10]); c->f[4]=t0; c->ps1[4]=t1;} // 801C5EE4
  {double t0=S(c->f[11]), t1=S(c->ps1[9]); c->f[13]=t0; c->ps1[13]=t1;} // 801C5EE8
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,7,ea,0,0);} // 801C5EEC
  {double t0=S(-std::fma(c->f[6],c->f[3],-c->f[1])), t1=S(-std::fma(c->ps1[6],c->ps1[3],-c->ps1[1])); c->f[6]=t0; c->ps1[6]=t1;} // 801C5EF0
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,5,ea,0,0);} // 801C5EF4
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,6,ea,1,0);} // 801C5EF8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 801C5EFC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,13,ea,0,0);} // 801C5F00
  return; // 801C5F04
}

// C_MTXLightPerspective
void f_801C5F08(Ctx* __restrict c) {
  trace_call(0x801C5F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5F08
  c->r[0]=c->lr; // 801C5F0C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C5F10
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801C5F14
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801C5F18
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801C5F1C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801C5F20
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801C5F24
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801C5F28
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 801C5F2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 801C5F30
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[27]);} // 801C5F34
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,27,ea,0,0);} // 801C5F38
  c->f[27]=c->f[2]; // 801C5F3C
  {uint32_t ea=c->r[2]+0xFFFFC1A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C5F40
  c->f[28]=c->f[3]; // 801C5F44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5F48
  c->f[29]=c->f[4]; // 801C5F4C
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[1]); // 801C5F50
  {uint32_t ea=c->r[2]+0xFFFFC1B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5F54
  c->f[30]=c->f[5]; // 801C5F58
  c->f[31]=c->f[6]; // 801C5F5C
  c->r[31]=c->r[3]|c->r[3]; // 801C5F60
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C5F64
  c->lr=0x801C5F6Cu; f_801F72F4(c); // 801C5F68
  c->f[5]=c->ps1[5]=S(c->f[1]); // 801C5F6C
  {uint32_t ea=c->r[2]+0xFFFFC1A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5F70
  {uint32_t ea=c->r[2]+0xFFFFC1A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C5F74
  c->f[1]=-c->f[31]; // 801C5F78
  {uint32_t ea=c->r[2]+0xFFFFC1ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5F7C
  c->f[2]=-c->f[30]; // 801C5F80
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[5]); // 801C5F84
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 801C5F88
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801C5F8C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 801C5F90
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 801C5F94
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[3]);} // 801C5F98
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[27]); // 801C5F9C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 801C5FA0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[3]);} // 801C5FA4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 801C5FA8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 801C5FAC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 801C5FB0
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 801C5FB4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[29]); // 801C5FB8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801C5FBC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 801C5FC0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801C5FC4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801C5FC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801C5FCC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801C5FD0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801C5FD4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801C5FD8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 801C5FDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 801C5FE0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,27,ea,0,0);} // 801C5FE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=RF64(ea);} // 801C5FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5FEC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C5FF0
  c->lr=c->r[0]; // 801C5FF4
  c->r[1]=c->r[1]+0x00000060u; // 801C5FF8
  return; // 801C5FFC
}

// PSMTXMultVec
void f_801C6000(Ctx* __restrict c) {
  trace_call(0x801C6000u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C6000
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 801C6004
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 801C6008
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801C600C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 801C6010
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 801C6014
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,8,ea,0,0);} // 801C6018
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801C601C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,9,ea,0,0);} // 801C6020
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->ps1[0]); c->f[10]=t0; c->ps1[10]=t1;} // 801C6024
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,1,0);} // 801C6028
  {double t0=S(std::fma(c->f[9],c->f[1],c->f[10])), t1=S(std::fma(c->ps1[9],c->ps1[1],c->ps1[10])); c->f[11]=t0; c->ps1[11]=t1;} // 801C602C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,0,0);} // 801C6030
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[12]); c->f[12]=t0; c->ps1[12]=t1;} // 801C6034
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,3,ea,0,0);} // 801C6038
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801C603C
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,1,0);} // 801C6040
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 801C6044
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 801C6048
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,1,0);} // 801C604C
  return; // 801C6050
}

// PSMTXMultVecSR
void f_801C6054(Ctx* __restrict c) {
  trace_call(0x801C6054u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C6054
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 801C6058
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 801C605C
  {double t0=S(c->f[0]*c->f[6]), t1=S(c->ps1[0]*c->ps1[6]); c->f[8]=t0; c->ps1[8]=t1;} // 801C6060
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 801C6064
  {double t0=S(c->f[2]*c->f[6]), t1=S(c->ps1[2]*c->ps1[6]); c->f[10]=t0; c->ps1[10]=t1;} // 801C6068
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,1,0);} // 801C606C
  {double t0=S(c->f[4]*c->f[6]), t1=S(c->ps1[4]*c->ps1[6]); c->f[12]=t0; c->ps1[12]=t1;} // 801C6070
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 801C6074
  {double t0=S(c->f[8]+c->ps1[8]), t1=S(c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 801C6078
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 801C607C
  {double t0=S(c->f[10]+c->ps1[10]), t1=S(c->ps1[10]); c->f[10]=t0; c->ps1[10]=t1;} // 801C6080
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 801C6084
  {double t0=S(c->f[12]+c->ps1[12]), t1=S(c->ps1[12]); c->f[12]=t0; c->ps1[12]=t1;} // 801C6088
  {double t0=S(std::fma(c->f[1],c->f[7],c->f[8])), t1=S(std::fma(c->ps1[1],c->ps1[7],c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 801C608C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,9,ea,1,0);} // 801C6090
  {double t0=S(std::fma(c->f[3],c->f[7],c->f[10])), t1=S(std::fma(c->ps1[3],c->ps1[7],c->ps1[10])); c->f[11]=t0; c->ps1[11]=t1;} // 801C6094
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,11,ea,1,0);} // 801C6098
  {double t0=S(std::fma(c->f[5],c->f[7],c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[7],c->ps1[12])); c->f[13]=t0; c->ps1[13]=t1;} // 801C609C
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,1,0);} // 801C60A0
  return; // 801C60A4
}

// C_MTXFrustum
void f_801C60A8(Ctx* __restrict c) {
  trace_call(0x801C60A8u);
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 801C60A8
  {uint32_t ea=c->r[2]+0xFFFFC1C0u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C60AC
  {uint32_t ea=c->r[2]+0xFFFFC1B8u; c->f[11]=c->ps1[11]=RF32(ea);} // 801C60B0
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[2]); // 801C60B4
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[5]); // 801C60B8
  {uint32_t ea=c->r[2]+0xFFFFC1BCu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C60BC
  c->f[12]=c->ps1[12]=S(c->f[11]/c->f[0]); // 801C60C0
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C60C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 801C60C8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801C60CC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[9]);} // 801C60D0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[9]);} // 801C60D4
  c->f[8]=c->ps1[8]=S(c->f[11]/c->f[8]); // 801C60D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[9]);} // 801C60DC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[9]);} // 801C60E0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[9]);} // 801C60E4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[9]);} // 801C60E8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[9]);} // 801C60EC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 801C60F0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[9]);} // 801C60F4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C60F8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[5]); // 801C60FC
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 801C6100
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[3]); // 801C6104
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[8]); // 801C6108
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[12]); // 801C610C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801C6110
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[5]); // 801C6114
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801C6118
  c->f[3]=c->ps1[3]=S(c->f[11]/c->f[7]); // 801C611C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 801C6120
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801C6124
  c->f[1]=-c->f[5]; // 801C6128
  c->f[0]=-c->f[6]; // 801C612C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801C6130
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C6134
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801C6138
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C613C
  return; // 801C6140
}

// C_MTXPerspective
void f_801C6144(Ctx* __restrict c) {
  trace_call(0x801C6144u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6144
  c->r[0]=c->lr; // 801C6148
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C614C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801C6150
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801C6154
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801C6158
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801C615C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801C6160
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801C6164
  c->f[29]=c->f[2]; // 801C6168
  {uint32_t ea=c->r[2]+0xFFFFC1C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C616C
  c->f[30]=c->f[3]; // 801C6170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6174
  c->f[31]=c->f[4]; // 801C6178
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801C617C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6180
  c->r[31]=c->r[3]|c->r[3]; // 801C6184
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C6188
  c->lr=0x801C6190u; f_801F72F4(c); // 801C618C
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801C6190
  {uint32_t ea=c->r[2]+0xFFFFC1C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6194
  {uint32_t ea=c->r[2]+0xFFFFC1B8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C6198
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 801C619C
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C61A0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[30]); // 801C61A4
  c->f[6]=c->ps1[6]=S(c->f[5]/c->f[4]); // 801C61A8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 801C61AC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 801C61B0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[3]);} // 801C61B4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[3]);} // 801C61B8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 801C61BC
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[2]); // 801C61C0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[3]);} // 801C61C4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[6]);} // 801C61C8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[3]);} // 801C61CC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 801C61D0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 801C61D4
  c->f[4]=c->ps1[4]=S(c->f[6]/c->f[29]); // 801C61D8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[3]);} // 801C61DC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[3]);} // 801C61E0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 801C61E4
  c->f[0]=-c->f[1]; // 801C61E8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 801C61EC
  c->f[2]=-c->f[30]; // 801C61F0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C61F4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 801C61F8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C61FC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 801C6200
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801C6204
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801C6208
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801C620C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801C6210
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801C6214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801C6218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C621C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C6220
  c->lr=c->r[0]; // 801C6224
  c->r[1]=c->r[1]+0x00000040u; // 801C6228
  return; // 801C622C
}

// C_MTXOrtho
void f_801C6230(Ctx* __restrict c) {
  trace_call(0x801C6230u);
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 801C6230
  {uint32_t ea=c->r[2]+0xFFFFC1C0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C6234
  {uint32_t ea=c->r[2]+0xFFFFC1B8u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C6238
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 801C623C
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[5]); // 801C6240
  {uint32_t ea=c->r[2]+0xFFFFC1BCu; c->f[9]=c->ps1[9]=RF32(ea);} // 801C6244
  c->f[12]=c->ps1[12]=S(c->f[10]/c->f[11]); // 801C6248
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C624C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 801C6250
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[8]);} // 801C6254
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[8]);} // 801C6258
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[8]);} // 801C625C
  c->f[11]=c->ps1[11]=S(c->f[10]/c->f[7]); // 801C6260
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[8]);} // 801C6264
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[8]);} // 801C6268
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[8]);} // 801C626C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 801C6270
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[8]);} // 801C6274
  c->f[7]=c->ps1[7]=S(c->f[10]/c->f[0]); // 801C6278
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[10]);} // 801C627C
  c->f[0]=-c->f[6]; // 801C6280
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801C6284
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801C6288
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[12]); // 801C628C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 801C6290
  c->f[2]=-c->f[3]; // 801C6294
  c->f[3]=c->ps1[3]=S(c->f[9]*c->f[11]); // 801C6298
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 801C629C
  c->f[1]=-c->f[1]; // 801C62A0
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[2]); // 801C62A4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C62A8
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[1]); // 801C62AC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 801C62B0
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[7]); // 801C62B4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C62B8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C62BC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801C62C0
  return; // 801C62C4
}

// PSVECAdd
void f_801C62C8(Ctx* __restrict c) {
  trace_call(0x801C62C8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 801C62C8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 801C62CC
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[6]=t0; c->ps1[6]=t1;} // 801C62D0
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,0,0);} // 801C62D4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 801C62D8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,5,ea,1,0);} // 801C62DC
  {double t0=S(c->f[3]+c->f[5]), t1=S(c->ps1[3]+c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 801C62E0
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,7,ea,1,0);} // 801C62E4
  return; // 801C62E8
}

// fn_801C62EC
void f_801C62EC(Ctx* __restrict c) {
  trace_call(0x801C62ECu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C62EC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 801C62F0
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801C62F4
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801C62F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801C62FC
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 801C6300
  return; // 801C6304
}

