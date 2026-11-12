#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// PSVECNormalize
void f_801C6308(Ctx* __restrict c) {
  trace_call(0x801C6308u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 801C6308
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 801C630C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 801C6310
  {uint32_t ea=c->r[2]+0xFFFFC1D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6314
  {uint32_t ea=c->r[2]+0xFFFFC1D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6318
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 801C631C
  {double t0=S(c->f[4]+c->ps1[5]), t1=S(c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801C6320
  c->f[5]=frsqrte(c->f[4]); // 801C6324
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[5]); // 801C6328
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801C632C
  c->f[6]=c->ps1[6]=S(-std::fma(c->f[6],c->f[4],-c->f[1])); // 801C6330
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[0]); // 801C6334
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 801C6338
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 801C633C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 801C6340
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,3,ea,1,0);} // 801C6344
  return; // 801C6348
}

// fn_801C634C
void f_801C634C(Ctx* __restrict c) {
  trace_call(0x801C634Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C634C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6350
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801C6354
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801C6358
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801C635C
  return; // 801C6360
}

// PSVECMag
void f_801C6364(Ctx* __restrict c) {
  trace_call(0x801C6364u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C6364
  {uint32_t ea=c->r[2]+0xFFFFC1D0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C6368
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801C636C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6370
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[4]); // 801C6374
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801C6378
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801C637C
  fcmp(c,0,c->f[1],c->f[2]); // 801C6380
  if (crb(c,2)) return; // 801C6384
  c->f[0]=frsqrte(c->f[1]); // 801C6388
  {uint32_t ea=c->r[2]+0xFFFFC1D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C638C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 801C6390
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 801C6394
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[3])); // 801C6398
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C639C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C63A0
  return; // 801C63A4
}

// fn_801C63A8
void f_801C63A8(Ctx* __restrict c) {
  trace_call(0x801C63A8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C63A8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 801C63AC
  {double t0=-c->f[0], t1=-c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 801C63B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 801C63B4
  {double t0=-c->f[1], t1=-c->ps1[1]; c->f[6]=t0; c->ps1[6]=t1;} // 801C63B8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 801C63BC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801C63C0
  {double t0=S(c->f[5]), t1=S(c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 801C63C4
  {double t0=S(c->f[6]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 801C63C8
  {double t0=S(c->f[5]*c->f[2]), t1=S(c->ps1[5]*c->f[2]); c->f[5]=t0; c->ps1[5]=t1;} // 801C63CC
  {double t0=S(c->f[4]*c->ps1[2]), t1=S(c->ps1[4]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 801C63D0
  {double t0=S(std::fma(c->f[4],c->f[3],c->f[7])), t1=S(std::fma(c->ps1[4],c->f[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 801C63D4
  {double t0=S(c->f[1]*c->ps1[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801C63D8
  {double t0=S(std::fma(c->f[1],c->f[3],c->f[5])), t1=S(std::fma(c->ps1[1],c->f[3],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 801C63DC
  {double t0=S(c->ps1[7]), t1=S(c->f[7]); c->f[7]=t0; c->ps1[7]=t1;} // 801C63E0
  {double t0=S(std::fma(c->f[0],c->ps1[3],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[3],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 801C63E4
  {double t0=S(c->ps1[5]), t1=S(c->f[5]); c->f[5]=t0; c->ps1[5]=t1;} // 801C63E8
  {double t0=S(std::fma(c->f[6],c->ps1[3],c->f[8])), t1=S(std::fma(c->ps1[6],c->ps1[3],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 801C63EC
  {double t0=S(c->f[7]+c->f[2]), t1=S(c->ps1[7]+c->ps1[2]); c->f[7]=t0; c->ps1[7]=t1;} // 801C63F0
  {double t0=S(c->f[5]-c->f[8]), t1=S(c->ps1[5]-c->ps1[8]); c->f[5]=t0; c->ps1[5]=t1;} // 801C63F4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,7,ea,0,0);} // 801C63F8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,5,ea,0,0);} // 801C63FC
  return; // 801C6400
}

// __DVDFSInit
void f_801C6404(Ctx* __restrict c) {
  trace_call(0x801C6404u);
  c->r[3]=0u+0x80000000u; // 801C6404
  W32(c->r[13]+0xFFFF9DA4u,c->r[3]); // 801C6408
  c->r[4]=R32(c->r[3]+0x00000038u); // 801C640C
  cmps(c,0,(int32_t)c->r[4],0); // 801C6410
  W32(c->r[13]+0xFFFF9DA0u,c->r[4]); // 801C6414
  if (crb(c,2)) return; // 801C6418
  c->r[3]=R32(c->r[4]+0x00000008u); // 801C641C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6420
  W32(c->r[13]+0xFFFF9D98u,c->r[3]); // 801C6424
  c->r[0]=c->r[4]+c->r[0]; // 801C6428
  W32(c->r[13]+0xFFFF9D9Cu,c->r[0]); // 801C642C
  return; // 801C6430
}

// DVDConvertPathToEntrynum
void f_801C6434(Ctx* __restrict c) {
  trace_call(0x801C6434u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6434
  c->r[0]=c->lr; // 801C6438
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C643C
  c->r[11]=c->r[1]+0x00000030u; // 801C6440
  c->lr=0x801C6448u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6444
  c->r[26]=c->r[3]|c->r[3]; // 801C6448
  c->r[31]=0u+0x804C0000u; // 801C644C
  c->r[29]=R32(c->r[13]+0xFFFF9D88u); // 801C6450
  c->r[28]=c->r[26]|c->r[26]; // 801C6454
  c->r[31]=c->r[31]+0xFFFF8668u; // 801C6458
  c->r[30]=0u+0x804B0000u; // 801C645C
L_801C6460:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801C6460
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C6464
  if (!crb(c,2)) { goto L_801C6474; } // 801C6468
  c->r[3]=c->r[29]|c->r[29]; // 801C646C
  goto L_801C6724; // 801C6470
L_801C6474:;
  cmps(c,0,(int32_t)c->r[0],47); // 801C6474
  if (!crb(c,2)) { goto L_801C6488; } // 801C6478
  c->r[29]=0u+0x00000000u; // 801C647C
  c->r[26]=c->r[26]+0x00000001u; // 801C6480
  IRQCHK(c); goto L_801C6460; // 801C6484
L_801C6488:;
  cmps(c,0,(int32_t)c->r[0],46); // 801C6488
  if (!crb(c,2)) { goto L_801C6504; } // 801C648C
  c->r[0]=R8(c->r[26]+0x00000001u); // 801C6490
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6494
  cmps(c,0,(int32_t)c->r[0],46); // 801C6498
  if (!crb(c,2)) { goto L_801C64E4; } // 801C649C
  c->r[0]=R8(c->r[26]+0x00000002u); // 801C64A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C64A4
  cmps(c,0,(int32_t)c->r[0],47); // 801C64A8
  if (!crb(c,2)) { goto L_801C64C8; } // 801C64AC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C64B0
  c->r[3]=R32(c->r[13]+0xFFFF9DA0u); // 801C64B4
  c->r[26]=c->r[26]+0x00000003u; // 801C64B8
  c->r[3]=c->r[3]+c->r[0]; // 801C64BC
  c->r[29]=R32(c->r[3]+0x00000004u); // 801C64C0
  IRQCHK(c); goto L_801C6460; // 801C64C4
L_801C64C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C64C8
  if (!crb(c,2)) { goto L_801C6504; } // 801C64CC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C64D0
  c->r[3]=R32(c->r[13]+0xFFFF9DA0u); // 801C64D4
  c->r[3]=c->r[3]+c->r[0]; // 801C64D8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C64DC
  goto L_801C6724; // 801C64E0
L_801C64E4:;
  cmps(c,0,(int32_t)c->r[0],47); // 801C64E4
  if (!crb(c,2)) { goto L_801C64F4; } // 801C64E8
  c->r[26]=c->r[26]+0x00000002u; // 801C64EC
  IRQCHK(c); goto L_801C6460; // 801C64F0
L_801C64F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C64F4
  if (!crb(c,2)) { goto L_801C6504; } // 801C64F8
  c->r[3]=c->r[29]|c->r[29]; // 801C64FC
  goto L_801C6724; // 801C6500
L_801C6504:;
  c->r[0]=R32(c->r[13]+0xFFFF8458u); // 801C6504
  cmps(c,0,(int32_t)c->r[0],0); // 801C6508
  if (!crb(c,2)) { goto L_801C65B4; } // 801C650C
  c->r[24]=c->r[26]|c->r[26]; // 801C6510
  c->r[5]=0u+0x00000000u; // 801C6514
  c->r[4]=0u+0x00000000u; // 801C6518
  goto L_801C6564; // 801C651C
L_801C6520:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801C6520
  cmps(c,0,(int32_t)c->r[0],46); // 801C6524
  if (!crb(c,2)) { goto L_801C6554; } // 801C6528
  c->r[0]=c->r[24]-c->r[26]; // 801C652C
  cmps(c,0,(int32_t)c->r[0],8); // 801C6530
  if (crb(c,1)) { goto L_801C6540; } // 801C6534
  cmps(c,0,(int32_t)c->r[5],1); // 801C6538
  if (!crb(c,2)) { goto L_801C6548; } // 801C653C
L_801C6540:;
  c->r[4]=0u+0x00000001u; // 801C6540
  goto L_801C6578; // 801C6544
L_801C6548:;
  c->r[27]=c->r[24]+0x00000001u; // 801C6548
  c->r[5]=0u+0x00000001u; // 801C654C
  goto L_801C6560; // 801C6550
L_801C6554:;
  cmps(c,0,(int32_t)c->r[0],32); // 801C6554
  if (!crb(c,2)) { goto L_801C6560; } // 801C6558
  c->r[4]=0u+0x00000001u; // 801C655C
L_801C6560:;
  c->r[24]=c->r[24]+0x00000001u; // 801C6560
L_801C6564:;
  c->r[3]=R8(c->r[24]+0x00000000u); // 801C6564
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801C6568
  if (crb(c,2)) { goto L_801C6578; } // 801C656C
  cmps(c,0,(int32_t)c->r[0],47); // 801C6570
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6520; } // 801C6574
L_801C6578:;
  cmps(c,0,(int32_t)c->r[5],1); // 801C6578
  if (!crb(c,2)) { goto L_801C6590; } // 801C657C
  c->r[0]=c->r[24]-c->r[27]; // 801C6580
  cmps(c,0,(int32_t)c->r[0],3); // 801C6584
  if (!crb(c,1)) { goto L_801C6590; } // 801C6588
  c->r[4]=0u+0x00000001u; // 801C658C
L_801C6590:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C6590
  if (crb(c,2)) { goto L_801C65D4; } // 801C6594
  c->r[6]=c->r[28]|c->r[28]; // 801C6598
  c->r[5]=c->r[30]+0x00000C48u; // 801C659C
  c->r[3]=c->r[13]+0xFFFF8460u; // 801C65A0
  c->r[4]=0u+0x000001BBu; // 801C65A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C65A8
  c->lr=0x801C65B0u; f_801BB48C(c); // 801C65AC
  goto L_801C65D4; // 801C65B0
L_801C65B4:;
  c->r[24]=c->r[26]|c->r[26]; // 801C65B4
  goto L_801C65C0; // 801C65B8
L_801C65BC:;
  c->r[24]=c->r[24]+0x00000001u; // 801C65BC
L_801C65C0:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801C65C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C65C4
  if (crb(c,2)) { goto L_801C65D4; } // 801C65C8
  cmps(c,0,(int32_t)c->r[0],47); // 801C65CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C65BC; } // 801C65D0
L_801C65D4:;
  c->r[3]=R8(c->r[24]+0x00000000u); // 801C65D4
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C65D8
  c->r[8]=R32(c->r[13]+0xFFFF9DA0u); // 801C65DC
  c->r[9]=c->r[24]-c->r[26]; // 801C65E0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801C65E4
  c->r[4]=R32(c->r[13]+0xFFFF9D9Cu); // 801C65E8
  c->r[5]=0u-c->r[6]; // 801C65EC
  c->r[3]=c->r[8]+c->r[0]; // 801C65F0
  c->r[12]=R32(c->r[31]+0x00000038u); // 801C65F4
  c->r[0]=c->r[5]|c->r[6]; // 801C65F8
  c->r[5]=R32(c->r[3]+0x00000008u); // 801C65FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C6600
  c->r[3]=c->r[29]+0x00000001u; // 801C6604
  goto L_801C66F8; // 801C6608
L_801C660C:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C660C
  {uint32_t ea=c->r[6]+c->r[8]; c->r[10]=R32(ea); c->r[6]=ea;} // 801C6610
  c->r[7]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[7]); // 801C6614
  if (!crb(c,2)) { goto L_801C6624; } // 801C6618
  cmps(c,0,(int32_t)c->r[0],1); // 801C661C
  if (crb(c,2)) { goto L_801C66E4; } // 801C6620
L_801C6624:;
  c->r[10]=rotl(c->r[10],0)&0x00FFFFFFu; // 801C6624
  c->r[29]=c->r[26]|c->r[26]; // 801C6628
  c->r[25]=c->r[4]+c->r[10]; // 801C662C
  goto L_801C66AC; // 801C6630
L_801C6634:;
  c->r[11]=R8(c->r[25]+0x00000000u); // 801C6634
  c->r[10]=0u+0x00000000u; // 801C6638
  c->r[25]=c->r[25]+0x00000001u; // 801C663C
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[24]); // 801C6640
  if (crb(c,0)) { goto L_801C6650; } // 801C6644
  cmps(c,0,(int32_t)c->r[24],256); // 801C6648
  if (crb(c,0)) { goto L_801C6654; } // 801C664C
L_801C6650:;
  c->r[10]=0u+0x00000001u; // 801C6650
L_801C6654:;
  cmps(c,0,(int32_t)c->r[10],0); // 801C6654
  if (crb(c,2)) { goto L_801C6660; } // 801C6658
  goto L_801C6668; // 801C665C
L_801C6660:;
  c->r[10]=R32(c->r[12]+0x00000010u); // 801C6660
  c->r[24]=R8(c->r[10]+c->r[24]); // 801C6664
L_801C6668:;
  c->r[11]=R8(c->r[29]+0x00000000u); // 801C6668
  c->r[10]=0u+0x00000000u; // 801C666C
  c->r[29]=c->r[29]+0x00000001u; // 801C6670
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 801C6674
  if (crb(c,0)) { goto L_801C6684; } // 801C6678
  cmps(c,0,(int32_t)c->r[11],256); // 801C667C
  if (crb(c,0)) { goto L_801C6688; } // 801C6680
L_801C6684:;
  c->r[10]=0u+0x00000001u; // 801C6684
L_801C6688:;
  cmps(c,0,(int32_t)c->r[10],0); // 801C6688
  if (crb(c,2)) { goto L_801C6694; } // 801C668C
  goto L_801C669C; // 801C6690
L_801C6694:;
  c->r[10]=R32(c->r[12]+0x00000010u); // 801C6694
  c->r[11]=R8(c->r[10]+c->r[11]); // 801C6698
L_801C669C:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[24]); // 801C669C
  if (crb(c,2)) { goto L_801C66AC; } // 801C66A0
  c->r[10]=0u+0x00000000u; // 801C66A4
  goto L_801C66DC; // 801C66A8
L_801C66AC:;
  c->r[10]=R8(c->r[25]+0x00000000u); // 801C66AC
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 801C66B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6634; } // 801C66B4
  c->r[10]=R8(c->r[29]+0x00000000u); // 801C66B8
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801C66BC
  cmps(c,0,(int32_t)c->r[10],47); // 801C66C0
  if (crb(c,2)) { goto L_801C66D0; } // 801C66C4
  cmps(c,0,(int32_t)c->r[10],0); // 801C66C8
  if (!crb(c,2)) { goto L_801C66D8; } // 801C66CC
L_801C66D0:;
  c->r[10]=0u+0x00000001u; // 801C66D0
  goto L_801C66DC; // 801C66D4
L_801C66D8:;
  c->r[10]=0u+0x00000000u; // 801C66D8
L_801C66DC:;
  cmps(c,0,(int32_t)c->r[10],1); // 801C66DC
  if (crb(c,2)) { goto L_801C6708; } // 801C66E0
L_801C66E4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C66E4
  if (crb(c,2)) { goto L_801C66F4; } // 801C66E8
  c->r[3]=R32(c->r[6]+0x00000008u); // 801C66EC
  goto L_801C66F8; // 801C66F0
L_801C66F4:;
  c->r[3]=c->r[3]+0x00000001u; // 801C66F4
L_801C66F8:;
  cmpu(c,0,c->r[3],c->r[5]); // 801C66F8
  if (crb(c,0)) { IRQCHK(c); goto L_801C660C; } // 801C66FC
  c->r[3]=0u+0xFFFFFFFFu; // 801C6700
  goto L_801C6724; // 801C6704
L_801C6708:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C6708
  if (!crb(c,2)) { goto L_801C6714; } // 801C670C
  goto L_801C6724; // 801C6710
L_801C6714:;
  c->r[4]=c->r[9]+c->r[26]; // 801C6714
  c->r[29]=c->r[3]|c->r[3]; // 801C6718
  c->r[26]=c->r[4]+0x00000001u; // 801C671C
  IRQCHK(c); goto L_801C6460; // 801C6720
L_801C6724:;
  c->r[11]=c->r[1]+0x00000030u; // 801C6724
  c->lr=0x801C672Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6728
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C672C
  c->lr=c->r[0]; // 801C6730
  c->r[1]=c->r[1]+0x00000030u; // 801C6734
  return; // 801C6738
}

// DVDFastOpen
void f_801C673C(Ctx* __restrict c) {
  trace_call(0x801C673Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 801C673C
  if (crb(c,0)) { goto L_801C6764; } // 801C6740
  c->r[0]=R32(c->r[13]+0xFFFF9D98u); // 801C6744
  cmpu(c,0,c->r[3],c->r[0]); // 801C6748
  if (!crb(c,0)) { goto L_801C6764; } // 801C674C
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6750
  c->r[3]=R32(c->r[13]+0xFFFF9DA0u); // 801C6754
  c->r[0]=R32(c->r[3]+c->r[7]); // 801C6758
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C675C
  if (crb(c,2)) { goto L_801C676C; } // 801C6760
L_801C6764:;
  c->r[3]=0u+0x00000000u; // 801C6764
  return; // 801C6768
L_801C676C:;
  c->r[3]=c->r[3]+c->r[7]; // 801C676C
  c->r[5]=R32(c->r[13]+0xFFFF9DE4u); // 801C6770
  c->r[6]=R32(c->r[3]+0x00000004u); // 801C6774
  c->r[0]=0u+0x00000000u; // 801C6778
  c->r[3]=0u+0x00000001u; // 801C677C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 801C6780
  W32(c->r[4]+0x00000030u,c->r[5]); // 801C6784
  c->r[5]=R32(c->r[13]+0xFFFF9DA0u); // 801C6788
  c->r[5]=c->r[5]+c->r[7]; // 801C678C
  c->r[5]=R32(c->r[5]+0x00000008u); // 801C6790
  W32(c->r[4]+0x00000034u,c->r[5]); // 801C6794
  W32(c->r[4]+0x00000038u,c->r[0]); // 801C6798
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C679C
  return; // 801C67A0
}

// DVDOpen
void f_801C67A4(Ctx* __restrict c) {
  trace_call(0x801C67A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C67A4
  c->r[0]=c->lr; // 801C67A8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C67AC
  c->r[11]=c->r[1]+0x000000A0u; // 801C67B0
  c->lr=0x801C67B8u; f_801E795C(c); // 801C67B4
  c->r[28]=c->r[3]|c->r[3]; // 801C67B8
  c->r[27]=c->r[4]|c->r[4]; // 801C67BC
  c->lr=0x801C67C4u; f_801C6434(c); // 801C67C0
  cmps(c,0,(int32_t)c->r[3],0); // 801C67C4
  if (!crb(c,0)) { goto L_801C69E8; } // 801C67C8
  c->r[29]=R32(c->r[13]+0xFFFF9D88u); // 801C67CC
  cmps(c,0,(int32_t)c->r[29],0); // 801C67D0
  if (!crb(c,2)) { goto L_801C67E0; } // 801C67D4
  c->r[4]=0u+0x00000000u; // 801C67D8
  goto L_801C696C; // 801C67DC
L_801C67E0:;
  c->r[8]=R32(c->r[13]+0xFFFF9DA0u); // 801C67E0
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C67E4
  c->r[7]=R32(c->r[13]+0xFFFF9D9Cu); // 801C67E8
  c->r[6]=c->r[8]+0x00000004u; // 801C67EC
  c->r[3]=R32(c->r[6]+c->r[0]); // 801C67F0
  c->r[0]=R32(c->r[8]+c->r[0]); // 801C67F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C67F8
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C67FC
  c->r[30]=c->r[7]+c->r[0]; // 801C6800
  if (!crb(c,2)) { goto L_801C6810; } // 801C6804
  c->r[4]=0u+0x00000000u; // 801C6808
  goto L_801C6910; // 801C680C
L_801C6810:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6810
  c->r[3]=R32(c->r[6]+c->r[0]); // 801C6814
  c->r[0]=R32(c->r[8]+c->r[0]); // 801C6818
  cmps(c,0,(int32_t)c->r[3],0); // 801C681C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C6820
  c->r[31]=c->r[7]+c->r[0]; // 801C6824
  if (!crb(c,2)) { goto L_801C6834; } // 801C6828
  c->r[4]=0u+0x00000000u; // 801C682C
  goto L_801C68B4; // 801C6830
L_801C6834:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6834
  c->r[4]=c->r[1]+0x00000008u; // 801C6838
  c->r[5]=0u+0x00000080u; // 801C683C
  c->r[0]=R32(c->r[8]+c->r[3]); // 801C6840
  c->r[3]=R32(c->r[6]+c->r[3]); // 801C6844
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C6848
  c->r[27]=c->r[7]+c->r[0]; // 801C684C
  c->lr=0x801C6854u; f_801C6A74(c); // 801C6850
  cmpu(c,0,c->r[3],0x00000080u); // 801C6854
  c->r[4]=c->r[3]|c->r[3]; // 801C6858
  if (!crb(c,2)) { goto L_801C6864; } // 801C685C
  goto L_801C68B4; // 801C6860
L_801C6864:;
  c->r[4]=c->r[3]+0x00000001u; // 801C6864
  c->r[5]=c->r[1]+0x00000008u; // 801C6868
  c->r[0]=0u+0x0000002Fu; // 801C686C
  W8(c->r[5]+c->r[3],c->r[0]); // 801C6870
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 801C6874
  c->r[3]=c->r[6]|c->r[6]; // 801C6878
  c->r[5]=c->r[5]+c->r[4]; // 801C687C
  goto L_801C6898; // 801C6880
L_801C6884:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C6884
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C6888
  c->r[27]=c->r[27]+0x00000001u; // 801C688C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801C6890
  c->r[5]=c->r[5]+0x00000001u; // 801C6894
L_801C6898:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C6898
  if (crb(c,2)) { goto L_801C68AC; } // 801C689C
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C68A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C68A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6884; } // 801C68A8
L_801C68AC:;
  c->r[0]=c->r[6]-c->r[3]; // 801C68AC
  c->r[4]=c->r[4]+c->r[0]; // 801C68B0
L_801C68B4:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C68B4
  if (!crb(c,2)) { goto L_801C68C0; } // 801C68B8
  goto L_801C6910; // 801C68BC
L_801C68C0:;
  c->r[5]=c->r[4]+0x00000001u; // 801C68C0
  c->r[3]=c->r[1]+0x00000008u; // 801C68C4
  c->r[0]=0u+0x0000002Fu; // 801C68C8
  W8(c->r[3]+c->r[4],c->r[0]); // 801C68CC
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801C68D0
  c->r[4]=c->r[6]|c->r[6]; // 801C68D4
  c->r[3]=c->r[3]+c->r[5]; // 801C68D8
  goto L_801C68F4; // 801C68DC
L_801C68E0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C68E0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C68E4
  c->r[31]=c->r[31]+0x00000001u; // 801C68E8
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C68EC
  c->r[3]=c->r[3]+0x00000001u; // 801C68F0
L_801C68F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C68F4
  if (crb(c,2)) { goto L_801C6908; } // 801C68F8
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C68FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C6900
  if (!crb(c,2)) { IRQCHK(c); goto L_801C68E0; } // 801C6904
L_801C6908:;
  c->r[0]=c->r[6]-c->r[4]; // 801C6908
  c->r[4]=c->r[5]+c->r[0]; // 801C690C
L_801C6910:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C6910
  if (!crb(c,2)) { goto L_801C691C; } // 801C6914
  goto L_801C696C; // 801C6918
L_801C691C:;
  c->r[5]=c->r[4]+0x00000001u; // 801C691C
  c->r[3]=c->r[1]+0x00000008u; // 801C6920
  c->r[0]=0u+0x0000002Fu; // 801C6924
  W8(c->r[3]+c->r[4],c->r[0]); // 801C6928
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801C692C
  c->r[4]=c->r[6]|c->r[6]; // 801C6930
  c->r[3]=c->r[3]+c->r[5]; // 801C6934
  goto L_801C6950; // 801C6938
L_801C693C:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C693C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C6940
  c->r[30]=c->r[30]+0x00000001u; // 801C6944
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C6948
  c->r[3]=c->r[3]+0x00000001u; // 801C694C
L_801C6950:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C6950
  if (crb(c,2)) { goto L_801C6964; } // 801C6954
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C6958
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C695C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C693C; } // 801C6960
L_801C6964:;
  c->r[0]=c->r[6]-c->r[4]; // 801C6964
  c->r[4]=c->r[5]+c->r[0]; // 801C6968
L_801C696C:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C696C
  if (!crb(c,2)) { goto L_801C6980; } // 801C6970
  c->r[0]=0u+0x00000000u; // 801C6974
  W8(c->r[1]+0x00000087u,c->r[0]); // 801C6978
  goto L_801C69C8; // 801C697C
L_801C6980:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C6980
  c->r[3]=R32(c->r[13]+0xFFFF9DA0u); // 801C6984
  c->r[0]=R32(c->r[3]+c->r[0]); // 801C6988
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C698C
  if (crb(c,2)) { goto L_801C69BC; } // 801C6990
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C6994
  if (!crb(c,2)) { goto L_801C69AC; } // 801C6998
  c->r[3]=c->r[1]+0x00000008u; // 801C699C
  c->r[0]=0u+0x00000000u; // 801C69A0
  W8(c->r[3]+c->r[4],c->r[0]); // 801C69A4
  goto L_801C69C8; // 801C69A8
L_801C69AC:;
  c->r[3]=c->r[1]+0x00000008u; // 801C69AC
  c->r[0]=0u+0x0000002Fu; // 801C69B0
  W8(c->r[3]+c->r[4],c->r[0]); // 801C69B4
  c->r[4]=c->r[4]+0x00000001u; // 801C69B8
L_801C69BC:;
  c->r[3]=c->r[1]+0x00000008u; // 801C69BC
  c->r[0]=0u+0x00000000u; // 801C69C0
  W8(c->r[3]+c->r[4],c->r[0]); // 801C69C4
L_801C69C8:;
  c->r[3]=0u+0x804B0000u; // 801C69C8
  c->r[4]=c->r[28]|c->r[28]; // 801C69CC
  c->r[3]=c->r[3]+0x00000D10u; // 801C69D0
  c->r[5]=c->r[1]+0x00000008u; // 801C69D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C69D8
  c->lr=0x801C69E0u; f_801BB3FC(c); // 801C69DC
  c->r[3]=0u+0x00000000u; // 801C69E0
  goto L_801C6A38; // 801C69E4
L_801C69E8:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C69E8
  c->r[3]=R32(c->r[13]+0xFFFF9DA0u); // 801C69EC
  c->r[0]=R32(c->r[3]+c->r[6]); // 801C69F0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C69F4
  if (crb(c,2)) { goto L_801C6A04; } // 801C69F8
  c->r[3]=0u+0x00000000u; // 801C69FC
  goto L_801C6A38; // 801C6A00
L_801C6A04:;
  c->r[3]=c->r[3]+c->r[6]; // 801C6A04
  c->r[4]=R32(c->r[13]+0xFFFF9DE4u); // 801C6A08
  c->r[5]=R32(c->r[3]+0x00000004u); // 801C6A0C
  c->r[0]=0u+0x00000000u; // 801C6A10
  c->r[3]=0u+0x00000001u; // 801C6A14
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]>>((c->r[4])&31)); // 801C6A18
  W32(c->r[27]+0x00000030u,c->r[4]); // 801C6A1C
  c->r[4]=R32(c->r[13]+0xFFFF9DA0u); // 801C6A20
  c->r[4]=c->r[4]+c->r[6]; // 801C6A24
  c->r[4]=R32(c->r[4]+0x00000008u); // 801C6A28
  W32(c->r[27]+0x00000034u,c->r[4]); // 801C6A2C
  W32(c->r[27]+0x00000038u,c->r[0]); // 801C6A30
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 801C6A34
L_801C6A38:;
  c->r[11]=c->r[1]+0x000000A0u; // 801C6A38
  c->lr=0x801C6A40u; f_801E79A8(c); // 801C6A3C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C6A40
  c->lr=c->r[0]; // 801C6A44
  c->r[1]=c->r[1]+0x000000A0u; // 801C6A48
  return; // 801C6A4C
}

// fn_801C6A50
void f_801C6A50(Ctx* __restrict c) {
  trace_call(0x801C6A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6A50
  c->r[0]=c->lr; // 801C6A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6A58
  c->lr=0x801C6A60u; f_801CAF60(c); // 801C6A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6A60
  c->r[3]=0u+0x00000001u; // 801C6A64
  c->lr=c->r[0]; // 801C6A68
  c->r[1]=c->r[1]+0x00000010u; // 801C6A6C
  return; // 801C6A70
}

// entryToPath
void f_801C6A74(Ctx* __restrict c) {
  trace_call(0x801C6A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6A74
  c->r[0]=c->lr; // 801C6A78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6A7C
  c->r[11]=c->r[1]+0x00000020u; // 801C6A80
  c->lr=0x801C6A88u; f_801E795C(c); // 801C6A84
  cmps(c,0,(int32_t)c->r[3],0); // 801C6A88
  c->r[28]=c->r[4]|c->r[4]; // 801C6A8C
  c->r[29]=c->r[5]|c->r[5]; // 801C6A90
  if (!crb(c,2)) { goto L_801C6AA0; } // 801C6A94
  c->r[3]=0u+0x00000000u; // 801C6A98
  goto L_801C6C1C; // 801C6A9C
L_801C6AA0:;
  c->r[8]=R32(c->r[13]+0xFFFF9DA0u); // 801C6AA0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6AA4
  c->r[7]=R32(c->r[13]+0xFFFF9D9Cu); // 801C6AA8
  c->r[6]=c->r[8]+0x00000004u; // 801C6AAC
  c->r[3]=R32(c->r[6]+c->r[0]); // 801C6AB0
  c->r[0]=R32(c->r[8]+c->r[0]); // 801C6AB4
  cmps(c,0,(int32_t)c->r[3],0); // 801C6AB8
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C6ABC
  c->r[30]=c->r[7]+c->r[0]; // 801C6AC0
  if (!crb(c,2)) { goto L_801C6AD0; } // 801C6AC4
  c->r[4]=0u+0x00000000u; // 801C6AC8
  goto L_801C6BC0; // 801C6ACC
L_801C6AD0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6AD0
  c->r[3]=R32(c->r[6]+c->r[0]); // 801C6AD4
  c->r[0]=R32(c->r[8]+c->r[0]); // 801C6AD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C6ADC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C6AE0
  c->r[31]=c->r[7]+c->r[0]; // 801C6AE4
  if (!crb(c,2)) { goto L_801C6AF4; } // 801C6AE8
  c->r[4]=0u+0x00000000u; // 801C6AEC
  goto L_801C6B68; // 801C6AF0
L_801C6AF4:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C6AF4
  c->r[0]=R32(c->r[8]+c->r[3]); // 801C6AF8
  c->r[3]=R32(c->r[6]+c->r[3]); // 801C6AFC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C6B00
  c->r[27]=c->r[7]+c->r[0]; // 801C6B04
  c->lr=0x801C6B0Cu; f_801C6A74(c); // 801C6B08
  cmpu(c,0,c->r[3],c->r[29]); // 801C6B0C
  c->r[4]=c->r[3]|c->r[3]; // 801C6B10
  if (!crb(c,2)) { goto L_801C6B1C; } // 801C6B14
  goto L_801C6B68; // 801C6B18
L_801C6B1C:;
  c->r[4]=c->r[3]+0x00000001u; // 801C6B1C
  c->r[0]=0u+0x0000002Fu; // 801C6B20
  c->r[6]=c->r[29]-c->r[4]; // 801C6B24
  W8(c->r[28]+c->r[3],c->r[0]); // 801C6B28
  c->r[3]=c->r[28]+c->r[4]; // 801C6B2C
  c->r[5]=c->r[6]|c->r[6]; // 801C6B30
  goto L_801C6B4C; // 801C6B34
L_801C6B38:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C6B38
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C6B3C
  c->r[27]=c->r[27]+0x00000001u; // 801C6B40
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C6B44
  c->r[3]=c->r[3]+0x00000001u; // 801C6B48
L_801C6B4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C6B4C
  if (crb(c,2)) { goto L_801C6B60; } // 801C6B50
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C6B54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C6B58
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6B38; } // 801C6B5C
L_801C6B60:;
  c->r[0]=c->r[6]-c->r[5]; // 801C6B60
  c->r[4]=c->r[4]+c->r[0]; // 801C6B64
L_801C6B68:;
  cmpu(c,0,c->r[4],c->r[29]); // 801C6B68
  if (!crb(c,2)) { goto L_801C6B74; } // 801C6B6C
  goto L_801C6BC0; // 801C6B70
L_801C6B74:;
  c->r[3]=c->r[4]+0x00000001u; // 801C6B74
  c->r[0]=0u+0x0000002Fu; // 801C6B78
  c->r[6]=c->r[29]-c->r[3]; // 801C6B7C
  W8(c->r[28]+c->r[4],c->r[0]); // 801C6B80
  c->r[4]=c->r[28]+c->r[3]; // 801C6B84
  c->r[5]=c->r[6]|c->r[6]; // 801C6B88
  goto L_801C6BA4; // 801C6B8C
L_801C6B90:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C6B90
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C6B94
  c->r[31]=c->r[31]+0x00000001u; // 801C6B98
  W8(c->r[4]+0x00000000u,c->r[0]); // 801C6B9C
  c->r[4]=c->r[4]+0x00000001u; // 801C6BA0
L_801C6BA4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C6BA4
  if (crb(c,2)) { goto L_801C6BB8; } // 801C6BA8
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C6BAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C6BB0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6B90; } // 801C6BB4
L_801C6BB8:;
  c->r[0]=c->r[6]-c->r[5]; // 801C6BB8
  c->r[4]=c->r[3]+c->r[0]; // 801C6BBC
L_801C6BC0:;
  cmpu(c,0,c->r[4],c->r[29]); // 801C6BC0
  if (!crb(c,2)) { goto L_801C6BD0; } // 801C6BC4
  c->r[3]=c->r[4]|c->r[4]; // 801C6BC8
  goto L_801C6C1C; // 801C6BCC
L_801C6BD0:;
  c->r[6]=c->r[4]+0x00000001u; // 801C6BD0
  c->r[0]=0u+0x0000002Fu; // 801C6BD4
  c->r[5]=c->r[29]-c->r[6]; // 801C6BD8
  W8(c->r[28]+c->r[4],c->r[0]); // 801C6BDC
  c->r[3]=c->r[28]+c->r[6]; // 801C6BE0
  c->r[4]=c->r[5]|c->r[5]; // 801C6BE4
  goto L_801C6C00; // 801C6BE8
L_801C6BEC:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C6BEC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C6BF0
  c->r[30]=c->r[30]+0x00000001u; // 801C6BF4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C6BF8
  c->r[3]=c->r[3]+0x00000001u; // 801C6BFC
L_801C6C00:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C6C00
  if (crb(c,2)) { goto L_801C6C14; } // 801C6C04
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C6C08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C6C0C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6BEC; } // 801C6C10
L_801C6C14:;
  c->r[0]=c->r[5]-c->r[4]; // 801C6C14
  c->r[3]=c->r[6]+c->r[0]; // 801C6C18
L_801C6C1C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C6C1C
  c->lr=0x801C6C24u; f_801E79A8(c); // 801C6C20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6C24
  c->lr=c->r[0]; // 801C6C28
  c->r[1]=c->r[1]+0x00000020u; // 801C6C2C
  return; // 801C6C30
}

// DVDReadAsyncPrio
void f_801C6C34(Ctx* __restrict c) {
  trace_call(0x801C6C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C34
  c->r[0]=c->lr; // 801C6C38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6C3C
  c->r[11]=c->r[1]+0x00000020u; // 801C6C40
  c->lr=0x801C6C48u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6C44
  cmps(c,0,(int32_t)c->r[6],0); // 801C6C48
  c->r[26]=c->r[3]|c->r[3]; // 801C6C4C
  c->r[27]=c->r[4]|c->r[4]; // 801C6C50
  c->r[28]=c->r[5]|c->r[5]; // 801C6C54
  c->r[29]=c->r[6]|c->r[6]; // 801C6C58
  c->r[30]=c->r[7]|c->r[7]; // 801C6C5C
  c->r[31]=c->r[8]|c->r[8]; // 801C6C60
  if (crb(c,0)) { goto L_801C6C74; } // 801C6C64
  c->r[0]=R32(c->r[3]+0x00000034u); // 801C6C68
  cmpu(c,0,c->r[6],c->r[0]); // 801C6C6C
  if (!crb(c,1)) { goto L_801C6C8C; } // 801C6C70
L_801C6C74:;
  c->r[5]=0u+0x804B0000u; // 801C6C74
  c->r[3]=c->r[13]+0xFFFF8460u; // 801C6C78
  c->r[5]=c->r[5]+0x00000D48u; // 801C6C7C
  c->r[4]=0u+0x00000337u; // 801C6C80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6C84
  c->lr=0x801C6C8Cu; f_801BB48C(c); // 801C6C88
L_801C6C8C:;
  c->r[4]=c->r[29]+c->r[28]; cr0(c,c->r[4]); // 801C6C8C
  if (crb(c,0)) { goto L_801C6CA4; } // 801C6C90
  c->r[3]=R32(c->r[26]+0x00000034u); // 801C6C94
  c->r[0]=c->r[3]+0x00000020u; // 801C6C98
  cmpu(c,0,c->r[4],c->r[0]); // 801C6C9C
  if (crb(c,0)) { goto L_801C6CBC; } // 801C6CA0
L_801C6CA4:;
  c->r[5]=0u+0x804B0000u; // 801C6CA4
  c->r[3]=c->r[13]+0xFFFF8460u; // 801C6CA8
  c->r[5]=c->r[5]+0x00000D48u; // 801C6CAC
  c->r[4]=0u+0x0000033Du; // 801C6CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6CB4
  c->lr=0x801C6CBCu; f_801BB48C(c); // 801C6CB8
L_801C6CBC:;
  c->r[6]=R32(c->r[26]+0x00000030u); // 801C6CBC
  c->r[0]=sraw(c,c->r[29],2); // 801C6CC0
  c->r[7]=0u+0x801C0000u; // 801C6CC4
  W32(c->r[26]+0x00000038u,c->r[30]); // 801C6CC8
  c->r[3]=c->r[26]|c->r[26]; // 801C6CCC
  c->r[4]=c->r[27]|c->r[27]; // 801C6CD0
  c->r[5]=c->r[28]|c->r[28]; // 801C6CD4
  c->r[8]=c->r[31]|c->r[31]; // 801C6CD8
  c->r[6]=c->r[6]+c->r[0]; // 801C6CDC
  c->r[7]=c->r[7]+0x00006D04u; // 801C6CE0
  c->lr=0x801C6CE8u; f_801CA88C(c); // 801C6CE4
  c->r[11]=c->r[1]+0x00000020u; // 801C6CE8
  c->r[3]=0u+0x00000001u; // 801C6CEC
  c->lr=0x801C6CF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6CF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6CF4
  c->lr=c->r[0]; // 801C6CF8
  c->r[1]=c->r[1]+0x00000020u; // 801C6CFC
  return; // 801C6D00
}

// cbForReadAsync
void f_801C6D04(Ctx* __restrict c) {
  trace_call(0x801C6D04u);
  c->r[12]=R32(c->r[4]+0x00000038u); // 801C6D04
  cmps(c,0,(int32_t)c->r[12],0); // 801C6D08
  if (crb(c,2)) return; // 801C6D0C
  c->ctr=c->r[12]; // 801C6D10
  if (true) { dispatch(c,c->ctr); return; } // 801C6D14
  return; // 801C6D18
}

// DVDReadPrio
void f_801C6D1C(Ctx* __restrict c) {
  trace_call(0x801C6D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6D1C
  c->r[0]=c->lr; // 801C6D20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6D24
  c->r[11]=c->r[1]+0x00000020u; // 801C6D28
  c->lr=0x801C6D30u; f_801E795C(c); // 801C6D2C
  cmps(c,0,(int32_t)c->r[6],0); // 801C6D30
  c->r[27]=c->r[3]|c->r[3]; // 801C6D34
  c->r[28]=c->r[4]|c->r[4]; // 801C6D38
  c->r[29]=c->r[5]|c->r[5]; // 801C6D3C
  c->r[31]=c->r[6]|c->r[6]; // 801C6D40
  c->r[30]=c->r[7]|c->r[7]; // 801C6D44
  if (crb(c,0)) { goto L_801C6D58; } // 801C6D48
  c->r[0]=R32(c->r[3]+0x00000034u); // 801C6D4C
  cmpu(c,0,c->r[6],c->r[0]); // 801C6D50
  if (!crb(c,1)) { goto L_801C6D70; } // 801C6D54
L_801C6D58:;
  c->r[5]=0u+0x804B0000u; // 801C6D58
  c->r[3]=c->r[13]+0xFFFF8460u; // 801C6D5C
  c->r[5]=c->r[5]+0x00000D7Cu; // 801C6D60
  c->r[4]=0u+0x0000037Du; // 801C6D64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6D68
  c->lr=0x801C6D70u; f_801BB48C(c); // 801C6D6C
L_801C6D70:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 801C6D70
  if (crb(c,0)) { goto L_801C6D88; } // 801C6D74
  c->r[3]=R32(c->r[27]+0x00000034u); // 801C6D78
  c->r[0]=c->r[3]+0x00000020u; // 801C6D7C
  cmpu(c,0,c->r[4],c->r[0]); // 801C6D80
  if (crb(c,0)) { goto L_801C6DA0; } // 801C6D84
L_801C6D88:;
  c->r[5]=0u+0x804B0000u; // 801C6D88
  c->r[3]=c->r[13]+0xFFFF8460u; // 801C6D8C
  c->r[5]=c->r[5]+0x00000D7Cu; // 801C6D90
  c->r[4]=0u+0x00000383u; // 801C6D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6D98
  c->lr=0x801C6DA0u; f_801BB48C(c); // 801C6D9C
L_801C6DA0:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 801C6DA0
  c->r[0]=sraw(c,c->r[31],2); // 801C6DA4
  c->r[7]=0u+0x801C0000u; // 801C6DA8
  c->r[3]=c->r[27]|c->r[27]; // 801C6DAC
  c->r[4]=c->r[28]|c->r[28]; // 801C6DB0
  c->r[5]=c->r[29]|c->r[29]; // 801C6DB4
  c->r[8]=c->r[30]|c->r[30]; // 801C6DB8
  c->r[6]=c->r[6]+c->r[0]; // 801C6DBC
  c->r[7]=c->r[7]+0x00006E44u; // 801C6DC0
  c->lr=0x801C6DC8u; f_801CA88C(c); // 801C6DC4
  cmps(c,0,(int32_t)c->r[3],0); // 801C6DC8
  if (!crb(c,2)) { goto L_801C6DD8; } // 801C6DCC
  c->r[3]=0u+0xFFFFFFFFu; // 801C6DD0
  goto L_801C6E2C; // 801C6DD4
L_801C6DD8:;
  c->lr=0x801C6DDCu; f_801BE74C(c); // 801C6DD8
  c->r[31]=c->r[3]|c->r[3]; // 801C6DDC
L_801C6DE0:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C6DE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C6DE4
  if (!crb(c,2)) { goto L_801C6DF4; } // 801C6DE8
  c->r[30]=R32(c->r[27]+0x00000020u); // 801C6DEC
  goto L_801C6E20; // 801C6DF0
L_801C6DF4:;
  cmps(c,0,(int32_t)c->r[0],-1); // 801C6DF4
  if (!crb(c,2)) { goto L_801C6E04; } // 801C6DF8
  c->r[30]=0u+0xFFFFFFFFu; // 801C6DFC
  goto L_801C6E20; // 801C6E00
L_801C6E04:;
  cmps(c,0,(int32_t)c->r[0],10); // 801C6E04
  if (!crb(c,2)) { goto L_801C6E14; } // 801C6E08
  c->r[30]=0u+0xFFFFFFFDu; // 801C6E0C
  goto L_801C6E20; // 801C6E10
L_801C6E14:;
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801C6E14
  c->lr=0x801C6E1Cu; f_801C21D0(c); // 801C6E18
  IRQCHK(c); goto L_801C6DE0; // 801C6E1C
L_801C6E20:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6E20
  c->lr=0x801C6E28u; f_801BE774(c); // 801C6E24
  c->r[3]=c->r[30]|c->r[30]; // 801C6E28
L_801C6E2C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C6E2C
  c->lr=0x801C6E34u; f_801E79A8(c); // 801C6E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6E34
  c->lr=c->r[0]; // 801C6E38
  c->r[1]=c->r[1]+0x00000020u; // 801C6E3C
  return; // 801C6E40
}

// fn_801C6E44
void f_801C6E44(Ctx* __restrict c) {
  trace_call(0x801C6E44u);
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801C6E44
  f_801C22BC(c); return; // 801C6E48
}

// fn_801C6E4C
void f_801C6E4C(Ctx* __restrict c) {
  trace_call(0x801C6E4Cu);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C6E4C
  cmps(c,0,(int32_t)c->r[0],2); // 801C6E50
  if (crb(c,2)) { goto L_801C6E94; } // 801C6E54
  if (!crb(c,0)) { goto L_801C6E70; } // 801C6E58
  cmps(c,0,(int32_t)c->r[0],1); // 801C6E5C
  if (!crb(c,0)) { goto L_801C6E9C; } // 801C6E60
  cmps(c,0,(int32_t)c->r[0],-1); // 801C6E64
  if (!crb(c,0)) { goto L_801C6E8C; } // 801C6E68
  return; // 801C6E6C
L_801C6E70:;
  cmps(c,0,(int32_t)c->r[0],10); // 801C6E70
  if (!crb(c,0)) { goto L_801C6E84; } // 801C6E74
  cmps(c,0,(int32_t)c->r[0],8); // 801C6E78
  if (!crb(c,0)) return; // 801C6E7C
  goto L_801C6E8C; // 801C6E80
L_801C6E84:;
  cmps(c,0,(int32_t)c->r[0],13); // 801C6E84
  if (!crb(c,0)) return; // 801C6E88
L_801C6E8C:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C6E8C
  return; // 801C6E90
L_801C6E94:;
  c->r[3]=0u+0x00000000u; // 801C6E94
  return; // 801C6E98
L_801C6E9C:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C6E9C
  return; // 801C6EA0
}

// StampCommand
void f_801C6EA4(Ctx* __restrict c) {
  trace_call(0x801C6EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6EA4
  c->r[0]=c->lr; // 801C6EA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C6EAC
  c->r[11]=c->r[1]+0x00000020u; // 801C6EB0
  c->lr=0x801C6EB8u; f_801E795C(c); // 801C6EB4
  c->r[27]=c->r[3]|c->r[3]; // 801C6EB8
  c->r[28]=c->r[4]|c->r[4]; // 801C6EBC
  c->r[29]=c->r[5]|c->r[5]; // 801C6EC0
  c->lr=0x801C6EC8u; f_801BE74C(c); // 801C6EC4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C6EC8
  c->r[31]=c->r[3]|c->r[3]; // 801C6ECC
  cmpu(c,0,c->r[0],0x00000005u); // 801C6ED0
  if (crb(c,0)) { goto L_801C6EE0; } // 801C6ED4
  c->r[0]=0u+0x00000000u; // 801C6ED8
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C6EDC
L_801C6EE0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C6EE0
  c->r[30]=0u+0x80570000u; // 801C6EE4
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C6EE8
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C6EEC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C6EF0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C6EF4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C6EF8
  c->r[4]=c->r[30]+c->r[4]; // 801C6EFC
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 801C6F00
  c->r[3]=c->r[30]+c->r[3]; // 801C6F04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C6F08
  W32(c->r[3]+0x00000020u,c->r[28]); // 801C6F0C
  c->r[3]=c->r[30]+c->r[0]; // 801C6F10
  W32(c->r[3]+0x00000024u,c->r[29]); // 801C6F14
  c->lr=0x801C6F1Cu; f_801C2594(c); // 801C6F18
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C6F1C
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C6F20
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C6F24
  c->r[0]=c->r[4]+0x00000001u; // 801C6F28
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C6F2C
  c->r[4]=c->r[30]+c->r[5]; // 801C6F30
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C6F34
  c->r[3]=c->r[31]|c->r[31]; // 801C6F38
  c->lr=0x801C6F40u; f_801BE774(c); // 801C6F3C
  c->r[11]=c->r[1]+0x00000020u; // 801C6F40
  c->lr=0x801C6F48u; f_801E79A8(c); // 801C6F44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6F48
  c->lr=c->r[0]; // 801C6F4C
  c->r[1]=c->r[1]+0x00000020u; // 801C6F50
  return; // 801C6F54
}

// fn_801C6F58
void f_801C6F58(Ctx* __restrict c) {
  trace_call(0x801C6F58u);
  return; // 801C6F58
}

// DVDInit
void f_801C6F5C(Ctx* __restrict c) {
  trace_call(0x801C6F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6F5C
  c->r[0]=c->lr; // 801C6F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6F64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6F68
  c->r[0]=R32(c->r[13]+0xFFFF9DE8u); // 801C6F6C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6F70
  if (!crb(c,2)) { goto L_801C7028; } // 801C6F74
  c->r[3]=R32(c->r[13]+0xFFFF8468u); // 801C6F78
  c->lr=0x801C6F80u; f_801B96A0(c); // 801C6F7C
  c->r[31]=0u+0x00000001u; // 801C6F80
  W32(c->r[13]+0xFFFF9DE8u,c->r[31]); // 801C6F84
  c->lr=0x801C6F8Cu; f_801CBDD8(c); // 801C6F88
  c->lr=0x801C6F90u; f_801C6404(c); // 801C6F8C
  c->lr=0x801C6F94u; f_801CB4D8(c); // 801C6F90
  c->r[0]=0u+0x80000000u; // 801C6F94
  c->r[3]=0u+0x00000000u; // 801C6F98
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C6F9C
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801C6FA0
  W32(c->r[13]+0xFFFF9E20u,c->r[0]); // 801C6FA4
  W32(c->r[13]+0xFFFF9E24u,c->r[0]); // 801C6FA8
  c->lr=0x801C6FB0u; f_801C1194(c); // 801C6FAC
  c->lr=0x801C6FB4u; f_801CD4D4(c); // 801C6FB0
  c->lr=0x801C6FB8u; f_801CD4DC(c); // 801C6FB4
  c->r[3]=R32(c->r[13]+0xFFFF9E20u); // 801C6FB8
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C6FBC
  c->r[0]=c->r[3]+0x1AE00000u; // 801C6FC0
  cmpu(c,0,c->r[0],0x00007C22u); // 801C6FC4
  if (crb(c,2)) { goto L_801C6FDC; } // 801C6FC8
  c->r[0]=c->r[3]+0xF2EB0000u; // 801C6FCC
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 801C6FD0
  if (crb(c,2)) { goto L_801C6FDC; } // 801C6FD4
  W32(c->r[13]+0xFFFF9DC8u,c->r[31]); // 801C6FD8
L_801C6FDC:;
  c->r[31]=0u+0x80570000u; // 801C6FDC
  c->r[4]=0u+0x00000000u; // 801C6FE0
  c->r[3]=c->r[31]+0xFFFFF1A0u; // 801C6FE4
  c->r[5]=0u+0x00000080u; // 801C6FE8
  c->lr=0x801C6FF0u; f_8000443C(c); // 801C6FEC
  c->r[3]=c->r[31]+0xFFFFF1A0u; // 801C6FF0
  c->r[4]=0u+0x80000000u; // 801C6FF4
  c->r[5]=0u+0x00000004u; // 801C6FF8
  c->lr=0x801C7000u; f_80004338(c); // 801C6FFC
  c->r[6]=0u+0x80000000u; // 801C7000
  c->r[5]=c->r[31]+0xFFFFF1A0u; // 801C7004
  c->r[4]=R8(c->r[6]+0x00000006u); // 801C7008
  c->r[0]=0u+0x00000000u; // 801C700C
  c->r[3]=0u+0x00000001u; // 801C7010
  W8(c->r[5]+0x00000004u,c->r[4]); // 801C7014
  c->r[4]=R8(c->r[6]+0x00000007u); // 801C7018
  W8(c->r[5]+0x00000005u,c->r[4]); // 801C701C
  W32(c->r[13]+0xFFFF9DE4u,c->r[0]); // 801C7020
  c->lr=0x801C7028u; f_801CBBDC(c); // 801C7024
L_801C7028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C702C
  c->lr=c->r[0]; // 801C7030
  c->r[1]=c->r[1]+0x00000010u; // 801C7034
  return; // 801C7038
}

// stateReadingFST
void f_801C703C(Ctx* __restrict c) {
  trace_call(0x801C703Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C703C
  c->r[0]=c->lr; // 801C7040
  c->r[5]=0u+0x801C0000u; // 801C7044
  c->r[3]=0u+0x80570000u; // 801C7048
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C704C
  c->r[5]=c->r[5]+0x0000703Cu; // 801C7050
  c->r[3]=c->r[3]+0xFFFFA440u; // 801C7054
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7058
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C705C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7060
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7064
  c->r[4]=R32(c->r[13]+0xFFFF9E20u); // 801C7068
  W32(c->r[13]+0xFFFF9E2Cu,c->r[5]); // 801C706C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C7070
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 801C7074
  cmpu(c,0,c->r[3],c->r[0]); // 801C7078
  if (!crb(c,0)) { goto L_801C7098; } // 801C707C
  c->r[5]=0u+0x804B0000u; // 801C7080
  c->r[3]=c->r[13]+0xFFFF8474u; // 801C7084
  c->r[5]=c->r[5]+0x00000DF8u; // 801C7088
  c->r[4]=0u+0x0000040Bu; // 801C708C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7090
  c->lr=0x801C7098u; f_801BB48C(c); // 801C7094
L_801C7098:;
  c->r[3]=0u+0x00000000u; // 801C7098
  c->lr=0x801C70A0u; f_801CD4E4(c); // 801C709C
  c->r[3]=R32(c->r[13]+0xFFFF9DE4u); // 801C70A0
  c->r[6]=0u+0x80570000u; // 801C70A4
  c->r[6]=c->r[6]+0xFFFFA440u; // 801C70A8
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C70AC
  c->r[3]=~(c->r[3]|c->r[3]); // 801C70B0
  c->r[5]=R32(c->r[6]+0x00000008u); // 801C70B4
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 801C70B8
  c->r[3]=R32(c->r[6]+0x00000004u); // 801C70BC
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801C70C0
  c->r[4]=c->r[4]+0x0000001Fu; // 801C70C4
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801C70C8
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801C70CC
  c->lr=0x801C70D4u; f_801BE74C(c); // 801C70D0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C70D4
  c->r[31]=c->r[3]|c->r[3]; // 801C70D8
  cmpu(c,0,c->r[0],0x00000005u); // 801C70DC
  if (crb(c,0)) { goto L_801C70EC; } // 801C70E0
  c->r[0]=0u+0x00000000u; // 801C70E4
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C70E8
L_801C70EC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C70EC
  c->r[30]=0u+0x80570000u; // 801C70F0
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C70F4
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C70F8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C70FC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7100
  c->r[5]=0u+0x00000001u; // 801C7104
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C7108
  c->r[4]=c->r[30]+c->r[4]; // 801C710C
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 801C7110
  c->r[3]=c->r[30]+c->r[3]; // 801C7114
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7118
  W32(c->r[3]+0x00000020u,c->r[29]); // 801C711C
  c->r[3]=c->r[30]+c->r[0]; // 801C7120
  W32(c->r[3]+0x00000024u,c->r[28]); // 801C7124
  c->lr=0x801C712Cu; f_801C2594(c); // 801C7128
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C712C
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C7130
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7134
  c->r[0]=c->r[4]+0x00000001u; // 801C7138
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C713C
  c->r[4]=c->r[30]+c->r[5]; // 801C7140
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C7144
  c->r[3]=c->r[31]|c->r[31]; // 801C7148
  c->lr=0x801C7150u; f_801BE774(c); // 801C714C
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C7150
  c->r[4]=0u+0x80570000u; // 801C7154
  c->r[4]=c->r[4]+0xFFFFA440u; // 801C7158
  c->r[6]=0u+0x801C0000u; // 801C715C
  c->r[0]=~(c->r[0]|c->r[0]); // 801C7160
  c->r[3]=R32(c->r[4]+0x00000008u); // 801C7164
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801C7168
  c->r[7]=R32(c->r[13]+0xFFFF9E20u); // 801C716C
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C7170
  c->r[5]=R32(c->r[4]+0x00000004u); // 801C7174
  c->r[4]=c->r[3]+0x0000001Fu; // 801C7178
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C717C
  c->r[3]=R32(c->r[7]+0x00000038u); // 801C7180
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801C7184
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801C7188
  c->r[6]=c->r[6]+0x000071B4u; // 801C718C
  c->lr=0x801C7194u; f_801CD024(c); // 801C7190
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7194
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7198
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C719C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C71A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C71A4
  c->lr=c->r[0]; // 801C71A8
  c->r[1]=c->r[1]+0x00000020u; // 801C71AC
  return; // 801C71B0
}

// cbForStateReadingFST
void f_801C71B4(Ctx* __restrict c) {
  trace_call(0x801C71B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C71B4
  c->r[0]=c->lr; // 801C71B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C71BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C71C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C71C4
  c->r[30]=c->r[3]|c->r[3]; // 801C71C8
  c->lr=0x801C71D0u; f_801BE74C(c); // 801C71CC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C71D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C71D4
  if (!crb(c,2)) { goto L_801C71EC; } // 801C71D8
  c->r[4]=0u+0x80570000u; // 801C71DC
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C71E0
  W32(c->r[4]+0x00000078u,c->r[30]); // 801C71E4
  goto L_801C7204; // 801C71E8
L_801C71EC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C71EC
  c->r[4]=0u+0x80570000u; // 801C71F0
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C71F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C71F8
  c->r[4]=c->r[4]+c->r[0]; // 801C71FC
  W32(c->r[4]+0x00000014u,c->r[30]); // 801C7200
L_801C7204:;
  c->lr=0x801C7208u; f_801BE774(c); // 801C7204
  cmpu(c,0,c->r[30],0x00000010u); // 801C7208
  if (!crb(c,2)) { goto L_801C7228; } // 801C720C
  c->r[3]=0u+0x01230000u; // 801C7210
  c->r[4]=0u+0x801C0000u; // 801C7214
  c->r[3]=c->r[3]+0x00004568u; // 801C7218
  c->r[4]=c->r[4]+0x00007460u; // 801C721C
  c->lr=0x801C7224u; f_801CB994(c); // 801C7220
  goto L_801C7320; // 801C7224
L_801C7228:;
  cmpu(c,0,c->r[30],0x00000020u); // 801C7228
  if (!crb(c,2)) { goto L_801C7248; } // 801C722C
  c->r[3]=0u+0x01230000u; // 801C7230
  c->r[4]=0u+0x801C0000u; // 801C7234
  c->r[3]=c->r[3]+0x00004569u; // 801C7238
  c->r[4]=c->r[4]+0x00007460u; // 801C723C
  c->lr=0x801C7244u; f_801CB994(c); // 801C7240
  goto L_801C7320; // 801C7244
L_801C7248:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801C7248
  if (crb(c,2)) { goto L_801C7290; } // 801C724C
  c->r[30]=0u+0x00000000u; // 801C7250
  W32(c->r[13]+0xFFFF9DC0u,c->r[30]); // 801C7254
  c->lr=0x801C725Cu; f_801C6404(c); // 801C7258
  c->r[3]=0u+0x80570000u; // 801C725C
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C7260
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C7264
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C7268
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 801C726C
  c->r[12]=R32(c->r[4]+0x00000028u); // 801C7270
  cmps(c,0,(int32_t)c->r[12],0); // 801C7274
  if (crb(c,2)) { goto L_801C7288; } // 801C7278
  c->r[3]=0u+0x00000000u; // 801C727C
  c->ctr=c->r[12]; // 801C7280
  if (true) { c->lr=0x801C7288u; dispatch(c,c->ctr); } // 801C7284
L_801C7288:;
  c->lr=0x801C728Cu; f_801C9828(c); // 801C7288
  goto L_801C7320; // 801C728C
L_801C7290:;
  c->lr=0x801C7294u; f_801BE74C(c); // 801C7290
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7294
  c->r[31]=c->r[3]|c->r[3]; // 801C7298
  cmpu(c,0,c->r[0],0x00000005u); // 801C729C
  if (crb(c,0)) { goto L_801C72AC; } // 801C72A0
  c->r[0]=0u+0x00000000u; // 801C72A4
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C72A8
L_801C72AC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C72AC
  c->r[30]=0u+0x80570000u; // 801C72B0
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C72B4
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C72B8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C72BC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C72C0
  c->r[6]=0u+0x00000027u; // 801C72C4
  c->r[4]=0u+0x00000000u; // 801C72C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C72CC
  c->r[5]=c->r[30]+c->r[5]; // 801C72D0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C72D4
  c->r[3]=c->r[30]+c->r[3]; // 801C72D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C72DC
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C72E0
  c->r[3]=c->r[30]+c->r[0]; // 801C72E4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C72E8
  c->lr=0x801C72F0u; f_801C2594(c); // 801C72EC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C72F0
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C72F4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C72F8
  c->r[0]=c->r[4]+0x00000001u; // 801C72FC
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7300
  c->r[4]=c->r[30]+c->r[5]; // 801C7304
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C7308
  c->r[3]=c->r[31]|c->r[31]; // 801C730C
  c->lr=0x801C7314u; f_801BE774(c); // 801C7310
  c->r[3]=0u+0x801C0000u; // 801C7314
  c->r[3]=c->r[3]+0x00007654u; // 801C7318
  c->lr=0x801C7320u; f_801CCA20(c); // 801C731C
L_801C7320:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7324
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7328
  c->lr=c->r[0]; // 801C732C
  c->r[1]=c->r[1]+0x00000010u; // 801C7330
  return; // 801C7334
}

// fn_801C7338
void f_801C7338(Ctx* __restrict c) {
  trace_call(0x801C7338u);
  f_801CBC4C(c); return; // 801C7338
}

// cbForStateError
void f_801C733C(Ctx* __restrict c) {
  trace_call(0x801C733Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C733C
  c->r[0]=c->lr; // 801C7340
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7348
  c->r[31]=c->r[3]|c->r[3]; // 801C734C
  c->lr=0x801C7354u; f_801CBC38(c); // 801C7350
  cmps(c,0,(int32_t)c->r[3],0); // 801C7354
  if (crb(c,2)) { goto L_801C7384; } // 801C7358
  c->r[31]=0u+0x80570000u; // 801C735C
  c->r[3]=c->r[31]+0xFFFFA490u; // 801C7360
  c->lr=0x801C7368u; f_801B9774(c); // 801C7364
  c->r[7]=0u+0x801C0000u; // 801C7368
  c->r[3]=c->r[31]+0xFFFFA490u; // 801C736C
  c->r[7]=c->r[7]+0x00007338u; // 801C7370
  c->r[6]=0u+0x00000001u; // 801C7374
  c->r[5]=0u+0x00000000u; // 801C7378
  c->lr=0x801C7380u; f_801B99D4(c); // 801C737C
  goto L_801C7438; // 801C7380
L_801C7384:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C7384
  c->r[0]=0u+0xFFFFFFFFu; // 801C7388
  cmpu(c,0,c->r[31],0x00000010u); // 801C738C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C7390
  if (!crb(c,2)) { goto L_801C73B0; } // 801C7394
  c->r[3]=0u+0x01230000u; // 801C7398
  c->r[4]=0u+0x801C0000u; // 801C739C
  c->r[3]=c->r[3]+0x00004568u; // 801C73A0
  c->r[4]=c->r[4]+0x00007460u; // 801C73A4
  c->lr=0x801C73ACu; f_801CB994(c); // 801C73A8
  goto L_801C7438; // 801C73AC
L_801C73B0:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C73B0
  if (!crb(c,2)) { goto L_801C73D0; } // 801C73B4
  c->r[3]=0u+0x01230000u; // 801C73B8
  c->r[4]=0u+0x801C0000u; // 801C73BC
  c->r[3]=c->r[3]+0x00004569u; // 801C73C0
  c->r[4]=c->r[4]+0x00007460u; // 801C73C4
  c->lr=0x801C73CCu; f_801CB994(c); // 801C73C8
  goto L_801C7438; // 801C73CC
L_801C73D0:;
  c->r[3]=0u+0x80570000u; // 801C73D0
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801C73D4
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C73D8
  c->r[0]=0u+0x00000001u; // 801C73DC
  W32(c->r[13]+0xFFFF9DB4u,c->r[0]); // 801C73E0
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C73E4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801C73E8
  cmps(c,0,(int32_t)c->r[12],0); // 801C73EC
  if (crb(c,2)) { goto L_801C7404; } // 801C73F0
  c->r[4]=c->r[31]|c->r[31]; // 801C73F4
  c->r[3]=0u+0xFFFFFFFFu; // 801C73F8
  c->ctr=c->r[12]; // 801C73FC
  if (true) { c->lr=0x801C7404u; dispatch(c,c->ctr); } // 801C7400
L_801C7404:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C7404
  cmps(c,0,(int32_t)c->r[0],0); // 801C7408
  if (crb(c,2)) { goto L_801C7434; } // 801C740C
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C7410
  c->r[0]=0u+0x00000000u; // 801C7414
  W32(c->r[13]+0xFFFF9DB8u,c->r[0]); // 801C7418
  cmps(c,0,(int32_t)c->r[12],0); // 801C741C
  if (crb(c,2)) { goto L_801C7434; } // 801C7420
  c->r[4]=c->r[31]|c->r[31]; // 801C7424
  c->r[3]=0u+0x00000000u; // 801C7428
  c->ctr=c->r[12]; // 801C742C
  if (true) { c->lr=0x801C7434u; dispatch(c,c->ctr); } // 801C7430
L_801C7434:;
  c->lr=0x801C7438u; f_801C9828(c); // 801C7434
L_801C7438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C743C
  c->lr=c->r[0]; // 801C7440
  c->r[1]=c->r[1]+0x00000010u; // 801C7444
  return; // 801C7448
}

// cbForStoreErrorCode1
void f_801C744C(Ctx* __restrict c) {
  trace_call(0x801C744Cu);
  c->r[5]=0u+0x801C0000u; // 801C744C
  c->r[3]=0u+0x00000000u; // 801C7450
  c->r[5]=c->r[5]+0x0000733Cu; // 801C7454
  c->r[4]=0u+0x00000000u; // 801C7458
  f_801CC724(c); return; // 801C745C
}

// cbForStoreErrorCode2
void f_801C7460(Ctx* __restrict c) {
  trace_call(0x801C7460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7460
  c->r[0]=c->lr; // 801C7464
  c->r[3]=0u+0x00000000u; // 801C7468
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C746C
  c->lr=0x801C7474u; f_801CCB88(c); // 801C7470
  c->r[3]=0u+0x801C0000u; // 801C7474
  c->r[3]=c->r[3]+0x0000733Cu; // 801C7478
  c->lr=0x801C7480u; f_801CCB94(c); // 801C747C
  c->r[0]=0u+0x00000000u; // 801C7480
  W32(c->r[13]+0xFFFF9E0Cu,c->r[0]); // 801C7484
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C7488
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C748C
  c->lr=c->r[0]; // 801C7490
  c->r[1]=c->r[1]+0x00000010u; // 801C7494
  return; // 801C7498
}

// CategorizeError
void f_801C749C(Ctx* __restrict c) {
  trace_call(0x801C749Cu);
  c->r[0]=c->r[3]+0xFFFE0000u; // 801C749C
  cmpu(c,0,c->r[0],0x00000400u); // 801C74A0
  if (!crb(c,2)) { goto L_801C74B4; } // 801C74A4
  W32(c->r[13]+0xFFFF9E10u,c->r[3]); // 801C74A8
  c->r[3]=0u+0x00000001u; // 801C74AC
  return; // 801C74B0
L_801C74B4:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 801C74B4
  c->r[0]=c->r[4]+0xFFFA0000u; // 801C74B8
  cmpu(c,0,c->r[0],0x00002800u); // 801C74BC
  if (crb(c,2)) { goto L_801C74E8; } // 801C74C0
  c->r[0]=c->r[4]+0xFFFE0000u; // 801C74C4
  cmpu(c,0,c->r[0],0x00003A00u); // 801C74C8
  if (crb(c,2)) { goto L_801C74E8; } // 801C74CC
  c->r[3]=c->r[4]+0xFFFB0000u; // 801C74D0
  cmpu(c,0,c->r[3],0x00003000u); // 801C74D4
  if (crb(c,2)) { goto L_801C74E8; } // 801C74D8
  c->r[0]=c->r[4]+0xFFF50000u; // 801C74DC
  cmpu(c,0,c->r[0],0x00005A01u); // 801C74E0
  if (!crb(c,2)) { goto L_801C74F0; } // 801C74E4
L_801C74E8:;
  c->r[3]=0u+0x00000000u; // 801C74E8
  return; // 801C74EC
L_801C74F0:;
  cmpu(c,0,c->r[3],0x00002000u); // 801C74F0
  if (!crb(c,2)) { goto L_801C7524; } // 801C74F4
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C74F8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C74FC
  cmpu(c,0,c->r[0],0x00000025u); // 801C7500
  if (crb(c,2)) { goto L_801C751C; } // 801C7504
  c->r[3]=0u+0x801D0000u; // 801C7508
  c->r[0]=R32(c->r[13]+0xFFFF9E2Cu); // 801C750C
  c->r[3]=c->r[3]+0xFFFF9274u; // 801C7510
  cmpu(c,0,c->r[0],c->r[3]); // 801C7514
  if (!crb(c,2)) { goto L_801C7524; } // 801C7518
L_801C751C:;
  c->r[3]=0u+0x00000000u; // 801C751C
  return; // 801C7520
L_801C7524:;
  c->r[3]=R32(c->r[13]+0xFFFF9DC0u); // 801C7524
  c->r[0]=c->r[3]+0x00000001u; // 801C7528
  W32(c->r[13]+0xFFFF9DC0u,c->r[0]); // 801C752C
  c->r[0]=R32(c->r[13]+0xFFFF9DC0u); // 801C7530
  cmps(c,0,(int32_t)c->r[0],2); // 801C7534
  if (!crb(c,2)) { goto L_801C7560; } // 801C7538
  c->r[0]=R32(c->r[13]+0xFFFF9E10u); // 801C753C
  cmpu(c,0,c->r[4],c->r[0]); // 801C7540
  if (!crb(c,2)) { goto L_801C7554; } // 801C7544
  W32(c->r[13]+0xFFFF9E10u,c->r[4]); // 801C7548
  c->r[3]=0u+0x00000001u; // 801C754C
  return; // 801C7550
L_801C7554:;
  W32(c->r[13]+0xFFFF9E10u,c->r[4]); // 801C7554
  c->r[3]=0u+0x00000002u; // 801C7558
  return; // 801C755C
L_801C7560:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 801C7560
  W32(c->r[13]+0xFFFF9E10u,c->r[4]); // 801C7564
  cmpu(c,0,c->r[0],0x00001100u); // 801C7568
  if (crb(c,2)) { goto L_801C7580; } // 801C756C
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C7570
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C7574
  cmpu(c,0,c->r[0],0x00000005u); // 801C7578
  if (!crb(c,2)) { goto L_801C7588; } // 801C757C
L_801C7580:;
  c->r[3]=0u+0x00000002u; // 801C7580
  return; // 801C7584
L_801C7588:;
  c->r[3]=0u+0x00000003u; // 801C7588
  return; // 801C758C
}

// cbForStoreErrorCode3
void f_801C7590(Ctx* __restrict c) {
  trace_call(0x801C7590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7590
  c->r[0]=c->lr; // 801C7594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C759C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C75A0
  c->lr=0x801C75A8u; f_801BE74C(c); // 801C75A4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C75A8
  c->r[31]=c->r[3]|c->r[3]; // 801C75AC
  cmpu(c,0,c->r[0],0x00000005u); // 801C75B0
  if (crb(c,0)) { goto L_801C75C0; } // 801C75B4
  c->r[0]=0u+0x00000000u; // 801C75B8
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C75BC
L_801C75C0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C75C0
  c->r[30]=0u+0x80570000u; // 801C75C4
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C75C8
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C75CC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C75D0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C75D4
  c->r[6]=0u+0x00000010u; // 801C75D8
  c->r[4]=0u+0x00000000u; // 801C75DC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C75E0
  c->r[5]=c->r[30]+c->r[5]; // 801C75E4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C75E8
  c->r[3]=c->r[30]+c->r[3]; // 801C75EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C75F0
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C75F4
  c->r[3]=c->r[30]+c->r[0]; // 801C75F8
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C75FC
  c->lr=0x801C7604u; f_801C2594(c); // 801C7600
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7604
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C7608
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C760C
  c->r[0]=c->r[4]+0x00000001u; // 801C7610
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7614
  c->r[4]=c->r[30]+c->r[5]; // 801C7618
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C761C
  c->r[3]=c->r[31]|c->r[31]; // 801C7620
  c->lr=0x801C7628u; f_801BE774(c); // 801C7624
  c->r[5]=0u+0x801C0000u; // 801C7628
  c->r[3]=0u+0x00000000u; // 801C762C
  c->r[5]=c->r[5]+0x00007E0Cu; // 801C7630
  c->r[4]=0u+0x00000000u; // 801C7634
  c->lr=0x801C763Cu; f_801CC724(c); // 801C7638
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C763C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7640
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7644
  c->lr=c->r[0]; // 801C7648
  c->r[1]=c->r[1]+0x00000010u; // 801C764C
  return; // 801C7650
}

// cbForStateGettingError
void f_801C7654(Ctx* __restrict c) {
  trace_call(0x801C7654u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7654
  c->r[0]=c->lr; // 801C7658
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C765C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7660
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7664
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7668
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C766C
  c->r[28]=c->r[3]|c->r[3]; // 801C7670
  c->lr=0x801C7678u; f_801BE74C(c); // 801C7674
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7678
  cmps(c,0,(int32_t)c->r[0],0); // 801C767C
  if (!crb(c,2)) { goto L_801C7694; } // 801C7680
  c->r[4]=0u+0x80570000u; // 801C7684
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7688
  W32(c->r[4]+0x00000078u,c->r[28]); // 801C768C
  goto L_801C76AC; // 801C7690
L_801C7694:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7694
  c->r[4]=0u+0x80570000u; // 801C7698
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C769C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C76A0
  c->r[4]=c->r[4]+c->r[0]; // 801C76A4
  W32(c->r[4]+0x00000014u,c->r[28]); // 801C76A8
L_801C76AC:;
  c->lr=0x801C76B0u; f_801BE774(c); // 801C76AC
  cmpu(c,0,c->r[28],0x00000010u); // 801C76B0
  if (!crb(c,2)) { goto L_801C76D0; } // 801C76B4
  c->r[3]=0u+0x01230000u; // 801C76B8
  c->r[4]=0u+0x801C0000u; // 801C76BC
  c->r[3]=c->r[3]+0x00004568u; // 801C76C0
  c->r[4]=c->r[4]+0x00007460u; // 801C76C4
  c->lr=0x801C76CCu; f_801CB994(c); // 801C76C8
  goto L_801C7B38; // 801C76CC
L_801C76D0:;
  cmpu(c,0,c->r[28],0x00000020u); // 801C76D0
  if (!crb(c,2)) { goto L_801C76F0; } // 801C76D4
  c->r[3]=0u+0x01230000u; // 801C76D8
  c->r[4]=0u+0x801C0000u; // 801C76DC
  c->r[3]=c->r[3]+0x00004569u; // 801C76E0
  c->r[4]=c->r[4]+0x00007460u; // 801C76E4
  c->lr=0x801C76ECu; f_801CB994(c); // 801C76E8
  goto L_801C7B38; // 801C76EC
L_801C76F0:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801C76F0
  if (crb(c,2)) { goto L_801C7710; } // 801C76F4
  c->r[3]=0u+0x01230000u; // 801C76F8
  c->r[4]=0u+0x801C0000u; // 801C76FC
  c->r[3]=c->r[3]+0x00004567u; // 801C7700
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7704
  c->lr=0x801C770Cu; f_801CB994(c); // 801C7708
  goto L_801C7B38; // 801C770C
L_801C7710:;
  c->lr=0x801C7714u; f_801CD4C8(c); // 801C7710
  c->r[29]=c->r[3]|c->r[3]; // 801C7714
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 801C7718
  c->lr=0x801C7720u; f_801C749C(c); // 801C771C
  cmpu(c,0,c->r[3],0x00000001u); // 801C7720
  c->r[30]=c->r[3]|c->r[3]; // 801C7724
  if (!crb(c,2)) { goto L_801C7740; } // 801C7728
  c->r[4]=0u+0x801C0000u; // 801C772C
  c->r[3]=c->r[29]|c->r[29]; // 801C7730
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7734
  c->lr=0x801C773Cu; f_801CB994(c); // 801C7738
  goto L_801C7B38; // 801C773C
L_801C7740:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801C7740
  cmpu(c,0,c->r[0],0x00000001u); // 801C7744
  if (crb(c,1)) { goto L_801C7754; } // 801C7748
  c->r[5]=0u+0x00000000u; // 801C774C
  goto L_801C77B8; // 801C7750
L_801C7754:;
  c->r[0]=c->r[28]+0xFF000000u; // 801C7754
  cmpu(c,0,c->r[0],0x00000000u); // 801C7758
  if (!crb(c,2)) { goto L_801C7768; } // 801C775C
  c->r[5]=0u+0x00000004u; // 801C7760
  goto L_801C77B8; // 801C7764
L_801C7768:;
  c->r[0]=c->r[28]+0xFE000000u; // 801C7768
  cmpu(c,0,c->r[0],0x00000000u); // 801C776C
  if (!crb(c,2)) { goto L_801C777C; } // 801C7770
  c->r[5]=0u+0x00000006u; // 801C7774
  goto L_801C77B8; // 801C7778
L_801C777C:;
  c->r[0]=c->r[28]+0xFD000000u; // 801C777C
  cmpu(c,0,c->r[0],0x00000000u); // 801C7780
  if (!crb(c,2)) { goto L_801C7790; } // 801C7784
  c->r[5]=0u+0x00000003u; // 801C7788
  goto L_801C77B8; // 801C778C
L_801C7790:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C7790
  if (!crb(c,2)) { goto L_801C77B4; } // 801C7794
  c->r[0]=c->r[29]+0xFFFB0000u; // 801C7798
  cmpu(c,0,c->r[0],0x00003000u); // 801C779C
  if (!crb(c,2)) { goto L_801C77AC; } // 801C77A0
  c->r[5]=0u+0x00000001u; // 801C77A4
  goto L_801C77B8; // 801C77A8
L_801C77AC:;
  c->r[5]=0u+0x00000005u; // 801C77AC
  goto L_801C77B8; // 801C77B0
L_801C77B4:;
  c->r[5]=0u+0x00000005u; // 801C77B4
L_801C77B8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C77B8
  cmps(c,0,(int32_t)c->r[0],0); // 801C77BC
  if (crb(c,2)) { goto L_801C782C; } // 801C77C0
  c->r[3]=0u+0x80570000u; // 801C77C4
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801C77C8
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C77CC
  c->r[4]=0u+0x00000000u; // 801C77D0
  W32(c->r[13]+0xFFFF9DBCu,c->r[5]); // 801C77D4
  c->r[0]=0u+0x0000000Au; // 801C77D8
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801C77DC
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C77E0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C77E4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801C77E8
  cmps(c,0,(int32_t)c->r[12],0); // 801C77EC
  if (crb(c,2)) { goto L_801C7804; } // 801C77F0
  c->r[4]=c->r[31]|c->r[31]; // 801C77F4
  c->r[3]=0u+0xFFFFFFFDu; // 801C77F8
  c->ctr=c->r[12]; // 801C77FC
  if (true) { c->lr=0x801C7804u; dispatch(c,c->ctr); } // 801C7800
L_801C7804:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C7804
  cmps(c,0,(int32_t)c->r[12],0); // 801C7808
  if (crb(c,2)) { goto L_801C7820; } // 801C780C
  c->r[4]=c->r[31]|c->r[31]; // 801C7810
  c->r[3]=0u+0x00000000u; // 801C7814
  c->ctr=c->r[12]; // 801C7818
  if (true) { c->lr=0x801C7820u; dispatch(c,c->ctr); } // 801C781C
L_801C7820:;
  c->lr=0x801C7824u; f_801C9828(c); // 801C7820
  c->r[0]=0u+0x00000001u; // 801C7824
  goto L_801C7830; // 801C7828
L_801C782C:;
  c->r[0]=0u+0x00000000u; // 801C782C
L_801C7830:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C7830
  if (!crb(c,2)) { goto L_801C7B38; } // 801C7834
  cmpu(c,0,c->r[30],0x00000002u); // 801C7838
  if (!crb(c,2)) { goto L_801C7854; } // 801C783C
  c->r[4]=0u+0x801C0000u; // 801C7840
  c->r[3]=c->r[29]|c->r[29]; // 801C7844
  c->r[4]=c->r[4]+0x00007590u; // 801C7848
  c->lr=0x801C7850u; f_801CB994(c); // 801C784C
  goto L_801C7B38; // 801C7850
L_801C7854:;
  cmpu(c,0,c->r[30],0x00000003u); // 801C7854
  if (!crb(c,2)) { goto L_801C7924; } // 801C7858
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 801C785C
  c->r[0]=c->r[3]+0xFFFD0000u; // 801C7860
  cmpu(c,0,c->r[0],0x00001100u); // 801C7864
  if (!crb(c,2)) { goto L_801C7910; } // 801C7868
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C786C
  c->r[29]=R32(c->r[3]+0x00000010u); // 801C7870
  c->lr=0x801C7878u; f_801BE74C(c); // 801C7874
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7878
  c->r[31]=c->r[3]|c->r[3]; // 801C787C
  cmpu(c,0,c->r[0],0x00000005u); // 801C7880
  if (crb(c,0)) { goto L_801C7890; } // 801C7884
  c->r[0]=0u+0x00000000u; // 801C7888
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C788C
L_801C7890:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7890
  c->r[30]=0u+0x80570000u; // 801C7894
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C7898
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C789C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C78A0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C78A4
  c->r[6]=0u+0x00000002u; // 801C78A8
  c->r[4]=0u+0x00000000u; // 801C78AC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C78B0
  c->r[5]=c->r[30]+c->r[5]; // 801C78B4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C78B8
  c->r[3]=c->r[30]+c->r[3]; // 801C78BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C78C0
  W32(c->r[3]+0x00000020u,c->r[29]); // 801C78C4
  c->r[3]=c->r[30]+c->r[0]; // 801C78C8
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C78CC
  c->lr=0x801C78D4u; f_801C2594(c); // 801C78D0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C78D4
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C78D8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C78DC
  c->r[0]=c->r[4]+0x00000001u; // 801C78E0
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C78E4
  c->r[4]=c->r[30]+c->r[5]; // 801C78E8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C78EC
  c->r[3]=c->r[31]|c->r[31]; // 801C78F0
  c->lr=0x801C78F8u; f_801BE774(c); // 801C78F4
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C78F8
  c->r[4]=0u+0x801C0000u; // 801C78FC
  c->r[4]=c->r[4]+0x00007B58u; // 801C7900
  c->r[3]=R32(c->r[3]+0x00000010u); // 801C7904
  c->lr=0x801C790Cu; f_801CD1D4(c); // 801C7908
  goto L_801C7B38; // 801C790C
L_801C7910:;
  c->r[12]=R32(c->r[13]+0xFFFF9E2Cu); // 801C7910
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C7914
  c->ctr=c->r[12]; // 801C7918
  if (true) { c->lr=0x801C7920u; dispatch(c,c->ctr); } // 801C791C
  goto L_801C7B38; // 801C7920
L_801C7924:;
  c->r[0]=c->r[28]+0xFF000000u; // 801C7924
  cmpu(c,0,c->r[0],0x00000000u); // 801C7928
  if (!crb(c,2)) { goto L_801C79B0; } // 801C792C
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C7930
  c->r[0]=0u+0x00000005u; // 801C7934
  c->r[3]=0u+0x00000001u; // 801C7938
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C793C
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C7940
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C7944
  cmps(c,0,(int32_t)c->r[0],0); // 801C7948
  if (!crb(c,2)) { goto L_801C7B38; } // 801C794C
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C7950
  cmps(c,0,(int32_t)c->r[0],0); // 801C7954
  if (!crb(c,2)) { goto L_801C7B38; } // 801C7958
  c->r[30]=0u+0x80570000u; // 801C795C
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801C7960
  c->r[3]=c->r[30]+0xFFFFA4C0u; // 801C7964
  c->lr=0x801C796Cu; f_801B9774(c); // 801C7968
  c->lr=0x801C7970u; f_801C2594(c); // 801C796C
  c->r[5]=0u+0x80000000u; // 801C7970
  c->r[4]=0u+0x10620000u; // 801C7974
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C7978
  c->r[9]=0u+0x801D0000u; // 801C797C
  c->r[6]=c->r[3]|c->r[3]; // 801C7980
  c->r[4]=c->r[4]+0x00004DD3u; // 801C7984
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C7988
  c->r[3]=c->r[30]+0xFFFFA4C0u; // 801C798C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C7990
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C7994
  c->r[5]=0u+0x00000000u; // 801C7998
  c->r[7]=0u+0x00000000u; // 801C799C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C79A0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C79A4
  c->lr=0x801C79ACu; f_801B9A44(c); // 801C79A8
  goto L_801C7B38; // 801C79AC
L_801C79B0:;
  c->r[0]=c->r[28]+0xFE000000u; // 801C79B0
  cmpu(c,0,c->r[0],0x00000000u); // 801C79B4
  if (!crb(c,2)) { goto L_801C79D0; } // 801C79B8
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C79BC
  c->r[0]=0u+0x00000003u; // 801C79C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C79C4
  c->lr=0x801C79CCu; f_801C8F24(c); // 801C79C8
  goto L_801C7B38; // 801C79CC
L_801C79D0:;
  c->r[0]=c->r[28]+0xFD000000u; // 801C79D0
  cmpu(c,0,c->r[0],0x00000000u); // 801C79D4
  if (!crb(c,2)) { goto L_801C7A5C; } // 801C79D8
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C79DC
  c->r[0]=0u+0x00000004u; // 801C79E0
  c->r[3]=0u+0x00000001u; // 801C79E4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C79E8
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C79EC
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C79F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C79F4
  if (!crb(c,2)) { goto L_801C7B38; } // 801C79F8
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C79FC
  cmps(c,0,(int32_t)c->r[0],0); // 801C7A00
  if (!crb(c,2)) { goto L_801C7B38; } // 801C7A04
  c->r[30]=0u+0x80570000u; // 801C7A08
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801C7A0C
  c->r[3]=c->r[30]+0xFFFFA4C0u; // 801C7A10
  c->lr=0x801C7A18u; f_801B9774(c); // 801C7A14
  c->lr=0x801C7A1Cu; f_801C2594(c); // 801C7A18
  c->r[5]=0u+0x80000000u; // 801C7A1C
  c->r[4]=0u+0x10620000u; // 801C7A20
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C7A24
  c->r[9]=0u+0x801D0000u; // 801C7A28
  c->r[6]=c->r[3]|c->r[3]; // 801C7A2C
  c->r[4]=c->r[4]+0x00004DD3u; // 801C7A30
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C7A34
  c->r[3]=c->r[30]+0xFFFFA4C0u; // 801C7A38
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C7A3C
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C7A40
  c->r[5]=0u+0x00000000u; // 801C7A44
  c->r[7]=0u+0x00000000u; // 801C7A48
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C7A4C
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C7A50
  c->lr=0x801C7A58u; f_801B9A44(c); // 801C7A54
  goto L_801C7B38; // 801C7A58
L_801C7A5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C7A5C
  if (!crb(c,2)) { goto L_801C7B24; } // 801C7A60
  c->r[0]=c->r[29]+0xFFFB0000u; // 801C7A64
  cmpu(c,0,c->r[0],0x00003000u); // 801C7A68
  if (!crb(c,2)) { goto L_801C7B0C; } // 801C7A6C
  c->lr=0x801C7A74u; f_801BE74C(c); // 801C7A70
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7A74
  c->r[31]=c->r[3]|c->r[3]; // 801C7A78
  cmpu(c,0,c->r[0],0x00000005u); // 801C7A7C
  if (crb(c,0)) { goto L_801C7A8C; } // 801C7A80
  c->r[0]=0u+0x00000000u; // 801C7A84
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7A88
L_801C7A8C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7A8C
  c->r[30]=0u+0x80570000u; // 801C7A90
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C7A94
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C7A98
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7A9C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7AA0
  c->r[6]=0u+0x00000010u; // 801C7AA4
  c->r[4]=0u+0x00000000u; // 801C7AA8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C7AAC
  c->r[5]=c->r[30]+c->r[5]; // 801C7AB0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C7AB4
  c->r[3]=c->r[30]+c->r[3]; // 801C7AB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7ABC
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C7AC0
  c->r[3]=c->r[30]+c->r[0]; // 801C7AC4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C7AC8
  c->lr=0x801C7AD0u; f_801C2594(c); // 801C7ACC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7AD0
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C7AD4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7AD8
  c->r[0]=c->r[4]+0x00000001u; // 801C7ADC
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7AE0
  c->r[4]=c->r[30]+c->r[5]; // 801C7AE4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C7AE8
  c->r[3]=c->r[31]|c->r[31]; // 801C7AEC
  c->lr=0x801C7AF4u; f_801BE774(c); // 801C7AF0
  c->r[5]=0u+0x801D0000u; // 801C7AF4
  c->r[3]=0u+0x00000000u; // 801C7AF8
  c->r[5]=c->r[5]+0xFFFF8BC8u; // 801C7AFC
  c->r[4]=0u+0x00000000u; // 801C7B00
  c->lr=0x801C7B08u; f_801CC724(c); // 801C7B04
  goto L_801C7B38; // 801C7B08
L_801C7B0C:;
  c->r[3]=0u+0x01230000u; // 801C7B0C
  c->r[4]=0u+0x801C0000u; // 801C7B10
  c->r[3]=c->r[3]+0x00004567u; // 801C7B14
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7B18
  c->lr=0x801C7B20u; f_801CB994(c); // 801C7B1C
  goto L_801C7B38; // 801C7B20
L_801C7B24:;
  c->r[3]=0u+0x01230000u; // 801C7B24
  c->r[4]=0u+0x801C0000u; // 801C7B28
  c->r[3]=c->r[3]+0x00004567u; // 801C7B2C
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7B30
  c->lr=0x801C7B38u; f_801CB994(c); // 801C7B34
L_801C7B38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7B38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7B3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7B40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7B44
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7B48
  c->lr=c->r[0]; // 801C7B4C
  c->r[1]=c->r[1]+0x00000020u; // 801C7B50
  return; // 801C7B54
}

// cbForUnrecoveredError
void f_801C7B58(Ctx* __restrict c) {
  trace_call(0x801C7B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7B58
  c->r[0]=c->lr; // 801C7B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7B60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7B64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7B68
  c->r[30]=c->r[3]|c->r[3]; // 801C7B6C
  c->lr=0x801C7B74u; f_801BE74C(c); // 801C7B70
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7B74
  cmps(c,0,(int32_t)c->r[0],0); // 801C7B78
  if (!crb(c,2)) { goto L_801C7B90; } // 801C7B7C
  c->r[4]=0u+0x80570000u; // 801C7B80
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7B84
  W32(c->r[4]+0x00000078u,c->r[30]); // 801C7B88
  goto L_801C7BA8; // 801C7B8C
L_801C7B90:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7B90
  c->r[4]=0u+0x80570000u; // 801C7B94
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7B98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7B9C
  c->r[4]=c->r[4]+c->r[0]; // 801C7BA0
  W32(c->r[4]+0x00000014u,c->r[30]); // 801C7BA4
L_801C7BA8:;
  c->lr=0x801C7BACu; f_801BE774(c); // 801C7BA8
  cmpu(c,0,c->r[30],0x00000010u); // 801C7BAC
  if (!crb(c,2)) { goto L_801C7BCC; } // 801C7BB0
  c->r[3]=0u+0x01230000u; // 801C7BB4
  c->r[4]=0u+0x801C0000u; // 801C7BB8
  c->r[3]=c->r[3]+0x00004568u; // 801C7BBC
  c->r[4]=c->r[4]+0x00007460u; // 801C7BC0
  c->lr=0x801C7BC8u; f_801CB994(c); // 801C7BC4
  goto L_801C7D20; // 801C7BC8
L_801C7BCC:;
  cmpu(c,0,c->r[30],0x00000020u); // 801C7BCC
  if (!crb(c,2)) { goto L_801C7BEC; } // 801C7BD0
  c->r[3]=0u+0x01230000u; // 801C7BD4
  c->r[4]=0u+0x801C0000u; // 801C7BD8
  c->r[3]=c->r[3]+0x00004569u; // 801C7BDC
  c->r[4]=c->r[4]+0x00007460u; // 801C7BE0
  c->lr=0x801C7BE8u; f_801CB994(c); // 801C7BE4
  goto L_801C7D20; // 801C7BE8
L_801C7BEC:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801C7BEC
  if (crb(c,2)) { goto L_801C7C90; } // 801C7BF0
  c->lr=0x801C7BF8u; f_801BE74C(c); // 801C7BF4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7BF8
  c->r[31]=c->r[3]|c->r[3]; // 801C7BFC
  cmpu(c,0,c->r[0],0x00000005u); // 801C7C00
  if (crb(c,0)) { goto L_801C7C10; } // 801C7C04
  c->r[0]=0u+0x00000000u; // 801C7C08
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7C0C
L_801C7C10:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C10
  c->r[30]=0u+0x80570000u; // 801C7C14
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C18
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C7C1C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7C20
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C24
  c->r[6]=0u+0x00000010u; // 801C7C28
  c->r[4]=0u+0x00000000u; // 801C7C2C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C7C30
  c->r[5]=c->r[30]+c->r[5]; // 801C7C34
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C7C38
  c->r[3]=c->r[30]+c->r[3]; // 801C7C3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7C40
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C7C44
  c->r[3]=c->r[30]+c->r[0]; // 801C7C48
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C7C4C
  c->lr=0x801C7C54u; f_801C2594(c); // 801C7C50
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C54
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C58
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7C5C
  c->r[0]=c->r[4]+0x00000001u; // 801C7C60
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7C64
  c->r[4]=c->r[30]+c->r[5]; // 801C7C68
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C7C6C
  c->r[3]=c->r[31]|c->r[31]; // 801C7C70
  c->lr=0x801C7C78u; f_801BE774(c); // 801C7C74
  c->r[5]=0u+0x801C0000u; // 801C7C78
  c->r[3]=0u+0x00000000u; // 801C7C7C
  c->r[5]=c->r[5]+0x00007E0Cu; // 801C7C80
  c->r[4]=0u+0x00000000u; // 801C7C84
  c->lr=0x801C7C8Cu; f_801CC724(c); // 801C7C88
  goto L_801C7D20; // 801C7C8C
L_801C7C90:;
  c->lr=0x801C7C94u; f_801BE74C(c); // 801C7C90
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7C94
  c->r[31]=c->r[3]|c->r[3]; // 801C7C98
  cmpu(c,0,c->r[0],0x00000005u); // 801C7C9C
  if (crb(c,0)) { goto L_801C7CAC; } // 801C7CA0
  c->r[0]=0u+0x00000000u; // 801C7CA4
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7CA8
L_801C7CAC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7CAC
  c->r[30]=0u+0x80570000u; // 801C7CB0
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C7CB4
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C7CB8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7CBC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7CC0
  c->r[6]=0u+0x00000027u; // 801C7CC4
  c->r[4]=0u+0x00000000u; // 801C7CC8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C7CCC
  c->r[5]=c->r[30]+c->r[5]; // 801C7CD0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C7CD4
  c->r[3]=c->r[30]+c->r[3]; // 801C7CD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7CDC
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C7CE0
  c->r[3]=c->r[30]+c->r[0]; // 801C7CE4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C7CE8
  c->lr=0x801C7CF0u; f_801C2594(c); // 801C7CEC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7CF0
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C7CF4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7CF8
  c->r[0]=c->r[4]+0x00000001u; // 801C7CFC
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C7D00
  c->r[4]=c->r[30]+c->r[5]; // 801C7D04
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C7D08
  c->r[3]=c->r[31]|c->r[31]; // 801C7D0C
  c->lr=0x801C7D14u; f_801BE774(c); // 801C7D10
  c->r[3]=0u+0x801C0000u; // 801C7D14
  c->r[3]=c->r[3]+0x00007D38u; // 801C7D18
  c->lr=0x801C7D20u; f_801CCA20(c); // 801C7D1C
L_801C7D20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7D20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7D24
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7D28
  c->lr=c->r[0]; // 801C7D2C
  c->r[1]=c->r[1]+0x00000010u; // 801C7D30
  return; // 801C7D34
}

// cbForUnrecoveredErrorRetry
void f_801C7D38(Ctx* __restrict c) {
  trace_call(0x801C7D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7D38
  c->r[0]=c->lr; // 801C7D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7D44
  c->r[31]=c->r[3]|c->r[3]; // 801C7D48
  c->lr=0x801C7D50u; f_801BE74C(c); // 801C7D4C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7D50
  cmps(c,0,(int32_t)c->r[0],0); // 801C7D54
  if (!crb(c,2)) { goto L_801C7D6C; } // 801C7D58
  c->r[4]=0u+0x80570000u; // 801C7D5C
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7D60
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C7D64
  goto L_801C7D84; // 801C7D68
L_801C7D6C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7D6C
  c->r[4]=0u+0x80570000u; // 801C7D70
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7D74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7D78
  c->r[4]=c->r[4]+c->r[0]; // 801C7D7C
  W32(c->r[4]+0x00000014u,c->r[31]); // 801C7D80
L_801C7D84:;
  c->lr=0x801C7D88u; f_801BE774(c); // 801C7D84
  cmpu(c,0,c->r[31],0x00000010u); // 801C7D88
  if (!crb(c,2)) { goto L_801C7DA8; } // 801C7D8C
  c->r[3]=0u+0x01230000u; // 801C7D90
  c->r[4]=0u+0x801C0000u; // 801C7D94
  c->r[3]=c->r[3]+0x00004568u; // 801C7D98
  c->r[4]=c->r[4]+0x00007460u; // 801C7D9C
  c->lr=0x801C7DA4u; f_801CB994(c); // 801C7DA0
  goto L_801C7DF8; // 801C7DA4
L_801C7DA8:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C7DA8
  if (!crb(c,2)) { goto L_801C7DC8; } // 801C7DAC
  c->r[3]=0u+0x01230000u; // 801C7DB0
  c->r[4]=0u+0x801C0000u; // 801C7DB4
  c->r[3]=c->r[3]+0x00004569u; // 801C7DB8
  c->r[4]=c->r[4]+0x00007460u; // 801C7DBC
  c->lr=0x801C7DC4u; f_801CB994(c); // 801C7DC0
  goto L_801C7DF8; // 801C7DC4
L_801C7DC8:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C7DC8
  if (crb(c,2)) { goto L_801C7DE8; } // 801C7DCC
  c->r[3]=0u+0x01230000u; // 801C7DD0
  c->r[4]=0u+0x801C0000u; // 801C7DD4
  c->r[3]=c->r[3]+0x00004567u; // 801C7DD8
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7DDC
  c->lr=0x801C7DE4u; f_801CB994(c); // 801C7DE0
  goto L_801C7DF8; // 801C7DE4
L_801C7DE8:;
  c->lr=0x801C7DECu; f_801CD4C8(c); // 801C7DE8
  c->r[4]=0u+0x801C0000u; // 801C7DEC
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7DF0
  c->lr=0x801C7DF8u; f_801CB994(c); // 801C7DF4
L_801C7DF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7DF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7DFC
  c->lr=c->r[0]; // 801C7E00
  c->r[1]=c->r[1]+0x00000010u; // 801C7E04
  return; // 801C7E08
}

// fn_801C7E0C
void f_801C7E0C(Ctx* __restrict c) {
  trace_call(0x801C7E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7E0C
  c->r[0]=c->lr; // 801C7E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7E18
  c->r[31]=c->r[3]|c->r[3]; // 801C7E1C
  c->lr=0x801C7E24u; f_801BE74C(c); // 801C7E20
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7E24
  cmps(c,0,(int32_t)c->r[0],0); // 801C7E28
  if (!crb(c,2)) { goto L_801C7E40; } // 801C7E2C
  c->r[4]=0u+0x80570000u; // 801C7E30
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7E34
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C7E38
  goto L_801C7E58; // 801C7E3C
L_801C7E40:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C7E40
  c->r[4]=0u+0x80570000u; // 801C7E44
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C7E48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C7E4C
  c->r[4]=c->r[4]+c->r[0]; // 801C7E50
  W32(c->r[4]+0x00000014u,c->r[31]); // 801C7E54
L_801C7E58:;
  c->lr=0x801C7E5Cu; f_801BE774(c); // 801C7E58
  cmpu(c,0,c->r[31],0x00000010u); // 801C7E5C
  if (!crb(c,2)) { goto L_801C7E7C; } // 801C7E60
  c->r[3]=0u+0x01230000u; // 801C7E64
  c->r[4]=0u+0x801C0000u; // 801C7E68
  c->r[3]=c->r[3]+0x00004568u; // 801C7E6C
  c->r[4]=c->r[4]+0x00007460u; // 801C7E70
  c->lr=0x801C7E78u; f_801CB994(c); // 801C7E74
  goto L_801C8020; // 801C7E78
L_801C7E7C:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C7E7C
  if (!crb(c,2)) { goto L_801C7E9C; } // 801C7E80
  c->r[3]=0u+0x01230000u; // 801C7E84
  c->r[4]=0u+0x801C0000u; // 801C7E88
  c->r[3]=c->r[3]+0x00004569u; // 801C7E8C
  c->r[4]=c->r[4]+0x00007460u; // 801C7E90
  c->lr=0x801C7E98u; f_801CB994(c); // 801C7E94
  goto L_801C8020; // 801C7E98
L_801C7E9C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C7E9C
  if (crb(c,2)) { goto L_801C7EBC; } // 801C7EA0
  c->r[3]=0u+0x01230000u; // 801C7EA4
  c->r[4]=0u+0x801C0000u; // 801C7EA8
  c->r[3]=c->r[3]+0x00004567u; // 801C7EAC
  c->r[4]=c->r[4]+0x0000744Cu; // 801C7EB0
  c->lr=0x801C7EB8u; f_801CB994(c); // 801C7EB4
  goto L_801C8020; // 801C7EB8
L_801C7EBC:;
  c->r[0]=0u+0x00000000u; // 801C7EBC
  W32(c->r[13]+0xFFFF9DC0u,c->r[0]); // 801C7EC0
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7EC4
  cmpu(c,0,c->r[0],0x00000004u); // 801C7EC8
  if (crb(c,2)) { goto L_801C7F18; } // 801C7ECC
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7ED0
  cmpu(c,0,c->r[0],0x00000005u); // 801C7ED4
  if (crb(c,2)) { goto L_801C7F18; } // 801C7ED8
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7EDC
  cmpu(c,0,c->r[0],0x0000000Du); // 801C7EE0
  if (crb(c,2)) { goto L_801C7F18; } // 801C7EE4
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7EE8
  cmpu(c,0,c->r[0],0x00000021u); // 801C7EEC
  if (crb(c,2)) { goto L_801C7F18; } // 801C7EF0
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7EF4
  cmpu(c,0,c->r[0],0x00000022u); // 801C7EF8
  if (crb(c,2)) { goto L_801C7F18; } // 801C7EFC
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7F00
  cmpu(c,0,c->r[0],0x0000000Fu); // 801C7F04
  if (crb(c,2)) { goto L_801C7F18; } // 801C7F08
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C7F0C
  cmpu(c,0,c->r[0],0x00000025u); // 801C7F10
  if (!crb(c,2)) { goto L_801C7F20; } // 801C7F14
L_801C7F18:;
  c->r[0]=0u+0x00000001u; // 801C7F18
  W32(c->r[13]+0xFFFF9E0Cu,c->r[0]); // 801C7F1C
L_801C7F20:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C7F20
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F24
  if (crb(c,2)) { goto L_801C7F98; } // 801C7F28
  c->r[3]=0u+0x80570000u; // 801C7F2C
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801C7F30
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C7F34
  c->r[0]=0u+0x00000002u; // 801C7F38
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C7F3C
  c->r[4]=0u+0x00000000u; // 801C7F40
  c->r[0]=0u+0x0000000Au; // 801C7F44
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801C7F48
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C7F4C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C7F50
  c->r[12]=R32(c->r[31]+0x00000028u); // 801C7F54
  cmps(c,0,(int32_t)c->r[12],0); // 801C7F58
  if (crb(c,2)) { goto L_801C7F70; } // 801C7F5C
  c->r[4]=c->r[31]|c->r[31]; // 801C7F60
  c->r[3]=0u+0xFFFFFFFDu; // 801C7F64
  c->ctr=c->r[12]; // 801C7F68
  if (true) { c->lr=0x801C7F70u; dispatch(c,c->ctr); } // 801C7F6C
L_801C7F70:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C7F70
  cmps(c,0,(int32_t)c->r[12],0); // 801C7F74
  if (crb(c,2)) { goto L_801C7F8C; } // 801C7F78
  c->r[4]=c->r[31]|c->r[31]; // 801C7F7C
  c->r[3]=0u+0x00000000u; // 801C7F80
  c->ctr=c->r[12]; // 801C7F84
  if (true) { c->lr=0x801C7F8Cu; dispatch(c,c->ctr); } // 801C7F88
L_801C7F8C:;
  c->lr=0x801C7F90u; f_801C9828(c); // 801C7F8C
  c->r[0]=0u+0x00000001u; // 801C7F90
  goto L_801C7F9C; // 801C7F94
L_801C7F98:;
  c->r[0]=0u+0x00000000u; // 801C7F98
L_801C7F9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F9C
  if (!crb(c,2)) { goto L_801C8020; } // 801C7FA0
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C7FA4
  c->r[0]=0u+0x0000000Bu; // 801C7FA8
  c->r[3]=0u+0x00000001u; // 801C7FAC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C7FB0
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C7FB4
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C7FB8
  cmps(c,0,(int32_t)c->r[0],0); // 801C7FBC
  if (!crb(c,2)) { goto L_801C8020; } // 801C7FC0
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C7FC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C7FC8
  if (!crb(c,2)) { goto L_801C8020; } // 801C7FCC
  c->r[31]=0u+0x80570000u; // 801C7FD0
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801C7FD4
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C7FD8
  c->lr=0x801C7FE0u; f_801B9774(c); // 801C7FDC
  c->lr=0x801C7FE4u; f_801C2594(c); // 801C7FE0
  c->r[5]=0u+0x80000000u; // 801C7FE4
  c->r[4]=0u+0x10620000u; // 801C7FE8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C7FEC
  c->r[9]=0u+0x801D0000u; // 801C7FF0
  c->r[6]=c->r[3]|c->r[3]; // 801C7FF4
  c->r[4]=c->r[4]+0x00004DD3u; // 801C7FF8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C7FFC
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C8000
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C8004
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C8008
  c->r[5]=0u+0x00000000u; // 801C800C
  c->r[7]=0u+0x00000000u; // 801C8010
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C8014
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C8018
  c->lr=0x801C8020u; f_801B9A44(c); // 801C801C
L_801C8020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8024
  c->lr=c->r[0]; // 801C8028
  c->r[1]=c->r[1]+0x00000010u; // 801C802C
  return; // 801C8030
}

// stateCheckID
void f_801C8034(Ctx* __restrict c) {
  trace_call(0x801C8034u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8034
  c->r[0]=c->lr; // 801C8038
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C803C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8040
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8044
  c->r[30]=0u+0x80570000u; // 801C8048
  c->r[30]=c->r[30]+0xFFFFA440u; // 801C804C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8050
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C8054
  cmps(c,0,(int32_t)c->r[0],3); // 801C8058
  if (crb(c,2)) { goto L_801C8064; } // 801C805C
  goto L_801C81F0; // 801C8060
L_801C8064:;
  c->r[31]=0u+0x00000000u; // 801C8064
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C8068
  W32(c->r[13]+0xFFFF9DDCu,c->r[31]); // 801C806C
  c->r[3]=c->r[30]+0x000000C0u; // 801C8070
  c->r[4]=R32(c->r[4]+0x00000024u); // 801C8074
  c->lr=0x801C807Cu; f_801CBA38(c); // 801C8078
  cmps(c,0,(int32_t)c->r[3],0); // 801C807C
  if (crb(c,2)) { goto L_801C8158; } // 801C8080
  c->r[3]=R32(c->r[13]+0xFFFF9E24u); // 801C8084
  c->r[4]=c->r[30]+0x000000C0u; // 801C8088
  c->r[5]=0u+0x00000020u; // 801C808C
  c->lr=0x801C8094u; f_80004338(c); // 801C8090
  c->r[5]=R32(c->r[13]+0xFFFF9E28u); // 801C8094
  c->r[0]=0u+0x00000001u; // 801C8098
  c->r[3]=c->r[30]+0x00000000u; // 801C809C
  c->r[4]=0u+0x00000020u; // 801C80A0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801C80A4
  c->lr=0x801C80ACu; f_801BA764(c); // 801C80A8
  W32(c->r[13]+0xFFFF9DC0u,c->r[31]); // 801C80AC
  c->r[3]=0u+0x00000000u; // 801C80B0
  c->lr=0x801C80B8u; f_801CD4E4(c); // 801C80B4
  c->lr=0x801C80BCu; f_801BE74C(c); // 801C80B8
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C80BC
  c->r[29]=c->r[3]|c->r[3]; // 801C80C0
  cmpu(c,0,c->r[0],0x00000005u); // 801C80C4
  if (crb(c,0)) { goto L_801C80D0; } // 801C80C8
  W32(c->r[13]+0xFFFF9DA8u,c->r[31]); // 801C80CC
L_801C80D0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C80D0
  c->r[31]=0u+0x80570000u; // 801C80D4
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C80D8
  c->r[31]=c->r[31]+0xFFFFF1A0u; // 801C80DC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C80E0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C80E4
  c->r[7]=0u+0x00000021u; // 801C80E8
  c->r[5]=0u+0x00010000u; // 801C80EC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C80F0
  c->r[4]=0u+0x00000020u; // 801C80F4
  c->r[6]=c->r[31]+c->r[6]; // 801C80F8
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C80FC
  c->r[3]=c->r[31]+c->r[3]; // 801C8100
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8104
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C8108
  c->r[3]=c->r[31]+c->r[0]; // 801C810C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C8110
  c->lr=0x801C8118u; f_801C2594(c); // 801C8114
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8118
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C811C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8120
  c->r[0]=c->r[4]+0x00000001u; // 801C8124
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C8128
  c->r[4]=c->r[31]+c->r[5]; // 801C812C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C8130
  c->r[3]=c->r[29]|c->r[29]; // 801C8134
  c->lr=0x801C813Cu; f_801BE774(c); // 801C8138
  c->r[6]=0u+0x801D0000u; // 801C813C
  c->r[3]=c->r[30]+0x000000E0u; // 801C8140
  c->r[6]=c->r[6]+0xFFFF836Cu; // 801C8144
  c->r[4]=0u+0x00000020u; // 801C8148
  c->r[5]=0u+0x00010000u; // 801C814C
  c->lr=0x801C8154u; f_801CC590(c); // 801C8150
  goto L_801C8350; // 801C8154
L_801C8158:;
  c->lr=0x801C815Cu; f_801BE74C(c); // 801C8158
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C815C
  c->r[29]=c->r[3]|c->r[3]; // 801C8160
  cmpu(c,0,c->r[0],0x00000005u); // 801C8164
  if (crb(c,0)) { goto L_801C8170; } // 801C8168
  W32(c->r[13]+0xFFFF9DA8u,c->r[31]); // 801C816C
L_801C8170:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8170
  c->r[30]=0u+0x80570000u; // 801C8174
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C8178
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C817C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8180
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8184
  c->r[6]=0u+0x00000010u; // 801C8188
  c->r[4]=0u+0x00000000u; // 801C818C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C8190
  c->r[5]=c->r[30]+c->r[5]; // 801C8194
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C8198
  c->r[3]=c->r[30]+c->r[3]; // 801C819C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C81A0
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C81A4
  c->r[3]=c->r[30]+c->r[0]; // 801C81A8
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C81AC
  c->lr=0x801C81B4u; f_801C2594(c); // 801C81B0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C81B4
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C81B8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C81BC
  c->r[0]=c->r[4]+0x00000001u; // 801C81C0
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C81C4
  c->r[4]=c->r[30]+c->r[5]; // 801C81C8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C81CC
  c->r[3]=c->r[29]|c->r[29]; // 801C81D0
  c->lr=0x801C81D8u; f_801BE774(c); // 801C81D4
  c->r[5]=0u+0x801D0000u; // 801C81D8
  c->r[3]=0u+0x00000000u; // 801C81DC
  c->r[5]=c->r[5]+0xFFFF8BC8u; // 801C81E0
  c->r[4]=0u+0x00000000u; // 801C81E4
  c->lr=0x801C81ECu; f_801CC724(c); // 801C81E8
  goto L_801C8350; // 801C81EC
L_801C81F0:;
  c->r[4]=R32(c->r[13]+0xFFFF9E24u); // 801C81F0
  c->r[3]=c->r[30]+0x000000C0u; // 801C81F4
  c->r[5]=0u+0x00000020u; // 801C81F8
  c->lr=0x801C8200u; f_801ECA38(c); // 801C81FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C8200
  if (crb(c,2)) { goto L_801C82A4; } // 801C8204
  c->lr=0x801C820Cu; f_801BE74C(c); // 801C8208
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C820C
  c->r[29]=c->r[3]|c->r[3]; // 801C8210
  cmpu(c,0,c->r[0],0x00000005u); // 801C8214
  if (crb(c,0)) { goto L_801C8224; } // 801C8218
  c->r[0]=0u+0x00000000u; // 801C821C
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C8220
L_801C8224:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8224
  c->r[30]=0u+0x80570000u; // 801C8228
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C822C
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C8230
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8234
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8238
  c->r[6]=0u+0x00000010u; // 801C823C
  c->r[4]=0u+0x00000000u; // 801C8240
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C8244
  c->r[5]=c->r[30]+c->r[5]; // 801C8248
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C824C
  c->r[3]=c->r[30]+c->r[3]; // 801C8250
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8254
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C8258
  c->r[3]=c->r[30]+c->r[0]; // 801C825C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C8260
  c->lr=0x801C8268u; f_801C2594(c); // 801C8264
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8268
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C826C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8270
  c->r[0]=c->r[4]+0x00000001u; // 801C8274
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C8278
  c->r[4]=c->r[30]+c->r[5]; // 801C827C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C8280
  c->r[3]=c->r[29]|c->r[29]; // 801C8284
  c->lr=0x801C828Cu; f_801BE774(c); // 801C8288
  c->r[5]=0u+0x801D0000u; // 801C828C
  c->r[3]=0u+0x00000000u; // 801C8290
  c->r[5]=c->r[5]+0xFFFF8BC8u; // 801C8294
  c->r[4]=0u+0x00000000u; // 801C8298
  c->lr=0x801C82A0u; f_801CC724(c); // 801C829C
  goto L_801C8350; // 801C82A0
L_801C82A4:;
  c->r[31]=0u+0x00000000u; // 801C82A4
  c->r[3]=0u+0x00000000u; // 801C82A8
  W32(c->r[13]+0xFFFF9DC0u,c->r[31]); // 801C82AC
  c->lr=0x801C82B4u; f_801CD4E4(c); // 801C82B0
  c->lr=0x801C82B8u; f_801BE74C(c); // 801C82B4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C82B8
  c->r[29]=c->r[3]|c->r[3]; // 801C82BC
  cmpu(c,0,c->r[0],0x00000005u); // 801C82C0
  if (crb(c,0)) { goto L_801C82CC; } // 801C82C4
  W32(c->r[13]+0xFFFF9DA8u,c->r[31]); // 801C82C8
L_801C82CC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C82CC
  c->r[31]=0u+0x80570000u; // 801C82D0
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C82D4
  c->r[31]=c->r[31]+0xFFFFF1A0u; // 801C82D8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C82DC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C82E0
  c->r[7]=0u+0x00000021u; // 801C82E4
  c->r[5]=0u+0x00010000u; // 801C82E8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C82EC
  c->r[4]=0u+0x00000020u; // 801C82F0
  c->r[6]=c->r[31]+c->r[6]; // 801C82F4
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C82F8
  c->r[3]=c->r[31]+c->r[3]; // 801C82FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8300
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C8304
  c->r[3]=c->r[31]+c->r[0]; // 801C8308
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C830C
  c->lr=0x801C8314u; f_801C2594(c); // 801C8310
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8314
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C8318
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C831C
  c->r[0]=c->r[4]+0x00000001u; // 801C8320
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C8324
  c->r[4]=c->r[31]+c->r[5]; // 801C8328
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C832C
  c->r[3]=c->r[29]|c->r[29]; // 801C8330
  c->lr=0x801C8338u; f_801BE774(c); // 801C8334
  c->r[6]=0u+0x801D0000u; // 801C8338
  c->r[3]=c->r[30]+0x000000E0u; // 801C833C
  c->r[6]=c->r[6]+0xFFFF836Cu; // 801C8340
  c->r[4]=0u+0x00000020u; // 801C8344
  c->r[5]=0u+0x00010000u; // 801C8348
  c->lr=0x801C8350u; f_801CC590(c); // 801C834C
L_801C8350:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8354
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8358
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C835C
  c->lr=c->r[0]; // 801C8360
  c->r[1]=c->r[1]+0x00000020u; // 801C8364
  return; // 801C8368
}

// cbForStateReadingTOC
void f_801C836C(Ctx* __restrict c) {
  trace_call(0x801C836Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C836C
  c->r[0]=c->lr; // 801C8370
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8374
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8378
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C837C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8380
  c->r[29]=c->r[3]|c->r[3]; // 801C8384
  c->lr=0x801C838Cu; f_801BE74C(c); // 801C8388
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C838C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8390
  if (!crb(c,2)) { goto L_801C83A8; } // 801C8394
  c->r[4]=0u+0x80570000u; // 801C8398
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C839C
  W32(c->r[4]+0x00000078u,c->r[29]); // 801C83A0
  goto L_801C83C4; // 801C83A4
L_801C83A8:;
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C83A8
  c->r[5]=0u+0x80570000u; // 801C83AC
  c->r[5]=c->r[5]+0xFFFFF1A0u; // 801C83B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C83B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C83B8
  c->r[4]=c->r[5]+c->r[0]; // 801C83BC
  W32(c->r[4]+0x00000028u,c->r[29]); // 801C83C0
L_801C83C4:;
  c->lr=0x801C83C8u; f_801BE774(c); // 801C83C4
  cmpu(c,0,c->r[29],0x00000010u); // 801C83C8
  if (!crb(c,2)) { goto L_801C83E8; } // 801C83CC
  c->r[3]=0u+0x01230000u; // 801C83D0
  c->r[4]=0u+0x801C0000u; // 801C83D4
  c->r[3]=c->r[3]+0x00004568u; // 801C83D8
  c->r[4]=c->r[4]+0x00007460u; // 801C83DC
  c->lr=0x801C83E4u; f_801CB994(c); // 801C83E0
  goto L_801C84F0; // 801C83E4
L_801C83E8:;
  cmpu(c,0,c->r[29],0x00000020u); // 801C83E8
  if (!crb(c,2)) { goto L_801C8408; } // 801C83EC
  c->r[3]=0u+0x01230000u; // 801C83F0
  c->r[4]=0u+0x801C0000u; // 801C83F4
  c->r[3]=c->r[3]+0x00004569u; // 801C83F8
  c->r[4]=c->r[4]+0x00007460u; // 801C83FC
  c->lr=0x801C8404u; f_801CB994(c); // 801C8400
  goto L_801C84F0; // 801C8404
L_801C8408:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801C8408
  if (crb(c,2)) { goto L_801C84D4; } // 801C840C
  c->r[4]=0u+0x80570000u; // 801C8410
  c->r[29]=0u+0x00000000u; // 801C8414
  c->r[4]=c->r[4]+0xFFFFA520u; // 801C8418
  W32(c->r[13]+0xFFFF9DC0u,c->r[29]); // 801C841C
  c->r[3]=0u+0x00000000u; // 801C8420
  W32(c->r[13]+0xFFFF9DFCu,c->r[4]); // 801C8424
  c->lr=0x801C842Cu; f_801CD4E4(c); // 801C8428
  c->lr=0x801C8430u; f_801BE74C(c); // 801C842C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8430
  c->r[30]=c->r[3]|c->r[3]; // 801C8434
  cmpu(c,0,c->r[0],0x00000005u); // 801C8438
  if (crb(c,0)) { goto L_801C8444; } // 801C843C
  W32(c->r[13]+0xFFFF9DA8u,c->r[29]); // 801C8440
L_801C8444:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8444
  c->r[31]=0u+0x80570000u; // 801C8448
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C844C
  c->r[29]=0u+0x00010000u; // 801C8450
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8454
  c->r[31]=c->r[31]+0xFFFFF1A0u; // 801C8458
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C845C
  c->r[6]=0u+0x00000021u; // 801C8460
  c->r[5]=c->r[29]+0x00000008u; // 801C8464
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C8468
  c->r[4]=c->r[31]+c->r[4]; // 801C846C
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 801C8470
  c->r[3]=c->r[31]+c->r[3]; // 801C8474
  c->r[4]=0u+0x00000020u; // 801C8478
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C847C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C8480
  c->r[3]=c->r[31]+c->r[0]; // 801C8484
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C8488
  c->lr=0x801C8490u; f_801C2594(c); // 801C848C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8490
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C8494
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8498
  c->r[0]=c->r[4]+0x00000001u; // 801C849C
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C84A0
  c->r[4]=c->r[31]+c->r[5]; // 801C84A4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C84A8
  c->r[3]=c->r[30]|c->r[30]; // 801C84AC
  c->lr=0x801C84B4u; f_801BE774(c); // 801C84B0
  c->r[3]=0u+0x80570000u; // 801C84B4
  c->r[6]=0u+0x801D0000u; // 801C84B8
  c->r[5]=c->r[29]+0x00000008u; // 801C84BC
  c->r[4]=0u+0x00000020u; // 801C84C0
  c->r[3]=c->r[3]+0xFFFFA540u; // 801C84C4
  c->r[6]=c->r[6]+0xFFFF850Cu; // 801C84C8
  c->lr=0x801C84D0u; f_801CC590(c); // 801C84CC
  goto L_801C84F0; // 801C84D0
L_801C84D4:;
  c->r[3]=0u+0x00000027u; // 801C84D4
  c->r[4]=0u+0x00000000u; // 801C84D8
  c->r[5]=0u+0x00000000u; // 801C84DC
  c->lr=0x801C84E4u; f_801C6EA4(c); // 801C84E0
  c->r[3]=0u+0x801C0000u; // 801C84E4
  c->r[3]=c->r[3]+0x00007654u; // 801C84E8
  c->lr=0x801C84F0u; f_801CCA20(c); // 801C84EC
L_801C84F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C84F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C84F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C84F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C84FC
  c->lr=c->r[0]; // 801C8500
  c->r[1]=c->r[1]+0x00000020u; // 801C8504
  return; // 801C8508
}

// fn_801C850C
void f_801C850C(Ctx* __restrict c) {
  trace_call(0x801C850Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C850C
  c->r[0]=c->lr; // 801C8510
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8514
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8518
  c->r[31]=0u+0x80570000u; // 801C851C
  c->r[31]=c->r[31]+0xFFFFA440u; // 801C8520
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8524
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8528
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C852C
  c->r[28]=c->r[3]|c->r[3]; // 801C8530
  c->lr=0x801C8538u; f_801BE74C(c); // 801C8534
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8538
  cmps(c,0,(int32_t)c->r[0],0); // 801C853C
  if (!crb(c,2)) { goto L_801C8554; } // 801C8540
  c->r[4]=0u+0x80570000u; // 801C8544
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8548
  W32(c->r[4]+0x00000078u,c->r[28]); // 801C854C
  goto L_801C8570; // 801C8550
L_801C8554:;
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C8554
  c->r[5]=0u+0x80570000u; // 801C8558
  c->r[5]=c->r[5]+0xFFFFF1A0u; // 801C855C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C8560
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8564
  c->r[4]=c->r[5]+c->r[0]; // 801C8568
  W32(c->r[4]+0x00000028u,c->r[28]); // 801C856C
L_801C8570:;
  c->lr=0x801C8574u; f_801BE774(c); // 801C8570
  cmpu(c,0,c->r[28],0x00000010u); // 801C8574
  if (!crb(c,2)) { goto L_801C8594; } // 801C8578
  c->r[3]=0u+0x01230000u; // 801C857C
  c->r[4]=0u+0x801C0000u; // 801C8580
  c->r[3]=c->r[3]+0x00004568u; // 801C8584
  c->r[4]=c->r[4]+0x00007460u; // 801C8588
  c->lr=0x801C8590u; f_801CB994(c); // 801C858C
  goto L_801C88BC; // 801C8590
L_801C8594:;
  cmpu(c,0,c->r[28],0x00000020u); // 801C8594
  if (!crb(c,2)) { goto L_801C85B4; } // 801C8598
  c->r[3]=0u+0x01230000u; // 801C859C
  c->r[4]=0u+0x801C0000u; // 801C85A0
  c->r[3]=c->r[3]+0x00004569u; // 801C85A4
  c->r[4]=c->r[4]+0x00007460u; // 801C85A8
  c->lr=0x801C85B0u; f_801CB994(c); // 801C85AC
  goto L_801C88BC; // 801C85B0
L_801C85B4:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 801C85B4
  if (crb(c,2)) { goto L_801C88A0; } // 801C85B8
  c->r[6]=0u+0x00000000u; // 801C85BC
  c->r[3]=c->r[31]+0x00000100u; // 801C85C0
  W32(c->r[13]+0xFFFF9DC0u,c->r[6]); // 801C85C4
  c->r[7]=0u+0x00000000u; // 801C85C8
  c->r[4]=R32(c->r[13]+0xFFFF9DFCu); // 801C85CC
  W32(c->r[13]+0xFFFF9DF8u,c->r[3]); // 801C85D0
  W32(c->r[13]+0xFFFF9DF4u,c->r[6]); // 801C85D4
  goto L_801C85FC; // 801C85D8
L_801C85DC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C85DC
  cmps(c,0,(int32_t)c->r[0],0); // 801C85E0
  if (!crb(c,2)) { goto L_801C85F0; } // 801C85E4
  c->r[6]=c->r[3]|c->r[3]; // 801C85E8
  W32(c->r[13]+0xFFFF9DF4u,c->r[3]); // 801C85EC
L_801C85F0:;
  c->r[3]=c->r[3]+0x00000008u; // 801C85F0
  c->r[7]=c->r[7]+0x00000001u; // 801C85F4
  W32(c->r[13]+0xFFFF9DF8u,c->r[3]); // 801C85F8
L_801C85FC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801C85FC
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801C8600
  cmpu(c,0,c->r[5],c->r[0]); // 801C8604
  if (crb(c,0)) { IRQCHK(c); goto L_801C85DC; } // 801C8608
  cmps(c,0,(int32_t)c->r[6],0); // 801C860C
  if (crb(c,2)) { goto L_801C87A4; } // 801C8610
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C8614
  cmps(c,0,(int32_t)c->r[0],3); // 801C8618
  if (crb(c,2)) { goto L_801C8624; } // 801C861C
  goto L_801C86E4; // 801C8620
L_801C8624:;
  c->r[29]=0u+0x00000000u; // 801C8624
  c->r[3]=0u+0x00000000u; // 801C8628
  W32(c->r[13]+0xFFFF9DC0u,c->r[29]); // 801C862C
  c->lr=0x801C8634u; f_801CD4E4(c); // 801C8630
  c->r[3]=R32(c->r[13]+0xFFFF9DF4u); // 801C8634
  c->r[28]=R32(c->r[3]+0x00000000u); // 801C8638
  c->lr=0x801C8640u; f_801BE74C(c); // 801C863C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8640
  c->r[30]=c->r[3]|c->r[3]; // 801C8644
  cmpu(c,0,c->r[0],0x00000005u); // 801C8648
  if (crb(c,0)) { goto L_801C8654; } // 801C864C
  W32(c->r[13]+0xFFFF9DA8u,c->r[29]); // 801C8650
L_801C8654:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8654
  c->r[29]=0u+0x80570000u; // 801C8658
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C865C
  c->r[29]=c->r[29]+0xFFFFF1A0u; // 801C8660
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8664
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8668
  c->r[6]=0u+0x00000022u; // 801C866C
  c->r[4]=0u+0x00000000u; // 801C8670
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C8674
  c->r[5]=c->r[29]+c->r[5]; // 801C8678
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C867C
  c->r[3]=c->r[29]+c->r[3]; // 801C8680
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8684
  W32(c->r[3]+0x00000020u,c->r[28]); // 801C8688
  c->r[3]=c->r[29]+c->r[0]; // 801C868C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C8690
  c->lr=0x801C8698u; f_801C2594(c); // 801C8694
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8698
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C869C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C86A0
  c->r[0]=c->r[4]+0x00000001u; // 801C86A4
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C86A8
  c->r[4]=c->r[29]+c->r[5]; // 801C86AC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C86B0
  c->r[3]=c->r[30]|c->r[30]; // 801C86B4
  c->lr=0x801C86BCu; f_801BE774(c); // 801C86B8
  c->r[3]=R32(c->r[13]+0xFFFF9DF4u); // 801C86BC
  c->r[8]=0u+0x801D0000u; // 801C86C0
  c->r[7]=c->r[31]+0x00000140u; // 801C86C4
  c->r[4]=0u+0x00000000u; // 801C86C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C86CC
  c->r[8]=c->r[8]+0xFFFF88DCu; // 801C86D0
  c->r[5]=0u+0x00000000u; // 801C86D4
  c->r[6]=0u+0x00000000u; // 801C86D8
  c->lr=0x801C86E0u; f_801CC1C4(c); // 801C86DC
  goto L_801C88BC; // 801C86E0
L_801C86E4:;
  c->r[29]=0u+0x00000000u; // 801C86E4
  c->r[3]=0u+0x00000000u; // 801C86E8
  W32(c->r[13]+0xFFFF9DC0u,c->r[29]); // 801C86EC
  c->lr=0x801C86F4u; f_801CD4E4(c); // 801C86F0
  c->r[3]=R32(c->r[13]+0xFFFF9DF4u); // 801C86F4
  c->r[28]=R32(c->r[3]+0x00000000u); // 801C86F8
  c->lr=0x801C8700u; f_801BE74C(c); // 801C86FC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8700
  c->r[30]=c->r[3]|c->r[3]; // 801C8704
  cmpu(c,0,c->r[0],0x00000005u); // 801C8708
  if (crb(c,0)) { goto L_801C8714; } // 801C870C
  W32(c->r[13]+0xFFFF9DA8u,c->r[29]); // 801C8710
L_801C8714:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8714
  c->r[29]=0u+0x80570000u; // 801C8718
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C871C
  c->r[29]=c->r[29]+0xFFFFF1A0u; // 801C8720
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8724
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8728
  c->r[6]=0u+0x00000022u; // 801C872C
  c->r[4]=0u+0x00000000u; // 801C8730
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C8734
  c->r[5]=c->r[29]+c->r[5]; // 801C8738
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C873C
  c->r[3]=c->r[29]+c->r[3]; // 801C8740
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8744
  W32(c->r[3]+0x00000020u,c->r[28]); // 801C8748
  c->r[3]=c->r[29]+c->r[0]; // 801C874C
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C8750
  c->lr=0x801C8758u; f_801C2594(c); // 801C8754
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8758
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C875C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8760
  c->r[0]=c->r[4]+0x00000001u; // 801C8764
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C8768
  c->r[4]=c->r[29]+c->r[5]; // 801C876C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C8770
  c->r[3]=c->r[30]|c->r[30]; // 801C8774
  c->lr=0x801C877Cu; f_801BE774(c); // 801C8778
  c->r[3]=R32(c->r[13]+0xFFFF9DF4u); // 801C877C
  c->r[8]=0u+0x801D0000u; // 801C8780
  c->r[7]=c->r[31]+0x00000140u; // 801C8784
  c->r[4]=0u+0x00000000u; // 801C8788
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C878C
  c->r[8]=c->r[8]+0xFFFF8A64u; // 801C8790
  c->r[5]=0u+0x00000000u; // 801C8794
  c->r[6]=0u+0x00000000u; // 801C8798
  c->lr=0x801C87A0u; f_801CC1C4(c); // 801C879C
  goto L_801C88BC; // 801C87A0
L_801C87A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C87A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C87A8
  if (crb(c,2)) { goto L_801C8818; } // 801C87AC
  c->r[28]=R32(c->r[13]+0xFFFF9E28u); // 801C87B0
  c->r[3]=c->r[31]+0x00000020u; // 801C87B4
  c->r[0]=0u+0x00000001u; // 801C87B8
  c->r[4]=0u+0x00000000u; // 801C87BC
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C87C0
  c->r[0]=0u+0x0000000Au; // 801C87C4
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801C87C8
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C87CC
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801C87D0
  c->r[12]=R32(c->r[28]+0x00000028u); // 801C87D4
  cmps(c,0,(int32_t)c->r[12],0); // 801C87D8
  if (crb(c,2)) { goto L_801C87F0; } // 801C87DC
  c->r[4]=c->r[28]|c->r[28]; // 801C87E0
  c->r[3]=0u+0xFFFFFFFDu; // 801C87E4
  c->ctr=c->r[12]; // 801C87E8
  if (true) { c->lr=0x801C87F0u; dispatch(c,c->ctr); } // 801C87EC
L_801C87F0:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C87F0
  cmps(c,0,(int32_t)c->r[12],0); // 801C87F4
  if (crb(c,2)) { goto L_801C880C; } // 801C87F8
  c->r[4]=c->r[28]|c->r[28]; // 801C87FC
  c->r[3]=0u+0x00000000u; // 801C8800
  c->ctr=c->r[12]; // 801C8804
  if (true) { c->lr=0x801C880Cu; dispatch(c,c->ctr); } // 801C8808
L_801C880C:;
  c->lr=0x801C8810u; f_801C9828(c); // 801C880C
  c->r[0]=0u+0x00000001u; // 801C8810
  goto L_801C881C; // 801C8814
L_801C8818:;
  c->r[0]=0u+0x00000000u; // 801C8818
L_801C881C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C881C
  if (!crb(c,2)) { goto L_801C88BC; } // 801C8820
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C8824
  c->r[0]=0u+0x00000006u; // 801C8828
  c->r[3]=0u+0x00000001u; // 801C882C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C8830
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C8834
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C8838
  cmps(c,0,(int32_t)c->r[0],0); // 801C883C
  if (!crb(c,2)) { goto L_801C88BC; } // 801C8840
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C8844
  cmps(c,0,(int32_t)c->r[0],0); // 801C8848
  if (!crb(c,2)) { goto L_801C88BC; } // 801C884C
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801C8850
  c->r[3]=c->r[31]+0x00000080u; // 801C8854
  c->lr=0x801C885Cu; f_801B9774(c); // 801C8858
  c->lr=0x801C8860u; f_801C2594(c); // 801C885C
  c->r[5]=0u+0x80000000u; // 801C8860
  c->r[4]=0u+0x10620000u; // 801C8864
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C8868
  c->r[9]=0u+0x801D0000u; // 801C886C
  c->r[6]=c->r[3]|c->r[3]; // 801C8870
  c->r[4]=c->r[4]+0x00004DD3u; // 801C8874
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C8878
  c->r[3]=c->r[31]+0x00000080u; // 801C887C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C8880
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C8884
  c->r[5]=0u+0x00000000u; // 801C8888
  c->r[7]=0u+0x00000000u; // 801C888C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C8890
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C8894
  c->lr=0x801C889Cu; f_801B9A44(c); // 801C8898
  goto L_801C88BC; // 801C889C
L_801C88A0:;
  c->r[3]=0u+0x00000027u; // 801C88A0
  c->r[4]=0u+0x00000000u; // 801C88A4
  c->r[5]=0u+0x00000000u; // 801C88A8
  c->lr=0x801C88B0u; f_801C6EA4(c); // 801C88AC
  c->r[3]=0u+0x801C0000u; // 801C88B0
  c->r[3]=c->r[3]+0x00007654u; // 801C88B4
  c->lr=0x801C88BCu; f_801CCA20(c); // 801C88B8
L_801C88BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C88BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C88C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C88C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C88C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C88CC
  c->lr=c->r[0]; // 801C88D0
  c->r[1]=c->r[1]+0x00000020u; // 801C88D4
  return; // 801C88D8
}

// cbForStateOpenPartition
void f_801C88DC(Ctx* __restrict c) {
  trace_call(0x801C88DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C88DC
  c->r[0]=c->lr; // 801C88E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C88E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C88E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C88EC
  c->r[30]=c->r[3]|c->r[3]; // 801C88F0
  c->lr=0x801C88F8u; f_801BE74C(c); // 801C88F4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C88F8
  cmps(c,0,(int32_t)c->r[0],0); // 801C88FC
  if (!crb(c,2)) { goto L_801C8914; } // 801C8900
  c->r[4]=0u+0x80570000u; // 801C8904
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8908
  W32(c->r[4]+0x00000078u,c->r[30]); // 801C890C
  goto L_801C8930; // 801C8910
L_801C8914:;
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C8914
  c->r[5]=0u+0x80570000u; // 801C8918
  c->r[5]=c->r[5]+0xFFFFF1A0u; // 801C891C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C8920
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8924
  c->r[4]=c->r[5]+c->r[0]; // 801C8928
  W32(c->r[4]+0x00000028u,c->r[30]); // 801C892C
L_801C8930:;
  c->lr=0x801C8934u; f_801BE774(c); // 801C8930
  cmpu(c,0,c->r[30],0x00000010u); // 801C8934
  if (!crb(c,2)) { goto L_801C8954; } // 801C8938
  c->r[3]=0u+0x01230000u; // 801C893C
  c->r[4]=0u+0x801C0000u; // 801C8940
  c->r[3]=c->r[3]+0x00004568u; // 801C8944
  c->r[4]=c->r[4]+0x00007460u; // 801C8948
  c->lr=0x801C8950u; f_801CB994(c); // 801C894C
  goto L_801C8A4C; // 801C8950
L_801C8954:;
  cmpu(c,0,c->r[30],0x00000020u); // 801C8954
  if (!crb(c,2)) { goto L_801C8974; } // 801C8958
  c->r[3]=0u+0x01230000u; // 801C895C
  c->r[4]=0u+0x801C0000u; // 801C8960
  c->r[3]=c->r[3]+0x00004569u; // 801C8964
  c->r[4]=c->r[4]+0x00007460u; // 801C8968
  c->lr=0x801C8970u; f_801CB994(c); // 801C896C
  goto L_801C8A4C; // 801C8970
L_801C8974:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801C8974
  if (crb(c,2)) { goto L_801C8A30; } // 801C8978
  c->r[30]=0u+0x00000000u; // 801C897C
  c->r[3]=0u+0x00000000u; // 801C8980
  W32(c->r[13]+0xFFFF9DC0u,c->r[30]); // 801C8984
  c->lr=0x801C898Cu; f_801CD4E4(c); // 801C8988
  c->lr=0x801C8990u; f_801BE74C(c); // 801C898C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8990
  c->r[31]=c->r[3]|c->r[3]; // 801C8994
  cmpu(c,0,c->r[0],0x00000005u); // 801C8998
  if (crb(c,0)) { goto L_801C89A4; } // 801C899C
  W32(c->r[13]+0xFFFF9DA8u,c->r[30]); // 801C89A0
L_801C89A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C89A4
  c->r[30]=0u+0x80570000u; // 801C89A8
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C89AC
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C89B0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C89B4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C89B8
  c->r[7]=0u+0x00000001u; // 801C89BC
  c->r[5]=0u+0x00000108u; // 801C89C0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C89C4
  c->r[4]=0u+0x00000020u; // 801C89C8
  c->r[6]=c->r[30]+c->r[6]; // 801C89CC
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C89D0
  c->r[3]=c->r[30]+c->r[3]; // 801C89D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C89D8
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C89DC
  c->r[3]=c->r[30]+c->r[0]; // 801C89E0
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C89E4
  c->lr=0x801C89ECu; f_801C2594(c); // 801C89E8
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C89EC
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C89F0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C89F4
  c->r[0]=c->r[4]+0x00000001u; // 801C89F8
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C89FC
  c->r[4]=c->r[30]+c->r[5]; // 801C8A00
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C8A04
  c->r[3]=c->r[31]|c->r[31]; // 801C8A08
  c->lr=0x801C8A10u; f_801BE774(c); // 801C8A0C
  c->r[3]=0u+0x80570000u; // 801C8A10
  c->r[6]=0u+0x801D0000u; // 801C8A14
  c->r[3]=c->r[3]+0xFFFFA440u; // 801C8A18
  c->r[4]=0u+0x00000020u; // 801C8A1C
  c->r[6]=c->r[6]+0xFFFF8D90u; // 801C8A20
  c->r[5]=0u+0x00000108u; // 801C8A24
  c->lr=0x801C8A2Cu; f_801CD024(c); // 801C8A28
  goto L_801C8A4C; // 801C8A2C
L_801C8A30:;
  c->r[3]=0u+0x00000027u; // 801C8A30
  c->r[4]=0u+0x00000000u; // 801C8A34
  c->r[5]=0u+0x00000000u; // 801C8A38
  c->lr=0x801C8A40u; f_801C6EA4(c); // 801C8A3C
  c->r[3]=0u+0x801C0000u; // 801C8A40
  c->r[3]=c->r[3]+0x00007654u; // 801C8A44
  c->lr=0x801C8A4Cu; f_801CCA20(c); // 801C8A48
L_801C8A4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8A50
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8A54
  c->lr=c->r[0]; // 801C8A58
  c->r[1]=c->r[1]+0x00000010u; // 801C8A5C
  return; // 801C8A60
}

// cbForStateOpenPartition2
void f_801C8A64(Ctx* __restrict c) {
  trace_call(0x801C8A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8A64
  c->r[0]=c->lr; // 801C8A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8A70
  c->r[31]=c->r[3]|c->r[3]; // 801C8A74
  c->lr=0x801C8A7Cu; f_801BE74C(c); // 801C8A78
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8A7C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8A80
  if (!crb(c,2)) { goto L_801C8A98; } // 801C8A84
  c->r[4]=0u+0x80570000u; // 801C8A88
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8A8C
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C8A90
  goto L_801C8AB0; // 801C8A94
L_801C8A98:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8A98
  c->r[4]=0u+0x80570000u; // 801C8A9C
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8AA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8AA4
  c->r[4]=c->r[4]+c->r[0]; // 801C8AA8
  W32(c->r[4]+0x00000014u,c->r[31]); // 801C8AAC
L_801C8AB0:;
  c->lr=0x801C8AB4u; f_801BE774(c); // 801C8AB0
  cmpu(c,0,c->r[31],0x00000010u); // 801C8AB4
  if (!crb(c,2)) { goto L_801C8AD4; } // 801C8AB8
  c->r[3]=0u+0x01230000u; // 801C8ABC
  c->r[4]=0u+0x801C0000u; // 801C8AC0
  c->r[3]=c->r[3]+0x00004568u; // 801C8AC4
  c->r[4]=c->r[4]+0x00007460u; // 801C8AC8
  c->lr=0x801C8AD0u; f_801CB994(c); // 801C8ACC
  goto L_801C8BB4; // 801C8AD0
L_801C8AD4:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C8AD4
  if (!crb(c,2)) { goto L_801C8AF4; } // 801C8AD8
  c->r[3]=0u+0x01230000u; // 801C8ADC
  c->r[4]=0u+0x801C0000u; // 801C8AE0
  c->r[3]=c->r[3]+0x00004569u; // 801C8AE4
  c->r[4]=c->r[4]+0x00007460u; // 801C8AE8
  c->lr=0x801C8AF0u; f_801CB994(c); // 801C8AEC
  goto L_801C8BB4; // 801C8AF0
L_801C8AF4:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801C8AF4
  if (crb(c,2)) { goto L_801C8B98; } // 801C8AF8
  c->r[4]=0u+0x00000000u; // 801C8AFC
  W32(c->r[13]+0xFFFF9DC0u,c->r[4]); // 801C8B00
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C8B04
  cmps(c,0,(int32_t)c->r[0],0); // 801C8B08
  if (crb(c,2)) { goto L_801C8B74; } // 801C8B0C
  c->r[3]=0u+0x80570000u; // 801C8B10
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801C8B14
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C8B18
  W32(c->r[13]+0xFFFF9DBCu,c->r[4]); // 801C8B1C
  c->r[0]=0u+0x0000000Au; // 801C8B20
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801C8B24
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C8B28
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C8B2C
  c->r[12]=R32(c->r[31]+0x00000028u); // 801C8B30
  cmps(c,0,(int32_t)c->r[12],0); // 801C8B34
  if (crb(c,2)) { goto L_801C8B4C; } // 801C8B38
  c->r[4]=c->r[31]|c->r[31]; // 801C8B3C
  c->r[3]=0u+0xFFFFFFFDu; // 801C8B40
  c->ctr=c->r[12]; // 801C8B44
  if (true) { c->lr=0x801C8B4Cu; dispatch(c,c->ctr); } // 801C8B48
L_801C8B4C:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C8B4C
  cmps(c,0,(int32_t)c->r[12],0); // 801C8B50
  if (crb(c,2)) { goto L_801C8B68; } // 801C8B54
  c->r[4]=c->r[31]|c->r[31]; // 801C8B58
  c->r[3]=0u+0x00000000u; // 801C8B5C
  c->ctr=c->r[12]; // 801C8B60
  if (true) { c->lr=0x801C8B68u; dispatch(c,c->ctr); } // 801C8B64
L_801C8B68:;
  c->lr=0x801C8B6Cu; f_801C9828(c); // 801C8B68
  c->r[0]=0u+0x00000001u; // 801C8B6C
  goto L_801C8B78; // 801C8B70
L_801C8B74:;
  c->r[0]=0u+0x00000000u; // 801C8B74
L_801C8B78:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C8B78
  if (!crb(c,2)) { goto L_801C8BB4; } // 801C8B7C
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C8B80
  c->r[0]=0u+0x00000001u; // 801C8B84
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C8B88
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C8B8C
  c->lr=0x801C8B94u; f_801C9B50(c); // 801C8B90
  goto L_801C8BB4; // 801C8B94
L_801C8B98:;
  c->r[3]=0u+0x00000027u; // 801C8B98
  c->r[4]=0u+0x00000000u; // 801C8B9C
  c->r[5]=0u+0x00000000u; // 801C8BA0
  c->lr=0x801C8BA8u; f_801C6EA4(c); // 801C8BA4
  c->r[3]=0u+0x801C0000u; // 801C8BA8
  c->r[3]=c->r[3]+0x00007654u; // 801C8BAC
  c->lr=0x801C8BB4u; f_801CCA20(c); // 801C8BB0
L_801C8BB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8BB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8BB8
  c->lr=c->r[0]; // 801C8BBC
  c->r[1]=c->r[1]+0x00000010u; // 801C8BC0
  return; // 801C8BC4
}

// cbForStateCheckID1
void f_801C8BC8(Ctx* __restrict c) {
  trace_call(0x801C8BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8BC8
  c->r[0]=c->lr; // 801C8BCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8BD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8BD4
  c->r[31]=c->r[3]|c->r[3]; // 801C8BD8
  c->lr=0x801C8BE0u; f_801BE74C(c); // 801C8BDC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8BE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C8BE4
  if (!crb(c,2)) { goto L_801C8BFC; } // 801C8BE8
  c->r[4]=0u+0x80570000u; // 801C8BEC
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8BF0
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C8BF4
  goto L_801C8C14; // 801C8BF8
L_801C8BFC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8BFC
  c->r[4]=0u+0x80570000u; // 801C8C00
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8C04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8C08
  c->r[4]=c->r[4]+c->r[0]; // 801C8C0C
  W32(c->r[4]+0x00000014u,c->r[31]); // 801C8C10
L_801C8C14:;
  c->lr=0x801C8C18u; f_801BE774(c); // 801C8C14
  cmpu(c,0,c->r[31],0x00000010u); // 801C8C18
  if (!crb(c,2)) { goto L_801C8C38; } // 801C8C1C
  c->r[3]=0u+0x01230000u; // 801C8C20
  c->r[4]=0u+0x801C0000u; // 801C8C24
  c->r[3]=c->r[3]+0x00004568u; // 801C8C28
  c->r[4]=c->r[4]+0x00007460u; // 801C8C2C
  c->lr=0x801C8C34u; f_801CB994(c); // 801C8C30
  goto L_801C8D7C; // 801C8C34
L_801C8C38:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C8C38
  if (!crb(c,2)) { goto L_801C8C58; } // 801C8C3C
  c->r[3]=0u+0x01230000u; // 801C8C40
  c->r[4]=0u+0x801C0000u; // 801C8C44
  c->r[3]=c->r[3]+0x00004569u; // 801C8C48
  c->r[4]=c->r[4]+0x00007460u; // 801C8C4C
  c->lr=0x801C8C54u; f_801CB994(c); // 801C8C50
  goto L_801C8D7C; // 801C8C54
L_801C8C58:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801C8C58
  if (crb(c,2)) { goto L_801C8C78; } // 801C8C5C
  c->r[3]=0u+0x01230000u; // 801C8C60
  c->r[4]=0u+0x801C0000u; // 801C8C64
  c->r[3]=c->r[3]+0x00004567u; // 801C8C68
  c->r[4]=c->r[4]+0x0000744Cu; // 801C8C6C
  c->lr=0x801C8C74u; f_801CB994(c); // 801C8C70
  goto L_801C8D7C; // 801C8C74
L_801C8C78:;
  c->r[4]=0u+0x00000000u; // 801C8C78
  W32(c->r[13]+0xFFFF9DC0u,c->r[4]); // 801C8C7C
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801C8C80
  cmps(c,0,(int32_t)c->r[0],0); // 801C8C84
  if (crb(c,2)) { goto L_801C8CF4; } // 801C8C88
  c->r[3]=0u+0x80570000u; // 801C8C8C
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801C8C90
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C8C94
  c->r[0]=0u+0x00000001u; // 801C8C98
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C8C9C
  c->r[0]=0u+0x0000000Au; // 801C8CA0
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801C8CA4
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C8CA8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C8CAC
  c->r[12]=R32(c->r[31]+0x00000028u); // 801C8CB0
  cmps(c,0,(int32_t)c->r[12],0); // 801C8CB4
  if (crb(c,2)) { goto L_801C8CCC; } // 801C8CB8
  c->r[4]=c->r[31]|c->r[31]; // 801C8CBC
  c->r[3]=0u+0xFFFFFFFDu; // 801C8CC0
  c->ctr=c->r[12]; // 801C8CC4
  if (true) { c->lr=0x801C8CCCu; dispatch(c,c->ctr); } // 801C8CC8
L_801C8CCC:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801C8CCC
  cmps(c,0,(int32_t)c->r[12],0); // 801C8CD0
  if (crb(c,2)) { goto L_801C8CE8; } // 801C8CD4
  c->r[4]=c->r[31]|c->r[31]; // 801C8CD8
  c->r[3]=0u+0x00000000u; // 801C8CDC
  c->ctr=c->r[12]; // 801C8CE0
  if (true) { c->lr=0x801C8CE8u; dispatch(c,c->ctr); } // 801C8CE4
L_801C8CE8:;
  c->lr=0x801C8CECu; f_801C9828(c); // 801C8CE8
  c->r[0]=0u+0x00000001u; // 801C8CEC
  goto L_801C8CF8; // 801C8CF0
L_801C8CF4:;
  c->r[0]=0u+0x00000000u; // 801C8CF4
L_801C8CF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C8CF8
  if (!crb(c,2)) { goto L_801C8D7C; } // 801C8CFC
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C8D00
  c->r[0]=0u+0x00000006u; // 801C8D04
  c->r[3]=0u+0x00000001u; // 801C8D08
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C8D0C
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C8D10
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C8D14
  cmps(c,0,(int32_t)c->r[0],0); // 801C8D18
  if (!crb(c,2)) { goto L_801C8D7C; } // 801C8D1C
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C8D20
  cmps(c,0,(int32_t)c->r[0],0); // 801C8D24
  if (!crb(c,2)) { goto L_801C8D7C; } // 801C8D28
  c->r[31]=0u+0x80570000u; // 801C8D2C
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801C8D30
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C8D34
  c->lr=0x801C8D3Cu; f_801B9774(c); // 801C8D38
  c->lr=0x801C8D40u; f_801C2594(c); // 801C8D3C
  c->r[5]=0u+0x80000000u; // 801C8D40
  c->r[4]=0u+0x10620000u; // 801C8D44
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C8D48
  c->r[9]=0u+0x801D0000u; // 801C8D4C
  c->r[6]=c->r[3]|c->r[3]; // 801C8D50
  c->r[4]=c->r[4]+0x00004DD3u; // 801C8D54
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C8D58
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C8D5C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C8D60
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C8D64
  c->r[5]=0u+0x00000000u; // 801C8D68
  c->r[7]=0u+0x00000000u; // 801C8D6C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C8D70
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C8D74
  c->lr=0x801C8D7Cu; f_801B9A44(c); // 801C8D78
L_801C8D7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8D80
  c->lr=c->r[0]; // 801C8D84
  c->r[1]=c->r[1]+0x00000010u; // 801C8D88
  return; // 801C8D8C
}

// cbForStateCheckID2
void f_801C8D90(Ctx* __restrict c) {
  trace_call(0x801C8D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8D90
  c->r[0]=c->lr; // 801C8D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8D98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8D9C
  c->r[31]=c->r[3]|c->r[3]; // 801C8DA0
  c->lr=0x801C8DA8u; f_801BE74C(c); // 801C8DA4
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C8DA8
  cmps(c,0,(int32_t)c->r[0],0); // 801C8DAC
  if (!crb(c,2)) { goto L_801C8DC4; } // 801C8DB0
  c->r[4]=0u+0x80570000u; // 801C8DB4
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C8DB8
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C8DBC
  goto L_801C8DE0; // 801C8DC0
L_801C8DC4:;
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C8DC4
  c->r[5]=0u+0x80570000u; // 801C8DC8
  c->r[5]=c->r[5]+0xFFFFF1A0u; // 801C8DCC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C8DD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C8DD4
  c->r[4]=c->r[5]+c->r[0]; // 801C8DD8
  W32(c->r[4]+0x00000028u,c->r[31]); // 801C8DDC
L_801C8DE0:;
  c->lr=0x801C8DE4u; f_801BE774(c); // 801C8DE0
  cmpu(c,0,c->r[31],0x00000010u); // 801C8DE4
  if (!crb(c,2)) { goto L_801C8E04; } // 801C8DE8
  c->r[3]=0u+0x01230000u; // 801C8DEC
  c->r[4]=0u+0x801C0000u; // 801C8DF0
  c->r[3]=c->r[3]+0x00004568u; // 801C8DF4
  c->r[4]=c->r[4]+0x00007460u; // 801C8DF8
  c->lr=0x801C8E00u; f_801CB994(c); // 801C8DFC
  goto L_801C8F10; // 801C8E00
L_801C8E04:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C8E04
  if (!crb(c,2)) { goto L_801C8E24; } // 801C8E08
  c->r[3]=0u+0x01230000u; // 801C8E0C
  c->r[4]=0u+0x801C0000u; // 801C8E10
  c->r[3]=c->r[3]+0x00004569u; // 801C8E14
  c->r[4]=c->r[4]+0x00007460u; // 801C8E18
  c->lr=0x801C8E20u; f_801CB994(c); // 801C8E1C
  goto L_801C8F10; // 801C8E20
L_801C8E24:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801C8E24
  if (crb(c,2)) { goto L_801C8EF4; } // 801C8E28
  c->r[5]=0u+0x801C0000u; // 801C8E2C
  c->r[0]=0u+0x00000000u; // 801C8E30
  c->r[5]=c->r[5]+0x0000703Cu; // 801C8E34
  c->r[3]=0u+0x80570000u; // 801C8E38
  W32(c->r[13]+0xFFFF9DC0u,c->r[0]); // 801C8E3C
  c->r[3]=c->r[3]+0xFFFFA440u; // 801C8E40
  c->r[4]=R32(c->r[13]+0xFFFF9E20u); // 801C8E44
  W32(c->r[13]+0xFFFF9E2Cu,c->r[5]); // 801C8E48
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C8E4C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 801C8E50
  cmpu(c,0,c->r[3],c->r[0]); // 801C8E54
  if (!crb(c,0)) { goto L_801C8E74; } // 801C8E58
  c->r[5]=0u+0x804B0000u; // 801C8E5C
  c->r[3]=c->r[13]+0xFFFF8474u; // 801C8E60
  c->r[5]=c->r[5]+0x00000DF8u; // 801C8E64
  c->r[4]=0u+0x0000040Bu; // 801C8E68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8E6C
  c->lr=0x801C8E74u; f_801BB48C(c); // 801C8E70
L_801C8E74:;
  c->r[3]=0u+0x00000000u; // 801C8E74
  c->lr=0x801C8E7Cu; f_801CD4E4(c); // 801C8E78
  c->r[6]=R32(c->r[13]+0xFFFF9DE4u); // 801C8E7C
  c->r[31]=0u+0x80570000u; // 801C8E80
  c->r[31]=c->r[31]+0xFFFFA440u; // 801C8E84
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C8E88
  c->r[4]=R32(c->r[31]+0x00000008u); // 801C8E8C
  c->r[3]=0u+0x00000001u; // 801C8E90
  c->r[0]=~(c->r[0]|c->r[0]); // 801C8E94
  c->r[7]=R32(c->r[31]+0x00000004u); // 801C8E98
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801C8E9C
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801C8EA0
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 801C8EA4
  c->r[0]=c->r[5]+0x0000001Fu; // 801C8EA8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C8EAC
  c->lr=0x801C8EB4u; f_801C6EA4(c); // 801C8EB0
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C8EB4
  c->r[6]=0u+0x801C0000u; // 801C8EB8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C8EBC
  c->r[6]=c->r[6]+0x000071B4u; // 801C8EC0
  c->r[0]=~(c->r[0]|c->r[0]); // 801C8EC4
  c->r[7]=R32(c->r[13]+0xFFFF9E20u); // 801C8EC8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801C8ECC
  c->r[5]=R32(c->r[31]+0x00000004u); // 801C8ED0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801C8ED4
  c->r[0]=R32(c->r[13]+0xFFFF9DE4u); // 801C8ED8
  c->r[4]=c->r[3]+0x0000001Fu; // 801C8EDC
  c->r[3]=R32(c->r[7]+0x00000038u); // 801C8EE0
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 801C8EE4
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 801C8EE8
  c->lr=0x801C8EF0u; f_801CD024(c); // 801C8EEC
  goto L_801C8F10; // 801C8EF0
L_801C8EF4:;
  c->r[3]=0u+0x00000027u; // 801C8EF4
  c->r[4]=0u+0x00000000u; // 801C8EF8
  c->r[5]=0u+0x00000000u; // 801C8EFC
  c->lr=0x801C8F04u; f_801C6EA4(c); // 801C8F00
  c->r[3]=0u+0x801C0000u; // 801C8F04
  c->r[3]=c->r[3]+0x00007654u; // 801C8F08
  c->lr=0x801C8F10u; f_801CCA20(c); // 801C8F0C
L_801C8F10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8F10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8F14
  c->lr=c->r[0]; // 801C8F18
  c->r[1]=c->r[1]+0x00000010u; // 801C8F1C
  return; // 801C8F20
}

// stateCoverClosed
void f_801C8F24(Ctx* __restrict c) {
  trace_call(0x801C8F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8F24
  c->r[0]=c->lr; // 801C8F28
  c->r[3]=0u+0x00000001u; // 801C8F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8F30
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C8F34
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801C8F38
  cmpu(c,0,c->r[0],0x00000026u); // 801C8F3C
  if (crb(c,1)) { goto L_801C8FBC; } // 801C8F40
  c->r[3]=0u+0x804B0000u; // 801C8F44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8F48
  c->r[3]=c->r[3]+0x00000E2Cu; // 801C8F4C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C8F50
  c->ctr=c->r[3]; // 801C8F54
  if (true) { switch (c->ctr) { case 0x801C8F5Cu: goto L_801C8F5C; case 0x801C8F90u: goto L_801C8F90; case 0x801C8F98u: goto L_801C8F98; case 0x801C8FB0u: goto L_801C8FB0; case 0x801C8FBCu: goto L_801C8FBC; default: break; } dispatch(c,c->ctr); return; } // 801C8F58
L_801C8F5C:;
  c->lr=0x801C8F60u; f_801CB4D8(c); // 801C8F5C
  c->r[3]=0u+0x80570000u; // 801C8F60
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C8F64
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C8F68
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C8F6C
  c->r[12]=R32(c->r[4]+0x00000028u); // 801C8F70
  cmps(c,0,(int32_t)c->r[12],0); // 801C8F74
  if (crb(c,2)) { goto L_801C8F88; } // 801C8F78
  c->r[3]=0u+0xFFFFFFFCu; // 801C8F7C
  c->ctr=c->r[12]; // 801C8F80
  if (true) { c->lr=0x801C8F88u; dispatch(c,c->ctr); } // 801C8F84
L_801C8F88:;
  c->lr=0x801C8F8Cu; f_801C9828(c); // 801C8F88
  goto L_801C8FD8; // 801C8F8C
L_801C8F90:;
  c->r[0]=0u+0x00000000u; // 801C8F90
  W32(c->r[13]+0xFFFF9E08u,c->r[0]); // 801C8F94
L_801C8F98:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C8F98
  c->r[0]=0u+0x00000001u; // 801C8F9C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C8FA0
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C8FA4
  c->lr=0x801C8FACu; f_801C9B50(c); // 801C8FA8
  goto L_801C8FD8; // 801C8FAC
L_801C8FB0:;
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801C8FB0
  cmps(c,0,(int32_t)c->r[0],0); // 801C8FB4
  if (!crb(c,2)) { goto L_801C8FD8; } // 801C8FB8
L_801C8FBC:;
  c->r[0]=0u+0x00000000u; // 801C8FBC
  c->r[3]=0u+0x00000001u; // 801C8FC0
  W32(c->r[13]+0xFFFF9E08u,c->r[0]); // 801C8FC4
  c->lr=0x801C8FCCu; f_801CCB88(c); // 801C8FC8
  c->r[3]=0u+0x801D0000u; // 801C8FCC
  c->r[3]=c->r[3]+0xFFFF9190u; // 801C8FD0
  c->lr=0x801C8FD8u; f_801CCB94(c); // 801C8FD4
L_801C8FD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8FD8
  c->lr=c->r[0]; // 801C8FDC
  c->r[1]=c->r[1]+0x00000010u; // 801C8FE0
  return; // 801C8FE4
}

// fn_801C8FE8
void f_801C8FE8(Ctx* __restrict c) {
  trace_call(0x801C8FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8FE8
  c->r[0]=c->lr; // 801C8FEC
  c->r[3]=0u+0x80000000u; // 801C8FF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8FF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8FF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8FFC
  c->r[0]=R16(c->r[3]+0x000030E6u); // 801C9000
  cmpu(c,0,c->r[0],0x00008003u); // 801C9004
  if (!crb(c,2)) { goto L_801C90B8; } // 801C9008
  c->r[4]=0u+0x801D0000u; // 801C900C
  c->r[3]=0u+0x00000000u; // 801C9010
  c->r[4]=c->r[4]+0xFFFF9274u; // 801C9014
  W32(c->r[13]+0xFFFF9E2Cu,c->r[4]); // 801C9018
  c->lr=0x801C9020u; f_801CD4E4(c); // 801C901C
  c->lr=0x801C9024u; f_801BE74C(c); // 801C9020
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9024
  c->r[31]=c->r[3]|c->r[3]; // 801C9028
  cmpu(c,0,c->r[0],0x00000005u); // 801C902C
  if (crb(c,0)) { goto L_801C903C; } // 801C9030
  c->r[0]=0u+0x00000000u; // 801C9034
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9038
L_801C903C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C903C
  c->r[30]=0u+0x80570000u; // 801C9040
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9044
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C9048
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C904C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9050
  c->r[6]=0u+0x00000025u; // 801C9054
  c->r[4]=0u+0x00000000u; // 801C9058
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C905C
  c->r[5]=c->r[30]+c->r[5]; // 801C9060
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C9064
  c->r[3]=c->r[30]+c->r[3]; // 801C9068
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C906C
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C9070
  c->r[3]=c->r[30]+c->r[0]; // 801C9074
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C9078
  c->lr=0x801C9080u; f_801C2594(c); // 801C907C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9080
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9084
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9088
  c->r[0]=c->r[4]+0x00000001u; // 801C908C
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9090
  c->r[4]=c->r[30]+c->r[5]; // 801C9094
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9098
  c->r[3]=c->r[31]|c->r[31]; // 801C909C
  c->lr=0x801C90A4u; f_801BE774(c); // 801C90A0
  c->r[4]=0u+0x801D0000u; // 801C90A4
  c->r[3]=0u+0x00020000u; // 801C90A8
  c->r[4]=c->r[4]+0xFFFF933Cu; // 801C90AC
  c->lr=0x801C90B4u; f_801CCEA4(c); // 801C90B0
  goto L_801C9178; // 801C90B4
L_801C90B8:;
  c->r[3]=0u+0x80570000u; // 801C90B8
  c->r[4]=0u+0x00000020u; // 801C90BC
  c->r[3]=c->r[3]+0xFFFFA500u; // 801C90C0
  c->lr=0x801C90C8u; f_801BA764(c); // 801C90C4
  c->r[4]=0u+0x801D0000u; // 801C90C8
  c->r[3]=0u+0x00000000u; // 801C90CC
  c->r[4]=c->r[4]+0xFFFF94D4u; // 801C90D0
  W32(c->r[13]+0xFFFF9E2Cu,c->r[4]); // 801C90D4
  c->lr=0x801C90DCu; f_801CD4E4(c); // 801C90D8
  c->lr=0x801C90E0u; f_801BE74C(c); // 801C90DC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C90E0
  c->r[31]=c->r[3]|c->r[3]; // 801C90E4
  cmpu(c,0,c->r[0],0x00000005u); // 801C90E8
  if (crb(c,0)) { goto L_801C90F8; } // 801C90EC
  c->r[0]=0u+0x00000000u; // 801C90F0
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C90F4
L_801C90F8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C90F8
  c->r[30]=0u+0x80570000u; // 801C90FC
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9100
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C9104
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9108
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C910C
  c->r[7]=0u+0x00000005u; // 801C9110
  c->r[5]=0u+0x00000000u; // 801C9114
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C9118
  c->r[4]=0u+0x00000020u; // 801C911C
  c->r[6]=c->r[30]+c->r[6]; // 801C9120
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C9124
  c->r[3]=c->r[30]+c->r[3]; // 801C9128
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C912C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C9130
  c->r[3]=c->r[30]+c->r[0]; // 801C9134
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C9138
  c->lr=0x801C9140u; f_801C2594(c); // 801C913C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9140
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9144
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9148
  c->r[0]=c->r[4]+0x00000001u; // 801C914C
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9150
  c->r[4]=c->r[30]+c->r[5]; // 801C9154
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9158
  c->r[3]=c->r[31]|c->r[31]; // 801C915C
  c->lr=0x801C9164u; f_801BE774(c); // 801C9160
  c->r[3]=0u+0x80570000u; // 801C9164
  c->r[4]=0u+0x801D0000u; // 801C9168
  c->r[3]=c->r[3]+0xFFFFA500u; // 801C916C
  c->r[4]=c->r[4]+0xFFFF95A4u; // 801C9170
  c->lr=0x801C9178u; f_801CC03C(c); // 801C9174
L_801C9178:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C917C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9180
  c->lr=c->r[0]; // 801C9184
  c->r[1]=c->r[1]+0x00000010u; // 801C9188
  return; // 801C918C
}

// cbForStateReset
void f_801C9190(Ctx* __restrict c) {
  trace_call(0x801C9190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9190
  c->r[0]=c->lr; // 801C9194
  cmpu(c,0,c->r[3],0x00000010u); // 801C9198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C919C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C91A0
  if (!crb(c,2)) { goto L_801C91C0; } // 801C91A4
  c->r[3]=0u+0x01230000u; // 801C91A8
  c->r[4]=0u+0x801C0000u; // 801C91AC
  c->r[3]=c->r[3]+0x00004568u; // 801C91B0
  c->r[4]=c->r[4]+0x00007460u; // 801C91B4
  c->lr=0x801C91BCu; f_801CB994(c); // 801C91B8
  goto L_801C9260; // 801C91BC
L_801C91C0:;
  cmpu(c,0,c->r[3],0x00000020u); // 801C91C0
  if (!crb(c,2)) { goto L_801C91E0; } // 801C91C4
  c->r[3]=0u+0x01230000u; // 801C91C8
  c->r[4]=0u+0x801C0000u; // 801C91CC
  c->r[3]=c->r[3]+0x00004569u; // 801C91D0
  c->r[4]=c->r[4]+0x00007460u; // 801C91D4
  c->lr=0x801C91DCu; f_801CB994(c); // 801C91D8
  goto L_801C9260; // 801C91DC
L_801C91E0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C91E0
  if (crb(c,2)) { goto L_801C9244; } // 801C91E4
  c->lr=0x801C91ECu; f_801C259C(c); // 801C91E8
  c->r[0]=0u+0x00000000u; // 801C91EC
  W32(c->r[13]+0xFFFF9E04u,c->r[4]); // 801C91F0
  c->r[31]=0u+0x80570000u; // 801C91F4
  W32(c->r[13]+0xFFFF9E00u,c->r[3]); // 801C91F8
  c->r[3]=c->r[31]+0xFFFFEF80u; // 801C91FC
  W32(c->r[13]+0xFFFF9E0Cu,c->r[0]); // 801C9200
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C9204
  c->lr=0x801C920Cu; f_801B9774(c); // 801C9208
  c->r[4]=0u+0x80000000u; // 801C920C
  c->r[7]=0u+0x801D0000u; // 801C9210
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801C9214
  c->r[3]=0u+0x10620000u; // 801C9218
  c->r[4]=c->r[3]+0x00004DD3u; // 801C921C
  c->r[7]=c->r[7]+0xFFFF8FE8u; // 801C9220
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C9224
  c->r[3]=c->r[31]+0xFFFFEF80u; // 801C9228
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C922C
  c->r[5]=0u+0x00000000u; // 801C9230
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C9234
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C9238
  c->lr=0x801C9240u; f_801B99D4(c); // 801C923C
  goto L_801C9260; // 801C9240
L_801C9244:;
  c->r[3]=0u+0x00000027u; // 801C9244
  c->r[4]=0u+0x00000000u; // 801C9248
  c->r[5]=0u+0x00000000u; // 801C924C
  c->lr=0x801C9254u; f_801C6EA4(c); // 801C9250
  c->r[3]=0u+0x801C0000u; // 801C9254
  c->r[3]=c->r[3]+0x00007654u; // 801C9258
  c->lr=0x801C9260u; f_801CCA20(c); // 801C925C
L_801C9260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9264
  c->lr=c->r[0]; // 801C9268
  c->r[1]=c->r[1]+0x00000010u; // 801C926C
  return; // 801C9270
}

// stateDownRotation
void f_801C9274(Ctx* __restrict c) {
  trace_call(0x801C9274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9274
  c->r[0]=c->lr; // 801C9278
  c->r[3]=0u+0x00000000u; // 801C927C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9284
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9288
  c->lr=0x801C9290u; f_801CD4E4(c); // 801C928C
  c->lr=0x801C9294u; f_801BE74C(c); // 801C9290
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9294
  c->r[31]=c->r[3]|c->r[3]; // 801C9298
  cmpu(c,0,c->r[0],0x00000005u); // 801C929C
  if (crb(c,0)) { goto L_801C92AC; } // 801C92A0
  c->r[0]=0u+0x00000000u; // 801C92A4
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C92A8
L_801C92AC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C92AC
  c->r[30]=0u+0x80570000u; // 801C92B0
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C92B4
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C92B8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C92BC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C92C0
  c->r[6]=0u+0x00000025u; // 801C92C4
  c->r[4]=0u+0x00000000u; // 801C92C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C92CC
  c->r[5]=c->r[30]+c->r[5]; // 801C92D0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 801C92D4
  c->r[3]=c->r[30]+c->r[3]; // 801C92D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C92DC
  W32(c->r[3]+0x00000020u,c->r[4]); // 801C92E0
  c->r[3]=c->r[30]+c->r[0]; // 801C92E4
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C92E8
  c->lr=0x801C92F0u; f_801C2594(c); // 801C92EC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C92F0
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C92F4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C92F8
  c->r[0]=c->r[4]+0x00000001u; // 801C92FC
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9300
  c->r[4]=c->r[30]+c->r[5]; // 801C9304
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9308
  c->r[3]=c->r[31]|c->r[31]; // 801C930C
  c->lr=0x801C9314u; f_801BE774(c); // 801C9310
  c->r[4]=0u+0x801D0000u; // 801C9314
  c->r[3]=0u+0x00020000u; // 801C9318
  c->r[4]=c->r[4]+0xFFFF933Cu; // 801C931C
  c->lr=0x801C9324u; f_801CCEA4(c); // 801C9320
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9328
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C932C
  c->lr=c->r[0]; // 801C9330
  c->r[1]=c->r[1]+0x00000010u; // 801C9334
  return; // 801C9338
}

// fn_801C933C
void f_801C933C(Ctx* __restrict c) {
  trace_call(0x801C933Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C933C
  c->r[0]=c->lr; // 801C9340
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9348
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C934C
  c->r[30]=c->r[3]|c->r[3]; // 801C9350
  c->lr=0x801C9358u; f_801BE74C(c); // 801C9354
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9358
  cmps(c,0,(int32_t)c->r[0],0); // 801C935C
  if (!crb(c,2)) { goto L_801C9374; } // 801C9360
  c->r[4]=0u+0x80570000u; // 801C9364
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C9368
  W32(c->r[4]+0x00000078u,c->r[30]); // 801C936C
  goto L_801C9390; // 801C9370
L_801C9374:;
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9374
  c->r[5]=0u+0x80570000u; // 801C9378
  c->r[5]=c->r[5]+0xFFFFF1A0u; // 801C937C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C9380
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9384
  c->r[4]=c->r[5]+c->r[0]; // 801C9388
  W32(c->r[4]+0x00000028u,c->r[30]); // 801C938C
L_801C9390:;
  c->lr=0x801C9394u; f_801BE774(c); // 801C9390
  cmpu(c,0,c->r[30],0x00000010u); // 801C9394
  if (!crb(c,2)) { goto L_801C93B4; } // 801C9398
  c->r[3]=0u+0x01230000u; // 801C939C
  c->r[4]=0u+0x801C0000u; // 801C93A0
  c->r[3]=c->r[3]+0x00004568u; // 801C93A4
  c->r[4]=c->r[4]+0x00007460u; // 801C93A8
  c->lr=0x801C93B0u; f_801CB994(c); // 801C93AC
  goto L_801C94BC; // 801C93B0
L_801C93B4:;
  cmpu(c,0,c->r[30],0x00000020u); // 801C93B4
  if (!crb(c,2)) { goto L_801C93D4; } // 801C93B8
  c->r[3]=0u+0x01230000u; // 801C93BC
  c->r[4]=0u+0x801C0000u; // 801C93C0
  c->r[3]=c->r[3]+0x00004569u; // 801C93C4
  c->r[4]=c->r[4]+0x00007460u; // 801C93C8
  c->lr=0x801C93D0u; f_801CB994(c); // 801C93CC
  goto L_801C94BC; // 801C93D0
L_801C93D4:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801C93D4
  if (crb(c,2)) { goto L_801C94A0; } // 801C93D8
  c->r[3]=0u+0x80570000u; // 801C93DC
  c->r[4]=0u+0x00000020u; // 801C93E0
  c->r[3]=c->r[3]+0xFFFFA500u; // 801C93E4
  c->lr=0x801C93ECu; f_801BA764(c); // 801C93E8
  c->r[4]=0u+0x801D0000u; // 801C93EC
  c->r[3]=0u+0x00000000u; // 801C93F0
  c->r[4]=c->r[4]+0xFFFF94D4u; // 801C93F4
  W32(c->r[13]+0xFFFF9E2Cu,c->r[4]); // 801C93F8
  c->lr=0x801C9400u; f_801CD4E4(c); // 801C93FC
  c->lr=0x801C9404u; f_801BE74C(c); // 801C9400
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9404
  c->r[31]=c->r[3]|c->r[3]; // 801C9408
  cmpu(c,0,c->r[0],0x00000005u); // 801C940C
  if (crb(c,0)) { goto L_801C941C; } // 801C9410
  c->r[0]=0u+0x00000000u; // 801C9414
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9418
L_801C941C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C941C
  c->r[30]=0u+0x80570000u; // 801C9420
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9424
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C9428
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C942C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9430
  c->r[7]=0u+0x00000005u; // 801C9434
  c->r[5]=0u+0x00000000u; // 801C9438
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C943C
  c->r[4]=0u+0x00000020u; // 801C9440
  c->r[6]=c->r[30]+c->r[6]; // 801C9444
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C9448
  c->r[3]=c->r[30]+c->r[3]; // 801C944C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9450
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C9454
  c->r[3]=c->r[30]+c->r[0]; // 801C9458
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C945C
  c->lr=0x801C9464u; f_801C2594(c); // 801C9460
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9464
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9468
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C946C
  c->r[0]=c->r[4]+0x00000001u; // 801C9470
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9474
  c->r[4]=c->r[30]+c->r[5]; // 801C9478
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C947C
  c->r[3]=c->r[31]|c->r[31]; // 801C9480
  c->lr=0x801C9488u; f_801BE774(c); // 801C9484
  c->r[3]=0u+0x80570000u; // 801C9488
  c->r[4]=0u+0x801D0000u; // 801C948C
  c->r[3]=c->r[3]+0xFFFFA500u; // 801C9490
  c->r[4]=c->r[4]+0xFFFF95A4u; // 801C9494
  c->lr=0x801C949Cu; f_801CC03C(c); // 801C9498
  goto L_801C94BC; // 801C949C
L_801C94A0:;
  c->r[3]=0u+0x00000027u; // 801C94A0
  c->r[4]=0u+0x00000000u; // 801C94A4
  c->r[5]=0u+0x00000000u; // 801C94A8
  c->lr=0x801C94B0u; f_801C6EA4(c); // 801C94AC
  c->r[3]=0u+0x801C0000u; // 801C94B0
  c->r[3]=c->r[3]+0x00007654u; // 801C94B4
  c->lr=0x801C94BCu; f_801CCA20(c); // 801C94B8
L_801C94BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C94BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C94C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C94C4
  c->lr=c->r[0]; // 801C94C8
  c->r[1]=c->r[1]+0x00000010u; // 801C94CC
  return; // 801C94D0
}

// fn_801C94D4
void f_801C94D4(Ctx* __restrict c) {
  trace_call(0x801C94D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C94D4
  c->r[0]=c->lr; // 801C94D8
  c->r[3]=0u+0x00000000u; // 801C94DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C94E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C94E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C94E8
  c->lr=0x801C94F0u; f_801CD4E4(c); // 801C94EC
  c->lr=0x801C94F4u; f_801BE74C(c); // 801C94F0
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C94F4
  c->r[31]=c->r[3]|c->r[3]; // 801C94F8
  cmpu(c,0,c->r[0],0x00000005u); // 801C94FC
  if (crb(c,0)) { goto L_801C950C; } // 801C9500
  c->r[0]=0u+0x00000000u; // 801C9504
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9508
L_801C950C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C950C
  c->r[30]=0u+0x80570000u; // 801C9510
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9514
  c->r[30]=c->r[30]+0xFFFFF1A0u; // 801C9518
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C951C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9520
  c->r[7]=0u+0x00000005u; // 801C9524
  c->r[5]=0u+0x00000000u; // 801C9528
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C952C
  c->r[4]=0u+0x00000020u; // 801C9530
  c->r[6]=c->r[30]+c->r[6]; // 801C9534
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 801C9538
  c->r[3]=c->r[30]+c->r[3]; // 801C953C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9540
  W32(c->r[3]+0x00000020u,c->r[5]); // 801C9544
  c->r[3]=c->r[30]+c->r[0]; // 801C9548
  W32(c->r[3]+0x00000024u,c->r[4]); // 801C954C
  c->lr=0x801C9554u; f_801C2594(c); // 801C9550
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9554
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9558
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C955C
  c->r[0]=c->r[4]+0x00000001u; // 801C9560
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9564
  c->r[4]=c->r[30]+c->r[5]; // 801C9568
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C956C
  c->r[3]=c->r[31]|c->r[31]; // 801C9570
  c->lr=0x801C9578u; f_801BE774(c); // 801C9574
  c->r[3]=0u+0x80570000u; // 801C9578
  c->r[4]=0u+0x801D0000u; // 801C957C
  c->r[3]=c->r[3]+0xFFFFA500u; // 801C9580
  c->r[4]=c->r[4]+0xFFFF95A4u; // 801C9584
  c->lr=0x801C958Cu; f_801CC03C(c); // 801C9588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C958C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9590
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9594
  c->lr=c->r[0]; // 801C9598
  c->r[1]=c->r[1]+0x00000010u; // 801C959C
  return; // 801C95A0
}

// cbForStateCoverClosed
void f_801C95A4(Ctx* __restrict c) {
  trace_call(0x801C95A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C95A4
  c->r[0]=c->lr; // 801C95A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C95AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C95B0
  c->r[31]=c->r[3]|c->r[3]; // 801C95B4
  c->lr=0x801C95BCu; f_801BE74C(c); // 801C95B8
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C95BC
  cmps(c,0,(int32_t)c->r[0],0); // 801C95C0
  if (!crb(c,2)) { goto L_801C95D8; } // 801C95C4
  c->r[4]=0u+0x80570000u; // 801C95C8
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C95CC
  W32(c->r[4]+0x00000078u,c->r[31]); // 801C95D0
  goto L_801C95F0; // 801C95D4
L_801C95D8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C95D8
  c->r[4]=0u+0x80570000u; // 801C95DC
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801C95E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C95E4
  c->r[4]=c->r[4]+c->r[0]; // 801C95E8
  W32(c->r[4]+0x00000014u,c->r[31]); // 801C95EC
L_801C95F0:;
  c->lr=0x801C95F4u; f_801BE774(c); // 801C95F0
  cmpu(c,0,c->r[31],0x00000010u); // 801C95F4
  if (!crb(c,2)) { goto L_801C9614; } // 801C95F8
  c->r[3]=0u+0x01230000u; // 801C95FC
  c->r[4]=0u+0x801C0000u; // 801C9600
  c->r[3]=c->r[3]+0x00004568u; // 801C9604
  c->r[4]=c->r[4]+0x00007460u; // 801C9608
  c->lr=0x801C9610u; f_801CB994(c); // 801C960C
  goto L_801C9668; // 801C9610
L_801C9614:;
  cmpu(c,0,c->r[31],0x00000020u); // 801C9614
  if (!crb(c,2)) { goto L_801C9634; } // 801C9618
  c->r[3]=0u+0x01230000u; // 801C961C
  c->r[4]=0u+0x801C0000u; // 801C9620
  c->r[3]=c->r[3]+0x00004569u; // 801C9624
  c->r[4]=c->r[4]+0x00007460u; // 801C9628
  c->lr=0x801C9630u; f_801CB994(c); // 801C962C
  goto L_801C9668; // 801C9630
L_801C9634:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801C9634
  if (crb(c,2)) { goto L_801C964C; } // 801C9638
  c->r[0]=0u+0x00000000u; // 801C963C
  W32(c->r[13]+0xFFFF9DC0u,c->r[0]); // 801C9640
  c->lr=0x801C9648u; f_801C8034(c); // 801C9644
  goto L_801C9668; // 801C9648
L_801C964C:;
  c->r[3]=0u+0x00000027u; // 801C964C
  c->r[4]=0u+0x00000000u; // 801C9650
  c->r[5]=0u+0x00000000u; // 801C9654
  c->lr=0x801C965Cu; f_801C6EA4(c); // 801C9658
  c->r[3]=0u+0x801C0000u; // 801C965C
  c->r[3]=c->r[3]+0x00007654u; // 801C9660
  c->lr=0x801C9668u; f_801CCA20(c); // 801C9664
L_801C9668:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9668
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C966C
  c->lr=c->r[0]; // 801C9670
  c->r[1]=c->r[1]+0x00000010u; // 801C9674
  return; // 801C9678
}

// cbForPrepareCoverRegister
void f_801C967C(Ctx* __restrict c) {
  trace_call(0x801C967Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C967C
  c->r[0]=c->lr; // 801C9680
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9688
  c->r[31]=0u+0x00000000u; // 801C968C
  W32(c->r[13]+0xFFFF9DE0u,c->r[31]); // 801C9690
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C9694
  cmps(c,0,(int32_t)c->r[0],0); // 801C9698
  if (crb(c,2)) { goto L_801C9724; } // 801C969C
  c->lr=0x801C96A4u; f_801CD350(c); // 801C96A0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C96A4
  if (!crb(c,2)) { goto L_801C97F0; } // 801C96A8
  c->r[3]=0u+0x80570000u; // 801C96AC
  c->r[3]=c->r[3]+0xFFFFA4C0u; // 801C96B0
  c->lr=0x801C96B8u; f_801B9AC8(c); // 801C96B4
  W32(c->r[13]+0xFFFF9DD4u,c->r[31]); // 801C96B8
  W32(c->r[13]+0xFFFF9DD4u,c->r[31]); // 801C96BC
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C96C0
  cmpu(c,0,c->r[0],0x00000003u); // 801C96C4
  if (!crb(c,2)) { goto L_801C96D4; } // 801C96C8
  c->r[0]=0u+0x00000001u; // 801C96CC
  W32(c->r[13]+0xFFFF9DDCu,c->r[0]); // 801C96D0
L_801C96D4:;
  c->r[0]=R32(c->r[13]+0xFFFF9E08u); // 801C96D4
  cmpu(c,0,c->r[0],0x00000002u); // 801C96D8
  if (!crb(c,2)) { goto L_801C96F8; } // 801C96DC
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C96E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C96E4
  if (crb(c,2)) { goto L_801C97F0; } // 801C96E8
  c->r[0]=0u+0x0000000Cu; // 801C96EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C96F0
  goto L_801C97F0; // 801C96F4
L_801C96F8:;
  c->lr=0x801C96FCu; f_801CD4DC(c); // 801C96F8
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C96FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C9700
  if (crb(c,2)) { goto L_801C9718; } // 801C9704
  c->r[0]=0u+0x00000003u; // 801C9708
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C970C
  c->lr=0x801C9714u; f_801C8F24(c); // 801C9710
  goto L_801C97F0; // 801C9714
L_801C9718:;
  c->r[0]=0u+0x00000007u; // 801C9718
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C971C
  goto L_801C97F0; // 801C9720
L_801C9724:;
  c->lr=0x801C9728u; f_801CD350(c); // 801C9724
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C9728
  if (crb(c,2)) { goto L_801C9768; } // 801C972C
  c->r[0]=R32(c->r[13]+0xFFFF9E08u); // 801C9730
  c->r[3]=0u+0x00000001u; // 801C9734
  W32(c->r[13]+0xFFFF9DD0u,c->r[31]); // 801C9738
  cmpu(c,0,c->r[0],0x00000002u); // 801C973C
  W32(c->r[13]+0xFFFF9DD4u,c->r[3]); // 801C9740
  if (!crb(c,2)) { goto L_801C9758; } // 801C9744
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C9748
  c->r[0]=0u+0x0000000Cu; // 801C974C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9750
  goto L_801C97F0; // 801C9754
L_801C9758:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C9758
  c->r[0]=0u+0x00000005u; // 801C975C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9760
  goto L_801C97F0; // 801C9764
L_801C9768:;
  c->lr=0x801C976Cu; f_801CD350(c); // 801C9768
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801C976C
  if (crb(c,2)) { goto L_801C97F0; } // 801C9770
  c->r[3]=0u+0x80570000u; // 801C9774
  c->r[3]=c->r[3]+0xFFFFA4C0u; // 801C9778
  c->lr=0x801C9780u; f_801B9AC8(c); // 801C977C
  W32(c->r[13]+0xFFFF9DD0u,c->r[31]); // 801C9780
  c->r[3]=0u+0x00000000u; // 801C9784
  c->lr=0x801C978Cu; f_801CD4E4(c); // 801C9788
  W32(c->r[13]+0xFFFF9DD4u,c->r[31]); // 801C978C
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C9790
  cmpu(c,0,c->r[0],0x00000003u); // 801C9794
  if (!crb(c,2)) { goto L_801C97A4; } // 801C9798
  c->r[0]=0u+0x00000001u; // 801C979C
  W32(c->r[13]+0xFFFF9DDCu,c->r[0]); // 801C97A0
L_801C97A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9E08u); // 801C97A4
  cmpu(c,0,c->r[0],0x00000002u); // 801C97A8
  if (!crb(c,2)) { goto L_801C97C8; } // 801C97AC
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C97B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C97B4
  if (crb(c,2)) { goto L_801C97F0; } // 801C97B8
  c->r[0]=0u+0x0000000Cu; // 801C97BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C97C0
  goto L_801C97F0; // 801C97C4
L_801C97C8:;
  c->lr=0x801C97CCu; f_801CD4DC(c); // 801C97C8
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C97CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C97D0
  if (crb(c,2)) { goto L_801C97E8; } // 801C97D4
  c->r[0]=0u+0x00000003u; // 801C97D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C97DC
  c->lr=0x801C97E4u; f_801C8F24(c); // 801C97E0
  goto L_801C97F0; // 801C97E4
L_801C97E8:;
  c->r[0]=0u+0x00000007u; // 801C97E8
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C97EC
L_801C97F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C97F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C97F4
  c->lr=c->r[0]; // 801C97F8
  c->r[1]=c->r[1]+0x00000010u; // 801C97FC
  return; // 801C9800
}

// CoverAlarmHandler
void f_801C9804(Ctx* __restrict c) {
  trace_call(0x801C9804u);
  c->r[0]=R32(c->r[13]+0xFFFF9DE0u); // 801C9804
  cmps(c,0,(int32_t)c->r[0],0); // 801C9808
  if (!crb(c,2)) return; // 801C980C
  c->r[0]=0u+0x00000001u; // 801C9810
  c->r[3]=0u+0x801D0000u; // 801C9814
  W32(c->r[13]+0xFFFF9DE0u,c->r[0]); // 801C9818
  c->r[3]=c->r[3]+0xFFFF967Cu; // 801C981C
  f_801CD360(c); return; // 801C9820
  return; // 801C9824
}

// stateReady
void f_801C9828(Ctx* __restrict c) {
  trace_call(0x801C9828u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9828
  c->r[0]=c->lr; // 801C982C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9834
  c->lr=0x801C983Cu; f_801CB618(c); // 801C9838
  cmps(c,0,(int32_t)c->r[3],0); // 801C983C
  if (!crb(c,2)) { goto L_801C9850; } // 801C9840
  c->r[0]=0u+0x00000000u; // 801C9844
  W32(c->r[13]+0xFFFF9E28u,c->r[0]); // 801C9848
  goto L_801C9B3C; // 801C984C
L_801C9850:;
  c->r[0]=R32(c->r[13]+0xFFFF9DACu); // 801C9850
  cmps(c,0,(int32_t)c->r[0],0); // 801C9854
  if (crb(c,2)) { goto L_801C9870; } // 801C9858
  c->r[3]=0u+0x00000001u; // 801C985C
  c->r[0]=0u+0x00000000u; // 801C9860
  W32(c->r[13]+0xFFFF9DB0u,c->r[3]); // 801C9864
  W32(c->r[13]+0xFFFF9E28u,c->r[0]); // 801C9868
  goto L_801C9B3C; // 801C986C
L_801C9870:;
  c->lr=0x801C9874u; f_801CB578(c); // 801C9870
  c->r[0]=R32(c->r[13]+0xFFFF9DB4u); // 801C9874
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C9878
  cmps(c,0,(int32_t)c->r[0],0); // 801C987C
  if (crb(c,2)) { goto L_801C98BC; } // 801C9880
  c->r[0]=0u+0xFFFFFFFFu; // 801C9884
  c->r[5]=0u+0x80570000u; // 801C9888
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C988C
  c->r[5]=c->r[5]+0xFFFFA460u; // 801C9890
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C9894
  W32(c->r[13]+0xFFFF9E28u,c->r[5]); // 801C9898
  c->r[12]=R32(c->r[4]+0x00000028u); // 801C989C
  cmps(c,0,(int32_t)c->r[12],0); // 801C98A0
  if (crb(c,2)) { goto L_801C98B4; } // 801C98A4
  c->r[3]=0u+0xFFFFFFFFu; // 801C98A8
  c->ctr=c->r[12]; // 801C98AC
  if (true) { c->lr=0x801C98B4u; dispatch(c,c->ctr); } // 801C98B0
L_801C98B4:;
  c->lr=0x801C98B8u; f_801C9828(c); // 801C98B4
  goto L_801C9B3C; // 801C98B8
L_801C98BC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C98BC
  W32(c->r[13]+0xFFFF9E1Cu,c->r[0]); // 801C98C0
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C98C4
  cmpu(c,0,c->r[0],0x00000020u); // 801C98C8
  if (crb(c,2)) { goto L_801C98E8; } // 801C98CC
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C98D0
  cmpu(c,0,c->r[0],0x0000000Eu); // 801C98D4
  if (crb(c,2)) { goto L_801C98E8; } // 801C98D8
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801C98DC
  cmpu(c,0,c->r[0],0x00000023u); // 801C98E0
  if (!crb(c,2)) { goto L_801C98F0; } // 801C98E4
L_801C98E8:;
  c->r[0]=0u+0x00000000u; // 801C98E8
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C98EC
L_801C98F0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DBCu); // 801C98F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C98F4
  if (crb(c,2)) { goto L_801C9AD8; } // 801C98F8
  c->r[0]=R32(c->r[13]+0xFFFF9DBCu); // 801C98FC
  cmps(c,0,(int32_t)c->r[0],4); // 801C9900
  if (crb(c,2)) { goto L_801C9A30; } // 801C9904
  if (!crb(c,0)) { goto L_801C9924; } // 801C9908
  cmps(c,0,(int32_t)c->r[0],2); // 801C990C
  if (crb(c,2)) { goto L_801C9938; } // 801C9910
  if (!crb(c,0)) { goto L_801C99B4; } // 801C9914
  cmps(c,0,(int32_t)c->r[0],1); // 801C9918
  if (!crb(c,0)) { goto L_801C9AAC; } // 801C991C
  goto L_801C9ACC; // 801C9920
L_801C9924:;
  cmps(c,0,(int32_t)c->r[0],8); // 801C9924
  if (!crb(c,0)) { goto L_801C9ACC; } // 801C9928
  cmps(c,0,(int32_t)c->r[0],6); // 801C992C
  if (!crb(c,0)) { goto L_801C9AAC; } // 801C9930
  goto L_801C9ABC; // 801C9934
L_801C9938:;
  c->r[0]=0u+0x0000000Bu; // 801C9938
  c->r[4]=0u+0x00000001u; // 801C993C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9940
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C9944
  W32(c->r[13]+0xFFFF9E08u,c->r[4]); // 801C9948
  cmps(c,0,(int32_t)c->r[0],0); // 801C994C
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C9950
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C9954
  cmps(c,0,(int32_t)c->r[0],0); // 801C9958
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C995C
  c->r[31]=0u+0x80570000u; // 801C9960
  W32(c->r[13]+0xFFFF9DD0u,c->r[4]); // 801C9964
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C9968
  c->lr=0x801C9970u; f_801B9774(c); // 801C996C
  c->lr=0x801C9974u; f_801C2594(c); // 801C9970
  c->r[5]=0u+0x80000000u; // 801C9974
  c->r[4]=0u+0x10620000u; // 801C9978
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C997C
  c->r[9]=0u+0x801D0000u; // 801C9980
  c->r[6]=c->r[3]|c->r[3]; // 801C9984
  c->r[4]=c->r[4]+0x00004DD3u; // 801C9988
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C998C
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C9990
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C9994
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C9998
  c->r[5]=0u+0x00000000u; // 801C999C
  c->r[7]=0u+0x00000000u; // 801C99A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C99A4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C99A8
  c->lr=0x801C99B0u; f_801B9A44(c); // 801C99AC
  goto L_801C9ACC; // 801C99B0
L_801C99B4:;
  c->r[0]=0u+0x00000004u; // 801C99B4
  c->r[4]=0u+0x00000001u; // 801C99B8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C99BC
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C99C0
  W32(c->r[13]+0xFFFF9E08u,c->r[4]); // 801C99C4
  cmps(c,0,(int32_t)c->r[0],0); // 801C99C8
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C99CC
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C99D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C99D4
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C99D8
  c->r[31]=0u+0x80570000u; // 801C99DC
  W32(c->r[13]+0xFFFF9DD0u,c->r[4]); // 801C99E0
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C99E4
  c->lr=0x801C99ECu; f_801B9774(c); // 801C99E8
  c->lr=0x801C99F0u; f_801C2594(c); // 801C99EC
  c->r[5]=0u+0x80000000u; // 801C99F0
  c->r[4]=0u+0x10620000u; // 801C99F4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C99F8
  c->r[9]=0u+0x801D0000u; // 801C99FC
  c->r[6]=c->r[3]|c->r[3]; // 801C9A00
  c->r[4]=c->r[4]+0x00004DD3u; // 801C9A04
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C9A08
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C9A0C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C9A10
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C9A14
  c->r[5]=0u+0x00000000u; // 801C9A18
  c->r[7]=0u+0x00000000u; // 801C9A1C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C9A20
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C9A24
  c->lr=0x801C9A2Cu; f_801B9A44(c); // 801C9A28
  goto L_801C9ACC; // 801C9A2C
L_801C9A30:;
  c->r[0]=0u+0x00000005u; // 801C9A30
  c->r[4]=0u+0x00000001u; // 801C9A34
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9A38
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801C9A3C
  W32(c->r[13]+0xFFFF9E08u,c->r[4]); // 801C9A40
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A44
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C9A48
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801C9A4C
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A50
  if (!crb(c,2)) { goto L_801C9ACC; } // 801C9A54
  c->r[31]=0u+0x80570000u; // 801C9A58
  W32(c->r[13]+0xFFFF9DD0u,c->r[4]); // 801C9A5C
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C9A60
  c->lr=0x801C9A68u; f_801B9774(c); // 801C9A64
  c->lr=0x801C9A6Cu; f_801C2594(c); // 801C9A68
  c->r[5]=0u+0x80000000u; // 801C9A6C
  c->r[4]=0u+0x10620000u; // 801C9A70
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801C9A74
  c->r[9]=0u+0x801D0000u; // 801C9A78
  c->r[6]=c->r[3]|c->r[3]; // 801C9A7C
  c->r[4]=c->r[4]+0x00004DD3u; // 801C9A80
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C9A84
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801C9A88
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801C9A8C
  c->r[9]=c->r[9]+0xFFFF9804u; // 801C9A90
  c->r[5]=0u+0x00000000u; // 801C9A94
  c->r[7]=0u+0x00000000u; // 801C9A98
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801C9A9C
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C9AA0
  c->lr=0x801C9AA8u; f_801B9A44(c); // 801C9AA4
  goto L_801C9ACC; // 801C9AA8
L_801C9AAC:;
  c->r[0]=0u+0x00000003u; // 801C9AAC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9AB0
  c->lr=0x801C9AB8u; f_801C8F24(c); // 801C9AB4
  goto L_801C9ACC; // 801C9AB8
L_801C9ABC:;
  c->r[4]=0u+0x801C0000u; // 801C9ABC
  c->r[3]=R32(c->r[13]+0xFFFF9E14u); // 801C9AC0
  c->r[4]=c->r[4]+0x0000744Cu; // 801C9AC4
  c->lr=0x801C9ACCu; f_801CB994(c); // 801C9AC8
L_801C9ACC:;
  c->r[0]=0u+0x00000000u; // 801C9ACC
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801C9AD0
  goto L_801C9B3C; // 801C9AD4
L_801C9AD8:;
  c->r[0]=R32(c->r[13]+0xFFFF9E08u); // 801C9AD8
  cmps(c,0,(int32_t)c->r[0],1); // 801C9ADC
  if (crb(c,2)) { goto L_801C9B38; } // 801C9AE0
  if (!crb(c,0)) { goto L_801C9AF4; } // 801C9AE4
  cmps(c,0,(int32_t)c->r[0],0); // 801C9AE8
  if (!crb(c,0)) { goto L_801C9B24; } // 801C9AEC
  goto L_801C9B38; // 801C9AF0
L_801C9AF4:;
  cmps(c,0,(int32_t)c->r[0],3); // 801C9AF4
  if (!crb(c,0)) { goto L_801C9B38; } // 801C9AF8
  c->r[0]=R32(c->r[13]+0xFFFF9DD8u); // 801C9AFC
  cmps(c,0,(int32_t)c->r[0],0); // 801C9B00
  if (crb(c,2)) { goto L_801C9B14; } // 801C9B04
  c->r[0]=0u+0x0000000Cu; // 801C9B08
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9B0C
  goto L_801C9B3C; // 801C9B10
L_801C9B14:;
  c->r[0]=0u+0x00000003u; // 801C9B14
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9B18
  c->lr=0x801C9B20u; f_801C8F24(c); // 801C9B1C
  goto L_801C9B3C; // 801C9B20
L_801C9B24:;
  c->r[0]=0u+0x00000001u; // 801C9B24
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C9B28
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801C9B2C
  c->lr=0x801C9B34u; f_801C9B50(c); // 801C9B30
  goto L_801C9B3C; // 801C9B34
L_801C9B38:;
  c->lr=0x801C9B3Cu; f_801C8F24(c); // 801C9B38
L_801C9B3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9B3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9B40
  c->lr=c->r[0]; // 801C9B44
  c->r[1]=c->r[1]+0x00000010u; // 801C9B48
  return; // 801C9B4C
}

// fn_801C9B50
void f_801C9B50(Ctx* __restrict c) {
  trace_call(0x801C9B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B50
  c->r[0]=c->lr; // 801C9B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9B58
  c->r[11]=c->r[1]+0x00000020u; // 801C9B5C
  c->lr=0x801C9B64u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C9B60
  c->r[4]=0u+0x801D0000u; // 801C9B64
  c->r[29]=c->r[3]|c->r[3]; // 801C9B68
  c->r[4]=c->r[4]+0xFFFF9B50u; // 801C9B6C
  W32(c->r[13]+0xFFFF9E2Cu,c->r[4]); // 801C9B70
  c->r[26]=R32(c->r[3]+0x00000008u); // 801C9B74
  cmps(c,0,(int32_t)c->r[26],17); // 801C9B78
  if (!crb(c,0)) { goto L_801C9BAC; } // 801C9B7C
  cmps(c,0,(int32_t)c->r[26],5); // 801C9B80
  if (crb(c,2)) { goto L_801C9BC4; } // 801C9B84
  if (!crb(c,0)) { goto L_801C9BA0; } // 801C9B88
  cmps(c,0,(int32_t)c->r[26],4); // 801C9B8C
  if (!crb(c,0)) { goto L_801C9C48; } // 801C9B90
  cmps(c,0,(int32_t)c->r[26],2); // 801C9B94
  if (!crb(c,0)) { goto L_801C9BC4; } // 801C9B98
  goto L_801C9C48; // 801C9B9C
L_801C9BA0:;
  cmps(c,0,(int32_t)c->r[26],13); // 801C9BA0
  if (!crb(c,0)) { goto L_801C9BC4; } // 801C9BA4
  goto L_801C9C48; // 801C9BA8
L_801C9BAC:;
  cmps(c,0,(int32_t)c->r[26],37); // 801C9BAC
  if (crb(c,2)) { goto L_801C9BC4; } // 801C9BB0
  if (!crb(c,0)) { goto L_801C9C48; } // 801C9BB4
  cmps(c,0,(int32_t)c->r[26],34); // 801C9BB8
  if (crb(c,2)) { goto L_801C9BC4; } // 801C9BBC
  goto L_801C9C48; // 801C9BC0
L_801C9BC4:;
  c->r[27]=R32(c->r[3]+0x00000014u); // 801C9BC4
  c->r[30]=R32(c->r[3]+0x00000010u); // 801C9BC8
  c->lr=0x801C9BD0u; f_801BE74C(c); // 801C9BCC
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9BD0
  c->r[31]=c->r[3]|c->r[3]; // 801C9BD4
  cmpu(c,0,c->r[0],0x00000005u); // 801C9BD8
  if (crb(c,0)) { goto L_801C9BE8; } // 801C9BDC
  c->r[0]=0u+0x00000000u; // 801C9BE0
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9BE4
L_801C9BE8:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9BE8
  c->r[28]=0u+0x80570000u; // 801C9BEC
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9BF0
  c->r[28]=c->r[28]+0xFFFFF1A0u; // 801C9BF4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9BF8
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9BFC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C9C00
  c->r[4]=c->r[28]+c->r[4]; // 801C9C04
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 801C9C08
  c->r[3]=c->r[28]+c->r[3]; // 801C9C0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9C10
  W32(c->r[3]+0x00000020u,c->r[30]); // 801C9C14
  c->r[3]=c->r[28]+c->r[0]; // 801C9C18
  W32(c->r[3]+0x00000024u,c->r[27]); // 801C9C1C
  c->lr=0x801C9C24u; f_801C2594(c); // 801C9C20
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9C24
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9C28
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9C2C
  c->r[0]=c->r[4]+0x00000001u; // 801C9C30
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9C34
  c->r[4]=c->r[28]+c->r[5]; // 801C9C38
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9C3C
  c->r[3]=c->r[31]|c->r[31]; // 801C9C40
  c->lr=0x801C9C48u; f_801BE774(c); // 801C9C44
L_801C9C48:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801C9C48
  cmpu(c,0,c->r[0],0x00000026u); // 801C9C4C
  if (crb(c,1)) { goto L_801CA028; } // 801C9C50
  c->r[3]=0u+0x804B0000u; // 801C9C54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9C58
  c->r[3]=c->r[3]+0x00000EC8u; // 801C9C5C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C9C60
  c->ctr=c->r[3]; // 801C9C64
  if (true) { switch (c->ctr) { case 0x801C9C6Cu: goto L_801C9C6C; case 0x801C9C90u: goto L_801C9C90; case 0x801C9DB8u: goto L_801C9DB8; case 0x801C9DD4u: goto L_801C9DD4; case 0x801C9DECu: goto L_801C9DEC; case 0x801C9E04u: goto L_801C9E04; case 0x801C9E24u: goto L_801C9E24; case 0x801C9E48u: goto L_801C9E48; case 0x801C9E68u: goto L_801C9E68; case 0x801C9E80u: goto L_801C9E80; case 0x801C9FA8u: goto L_801C9FA8; case 0x801C9FD4u: goto L_801C9FD4; case 0x801C9FECu: goto L_801C9FEC; case 0x801C9FFCu: goto L_801C9FFC; case 0x801CA00Cu: goto L_801CA00C; case 0x801CA028u: goto L_801CA028; default: break; } dispatch(c,c->ctr); return; } // 801C9C68
L_801C9C6C:;
  c->r[3]=0u+0x00000000u; // 801C9C6C
  c->lr=0x801C9C74u; f_801CD4E4(c); // 801C9C70
  c->r[0]=0u+0x00000020u; // 801C9C74
  c->r[4]=0u+0x801D0000u; // 801C9C78
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C9C7C
  c->r[4]=c->r[4]+0xFFFFA058u; // 801C9C80
  c->r[3]=R32(c->r[29]+0x00000018u); // 801C9C84
  c->lr=0x801C9C8Cu; f_801CC03C(c); // 801C9C88
  goto L_801CA040; // 801C9C8C
L_801C9C90:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C9C90
  cmps(c,0,(int32_t)c->r[0],0); // 801C9C94
  if (!crb(c,2)) { goto L_801C9CD4; } // 801C9C98
  c->r[3]=0u+0x80570000u; // 801C9C9C
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C9CA0
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C9CA4
  c->r[0]=0u+0x00000000u; // 801C9CA8
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C9CAC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C9CB0
  c->r[12]=R32(c->r[4]+0x00000028u); // 801C9CB4
  cmps(c,0,(int32_t)c->r[12],0); // 801C9CB8
  if (crb(c,2)) { goto L_801C9CCC; } // 801C9CBC
  c->r[3]=0u+0x00000000u; // 801C9CC0
  c->ctr=c->r[12]; // 801C9CC4
  if (true) { c->lr=0x801C9CCCu; dispatch(c,c->ctr); } // 801C9CC8
L_801C9CCC:;
  c->lr=0x801C9CD0u; f_801C9828(c); // 801C9CCC
  goto L_801CA040; // 801C9CD0
L_801C9CD4:;
  c->r[3]=0u+0x00000000u; // 801C9CD4
  c->lr=0x801C9CDCu; f_801CD4E4(c); // 801C9CD8
  c->r[3]=R32(c->r[29]+0x00000020u); // 801C9CDC
  c->r[31]=0u+0x00080000u; // 801C9CE0
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C9CE4
  c->r[0]=c->r[0]-c->r[3]; // 801C9CE8
  cmpu(c,0,c->r[0],c->r[31]); // 801C9CEC
  if (crb(c,1)) { goto L_801C9CF8; } // 801C9CF0
  c->r[31]=c->r[0]|c->r[0]; // 801C9CF4
L_801C9CF8:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C9CF8
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9CFC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C9D00
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 801C9D04
  c->r[27]=R32(c->r[29]+0x00000008u); // 801C9D08
  c->r[26]=c->r[3]+c->r[0]; // 801C9D0C
  c->lr=0x801C9D14u; f_801BE74C(c); // 801C9D10
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D14
  c->r[30]=c->r[3]|c->r[3]; // 801C9D18
  cmpu(c,0,c->r[0],0x00000005u); // 801C9D1C
  if (crb(c,0)) { goto L_801C9D2C; } // 801C9D20
  c->r[0]=0u+0x00000000u; // 801C9D24
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9D28
L_801C9D2C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D2C
  c->r[28]=0u+0x80570000u; // 801C9D30
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D34
  c->r[28]=c->r[28]+0xFFFFF1A0u; // 801C9D38
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9D3C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C9D44
  c->r[4]=c->r[28]+c->r[4]; // 801C9D48
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 801C9D4C
  c->r[3]=c->r[28]+c->r[3]; // 801C9D50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9D54
  W32(c->r[3]+0x00000020u,c->r[26]); // 801C9D58
  c->r[3]=c->r[28]+c->r[0]; // 801C9D5C
  W32(c->r[3]+0x00000024u,c->r[31]); // 801C9D60
  c->lr=0x801C9D68u; f_801C2594(c); // 801C9D64
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D68
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9D6C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9D70
  c->r[0]=c->r[4]+0x00000001u; // 801C9D74
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9D78
  c->r[4]=c->r[28]+c->r[5]; // 801C9D7C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9D80
  c->r[3]=c->r[30]|c->r[30]; // 801C9D84
  c->lr=0x801C9D8Cu; f_801BE774(c); // 801C9D88
  c->r[7]=R32(c->r[29]+0x00000020u); // 801C9D8C
  c->r[6]=0u+0x801D0000u; // 801C9D90
  c->r[3]=R32(c->r[29]+0x00000018u); // 801C9D94
  c->r[6]=c->r[6]+0xFFFFA058u; // 801C9D98
  c->r[5]=R32(c->r[29]+0x00000010u); // 801C9D9C
  c->r[0]=rotl(c->r[7],30)&0x3FFFFFFFu; // 801C9DA0
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801C9DA4
  c->r[3]=c->r[3]+c->r[7]; // 801C9DA8
  c->r[5]=c->r[5]+c->r[0]; // 801C9DAC
  c->lr=0x801C9DB4u; f_801CD024(c); // 801C9DB0
  goto L_801CA040; // 801C9DB4
L_801C9DB8:;
  c->r[3]=0u+0x00000000u; // 801C9DB8
  c->lr=0x801C9DC0u; f_801CD4E4(c); // 801C9DBC
  c->r[4]=0u+0x801D0000u; // 801C9DC0
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9DC4
  c->r[4]=c->r[4]+0xFFFFA058u; // 801C9DC8
  c->lr=0x801C9DD0u; f_801CD1D4(c); // 801C9DCC
  goto L_801CA040; // 801C9DD0
L_801C9DD4:;
  c->r[5]=0u+0x801D0000u; // 801C9DD4
  c->r[3]=0u+0x00000000u; // 801C9DD8
  c->r[5]=c->r[5]+0xFFFFA058u; // 801C9DDC
  c->r[4]=0u+0x00000000u; // 801C9DE0
  c->lr=0x801C9DE8u; f_801CC724(c); // 801C9DE4
  goto L_801CA040; // 801C9DE8
L_801C9DEC:;
  c->r[5]=0u+0x801D0000u; // 801C9DEC
  c->r[3]=0u+0x00000000u; // 801C9DF0
  c->r[5]=c->r[5]+0xFFFFA058u; // 801C9DF4
  c->r[4]=0u+0x00000000u; // 801C9DF8
  c->lr=0x801C9E00u; f_801CC724(c); // 801C9DFC
  goto L_801CA040; // 801C9E00
L_801C9E04:;
  c->r[3]=0u+0x00000000u; // 801C9E04
  c->lr=0x801C9E0Cu; f_801CD4E4(c); // 801C9E08
  c->r[5]=0u+0x801D0000u; // 801C9E0C
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9E10
  c->r[4]=R32(c->r[29]+0x00000014u); // 801C9E14
  c->r[5]=c->r[5]+0xFFFFA058u; // 801C9E18
  c->lr=0x801C9E20u; f_801CCD10(c); // 801C9E1C
  goto L_801CA040; // 801C9E20
L_801C9E24:;
  c->r[3]=0u+0x00000000u; // 801C9E24
  c->lr=0x801C9E2Cu; f_801CD4E4(c); // 801C9E28
  c->r[0]=0u+0x00000020u; // 801C9E2C
  c->r[4]=0u+0x801D0000u; // 801C9E30
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C9E34
  c->r[4]=c->r[4]+0xFFFFA058u; // 801C9E38
  c->r[3]=R32(c->r[29]+0x00000018u); // 801C9E3C
  c->lr=0x801C9E44u; f_801CC8B8(c); // 801C9E40
  goto L_801CA040; // 801C9E44
L_801C9E48:;
  c->r[3]=0u+0x00000000u; // 801C9E48
  c->lr=0x801C9E50u; f_801CD4E4(c); // 801C9E4C
  c->r[5]=0u+0x801D0000u; // 801C9E50
  c->r[3]=0u+0x00000000u; // 801C9E54
  c->r[5]=c->r[5]+0xFFFFA058u; // 801C9E58
  c->r[4]=0u+0x00000000u; // 801C9E5C
  c->lr=0x801C9E64u; f_801CC724(c); // 801C9E60
  goto L_801CA040; // 801C9E64
L_801C9E68:;
  c->r[3]=0u+0x00000001u; // 801C9E68
  c->lr=0x801C9E70u; f_801CCB88(c); // 801C9E6C
  c->r[3]=0u+0x801D0000u; // 801C9E70
  c->r[3]=c->r[3]+0xFFFFA058u; // 801C9E74
  c->lr=0x801C9E7Cu; f_801CCB94(c); // 801C9E78
  goto L_801CA040; // 801C9E7C
L_801C9E80:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C9E80
  cmps(c,0,(int32_t)c->r[0],0); // 801C9E84
  if (!crb(c,2)) { goto L_801C9EC4; } // 801C9E88
  c->r[3]=0u+0x80570000u; // 801C9E8C
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801C9E90
  c->r[3]=c->r[3]+0xFFFFA460u; // 801C9E94
  c->r[0]=0u+0x00000000u; // 801C9E98
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801C9E9C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C9EA0
  c->r[12]=R32(c->r[4]+0x00000028u); // 801C9EA4
  cmps(c,0,(int32_t)c->r[12],0); // 801C9EA8
  if (crb(c,2)) { goto L_801C9EBC; } // 801C9EAC
  c->r[3]=0u+0x00000000u; // 801C9EB0
  c->ctr=c->r[12]; // 801C9EB4
  if (true) { c->lr=0x801C9EBCu; dispatch(c,c->ctr); } // 801C9EB8
L_801C9EBC:;
  c->lr=0x801C9EC0u; f_801C9828(c); // 801C9EBC
  goto L_801CA040; // 801C9EC0
L_801C9EC4:;
  c->r[3]=0u+0x00000000u; // 801C9EC4
  c->lr=0x801C9ECCu; f_801CD4E4(c); // 801C9EC8
  c->r[3]=R32(c->r[29]+0x00000020u); // 801C9ECC
  c->r[31]=0u+0x00080000u; // 801C9ED0
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C9ED4
  c->r[0]=c->r[0]-c->r[3]; // 801C9ED8
  cmpu(c,0,c->r[0],c->r[31]); // 801C9EDC
  if (crb(c,1)) { goto L_801C9EE8; } // 801C9EE0
  c->r[31]=c->r[0]|c->r[0]; // 801C9EE4
L_801C9EE8:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C9EE8
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9EEC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C9EF0
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 801C9EF4
  c->r[26]=R32(c->r[29]+0x00000008u); // 801C9EF8
  c->r[27]=c->r[3]+c->r[0]; // 801C9EFC
  c->lr=0x801C9F04u; f_801BE74C(c); // 801C9F00
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F04
  c->r[30]=c->r[3]|c->r[3]; // 801C9F08
  cmpu(c,0,c->r[0],0x00000005u); // 801C9F0C
  if (crb(c,0)) { goto L_801C9F1C; } // 801C9F10
  c->r[0]=0u+0x00000000u; // 801C9F14
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9F18
L_801C9F1C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F1C
  c->r[28]=0u+0x80570000u; // 801C9F20
  c->r[3]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F24
  c->r[28]=c->r[28]+0xFFFFF1A0u; // 801C9F28
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9F2C
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F30
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801C9F34
  c->r[4]=c->r[28]+c->r[4]; // 801C9F38
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 801C9F3C
  c->r[3]=c->r[28]+c->r[3]; // 801C9F40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9F44
  W32(c->r[3]+0x00000020u,c->r[27]); // 801C9F48
  c->r[3]=c->r[28]+c->r[0]; // 801C9F4C
  W32(c->r[3]+0x00000024u,c->r[31]); // 801C9F50
  c->lr=0x801C9F58u; f_801C2594(c); // 801C9F54
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F58
  c->r[4]=R32(c->r[13]+0xFFFF9DA8u); // 801C9F5C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801C9F60
  c->r[0]=c->r[4]+0x00000001u; // 801C9F64
  W32(c->r[13]+0xFFFF9DA8u,c->r[0]); // 801C9F68
  c->r[4]=c->r[28]+c->r[5]; // 801C9F6C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C9F70
  c->r[3]=c->r[30]|c->r[30]; // 801C9F74
  c->lr=0x801C9F7Cu; f_801BE774(c); // 801C9F78
  c->r[7]=R32(c->r[29]+0x00000020u); // 801C9F7C
  c->r[6]=0u+0x801D0000u; // 801C9F80
  c->r[3]=R32(c->r[29]+0x00000018u); // 801C9F84
  c->r[6]=c->r[6]+0xFFFFA058u; // 801C9F88
  c->r[5]=R32(c->r[29]+0x00000010u); // 801C9F8C
  c->r[0]=rotl(c->r[7],30)&0x3FFFFFFFu; // 801C9F90
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801C9F94
  c->r[3]=c->r[3]+c->r[7]; // 801C9F98
  c->r[5]=c->r[5]+c->r[0]; // 801C9F9C
  c->lr=0x801C9FA4u; f_801CC590(c); // 801C9FA0
  goto L_801CA040; // 801C9FA4
L_801C9FA8:;
  c->r[3]=0u+0x00000000u; // 801C9FA8
  c->lr=0x801C9FB0u; f_801CD4E4(c); // 801C9FAC
  c->r[8]=0u+0x801D0000u; // 801C9FB0
  c->r[3]=R32(c->r[29]+0x00000010u); // 801C9FB4
  c->r[7]=R32(c->r[29]+0x00000018u); // 801C9FB8
  c->r[8]=c->r[8]+0xFFFFA058u; // 801C9FBC
  c->r[4]=0u+0x00000000u; // 801C9FC0
  c->r[5]=0u+0x00000000u; // 801C9FC4
  c->r[6]=0u+0x00000000u; // 801C9FC8
  c->lr=0x801C9FD0u; f_801CC1C4(c); // 801C9FCC
  goto L_801CA040; // 801C9FD0
L_801C9FD4:;
  c->r[3]=0u+0x00000000u; // 801C9FD4
  c->lr=0x801C9FDCu; f_801CD4E4(c); // 801C9FD8
  c->r[3]=0u+0x801D0000u; // 801C9FDC
  c->r[3]=c->r[3]+0xFFFFA058u; // 801C9FE0
  c->lr=0x801C9FE8u; f_801CC42C(c); // 801C9FE4
  goto L_801CA040; // 801C9FE8
L_801C9FEC:;
  c->r[3]=0u+0x801D0000u; // 801C9FEC
  c->r[3]=c->r[3]+0xFFFFA058u; // 801C9FF0
  c->lr=0x801C9FF8u; f_801CD360(c); // 801C9FF4
  goto L_801CA040; // 801C9FF8
L_801C9FFC:;
  c->r[3]=0u+0x801D0000u; // 801C9FFC
  c->r[3]=c->r[3]+0xFFFFA058u; // 801CA000
  c->lr=0x801CA008u; f_801CD360(c); // 801CA004
  goto L_801CA040; // 801CA008
L_801CA00C:;
  c->r[3]=0u+0x00000000u; // 801CA00C
  c->lr=0x801CA014u; f_801CD4E4(c); // 801CA010
  c->r[4]=0u+0x801D0000u; // 801CA014
  c->r[3]=0u+0x00020000u; // 801CA018
  c->r[4]=c->r[4]+0xFFFFA058u; // 801CA01C
  c->lr=0x801CA024u; f_801CCEA4(c); // 801CA020
  goto L_801CA040; // 801CA024
L_801CA028:;
  c->r[12]=R32(c->r[13]+0xFFFF8470u); // 801CA028
  c->r[4]=0u+0x801D0000u; // 801CA02C
  c->r[3]=c->r[29]|c->r[29]; // 801CA030
  c->r[4]=c->r[4]+0xFFFFA058u; // 801CA034
  c->ctr=c->r[12]; // 801CA038
  if (true) { c->lr=0x801CA040u; dispatch(c,c->ctr); } // 801CA03C
L_801CA040:;
  c->r[11]=c->r[1]+0x00000020u; // 801CA040
  c->lr=0x801CA048u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA044
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA048
  c->lr=c->r[0]; // 801CA04C
  c->r[1]=c->r[1]+0x00000020u; // 801CA050
  return; // 801CA054
}

// fn_801CA058
void f_801CA058(Ctx* __restrict c) {
  trace_call(0x801CA058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA058
  c->r[0]=c->lr; // 801CA05C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA064
  c->r[31]=c->r[3]|c->r[3]; // 801CA068
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA06C
  c->lr=0x801CA074u; f_801BE74C(c); // 801CA070
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801CA074
  cmps(c,0,(int32_t)c->r[0],0); // 801CA078
  if (!crb(c,2)) { goto L_801CA090; } // 801CA07C
  c->r[4]=0u+0x80570000u; // 801CA080
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801CA084
  W32(c->r[4]+0x00000078u,c->r[31]); // 801CA088
  goto L_801CA0A8; // 801CA08C
L_801CA090:;
  c->r[0]=R32(c->r[13]+0xFFFF9DA8u); // 801CA090
  c->r[4]=0u+0x80570000u; // 801CA094
  c->r[4]=c->r[4]+0xFFFFF1A0u; // 801CA098
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801CA09C
  c->r[4]=c->r[4]+c->r[0]; // 801CA0A0
  W32(c->r[4]+0x00000014u,c->r[31]); // 801CA0A4
L_801CA0A8:;
  c->lr=0x801CA0ACu; f_801BE774(c); // 801CA0A8
  cmpu(c,0,c->r[31],0x00000010u); // 801CA0AC
  if (!crb(c,2)) { goto L_801CA0CC; } // 801CA0B0
  c->r[3]=0u+0x01230000u; // 801CA0B4
  c->r[4]=0u+0x801C0000u; // 801CA0B8
  c->r[3]=c->r[3]+0x00004568u; // 801CA0BC
  c->r[4]=c->r[4]+0x00007460u; // 801CA0C0
  c->lr=0x801CA0C8u; f_801CB994(c); // 801CA0C4
  goto L_801CA874; // 801CA0C8
L_801CA0CC:;
  cmpu(c,0,c->r[31],0x00000020u); // 801CA0CC
  if (!crb(c,2)) { goto L_801CA0EC; } // 801CA0D0
  c->r[3]=0u+0x01230000u; // 801CA0D4
  c->r[4]=0u+0x801C0000u; // 801CA0D8
  c->r[3]=c->r[3]+0x00004569u; // 801CA0DC
  c->r[4]=c->r[4]+0x00007460u; // 801CA0E0
  c->lr=0x801CA0E8u; f_801CB994(c); // 801CA0E4
  goto L_801CA874; // 801CA0E8
L_801CA0EC:;
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA0EC
  cmpu(c,0,c->r[0],0x00000003u); // 801CA0F0
  if (crb(c,2)) { goto L_801CA104; } // 801CA0F4
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA0F8
  cmpu(c,0,c->r[0],0x0000000Fu); // 801CA0FC
  if (!crb(c,2)) { goto L_801CA250; } // 801CA100
L_801CA104:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 801CA104
  if (crb(c,2)) { goto L_801CA124; } // 801CA108
  c->r[3]=0u+0x01230000u; // 801CA10C
  c->r[4]=0u+0x801C0000u; // 801CA110
  c->r[3]=c->r[3]+0x00004567u; // 801CA114
  c->r[4]=c->r[4]+0x0000744Cu; // 801CA118
  c->lr=0x801CA120u; f_801CB994(c); // 801CA11C
  goto L_801CA874; // 801CA120
L_801CA124:;
  c->r[0]=0u+0x00000000u; // 801CA124
  W32(c->r[13]+0xFFFF9DC0u,c->r[0]); // 801CA128
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA12C
  cmpu(c,0,c->r[0],0x0000000Fu); // 801CA130
  if (!crb(c,2)) { goto L_801CA140; } // 801CA134
  c->r[0]=0u+0x00000001u; // 801CA138
  W32(c->r[13]+0xFFFF9E0Cu,c->r[0]); // 801CA13C
L_801CA140:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CA140
  cmps(c,0,(int32_t)c->r[0],0); // 801CA144
  if (crb(c,2)) { goto L_801CA1B8; } // 801CA148
  c->r[3]=0u+0x80570000u; // 801CA14C
  c->r[31]=R32(c->r[13]+0xFFFF9E28u); // 801CA150
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA154
  c->r[0]=0u+0x00000007u; // 801CA158
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CA15C
  c->r[4]=0u+0x00000000u; // 801CA160
  c->r[0]=0u+0x0000000Au; // 801CA164
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801CA168
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA16C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CA170
  c->r[12]=R32(c->r[31]+0x00000028u); // 801CA174
  cmps(c,0,(int32_t)c->r[12],0); // 801CA178
  if (crb(c,2)) { goto L_801CA190; } // 801CA17C
  c->r[4]=c->r[31]|c->r[31]; // 801CA180
  c->r[3]=0u+0xFFFFFFFDu; // 801CA184
  c->ctr=c->r[12]; // 801CA188
  if (true) { c->lr=0x801CA190u; dispatch(c,c->ctr); } // 801CA18C
L_801CA190:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801CA190
  cmps(c,0,(int32_t)c->r[12],0); // 801CA194
  if (crb(c,2)) { goto L_801CA1AC; } // 801CA198
  c->r[4]=c->r[31]|c->r[31]; // 801CA19C
  c->r[3]=0u+0x00000000u; // 801CA1A0
  c->ctr=c->r[12]; // 801CA1A4
  if (true) { c->lr=0x801CA1ACu; dispatch(c,c->ctr); } // 801CA1A8
L_801CA1AC:;
  c->lr=0x801CA1B0u; f_801C9828(c); // 801CA1AC
  c->r[0]=0u+0x00000001u; // 801CA1B0
  goto L_801CA1BC; // 801CA1B4
L_801CA1B8:;
  c->r[0]=0u+0x00000000u; // 801CA1B8
L_801CA1BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA1BC
  if (!crb(c,2)) { goto L_801CA874; } // 801CA1C0
  c->r[0]=R32(c->r[13]+0xFFFF9E08u); // 801CA1C4
  cmpu(c,0,c->r[0],0x00000002u); // 801CA1C8
  if (crb(c,2)) { goto L_801CA874; } // 801CA1CC
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA1D0
  c->r[0]=0u+0x00000007u; // 801CA1D4
  c->r[3]=0u+0x00000001u; // 801CA1D8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA1DC
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801CA1E0
  W32(c->r[13]+0xFFFF9E08u,c->r[3]); // 801CA1E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA1E8
  if (!crb(c,2)) { goto L_801CA874; } // 801CA1EC
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801CA1F0
  cmps(c,0,(int32_t)c->r[0],0); // 801CA1F4
  if (!crb(c,2)) { goto L_801CA874; } // 801CA1F8
  c->r[31]=0u+0x80570000u; // 801CA1FC
  W32(c->r[13]+0xFFFF9DD0u,c->r[3]); // 801CA200
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801CA204
  c->lr=0x801CA20Cu; f_801B9774(c); // 801CA208
  c->lr=0x801CA210u; f_801C2594(c); // 801CA20C
  c->r[5]=0u+0x80000000u; // 801CA210
  c->r[4]=0u+0x10620000u; // 801CA214
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801CA218
  c->r[9]=0u+0x801D0000u; // 801CA21C
  c->r[6]=c->r[3]|c->r[3]; // 801CA220
  c->r[4]=c->r[4]+0x00004DD3u; // 801CA224
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CA228
  c->r[3]=c->r[31]+0xFFFFA4C0u; // 801CA22C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801CA230
  c->r[9]=c->r[9]+0xFFFF9804u; // 801CA234
  c->r[5]=0u+0x00000000u; // 801CA238
  c->r[7]=0u+0x00000000u; // 801CA23C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801CA240
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801CA244
  c->lr=0x801CA24Cu; f_801B9A44(c); // 801CA248
  goto L_801CA874; // 801CA24C
L_801CA250:;
  c->r[3]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA250
  cmpu(c,0,c->r[3],0x00000001u); // 801CA254
  if (crb(c,2)) { goto L_801CA27C; } // 801CA258
  cmpu(c,0,c->r[3],0x00000004u); // 801CA25C
  if (crb(c,2)) { goto L_801CA27C; } // 801CA260
  cmpu(c,0,c->r[3],0x00000005u); // 801CA264
  if (crb(c,2)) { goto L_801CA27C; } // 801CA268
  cmpu(c,0,c->r[3],0x00000021u); // 801CA26C
  if (crb(c,2)) { goto L_801CA27C; } // 801CA270
  cmpu(c,0,c->r[3],0x0000000Eu); // 801CA274
  if (!crb(c,2)) { goto L_801CA284; } // 801CA278
L_801CA27C:;
  c->r[0]=0u+0x00000001u; // 801CA27C
  goto L_801CA29C; // 801CA280
L_801CA284:;
  c->r[0]=R32(c->r[13]+0xFFFF847Cu); // 801CA284
  cmpu(c,0,c->r[3],c->r[0]); // 801CA288
  if (!crb(c,2)) { goto L_801CA298; } // 801CA28C
  c->r[0]=0u+0x00000001u; // 801CA290
  goto L_801CA29C; // 801CA294
L_801CA298:;
  c->r[0]=0u+0x00000000u; // 801CA298
L_801CA29C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA29C
  if (crb(c,2)) { goto L_801CA2CC; } // 801CA2A0
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 801CA2A4
  if (crb(c,2)) { goto L_801CA2B8; } // 801CA2A8
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CA2AC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801CA2B0
  goto L_801CA2BC; // 801CA2B4
L_801CA2B8:;
  c->r[4]=0u+0x00000000u; // 801CA2B8
L_801CA2BC:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CA2BC
  c->r[0]=R32(c->r[3]+0x00000020u); // 801CA2C0
  c->r[0]=c->r[0]+c->r[4]; // 801CA2C4
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CA2C8
L_801CA2CC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DCCu); // 801CA2CC
  cmps(c,0,(int32_t)c->r[0],0); // 801CA2D0
  if (crb(c,2)) { goto L_801CA33C; } // 801CA2D4
  c->r[3]=0u+0x80570000u; // 801CA2D8
  c->r[30]=R32(c->r[13]+0xFFFF9E28u); // 801CA2DC
  c->r[4]=0u+0x00000000u; // 801CA2E0
  c->r[0]=0u+0x0000000Au; // 801CA2E4
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA2E8
  W32(c->r[13]+0xFFFF9DCCu,c->r[4]); // 801CA2EC
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801CA2F0
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA2F4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CA2F8
  c->r[12]=R32(c->r[30]+0x00000028u); // 801CA2FC
  cmps(c,0,(int32_t)c->r[12],0); // 801CA300
  if (crb(c,2)) { goto L_801CA318; } // 801CA304
  c->r[4]=c->r[30]|c->r[30]; // 801CA308
  c->r[3]=0u+0xFFFFFFFDu; // 801CA30C
  c->ctr=c->r[12]; // 801CA310
  if (true) { c->lr=0x801CA318u; dispatch(c,c->ctr); } // 801CA314
L_801CA318:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801CA318
  cmps(c,0,(int32_t)c->r[12],0); // 801CA31C
  if (crb(c,2)) { goto L_801CA334; } // 801CA320
  c->r[4]=c->r[30]|c->r[30]; // 801CA324
  c->r[3]=0u+0x00000000u; // 801CA328
  c->ctr=c->r[12]; // 801CA32C
  if (true) { c->lr=0x801CA334u; dispatch(c,c->ctr); } // 801CA330
L_801CA334:;
  c->lr=0x801CA338u; f_801C9828(c); // 801CA334
  goto L_801CA874; // 801CA338
L_801CA33C:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CA33C
  if (crb(c,2)) { goto L_801CA730; } // 801CA340
  c->r[31]=0u+0x00000000u; // 801CA344
  W32(c->r[13]+0xFFFF9DC0u,c->r[31]); // 801CA348
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA34C
  cmpu(c,0,c->r[0],0x00000010u); // 801CA350
  if (!crb(c,2)) { goto L_801CA3A4; } // 801CA354
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA358
  c->r[3]=0u+0x80570000u; // 801CA35C
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA360
  c->r[5]=R32(c->r[4]+0x00000010u); // 801CA364
  c->r[0]=0u-c->r[5]; // 801CA368
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA36C
  c->r[0]=c->r[0]|c->r[5]; // 801CA370
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CA374
  c->r[0]=c->r[3]+0x00000001u; // 801CA378
  W32(c->r[13]+0xFFFF9E08u,c->r[0]); // 801CA37C
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 801CA380
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA384
  cmps(c,0,(int32_t)c->r[12],0); // 801CA388
  if (crb(c,2)) { goto L_801CA39C; } // 801CA38C
  c->r[3]=0u+0x00000000u; // 801CA390
  c->ctr=c->r[12]; // 801CA394
  if (true) { c->lr=0x801CA39Cu; dispatch(c,c->ctr); } // 801CA398
L_801CA39C:;
  c->lr=0x801CA3A0u; f_801C9828(c); // 801CA39C
  goto L_801CA874; // 801CA3A0
L_801CA3A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA3A4
  cmpu(c,0,c->r[0],0x00000020u); // 801CA3A8
  if (!crb(c,2)) { goto L_801CA3FC; } // 801CA3AC
  c->lr=0x801CA3B4u; f_801C259C(c); // 801CA3B0
  c->r[5]=0u+0x80570000u; // 801CA3B4
  c->r[6]=R32(c->r[13]+0xFFFF9E28u); // 801CA3B8
  c->r[5]=c->r[5]+0xFFFFA460u; // 801CA3BC
  W32(c->r[13]+0xFFFF9E04u,c->r[4]); // 801CA3C0
  W32(c->r[13]+0xFFFF9E00u,c->r[3]); // 801CA3C4
  W32(c->r[13]+0xFFFF9E0Cu,c->r[31]); // 801CA3C8
  W32(c->r[13]+0xFFFF9DBCu,c->r[31]); // 801CA3CC
  W32(c->r[13]+0xFFFF9E28u,c->r[5]); // 801CA3D0
  W32(c->r[6]+0x0000000Cu,c->r[31]); // 801CA3D4
  c->r[12]=R32(c->r[6]+0x00000028u); // 801CA3D8
  cmps(c,0,(int32_t)c->r[12],0); // 801CA3DC
  if (crb(c,2)) { goto L_801CA3F4; } // 801CA3E0
  c->r[4]=c->r[6]|c->r[6]; // 801CA3E4
  c->r[3]=0u+0x00000000u; // 801CA3E8
  c->ctr=c->r[12]; // 801CA3EC
  if (true) { c->lr=0x801CA3F4u; dispatch(c,c->ctr); } // 801CA3F0
L_801CA3F4:;
  c->lr=0x801CA3F8u; f_801C9828(c); // 801CA3F4
  goto L_801CA874; // 801CA3F8
L_801CA3FC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CA3FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CA400
  if (crb(c,2)) { goto L_801CA46C; } // 801CA404
  c->r[3]=0u+0x80570000u; // 801CA408
  c->r[30]=R32(c->r[13]+0xFFFF9E28u); // 801CA40C
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA410
  W32(c->r[13]+0xFFFF9DBCu,c->r[31]); // 801CA414
  c->r[0]=0u+0x0000000Au; // 801CA418
  W32(c->r[13]+0xFFFF9DB8u,c->r[31]); // 801CA41C
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA420
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CA424
  c->r[12]=R32(c->r[30]+0x00000028u); // 801CA428
  cmps(c,0,(int32_t)c->r[12],0); // 801CA42C
  if (crb(c,2)) { goto L_801CA444; } // 801CA430
  c->r[4]=c->r[30]|c->r[30]; // 801CA434
  c->r[3]=0u+0xFFFFFFFDu; // 801CA438
  c->ctr=c->r[12]; // 801CA43C
  if (true) { c->lr=0x801CA444u; dispatch(c,c->ctr); } // 801CA440
L_801CA444:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801CA444
  cmps(c,0,(int32_t)c->r[12],0); // 801CA448
  if (crb(c,2)) { goto L_801CA460; } // 801CA44C
  c->r[4]=c->r[30]|c->r[30]; // 801CA450
  c->r[3]=0u+0x00000000u; // 801CA454
  c->ctr=c->r[12]; // 801CA458
  if (true) { c->lr=0x801CA460u; dispatch(c,c->ctr); } // 801CA45C
L_801CA460:;
  c->lr=0x801CA464u; f_801C9828(c); // 801CA460
  c->r[0]=0u+0x00000001u; // 801CA464
  goto L_801CA470; // 801CA468
L_801CA46C:;
  c->r[0]=0u+0x00000000u; // 801CA46C
L_801CA470:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA470
  if (!crb(c,2)) { goto L_801CA874; } // 801CA474
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA478
  cmpu(c,0,c->r[0],0x00000026u); // 801CA47C
  if (!crb(c,2)) { goto L_801CA52C; } // 801CA480
  c->lr=0x801CA488u; f_801CD350(c); // 801CA484
  c->r[31]=c->r[3]|c->r[3]; // 801CA488
  c->lr=0x801CA490u; f_801C259C(c); // 801CA48C
  c->r[6]=0u+0x80000000u; // 801CA490
  c->r[5]=0u+0x10620000u; // 801CA494
  c->r[6]=R32(c->r[6]+0x000000F8u); // 801CA498
  c->r[7]=c->r[5]+0x00004DD3u; // 801CA49C
  c->r[8]=R32(c->r[13]+0xFFFF9E00u); // 801CA4A0
  c->r[0]=0u+0x00000000u; // 801CA4A4
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801CA4A8
  c->r[9]=R32(c->r[13]+0xFFFF9E04u); // 801CA4AC
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 801CA4B0
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 801CA4B4
  c->r[5]=c->r[0]^0x80000000u; // 801CA4B8
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 801CA4BC
  c->r[0]=c->r[0]^0x80000000u; // 801CA4C0
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 801CA4C4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801CA4C8
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 801CA4CC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801CA4D0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801CA4D4
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801CA4D8
  if (crb(c,2)) { goto L_801CA4E8; } // 801CA4DC
  c->r[3]=0u+0x00000000u; // 801CA4E0
  goto L_801CA4F4; // 801CA4E4
L_801CA4E8:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 801CA4E8
  c->r[3]=0u-c->r[0]; // 801CA4EC
  c->r[3]=c->r[3]+0x00000002u; // 801CA4F0
L_801CA4F4:;
  c->r[5]=0u+0x80570000u; // 801CA4F4
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA4F8
  c->r[5]=c->r[5]+0xFFFFA460u; // 801CA4FC
  c->r[0]=0u+0x00000000u; // 801CA500
  W32(c->r[13]+0xFFFF9E28u,c->r[5]); // 801CA504
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA508
  W32(c->r[4]+0x00000010u,c->r[3]); // 801CA50C
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA510
  cmps(c,0,(int32_t)c->r[12],0); // 801CA514
  if (crb(c,2)) { goto L_801CA524; } // 801CA518
  c->ctr=c->r[12]; // 801CA51C
  if (true) { c->lr=0x801CA524u; dispatch(c,c->ctr); } // 801CA520
L_801CA524:;
  c->lr=0x801CA528u; f_801C9828(c); // 801CA524
  goto L_801CA874; // 801CA528
L_801CA52C:;
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA52C
  cmpu(c,0,c->r[0],0x00000024u); // 801CA530
  if (!crb(c,2)) { goto L_801CA598; } // 801CA534
  c->lr=0x801CA53Cu; f_801CD350(c); // 801CA538
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 801CA53C
  if (!crb(c,2)) { goto L_801CA54C; } // 801CA540
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CA544
  if (crb(c,2)) { goto L_801CA554; } // 801CA548
L_801CA54C:;
  c->r[3]=0u+0x00000000u; // 801CA54C
  goto L_801CA560; // 801CA550
L_801CA554:;
  c->r[0]=R32(c->r[13]+0xFFFF9DBCu); // 801CA554
  c->r[0]=cntlz(c->r[0]); // 801CA558
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CA55C
L_801CA560:;
  c->r[5]=0u+0x80570000u; // 801CA560
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA564
  c->r[5]=c->r[5]+0xFFFFA460u; // 801CA568
  c->r[0]=0u+0x00000000u; // 801CA56C
  W32(c->r[13]+0xFFFF9E28u,c->r[5]); // 801CA570
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA574
  W32(c->r[4]+0x00000010u,c->r[3]); // 801CA578
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA57C
  cmps(c,0,(int32_t)c->r[12],0); // 801CA580
  if (crb(c,2)) { goto L_801CA590; } // 801CA584
  c->ctr=c->r[12]; // 801CA588
  if (true) { c->lr=0x801CA590u; dispatch(c,c->ctr); } // 801CA58C
L_801CA590:;
  c->lr=0x801CA594u; f_801C9828(c); // 801CA590
  goto L_801CA874; // 801CA594
L_801CA598:;
  c->r[3]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA598
  cmpu(c,0,c->r[3],0x00000001u); // 801CA59C
  if (crb(c,2)) { goto L_801CA5C4; } // 801CA5A0
  cmpu(c,0,c->r[3],0x00000004u); // 801CA5A4
  if (crb(c,2)) { goto L_801CA5C4; } // 801CA5A8
  cmpu(c,0,c->r[3],0x00000005u); // 801CA5AC
  if (crb(c,2)) { goto L_801CA5C4; } // 801CA5B0
  cmpu(c,0,c->r[3],0x00000021u); // 801CA5B4
  if (crb(c,2)) { goto L_801CA5C4; } // 801CA5B8
  cmpu(c,0,c->r[3],0x0000000Eu); // 801CA5BC
  if (!crb(c,2)) { goto L_801CA5CC; } // 801CA5C0
L_801CA5C4:;
  c->r[0]=0u+0x00000001u; // 801CA5C4
  goto L_801CA5E4; // 801CA5C8
L_801CA5CC:;
  c->r[0]=R32(c->r[13]+0xFFFF847Cu); // 801CA5CC
  cmpu(c,0,c->r[3],c->r[0]); // 801CA5D0
  if (!crb(c,2)) { goto L_801CA5E0; } // 801CA5D4
  c->r[0]=0u+0x00000001u; // 801CA5D8
  goto L_801CA5E4; // 801CA5DC
L_801CA5E0:;
  c->r[0]=0u+0x00000000u; // 801CA5E0
L_801CA5E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA5E4
  if (crb(c,2)) { goto L_801CA640; } // 801CA5E8
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CA5EC
  c->r[4]=R32(c->r[3]+0x00000020u); // 801CA5F0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CA5F4
  cmpu(c,0,c->r[4],c->r[0]); // 801CA5F8
  if (crb(c,2)) { goto L_801CA608; } // 801CA5FC
  c->lr=0x801CA604u; f_801C9B50(c); // 801CA600
  goto L_801CA874; // 801CA604
L_801CA608:;
  c->r[4]=0u+0x80570000u; // 801CA608
  c->r[0]=0u+0x00000000u; // 801CA60C
  c->r[4]=c->r[4]+0xFFFFA460u; // 801CA610
  W32(c->r[13]+0xFFFF9E28u,c->r[4]); // 801CA614
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CA618
  c->r[12]=R32(c->r[3]+0x00000028u); // 801CA61C
  cmps(c,0,(int32_t)c->r[12],0); // 801CA620
  if (crb(c,2)) { goto L_801CA638; } // 801CA624
  c->r[4]=c->r[3]|c->r[3]; // 801CA628
  c->r[3]=R32(c->r[3]+0x00000020u); // 801CA62C
  c->ctr=c->r[12]; // 801CA630
  if (true) { c->lr=0x801CA638u; dispatch(c,c->ctr); } // 801CA634
L_801CA638:;
  c->lr=0x801CA63Cu; f_801C9828(c); // 801CA638
  goto L_801CA874; // 801CA63C
L_801CA640:;
  c->r[3]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA640
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 801CA644
  cmpu(c,0,c->r[0],0x00000003u); // 801CA648
  if (crb(c,1)) { goto L_801CA658; } // 801CA64C
  c->r[0]=0u+0x00000001u; // 801CA650
  goto L_801CA69C; // 801CA654
L_801CA658:;
  c->r[4]=0u+0x804B0000u; // 801CA658
  {uint32_t ea=c->r[4]+0x00000F64u; c->r[0]=R32(ea); c->r[4]=ea;} // 801CA65C
  cmpu(c,0,c->r[3],c->r[0]); // 801CA660
  if (!crb(c,2)) { goto L_801CA670; } // 801CA664
  c->r[0]=0u+0x00000001u; // 801CA668
  goto L_801CA69C; // 801CA66C
L_801CA670:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CA670
  cmpu(c,0,c->r[3],c->r[0]); // 801CA674
  if (!crb(c,2)) { goto L_801CA684; } // 801CA678
  c->r[0]=0u+0x00000001u; // 801CA67C
  goto L_801CA69C; // 801CA680
L_801CA684:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 801CA684
  cmpu(c,0,c->r[3],c->r[0]); // 801CA688
  if (!crb(c,2)) { goto L_801CA698; } // 801CA68C
  c->r[0]=0u+0x00000001u; // 801CA690
  goto L_801CA69C; // 801CA694
L_801CA698:;
  c->r[0]=0u+0x00000000u; // 801CA698
L_801CA69C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA69C
  if (crb(c,2)) { goto L_801CA6F8; } // 801CA6A0
  c->r[3]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA6A4
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 801CA6A8
  cmpu(c,0,c->r[0],0x00000001u); // 801CA6AC
  if (crb(c,1)) { goto L_801CA6C0; } // 801CA6B0
  c->lr=0x801CA6B8u; f_801CD4C8(c); // 801CA6B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CA6B8
  goto L_801CA6C4; // 801CA6BC
L_801CA6C0:;
  c->lr=0x801CA6C4u; f_801CD4C8(c); // 801CA6C0
L_801CA6C4:;
  c->r[5]=0u+0x80570000u; // 801CA6C4
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA6C8
  c->r[5]=c->r[5]+0xFFFFA460u; // 801CA6CC
  c->r[0]=0u+0x00000000u; // 801CA6D0
  W32(c->r[13]+0xFFFF9E28u,c->r[5]); // 801CA6D4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA6D8
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA6DC
  cmps(c,0,(int32_t)c->r[12],0); // 801CA6E0
  if (crb(c,2)) { goto L_801CA6F0; } // 801CA6E4
  c->ctr=c->r[12]; // 801CA6E8
  if (true) { c->lr=0x801CA6F0u; dispatch(c,c->ctr); } // 801CA6EC
L_801CA6F0:;
  c->lr=0x801CA6F4u; f_801C9828(c); // 801CA6F0
  goto L_801CA874; // 801CA6F4
L_801CA6F8:;
  c->r[3]=0u+0x80570000u; // 801CA6F8
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA6FC
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA700
  c->r[0]=0u+0x00000000u; // 801CA704
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA708
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA70C
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA710
  cmps(c,0,(int32_t)c->r[12],0); // 801CA714
  if (crb(c,2)) { goto L_801CA728; } // 801CA718
  c->r[3]=0u+0x00000000u; // 801CA71C
  c->ctr=c->r[12]; // 801CA720
  if (true) { c->lr=0x801CA728u; dispatch(c,c->ctr); } // 801CA724
L_801CA728:;
  c->lr=0x801CA72Cu; f_801C9828(c); // 801CA728
  goto L_801CA874; // 801CA72C
L_801CA730:;
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA730
  cmpu(c,0,c->r[0],0x0000000Eu); // 801CA734
  if (!crb(c,2)) { goto L_801CA754; } // 801CA738
  c->r[3]=0u+0x01230000u; // 801CA73C
  c->r[4]=0u+0x801C0000u; // 801CA740
  c->r[3]=c->r[3]+0x00004567u; // 801CA744
  c->r[4]=c->r[4]+0x0000744Cu; // 801CA748
  c->lr=0x801CA750u; f_801CB994(c); // 801CA74C
  goto L_801CA874; // 801CA750
L_801CA754:;
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA754
  cmpu(c,0,c->r[0],0x00000001u); // 801CA758
  if (crb(c,2)) { goto L_801CA790; } // 801CA75C
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA760
  cmpu(c,0,c->r[0],0x00000004u); // 801CA764
  if (crb(c,2)) { goto L_801CA790; } // 801CA768
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA76C
  cmpu(c,0,c->r[0],0x00000005u); // 801CA770
  if (crb(c,2)) { goto L_801CA790; } // 801CA774
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA778
  cmpu(c,0,c->r[0],0x00000021u); // 801CA77C
  if (crb(c,2)) { goto L_801CA790; } // 801CA780
  c->r[0]=R32(c->r[13]+0xFFFF9E1Cu); // 801CA784
  cmpu(c,0,c->r[0],0x0000000Eu); // 801CA788
  if (!crb(c,2)) { goto L_801CA858; } // 801CA78C
L_801CA790:;
  c->r[30]=R32(c->r[13]+0xFFFF9E28u); // 801CA790
  c->r[3]=R32(c->r[30]+0x00000020u); // 801CA794
  c->r[0]=R32(c->r[30]+0x00000014u); // 801CA798
  cmpu(c,0,c->r[3],c->r[0]); // 801CA79C
  if (!crb(c,2)) { goto L_801CA858; } // 801CA7A0
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CA7A4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA7A8
  if (crb(c,2)) { goto L_801CA814; } // 801CA7AC
  c->r[3]=0u+0x80570000u; // 801CA7B0
  c->r[4]=0u+0x00000000u; // 801CA7B4
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA7B8
  W32(c->r[13]+0xFFFF9DBCu,c->r[4]); // 801CA7BC
  c->r[0]=0u+0x0000000Au; // 801CA7C0
  W32(c->r[13]+0xFFFF9DB8u,c->r[4]); // 801CA7C4
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA7C8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CA7CC
  c->r[12]=R32(c->r[30]+0x00000028u); // 801CA7D0
  cmps(c,0,(int32_t)c->r[12],0); // 801CA7D4
  if (crb(c,2)) { goto L_801CA7EC; } // 801CA7D8
  c->r[4]=c->r[30]|c->r[30]; // 801CA7DC
  c->r[3]=0u+0xFFFFFFFDu; // 801CA7E0
  c->ctr=c->r[12]; // 801CA7E4
  if (true) { c->lr=0x801CA7ECu; dispatch(c,c->ctr); } // 801CA7E8
L_801CA7EC:;
  c->r[12]=R32(c->r[13]+0xFFFF9E18u); // 801CA7EC
  cmps(c,0,(int32_t)c->r[12],0); // 801CA7F0
  if (crb(c,2)) { goto L_801CA808; } // 801CA7F4
  c->r[4]=c->r[30]|c->r[30]; // 801CA7F8
  c->r[3]=0u+0x00000000u; // 801CA7FC
  c->ctr=c->r[12]; // 801CA800
  if (true) { c->lr=0x801CA808u; dispatch(c,c->ctr); } // 801CA804
L_801CA808:;
  c->lr=0x801CA80Cu; f_801C9828(c); // 801CA808
  c->r[0]=0u+0x00000001u; // 801CA80C
  goto L_801CA818; // 801CA810
L_801CA814:;
  c->r[0]=0u+0x00000000u; // 801CA814
L_801CA818:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA818
  if (!crb(c,2)) { goto L_801CA874; } // 801CA81C
  c->r[3]=0u+0x80570000u; // 801CA820
  c->r[4]=R32(c->r[13]+0xFFFF9E28u); // 801CA824
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CA828
  c->r[0]=0u+0x00000000u; // 801CA82C
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CA830
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CA834
  c->r[12]=R32(c->r[4]+0x00000028u); // 801CA838
  cmps(c,0,(int32_t)c->r[12],0); // 801CA83C
  if (crb(c,2)) { goto L_801CA850; } // 801CA840
  c->r[3]=R32(c->r[4]+0x00000020u); // 801CA844
  c->ctr=c->r[12]; // 801CA848
  if (true) { c->lr=0x801CA850u; dispatch(c,c->ctr); } // 801CA84C
L_801CA850:;
  c->lr=0x801CA854u; f_801C9828(c); // 801CA850
  goto L_801CA874; // 801CA854
L_801CA858:;
  c->r[3]=0u+0x00000027u; // 801CA858
  c->r[4]=0u+0x00000000u; // 801CA85C
  c->r[5]=0u+0x00000000u; // 801CA860
  c->lr=0x801CA868u; f_801C6EA4(c); // 801CA864
  c->r[3]=0u+0x801C0000u; // 801CA868
  c->r[3]=c->r[3]+0x00007654u; // 801CA86C
  c->lr=0x801CA874u; f_801CCA20(c); // 801CA870
L_801CA874:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA878
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CA87C
  c->lr=c->r[0]; // 801CA880
  c->r[1]=c->r[1]+0x00000010u; // 801CA884
  return; // 801CA888
}

// DVDReadAbsAsyncPrio
void f_801CA88C(Ctx* __restrict c) {
  trace_call(0x801CA88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA88C
  c->r[0]=c->lr; // 801CA890
  c->r[9]=0u+0x00000001u; // 801CA894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA898
  c->r[0]=0u+0x00000000u; // 801CA89C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA8A0
  c->r[31]=c->r[8]|c->r[8]; // 801CA8A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA8A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CA8AC
  c->r[29]=c->r[3]|c->r[3]; // 801CA8B0
  W32(c->r[3]+0x00000008u,c->r[9]); // 801CA8B4
  W32(c->r[3]+0x00000018u,c->r[4]); // 801CA8B8
  W32(c->r[3]+0x00000014u,c->r[5]); // 801CA8BC
  W32(c->r[3]+0x00000010u,c->r[6]); // 801CA8C0
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CA8C4
  W32(c->r[3]+0x00000028u,c->r[7]); // 801CA8C8
  c->r[0]=R32(c->r[13]+0xFFFF846Cu); // 801CA8CC
  cmps(c,0,(int32_t)c->r[0],0); // 801CA8D0
  if (crb(c,2)) { goto L_801CA90C; } // 801CA8D4
  cmpu(c,0,c->r[9],0x00000001u); // 801CA8D8
  if (crb(c,2)) { goto L_801CA900; } // 801CA8DC
  cmpu(c,0,c->r[9],0x00000004u); // 801CA8E0
  if (crb(c,2)) { goto L_801CA900; } // 801CA8E4
  cmpu(c,0,c->r[9],0x00000005u); // 801CA8E8
  if (crb(c,2)) { goto L_801CA900; } // 801CA8EC
  cmpu(c,0,c->r[9],0x00000021u); // 801CA8F0
  if (crb(c,2)) { goto L_801CA900; } // 801CA8F4
  cmpu(c,0,c->r[9],0x0000000Eu); // 801CA8F8
  if (!crb(c,2)) { goto L_801CA90C; } // 801CA8FC
L_801CA900:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 801CA900
  c->r[4]=R32(c->r[29]+0x00000014u); // 801CA904
  c->lr=0x801CA90Cu; f_801BA764(c); // 801CA908
L_801CA90C:;
  c->lr=0x801CA910u; f_801BE74C(c); // 801CA90C
  c->r[0]=0u+0x00000002u; // 801CA910
  c->r[30]=c->r[3]|c->r[3]; // 801CA914
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CA918
  c->r[3]=c->r[31]|c->r[31]; // 801CA91C
  c->r[4]=c->r[29]|c->r[29]; // 801CA920
  c->lr=0x801CA928u; f_801CB510(c); // 801CA924
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CA928
  c->r[31]=c->r[3]|c->r[3]; // 801CA92C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA930
  if (!crb(c,2)) { goto L_801CA948; } // 801CA934
  c->r[0]=R32(c->r[13]+0xFFFF9DACu); // 801CA938
  cmps(c,0,(int32_t)c->r[0],0); // 801CA93C
  if (!crb(c,2)) { goto L_801CA948; } // 801CA940
  c->lr=0x801CA948u; f_801C9828(c); // 801CA944
L_801CA948:;
  c->r[3]=c->r[30]|c->r[30]; // 801CA948
  c->lr=0x801CA950u; f_801BE774(c); // 801CA94C
  c->r[3]=c->r[31]|c->r[31]; // 801CA950
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CA954
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CA958
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CA95C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA960
  c->lr=c->r[0]; // 801CA964
  c->r[1]=c->r[1]+0x00000020u; // 801CA968
  return; // 801CA96C
}

// DVDInquiryAsync
void f_801CA970(Ctx* __restrict c) {
  trace_call(0x801CA970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA970
  c->r[0]=c->lr; // 801CA974
  c->r[7]=0u+0x0000000Eu; // 801CA978
  c->r[6]=0u+0x00000020u; // 801CA97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA980
  c->r[0]=0u+0x00000000u; // 801CA984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA988
  c->r[31]=c->r[3]|c->r[3]; // 801CA98C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA990
  W32(c->r[3]+0x00000008u,c->r[7]); // 801CA994
  W32(c->r[3]+0x00000018u,c->r[4]); // 801CA998
  W32(c->r[3]+0x00000014u,c->r[6]); // 801CA99C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CA9A0
  W32(c->r[3]+0x00000028u,c->r[5]); // 801CA9A4
  c->r[0]=R32(c->r[13]+0xFFFF846Cu); // 801CA9A8
  cmps(c,0,(int32_t)c->r[0],0); // 801CA9AC
  if (crb(c,2)) { goto L_801CA9E8; } // 801CA9B0
  cmpu(c,0,c->r[7],0x00000001u); // 801CA9B4
  if (crb(c,2)) { goto L_801CA9DC; } // 801CA9B8
  cmpu(c,0,c->r[7],0x00000004u); // 801CA9BC
  if (crb(c,2)) { goto L_801CA9DC; } // 801CA9C0
  cmpu(c,0,c->r[7],0x00000005u); // 801CA9C4
  if (crb(c,2)) { goto L_801CA9DC; } // 801CA9C8
  cmpu(c,0,c->r[7],0x00000021u); // 801CA9CC
  if (crb(c,2)) { goto L_801CA9DC; } // 801CA9D0
  cmpu(c,0,c->r[7],0x0000000Eu); // 801CA9D4
  if (!crb(c,2)) { goto L_801CA9E8; } // 801CA9D8
L_801CA9DC:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 801CA9DC
  c->r[4]=R32(c->r[31]+0x00000014u); // 801CA9E0
  c->lr=0x801CA9E8u; f_801BA764(c); // 801CA9E4
L_801CA9E8:;
  c->lr=0x801CA9ECu; f_801BE74C(c); // 801CA9E8
  c->r[0]=0u+0x00000002u; // 801CA9EC
  c->r[30]=c->r[3]|c->r[3]; // 801CA9F0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CA9F4
  c->r[4]=c->r[31]|c->r[31]; // 801CA9F8
  c->r[3]=0u+0x00000002u; // 801CA9FC
  c->lr=0x801CAA04u; f_801CB510(c); // 801CAA00
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CAA04
  c->r[31]=c->r[3]|c->r[3]; // 801CAA08
  cmps(c,0,(int32_t)c->r[0],0); // 801CAA0C
  if (!crb(c,2)) { goto L_801CAA24; } // 801CAA10
  c->r[0]=R32(c->r[13]+0xFFFF9DACu); // 801CAA14
  cmps(c,0,(int32_t)c->r[0],0); // 801CAA18
  if (!crb(c,2)) { goto L_801CAA24; } // 801CAA1C
  c->lr=0x801CAA24u; f_801C9828(c); // 801CAA20
L_801CAA24:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAA24
  c->lr=0x801CAA2Cu; f_801BE774(c); // 801CAA28
  c->r[3]=c->r[31]|c->r[31]; // 801CAA2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAA30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAA38
  c->lr=c->r[0]; // 801CAA3C
  c->r[1]=c->r[1]+0x00000010u; // 801CAA40
  return; // 801CAA44
}

// DVDGetCommandBlockStatus
void f_801CAA48(Ctx* __restrict c) {
  trace_call(0x801CAA48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAA48
  c->r[0]=c->lr; // 801CAA4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CAA50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CAA54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CAA58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CAA5C
  c->r[29]=c->r[3]|c->r[3]; // 801CAA60
  c->lr=0x801CAA68u; f_801BE74C(c); // 801CAA64
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAA68
  c->r[30]=c->r[3]|c->r[3]; // 801CAA6C
  cmps(c,0,(int32_t)c->r[0],3); // 801CAA70
  if (!crb(c,2)) { goto L_801CAA80; } // 801CAA74
  c->r[31]=0u+0x00000001u; // 801CAA78
  goto L_801CAAE8; // 801CAA7C
L_801CAA80:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAA80
  cmps(c,0,(int32_t)c->r[0],5); // 801CAA84
  if (!crb(c,2)) { goto L_801CAA94; } // 801CAA88
  c->r[31]=0u+0x00000004u; // 801CAA8C
  goto L_801CAAE8; // 801CAA90
L_801CAA94:;
  c->r[31]=0u+0x80570000u; // 801CAA94
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CAA98
  c->r[31]=c->r[31]+0xFFFFEFB0u; // 801CAA9C
  cmpu(c,0,c->r[0],c->r[31]); // 801CAAA0
  if (!crb(c,2)) { goto L_801CAAE4; } // 801CAAA4
  c->lr=0x801CAAACu; f_801CB670(c); // 801CAAA8
  cmps(c,0,(int32_t)c->r[3],0); // 801CAAAC
  if (crb(c,2)) { goto L_801CAACC; } // 801CAAB0
  cmpu(c,0,c->r[29],c->r[3]); // 801CAAB4
  if (!crb(c,2)) { goto L_801CAAC4; } // 801CAAB8
  c->r[31]=0u+0x00000001u; // 801CAABC
  goto L_801CAAE8; // 801CAAC0
L_801CAAC4:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801CAAC4
  goto L_801CAAE8; // 801CAAC8
L_801CAACC:;
  cmpu(c,0,c->r[29],c->r[31]); // 801CAACC
  if (!crb(c,2)) { goto L_801CAADC; } // 801CAAD0
  c->r[31]=0u+0x00000000u; // 801CAAD4
  goto L_801CAAE8; // 801CAAD8
L_801CAADC:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801CAADC
  goto L_801CAAE8; // 801CAAE0
L_801CAAE4:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801CAAE4
L_801CAAE8:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAAE8
  c->lr=0x801CAAF0u; f_801BE774(c); // 801CAAEC
  c->r[3]=c->r[31]|c->r[31]; // 801CAAF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CAAF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CAAF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CAAFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CAB00
  c->lr=c->r[0]; // 801CAB04
  c->r[1]=c->r[1]+0x00000020u; // 801CAB08
  return; // 801CAB0C
}

// DVDGetDriveStatus
void f_801CAB10(Ctx* __restrict c) {
  trace_call(0x801CAB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAB10
  c->r[0]=c->lr; // 801CAB14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAB18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAB1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAB20
  c->lr=0x801CAB28u; f_801BE74C(c); // 801CAB24
  c->r[0]=R32(c->r[13]+0xFFFF9DB4u); // 801CAB28
  c->r[31]=c->r[3]|c->r[3]; // 801CAB2C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAB30
  if (crb(c,2)) { goto L_801CAB40; } // 801CAB34
  c->r[30]=0u+0xFFFFFFFFu; // 801CAB38
  goto L_801CAB88; // 801CAB3C
L_801CAB40:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB0u); // 801CAB40
  cmps(c,0,(int32_t)c->r[0],0); // 801CAB44
  if (crb(c,2)) { goto L_801CAB54; } // 801CAB48
  c->r[30]=0u+0x00000008u; // 801CAB4C
  goto L_801CAB88; // 801CAB50
L_801CAB54:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CAB54
  cmps(c,0,(int32_t)c->r[3],0); // 801CAB58
  if (!crb(c,2)) { goto L_801CAB68; } // 801CAB5C
  c->r[30]=0u+0x00000000u; // 801CAB60
  goto L_801CAB88; // 801CAB64
L_801CAB68:;
  c->r[4]=0u+0x80570000u; // 801CAB68
  c->r[4]=c->r[4]+0xFFFFA460u; // 801CAB6C
  cmpu(c,0,c->r[3],c->r[4]); // 801CAB70
  if (!crb(c,2)) { goto L_801CAB80; } // 801CAB74
  c->r[3]=0u+0x00000000u; // 801CAB78
  goto L_801CAB84; // 801CAB7C
L_801CAB80:;
  c->lr=0x801CAB84u; f_801CAA48(c); // 801CAB80
L_801CAB84:;
  c->r[30]=c->r[3]|c->r[3]; // 801CAB84
L_801CAB88:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAB88
  c->lr=0x801CAB90u; f_801BE774(c); // 801CAB8C
  c->r[3]=c->r[30]|c->r[30]; // 801CAB90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAB94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAB98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAB9C
  c->lr=c->r[0]; // 801CABA0
  c->r[1]=c->r[1]+0x00000010u; // 801CABA4
  return; // 801CABA8
}

// DVDSetAutoInvalidation
void f_801CABAC(Ctx* __restrict c) {
  trace_call(0x801CABACu);
  c->r[0]=c->r[3]|c->r[3]; // 801CABAC
  c->r[3]=R32(c->r[13]+0xFFFF846Cu); // 801CABB0
  W32(c->r[13]+0xFFFF846Cu,c->r[0]); // 801CABB4
  return; // 801CABB8
}

// DVDResume
void f_801CABBC(Ctx* __restrict c) {
  trace_call(0x801CABBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CABBC
  c->r[0]=c->lr; // 801CABC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CABC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CABC8
  c->lr=0x801CABD0u; f_801BE74C(c); // 801CABCC
  c->r[4]=0u+0x00000000u; // 801CABD0
  c->r[31]=c->r[3]|c->r[3]; // 801CABD4
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CABD8
  c->r[0]=R32(c->r[13]+0xFFFF9DB0u); // 801CABDC
  cmps(c,0,(int32_t)c->r[0],0); // 801CABE0
  if (crb(c,2)) { goto L_801CABF0; } // 801CABE4
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CABE8
  c->lr=0x801CABF0u; f_801C9828(c); // 801CABEC
L_801CABF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801CABF0
  c->lr=0x801CABF8u; f_801BE774(c); // 801CABF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CABF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CABFC
  c->lr=c->r[0]; // 801CAC00
  c->r[1]=c->r[1]+0x00000010u; // 801CAC04
  return; // 801CAC08
}

// fn_801CAC0C
void f_801CAC0C(Ctx* __restrict c) {
  trace_call(0x801CAC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAC0C
  c->r[0]=c->lr; // 801CAC10
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CAC14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CAC18
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CAC1C
  c->r[30]=c->r[4]|c->r[4]; // 801CAC20
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CAC24
  c->r[29]=c->r[3]|c->r[3]; // 801CAC28
  c->lr=0x801CAC30u; f_801BE74C(c); // 801CAC2C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801CAC30
  c->r[31]=c->r[3]|c->r[3]; // 801CAC34
  c->r[0]=c->r[4]+0x00000001u; // 801CAC38
  cmpu(c,0,c->r[0],0x0000000Du); // 801CAC3C
  if (crb(c,1)) { goto L_801CAF38; } // 801CAC40
  c->r[4]=0u+0x804B0000u; // 801CAC44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CAC48
  c->r[4]=c->r[4]+0x00001008u; // 801CAC4C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CAC50
  c->ctr=c->r[4]; // 801CAC54
  if (true) { switch (c->ctr) { case 0x801CAC5Cu: goto L_801CAC5C; case 0x801CAC7Cu: goto L_801CAC7C; case 0x801CACD0u: goto L_801CACD0; case 0x801CAD1Cu: goto L_801CAD1C; case 0x801CAD40u: goto L_801CAD40; case 0x801CAD60u: goto L_801CAD60; case 0x801CADC0u: goto L_801CADC0; case 0x801CADECu: goto L_801CADEC; case 0x801CAEE8u: goto L_801CAEE8; case 0x801CAF38u: goto L_801CAF38; default: break; } dispatch(c,c->ctr); return; } // 801CAC58
L_801CAC5C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CAC5C
  if (crb(c,2)) { goto L_801CAF38; } // 801CAC60
  c->r[12]=c->r[30]|c->r[30]; // 801CAC64
  c->r[4]=c->r[29]|c->r[29]; // 801CAC68
  c->r[3]=0u+0x00000000u; // 801CAC6C
  c->ctr=c->r[12]; // 801CAC70
  if (true) { c->lr=0x801CAC78u; dispatch(c,c->ctr); } // 801CAC74
  goto L_801CAF38; // 801CAC78
L_801CAC7C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CAC7C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC80
  if (crb(c,2)) { goto L_801CAC94; } // 801CAC84
  c->lr=0x801CAC8Cu; f_801BE774(c); // 801CAC88
  c->r[3]=0u+0x00000000u; // 801CAC8C
  goto L_801CAF44; // 801CAC90
L_801CAC94:;
  c->r[0]=0u+0x00000001u; // 801CAC94
  W32(c->r[13]+0xFFFF9E18u,c->r[30]); // 801CAC98
  W32(c->r[13]+0xFFFF9DB8u,c->r[0]); // 801CAC9C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801CACA0
  cmpu(c,0,c->r[0],0x00000004u); // 801CACA4
  if (crb(c,2)) { goto L_801CACC4; } // 801CACA8
  cmpu(c,0,c->r[0],0x00000021u); // 801CACAC
  if (crb(c,2)) { goto L_801CACC4; } // 801CACB0
  cmpu(c,0,c->r[0],0x00000022u); // 801CACB4
  if (crb(c,2)) { goto L_801CACC4; } // 801CACB8
  cmpu(c,0,c->r[0],0x00000001u); // 801CACBC
  if (!crb(c,2)) { goto L_801CAF38; } // 801CACC0
L_801CACC4:;
  c->r[0]=0u+0x00000001u; // 801CACC4
  W32(c->r[13]+0xFFFF9DCCu,c->r[0]); // 801CACC8
  goto L_801CAF38; // 801CACCC
L_801CACD0:;
  c->r[3]=c->r[29]|c->r[29]; // 801CACD0
  c->lr=0x801CACD8u; f_801CB6D0(c); // 801CACD4
  c->r[12]=R32(c->r[29]+0x00000028u); // 801CACD8
  c->r[0]=0u+0x0000000Au; // 801CACDC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CACE0
  cmps(c,0,(int32_t)c->r[12],0); // 801CACE4
  if (crb(c,2)) { goto L_801CACFC; } // 801CACE8
  c->r[4]=c->r[29]|c->r[29]; // 801CACEC
  c->r[3]=0u+0xFFFFFFFDu; // 801CACF0
  c->ctr=c->r[12]; // 801CACF4
  if (true) { c->lr=0x801CACFCu; dispatch(c,c->ctr); } // 801CACF8
L_801CACFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CACFC
  if (crb(c,2)) { goto L_801CAF38; } // 801CAD00
  c->r[12]=c->r[30]|c->r[30]; // 801CAD04
  c->r[4]=c->r[29]|c->r[29]; // 801CAD08
  c->r[3]=0u+0x00000000u; // 801CAD0C
  c->ctr=c->r[12]; // 801CAD10
  if (true) { c->lr=0x801CAD18u; dispatch(c,c->ctr); } // 801CAD14
  goto L_801CAF38; // 801CAD18
L_801CAD1C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801CAD1C
  cmpu(c,0,c->r[0],0x00000025u); // 801CAD20
  if (crb(c,1)) { goto L_801CADC0; } // 801CAD24
  c->r[3]=0u+0x804B0000u; // 801CAD28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CAD2C
  c->r[3]=c->r[3]+0x00000F70u; // 801CAD30
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CAD34
  c->ctr=c->r[3]; // 801CAD38
  if (true) { switch (c->ctr) { case 0x801CAC5Cu: goto L_801CAC5C; case 0x801CAC7Cu: goto L_801CAC7C; case 0x801CACD0u: goto L_801CACD0; case 0x801CAD1Cu: goto L_801CAD1C; case 0x801CAD40u: goto L_801CAD40; case 0x801CAD60u: goto L_801CAD60; case 0x801CADC0u: goto L_801CADC0; case 0x801CADECu: goto L_801CADEC; case 0x801CAEE8u: goto L_801CAEE8; case 0x801CAF38u: goto L_801CAF38; default: break; } dispatch(c,c->ctr); return; } // 801CAD3C
L_801CAD40:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CAD40
  if (crb(c,2)) { goto L_801CAF38; } // 801CAD44
  c->r[12]=c->r[30]|c->r[30]; // 801CAD48
  c->r[4]=c->r[29]|c->r[29]; // 801CAD4C
  c->r[3]=0u+0x00000000u; // 801CAD50
  c->ctr=c->r[12]; // 801CAD54
  if (true) { c->lr=0x801CAD5Cu; dispatch(c,c->ctr); } // 801CAD58
  goto L_801CAF38; // 801CAD5C
L_801CAD60:;
  c->r[0]=R32(c->r[13]+0xFFFF9C50u); // 801CAD60
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD64
  if (crb(c,2)) { goto L_801CADC0; } // 801CAD68
  c->r[3]=0u+0x80570000u; // 801CAD6C
  c->r[0]=0u+0x0000000Au; // 801CAD70
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CAD74
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CAD78
  c->r[12]=R32(c->r[29]+0x00000028u); // 801CAD7C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CAD80
  cmps(c,0,(int32_t)c->r[12],0); // 801CAD84
  if (crb(c,2)) { goto L_801CAD9C; } // 801CAD88
  c->r[4]=c->r[29]|c->r[29]; // 801CAD8C
  c->r[3]=0u+0xFFFFFFFDu; // 801CAD90
  c->ctr=c->r[12]; // 801CAD94
  if (true) { c->lr=0x801CAD9Cu; dispatch(c,c->ctr); } // 801CAD98
L_801CAD9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CAD9C
  if (crb(c,2)) { goto L_801CADB8; } // 801CADA0
  c->r[12]=c->r[30]|c->r[30]; // 801CADA4
  c->r[4]=c->r[29]|c->r[29]; // 801CADA8
  c->r[3]=0u+0x00000000u; // 801CADAC
  c->ctr=c->r[12]; // 801CADB0
  if (true) { c->lr=0x801CADB8u; dispatch(c,c->ctr); } // 801CADB4
L_801CADB8:;
  c->lr=0x801CADBCu; f_801C9828(c); // 801CADB8
  goto L_801CAF38; // 801CADBC
L_801CADC0:;
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CADC0
  cmps(c,0,(int32_t)c->r[0],0); // 801CADC4
  if (crb(c,2)) { goto L_801CADDC; } // 801CADC8
  c->r[3]=c->r[31]|c->r[31]; // 801CADCC
  c->lr=0x801CADD4u; f_801BE774(c); // 801CADD0
  c->r[3]=0u+0x00000000u; // 801CADD4
  goto L_801CAF44; // 801CADD8
L_801CADDC:;
  c->r[0]=0u+0x00000001u; // 801CADDC
  W32(c->r[13]+0xFFFF9E18u,c->r[30]); // 801CADE0
  W32(c->r[13]+0xFFFF9DB8u,c->r[0]); // 801CADE4
  goto L_801CAF38; // 801CADE8
L_801CADEC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DD4u); // 801CADEC
  cmps(c,0,(int32_t)c->r[0],0); // 801CADF0
  if (!crb(c,2)) { goto L_801CAE10; } // 801CADF4
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801CADF8
  cmps(c,0,(int32_t)c->r[0],0); // 801CADFC
  if (!crb(c,2)) { goto L_801CAE10; } // 801CAE00
  c->lr=0x801CAE08u; f_801BE774(c); // 801CAE04
  c->r[3]=0u+0x00000000u; // 801CAE08
  goto L_801CAF44; // 801CAE0C
L_801CAE10:;
  c->r[0]=R32(c->r[13]+0xFFFF9DD0u); // 801CAE10
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE14
  if (crb(c,2)) { goto L_801CAE30; } // 801CAE18
  c->r[3]=0u+0x80570000u; // 801CAE1C
  c->r[3]=c->r[3]+0xFFFFA4C0u; // 801CAE20
  c->lr=0x801CAE28u; f_801B9AC8(c); // 801CAE24
  c->r[0]=0u+0x00000000u; // 801CAE28
  W32(c->r[13]+0xFFFF9DD0u,c->r[0]); // 801CAE2C
L_801CAE30:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAE30
  cmps(c,0,(int32_t)c->r[0],4); // 801CAE34
  if (!crb(c,2)) { goto L_801CAE44; } // 801CAE38
  c->r[0]=0u+0x00000003u; // 801CAE3C
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CAE40
L_801CAE44:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAE44
  cmps(c,0,(int32_t)c->r[0],5); // 801CAE48
  if (!crb(c,2)) { goto L_801CAE58; } // 801CAE4C
  c->r[0]=0u+0x00000004u; // 801CAE50
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CAE54
L_801CAE58:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAE58
  cmps(c,0,(int32_t)c->r[0],6); // 801CAE5C
  if (!crb(c,2)) { goto L_801CAE6C; } // 801CAE60
  c->r[0]=0u+0x00000001u; // 801CAE64
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CAE68
L_801CAE6C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAE6C
  cmps(c,0,(int32_t)c->r[0],11); // 801CAE70
  if (!crb(c,2)) { goto L_801CAE80; } // 801CAE74
  c->r[0]=0u+0x00000002u; // 801CAE78
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CAE7C
L_801CAE80:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801CAE80
  cmps(c,0,(int32_t)c->r[0],7); // 801CAE84
  if (!crb(c,2)) { goto L_801CAE94; } // 801CAE88
  c->r[0]=0u+0x00000007u; // 801CAE8C
  W32(c->r[13]+0xFFFF9DBCu,c->r[0]); // 801CAE90
L_801CAE94:;
  c->r[3]=0u+0x80570000u; // 801CAE94
  c->r[0]=0u+0x0000000Au; // 801CAE98
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CAE9C
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CAEA0
  c->r[12]=R32(c->r[29]+0x00000028u); // 801CAEA4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CAEA8
  cmps(c,0,(int32_t)c->r[12],0); // 801CAEAC
  if (crb(c,2)) { goto L_801CAEC4; } // 801CAEB0
  c->r[4]=c->r[29]|c->r[29]; // 801CAEB4
  c->r[3]=0u+0xFFFFFFFDu; // 801CAEB8
  c->ctr=c->r[12]; // 801CAEBC
  if (true) { c->lr=0x801CAEC4u; dispatch(c,c->ctr); } // 801CAEC0
L_801CAEC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CAEC4
  if (crb(c,2)) { goto L_801CAEE0; } // 801CAEC8
  c->r[12]=c->r[30]|c->r[30]; // 801CAECC
  c->r[4]=c->r[29]|c->r[29]; // 801CAED0
  c->r[3]=0u+0x00000000u; // 801CAED4
  c->ctr=c->r[12]; // 801CAED8
  if (true) { c->lr=0x801CAEE0u; dispatch(c,c->ctr); } // 801CAEDC
L_801CAEE0:;
  c->lr=0x801CAEE4u; f_801C9828(c); // 801CAEE0
  goto L_801CAF38; // 801CAEE4
L_801CAEE8:;
  c->r[3]=0u+0x80570000u; // 801CAEE8
  c->r[0]=0u+0x0000000Au; // 801CAEEC
  c->r[3]=c->r[3]+0xFFFFA460u; // 801CAEF0
  W32(c->r[13]+0xFFFF9E28u,c->r[3]); // 801CAEF4
  c->r[12]=R32(c->r[29]+0x00000028u); // 801CAEF8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CAEFC
  cmps(c,0,(int32_t)c->r[12],0); // 801CAF00
  if (crb(c,2)) { goto L_801CAF18; } // 801CAF04
  c->r[4]=c->r[29]|c->r[29]; // 801CAF08
  c->r[3]=0u+0xFFFFFFFDu; // 801CAF0C
  c->ctr=c->r[12]; // 801CAF10
  if (true) { c->lr=0x801CAF18u; dispatch(c,c->ctr); } // 801CAF14
L_801CAF18:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CAF18
  if (crb(c,2)) { goto L_801CAF34; } // 801CAF1C
  c->r[12]=c->r[30]|c->r[30]; // 801CAF20
  c->r[4]=c->r[29]|c->r[29]; // 801CAF24
  c->r[3]=0u+0x00000000u; // 801CAF28
  c->ctr=c->r[12]; // 801CAF2C
  if (true) { c->lr=0x801CAF34u; dispatch(c,c->ctr); } // 801CAF30
L_801CAF34:;
  c->lr=0x801CAF38u; f_801C9828(c); // 801CAF34
L_801CAF38:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAF38
  c->lr=0x801CAF40u; f_801BE774(c); // 801CAF3C
  c->r[3]=0u+0x00000001u; // 801CAF40
L_801CAF44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CAF44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CAF48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CAF4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CAF50
  c->lr=c->r[0]; // 801CAF54
  c->r[1]=c->r[1]+0x00000020u; // 801CAF58
  return; // 801CAF5C
}

// fn_801CAF60
void f_801CAF60(Ctx* __restrict c) {
  trace_call(0x801CAF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAF60
  c->r[0]=c->lr; // 801CAF64
  c->r[4]=0u+0x801D0000u; // 801CAF68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAF6C
  c->r[4]=c->r[4]+0xFFFFB02Cu; // 801CAF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAF74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAF78
  c->r[30]=c->r[3]|c->r[3]; // 801CAF7C
  c->lr=0x801CAF84u; f_801CAC0C(c); // 801CAF80
  cmps(c,0,(int32_t)c->r[3],0); // 801CAF84
  if (!crb(c,2)) { goto L_801CAF94; } // 801CAF88
  c->r[3]=0u+0xFFFFFFFFu; // 801CAF8C
  goto L_801CB014; // 801CAF90
L_801CAF94:;
  c->lr=0x801CAF98u; f_801BE74C(c); // 801CAF94
  c->r[31]=c->r[3]|c->r[3]; // 801CAF98
L_801CAF9C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801CAF9C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAFA0
  if (crb(c,2)) { goto L_801CB008; } // 801CAFA4
  cmps(c,0,(int32_t)c->r[0],-1); // 801CAFA8
  if (crb(c,2)) { goto L_801CB008; } // 801CAFAC
  cmps(c,0,(int32_t)c->r[0],10); // 801CAFB0
  if (crb(c,2)) { goto L_801CB008; } // 801CAFB4
  cmps(c,0,(int32_t)c->r[0],3); // 801CAFB8
  if (!crb(c,2)) { goto L_801CAFFC; } // 801CAFBC
  c->r[0]=R32(c->r[30]+0x00000008u); // 801CAFC0
  cmpu(c,0,c->r[0],0x00000004u); // 801CAFC4
  if (crb(c,2)) { goto L_801CB008; } // 801CAFC8
  cmpu(c,0,c->r[0],0x00000005u); // 801CAFCC
  if (crb(c,2)) { goto L_801CB008; } // 801CAFD0
  cmpu(c,0,c->r[0],0x0000000Du); // 801CAFD4
  if (crb(c,2)) { goto L_801CB008; } // 801CAFD8
  cmpu(c,0,c->r[0],0x00000021u); // 801CAFDC
  if (crb(c,2)) { goto L_801CB008; } // 801CAFE0
  cmpu(c,0,c->r[0],0x00000022u); // 801CAFE4
  if (crb(c,2)) { goto L_801CB008; } // 801CAFE8
  cmpu(c,0,c->r[0],0x0000000Fu); // 801CAFEC
  if (crb(c,2)) { goto L_801CB008; } // 801CAFF0
  cmpu(c,0,c->r[0],0x00000025u); // 801CAFF4
  if (crb(c,2)) { goto L_801CB008; } // 801CAFF8
L_801CAFFC:;
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801CAFFC
  c->lr=0x801CB004u; f_801C21D0(c); // 801CB000
  IRQCHK(c); goto L_801CAF9C; // 801CB004
L_801CB008:;
  c->r[3]=c->r[31]|c->r[31]; // 801CB008
  c->lr=0x801CB010u; f_801BE774(c); // 801CB00C
  c->r[3]=0u+0x00000000u; // 801CB010
L_801CB014:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB018
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB01C
  c->lr=c->r[0]; // 801CB020
  c->r[1]=c->r[1]+0x00000010u; // 801CB024
  return; // 801CB028
}

// fn_801CB02C
void f_801CB02C(Ctx* __restrict c) {
  trace_call(0x801CB02Cu);
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801CB02C
  f_801C22BC(c); return; // 801CB030
}

// fn_801CB034
void f_801CB034(Ctx* __restrict c) {
  trace_call(0x801CB034u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB034
  c->r[0]=c->lr; // 801CB038
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB03C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB040
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB044
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB048
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CB04C
  c->lr=0x801CB054u; f_801BE74C(c); // 801CB050
  c->r[0]=0u+0x00000000u; // 801CB054
  c->r[28]=c->r[3]|c->r[3]; // 801CB058
  W32(c->r[13]+0xFFFF9DC4u,c->r[0]); // 801CB05C
  c->lr=0x801CB064u; f_801BE74C(c); // 801CB060
  c->r[29]=c->r[3]|c->r[3]; // 801CB064
  c->lr=0x801CB06Cu; f_801BE74C(c); // 801CB068
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CB06C
  c->r[4]=0u+0x00000001u; // 801CB070
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB074
  cmps(c,0,(int32_t)c->r[0],0); // 801CB078
  if (!crb(c,2)) { goto L_801CB084; } // 801CB07C
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB080
L_801CB084:;
  c->lr=0x801CB088u; f_801BE774(c); // 801CB084
  goto L_801CB094; // 801CB088
L_801CB08C:;
  c->r[4]=0u+0x00000000u; // 801CB08C
  c->lr=0x801CB094u; f_801CAC0C(c); // 801CB090
L_801CB094:;
  c->lr=0x801CB098u; f_801CB578(c); // 801CB094
  cmps(c,0,(int32_t)c->r[3],0); // 801CB098
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB08C; } // 801CB09C
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CB0A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CB0A4
  if (crb(c,2)) { goto L_801CB0C0; } // 801CB0A8
  c->r[4]=0u+0x801D0000u; // 801CB0AC
  c->r[4]=c->r[4]+0xFFFFB170u; // 801CB0B0
  c->lr=0x801CB0B8u; f_801CAC0C(c); // 801CB0B4
  c->r[30]=c->r[3]|c->r[3]; // 801CB0B8
  goto L_801CB0E0; // 801CB0BC
L_801CB0C0:;
  c->r[0]=0u+0x801D0000u; // 801CB0C0
  c->r[30]=0u+0x00000001u; // 801CB0C4
  c->r[0]=addc(c,c->r[0],0xFFFFB170u,0); cr0(c,c->r[0]); // 801CB0C8
  if (crb(c,2)) { goto L_801CB0E0; } // 801CB0CC
  c->r[0]=0u+0x00000001u; // 801CB0D0
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801CB0D4
  W32(c->r[13]+0xFFFF9DC4u,c->r[0]); // 801CB0D8
  c->lr=0x801CB0E0u; f_801C22BC(c); // 801CB0DC
L_801CB0E0:;
  c->lr=0x801CB0E4u; f_801BE74C(c); // 801CB0E0
  c->r[4]=0u+0x00000000u; // 801CB0E4
  c->r[31]=c->r[3]|c->r[3]; // 801CB0E8
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB0EC
  c->r[0]=R32(c->r[13]+0xFFFF9DB0u); // 801CB0F0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB0F4
  if (crb(c,2)) { goto L_801CB104; } // 801CB0F8
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB0FC
  c->lr=0x801CB104u; f_801C9828(c); // 801CB100
L_801CB104:;
  c->r[3]=c->r[31]|c->r[31]; // 801CB104
  c->lr=0x801CB10Cu; f_801BE774(c); // 801CB108
  c->r[3]=c->r[29]|c->r[29]; // 801CB10C
  c->lr=0x801CB114u; f_801BE774(c); // 801CB110
  cmps(c,0,(int32_t)c->r[30],0); // 801CB114
  if (!crb(c,2)) { goto L_801CB12C; } // 801CB118
  c->r[3]=c->r[28]|c->r[28]; // 801CB11C
  c->lr=0x801CB124u; f_801BE774(c); // 801CB120
  c->r[3]=0u+0xFFFFFFFFu; // 801CB124
  goto L_801CB150; // 801CB128
L_801CB12C:;
  c->r[0]=R32(c->r[13]+0xFFFF9DC4u); // 801CB12C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB130
  if (!crb(c,2)) { goto L_801CB144; } // 801CB134
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801CB138
  c->lr=0x801CB140u; f_801C21D0(c); // 801CB13C
  IRQCHK(c); goto L_801CB12C; // 801CB140
L_801CB144:;
  c->r[3]=c->r[28]|c->r[28]; // 801CB144
  c->lr=0x801CB14Cu; f_801BE774(c); // 801CB148
  c->r[3]=0u+0x00000000u; // 801CB14C
L_801CB150:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB150
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB154
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB158
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB15C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CB160
  c->lr=c->r[0]; // 801CB164
  c->r[1]=c->r[1]+0x00000020u; // 801CB168
  return; // 801CB16C
}

// fn_801CB170
void f_801CB170(Ctx* __restrict c) {
  trace_call(0x801CB170u);
  c->r[0]=0u+0x00000001u; // 801CB170
  c->r[3]=c->r[13]+0xFFFF9D90u; // 801CB174
  W32(c->r[13]+0xFFFF9DC4u,c->r[0]); // 801CB178
  f_801C22BC(c); return; // 801CB17C
}

// fn_801CB180
void f_801CB180(Ctx* __restrict c) {
  trace_call(0x801CB180u);
  W32(c->r[13]+0xFFFF9DECu,c->r[3]); // 801CB180
  return; // 801CB184
}

// __DVDGetCoverStatus
void f_801CB188(Ctx* __restrict c) {
  trace_call(0x801CB188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB188
  c->r[0]=c->lr; // 801CB18C
  c->r[3]=0u+0x801D0000u; // 801CB190
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB194
  c->r[0]=0u+0x00000000u; // 801CB198
  c->r[3]=c->r[3]+0xFFFFB180u; // 801CB19C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB1A0
  W32(c->r[13]+0xFFFF9DECu,c->r[0]); // 801CB1A4
  c->lr=0x801CB1ACu; f_801CD360(c); // 801CB1A8
L_801CB1AC:;
  c->r[0]=R32(c->r[13]+0xFFFF9DECu); // 801CB1AC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB1B0
  if (crb(c,2)) { IRQCHK(c); goto L_801CB1AC; } // 801CB1B4
  c->r[0]=R32(c->r[13]+0xFFFF9DECu); // 801CB1B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CB1BC
  if (!crb(c,2)) { goto L_801CB1CC; } // 801CB1C0
  c->r[3]=0u+0x00000000u; // 801CB1C4
  goto L_801CB23C; // 801CB1C8
L_801CB1CC:;
  c->lr=0x801CB1D0u; f_801CD350(c); // 801CB1CC
  c->r[31]=c->r[3]|c->r[3]; // 801CB1D0
  c->lr=0x801CB1D8u; f_801C259C(c); // 801CB1D4
  c->r[6]=0u+0x80000000u; // 801CB1D8
  c->r[5]=0u+0x10620000u; // 801CB1DC
  c->r[6]=R32(c->r[6]+0x000000F8u); // 801CB1E0
  c->r[7]=c->r[5]+0x00004DD3u; // 801CB1E4
  c->r[8]=R32(c->r[13]+0xFFFF9E00u); // 801CB1E8
  c->r[0]=0u+0x00000000u; // 801CB1EC
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 801CB1F0
  c->r[9]=R32(c->r[13]+0xFFFF9E04u); // 801CB1F4
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 801CB1F8
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 801CB1FC
  c->r[5]=c->r[0]^0x80000000u; // 801CB200
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 801CB204
  c->r[0]=c->r[0]^0x80000000u; // 801CB208
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 801CB20C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801CB210
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 801CB214
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801CB218
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801CB21C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801CB220
  if (crb(c,2)) { goto L_801CB230; } // 801CB224
  c->r[3]=0u+0x00000000u; // 801CB228
  goto L_801CB23C; // 801CB22C
L_801CB230:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 801CB230
  c->r[3]=0u-c->r[0]; // 801CB234
  c->r[3]=c->r[3]+0x00000002u; // 801CB238
L_801CB23C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB240
  c->lr=c->r[0]; // 801CB244
  c->r[1]=c->r[1]+0x00000010u; // 801CB248
  return; // 801CB24C
}

// __DVDPrepareResetAsync
void f_801CB250(Ctx* __restrict c) {
  trace_call(0x801CB250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB250
  c->r[0]=c->lr; // 801CB254
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB25C
  c->r[31]=c->r[3]|c->r[3]; // 801CB260
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB264
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB268
  c->lr=0x801CB270u; f_801BE74C(c); // 801CB26C
  c->r[29]=c->r[3]|c->r[3]; // 801CB270
  c->lr=0x801CB278u; f_801CB4D8(c); // 801CB274
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CB278
  cmps(c,0,(int32_t)c->r[0],0); // 801CB27C
  if (crb(c,2)) { goto L_801CB28C; } // 801CB280
  W32(c->r[13]+0xFFFF9E18u,c->r[31]); // 801CB284
  goto L_801CB348; // 801CB288
L_801CB28C:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CB28C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB290
  if (crb(c,2)) { goto L_801CB2A0; } // 801CB294
  c->r[0]=0u+0x00000000u; // 801CB298
  W32(c->r[3]+0x00000028u,c->r[0]); // 801CB29C
L_801CB2A0:;
  c->lr=0x801CB2A4u; f_801BE74C(c); // 801CB2A0
  c->r[30]=c->r[3]|c->r[3]; // 801CB2A4
  c->lr=0x801CB2ACu; f_801BE74C(c); // 801CB2A8
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CB2AC
  c->r[4]=0u+0x00000001u; // 801CB2B0
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB2B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB2B8
  if (!crb(c,2)) { goto L_801CB2C4; } // 801CB2BC
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB2C0
L_801CB2C4:;
  c->lr=0x801CB2C8u; f_801BE774(c); // 801CB2C4
  goto L_801CB2D4; // 801CB2C8
L_801CB2CC:;
  c->r[4]=0u+0x00000000u; // 801CB2CC
  c->lr=0x801CB2D4u; f_801CAC0C(c); // 801CB2D0
L_801CB2D4:;
  c->lr=0x801CB2D8u; f_801CB578(c); // 801CB2D4
  cmps(c,0,(int32_t)c->r[3],0); // 801CB2D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB2CC; } // 801CB2DC
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CB2E0
  cmps(c,0,(int32_t)c->r[3],0); // 801CB2E4
  if (crb(c,2)) { goto L_801CB2F8; } // 801CB2E8
  c->r[4]=c->r[31]|c->r[31]; // 801CB2EC
  c->lr=0x801CB2F4u; f_801CAC0C(c); // 801CB2F0
  goto L_801CB314; // 801CB2F4
L_801CB2F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CB2F8
  if (crb(c,2)) { goto L_801CB314; } // 801CB2FC
  c->r[12]=c->r[31]|c->r[31]; // 801CB300
  c->r[3]=0u+0x00000000u; // 801CB304
  c->r[4]=0u+0x00000000u; // 801CB308
  c->ctr=c->r[12]; // 801CB30C
  if (true) { c->lr=0x801CB314u; dispatch(c,c->ctr); } // 801CB310
L_801CB314:;
  c->lr=0x801CB318u; f_801BE74C(c); // 801CB314
  c->r[4]=0u+0x00000000u; // 801CB318
  c->r[31]=c->r[3]|c->r[3]; // 801CB31C
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB320
  c->r[0]=R32(c->r[13]+0xFFFF9DB0u); // 801CB324
  cmps(c,0,(int32_t)c->r[0],0); // 801CB328
  if (crb(c,2)) { goto L_801CB338; } // 801CB32C
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB330
  c->lr=0x801CB338u; f_801C9828(c); // 801CB334
L_801CB338:;
  c->r[3]=c->r[31]|c->r[31]; // 801CB338
  c->lr=0x801CB340u; f_801BE774(c); // 801CB33C
  c->r[3]=c->r[30]|c->r[30]; // 801CB340
  c->lr=0x801CB348u; f_801BE774(c); // 801CB344
L_801CB348:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB348
  c->lr=0x801CB350u; f_801BE774(c); // 801CB34C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB354
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB358
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB35C
  c->lr=c->r[0]; // 801CB360
  c->r[1]=c->r[1]+0x00000020u; // 801CB364
  return; // 801CB368
}

// fn_801CB36C
void f_801CB36C(Ctx* __restrict c) {
  trace_call(0x801CB36Cu);
  c->r[0]=0u+0x00000001u; // 801CB36C
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 801CB370
  return; // 801CB374
}

// __DVDPrepareReset
void f_801CB378(Ctx* __restrict c) {
  trace_call(0x801CB378u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB378
  c->r[0]=c->lr; // 801CB37C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB380
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB384
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB388
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB38C
  c->lr=0x801CB394u; f_801BE74C(c); // 801CB390
  c->r[31]=0u+0x00000000u; // 801CB394
  W32(c->r[13]+0xFFFF9DF0u,c->r[31]); // 801CB398
  c->lr=0x801CB3A0u; f_801BE74C(c); // 801CB39C
  c->r[29]=c->r[3]|c->r[3]; // 801CB3A0
  c->lr=0x801CB3A8u; f_801CB4D8(c); // 801CB3A4
  c->r[0]=R32(c->r[13]+0xFFFF9DB8u); // 801CB3A8
  cmps(c,0,(int32_t)c->r[0],0); // 801CB3AC
  if (crb(c,2)) { goto L_801CB3C4; } // 801CB3B0
  c->r[3]=0u+0x801D0000u; // 801CB3B4
  c->r[3]=c->r[3]+0xFFFFB36Cu; // 801CB3B8
  W32(c->r[13]+0xFFFF9E18u,c->r[3]); // 801CB3BC
  goto L_801CB478; // 801CB3C0
L_801CB3C4:;
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CB3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801CB3C8
  if (crb(c,2)) { goto L_801CB3D4; } // 801CB3CC
  W32(c->r[3]+0x00000028u,c->r[31]); // 801CB3D0
L_801CB3D4:;
  c->lr=0x801CB3D8u; f_801BE74C(c); // 801CB3D4
  c->r[31]=c->r[3]|c->r[3]; // 801CB3D8
  c->lr=0x801CB3E0u; f_801BE74C(c); // 801CB3DC
  c->r[0]=R32(c->r[13]+0xFFFF9E28u); // 801CB3E0
  c->r[4]=0u+0x00000001u; // 801CB3E4
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB3E8
  cmps(c,0,(int32_t)c->r[0],0); // 801CB3EC
  if (!crb(c,2)) { goto L_801CB3F8; } // 801CB3F0
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB3F4
L_801CB3F8:;
  c->lr=0x801CB3FCu; f_801BE774(c); // 801CB3F8
  goto L_801CB408; // 801CB3FC
L_801CB400:;
  c->r[4]=0u+0x00000000u; // 801CB400
  c->lr=0x801CB408u; f_801CAC0C(c); // 801CB404
L_801CB408:;
  c->lr=0x801CB40Cu; f_801CB578(c); // 801CB408
  cmps(c,0,(int32_t)c->r[3],0); // 801CB40C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB400; } // 801CB410
  c->r[3]=R32(c->r[13]+0xFFFF9E28u); // 801CB414
  cmps(c,0,(int32_t)c->r[3],0); // 801CB418
  if (crb(c,2)) { goto L_801CB430; } // 801CB41C
  c->r[4]=0u+0x801D0000u; // 801CB420
  c->r[4]=c->r[4]+0xFFFFB36Cu; // 801CB424
  c->lr=0x801CB42Cu; f_801CAC0C(c); // 801CB428
  goto L_801CB444; // 801CB42C
L_801CB430:;
  c->r[0]=0u+0x801D0000u; // 801CB430
  c->r[0]=addc(c,c->r[0],0xFFFFB36Cu,0); cr0(c,c->r[0]); // 801CB434
  if (crb(c,2)) { goto L_801CB444; } // 801CB438
  c->r[0]=0u+0x00000001u; // 801CB43C
  W32(c->r[13]+0xFFFF9DF0u,c->r[0]); // 801CB440
L_801CB444:;
  c->lr=0x801CB448u; f_801BE74C(c); // 801CB444
  c->r[4]=0u+0x00000000u; // 801CB448
  c->r[30]=c->r[3]|c->r[3]; // 801CB44C
  W32(c->r[13]+0xFFFF9DACu,c->r[4]); // 801CB450
  c->r[0]=R32(c->r[13]+0xFFFF9DB0u); // 801CB454
  cmps(c,0,(int32_t)c->r[0],0); // 801CB458
  if (crb(c,2)) { goto L_801CB468; } // 801CB45C
  W32(c->r[13]+0xFFFF9DB0u,c->r[4]); // 801CB460
  c->lr=0x801CB468u; f_801C9828(c); // 801CB464
L_801CB468:;
  c->r[3]=c->r[30]|c->r[30]; // 801CB468
  c->lr=0x801CB470u; f_801BE774(c); // 801CB46C
  c->r[3]=c->r[31]|c->r[31]; // 801CB470
  c->lr=0x801CB478u; f_801BE774(c); // 801CB474
L_801CB478:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB478
  c->lr=0x801CB480u; f_801BE774(c); // 801CB47C
  c->lr=0x801CB484u; f_801BE760(c); // 801CB480
L_801CB484:;
  c->r[0]=R32(c->r[13]+0xFFFF9DF0u); // 801CB484
  cmps(c,0,(int32_t)c->r[0],1); // 801CB488
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB484; } // 801CB48C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB494
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB498
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB49C
  c->lr=c->r[0]; // 801CB4A0
  c->r[1]=c->r[1]+0x00000020u; // 801CB4A4
  return; // 801CB4A8
}

// __DVDTestAlarm
void f_801CB4AC(Ctx* __restrict c) {
  trace_call(0x801CB4ACu);
  c->r[4]=0u+0x80570000u; // 801CB4AC
  c->r[4]=c->r[4]+0xFFFFEF80u; // 801CB4B0
  cmpu(c,0,c->r[3],c->r[4]); // 801CB4B4
  if (!crb(c,2)) { goto L_801CB4C4; } // 801CB4B8
  c->r[3]=0u+0x00000001u; // 801CB4BC
  return; // 801CB4C0
L_801CB4C4:;
  f_801CD648(c); return; // 801CB4C4
  return; // 801CB4C8
}

// __DVDStopMotorAsync
void f_801CB4CC(Ctx* __restrict c) {
  trace_call(0x801CB4CCu);
  c->r[3]=0u+0x00000001u; // 801CB4CC
  return; // 801CB4D0
}

// fn_801CB4D4
void f_801CB4D4(Ctx* __restrict c) {
  trace_call(0x801CB4D4u);
  return; // 801CB4D4
}

// __DVDClearWaitingQueue
void f_801CB4D8(Ctx* __restrict c) {
  trace_call(0x801CB4D8u);
  c->r[6]=0u+0x80570000u; // 801CB4D8
  c->r[6]=c->r[6]+0xFFFFF010u; // 801CB4DC
  c->r[5]=c->r[6]+0x00000008u; // 801CB4E0
  W32(c->r[6]+0x00000000u,c->r[6]); // 801CB4E4
  c->r[4]=c->r[6]+0x00000010u; // 801CB4E8
  c->r[3]=c->r[6]+0x00000018u; // 801CB4EC
  W32(c->r[6]+0x00000004u,c->r[6]); // 801CB4F0
  W32(c->r[6]+0x00000008u,c->r[5]); // 801CB4F4
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801CB4F8
  W32(c->r[6]+0x00000010u,c->r[4]); // 801CB4FC
  W32(c->r[6]+0x00000014u,c->r[4]); // 801CB500
  W32(c->r[6]+0x00000018u,c->r[3]); // 801CB504
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 801CB508
  return; // 801CB50C
}

// __DVDPushWaitingQueue
void f_801CB510(Ctx* __restrict c) {
  trace_call(0x801CB510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB510
  c->r[0]=c->lr; // 801CB514
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB51C
  c->r[31]=c->r[4]|c->r[4]; // 801CB520
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB524
  c->r[30]=c->r[3]|c->r[3]; // 801CB528
  c->lr=0x801CB530u; f_801BE74C(c); // 801CB52C
  c->r[4]=0u+0x80570000u; // 801CB530
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801CB534
  c->r[4]=c->r[4]+0xFFFFF010u; // 801CB538
  c->r[5]=c->r[4]+c->r[0]; // 801CB53C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801CB540
  W32(c->r[4]+0x00000000u,c->r[31]); // 801CB544
  c->r[0]=R32(c->r[5]+0x00000004u); // 801CB548
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CB54C
  W32(c->r[31]+0x00000000u,c->r[5]); // 801CB550
  W32(c->r[5]+0x00000004u,c->r[31]); // 801CB554
  c->lr=0x801CB55Cu; f_801BE774(c); // 801CB558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB55C
  c->r[3]=0u+0x00000001u; // 801CB560
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB564
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB568
  c->lr=c->r[0]; // 801CB56C
  c->r[1]=c->r[1]+0x00000010u; // 801CB570
  return; // 801CB574
}

// __DVDPopWaitingQueue
void f_801CB578(Ctx* __restrict c) {
  trace_call(0x801CB578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB578
  c->r[0]=c->lr; // 801CB57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB584
  c->lr=0x801CB58Cu; f_801BE74C(c); // 801CB588
  c->r[4]=0u+0x80570000u; // 801CB58C
  c->r[0]=0u+0x00000004u; // 801CB590
  c->r[31]=0u+0x00000000u; // 801CB594
  c->r[4]=c->r[4]+0xFFFFF010u; // 801CB598
  c->ctr=c->r[0]; // 801CB59C
L_801CB5A0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CB5A0
  cmpu(c,0,c->r[0],c->r[4]); // 801CB5A4
  if (crb(c,2)) { goto L_801CB5F0; } // 801CB5A8
  c->lr=0x801CB5B0u; f_801BE774(c); // 801CB5AC
  c->lr=0x801CB5B4u; f_801BE74C(c); // 801CB5B0
  c->r[4]=0u+0x80570000u; // 801CB5B4
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801CB5B8
  c->r[4]=c->r[4]+0xFFFFF010u; // 801CB5BC
  c->r[31]=R32(c->r[4]+c->r[0]); // 801CB5C0
  c->r[5]=c->r[4]+c->r[0]; // 801CB5C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CB5C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CB5CC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801CB5D0
  W32(c->r[4]+0x00000004u,c->r[5]); // 801CB5D4
  c->lr=0x801CB5DCu; f_801BE774(c); // 801CB5D8
  c->r[0]=0u+0x00000000u; // 801CB5DC
  c->r[3]=c->r[31]|c->r[31]; // 801CB5E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CB5E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CB5E8
  goto L_801CB604; // 801CB5EC
L_801CB5F0:;
  c->r[4]=c->r[4]+0x00000008u; // 801CB5F0
  c->r[31]=c->r[31]+0x00000001u; // 801CB5F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB5A0; } // 801CB5F8
  c->lr=0x801CB600u; f_801BE774(c); // 801CB5FC
  c->r[3]=0u+0x00000000u; // 801CB600
L_801CB604:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB608
  c->lr=c->r[0]; // 801CB60C
  c->r[1]=c->r[1]+0x00000010u; // 801CB610
  return; // 801CB614
}

// __DVDCheckWaitingQueue
void f_801CB618(Ctx* __restrict c) {
  trace_call(0x801CB618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB618
  c->r[0]=c->lr; // 801CB61C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB620
  c->lr=0x801CB628u; f_801BE74C(c); // 801CB624
  c->r[4]=0u+0x80570000u; // 801CB628
  c->r[0]=0u+0x00000004u; // 801CB62C
  c->r[4]=c->r[4]+0xFFFFF010u; // 801CB630
  c->ctr=c->r[0]; // 801CB634
L_801CB638:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CB638
  cmpu(c,0,c->r[0],c->r[4]); // 801CB63C
  if (crb(c,2)) { goto L_801CB650; } // 801CB640
  c->lr=0x801CB648u; f_801BE774(c); // 801CB644
  c->r[3]=0u+0x00000001u; // 801CB648
  goto L_801CB660; // 801CB64C
L_801CB650:;
  c->r[4]=c->r[4]+0x00000008u; // 801CB650
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB638; } // 801CB654
  c->lr=0x801CB65Cu; f_801BE774(c); // 801CB658
  c->r[3]=0u+0x00000000u; // 801CB65C
L_801CB660:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB660
  c->lr=c->r[0]; // 801CB664
  c->r[1]=c->r[1]+0x00000010u; // 801CB668
  return; // 801CB66C
}

// __DVDGetNextWaitingQueue
void f_801CB670(Ctx* __restrict c) {
  trace_call(0x801CB670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB670
  c->r[0]=c->lr; // 801CB674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB67C
  c->lr=0x801CB684u; f_801BE74C(c); // 801CB680
  c->r[4]=0u+0x80570000u; // 801CB684
  c->r[0]=0u+0x00000004u; // 801CB688
  c->r[4]=c->r[4]+0xFFFFF010u; // 801CB68C
  c->ctr=c->r[0]; // 801CB690
L_801CB694:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 801CB694
  cmpu(c,0,c->r[31],c->r[4]); // 801CB698
  if (crb(c,2)) { goto L_801CB6AC; } // 801CB69C
  c->lr=0x801CB6A4u; f_801BE774(c); // 801CB6A0
  c->r[3]=c->r[31]|c->r[31]; // 801CB6A4
  goto L_801CB6BC; // 801CB6A8
L_801CB6AC:;
  c->r[4]=c->r[4]+0x00000008u; // 801CB6AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB694; } // 801CB6B0
  c->lr=0x801CB6B8u; f_801BE774(c); // 801CB6B4
  c->r[3]=0u+0x00000000u; // 801CB6B8
L_801CB6BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB6BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB6C0
  c->lr=c->r[0]; // 801CB6C4
  c->r[1]=c->r[1]+0x00000010u; // 801CB6C8
  return; // 801CB6CC
}

// __DVDDequeueWaitingQueue
void f_801CB6D0(Ctx* __restrict c) {
  trace_call(0x801CB6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB6D0
  c->r[0]=c->lr; // 801CB6D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB6D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB6DC
  c->r[31]=c->r[3]|c->r[3]; // 801CB6E0
  c->lr=0x801CB6E8u; f_801BE74C(c); // 801CB6E4
  c->r[4]=R32(c->r[31]+0x00000004u); // 801CB6E8
  c->r[5]=R32(c->r[31]+0x00000000u); // 801CB6EC
  cmps(c,0,(int32_t)c->r[4],0); // 801CB6F0
  if (crb(c,2)) { goto L_801CB700; } // 801CB6F4
  cmps(c,0,(int32_t)c->r[5],0); // 801CB6F8
  if (!crb(c,2)) { goto L_801CB70C; } // 801CB6FC
L_801CB700:;
  c->lr=0x801CB704u; f_801BE774(c); // 801CB700
  c->r[3]=0u+0x00000000u; // 801CB704
  goto L_801CB71C; // 801CB708
L_801CB70C:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 801CB70C
  W32(c->r[5]+0x00000004u,c->r[4]); // 801CB710
  c->lr=0x801CB718u; f_801BE774(c); // 801CB714
  c->r[3]=0u+0x00000001u; // 801CB718
L_801CB71C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB71C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB720
  c->lr=c->r[0]; // 801CB724
  c->r[1]=c->r[1]+0x00000010u; // 801CB728
  return; // 801CB72C
}

// cbForNandClose
void f_801CB730(Ctx* __restrict c) {
  trace_call(0x801CB730u);
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB730
  cmps(c,0,(int32_t)c->r[12],0); // 801CB734
  if (crb(c,2)) return; // 801CB738
  c->r[0]=cntlz(c->r[3]); // 801CB73C
  c->r[4]=0u+0x00000000u; // 801CB740
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801CB744
  c->r[3]=0u-c->r[0]; // 801CB748
  c->r[3]=c->r[3]+0x00000002u; // 801CB74C
  c->ctr=c->r[12]; // 801CB750
  if (true) { dispatch(c,c->ctr); return; } // 801CB754
  return; // 801CB758
}

// cbForNandWrite
void f_801CB75C(Ctx* __restrict c) {
  trace_call(0x801CB75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB75C
  c->r[0]=c->lr; // 801CB760
  c->r[3]=0u+0x80570000u; // 801CB764
  c->r[4]=0u+0x801D0000u; // 801CB768
  c->r[5]=0u+0x80570000u; // 801CB76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB770
  c->r[3]=c->r[3]+0xFFFFF040u; // 801CB774
  c->r[4]=c->r[4]+0xFFFFB730u; // 801CB778
  c->r[5]=c->r[5]+0xFFFFF0D0u; // 801CB77C
  c->lr=0x801CB784u; f_8020664C(c); // 801CB780
  cmps(c,0,(int32_t)c->r[3],0); // 801CB784
  if (crb(c,2)) { goto L_801CB7A8; } // 801CB788
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB78C
  cmps(c,0,(int32_t)c->r[12],0); // 801CB790
  if (crb(c,2)) { goto L_801CB7A8; } // 801CB794
  c->r[3]=0u+0x00000002u; // 801CB798
  c->r[4]=0u+0x00000000u; // 801CB79C
  c->ctr=c->r[12]; // 801CB7A0
  if (true) { c->lr=0x801CB7A8u; dispatch(c,c->ctr); } // 801CB7A4
L_801CB7A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB7A8
  c->lr=c->r[0]; // 801CB7AC
  c->r[1]=c->r[1]+0x00000010u; // 801CB7B0
  return; // 801CB7B4
}

// fn_801CB7B8
void f_801CB7B8(Ctx* __restrict c) {
  trace_call(0x801CB7B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB7B8
  c->r[0]=c->lr; // 801CB7BC
  cmps(c,0,(int32_t)c->r[3],0); // 801CB7C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB7C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB7C8
  c->r[31]=0u+0x80570000u; // 801CB7CC
  c->r[31]=c->r[31]+0xFFFFF040u; // 801CB7D0
  if (!crb(c,2)) { goto L_801CB838; } // 801CB7D4
  c->r[6]=0u+0x801D0000u; // 801CB7D8
  c->r[3]=c->r[31]+0x00000000u; // 801CB7DC
  c->r[4]=c->r[31]+0x00000160u; // 801CB7E0
  c->r[7]=c->r[31]+0x00000090u; // 801CB7E4
  c->r[6]=c->r[6]+0xFFFFB75Cu; // 801CB7E8
  c->r[5]=0u+0x00000080u; // 801CB7EC
  c->lr=0x801CB7F4u; f_80205A38(c); // 801CB7F0
  cmps(c,0,(int32_t)c->r[3],0); // 801CB7F4
  if (crb(c,2)) { goto L_801CB854; } // 801CB7F8
  c->r[4]=0u+0x801D0000u; // 801CB7FC
  c->r[3]=c->r[31]+0x00000000u; // 801CB800
  c->r[4]=c->r[4]+0xFFFFB730u; // 801CB804
  c->r[5]=c->r[31]+0x00000090u; // 801CB808
  c->lr=0x801CB810u; f_8020664C(c); // 801CB80C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB810
  if (crb(c,2)) { goto L_801CB854; } // 801CB814
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB818
  cmps(c,0,(int32_t)c->r[12],0); // 801CB81C
  if (crb(c,2)) { goto L_801CB854; } // 801CB820
  c->r[3]=0u+0x00000002u; // 801CB824
  c->r[4]=0u+0x00000000u; // 801CB828
  c->ctr=c->r[12]; // 801CB82C
  if (true) { c->lr=0x801CB834u; dispatch(c,c->ctr); } // 801CB830
  goto L_801CB854; // 801CB834
L_801CB838:;
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB838
  cmps(c,0,(int32_t)c->r[12],0); // 801CB83C
  if (crb(c,2)) { goto L_801CB854; } // 801CB840
  c->r[3]=0u+0x00000002u; // 801CB844
  c->r[4]=0u+0x00000000u; // 801CB848
  c->ctr=c->r[12]; // 801CB84C
  if (true) { c->lr=0x801CB854u; dispatch(c,c->ctr); } // 801CB850
L_801CB854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB858
  c->lr=c->r[0]; // 801CB85C
  c->r[1]=c->r[1]+0x00000010u; // 801CB860
  return; // 801CB864
}

// fn_801CB868
void f_801CB868(Ctx* __restrict c) {
  trace_call(0x801CB868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB868
  c->r[0]=c->lr; // 801CB86C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB870
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB874
  if (crb(c,2)) { goto L_801CB884; } // 801CB878
  cmps(c,0,(int32_t)c->r[3],-6); // 801CB87C
  if (!crb(c,2)) { goto L_801CB8D4; } // 801CB880
L_801CB884:;
  c->r[3]=0u+0x804B0000u; // 801CB884
  c->r[4]=0u+0x80570000u; // 801CB888
  c->r[6]=0u+0x801D0000u; // 801CB88C
  c->r[7]=0u+0x80570000u; // 801CB890
  c->r[3]=c->r[3]+0x00001040u; // 801CB894
  c->r[4]=c->r[4]+0xFFFFF040u; // 801CB898
  c->r[6]=c->r[6]+0xFFFFB7B8u; // 801CB89C
  c->r[7]=c->r[7]+0xFFFFF0D0u; // 801CB8A0
  c->r[5]=0u+0x00000002u; // 801CB8A4
  c->lr=0x801CB8ACu; f_802064F0(c); // 801CB8A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB8AC
  if (crb(c,2)) { goto L_801CB8F0; } // 801CB8B0
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB8B4
  cmps(c,0,(int32_t)c->r[12],0); // 801CB8B8
  if (crb(c,2)) { goto L_801CB8F0; } // 801CB8BC
  c->r[3]=0u+0x00000002u; // 801CB8C0
  c->r[4]=0u+0x00000000u; // 801CB8C4
  c->ctr=c->r[12]; // 801CB8C8
  if (true) { c->lr=0x801CB8D0u; dispatch(c,c->ctr); } // 801CB8CC
  goto L_801CB8F0; // 801CB8D0
L_801CB8D4:;
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB8D4
  cmps(c,0,(int32_t)c->r[12],0); // 801CB8D8
  if (crb(c,2)) { goto L_801CB8F0; } // 801CB8DC
  c->r[3]=0u+0x00000002u; // 801CB8E0
  c->r[4]=0u+0x00000000u; // 801CB8E4
  c->ctr=c->r[12]; // 801CB8E8
  if (true) { c->lr=0x801CB8F0u; dispatch(c,c->ctr); } // 801CB8EC
L_801CB8F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB8F0
  c->lr=c->r[0]; // 801CB8F4
  c->r[1]=c->r[1]+0x00000010u; // 801CB8F8
  return; // 801CB8FC
}

// cbForNandCreateDir
void f_801CB900(Ctx* __restrict c) {
  trace_call(0x801CB900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB900
  c->r[0]=c->lr; // 801CB904
  cmps(c,0,(int32_t)c->r[3],0); // 801CB908
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB90C
  if (crb(c,2)) { goto L_801CB91C; } // 801CB910
  cmps(c,0,(int32_t)c->r[3],-6); // 801CB914
  if (!crb(c,2)) { goto L_801CB968; } // 801CB918
L_801CB91C:;
  c->r[3]=0u+0x804B0000u; // 801CB91C
  c->r[6]=0u+0x801D0000u; // 801CB920
  c->r[7]=0u+0x80570000u; // 801CB924
  c->r[4]=0u+0x0000003Fu; // 801CB928
  c->r[3]=c->r[3]+0x00001040u; // 801CB92C
  c->r[6]=c->r[6]+0xFFFFB868u; // 801CB930
  c->r[7]=c->r[7]+0xFFFFF0D0u; // 801CB934
  c->r[5]=0u+0x00000000u; // 801CB938
  c->lr=0x801CB940u; f_80205708(c); // 801CB93C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB940
  if (crb(c,2)) { goto L_801CB984; } // 801CB944
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB948
  cmps(c,0,(int32_t)c->r[12],0); // 801CB94C
  if (crb(c,2)) { goto L_801CB984; } // 801CB950
  c->r[3]=0u+0x00000002u; // 801CB954
  c->r[4]=0u+0x00000000u; // 801CB958
  c->ctr=c->r[12]; // 801CB95C
  if (true) { c->lr=0x801CB964u; dispatch(c,c->ctr); } // 801CB960
  goto L_801CB984; // 801CB964
L_801CB968:;
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CB968
  cmps(c,0,(int32_t)c->r[12],0); // 801CB96C
  if (crb(c,2)) { goto L_801CB984; } // 801CB970
  c->r[3]=0u+0x00000002u; // 801CB974
  c->r[4]=0u+0x00000000u; // 801CB978
  c->ctr=c->r[12]; // 801CB97C
  if (true) { c->lr=0x801CB984u; dispatch(c,c->ctr); } // 801CB980
L_801CB984:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB984
  c->lr=c->r[0]; // 801CB988
  c->r[1]=c->r[1]+0x00000010u; // 801CB98C
  return; // 801CB990
}

// fn_801CB994
void f_801CB994(Ctx* __restrict c) {
  trace_call(0x801CB994u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB994
  c->r[0]=c->lr; // 801CB998
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB99C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB9A0
  c->r[31]=0u+0x80570000u; // 801CB9A4
  c->r[31]=c->r[31]+0xFFFFF1A0u; // 801CB9A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB9AC
  c->r[30]=c->r[4]|c->r[4]; // 801CB9B0
  W32(c->r[31]+0x00000008u,c->r[3]); // 801CB9B4
  c->lr=0x801CB9BCu; f_801C257C(c); // 801CB9B8
  c->r[6]=0u+0x80000000u; // 801CB9BC
  c->r[5]=0u+0x00000000u; // 801CB9C0
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801CB9C4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CB9C8
  c->lr=0x801CB9D0u; f_801E7AAC(c); // 801CB9CC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801CB9D0
  c->r[3]=0u+0x804B0000u; // 801CB9D4
  c->r[6]=0u+0x801D0000u; // 801CB9D8
  c->r[7]=0u+0x80570000u; // 801CB9DC
  W32(c->r[13]+0xFFFF9E30u,c->r[30]); // 801CB9E0
  c->r[3]=c->r[3]+0x0000105Cu; // 801CB9E4
  c->r[6]=c->r[6]+0xFFFFB900u; // 801CB9E8
  c->r[7]=c->r[7]+0xFFFFF0D0u; // 801CB9EC
  c->r[4]=0u+0x0000003Fu; // 801CB9F0
  c->r[5]=0u+0x00000000u; // 801CB9F4
  c->lr=0x801CB9FCu; f_80205D2C(c); // 801CB9F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB9FC
  if (crb(c,2)) { goto L_801CBA20; } // 801CBA00
  c->r[12]=R32(c->r[13]+0xFFFF9E30u); // 801CBA04
  cmps(c,0,(int32_t)c->r[12],0); // 801CBA08
  if (crb(c,2)) { goto L_801CBA20; } // 801CBA0C
  c->r[3]=0u+0x00000002u; // 801CBA10
  c->r[4]=0u+0x00000000u; // 801CBA14
  c->ctr=c->r[12]; // 801CBA18
  if (true) { c->lr=0x801CBA20u; dispatch(c,c->ctr); } // 801CBA1C
L_801CBA20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBA20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBA24
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBA28
  c->lr=c->r[0]; // 801CBA2C
  c->r[1]=c->r[1]+0x00000010u; // 801CBA30
  return; // 801CBA34
}

// DVDCompareDiskID
void f_801CBA38(Ctx* __restrict c) {
  trace_call(0x801CBA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBA38
  c->r[0]=c->lr; // 801CBA3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBA40
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CBA44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBA48
  c->r[31]=c->r[4]|c->r[4]; // 801CBA4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CBA50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBA54
  c->r[30]=c->r[3]|c->r[3]; // 801CBA58
  if (crb(c,2)) { goto L_801CBA84; } // 801CBA5C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CBA60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CBA64
  if (crb(c,2)) { goto L_801CBA84; } // 801CBA68
  c->r[5]=0u+0x00000004u; // 801CBA6C
  c->lr=0x801CBA74u; f_801F0D3C(c); // 801CBA70
  cmps(c,0,(int32_t)c->r[3],0); // 801CBA74
  if (crb(c,2)) { goto L_801CBA84; } // 801CBA78
  c->r[3]=0u+0x00000000u; // 801CBA7C
  goto L_801CBB10; // 801CBA80
L_801CBA84:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801CBA84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CBA88
  if (crb(c,2)) { goto L_801CBAB4; } // 801CBA8C
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CBA90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CBA94
  if (crb(c,2)) { goto L_801CBAB4; } // 801CBA98
  c->r[3]=c->r[30]+0x00000004u; // 801CBA9C
  c->r[4]=c->r[31]+0x00000004u; // 801CBAA0
  c->r[5]=0u+0x00000002u; // 801CBAA4
  c->lr=0x801CBAACu; f_801F0D3C(c); // 801CBAA8
  cmps(c,0,(int32_t)c->r[3],0); // 801CBAAC
  if (crb(c,2)) { goto L_801CBABC; } // 801CBAB0
L_801CBAB4:;
  c->r[3]=0u+0x00000000u; // 801CBAB4
  goto L_801CBB10; // 801CBAB8
L_801CBABC:;
  c->r[3]=R8(c->r[30]+0x00000006u); // 801CBABC
  cmpu(c,0,c->r[3],0x000000FFu); // 801CBAC0
  if (crb(c,2)) { goto L_801CBAE4; } // 801CBAC4
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CBAC8
  cmpu(c,0,c->r[0],0x000000FFu); // 801CBACC
  if (crb(c,2)) { goto L_801CBAE4; } // 801CBAD0
  cmpu(c,0,c->r[3],c->r[0]); // 801CBAD4
  if (crb(c,2)) { goto L_801CBAE4; } // 801CBAD8
  c->r[3]=0u+0x00000000u; // 801CBADC
  goto L_801CBB10; // 801CBAE0
L_801CBAE4:;
  c->r[3]=R8(c->r[30]+0x00000007u); // 801CBAE4
  cmpu(c,0,c->r[3],0x000000FFu); // 801CBAE8
  if (crb(c,2)) { goto L_801CBB0C; } // 801CBAEC
  c->r[0]=R8(c->r[31]+0x00000007u); // 801CBAF0
  cmpu(c,0,c->r[0],0x000000FFu); // 801CBAF4
  if (crb(c,2)) { goto L_801CBB0C; } // 801CBAF8
  cmpu(c,0,c->r[3],c->r[0]); // 801CBAFC
  if (crb(c,2)) { goto L_801CBB0C; } // 801CBB00
  c->r[3]=0u+0x00000000u; // 801CBB04
  goto L_801CBB10; // 801CBB08
L_801CBB0C:;
  c->r[3]=0u+0x00000001u; // 801CBB0C
L_801CBB10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBB10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBB14
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBB18
  c->lr=c->r[0]; // 801CBB1C
  c->r[1]=c->r[1]+0x00000010u; // 801CBB20
  return; // 801CBB24
}

// __DVDShowFatalMessage
void f_801CBB28(Ctx* __restrict c) {
  trace_call(0x801CBB28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBB28
  c->r[0]=c->lr; // 801CBB2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBB30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBB34
  c->r[31]=0u+0x00000000u; // 801CBB38
  c->r[5]=R8(c->r[2]+0xFFFFC1D8u); // 801CBB3C
  c->r[4]=R8(c->r[2]+0xFFFFC1D9u); // 801CBB40
  c->r[3]=R8(c->r[2]+0xFFFFC1DAu); // 801CBB44
  c->r[0]=R8(c->r[2]+0xFFFFC1DBu); // 801CBB48
  W8(c->r[1]+0x00000010u,c->r[5]); // 801CBB4C
  W8(c->r[1]+0x00000011u,c->r[4]); // 801CBB50
  W8(c->r[1]+0x00000012u,c->r[3]); // 801CBB54
  W8(c->r[1]+0x00000013u,c->r[0]); // 801CBB58
  c->lr=0x801CBB60u; f_80209910(c); // 801CBB5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CBB60
  if (!crb(c,2)) { goto L_801CBB74; } // 801CBB64
  c->r[3]=0u+0x00000001u; // 801CBB68
  c->lr=0x801CBB70u; f_801BDD5C(c); // 801CBB6C
  goto L_801CBB7C; // 801CBB70
L_801CBB74:;
  c->r[3]=0u+0x00000000u; // 801CBB74
  c->lr=0x801CBB7Cu; f_801BDD5C(c); // 801CBB78
L_801CBB7C:;
  c->lr=0x801CBB80u; f_80209910(c); // 801CBB7C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CBB80
  cmpu(c,0,c->r[0],0x00000006u); // 801CBB84
  if (!crb(c,1)) { goto L_801CBB9C; } // 801CBB88
  c->r[3]=0u+0x803D0000u; // 801CBB8C
  c->r[3]=c->r[3]+0xFFFF8D98u; // 801CBB90
  c->r[5]=R32(c->r[3]+0x00000004u); // 801CBB94
  goto L_801CBBB0; // 801CBB98
L_801CBB9C:;
  c->lr=0x801CBBA0u; f_80209910(c); // 801CBB9C
  c->r[4]=0u+0x803D0000u; // 801CBBA0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801CBBA4
  c->r[4]=c->r[4]+0xFFFF8D98u; // 801CBBA8
  c->r[5]=R32(c->r[4]+c->r[0]); // 801CBBAC
L_801CBBB0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801CBBB0
  c->r[3]=c->r[1]+0x0000000Cu; // 801CBBB4
  W32(c->r[1]+0x00000008u,c->r[31]); // 801CBBB8
  c->r[4]=c->r[1]+0x00000008u; // 801CBBBC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CBBC0
  c->lr=0x801CBBC8u; f_801BD280(c); // 801CBBC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBBC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBBCC
  c->lr=c->r[0]; // 801CBBD0
  c->r[1]=c->r[1]+0x00000020u; // 801CBBD4
  return; // 801CBBD8
}

// DVDSetAutoFatalMessaging
void f_801CBBDC(Ctx* __restrict c) {
  trace_call(0x801CBBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBBDC
  c->r[0]=c->lr; // 801CBBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBBE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBBE8
  c->r[31]=c->r[3]|c->r[3]; // 801CBBEC
  c->lr=0x801CBBF4u; f_801BE74C(c); // 801CBBF0
  c->r[5]=R32(c->r[13]+0xFFFF9E38u); // 801CBBF4
  cmps(c,0,(int32_t)c->r[31],0); // 801CBBF8
  c->r[4]=0u+0x00000000u; // 801CBBFC
  c->r[0]=0u-c->r[5]; // 801CBC00
  c->r[0]=c->r[0]|c->r[5]; // 801CBC04
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801CBC08
  if (crb(c,2)) { goto L_801CBC18; } // 801CBC0C
  c->r[4]=0u+0x801D0000u; // 801CBC10
  c->r[4]=c->r[4]+0xFFFFBB28u; // 801CBC14
L_801CBC18:;
  W32(c->r[13]+0xFFFF9E38u,c->r[4]); // 801CBC18
  c->lr=0x801CBC20u; f_801BE774(c); // 801CBC1C
  c->r[3]=c->r[31]|c->r[31]; // 801CBC20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBC28
  c->lr=c->r[0]; // 801CBC2C
  c->r[1]=c->r[1]+0x00000010u; // 801CBC30
  return; // 801CBC34
}

// __DVDGetAutoFatalMessaging
void f_801CBC38(Ctx* __restrict c) {
  trace_call(0x801CBC38u);
  c->r[3]=R32(c->r[13]+0xFFFF9E38u); // 801CBC38
  c->r[0]=0u-c->r[3]; // 801CBC3C
  c->r[0]=c->r[0]|c->r[3]; // 801CBC40
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CBC44
  return; // 801CBC48
}

// fn_801CBC4C
void f_801CBC4C(Ctx* __restrict c) {
  trace_call(0x801CBC4Cu);
  c->r[12]=R32(c->r[13]+0xFFFF9E38u); // 801CBC4C
  cmps(c,0,(int32_t)c->r[12],0); // 801CBC50
  if (crb(c,2)) return; // 801CBC54
  c->ctr=c->r[12]; // 801CBC58
  if (true) { dispatch(c,c->ctr); return; } // 801CBC5C
  return; // 801CBC60
}

// doTransactionCallback
void f_801CBC64(Ctx* __restrict c) {
  trace_call(0x801CBC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBC64
  c->r[0]=c->lr; // 801CBC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBC70
  c->r[31]=c->r[4]|c->r[4]; // 801CBC74
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801CBC78
  c->r[0]=c->r[5]+0x01150000u; // 801CBC7C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CBC80
  if (crb(c,2)) { goto L_801CBCA8; } // 801CBC84
  c->r[3]=0u+0x804B0000u; // 801CBC88
  c->r[3]=c->r[3]+0x00001520u; // 801CBC8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBC90
  c->lr=0x801CBC98u; f_801BB3FC(c); // 801CBC94
  c->r[3]=0u+0xFEEC0000u; // 801CBC98
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 801CBC9C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CBCA0
  goto L_801CBCFC; // 801CBCA4
L_801CBCA8:;
  c->r[6]=0u+0x00000000u; // 801CBCA8
  W8(c->r[13]+0xFFFF9E40u,c->r[6]); // 801CBCAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CBCB0
  cmps(c,0,(int32_t)c->r[0],0); // 801CBCB4
  if (crb(c,2)) { goto L_801CBCFC; } // 801CBCB8
  c->r[0]=R8(c->r[13]+0xFFFF9E60u); // 801CBCBC
  c->r[5]=0u+0x00000001u; // 801CBCC0
  W8(c->r[13]+0xFFFF9E41u,c->r[5]); // 801CBCC4
  cmpu(c,0,c->r[0],0x00000001u); // 801CBCC8
  if (!crb(c,2)) { goto L_801CBCD8; } // 801CBCCC
  W8(c->r[13]+0xFFFF9E60u,c->r[6]); // 801CBCD0
  c->r[3]=c->r[3]|0x00000008u; // 801CBCD4
L_801CBCD8:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CBCD8
  if (crb(c,2)) { goto L_801CBCE8; } // 801CBCDC
  c->r[0]=0u+0x00000000u; // 801CBCE0
  W32(c->r[13]+0xFFFF9E54u,c->r[0]); // 801CBCE4
L_801CBCE8:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CBCE8
  c->ctr=c->r[12]; // 801CBCEC
  if (true) { c->lr=0x801CBCF4u; dispatch(c,c->ctr); } // 801CBCF0
  c->r[0]=0u+0x00000000u; // 801CBCF4
  W8(c->r[13]+0xFFFF9E41u,c->r[0]); // 801CBCF8
L_801CBCFC:;
  c->r[0]=0u+0x00000000u; // 801CBCFC
  c->r[3]=0u+0x00000000u; // 801CBD00
  W8(c->r[31]+0x00000008u,c->r[0]); // 801CBD04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBD08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBD0C
  c->lr=c->r[0]; // 801CBD10
  c->r[1]=c->r[1]+0x00000010u; // 801CBD14
  return; // 801CBD18
}

// doPrepareCoverRegisterCallback
void f_801CBD1C(Ctx* __restrict c) {
  trace_call(0x801CBD1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD1C
  c->r[0]=c->lr; // 801CBD20
  c->r[5]=0u+0x80570000u; // 801CBD24
  c->r[6]=0u+0x80570000u; // 801CBD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBD2C
  c->r[5]=c->r[5]+0xFFFFF2A0u; // 801CBD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBD34
  c->r[31]=c->r[4]|c->r[4]; // 801CBD38
  c->r[0]=R32(c->r[6]+0xFFFFF2C0u); // 801CBD3C
  c->r[6]=0u+0x00000000u; // 801CBD40
  W8(c->r[13]+0xFFFF9E40u,c->r[6]); // 801CBD44
  W32(c->r[5]+0x00000004u,c->r[0]); // 801CBD48
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801CBD4C
  c->r[0]=c->r[5]+0x01150000u; // 801CBD50
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CBD54
  if (crb(c,2)) { goto L_801CBD7C; } // 801CBD58
  c->r[3]=0u+0x804B0000u; // 801CBD5C
  c->r[3]=c->r[3]+0x00001520u; // 801CBD60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBD64
  c->lr=0x801CBD6Cu; f_801BB3FC(c); // 801CBD68
  c->r[3]=0u+0xFEEC0000u; // 801CBD6C
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 801CBD70
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CBD74
  goto L_801CBDB8; // 801CBD78
L_801CBD7C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CBD7C
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD80
  if (crb(c,2)) { goto L_801CBDB8; } // 801CBD84
  c->r[0]=R8(c->r[13]+0xFFFF9E60u); // 801CBD88
  c->r[5]=0u+0x00000001u; // 801CBD8C
  W8(c->r[13]+0xFFFF9E41u,c->r[5]); // 801CBD90
  cmpu(c,0,c->r[0],0x00000001u); // 801CBD94
  if (!crb(c,2)) { goto L_801CBDA4; } // 801CBD98
  W8(c->r[13]+0xFFFF9E60u,c->r[6]); // 801CBD9C
  c->r[3]=c->r[3]|0x00000008u; // 801CBDA0
L_801CBDA4:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CBDA4
  c->ctr=c->r[12]; // 801CBDA8
  if (true) { c->lr=0x801CBDB0u; dispatch(c,c->ctr); } // 801CBDAC
  c->r[0]=0u+0x00000000u; // 801CBDB0
  W8(c->r[13]+0xFFFF9E41u,c->r[0]); // 801CBDB4
L_801CBDB8:;
  c->r[0]=0u+0x00000000u; // 801CBDB8
  c->r[3]=0u+0x00000000u; // 801CBDBC
  W8(c->r[31]+0x00000008u,c->r[0]); // 801CBDC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBDC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBDC8
  c->lr=c->r[0]; // 801CBDCC
  c->r[1]=c->r[1]+0x00000010u; // 801CBDD0
  return; // 801CBDD4
}

// DVDLowInit
void f_801CBDD8(Ctx* __restrict c) {
  trace_call(0x801CBDD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBDD8
  c->r[0]=c->lr; // 801CBDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBDE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBDE4
  c->r[31]=0u+0x804B0000u; // 801CBDE8
  c->r[31]=c->r[31]+0x00001520u; // 801CBDEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBDF0
  c->r[0]=R8(c->r[13]+0xFFFF9E4Du); // 801CBDF4
  cmps(c,0,(int32_t)c->r[0],0); // 801CBDF8
  if (!crb(c,2)) { goto L_801CBF80; } // 801CBDFC
  c->r[0]=0u+0x00000001u; // 801CBE00
  W8(c->r[13]+0xFFFF9E4Du,c->r[0]); // 801CBE04
  c->lr=0x801CBE0Cu; f_80203B4C(c); // 801CBE08
  cmps(c,0,(int32_t)c->r[3],0); // 801CBE0C
  if (crb(c,2)) { goto L_801CBE2C; } // 801CBE10
  c->r[4]=c->r[3]|c->r[3]; // 801CBE14
  c->r[3]=c->r[31]+0x00000060u; // 801CBE18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBE1C
  c->lr=0x801CBE24u; f_801BB3FC(c); // 801CBE20
  c->r[3]=0u+0x00000000u; // 801CBE24
  goto L_801CC024; // 801CBE28
L_801CBE2C:;
  c->lr=0x801CBE30u; f_80203700(c); // 801CBE2C
  c->r[30]=c->r[3]|c->r[3]; // 801CBE30
  c->lr=0x801CBE38u; f_802036F8(c); // 801CBE34
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CBE38
  if (crb(c,2)) { goto L_801CBE48; } // 801CBE3C
  c->r[0]=c->r[30]+0x0000001Fu; // 801CBE40
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 801CBE44
L_801CBE48:;
  c->r[0]=c->r[30]+0x00000080u; // 801CBE48
  cmpu(c,0,c->r[0],c->r[3]); // 801CBE4C
  if (!crb(c,1)) { goto L_801CBE64; } // 801CBE50
  c->r[3]=c->r[31]+0x00000080u; // 801CBE54
  c->r[4]=0u+0x00000080u; // 801CBE58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBE5C
  c->lr=0x801CBE64u; f_801BB3FC(c); // 801CBE60
L_801CBE64:;
  c->r[3]=c->r[30]+0x00000080u; // 801CBE64
  c->lr=0x801CBE6Cu; f_80203708(c); // 801CBE68
  cmps(c,0,(int32_t)c->r[30],0); // 801CBE6C
  W32(c->r[13]+0xFFFF9E5Cu,c->r[30]); // 801CBE70
  if (!crb(c,2)) { goto L_801CBE8C; } // 801CBE74
  c->r[3]=c->r[31]+0x000000BCu; // 801CBE78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBE7C
  c->lr=0x801CBE84u; f_801BB3FC(c); // 801CBE80
  c->r[0]=0u+0x00000000u; // 801CBE84
  goto L_801CBEF0; // 801CBE88
L_801CBE8C:;
  c->lr=0x801CBE90u; f_80203700(c); // 801CBE8C
  c->r[30]=c->r[3]|c->r[3]; // 801CBE90
  c->lr=0x801CBE98u; f_802036F8(c); // 801CBE94
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CBE98
  if (crb(c,2)) { goto L_801CBEA8; } // 801CBE9C
  c->r[0]=c->r[30]+0x0000001Fu; // 801CBEA0
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 801CBEA4
L_801CBEA8:;
  c->r[0]=c->r[30]+0x00000020u; // 801CBEA8
  cmpu(c,0,c->r[0],c->r[3]); // 801CBEAC
  if (!crb(c,1)) { goto L_801CBEC4; } // 801CBEB0
  c->r[3]=c->r[31]+0x00000080u; // 801CBEB4
  c->r[4]=0u+0x00000020u; // 801CBEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBEBC
  c->lr=0x801CBEC4u; f_801BB3FC(c); // 801CBEC0
L_801CBEC4:;
  c->r[3]=c->r[30]+0x00000020u; // 801CBEC4
  c->lr=0x801CBECCu; f_80203708(c); // 801CBEC8
  cmps(c,0,(int32_t)c->r[30],0); // 801CBECC
  W32(c->r[13]+0xFFFF9E58u,c->r[30]); // 801CBED0
  if (!crb(c,2)) { goto L_801CBEEC; } // 801CBED4
  c->r[3]=c->r[31]+0x000000E4u; // 801CBED8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBEDC
  c->lr=0x801CBEE4u; f_801BB3FC(c); // 801CBEE0
  c->r[0]=0u+0x00000000u; // 801CBEE4
  goto L_801CBEF0; // 801CBEE8
L_801CBEEC:;
  c->r[0]=0u+0x00000001u; // 801CBEEC
L_801CBEF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CBEF0
  if (!crb(c,2)) { goto L_801CBF00; } // 801CBEF4
  c->r[3]=0u+0x00000000u; // 801CBEF8
  goto L_801CC024; // 801CBEFC
L_801CBF00:;
  c->r[0]=R8(c->r[13]+0xFFFF9E4Cu); // 801CBF00
  cmps(c,0,(int32_t)c->r[0],0); // 801CBF04
  if (!crb(c,2)) { goto L_801CBF80; } // 801CBF08
  c->r[5]=0u+0x00000000u; // 801CBF0C
  c->r[4]=0u+0x80570000u; // 801CBF10
  {uint32_t ea=c->r[4]+0xFFFFF220u; W32(ea,c->r[5]); c->r[4]=ea;} // 801CBF14
  c->r[3]=0u+0xFEEC0000u; // 801CBF18
  c->r[0]=0u+0x00000001u; // 801CBF1C
  c->r[6]=0u+0x00000002u; // 801CBF20
  W32(c->r[4]+0x00000004u,c->r[5]); // 801CBF24
  c->r[3]=c->r[3]+0xFFFFDAEDu; // 801CBF28
  W8(c->r[4]+0x00000008u,c->r[5]); // 801CBF2C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801CBF30
  W32(c->r[4]+0x00000010u,c->r[5]); // 801CBF34
  W32(c->r[4]+0x00000020u,c->r[5]); // 801CBF38
  W32(c->r[4]+0x00000024u,c->r[5]); // 801CBF3C
  W8(c->r[4]+0x00000028u,c->r[5]); // 801CBF40
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801CBF44
  W32(c->r[4]+0x00000030u,c->r[0]); // 801CBF48
  W32(c->r[4]+0x00000040u,c->r[5]); // 801CBF4C
  W32(c->r[4]+0x00000044u,c->r[5]); // 801CBF50
  W8(c->r[4]+0x00000048u,c->r[5]); // 801CBF54
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 801CBF58
  W32(c->r[4]+0x00000050u,c->r[6]); // 801CBF5C
  c->r[6]=0u+0x00000003u; // 801CBF60
  W32(c->r[4]+0x00000060u,c->r[5]); // 801CBF64
  W32(c->r[4]+0x00000064u,c->r[5]); // 801CBF68
  W8(c->r[4]+0x00000068u,c->r[5]); // 801CBF6C
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 801CBF70
  W32(c->r[4]+0x00000070u,c->r[6]); // 801CBF74
  W32(c->r[13]+0xFFFF9E48u,c->r[5]); // 801CBF78
  W8(c->r[13]+0xFFFF9E4Cu,c->r[0]); // 801CBF7C
L_801CBF80:;
  c->r[3]=R32(c->r[13]+0xFFFF9E58u); // 801CBF80
  c->r[4]=c->r[13]+0xFFFF8488u; // 801CBF84
  c->r[5]=0u+0x00000020u; // 801CBF88
  c->lr=0x801CBF90u; f_801F0B64(c); // 801CBF8C
  c->r[3]=R32(c->r[13]+0xFFFF9E58u); // 801CBF90
  c->r[4]=0u+0x00000000u; // 801CBF94
  c->lr=0x801CBF9Cu; f_80203F64(c); // 801CBF98
  cmps(c,0,(int32_t)c->r[3],0); // 801CBF9C
  W32(c->r[13]+0xFFFF8480u,c->r[3]); // 801CBFA0
  if (crb(c,0)) { goto L_801CBFB0; } // 801CBFA4
  c->r[3]=0u+0x00000001u; // 801CBFA8
  goto L_801CC024; // 801CBFAC
L_801CBFB0:;
  cmps(c,0,(int32_t)c->r[3],-5); // 801CBFB0
  if (crb(c,2)) { goto L_801CBFFC; } // 801CBFB4
  if (!crb(c,0)) { goto L_801CBFC8; } // 801CBFB8
  cmps(c,0,(int32_t)c->r[3],-6); // 801CBFBC
  if (!crb(c,0)) { goto L_801CBFD4; } // 801CBFC0
  goto L_801CC010; // 801CBFC4
L_801CBFC8:;
  cmps(c,0,(int32_t)c->r[3],-1); // 801CBFC8
  if (crb(c,2)) { goto L_801CBFE8; } // 801CBFCC
  goto L_801CC010; // 801CBFD0
L_801CBFD4:;
  c->r[3]=c->r[31]+0x00000104u; // 801CBFD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBFD8
  c->lr=0x801CBFE0u; f_801BB3FC(c); // 801CBFDC
  c->r[3]=0u+0x00000000u; // 801CBFE0
  goto L_801CC024; // 801CBFE4
L_801CBFE8:;
  c->r[3]=c->r[31]+0x00000150u; // 801CBFE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBFEC
  c->lr=0x801CBFF4u; f_801BB3FC(c); // 801CBFF0
  c->r[3]=0u+0x00000000u; // 801CBFF4
  goto L_801CC024; // 801CBFF8
L_801CBFFC:;
  c->r[3]=c->r[31]+0x00000198u; // 801CBFFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC000
  c->lr=0x801CC008u; f_801BB3FC(c); // 801CC004
  c->r[3]=0u+0x00000000u; // 801CC008
  goto L_801CC024; // 801CC00C
L_801CC010:;
  c->r[4]=c->r[3]|c->r[3]; // 801CC010
  c->r[3]=c->r[31]+0x000001E4u; // 801CC014
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC018
  c->lr=0x801CC020u; f_801BB3FC(c); // 801CC01C
  c->r[3]=0u+0x00000000u; // 801CC020
L_801CC024:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC028
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC02C
  c->lr=c->r[0]; // 801CC030
  c->r[1]=c->r[1]+0x00000010u; // 801CC034
  return; // 801CC038
}

// DVDLowReadDiskID
void f_801CC03C(Ctx* __restrict c) {
  trace_call(0x801CC03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC03C
  c->r[0]=c->lr; // 801CC040
  c->r[7]=0u+0x80570000u; // 801CC044
  c->r[10]=0u+0x00000001u; // 801CC048
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC04C
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CC050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC054
  c->r[31]=0u+0x804B0000u; // 801CC058
  c->r[31]=c->r[31]+0x00001520u; // 801CC05C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC060
  c->r[30]=c->r[3]|c->r[3]; // 801CC064
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC068
  c->r[9]=R32(c->r[13]+0xFFFF9E48u); // 801CC06C
  W8(c->r[13]+0xFFFF9E40u,c->r[10]); // 801CC070
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CC074
  c->r[6]=c->r[7]+c->r[8]; // 801CC078
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CC07C
  c->r[0]=0u-c->r[5]; // 801CC080
  c->r[0]=c->r[0]|c->r[5]; // 801CC084
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC088
  cmpu(c,0,c->r[0],0x00000001u); // 801CC08C
  if (!crb(c,2)) { goto L_801CC0B4; } // 801CC090
  c->r[4]=c->r[9]|c->r[9]; // 801CC094
  c->r[3]=c->r[31]+0x00000218u; // 801CC098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC09C
  c->lr=0x801CC0A4u; f_801BB3FC(c); // 801CC0A0
  c->r[3]=c->r[31]+0x00000250u; // 801CC0A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC0A8
  c->lr=0x801CC0B0u; f_801BB3FC(c); // 801CC0AC
L_801CC0B0:;
  IRQCHK(c); goto L_801CC0B0; // 801CC0B0
L_801CC0B4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CC0B4
  c->r[0]=c->r[5]+0x01150000u; // 801CC0B8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC0BC
  if (crb(c,2)) { goto L_801CC0D4; } // 801CC0C0
  c->r[3]=c->r[31]+0x00000280u; // 801CC0C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC0C8
  c->lr=0x801CC0D0u; f_801BB3FC(c); // 801CC0CC
L_801CC0D0:;
  IRQCHK(c); goto L_801CC0D0; // 801CC0D0
L_801CC0D4:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801CC0D4
  c->r[0]=c->r[9]+0x00000001u; // 801CC0D8
  cmps(c,0,(int32_t)c->r[0],4); // 801CC0DC
  W32(c->r[6]+0x00000004u,c->r[10]); // 801CC0E0
  W8(c->r[6]+0x00000008u,c->r[10]); // 801CC0E4
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC0E8
  if (crb(c,0)) { goto L_801CC0F8; } // 801CC0EC
  c->r[0]=0u+0x00000000u; // 801CC0F0
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC0F4
L_801CC0F8:;
  c->r[4]=0u+0x80570000u; // 801CC0F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC0FC
  c->r[0]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CC100
  c->r[4]=c->r[4]+0xFFFFF220u; // 801CC104
  c->r[29]=c->r[4]+c->r[0]; // 801CC108
  if (!crb(c,2)) { goto L_801CC11C; } // 801CC10C
  c->r[3]=c->r[31]+0x000002C0u; // 801CC110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC114
  c->lr=0x801CC11Cu; f_801BB3FC(c); // 801CC118
L_801CC11C:;
  c->r[3]=R32(c->r[13]+0xFFFF9E44u); // 801CC11C
  c->r[0]=c->r[3]+0x00000001u; // 801CC120
  cmps(c,0,(int32_t)c->r[0],4); // 801CC124
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC128
  if (crb(c,0)) { goto L_801CC138; } // 801CC12C
  c->r[0]=0u+0x00000000u; // 801CC130
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC134
L_801CC138:;
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC138
  c->r[9]=0u+0x801D0000u; // 801CC13C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC140
  c->r[4]=0u+0x00000070u; // 801CC144
  W8(c->r[3]+c->r[0],c->r[4]); // 801CC148
  c->r[7]=c->r[30]|c->r[30]; // 801CC14C
  c->r[10]=c->r[29]|c->r[29]; // 801CC150
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CC154
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC158
  c->r[4]=0u+0x00000070u; // 801CC15C
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC160
  c->r[6]=0u+0x00000020u; // 801CC164
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC168
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC16C
  c->r[5]=c->r[5]+c->r[0]; // 801CC170
  c->r[8]=0u+0x00000020u; // 801CC174
  c->lr=0x801CC17Cu; f_802047C4(c); // 801CC178
  cmps(c,0,(int32_t)c->r[3],0); // 801CC17C
  if (crb(c,2)) { goto L_801CC1A4; } // 801CC180
  c->r[4]=c->r[3]|c->r[3]; // 801CC184
  c->r[3]=c->r[31]+0x000002FCu; // 801CC188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC18C
  c->lr=0x801CC194u; f_801BB3FC(c); // 801CC190
  c->r[0]=0u+0x00000000u; // 801CC194
  c->r[3]=0u+0x00000000u; // 801CC198
  W8(c->r[29]+0x00000008u,c->r[0]); // 801CC19C
  goto L_801CC1A8; // 801CC1A0
L_801CC1A4:;
  c->r[3]=0u+0x00000001u; // 801CC1A4
L_801CC1A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC1A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC1AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC1B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC1B4
  c->lr=c->r[0]; // 801CC1B8
  c->r[1]=c->r[1]+0x00000020u; // 801CC1BC
  return; // 801CC1C0
}

// DVDLowOpenPartition
void f_801CC1C4(Ctx* __restrict c) {
  trace_call(0x801CC1C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC1C4
  c->r[0]=c->lr; // 801CC1C8
  c->r[9]=0u+0x80570000u; // 801CC1CC
  cmps(c,0,(int32_t)c->r[4],0); // 801CC1D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC1D4
  c->r[9]=c->r[9]+0xFFFFF220u; // 801CC1D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC1DC
  c->r[31]=0u+0x804B0000u; // 801CC1E0
  c->r[31]=c->r[31]+0x00001520u; // 801CC1E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC1E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC1EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC1F0
  if (crb(c,2)) { goto L_801CC214; } // 801CC1F4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CC1F8
  if (crb(c,2)) { goto L_801CC214; } // 801CC1FC
  c->r[3]=c->r[31]+0x00000338u; // 801CC200
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC204
  c->lr=0x801CC20Cu; f_801BB3FC(c); // 801CC208
  c->r[3]=0u+0x00000000u; // 801CC20C
  goto L_801CC40C; // 801CC210
L_801CC214:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CC214
  if (crb(c,2)) { goto L_801CC238; } // 801CC218
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CC21C
  if (crb(c,2)) { goto L_801CC238; } // 801CC220
  c->r[3]=c->r[31]+0x00000370u; // 801CC224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC228
  c->lr=0x801CC230u; f_801BB3FC(c); // 801CC22C
  c->r[3]=0u+0x00000000u; // 801CC230
  goto L_801CC40C; // 801CC234
L_801CC238:;
  cmps(c,0,(int32_t)c->r[7],0); // 801CC238
  if (crb(c,2)) { goto L_801CC25C; } // 801CC23C
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CC240
  if (crb(c,2)) { goto L_801CC25C; } // 801CC244
  c->r[3]=c->r[31]+0x00000370u; // 801CC248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC24C
  c->lr=0x801CC254u; f_801BB3FC(c); // 801CC250
  c->r[3]=0u+0x00000000u; // 801CC254
  goto L_801CC40C; // 801CC258
L_801CC25C:;
  c->r[29]=R32(c->r[13]+0xFFFF9E48u); // 801CC25C
  c->r[28]=0u+0x00000001u; // 801CC260
  c->r[12]=c->r[9]+0x00000000u; // 801CC264
  W8(c->r[13]+0xFFFF9E40u,c->r[28]); // 801CC268
  c->r[30]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801CC26C
  c->r[11]=c->r[12]+c->r[30]; // 801CC270
  c->r[10]=R8(c->r[11]+0x00000008u); // 801CC274
  c->r[0]=0u-c->r[10]; // 801CC278
  c->r[0]=c->r[0]|c->r[10]; // 801CC27C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC280
  cmpu(c,0,c->r[0],0x00000001u); // 801CC284
  if (!crb(c,2)) { goto L_801CC2AC; } // 801CC288
  c->r[4]=c->r[29]|c->r[29]; // 801CC28C
  c->r[3]=c->r[31]+0x00000218u; // 801CC290
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC294
  c->lr=0x801CC29Cu; f_801BB3FC(c); // 801CC298
  c->r[3]=c->r[31]+0x00000250u; // 801CC29C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC2A0
  c->lr=0x801CC2A8u; f_801BB3FC(c); // 801CC2A4
L_801CC2A8:;
  IRQCHK(c); goto L_801CC2A8; // 801CC2A8
L_801CC2AC:;
  c->r[10]=R32(c->r[11]+0x0000000Cu); // 801CC2AC
  c->r[0]=c->r[10]+0x01150000u; // 801CC2B0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC2B4
  if (crb(c,2)) { goto L_801CC2CC; } // 801CC2B8
  c->r[3]=c->r[31]+0x00000280u; // 801CC2BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC2C0
  c->lr=0x801CC2C8u; f_801BB3FC(c); // 801CC2C4
L_801CC2C8:;
  IRQCHK(c); goto L_801CC2C8; // 801CC2C8
L_801CC2CC:;
  W32(c->r[12]+c->r[30],c->r[8]); // 801CC2CC
  c->r[0]=c->r[29]+0x00000001u; // 801CC2D0
  cmps(c,0,(int32_t)c->r[0],4); // 801CC2D4
  W32(c->r[11]+0x00000004u,c->r[28]); // 801CC2D8
  W8(c->r[11]+0x00000008u,c->r[28]); // 801CC2DC
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC2E0
  if (crb(c,0)) { goto L_801CC2F0; } // 801CC2E4
  c->r[0]=0u+0x00000000u; // 801CC2E8
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC2EC
L_801CC2F0:;
  c->r[8]=R32(c->r[13]+0xFFFF9E44u); // 801CC2F0
  c->r[11]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801CC2F4
  c->r[10]=c->r[9]+0x00000000u; // 801CC2F8
  c->r[0]=c->r[8]+0x00000001u; // 801CC2FC
  cmps(c,0,(int32_t)c->r[0],4); // 801CC300
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC304
  c->r[30]=c->r[10]+c->r[11]; // 801CC308
  if (crb(c,0)) { goto L_801CC318; } // 801CC30C
  c->r[0]=0u+0x00000000u; // 801CC310
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC314
L_801CC318:;
  c->r[8]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC318
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC31C
  c->r[10]=0u+0x0000008Bu; // 801CC320
  cmps(c,0,(int32_t)c->r[4],0); // 801CC324
  W8(c->r[8]+c->r[0],c->r[10]); // 801CC328
  c->r[8]=c->r[9]+0x000000C0u; // 801CC32C
  c->r[0]=0u+0x00000020u; // 801CC330
  c->r[10]=R32(c->r[13]+0xFFFF9E44u); // 801CC334
  c->r[11]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC338
  c->r[10]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801CC33C
  c->r[10]=c->r[11]+c->r[10]; // 801CC340
  W32(c->r[10]+0x00000004u,c->r[3]); // 801CC344
  c->r[3]=R32(c->r[13]+0xFFFF9E44u); // 801CC348
  c->r[10]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC34C
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801CC350
  W32(c->r[8]+0x00000004u,c->r[0]); // 801CC354
  c->r[0]=c->r[10]+c->r[3]; // 801CC358
  W32(c->r[9]+0x000000C0u,c->r[0]); // 801CC35C
  W32(c->r[8]+0x00000008u,c->r[4]); // 801CC360
  if (!crb(c,2)) { goto L_801CC374; } // 801CC364
  c->r[0]=0u+0x00000000u; // 801CC368
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801CC36C
  goto L_801CC37C; // 801CC370
L_801CC374:;
  c->r[0]=0u+0x000002A4u; // 801CC374
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 801CC378
L_801CC37C:;
  c->r[3]=c->r[9]+0x000000C0u; // 801CC37C
  cmps(c,0,(int32_t)c->r[6],0); // 801CC380
  W32(c->r[3]+0x00000010u,c->r[6]); // 801CC384
  if (!crb(c,2)) { goto L_801CC398; } // 801CC388
  c->r[0]=0u+0x00000000u; // 801CC38C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801CC390
  goto L_801CC39C; // 801CC394
L_801CC398:;
  W32(c->r[3]+0x00000014u,c->r[5]); // 801CC398
L_801CC39C:;
  c->r[10]=c->r[9]+0x000000C0u; // 801CC39C
  c->r[5]=c->r[9]+0x00000100u; // 801CC3A0
  c->r[4]=0u+0x000049E4u; // 801CC3A4
  c->r[0]=0u+0x00000020u; // 801CC3A8
  W32(c->r[10]+0x00000018u,c->r[7]); // 801CC3AC
  c->r[8]=0u+0x801D0000u; // 801CC3B0
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC3B4
  c->r[7]=c->r[10]|c->r[10]; // 801CC3B8
  W32(c->r[10]+0x0000001Cu,c->r[4]); // 801CC3BC
  c->r[9]=c->r[30]|c->r[30]; // 801CC3C0
  c->r[8]=c->r[8]+0xFFFFBC64u; // 801CC3C4
  c->r[4]=0u+0x0000008Bu; // 801CC3C8
  W32(c->r[10]+0x00000020u,c->r[5]); // 801CC3CC
  c->r[5]=0u+0x00000003u; // 801CC3D0
  c->r[6]=0u+0x00000002u; // 801CC3D4
  W32(c->r[10]+0x00000024u,c->r[0]); // 801CC3D8
  c->lr=0x801CC3E0u; f_80204B68(c); // 801CC3DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC3E0
  if (crb(c,2)) { goto L_801CC408; } // 801CC3E4
  c->r[4]=c->r[3]|c->r[3]; // 801CC3E8
  c->r[3]=c->r[31]+0x000003A8u; // 801CC3EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC3F0
  c->lr=0x801CC3F8u; f_801BB3FC(c); // 801CC3F4
  c->r[0]=0u+0x00000000u; // 801CC3F8
  c->r[3]=0u+0x00000000u; // 801CC3FC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CC400
  goto L_801CC40C; // 801CC404
L_801CC408:;
  c->r[3]=0u+0x00000001u; // 801CC408
L_801CC40C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC40C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC410
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC414
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC418
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC41C
  c->lr=c->r[0]; // 801CC420
  c->r[1]=c->r[1]+0x00000020u; // 801CC424
  return; // 801CC428
}

// fn_801CC42C
void f_801CC42C(Ctx* __restrict c) {
  trace_call(0x801CC42Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC42C
  c->r[0]=c->lr; // 801CC430
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC438
  c->r[31]=0u+0x804B0000u; // 801CC43C
  c->r[31]=c->r[31]+0x00001520u; // 801CC440
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC444
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CC448
  c->r[0]=c->r[4]+0x00000001u; // 801CC44C
  cmps(c,0,(int32_t)c->r[0],4); // 801CC450
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC454
  if (crb(c,0)) { goto L_801CC464; } // 801CC458
  c->r[0]=0u+0x00000000u; // 801CC45C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC460
L_801CC464:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC464
  c->r[7]=0u+0x80570000u; // 801CC468
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC46C
  c->r[5]=0u+0x0000008Cu; // 801CC470
  W8(c->r[4]+c->r[0],c->r[5]); // 801CC474
  c->r[9]=0u+0x00000001u; // 801CC478
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CC47C
  c->r[4]=R32(c->r[13]+0xFFFF9E48u); // 801CC480
  W8(c->r[13]+0xFFFF9E40u,c->r[9]); // 801CC484
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CC488
  c->r[6]=c->r[7]+c->r[8]; // 801CC48C
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CC490
  c->r[0]=0u-c->r[5]; // 801CC494
  c->r[0]=c->r[0]|c->r[5]; // 801CC498
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC49C
  cmpu(c,0,c->r[0],0x00000001u); // 801CC4A0
  if (!crb(c,2)) { goto L_801CC4C4; } // 801CC4A4
  c->r[3]=c->r[31]+0x00000218u; // 801CC4A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC4AC
  c->lr=0x801CC4B4u; f_801BB3FC(c); // 801CC4B0
  c->r[3]=c->r[31]+0x00000250u; // 801CC4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC4B8
  c->lr=0x801CC4C0u; f_801BB3FC(c); // 801CC4BC
L_801CC4C0:;
  IRQCHK(c); goto L_801CC4C0; // 801CC4C0
L_801CC4C4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CC4C4
  c->r[0]=c->r[5]+0x01150000u; // 801CC4C8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC4CC
  if (crb(c,2)) { goto L_801CC4E4; } // 801CC4D0
  c->r[3]=c->r[31]+0x00000280u; // 801CC4D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC4D8
  c->lr=0x801CC4E0u; f_801BB3FC(c); // 801CC4DC
L_801CC4E0:;
  IRQCHK(c); goto L_801CC4E0; // 801CC4E0
L_801CC4E4:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801CC4E4
  c->r[0]=c->r[4]+0x00000001u; // 801CC4E8
  cmps(c,0,(int32_t)c->r[0],4); // 801CC4EC
  W32(c->r[6]+0x00000004u,c->r[9]); // 801CC4F0
  W8(c->r[6]+0x00000008u,c->r[9]); // 801CC4F4
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC4F8
  if (crb(c,0)) { goto L_801CC508; } // 801CC4FC
  c->r[0]=0u+0x00000000u; // 801CC500
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC504
L_801CC508:;
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC508
  c->r[3]=0u+0x80570000u; // 801CC50C
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CC510
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC514
  c->r[3]=c->r[3]+0xFFFFF220u; // 801CC518
  c->r[9]=0u+0x801D0000u; // 801CC51C
  c->r[30]=c->r[3]+c->r[5]; // 801CC520
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC524
  c->r[5]=c->r[4]+c->r[0]; // 801CC528
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC52C
  c->r[10]=c->r[30]|c->r[30]; // 801CC530
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CC534
  c->r[4]=0u+0x0000008Cu; // 801CC538
  c->r[6]=0u+0x00000020u; // 801CC53C
  c->r[7]=0u+0x00000000u; // 801CC540
  c->r[8]=0u+0x00000000u; // 801CC544
  c->lr=0x801CC54Cu; f_802047C4(c); // 801CC548
  cmps(c,0,(int32_t)c->r[3],0); // 801CC54C
  if (crb(c,2)) { goto L_801CC574; } // 801CC550
  c->r[4]=c->r[3]|c->r[3]; // 801CC554
  c->r[3]=c->r[31]+0x000003E8u; // 801CC558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC55C
  c->lr=0x801CC564u; f_801BB3FC(c); // 801CC560
  c->r[0]=0u+0x00000000u; // 801CC564
  c->r[3]=0u+0x00000000u; // 801CC568
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CC56C
  goto L_801CC578; // 801CC570
L_801CC574:;
  c->r[3]=0u+0x00000001u; // 801CC574
L_801CC578:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC57C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC580
  c->lr=c->r[0]; // 801CC584
  c->r[1]=c->r[1]+0x00000010u; // 801CC588
  return; // 801CC58C
}

// DVDLowUnencryptedRead
void f_801CC590(Ctx* __restrict c) {
  trace_call(0x801CC590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC590
  c->r[0]=c->lr; // 801CC594
  c->r[9]=0u+0x80570000u; // 801CC598
  c->r[12]=0u+0x00000001u; // 801CC59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC5A0
  c->r[9]=c->r[9]+0xFFFFF220u; // 801CC5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC5A8
  c->r[31]=0u+0x804B0000u; // 801CC5AC
  c->r[31]=c->r[31]+0x00001520u; // 801CC5B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC5B4
  c->r[11]=R32(c->r[13]+0xFFFF9E48u); // 801CC5B8
  W8(c->r[13]+0xFFFF9E40u,c->r[12]); // 801CC5BC
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801CC5C0
  c->r[8]=c->r[9]+c->r[10]; // 801CC5C4
  c->r[7]=R8(c->r[8]+0x00000008u); // 801CC5C8
  c->r[0]=0u-c->r[7]; // 801CC5CC
  c->r[0]=c->r[0]|c->r[7]; // 801CC5D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC5D4
  cmpu(c,0,c->r[0],0x00000001u); // 801CC5D8
  if (!crb(c,2)) { goto L_801CC600; } // 801CC5DC
  c->r[4]=c->r[11]|c->r[11]; // 801CC5E0
  c->r[3]=c->r[31]+0x00000218u; // 801CC5E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC5E8
  c->lr=0x801CC5F0u; f_801BB3FC(c); // 801CC5EC
  c->r[3]=c->r[31]+0x00000250u; // 801CC5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC5F4
  c->lr=0x801CC5FCu; f_801BB3FC(c); // 801CC5F8
L_801CC5FC:;
  IRQCHK(c); goto L_801CC5FC; // 801CC5FC
L_801CC600:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801CC600
  c->r[0]=c->r[7]+0x01150000u; // 801CC604
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC608
  if (crb(c,2)) { goto L_801CC620; } // 801CC60C
  c->r[3]=c->r[31]+0x00000280u; // 801CC610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC614
  c->lr=0x801CC61Cu; f_801BB3FC(c); // 801CC618
L_801CC61C:;
  IRQCHK(c); goto L_801CC61C; // 801CC61C
L_801CC620:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801CC620
  c->r[0]=c->r[11]+0x00000001u; // 801CC624
  cmps(c,0,(int32_t)c->r[0],4); // 801CC628
  W32(c->r[8]+0x00000004u,c->r[12]); // 801CC62C
  W8(c->r[8]+0x00000008u,c->r[12]); // 801CC630
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC634
  if (crb(c,0)) { goto L_801CC644; } // 801CC638
  c->r[0]=0u+0x00000000u; // 801CC63C
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC640
L_801CC644:;
  c->r[6]=R32(c->r[13]+0xFFFF9E44u); // 801CC644
  c->r[7]=0u+0x80570000u; // 801CC648
  W32(c->r[13]+0xFFFF9E54u,c->r[4]); // 801CC64C
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801CC650
  c->r[0]=c->r[6]+0x00000001u; // 801CC654
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CC658
  cmps(c,0,(int32_t)c->r[0],4); // 801CC65C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC660
  c->r[30]=c->r[7]+c->r[8]; // 801CC664
  if (crb(c,0)) { goto L_801CC674; } // 801CC668
  c->r[0]=0u+0x00000000u; // 801CC66C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC670
L_801CC674:;
  c->r[6]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC674
  c->r[9]=0u+0x801D0000u; // 801CC678
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC67C
  c->r[7]=0u+0x0000008Du; // 801CC680
  W8(c->r[6]+c->r[0],c->r[7]); // 801CC684
  c->r[7]=c->r[3]|c->r[3]; // 801CC688
  c->r[8]=c->r[4]|c->r[4]; // 801CC68C
  c->r[10]=c->r[30]|c->r[30]; // 801CC690
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC694
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CC698
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC69C
  c->r[6]=0u+0x00000020u; // 801CC6A0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC6A4
  c->r[3]=c->r[3]+c->r[0]; // 801CC6A8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CC6AC
  c->r[4]=0u+0x0000008Du; // 801CC6B0
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC6B4
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC6B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC6BC
  c->r[3]=c->r[3]+c->r[0]; // 801CC6C0
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CC6C4
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC6C8
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC6CC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC6D0
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC6D4
  c->r[5]=c->r[5]+c->r[0]; // 801CC6D8
  c->lr=0x801CC6E0u; f_802047C4(c); // 801CC6DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6E0
  if (crb(c,2)) { goto L_801CC708; } // 801CC6E4
  c->r[4]=c->r[3]|c->r[3]; // 801CC6E8
  c->r[3]=c->r[31]+0x00000428u; // 801CC6EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC6F0
  c->lr=0x801CC6F8u; f_801BB3FC(c); // 801CC6F4
  c->r[0]=0u+0x00000000u; // 801CC6F8
  c->r[3]=0u+0x00000000u; // 801CC6FC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CC700
  goto L_801CC70C; // 801CC704
L_801CC708:;
  c->r[3]=0u+0x00000001u; // 801CC708
L_801CC70C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC70C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC710
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC714
  c->lr=c->r[0]; // 801CC718
  c->r[1]=c->r[1]+0x00000010u; // 801CC71C
  return; // 801CC720
}

// DVDLowStopMotor
void f_801CC724(Ctx* __restrict c) {
  trace_call(0x801CC724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC724
  c->r[0]=c->lr; // 801CC728
  c->r[8]=0u+0x80570000u; // 801CC72C
  c->r[11]=0u+0x00000001u; // 801CC730
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC734
  c->r[8]=c->r[8]+0xFFFFF220u; // 801CC738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC73C
  c->r[31]=0u+0x804B0000u; // 801CC740
  c->r[31]=c->r[31]+0x00001520u; // 801CC744
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC748
  c->r[10]=R32(c->r[13]+0xFFFF9E48u); // 801CC74C
  W8(c->r[13]+0xFFFF9E40u,c->r[11]); // 801CC750
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801CC754
  c->r[7]=c->r[8]+c->r[9]; // 801CC758
  c->r[6]=R8(c->r[7]+0x00000008u); // 801CC75C
  c->r[0]=0u-c->r[6]; // 801CC760
  c->r[0]=c->r[0]|c->r[6]; // 801CC764
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC768
  cmpu(c,0,c->r[0],0x00000001u); // 801CC76C
  if (!crb(c,2)) { goto L_801CC794; } // 801CC770
  c->r[4]=c->r[10]|c->r[10]; // 801CC774
  c->r[3]=c->r[31]+0x00000218u; // 801CC778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC77C
  c->lr=0x801CC784u; f_801BB3FC(c); // 801CC780
  c->r[3]=c->r[31]+0x00000250u; // 801CC784
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC788
  c->lr=0x801CC790u; f_801BB3FC(c); // 801CC78C
L_801CC790:;
  IRQCHK(c); goto L_801CC790; // 801CC790
L_801CC794:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801CC794
  c->r[0]=c->r[6]+0x01150000u; // 801CC798
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC79C
  if (crb(c,2)) { goto L_801CC7B4; } // 801CC7A0
  c->r[3]=c->r[31]+0x00000280u; // 801CC7A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC7A8
  c->lr=0x801CC7B0u; f_801BB3FC(c); // 801CC7AC
L_801CC7B0:;
  IRQCHK(c); goto L_801CC7B0; // 801CC7B0
L_801CC7B4:;
  W32(c->r[8]+c->r[9],c->r[5]); // 801CC7B4
  c->r[0]=c->r[10]+0x00000001u; // 801CC7B8
  cmps(c,0,(int32_t)c->r[0],4); // 801CC7BC
  W32(c->r[7]+0x00000004u,c->r[11]); // 801CC7C0
  W8(c->r[7]+0x00000008u,c->r[11]); // 801CC7C4
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC7C8
  if (crb(c,0)) { goto L_801CC7D8; } // 801CC7CC
  c->r[0]=0u+0x00000000u; // 801CC7D0
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC7D4
L_801CC7D8:;
  c->r[5]=R32(c->r[13]+0xFFFF9E44u); // 801CC7D8
  c->r[6]=0u+0x80570000u; // 801CC7DC
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801CC7E0
  c->r[0]=c->r[5]+0x00000001u; // 801CC7E4
  c->r[6]=c->r[6]+0xFFFFF220u; // 801CC7E8
  cmps(c,0,(int32_t)c->r[0],4); // 801CC7EC
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC7F0
  c->r[30]=c->r[6]+c->r[7]; // 801CC7F4
  if (crb(c,0)) { goto L_801CC804; } // 801CC7F8
  c->r[0]=0u+0x00000000u; // 801CC7FC
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC800
L_801CC804:;
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC804
  c->r[7]=0u+0x80570000u; // 801CC808
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC80C
  c->r[6]=0u+0x000000E3u; // 801CC810
  W8(c->r[5]+c->r[0],c->r[6]); // 801CC814
  c->r[9]=0u+0x801D0000u; // 801CC818
  c->r[10]=c->r[30]|c->r[30]; // 801CC81C
  c->r[7]=c->r[7]+0xFFFFF2A0u; // 801CC820
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC824
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CC828
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC82C
  c->r[6]=0u+0x00000020u; // 801CC830
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC834
  c->r[8]=0u+0x00000020u; // 801CC838
  c->r[5]=c->r[5]+c->r[0]; // 801CC83C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CC840
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC844
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC848
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC84C
  c->r[3]=c->r[3]+c->r[0]; // 801CC850
  W32(c->r[3]+0x00000008u,c->r[4]); // 801CC854
  c->r[4]=0u+0x000000E3u; // 801CC858
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC85C
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC860
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC864
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC868
  c->r[5]=c->r[5]+c->r[0]; // 801CC86C
  c->lr=0x801CC874u; f_802047C4(c); // 801CC870
  cmps(c,0,(int32_t)c->r[3],0); // 801CC874
  if (crb(c,2)) { goto L_801CC89C; } // 801CC878
  c->r[4]=c->r[3]|c->r[3]; // 801CC87C
  c->r[3]=c->r[31]+0x00000468u; // 801CC880
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC884
  c->lr=0x801CC88Cu; f_801BB3FC(c); // 801CC888
  c->r[0]=0u+0x00000000u; // 801CC88C
  c->r[3]=0u+0x00000000u; // 801CC890
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CC894
  goto L_801CC8A0; // 801CC898
L_801CC89C:;
  c->r[3]=0u+0x00000001u; // 801CC89C
L_801CC8A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC8A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC8A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC8A8
  c->lr=c->r[0]; // 801CC8AC
  c->r[1]=c->r[1]+0x00000010u; // 801CC8B0
  return; // 801CC8B4
}

// DVDLowInquiry
void f_801CC8B8(Ctx* __restrict c) {
  trace_call(0x801CC8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC8B8
  c->r[0]=c->lr; // 801CC8BC
  c->r[7]=0u+0x80570000u; // 801CC8C0
  c->r[10]=0u+0x00000001u; // 801CC8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC8C8
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CC8CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC8D0
  c->r[31]=0u+0x804B0000u; // 801CC8D4
  c->r[31]=c->r[31]+0x00001520u; // 801CC8D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC8DC
  c->r[9]=R32(c->r[13]+0xFFFF9E48u); // 801CC8E0
  W8(c->r[13]+0xFFFF9E40u,c->r[10]); // 801CC8E4
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CC8E8
  c->r[6]=c->r[7]+c->r[8]; // 801CC8EC
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CC8F0
  c->r[0]=0u-c->r[5]; // 801CC8F4
  c->r[0]=c->r[0]|c->r[5]; // 801CC8F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC8FC
  cmpu(c,0,c->r[0],0x00000001u); // 801CC900
  if (!crb(c,2)) { goto L_801CC928; } // 801CC904
  c->r[4]=c->r[9]|c->r[9]; // 801CC908
  c->r[3]=c->r[31]+0x00000218u; // 801CC90C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC910
  c->lr=0x801CC918u; f_801BB3FC(c); // 801CC914
  c->r[3]=c->r[31]+0x00000250u; // 801CC918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC91C
  c->lr=0x801CC924u; f_801BB3FC(c); // 801CC920
L_801CC924:;
  IRQCHK(c); goto L_801CC924; // 801CC924
L_801CC928:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CC928
  c->r[0]=c->r[5]+0x01150000u; // 801CC92C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CC930
  if (crb(c,2)) { goto L_801CC948; } // 801CC934
  c->r[3]=c->r[31]+0x00000280u; // 801CC938
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC93C
  c->lr=0x801CC944u; f_801BB3FC(c); // 801CC940
L_801CC944:;
  IRQCHK(c); goto L_801CC944; // 801CC944
L_801CC948:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801CC948
  c->r[0]=c->r[9]+0x00000001u; // 801CC94C
  cmps(c,0,(int32_t)c->r[0],4); // 801CC950
  W32(c->r[6]+0x00000004u,c->r[10]); // 801CC954
  W8(c->r[6]+0x00000008u,c->r[10]); // 801CC958
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC95C
  if (crb(c,0)) { goto L_801CC96C; } // 801CC960
  c->r[0]=0u+0x00000000u; // 801CC964
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CC968
L_801CC96C:;
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CC96C
  c->r[5]=0u+0x80570000u; // 801CC970
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CC974
  c->r[0]=c->r[4]+0x00000001u; // 801CC978
  c->r[5]=c->r[5]+0xFFFFF220u; // 801CC97C
  cmps(c,0,(int32_t)c->r[0],4); // 801CC980
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC984
  c->r[30]=c->r[5]+c->r[6]; // 801CC988
  if (crb(c,0)) { goto L_801CC998; } // 801CC98C
  c->r[0]=0u+0x00000000u; // 801CC990
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CC994
L_801CC998:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC998
  c->r[9]=0u+0x801D0000u; // 801CC99C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC9A0
  c->r[5]=0u+0x00000012u; // 801CC9A4
  W8(c->r[4]+c->r[0],c->r[5]); // 801CC9A8
  c->r[7]=c->r[3]|c->r[3]; // 801CC9AC
  c->r[10]=c->r[30]|c->r[30]; // 801CC9B0
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CC9B4
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CC9B8
  c->r[4]=0u+0x00000012u; // 801CC9BC
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CC9C0
  c->r[6]=0u+0x00000020u; // 801CC9C4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CC9C8
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CC9CC
  c->r[5]=c->r[5]+c->r[0]; // 801CC9D0
  c->r[8]=0u+0x00000020u; // 801CC9D4
  c->lr=0x801CC9DCu; f_802047C4(c); // 801CC9D8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC9DC
  if (crb(c,2)) { goto L_801CCA04; } // 801CC9E0
  c->r[4]=c->r[3]|c->r[3]; // 801CC9E4
  c->r[3]=c->r[31]+0x000004E8u; // 801CC9E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC9EC
  c->lr=0x801CC9F4u; f_801BB3FC(c); // 801CC9F0
  c->r[0]=0u+0x00000000u; // 801CC9F4
  c->r[3]=0u+0x00000000u; // 801CC9F8
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CC9FC
  goto L_801CCA08; // 801CCA00
L_801CCA04:;
  c->r[3]=0u+0x00000001u; // 801CCA04
L_801CCA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCA0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCA10
  c->lr=c->r[0]; // 801CCA14
  c->r[1]=c->r[1]+0x00000010u; // 801CCA18
  return; // 801CCA1C
}

// DVDLowRequestError
void f_801CCA20(Ctx* __restrict c) {
  trace_call(0x801CCA20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCA20
  c->r[0]=c->lr; // 801CCA24
  c->r[7]=0u+0x80570000u; // 801CCA28
  c->r[9]=0u+0x00000001u; // 801CCA2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCA30
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CCA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCA38
  c->r[31]=0u+0x804B0000u; // 801CCA3C
  c->r[31]=c->r[31]+0x00001520u; // 801CCA40
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CCA44
  c->r[4]=R32(c->r[13]+0xFFFF9E48u); // 801CCA48
  W8(c->r[13]+0xFFFF9E40u,c->r[9]); // 801CCA4C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CCA50
  c->r[6]=c->r[7]+c->r[8]; // 801CCA54
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CCA58
  c->r[0]=0u-c->r[5]; // 801CCA5C
  c->r[0]=c->r[0]|c->r[5]; // 801CCA60
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CCA64
  cmpu(c,0,c->r[0],0x00000001u); // 801CCA68
  if (!crb(c,2)) { goto L_801CCA8C; } // 801CCA6C
  c->r[3]=c->r[31]+0x00000218u; // 801CCA70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCA74
  c->lr=0x801CCA7Cu; f_801BB3FC(c); // 801CCA78
  c->r[3]=c->r[31]+0x00000250u; // 801CCA7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCA80
  c->lr=0x801CCA88u; f_801BB3FC(c); // 801CCA84
L_801CCA88:;
  IRQCHK(c); goto L_801CCA88; // 801CCA88
L_801CCA8C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CCA8C
  c->r[0]=c->r[5]+0x01150000u; // 801CCA90
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CCA94
  if (crb(c,2)) { goto L_801CCAAC; } // 801CCA98
  c->r[3]=c->r[31]+0x00000280u; // 801CCA9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCAA0
  c->lr=0x801CCAA8u; f_801BB3FC(c); // 801CCAA4
L_801CCAA8:;
  IRQCHK(c); goto L_801CCAA8; // 801CCAA8
L_801CCAAC:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801CCAAC
  c->r[0]=c->r[4]+0x00000001u; // 801CCAB0
  cmps(c,0,(int32_t)c->r[0],4); // 801CCAB4
  W32(c->r[6]+0x00000004u,c->r[9]); // 801CCAB8
  W8(c->r[6]+0x00000008u,c->r[9]); // 801CCABC
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCAC0
  if (crb(c,0)) { goto L_801CCAD0; } // 801CCAC4
  c->r[0]=0u+0x00000000u; // 801CCAC8
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCACC
L_801CCAD0:;
  c->r[3]=R32(c->r[13]+0xFFFF9E44u); // 801CCAD0
  c->r[5]=0u+0x80570000u; // 801CCAD4
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CCAD8
  c->r[0]=c->r[3]+0x00000001u; // 801CCADC
  c->r[5]=c->r[5]+0xFFFFF220u; // 801CCAE0
  cmps(c,0,(int32_t)c->r[0],4); // 801CCAE4
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCAE8
  c->r[30]=c->r[5]+c->r[4]; // 801CCAEC
  if (crb(c,0)) { goto L_801CCAFC; } // 801CCAF0
  c->r[0]=0u+0x00000000u; // 801CCAF4
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCAF8
L_801CCAFC:;
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCAFC
  c->r[7]=0u+0x80570000u; // 801CCB00
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCB04
  c->r[4]=0u+0x000000E0u; // 801CCB08
  W8(c->r[3]+c->r[0],c->r[4]); // 801CCB0C
  c->r[9]=0u+0x801D0000u; // 801CCB10
  c->r[10]=c->r[30]|c->r[30]; // 801CCB14
  c->r[7]=c->r[7]+0xFFFFF2A0u; // 801CCB18
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCB1C
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CCB20
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCB24
  c->r[4]=0u+0x000000E0u; // 801CCB28
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCB2C
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CCB30
  c->r[5]=c->r[5]+c->r[0]; // 801CCB34
  c->r[6]=0u+0x00000020u; // 801CCB38
  c->r[8]=0u+0x00000020u; // 801CCB3C
  c->lr=0x801CCB44u; f_802047C4(c); // 801CCB40
  cmps(c,0,(int32_t)c->r[3],0); // 801CCB44
  if (crb(c,2)) { goto L_801CCB6C; } // 801CCB48
  c->r[4]=c->r[3]|c->r[3]; // 801CCB4C
  c->r[3]=c->r[31]+0x00000520u; // 801CCB50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCB54
  c->lr=0x801CCB5Cu; f_801BB3FC(c); // 801CCB58
  c->r[0]=0u+0x00000000u; // 801CCB5C
  c->r[3]=0u+0x00000000u; // 801CCB60
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CCB64
  goto L_801CCB70; // 801CCB68
L_801CCB6C:;
  c->r[3]=0u+0x00000001u; // 801CCB6C
L_801CCB70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCB74
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCB78
  c->lr=c->r[0]; // 801CCB7C
  c->r[1]=c->r[1]+0x00000010u; // 801CCB80
  return; // 801CCB84
}

// DVDLowSetSpinupFlag
void f_801CCB88(Ctx* __restrict c) {
  trace_call(0x801CCB88u);
  W32(c->r[13]+0xFFFF9E50u,c->r[3]); // 801CCB88
  c->r[3]=0u+0x00000001u; // 801CCB8C
  return; // 801CCB90
}

// DVDLowReset
void f_801CCB94(Ctx* __restrict c) {
  trace_call(0x801CCB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB94
  c->r[0]=c->lr; // 801CCB98
  c->r[7]=0u+0x80570000u; // 801CCB9C
  c->r[9]=0u+0x00000001u; // 801CCBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCBA4
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CCBA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCBAC
  c->r[31]=0u+0x804B0000u; // 801CCBB0
  c->r[31]=c->r[31]+0x00001520u; // 801CCBB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CCBB8
  c->r[4]=R32(c->r[13]+0xFFFF9E48u); // 801CCBBC
  W8(c->r[13]+0xFFFF9E40u,c->r[9]); // 801CCBC0
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CCBC4
  c->r[6]=c->r[7]+c->r[8]; // 801CCBC8
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CCBCC
  c->r[0]=0u-c->r[5]; // 801CCBD0
  c->r[0]=c->r[0]|c->r[5]; // 801CCBD4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CCBD8
  cmpu(c,0,c->r[0],0x00000001u); // 801CCBDC
  if (!crb(c,2)) { goto L_801CCC00; } // 801CCBE0
  c->r[3]=c->r[31]+0x00000218u; // 801CCBE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCBE8
  c->lr=0x801CCBF0u; f_801BB3FC(c); // 801CCBEC
  c->r[3]=c->r[31]+0x00000250u; // 801CCBF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCBF4
  c->lr=0x801CCBFCu; f_801BB3FC(c); // 801CCBF8
L_801CCBFC:;
  IRQCHK(c); goto L_801CCBFC; // 801CCBFC
L_801CCC00:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CCC00
  c->r[0]=c->r[5]+0x01150000u; // 801CCC04
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CCC08
  if (crb(c,2)) { goto L_801CCC20; } // 801CCC0C
  c->r[3]=c->r[31]+0x00000280u; // 801CCC10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCC14
  c->lr=0x801CCC1Cu; f_801BB3FC(c); // 801CCC18
L_801CCC1C:;
  IRQCHK(c); goto L_801CCC1C; // 801CCC1C
L_801CCC20:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801CCC20
  c->r[0]=c->r[4]+0x00000001u; // 801CCC24
  cmps(c,0,(int32_t)c->r[0],4); // 801CCC28
  W32(c->r[6]+0x00000004u,c->r[9]); // 801CCC2C
  W8(c->r[6]+0x00000008u,c->r[9]); // 801CCC30
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCC34
  if (crb(c,0)) { goto L_801CCC44; } // 801CCC38
  c->r[0]=0u+0x00000000u; // 801CCC3C
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCC40
L_801CCC44:;
  c->r[3]=R32(c->r[13]+0xFFFF9E44u); // 801CCC44
  c->r[5]=0u+0x80570000u; // 801CCC48
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CCC4C
  c->r[0]=c->r[3]+0x00000001u; // 801CCC50
  c->r[5]=c->r[5]+0xFFFFF220u; // 801CCC54
  cmps(c,0,(int32_t)c->r[0],4); // 801CCC58
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCC5C
  c->r[30]=c->r[5]+c->r[4]; // 801CCC60
  if (crb(c,0)) { goto L_801CCC70; } // 801CCC64
  c->r[0]=0u+0x00000000u; // 801CCC68
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCC6C
L_801CCC70:;
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCC70
  c->r[9]=0u+0x801D0000u; // 801CCC74
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCC78
  c->r[4]=0u+0x0000008Au; // 801CCC7C
  W8(c->r[3]+c->r[0],c->r[4]); // 801CCC80
  c->r[10]=c->r[30]|c->r[30]; // 801CCC84
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CCC88
  c->r[4]=0u+0x0000008Au; // 801CCC8C
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCC90
  c->r[6]=0u+0x00000020u; // 801CCC94
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCC98
  c->r[7]=0u+0x00000000u; // 801CCC9C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCCA0
  c->r[5]=R32(c->r[13]+0xFFFF9E50u); // 801CCCA4
  c->r[3]=c->r[3]+c->r[0]; // 801CCCA8
  c->r[8]=0u+0x00000000u; // 801CCCAC
  W32(c->r[3]+0x00000004u,c->r[5]); // 801CCCB0
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCCB4
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCCB8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCCBC
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CCCC0
  c->r[5]=c->r[5]+c->r[0]; // 801CCCC4
  c->lr=0x801CCCCCu; f_802047C4(c); // 801CCCC8
  cmps(c,0,(int32_t)c->r[3],0); // 801CCCCC
  if (crb(c,2)) { goto L_801CCCF4; } // 801CCCD0
  c->r[4]=c->r[3]|c->r[3]; // 801CCCD4
  c->r[3]=c->r[31]+0x000005E0u; // 801CCCD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCCDC
  c->lr=0x801CCCE4u; f_801BB3FC(c); // 801CCCE0
  c->r[0]=0u+0x00000000u; // 801CCCE4
  c->r[3]=0u+0x00000000u; // 801CCCE8
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CCCEC
  goto L_801CCCF8; // 801CCCF0
L_801CCCF4:;
  c->r[3]=0u+0x00000001u; // 801CCCF4
L_801CCCF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCCF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCCFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCD00
  c->lr=c->r[0]; // 801CCD04
  c->r[1]=c->r[1]+0x00000010u; // 801CCD08
  return; // 801CCD0C
}

// fn_801CCD10
void f_801CCD10(Ctx* __restrict c) {
  trace_call(0x801CCD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCD10
  c->r[0]=c->lr; // 801CCD14
  c->r[8]=0u+0x80570000u; // 801CCD18
  c->r[11]=0u+0x00000001u; // 801CCD1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCD20
  c->r[8]=c->r[8]+0xFFFFF220u; // 801CCD24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCD28
  c->r[31]=0u+0x804B0000u; // 801CCD2C
  c->r[31]=c->r[31]+0x00001520u; // 801CCD30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CCD34
  c->r[10]=R32(c->r[13]+0xFFFF9E48u); // 801CCD38
  W8(c->r[13]+0xFFFF9E40u,c->r[11]); // 801CCD3C
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801CCD40
  c->r[7]=c->r[8]+c->r[9]; // 801CCD44
  c->r[6]=R8(c->r[7]+0x00000008u); // 801CCD48
  c->r[0]=0u-c->r[6]; // 801CCD4C
  c->r[0]=c->r[0]|c->r[6]; // 801CCD50
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CCD54
  cmpu(c,0,c->r[0],0x00000001u); // 801CCD58
  if (!crb(c,2)) { goto L_801CCD80; } // 801CCD5C
  c->r[4]=c->r[10]|c->r[10]; // 801CCD60
  c->r[3]=c->r[31]+0x00000218u; // 801CCD64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCD68
  c->lr=0x801CCD70u; f_801BB3FC(c); // 801CCD6C
  c->r[3]=c->r[31]+0x00000250u; // 801CCD70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCD74
  c->lr=0x801CCD7Cu; f_801BB3FC(c); // 801CCD78
L_801CCD7C:;
  IRQCHK(c); goto L_801CCD7C; // 801CCD7C
L_801CCD80:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801CCD80
  c->r[0]=c->r[6]+0x01150000u; // 801CCD84
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CCD88
  if (crb(c,2)) { goto L_801CCDA0; } // 801CCD8C
  c->r[3]=c->r[31]+0x00000280u; // 801CCD90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCD94
  c->lr=0x801CCD9Cu; f_801BB3FC(c); // 801CCD98
L_801CCD9C:;
  IRQCHK(c); goto L_801CCD9C; // 801CCD9C
L_801CCDA0:;
  W32(c->r[8]+c->r[9],c->r[5]); // 801CCDA0
  c->r[0]=c->r[10]+0x00000001u; // 801CCDA4
  cmps(c,0,(int32_t)c->r[0],4); // 801CCDA8
  W32(c->r[7]+0x00000004u,c->r[11]); // 801CCDAC
  W8(c->r[7]+0x00000008u,c->r[11]); // 801CCDB0
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCDB4
  if (crb(c,0)) { goto L_801CCDC4; } // 801CCDB8
  c->r[0]=0u+0x00000000u; // 801CCDBC
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCDC0
L_801CCDC4:;
  c->r[5]=R32(c->r[13]+0xFFFF9E44u); // 801CCDC4
  c->r[6]=0u+0x80570000u; // 801CCDC8
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801CCDCC
  c->r[0]=c->r[5]+0x00000001u; // 801CCDD0
  c->r[6]=c->r[6]+0xFFFFF220u; // 801CCDD4
  cmps(c,0,(int32_t)c->r[0],4); // 801CCDD8
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCDDC
  c->r[30]=c->r[6]+c->r[7]; // 801CCDE0
  if (crb(c,0)) { goto L_801CCDF0; } // 801CCDE4
  c->r[0]=0u+0x00000000u; // 801CCDE8
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCDEC
L_801CCDF0:;
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCDF0
  c->r[7]=0u+0x80570000u; // 801CCDF4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCDF8
  c->r[6]=0u+0x000000E4u; // 801CCDFC
  W8(c->r[5]+c->r[0],c->r[6]); // 801CCE00
  c->r[9]=0u+0x801D0000u; // 801CCE04
  c->r[10]=c->r[30]|c->r[30]; // 801CCE08
  c->r[7]=c->r[7]+0xFFFFF2A0u; // 801CCE0C
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCE10
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CCE14
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCE18
  c->r[6]=0u+0x00000020u; // 801CCE1C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCE20
  c->r[8]=0u+0x00000020u; // 801CCE24
  c->r[5]=c->r[5]+c->r[0]; // 801CCE28
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CCE2C
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCE30
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCE34
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCE38
  c->r[3]=c->r[3]+c->r[0]; // 801CCE3C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801CCE40
  c->r[4]=0u+0x000000E4u; // 801CCE44
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCE48
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCE4C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCE50
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CCE54
  c->r[5]=c->r[5]+c->r[0]; // 801CCE58
  c->lr=0x801CCE60u; f_802047C4(c); // 801CCE5C
  cmps(c,0,(int32_t)c->r[3],0); // 801CCE60
  if (crb(c,2)) { goto L_801CCE88; } // 801CCE64
  c->r[4]=c->r[3]|c->r[3]; // 801CCE68
  c->r[3]=c->r[31]+0x00000618u; // 801CCE6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCE70
  c->lr=0x801CCE78u; f_801BB3FC(c); // 801CCE74
  c->r[0]=0u+0x00000000u; // 801CCE78
  c->r[3]=0u+0x00000000u; // 801CCE7C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CCE80
  goto L_801CCE8C; // 801CCE84
L_801CCE88:;
  c->r[3]=0u+0x00000001u; // 801CCE88
L_801CCE8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCE90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCE94
  c->lr=c->r[0]; // 801CCE98
  c->r[1]=c->r[1]+0x00000010u; // 801CCE9C
  return; // 801CCEA0
}

// DVDLowSetMaximumRotation
void f_801CCEA4(Ctx* __restrict c) {
  trace_call(0x801CCEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCEA4
  c->r[0]=c->lr; // 801CCEA8
  c->r[7]=0u+0x80570000u; // 801CCEAC
  c->r[10]=0u+0x00000001u; // 801CCEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCEB4
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CCEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCEBC
  c->r[31]=0u+0x804B0000u; // 801CCEC0
  c->r[31]=c->r[31]+0x00001520u; // 801CCEC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CCEC8
  c->r[9]=R32(c->r[13]+0xFFFF9E48u); // 801CCECC
  W8(c->r[13]+0xFFFF9E40u,c->r[10]); // 801CCED0
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CCED4
  c->r[6]=c->r[7]+c->r[8]; // 801CCED8
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CCEDC
  c->r[0]=0u-c->r[5]; // 801CCEE0
  c->r[0]=c->r[0]|c->r[5]; // 801CCEE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CCEE8
  cmpu(c,0,c->r[0],0x00000001u); // 801CCEEC
  if (!crb(c,2)) { goto L_801CCF14; } // 801CCEF0
  c->r[4]=c->r[9]|c->r[9]; // 801CCEF4
  c->r[3]=c->r[31]+0x00000218u; // 801CCEF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCEFC
  c->lr=0x801CCF04u; f_801BB3FC(c); // 801CCF00
  c->r[3]=c->r[31]+0x00000250u; // 801CCF04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCF08
  c->lr=0x801CCF10u; f_801BB3FC(c); // 801CCF0C
L_801CCF10:;
  IRQCHK(c); goto L_801CCF10; // 801CCF10
L_801CCF14:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CCF14
  c->r[0]=c->r[5]+0x01150000u; // 801CCF18
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CCF1C
  if (crb(c,2)) { goto L_801CCF34; } // 801CCF20
  c->r[3]=c->r[31]+0x00000280u; // 801CCF24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCF28
  c->lr=0x801CCF30u; f_801BB3FC(c); // 801CCF2C
L_801CCF30:;
  IRQCHK(c); goto L_801CCF30; // 801CCF30
L_801CCF34:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801CCF34
  c->r[0]=c->r[9]+0x00000001u; // 801CCF38
  cmps(c,0,(int32_t)c->r[0],4); // 801CCF3C
  W32(c->r[6]+0x00000004u,c->r[10]); // 801CCF40
  W8(c->r[6]+0x00000008u,c->r[10]); // 801CCF44
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCF48
  if (crb(c,0)) { goto L_801CCF58; } // 801CCF4C
  c->r[0]=0u+0x00000000u; // 801CCF50
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CCF54
L_801CCF58:;
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CCF58
  c->r[5]=0u+0x80570000u; // 801CCF5C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CCF60
  c->r[0]=c->r[4]+0x00000001u; // 801CCF64
  c->r[5]=c->r[5]+0xFFFFF220u; // 801CCF68
  cmps(c,0,(int32_t)c->r[0],4); // 801CCF6C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCF70
  c->r[30]=c->r[5]+c->r[6]; // 801CCF74
  if (crb(c,0)) { goto L_801CCF84; } // 801CCF78
  c->r[0]=0u+0x00000000u; // 801CCF7C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CCF80
L_801CCF84:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCF84
  c->r[9]=0u+0x801D0000u; // 801CCF88
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCF8C
  c->r[5]=0u+0x000000DDu; // 801CCF90
  W8(c->r[4]+c->r[0],c->r[5]); // 801CCF94
  c->r[5]=rotl(c->r[3],16)&0x00000003u; // 801CCF98
  c->r[10]=c->r[30]|c->r[30]; // 801CCF9C
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CCFA0
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCFA4
  c->r[4]=0u+0x000000DDu; // 801CCFA8
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCFAC
  c->r[6]=0u+0x00000020u; // 801CCFB0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCFB4
  c->r[7]=0u+0x00000000u; // 801CCFB8
  c->r[3]=c->r[3]+c->r[0]; // 801CCFBC
  c->r[8]=0u+0x00000000u; // 801CCFC0
  W32(c->r[3]+0x00000004u,c->r[5]); // 801CCFC4
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CCFC8
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CCFCC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CCFD0
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CCFD4
  c->r[5]=c->r[5]+c->r[0]; // 801CCFD8
  c->lr=0x801CCFE0u; f_802047C4(c); // 801CCFDC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCFE0
  if (crb(c,2)) { goto L_801CD008; } // 801CCFE4
  c->r[4]=c->r[3]|c->r[3]; // 801CCFE8
  c->r[3]=c->r[31]+0x000009CCu; // 801CCFEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCFF0
  c->lr=0x801CCFF8u; f_801BB3FC(c); // 801CCFF4
  c->r[0]=0u+0x00000000u; // 801CCFF8
  c->r[3]=0u+0x00000000u; // 801CCFFC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CD000
  goto L_801CD00C; // 801CD004
L_801CD008:;
  c->r[3]=0u+0x00000001u; // 801CD008
L_801CD00C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD00C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD010
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD014
  c->lr=c->r[0]; // 801CD018
  c->r[1]=c->r[1]+0x00000010u; // 801CD01C
  return; // 801CD020
}

// DVDLowRead
void f_801CD024(Ctx* __restrict c) {
  trace_call(0x801CD024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD024
  c->r[0]=c->lr; // 801CD028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD02C
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801CD030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD034
  c->r[31]=0u+0x804B0000u; // 801CD038
  c->r[31]=c->r[31]+0x00001520u; // 801CD03C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD040
  if (crb(c,2)) { goto L_801CD05C; } // 801CD044
  c->r[3]=c->r[31]+0x00000A0Cu; // 801CD048
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD04C
  c->lr=0x801CD054u; f_801BB3FC(c); // 801CD050
  c->r[3]=0u+0x00000000u; // 801CD054
  goto L_801CD1BC; // 801CD058
L_801CD05C:;
  c->r[11]=R32(c->r[13]+0xFFFF9E48u); // 801CD05C
  c->r[9]=0u+0x80570000u; // 801CD060
  c->r[12]=0u+0x00000001u; // 801CD064
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801CD068
  c->r[9]=c->r[9]+0xFFFFF220u; // 801CD06C
  c->r[8]=c->r[9]+c->r[10]; // 801CD070
  W8(c->r[13]+0xFFFF9E40u,c->r[12]); // 801CD074
  c->r[7]=R8(c->r[8]+0x00000008u); // 801CD078
  c->r[0]=0u-c->r[7]; // 801CD07C
  c->r[0]=c->r[0]|c->r[7]; // 801CD080
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CD084
  cmpu(c,0,c->r[0],0x00000001u); // 801CD088
  if (!crb(c,2)) { goto L_801CD0B0; } // 801CD08C
  c->r[4]=c->r[11]|c->r[11]; // 801CD090
  c->r[3]=c->r[31]+0x00000218u; // 801CD094
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD098
  c->lr=0x801CD0A0u; f_801BB3FC(c); // 801CD09C
  c->r[3]=c->r[31]+0x00000250u; // 801CD0A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD0A4
  c->lr=0x801CD0ACu; f_801BB3FC(c); // 801CD0A8
L_801CD0AC:;
  IRQCHK(c); goto L_801CD0AC; // 801CD0AC
L_801CD0B0:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801CD0B0
  c->r[0]=c->r[7]+0x01150000u; // 801CD0B4
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CD0B8
  if (crb(c,2)) { goto L_801CD0D0; } // 801CD0BC
  c->r[3]=c->r[31]+0x00000280u; // 801CD0C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD0C4
  c->lr=0x801CD0CCu; f_801BB3FC(c); // 801CD0C8
L_801CD0CC:;
  IRQCHK(c); goto L_801CD0CC; // 801CD0CC
L_801CD0D0:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801CD0D0
  c->r[0]=c->r[11]+0x00000001u; // 801CD0D4
  cmps(c,0,(int32_t)c->r[0],4); // 801CD0D8
  W32(c->r[8]+0x00000004u,c->r[12]); // 801CD0DC
  W8(c->r[8]+0x00000008u,c->r[12]); // 801CD0E0
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD0E4
  if (crb(c,0)) { goto L_801CD0F4; } // 801CD0E8
  c->r[0]=0u+0x00000000u; // 801CD0EC
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD0F0
L_801CD0F4:;
  c->r[6]=R32(c->r[13]+0xFFFF9E44u); // 801CD0F4
  c->r[7]=0u+0x80570000u; // 801CD0F8
  W32(c->r[13]+0xFFFF9E54u,c->r[4]); // 801CD0FC
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 801CD100
  c->r[0]=c->r[6]+0x00000001u; // 801CD104
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CD108
  cmps(c,0,(int32_t)c->r[0],4); // 801CD10C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD110
  c->r[30]=c->r[7]+c->r[8]; // 801CD114
  if (crb(c,0)) { goto L_801CD124; } // 801CD118
  c->r[0]=0u+0x00000000u; // 801CD11C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD120
L_801CD124:;
  c->r[6]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD124
  c->r[9]=0u+0x801D0000u; // 801CD128
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD12C
  c->r[7]=0u+0x00000071u; // 801CD130
  W8(c->r[6]+c->r[0],c->r[7]); // 801CD134
  c->r[7]=c->r[3]|c->r[3]; // 801CD138
  c->r[8]=c->r[4]|c->r[4]; // 801CD13C
  c->r[10]=c->r[30]|c->r[30]; // 801CD140
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD144
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CD148
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD14C
  c->r[6]=0u+0x00000020u; // 801CD150
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD154
  c->r[3]=c->r[3]+c->r[0]; // 801CD158
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CD15C
  c->r[4]=0u+0x00000071u; // 801CD160
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD164
  c->r[3]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD168
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD16C
  c->r[3]=c->r[3]+c->r[0]; // 801CD170
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CD174
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD178
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD17C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD180
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CD184
  c->r[5]=c->r[5]+c->r[0]; // 801CD188
  c->lr=0x801CD190u; f_802047C4(c); // 801CD18C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD190
  if (crb(c,2)) { goto L_801CD1B8; } // 801CD194
  c->r[4]=c->r[3]|c->r[3]; // 801CD198
  c->r[3]=c->r[31]+0x00000A4Cu; // 801CD19C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD1A0
  c->lr=0x801CD1A8u; f_801BB3FC(c); // 801CD1A4
  c->r[0]=0u+0x00000000u; // 801CD1A8
  c->r[3]=0u+0x00000000u; // 801CD1AC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CD1B0
  goto L_801CD1BC; // 801CD1B4
L_801CD1B8:;
  c->r[3]=0u+0x00000001u; // 801CD1B8
L_801CD1BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD1C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD1C4
  c->lr=c->r[0]; // 801CD1C8
  c->r[1]=c->r[1]+0x00000010u; // 801CD1CC
  return; // 801CD1D0
}

// DVDLowSeek
void f_801CD1D4(Ctx* __restrict c) {
  trace_call(0x801CD1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD1D4
  c->r[0]=c->lr; // 801CD1D8
  c->r[7]=0u+0x80570000u; // 801CD1DC
  c->r[10]=0u+0x00000001u; // 801CD1E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD1E4
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CD1E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD1EC
  c->r[31]=0u+0x804B0000u; // 801CD1F0
  c->r[31]=c->r[31]+0x00001520u; // 801CD1F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD1F8
  c->r[9]=R32(c->r[13]+0xFFFF9E48u); // 801CD1FC
  W8(c->r[13]+0xFFFF9E40u,c->r[10]); // 801CD200
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CD204
  c->r[6]=c->r[7]+c->r[8]; // 801CD208
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CD20C
  c->r[0]=0u-c->r[5]; // 801CD210
  c->r[0]=c->r[0]|c->r[5]; // 801CD214
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CD218
  cmpu(c,0,c->r[0],0x00000001u); // 801CD21C
  if (!crb(c,2)) { goto L_801CD244; } // 801CD220
  c->r[4]=c->r[9]|c->r[9]; // 801CD224
  c->r[3]=c->r[31]+0x00000218u; // 801CD228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD22C
  c->lr=0x801CD234u; f_801BB3FC(c); // 801CD230
  c->r[3]=c->r[31]+0x00000250u; // 801CD234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD238
  c->lr=0x801CD240u; f_801BB3FC(c); // 801CD23C
L_801CD240:;
  IRQCHK(c); goto L_801CD240; // 801CD240
L_801CD244:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CD244
  c->r[0]=c->r[5]+0x01150000u; // 801CD248
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CD24C
  if (crb(c,2)) { goto L_801CD264; } // 801CD250
  c->r[3]=c->r[31]+0x00000280u; // 801CD254
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD258
  c->lr=0x801CD260u; f_801BB3FC(c); // 801CD25C
L_801CD260:;
  IRQCHK(c); goto L_801CD260; // 801CD260
L_801CD264:;
  W32(c->r[7]+c->r[8],c->r[4]); // 801CD264
  c->r[0]=c->r[9]+0x00000001u; // 801CD268
  cmps(c,0,(int32_t)c->r[0],4); // 801CD26C
  W32(c->r[6]+0x00000004u,c->r[10]); // 801CD270
  W8(c->r[6]+0x00000008u,c->r[10]); // 801CD274
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD278
  if (crb(c,0)) { goto L_801CD288; } // 801CD27C
  c->r[0]=0u+0x00000000u; // 801CD280
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD284
L_801CD288:;
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CD288
  c->r[5]=0u+0x80570000u; // 801CD28C
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801CD290
  c->r[0]=c->r[4]+0x00000001u; // 801CD294
  c->r[5]=c->r[5]+0xFFFFF220u; // 801CD298
  cmps(c,0,(int32_t)c->r[0],4); // 801CD29C
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD2A0
  c->r[30]=c->r[5]+c->r[6]; // 801CD2A4
  if (crb(c,0)) { goto L_801CD2B4; } // 801CD2A8
  c->r[0]=0u+0x00000000u; // 801CD2AC
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD2B0
L_801CD2B4:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD2B4
  c->r[9]=0u+0x801D0000u; // 801CD2B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD2BC
  c->r[5]=0u+0x000000ABu; // 801CD2C0
  W8(c->r[4]+c->r[0],c->r[5]); // 801CD2C4
  c->r[10]=c->r[30]|c->r[30]; // 801CD2C8
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CD2CC
  c->r[4]=0u+0x000000ABu; // 801CD2D0
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD2D4
  c->r[6]=0u+0x00000020u; // 801CD2D8
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD2DC
  c->r[7]=0u+0x00000000u; // 801CD2E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD2E4
  c->r[8]=0u+0x00000000u; // 801CD2E8
  c->r[5]=c->r[5]+c->r[0]; // 801CD2EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CD2F0
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD2F4
  c->r[5]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD2F8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD2FC
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CD300
  c->r[5]=c->r[5]+c->r[0]; // 801CD304
  c->lr=0x801CD30Cu; f_802047C4(c); // 801CD308
  cmps(c,0,(int32_t)c->r[3],0); // 801CD30C
  if (crb(c,2)) { goto L_801CD334; } // 801CD310
  c->r[4]=c->r[3]|c->r[3]; // 801CD314
  c->r[3]=c->r[31]+0x00000A80u; // 801CD318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD31C
  c->lr=0x801CD324u; f_801BB3FC(c); // 801CD320
  c->r[0]=0u+0x00000000u; // 801CD324
  c->r[3]=0u+0x00000000u; // 801CD328
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CD32C
  goto L_801CD338; // 801CD330
L_801CD334:;
  c->r[3]=0u+0x00000001u; // 801CD334
L_801CD338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD33C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD340
  c->lr=c->r[0]; // 801CD344
  c->r[1]=c->r[1]+0x00000010u; // 801CD348
  return; // 801CD34C
}

// DVDLowGetCoverRegister
void f_801CD350(Ctx* __restrict c) {
  trace_call(0x801CD350u);
  c->r[3]=0u+0x80570000u; // 801CD350
  c->r[3]=c->r[3]+0xFFFFF2A0u; // 801CD354
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CD358
  return; // 801CD35C
}

// DVDLowPrepareCoverRegister
void f_801CD360(Ctx* __restrict c) {
  trace_call(0x801CD360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD360
  c->r[0]=c->lr; // 801CD364
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD36C
  c->r[31]=0u+0x804B0000u; // 801CD370
  c->r[31]=c->r[31]+0x00001520u; // 801CD374
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD378
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CD37C
  c->r[0]=c->r[4]+0x00000001u; // 801CD380
  cmps(c,0,(int32_t)c->r[0],4); // 801CD384
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD388
  if (crb(c,0)) { goto L_801CD398; } // 801CD38C
  c->r[0]=0u+0x00000000u; // 801CD390
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD394
L_801CD398:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD398
  c->r[7]=0u+0x80570000u; // 801CD39C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD3A0
  c->r[5]=0u+0x0000007Au; // 801CD3A4
  W8(c->r[4]+c->r[0],c->r[5]); // 801CD3A8
  c->r[9]=0u+0x00000001u; // 801CD3AC
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CD3B0
  c->r[4]=R32(c->r[13]+0xFFFF9E48u); // 801CD3B4
  W8(c->r[13]+0xFFFF9E40u,c->r[9]); // 801CD3B8
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CD3BC
  c->r[6]=c->r[7]+c->r[8]; // 801CD3C0
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CD3C4
  c->r[0]=0u-c->r[5]; // 801CD3C8
  c->r[0]=c->r[0]|c->r[5]; // 801CD3CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CD3D0
  cmpu(c,0,c->r[0],0x00000001u); // 801CD3D4
  if (!crb(c,2)) { goto L_801CD3F8; } // 801CD3D8
  c->r[3]=c->r[31]+0x00000218u; // 801CD3DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD3E0
  c->lr=0x801CD3E8u; f_801BB3FC(c); // 801CD3E4
  c->r[3]=c->r[31]+0x00000250u; // 801CD3E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD3EC
  c->lr=0x801CD3F4u; f_801BB3FC(c); // 801CD3F0
L_801CD3F4:;
  IRQCHK(c); goto L_801CD3F4; // 801CD3F4
L_801CD3F8:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CD3F8
  c->r[0]=c->r[5]+0x01150000u; // 801CD3FC
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CD400
  if (crb(c,2)) { goto L_801CD418; } // 801CD404
  c->r[3]=c->r[31]+0x00000280u; // 801CD408
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD40C
  c->lr=0x801CD414u; f_801BB3FC(c); // 801CD410
L_801CD414:;
  IRQCHK(c); goto L_801CD414; // 801CD414
L_801CD418:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801CD418
  c->r[0]=c->r[4]+0x00000001u; // 801CD41C
  cmps(c,0,(int32_t)c->r[0],4); // 801CD420
  W32(c->r[6]+0x00000004u,c->r[9]); // 801CD424
  W8(c->r[6]+0x00000008u,c->r[9]); // 801CD428
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD42C
  if (crb(c,0)) { goto L_801CD43C; } // 801CD430
  c->r[0]=0u+0x00000000u; // 801CD434
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD438
L_801CD43C:;
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD43C
  c->r[3]=0u+0x80570000u; // 801CD440
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CD444
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD448
  c->r[3]=c->r[3]+0xFFFFF220u; // 801CD44C
  c->r[7]=0u+0x80570000u; // 801CD450
  c->r[30]=c->r[3]+c->r[5]; // 801CD454
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD458
  c->r[9]=0u+0x801D0000u; // 801CD45C
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CD460
  c->r[5]=c->r[4]+c->r[0]; // 801CD464
  c->r[10]=c->r[30]|c->r[30]; // 801CD468
  c->r[7]=c->r[7]+0xFFFFF2C0u; // 801CD46C
  c->r[9]=c->r[9]+0xFFFFBD1Cu; // 801CD470
  c->r[4]=0u+0x0000007Au; // 801CD474
  c->r[6]=0u+0x00000020u; // 801CD478
  c->r[8]=0u+0x00000020u; // 801CD47C
  c->lr=0x801CD484u; f_802047C4(c); // 801CD480
  cmps(c,0,(int32_t)c->r[3],0); // 801CD484
  if (crb(c,2)) { goto L_801CD4AC; } // 801CD488
  c->r[4]=c->r[3]|c->r[3]; // 801CD48C
  c->r[3]=c->r[31]+0x00000B30u; // 801CD490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD494
  c->lr=0x801CD49Cu; f_801BB3FC(c); // 801CD498
  c->r[0]=0u+0x00000000u; // 801CD49C
  c->r[3]=0u+0x00000000u; // 801CD4A0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CD4A4
  goto L_801CD4B0; // 801CD4A8
L_801CD4AC:;
  c->r[3]=0u+0x00000001u; // 801CD4AC
L_801CD4B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD4B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD4B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD4B8
  c->lr=c->r[0]; // 801CD4BC
  c->r[1]=c->r[1]+0x00000010u; // 801CD4C0
  return; // 801CD4C4
}

// DVDLowGetImmBufferReg
void f_801CD4C8(Ctx* __restrict c) {
  trace_call(0x801CD4C8u);
  c->r[3]=0u+0x80570000u; // 801CD4C8
  c->r[3]=R32(c->r[3]+0xFFFFF2A0u); // 801CD4CC
  return; // 801CD4D0
}

// DVDLowUnmaskStatusInterrupts
void f_801CD4D4(Ctx* __restrict c) {
  trace_call(0x801CD4D4u);
  c->r[3]=0u+0x00000001u; // 801CD4D4
  return; // 801CD4D8
}

// DVDLowMaskCoverInterrupt
void f_801CD4DC(Ctx* __restrict c) {
  trace_call(0x801CD4DCu);
  c->r[3]=0u+0x00000001u; // 801CD4DC
  return; // 801CD4E0
}

// DVDLowClearCoverInterrupt
void f_801CD4E4(Ctx* __restrict c) {
  trace_call(0x801CD4E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD4E4
  c->r[0]=c->lr; // 801CD4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD4EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD4F0
  c->r[31]=0u+0x804B0000u; // 801CD4F4
  c->r[31]=c->r[31]+0x00001520u; // 801CD4F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD4FC
  c->r[4]=R32(c->r[13]+0xFFFF9E44u); // 801CD500
  c->r[0]=c->r[4]+0x00000001u; // 801CD504
  cmps(c,0,(int32_t)c->r[0],4); // 801CD508
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD50C
  if (crb(c,0)) { goto L_801CD51C; } // 801CD510
  c->r[0]=0u+0x00000000u; // 801CD514
  W32(c->r[13]+0xFFFF9E44u,c->r[0]); // 801CD518
L_801CD51C:;
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD51C
  c->r[7]=0u+0x80570000u; // 801CD520
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD524
  c->r[5]=0u+0x00000086u; // 801CD528
  W8(c->r[4]+c->r[0],c->r[5]); // 801CD52C
  c->r[9]=0u+0x00000001u; // 801CD530
  c->r[7]=c->r[7]+0xFFFFF220u; // 801CD534
  c->r[4]=R32(c->r[13]+0xFFFF9E48u); // 801CD538
  W8(c->r[13]+0xFFFF9E40u,c->r[9]); // 801CD53C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CD540
  c->r[6]=c->r[7]+c->r[8]; // 801CD544
  c->r[5]=R8(c->r[6]+0x00000008u); // 801CD548
  c->r[0]=0u-c->r[5]; // 801CD54C
  c->r[0]=c->r[0]|c->r[5]; // 801CD550
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CD554
  cmpu(c,0,c->r[0],0x00000001u); // 801CD558
  if (!crb(c,2)) { goto L_801CD57C; } // 801CD55C
  c->r[3]=c->r[31]+0x00000218u; // 801CD560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD564
  c->lr=0x801CD56Cu; f_801BB3FC(c); // 801CD568
  c->r[3]=c->r[31]+0x00000250u; // 801CD56C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD570
  c->lr=0x801CD578u; f_801BB3FC(c); // 801CD574
L_801CD578:;
  IRQCHK(c); goto L_801CD578; // 801CD578
L_801CD57C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CD57C
  c->r[0]=c->r[5]+0x01150000u; // 801CD580
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801CD584
  if (crb(c,2)) { goto L_801CD59C; } // 801CD588
  c->r[3]=c->r[31]+0x00000280u; // 801CD58C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD590
  c->lr=0x801CD598u; f_801BB3FC(c); // 801CD594
L_801CD598:;
  IRQCHK(c); goto L_801CD598; // 801CD598
L_801CD59C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801CD59C
  c->r[0]=c->r[4]+0x00000001u; // 801CD5A0
  cmps(c,0,(int32_t)c->r[0],4); // 801CD5A4
  W32(c->r[6]+0x00000004u,c->r[9]); // 801CD5A8
  W8(c->r[6]+0x00000008u,c->r[9]); // 801CD5AC
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD5B0
  if (crb(c,0)) { goto L_801CD5C0; } // 801CD5B4
  c->r[0]=0u+0x00000000u; // 801CD5B8
  W32(c->r[13]+0xFFFF9E48u,c->r[0]); // 801CD5BC
L_801CD5C0:;
  c->r[0]=R32(c->r[13]+0xFFFF9E44u); // 801CD5C0
  c->r[3]=0u+0x80570000u; // 801CD5C4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801CD5C8
  c->r[4]=R32(c->r[13]+0xFFFF9E5Cu); // 801CD5CC
  c->r[3]=c->r[3]+0xFFFFF220u; // 801CD5D0
  c->r[9]=0u+0x801D0000u; // 801CD5D4
  c->r[30]=c->r[3]+c->r[5]; // 801CD5D8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801CD5DC
  c->r[5]=c->r[4]+c->r[0]; // 801CD5E0
  c->r[3]=R32(c->r[13]+0xFFFF8480u); // 801CD5E4
  c->r[10]=c->r[30]|c->r[30]; // 801CD5E8
  c->r[9]=c->r[9]+0xFFFFBC64u; // 801CD5EC
  c->r[4]=0u+0x00000086u; // 801CD5F0
  c->r[6]=0u+0x00000020u; // 801CD5F4
  c->r[7]=0u+0x00000000u; // 801CD5F8
  c->r[8]=0u+0x00000000u; // 801CD5FC
  c->lr=0x801CD604u; f_802047C4(c); // 801CD600
  cmps(c,0,(int32_t)c->r[3],0); // 801CD604
  if (crb(c,2)) { goto L_801CD62C; } // 801CD608
  c->r[4]=c->r[3]|c->r[3]; // 801CD60C
  c->r[3]=c->r[31]+0x00000B74u; // 801CD610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD614
  c->lr=0x801CD61Cu; f_801BB3FC(c); // 801CD618
  c->r[0]=0u+0x00000000u; // 801CD61C
  c->r[3]=0u+0x00000000u; // 801CD620
  W8(c->r[30]+0x00000008u,c->r[0]); // 801CD624
  goto L_801CD630; // 801CD628
L_801CD62C:;
  c->r[3]=0u+0x00000001u; // 801CD62C
L_801CD630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD634
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD638
  c->lr=c->r[0]; // 801CD63C
  c->r[1]=c->r[1]+0x00000010u; // 801CD640
  return; // 801CD644
}

// fn_801CD648
void f_801CD648(Ctx* __restrict c) {
  trace_call(0x801CD648u);
  c->r[3]=0u+0x00000000u; // 801CD648
  return; // 801CD64C
}

// OnShutdown_801CD650
void f_801CD650(Ctx* __restrict c) {
  trace_call(0x801CD650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD650
  c->r[0]=c->lr; // 801CD654
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD658
  c->r[11]=c->r[1]+0x00000020u; // 801CD65C
  c->lr=0x801CD664u; f_801E795C(c); // 801CD660
  cmps(c,0,(int32_t)c->r[3],0); // 801CD664
  c->r[31]=0u+0x80570000u; // 801CD668
  c->r[31]=c->r[31]+0xFFFFF380u; // 801CD66C
  if (!crb(c,2)) { goto L_801CD7C8; } // 801CD670
  cmps(c,0,(int32_t)c->r[4],4); // 801CD674
  if (!crb(c,0)) { goto L_801CD68C; } // 801CD678
  cmps(c,0,(int32_t)c->r[4],0); // 801CD67C
  if (crb(c,2)) { goto L_801CD7C0; } // 801CD680
  if (!crb(c,0)) { goto L_801CD698; } // 801CD684
  goto L_801CD7CC; // 801CD688
L_801CD68C:;
  cmps(c,0,(int32_t)c->r[4],7); // 801CD68C
  if (!crb(c,0)) { goto L_801CD7CC; } // 801CD690
  goto L_801CD7C0; // 801CD694
L_801CD698:;
  c->r[0]=R32(c->r[13]+0xFFFF8494u); // 801CD698
  cmps(c,0,(int32_t)c->r[0],0); // 801CD69C
  if (crb(c,2)) { goto L_801CD7A0; } // 801CD6A0
  c->lr=0x801CD6A8u; f_801D1C24(c); // 801CD6A4
  c->lr=0x801CD6ACu; f_801BE74C(c); // 801CD6A8
  c->r[5]=R32(c->r[13]+0xFFFF9EA8u); // 801CD6AC
  c->r[0]=0u+0x00000000u; // 801CD6B0
  c->r[4]=R32(c->r[13]+0xFFFF9E98u); // 801CD6B4
  c->r[30]=c->r[3]|c->r[3]; // 801CD6B8
  c->r[28]=c->r[31]+0x00000078u; // 801CD6BC
  c->r[29]=c->r[31]+0x00000000u; // 801CD6C0
  c->r[3]=c->r[5]|c->r[4]; // 801CD6C4
  c->r[27]=0u+0xFFFFFFFFu; // 801CD6C8
  W32(c->r[13]+0xFFFF9EA8u,c->r[3]); // 801CD6CC
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 801CD6D0
  c->r[4]=R32(c->r[13]+0xFFFF9EB0u); // 801CD6D4
  c->r[5]=R32(c->r[13]+0xFFFF9EB4u); // 801CD6D8
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CD6DC
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CD6E0
  c->r[0]=c->r[4]|c->r[0]; // 801CD6E4
  c->r[3]=c->r[5]|c->r[3]; // 801CD6E8
  W32(c->r[13]+0xFFFF9EB4u,c->r[3]); // 801CD6EC
  W32(c->r[13]+0xFFFF9EB0u,c->r[0]); // 801CD6F0
  goto L_801CD758; // 801CD6F4
L_801CD6F8:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CD6F8
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CD6FC
  c->r[4]=cntlz(c->r[0]); // 801CD700
  cmps(c,0,(int32_t)c->r[4],32); // 801CD704
  c->r[0]=c->r[3]&c->r[27]; // 801CD708
  if (!crb(c,0)) { goto L_801CD714; } // 801CD70C
  goto L_801CD71C; // 801CD710
L_801CD714:;
  c->r[3]=cntlz(c->r[0]); // 801CD714
  c->r[4]=c->r[3]+0x00000020u; // 801CD718
L_801CD71C:;
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801CD71C
  c->r[5]=addc(c,~c->r[4],0x0000003Fu,1); // 801CD720
  c->r[0]=R16(c->r[28]+c->r[6]); // 801CD724
  c->r[4]=0u+0x00000001u; // 801CD728
  c->r[3]=0u+0x00000000u; // 801CD72C
  W16(c->r[29]+c->r[6],c->r[0]); // 801CD730
  c->lr=0x801CD738u; f_801E7DD4(c); // 801CD734
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CD738
  c->r[5]=~(c->r[3]|c->r[3]); // 801CD73C
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CD740
  c->r[4]=~(c->r[4]|c->r[4]); // 801CD744
  c->r[0]=c->r[0]&c->r[5]; // 801CD748
  c->r[3]=c->r[3]&c->r[4]; // 801CD74C
  W32(c->r[13]+0xFFFF9EA4u,c->r[3]); // 801CD750
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CD754
L_801CD758:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CD758
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CD75C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801CD760
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD6F8; } // 801CD764
  c->r[3]=c->r[31]+0x000000F0u; // 801CD768
  c->r[4]=0u+0x00000001u; // 801CD76C
  c->r[0]=R32(c->r[3]+0x00000030u); // 801CD770
  c->r[3]=c->r[30]|c->r[30]; // 801CD774
  W32(c->r[13]+0xFFFF9F10u,c->r[4]); // 801CD778
  W32(c->r[13]+0xFFFF9F0Cu,c->r[4]); // 801CD77C
  W32(c->r[13]+0xFFFF9ED4u,c->r[0]); // 801CD780
  c->lr=0x801CD788u; f_801BE774(c); // 801CD784
  c->r[4]=R32(c->r[13]+0xFFFF9F14u); // 801CD788
  c->r[0]=0u+0x00000000u; // 801CD78C
  W32(c->r[13]+0xFFFF8494u,c->r[0]); // 801CD790
  c->r[3]=0u+0x00000000u; // 801CD794
  W32(c->r[13]+0xFFFF9EC0u,c->r[4]); // 801CD798
  goto L_801CD7CC; // 801CD79C
L_801CD7A0:;
  c->r[3]=R32(c->r[13]+0xFFFF9EC0u); // 801CD7A0
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 801CD7A4
  cmpu(c,0,c->r[3],c->r[0]); // 801CD7A8
  if (!crb(c,2)) { goto L_801CD7B8; } // 801CD7AC
  c->r[3]=0u+0x00000000u; // 801CD7B0
  goto L_801CD7CC; // 801CD7B4
L_801CD7B8:;
  c->r[3]=0u+0x00000001u; // 801CD7B8
  goto L_801CD7CC; // 801CD7BC
L_801CD7C0:;
  c->r[3]=0u+0x00000001u; // 801CD7C0
  goto L_801CD7CC; // 801CD7C4
L_801CD7C8:;
  c->r[3]=0u+0x00000001u; // 801CD7C8
L_801CD7CC:;
  c->r[11]=c->r[1]+0x00000020u; // 801CD7CC
  c->lr=0x801CD7D4u; f_801E79A8(c); // 801CD7D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD7D4
  c->lr=c->r[0]; // 801CD7D8
  c->r[1]=c->r[1]+0x00000020u; // 801CD7DC
  return; // 801CD7E0
}

// __VIRetraceHandler
void f_801CD7E4(Ctx* __restrict c) {
  trace_call(0x801CD7E4u);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD7E4
  c->r[0]=c->lr; // 801CD7E8
  W32(c->r[1]+0x000002F4u,c->r[0]); // 801CD7EC
  c->r[11]=c->r[1]+0x000002F0u; // 801CD7F0
  c->lr=0x801CD7F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD7F4
  c->r[5]=0u+0xCC000000u; // 801CD7F8
  c->r[30]=0u+0x80570000u; // 801CD7FC
  c->r[3]=R16(c->r[5]+0x00002030u); // 801CD800
  c->r[28]=c->r[4]|c->r[4]; // 801CD804
  c->r[30]=c->r[30]+0xFFFFF380u; // 801CD808
  c->r[6]=0u+0x00000000u; // 801CD80C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801CD810
  if (crb(c,2)) { goto L_801CD824; } // 801CD814
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 801CD818
  c->r[6]=c->r[6]|0x00000001u; // 801CD81C
  W16(c->r[5]+0x00002030u,c->r[0]); // 801CD820
L_801CD824:;
  c->r[4]=0u+0xCC000000u; // 801CD824
  c->r[3]=R16(c->r[4]+0x00002034u); // 801CD828
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801CD82C
  if (crb(c,2)) { goto L_801CD840; } // 801CD830
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 801CD834
  c->r[6]=c->r[6]|0x00000002u; // 801CD838
  W16(c->r[4]+0x00002034u,c->r[0]); // 801CD83C
L_801CD840:;
  c->r[4]=0u+0xCC000000u; // 801CD840
  c->r[3]=R16(c->r[4]+0x00002038u); // 801CD844
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801CD848
  if (crb(c,2)) { goto L_801CD85C; } // 801CD84C
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 801CD850
  c->r[6]=c->r[6]|0x00000004u; // 801CD854
  W16(c->r[4]+0x00002038u,c->r[0]); // 801CD858
L_801CD85C:;
  c->r[4]=0u+0xCC000000u; // 801CD85C
  c->r[3]=R16(c->r[4]+0x0000203Cu); // 801CD860
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 801CD864
  if (crb(c,2)) { goto L_801CD878; } // 801CD868
  c->r[0]=rotl(c->r[3],0)&0x00007FFFu; // 801CD86C
  c->r[6]=c->r[6]|0x00000008u; // 801CD870
  W16(c->r[4]+0x0000203Cu,c->r[0]); // 801CD874
L_801CD878:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 801CD878
  c->r[3]=0u+0xCC000000u; // 801CD87C
  c->r[0]=R16(c->r[3]+0x0000203Cu); // 801CD880
  if (!crb(c,2)) { goto L_801CD890; } // 801CD884
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 801CD888
  if (crb(c,2)) { goto L_801CD908; } // 801CD88C
L_801CD890:;
  c->r[3]=c->r[1]+0x00000010u; // 801CD890
  c->lr=0x801CD898u; f_801BAFF0(c); // 801CD894
  c->r[3]=c->r[1]+0x00000010u; // 801CD898
  c->lr=0x801CD8A0u; f_801BADC8(c); // 801CD89C
  c->r[0]=R32(c->r[13]+0xFFFF9E90u); // 801CD8A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CD8A4
  if (crb(c,2)) { goto L_801CD8F4; } // 801CD8A8
  c->r[5]=0u+0xCC000000u; // 801CD8AC
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CD8B0
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 801CD8B4
L_801CD8B8:;
  c->r[3]=R16(c->r[5]+0x0000202Eu); // 801CD8B8
  c->r[6]=c->r[4]|c->r[4]; // 801CD8BC
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CD8C0
  c->r[3]=rotl(c->r[3],0)&0x000007FFu; // 801CD8C4
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 801CD8C8
  cmpu(c,0,c->r[6],c->r[4]); // 801CD8CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD8B8; } // 801CD8D0
  c->r[5]=c->r[1]+0x0000000Au; // 801CD8D4
  c->r[6]=c->r[1]+0x00000008u; // 801CD8D8
  c->lr=0x801CD8E0u; f_801CFC90(c); // 801CD8DC
  c->r[12]=R32(c->r[13]+0xFFFF9E90u); // 801CD8E0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 801CD8E4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801CD8E8
  c->ctr=c->r[12]; // 801CD8EC
  if (true) { c->lr=0x801CD8F4u; dispatch(c,c->ctr); } // 801CD8F0
L_801CD8F4:;
  c->r[3]=c->r[1]+0x00000010u; // 801CD8F4
  c->lr=0x801CD8FCu; f_801BAFF0(c); // 801CD8F8
  c->r[3]=c->r[28]|c->r[28]; // 801CD8FC
  c->lr=0x801CD904u; f_801BADC8(c); // 801CD900
  goto L_801CDFDC; // 801CD904
L_801CD908:;
  c->r[4]=R32(c->r[13]+0xFFFF9F14u); // 801CD908
  c->r[3]=c->r[1]+0x00000010u; // 801CD90C
  c->r[0]=c->r[4]+0x00000001u; // 801CD910
  W32(c->r[13]+0xFFFF9F14u,c->r[0]); // 801CD914
  c->lr=0x801CD91Cu; f_801BAFF0(c); // 801CD918
  c->r[3]=c->r[1]+0x00000010u; // 801CD91C
  c->lr=0x801CD924u; f_801BADC8(c); // 801CD920
  c->r[12]=R32(c->r[13]+0xFFFF9EE8u); // 801CD924
  cmps(c,0,(int32_t)c->r[12],0); // 801CD928
  if (crb(c,2)) { goto L_801CD93C; } // 801CD92C
  c->r[3]=R32(c->r[13]+0xFFFF9F14u); // 801CD930
  c->ctr=c->r[12]; // 801CD934
  if (true) { c->lr=0x801CD93Cu; dispatch(c,c->ctr); } // 801CD938
L_801CD93C:;
  c->r[0]=R32(c->r[13]+0xFFFF9E70u); // 801CD93C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD940
  if (crb(c,2)) { goto L_801CD998; } // 801CD944
  c->r[3]=0u+0xCC000000u; // 801CD948
  c->r[0]=R16(c->r[3]+0x0000202Cu); // 801CD94C
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 801CD950
L_801CD954:;
  c->r[0]=R16(c->r[3]+0x0000202Eu); // 801CD954
  c->r[5]=c->r[4]|c->r[4]; // 801CD958
  c->r[0]=R16(c->r[3]+0x0000202Cu); // 801CD95C
  c->r[4]=rotl(c->r[0],0)&0x000007FFu; // 801CD960
  cmpu(c,0,c->r[5],c->r[4]); // 801CD964
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD954; } // 801CD968
  cmpu(c,0,c->r[4],0x00000001u); // 801CD96C
  if (crb(c,2)) { goto L_801CD998; } // 801CD970
  c->r[3]=R32(c->r[13]+0xFFFF9EDCu); // 801CD974
  c->r[0]=R16(c->r[3]+0x00000018u); // 801CD978
  c->r[3]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CD97C
  c->r[0]=c->r[3]+0x00000001u; // 801CD980
  cmpu(c,0,c->r[4],c->r[0]); // 801CD984
  if (crb(c,2)) { goto L_801CD998; } // 801CD988
  c->r[3]=R32(c->r[13]+0xFFFF9E6Cu); // 801CD98C
  c->r[0]=c->r[3]+0x00000001u; // 801CD990
  W32(c->r[13]+0xFFFF9E6Cu,c->r[0]); // 801CD994
L_801CD998:;
  c->r[0]=R32(c->r[13]+0xFFFF9F10u); // 801CD998
  cmps(c,0,(int32_t)c->r[0],0); // 801CD99C
  if (crb(c,2)) { goto L_801CDAD4; } // 801CD9A0
  c->r[0]=R32(c->r[13]+0xFFFF9EA8u); // 801CD9A4
  cmpu(c,0,c->r[0],0x00000001u); // 801CD9A8
  if (!crb(c,2)) { goto L_801CDA0C; } // 801CD9AC
  c->r[4]=0u+0xCC000000u; // 801CD9B0
  c->r[0]=R16(c->r[4]+0x0000202Cu); // 801CD9B4
  c->r[7]=rotl(c->r[0],0)&0x000007FFu; // 801CD9B8
L_801CD9BC:;
  c->r[3]=R16(c->r[4]+0x0000202Eu); // 801CD9BC
  c->r[6]=c->r[7]|c->r[7]; // 801CD9C0
  c->r[0]=R16(c->r[4]+0x0000202Cu); // 801CD9C4
  c->r[5]=rotl(c->r[3],0)&0x000007FFu; // 801CD9C8
  c->r[7]=rotl(c->r[0],0)&0x000007FFu; // 801CD9CC
  cmpu(c,0,c->r[6],c->r[7]); // 801CD9D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD9BC; } // 801CD9D4
  c->r[6]=R32(c->r[13]+0xFFFF9EDCu); // 801CD9D8
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 801CD9DC
  c->r[3]=c->r[7]+0xFFFFFFFFu; // 801CD9E0
  c->r[0]=R16(c->r[6]+0x0000001Au); // 801CD9E4
  c->r[5]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801CD9E8
  c->r[3]=R16(c->r[6]+0x00000018u); // 801CD9EC
  c->r[0]=divwu(c->r[4],c->r[0]); // 801CD9F0
  c->r[0]=c->r[5]+c->r[0]; // 801CD9F4
  c->r[0]=c->r[3]^c->r[0]; // 801CD9F8
  c->r[0]=cntlz(c->r[0]); // 801CD9FC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801CDA00
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801CDA04
  if (crb(c,2)) { goto L_801CDABC; } // 801CDA08
L_801CDA0C:;
  c->r[26]=c->r[30]+0x00000000u; // 801CDA0C
  c->r[31]=0u+0xFFFFFFFFu; // 801CDA10
  c->r[27]=0u+0xCC000000u; // 801CDA14
  goto L_801CDA80; // 801CDA18
L_801CDA1C:;
  c->r[0]=R32(c->r[13]+0xFFFF9EB0u); // 801CDA1C
  c->r[3]=R32(c->r[13]+0xFFFF9EB4u); // 801CDA20
  c->r[4]=cntlz(c->r[0]); // 801CDA24
  cmps(c,0,(int32_t)c->r[4],32); // 801CDA28
  c->r[0]=c->r[3]&c->r[31]; // 801CDA2C
  if (!crb(c,0)) { goto L_801CDA38; } // 801CDA30
  goto L_801CDA40; // 801CDA34
L_801CDA38:;
  c->r[3]=cntlz(c->r[0]); // 801CDA38
  c->r[4]=c->r[3]+0x00000020u; // 801CDA3C
L_801CDA40:;
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801CDA40
  c->r[5]=addc(c,~c->r[4],0x0000003Fu,1); // 801CDA44
  c->r[0]=R16(c->r[26]+c->r[3]); // 801CDA48
  c->r[6]=c->r[27]+c->r[3]; // 801CDA4C
  c->r[4]=0u+0x00000001u; // 801CDA50
  c->r[3]=0u+0x00000000u; // 801CDA54
  W16(c->r[6]+0x00002000u,c->r[0]); // 801CDA58
  c->lr=0x801CDA60u; f_801E7DD4(c); // 801CDA5C
  c->r[0]=R32(c->r[13]+0xFFFF9EB0u); // 801CDA60
  c->r[5]=~(c->r[3]|c->r[3]); // 801CDA64
  c->r[3]=R32(c->r[13]+0xFFFF9EB4u); // 801CDA68
  c->r[4]=~(c->r[4]|c->r[4]); // 801CDA6C
  c->r[0]=c->r[0]&c->r[5]; // 801CDA70
  c->r[3]=c->r[3]&c->r[4]; // 801CDA74
  W32(c->r[13]+0xFFFF9EB4u,c->r[3]); // 801CDA78
  W32(c->r[13]+0xFFFF9EB0u,c->r[0]); // 801CDA7C
L_801CDA80:;
  c->r[0]=R32(c->r[13]+0xFFFF9EB0u); // 801CDA80
  c->r[3]=R32(c->r[13]+0xFFFF9EB4u); // 801CDA84
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801CDA88
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDA1C; } // 801CDA8C
  c->r[3]=c->r[30]+0x000000F0u; // 801CDA90
  c->r[0]=R32(c->r[13]+0xFFFF9ED4u); // 801CDA94
  c->r[4]=R32(c->r[3]+0x00000054u); // 801CDA98
  c->r[5]=0u+0x00000000u; // 801CDA9C
  c->r[3]=R32(c->r[3]+0x00000028u); // 801CDAA0
  c->r[6]=0u+0x00000001u; // 801CDAA4
  W32(c->r[13]+0xFFFF9EA8u,c->r[5]); // 801CDAA8
  W32(c->r[13]+0xFFFF9EDCu,c->r[4]); // 801CDAAC
  W32(c->r[13]+0xFFFF9ED8u,c->r[3]); // 801CDAB0
  W32(c->r[13]+0xFFFF9ED0u,c->r[0]); // 801CDAB4
  goto L_801CDAC0; // 801CDAB8
L_801CDABC:;
  c->r[6]=0u+0x00000000u; // 801CDABC
L_801CDAC0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CDAC0
  if (crb(c,2)) { goto L_801CDAD4; } // 801CDAC4
  c->r[0]=0u+0x00000000u; // 801CDAC8
  W32(c->r[13]+0xFFFF9F10u,c->r[0]); // 801CDACC
  c->lr=0x801CDAD4u; f_801FA978(c); // 801CDAD0
L_801CDAD4:;
  c->lr=0x801CDAD8u; f_801BE74C(c); // 801CDAD4
  c->r[4]=0u+0xCC000000u; // 801CDAD8
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801CDADC
  c->r[26]=rotl(c->r[0],0)&0x00000003u; // 801CDAE0
  c->lr=0x801CDAE8u; f_801BE774(c); // 801CDAE4
  c->r[0]=R32(c->r[13]+0xFFFF8498u); // 801CDAE8
  c->r[26]=rotl(c->r[26],0)&0x00000001u; // 801CDAEC
  cmpu(c,0,c->r[26],c->r[0]); // 801CDAF0
  if (crb(c,2)) { goto L_801CDB00; } // 801CDAF4
  c->r[3]=c->r[26]|c->r[26]; // 801CDAF8
  c->lr=0x801CDB00u; f_801D0A04(c); // 801CDAFC
L_801CDB00:;
  W32(c->r[13]+0xFFFF8498u,c->r[26]); // 801CDB00
  c->lr=0x801CDB08u; f_801BE74C(c); // 801CDB04
  c->r[5]=R32(c->r[13]+0xFFFF9ED8u); // 801CDB08
  cmpu(c,0,c->r[5],0x00000007u); // 801CDB0C
  if (crb(c,1)) { goto L_801CDB40; } // 801CDB10
  c->r[4]=0u+0x804B0000u; // 801CDB14
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CDB18
  c->r[4]=c->r[4]+0x00002348u; // 801CDB1C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CDB20
  c->ctr=c->r[4]; // 801CDB24
  if (true) { switch (c->ctr) { case 0x801CDB2Cu: goto L_801CDB2C; case 0x801CDB34u: goto L_801CDB34; case 0x801CDB3Cu: goto L_801CDB3C; default: break; } dispatch(c,c->ctr); return; } // 801CDB28
L_801CDB2C:;
  c->r[29]=0u+0x00000000u; // 801CDB2C
  goto L_801CDB40; // 801CDB30
L_801CDB34:;
  c->r[29]=0u+0x00000001u; // 801CDB34
  goto L_801CDB40; // 801CDB38
L_801CDB3C:;
  c->r[29]=c->r[5]|c->r[5]; // 801CDB3C
L_801CDB40:;
  c->lr=0x801CDB44u; f_801BE774(c); // 801CDB40
  c->r[0]=R32(c->r[13]+0xFFFF849Cu); // 801CDB44
  cmpu(c,0,c->r[29],c->r[0]); // 801CDB48
  if (crb(c,2)) { goto L_801CDC24; } // 801CDB4C
  cmpu(c,0,c->r[29],0x00000005u); // 801CDB50
  if (!crb(c,2)) { goto L_801CDB64; } // 801CDB54
  c->r[3]=0u+0x00000001u; // 801CDB58
  c->lr=0x801CDB60u; f_801D0AA8(c); // 801CDB5C
  goto L_801CDB6C; // 801CDB60
L_801CDB64:;
  c->r[3]=0u+0x00000000u; // 801CDB64
  c->lr=0x801CDB6Cu; f_801D0AA8(c); // 801CDB68
L_801CDB6C:;
  cmps(c,0,(int32_t)c->r[29],1); // 801CDB6C
  if (crb(c,2)) { goto L_801CDB78; } // 801CDB70
  goto L_801CDBC8; // 801CDB74
L_801CDB78:;
  c->r[0]=R32(c->r[13]+0xFFFF9F00u); // 801CDB78
  cmps(c,0,(int32_t)c->r[0],2); // 801CDB7C
  if (crb(c,2)) { goto L_801CDBA0; } // 801CDB80
  if (!crb(c,0)) { goto L_801CDBB0; } // 801CDB84
  cmps(c,0,(int32_t)c->r[0],1); // 801CDB88
  if (!crb(c,0)) { goto L_801CDB94; } // 801CDB8C
  goto L_801CDBB0; // 801CDB90
L_801CDB94:;
  c->r[0]=0u+0x00007530u; // 801CDB94
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDB98
  goto L_801CDBB8; // 801CDB9C
L_801CDBA0:;
  c->r[3]=0u+0x00010000u; // 801CDBA0
  c->r[0]=c->r[3]+0xFFFFAFC8u; // 801CDBA4
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDBA8
  goto L_801CDBB8; // 801CDBAC
L_801CDBB0:;
  c->r[0]=0u+0x00003A98u; // 801CDBB0
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDBB4
L_801CDBB8:;
  c->r[3]=0u+0x00010000u; // 801CDBB8
  c->r[0]=c->r[3]+0x00005F90u; // 801CDBBC
  W32(c->r[13]+0xFFFF9E80u,c->r[0]); // 801CDBC0
  goto L_801CDC18; // 801CDBC4
L_801CDBC8:;
  c->r[0]=R32(c->r[13]+0xFFFF9F00u); // 801CDBC8
  cmps(c,0,(int32_t)c->r[0],2); // 801CDBCC
  if (crb(c,2)) { goto L_801CDBF4; } // 801CDBD0
  if (!crb(c,0)) { goto L_801CDC04; } // 801CDBD4
  cmps(c,0,(int32_t)c->r[0],1); // 801CDBD8
  if (!crb(c,0)) { goto L_801CDBE4; } // 801CDBDC
  goto L_801CDC04; // 801CDBE0
L_801CDBE4:;
  c->r[3]=0u+0x00010000u; // 801CDBE4
  c->r[0]=c->r[3]+0xFFFF8CA0u; // 801CDBE8
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDBEC
  goto L_801CDC0C; // 801CDBF0
L_801CDBF4:;
  c->r[3]=0u+0x00010000u; // 801CDBF4
  c->r[0]=c->r[3]+0xFFFFD2F0u; // 801CDBF8
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDBFC
  goto L_801CDC0C; // 801CDC00
L_801CDC04:;
  c->r[0]=0u+0x00004650u; // 801CDC04
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CDC08
L_801CDC0C:;
  c->r[3]=0u+0x00020000u; // 801CDC0C
  c->r[0]=c->r[3]+0xFFFFA5E0u; // 801CDC10
  W32(c->r[13]+0xFFFF9E80u,c->r[0]); // 801CDC14
L_801CDC18:;
  c->r[0]=0u+0x00000000u; // 801CDC18
  W32(c->r[13]+0xFFFF9E84u,c->r[0]); // 801CDC1C
  W32(c->r[13]+0xFFFF9E88u,c->r[0]); // 801CDC20
L_801CDC24:;
  c->r[0]=R32(c->r[13]+0xFFFF9F0Cu); // 801CDC24
  W32(c->r[13]+0xFFFF849Cu,c->r[29]); // 801CDC28
  cmps(c,0,(int32_t)c->r[0],0); // 801CDC2C
  if (crb(c,2)) { goto L_801CDD08; } // 801CDC30
  c->r[29]=0u+0x00000001u; // 801CDC34
  goto L_801CDCF4; // 801CDC38
L_801CDC3C:;
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801CDC3C
  c->r[0]=cntlz(c->r[0]); // 801CDC40
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 801CDC44
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[29]<<((c->r[0])&31)); // 801CDC48
  cmps(c,0,(int32_t)c->r[26],16); // 801CDC4C
  if (crb(c,2)) { goto L_801CDCCC; } // 801CDC50
  if (!crb(c,0)) { goto L_801CDC88; } // 801CDC54
  cmps(c,0,(int32_t)c->r[26],4); // 801CDC58
  if (crb(c,2)) { goto L_801CDCBC; } // 801CDC5C
  if (!crb(c,0)) { goto L_801CDC7C; } // 801CDC60
  cmps(c,0,(int32_t)c->r[26],2); // 801CDC64
  if (crb(c,2)) { goto L_801CDCB4; } // 801CDC68
  if (!crb(c,0)) { goto L_801CDCE8; } // 801CDC6C
  cmps(c,0,(int32_t)c->r[26],1); // 801CDC70
  if (!crb(c,0)) { goto L_801CDCAC; } // 801CDC74
  goto L_801CDCE8; // 801CDC78
L_801CDC7C:;
  cmps(c,0,(int32_t)c->r[26],8); // 801CDC7C
  if (crb(c,2)) { goto L_801CDCC4; } // 801CDC80
  goto L_801CDCE8; // 801CDC84
L_801CDC88:;
  cmps(c,0,(int32_t)c->r[26],64); // 801CDC88
  if (crb(c,2)) { goto L_801CDCDC; } // 801CDC8C
  if (!crb(c,0)) { goto L_801CDCA0; } // 801CDC90
  cmps(c,0,(int32_t)c->r[26],32); // 801CDC94
  if (crb(c,2)) { goto L_801CDCD4; } // 801CDC98
  goto L_801CDCE8; // 801CDC9C
L_801CDCA0:;
  cmps(c,0,(int32_t)c->r[26],128); // 801CDCA0
  if (crb(c,2)) { goto L_801CDCE4; } // 801CDCA4
  goto L_801CDCE8; // 801CDCA8
L_801CDCAC:;
  c->lr=0x801CDCB0u; f_801D0AE8(c); // 801CDCAC
  goto L_801CDCE8; // 801CDCB0
L_801CDCB4:;
  c->lr=0x801CDCB8u; f_801D0B40(c); // 801CDCB4
  goto L_801CDCE8; // 801CDCB8
L_801CDCBC:;
  c->lr=0x801CDCC0u; f_801D0BA4(c); // 801CDCBC
  goto L_801CDCE8; // 801CDCC0
L_801CDCC4:;
  c->lr=0x801CDCC8u; f_801D0C10(c); // 801CDCC4
  goto L_801CDCE8; // 801CDCC8
L_801CDCCC:;
  c->lr=0x801CDCD0u; f_801D1B2C(c); // 801CDCCC
  goto L_801CDCE8; // 801CDCD0
L_801CDCD4:;
  c->lr=0x801CDCD8u; f_801D1B44(c); // 801CDCD4
  goto L_801CDCE8; // 801CDCD8
L_801CDCDC:;
  c->lr=0x801CDCE0u; f_801D1BA0(c); // 801CDCDC
  goto L_801CDCE8; // 801CDCE0
L_801CDCE4:;
  c->lr=0x801CDCE8u; f_801D1C34(c); // 801CDCE4
L_801CDCE8:;
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801CDCE8
  c->r[0]=c->r[0]&~c->r[26]; // 801CDCEC
  W32(c->r[13]+0xFFFF9F20u,c->r[0]); // 801CDCF0
L_801CDCF4:;
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801CDCF4
  cmps(c,0,(int32_t)c->r[0],0); // 801CDCF8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDC3C; } // 801CDCFC
  c->r[0]=0u+0x00000000u; // 801CDD00
  W32(c->r[13]+0xFFFF9F0Cu,c->r[0]); // 801CDD04
L_801CDD08:;
  c->r[0]=R32(c->r[13]+0xFFFF9EE4u); // 801CDD08
  cmps(c,0,(int32_t)c->r[0],0); // 801CDD0C
  if (crb(c,2)) { goto L_801CDD2C; } // 801CDD10
  c->r[3]=c->r[1]+0x00000010u; // 801CDD14
  c->lr=0x801CDD1Cu; f_801BAFF0(c); // 801CDD18
  c->r[12]=R32(c->r[13]+0xFFFF9EE4u); // 801CDD1C
  c->r[3]=R32(c->r[13]+0xFFFF9F14u); // 801CDD20
  c->ctr=c->r[12]; // 801CDD24
  if (true) { c->lr=0x801CDD2Cu; dispatch(c,c->ctr); } // 801CDD28
L_801CDD2C:;
  c->r[3]=c->r[13]+0xFFFF9EF0u; // 801CDD2C
  c->lr=0x801CDD34u; f_801C22BC(c); // 801CDD30
  c->r[3]=c->r[1]+0x00000010u; // 801CDD34
  c->lr=0x801CDD3Cu; f_801BAFF0(c); // 801CDD38
  c->r[3]=c->r[28]|c->r[28]; // 801CDD3C
  c->lr=0x801CDD44u; f_801BADC8(c); // 801CDD40
  c->r[0]=R32(c->r[13]+0xFFFF9E74u); // 801CDD44
  cmps(c,0,(int32_t)c->r[0],1); // 801CDD48
  if (!crb(c,2)) { goto L_801CDD74; } // 801CDD4C
  c->r[3]=0u+0x00000000u; // 801CDD50
  c->r[4]=0u+0x00000000u; // 801CDD54
  c->r[5]=0u+0x00000000u; // 801CDD58
  c->lr=0x801CDD60u; f_801C31FC(c); // 801CDD5C
  cmps(c,0,(int32_t)c->r[3],1); // 801CDD60
  if (!crb(c,2)) { goto L_801CDD74; } // 801CDD64
  c->r[0]=0u+0x00000000u; // 801CDD68
  W32(c->r[13]+0xFFFF9E74u,c->r[0]); // 801CDD6C
  W32(c->r[13]+0xFFFF9E84u,c->r[0]); // 801CDD70
L_801CDD74:;
  c->r[0]=0u+0x0000000Au; // 801CDD74
  c->r[3]=c->r[30]+0x00000148u; // 801CDD78
  c->ctr=c->r[0]; // 801CDD7C
L_801CDD80:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CDD80
  cmps(c,0,(int32_t)c->r[0],0); // 801CDD84
  if (!crb(c,2)) { goto L_801CDD98; } // 801CDD88
  c->r[0]=0u+0x00000000u; // 801CDD8C
  W32(c->r[30]+0x00000148u,c->r[0]); // 801CDD90
  goto L_801CDDA0; // 801CDD94
L_801CDD98:;
  c->r[3]=c->r[3]+0x00000004u; // 801CDD98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CDD80; } // 801CDD9C
L_801CDDA0:;
  c->r[0]=R32(c->r[13]+0xFFFF9EFCu); // 801CDDA0
  cmps(c,0,(int32_t)c->r[0],0); // 801CDDA4
  if (crb(c,2)) { goto L_801CDE18; } // 801CDDA8
  c->r[0]=R32(c->r[13]+0xFFFF9EF8u); // 801CDDAC
  cmps(c,0,(int32_t)c->r[0],0); // 801CDDB0
  if (crb(c,2)) { goto L_801CDE18; } // 801CDDB4
  c->r[0]=R32(c->r[30]+0x00000148u); // 801CDDB8
  cmps(c,0,(int32_t)c->r[0],0); // 801CDDBC
  if (crb(c,2)) { goto L_801CDE18; } // 801CDDC0
  c->r[0]=R32(c->r[13]+0xFFFF9F08u); // 801CDDC4
  cmps(c,0,(int32_t)c->r[0],1); // 801CDDC8
  if (!crb(c,2)) { goto L_801CDDEC; } // 801CDDCC
  c->r[3]=R32(c->r[13]+0xFFFF9E84u); // 801CDDD0
  c->r[0]=0u+0xFFFFFFFFu; // 801CDDD4
  cmpu(c,0,c->r[3],c->r[0]); // 801CDDD8
  if (!crb(c,0)) { goto L_801CDDEC; } // 801CDDDC
  c->r[3]=R32(c->r[13]+0xFFFF9E84u); // 801CDDE0
  c->r[0]=c->r[3]+0x00000001u; // 801CDDE4
  W32(c->r[13]+0xFFFF9E84u,c->r[0]); // 801CDDE8
L_801CDDEC:;
  c->r[0]=R32(c->r[13]+0xFFFF9F04u); // 801CDDEC
  cmps(c,0,(int32_t)c->r[0],1); // 801CDDF0
  if (!crb(c,2)) { goto L_801CDE58; } // 801CDDF4
  c->r[3]=R32(c->r[13]+0xFFFF9E88u); // 801CDDF8
  c->r[0]=0u+0xFFFFFFFFu; // 801CDDFC
  cmpu(c,0,c->r[3],c->r[0]); // 801CDE00
  if (!crb(c,0)) { goto L_801CDE58; } // 801CDE04
  c->r[3]=R32(c->r[13]+0xFFFF9E88u); // 801CDE08
  c->r[0]=c->r[3]+0x00000001u; // 801CDE0C
  W32(c->r[13]+0xFFFF9E88u,c->r[0]); // 801CDE10
  goto L_801CDE58; // 801CDE14
L_801CDE18:;
  c->r[3]=R32(c->r[13]+0xFFFF9E84u); // 801CDE18
  c->r[0]=R32(c->r[13]+0xFFFF9E78u); // 801CDE1C
  cmpu(c,0,c->r[3],c->r[0]); // 801CDE20
  if (crb(c,0)) { goto L_801CDE30; } // 801CDE24
  c->r[0]=0u+0x00000001u; // 801CDE28
  W32(c->r[13]+0xFFFF9EC8u,c->r[0]); // 801CDE2C
L_801CDE30:;
  c->r[3]=R32(c->r[13]+0xFFFF9E88u); // 801CDE30
  c->r[0]=R32(c->r[13]+0xFFFF9E80u); // 801CDE34
  cmpu(c,0,c->r[3],c->r[0]); // 801CDE38
  if (crb(c,0)) { goto L_801CDE44; } // 801CDE3C
  c->lr=0x801CDE44u; f_801CB4D4(c); // 801CDE40
L_801CDE44:;
  c->r[0]=0u+0x00000000u; // 801CDE44
  W32(c->r[13]+0xFFFF9E84u,c->r[0]); // 801CDE48
  W32(c->r[13]+0xFFFF9E88u,c->r[0]); // 801CDE4C
  c->r[0]=R32(c->r[13]+0xFFFF9E7Cu); // 801CDE50
  W32(c->r[13]+0xFFFF9E78u,c->r[0]); // 801CDE54
L_801CDE58:;
  c->r[3]=R32(c->r[13]+0xFFFF84A0u); // 801CDE58
  c->r[0]=R32(c->r[13]+0xFFFF9F08u); // 801CDE5C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CDE60
  if (crb(c,2)) { goto L_801CDE9C; } // 801CDE64
  c->r[0]=R32(c->r[13]+0xFFFF9F08u); // 801CDE68
  cmps(c,0,(int32_t)c->r[0],0); // 801CDE6C
  if (!crb(c,2)) { goto L_801CDE8C; } // 801CDE70
  c->r[3]=R32(c->r[13]+0xFFFF9E84u); // 801CDE74
  c->r[0]=R32(c->r[13]+0xFFFF9E78u); // 801CDE78
  cmpu(c,0,c->r[3],c->r[0]); // 801CDE7C
  if (crb(c,0)) { goto L_801CDE8C; } // 801CDE80
  c->r[0]=0u+0x00000001u; // 801CDE84
  W32(c->r[13]+0xFFFF9EC8u,c->r[0]); // 801CDE88
L_801CDE8C:;
  c->r[0]=0u+0x00000000u; // 801CDE8C
  W32(c->r[13]+0xFFFF9E84u,c->r[0]); // 801CDE90
  c->r[0]=R32(c->r[13]+0xFFFF9E7Cu); // 801CDE94
  W32(c->r[13]+0xFFFF9E78u,c->r[0]); // 801CDE98
L_801CDE9C:;
  c->r[3]=R32(c->r[13]+0xFFFF9E84u); // 801CDE9C
  c->r[0]=R32(c->r[13]+0xFFFF9E78u); // 801CDEA0
  cmpu(c,0,c->r[3],c->r[0]); // 801CDEA4
  if (!crb(c,2)) { goto L_801CDEB4; } // 801CDEA8
  c->r[0]=0u+0x00000001u; // 801CDEAC
  W32(c->r[13]+0xFFFF9EC4u,c->r[0]); // 801CDEB0
L_801CDEB4:;
  c->r[0]=R32(c->r[13]+0xFFFF9EC8u); // 801CDEB4
  cmps(c,0,(int32_t)c->r[0],0); // 801CDEB8
  if (crb(c,2)) { goto L_801CDEE4; } // 801CDEBC
  c->r[3]=0u+0x00000000u; // 801CDEC0
  c->r[4]=0u+0x00000002u; // 801CDEC4
  c->r[5]=0u+0x00000002u; // 801CDEC8
  c->lr=0x801CDED0u; f_801C31FC(c); // 801CDECC
  cmps(c,0,(int32_t)c->r[3],1); // 801CDED0
  if (!crb(c,2)) { goto L_801CDEE4; } // 801CDED4
  c->r[0]=0u+0x00000000u; // 801CDED8
  W32(c->r[13]+0xFFFF9EC8u,c->r[0]); // 801CDEDC
  W32(c->r[13]+0xFFFF9E8Cu,c->r[0]); // 801CDEE0
L_801CDEE4:;
  c->r[0]=R32(c->r[13]+0xFFFF9EC4u); // 801CDEE4
  cmps(c,0,(int32_t)c->r[0],0); // 801CDEE8
  if (crb(c,2)) { goto L_801CDF18; } // 801CDEEC
  c->r[3]=0u+0x00000001u; // 801CDEF0
  c->r[4]=0u+0x00000002u; // 801CDEF4
  c->r[5]=0u+0x00000002u; // 801CDEF8
  c->lr=0x801CDF00u; f_801C31FC(c); // 801CDEFC
  cmps(c,0,(int32_t)c->r[3],1); // 801CDF00
  if (!crb(c,2)) { goto L_801CDF18; } // 801CDF04
  c->r[3]=0u+0x00000000u; // 801CDF08
  c->r[0]=0u+0x00000001u; // 801CDF0C
  W32(c->r[13]+0xFFFF9EC4u,c->r[3]); // 801CDF10
  W32(c->r[13]+0xFFFF9E8Cu,c->r[0]); // 801CDF14
L_801CDF18:;
  c->r[3]=R32(c->r[13]+0xFFFF84A4u); // 801CDF18
  c->r[0]=R32(c->r[13]+0xFFFF9F04u); // 801CDF1C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CDF20
  if (crb(c,2)) { goto L_801CDF50; } // 801CDF24
  c->r[0]=R32(c->r[13]+0xFFFF9F04u); // 801CDF28
  cmps(c,0,(int32_t)c->r[0],0); // 801CDF2C
  if (!crb(c,2)) { goto L_801CDF48; } // 801CDF30
  c->r[3]=R32(c->r[13]+0xFFFF9E88u); // 801CDF34
  c->r[0]=R32(c->r[13]+0xFFFF9E80u); // 801CDF38
  cmpu(c,0,c->r[3],c->r[0]); // 801CDF3C
  if (crb(c,0)) { goto L_801CDF48; } // 801CDF40
  c->lr=0x801CDF48u; f_801CB4D4(c); // 801CDF44
L_801CDF48:;
  c->r[0]=0u+0x00000000u; // 801CDF48
  W32(c->r[13]+0xFFFF9E88u,c->r[0]); // 801CDF4C
L_801CDF50:;
  c->r[3]=R32(c->r[13]+0xFFFF9E88u); // 801CDF50
  c->r[0]=R32(c->r[13]+0xFFFF9E80u); // 801CDF54
  cmpu(c,0,c->r[3],c->r[0]); // 801CDF58
  if (!crb(c,2)) { goto L_801CDF70; } // 801CDF5C
  c->r[3]=0u+0x80570000u; // 801CDF60
  c->r[4]=0u+0x00000000u; // 801CDF64
  c->r[3]=c->r[3]+0xFFFFEFB0u; // 801CDF68
  c->lr=0x801CDF70u; f_801CB4CC(c); // 801CDF6C
L_801CDF70:;
  c->r[0]=0u+0x00000001u; // 801CDF70
  c->r[3]=c->r[30]+0x00000148u; // 801CDF74
  W32(c->r[13]+0xFFFF9EFCu,c->r[0]); // 801CDF78
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 801CDF7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CDF80
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CDF84
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CDF88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CDF8C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801CDF90
  W32(c->r[3]+0x00000014u,c->r[0]); // 801CDF94
  W32(c->r[3]+0x00000018u,c->r[0]); // 801CDF98
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801CDF9C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CDFA0
  W32(c->r[3]+0x00000024u,c->r[0]); // 801CDFA4
  c->r[5]=R32(c->r[13]+0xFFFF9F08u); // 801CDFA8
  c->r[4]=R32(c->r[13]+0xFFFF9F04u); // 801CDFAC
  c->r[3]=R32(c->r[13]+0xFFFF9E7Cu); // 801CDFB0
  c->r[0]=R32(c->r[13]+0xFFFF9E84u); // 801CDFB4
  W32(c->r[13]+0xFFFF84A0u,c->r[5]); // 801CDFB8
  cmpu(c,0,c->r[3],c->r[0]); // 801CDFBC
  W32(c->r[13]+0xFFFF84A4u,c->r[4]); // 801CDFC0
  if (!crb(c,1)) { goto L_801CDFDC; } // 801CDFC4
  c->r[0]=R32(c->r[13]+0xFFFF9E8Cu); // 801CDFC8
  cmps(c,0,(int32_t)c->r[0],0); // 801CDFCC
  if (!crb(c,2)) { goto L_801CDFDC; } // 801CDFD0
  c->r[0]=R32(c->r[13]+0xFFFF9E7Cu); // 801CDFD4
  W32(c->r[13]+0xFFFF9E78u,c->r[0]); // 801CDFD8
L_801CDFDC:;
  c->r[11]=c->r[1]+0x000002F0u; // 801CDFDC
  c->lr=0x801CDFE4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDFE0
  c->r[0]=R32(c->r[1]+0x000002F4u); // 801CDFE4
  c->lr=c->r[0]; // 801CDFE8
  c->r[1]=c->r[1]+0x000002F0u; // 801CDFEC
  return; // 801CDFF0
}

// VISetPreRetraceCallback
void f_801CDFF4(Ctx* __restrict c) {
  trace_call(0x801CDFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDFF4
  c->r[0]=c->lr; // 801CDFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDFFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE000
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE004
  c->r[30]=c->r[3]|c->r[3]; // 801CE008
  c->r[31]=R32(c->r[13]+0xFFFF9EE8u); // 801CE00C
  c->lr=0x801CE014u; f_801BE74C(c); // 801CE010
  W32(c->r[13]+0xFFFF9EE8u,c->r[30]); // 801CE014
  c->lr=0x801CE01Cu; f_801BE774(c); // 801CE018
  c->r[3]=c->r[31]|c->r[31]; // 801CE01C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE020
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE024
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE028
  c->lr=c->r[0]; // 801CE02C
  c->r[1]=c->r[1]+0x00000010u; // 801CE030
  return; // 801CE034
}

// VISetPostRetraceCallback
void f_801CE038(Ctx* __restrict c) {
  trace_call(0x801CE038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE038
  c->r[0]=c->lr; // 801CE03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE044
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE048
  c->r[30]=c->r[3]|c->r[3]; // 801CE04C
  c->r[31]=R32(c->r[13]+0xFFFF9EE4u); // 801CE050
  c->lr=0x801CE058u; f_801BE74C(c); // 801CE054
  W32(c->r[13]+0xFFFF9EE4u,c->r[30]); // 801CE058
  c->lr=0x801CE060u; f_801BE774(c); // 801CE05C
  c->r[3]=c->r[31]|c->r[31]; // 801CE060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE064
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE068
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE06C
  c->lr=c->r[0]; // 801CE070
  c->r[1]=c->r[1]+0x00000010u; // 801CE074
  return; // 801CE078
}

// getTiming
void f_801CE07C(Ctx* __restrict c) {
  trace_call(0x801CE07Cu);
  cmpu(c,0,c->r[3],0x0000001Eu); // 801CE07C
  if (crb(c,1)) { goto L_801CE17C; } // 801CE080
  c->r[4]=0u+0x804B0000u; // 801CE084
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CE088
  c->r[4]=c->r[4]+0x00002368u; // 801CE08C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CE090
  c->ctr=c->r[4]; // 801CE094
  if (true) { switch (c->ctr) { case 0x801CE09Cu: goto L_801CE09C; case 0x801CE0A8u: goto L_801CE0A8; case 0x801CE0B8u: goto L_801CE0B8; case 0x801CE0C8u: goto L_801CE0C8; case 0x801CE0D8u: goto L_801CE0D8; case 0x801CE0E4u: goto L_801CE0E4; case 0x801CE0F4u: goto L_801CE0F4; case 0x801CE104u: goto L_801CE104; case 0x801CE114u: goto L_801CE114; case 0x801CE124u: goto L_801CE124; case 0x801CE134u: goto L_801CE134; case 0x801CE144u: goto L_801CE144; case 0x801CE154u: goto L_801CE154; case 0x801CE164u: goto L_801CE164; case 0x801CE174u: goto L_801CE174; case 0x801CE17Cu: goto L_801CE17C; default: break; } dispatch(c,c->ctr); return; } // 801CE098
L_801CE09C:;
  c->r[3]=0u+0x804B0000u; // 801CE09C
  c->r[3]=c->r[3]+0x00002160u; // 801CE0A0
  return; // 801CE0A4
L_801CE0A8:;
  c->r[3]=0u+0x804B0000u; // 801CE0A8
  c->r[3]=c->r[3]+0x00002160u; // 801CE0AC
  c->r[3]=c->r[3]+0x00000026u; // 801CE0B0
  return; // 801CE0B4
L_801CE0B8:;
  c->r[3]=0u+0x804B0000u; // 801CE0B8
  c->r[3]=c->r[3]+0x00002160u; // 801CE0BC
  c->r[3]=c->r[3]+0x0000004Cu; // 801CE0C0
  return; // 801CE0C4
L_801CE0C8:;
  c->r[3]=0u+0x804B0000u; // 801CE0C8
  c->r[3]=c->r[3]+0x00002160u; // 801CE0CC
  c->r[3]=c->r[3]+0x00000072u; // 801CE0D0
  return; // 801CE0D4
L_801CE0D8:;
  c->r[3]=0u+0x804B0000u; // 801CE0D8
  c->r[3]=c->r[3]+0x00002160u; // 801CE0DC
  return; // 801CE0E0
L_801CE0E4:;
  c->r[3]=0u+0x804B0000u; // 801CE0E4
  c->r[3]=c->r[3]+0x00002160u; // 801CE0E8
  c->r[3]=c->r[3]+0x00000026u; // 801CE0EC
  return; // 801CE0F0
L_801CE0F4:;
  c->r[3]=0u+0x804B0000u; // 801CE0F4
  c->r[3]=c->r[3]+0x00002160u; // 801CE0F8
  c->r[3]=c->r[3]+0x00000098u; // 801CE0FC
  return; // 801CE100
L_801CE104:;
  c->r[3]=0u+0x804B0000u; // 801CE104
  c->r[3]=c->r[3]+0x00002160u; // 801CE108
  c->r[3]=c->r[3]+0x000000BEu; // 801CE10C
  return; // 801CE110
L_801CE114:;
  c->r[3]=0u+0x804B0000u; // 801CE114
  c->r[3]=c->r[3]+0x00002160u; // 801CE118
  c->r[3]=c->r[3]+0x000000E4u; // 801CE11C
  return; // 801CE120
L_801CE124:;
  c->r[3]=0u+0x804B0000u; // 801CE124
  c->r[3]=c->r[3]+0x00002160u; // 801CE128
  c->r[3]=c->r[3]+0x0000010Au; // 801CE12C
  return; // 801CE130
L_801CE134:;
  c->r[3]=0u+0x804B0000u; // 801CE134
  c->r[3]=c->r[3]+0x00002160u; // 801CE138
  c->r[3]=c->r[3]+0x0000004Cu; // 801CE13C
  return; // 801CE140
L_801CE144:;
  c->r[3]=0u+0x804B0000u; // 801CE144
  c->r[3]=c->r[3]+0x00002160u; // 801CE148
  c->r[3]=c->r[3]+0x00000072u; // 801CE14C
  return; // 801CE150
L_801CE154:;
  c->r[3]=0u+0x804B0000u; // 801CE154
  c->r[3]=c->r[3]+0x00002160u; // 801CE158
  c->r[3]=c->r[3]+0x00000130u; // 801CE15C
  return; // 801CE160
L_801CE164:;
  c->r[3]=0u+0x804B0000u; // 801CE164
  c->r[3]=c->r[3]+0x00002160u; // 801CE168
  c->r[3]=c->r[3]+0x00000156u; // 801CE16C
  return; // 801CE170
L_801CE174:;
  c->r[3]=R32(c->r[13]+0xFFFF9EBCu); // 801CE174
  return; // 801CE178
L_801CE17C:;
  c->r[3]=0u+0x00000000u; // 801CE17C
  return; // 801CE180
}

// __VIInit
void f_801CE184(Ctx* __restrict c) {
  trace_call(0x801CE184u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE184
  c->r[0]=c->lr; // 801CE188
  c->r[4]=0u+0x80000000u; // 801CE18C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE190
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE194
  c->r[31]=rotl(c->r[3],0)&0x00000003u; // 801CE198
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE19C
  c->r[30]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801CE1A0
  W32(c->r[4]+0x000000CCu,c->r[30]); // 801CE1A4
  c->lr=0x801CE1ACu; f_801CE07C(c); // 801CE1A8
  c->r[5]=0u+0x00000002u; // 801CE1AC
  c->r[4]=0u+0xCC000000u; // 801CE1B0
  c->r[0]=0u+0x00000000u; // 801CE1B4
  W16(c->r[4]+0x00002002u,c->r[5]); // 801CE1B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CE1BC
  goto L_801CE1D0; // 801CE1C0
L_801CE1C4:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801CE1C4
  c->r[0]=c->r[4]+0x00000001u; // 801CE1C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CE1CC
L_801CE1D0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CE1D0
  cmpu(c,0,c->r[0],0x000003E8u); // 801CE1D4
  if (crb(c,0)) { IRQCHK(c); goto L_801CE1C4; } // 801CE1D8
  c->r[5]=0u+0xCC000000u; // 801CE1DC
  c->r[0]=0u+0x00000000u; // 801CE1E0
  W16(c->r[5]+0x00002002u,c->r[0]); // 801CE1E4
  c->r[0]=R16(c->r[3]+0x0000001Au); // 801CE1E8
  W16(c->r[5]+0x00002006u,c->r[0]); // 801CE1EC
  c->r[4]=R8(c->r[3]+0x0000001Du); // 801CE1F0
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 801CE1F4
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801CE1F8
  W16(c->r[5]+0x00002004u,c->r[0]); // 801CE1FC
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801CE200
  c->r[4]=R8(c->r[3]+0x0000001Cu); // 801CE204
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 801CE208
  c->r[0]=c->r[4]|c->r[0]; // 801CE20C
  W16(c->r[5]+0x0000200Au,c->r[0]); // 801CE210
  c->r[0]=R16(c->r[3]+0x00000020u); // 801CE214
  c->r[0]=rotl(c->r[0],1)&0x0000FFFEu; // 801CE218
  W16(c->r[5]+0x00002008u,c->r[0]); // 801CE21C
  c->r[0]=R32(c->r[13]+0xFFFF9EE0u); // 801CE220
  cmps(c,0,(int32_t)c->r[0],0); // 801CE224
  if (!crb(c,2)) { goto L_801CE240; } // 801CE228
  c->r[0]=R8(c->r[3]+0x00000022u); // 801CE22C
  c->r[0]=c->r[0]|0x00008000u; // 801CE230
  W16(c->r[5]+0x00002072u,c->r[0]); // 801CE234
  c->r[0]=R16(c->r[3]+0x00000024u); // 801CE238
  W16(c->r[5]+0x00002074u,c->r[0]); // 801CE23C
L_801CE240:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CE240
  c->r[4]=0u+0xCC000000u; // 801CE244
  c->r[6]=0u+0x00002828u; // 801CE248
  c->r[5]=0u+0x00000001u; // 801CE24C
  W16(c->r[4]+0x00002000u,c->r[0]); // 801CE250
  c->r[0]=0u+0x00001001u; // 801CE254
  cmps(c,0,(int32_t)c->r[30],4); // 801CE258
  c->r[8]=R16(c->r[3]+0x00000002u); // 801CE25C
  c->r[7]=R16(c->r[3]+0x00000004u); // 801CE260
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801CE264
  c->r[7]=c->r[7]+c->r[8]; // 801CE268
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 801CE26C
  W16(c->r[4]+0x0000200Eu,c->r[7]); // 801CE270
  c->r[7]=R16(c->r[3]+0x00000008u); // 801CE274
  c->r[7]=c->r[7]+0x00000002u; // 801CE278
  W16(c->r[4]+0x0000200Cu,c->r[7]); // 801CE27C
  c->r[8]=R16(c->r[3]+0x00000002u); // 801CE280
  c->r[7]=R16(c->r[3]+0x00000006u); // 801CE284
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 801CE288
  c->r[7]=c->r[7]+c->r[8]; // 801CE28C
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 801CE290
  W16(c->r[4]+0x00002012u,c->r[7]); // 801CE294
  c->r[7]=R16(c->r[3]+0x0000000Au); // 801CE298
  c->r[7]=c->r[7]+0x00000002u; // 801CE29C
  W16(c->r[4]+0x00002010u,c->r[7]); // 801CE2A0
  c->r[7]=R16(c->r[3]+0x00000010u); // 801CE2A4
  c->r[8]=R8(c->r[3]+0x0000000Cu); // 801CE2A8
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CE2AC
  c->r[7]=c->r[8]|c->r[7]; // 801CE2B0
  W16(c->r[4]+0x00002016u,c->r[7]); // 801CE2B4
  c->r[7]=R16(c->r[3]+0x00000014u); // 801CE2B8
  c->r[8]=R8(c->r[3]+0x0000000Eu); // 801CE2BC
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CE2C0
  c->r[7]=c->r[8]|c->r[7]; // 801CE2C4
  W16(c->r[4]+0x00002014u,c->r[7]); // 801CE2C8
  c->r[7]=R16(c->r[3]+0x00000012u); // 801CE2CC
  c->r[8]=R8(c->r[3]+0x0000000Du); // 801CE2D0
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CE2D4
  c->r[7]=c->r[8]|c->r[7]; // 801CE2D8
  W16(c->r[4]+0x0000201Au,c->r[7]); // 801CE2DC
  c->r[7]=R16(c->r[3]+0x00000016u); // 801CE2E0
  c->r[8]=R8(c->r[3]+0x0000000Fu); // 801CE2E4
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CE2E8
  c->r[7]=c->r[8]|c->r[7]; // 801CE2EC
  W16(c->r[4]+0x00002018u,c->r[7]); // 801CE2F0
  W16(c->r[4]+0x00002048u,c->r[6]); // 801CE2F4
  W16(c->r[4]+0x00002036u,c->r[5]); // 801CE2F8
  W16(c->r[4]+0x00002034u,c->r[0]); // 801CE2FC
  c->r[0]=R16(c->r[3]+0x00000018u); // 801CE300
  c->r[3]=R16(c->r[3]+0x0000001Au); // 801CE304
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801CE308
  c->r[0]=c->r[3]+0x00000001u; // 801CE30C
  c->r[5]=c->r[5]+0x00000001u; // 801CE310
  W16(c->r[4]+0x00002032u,c->r[0]); // 801CE314
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801CE318
  c->r[0]=c->r[3]|0x00001000u; // 801CE31C
  W16(c->r[4]+0x00002030u,c->r[0]); // 801CE320
  if (!crb(c,0)) { goto L_801CE338; } // 801CE324
  cmps(c,0,(int32_t)c->r[30],1); // 801CE328
  if (!crb(c,0)) { goto L_801CE33C; } // 801CE32C
  goto L_801CE338; // 801CE330
  goto L_801CE33C; // 801CE334
L_801CE338:;
  c->r[30]=0u+0x00000000u; // 801CE338
L_801CE33C:;
  cmpu(c,0,c->r[31],0x00000001u); // 801CE33C
  if (crb(c,1)) { goto L_801CE364; } // 801CE340
  c->r[0]=rotl(c->r[30],8)&0xFFFFFF00u; // 801CE344
  c->r[3]=0u+0xCC000000u; // 801CE348
  c->r[4]=c->r[0]|0x00000001u; // 801CE34C
  c->r[4]=(rotl(c->r[31],2)&0x00000004u)|(c->r[4]&~0x00000004u); // 801CE350
  c->r[0]=0u+0x00000000u; // 801CE354
  W16(c->r[3]+0x00002002u,c->r[4]); // 801CE358
  W16(c->r[3]+0x0000206Cu,c->r[0]); // 801CE35C
  goto L_801CE37C; // 801CE360
L_801CE364:;
  c->r[0]=rotl(c->r[30],8)&0xFFFFFF00u; // 801CE364
  c->r[3]=0u+0xCC000000u; // 801CE368
  c->r[4]=c->r[0]|0x00000005u; // 801CE36C
  W16(c->r[3]+0x00002002u,c->r[4]); // 801CE370
  c->r[0]=0u+0x00000001u; // 801CE374
  W16(c->r[3]+0x0000206Cu,c->r[0]); // 801CE378
L_801CE37C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE37C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE380
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE384
  c->lr=c->r[0]; // 801CE388
  c->r[1]=c->r[1]+0x00000020u; // 801CE38C
  return; // 801CE390
}

// VIInit
void f_801CE394(Ctx* __restrict c) {
  trace_call(0x801CE394u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE394
  c->r[0]=c->lr; // 801CE398
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CE39C
  c->r[11]=c->r[1]+0x00000030u; // 801CE3A0
  c->lr=0x801CE3A8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE3A4
  c->r[0]=R32(c->r[13]+0xFFFF9E68u); // 801CE3A8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE3AC
  if (!crb(c,2)) { goto L_801CE8C4; } // 801CE3B0
  c->r[3]=R32(c->r[13]+0xFFFF8490u); // 801CE3B4
  c->lr=0x801CE3BCu; f_801B96A0(c); // 801CE3B8
  c->r[0]=0u+0x00000001u; // 801CE3BC
  c->r[3]=0u+0xCC000000u; // 801CE3C0
  W32(c->r[13]+0xFFFF9E68u,c->r[0]); // 801CE3C4
  c->r[0]=R16(c->r[3]+0x00002002u); // 801CE3C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CE3CC
  if (!crb(c,2)) { goto L_801CE3DC; } // 801CE3D0
  c->r[3]=0u+0x00000000u; // 801CE3D4
  c->lr=0x801CE3DCu; f_801CE184(c); // 801CE3D8
L_801CE3DC:;
  c->r[4]=0u+0x804B0000u; // 801CE3DC
  c->r[29]=0u+0x00000000u; // 801CE3E0
  c->r[3]=c->r[4]+0x00002304u; // 801CE3E4
  W32(c->r[13]+0xFFFF9F14u,c->r[29]); // 801CE3E8
  c->r[5]=R16(c->r[3]+0x00000002u); // 801CE3EC
  c->r[30]=0u+0xCC000000u; // 801CE3F0
  c->r[4]=R16(c->r[4]+0x00002304u); // 801CE3F4
  c->r[0]=rotl(c->r[5],10)&0x0000FC00u; // 801CE3F8
  W32(c->r[13]+0xFFFF9EA4u,c->r[29]); // 801CE3FC
  c->r[0]=c->r[4]|c->r[0]; // 801CE400
  c->r[4]=sraw(c,c->r[5],6); // 801CE404
  W32(c->r[13]+0xFFFF9EA0u,c->r[29]); // 801CE408
  W32(c->r[13]+0xFFFF9EB4u,c->r[29]); // 801CE40C
  W32(c->r[13]+0xFFFF9EB0u,c->r[29]); // 801CE410
  W32(c->r[13]+0xFFFF9E98u,c->r[29]); // 801CE414
  W32(c->r[13]+0xFFFF9EA8u,c->r[29]); // 801CE418
  W32(c->r[13]+0xFFFF9F10u,c->r[29]); // 801CE41C
  W32(c->r[13]+0xFFFF9F0Cu,c->r[29]); // 801CE420
  W16(c->r[30]+0x0000204Eu,c->r[0]); // 801CE424
  c->r[0]=R16(c->r[3]+0x00000004u); // 801CE428
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CE42C
  c->r[0]=c->r[4]|c->r[0]; // 801CE430
  W16(c->r[30]+0x0000204Cu,c->r[0]); // 801CE434
  c->r[4]=R16(c->r[3]+0x00000008u); // 801CE438
  c->r[5]=R16(c->r[3]+0x00000006u); // 801CE43C
  c->r[0]=rotl(c->r[4],10)&0x0000FC00u; // 801CE440
  c->r[4]=sraw(c,c->r[4],6); // 801CE444
  c->r[0]=c->r[5]|c->r[0]; // 801CE448
  W16(c->r[30]+0x00002052u,c->r[0]); // 801CE44C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801CE450
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CE454
  c->r[0]=c->r[4]|c->r[0]; // 801CE458
  W16(c->r[30]+0x00002050u,c->r[0]); // 801CE45C
  c->r[4]=R16(c->r[3]+0x0000000Eu); // 801CE460
  c->r[5]=R16(c->r[3]+0x0000000Cu); // 801CE464
  c->r[0]=rotl(c->r[4],10)&0x0000FC00u; // 801CE468
  c->r[4]=sraw(c,c->r[4],6); // 801CE46C
  c->r[0]=c->r[5]|c->r[0]; // 801CE470
  W16(c->r[30]+0x00002056u,c->r[0]); // 801CE474
  c->r[0]=R16(c->r[3]+0x00000010u); // 801CE478
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CE47C
  c->r[0]=c->r[4]|c->r[0]; // 801CE480
  W16(c->r[30]+0x00002054u,c->r[0]); // 801CE484
  c->r[0]=R16(c->r[3]+0x00000014u); // 801CE488
  c->r[4]=R16(c->r[3]+0x00000012u); // 801CE48C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801CE490
  c->r[0]=c->r[4]|c->r[0]; // 801CE494
  W16(c->r[30]+0x0000205Au,c->r[0]); // 801CE498
  c->r[0]=R16(c->r[3]+0x00000018u); // 801CE49C
  c->r[4]=R16(c->r[3]+0x00000016u); // 801CE4A0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801CE4A4
  c->r[0]=c->r[4]|c->r[0]; // 801CE4A8
  W16(c->r[30]+0x00002058u,c->r[0]); // 801CE4AC
  c->r[4]=R16(c->r[3]+0x0000001Cu); // 801CE4B0
  c->r[0]=0u+0x00000280u; // 801CE4B4
  c->r[5]=R16(c->r[3]+0x0000001Au); // 801CE4B8
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE4BC
  c->r[4]=c->r[5]|c->r[4]; // 801CE4C0
  W16(c->r[30]+0x0000205Eu,c->r[4]); // 801CE4C4
  c->r[4]=R16(c->r[3]+0x00000020u); // 801CE4C8
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 801CE4CC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE4D0
  c->r[4]=c->r[5]|c->r[4]; // 801CE4D4
  W16(c->r[30]+0x0000205Cu,c->r[4]); // 801CE4D8
  c->r[4]=R16(c->r[3]+0x00000024u); // 801CE4DC
  c->r[5]=R16(c->r[3]+0x00000022u); // 801CE4E0
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE4E4
  c->r[4]=c->r[5]|c->r[4]; // 801CE4E8
  W16(c->r[30]+0x00002062u,c->r[4]); // 801CE4EC
  c->r[4]=R16(c->r[3]+0x00000028u); // 801CE4F0
  c->r[5]=R16(c->r[3]+0x00000026u); // 801CE4F4
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE4F8
  c->r[4]=c->r[5]|c->r[4]; // 801CE4FC
  W16(c->r[30]+0x00002060u,c->r[4]); // 801CE500
  c->r[4]=R16(c->r[3]+0x0000002Cu); // 801CE504
  c->r[5]=R16(c->r[3]+0x0000002Au); // 801CE508
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE50C
  c->r[4]=c->r[5]|c->r[4]; // 801CE510
  W16(c->r[30]+0x00002066u,c->r[4]); // 801CE514
  c->r[4]=R16(c->r[3]+0x00000030u); // 801CE518
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 801CE51C
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801CE520
  c->r[3]=c->r[5]|c->r[3]; // 801CE524
  W16(c->r[30]+0x00002064u,c->r[3]); // 801CE528
  W16(c->r[30]+0x00002070u,c->r[0]); // 801CE52C
  c->lr=0x801CE534u; f_80209890(c); // 801CE530
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801CE534
  W16(c->r[13]+0xFFFF9E96u,c->r[29]); // 801CE538
  c->r[3]=0u+0x80000000u; // 801CE53C
  W16(c->r[13]+0xFFFF9E94u,c->r[0]); // 801CE540
  c->r[24]=R32(c->r[3]+0x000000CCu); // 801CE544
  c->r[29]=R16(c->r[30]+0x00002002u); // 801CE548
  c->lr=0x801CE550u; f_801BE74C(c); // 801CE54C
  c->r[0]=R16(c->r[30]+0x0000206Cu); // 801CE550
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801CE554
  cmpu(c,0,c->r[0],0x00000001u); // 801CE558
  if (!crb(c,2)) { goto L_801CE568; } // 801CE55C
  c->r[27]=0u+0x00000002u; // 801CE560
  goto L_801CE57C; // 801CE564
L_801CE568:;
  c->r[0]=R16(c->r[30]+0x00002002u); // 801CE568
  c->r[4]=rotl(c->r[0],30)&0x00000001u; // 801CE56C
  c->r[0]=0u-c->r[4]; // 801CE570
  c->r[0]=c->r[0]|c->r[4]; // 801CE574
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 801CE578
L_801CE57C:;
  c->lr=0x801CE580u; f_801BE774(c); // 801CE57C
  c->r[3]=0u+0x80570000u; // 801CE580
  cmpu(c,0,c->r[24],0x00000005u); // 801CE584
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CE588
  c->r[0]=rotl(c->r[29],24)&0x00000003u; // 801CE58C
  W32(c->r[3]+0x00000024u,c->r[27]); // 801CE590
  W32(c->r[3]+0x00000028u,c->r[0]); // 801CE594
  if (crb(c,2)) { goto L_801CE5AC; } // 801CE598
  cmpu(c,0,c->r[24],0x00000001u); // 801CE59C
  if (!crb(c,2)) { goto L_801CE5BC; } // 801CE5A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CE5A4
  if (!crb(c,2)) { goto L_801CE5BC; } // 801CE5A8
L_801CE5AC:;
  c->r[3]=0u+0x80570000u; // 801CE5AC
  c->r[0]=0u+0x00000005u; // 801CE5B0
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CE5B4
  W32(c->r[3]+0x00000028u,c->r[0]); // 801CE5B8
L_801CE5BC:;
  c->r[30]=0u+0x80570000u; // 801CE5BC
  c->r[31]=c->r[30]+0xFFFFF470u; // 801CE5C0
  c->r[5]=R32(c->r[31]+0x00000028u); // 801CE5C4
  c->r[0]=R32(c->r[31]+0x00000024u); // 801CE5C8
  c->r[4]=c->r[5]+0xFFFFFFFDu; // 801CE5CC
  c->r[3]=addc(c,~c->r[5],0x00000003u,1); // 801CE5D0
  c->r[3]=~(c->r[4]|c->r[3]); // 801CE5D4
  c->r[3]=sraw(c,c->r[3],31); // 801CE5D8
  c->r[3]=c->r[5]&~c->r[3]; // 801CE5DC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801CE5E0
  c->r[3]=c->r[3]+c->r[0]; // 801CE5E4
  c->lr=0x801CE5ECu; f_801CE07C(c); // 801CE5E8
  c->r[7]=0u+0x00000280u; // 801CE5EC
  c->r[8]=R32(c->r[31]+0x00000028u); // 801CE5F0
  c->r[4]=0u+0x80570000u; // 801CE5F4
  W32(c->r[31]+0x00000054u,c->r[3]); // 801CE5F8
  c->r[6]=addc(c,~c->r[7],0x000002D0u,1); // 801CE5FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E94u); // 801CE600
  c->r[4]=c->r[4]+0xFFFFF3F8u; // 801CE604
  W32(c->r[13]+0xFFFF9EDCu,c->r[3]); // 801CE608
  c->r[5]=rotl(c->r[6],1)&0x00000001u; // 801CE60C
  W16(c->r[4]+0x00000002u,c->r[29]); // 801CE610
  c->r[5]=c->r[5]+c->r[6]; // 801CE614
  c->r[5]=sraw(c,c->r[5],1); // 801CE618
  c->r[4]=0u+0x00000000u; // 801CE61C
  W32(c->r[13]+0xFFFF9ED8u,c->r[8]); // 801CE620
  c->r[6]=c->r[5]+c->r[0]; // 801CE624
  c->r[9]=addc(c,~c->r[7],0x000002D0u,1); // 801CE628
  W16(c->r[31]+0x00000004u,c->r[7]); // 801CE62C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[9]); // 801CE630
  c->r[0]=R16(c->r[3]+0x00000002u); // 801CE634
  c->r[0]=rotl(c->r[0],1)&0x0000FFFEu; // 801CE638
  W16(c->r[30]+0xFFFFF470u,c->r[5]); // 801CE63C
  W16(c->r[31]+0x00000006u,c->r[0]); // 801CE640
  W16(c->r[31]+0x00000002u,c->r[4]); // 801CE644
  c->r[7]=R16(c->r[3]+0x00000002u); // 801CE648
  if (!crb(c,1)) { goto L_801CE654; } // 801CE64C
  goto L_801CE65C; // 801CE650
L_801CE654:;
  c->r[0]=sraw(c,c->r[6],31); // 801CE654
  c->r[9]=c->r[6]&~c->r[0]; // 801CE658
L_801CE65C:;
  c->r[5]=0u+0x80570000u; // 801CE65C
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E96u); // 801CE660
  c->r[5]=c->r[5]+0xFFFFF470u; // 801CE664
  c->r[6]=R16(c->r[5]+0x00000002u); // 801CE668
  c->r[4]=R32(c->r[5]+0x00000020u); // 801CE66C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 801CE670
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 801CE674
  c->r[10]=c->r[0]+c->r[8]; // 801CE678
  W16(c->r[5]+0x00000008u,c->r[9]); // 801CE67C
  c->r[0]=cntlz(c->r[4]); // 801CE680
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CE684
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801CE688
  c->r[0]=c->r[6]|c->r[6]; // 801CE68C
  c->r[5]=c->r[4]+0x00000001u; // 801CE690
  if (!crb(c,1)) { goto L_801CE69C; } // 801CE694
  c->r[0]=c->r[10]|c->r[10]; // 801CE698
L_801CE69C:;
  c->r[4]=0u+0x80570000u; // 801CE69C
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CE6A0
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CE6A4
  c->r[9]=0u+0x00000280u; // 801CE6A8
  c->r[10]=R16(c->r[4]+0x00000002u); // 801CE6AC
  c->r[30]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801CE6B0
  c->r[7]=R16(c->r[4]+0x00000006u); // 801CE6B4
  c->r[26]=c->r[30]-c->r[6]; // 801CE6B8
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 801CE6BC
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801CE6C0
  c->r[27]=c->r[8]+c->r[10]; // 801CE6C4
  c->r[12]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CE6C8
  c->r[12]=c->r[12]+c->r[27]; // 801CE6CC
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801CE6D0
  c->r[11]=c->r[11]+c->r[8]; // 801CE6D4
  c->r[25]=c->r[27]-c->r[6]; // 801CE6D8
  c->r[8]=c->r[12]-c->r[26]; // 801CE6DC
  c->r[10]=c->r[10]+c->r[27]; // 801CE6E0
  c->r[12]=0u-c->r[8]; // 801CE6E4
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801CE6E8
  c->r[12]=c->r[12]&~c->r[8]; // 801CE6EC
  c->r[24]=c->r[10]-c->r[26]; // 801CE6F0
  c->r[27]=sraw(c,c->r[12],31); // 801CE6F4
  c->r[26]=c->r[11]-c->r[6]; // 801CE6F8
  c->r[10]=sraw(c,c->r[25],31); // 801CE6FC
  c->r[6]=0u-c->r[24]; // 801CE700
  c->r[12]=sraw(c,c->r[26],31); // 801CE704
  c->r[8]=c->r[8]&c->r[27]; // 801CE708
  c->r[31]=c->r[25]&c->r[10]; // 801CE70C
  c->r[6]=c->r[6]&~c->r[24]; // 801CE710
  c->r[10]=sraw(c,c->r[6],31); // 801CE714
  c->r[30]=c->r[26]&c->r[12]; // 801CE718
  c->r[6]=sraw(c,c->r[25],31); // 801CE71C
  c->r[7]=c->r[7]+c->r[31]; // 801CE720
  c->r[0]=c->r[7]-c->r[8]; // 801CE724
  c->r[26]=c->r[24]&c->r[10]; // 801CE728
  c->r[6]=c->r[25]&c->r[6]; // 801CE72C
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801CE730
  c->r[10]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 801CE734
  c->r[11]=R16(c->r[4]+0x0000001Cu); // 801CE738
  c->r[12]=R16(c->r[4]+0x00000018u); // 801CE73C
  c->r[29]=0u+0x00000000u; // 801CE740
  W16(c->r[4]+0x00000012u,c->r[9]); // 801CE744
  c->r[6]=0u+0x00000028u; // 801CE748
  c->r[8]=divw((int32_t)c->r[30],(int32_t)c->r[5]); // 801CE74C
  c->r[7]=c->r[11]+c->r[10]; // 801CE750
  c->r[0]=0u+0x00000001u; // 801CE754
  c->r[5]=divw((int32_t)c->r[26],(int32_t)c->r[5]); // 801CE758
  c->r[8]=c->r[12]-c->r[8]; // 801CE75C
  W16(c->r[4]+0x0000000Eu,c->r[8]); // 801CE760
  c->r[5]=c->r[7]-c->r[5]; // 801CE764
  W16(c->r[4]+0x00000010u,c->r[5]); // 801CE768
  c->r[5]=R16(c->r[3]+0x00000002u); // 801CE76C
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 801CE770
  W16(c->r[4]+0x00000016u,c->r[29]); // 801CE774
  W16(c->r[4]+0x00000014u,c->r[5]); // 801CE778
  W16(c->r[4]+0x00000018u,c->r[29]); // 801CE77C
  W16(c->r[4]+0x0000001Au,c->r[9]); // 801CE780
  c->r[5]=R16(c->r[3]+0x00000002u); // 801CE784
  c->r[3]=c->r[13]+0xFFFF9EF0u; // 801CE788
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 801CE78C
  W32(c->r[4]+0x00000020u,c->r[29]); // 801CE790
  W16(c->r[4]+0x0000001Cu,c->r[5]); // 801CE794
  W8(c->r[4]+0x0000002Cu,c->r[6]); // 801CE798
  W8(c->r[4]+0x0000002Du,c->r[6]); // 801CE79C
  W8(c->r[4]+0x0000002Eu,c->r[6]); // 801CE7A0
  W8(c->r[4]+0x0000003Cu,c->r[29]); // 801CE7A4
  W32(c->r[4]+0x00000040u,c->r[0]); // 801CE7A8
  W32(c->r[4]+0x00000044u,c->r[29]); // 801CE7AC
  c->lr=0x801CE7B4u; f_801C1194(c); // 801CE7B0
  c->r[5]=0u+0xCC000000u; // 801CE7B4
  c->r[4]=0u+0x801D0000u; // 801CE7B8
  c->r[0]=R16(c->r[5]+0x00002030u); // 801CE7BC
  c->r[4]=c->r[4]+0xFFFFD7E4u; // 801CE7C0
  c->r[3]=0u+0x00000018u; // 801CE7C4
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801CE7C8
  W16(c->r[5]+0x00002030u,c->r[0]); // 801CE7CC
  c->r[0]=R16(c->r[5]+0x00002034u); // 801CE7D0
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801CE7D4
  W16(c->r[5]+0x00002034u,c->r[0]); // 801CE7D8
  W32(c->r[13]+0xFFFF9EE8u,c->r[29]); // 801CE7DC
  W32(c->r[13]+0xFFFF9EE4u,c->r[29]); // 801CE7E0
  c->lr=0x801CE7E8u; f_801BE798(c); // 801CE7E4
  c->r[3]=0u+0x00000080u; // 801CE7E8
  c->lr=0x801CE7F0u; f_801BEB5C(c); // 801CE7EC
  c->r[3]=0u+0x804B0000u; // 801CE7F0
  c->r[3]=c->r[3]+0x00002338u; // 801CE7F4
  c->lr=0x801CE7FCu; f_801BFD5C(c); // 801CE7F8
  c->lr=0x801CE800u; f_801BE74C(c); // 801CE7FC
  c->r[5]=R32(c->r[13]+0xFFFF9ED8u); // 801CE800
  cmpu(c,0,c->r[5],0x00000007u); // 801CE804
  if (crb(c,1)) { goto L_801CE838; } // 801CE808
  c->r[4]=0u+0x804B0000u; // 801CE80C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CE810
  c->r[4]=c->r[4]+0x000023E4u; // 801CE814
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CE818
  c->ctr=c->r[4]; // 801CE81C
  if (true) { switch (c->ctr) { case 0x801CE824u: goto L_801CE824; case 0x801CE82Cu: goto L_801CE82C; case 0x801CE834u: goto L_801CE834; default: break; } dispatch(c,c->ctr); return; } // 801CE820
L_801CE824:;
  c->r[28]=0u+0x00000000u; // 801CE824
  goto L_801CE838; // 801CE828
L_801CE82C:;
  c->r[28]=0u+0x00000001u; // 801CE82C
  goto L_801CE838; // 801CE830
L_801CE834:;
  c->r[28]=c->r[5]|c->r[5]; // 801CE834
L_801CE838:;
  c->lr=0x801CE83Cu; f_801BE774(c); // 801CE838
  cmps(c,0,(int32_t)c->r[28],1); // 801CE83C
  if (crb(c,2)) { goto L_801CE848; } // 801CE840
  goto L_801CE864; // 801CE844
L_801CE848:;
  c->r[3]=0u+0x00010000u; // 801CE848
  c->r[4]=0u+0x00003A98u; // 801CE84C
  c->r[0]=c->r[3]+0x00005F90u; // 801CE850
  W32(c->r[13]+0xFFFF9E78u,c->r[4]); // 801CE854
  W32(c->r[13]+0xFFFF9E7Cu,c->r[4]); // 801CE858
  W32(c->r[13]+0xFFFF9E80u,c->r[0]); // 801CE85C
  goto L_801CE87C; // 801CE860
L_801CE864:;
  c->r[3]=0u+0x00020000u; // 801CE864
  c->r[4]=0u+0x00004650u; // 801CE868
  c->r[0]=c->r[3]+0xFFFFA5E0u; // 801CE86C
  W32(c->r[13]+0xFFFF9E78u,c->r[4]); // 801CE870
  W32(c->r[13]+0xFFFF9E7Cu,c->r[4]); // 801CE874
  W32(c->r[13]+0xFFFF9E80u,c->r[0]); // 801CE878
L_801CE87C:;
  c->r[3]=0u+0x00000000u; // 801CE87C
  c->r[0]=0u+0x00000001u; // 801CE880
  W32(c->r[13]+0xFFFF9E84u,c->r[3]); // 801CE884
  c->r[27]=0u+0x00000001u; // 801CE888
  W32(c->r[13]+0xFFFF9E88u,c->r[3]); // 801CE88C
  W32(c->r[13]+0xFFFF9F00u,c->r[3]); // 801CE890
  W32(c->r[13]+0xFFFF9E74u,c->r[0]); // 801CE894
  W32(c->r[13]+0xFFFF9E8Cu,c->r[3]); // 801CE898
  c->r[0]=R32(c->r[13]+0xFFFF9F08u); // 801CE89C
  c->lr=0x801CE8A4u; f_802099D0(c); // 801CE8A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CE8A4
  if (!crb(c,2)) { goto L_801CE8B0; } // 801CE8A8
  c->r[27]=0u+0x00000000u; // 801CE8AC
L_801CE8B0:;
  W32(c->r[13]+0xFFFF9F08u,c->r[27]); // 801CE8B0
  c->r[0]=0u+0x00000000u; // 801CE8B4
  c->r[3]=R32(c->r[13]+0xFFFF9F04u); // 801CE8B8
  W32(c->r[13]+0xFFFF9F04u,c->r[0]); // 801CE8BC
  c->lr=0x801CE8C4u; f_801D1C7C(c); // 801CE8C0
L_801CE8C4:;
  c->r[11]=c->r[1]+0x00000030u; // 801CE8C4
  c->lr=0x801CE8CCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE8C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CE8CC
  c->lr=c->r[0]; // 801CE8D0
  c->r[1]=c->r[1]+0x00000030u; // 801CE8D4
  return; // 801CE8D8
}

// VIWaitForRetrace
void f_801CE8DC(Ctx* __restrict c) {
  trace_call(0x801CE8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8DC
  c->r[0]=c->lr; // 801CE8E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE8E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE8E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE8EC
  c->lr=0x801CE8F4u; f_801BE74C(c); // 801CE8F0
  c->r[31]=c->r[3]|c->r[3]; // 801CE8F4
  c->r[30]=R32(c->r[13]+0xFFFF9F14u); // 801CE8F8
L_801CE8FC:;
  c->r[3]=c->r[13]+0xFFFF9EF0u; // 801CE8FC
  c->lr=0x801CE904u; f_801C21D0(c); // 801CE900
  c->r[0]=R32(c->r[13]+0xFFFF9F14u); // 801CE904
  cmpu(c,0,c->r[30],c->r[0]); // 801CE908
  if (crb(c,2)) { IRQCHK(c); goto L_801CE8FC; } // 801CE90C
  c->r[3]=c->r[31]|c->r[31]; // 801CE910
  c->lr=0x801CE918u; f_801BE774(c); // 801CE914
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE91C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE920
  c->lr=c->r[0]; // 801CE924
  c->r[1]=c->r[1]+0x00000010u; // 801CE928
  return; // 801CE92C
}

// setFbbRegs
void f_801CE930(Ctx* __restrict c) {
  trace_call(0x801CE930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE934
  c->r[8]=R8(c->r[3]+0x0000002Cu); // 801CE938
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 801CE93C
  c->r[31]=rotl(c->r[8],5)&0xFFFFFFE0u; // 801CE940
  c->r[11]=R32(c->r[3]+0x00000020u); // 801CE944
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801CE948
  c->r[9]=R16(c->r[3]+0x00000016u); // 801CE94C
  c->r[10]=R32(c->r[3]+0x00000030u); // 801CE950
  cmps(c,0,(int32_t)c->r[11],0); // 801CE954
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFE0u; // 801CE958
  c->r[12]=R16(c->r[3]+0x0000000Au); // 801CE95C
  c->r[0]=c->r[10]+c->r[0]; // 801CE960
  c->r[9]=c->r[8]+c->r[0]; // 801CE964
  W32(c->r[4]+0x00000000u,c->r[9]); // 801CE968
  if (!crb(c,2)) { goto L_801CE974; } // 801CE96C
  goto L_801CE978; // 801CE970
L_801CE974:;
  c->r[9]=c->r[9]+c->r[31]; // 801CE974
L_801CE978:;
  c->r[8]=rotl(c->r[12],1)&0x00000001u; // 801CE978
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 801CE97C
  c->r[0]=c->r[0]^c->r[8]; // 801CE980
  W32(c->r[5]+0x00000000u,c->r[9]); // 801CE984
  c->r[0]=c->r[0]-c->r[8]; // 801CE988
  cmps(c,0,(int32_t)c->r[0],1); // 801CE98C
  if (!crb(c,2)) { goto L_801CE9A0; } // 801CE990
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CE994
  W32(c->r[4]+0x00000000u,c->r[9]); // 801CE998
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CE99C
L_801CE9A0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CE9A0
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 801CE9A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CE9A8
  c->r[0]=R32(c->r[5]+0x00000000u); // 801CE9AC
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 801CE9B0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CE9B4
  c->r[0]=R32(c->r[3]+0x00000044u); // 801CE9B8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE9BC
  if (crb(c,2)) { goto L_801CEA44; } // 801CE9C0
  c->r[8]=R8(c->r[3]+0x0000002Cu); // 801CE9C4
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 801CE9C8
  c->r[31]=rotl(c->r[8],5)&0xFFFFFFE0u; // 801CE9CC
  c->r[11]=R32(c->r[3]+0x00000020u); // 801CE9D0
  c->r[8]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801CE9D4
  c->r[9]=R16(c->r[3]+0x00000016u); // 801CE9D8
  c->r[10]=R32(c->r[3]+0x00000048u); // 801CE9DC
  cmps(c,0,(int32_t)c->r[11],0); // 801CE9E0
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFE0u; // 801CE9E4
  c->r[12]=R16(c->r[3]+0x0000000Au); // 801CE9E8
  c->r[0]=c->r[10]+c->r[0]; // 801CE9EC
  c->r[9]=c->r[8]+c->r[0]; // 801CE9F0
  W32(c->r[6]+0x00000000u,c->r[9]); // 801CE9F4
  if (!crb(c,2)) { goto L_801CEA00; } // 801CE9F8
  goto L_801CEA04; // 801CE9FC
L_801CEA00:;
  c->r[9]=c->r[9]+c->r[31]; // 801CEA00
L_801CEA04:;
  c->r[8]=rotl(c->r[12],1)&0x00000001u; // 801CEA04
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 801CEA08
  c->r[0]=c->r[0]^c->r[8]; // 801CEA0C
  W32(c->r[7]+0x00000000u,c->r[9]); // 801CEA10
  c->r[0]=c->r[0]-c->r[8]; // 801CEA14
  cmps(c,0,(int32_t)c->r[0],1); // 801CEA18
  if (!crb(c,2)) { goto L_801CEA2C; } // 801CEA1C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801CEA20
  W32(c->r[6]+0x00000000u,c->r[9]); // 801CEA24
  W32(c->r[7]+0x00000000u,c->r[0]); // 801CEA28
L_801CEA2C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801CEA2C
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 801CEA30
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CEA34
  c->r[0]=R32(c->r[7]+0x00000000u); // 801CEA38
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 801CEA3C
  W32(c->r[7]+0x00000000u,c->r[0]); // 801CEA40
L_801CEA44:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CEA44
  c->r[8]=0u+0x01000000u; // 801CEA48
  cmpu(c,0,c->r[0],c->r[8]); // 801CEA4C
  if (!crb(c,0)) { goto L_801CEA80; } // 801CEA50
  c->r[0]=R32(c->r[5]+0x00000000u); // 801CEA54
  cmpu(c,0,c->r[0],c->r[8]); // 801CEA58
  if (!crb(c,0)) { goto L_801CEA80; } // 801CEA5C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801CEA60
  cmpu(c,0,c->r[0],c->r[8]); // 801CEA64
  if (!crb(c,0)) { goto L_801CEA80; } // 801CEA68
  c->r[0]=R32(c->r[7]+0x00000000u); // 801CEA6C
  cmpu(c,0,c->r[0],c->r[8]); // 801CEA70
  if (!crb(c,0)) { goto L_801CEA80; } // 801CEA74
  c->r[11]=0u+0x00000000u; // 801CEA78
  goto L_801CEA84; // 801CEA7C
L_801CEA80:;
  c->r[11]=0u+0x00000001u; // 801CEA80
L_801CEA84:;
  cmps(c,0,(int32_t)c->r[11],0); // 801CEA84
  if (crb(c,2)) { goto L_801CEABC; } // 801CEA88
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CEA8C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CEA90
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CEA94
  c->r[0]=R32(c->r[5]+0x00000000u); // 801CEA98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CEA9C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CEAA0
  c->r[0]=R32(c->r[6]+0x00000000u); // 801CEAA4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CEAA8
  W32(c->r[6]+0x00000000u,c->r[0]); // 801CEAAC
  c->r[0]=R32(c->r[7]+0x00000000u); // 801CEAB0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CEAB4
  W32(c->r[7]+0x00000000u,c->r[0]); // 801CEAB8
L_801CEABC:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEABC
  c->r[8]=0u+0x80570000u; // 801CEAC0
  c->r[10]=R32(c->r[4]+0x00000000u); // 801CEAC4
  c->r[8]=c->r[8]+0xFFFFF3F8u; // 801CEAC8
  c->r[9]=R32(c->r[13]+0xFFFF9EA4u); // 801CEACC
  c->r[0]=c->r[0]|0x00010000u; // 801CEAD0
  W16(c->r[8]+0x0000001Eu,c->r[10]); // 801CEAD4
  c->r[11]=rotl(c->r[11],12)&0xFFFFF000u; // 801CEAD8
  W32(c->r[13]+0xFFFF9EA4u,c->r[9]); // 801CEADC
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEAE0
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CEAE4
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEAE8
  c->r[10]=rotl(c->r[4],16)&0x0000FFFFu; // 801CEAEC
  c->r[9]=R8(c->r[3]+0x0000003Cu); // 801CEAF0
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CEAF4
  c->r[0]=c->r[0]|0x00020000u; // 801CEAF8
  c->r[10]=c->r[11]|c->r[10]; // 801CEAFC
  c->r[9]=rotl(c->r[9],8)&0xFFFFFF00u; // 801CEB00
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CEB04
  c->r[4]=c->r[10]|c->r[9]; // 801CEB08
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEB0C
  W16(c->r[8]+0x0000001Cu,c->r[4]); // 801CEB10
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEB14
  c->r[9]=R32(c->r[5]+0x00000000u); // 801CEB18
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CEB1C
  c->r[0]=c->r[0]|0x00001000u; // 801CEB20
  W16(c->r[8]+0x00000026u,c->r[9]); // 801CEB24
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CEB28
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEB2C
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEB30
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CEB34
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CEB38
  c->r[0]=c->r[0]|0x00002000u; // 801CEB3C
  c->r[5]=rotl(c->r[5],16)&0x0000FFFFu; // 801CEB40
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CEB44
  W16(c->r[8]+0x00000024u,c->r[5]); // 801CEB48
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEB4C
  c->r[0]=R32(c->r[3]+0x00000044u); // 801CEB50
  cmps(c,0,(int32_t)c->r[0],0); // 801CEB54
  if (crb(c,2)) { goto L_801CEBDC; } // 801CEB58
  c->r[4]=R32(c->r[13]+0xFFFF9EA0u); // 801CEB5C
  c->r[3]=0u+0x00010000u; // 801CEB60
  c->r[9]=R32(c->r[6]+0x00000000u); // 801CEB64
  c->r[0]=c->r[3]+0xFFFF8000u; // 801CEB68
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CEB6C
  c->r[3]=c->r[4]|0x00004000u; // 801CEB70
  W16(c->r[8]+0x00000022u,c->r[9]); // 801CEB74
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CEB78
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 801CEB7C
  c->r[3]=R32(c->r[13]+0xFFFF9EA0u); // 801CEB80
  c->r[5]=R32(c->r[6]+0x00000000u); // 801CEB84
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CEB88
  c->r[0]=c->r[3]|c->r[0]; // 801CEB8C
  c->r[3]=rotl(c->r[5],16)&0x0000FFFFu; // 801CEB90
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CEB94
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEB98
  W16(c->r[8]+0x00000020u,c->r[3]); // 801CEB9C
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEBA0
  c->r[4]=R32(c->r[7]+0x00000000u); // 801CEBA4
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CEBA8
  c->r[0]=c->r[0]|0x00000400u; // 801CEBAC
  W16(c->r[8]+0x0000002Au,c->r[4]); // 801CEBB0
  W32(c->r[13]+0xFFFF9EA4u,c->r[3]); // 801CEBB4
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEBB8
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CEBBC
  c->r[4]=R32(c->r[7]+0x00000000u); // 801CEBC0
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CEBC4
  c->r[0]=c->r[0]|0x00000800u; // 801CEBC8
  c->r[4]=rotl(c->r[4],16)&0x0000FFFFu; // 801CEBCC
  W32(c->r[13]+0xFFFF9EA4u,c->r[3]); // 801CEBD0
  W16(c->r[8]+0x00000028u,c->r[4]); // 801CEBD4
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CEBD8
L_801CEBDC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEBDC
  c->r[1]=c->r[1]+0x00000010u; // 801CEBE0
  return; // 801CEBE4
}

// setVerticalRegs
void f_801CEBE8(Ctx* __restrict c) {
  trace_call(0x801CEBE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBE8
  c->r[11]=0u+0x80570000u; // 801CEBEC
  c->r[11]=c->r[11]+0xFFFFF3F8u; // 801CEBF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEBF4
  c->r[12]=R32(c->r[1]+0x00000018u); // 801CEBF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CEBFC
  c->r[0]=R16(c->r[11]+0x0000006Cu); // 801CEC00
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CEC04
  if (crb(c,2)) { goto L_801CEC18; } // 801CEC08
  c->r[11]=0u+0x00000001u; // 801CEC0C
  c->r[30]=0u+0x00000002u; // 801CEC10
  goto L_801CEC20; // 801CEC14
L_801CEC18:;
  c->r[11]=0u+0x00000002u; // 801CEC18
  c->r[30]=0u+0x00000001u; // 801CEC1C
L_801CEC20:;
  c->r[31]=rotl(c->r[3],1)&0x00000001u; // 801CEC20
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801CEC24
  c->r[0]=c->r[0]^c->r[31]; // 801CEC28
  c->r[0]=c->r[0]-c->r[31]; cr0(c,c->r[0]); // 801CEC2C
  if (!crb(c,2)) { goto L_801CEC6C; } // 801CEC30
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 801CEC34
  c->r[0]=c->r[0]-c->r[4]; // 801CEC38
  c->r[0]=c->r[0]-c->r[3]; // 801CEC3C
  c->r[31]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801CEC40
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[3]); // 801CEC44
  c->r[6]=c->r[9]+c->r[31]; // 801CEC48
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801CEC4C
  c->r[0]=c->r[7]+c->r[3]; // 801CEC50
  c->r[7]=c->r[10]+c->r[31]; // 801CEC54
  c->r[3]=c->r[8]+c->r[3]; // 801CEC58
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CEC5C
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 801CEC60
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CEC64
  goto L_801CECA0; // 801CEC68
L_801CEC6C:;
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 801CEC6C
  c->r[0]=c->r[0]-c->r[4]; // 801CEC70
  c->r[0]=c->r[0]-c->r[3]; // 801CEC74
  c->r[31]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 801CEC78
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[3]); // 801CEC7C
  c->r[6]=c->r[10]+c->r[31]; // 801CEC80
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801CEC84
  c->r[0]=c->r[8]+c->r[3]; // 801CEC88
  c->r[3]=c->r[7]+c->r[3]; // 801CEC8C
  c->r[7]=c->r[9]+c->r[31]; // 801CEC90
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CEC94
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CEC98
  c->r[7]=rotl(c->r[7],0)&0x0000FFFFu; // 801CEC9C
L_801CECA0:;
  c->r[4]=divw((int32_t)c->r[4],(int32_t)c->r[11]); // 801CECA0
  cmps(c,0,(int32_t)c->r[12],0); // 801CECA4
  c->r[10]=rotl(c->r[4],0)&0x0000FFFFu; // 801CECA8
  if (crb(c,2)) { goto L_801CECDC; } // 801CECAC
  c->r[4]=rotl(c->r[10],1)&0x0001FFFEu; // 801CECB0
  c->r[6]=c->r[6]+0x00000002u; // 801CECB4
  c->r[8]=c->r[4]+0xFFFFFFFEu; // 801CECB8
  c->r[10]=0u+0x00000000u; // 801CECBC
  c->r[4]=c->r[7]+0x00000002u; // 801CECC0
  c->r[6]=rotl(c->r[6],0)&0x0000FFFFu; // 801CECC4
  c->r[0]=c->r[0]+c->r[8]; // 801CECC8
  c->r[3]=c->r[3]+c->r[8]; // 801CECCC
  c->r[7]=rotl(c->r[4],0)&0x0000FFFFu; // 801CECD0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CECD4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CECD8
L_801CECDC:;
  c->r[8]=R32(c->r[13]+0xFFFF9EA0u); // 801CECDC
  c->r[4]=0u+0x80000000u; // 801CECE0
  c->r[9]=R32(c->r[13]+0xFFFF9EA4u); // 801CECE4
  c->r[11]=rotl(c->r[10],4)&0x000FFFF0u; // 801CECE8
  c->r[4]=c->r[8]|c->r[4]; // 801CECEC
  c->r[10]=0u+0x80570000u; // 801CECF0
  W32(c->r[13]+0xFFFF9EA4u,c->r[9]); // 801CECF4
  c->r[8]=c->r[10]+0xFFFFF3F8u; // 801CECF8
  c->r[9]=c->r[5]|c->r[11]; // 801CECFC
  W32(c->r[13]+0xFFFF9EA0u,c->r[4]); // 801CED00
  c->r[4]=R32(c->r[13]+0xFFFF9EA0u); // 801CED04
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CED08
  c->r[4]=c->r[4]|0x01000000u; // 801CED0C
  W16(c->r[8]+0x0000000Eu,c->r[0]); // 801CED10
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CED14
  W32(c->r[13]+0xFFFF9EA0u,c->r[4]); // 801CED18
  c->r[4]=R32(c->r[13]+0xFFFF9EA0u); // 801CED1C
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CED20
  c->r[4]=c->r[4]|0x02000000u; // 801CED24
  W16(c->r[10]+0xFFFFF3F8u,c->r[9]); // 801CED28
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CED2C
  W32(c->r[13]+0xFFFF9EA0u,c->r[4]); // 801CED30
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CED34
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CED38
  c->r[0]=c->r[0]|0x00400000u; // 801CED3C
  W16(c->r[8]+0x0000000Cu,c->r[6]); // 801CED40
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CED44
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CED48
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CED4C
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CED50
  c->r[0]=c->r[0]|0x00800000u; // 801CED54
  W16(c->r[8]+0x00000012u,c->r[3]); // 801CED58
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CED5C
  W16(c->r[8]+0x00000010u,c->r[7]); // 801CED60
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CED64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CED68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CED6C
  c->r[1]=c->r[1]+0x00000010u; // 801CED70
  return; // 801CED74
}

// VIConfigure
void f_801CED78(Ctx* __restrict c) {
  trace_call(0x801CED78u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED78
  c->r[0]=c->lr; // 801CED7C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CED80
  c->r[11]=c->r[1]+0x00000030u; // 801CED84
  c->lr=0x801CED8Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CED88
  c->r[28]=0u+0x804B0000u; // 801CED8C
  c->r[31]=c->r[3]|c->r[3]; // 801CED90
  c->r[28]=c->r[28]+0x00002118u; // 801CED94
  c->lr=0x801CED9Cu; f_801BE74C(c); // 801CED98
  c->r[4]=0u+0x80570000u; // 801CED9C
  c->r[5]=R32(c->r[31]+0x00000000u); // 801CEDA0
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CEDA4
  c->r[30]=c->r[3]|c->r[3]; // 801CEDA8
  c->r[0]=R32(c->r[4]+0x00000024u); // 801CEDAC
  c->r[3]=rotl(c->r[5],0)&0x00000003u; // 801CEDB0
  cmpu(c,0,c->r[0],c->r[3]); // 801CEDB4
  if (crb(c,2)) { goto L_801CEDC8; } // 801CEDB8
  c->r[0]=0u+0x00000001u; // 801CEDBC
  W32(c->r[4]+0x00000024u,c->r[3]); // 801CEDC0
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 801CEDC4
L_801CEDC8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CEDC8
  c->r[3]=0u+0x80000000u; // 801CEDCC
  c->r[25]=R32(c->r[3]+0x000000CCu); // 801CEDD0
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CEDD4
  cmpu(c,0,c->r[26],0x00000004u); // 801CEDD8
  if (!crb(c,2)) { goto L_801CEE48; } // 801CEDDC
  c->r[0]=R32(c->r[13]+0xFFFF9ECCu); // 801CEDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801CEDE4
  if (!crb(c,2)) { goto L_801CEE48; } // 801CEDE8
  c->r[0]=0u+0x00000001u; // 801CEDEC
  c->r[3]=c->r[28]+0x000002ECu; // 801CEDF0
  W32(c->r[13]+0xFFFF9ECCu,c->r[0]); // 801CEDF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEDF8
  c->lr=0x801CEE00u; f_801BB3FC(c); // 801CEDFC
  c->r[3]=c->r[28]+0x00000318u; // 801CEE00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE04
  c->lr=0x801CEE0Cu; f_801BB3FC(c); // 801CEE08
  c->r[3]=c->r[28]+0x00000344u; // 801CEE0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE10
  c->lr=0x801CEE18u; f_801BB3FC(c); // 801CEE14
  c->r[3]=c->r[28]+0x00000370u; // 801CEE18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE1C
  c->lr=0x801CEE24u; f_801BB3FC(c); // 801CEE20
  c->r[3]=c->r[28]+0x0000039Cu; // 801CEE24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE28
  c->lr=0x801CEE30u; f_801BB3FC(c); // 801CEE2C
  c->r[3]=c->r[28]+0x000003C8u; // 801CEE30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE34
  c->lr=0x801CEE3Cu; f_801BB3FC(c); // 801CEE38
  c->r[3]=c->r[28]+0x000002ECu; // 801CEE3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE40
  c->lr=0x801CEE48u; f_801BB3FC(c); // 801CEE44
L_801CEE48:;
  cmps(c,0,(int32_t)c->r[25],2); // 801CEE48
  if (crb(c,2)) { goto L_801CEE78; } // 801CEE4C
  if (!crb(c,0)) { goto L_801CEE64; } // 801CEE50
  cmps(c,0,(int32_t)c->r[25],0); // 801CEE54
  if (crb(c,2)) { goto L_801CEE78; } // 801CEE58
  if (!crb(c,0)) { goto L_801CEE9C; } // 801CEE5C
  goto L_801CEEAC; // 801CEE60
L_801CEE64:;
  cmps(c,0,(int32_t)c->r[25],5); // 801CEE64
  if (crb(c,2)) { goto L_801CEE9C; } // 801CEE68
  if (crb(c,0)) { goto L_801CEEAC; } // 801CEE6C
  cmps(c,0,(int32_t)c->r[25],8); // 801CEE70
  if (!crb(c,0)) { goto L_801CEEAC; } // 801CEE74
L_801CEE78:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CEE78
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEE7C
  cmpu(c,0,c->r[26],0x00000002u); // 801CEE80
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEE84
  cmpu(c,0,c->r[26],0x00000006u); // 801CEE88
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEE8C
  cmpu(c,0,c->r[26],0x00000007u); // 801CEE90
  if (!crb(c,2)) { goto L_801CEEAC; } // 801CEE94
  goto L_801CEEC8; // 801CEE98
L_801CEE9C:;
  cmpu(c,0,c->r[26],0x00000001u); // 801CEE9C
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEEA0
  cmpu(c,0,c->r[26],0x00000005u); // 801CEEA4
  if (crb(c,2)) { goto L_801CEEC8; } // 801CEEA8
L_801CEEAC:;
  c->r[6]=c->r[25]|c->r[25]; // 801CEEAC
  c->r[7]=c->r[26]|c->r[26]; // 801CEEB0
  c->r[5]=c->r[28]+0x000003F4u; // 801CEEB4
  c->r[3]=c->r[13]+0xFFFF84A8u; // 801CEEB8
  c->r[4]=0u+0x000009F0u; // 801CEEBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEEC0
  c->lr=0x801CEEC8u; f_801BB48C(c); // 801CEEC4
L_801CEEC8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CEEC8
  if (crb(c,2)) { goto L_801CEED8; } // 801CEECC
  cmpu(c,0,c->r[26],0x00000002u); // 801CEED0
  if (!crb(c,2)) { goto L_801CEEE8; } // 801CEED4
L_801CEED8:;
  c->r[3]=0u+0x80570000u; // 801CEED8
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CEEDC
  W32(c->r[3]+0x00000028u,c->r[25]); // 801CEEE0
  goto L_801CEEF4; // 801CEEE4
L_801CEEE8:;
  c->r[3]=0u+0x80570000u; // 801CEEE8
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CEEEC
  W32(c->r[3]+0x00000028u,c->r[26]); // 801CEEF0
L_801CEEF4:;
  c->r[4]=0u+0x80570000u; // 801CEEF4
  c->r[5]=R16(c->r[31]+0x0000000Au); // 801CEEF8
  c->r[3]=c->r[4]+0xFFFFF470u; // 801CEEFC
  c->r[0]=R32(c->r[3]+0x00000024u); // 801CEF00
  W16(c->r[4]+0xFFFFF470u,c->r[5]); // 801CEF04
  cmpu(c,0,c->r[0],0x00000001u); // 801CEF08
  if (!crb(c,2)) { goto L_801CEF1C; } // 801CEF0C
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801CEF10
  c->r[8]=rotl(c->r[0],1)&0x0000FFFEu; // 801CEF14
  goto L_801CEF20; // 801CEF18
L_801CEF1C:;
  c->r[8]=R16(c->r[31]+0x0000000Cu); // 801CEF1C
L_801CEF20:;
  c->r[7]=0u+0x80570000u; // 801CEF20
  c->r[6]=R16(c->r[31]+0x0000000Eu); // 801CEF24
  c->r[7]=c->r[7]+0xFFFFF470u; // 801CEF28
  c->r[4]=R16(c->r[31]+0x00000004u); // 801CEF2C
  c->r[9]=R32(c->r[7]+0x00000024u); // 801CEF30
  c->r[0]=0u+0x00000000u; // 801CEF34
  c->r[5]=R16(c->r[31]+0x00000008u); // 801CEF38
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CEF3C
  cmpu(c,0,c->r[9],0x00000002u); // 801CEF40
  W16(c->r[7]+0x00000002u,c->r[8]); // 801CEF44
  W16(c->r[7]+0x00000004u,c->r[6]); // 801CEF48
  W16(c->r[7]+0x00000012u,c->r[4]); // 801CEF4C
  W16(c->r[7]+0x00000014u,c->r[5]); // 801CEF50
  W32(c->r[7]+0x00000020u,c->r[3]); // 801CEF54
  W16(c->r[7]+0x0000001Au,c->r[4]); // 801CEF58
  W16(c->r[7]+0x0000001Cu,c->r[5]); // 801CEF5C
  W16(c->r[7]+0x00000016u,c->r[0]); // 801CEF60
  W16(c->r[7]+0x00000018u,c->r[0]); // 801CEF64
  if (!crb(c,2)) { goto L_801CEF70; } // 801CEF68
  goto L_801CEF88; // 801CEF6C
L_801CEF70:;
  cmpu(c,0,c->r[9],0x00000003u); // 801CEF70
  if (!crb(c,2)) { goto L_801CEF7C; } // 801CEF74
  goto L_801CEF88; // 801CEF78
L_801CEF7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CEF7C
  if (!crb(c,2)) { goto L_801CEF88; } // 801CEF80
  c->r[5]=rotl(c->r[5],1)&0x0000FFFEu; // 801CEF84
L_801CEF88:;
  c->r[29]=0u+0x80570000u; // 801CEF88
  c->r[28]=c->r[29]+0xFFFFF470u; // 801CEF8C
  c->r[4]=R32(c->r[28]+0x00000024u); // 801CEF90
  c->r[0]=R32(c->r[28]+0x00000028u); // 801CEF94
  c->r[3]=c->r[4]+0xFFFFFFFDu; // 801CEF98
  W16(c->r[28]+0x00000006u,c->r[5]); // 801CEF9C
  c->r[3]=cntlz(c->r[3]); // 801CEFA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CEFA4
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801CEFA8
  W32(c->r[28]+0x00000044u,c->r[3]); // 801CEFAC
  c->r[3]=c->r[0]+c->r[4]; // 801CEFB0
  c->lr=0x801CEFB8u; f_801CE07C(c); // 801CEFB4
  c->r[0]=R16(c->r[28]+0x00000004u); // 801CEFB8
  c->r[31]=c->r[3]|c->r[3]; // 801CEFBC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0xFFFFF470u); // 801CEFC0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E94u); // 801CEFC4
  c->r[8]=addc(c,~c->r[0],0x000002D0u,1); // 801CEFC8
  W32(c->r[28]+0x00000054u,c->r[3]); // 801CEFCC
  c->r[4]=c->r[5]+c->r[4]; // 801CEFD0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 801CEFD4
  c->r[7]=R16(c->r[3]+0x00000002u); // 801CEFD8
  if (!crb(c,1)) { goto L_801CEFE4; } // 801CEFDC
  goto L_801CEFEC; // 801CEFE0
L_801CEFE4:;
  c->r[0]=sraw(c,c->r[4],31); // 801CEFE4
  c->r[8]=c->r[4]&~c->r[0]; // 801CEFE8
L_801CEFEC:;
  c->r[5]=0u+0x80570000u; // 801CEFEC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E96u); // 801CEFF0
  c->r[5]=c->r[5]+0xFFFFF470u; // 801CEFF4
  c->r[6]=R16(c->r[5]+0x00000002u); // 801CEFF8
  c->r[4]=R32(c->r[5]+0x00000020u); // 801CEFFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 801CF000
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 801CF004
  c->r[10]=c->r[0]+c->r[9]; // 801CF008
  W16(c->r[5]+0x00000008u,c->r[8]); // 801CF00C
  c->r[0]=cntlz(c->r[4]); // 801CF010
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CF014
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[6]); // 801CF018
  c->r[0]=c->r[6]|c->r[6]; // 801CF01C
  c->r[5]=c->r[4]+0x00000001u; // 801CF020
  if (!crb(c,1)) { goto L_801CF02C; } // 801CF024
  c->r[0]=c->r[10]|c->r[10]; // 801CF028
L_801CF02C:;
  c->r[4]=0u+0x80570000u; // 801CF02C
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CF030
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF034
  c->r[10]=R16(c->r[4]+0x00000002u); // 801CF038
  c->r[8]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801CF03C
  c->r[7]=R16(c->r[4]+0x00000006u); // 801CF040
  c->r[29]=c->r[8]-c->r[6]; // 801CF044
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[10]; // 801CF048
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801CF04C
  c->r[28]=c->r[9]+c->r[8]; // 801CF050
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 801CF054
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CF058
  c->r[11]=c->r[11]+c->r[9]; // 801CF05C
  c->r[8]=c->r[8]+c->r[28]; // 801CF060
  c->r[9]=c->r[10]+c->r[28]; // 801CF064
  c->r[8]=c->r[8]-c->r[29]; // 801CF068
  c->r[26]=c->r[11]-c->r[6]; // 801CF06C
  c->r[12]=0u-c->r[8]; // 801CF070
  c->r[25]=c->r[9]-c->r[29]; // 801CF074
  c->r[27]=c->r[28]-c->r[6]; // 801CF078
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801CF07C
  c->r[10]=c->r[12]&~c->r[8]; // 801CF080
  c->r[6]=0u-c->r[25]; // 801CF084
  c->r[28]=sraw(c,c->r[10],31); // 801CF088
  c->r[9]=R16(c->r[4]+0x0000001Cu); // 801CF08C
  c->r[10]=sraw(c,c->r[27],31); // 801CF090
  c->r[6]=c->r[6]&~c->r[25]; // 801CF094
  c->r[12]=sraw(c,c->r[26],31); // 801CF098
  c->r[8]=c->r[8]&c->r[28]; // 801CF09C
  c->r[29]=c->r[27]&c->r[10]; // 801CF0A0
  c->r[10]=sraw(c,c->r[6],31); // 801CF0A4
  c->r[6]=sraw(c,c->r[27],31); // 801CF0A8
  c->r[12]=c->r[26]&c->r[12]; // 801CF0AC
  c->r[6]=c->r[27]&c->r[6]; // 801CF0B0
  c->r[7]=c->r[7]+c->r[29]; // 801CF0B4
  c->r[0]=c->r[7]-c->r[8]; // 801CF0B8
  c->r[10]=c->r[25]&c->r[10]; // 801CF0BC
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 801CF0C0
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801CF0C4
  c->r[11]=R16(c->r[4]+0x00000018u); // 801CF0C8
  c->r[7]=divw((int32_t)c->r[12],(int32_t)c->r[5]); // 801CF0CC
  c->r[0]=c->r[9]+c->r[6]; // 801CF0D0
  c->r[5]=divw((int32_t)c->r[10],(int32_t)c->r[5]); // 801CF0D4
  c->r[6]=c->r[11]-c->r[7]; // 801CF0D8
  W16(c->r[4]+0x0000000Eu,c->r[6]); // 801CF0DC
  c->r[0]=c->r[0]-c->r[5]; // 801CF0E0
  W16(c->r[4]+0x00000010u,c->r[0]); // 801CF0E4
  c->r[5]=R16(c->r[3]+0x00000018u); // 801CF0E8
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 801CF0EC
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 801CF0F0
  c->r[0]=c->r[0]^c->r[4]; // 801CF0F4
  c->r[7]=rotl(c->r[5],31)&0x0000FFFFu; // 801CF0F8
  c->r[0]=c->r[0]-c->r[4]; // 801CF0FC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CF100
  if (crb(c,2)) { goto L_801CF110; } // 801CF104
  c->r[8]=R16(c->r[3]+0x0000001Au); // 801CF108
  goto L_801CF114; // 801CF10C
L_801CF110:;
  c->r[8]=0u+0x00000000u; // 801CF110
L_801CF114:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF114
  c->r[4]=0u+0x80570000u; // 801CF118
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CF11C
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF120
  c->r[6]=c->r[0]|0x00000040u; // 801CF124
  c->r[0]=c->r[7]+0x00000001u; // 801CF128
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CF12C
  c->r[7]=0u+0x80570000u; // 801CF130
  c->r[9]=R32(c->r[4]+0x00000024u); // 801CF134
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801CF138
  W32(c->r[13]+0xFFFF9EA0u,c->r[6]); // 801CF13C
  c->r[6]=c->r[5]|0x00001000u; // 801CF140
  c->r[0]=c->r[9]+0xFFFFFFFEu; // 801CF144
  c->r[7]=c->r[7]+0xFFFFF3F8u; // 801CF148
  c->r[4]=R32(c->r[13]+0xFFFF9EA0u); // 801CF14C
  c->r[8]=c->r[8]+0x00000001u; // 801CF150
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CF154
  cmpu(c,0,c->r[0],0x00000001u); // 801CF158
  c->r[0]=c->r[4]|0x00000080u; // 801CF15C
  W16(c->r[7]+0x00000032u,c->r[8]); // 801CF160
  c->r[4]=R16(c->r[7]+0x00000002u); // 801CF164
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CF168
  c->r[8]=R16(c->r[7]+0x0000006Cu); // 801CF16C
  W16(c->r[7]+0x00000030u,c->r[6]); // 801CF170
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF174
  if (crb(c,1)) { goto L_801CF190; } // 801CF178
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFBu; // 801CF17C
  c->r[0]=rotl(c->r[8],0)&0xFFFFFFFEu; // 801CF180
  c->r[5]=c->r[4]|0x00000004u; // 801CF184
  c->r[10]=c->r[0]|0x00000001u; // 801CF188
  goto L_801CF19C; // 801CF18C
L_801CF190:;
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFBu; // 801CF190
  c->r[10]=rotl(c->r[8],0)&0xFFFFFFFEu; // 801CF194
  c->r[5]=(rotl(c->r[9],2)&0x00000004u)|(c->r[5]&~0x00000004u); // 801CF198
L_801CF19C:;
  c->r[4]=0u+0x80570000u; // 801CF19C
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF7u; // 801CF1A0
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF1A4
  c->r[6]=R32(c->r[4]+0x00000028u); // 801CF1A8
  c->r[7]=R32(c->r[4]+0x00000044u); // 801CF1AC
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801CF1B0
  c->r[4]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801CF1B4
  c->r[4]=c->r[5]|c->r[4]; // 801CF1B8
  cmpu(c,0,c->r[0],0x00000002u); // 801CF1BC
  c->r[9]=rotl(c->r[4],0)&0xFFFFFCFFu; // 801CF1C0
  if (crb(c,1)) { goto L_801CF1D0; } // 801CF1C4
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 801CF1C8
  c->r[9]=c->r[9]|c->r[0]; // 801CF1CC
L_801CF1D0:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF1D0
  c->r[4]=0u+0x80570000u; // 801CF1D4
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CF1D8
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF1DC
  c->r[0]=c->r[0]|0x40000000u; // 801CF1E0
  c->r[8]=0u+0x80570000u; // 801CF1E4
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CF1E8
  c->r[8]=c->r[8]+0xFFFFF3F8u; // 801CF1EC
  cmps(c,0,(int32_t)c->r[7],0); // 801CF1F0
  c->r[6]=R16(c->r[4]+0x0000001Au); // 801CF1F4
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF1F8
  c->r[0]=R16(c->r[4]+0x00000004u); // 801CF1FC
  c->r[4]=c->r[6]|c->r[6]; // 801CF200
  c->r[7]=R32(c->r[13]+0xFFFF9EA0u); // 801CF204
  c->r[5]=R32(c->r[13]+0xFFFF9EA4u); // 801CF208
  W16(c->r[8]+0x00000002u,c->r[9]); // 801CF20C
  c->r[5]=c->r[5]|0x00000200u; // 801CF210
  W32(c->r[13]+0xFFFF9EA4u,c->r[5]); // 801CF214
  W16(c->r[8]+0x0000006Cu,c->r[10]); // 801CF218
  W32(c->r[13]+0xFFFF9EA0u,c->r[7]); // 801CF21C
  if (crb(c,2)) { goto L_801CF228; } // 801CF220
  c->r[4]=rotl(c->r[6],1)&0x0001FFFEu; // 801CF224
L_801CF228:;
  c->r[9]=rotl(c->r[4],0)&0x0000FFFFu; // 801CF228
  cmpu(c,0,c->r[9],c->r[0]); // 801CF22C
  if (!crb(c,0)) { goto L_801CF284; } // 801CF230
  c->r[4]=rotl(c->r[9],8)&0x00FFFF00u; // 801CF234
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF238
  c->r[7]=c->r[0]+c->r[4]; // 801CF23C
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CF240
  c->r[8]=c->r[7]+0xFFFFFFFFu; // 801CF244
  c->r[8]=divwu(c->r[8],c->r[0]); // 801CF248
  c->r[4]=c->r[4]|0x04000000u; // 801CF24C
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CF250
  c->r[7]=0u+0x80570000u; // 801CF254
  W32(c->r[13]+0xFFFF9EA0u,c->r[5]); // 801CF258
  c->r[7]=c->r[7]+0xFFFFF3F8u; // 801CF25C
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF260
  c->r[8]=c->r[8]|0x00001000u; // 801CF264
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CF268
  W16(c->r[7]+0x0000004Au,c->r[8]); // 801CF26C
  c->r[4]=c->r[4]|0x00000080u; // 801CF270
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CF274
  W16(c->r[7]+0x00000070u,c->r[9]); // 801CF278
  W32(c->r[13]+0xFFFF9EA0u,c->r[5]); // 801CF27C
  goto L_801CF2A8; // 801CF280
L_801CF284:;
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF284
  c->r[7]=0u+0x80570000u; // 801CF288
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CF28C
  c->r[7]=c->r[7]+0xFFFFF3F8u; // 801CF290
  c->r[8]=0u+0x00000100u; // 801CF294
  c->r[4]=c->r[4]|0x04000000u; // 801CF298
  W16(c->r[7]+0x0000004Au,c->r[8]); // 801CF29C
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CF2A0
  W32(c->r[13]+0xFFFF9EA0u,c->r[5]); // 801CF2A4
L_801CF2A8:;
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF2A8
  c->r[4]=0u+0x80570000u; // 801CF2AC
  c->r[9]=R16(c->r[3]+0x0000001Au); // 801CF2B0
  c->r[4]=c->r[4]+0xFFFFF3F8u; // 801CF2B4
  c->r[8]=R32(c->r[13]+0xFFFF9EA4u); // 801CF2B8
  c->r[7]=c->r[5]|0x10000000u; // 801CF2BC
  W16(c->r[4]+0x00000006u,c->r[9]); // 801CF2C0
  c->r[5]=0u+0x80570000u; // 801CF2C4
  c->r[5]=c->r[5]+0xFFFFF470u; // 801CF2C8
  c->r[10]=addc(c,~c->r[0],0x000002D0u,1); // 801CF2CC
  W32(c->r[13]+0xFFFF9EA4u,c->r[8]); // 801CF2D0
  c->r[11]=R16(c->r[5]+0x00000008u); // 801CF2D4
  W32(c->r[13]+0xFFFF9EA0u,c->r[7]); // 801CF2D8
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF2DC
  c->r[9]=R8(c->r[3]+0x0000001Du); // 801CF2E0
  c->r[8]=R8(c->r[3]+0x0000001Eu); // 801CF2E4
  c->r[0]=c->r[0]|0x20000000u; // 801CF2E8
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF2EC
  c->r[8]=(rotl(c->r[9],8)&0x0000FF00u)|(c->r[8]&~0x0000FF00u); // 801CF2F0
  W16(c->r[4]+0x00000004u,c->r[8]); // 801CF2F4
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF2F8
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF2FC
  c->r[7]=R8(c->r[3]+0x0000001Fu); // 801CF300
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF304
  c->r[9]=R16(c->r[3]+0x00000020u); // 801CF308
  c->r[7]=c->r[11]+c->r[7]; // 801CF30C
  c->r[12]=c->r[7]+0xFFFFFFD8u; // 801CF310
  c->r[8]=R8(c->r[3]+0x0000001Cu); // 801CF314
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF318
  c->r[0]=c->r[0]|0x04000000u; // 801CF31C
  c->r[9]=c->r[11]+c->r[9]; // 801CF320
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF324
  c->r[7]=c->r[9]+0x00000028u; // 801CF328
  c->r[10]=c->r[7]-c->r[10]; // 801CF32C
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF330
  c->r[7]=rotl(c->r[12],7)&0x0000FF80u; // 801CF334
  c->r[9]=c->r[8]|c->r[7]; // 801CF338
  c->r[8]=rotl(c->r[12],23)&0x007FFFFFu; // 801CF33C
  c->r[7]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801CF340
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF344
  c->r[8]=c->r[8]|c->r[7]; // 801CF348
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF34C
  c->r[0]=c->r[0]|0x08000000u; // 801CF350
  W16(c->r[4]+0x0000000Au,c->r[9]); // 801CF354
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF358
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF35C
  W16(c->r[4]+0x00000008u,c->r[8]); // 801CF360
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF364
  c->r[7]=R16(c->r[3]+0x00000010u); // 801CF368
  c->r[9]=R8(c->r[3]+0x0000000Cu); // 801CF36C
  c->r[0]=c->r[0]|0x00100000u; // 801CF370
  c->r[8]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CF374
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF378
  c->r[8]=c->r[9]|c->r[8]; // 801CF37C
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF380
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF384
  W16(c->r[4]+0x00000016u,c->r[8]); // 801CF388
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF38C
  c->r[7]=R16(c->r[3]+0x00000014u); // 801CF390
  c->r[9]=R8(c->r[3]+0x0000000Eu); // 801CF394
  c->r[0]=c->r[0]|0x00200000u; // 801CF398
  c->r[8]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CF39C
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF3A0
  c->r[8]=c->r[9]|c->r[8]; // 801CF3A4
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF3A8
  W16(c->r[4]+0x00000014u,c->r[8]); // 801CF3AC
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF3B0
  c->r[7]=R16(c->r[3]+0x00000012u); // 801CF3B4
  c->r[10]=R8(c->r[3]+0x0000000Du); // 801CF3B8
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF3BC
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 801CF3C0
  c->r[10]=c->r[10]|c->r[7]; // 801CF3C4
  c->r[9]=R32(c->r[13]+0xFFFF9EA4u); // 801CF3C8
  c->r[7]=R16(c->r[5]+0x00000012u); // 801CF3CC
  c->r[8]=c->r[0]|0x00040000u; // 801CF3D0
  W32(c->r[13]+0xFFFF9EA4u,c->r[9]); // 801CF3D4
  c->r[0]=c->r[7]+0x0000000Fu; // 801CF3D8
  c->r[7]=R32(c->r[5]+0x00000020u); // 801CF3DC
  W32(c->r[13]+0xFFFF9EA0u,c->r[8]); // 801CF3E0
  c->r[0]=sraw(c,c->r[0],4); // 801CF3E4
  cmps(c,0,(int32_t)c->r[7],0); // 801CF3E8
  c->r[11]=R16(c->r[5]+0x00000016u); // 801CF3EC
  W16(c->r[4]+0x0000001Au,c->r[10]); // 801CF3F0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801CF3F4
  c->r[7]=R32(c->r[13]+0xFFFF9EA0u); // 801CF3F8
  c->r[8]=R16(c->r[3]+0x00000016u); // 801CF3FC
  c->r[9]=R8(c->r[3]+0x0000000Fu); // 801CF400
  c->r[3]=c->r[7]|0x00080000u; // 801CF404
  c->r[8]=rotl(c->r[8],5)&0xFFFFFFE0u; // 801CF408
  c->r[7]=R32(c->r[13]+0xFFFF9EA4u); // 801CF40C
  c->r[8]=c->r[9]|c->r[8]; // 801CF410
  W8(c->r[5]+0x0000002Cu,c->r[0]); // 801CF414
  W32(c->r[13]+0xFFFF9EA4u,c->r[7]); // 801CF418
  W16(c->r[4]+0x00000018u,c->r[8]); // 801CF41C
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 801CF420
  if (!crb(c,2)) { goto L_801CF430; } // 801CF424
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 801CF428
  goto L_801CF434; // 801CF42C
L_801CF430:;
  c->r[9]=rotl(c->r[0],1)&0x000000FEu; // 801CF430
L_801CF434:;
  c->r[0]=rotl(c->r[11],28)&0xF0000000u; // 801CF434
  c->r[3]=rotl(c->r[11],1)&0x00000001u; // 801CF438
  c->r[0]=c->r[0]-c->r[3]; // 801CF43C
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF440
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFFFu; // 801CF444
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CF448
  c->r[8]=c->r[0]+c->r[3]; // 801CF44C
  c->r[0]=R32(c->r[13]+0xFFFF9EB8u); // 801CF450
  c->r[7]=rotl(c->r[8],0)&0x000000FFu; // 801CF454
  c->r[3]=0u+0x80570000u; // 801CF458
  c->r[7]=c->r[6]+c->r[7]; // 801CF45C
  c->r[6]=0u+0x80570000u; // 801CF460
  c->r[7]=c->r[7]+0x0000000Fu; // 801CF464
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CF468
  c->r[7]=sraw(c,c->r[7],4); // 801CF46C
  c->r[4]=c->r[4]|0x08000000u; // 801CF470
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 801CF474
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CF478
  c->r[4]=c->r[9]|c->r[9]; // 801CF47C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF480
  c->r[6]=c->r[6]+0xFFFFF3F8u; // 801CF484
  W8(c->r[3]+0x0000002Du,c->r[9]); // 801CF488
  c->r[4]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801CF48C
  W8(c->r[3]+0x0000003Cu,c->r[8]); // 801CF490
  W8(c->r[3]+0x0000002Eu,c->r[7]); // 801CF494
  W16(c->r[6]+0x00000048u,c->r[4]); // 801CF498
  W32(c->r[13]+0xFFFF9EA0u,c->r[5]); // 801CF49C
  if (crb(c,2)) { goto L_801CF4B8; } // 801CF4A0
  c->r[4]=c->r[3]+0x00000034u; // 801CF4A4
  c->r[5]=c->r[3]+0x00000038u; // 801CF4A8
  c->r[6]=c->r[3]+0x0000004Cu; // 801CF4AC
  c->r[7]=c->r[3]+0x00000050u; // 801CF4B0
  c->lr=0x801CF4B8u; f_801CE930(c); // 801CF4B4
L_801CF4B8:;
  c->r[4]=0u+0x80570000u; // 801CF4B8
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF4BC
  c->r[0]=R32(c->r[4]+0x00000040u); // 801CF4C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF4C4
  c->r[3]=R16(c->r[4]+0x0000000Au); // 801CF4C8
  c->r[4]=R16(c->r[4]+0x0000000Cu); // 801CF4CC
  c->r[5]=R8(c->r[31]+0x00000000u); // 801CF4D0
  c->r[6]=R16(c->r[31]+0x00000002u); // 801CF4D4
  c->r[7]=R16(c->r[31]+0x00000004u); // 801CF4D8
  c->r[8]=R16(c->r[31]+0x00000006u); // 801CF4DC
  c->r[9]=R16(c->r[31]+0x00000008u); // 801CF4E0
  c->r[10]=R16(c->r[31]+0x0000000Au); // 801CF4E4
  c->lr=0x801CF4ECu; f_801CEBE8(c); // 801CF4E8
  c->r[3]=c->r[30]|c->r[30]; // 801CF4EC
  c->lr=0x801CF4F4u; f_801BE774(c); // 801CF4F0
  c->r[11]=c->r[1]+0x00000030u; // 801CF4F4
  c->lr=0x801CF4FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF4F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF4FC
  c->lr=c->r[0]; // 801CF500
  c->r[1]=c->r[1]+0x00000030u; // 801CF504
  return; // 801CF508
}

// VIConfigurePan
void f_801CF50C(Ctx* __restrict c) {
  trace_call(0x801CF50Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF50C
  c->r[0]=c->lr; // 801CF510
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF514
  c->r[11]=c->r[1]+0x00000030u; // 801CF518
  c->lr=0x801CF520u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF51C
  c->r[29]=c->r[3]|c->r[3]; // 801CF520
  c->r[28]=c->r[4]|c->r[4]; // 801CF524
  c->r[27]=c->r[5]|c->r[5]; // 801CF528
  c->r[26]=c->r[6]|c->r[6]; // 801CF52C
  c->lr=0x801CF534u; f_801BE74C(c); // 801CF530
  c->r[4]=0u+0x80570000u; // 801CF534
  c->r[31]=c->r[3]|c->r[3]; // 801CF538
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF53C
  c->r[0]=R32(c->r[4]+0x00000024u); // 801CF540
  W16(c->r[4]+0x00000016u,c->r[29]); // 801CF544
  cmpu(c,0,c->r[0],0x00000002u); // 801CF548
  W16(c->r[4]+0x00000018u,c->r[28]); // 801CF54C
  W16(c->r[4]+0x0000001Au,c->r[27]); // 801CF550
  W16(c->r[4]+0x0000001Cu,c->r[26]); // 801CF554
  if (!crb(c,2)) { goto L_801CF560; } // 801CF558
  goto L_801CF57C; // 801CF55C
L_801CF560:;
  cmpu(c,0,c->r[0],0x00000003u); // 801CF560
  if (!crb(c,2)) { goto L_801CF56C; } // 801CF564
  goto L_801CF57C; // 801CF568
L_801CF56C:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 801CF56C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF570
  if (!crb(c,2)) { goto L_801CF57C; } // 801CF574
  c->r[26]=rotl(c->r[26],1)&0x0000FFFEu; // 801CF578
L_801CF57C:;
  c->r[4]=0u+0x80570000u; // 801CF57C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E94u); // 801CF580
  c->r[5]=c->r[4]+0xFFFFF470u; // 801CF584
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFFF470u); // 801CF588
  c->r[0]=R16(c->r[5]+0x00000004u); // 801CF58C
  W16(c->r[5]+0x00000006u,c->r[26]); // 801CF590
  c->r[3]=c->r[4]+c->r[3]; // 801CF594
  c->r[6]=addc(c,~c->r[0],0x000002D0u,1); // 801CF598
  c->r[30]=R32(c->r[5]+0x00000054u); // 801CF59C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[6]); // 801CF5A0
  c->r[5]=R16(c->r[30]+0x00000002u); // 801CF5A4
  if (!crb(c,1)) { goto L_801CF5B0; } // 801CF5A8
  goto L_801CF5B8; // 801CF5AC
L_801CF5B0:;
  c->r[0]=sraw(c,c->r[3],31); // 801CF5B0
  c->r[6]=c->r[3]&~c->r[0]; // 801CF5B4
L_801CF5B8:;
  c->r[4]=0u+0x80570000u; // 801CF5B8
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9E96u); // 801CF5BC
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF5C0
  c->r[7]=R16(c->r[4]+0x00000002u); // 801CF5C4
  c->r[3]=R32(c->r[4]+0x00000020u); // 801CF5C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CF5CC
  c->r[12]=rotl(c->r[7],0)&0x00000001u; // 801CF5D0
  c->r[7]=c->r[0]+c->r[9]; // 801CF5D4
  W16(c->r[4]+0x00000008u,c->r[6]); // 801CF5D8
  c->r[0]=cntlz(c->r[3]); // 801CF5DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801CF5E0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[12]); // 801CF5E4
  c->r[0]=c->r[12]|c->r[12]; // 801CF5E8
  c->r[4]=c->r[3]+0x00000001u; // 801CF5EC
  if (!crb(c,1)) { goto L_801CF5F8; } // 801CF5F0
  c->r[0]=c->r[7]|c->r[7]; // 801CF5F4
L_801CF5F8:;
  c->r[3]=0u+0x80570000u; // 801CF5F8
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 801CF5FC
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CF600
  c->r[7]=R16(c->r[3]+0x00000002u); // 801CF604
  c->r[6]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801CF608
  c->r[5]=R16(c->r[3]+0x00000006u); // 801CF60C
  c->r[26]=c->r[6]-c->r[12]; // 801CF610
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801CF614
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801CF618
  c->r[11]=c->r[9]+c->r[6]; // 801CF61C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 801CF620
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 801CF624
  c->r[9]=c->r[8]+c->r[9]; // 801CF628
  c->r[6]=c->r[6]+c->r[11]; // 801CF62C
  c->r[27]=c->r[11]-c->r[12]; // 801CF630
  c->r[6]=c->r[6]-c->r[26]; // 801CF634
  c->r[7]=c->r[7]+c->r[11]; // 801CF638
  c->r[8]=0u-c->r[6]; // 801CF63C
  c->r[12]=c->r[9]-c->r[12]; // 801CF640
  c->r[10]=c->r[8]&~c->r[6]; // 801CF644
  c->r[26]=c->r[7]-c->r[26]; // 801CF648
  c->r[28]=sraw(c,c->r[10],31); // 801CF64C
  c->r[8]=R32(c->r[3]+0x00000044u); // 801CF650
  c->r[11]=sraw(c,c->r[27],31); // 801CF654
  c->r[9]=0u-c->r[26]; // 801CF658
  c->r[10]=sraw(c,c->r[12],31); // 801CF65C
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801CF660
  c->r[29]=c->r[27]&c->r[11]; // 801CF664
  c->r[9]=c->r[9]&~c->r[26]; // 801CF668
  c->r[11]=sraw(c,c->r[9],31); // 801CF66C
  c->r[12]=c->r[12]&c->r[10]; // 801CF670
  c->r[9]=sraw(c,c->r[27],31); // 801CF674
  c->r[10]=R16(c->r[3]+0x0000001Cu); // 801CF678
  c->r[9]=c->r[27]&c->r[9]; // 801CF67C
  c->r[27]=c->r[6]&c->r[28]; // 801CF680
  c->r[26]=c->r[26]&c->r[11]; // 801CF684
  c->r[0]=c->r[5]+c->r[29]; // 801CF688
  c->r[9]=divw((int32_t)c->r[9],(int32_t)c->r[4]); // 801CF68C
  c->r[11]=R16(c->r[3]+0x00000018u); // 801CF690
  c->r[0]=c->r[0]-c->r[27]; // 801CF694
  c->r[7]=R16(c->r[3]+0x0000001Au); // 801CF698
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 801CF69C
  cmps(c,0,(int32_t)c->r[8],0); // 801CF6A0
  c->r[6]=divw((int32_t)c->r[12],(int32_t)c->r[4]); // 801CF6A4
  c->r[5]=c->r[10]+c->r[9]; // 801CF6A8
  c->r[28]=R16(c->r[3]+0x00000004u); // 801CF6AC
  c->r[0]=c->r[7]|c->r[7]; // 801CF6B0
  c->r[4]=divw((int32_t)c->r[26],(int32_t)c->r[4]); // 801CF6B4
  c->r[6]=c->r[11]-c->r[6]; // 801CF6B8
  W16(c->r[3]+0x0000000Eu,c->r[6]); // 801CF6BC
  c->r[4]=c->r[5]-c->r[4]; // 801CF6C0
  W16(c->r[3]+0x00000010u,c->r[4]); // 801CF6C4
  if (crb(c,2)) { goto L_801CF6D0; } // 801CF6C8
  c->r[0]=rotl(c->r[7],1)&0x0001FFFEu; // 801CF6CC
L_801CF6D0:;
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801CF6D0
  cmpu(c,0,c->r[6],c->r[28]); // 801CF6D4
  if (!crb(c,0)) { goto L_801CF72C; } // 801CF6D8
  c->r[0]=rotl(c->r[6],8)&0x00FFFF00u; // 801CF6DC
  c->r[3]=R32(c->r[13]+0xFFFF9EA0u); // 801CF6E0
  c->r[4]=c->r[28]+c->r[0]; // 801CF6E4
  c->r[0]=R32(c->r[13]+0xFFFF9EA4u); // 801CF6E8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801CF6EC
  c->r[5]=divwu(c->r[5],c->r[28]); // 801CF6F0
  c->r[0]=c->r[0]|0x04000000u; // 801CF6F4
  W32(c->r[13]+0xFFFF9EA4u,c->r[0]); // 801CF6F8
  c->r[4]=0u+0x80570000u; // 801CF6FC
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 801CF700
  c->r[4]=c->r[4]+0xFFFFF3F8u; // 801CF704
  c->r[3]=R32(c->r[13]+0xFFFF9EA0u); // 801CF708
  c->r[5]=c->r[5]|0x00001000u; // 801CF70C
  c->r[0]=R32(c->r[13]+0xFFFF9EA4u); // 801CF710
  W16(c->r[4]+0x0000004Au,c->r[5]); // 801CF714
  c->r[0]=c->r[0]|0x00000080u; // 801CF718
  W32(c->r[13]+0xFFFF9EA4u,c->r[0]); // 801CF71C
  W16(c->r[4]+0x00000070u,c->r[6]); // 801CF720
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 801CF724
  goto L_801CF750; // 801CF728
L_801CF72C:;
  c->r[3]=R32(c->r[13]+0xFFFF9EA0u); // 801CF72C
  c->r[4]=0u+0x80570000u; // 801CF730
  c->r[0]=R32(c->r[13]+0xFFFF9EA4u); // 801CF734
  c->r[4]=c->r[4]+0xFFFFF3F8u; // 801CF738
  c->r[5]=0u+0x00000100u; // 801CF73C
  c->r[0]=c->r[0]|0x04000000u; // 801CF740
  W16(c->r[4]+0x0000004Au,c->r[5]); // 801CF744
  W32(c->r[13]+0xFFFF9EA4u,c->r[0]); // 801CF748
  W32(c->r[13]+0xFFFF9EA0u,c->r[3]); // 801CF74C
L_801CF750:;
  c->r[4]=0u+0x80570000u; // 801CF750
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF754
  c->r[3]=R16(c->r[4]+0x00000012u); // 801CF758
  c->r[5]=R32(c->r[4]+0x00000020u); // 801CF75C
  c->r[0]=c->r[3]+0x0000000Fu; // 801CF760
  c->r[3]=R16(c->r[4]+0x00000016u); // 801CF764
  c->r[0]=sraw(c,c->r[0],4); // 801CF768
  cmps(c,0,(int32_t)c->r[5],0); // 801CF76C
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801CF770
  W8(c->r[4]+0x0000002Cu,c->r[0]); // 801CF774
  if (!crb(c,2)) { goto L_801CF784; } // 801CF778
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 801CF77C
  goto L_801CF788; // 801CF780
L_801CF784:;
  c->r[9]=rotl(c->r[0],1)&0x000000FEu; // 801CF784
L_801CF788:;
  c->r[0]=rotl(c->r[3],28)&0xF0000000u; // 801CF788
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801CF78C
  c->r[0]=c->r[0]-c->r[3]; // 801CF790
  c->r[5]=R32(c->r[13]+0xFFFF9EA0u); // 801CF794
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFFFu; // 801CF798
  c->r[4]=R32(c->r[13]+0xFFFF9EA4u); // 801CF79C
  c->r[8]=c->r[0]+c->r[3]; // 801CF7A0
  c->r[0]=R32(c->r[13]+0xFFFF9EB8u); // 801CF7A4
  c->r[6]=rotl(c->r[8],0)&0x000000FFu; // 801CF7A8
  c->r[3]=0u+0x80570000u; // 801CF7AC
  c->r[7]=c->r[7]+c->r[6]; // 801CF7B0
  c->r[4]=c->r[4]|0x08000000u; // 801CF7B4
  c->r[7]=c->r[7]+0x0000000Fu; // 801CF7B8
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CF7BC
  c->r[7]=sraw(c,c->r[7],4); // 801CF7C0
  W32(c->r[13]+0xFFFF9EA4u,c->r[4]); // 801CF7C4
  c->r[6]=0u+0x80570000u; // 801CF7C8
  c->r[4]=c->r[9]|c->r[9]; // 801CF7CC
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 801CF7D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CF7D4
  c->r[6]=c->r[6]+0xFFFFF3F8u; // 801CF7D8
  W8(c->r[3]+0x0000002Du,c->r[9]); // 801CF7DC
  c->r[4]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 801CF7E0
  W8(c->r[3]+0x0000003Cu,c->r[8]); // 801CF7E4
  W8(c->r[3]+0x0000002Eu,c->r[7]); // 801CF7E8
  W16(c->r[6]+0x00000048u,c->r[4]); // 801CF7EC
  W32(c->r[13]+0xFFFF9EA0u,c->r[5]); // 801CF7F0
  if (crb(c,2)) { goto L_801CF80C; } // 801CF7F4
  c->r[4]=c->r[3]+0x00000034u; // 801CF7F8
  c->r[5]=c->r[3]+0x00000038u; // 801CF7FC
  c->r[6]=c->r[3]+0x0000004Cu; // 801CF800
  c->r[7]=c->r[3]+0x00000050u; // 801CF804
  c->lr=0x801CF80Cu; f_801CE930(c); // 801CF808
L_801CF80C:;
  c->r[4]=0u+0x80570000u; // 801CF80C
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CF810
  c->r[0]=R32(c->r[4]+0x00000040u); // 801CF814
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF818
  c->r[3]=R16(c->r[4]+0x0000000Au); // 801CF81C
  c->r[4]=R16(c->r[4]+0x00000006u); // 801CF820
  c->r[5]=R8(c->r[30]+0x00000000u); // 801CF824
  c->r[6]=R16(c->r[30]+0x00000002u); // 801CF828
  c->r[7]=R16(c->r[30]+0x00000004u); // 801CF82C
  c->r[8]=R16(c->r[30]+0x00000006u); // 801CF830
  c->r[9]=R16(c->r[30]+0x00000008u); // 801CF834
  c->r[10]=R16(c->r[30]+0x0000000Au); // 801CF838
  c->lr=0x801CF840u; f_801CEBE8(c); // 801CF83C
  c->r[3]=c->r[31]|c->r[31]; // 801CF840
  c->lr=0x801CF848u; f_801BE774(c); // 801CF844
  c->r[11]=c->r[1]+0x00000030u; // 801CF848
  c->lr=0x801CF850u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF84C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF850
  c->lr=c->r[0]; // 801CF854
  c->r[1]=c->r[1]+0x00000030u; // 801CF858
  return; // 801CF85C
}

// VIFlush
void f_801CF860(Ctx* __restrict c) {
  trace_call(0x801CF860u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF860
  c->r[0]=c->lr; // 801CF864
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF868
  c->r[11]=c->r[1]+0x00000020u; // 801CF86C
  c->lr=0x801CF874u; f_801E795C(c); // 801CF870
  c->r[31]=0u+0x80570000u; // 801CF874
  c->r[31]=c->r[31]+0xFFFFF380u; // 801CF878
  c->lr=0x801CF880u; f_801BE74C(c); // 801CF87C
  c->r[5]=R32(c->r[13]+0xFFFF9EA8u); // 801CF880
  c->r[0]=0u+0x00000000u; // 801CF884
  c->r[4]=R32(c->r[13]+0xFFFF9E98u); // 801CF888
  c->r[30]=c->r[3]|c->r[3]; // 801CF88C
  c->r[28]=c->r[31]+0x00000078u; // 801CF890
  c->r[29]=c->r[31]+0x00000000u; // 801CF894
  c->r[3]=c->r[5]|c->r[4]; // 801CF898
  c->r[27]=0u+0xFFFFFFFFu; // 801CF89C
  W32(c->r[13]+0xFFFF9EA8u,c->r[3]); // 801CF8A0
  W32(c->r[13]+0xFFFF9E98u,c->r[0]); // 801CF8A4
  c->r[4]=R32(c->r[13]+0xFFFF9EB0u); // 801CF8A8
  c->r[5]=R32(c->r[13]+0xFFFF9EB4u); // 801CF8AC
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF8B0
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CF8B4
  c->r[0]=c->r[4]|c->r[0]; // 801CF8B8
  c->r[3]=c->r[5]|c->r[3]; // 801CF8BC
  W32(c->r[13]+0xFFFF9EB4u,c->r[3]); // 801CF8C0
  W32(c->r[13]+0xFFFF9EB0u,c->r[0]); // 801CF8C4
  goto L_801CF92C; // 801CF8C8
L_801CF8CC:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF8CC
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CF8D0
  c->r[0]=cntlz(c->r[0]); // 801CF8D4
  cmps(c,0,(int32_t)c->r[0],32); // 801CF8D8
  c->r[3]=c->r[3]&c->r[27]; // 801CF8DC
  if (!crb(c,0)) { goto L_801CF8E8; } // 801CF8E0
  goto L_801CF8F0; // 801CF8E4
L_801CF8E8:;
  c->r[3]=cntlz(c->r[3]); // 801CF8E8
  c->r[0]=c->r[3]+0x00000020u; // 801CF8EC
L_801CF8F0:;
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CF8F0
  c->r[5]=addc(c,~c->r[0],0x0000003Fu,1); // 801CF8F4
  c->r[0]=R16(c->r[28]+c->r[6]); // 801CF8F8
  c->r[4]=0u+0x00000001u; // 801CF8FC
  c->r[3]=0u+0x00000000u; // 801CF900
  W16(c->r[29]+c->r[6],c->r[0]); // 801CF904
  c->lr=0x801CF90Cu; f_801E7DD4(c); // 801CF908
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF90C
  c->r[5]=~(c->r[3]|c->r[3]); // 801CF910
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CF914
  c->r[4]=~(c->r[4]|c->r[4]); // 801CF918
  c->r[0]=c->r[0]&c->r[5]; // 801CF91C
  c->r[3]=c->r[3]&c->r[4]; // 801CF920
  W32(c->r[13]+0xFFFF9EA4u,c->r[3]); // 801CF924
  W32(c->r[13]+0xFFFF9EA0u,c->r[0]); // 801CF928
L_801CF92C:;
  c->r[0]=R32(c->r[13]+0xFFFF9EA0u); // 801CF92C
  c->r[3]=R32(c->r[13]+0xFFFF9EA4u); // 801CF930
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801CF934
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF8CC; } // 801CF938
  c->r[3]=c->r[31]+0x000000F0u; // 801CF93C
  c->r[4]=0u+0x00000001u; // 801CF940
  c->r[0]=R32(c->r[3]+0x00000030u); // 801CF944
  c->r[3]=c->r[30]|c->r[30]; // 801CF948
  W32(c->r[13]+0xFFFF9F10u,c->r[4]); // 801CF94C
  W32(c->r[13]+0xFFFF9F0Cu,c->r[4]); // 801CF950
  W32(c->r[13]+0xFFFF9ED4u,c->r[0]); // 801CF954
  c->lr=0x801CF95Cu; f_801BE774(c); // 801CF958
  c->r[11]=c->r[1]+0x00000020u; // 801CF95C
  c->lr=0x801CF964u; f_801E79A8(c); // 801CF960
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF964
  c->lr=c->r[0]; // 801CF968
  c->r[1]=c->r[1]+0x00000020u; // 801CF96C
  return; // 801CF970
}

// VISetNextFrameBuffer
void f_801CF974(Ctx* __restrict c) {
  trace_call(0x801CF974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF974
  c->r[0]=c->lr; // 801CF978
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF97C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF980
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF984
  c->r[30]=c->r[3]|c->r[3]; // 801CF988
  c->lr=0x801CF990u; f_801BE74C(c); // 801CF98C
  c->r[7]=0u+0x80570000u; // 801CF990
  c->r[0]=0u+0x00000001u; // 801CF994
  c->r[7]=c->r[7]+0xFFFFF470u; // 801CF998
  c->r[31]=c->r[3]|c->r[3]; // 801CF99C
  W32(c->r[7]+0x00000030u,c->r[30]); // 801CF9A0
  c->r[3]=c->r[7]|c->r[7]; // 801CF9A4
  c->r[4]=c->r[7]+0x00000034u; // 801CF9A8
  c->r[5]=c->r[7]+0x00000038u; // 801CF9AC
  c->r[6]=c->r[7]+0x0000004Cu; // 801CF9B0
  W32(c->r[13]+0xFFFF9EB8u,c->r[0]); // 801CF9B4
  c->r[7]=c->r[7]+0x00000050u; // 801CF9B8
  c->lr=0x801CF9C0u; f_801CE930(c); // 801CF9BC
  c->r[3]=c->r[31]|c->r[31]; // 801CF9C0
  c->lr=0x801CF9C8u; f_801BE774(c); // 801CF9C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF9C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF9CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF9D0
  c->lr=c->r[0]; // 801CF9D4
  c->r[1]=c->r[1]+0x00000010u; // 801CF9D8
  return; // 801CF9DC
}

// fn_801CF9E0
void f_801CF9E0(Ctx* __restrict c) {
  trace_call(0x801CF9E0u);
  c->r[3]=R32(c->r[13]+0xFFFF9ED0u); // 801CF9E0
  return; // 801CF9E4
}

// VISetBlack
void f_801CF9E8(Ctx* __restrict c) {
  trace_call(0x801CF9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF9E8
  c->r[0]=c->lr; // 801CF9EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF9F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF9F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF9F8
  c->r[30]=c->r[3]|c->r[3]; // 801CF9FC
  c->lr=0x801CFA04u; f_801BE74C(c); // 801CFA00
  c->r[4]=0u+0x80570000u; // 801CFA04
  c->r[31]=c->r[3]|c->r[3]; // 801CFA08
  c->r[4]=c->r[4]+0xFFFFF470u; // 801CFA0C
  W32(c->r[4]+0x00000040u,c->r[30]); // 801CFA10
  c->r[10]=R32(c->r[4]+0x00000054u); // 801CFA14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFA18
  c->r[3]=R16(c->r[4]+0x0000000Au); // 801CFA1C
  c->r[4]=R16(c->r[4]+0x00000006u); // 801CFA20
  c->r[5]=R8(c->r[10]+0x00000000u); // 801CFA24
  c->r[6]=R16(c->r[10]+0x00000002u); // 801CFA28
  c->r[7]=R16(c->r[10]+0x00000004u); // 801CFA2C
  c->r[8]=R16(c->r[10]+0x00000006u); // 801CFA30
  c->r[9]=R16(c->r[10]+0x00000008u); // 801CFA34
  c->r[10]=R16(c->r[10]+0x0000000Au); // 801CFA38
  c->lr=0x801CFA40u; f_801CEBE8(c); // 801CFA3C
  c->r[3]=c->r[31]|c->r[31]; // 801CFA40
  c->lr=0x801CFA48u; f_801BE774(c); // 801CFA44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFA48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFA4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFA50
  c->lr=c->r[0]; // 801CFA54
  c->r[1]=c->r[1]+0x00000020u; // 801CFA58
  return; // 801CFA5C
}

// VIGetRetraceCount
void f_801CFA60(Ctx* __restrict c) {
  trace_call(0x801CFA60u);
  c->r[3]=R32(c->r[13]+0xFFFF9F14u); // 801CFA60
  return; // 801CFA64
}

// VIGetNextField
void f_801CFA68(Ctx* __restrict c) {
  trace_call(0x801CFA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA68
  c->r[0]=c->lr; // 801CFA6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFA70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFA74
  c->lr=0x801CFA7Cu; f_801BE74C(c); // 801CFA78
  c->r[5]=0u+0xCC000000u; // 801CFA7C
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CFA80
  c->r[6]=rotl(c->r[0],0)&0x000007FFu; // 801CFA84
L_801CFA88:;
  c->r[4]=R16(c->r[5]+0x0000202Eu); // 801CFA88
  c->r[7]=c->r[6]|c->r[6]; // 801CFA8C
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CFA90
  c->r[8]=rotl(c->r[4],0)&0x000007FFu; // 801CFA94
  c->r[6]=rotl(c->r[0],0)&0x000007FFu; // 801CFA98
  cmpu(c,0,c->r[7],c->r[6]); // 801CFA9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFA88; } // 801CFAA0
  c->r[7]=R32(c->r[13]+0xFFFF9EDCu); // 801CFAA4
  c->r[4]=c->r[6]+0xFFFFFFFFu; // 801CFAA8
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801CFAAC
  c->r[5]=c->r[8]+0xFFFFFFFFu; // 801CFAB0
  c->r[0]=R16(c->r[7]+0x0000001Au); // 801CFAB4
  c->r[4]=R16(c->r[7]+0x00000018u); // 801CFAB8
  c->r[0]=divwu(c->r[5],c->r[0]); // 801CFABC
  c->r[0]=c->r[6]+c->r[0]; // 801CFAC0
  c->r[0]=c->r[4]^c->r[0]; // 801CFAC4
  c->r[0]=cntlz(c->r[0]); // 801CFAC8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801CFACC
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801CFAD0
  c->lr=0x801CFAD8u; f_801BE774(c); // 801CFAD4
  c->r[3]=0u+0x80570000u; // 801CFAD8
  c->r[4]=c->r[31]^0x00000001u; // 801CFADC
  c->r[3]=c->r[3]+0xFFFFF470u; // 801CFAE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFAE4
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801CFAE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801CFAEC
  c->r[3]=c->r[4]^c->r[0]; // 801CFAF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFAF4
  c->lr=c->r[0]; // 801CFAF8
  c->r[1]=c->r[1]+0x00000010u; // 801CFAFC
  return; // 801CFB00
}

// VIGetCurrentLine
void f_801CFB04(Ctx* __restrict c) {
  trace_call(0x801CFB04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB04
  c->r[0]=c->lr; // 801CFB08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFB10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFB14
  c->r[30]=R32(c->r[13]+0xFFFF9EDCu); // 801CFB18
  c->lr=0x801CFB20u; f_801BE74C(c); // 801CFB1C
  c->r[5]=0u+0xCC000000u; // 801CFB20
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CFB24
  c->r[8]=rotl(c->r[0],0)&0x000007FFu; // 801CFB28
L_801CFB2C:;
  c->r[4]=R16(c->r[5]+0x0000202Eu); // 801CFB2C
  c->r[6]=c->r[8]|c->r[8]; // 801CFB30
  c->r[0]=R16(c->r[5]+0x0000202Cu); // 801CFB34
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 801CFB38
  c->r[8]=rotl(c->r[0],0)&0x000007FFu; // 801CFB3C
  cmpu(c,0,c->r[6],c->r[8]); // 801CFB40
  if (!crb(c,2)) { IRQCHK(c); goto L_801CFB2C; } // 801CFB44
  c->r[4]=R32(c->r[13]+0xFFFF9EDCu); // 801CFB48
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 801CFB4C
  c->r[6]=c->r[8]+0xFFFFFFFFu; // 801CFB50
  c->r[0]=R16(c->r[4]+0x0000001Au); // 801CFB54
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801CFB58
  c->r[0]=divwu(c->r[5],c->r[0]); // 801CFB5C
  c->r[31]=c->r[4]+c->r[0]; // 801CFB60
  c->lr=0x801CFB68u; f_801BE774(c); // 801CFB64
  c->r[0]=R16(c->r[30]+0x00000018u); // 801CFB68
  cmpu(c,0,c->r[31],c->r[0]); // 801CFB6C
  if (crb(c,0)) { goto L_801CFB78; } // 801CFB70
  c->r[31]=c->r[31]-c->r[0]; // 801CFB74
L_801CFB78:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801CFB78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFB7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFB80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB84
  c->lr=c->r[0]; // 801CFB88
  c->r[1]=c->r[1]+0x00000010u; // 801CFB8C
  return; // 801CFB90
}

// VIGetTvFormat
void f_801CFB94(Ctx* __restrict c) {
  trace_call(0x801CFB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB94
  c->r[0]=c->lr; // 801CFB98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFBA0
  c->lr=0x801CFBA8u; f_801BE74C(c); // 801CFBA4
  c->r[31]=R32(c->r[13]+0xFFFF9ED8u); // 801CFBA8
  cmpu(c,0,c->r[31],0x00000007u); // 801CFBAC
  if (crb(c,1)) { goto L_801CFBD8; } // 801CFBB0
  c->r[4]=0u+0x804B0000u; // 801CFBB4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801CFBB8
  c->r[4]=c->r[4]+0x00002558u; // 801CFBBC
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CFBC0
  c->ctr=c->r[4]; // 801CFBC4
  if (true) { switch (c->ctr) { case 0x801CFBCCu: goto L_801CFBCC; case 0x801CFBD4u: goto L_801CFBD4; case 0x801CFBD8u: goto L_801CFBD8; default: break; } dispatch(c,c->ctr); return; } // 801CFBC8
L_801CFBCC:;
  c->r[31]=0u+0x00000000u; // 801CFBCC
  goto L_801CFBD8; // 801CFBD0
L_801CFBD4:;
  c->r[31]=0u+0x00000001u; // 801CFBD4
L_801CFBD8:;
  c->lr=0x801CFBDCu; f_801BE774(c); // 801CFBD8
  c->r[3]=c->r[31]|c->r[31]; // 801CFBDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFBE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFBE4
  c->lr=c->r[0]; // 801CFBE8
  c->r[1]=c->r[1]+0x00000010u; // 801CFBEC
  return; // 801CFBF0
}

// VIGetScanMode
void f_801CFBF4(Ctx* __restrict c) {
  trace_call(0x801CFBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBF4
  c->r[0]=c->lr; // 801CFBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFBFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC00
  c->lr=0x801CFC08u; f_801BE74C(c); // 801CFC04
  c->r[4]=0u+0xCC000000u; // 801CFC08
  c->r[0]=R16(c->r[4]+0x0000206Cu); // 801CFC0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801CFC10
  cmpu(c,0,c->r[0],0x00000001u); // 801CFC14
  if (!crb(c,2)) { goto L_801CFC24; } // 801CFC18
  c->r[31]=0u+0x00000002u; // 801CFC1C
  goto L_801CFC38; // 801CFC20
L_801CFC24:;
  c->r[0]=R16(c->r[4]+0x00002002u); // 801CFC24
  c->r[4]=rotl(c->r[0],30)&0x00000001u; // 801CFC28
  c->r[0]=0u-c->r[4]; // 801CFC2C
  c->r[0]=c->r[0]|c->r[4]; // 801CFC30
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801CFC34
L_801CFC38:;
  c->lr=0x801CFC3Cu; f_801BE774(c); // 801CFC38
  c->r[3]=c->r[31]|c->r[31]; // 801CFC3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC44
  c->lr=c->r[0]; // 801CFC48
  c->r[1]=c->r[1]+0x00000010u; // 801CFC4C
  return; // 801CFC50
}

// VIGetDTVStatus
void f_801CFC54(Ctx* __restrict c) {
  trace_call(0x801CFC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC54
  c->r[0]=c->lr; // 801CFC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC60
  c->lr=0x801CFC68u; f_801BE74C(c); // 801CFC64
  c->r[4]=0u+0xCC000000u; // 801CFC68
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 801CFC6C
  c->r[31]=rotl(c->r[0],0)&0x00000003u; // 801CFC70
  c->lr=0x801CFC78u; f_801BE774(c); // 801CFC74
  c->r[3]=rotl(c->r[31],0)&0x00000001u; // 801CFC78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFC7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC80
  c->lr=c->r[0]; // 801CFC84
  c->r[1]=c->r[1]+0x00000010u; // 801CFC88
  return; // 801CFC8C
}

// __VIDisplayPositionToXY
void f_801CFC90(Ctx* __restrict c) {
  trace_call(0x801CFC90u);
  c->r[7]=R32(c->r[13]+0xFFFF9EDCu); // 801CFC90
  c->r[9]=c->r[4]+0xFFFFFFFFu; // 801CFC94
  c->r[8]=0u+0x80570000u; // 801CFC98
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801CFC9C
  c->r[0]=R16(c->r[7]+0x0000001Au); // 801CFCA0
  c->r[8]=c->r[8]+0xFFFFF470u; // 801CFCA4
  c->r[10]=R32(c->r[8]+0x00000024u); // 801CFCA8
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801CFCAC
  c->r[0]=divwu(c->r[4],c->r[0]); // 801CFCB0
  cmps(c,0,(int32_t)c->r[10],0); // 801CFCB4
  c->r[0]=c->r[8]+c->r[0]; // 801CFCB8
  if (!crb(c,2)) { goto L_801CFD84; } // 801CFCBC
  c->r[9]=R16(c->r[7]+0x00000018u); // 801CFCC0
  cmpu(c,0,c->r[0],c->r[9]); // 801CFCC4
  if (!crb(c,0)) { goto L_801CFD24; } // 801CFCC8
  c->r[8]=R8(c->r[7]+0x00000000u); // 801CFCCC
  c->r[10]=R16(c->r[7]+0x00000004u); // 801CFCD0
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801CFCD4
  c->r[8]=c->r[4]-c->r[8]; // 801CFCD8
  c->r[4]=c->r[10]+c->r[8]; // 801CFCDC
  cmpu(c,0,c->r[0],c->r[4]); // 801CFCE0
  if (!crb(c,0)) { goto L_801CFCF4; } // 801CFCE4
  c->r[0]=0u+0xFFFFFFFFu; // 801CFCE8
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFCEC
  goto L_801CFEB8; // 801CFCF0
L_801CFCF4:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 801CFCF4
  c->r[4]=c->r[9]-c->r[4]; // 801CFCF8
  cmpu(c,0,c->r[0],c->r[4]); // 801CFCFC
  if (crb(c,0)) { goto L_801CFD10; } // 801CFD00
  c->r[0]=0u+0xFFFFFFFFu; // 801CFD04
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFD08
  goto L_801CFEB8; // 801CFD0C
L_801CFD10:;
  c->r[0]=c->r[0]-c->r[8]; // 801CFD10
  c->r[0]=c->r[0]-c->r[10]; // 801CFD14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CFD18
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFD1C
  goto L_801CFEB8; // 801CFD20
L_801CFD24:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 801CFD24
  c->r[0]=c->r[0]-c->r[9]; // 801CFD28
  c->r[10]=R16(c->r[7]+0x00000006u); // 801CFD2C
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801CFD30
  c->r[8]=c->r[4]-c->r[8]; // 801CFD34
  c->r[4]=c->r[10]+c->r[8]; // 801CFD38
  cmpu(c,0,c->r[0],c->r[4]); // 801CFD3C
  if (!crb(c,0)) { goto L_801CFD50; } // 801CFD40
  c->r[0]=0u+0xFFFFFFFFu; // 801CFD44
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFD48
  goto L_801CFEB8; // 801CFD4C
L_801CFD50:;
  c->r[4]=R16(c->r[7]+0x0000000Au); // 801CFD50
  c->r[4]=c->r[9]-c->r[4]; // 801CFD54
  cmpu(c,0,c->r[0],c->r[4]); // 801CFD58
  if (crb(c,0)) { goto L_801CFD6C; } // 801CFD5C
  c->r[0]=0u+0xFFFFFFFFu; // 801CFD60
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFD64
  goto L_801CFEB8; // 801CFD68
L_801CFD6C:;
  c->r[0]=c->r[0]-c->r[8]; // 801CFD6C
  c->r[0]=c->r[0]-c->r[10]; // 801CFD70
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CFD74
  c->r[0]=c->r[4]+0x00000001u; // 801CFD78
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFD7C
  goto L_801CFEB8; // 801CFD80
L_801CFD84:;
  cmpu(c,0,c->r[10],0x00000001u); // 801CFD84
  if (!crb(c,2)) { goto L_801CFDF8; } // 801CFD88
  c->r[9]=R16(c->r[7]+0x00000018u); // 801CFD8C
  cmpu(c,0,c->r[0],c->r[9]); // 801CFD90
  if (crb(c,0)) { goto L_801CFD9C; } // 801CFD94
  c->r[0]=c->r[0]-c->r[9]; // 801CFD98
L_801CFD9C:;
  c->r[4]=R32(c->r[13]+0xFFFF9EDCu); // 801CFD9C
  c->r[8]=R8(c->r[4]+0x00000000u); // 801CFDA0
  c->r[10]=R16(c->r[4]+0x00000004u); // 801CFDA4
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801CFDA8
  c->r[8]=c->r[4]-c->r[8]; // 801CFDAC
  c->r[4]=c->r[10]+c->r[8]; // 801CFDB0
  cmpu(c,0,c->r[0],c->r[4]); // 801CFDB4
  if (!crb(c,0)) { goto L_801CFDC8; } // 801CFDB8
  c->r[0]=0u+0xFFFFFFFFu; // 801CFDBC
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFDC0
  goto L_801CFEB8; // 801CFDC4
L_801CFDC8:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 801CFDC8
  c->r[4]=c->r[9]-c->r[4]; // 801CFDCC
  cmpu(c,0,c->r[0],c->r[4]); // 801CFDD0
  if (crb(c,0)) { goto L_801CFDE4; } // 801CFDD4
  c->r[0]=0u+0xFFFFFFFFu; // 801CFDD8
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFDDC
  goto L_801CFEB8; // 801CFDE0
L_801CFDE4:;
  c->r[0]=c->r[0]-c->r[8]; // 801CFDE4
  c->r[0]=c->r[0]-c->r[10]; // 801CFDE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CFDEC
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFDF0
  goto L_801CFEB8; // 801CFDF4
L_801CFDF8:;
  cmpu(c,0,c->r[10],0x00000002u); // 801CFDF8
  if (!crb(c,2)) { goto L_801CFEB8; } // 801CFDFC
  c->r[9]=R16(c->r[7]+0x00000018u); // 801CFE00
  cmpu(c,0,c->r[0],c->r[9]); // 801CFE04
  if (!crb(c,0)) { goto L_801CFE60; } // 801CFE08
  c->r[8]=R8(c->r[7]+0x00000000u); // 801CFE0C
  c->r[10]=R16(c->r[7]+0x00000004u); // 801CFE10
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801CFE14
  c->r[8]=c->r[4]-c->r[8]; // 801CFE18
  c->r[4]=c->r[10]+c->r[8]; // 801CFE1C
  cmpu(c,0,c->r[0],c->r[4]); // 801CFE20
  if (!crb(c,0)) { goto L_801CFE34; } // 801CFE24
  c->r[0]=0u+0xFFFFFFFFu; // 801CFE28
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFE2C
  goto L_801CFEB8; // 801CFE30
L_801CFE34:;
  c->r[4]=R16(c->r[7]+0x00000008u); // 801CFE34
  c->r[4]=c->r[9]-c->r[4]; // 801CFE38
  cmpu(c,0,c->r[0],c->r[4]); // 801CFE3C
  if (crb(c,0)) { goto L_801CFE50; } // 801CFE40
  c->r[0]=0u+0xFFFFFFFFu; // 801CFE44
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFE48
  goto L_801CFEB8; // 801CFE4C
L_801CFE50:;
  c->r[0]=c->r[0]-c->r[8]; // 801CFE50
  c->r[0]=c->r[0]-c->r[10]; // 801CFE54
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFE58
  goto L_801CFEB8; // 801CFE5C
L_801CFE60:;
  c->r[8]=R8(c->r[7]+0x00000000u); // 801CFE60
  c->r[0]=c->r[0]-c->r[9]; // 801CFE64
  c->r[10]=R16(c->r[7]+0x00000006u); // 801CFE68
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801CFE6C
  c->r[8]=c->r[4]-c->r[8]; // 801CFE70
  c->r[4]=c->r[10]+c->r[8]; // 801CFE74
  cmpu(c,0,c->r[0],c->r[4]); // 801CFE78
  if (!crb(c,0)) { goto L_801CFE8C; } // 801CFE7C
  c->r[0]=0u+0xFFFFFFFFu; // 801CFE80
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFE84
  goto L_801CFEB8; // 801CFE88
L_801CFE8C:;
  c->r[4]=R16(c->r[7]+0x0000000Au); // 801CFE8C
  c->r[4]=c->r[9]-c->r[4]; // 801CFE90
  cmpu(c,0,c->r[0],c->r[4]); // 801CFE94
  if (crb(c,0)) { goto L_801CFEA8; } // 801CFE98
  c->r[0]=0u+0xFFFFFFFFu; // 801CFE9C
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFEA0
  goto L_801CFEB8; // 801CFEA4
L_801CFEA8:;
  c->r[0]=c->r[0]-c->r[8]; // 801CFEA8
  c->r[0]=c->r[0]-c->r[10]; // 801CFEAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801CFEB0
  W16(c->r[6]+0x00000000u,c->r[0]); // 801CFEB4
L_801CFEB8:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CFEB8
  W16(c->r[5]+0x00000000u,c->r[0]); // 801CFEBC
  return; // 801CFEC0
}

// VISetTimeToDimming
void f_801CFEC4(Ctx* __restrict c) {
  trace_call(0x801CFEC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFEC4
  c->r[0]=c->lr; // 801CFEC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFED0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFED4
  c->r[30]=R32(c->r[13]+0xFFFF9F00u); // 801CFED8
  W32(c->r[13]+0xFFFF9F00u,c->r[3]); // 801CFEDC
  c->lr=0x801CFEE4u; f_801BE74C(c); // 801CFEE0
  c->r[31]=R32(c->r[13]+0xFFFF9ED8u); // 801CFEE4
  cmpu(c,0,c->r[31],0x00000007u); // 801CFEE8
  if (crb(c,1)) { goto L_801CFF14; } // 801CFEEC
  c->r[4]=0u+0x804B0000u; // 801CFEF0
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801CFEF4
  c->r[4]=c->r[4]+0x00002578u; // 801CFEF8
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CFEFC
  c->ctr=c->r[4]; // 801CFF00
  if (true) { switch (c->ctr) { case 0x801CFF08u: goto L_801CFF08; case 0x801CFF10u: goto L_801CFF10; case 0x801CFF14u: goto L_801CFF14; default: break; } dispatch(c,c->ctr); return; } // 801CFF04
L_801CFF08:;
  c->r[31]=0u+0x00000000u; // 801CFF08
  goto L_801CFF14; // 801CFF0C
L_801CFF10:;
  c->r[31]=0u+0x00000001u; // 801CFF10
L_801CFF14:;
  c->lr=0x801CFF18u; f_801BE774(c); // 801CFF14
  cmps(c,0,(int32_t)c->r[31],1); // 801CFF18
  if (crb(c,2)) { goto L_801CFF24; } // 801CFF1C
  goto L_801CFF68; // 801CFF20
L_801CFF24:;
  c->r[0]=R32(c->r[13]+0xFFFF9F00u); // 801CFF24
  cmps(c,0,(int32_t)c->r[0],2); // 801CFF28
  if (crb(c,2)) { goto L_801CFF4C; } // 801CFF2C
  if (!crb(c,0)) { goto L_801CFF5C; } // 801CFF30
  cmps(c,0,(int32_t)c->r[0],1); // 801CFF34
  if (!crb(c,0)) { goto L_801CFF40; } // 801CFF38
  goto L_801CFF5C; // 801CFF3C
L_801CFF40:;
  c->r[0]=0u+0x00007530u; // 801CFF40
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFF44
  goto L_801CFFAC; // 801CFF48
L_801CFF4C:;
  c->r[3]=0u+0x00010000u; // 801CFF4C
  c->r[0]=c->r[3]+0xFFFFAFC8u; // 801CFF50
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFF54
  goto L_801CFFAC; // 801CFF58
L_801CFF5C:;
  c->r[0]=0u+0x00003A98u; // 801CFF5C
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFF60
  goto L_801CFFAC; // 801CFF64
L_801CFF68:;
  c->r[0]=R32(c->r[13]+0xFFFF9F00u); // 801CFF68
  cmps(c,0,(int32_t)c->r[0],2); // 801CFF6C
  if (crb(c,2)) { goto L_801CFF94; } // 801CFF70
  if (!crb(c,0)) { goto L_801CFFA4; } // 801CFF74
  cmps(c,0,(int32_t)c->r[0],1); // 801CFF78
  if (!crb(c,0)) { goto L_801CFF84; } // 801CFF7C
  goto L_801CFFA4; // 801CFF80
L_801CFF84:;
  c->r[3]=0u+0x00010000u; // 801CFF84
  c->r[0]=c->r[3]+0xFFFF8CA0u; // 801CFF88
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFF8C
  goto L_801CFFAC; // 801CFF90
L_801CFF94:;
  c->r[3]=0u+0x00010000u; // 801CFF94
  c->r[0]=c->r[3]+0xFFFFD2F0u; // 801CFF98
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFF9C
  goto L_801CFFAC; // 801CFFA0
L_801CFFA4:;
  c->r[0]=0u+0x00004650u; // 801CFFA4
  W32(c->r[13]+0xFFFF9E7Cu,c->r[0]); // 801CFFA8
L_801CFFAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801CFFAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFFB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFFB8
  c->lr=c->r[0]; // 801CFFBC
  c->r[1]=c->r[1]+0x00000010u; // 801CFFC0
  return; // 801CFFC4
}

// __VIResetRFIdle
void f_801CFFC8(Ctx* __restrict c) {
  trace_call(0x801CFFC8u);
  c->r[0]=0u+0x00000000u; // 801CFFC8
  c->r[3]=0u+0x00000001u; // 801CFFCC
  W32(c->r[13]+0xFFFF9EFCu,c->r[0]); // 801CFFD0
  return; // 801CFFD4
}

// fn_801CFFD8
void f_801CFFD8(Ctx* __restrict c) {
  trace_call(0x801CFFD8u);
  c->r[0]=0u+0x00000000u; // 801CFFD8
  c->r[3]=0u+0x00000001u; // 801CFFDC
  W32(c->r[13]+0xFFFF9EF8u,c->r[0]); // 801CFFE0
  return; // 801CFFE4
}

// WaitMicroTime
void f_801CFFE8(Ctx* __restrict c) {
  trace_call(0x801CFFE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFFE8
  c->r[0]=c->lr; // 801CFFEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFFF0
  c->r[11]=c->r[1]+0x00000020u; // 801CFFF4
  c->lr=0x801CFFFCu; f_801E795C(c); // 801CFFF8
  c->r[27]=c->r[3]|c->r[3]; // 801CFFFC
  c->lr=0x801D0004u; f_801C259C(c); // 801D0000
  c->r[5]=0u+0x431C0000u; // 801D0004
  c->r[28]=c->r[4]|c->r[4]; // 801D0008
  c->r[29]=c->r[3]|c->r[3]; // 801D000C
  c->r[31]=0u+0x80000000u; // 801D0010
  c->r[30]=c->r[5]+0xFFFFDE83u; // 801D0014
L_801D0018:;
  c->lr=0x801D001Cu; f_801C259C(c); // 801D0018
  c->r[0]=R32(c->r[31]+0x000000F8u); // 801D001C
  c->r[6]=addc(c,~c->r[28],c->r[4],1); // 801D0020
  c->r[3]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 801D0024
  c->r[5]=0u+0x00000000u; // 801D0028
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D002C
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0030
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 801D0034
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0038
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D003C
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0040
  c->lr=0x801D0048u; f_801E7AAC(c); // 801D0044
  c->r[5]=sraw(c,c->r[27],31); // 801D0048
  c->r[0]=c->r[3]^0x80000000u; // 801D004C
  c->r[5]=c->r[5]^0x80000000u; // 801D0050
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D0054
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0058
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D005C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0060
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0018; } // 801D0064
  c->r[11]=c->r[1]+0x00000020u; // 801D0068
  c->lr=0x801D0070u; f_801E79A8(c); // 801D006C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0070
  c->lr=c->r[0]; // 801D0074
  c->r[1]=c->r[1]+0x00000020u; // 801D0078
  return; // 801D007C
}

// sendSlaveAddr
void f_801D0080(Ctx* __restrict c) {
  trace_call(0x801D0080u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0080
  c->r[0]=c->lr; // 801D0084
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0088
  c->r[11]=c->r[1]+0x00000030u; // 801D008C
  c->lr=0x801D0094u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0090
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0094
  c->r[29]=c->r[3]|c->r[3]; // 801D0098
  cmps(c,0,(int32_t)c->r[0],0); // 801D009C
  if (!crb(c,2)) { goto L_801D00BC; } // 801D00A0
  c->r[3]=0u+0xCD800000u; // 801D00A4
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D00A8
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D00AC
  c->r[0]=c->r[0]|0x00008000u; // 801D00B0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D00B4
  goto L_801D00CC; // 801D00B8
L_801D00BC:;
  c->r[3]=0u+0xCD800000u; // 801D00BC
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D00C0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D00C4
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D00C8
L_801D00CC:;
  c->lr=0x801D00D0u; f_801C259C(c); // 801D00CC
  c->r[5]=0u+0x431C0000u; // 801D00D0
  c->r[28]=c->r[4]|c->r[4]; // 801D00D4
  c->r[27]=c->r[3]|c->r[3]; // 801D00D8
  c->r[25]=0u+0x80000000u; // 801D00DC
  c->r[26]=c->r[5]+0xFFFFDE83u; // 801D00E0
  c->r[24]=0u+0x00000002u; // 801D00E4
  c->r[23]=0u+0x00000000u; // 801D00E8
L_801D00EC:;
  c->lr=0x801D00F0u; f_801C259C(c); // 801D00EC
  c->r[0]=R32(c->r[25]+0x000000F8u); // 801D00F0
  c->r[6]=addc(c,~c->r[28],c->r[4],1); // 801D00F4
  c->r[3]=addc(c,~c->r[27],c->r[3],c->xer_ca); // 801D00F8
  c->r[5]=0u+0x00000000u; // 801D00FC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0100
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0104
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 801D0108
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D010C
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0110
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0114
  c->lr=0x801D011Cu; f_801E7AAC(c); // 801D0118
  c->r[0]=c->r[3]^0x80000000u; // 801D011C
  c->r[5]=c->r[23]^0x80000000u; // 801D0120
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 801D0124
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0128
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D012C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0130
  if (!crb(c,2)) { IRQCHK(c); goto L_801D00EC; } // 801D0134
  c->r[31]=0u+0xCD800000u; // 801D0138
  c->r[3]=0u+0x431C0000u; // 801D013C
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D0140
  c->r[25]=c->r[3]+0xFFFFDE83u; // 801D0144
  c->r[30]=0u+0x00000000u; // 801D0148
  c->r[28]=0u+0x80000000u; // 801D014C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0150
  c->r[27]=0u+0x00000002u; // 801D0154
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D0158
  c->r[26]=0u+0x00000000u; // 801D015C
L_801D0160:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 801D0160
  if (crb(c,2)) { goto L_801D0198; } // 801D0164
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0168
  cmps(c,0,(int32_t)c->r[0],0); // 801D016C
  if (!crb(c,2)) { goto L_801D0184; } // 801D0170
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D0174
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0178
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D017C
  goto L_801D01C4; // 801D0180
L_801D0184:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D0184
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0188
  c->r[0]=c->r[0]|0x00008000u; // 801D018C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D0190
  goto L_801D01C4; // 801D0194
L_801D0198:;
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0198
  cmps(c,0,(int32_t)c->r[0],0); // 801D019C
  if (!crb(c,2)) { goto L_801D01B8; } // 801D01A0
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D01A4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D01A8
  c->r[0]=c->r[0]|0x00008000u; // 801D01AC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D01B0
  goto L_801D01C4; // 801D01B4
L_801D01B8:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D01B8
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D01BC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D01C0
L_801D01C4:;
  c->lr=0x801D01C8u; f_801C259C(c); // 801D01C4
  c->r[24]=c->r[4]|c->r[4]; // 801D01C8
  c->r[23]=c->r[3]|c->r[3]; // 801D01CC
L_801D01D0:;
  c->lr=0x801D01D4u; f_801C259C(c); // 801D01D0
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801D01D4
  c->r[6]=addc(c,~c->r[24],c->r[4],1); // 801D01D8
  c->r[3]=addc(c,~c->r[23],c->r[3],c->xer_ca); // 801D01DC
  c->r[5]=0u+0x00000000u; // 801D01E0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D01E4
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D01E8
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D01EC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D01F0
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D01F4
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D01F8
  c->lr=0x801D0200u; f_801E7AAC(c); // 801D01FC
  c->r[0]=c->r[3]^0x80000000u; // 801D0200
  c->r[5]=c->r[26]^0x80000000u; // 801D0204
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D0208
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D020C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0210
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0214
  if (!crb(c,2)) { IRQCHK(c); goto L_801D01D0; } // 801D0218
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D021C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0220
  c->r[0]=c->r[0]|0x00004000u; // 801D0224
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D0228
  c->lr=0x801D0230u; f_801C259C(c); // 801D022C
  c->r[23]=c->r[4]|c->r[4]; // 801D0230
  c->r[24]=c->r[3]|c->r[3]; // 801D0234
L_801D0238:;
  c->lr=0x801D023Cu; f_801C259C(c); // 801D0238
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801D023C
  c->r[6]=addc(c,~c->r[23],c->r[4],1); // 801D0240
  c->r[3]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 801D0244
  c->r[5]=0u+0x00000000u; // 801D0248
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D024C
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0250
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D0254
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0258
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D025C
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0260
  c->lr=0x801D0268u; f_801E7AAC(c); // 801D0264
  c->r[0]=c->r[3]^0x80000000u; // 801D0268
  c->r[5]=c->r[26]^0x80000000u; // 801D026C
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D0270
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0274
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0278
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D027C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0238; } // 801D0280
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801D0284
  c->r[30]=c->r[30]+0x00000001u; // 801D0288
  cmps(c,0,(int32_t)c->r[30],8); // 801D028C
  c->r[29]=rotl(c->r[29],1)&0x000000FEu; // 801D0290
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0294
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801D0298
  if (crb(c,0)) { IRQCHK(c); goto L_801D0160; } // 801D029C
  c->r[3]=0u+0xCD800000u; // 801D02A0
  c->r[0]=R32(c->r[3]+0x000000C4u); // 801D02A4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D02A8
  c->r[0]=c->r[0]|0x00004000u; // 801D02AC
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801D02B0
  c->lr=0x801D02B8u; f_801C259C(c); // 801D02B4
  c->r[5]=0u+0x431C0000u; // 801D02B8
  c->r[31]=c->r[4]|c->r[4]; // 801D02BC
  c->r[30]=c->r[3]|c->r[3]; // 801D02C0
  c->r[28]=0u+0x80000000u; // 801D02C4
  c->r[29]=c->r[5]+0xFFFFDE83u; // 801D02C8
  c->r[27]=0u+0x00000002u; // 801D02CC
  c->r[26]=0u+0x00000000u; // 801D02D0
L_801D02D4:;
  c->lr=0x801D02D8u; f_801C259C(c); // 801D02D4
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801D02D8
  c->r[6]=addc(c,~c->r[31],c->r[4],1); // 801D02DC
  c->r[3]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 801D02E0
  c->r[5]=0u+0x00000000u; // 801D02E4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D02E8
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D02EC
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 801D02F0
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D02F4
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D02F8
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D02FC
  c->lr=0x801D0304u; f_801E7AAC(c); // 801D0300
  c->r[0]=c->r[3]^0x80000000u; // 801D0304
  c->r[5]=c->r[26]^0x80000000u; // 801D0308
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D030C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0310
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0314
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0318
  if (!crb(c,2)) { IRQCHK(c); goto L_801D02D4; } // 801D031C
  c->r[3]=0u+0xCD800000u; // 801D0320
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D0324
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0328
  c->r[0]=c->r[0]|0x00004000u; // 801D032C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D0330
  c->lr=0x801D0338u; f_801C259C(c); // 801D0334
  c->r[5]=0u+0x431C0000u; // 801D0338
  c->r[26]=c->r[4]|c->r[4]; // 801D033C
  c->r[27]=c->r[3]|c->r[3]; // 801D0340
  c->r[31]=0u+0x80000000u; // 801D0344
  c->r[28]=c->r[5]+0xFFFFDE83u; // 801D0348
  c->r[30]=0u+0x00000002u; // 801D034C
  c->r[29]=0u+0x00000000u; // 801D0350
L_801D0354:;
  c->lr=0x801D0358u; f_801C259C(c); // 801D0354
  c->r[0]=R32(c->r[31]+0x000000F8u); // 801D0358
  c->r[6]=addc(c,~c->r[26],c->r[4],1); // 801D035C
  c->r[3]=addc(c,~c->r[27],c->r[3],c->xer_ca); // 801D0360
  c->r[5]=0u+0x00000000u; // 801D0364
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0368
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D036C
  c->r[0]=(uint32_t)(((uint64_t)c->r[28]*(uint64_t)c->r[0])>>32); // 801D0370
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0374
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0378
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D037C
  c->lr=0x801D0384u; f_801E7AAC(c); // 801D0380
  c->r[0]=c->r[3]^0x80000000u; // 801D0384
  c->r[5]=c->r[29]^0x80000000u; // 801D0388
  c->r[3]=addc(c,~c->r[30],c->r[4],1); // 801D038C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0390
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0394
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0398
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0354; } // 801D039C
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D03A0
  cmpu(c,0,c->r[0],0x00000001u); // 801D03A4
  if (!crb(c,2)) { goto L_801D03C4; } // 801D03A8
  c->r[3]=0u+0xCD800000u; // 801D03AC
  c->r[0]=R32(c->r[3]+0x000000C8u); // 801D03B0
  c->r[0]=rotl(c->r[0],17)&0x00000001u; cr0(c,c->r[0]); // 801D03B4
  if (crb(c,2)) { goto L_801D03C4; } // 801D03B8
  c->r[3]=0u+0x00000000u; // 801D03BC
  goto L_801D041C; // 801D03C0
L_801D03C4:;
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D03C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D03C8
  if (!crb(c,2)) { goto L_801D03E8; } // 801D03CC
  c->r[3]=0u+0xCD800000u; // 801D03D0
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D03D4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D03D8
  c->r[0]=c->r[0]|0x00008000u; // 801D03DC
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D03E0
  goto L_801D03F8; // 801D03E4
L_801D03E8:;
  c->r[3]=0u+0xCD800000u; // 801D03E8
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D03EC
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D03F0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D03F4
L_801D03F8:;
  c->r[4]=0u+0xCD800000u; // 801D03F8
  c->r[3]=0u+0x00000001u; // 801D03FC
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801D0400
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0404
  c->r[0]=c->r[0]|0x0000C000u; // 801D0408
  W32(c->r[4]+0x000000C4u,c->r[0]); // 801D040C
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801D0410
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0414
  W32(c->r[4]+0x000000C0u,c->r[0]); // 801D0418
L_801D041C:;
  c->r[11]=c->r[1]+0x00000030u; // 801D041C
  c->lr=0x801D0424u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0420
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0424
  c->lr=c->r[0]; // 801D0428
  c->r[1]=c->r[1]+0x00000030u; // 801D042C
  return; // 801D0430
}

// __VISendI2CData
void f_801D0434(Ctx* __restrict c) {
  trace_call(0x801D0434u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0434
  c->r[0]=c->lr; // 801D0438
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D043C
  c->r[11]=c->r[1]+0x00000040u; // 801D0440
  c->lr=0x801D0448u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0444
  c->r[0]=R32(c->r[13]+0xFFFF9F18u); // 801D0448
  c->r[20]=c->r[3]|c->r[3]; // 801D044C
  c->r[29]=c->r[4]|c->r[4]; // 801D0450
  c->r[30]=c->r[5]|c->r[5]; // 801D0454
  cmps(c,0,(int32_t)c->r[0],0); // 801D0458
  if (!crb(c,2)) { goto L_801D046C; } // 801D045C
  c->r[0]=0u+0x00000001u; // 801D0460
  W32(c->r[13]+0xFFFF84B0u,c->r[0]); // 801D0464
  W32(c->r[13]+0xFFFF9F18u,c->r[0]); // 801D0468
L_801D046C:;
  c->lr=0x801D0470u; f_801BE74C(c); // 801D046C
  c->r[4]=0u+0xCD800000u; // 801D0470
  c->r[31]=c->r[3]|c->r[3]; // 801D0474
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801D0478
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D047C
  c->r[0]=c->r[0]|0x0000C000u; // 801D0480
  W32(c->r[4]+0x000000C4u,c->r[0]); // 801D0484
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801D0488
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D048C
  c->r[0]=c->r[0]|0x00004000u; // 801D0490
  W32(c->r[4]+0x000000C0u,c->r[0]); // 801D0494
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0498
  cmps(c,0,(int32_t)c->r[0],0); // 801D049C
  if (!crb(c,2)) { goto L_801D04B4; } // 801D04A0
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801D04A4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D04A8
  W32(c->r[4]+0x000000C0u,c->r[0]); // 801D04AC
  goto L_801D04C4; // 801D04B0
L_801D04B4:;
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801D04B4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D04B8
  c->r[0]=c->r[0]|0x00008000u; // 801D04BC
  W32(c->r[4]+0x000000C0u,c->r[0]); // 801D04C0
L_801D04C4:;
  c->lr=0x801D04C8u; f_801C259C(c); // 801D04C4
  c->r[5]=0u+0x431C0000u; // 801D04C8
  c->r[23]=c->r[4]|c->r[4]; // 801D04CC
  c->r[22]=c->r[3]|c->r[3]; // 801D04D0
  c->r[25]=0u+0x80000000u; // 801D04D4
  c->r[26]=c->r[5]+0xFFFFDE83u; // 801D04D8
  c->r[24]=0u+0x00000002u; // 801D04DC
  c->r[21]=0u+0x00000000u; // 801D04E0
L_801D04E4:;
  c->lr=0x801D04E8u; f_801C259C(c); // 801D04E4
  c->r[0]=R32(c->r[25]+0x000000F8u); // 801D04E8
  c->r[6]=addc(c,~c->r[23],c->r[4],1); // 801D04EC
  c->r[3]=addc(c,~c->r[22],c->r[3],c->xer_ca); // 801D04F0
  c->r[5]=0u+0x00000000u; // 801D04F4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D04F8
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D04FC
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 801D0500
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0504
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0508
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D050C
  c->lr=0x801D0514u; f_801E7AAC(c); // 801D0510
  c->r[0]=c->r[3]^0x80000000u; // 801D0514
  c->r[5]=c->r[21]^0x80000000u; // 801D0518
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 801D051C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0520
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0524
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0528
  if (!crb(c,2)) { IRQCHK(c); goto L_801D04E4; } // 801D052C
  c->lr=0x801D0534u; f_801C259C(c); // 801D0530
  c->r[5]=0u+0x431C0000u; // 801D0534
  c->r[23]=c->r[4]|c->r[4]; // 801D0538
  c->r[22]=c->r[3]|c->r[3]; // 801D053C
  c->r[25]=0u+0x80000000u; // 801D0540
  c->r[26]=c->r[5]+0xFFFFDE83u; // 801D0544
  c->r[24]=0u+0x00000002u; // 801D0548
  c->r[21]=0u+0x00000000u; // 801D054C
L_801D0550:;
  c->lr=0x801D0554u; f_801C259C(c); // 801D0550
  c->r[0]=R32(c->r[25]+0x000000F8u); // 801D0554
  c->r[6]=addc(c,~c->r[23],c->r[4],1); // 801D0558
  c->r[3]=addc(c,~c->r[22],c->r[3],c->xer_ca); // 801D055C
  c->r[5]=0u+0x00000000u; // 801D0560
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0564
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0568
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 801D056C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0570
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0574
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0578
  c->lr=0x801D0580u; f_801E7AAC(c); // 801D057C
  c->r[0]=c->r[3]^0x80000000u; // 801D0580
  c->r[5]=c->r[21]^0x80000000u; // 801D0584
  c->r[3]=addc(c,~c->r[24],c->r[4],1); // 801D0588
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D058C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0590
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0594
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0550; } // 801D0598
  c->r[3]=c->r[20]|c->r[20]; // 801D059C
  c->lr=0x801D05A4u; f_801D0080(c); // 801D05A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D05A4
  if (!crb(c,2)) { goto L_801D05BC; } // 801D05A8
  c->r[3]=c->r[31]|c->r[31]; // 801D05AC
  c->lr=0x801D05B4u; f_801BE774(c); // 801D05B0
  c->r[3]=0u+0x00000000u; // 801D05B4
  goto L_801D09EC; // 801D05B8
L_801D05BC:;
  c->r[22]=0u+0xCD800000u; // 801D05BC
  c->r[3]=0u+0x431C0000u; // 801D05C0
  c->r[0]=R32(c->r[22]+0x000000C4u); // 801D05C4
  c->r[25]=c->r[3]+0xFFFFDE83u; // 801D05C8
  c->r[26]=0u+0x80000000u; // 801D05CC
  c->r[27]=0u+0x00000002u; // 801D05D0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D05D4
  c->r[28]=0u+0x00000000u; // 801D05D8
  c->r[0]=c->r[0]|0x0000C000u; // 801D05DC
  W32(c->r[22]+0x000000C4u,c->r[0]); // 801D05E0
  goto L_801D0878; // 801D05E4
L_801D05E8:;
  c->r[20]=R8(c->r[29]+0x00000000u); // 801D05E8
  c->r[21]=0u+0x00000000u; // 801D05EC
  c->r[29]=c->r[29]+0x00000001u; // 801D05F0
L_801D05F4:;
  c->r[0]=rotl(c->r[20],0)&0x00000080u; cr0(c,c->r[0]); // 801D05F4
  if (crb(c,2)) { goto L_801D062C; } // 801D05F8
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D05FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D0600
  if (!crb(c,2)) { goto L_801D0618; } // 801D0604
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D0608
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D060C
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0610
  goto L_801D0658; // 801D0614
L_801D0618:;
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D0618
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D061C
  c->r[0]=c->r[0]|0x00008000u; // 801D0620
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0624
  goto L_801D0658; // 801D0628
L_801D062C:;
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D062C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0630
  if (!crb(c,2)) { goto L_801D064C; } // 801D0634
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D0638
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D063C
  c->r[0]=c->r[0]|0x00008000u; // 801D0640
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0644
  goto L_801D0658; // 801D0648
L_801D064C:;
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D064C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0650
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0654
L_801D0658:;
  c->lr=0x801D065Cu; f_801C259C(c); // 801D0658
  c->r[24]=c->r[4]|c->r[4]; // 801D065C
  c->r[23]=c->r[3]|c->r[3]; // 801D0660
L_801D0664:;
  c->lr=0x801D0668u; f_801C259C(c); // 801D0664
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801D0668
  c->r[6]=addc(c,~c->r[24],c->r[4],1); // 801D066C
  c->r[3]=addc(c,~c->r[23],c->r[3],c->xer_ca); // 801D0670
  c->r[5]=0u+0x00000000u; // 801D0674
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0678
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D067C
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D0680
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0684
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0688
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D068C
  c->lr=0x801D0694u; f_801E7AAC(c); // 801D0690
  c->r[0]=c->r[3]^0x80000000u; // 801D0694
  c->r[5]=c->r[28]^0x80000000u; // 801D0698
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D069C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D06A0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D06A4
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D06A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0664; } // 801D06AC
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D06B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D06B4
  c->r[0]=c->r[0]|0x00004000u; // 801D06B8
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D06BC
  c->lr=0x801D06C4u; f_801C259C(c); // 801D06C0
  c->r[24]=c->r[4]|c->r[4]; // 801D06C4
  c->r[23]=c->r[3]|c->r[3]; // 801D06C8
L_801D06CC:;
  c->lr=0x801D06D0u; f_801C259C(c); // 801D06CC
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801D06D0
  c->r[6]=addc(c,~c->r[24],c->r[4],1); // 801D06D4
  c->r[3]=addc(c,~c->r[23],c->r[3],c->xer_ca); // 801D06D8
  c->r[5]=0u+0x00000000u; // 801D06DC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D06E0
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D06E4
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D06E8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D06EC
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D06F0
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D06F4
  c->lr=0x801D06FCu; f_801E7AAC(c); // 801D06F8
  c->r[0]=c->r[3]^0x80000000u; // 801D06FC
  c->r[5]=c->r[28]^0x80000000u; // 801D0700
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D0704
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D0708
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D070C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0710
  if (!crb(c,2)) { IRQCHK(c); goto L_801D06CC; } // 801D0714
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D0718
  c->r[21]=c->r[21]+0x00000001u; // 801D071C
  cmps(c,0,(int32_t)c->r[21],8); // 801D0720
  c->r[20]=rotl(c->r[20],1)&0x000000FEu; // 801D0724
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0728
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D072C
  if (crb(c,0)) { IRQCHK(c); goto L_801D05F4; } // 801D0730
  c->r[0]=R32(c->r[22]+0x000000C4u); // 801D0734
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0738
  c->r[0]=c->r[0]|0x00004000u; // 801D073C
  W32(c->r[22]+0x000000C4u,c->r[0]); // 801D0740
  c->lr=0x801D0748u; f_801C259C(c); // 801D0744
  c->r[24]=c->r[4]|c->r[4]; // 801D0748
  c->r[23]=c->r[3]|c->r[3]; // 801D074C
L_801D0750:;
  c->lr=0x801D0754u; f_801C259C(c); // 801D0750
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801D0754
  c->r[6]=addc(c,~c->r[24],c->r[4],1); // 801D0758
  c->r[3]=addc(c,~c->r[23],c->r[3],c->xer_ca); // 801D075C
  c->r[5]=0u+0x00000000u; // 801D0760
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0764
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0768
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D076C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0770
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0774
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0778
  c->lr=0x801D0780u; f_801E7AAC(c); // 801D077C
  c->r[0]=c->r[3]^0x80000000u; // 801D0780
  c->r[5]=c->r[28]^0x80000000u; // 801D0784
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D0788
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D078C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0790
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0794
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0750; } // 801D0798
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D079C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D07A0
  c->r[0]=c->r[0]|0x00004000u; // 801D07A4
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D07A8
  c->lr=0x801D07B0u; f_801C259C(c); // 801D07AC
  c->r[23]=c->r[4]|c->r[4]; // 801D07B0
  c->r[24]=c->r[3]|c->r[3]; // 801D07B4
L_801D07B8:;
  c->lr=0x801D07BCu; f_801C259C(c); // 801D07B8
  c->r[0]=R32(c->r[26]+0x000000F8u); // 801D07BC
  c->r[6]=addc(c,~c->r[23],c->r[4],1); // 801D07C0
  c->r[3]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 801D07C4
  c->r[5]=0u+0x00000000u; // 801D07C8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D07CC
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D07D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 801D07D4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D07D8
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D07DC
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D07E0
  c->lr=0x801D07E8u; f_801E7AAC(c); // 801D07E4
  c->r[0]=c->r[3]^0x80000000u; // 801D07E8
  c->r[5]=c->r[28]^0x80000000u; // 801D07EC
  c->r[3]=addc(c,~c->r[27],c->r[4],1); // 801D07F0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D07F4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D07F8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D07FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D07B8; } // 801D0800
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0804
  cmpu(c,0,c->r[0],0x00000001u); // 801D0808
  if (!crb(c,2)) { goto L_801D082C; } // 801D080C
  c->r[0]=R32(c->r[22]+0x000000C8u); // 801D0810
  c->r[0]=rotl(c->r[0],17)&0x00000001u; cr0(c,c->r[0]); // 801D0814
  if (crb(c,2)) { goto L_801D082C; } // 801D0818
  c->r[3]=c->r[31]|c->r[31]; // 801D081C
  c->lr=0x801D0824u; f_801BE774(c); // 801D0820
  c->r[3]=0u+0x00000000u; // 801D0824
  goto L_801D09EC; // 801D0828
L_801D082C:;
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D082C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0830
  if (!crb(c,2)) { goto L_801D084C; } // 801D0834
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D0838
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D083C
  c->r[0]=c->r[0]|0x00008000u; // 801D0840
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0844
  goto L_801D0858; // 801D0848
L_801D084C:;
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D084C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0850
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0854
L_801D0858:;
  c->r[0]=R32(c->r[22]+0x000000C4u); // 801D0858
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801D085C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0860
  c->r[0]=c->r[0]|0x0000C000u; // 801D0864
  W32(c->r[22]+0x000000C4u,c->r[0]); // 801D0868
  c->r[0]=R32(c->r[22]+0x000000C0u); // 801D086C
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0870
  W32(c->r[22]+0x000000C0u,c->r[0]); // 801D0874
L_801D0878:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D0878
  if (!crb(c,2)) { IRQCHK(c); goto L_801D05E8; } // 801D087C
  c->r[3]=0u+0xCD800000u; // 801D0880
  c->r[0]=R32(c->r[3]+0x000000C4u); // 801D0884
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D0888
  c->r[0]=c->r[0]|0x0000C000u; // 801D088C
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801D0890
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D0894
  cmps(c,0,(int32_t)c->r[0],0); // 801D0898
  if (!crb(c,2)) { goto L_801D08B4; } // 801D089C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D08A0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D08A4
  c->r[0]=c->r[0]|0x00008000u; // 801D08A8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D08AC
  goto L_801D08C0; // 801D08B0
L_801D08B4:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D08B4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D08B8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D08BC
L_801D08C0:;
  c->lr=0x801D08C4u; f_801C259C(c); // 801D08C0
  c->r[5]=0u+0x431C0000u; // 801D08C4
  c->r[25]=c->r[4]|c->r[4]; // 801D08C8
  c->r[24]=c->r[3]|c->r[3]; // 801D08CC
  c->r[22]=0u+0x80000000u; // 801D08D0
  c->r[23]=c->r[5]+0xFFFFDE83u; // 801D08D4
  c->r[21]=0u+0x00000002u; // 801D08D8
  c->r[20]=0u+0x00000000u; // 801D08DC
L_801D08E0:;
  c->lr=0x801D08E4u; f_801C259C(c); // 801D08E0
  c->r[0]=R32(c->r[22]+0x000000F8u); // 801D08E4
  c->r[6]=addc(c,~c->r[25],c->r[4],1); // 801D08E8
  c->r[3]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 801D08EC
  c->r[5]=0u+0x00000000u; // 801D08F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D08F4
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D08F8
  c->r[0]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[0])>>32); // 801D08FC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0900
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0904
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0908
  c->lr=0x801D0910u; f_801E7AAC(c); // 801D090C
  c->r[0]=c->r[3]^0x80000000u; // 801D0910
  c->r[5]=c->r[20]^0x80000000u; // 801D0914
  c->r[3]=addc(c,~c->r[21],c->r[4],1); // 801D0918
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D091C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D0920
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D0924
  if (!crb(c,2)) { IRQCHK(c); goto L_801D08E0; } // 801D0928
  c->r[3]=0u+0xCD800000u; // 801D092C
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D0930
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 801D0934
  c->r[0]=c->r[0]|0x00004000u; // 801D0938
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D093C
  c->lr=0x801D0944u; f_801C259C(c); // 801D0940
  c->r[5]=0u+0x431C0000u; // 801D0944
  c->r[25]=c->r[4]|c->r[4]; // 801D0948
  c->r[24]=c->r[3]|c->r[3]; // 801D094C
  c->r[22]=0u+0x80000000u; // 801D0950
  c->r[23]=c->r[5]+0xFFFFDE83u; // 801D0954
  c->r[21]=0u+0x00000002u; // 801D0958
  c->r[20]=0u+0x00000000u; // 801D095C
L_801D0960:;
  c->lr=0x801D0964u; f_801C259C(c); // 801D0960
  c->r[0]=R32(c->r[22]+0x000000F8u); // 801D0964
  c->r[6]=addc(c,~c->r[25],c->r[4],1); // 801D0968
  c->r[3]=addc(c,~c->r[24],c->r[3],c->xer_ca); // 801D096C
  c->r[5]=0u+0x00000000u; // 801D0970
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D0974
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D0978
  c->r[0]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[0])>>32); // 801D097C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0980
  c->r[3]=(rotl(c->r[6],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 801D0984
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 801D0988
  c->lr=0x801D0990u; f_801E7AAC(c); // 801D098C
  c->r[0]=c->r[3]^0x80000000u; // 801D0990
  c->r[5]=c->r[20]^0x80000000u; // 801D0994
  c->r[3]=addc(c,~c->r[21],c->r[4],1); // 801D0998
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801D099C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D09A0
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801D09A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0960; } // 801D09A8
  c->r[0]=R32(c->r[13]+0xFFFF84B0u); // 801D09AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D09B0
  if (!crb(c,2)) { goto L_801D09CC; } // 801D09B4
  c->r[3]=0u+0xCD800000u; // 801D09B8
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D09BC
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D09C0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D09C4
  goto L_801D09E0; // 801D09C8
L_801D09CC:;
  c->r[3]=0u+0xCD800000u; // 801D09CC
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801D09D0
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 801D09D4
  c->r[0]=c->r[0]|0x00008000u; // 801D09D8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801D09DC
L_801D09E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D09E0
  c->lr=0x801D09E8u; f_801BE774(c); // 801D09E4
  c->r[3]=0u+0x00000001u; // 801D09E8
L_801D09EC:;
  c->r[11]=c->r[1]+0x00000040u; // 801D09EC
  c->lr=0x801D09F4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D09F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D09F4
  c->lr=c->r[0]; // 801D09F8
  c->r[1]=c->r[1]+0x00000040u; // 801D09FC
  return; // 801D0A00
}

// __VISetYUVSEL
void f_801D0A04(Ctx* __restrict c) {
  trace_call(0x801D0A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A04
  c->r[0]=c->lr; // 801D0A08
  c->r[4]=0u+0x80000000u; // 801D0A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0A10
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801D0A14
  cmps(c,0,(int32_t)c->r[0],2); // 801D0A18
  if (crb(c,2)) { goto L_801D0A4C; } // 801D0A1C
  if (!crb(c,0)) { goto L_801D0A34; } // 801D0A20
  cmps(c,0,(int32_t)c->r[0],0); // 801D0A24
  if (crb(c,2)) { goto L_801D0A58; } // 801D0A28
  if (!crb(c,0)) { goto L_801D0A40; } // 801D0A2C
  goto L_801D0A64; // 801D0A30
L_801D0A34:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D0A34
  if (crb(c,2)) { goto L_801D0A40; } // 801D0A38
  goto L_801D0A64; // 801D0A3C
L_801D0A40:;
  c->r[0]=0u+0x00000002u; // 801D0A40
  W32(c->r[13]+0xFFFF9F30u,c->r[0]); // 801D0A44
  goto L_801D0A6C; // 801D0A48
L_801D0A4C:;
  c->r[0]=0u+0x00000001u; // 801D0A4C
  W32(c->r[13]+0xFFFF9F30u,c->r[0]); // 801D0A50
  goto L_801D0A6C; // 801D0A54
L_801D0A58:;
  c->r[0]=0u+0x00000000u; // 801D0A58
  W32(c->r[13]+0xFFFF9F30u,c->r[0]); // 801D0A5C
  goto L_801D0A6C; // 801D0A60
L_801D0A64:;
  c->r[0]=0u+0x00000000u; // 801D0A64
  W32(c->r[13]+0xFFFF9F30u,c->r[0]); // 801D0A68
L_801D0A6C:;
  c->r[3]=rotl(c->r[3],5)&0x00001FE0u; // 801D0A6C
  c->r[4]=0u+0x00000001u; // 801D0A70
  c->r[0]=c->r[3]|c->r[0]; // 801D0A74
  W8(c->r[1]+0x00000008u,c->r[4]); // 801D0A78
  c->r[4]=c->r[1]+0x00000008u; // 801D0A7C
  c->r[3]=0u+0x000000E0u; // 801D0A80
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D0A84
  c->r[5]=0u+0x00000002u; // 801D0A88
  c->lr=0x801D0A90u; f_801D0434(c); // 801D0A8C
  c->r[3]=0u+0x00000002u; // 801D0A90
  c->lr=0x801D0A98u; f_801CFFE8(c); // 801D0A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0A98
  c->lr=c->r[0]; // 801D0A9C
  c->r[1]=c->r[1]+0x00000010u; // 801D0AA0
  return; // 801D0AA4
}

// __VISetFilter4EURGB60
void f_801D0AA8(Ctx* __restrict c) {
  trace_call(0x801D0AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0AA8
  c->r[0]=c->lr; // 801D0AAC
  c->r[5]=0u+0x00000002u; // 801D0AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0AB4
  c->r[0]=0u+0x0000006Eu; // 801D0AB8
  c->r[4]=c->r[1]+0x00000008u; // 801D0ABC
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D0AC0
  c->r[3]=0u+0x000000E0u; // 801D0AC4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D0AC8
  c->lr=0x801D0AD0u; f_801D0434(c); // 801D0ACC
  c->r[3]=0u+0x00000002u; // 801D0AD0
  c->lr=0x801D0AD8u; f_801CFFE8(c); // 801D0AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0AD8
  c->lr=c->r[0]; // 801D0ADC
  c->r[1]=c->r[1]+0x00000010u; // 801D0AE0
  return; // 801D0AE4
}

// __VISetCGMS
void f_801D0AE8(Ctx* __restrict c) {
  trace_call(0x801D0AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0AE8
  c->r[0]=c->lr; // 801D0AEC
  c->r[7]=0u+0x00000005u; // 801D0AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0AF4
  c->r[4]=c->r[1]+0x00000008u; // 801D0AF8
  c->r[3]=R8(c->r[13]+0xFFFF84B8u); // 801D0AFC
  c->r[0]=R8(c->r[13]+0xFFFF84BAu); // 801D0B00
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 801D0B04
  c->r[5]=R8(c->r[13]+0xFFFF84B9u); // 801D0B08
  W8(c->r[1]+0x00000008u,c->r[7]); // 801D0B0C
  c->r[3]=0u+0x000000E0u; // 801D0B10
  c->r[6]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 801D0B14
  c->r[5]=0u+0x00000003u; // 801D0B18
  W8(c->r[1]+0x00000009u,c->r[6]); // 801D0B1C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D0B20
  c->lr=0x801D0B28u; f_801D0434(c); // 801D0B24
  c->r[3]=0u+0x00000002u; // 801D0B28
  c->lr=0x801D0B30u; f_801CFFE8(c); // 801D0B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0B30
  c->lr=c->r[0]; // 801D0B34
  c->r[1]=c->r[1]+0x00000010u; // 801D0B38
  return; // 801D0B3C
}

// __VISetWSS
void f_801D0B40(Ctx* __restrict c) {
  trace_call(0x801D0B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B40
  c->r[0]=c->lr; // 801D0B44
  c->r[7]=0u+0x00000008u; // 801D0B48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0B4C
  c->r[4]=c->r[1]+0x00000008u; // 801D0B50
  c->r[3]=R8(c->r[13]+0xFFFF84BBu); // 801D0B54
  c->r[0]=R8(c->r[13]+0xFFFF84BDu); // 801D0B58
  c->r[5]=rotl(c->r[3],0)&0x0000000Fu; // 801D0B5C
  c->r[6]=R8(c->r[13]+0xFFFF84BCu); // 801D0B60
  c->r[3]=R8(c->r[13]+0xFFFF84BEu); // 801D0B64
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801D0B68
  c->r[5]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[5]&~0x000000F0u); // 801D0B6C
  W8(c->r[1]+0x00000008u,c->r[7]); // 801D0B70
  c->r[0]=(rotl(c->r[3],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 801D0B74
  c->r[3]=0u+0x000000E0u; // 801D0B78
  W8(c->r[1]+0x00000009u,c->r[5]); // 801D0B7C
  c->r[5]=0u+0x00000003u; // 801D0B80
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D0B84
  c->lr=0x801D0B8Cu; f_801D0434(c); // 801D0B88
  c->r[3]=0u+0x00000002u; // 801D0B8C
  c->lr=0x801D0B94u; f_801CFFE8(c); // 801D0B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0B94
  c->lr=c->r[0]; // 801D0B98
  c->r[1]=c->r[1]+0x00000010u; // 801D0B9C
  return; // 801D0BA0
}

// __VISetClosedCaption
void f_801D0BA4(Ctx* __restrict c) {
  trace_call(0x801D0BA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0BA4
  c->r[0]=c->lr; // 801D0BA8
  c->r[9]=0u+0x0000007Au; // 801D0BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0BB0
  c->r[4]=c->r[1]+0x00000008u; // 801D0BB4
  c->r[0]=R8(c->r[13]+0xFFFF84BFu); // 801D0BB8
  c->r[5]=R8(c->r[13]+0xFFFF84C0u); // 801D0BBC
  c->r[8]=rotl(c->r[0],0)&0x0000007Fu; // 801D0BC0
  c->r[3]=R8(c->r[13]+0xFFFF84C1u); // 801D0BC4
  c->r[0]=R8(c->r[13]+0xFFFF84C2u); // 801D0BC8
  c->r[7]=rotl(c->r[5],0)&0x0000007Fu; // 801D0BCC
  c->r[6]=rotl(c->r[3],0)&0x0000007Fu; // 801D0BD0
  W8(c->r[1]+0x00000008u,c->r[9]); // 801D0BD4
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 801D0BD8
  c->r[3]=0u+0x000000E0u; // 801D0BDC
  W8(c->r[1]+0x00000009u,c->r[8]); // 801D0BE0
  c->r[5]=0u+0x00000005u; // 801D0BE4
  W8(c->r[1]+0x0000000Au,c->r[7]); // 801D0BE8
  W8(c->r[1]+0x0000000Bu,c->r[6]); // 801D0BEC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D0BF0
  c->lr=0x801D0BF8u; f_801D0434(c); // 801D0BF4
  c->r[3]=0u+0x00000002u; // 801D0BF8
  c->lr=0x801D0C00u; f_801CFFE8(c); // 801D0BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0C00
  c->lr=c->r[0]; // 801D0C04
  c->r[1]=c->r[1]+0x00000010u; // 801D0C08
  return; // 801D0C0C
}

// __VISetMacrovision
void f_801D0C10(Ctx* __restrict c) {
  trace_call(0x801D0C10u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C10
  c->r[0]=c->lr; // 801D0C14
  c->r[3]=0u+0x804B0000u; // 801D0C18
  W32(c->r[1]+0x00000194u,c->r[0]); // 801D0C1C
  c->r[3]=c->r[3]+0x00002598u; // 801D0C20
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 801D0C24
  W32(c->r[1]+0x00000188u,c->r[30]); // 801D0C28
  W32(c->r[1]+0x00000184u,c->r[29]); // 801D0C2C
  W32(c->r[1]+0x00000180u,c->r[28]); // 801D0C30
  c->r[0]=R32(c->r[13]+0xFFFF9F2Cu); // 801D0C34
  cmps(c,0,(int32_t)c->r[0],3); // 801D0C38
  if (crb(c,2)) { goto L_801D106C; } // 801D0C3C
  if (!crb(c,0)) { goto L_801D0C54; } // 801D0C40
  cmps(c,0,(int32_t)c->r[0],1); // 801D0C44
  if (crb(c,2)) { goto L_801D1884; } // 801D0C48
  if (!crb(c,0)) { goto L_801D0C60; } // 801D0C4C
  goto L_801D1978; // 801D0C50
L_801D0C54:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D0C54
  if (!crb(c,0)) { goto L_801D1978; } // 801D0C58
  goto L_801D1478; // 801D0C5C
L_801D0C60:;
  c->r[0]=R32(c->r[13]+0xFFFF84C4u); // 801D0C60
  cmps(c,0,(int32_t)c->r[0],2); // 801D0C64
  if (crb(c,2)) { goto L_801D0E7C; } // 801D0C68
  if (!crb(c,0)) { goto L_801D0C80; } // 801D0C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0C70
  if (crb(c,2)) { goto L_801D0C8C; } // 801D0C74
  if (!crb(c,0)) { goto L_801D0D84; } // 801D0C78
  goto L_801D1978; // 801D0C7C
L_801D0C80:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D0C80
  if (crb(c,2)) { goto L_801D0F74; } // 801D0C84
  goto L_801D1978; // 801D0C88
L_801D0C8C:;
  c->r[30]=c->r[3]+0x00000420u; // 801D0C8C
  c->r[31]=0u+0x00000040u; // 801D0C90
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D0C94
  c->r[4]=c->r[1]+0x00000158u; // 801D0C98
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D0C9C
  c->r[3]=0u+0x000000E0u; // 801D0CA0
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D0CA4
  c->r[5]=0u+0x0000001Bu; // 801D0CA8
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D0CAC
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D0CB0
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D0CB4
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D0CB8
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D0CBC
  W8(c->r[1]+0x00000159u,c->r[29]); // 801D0CC0
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D0CC4
  W8(c->r[1]+0x0000015Au,c->r[28]); // 801D0CC8
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D0CCC
  W8(c->r[1]+0x0000015Bu,c->r[12]); // 801D0CD0
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D0CD4
  W8(c->r[1]+0x0000015Cu,c->r[11]); // 801D0CD8
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D0CDC
  W8(c->r[1]+0x0000015Du,c->r[10]); // 801D0CE0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D0CE4
  W8(c->r[1]+0x0000015Eu,c->r[9]); // 801D0CE8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D0CEC
  W8(c->r[1]+0x0000015Fu,c->r[8]); // 801D0CF0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D0CF4
  W8(c->r[1]+0x00000160u,c->r[7]); // 801D0CF8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D0CFC
  W8(c->r[1]+0x00000161u,c->r[29]); // 801D0D00
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D0D04
  W8(c->r[1]+0x00000162u,c->r[28]); // 801D0D08
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D0D0C
  W8(c->r[1]+0x00000163u,c->r[12]); // 801D0D10
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D0D14
  W8(c->r[1]+0x00000164u,c->r[11]); // 801D0D18
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D0D1C
  W8(c->r[1]+0x00000165u,c->r[10]); // 801D0D20
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D0D24
  W8(c->r[1]+0x00000166u,c->r[9]); // 801D0D28
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D0D2C
  W8(c->r[1]+0x00000167u,c->r[8]); // 801D0D30
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D0D34
  W8(c->r[1]+0x00000168u,c->r[7]); // 801D0D38
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D0D3C
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D0D40
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D0D44
  W8(c->r[1]+0x00000158u,c->r[31]); // 801D0D48
  W8(c->r[1]+0x00000169u,c->r[29]); // 801D0D4C
  W8(c->r[1]+0x0000016Au,c->r[28]); // 801D0D50
  W8(c->r[1]+0x0000016Bu,c->r[12]); // 801D0D54
  W8(c->r[1]+0x0000016Cu,c->r[11]); // 801D0D58
  W8(c->r[1]+0x0000016Du,c->r[10]); // 801D0D5C
  W8(c->r[1]+0x0000016Eu,c->r[9]); // 801D0D60
  W8(c->r[1]+0x0000016Fu,c->r[8]); // 801D0D64
  W8(c->r[1]+0x00000170u,c->r[7]); // 801D0D68
  W8(c->r[1]+0x00000171u,c->r[6]); // 801D0D6C
  W8(c->r[1]+0x00000172u,c->r[0]); // 801D0D70
  c->lr=0x801D0D78u; f_801D0434(c); // 801D0D74
  c->r[3]=0u+0x00000002u; // 801D0D78
  c->lr=0x801D0D80u; f_801CFFE8(c); // 801D0D7C
  goto L_801D1978; // 801D0D80
L_801D0D84:;
  c->r[30]=c->r[3]+0x00000474u; // 801D0D84
  c->r[31]=0u+0x00000040u; // 801D0D88
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D0D8C
  c->r[4]=c->r[1]+0x0000013Cu; // 801D0D90
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D0D94
  c->r[3]=0u+0x000000E0u; // 801D0D98
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D0D9C
  c->r[5]=0u+0x0000001Bu; // 801D0DA0
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D0DA4
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D0DA8
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D0DAC
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D0DB0
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D0DB4
  W8(c->r[1]+0x0000013Du,c->r[29]); // 801D0DB8
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D0DBC
  W8(c->r[1]+0x0000013Eu,c->r[28]); // 801D0DC0
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D0DC4
  W8(c->r[1]+0x0000013Fu,c->r[12]); // 801D0DC8
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D0DCC
  W8(c->r[1]+0x00000140u,c->r[11]); // 801D0DD0
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D0DD4
  W8(c->r[1]+0x00000141u,c->r[10]); // 801D0DD8
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D0DDC
  W8(c->r[1]+0x00000142u,c->r[9]); // 801D0DE0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D0DE4
  W8(c->r[1]+0x00000143u,c->r[8]); // 801D0DE8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D0DEC
  W8(c->r[1]+0x00000144u,c->r[7]); // 801D0DF0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D0DF4
  W8(c->r[1]+0x00000145u,c->r[29]); // 801D0DF8
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D0DFC
  W8(c->r[1]+0x00000146u,c->r[28]); // 801D0E00
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D0E04
  W8(c->r[1]+0x00000147u,c->r[12]); // 801D0E08
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D0E0C
  W8(c->r[1]+0x00000148u,c->r[11]); // 801D0E10
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D0E14
  W8(c->r[1]+0x00000149u,c->r[10]); // 801D0E18
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D0E1C
  W8(c->r[1]+0x0000014Au,c->r[9]); // 801D0E20
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D0E24
  W8(c->r[1]+0x0000014Bu,c->r[8]); // 801D0E28
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D0E2C
  W8(c->r[1]+0x0000014Cu,c->r[7]); // 801D0E30
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D0E34
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D0E38
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D0E3C
  W8(c->r[1]+0x0000013Cu,c->r[31]); // 801D0E40
  W8(c->r[1]+0x0000014Du,c->r[29]); // 801D0E44
  W8(c->r[1]+0x0000014Eu,c->r[28]); // 801D0E48
  W8(c->r[1]+0x0000014Fu,c->r[12]); // 801D0E4C
  W8(c->r[1]+0x00000150u,c->r[11]); // 801D0E50
  W8(c->r[1]+0x00000151u,c->r[10]); // 801D0E54
  W8(c->r[1]+0x00000152u,c->r[9]); // 801D0E58
  W8(c->r[1]+0x00000153u,c->r[8]); // 801D0E5C
  W8(c->r[1]+0x00000154u,c->r[7]); // 801D0E60
  W8(c->r[1]+0x00000155u,c->r[6]); // 801D0E64
  W8(c->r[1]+0x00000156u,c->r[0]); // 801D0E68
  c->lr=0x801D0E70u; f_801D0434(c); // 801D0E6C
  c->r[3]=0u+0x00000002u; // 801D0E70
  c->lr=0x801D0E78u; f_801CFFE8(c); // 801D0E74
  goto L_801D1978; // 801D0E78
L_801D0E7C:;
  c->r[30]=c->r[3]+0x0000051Cu; // 801D0E7C
  c->r[31]=0u+0x00000040u; // 801D0E80
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D0E84
  c->r[4]=c->r[1]+0x00000120u; // 801D0E88
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D0E8C
  c->r[3]=0u+0x000000E0u; // 801D0E90
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D0E94
  c->r[5]=0u+0x0000001Bu; // 801D0E98
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D0E9C
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D0EA0
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D0EA4
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D0EA8
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D0EAC
  W8(c->r[1]+0x00000121u,c->r[29]); // 801D0EB0
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D0EB4
  W8(c->r[1]+0x00000122u,c->r[28]); // 801D0EB8
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D0EBC
  W8(c->r[1]+0x00000123u,c->r[12]); // 801D0EC0
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D0EC4
  W8(c->r[1]+0x00000124u,c->r[11]); // 801D0EC8
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D0ECC
  W8(c->r[1]+0x00000125u,c->r[10]); // 801D0ED0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D0ED4
  W8(c->r[1]+0x00000126u,c->r[9]); // 801D0ED8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D0EDC
  W8(c->r[1]+0x00000127u,c->r[8]); // 801D0EE0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D0EE4
  W8(c->r[1]+0x00000128u,c->r[7]); // 801D0EE8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D0EEC
  W8(c->r[1]+0x00000129u,c->r[29]); // 801D0EF0
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D0EF4
  W8(c->r[1]+0x0000012Au,c->r[28]); // 801D0EF8
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D0EFC
  W8(c->r[1]+0x0000012Bu,c->r[12]); // 801D0F00
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D0F04
  W8(c->r[1]+0x0000012Cu,c->r[11]); // 801D0F08
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D0F0C
  W8(c->r[1]+0x0000012Du,c->r[10]); // 801D0F10
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D0F14
  W8(c->r[1]+0x0000012Eu,c->r[9]); // 801D0F18
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D0F1C
  W8(c->r[1]+0x0000012Fu,c->r[8]); // 801D0F20
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D0F24
  W8(c->r[1]+0x00000130u,c->r[7]); // 801D0F28
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D0F2C
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D0F30
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D0F34
  W8(c->r[1]+0x00000120u,c->r[31]); // 801D0F38
  W8(c->r[1]+0x00000131u,c->r[29]); // 801D0F3C
  W8(c->r[1]+0x00000132u,c->r[28]); // 801D0F40
  W8(c->r[1]+0x00000133u,c->r[12]); // 801D0F44
  W8(c->r[1]+0x00000134u,c->r[11]); // 801D0F48
  W8(c->r[1]+0x00000135u,c->r[10]); // 801D0F4C
  W8(c->r[1]+0x00000136u,c->r[9]); // 801D0F50
  W8(c->r[1]+0x00000137u,c->r[8]); // 801D0F54
  W8(c->r[1]+0x00000138u,c->r[7]); // 801D0F58
  W8(c->r[1]+0x00000139u,c->r[6]); // 801D0F5C
  W8(c->r[1]+0x0000013Au,c->r[0]); // 801D0F60
  c->lr=0x801D0F68u; f_801D0434(c); // 801D0F64
  c->r[3]=0u+0x00000002u; // 801D0F68
  c->lr=0x801D0F70u; f_801CFFE8(c); // 801D0F6C
  goto L_801D1978; // 801D0F70
L_801D0F74:;
  c->r[30]=c->r[3]+0x000004C8u; // 801D0F74
  c->r[31]=0u+0x00000040u; // 801D0F78
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D0F7C
  c->r[4]=c->r[1]+0x00000104u; // 801D0F80
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D0F84
  c->r[3]=0u+0x000000E0u; // 801D0F88
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D0F8C
  c->r[5]=0u+0x0000001Bu; // 801D0F90
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D0F94
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D0F98
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D0F9C
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D0FA0
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D0FA4
  W8(c->r[1]+0x00000105u,c->r[29]); // 801D0FA8
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D0FAC
  W8(c->r[1]+0x00000106u,c->r[28]); // 801D0FB0
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D0FB4
  W8(c->r[1]+0x00000107u,c->r[12]); // 801D0FB8
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D0FBC
  W8(c->r[1]+0x00000108u,c->r[11]); // 801D0FC0
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D0FC4
  W8(c->r[1]+0x00000109u,c->r[10]); // 801D0FC8
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D0FCC
  W8(c->r[1]+0x0000010Au,c->r[9]); // 801D0FD0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D0FD4
  W8(c->r[1]+0x0000010Bu,c->r[8]); // 801D0FD8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D0FDC
  W8(c->r[1]+0x0000010Cu,c->r[7]); // 801D0FE0
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D0FE4
  W8(c->r[1]+0x0000010Du,c->r[29]); // 801D0FE8
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D0FEC
  W8(c->r[1]+0x0000010Eu,c->r[28]); // 801D0FF0
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D0FF4
  W8(c->r[1]+0x0000010Fu,c->r[12]); // 801D0FF8
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D0FFC
  W8(c->r[1]+0x00000110u,c->r[11]); // 801D1000
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1004
  W8(c->r[1]+0x00000111u,c->r[10]); // 801D1008
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D100C
  W8(c->r[1]+0x00000112u,c->r[9]); // 801D1010
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1014
  W8(c->r[1]+0x00000113u,c->r[8]); // 801D1018
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D101C
  W8(c->r[1]+0x00000114u,c->r[7]); // 801D1020
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1024
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1028
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D102C
  W8(c->r[1]+0x00000104u,c->r[31]); // 801D1030
  W8(c->r[1]+0x00000115u,c->r[29]); // 801D1034
  W8(c->r[1]+0x00000116u,c->r[28]); // 801D1038
  W8(c->r[1]+0x00000117u,c->r[12]); // 801D103C
  W8(c->r[1]+0x00000118u,c->r[11]); // 801D1040
  W8(c->r[1]+0x00000119u,c->r[10]); // 801D1044
  W8(c->r[1]+0x0000011Au,c->r[9]); // 801D1048
  W8(c->r[1]+0x0000011Bu,c->r[8]); // 801D104C
  W8(c->r[1]+0x0000011Cu,c->r[7]); // 801D1050
  W8(c->r[1]+0x0000011Du,c->r[6]); // 801D1054
  W8(c->r[1]+0x0000011Eu,c->r[0]); // 801D1058
  c->lr=0x801D1060u; f_801D0434(c); // 801D105C
  c->r[3]=0u+0x00000002u; // 801D1060
  c->lr=0x801D1068u; f_801CFFE8(c); // 801D1064
  goto L_801D1978; // 801D1068
L_801D106C:;
  c->r[0]=R32(c->r[13]+0xFFFF84C4u); // 801D106C
  cmps(c,0,(int32_t)c->r[0],2); // 801D1070
  if (crb(c,2)) { goto L_801D1288; } // 801D1074
  if (!crb(c,0)) { goto L_801D108C; } // 801D1078
  cmps(c,0,(int32_t)c->r[0],0); // 801D107C
  if (crb(c,2)) { goto L_801D1098; } // 801D1080
  if (!crb(c,0)) { goto L_801D1190; } // 801D1084
  goto L_801D1978; // 801D1088
L_801D108C:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D108C
  if (crb(c,2)) { goto L_801D1380; } // 801D1090
  goto L_801D1978; // 801D1094
L_801D1098:;
  c->r[30]=c->r[3]+0x0000043Cu; // 801D1098
  c->r[31]=0u+0x00000040u; // 801D109C
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D10A0
  c->r[4]=c->r[1]+0x000000E8u; // 801D10A4
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D10A8
  c->r[3]=0u+0x000000E0u; // 801D10AC
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D10B0
  c->r[5]=0u+0x0000001Bu; // 801D10B4
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D10B8
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D10BC
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D10C0
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D10C4
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D10C8
  W8(c->r[1]+0x000000E9u,c->r[29]); // 801D10CC
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D10D0
  W8(c->r[1]+0x000000EAu,c->r[28]); // 801D10D4
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D10D8
  W8(c->r[1]+0x000000EBu,c->r[12]); // 801D10DC
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D10E0
  W8(c->r[1]+0x000000ECu,c->r[11]); // 801D10E4
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D10E8
  W8(c->r[1]+0x000000EDu,c->r[10]); // 801D10EC
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D10F0
  W8(c->r[1]+0x000000EEu,c->r[9]); // 801D10F4
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D10F8
  W8(c->r[1]+0x000000EFu,c->r[8]); // 801D10FC
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D1100
  W8(c->r[1]+0x000000F0u,c->r[7]); // 801D1104
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D1108
  W8(c->r[1]+0x000000F1u,c->r[29]); // 801D110C
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D1110
  W8(c->r[1]+0x000000F2u,c->r[28]); // 801D1114
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1118
  W8(c->r[1]+0x000000F3u,c->r[12]); // 801D111C
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1120
  W8(c->r[1]+0x000000F4u,c->r[11]); // 801D1124
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1128
  W8(c->r[1]+0x000000F5u,c->r[10]); // 801D112C
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1130
  W8(c->r[1]+0x000000F6u,c->r[9]); // 801D1134
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1138
  W8(c->r[1]+0x000000F7u,c->r[8]); // 801D113C
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1140
  W8(c->r[1]+0x000000F8u,c->r[7]); // 801D1144
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1148
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D114C
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1150
  W8(c->r[1]+0x000000E8u,c->r[31]); // 801D1154
  W8(c->r[1]+0x000000F9u,c->r[29]); // 801D1158
  W8(c->r[1]+0x000000FAu,c->r[28]); // 801D115C
  W8(c->r[1]+0x000000FBu,c->r[12]); // 801D1160
  W8(c->r[1]+0x000000FCu,c->r[11]); // 801D1164
  W8(c->r[1]+0x000000FDu,c->r[10]); // 801D1168
  W8(c->r[1]+0x000000FEu,c->r[9]); // 801D116C
  W8(c->r[1]+0x000000FFu,c->r[8]); // 801D1170
  W8(c->r[1]+0x00000100u,c->r[7]); // 801D1174
  W8(c->r[1]+0x00000101u,c->r[6]); // 801D1178
  W8(c->r[1]+0x00000102u,c->r[0]); // 801D117C
  c->lr=0x801D1184u; f_801D0434(c); // 801D1180
  c->r[3]=0u+0x00000002u; // 801D1184
  c->lr=0x801D118Cu; f_801CFFE8(c); // 801D1188
  goto L_801D1978; // 801D118C
L_801D1190:;
  c->r[30]=c->r[3]+0x00000490u; // 801D1190
  c->r[31]=0u+0x00000040u; // 801D1194
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D1198
  c->r[4]=c->r[1]+0x000000CCu; // 801D119C
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D11A0
  c->r[3]=0u+0x000000E0u; // 801D11A4
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D11A8
  c->r[5]=0u+0x0000001Bu; // 801D11AC
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D11B0
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D11B4
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D11B8
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D11BC
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D11C0
  W8(c->r[1]+0x000000CDu,c->r[29]); // 801D11C4
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D11C8
  W8(c->r[1]+0x000000CEu,c->r[28]); // 801D11CC
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D11D0
  W8(c->r[1]+0x000000CFu,c->r[12]); // 801D11D4
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D11D8
  W8(c->r[1]+0x000000D0u,c->r[11]); // 801D11DC
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D11E0
  W8(c->r[1]+0x000000D1u,c->r[10]); // 801D11E4
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D11E8
  W8(c->r[1]+0x000000D2u,c->r[9]); // 801D11EC
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D11F0
  W8(c->r[1]+0x000000D3u,c->r[8]); // 801D11F4
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D11F8
  W8(c->r[1]+0x000000D4u,c->r[7]); // 801D11FC
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D1200
  W8(c->r[1]+0x000000D5u,c->r[29]); // 801D1204
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D1208
  W8(c->r[1]+0x000000D6u,c->r[28]); // 801D120C
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1210
  W8(c->r[1]+0x000000D7u,c->r[12]); // 801D1214
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1218
  W8(c->r[1]+0x000000D8u,c->r[11]); // 801D121C
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1220
  W8(c->r[1]+0x000000D9u,c->r[10]); // 801D1224
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1228
  W8(c->r[1]+0x000000DAu,c->r[9]); // 801D122C
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1230
  W8(c->r[1]+0x000000DBu,c->r[8]); // 801D1234
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1238
  W8(c->r[1]+0x000000DCu,c->r[7]); // 801D123C
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1240
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1244
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1248
  W8(c->r[1]+0x000000CCu,c->r[31]); // 801D124C
  W8(c->r[1]+0x000000DDu,c->r[29]); // 801D1250
  W8(c->r[1]+0x000000DEu,c->r[28]); // 801D1254
  W8(c->r[1]+0x000000DFu,c->r[12]); // 801D1258
  W8(c->r[1]+0x000000E0u,c->r[11]); // 801D125C
  W8(c->r[1]+0x000000E1u,c->r[10]); // 801D1260
  W8(c->r[1]+0x000000E2u,c->r[9]); // 801D1264
  W8(c->r[1]+0x000000E3u,c->r[8]); // 801D1268
  W8(c->r[1]+0x000000E4u,c->r[7]); // 801D126C
  W8(c->r[1]+0x000000E5u,c->r[6]); // 801D1270
  W8(c->r[1]+0x000000E6u,c->r[0]); // 801D1274
  c->lr=0x801D127Cu; f_801D0434(c); // 801D1278
  c->r[3]=0u+0x00000002u; // 801D127C
  c->lr=0x801D1284u; f_801CFFE8(c); // 801D1280
  goto L_801D1978; // 801D1284
L_801D1288:;
  c->r[30]=c->r[3]+0x00000538u; // 801D1288
  c->r[31]=0u+0x00000040u; // 801D128C
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D1290
  c->r[4]=c->r[1]+0x000000B0u; // 801D1294
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D1298
  c->r[3]=0u+0x000000E0u; // 801D129C
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D12A0
  c->r[5]=0u+0x0000001Bu; // 801D12A4
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D12A8
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D12AC
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D12B0
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D12B4
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D12B8
  W8(c->r[1]+0x000000B1u,c->r[29]); // 801D12BC
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D12C0
  W8(c->r[1]+0x000000B2u,c->r[28]); // 801D12C4
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D12C8
  W8(c->r[1]+0x000000B3u,c->r[12]); // 801D12CC
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D12D0
  W8(c->r[1]+0x000000B4u,c->r[11]); // 801D12D4
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D12D8
  W8(c->r[1]+0x000000B5u,c->r[10]); // 801D12DC
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D12E0
  W8(c->r[1]+0x000000B6u,c->r[9]); // 801D12E4
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D12E8
  W8(c->r[1]+0x000000B7u,c->r[8]); // 801D12EC
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D12F0
  W8(c->r[1]+0x000000B8u,c->r[7]); // 801D12F4
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D12F8
  W8(c->r[1]+0x000000B9u,c->r[29]); // 801D12FC
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D1300
  W8(c->r[1]+0x000000BAu,c->r[28]); // 801D1304
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1308
  W8(c->r[1]+0x000000BBu,c->r[12]); // 801D130C
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1310
  W8(c->r[1]+0x000000BCu,c->r[11]); // 801D1314
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1318
  W8(c->r[1]+0x000000BDu,c->r[10]); // 801D131C
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1320
  W8(c->r[1]+0x000000BEu,c->r[9]); // 801D1324
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1328
  W8(c->r[1]+0x000000BFu,c->r[8]); // 801D132C
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1330
  W8(c->r[1]+0x000000C0u,c->r[7]); // 801D1334
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1338
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D133C
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1340
  W8(c->r[1]+0x000000B0u,c->r[31]); // 801D1344
  W8(c->r[1]+0x000000C1u,c->r[29]); // 801D1348
  W8(c->r[1]+0x000000C2u,c->r[28]); // 801D134C
  W8(c->r[1]+0x000000C3u,c->r[12]); // 801D1350
  W8(c->r[1]+0x000000C4u,c->r[11]); // 801D1354
  W8(c->r[1]+0x000000C5u,c->r[10]); // 801D1358
  W8(c->r[1]+0x000000C6u,c->r[9]); // 801D135C
  W8(c->r[1]+0x000000C7u,c->r[8]); // 801D1360
  W8(c->r[1]+0x000000C8u,c->r[7]); // 801D1364
  W8(c->r[1]+0x000000C9u,c->r[6]); // 801D1368
  W8(c->r[1]+0x000000CAu,c->r[0]); // 801D136C
  c->lr=0x801D1374u; f_801D0434(c); // 801D1370
  c->r[3]=0u+0x00000002u; // 801D1374
  c->lr=0x801D137Cu; f_801CFFE8(c); // 801D1378
  goto L_801D1978; // 801D137C
L_801D1380:;
  c->r[30]=c->r[3]+0x000004E4u; // 801D1380
  c->r[31]=0u+0x00000040u; // 801D1384
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D1388
  c->r[4]=c->r[1]+0x00000094u; // 801D138C
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D1390
  c->r[3]=0u+0x000000E0u; // 801D1394
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D1398
  c->r[5]=0u+0x0000001Bu; // 801D139C
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D13A0
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D13A4
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D13A8
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D13AC
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D13B0
  W8(c->r[1]+0x00000095u,c->r[29]); // 801D13B4
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D13B8
  W8(c->r[1]+0x00000096u,c->r[28]); // 801D13BC
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D13C0
  W8(c->r[1]+0x00000097u,c->r[12]); // 801D13C4
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D13C8
  W8(c->r[1]+0x00000098u,c->r[11]); // 801D13CC
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D13D0
  W8(c->r[1]+0x00000099u,c->r[10]); // 801D13D4
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D13D8
  W8(c->r[1]+0x0000009Au,c->r[9]); // 801D13DC
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D13E0
  W8(c->r[1]+0x0000009Bu,c->r[8]); // 801D13E4
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D13E8
  W8(c->r[1]+0x0000009Cu,c->r[7]); // 801D13EC
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D13F0
  W8(c->r[1]+0x0000009Du,c->r[29]); // 801D13F4
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D13F8
  W8(c->r[1]+0x0000009Eu,c->r[28]); // 801D13FC
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1400
  W8(c->r[1]+0x0000009Fu,c->r[12]); // 801D1404
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1408
  W8(c->r[1]+0x000000A0u,c->r[11]); // 801D140C
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1410
  W8(c->r[1]+0x000000A1u,c->r[10]); // 801D1414
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1418
  W8(c->r[1]+0x000000A2u,c->r[9]); // 801D141C
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1420
  W8(c->r[1]+0x000000A3u,c->r[8]); // 801D1424
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1428
  W8(c->r[1]+0x000000A4u,c->r[7]); // 801D142C
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1430
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1434
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1438
  W8(c->r[1]+0x00000094u,c->r[31]); // 801D143C
  W8(c->r[1]+0x000000A5u,c->r[29]); // 801D1440
  W8(c->r[1]+0x000000A6u,c->r[28]); // 801D1444
  W8(c->r[1]+0x000000A7u,c->r[12]); // 801D1448
  W8(c->r[1]+0x000000A8u,c->r[11]); // 801D144C
  W8(c->r[1]+0x000000A9u,c->r[10]); // 801D1450
  W8(c->r[1]+0x000000AAu,c->r[9]); // 801D1454
  W8(c->r[1]+0x000000ABu,c->r[8]); // 801D1458
  W8(c->r[1]+0x000000ACu,c->r[7]); // 801D145C
  W8(c->r[1]+0x000000ADu,c->r[6]); // 801D1460
  W8(c->r[1]+0x000000AEu,c->r[0]); // 801D1464
  c->lr=0x801D146Cu; f_801D0434(c); // 801D1468
  c->r[3]=0u+0x00000002u; // 801D146C
  c->lr=0x801D1474u; f_801CFFE8(c); // 801D1470
  goto L_801D1978; // 801D1474
L_801D1478:;
  c->r[0]=R32(c->r[13]+0xFFFF84C4u); // 801D1478
  cmps(c,0,(int32_t)c->r[0],2); // 801D147C
  if (crb(c,2)) { goto L_801D1694; } // 801D1480
  if (!crb(c,0)) { goto L_801D1498; } // 801D1484
  cmps(c,0,(int32_t)c->r[0],0); // 801D1488
  if (crb(c,2)) { goto L_801D14A4; } // 801D148C
  if (!crb(c,0)) { goto L_801D159C; } // 801D1490
  goto L_801D1978; // 801D1494
L_801D1498:;
  cmps(c,0,(int32_t)c->r[0],5); // 801D1498
  if (crb(c,2)) { goto L_801D178C; } // 801D149C
  goto L_801D1978; // 801D14A0
L_801D14A4:;
  c->r[30]=c->r[3]+0x00000458u; // 801D14A4
  c->r[31]=0u+0x00000040u; // 801D14A8
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D14AC
  c->r[4]=c->r[1]+0x00000078u; // 801D14B0
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D14B4
  c->r[3]=0u+0x000000E0u; // 801D14B8
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D14BC
  c->r[5]=0u+0x0000001Bu; // 801D14C0
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D14C4
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D14C8
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D14CC
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D14D0
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D14D4
  W8(c->r[1]+0x00000079u,c->r[29]); // 801D14D8
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D14DC
  W8(c->r[1]+0x0000007Au,c->r[28]); // 801D14E0
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D14E4
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 801D14E8
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D14EC
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 801D14F0
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D14F4
  W8(c->r[1]+0x0000007Du,c->r[10]); // 801D14F8
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D14FC
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 801D1500
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D1504
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 801D1508
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D150C
  W8(c->r[1]+0x00000080u,c->r[7]); // 801D1510
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D1514
  W8(c->r[1]+0x00000081u,c->r[29]); // 801D1518
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D151C
  W8(c->r[1]+0x00000082u,c->r[28]); // 801D1520
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1524
  W8(c->r[1]+0x00000083u,c->r[12]); // 801D1528
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D152C
  W8(c->r[1]+0x00000084u,c->r[11]); // 801D1530
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1534
  W8(c->r[1]+0x00000085u,c->r[10]); // 801D1538
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D153C
  W8(c->r[1]+0x00000086u,c->r[9]); // 801D1540
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1544
  W8(c->r[1]+0x00000087u,c->r[8]); // 801D1548
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D154C
  W8(c->r[1]+0x00000088u,c->r[7]); // 801D1550
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1554
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1558
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D155C
  W8(c->r[1]+0x00000078u,c->r[31]); // 801D1560
  W8(c->r[1]+0x00000089u,c->r[29]); // 801D1564
  W8(c->r[1]+0x0000008Au,c->r[28]); // 801D1568
  W8(c->r[1]+0x0000008Bu,c->r[12]); // 801D156C
  W8(c->r[1]+0x0000008Cu,c->r[11]); // 801D1570
  W8(c->r[1]+0x0000008Du,c->r[10]); // 801D1574
  W8(c->r[1]+0x0000008Eu,c->r[9]); // 801D1578
  W8(c->r[1]+0x0000008Fu,c->r[8]); // 801D157C
  W8(c->r[1]+0x00000090u,c->r[7]); // 801D1580
  W8(c->r[1]+0x00000091u,c->r[6]); // 801D1584
  W8(c->r[1]+0x00000092u,c->r[0]); // 801D1588
  c->lr=0x801D1590u; f_801D0434(c); // 801D158C
  c->r[3]=0u+0x00000002u; // 801D1590
  c->lr=0x801D1598u; f_801CFFE8(c); // 801D1594
  goto L_801D1978; // 801D1598
L_801D159C:;
  c->r[30]=c->r[3]+0x000004ACu; // 801D159C
  c->r[31]=0u+0x00000040u; // 801D15A0
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D15A4
  c->r[4]=c->r[1]+0x0000005Cu; // 801D15A8
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D15AC
  c->r[3]=0u+0x000000E0u; // 801D15B0
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D15B4
  c->r[5]=0u+0x0000001Bu; // 801D15B8
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D15BC
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D15C0
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D15C4
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D15C8
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D15CC
  W8(c->r[1]+0x0000005Du,c->r[29]); // 801D15D0
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D15D4
  W8(c->r[1]+0x0000005Eu,c->r[28]); // 801D15D8
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D15DC
  W8(c->r[1]+0x0000005Fu,c->r[12]); // 801D15E0
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D15E4
  W8(c->r[1]+0x00000060u,c->r[11]); // 801D15E8
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D15EC
  W8(c->r[1]+0x00000061u,c->r[10]); // 801D15F0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D15F4
  W8(c->r[1]+0x00000062u,c->r[9]); // 801D15F8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D15FC
  W8(c->r[1]+0x00000063u,c->r[8]); // 801D1600
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D1604
  W8(c->r[1]+0x00000064u,c->r[7]); // 801D1608
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D160C
  W8(c->r[1]+0x00000065u,c->r[29]); // 801D1610
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D1614
  W8(c->r[1]+0x00000066u,c->r[28]); // 801D1618
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D161C
  W8(c->r[1]+0x00000067u,c->r[12]); // 801D1620
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1624
  W8(c->r[1]+0x00000068u,c->r[11]); // 801D1628
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D162C
  W8(c->r[1]+0x00000069u,c->r[10]); // 801D1630
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1634
  W8(c->r[1]+0x0000006Au,c->r[9]); // 801D1638
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D163C
  W8(c->r[1]+0x0000006Bu,c->r[8]); // 801D1640
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1644
  W8(c->r[1]+0x0000006Cu,c->r[7]); // 801D1648
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D164C
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1650
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1654
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 801D1658
  W8(c->r[1]+0x0000006Du,c->r[29]); // 801D165C
  W8(c->r[1]+0x0000006Eu,c->r[28]); // 801D1660
  W8(c->r[1]+0x0000006Fu,c->r[12]); // 801D1664
  W8(c->r[1]+0x00000070u,c->r[11]); // 801D1668
  W8(c->r[1]+0x00000071u,c->r[10]); // 801D166C
  W8(c->r[1]+0x00000072u,c->r[9]); // 801D1670
  W8(c->r[1]+0x00000073u,c->r[8]); // 801D1674
  W8(c->r[1]+0x00000074u,c->r[7]); // 801D1678
  W8(c->r[1]+0x00000075u,c->r[6]); // 801D167C
  W8(c->r[1]+0x00000076u,c->r[0]); // 801D1680
  c->lr=0x801D1688u; f_801D0434(c); // 801D1684
  c->r[3]=0u+0x00000002u; // 801D1688
  c->lr=0x801D1690u; f_801CFFE8(c); // 801D168C
  goto L_801D1978; // 801D1690
L_801D1694:;
  c->r[30]=c->r[3]+0x00000554u; // 801D1694
  c->r[31]=0u+0x00000040u; // 801D1698
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D169C
  c->r[4]=c->r[1]+0x00000040u; // 801D16A0
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D16A4
  c->r[3]=0u+0x000000E0u; // 801D16A8
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D16AC
  c->r[5]=0u+0x0000001Bu; // 801D16B0
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D16B4
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D16B8
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D16BC
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D16C0
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D16C4
  W8(c->r[1]+0x00000041u,c->r[29]); // 801D16C8
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D16CC
  W8(c->r[1]+0x00000042u,c->r[28]); // 801D16D0
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D16D4
  W8(c->r[1]+0x00000043u,c->r[12]); // 801D16D8
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D16DC
  W8(c->r[1]+0x00000044u,c->r[11]); // 801D16E0
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D16E4
  W8(c->r[1]+0x00000045u,c->r[10]); // 801D16E8
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D16EC
  W8(c->r[1]+0x00000046u,c->r[9]); // 801D16F0
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D16F4
  W8(c->r[1]+0x00000047u,c->r[8]); // 801D16F8
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D16FC
  W8(c->r[1]+0x00000048u,c->r[7]); // 801D1700
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D1704
  W8(c->r[1]+0x00000049u,c->r[29]); // 801D1708
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D170C
  W8(c->r[1]+0x0000004Au,c->r[28]); // 801D1710
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D1714
  W8(c->r[1]+0x0000004Bu,c->r[12]); // 801D1718
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D171C
  W8(c->r[1]+0x0000004Cu,c->r[11]); // 801D1720
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D1724
  W8(c->r[1]+0x0000004Du,c->r[10]); // 801D1728
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D172C
  W8(c->r[1]+0x0000004Eu,c->r[9]); // 801D1730
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D1734
  W8(c->r[1]+0x0000004Fu,c->r[8]); // 801D1738
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D173C
  W8(c->r[1]+0x00000050u,c->r[7]); // 801D1740
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D1744
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1748
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D174C
  W8(c->r[1]+0x00000040u,c->r[31]); // 801D1750
  W8(c->r[1]+0x00000051u,c->r[29]); // 801D1754
  W8(c->r[1]+0x00000052u,c->r[28]); // 801D1758
  W8(c->r[1]+0x00000053u,c->r[12]); // 801D175C
  W8(c->r[1]+0x00000054u,c->r[11]); // 801D1760
  W8(c->r[1]+0x00000055u,c->r[10]); // 801D1764
  W8(c->r[1]+0x00000056u,c->r[9]); // 801D1768
  W8(c->r[1]+0x00000057u,c->r[8]); // 801D176C
  W8(c->r[1]+0x00000058u,c->r[7]); // 801D1770
  W8(c->r[1]+0x00000059u,c->r[6]); // 801D1774
  W8(c->r[1]+0x0000005Au,c->r[0]); // 801D1778
  c->lr=0x801D1780u; f_801D0434(c); // 801D177C
  c->r[3]=0u+0x00000002u; // 801D1780
  c->lr=0x801D1788u; f_801CFFE8(c); // 801D1784
  goto L_801D1978; // 801D1788
L_801D178C:;
  c->r[30]=c->r[3]+0x00000500u; // 801D178C
  c->r[31]=0u+0x00000040u; // 801D1790
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D1794
  c->r[4]=c->r[1]+0x00000024u; // 801D1798
  c->r[28]=R8(c->r[30]+0x00000001u); // 801D179C
  c->r[3]=0u+0x000000E0u; // 801D17A0
  c->r[12]=R8(c->r[30]+0x00000002u); // 801D17A4
  c->r[5]=0u+0x0000001Bu; // 801D17A8
  c->r[11]=R8(c->r[30]+0x00000003u); // 801D17AC
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D17B0
  c->r[9]=R8(c->r[30]+0x00000005u); // 801D17B4
  c->r[8]=R8(c->r[30]+0x00000006u); // 801D17B8
  c->r[7]=R8(c->r[30]+0x00000007u); // 801D17BC
  W8(c->r[1]+0x00000025u,c->r[29]); // 801D17C0
  c->r[29]=R8(c->r[30]+0x00000008u); // 801D17C4
  W8(c->r[1]+0x00000026u,c->r[28]); // 801D17C8
  c->r[28]=R8(c->r[30]+0x00000009u); // 801D17CC
  W8(c->r[1]+0x00000027u,c->r[12]); // 801D17D0
  c->r[12]=R8(c->r[30]+0x0000000Au); // 801D17D4
  W8(c->r[1]+0x00000028u,c->r[11]); // 801D17D8
  c->r[11]=R8(c->r[30]+0x0000000Bu); // 801D17DC
  W8(c->r[1]+0x00000029u,c->r[10]); // 801D17E0
  c->r[10]=R8(c->r[30]+0x0000000Cu); // 801D17E4
  W8(c->r[1]+0x0000002Au,c->r[9]); // 801D17E8
  c->r[9]=R8(c->r[30]+0x0000000Du); // 801D17EC
  W8(c->r[1]+0x0000002Bu,c->r[8]); // 801D17F0
  c->r[8]=R8(c->r[30]+0x0000000Eu); // 801D17F4
  W8(c->r[1]+0x0000002Cu,c->r[7]); // 801D17F8
  c->r[7]=R8(c->r[30]+0x0000000Fu); // 801D17FC
  W8(c->r[1]+0x0000002Du,c->r[29]); // 801D1800
  c->r[29]=R8(c->r[30]+0x00000010u); // 801D1804
  W8(c->r[1]+0x0000002Eu,c->r[28]); // 801D1808
  c->r[28]=R8(c->r[30]+0x00000011u); // 801D180C
  W8(c->r[1]+0x0000002Fu,c->r[12]); // 801D1810
  c->r[12]=R8(c->r[30]+0x00000012u); // 801D1814
  W8(c->r[1]+0x00000030u,c->r[11]); // 801D1818
  c->r[11]=R8(c->r[30]+0x00000013u); // 801D181C
  W8(c->r[1]+0x00000031u,c->r[10]); // 801D1820
  c->r[10]=R8(c->r[30]+0x00000014u); // 801D1824
  W8(c->r[1]+0x00000032u,c->r[9]); // 801D1828
  c->r[9]=R8(c->r[30]+0x00000015u); // 801D182C
  W8(c->r[1]+0x00000033u,c->r[8]); // 801D1830
  c->r[8]=R8(c->r[30]+0x00000016u); // 801D1834
  W8(c->r[1]+0x00000034u,c->r[7]); // 801D1838
  c->r[7]=R8(c->r[30]+0x00000017u); // 801D183C
  c->r[6]=R8(c->r[30]+0x00000018u); // 801D1840
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D1844
  W8(c->r[1]+0x00000024u,c->r[31]); // 801D1848
  W8(c->r[1]+0x00000035u,c->r[29]); // 801D184C
  W8(c->r[1]+0x00000036u,c->r[28]); // 801D1850
  W8(c->r[1]+0x00000037u,c->r[12]); // 801D1854
  W8(c->r[1]+0x00000038u,c->r[11]); // 801D1858
  W8(c->r[1]+0x00000039u,c->r[10]); // 801D185C
  W8(c->r[1]+0x0000003Au,c->r[9]); // 801D1860
  W8(c->r[1]+0x0000003Bu,c->r[8]); // 801D1864
  W8(c->r[1]+0x0000003Cu,c->r[7]); // 801D1868
  W8(c->r[1]+0x0000003Du,c->r[6]); // 801D186C
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 801D1870
  c->lr=0x801D1878u; f_801D0434(c); // 801D1874
  c->r[3]=0u+0x00000002u; // 801D1878
  c->lr=0x801D1880u; f_801CFFE8(c); // 801D187C
  goto L_801D1978; // 801D1880
L_801D1884:;
  c->r[29]=0u+0x80570000u; // 801D1884
  {uint32_t ea=c->r[29]+0xFFFFF4F0u; c->r[30]=R8(ea); c->r[29]=ea;} // 801D1888
  c->r[28]=0u+0x00000040u; // 801D188C
  c->r[4]=c->r[1]+0x00000008u; // 801D1890
  c->r[31]=R8(c->r[29]+0x00000001u); // 801D1894
  c->r[3]=0u+0x000000E0u; // 801D1898
  c->r[12]=R8(c->r[29]+0x00000002u); // 801D189C
  c->r[5]=0u+0x0000001Bu; // 801D18A0
  c->r[11]=R8(c->r[29]+0x00000003u); // 801D18A4
  c->r[10]=R8(c->r[29]+0x00000004u); // 801D18A8
  c->r[9]=R8(c->r[29]+0x00000005u); // 801D18AC
  c->r[8]=R8(c->r[29]+0x00000006u); // 801D18B0
  c->r[7]=R8(c->r[29]+0x00000007u); // 801D18B4
  W8(c->r[1]+0x00000009u,c->r[30]); // 801D18B8
  c->r[30]=R8(c->r[29]+0x00000008u); // 801D18BC
  W8(c->r[1]+0x0000000Au,c->r[31]); // 801D18C0
  c->r[31]=R8(c->r[29]+0x00000009u); // 801D18C4
  W8(c->r[1]+0x0000000Bu,c->r[12]); // 801D18C8
  c->r[12]=R8(c->r[29]+0x0000000Au); // 801D18CC
  W8(c->r[1]+0x0000000Cu,c->r[11]); // 801D18D0
  c->r[11]=R8(c->r[29]+0x0000000Bu); // 801D18D4
  W8(c->r[1]+0x0000000Du,c->r[10]); // 801D18D8
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 801D18DC
  W8(c->r[1]+0x0000000Eu,c->r[9]); // 801D18E0
  c->r[9]=R8(c->r[29]+0x0000000Du); // 801D18E4
  W8(c->r[1]+0x0000000Fu,c->r[8]); // 801D18E8
  c->r[8]=R8(c->r[29]+0x0000000Eu); // 801D18EC
  W8(c->r[1]+0x00000010u,c->r[7]); // 801D18F0
  c->r[7]=R8(c->r[29]+0x0000000Fu); // 801D18F4
  W8(c->r[1]+0x00000011u,c->r[30]); // 801D18F8
  c->r[30]=R8(c->r[29]+0x00000010u); // 801D18FC
  W8(c->r[1]+0x00000012u,c->r[31]); // 801D1900
  c->r[31]=R8(c->r[29]+0x00000011u); // 801D1904
  W8(c->r[1]+0x00000013u,c->r[12]); // 801D1908
  c->r[12]=R8(c->r[29]+0x00000012u); // 801D190C
  W8(c->r[1]+0x00000014u,c->r[11]); // 801D1910
  c->r[11]=R8(c->r[29]+0x00000013u); // 801D1914
  W8(c->r[1]+0x00000015u,c->r[10]); // 801D1918
  c->r[10]=R8(c->r[29]+0x00000014u); // 801D191C
  W8(c->r[1]+0x00000016u,c->r[9]); // 801D1920
  c->r[9]=R8(c->r[29]+0x00000015u); // 801D1924
  W8(c->r[1]+0x00000017u,c->r[8]); // 801D1928
  c->r[8]=R8(c->r[29]+0x00000016u); // 801D192C
  W8(c->r[1]+0x00000018u,c->r[7]); // 801D1930
  c->r[7]=R8(c->r[29]+0x00000017u); // 801D1934
  c->r[6]=R8(c->r[29]+0x00000018u); // 801D1938
  c->r[0]=R8(c->r[29]+0x00000019u); // 801D193C
  W8(c->r[1]+0x00000008u,c->r[28]); // 801D1940
  W8(c->r[1]+0x00000019u,c->r[30]); // 801D1944
  W8(c->r[1]+0x0000001Au,c->r[31]); // 801D1948
  W8(c->r[1]+0x0000001Bu,c->r[12]); // 801D194C
  W8(c->r[1]+0x0000001Cu,c->r[11]); // 801D1950
  W8(c->r[1]+0x0000001Du,c->r[10]); // 801D1954
  W8(c->r[1]+0x0000001Eu,c->r[9]); // 801D1958
  W8(c->r[1]+0x0000001Fu,c->r[8]); // 801D195C
  W8(c->r[1]+0x00000020u,c->r[7]); // 801D1960
  W8(c->r[1]+0x00000021u,c->r[6]); // 801D1964
  W8(c->r[1]+0x00000022u,c->r[0]); // 801D1968
  c->lr=0x801D1970u; f_801D0434(c); // 801D196C
  c->r[3]=0u+0x00000002u; // 801D1970
  c->lr=0x801D1978u; f_801CFFE8(c); // 801D1974
L_801D1978:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 801D1978
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 801D197C
  c->r[30]=R32(c->r[1]+0x00000188u); // 801D1980
  c->r[29]=R32(c->r[1]+0x00000184u); // 801D1984
  c->r[28]=R32(c->r[1]+0x00000180u); // 801D1988
  c->lr=c->r[0]; // 801D198C
  c->r[1]=c->r[1]+0x00000190u; // 801D1990
  return; // 801D1994
}

// __VISetGammaImm
void f_801D1998(Ctx* __restrict c) {
  trace_call(0x801D1998u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1998
  c->r[0]=c->lr; // 801D199C
  c->r[5]=0u+0x00000022u; // 801D19A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D19A4
  c->r[0]=0u+0x00000010u; // 801D19A8
  c->r[4]=c->r[1]+0x00000008u; // 801D19AC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D19B0
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D19B4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D19B8
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D19BC
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D19C0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D19C4
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D19C8
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D19CC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D19D0
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D19D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D19D8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D19DC
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D19E0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D19E4
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D19E8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D19EC
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D19F0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D19F4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D19F8
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D19FC
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D1A00
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D1A04
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1A08
  W8(c->r[1]+0x00000011u,c->r[0]); // 801D1A0C
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D1A10
  W8(c->r[1]+0x00000012u,c->r[0]); // 801D1A14
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801D1A18
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1A1C
  W8(c->r[1]+0x00000013u,c->r[0]); // 801D1A20
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801D1A24
  W8(c->r[1]+0x00000014u,c->r[0]); // 801D1A28
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D1A2C
  W8(c->r[1]+0x00000015u,c->r[0]); // 801D1A30
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801D1A34
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D1A38
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801D1A3C
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D1A40
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801D1A44
  W8(c->r[1]+0x00000018u,c->r[0]); // 801D1A48
  c->r[0]=R8(c->r[3]+0x00000010u); // 801D1A4C
  W8(c->r[1]+0x00000019u,c->r[0]); // 801D1A50
  c->r[0]=R8(c->r[3]+0x00000011u); // 801D1A54
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801D1A58
  c->r[0]=R8(c->r[3]+0x00000012u); // 801D1A5C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801D1A60
  c->r[0]=R16(c->r[3]+0x00000014u); // 801D1A64
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1A68
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801D1A6C
  c->r[0]=R16(c->r[3]+0x00000014u); // 801D1A70
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1A74
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801D1A78
  c->r[0]=R16(c->r[3]+0x00000016u); // 801D1A7C
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1A80
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801D1A84
  c->r[0]=R16(c->r[3]+0x00000016u); // 801D1A88
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1A8C
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801D1A90
  c->r[0]=R16(c->r[3]+0x00000018u); // 801D1A94
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1A98
  W8(c->r[1]+0x00000020u,c->r[0]); // 801D1A9C
  c->r[0]=R16(c->r[3]+0x00000018u); // 801D1AA0
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1AA4
  W8(c->r[1]+0x00000021u,c->r[0]); // 801D1AA8
  c->r[0]=R16(c->r[3]+0x0000001Au); // 801D1AAC
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1AB0
  W8(c->r[1]+0x00000022u,c->r[0]); // 801D1AB4
  c->r[0]=R16(c->r[3]+0x0000001Au); // 801D1AB8
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1ABC
  W8(c->r[1]+0x00000023u,c->r[0]); // 801D1AC0
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 801D1AC4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1AC8
  W8(c->r[1]+0x00000024u,c->r[0]); // 801D1ACC
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 801D1AD0
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1AD4
  W8(c->r[1]+0x00000025u,c->r[0]); // 801D1AD8
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 801D1ADC
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1AE0
  W8(c->r[1]+0x00000026u,c->r[0]); // 801D1AE4
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 801D1AE8
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1AEC
  W8(c->r[1]+0x00000027u,c->r[0]); // 801D1AF0
  c->r[0]=R16(c->r[3]+0x00000020u); // 801D1AF4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D1AF8
  W8(c->r[1]+0x00000028u,c->r[0]); // 801D1AFC
  c->r[0]=R16(c->r[3]+0x00000020u); // 801D1B00
  c->r[3]=0u+0x000000E0u; // 801D1B04
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801D1B08
  W8(c->r[1]+0x00000029u,c->r[0]); // 801D1B0C
  c->lr=0x801D1B14u; f_801D0434(c); // 801D1B10
  c->r[3]=0u+0x00000002u; // 801D1B14
  c->lr=0x801D1B1Cu; f_801CFFE8(c); // 801D1B18
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D1B1C
  c->lr=c->r[0]; // 801D1B20
  c->r[1]=c->r[1]+0x00000030u; // 801D1B24
  return; // 801D1B28
}

// __VISetGamma
void f_801D1B2C(Ctx* __restrict c) {
  trace_call(0x801D1B2Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9F28u); // 801D1B2C
  c->r[3]=0u+0x804B0000u; // 801D1B30
  c->r[3]=c->r[3]+0x00002598u; // 801D1B34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801D1B38
  c->r[3]=c->r[3]+c->r[0]; // 801D1B3C
  f_801D1998(c); return; // 801D1B40
}

// __VISetTrapFilter
void f_801D1B44(Ctx* __restrict c) {
  trace_call(0x801D1B44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1B44
  c->r[0]=c->lr; // 801D1B48
  c->r[3]=0u+0x00000003u; // 801D1B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1B50
  c->r[0]=R8(c->r[13]+0xFFFF84C8u); // 801D1B54
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D1B58
  cmpu(c,0,c->r[0],0x00000001u); // 801D1B5C
  if (!crb(c,2)) { goto L_801D1B70; } // 801D1B60
  c->r[0]=0u+0x00000000u; // 801D1B64
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1B68
  goto L_801D1B78; // 801D1B6C
L_801D1B70:;
  c->r[0]=0u+0x00000001u; // 801D1B70
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1B74
L_801D1B78:;
  c->r[4]=c->r[1]+0x00000008u; // 801D1B78
  c->r[3]=0u+0x000000E0u; // 801D1B7C
  c->r[5]=0u+0x00000002u; // 801D1B80
  c->lr=0x801D1B88u; f_801D0434(c); // 801D1B84
  c->r[3]=0u+0x00000002u; // 801D1B88
  c->lr=0x801D1B90u; f_801CFFE8(c); // 801D1B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1B90
  c->lr=c->r[0]; // 801D1B94
  c->r[1]=c->r[1]+0x00000010u; // 801D1B98
  return; // 801D1B9C
}

// __VISetRGBOverDrive
void f_801D1BA0(Ctx* __restrict c) {
  trace_call(0x801D1BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1BA0
  c->r[0]=c->lr; // 801D1BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1BA8
  c->r[0]=R32(c->r[13]+0xFFFF9F30u); // 801D1BAC
  cmps(c,0,(int32_t)c->r[0],3); // 801D1BB0
  if (!crb(c,2)) { goto L_801D1BEC; } // 801D1BB4
  c->r[0]=R32(c->r[13]+0xFFFF9F24u); // 801D1BB8
  c->r[3]=0u+0x0000000Au; // 801D1BBC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D1BC0
  c->r[4]=c->r[1]+0x00000008u; // 801D1BC4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D1BC8
  c->r[3]=0u+0x000000E0u; // 801D1BCC
  c->r[0]=c->r[0]|0x00000001u; // 801D1BD0
  c->r[5]=0u+0x00000002u; // 801D1BD4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1BD8
  c->lr=0x801D1BE0u; f_801D0434(c); // 801D1BDC
  c->r[3]=0u+0x00000002u; // 801D1BE0
  c->lr=0x801D1BE8u; f_801CFFE8(c); // 801D1BE4
  goto L_801D1C14; // 801D1BE8
L_801D1BEC:;
  c->r[3]=0u+0x0000000Au; // 801D1BEC
  c->r[0]=0u+0x00000000u; // 801D1BF0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D1BF4
  c->r[4]=c->r[1]+0x00000008u; // 801D1BF8
  c->r[3]=0u+0x000000E0u; // 801D1BFC
  c->r[5]=0u+0x00000002u; // 801D1C00
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1C04
  c->lr=0x801D1C0Cu; f_801D0434(c); // 801D1C08
  c->r[3]=0u+0x00000002u; // 801D1C0C
  c->lr=0x801D1C14u; f_801CFFE8(c); // 801D1C10
L_801D1C14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1C14
  c->lr=c->r[0]; // 801D1C18
  c->r[1]=c->r[1]+0x00000010u; // 801D1C1C
  return; // 801D1C20
}

// fn_801D1C24
void f_801D1C24(Ctx* __restrict c) {
  trace_call(0x801D1C24u);
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801D1C24
  c->r[0]=c->r[0]|0x00000080u; // 801D1C28
  W32(c->r[13]+0xFFFF9F20u,c->r[0]); // 801D1C2C
  return; // 801D1C30
}

// __VISetRGBModeImm
void f_801D1C34(Ctx* __restrict c) {
  trace_call(0x801D1C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1C34
  c->r[0]=c->lr; // 801D1C38
  c->r[6]=0u+0x00000003u; // 801D1C3C
  c->r[3]=0u+0x000000E0u; // 801D1C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1C44
  c->r[0]=0u+0x00000001u; // 801D1C48
  c->r[4]=c->r[1]+0x00000008u; // 801D1C4C
  c->r[5]=0u+0x00000002u; // 801D1C50
  W32(c->r[13]+0xFFFF9F30u,c->r[6]); // 801D1C54
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1C58
  W8(c->r[1]+0x00000009u,c->r[6]); // 801D1C5C
  c->lr=0x801D1C64u; f_801D0434(c); // 801D1C60
  c->r[3]=0u+0x00000002u; // 801D1C64
  c->lr=0x801D1C6Cu; f_801CFFE8(c); // 801D1C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1C6C
  c->lr=c->r[0]; // 801D1C70
  c->r[1]=c->r[1]+0x00000010u; // 801D1C74
  return; // 801D1C78
}

// fn_801D1C7C
void f_801D1C7C(Ctx* __restrict c) {
  trace_call(0x801D1C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1C7C
  c->r[0]=c->lr; // 801D1C80
  c->r[3]=0u+0x000000E0u; // 801D1C84
  c->r[5]=0u+0x00000002u; // 801D1C88
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D1C8C
  c->r[0]=0u+0x0000006Au; // 801D1C90
  c->r[4]=c->r[1]+0x0000001Cu; // 801D1C94
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D1C98
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D1C9C
  W32(c->r[1]+0x00000054u,c->r[29]); // 801D1CA0
  W32(c->r[1]+0x00000050u,c->r[28]); // 801D1CA4
  c->r[28]=0u+0x00000001u; // 801D1CA8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801D1CAC
  W8(c->r[1]+0x0000001Du,c->r[28]); // 801D1CB0
  c->lr=0x801D1CB8u; f_801D0434(c); // 801D1CB4
  c->r[3]=0u+0x00000002u; // 801D1CB8
  c->lr=0x801D1CC0u; f_801CFFE8(c); // 801D1CBC
  c->r[0]=0u+0x00000065u; // 801D1CC0
  W8(c->r[1]+0x00000019u,c->r[28]); // 801D1CC4
  c->r[4]=c->r[1]+0x00000018u; // 801D1CC8
  c->r[3]=0u+0x000000E0u; // 801D1CCC
  W8(c->r[1]+0x00000018u,c->r[0]); // 801D1CD0
  c->r[5]=0u+0x00000002u; // 801D1CD4
  c->lr=0x801D1CDCu; f_801D0434(c); // 801D1CD8
  c->r[3]=0u+0x00000002u; // 801D1CDC
  c->lr=0x801D1CE4u; f_801CFFE8(c); // 801D1CE0
  c->lr=0x801D1CE8u; f_801CFC54(c); // 801D1CE4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D1CE8
  c->lr=0x801D1CF0u; f_801D0A04(c); // 801D1CEC
  c->r[28]=0u+0x00000000u; // 801D1CF0
  c->r[4]=c->r[1]+0x00000014u; // 801D1CF4
  W8(c->r[1]+0x00000014u,c->r[28]); // 801D1CF8
  c->r[3]=0u+0x000000E0u; // 801D1CFC
  c->r[5]=0u+0x00000002u; // 801D1D00
  W8(c->r[1]+0x00000015u,c->r[28]); // 801D1D04
  c->lr=0x801D1D0Cu; f_801D0434(c); // 801D1D08
  c->r[3]=0u+0x00000002u; // 801D1D0C
  c->lr=0x801D1D14u; f_801CFFE8(c); // 801D1D10
  c->r[0]=0u+0x0000008Eu; // 801D1D14
  c->r[3]=0u+0x00000071u; // 801D1D18
  W8(c->r[1]+0x00000028u,c->r[3]); // 801D1D1C
  c->r[4]=c->r[1]+0x00000028u; // 801D1D20
  c->r[3]=0u+0x000000E0u; // 801D1D24
  c->r[5]=0u+0x00000003u; // 801D1D28
  W8(c->r[1]+0x00000029u,c->r[0]); // 801D1D2C
  W8(c->r[1]+0x0000002Au,c->r[0]); // 801D1D30
  c->lr=0x801D1D38u; f_801D0434(c); // 801D1D34
  c->r[3]=0u+0x00000002u; // 801D1D38
  c->lr=0x801D1D40u; f_801CFFE8(c); // 801D1D3C
  c->r[3]=0u+0x00000002u; // 801D1D40
  c->r[0]=0u+0x00000007u; // 801D1D44
  W8(c->r[1]+0x00000010u,c->r[3]); // 801D1D48
  c->r[4]=c->r[1]+0x00000010u; // 801D1D4C
  c->r[3]=0u+0x000000E0u; // 801D1D50
  c->r[5]=0u+0x00000002u; // 801D1D54
  W8(c->r[1]+0x00000011u,c->r[0]); // 801D1D58
  c->lr=0x801D1D60u; f_801D0434(c); // 801D1D5C
  c->r[3]=0u+0x00000002u; // 801D1D60
  c->lr=0x801D1D68u; f_801CFFE8(c); // 801D1D64
  c->r[0]=0u+0x00000005u; // 801D1D68
  W8(c->r[13]+0xFFFF84B8u,c->r[28]); // 801D1D6C
  c->r[4]=c->r[1]+0x00000024u; // 801D1D70
  c->r[3]=0u+0x000000E0u; // 801D1D74
  W8(c->r[13]+0xFFFF84B9u,c->r[28]); // 801D1D78
  c->r[5]=0u+0x00000003u; // 801D1D7C
  W8(c->r[13]+0xFFFF84BAu,c->r[28]); // 801D1D80
  W8(c->r[1]+0x00000024u,c->r[0]); // 801D1D84
  W8(c->r[1]+0x00000025u,c->r[28]); // 801D1D88
  W8(c->r[1]+0x00000026u,c->r[28]); // 801D1D8C
  c->lr=0x801D1D94u; f_801D0434(c); // 801D1D90
  c->r[3]=0u+0x00000002u; // 801D1D94
  c->lr=0x801D1D9Cu; f_801CFFE8(c); // 801D1D98
  c->r[0]=R8(c->r[13]+0xFFFF84BBu); // 801D1D9C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1DA0
  if (!crb(c,2)) { goto L_801D1DCC; } // 801D1DA4
  c->r[0]=R8(c->r[13]+0xFFFF84BCu); // 801D1DA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D1DAC
  if (!crb(c,2)) { goto L_801D1DCC; } // 801D1DB0
  c->r[0]=R8(c->r[13]+0xFFFF84BDu); // 801D1DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801D1DB8
  if (!crb(c,2)) { goto L_801D1DCC; } // 801D1DBC
  c->r[0]=R8(c->r[13]+0xFFFF84BEu); // 801D1DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D1DC4
  if (crb(c,2)) { goto L_801D1DEC; } // 801D1DC8
L_801D1DCC:;
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801D1DCC
  c->r[3]=0u+0x00000000u; // 801D1DD0
  W8(c->r[13]+0xFFFF84BBu,c->r[3]); // 801D1DD4
  c->r[0]=c->r[0]|0x00000002u; // 801D1DD8
  W8(c->r[13]+0xFFFF84BCu,c->r[3]); // 801D1DDC
  W8(c->r[13]+0xFFFF84BDu,c->r[3]); // 801D1DE0
  W8(c->r[13]+0xFFFF84BEu,c->r[3]); // 801D1DE4
  W32(c->r[13]+0xFFFF9F20u,c->r[0]); // 801D1DE8
L_801D1DEC:;
  c->r[3]=R8(c->r[13]+0xFFFF84BBu); // 801D1DEC
  c->r[7]=0u+0x00000008u; // 801D1DF0
  c->r[0]=R8(c->r[13]+0xFFFF84BDu); // 801D1DF4
  c->r[4]=c->r[1]+0x00000020u; // 801D1DF8
  c->r[5]=rotl(c->r[3],0)&0x0000000Fu; // 801D1DFC
  c->r[6]=R8(c->r[13]+0xFFFF84BCu); // 801D1E00
  c->r[3]=R8(c->r[13]+0xFFFF84BEu); // 801D1E04
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801D1E08
  c->r[5]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[5]&~0x000000F0u); // 801D1E0C
  W8(c->r[1]+0x00000020u,c->r[7]); // 801D1E10
  c->r[0]=(rotl(c->r[3],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 801D1E14
  c->r[3]=0u+0x000000E0u; // 801D1E18
  W8(c->r[1]+0x00000021u,c->r[5]); // 801D1E1C
  c->r[5]=0u+0x00000003u; // 801D1E20
  W8(c->r[1]+0x00000022u,c->r[0]); // 801D1E24
  c->lr=0x801D1E2Cu; f_801D0434(c); // 801D1E28
  c->r[3]=0u+0x00000002u; // 801D1E2C
  c->lr=0x801D1E34u; f_801CFFE8(c); // 801D1E30
  c->r[0]=R8(c->r[13]+0xFFFF84BFu); // 801D1E34
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E38
  if (!crb(c,2)) { goto L_801D1E64; } // 801D1E3C
  c->r[0]=R8(c->r[13]+0xFFFF84C0u); // 801D1E40
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E44
  if (!crb(c,2)) { goto L_801D1E64; } // 801D1E48
  c->r[0]=R8(c->r[13]+0xFFFF84C1u); // 801D1E4C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E50
  if (!crb(c,2)) { goto L_801D1E64; } // 801D1E54
  c->r[0]=R8(c->r[13]+0xFFFF84C2u); // 801D1E58
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E5C
  if (crb(c,2)) { goto L_801D1E84; } // 801D1E60
L_801D1E64:;
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801D1E64
  c->r[3]=0u+0x00000000u; // 801D1E68
  W8(c->r[13]+0xFFFF84BFu,c->r[3]); // 801D1E6C
  c->r[0]=c->r[0]|0x00000004u; // 801D1E70
  W8(c->r[13]+0xFFFF84C0u,c->r[3]); // 801D1E74
  W8(c->r[13]+0xFFFF84C1u,c->r[3]); // 801D1E78
  W8(c->r[13]+0xFFFF84C2u,c->r[3]); // 801D1E7C
  W32(c->r[13]+0xFFFF9F20u,c->r[0]); // 801D1E80
L_801D1E84:;
  c->r[0]=R8(c->r[13]+0xFFFF84BFu); // 801D1E84
  c->r[9]=0u+0x0000007Au; // 801D1E88
  c->r[5]=R8(c->r[13]+0xFFFF84C0u); // 801D1E8C
  c->r[4]=c->r[1]+0x0000002Cu; // 801D1E90
  c->r[8]=rotl(c->r[0],0)&0x0000007Fu; // 801D1E94
  c->r[3]=R8(c->r[13]+0xFFFF84C1u); // 801D1E98
  c->r[0]=R8(c->r[13]+0xFFFF84C2u); // 801D1E9C
  c->r[7]=rotl(c->r[5],0)&0x0000007Fu; // 801D1EA0
  c->r[6]=rotl(c->r[3],0)&0x0000007Fu; // 801D1EA4
  W8(c->r[1]+0x0000002Cu,c->r[9]); // 801D1EA8
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 801D1EAC
  c->r[3]=0u+0x000000E0u; // 801D1EB0
  W8(c->r[1]+0x0000002Du,c->r[8]); // 801D1EB4
  c->r[5]=0u+0x00000005u; // 801D1EB8
  W8(c->r[1]+0x0000002Eu,c->r[7]); // 801D1EBC
  W8(c->r[1]+0x0000002Fu,c->r[6]); // 801D1EC0
  W8(c->r[1]+0x00000030u,c->r[0]); // 801D1EC4
  c->lr=0x801D1ECCu; f_801D0434(c); // 801D1EC8
  c->r[3]=0u+0x00000002u; // 801D1ECC
  c->lr=0x801D1ED4u; f_801CFFE8(c); // 801D1ED0
  c->r[29]=0u+0x80570000u; // 801D1ED4
  {uint32_t ea=c->r[29]+0xFFFFF4F0u; c->r[30]=R8(ea); c->r[29]=ea;} // 801D1ED8
  c->r[28]=0u+0x00000040u; // 801D1EDC
  c->r[4]=c->r[1]+0x00000034u; // 801D1EE0
  c->r[31]=R8(c->r[29]+0x00000001u); // 801D1EE4
  c->r[3]=0u+0x000000E0u; // 801D1EE8
  c->r[12]=R8(c->r[29]+0x00000002u); // 801D1EEC
  c->r[5]=0u+0x0000001Bu; // 801D1EF0
  c->r[11]=R8(c->r[29]+0x00000003u); // 801D1EF4
  c->r[10]=R8(c->r[29]+0x00000004u); // 801D1EF8
  c->r[9]=R8(c->r[29]+0x00000005u); // 801D1EFC
  c->r[8]=R8(c->r[29]+0x00000006u); // 801D1F00
  c->r[7]=R8(c->r[29]+0x00000007u); // 801D1F04
  W8(c->r[1]+0x00000035u,c->r[30]); // 801D1F08
  c->r[30]=R8(c->r[29]+0x00000008u); // 801D1F0C
  W8(c->r[1]+0x00000036u,c->r[31]); // 801D1F10
  c->r[31]=R8(c->r[29]+0x00000009u); // 801D1F14
  W8(c->r[1]+0x00000037u,c->r[12]); // 801D1F18
  c->r[12]=R8(c->r[29]+0x0000000Au); // 801D1F1C
  W8(c->r[1]+0x00000038u,c->r[11]); // 801D1F20
  c->r[11]=R8(c->r[29]+0x0000000Bu); // 801D1F24
  W8(c->r[1]+0x00000039u,c->r[10]); // 801D1F28
  c->r[10]=R8(c->r[29]+0x0000000Cu); // 801D1F2C
  W8(c->r[1]+0x0000003Au,c->r[9]); // 801D1F30
  c->r[9]=R8(c->r[29]+0x0000000Du); // 801D1F34
  W8(c->r[1]+0x0000003Bu,c->r[8]); // 801D1F38
  c->r[8]=R8(c->r[29]+0x0000000Eu); // 801D1F3C
  W8(c->r[1]+0x0000003Cu,c->r[7]); // 801D1F40
  c->r[7]=R8(c->r[29]+0x0000000Fu); // 801D1F44
  W8(c->r[1]+0x0000003Du,c->r[30]); // 801D1F48
  c->r[30]=R8(c->r[29]+0x00000010u); // 801D1F4C
  W8(c->r[1]+0x0000003Eu,c->r[31]); // 801D1F50
  c->r[31]=R8(c->r[29]+0x00000011u); // 801D1F54
  W8(c->r[1]+0x0000003Fu,c->r[12]); // 801D1F58
  c->r[12]=R8(c->r[29]+0x00000012u); // 801D1F5C
  W8(c->r[1]+0x00000040u,c->r[11]); // 801D1F60
  c->r[11]=R8(c->r[29]+0x00000013u); // 801D1F64
  W8(c->r[1]+0x00000041u,c->r[10]); // 801D1F68
  c->r[10]=R8(c->r[29]+0x00000014u); // 801D1F6C
  W8(c->r[1]+0x00000042u,c->r[9]); // 801D1F70
  c->r[9]=R8(c->r[29]+0x00000015u); // 801D1F74
  W8(c->r[1]+0x00000043u,c->r[8]); // 801D1F78
  c->r[8]=R8(c->r[29]+0x00000016u); // 801D1F7C
  W8(c->r[1]+0x00000044u,c->r[7]); // 801D1F80
  c->r[7]=R8(c->r[29]+0x00000017u); // 801D1F84
  c->r[6]=R8(c->r[29]+0x00000018u); // 801D1F88
  c->r[0]=R8(c->r[29]+0x00000019u); // 801D1F8C
  W8(c->r[1]+0x00000034u,c->r[28]); // 801D1F90
  W8(c->r[1]+0x00000045u,c->r[30]); // 801D1F94
  W8(c->r[1]+0x00000046u,c->r[31]); // 801D1F98
  W8(c->r[1]+0x00000047u,c->r[12]); // 801D1F9C
  W8(c->r[1]+0x00000048u,c->r[11]); // 801D1FA0
  W8(c->r[1]+0x00000049u,c->r[10]); // 801D1FA4
  W8(c->r[1]+0x0000004Au,c->r[9]); // 801D1FA8
  W8(c->r[1]+0x0000004Bu,c->r[8]); // 801D1FAC
  W8(c->r[1]+0x0000004Cu,c->r[7]); // 801D1FB0
  W8(c->r[1]+0x0000004Du,c->r[6]); // 801D1FB4
  W8(c->r[1]+0x0000004Eu,c->r[0]); // 801D1FB8
  c->lr=0x801D1FC0u; f_801D0434(c); // 801D1FBC
  c->r[3]=0u+0x00000002u; // 801D1FC0
  c->lr=0x801D1FC8u; f_801CFFE8(c); // 801D1FC4
  c->r[0]=R32(c->r[13]+0xFFFF9F24u); // 801D1FC8
  cmps(c,0,(int32_t)c->r[0],1); // 801D1FCC
  if (crb(c,2)) { goto L_801D1FE8; } // 801D1FD0
  c->r[0]=R32(c->r[13]+0xFFFF9F20u); // 801D1FD4
  c->r[3]=0u+0x00000001u; // 801D1FD8
  W32(c->r[13]+0xFFFF9F24u,c->r[3]); // 801D1FDC
  c->r[0]=c->r[0]|0x00000040u; // 801D1FE0
  W32(c->r[13]+0xFFFF9F20u,c->r[0]); // 801D1FE4
L_801D1FE8:;
  c->r[0]=R32(c->r[13]+0xFFFF9F30u); // 801D1FE8
  cmps(c,0,(int32_t)c->r[0],3); // 801D1FEC
  if (!crb(c,2)) { goto L_801D2028; } // 801D1FF0
  c->r[0]=R32(c->r[13]+0xFFFF9F24u); // 801D1FF4
  c->r[3]=0u+0x0000000Au; // 801D1FF8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D1FFC
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2000
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D2004
  c->r[3]=0u+0x000000E0u; // 801D2008
  c->r[0]=c->r[0]|0x00000001u; // 801D200C
  c->r[5]=0u+0x00000002u; // 801D2010
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D2014
  c->lr=0x801D201Cu; f_801D0434(c); // 801D2018
  c->r[3]=0u+0x00000002u; // 801D201C
  c->lr=0x801D2024u; f_801CFFE8(c); // 801D2020
  goto L_801D2050; // 801D2024
L_801D2028:;
  c->r[3]=0u+0x0000000Au; // 801D2028
  c->r[0]=0u+0x00000000u; // 801D202C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D2030
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2034
  c->r[3]=0u+0x000000E0u; // 801D2038
  c->r[5]=0u+0x00000002u; // 801D203C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D2040
  c->lr=0x801D2048u; f_801D0434(c); // 801D2044
  c->r[3]=0u+0x00000002u; // 801D2048
  c->lr=0x801D2050u; f_801CFFE8(c); // 801D204C
L_801D2050:;
  c->r[3]=0u+0x00000003u; // 801D2050
  c->r[0]=0u+0x00000001u; // 801D2054
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D2058
  c->r[4]=c->r[1]+0x00000008u; // 801D205C
  c->r[3]=0u+0x000000E0u; // 801D2060
  c->r[5]=0u+0x00000002u; // 801D2064
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D2068
  c->lr=0x801D2070u; f_801D0434(c); // 801D206C
  c->r[3]=0u+0x00000002u; // 801D2070
  c->lr=0x801D2078u; f_801CFFE8(c); // 801D2074
  c->r[3]=0u+0x804B0000u; // 801D2078
  c->r[3]=c->r[3]+0x00002598u; // 801D207C
  c->r[3]=c->r[3]+0x00000154u; // 801D2080
  c->lr=0x801D2088u; f_801D1998(c); // 801D2084
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D2088
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D208C
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D2090
  c->r[29]=R32(c->r[1]+0x00000054u); // 801D2094
  c->r[28]=R32(c->r[1]+0x00000050u); // 801D2098
  c->lr=c->r[0]; // 801D209C
  c->r[1]=c->r[1]+0x00000060u; // 801D20A0
  return; // 801D20A4
}

// fn_801D20A8
void f_801D20A8(Ctx* __restrict c) {
  trace_call(0x801D20A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D20A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D20AC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D20B0
  c->r[8]=R8(c->r[4]+0x00000000u); // 801D20B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D20B8
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D20BC
  if (crb(c,0)) { goto L_801D20CC; } // 801D20C0
  c->r[9]=0u+0x00000001u; // 801D20C4
  goto L_801D20D4; // 801D20C8
L_801D20CC:;
  c->r[9]=0u+0xFFFFFFFFu; // 801D20CC
  c->r[0]=0u-c->r[0]; // 801D20D0
L_801D20D4:;
  cmps(c,0,(int32_t)c->r[8],0); // 801D20D4
  if (crb(c,0)) { goto L_801D20E4; } // 801D20D8
  c->r[10]=0u+0x00000001u; // 801D20DC
  goto L_801D20EC; // 801D20E0
L_801D20E4:;
  c->r[10]=0u+0xFFFFFFFFu; // 801D20E4
  c->r[8]=0u-c->r[8]; // 801D20E8
L_801D20EC:;
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801D20EC
  c->r[11]=c->r[0]^0x80000000u; // 801D20F0
  c->r[7]=c->r[31]-c->r[0]; // 801D20F4
  c->r[12]=c->r[8]^0x80000000u; // 801D20F8
  c->r[7]=addc(c,c->r[7],c->r[11],0); // 801D20FC
  c->r[0]=c->r[0]-c->r[31]; // 801D2100
  c->r[7]=addc(c,~c->r[7],c->r[7],c->xer_ca); // 801D2104
  c->r[11]=c->r[31]-c->r[8]; // 801D2108
  c->r[0]=c->r[0]&~c->r[7]; cr0(c,c->r[0]); // 801D210C
  c->r[7]=c->r[8]-c->r[31]; // 801D2110
  c->r[8]=addc(c,c->r[11],c->r[12],0); // 801D2114
  c->r[8]=addc(c,~c->r[8],c->r[8],c->xer_ca); // 801D2118
  c->r[8]=c->r[7]&~c->r[8]; // 801D211C
  if (!crb(c,2)) { goto L_801D213C; } // 801D2120
  cmps(c,0,(int32_t)c->r[8],0); // 801D2124
  if (!crb(c,2)) { goto L_801D213C; } // 801D2128
  c->r[0]=0u+0x00000000u; // 801D212C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801D2130
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D2134
  goto L_801D21CC; // 801D2138
L_801D213C:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D213C
  c->r[11]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801D2140
  c->r[12]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 801D2144
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 801D2148
  if (crb(c,1)) { goto L_801D2188; } // 801D214C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D2150
  c->r[5]=c->r[6]-c->r[7]; // 801D2154
  c->r[5]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 801D2158
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[6]); // 801D215C
  c->r[7]=c->r[11]+c->r[5]; // 801D2160
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801D2164
  if (!crb(c,0)) { goto L_801D21BC; } // 801D2168
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 801D216C
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 801D2170
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 801D2174
  c->r[5]=divw((int32_t)c->r[0],(int32_t)c->r[7]); // 801D2178
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D217C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D2180
  goto L_801D21BC; // 801D2184
L_801D2188:;
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D2188
  c->r[5]=c->r[6]-c->r[7]; // 801D218C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801D2190
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[6]); // 801D2194
  c->r[7]=c->r[12]+c->r[5]; // 801D2198
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801D219C
  if (!crb(c,0)) { goto L_801D21BC; } // 801D21A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 801D21A4
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 801D21A8
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 801D21AC
  c->r[5]=divw((int32_t)c->r[0],(int32_t)c->r[7]); // 801D21B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D21B4
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D21B8
L_801D21BC:;
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 801D21BC
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D21C0
  W8(c->r[3]+0x00000000u,c->r[5]); // 801D21C4
  W8(c->r[4]+0x00000000u,c->r[0]); // 801D21C8
L_801D21CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D21CC
  c->r[1]=c->r[1]+0x00000010u; // 801D21D0
  return; // 801D21D4
}

// fn_801D21D8
void f_801D21D8(Ctx* __restrict c) {
  trace_call(0x801D21D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D21D8
  c->r[0]=c->lr; // 801D21DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D21E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D21E4
  c->r[31]=0u+0x000000B4u; // 801D21E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D21EC
  c->r[30]=0u+0x00000000u; // 801D21F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D21F4
  c->r[29]=0u+0x00000000u; // 801D21F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D21FC
  c->r[28]=c->r[3]|c->r[3]; // 801D2200
L_801D2204:;
  c->r[0]=R8(c->r[28]+0x0000000Au); // 801D2204
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D2208
  if (!crb(c,2)) { goto L_801D2298; } // 801D220C
  c->r[3]=c->r[28]+0x00000002u; // 801D2210
  c->r[4]=c->r[28]+0x00000003u; // 801D2214
  c->r[5]=0u+0x00000048u; // 801D2218
  c->r[6]=0u+0x00000028u; // 801D221C
  c->r[7]=0u+0x0000000Fu; // 801D2220
  c->lr=0x801D2228u; f_801D20A8(c); // 801D2224
  c->r[3]=c->r[28]+0x00000004u; // 801D2228
  c->r[4]=c->r[28]+0x00000005u; // 801D222C
  c->r[5]=0u+0x0000003Bu; // 801D2230
  c->r[6]=0u+0x0000001Fu; // 801D2234
  c->r[7]=0u+0x0000000Fu; // 801D2238
  c->lr=0x801D2240u; f_801D20A8(c); // 801D223C
  c->r[0]=R8(c->r[28]+0x00000006u); // 801D2240
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D2244
  if (crb(c,1)) { goto L_801D2254; } // 801D2248
  W8(c->r[28]+0x00000006u,c->r[30]); // 801D224C
  goto L_801D226C; // 801D2250
L_801D2254:;
  cmpu(c,0,c->r[0],0x000000B4u); // 801D2254
  if (!crb(c,1)) { goto L_801D2260; } // 801D2258
  W8(c->r[28]+0x00000006u,c->r[31]); // 801D225C
L_801D2260:;
  c->r[3]=R8(c->r[28]+0x00000006u); // 801D2260
  c->r[0]=c->r[3]+0xFFFFFFE2u; // 801D2264
  W8(c->r[28]+0x00000006u,c->r[0]); // 801D2268
L_801D226C:;
  c->r[0]=R8(c->r[28]+0x00000007u); // 801D226C
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D2270
  if (crb(c,1)) { goto L_801D2280; } // 801D2274
  W8(c->r[28]+0x00000007u,c->r[30]); // 801D2278
  goto L_801D2298; // 801D227C
L_801D2280:;
  cmpu(c,0,c->r[0],0x000000B4u); // 801D2280
  if (!crb(c,1)) { goto L_801D228C; } // 801D2284
  W8(c->r[28]+0x00000007u,c->r[31]); // 801D2288
L_801D228C:;
  c->r[3]=R8(c->r[28]+0x00000007u); // 801D228C
  c->r[0]=c->r[3]+0xFFFFFFE2u; // 801D2290
  W8(c->r[28]+0x00000007u,c->r[0]); // 801D2294
L_801D2298:;
  c->r[29]=c->r[29]+0x00000001u; // 801D2298
  c->r[28]=c->r[28]+0x0000000Cu; // 801D229C
  cmps(c,0,(int32_t)c->r[29],4); // 801D22A0
  if (crb(c,0)) { IRQCHK(c); goto L_801D2204; } // 801D22A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D22A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D22AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D22B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D22B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D22B8
  c->lr=c->r[0]; // 801D22BC
  c->r[1]=c->r[1]+0x00000020u; // 801D22C0
  return; // 801D22C4
}

// UpdateOrigin
void f_801D22C8(Ctx* __restrict c) {
  trace_call(0x801D22C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D22C8
  c->r[0]=c->lr; // 801D22CC
  c->r[5]=0u+0x80570000u; // 801D22D0
  c->r[7]=0u+0x80000000u; // 801D22D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D22D8
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D22DC
  c->r[5]=c->r[5]+0xFFFFF510u; // 801D22E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D22E4
  c->r[31]=c->r[5]+c->r[6]; // 801D22E8
  c->r[0]=R32(c->r[13]+0xFFFF84DCu); // 801D22EC
  c->r[4]=rotl(c->r[0],0)&0x00000700u; // 801D22F0
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[7]>>((c->r[3])&31)); // 801D22F4
  cmps(c,0,(int32_t)c->r[4],1024); // 801D22F8
  if (crb(c,2)) { goto L_801D23F0; } // 801D22FC
  if (!crb(c,0)) { goto L_801D2334; } // 801D2300
  cmps(c,0,(int32_t)c->r[4],512); // 801D2304
  if (crb(c,2)) { goto L_801D23C0; } // 801D2308
  if (!crb(c,0)) { goto L_801D2328; } // 801D230C
  cmps(c,0,(int32_t)c->r[4],256); // 801D2310
  if (crb(c,2)) { goto L_801D238C; } // 801D2314
  if (!crb(c,0)) { goto L_801D23F0; } // 801D2318
  cmps(c,0,(int32_t)c->r[4],0); // 801D231C
  if (crb(c,2)) { goto L_801D2358; } // 801D2320
  goto L_801D23F0; // 801D2324
L_801D2328:;
  cmps(c,0,(int32_t)c->r[4],768); // 801D2328
  if (crb(c,2)) { goto L_801D23F0; } // 801D232C
  goto L_801D23F0; // 801D2330
L_801D2334:;
  cmps(c,0,(int32_t)c->r[4],1536); // 801D2334
  if (crb(c,2)) { goto L_801D2358; } // 801D2338
  if (!crb(c,0)) { goto L_801D234C; } // 801D233C
  cmps(c,0,(int32_t)c->r[4],1280); // 801D2340
  if (crb(c,2)) { goto L_801D2358; } // 801D2344
  goto L_801D23F0; // 801D2348
L_801D234C:;
  cmps(c,0,(int32_t)c->r[4],1792); // 801D234C
  if (crb(c,2)) { goto L_801D2358; } // 801D2350
  goto L_801D23F0; // 801D2354
L_801D2358:;
  c->r[4]=R8(c->r[31]+0x00000006u); // 801D2358
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D235C
  W8(c->r[31]+0x00000006u,c->r[4]); // 801D2360
  c->r[4]=R8(c->r[31]+0x00000007u); // 801D2364
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D2368
  W8(c->r[31]+0x00000007u,c->r[4]); // 801D236C
  c->r[4]=R8(c->r[31]+0x00000008u); // 801D2370
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D2374
  W8(c->r[31]+0x00000008u,c->r[4]); // 801D2378
  c->r[4]=R8(c->r[31]+0x00000009u); // 801D237C
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D2380
  W8(c->r[31]+0x00000009u,c->r[4]); // 801D2384
  goto L_801D23F0; // 801D2388
L_801D238C:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 801D238C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 801D2390
  W8(c->r[31]+0x00000004u,c->r[4]); // 801D2394
  c->r[4]=R8(c->r[31]+0x00000005u); // 801D2398
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 801D239C
  W8(c->r[31]+0x00000005u,c->r[4]); // 801D23A0
  c->r[4]=R8(c->r[31]+0x00000008u); // 801D23A4
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D23A8
  W8(c->r[31]+0x00000008u,c->r[4]); // 801D23AC
  c->r[4]=R8(c->r[31]+0x00000009u); // 801D23B0
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D23B4
  W8(c->r[31]+0x00000009u,c->r[4]); // 801D23B8
  goto L_801D23F0; // 801D23BC
L_801D23C0:;
  c->r[4]=R8(c->r[31]+0x00000004u); // 801D23C0
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 801D23C4
  W8(c->r[31]+0x00000004u,c->r[4]); // 801D23C8
  c->r[4]=R8(c->r[31]+0x00000005u); // 801D23CC
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF0u; // 801D23D0
  W8(c->r[31]+0x00000005u,c->r[4]); // 801D23D4
  c->r[4]=R8(c->r[31]+0x00000006u); // 801D23D8
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D23DC
  W8(c->r[31]+0x00000006u,c->r[4]); // 801D23E0
  c->r[4]=R8(c->r[31]+0x00000007u); // 801D23E4
  c->r[4]=rotl(c->r[4],0)&0x000000F0u; // 801D23E8
  W8(c->r[31]+0x00000007u,c->r[4]); // 801D23EC
L_801D23F0:;
  c->r[5]=R8(c->r[31]+0x00000002u); // 801D23F0
  c->r[4]=R32(c->r[13]+0xFFFF84D8u); // 801D23F4
  c->r[5]=c->r[5]+0xFFFFFF80u; // 801D23F8
  W8(c->r[31]+0x00000002u,c->r[5]); // 801D23FC
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801D2400
  c->r[4]=R8(c->r[31]+0x00000003u); // 801D2404
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801D2408
  W8(c->r[31]+0x00000003u,c->r[0]); // 801D240C
  c->r[4]=R8(c->r[31]+0x00000004u); // 801D2410
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801D2414
  W8(c->r[31]+0x00000004u,c->r[0]); // 801D2418
  c->r[4]=R8(c->r[31]+0x00000005u); // 801D241C
  c->r[0]=c->r[4]+0xFFFFFF80u; // 801D2420
  W8(c->r[31]+0x00000005u,c->r[0]); // 801D2424
  if (crb(c,2)) { goto L_801D2458; } // 801D2428
  c->r[0]=R8(c->r[31]+0x00000002u); // 801D242C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D2430
  cmps(c,0,(int32_t)c->r[0],64); // 801D2434
  if (!crb(c,1)) { goto L_801D2458; } // 801D2438
  c->lr=0x801D2440u; f_801FA5DC(c); // 801D243C
  c->r[3]=rotl(c->r[3],0)&0xFFFF0000u; // 801D2440
  c->r[0]=c->r[3]+0xF7000000u; // 801D2444
  cmpu(c,0,c->r[0],0x00000000u); // 801D2448
  if (!crb(c,2)) { goto L_801D2458; } // 801D244C
  c->r[0]=0u+0x00000000u; // 801D2450
  W8(c->r[31]+0x00000002u,c->r[0]); // 801D2454
L_801D2458:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D245C
  c->lr=c->r[0]; // 801D2460
  c->r[1]=c->r[1]+0x00000010u; // 801D2464
  return; // 801D2468
}

// PADOriginCallback
void f_801D246C(Ctx* __restrict c) {
  trace_call(0x801D246Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D246C
  c->r[0]=c->lr; // 801D2470
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2474
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D2478
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D247C
  if (!crb(c,2)) { goto L_801D24C8; } // 801D2480
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2484
  c->lr=0x801D248Cu; f_801D22C8(c); // 801D2488
  c->r[31]=R32(c->r[13]+0xFFFF84D4u); // 801D248C
  c->r[0]=0u+0x80000000u; // 801D2490
  c->r[5]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2494
  c->r[4]=c->r[1]+0x00000008u; // 801D2498
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]>>((c->r[31])&31)); // 801D249C
  c->r[3]=c->r[31]|c->r[31]; // 801D24A0
  c->r[0]=c->r[5]|c->r[0]; // 801D24A4
  W32(c->r[13]+0xFFFF9F5Cu,c->r[0]); // 801D24A8
  c->lr=0x801D24B0u; f_801FA010(c); // 801D24AC
  c->r[0]=R32(c->r[13]+0xFFFF84DCu); // 801D24B0
  c->r[3]=c->r[31]|c->r[31]; // 801D24B4
  c->r[4]=c->r[0]|0x00400000u; // 801D24B8
  c->lr=0x801D24C0u; f_801F9EAC(c); // 801D24BC
  c->r[3]=R32(c->r[13]+0xFFFF9F5Cu); // 801D24C0
  c->lr=0x801D24C8u; f_801F9F1C(c); // 801D24C4
L_801D24C8:;
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D24C8
  c->r[6]=cntlz(c->r[5]); // 801D24CC
  cmps(c,0,(int32_t)c->r[6],32); // 801D24D0
  W32(c->r[13]+0xFFFF84D4u,c->r[6]); // 801D24D4
  if (crb(c,2)) { goto L_801D2518; } // 801D24D8
  c->r[0]=0u+0x80000000u; // 801D24DC
  c->r[3]=0u+0x80570000u; // 801D24E0
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801D24E4
  c->r[4]=0u+0x00000000u; // 801D24E8
  c->r[5]=c->r[5]&~c->r[0]; // 801D24EC
  c->r[3]=c->r[3]+0xFFFFF510u; // 801D24F0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D24F4
  W32(c->r[13]+0xFFFF9F58u,c->r[5]); // 801D24F8
  c->r[5]=0u+0x0000000Cu; // 801D24FC
  c->r[3]=c->r[3]+c->r[0]; // 801D2500
  c->lr=0x801D2508u; f_8000443C(c); // 801D2504
  c->r[4]=0u+0x801D0000u; // 801D2508
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D250C
  c->r[4]=c->r[4]+0x000026C8u; // 801D2510
  c->lr=0x801D2518u; f_801FA790(c); // 801D2514
L_801D2518:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2518
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D251C
  c->lr=c->r[0]; // 801D2520
  c->r[1]=c->r[1]+0x00000020u; // 801D2524
  return; // 801D2528
}

// fn_801D252C
void f_801D252C(Ctx* __restrict c) {
  trace_call(0x801D252Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D252C
  c->r[0]=c->lr; // 801D2530
  c->r[5]=0u+0x80000000u; // 801D2534
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D253C
  c->r[31]=c->r[4]|c->r[4]; // 801D2540
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2544
  c->r[30]=((c->r[3])&0x20)?0u:(c->r[5]>>((c->r[3])&31)); // 801D2548
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D254C
  c->r[29]=c->r[3]|c->r[3]; // 801D2550
  c->r[0]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2554
  c->r[0]=c->r[0]&c->r[30]; cr0(c,c->r[0]); // 801D2558
  if (crb(c,2)) { goto L_801D25D8; } // 801D255C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D2560
  if (!crb(c,2)) { goto L_801D256C; } // 801D2564
  c->lr=0x801D256Cu; f_801D22C8(c); // 801D2568
L_801D256C:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 801D256C
  if (crb(c,2)) { goto L_801D25D8; } // 801D2570
  c->lr=0x801D2578u; f_801BE74C(c); // 801D2574
  c->r[31]=c->r[3]|c->r[3]; // 801D2578
  c->r[3]=c->r[30]|c->r[30]; // 801D257C
  c->lr=0x801D2584u; f_801F9FA4(c); // 801D2580
  c->r[4]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2584
  c->r[9]=~(c->r[30]|c->r[30]); // 801D2588
  c->r[0]=R32(c->r[13]+0xFFFF9F50u); // 801D258C
  c->r[3]=c->r[29]|c->r[29]; // 801D2590
  c->r[8]=c->r[4]&c->r[9]; // 801D2594
  c->r[5]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2598
  c->r[7]=c->r[0]&c->r[9]; // 801D259C
  c->r[0]=R32(c->r[13]+0xFFFF9F44u); // 801D25A0
  c->r[6]=c->r[5]&c->r[9]; // 801D25A4
  c->r[4]=R32(c->r[13]+0xFFFF9F48u); // 801D25A8
  c->r[0]=c->r[0]&c->r[9]; // 801D25AC
  W32(c->r[13]+0xFFFF9F5Cu,c->r[8]); // 801D25B0
  c->r[5]=c->r[4]&c->r[9]; // 801D25B4
  c->r[4]=0u+0x00000000u; // 801D25B8
  W32(c->r[13]+0xFFFF9F50u,c->r[7]); // 801D25BC
  W32(c->r[13]+0xFFFF9F4Cu,c->r[6]); // 801D25C0
  W32(c->r[13]+0xFFFF9F48u,c->r[5]); // 801D25C4
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D25C8
  c->lr=0x801D25D0u; f_801C0BC4(c); // 801D25CC
  c->r[3]=c->r[31]|c->r[31]; // 801D25D0
  c->lr=0x801D25D8u; f_801BE774(c); // 801D25D4
L_801D25D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D25D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D25DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D25E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D25E4
  c->lr=c->r[0]; // 801D25E8
  c->r[1]=c->r[1]+0x00000020u; // 801D25EC
  return; // 801D25F0
}

// PADProbeCallback
void f_801D25F4(Ctx* __restrict c) {
  trace_call(0x801D25F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D25F4
  c->r[0]=c->lr; // 801D25F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D25FC
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D2600
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2604
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2608
  if (!crb(c,2)) { goto L_801D2660; } // 801D260C
  c->r[30]=R32(c->r[13]+0xFFFF84D4u); // 801D2610
  c->r[31]=0u+0x80000000u; // 801D2614
  c->r[5]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2618
  c->r[4]=c->r[1]+0x00000008u; // 801D261C
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]>>((c->r[30])&31)); // 801D2620
  c->r[3]=c->r[30]|c->r[30]; // 801D2624
  c->r[0]=c->r[5]|c->r[0]; // 801D2628
  W32(c->r[13]+0xFFFF9F5Cu,c->r[0]); // 801D262C
  c->lr=0x801D2634u; f_801FA010(c); // 801D2630
  c->r[0]=R32(c->r[13]+0xFFFF84DCu); // 801D2634
  c->r[3]=c->r[30]|c->r[30]; // 801D2638
  c->r[4]=c->r[0]|0x00400000u; // 801D263C
  c->lr=0x801D2644u; f_801F9EAC(c); // 801D2640
  c->r[3]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2644
  c->lr=0x801D264Cu; f_801F9F1C(c); // 801D2648
  c->r[0]=R32(c->r[13]+0xFFFF84D4u); // 801D264C
  c->r[3]=R32(c->r[13]+0xFFFF9F50u); // 801D2650
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 801D2654
  c->r[0]=c->r[3]|c->r[0]; // 801D2658
  W32(c->r[13]+0xFFFF9F50u,c->r[0]); // 801D265C
L_801D2660:;
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2660
  c->r[6]=cntlz(c->r[5]); // 801D2664
  cmps(c,0,(int32_t)c->r[6],32); // 801D2668
  W32(c->r[13]+0xFFFF84D4u,c->r[6]); // 801D266C
  if (crb(c,2)) { goto L_801D26B0; } // 801D2670
  c->r[0]=0u+0x80000000u; // 801D2674
  c->r[3]=0u+0x80570000u; // 801D2678
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801D267C
  c->r[4]=0u+0x00000000u; // 801D2680
  c->r[5]=c->r[5]&~c->r[0]; // 801D2684
  c->r[3]=c->r[3]+0xFFFFF510u; // 801D2688
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D268C
  W32(c->r[13]+0xFFFF9F58u,c->r[5]); // 801D2690
  c->r[5]=0u+0x0000000Cu; // 801D2694
  c->r[3]=c->r[3]+c->r[0]; // 801D2698
  c->lr=0x801D26A0u; f_8000443C(c); // 801D269C
  c->r[4]=0u+0x801D0000u; // 801D26A0
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D26A4
  c->r[4]=c->r[4]+0x000026C8u; // 801D26A8
  c->lr=0x801D26B0u; f_801FA790(c); // 801D26AC
L_801D26B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D26B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D26B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D26B8
  c->lr=c->r[0]; // 801D26BC
  c->r[1]=c->r[1]+0x00000020u; // 801D26C0
  return; // 801D26C4
}

// PADTypeAndStatusCallback
void f_801D26C8(Ctx* __restrict c) {
  trace_call(0x801D26C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D26C8
  c->r[0]=c->lr; // 801D26CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D26D0
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D26D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D26D8
  c->r[31]=0u+0x80000000u; // 801D26DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D26E0
  c->r[30]=0u+0x80570000u; // 801D26E4
  c->r[30]=c->r[30]+0xFFFFF510u; // 801D26E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D26EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D26F0
  c->r[28]=R32(c->r[13]+0xFFFF84D4u); // 801D26F4
  c->r[3]=R32(c->r[13]+0xFFFF9F54u); // 801D26F8
  c->r[29]=((c->r[28])&0x20)?0u:(c->r[31]>>((c->r[28])&31)); // 801D26FC
  c->r[0]=c->r[3]&~c->r[29]; // 801D2700
  W32(c->r[13]+0xFFFF9F54u,c->r[0]); // 801D2704
  c->r[7]=c->r[3]&c->r[29]; // 801D2708
  c->r[3]=0u+0x00000001u; // 801D270C
  if (crb(c,2)) { goto L_801D2760; } // 801D2710
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2714
  c->r[3]=cntlz(c->r[5]); // 801D2718
  cmps(c,0,(int32_t)c->r[3],32); // 801D271C
  W32(c->r[13]+0xFFFF84D4u,c->r[3]); // 801D2720
  if (crb(c,2)) { goto L_801D29C8; } // 801D2724
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 801D2728
  c->r[0]=c->r[30]+0x00000000u; // 801D272C
  c->r[4]=c->r[5]&~c->r[4]; // 801D2730
  c->r[5]=0u+0x0000000Cu; // 801D2734
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D2738
  W32(c->r[13]+0xFFFF9F58u,c->r[4]); // 801D273C
  c->r[4]=0u+0x00000000u; // 801D2740
  c->r[3]=c->r[0]+c->r[3]; // 801D2744
  c->lr=0x801D274Cu; f_8000443C(c); // 801D2748
  c->r[4]=0u+0x801D0000u; // 801D274C
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2750
  c->r[4]=c->r[4]+0x000026C8u; // 801D2754
  c->lr=0x801D275Cu; f_801FA790(c); // 801D2758
  goto L_801D29C8; // 801D275C
L_801D2760:;
  c->r[5]=rotl(c->r[4],0)&0x18000000u; // 801D2760
  c->r[8]=rotl(c->r[4],0)&0xFFFFFF00u; // 801D2764
  c->r[0]=c->r[5]+0xF8000000u; // 801D2768
  c->r[6]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801D276C
  c->r[4]=c->r[30]+0x00000030u; // 801D2770
  cmpu(c,0,c->r[0],0x00000000u); // 801D2774
  W32(c->r[4]+c->r[6],c->r[8]); // 801D2778
  if (!crb(c,2)) { goto L_801D2788; } // 801D277C
  c->r[0]=rotl(c->r[8],0)&0x01000000u; cr0(c,c->r[0]); // 801D2780
  if (!crb(c,2)) { goto L_801D27D8; } // 801D2784
L_801D2788:;
  c->r[7]=R32(c->r[13]+0xFFFF9F58u); // 801D2788
  c->r[5]=cntlz(c->r[7]); // 801D278C
  cmps(c,0,(int32_t)c->r[5],32); // 801D2790
  W32(c->r[13]+0xFFFF84D4u,c->r[5]); // 801D2794
  if (crb(c,2)) { goto L_801D29C8; } // 801D2798
  c->r[3]=0u+0x80000000u; // 801D279C
  c->r[0]=c->r[30]+0x00000000u; // 801D27A0
  c->r[6]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 801D27A4
  c->r[4]=0u+0x00000000u; // 801D27A8
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801D27AC
  c->r[5]=0u+0x0000000Cu; // 801D27B0
  c->r[6]=c->r[7]&~c->r[6]; // 801D27B4
  W32(c->r[13]+0xFFFF9F58u,c->r[6]); // 801D27B8
  c->r[3]=c->r[0]+c->r[3]; // 801D27BC
  c->lr=0x801D27C4u; f_8000443C(c); // 801D27C0
  c->r[4]=0u+0x801D0000u; // 801D27C4
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D27C8
  c->r[4]=c->r[4]+0x000026C8u; // 801D27CC
  c->lr=0x801D27D4u; f_801FA790(c); // 801D27D0
  goto L_801D29C8; // 801D27D4
L_801D27D8:;
  c->r[0]=R32(c->r[13]+0xFFFF84E0u); // 801D27D8
  cmpu(c,0,c->r[0],0x00000002u); // 801D27DC
  if (!crb(c,0)) { goto L_801D2860; } // 801D27E0
  c->r[0]=R32(c->r[13]+0xFFFF9F5Cu); // 801D27E4
  c->r[3]=c->r[28]|c->r[28]; // 801D27E8
  c->r[4]=c->r[1]+0x00000008u; // 801D27EC
  c->r[0]=c->r[0]|c->r[29]; // 801D27F0
  W32(c->r[13]+0xFFFF9F5Cu,c->r[0]); // 801D27F4
  c->lr=0x801D27FCu; f_801FA010(c); // 801D27F8
  c->r[0]=R32(c->r[13]+0xFFFF84DCu); // 801D27FC
  c->r[3]=c->r[28]|c->r[28]; // 801D2800
  c->r[4]=c->r[0]|0x00400000u; // 801D2804
  c->lr=0x801D280Cu; f_801F9EAC(c); // 801D2808
  c->r[3]=R32(c->r[13]+0xFFFF9F5Cu); // 801D280C
  c->lr=0x801D2814u; f_801F9F1C(c); // 801D2810
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2814
  c->r[3]=cntlz(c->r[5]); // 801D2818
  cmps(c,0,(int32_t)c->r[3],32); // 801D281C
  W32(c->r[13]+0xFFFF84D4u,c->r[3]); // 801D2820
  if (crb(c,2)) { goto L_801D29C8; } // 801D2824
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 801D2828
  c->r[0]=c->r[30]+0x00000000u; // 801D282C
  c->r[4]=c->r[5]&~c->r[4]; // 801D2830
  c->r[5]=0u+0x0000000Cu; // 801D2834
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D2838
  W32(c->r[13]+0xFFFF9F58u,c->r[4]); // 801D283C
  c->r[4]=0u+0x00000000u; // 801D2840
  c->r[3]=c->r[0]+c->r[3]; // 801D2844
  c->lr=0x801D284Cu; f_8000443C(c); // 801D2848
  c->r[4]=0u+0x801D0000u; // 801D284C
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2850
  c->r[4]=c->r[4]+0x000026C8u; // 801D2854
  c->lr=0x801D285Cu; f_801FA790(c); // 801D2858
  goto L_801D29C8; // 801D285C
L_801D2860:;
  c->r[0]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[0]); // 801D2860
  if (crb(c,2)) { goto L_801D2870; } // 801D2864
  c->r[0]=rotl(c->r[8],0)&0x04000000u; cr0(c,c->r[0]); // 801D2868
  if (crb(c,2)) { goto L_801D28E0; } // 801D286C
L_801D2870:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D2870
  if (crb(c,2)) { goto L_801D28AC; } // 801D2874
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2878
  c->r[8]=0u+0x801D0000u; // 801D287C
  c->r[0]=c->r[30]+0x00000000u; // 801D2880
  c->r[4]=c->r[13]+0xFFFF84ECu; // 801D2884
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D2888
  c->r[8]=c->r[8]+0x0000246Cu; // 801D288C
  c->r[5]=0u+0x00000003u; // 801D2890
  c->r[7]=0u+0x0000000Au; // 801D2894
  c->r[6]=c->r[0]+c->r[6]; // 801D2898
  c->r[10]=0u+0x00000000u; // 801D289C
  c->r[9]=0u+0x00000000u; // 801D28A0
  c->lr=0x801D28A8u; f_801FA1C0(c); // 801D28A4
  goto L_801D2968; // 801D28A8
L_801D28AC:;
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D28AC
  c->r[8]=0u+0x801D0000u; // 801D28B0
  c->r[0]=c->r[30]+0x00000000u; // 801D28B4
  c->r[4]=c->r[13]+0xFFFF84E8u; // 801D28B8
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D28BC
  c->r[8]=c->r[8]+0x0000246Cu; // 801D28C0
  c->r[5]=0u+0x00000001u; // 801D28C4
  c->r[7]=0u+0x0000000Au; // 801D28C8
  c->r[6]=c->r[0]+c->r[6]; // 801D28CC
  c->r[10]=0u+0x00000000u; // 801D28D0
  c->r[9]=0u+0x00000000u; // 801D28D4
  c->lr=0x801D28DCu; f_801FA1C0(c); // 801D28D8
  goto L_801D2968; // 801D28DC
L_801D28E0:;
  c->r[0]=rotl(c->r[8],0)&0x00100000u; cr0(c,c->r[0]); // 801D28E0
  if (crb(c,2)) { goto L_801D2968; } // 801D28E4
  c->r[0]=rotl(c->r[8],0)&0x00080000u; cr0(c,c->r[0]); // 801D28E8
  if (!crb(c,2)) { goto L_801D2968; } // 801D28EC
  c->r[0]=rotl(c->r[8],0)&0x00040000u; cr0(c,c->r[0]); // 801D28F0
  if (!crb(c,2)) { goto L_801D2968; } // 801D28F4
  c->r[0]=rotl(c->r[8],0)&0x40000000u; cr0(c,c->r[0]); // 801D28F8
  if (crb(c,2)) { goto L_801D2934; } // 801D28FC
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 801D2900
  c->r[0]=c->r[30]+0x00000000u; // 801D2904
  c->r[8]=0u+0x801D0000u; // 801D2908
  c->r[3]=c->r[28]|c->r[28]; // 801D290C
  c->r[6]=c->r[0]+c->r[4]; // 801D2910
  c->r[8]=c->r[8]+0x0000246Cu; // 801D2914
  c->r[4]=c->r[13]+0xFFFF84E8u; // 801D2918
  c->r[5]=0u+0x00000001u; // 801D291C
  c->r[7]=0u+0x0000000Au; // 801D2920
  c->r[10]=0u+0x00000000u; // 801D2924
  c->r[9]=0u+0x00000000u; // 801D2928
  c->lr=0x801D2930u; f_801FA1C0(c); // 801D292C
  goto L_801D2968; // 801D2930
L_801D2934:;
  c->r[5]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 801D2934
  c->r[4]=c->r[30]+0x00000040u; // 801D2938
  c->r[8]=0u+0x801D0000u; // 801D293C
  c->r[0]=c->r[30]+0x00000000u; // 801D2940
  c->r[4]=c->r[4]+c->r[6]; // 801D2944
  c->r[3]=c->r[28]|c->r[28]; // 801D2948
  c->r[6]=c->r[0]+c->r[5]; // 801D294C
  c->r[8]=c->r[8]+0x000025F4u; // 801D2950
  c->r[5]=0u+0x00000003u; // 801D2954
  c->r[7]=0u+0x00000008u; // 801D2958
  c->r[10]=0u+0x00000000u; // 801D295C
  c->r[9]=0u+0x00000000u; // 801D2960
  c->lr=0x801D2968u; f_801FA1C0(c); // 801D2964
L_801D2968:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D2968
  if (!crb(c,2)) { goto L_801D29C8; } // 801D296C
  c->r[7]=R32(c->r[13]+0xFFFF9F58u); // 801D2970
  c->r[0]=R32(c->r[13]+0xFFFF9F48u); // 801D2974
  c->r[5]=cntlz(c->r[7]); // 801D2978
  c->r[0]=c->r[0]|c->r[29]; // 801D297C
  W32(c->r[13]+0xFFFF84D4u,c->r[5]); // 801D2980
  cmps(c,0,(int32_t)c->r[5],32); // 801D2984
  W32(c->r[13]+0xFFFF9F48u,c->r[0]); // 801D2988
  if (crb(c,2)) { goto L_801D29C8; } // 801D298C
  c->r[3]=0u+0x80000000u; // 801D2990
  c->r[0]=c->r[30]+0x00000000u; // 801D2994
  c->r[6]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 801D2998
  c->r[4]=0u+0x00000000u; // 801D299C
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 801D29A0
  c->r[5]=0u+0x0000000Cu; // 801D29A4
  c->r[6]=c->r[7]&~c->r[6]; // 801D29A8
  W32(c->r[13]+0xFFFF9F58u,c->r[6]); // 801D29AC
  c->r[3]=c->r[0]+c->r[3]; // 801D29B0
  c->lr=0x801D29B8u; f_8000443C(c); // 801D29B4
  c->r[4]=0u+0x801D0000u; // 801D29B8
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D29BC
  c->r[4]=c->r[4]+0x000026C8u; // 801D29C0
  c->lr=0x801D29C8u; f_801FA790(c); // 801D29C4
L_801D29C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D29C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D29CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D29D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D29D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D29D8
  c->lr=c->r[0]; // 801D29DC
  c->r[1]=c->r[1]+0x00000020u; // 801D29E0
  return; // 801D29E4
}

// fn_801D29E8
void f_801D29E8(Ctx* __restrict c) {
  trace_call(0x801D29E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D29E8
  c->r[0]=c->lr; // 801D29EC
  c->r[5]=0u+0x80000000u; // 801D29F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D29F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D29F8
  c->r[31]=((c->r[3])&0x20)?0u:(c->r[5]>>((c->r[3])&31)); // 801D29FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2A00
  c->r[30]=c->r[3]|c->r[3]; // 801D2A04
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2A08
  c->r[0]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2A0C
  c->r[0]=c->r[0]&c->r[31]; cr0(c,c->r[0]); // 801D2A10
  if (crb(c,2)) { goto L_801D2B08; } // 801D2A14
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; cr0(c,c->r[0]); // 801D2A18
  c->r[6]=R32(c->r[13]+0xFFFF9F50u); // 801D2A1C
  c->r[7]=~(c->r[31]|c->r[31]); // 801D2A20
  c->r[5]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2A24
  c->r[6]=c->r[6]&c->r[7]; // 801D2A28
  c->r[4]=rotl(c->r[4],0)&0xFFFFFF00u; // 801D2A2C
  c->r[0]=c->r[5]&c->r[7]; // 801D2A30
  W32(c->r[13]+0xFFFF9F50u,c->r[6]); // 801D2A34
  W32(c->r[13]+0xFFFF9F4Cu,c->r[0]); // 801D2A38
  if (!crb(c,2)) { goto L_801D2AA4; } // 801D2A3C
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 801D2A40
  if (crb(c,2)) { goto L_801D2AA4; } // 801D2A44
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 801D2A48
  if (crb(c,2)) { goto L_801D2AA4; } // 801D2A4C
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 801D2A50
  if (crb(c,2)) { goto L_801D2AA4; } // 801D2A54
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 801D2A58
  if (!crb(c,2)) { goto L_801D2AA4; } // 801D2A5C
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 801D2A60
  if (!crb(c,2)) { goto L_801D2AA4; } // 801D2A64
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 801D2A68
  if (!crb(c,2)) { goto L_801D2AA4; } // 801D2A6C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D2A70
  c->r[4]=0u+0x80570000u; // 801D2A74
  c->r[8]=0u+0x801D0000u; // 801D2A78
  c->r[4]=c->r[4]+0xFFFFF510u; // 801D2A7C
  c->r[6]=c->r[4]+c->r[0]; // 801D2A80
  c->r[8]=c->r[8]+0x0000252Cu; // 801D2A84
  c->r[4]=c->r[13]+0xFFFF84E8u; // 801D2A88
  c->r[5]=0u+0x00000001u; // 801D2A8C
  c->r[7]=0u+0x0000000Au; // 801D2A90
  c->r[10]=0u+0x00000000u; // 801D2A94
  c->r[9]=0u+0x00000000u; // 801D2A98
  c->lr=0x801D2AA0u; f_801FA1C0(c); // 801D2A9C
  goto L_801D2B08; // 801D2AA0
L_801D2AA4:;
  c->lr=0x801D2AA8u; f_801BE74C(c); // 801D2AA4
  c->r[29]=c->r[3]|c->r[3]; // 801D2AA8
  c->r[3]=c->r[31]|c->r[31]; // 801D2AAC
  c->lr=0x801D2AB4u; f_801F9FA4(c); // 801D2AB0
  c->r[4]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2AB4
  c->r[9]=~(c->r[31]|c->r[31]); // 801D2AB8
  c->r[0]=R32(c->r[13]+0xFFFF9F50u); // 801D2ABC
  c->r[3]=c->r[30]|c->r[30]; // 801D2AC0
  c->r[8]=c->r[4]&c->r[9]; // 801D2AC4
  c->r[5]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2AC8
  c->r[7]=c->r[0]&c->r[9]; // 801D2ACC
  c->r[0]=R32(c->r[13]+0xFFFF9F44u); // 801D2AD0
  c->r[6]=c->r[5]&c->r[9]; // 801D2AD4
  c->r[4]=R32(c->r[13]+0xFFFF9F48u); // 801D2AD8
  c->r[0]=c->r[0]&c->r[9]; // 801D2ADC
  W32(c->r[13]+0xFFFF9F5Cu,c->r[8]); // 801D2AE0
  c->r[5]=c->r[4]&c->r[9]; // 801D2AE4
  c->r[4]=0u+0x00000000u; // 801D2AE8
  W32(c->r[13]+0xFFFF9F50u,c->r[7]); // 801D2AEC
  W32(c->r[13]+0xFFFF9F4Cu,c->r[6]); // 801D2AF0
  W32(c->r[13]+0xFFFF9F48u,c->r[5]); // 801D2AF4
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D2AF8
  c->lr=0x801D2B00u; f_801C0BC4(c); // 801D2AFC
  c->r[3]=c->r[29]|c->r[29]; // 801D2B00
  c->lr=0x801D2B08u; f_801BE774(c); // 801D2B04
L_801D2B08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2B08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2B0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2B10
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2B14
  c->lr=c->r[0]; // 801D2B18
  c->r[1]=c->r[1]+0x00000020u; // 801D2B1C
  return; // 801D2B20
}

// PADReset
void f_801D2B24(Ctx* __restrict c) {
  trace_call(0x801D2B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B24
  c->r[0]=c->lr; // 801D2B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2B34
  c->r[30]=c->r[3]|c->r[3]; // 801D2B38
  c->lr=0x801D2B40u; f_801BE74C(c); // 801D2B3C
  c->r[0]=R32(c->r[13]+0xFFFF9F48u); // 801D2B40
  c->r[31]=c->r[3]|c->r[3]; // 801D2B44
  c->r[4]=R32(c->r[13]+0xFFFF9F50u); // 801D2B48
  c->r[7]=0u+0x00000000u; // 801D2B4C
  c->r[3]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2B50
  c->r[30]=c->r[30]|c->r[0]; // 801D2B54
  c->r[0]=R32(c->r[13]+0xFFFF84E0u); // 801D2B58
  c->r[4]=c->r[4]|c->r[3]; // 801D2B5C
  c->r[3]=R32(c->r[13]+0xFFFF9F58u); // 801D2B60
  c->r[30]=c->r[30]&~c->r[4]; // 801D2B64
  c->r[5]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2B68
  c->r[6]=c->r[3]|c->r[30]; // 801D2B6C
  c->r[3]=R32(c->r[13]+0xFFFF9F44u); // 801D2B70
  c->r[8]=~(c->r[30]|c->r[30]); // 801D2B74
  cmpu(c,0,c->r[0],0x00000004u); // 801D2B78
  c->r[0]=c->r[3]&c->r[8]; // 801D2B7C
  W32(c->r[13]+0xFFFF9F48u,c->r[7]); // 801D2B80
  c->r[4]=c->r[5]&c->r[8]; // 801D2B84
  c->r[3]=c->r[6]&c->r[5]; // 801D2B88
  W32(c->r[13]+0xFFFF9F58u,c->r[6]); // 801D2B8C
  W32(c->r[13]+0xFFFF9F5Cu,c->r[4]); // 801D2B90
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D2B94
  if (!crb(c,2)) { goto L_801D2BA8; } // 801D2B98
  c->r[0]=R32(c->r[13]+0xFFFF9F54u); // 801D2B9C
  c->r[0]=c->r[0]|c->r[30]; // 801D2BA0
  W32(c->r[13]+0xFFFF9F54u,c->r[0]); // 801D2BA4
L_801D2BA8:;
  c->lr=0x801D2BACu; f_801F9FA4(c); // 801D2BA8
  c->r[0]=R32(c->r[13]+0xFFFF84D4u); // 801D2BAC
  cmps(c,0,(int32_t)c->r[0],32); // 801D2BB0
  if (!crb(c,2)) { goto L_801D2C08; } // 801D2BB4
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2BB8
  c->r[6]=cntlz(c->r[5]); // 801D2BBC
  cmps(c,0,(int32_t)c->r[6],32); // 801D2BC0
  W32(c->r[13]+0xFFFF84D4u,c->r[6]); // 801D2BC4
  if (crb(c,2)) { goto L_801D2C08; } // 801D2BC8
  c->r[0]=0u+0x80000000u; // 801D2BCC
  c->r[3]=0u+0x80570000u; // 801D2BD0
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801D2BD4
  c->r[4]=0u+0x00000000u; // 801D2BD8
  c->r[5]=c->r[5]&~c->r[0]; // 801D2BDC
  c->r[3]=c->r[3]+0xFFFFF510u; // 801D2BE0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2BE4
  W32(c->r[13]+0xFFFF9F58u,c->r[5]); // 801D2BE8
  c->r[5]=0u+0x0000000Cu; // 801D2BEC
  c->r[3]=c->r[3]+c->r[0]; // 801D2BF0
  c->lr=0x801D2BF8u; f_8000443C(c); // 801D2BF4
  c->r[4]=0u+0x801D0000u; // 801D2BF8
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2BFC
  c->r[4]=c->r[4]+0x000026C8u; // 801D2C00
  c->lr=0x801D2C08u; f_801FA790(c); // 801D2C04
L_801D2C08:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2C08
  c->lr=0x801D2C10u; f_801BE774(c); // 801D2C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2C10
  c->r[3]=0u+0x00000001u; // 801D2C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2C1C
  c->lr=c->r[0]; // 801D2C20
  c->r[1]=c->r[1]+0x00000010u; // 801D2C24
  return; // 801D2C28
}

// PADRecalibrate
void f_801D2C2C(Ctx* __restrict c) {
  trace_call(0x801D2C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2C2C
  c->r[0]=c->lr; // 801D2C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2C34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2C38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2C3C
  c->r[30]=c->r[3]|c->r[3]; // 801D2C40
  c->lr=0x801D2C48u; f_801BE74C(c); // 801D2C44
  c->r[5]=R32(c->r[13]+0xFFFF9F48u); // 801D2C48
  c->r[31]=c->r[3]|c->r[3]; // 801D2C4C
  c->r[6]=R32(c->r[13]+0xFFFF9F50u); // 801D2C50
  c->r[7]=0u+0x00000000u; // 801D2C54
  c->r[0]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2C58
  c->r[30]=c->r[30]|c->r[5]; // 801D2C5C
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2C60
  c->r[4]=0u+0x80000000u; // 801D2C64
  c->r[0]=c->r[6]|c->r[0]; // 801D2C68
  c->r[3]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2C6C
  c->r[30]=c->r[30]&~c->r[0]; // 801D2C70
  c->r[0]=R32(c->r[13]+0xFFFF9F44u); // 801D2C74
  c->r[8]=~(c->r[30]|c->r[30]); // 801D2C78
  W32(c->r[13]+0xFFFF9F48u,c->r[7]); // 801D2C7C
  c->r[6]=c->r[5]|c->r[30]; // 801D2C80
  c->r[5]=c->r[3]&c->r[8]; // 801D2C84
  c->r[0]=c->r[0]&c->r[8]; // 801D2C88
  W32(c->r[13]+0xFFFF9F58u,c->r[6]); // 801D2C8C
  c->r[3]=c->r[6]&c->r[3]; // 801D2C90
  W32(c->r[13]+0xFFFF9F5Cu,c->r[5]); // 801D2C94
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D2C98
  c->r[0]=R8(c->r[4]+0x000030E3u); // 801D2C9C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801D2CA0
  if (!crb(c,2)) { goto L_801D2CB4; } // 801D2CA4
  c->r[0]=R32(c->r[13]+0xFFFF9F54u); // 801D2CA8
  c->r[0]=c->r[0]|c->r[30]; // 801D2CAC
  W32(c->r[13]+0xFFFF9F54u,c->r[0]); // 801D2CB0
L_801D2CB4:;
  c->lr=0x801D2CB8u; f_801F9FA4(c); // 801D2CB4
  c->r[0]=R32(c->r[13]+0xFFFF84D4u); // 801D2CB8
  cmps(c,0,(int32_t)c->r[0],32); // 801D2CBC
  if (!crb(c,2)) { goto L_801D2D14; } // 801D2CC0
  c->r[5]=R32(c->r[13]+0xFFFF9F58u); // 801D2CC4
  c->r[6]=cntlz(c->r[5]); // 801D2CC8
  cmps(c,0,(int32_t)c->r[6],32); // 801D2CCC
  W32(c->r[13]+0xFFFF84D4u,c->r[6]); // 801D2CD0
  if (crb(c,2)) { goto L_801D2D14; } // 801D2CD4
  c->r[0]=0u+0x80000000u; // 801D2CD8
  c->r[3]=0u+0x80570000u; // 801D2CDC
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801D2CE0
  c->r[4]=0u+0x00000000u; // 801D2CE4
  c->r[5]=c->r[5]&~c->r[0]; // 801D2CE8
  c->r[3]=c->r[3]+0xFFFFF510u; // 801D2CEC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 801D2CF0
  W32(c->r[13]+0xFFFF9F58u,c->r[5]); // 801D2CF4
  c->r[5]=0u+0x0000000Cu; // 801D2CF8
  c->r[3]=c->r[3]+c->r[0]; // 801D2CFC
  c->lr=0x801D2D04u; f_8000443C(c); // 801D2D00
  c->r[4]=0u+0x801D0000u; // 801D2D04
  c->r[3]=R32(c->r[13]+0xFFFF84D4u); // 801D2D08
  c->r[4]=c->r[4]+0x000026C8u; // 801D2D0C
  c->lr=0x801D2D14u; f_801FA790(c); // 801D2D10
L_801D2D14:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2D14
  c->lr=0x801D2D1Cu; f_801BE774(c); // 801D2D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2D1C
  c->r[3]=0u+0x00000001u; // 801D2D20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2D24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2D28
  c->lr=c->r[0]; // 801D2D2C
  c->r[1]=c->r[1]+0x00000010u; // 801D2D30
  return; // 801D2D34
}

// PADInit
void f_801D2D38(Ctx* __restrict c) {
  trace_call(0x801D2D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2D38
  c->r[0]=c->lr; // 801D2D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2D40
  c->r[0]=R32(c->r[13]+0xFFFF9F60u); // 801D2D44
  cmps(c,0,(int32_t)c->r[0],0); // 801D2D48
  if (crb(c,2)) { goto L_801D2D58; } // 801D2D4C
  c->r[3]=0u+0x00000001u; // 801D2D50
  goto L_801D2E84; // 801D2D54
L_801D2D58:;
  c->r[3]=R32(c->r[13]+0xFFFF84D0u); // 801D2D58
  c->lr=0x801D2D60u; f_801B96A0(c); // 801D2D5C
  c->r[4]=R32(c->r[13]+0xFFFF9F40u); // 801D2D60
  cmps(c,1,(int32_t)c->r[4],0); // 801D2D64
  if (crb(c,6)) { goto L_801D2DC4; } // 801D2D68
  c->r[0]=0u+0x00000000u; // 801D2D6C
  cmps(c,0,(int32_t)c->r[4],1); // 801D2D70
  W32(c->r[13]+0xFFFF9F40u,c->r[0]); // 801D2D74
  if (crb(c,2)) { goto L_801D2DA4; } // 801D2D78
  if (!crb(c,0)) { goto L_801D2D88; } // 801D2D7C
  if (!crb(c,4)) { goto L_801D2D94; } // 801D2D80
  goto L_801D2DC0; // 801D2D84
L_801D2D88:;
  cmps(c,0,(int32_t)c->r[4],6); // 801D2D88
  if (!crb(c,0)) { goto L_801D2DC0; } // 801D2D8C
  goto L_801D2DB4; // 801D2D90
L_801D2D94:;
  c->r[3]=0u+0x801D0000u; // 801D2D94
  c->r[3]=c->r[3]+0x00003174u; // 801D2D98
  W32(c->r[13]+0xFFFF84E4u,c->r[3]); // 801D2D9C
  goto L_801D2DC0; // 801D2DA0
L_801D2DA4:;
  c->r[3]=0u+0x801D0000u; // 801D2DA4
  c->r[3]=c->r[3]+0x0000328Cu; // 801D2DA8
  W32(c->r[13]+0xFFFF84E4u,c->r[3]); // 801D2DAC
  goto L_801D2DC0; // 801D2DB0
L_801D2DB4:;
  c->r[3]=0u+0x801D0000u; // 801D2DB4
  c->r[3]=c->r[3]+0x000033A4u; // 801D2DB8
  W32(c->r[13]+0xFFFF84E4u,c->r[3]); // 801D2DBC
L_801D2DC0:;
  W32(c->r[13]+0xFFFF84E0u,c->r[4]); // 801D2DC0
L_801D2DC4:;
  c->r[0]=R32(c->r[13]+0xFFFFA1D4u); // 801D2DC4
  c->r[3]=0u+0x00000001u; // 801D2DC8
  W32(c->r[13]+0xFFFF9F60u,c->r[3]); // 801D2DCC
  cmps(c,0,(int32_t)c->r[0],0); // 801D2DD0
  if (crb(c,2)) { goto L_801D2E38; } // 801D2DD4
  c->lr=0x801D2DDCu; f_801C257C(c); // 801D2DD8
  c->r[8]=sraw(c,c->r[3],16); // 801D2DDC
  c->r[5]=0u+0x00010000u; // 801D2DE0
  c->r[0]=sraw(c,c->r[3],31); // 801D2DE4
  c->r[6]=0u+0x00000000u; // 801D2DE8
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 801D2DEC
  c->r[5]=rotl(c->r[4],16)&0xFFFFFFFFu; // 801D2DF0
  c->r[0]=sraw(c,c->r[3],31); // 801D2DF4
  c->r[5]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 801D2DF8
  c->r[4]=c->r[4]&c->r[7]; // 801D2DFC
  c->r[0]=sraw(c,c->r[3],16); // 801D2E00
  c->r[0]=c->r[5]&c->r[7]; // 801D2E04
  c->r[5]=c->r[3]&c->r[7]; // 801D2E08
  c->r[0]=addc(c,c->r[4],c->r[0],0); // 801D2E0C
  c->r[7]=c->r[8]&c->r[7]; // 801D2E10
  c->r[4]=addc(c,c->r[6],c->r[6],c->xer_ca); // 801D2E14
  c->r[3]=0u+0x80000000u; // 801D2E18
  c->r[5]=addc(c,c->r[5],c->r[0],0); // 801D2E1C
  c->r[0]=0u+0xF0000000u; // 801D2E20
  c->r[4]=addc(c,c->r[6],c->r[4],c->xer_ca); // 801D2E24
  c->r[4]=addc(c,c->r[7],c->r[5],0); // 801D2E28
  c->r[4]=rotl(c->r[4],0)&0x00003FFFu; // 801D2E2C
  W16(c->r[3]+0x000030E0u,c->r[4]); // 801D2E30
  W32(c->r[13]+0xFFFF9F54u,c->r[0]); // 801D2E34
L_801D2E38:;
  c->r[3]=0u+0x80000000u; // 801D2E38
  c->r[6]=0u+0x80570000u; // 801D2E3C
  c->r[0]=R16(c->r[3]+0x000030E0u); // 801D2E40
  c->r[4]=c->r[6]+0xFFFFF550u; // 801D2E44
  c->r[0]=rotl(c->r[0],8)&0x003FFF00u; // 801D2E48
  c->r[7]=c->r[0]|0x4D000000u; // 801D2E4C
  c->r[5]=c->r[0]|0x4D400000u; // 801D2E50
  c->r[3]=c->r[0]|0x4D800000u; // 801D2E54
  c->r[0]=c->r[0]|0x4DC00000u; // 801D2E58
  W32(c->r[6]+0xFFFFF550u,c->r[7]); // 801D2E5C
  W32(c->r[4]+0x00000004u,c->r[5]); // 801D2E60
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D2E64
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D2E68
  c->lr=0x801D2E70u; f_801FA978(c); // 801D2E6C
  c->r[3]=0u+0x804B0000u; // 801D2E70
  c->r[3]=c->r[3]+0x00002B70u; // 801D2E74
  c->lr=0x801D2E7Cu; f_801BFD5C(c); // 801D2E78
  c->r[3]=0u+0xF0000000u; // 801D2E7C
  c->lr=0x801D2E84u; f_801D2B24(c); // 801D2E80
L_801D2E84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2E84
  c->lr=c->r[0]; // 801D2E88
  c->r[1]=c->r[1]+0x00000010u; // 801D2E8C
  return; // 801D2E90
}

// fn_801D2E94
void f_801D2E94(Ctx* __restrict c) {
  trace_call(0x801D2E94u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2E94
  c->r[0]=c->lr; // 801D2E98
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D2E9C
  c->r[11]=c->r[1]+0x00000050u; // 801D2EA0
  c->lr=0x801D2EA8u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2EA4
  c->r[19]=c->r[3]|c->r[3]; // 801D2EA8
  c->lr=0x801D2EB0u; f_801BE74C(c); // 801D2EAC
  c->r[24]=0u+0x80570000u; // 801D2EB0
  c->r[22]=c->r[3]|c->r[3]; // 801D2EB4
  c->r[24]=c->r[24]+0xFFFFF510u; // 801D2EB8
  c->r[20]=0u+0x00000000u; // 801D2EBC
  c->r[21]=0u+0x00000000u; // 801D2EC0
  c->r[27]=0u+0xFFFFFFFEu; // 801D2EC4
  c->r[28]=0u+0xFFFFFFFFu; // 801D2EC8
  c->r[29]=0u+0xFFFFFFFDu; // 801D2ECC
  c->r[30]=0u+0x00000000u; // 801D2ED0
  c->r[31]=0u+0x801D0000u; // 801D2ED4
  c->r[18]=0u+0x801D0000u; // 801D2ED8
  c->r[26]=0u+0x80000000u; // 801D2EDC
L_801D2EE0:;
  c->r[0]=R32(c->r[13]+0xFFFF9F48u); // 801D2EE0
  c->r[23]=((c->r[21])&0x20)?0u:(c->r[26]>>((c->r[21])&31)); // 801D2EE4
  c->r[0]=c->r[0]&c->r[23]; cr0(c,c->r[0]); // 801D2EE8
  if (crb(c,2)) { goto L_801D2F10; } // 801D2EEC
  c->r[3]=0u+0x00000000u; // 801D2EF0
  c->lr=0x801D2EF8u; f_801D2B24(c); // 801D2EF4
  W8(c->r[19]+0x0000000Au,c->r[27]); // 801D2EF8
  c->r[3]=c->r[19]|c->r[19]; // 801D2EFC
  c->r[4]=0u+0x00000000u; // 801D2F00
  c->r[5]=0u+0x0000000Au; // 801D2F04
  c->lr=0x801D2F0Cu; f_8000443C(c); // 801D2F08
  goto L_801D313C; // 801D2F0C
L_801D2F10:;
  c->r[0]=R32(c->r[13]+0xFFFF9F58u); // 801D2F10
  c->r[0]=c->r[0]&c->r[23]; cr0(c,c->r[0]); // 801D2F14
  if (!crb(c,2)) { goto L_801D2F28; } // 801D2F18
  c->r[0]=R32(c->r[13]+0xFFFF84D4u); // 801D2F1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 801D2F20
  if (!crb(c,2)) { goto L_801D2F40; } // 801D2F24
L_801D2F28:;
  W8(c->r[19]+0x0000000Au,c->r[27]); // 801D2F28
  c->r[3]=c->r[19]|c->r[19]; // 801D2F2C
  c->r[4]=0u+0x00000000u; // 801D2F30
  c->r[5]=0u+0x0000000Au; // 801D2F34
  c->lr=0x801D2F3Cu; f_8000443C(c); // 801D2F38
  goto L_801D313C; // 801D2F3C
L_801D2F40:;
  c->r[0]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2F40
  c->r[0]=c->r[0]&c->r[23]; cr0(c,c->r[0]); // 801D2F44
  if (!crb(c,2)) { goto L_801D2F64; } // 801D2F48
  W8(c->r[19]+0x0000000Au,c->r[28]); // 801D2F4C
  c->r[3]=c->r[19]|c->r[19]; // 801D2F50
  c->r[4]=0u+0x00000000u; // 801D2F54
  c->r[5]=0u+0x0000000Au; // 801D2F58
  c->lr=0x801D2F60u; f_8000443C(c); // 801D2F5C
  goto L_801D313C; // 801D2F60
L_801D2F64:;
  c->r[3]=c->r[21]|c->r[21]; // 801D2F64
  c->lr=0x801D2F6Cu; f_801F934C(c); // 801D2F68
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F6C
  if (crb(c,2)) { goto L_801D2F8C; } // 801D2F70
  W8(c->r[19]+0x0000000Au,c->r[29]); // 801D2F74
  c->r[3]=c->r[19]|c->r[19]; // 801D2F78
  c->r[4]=0u+0x00000000u; // 801D2F7C
  c->r[5]=0u+0x0000000Au; // 801D2F80
  c->lr=0x801D2F88u; f_8000443C(c); // 801D2F84
  goto L_801D313C; // 801D2F88
L_801D2F8C:;
  c->r[3]=c->r[21]|c->r[21]; // 801D2F8C
  c->lr=0x801D2F94u; f_801F9E34(c); // 801D2F90
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801D2F94
  if (crb(c,2)) { goto L_801D3068; } // 801D2F98
  c->r[3]=c->r[21]|c->r[21]; // 801D2F9C
  c->r[4]=c->r[1]+0x00000008u; // 801D2FA0
  c->lr=0x801D2FA8u; f_801FA010(c); // 801D2FA4
  c->r[0]=R32(c->r[13]+0xFFFF9F50u); // 801D2FA8
  c->r[0]=c->r[0]&c->r[23]; cr0(c,c->r[0]); // 801D2FAC
  if (crb(c,2)) { goto L_801D2FEC; } // 801D2FB0
  W8(c->r[19]+0x0000000Au,c->r[30]); // 801D2FB4
  c->r[3]=c->r[19]|c->r[19]; // 801D2FB8
  c->r[4]=0u+0x00000000u; // 801D2FBC
  c->r[5]=0u+0x0000000Au; // 801D2FC0
  c->lr=0x801D2FC8u; f_8000443C(c); // 801D2FC4
  c->r[3]=R32(c->r[13]+0xFFFF9F4Cu); // 801D2FC8
  c->r[0]=c->r[3]&c->r[23]; cr0(c,c->r[0]); // 801D2FCC
  if (!crb(c,2)) { goto L_801D313C; } // 801D2FD0
  c->r[0]=c->r[3]|c->r[23]; // 801D2FD4
  c->r[3]=c->r[21]|c->r[21]; // 801D2FD8
  W32(c->r[13]+0xFFFF9F4Cu,c->r[0]); // 801D2FDC
  c->r[4]=c->r[31]+0x000029E8u; // 801D2FE0
  c->lr=0x801D2FE8u; f_801FA790(c); // 801D2FE4
  goto L_801D313C; // 801D2FE8
L_801D2FEC:;
  c->lr=0x801D2FF0u; f_801BE74C(c); // 801D2FEC
  c->r[25]=c->r[3]|c->r[3]; // 801D2FF0
  c->r[3]=c->r[23]|c->r[23]; // 801D2FF4
  c->lr=0x801D2FFCu; f_801F9FA4(c); // 801D2FF8
  c->r[4]=R32(c->r[13]+0xFFFF9F5Cu); // 801D2FFC
  c->r[9]=~(c->r[23]|c->r[23]); // 801D3000
  c->r[0]=R32(c->r[13]+0xFFFF9F50u); // 801D3004
  c->r[3]=c->r[21]|c->r[21]; // 801D3008
  c->r[8]=c->r[4]&c->r[9]; // 801D300C
  c->r[5]=R32(c->r[13]+0xFFFF9F4Cu); // 801D3010
  c->r[7]=c->r[0]&c->r[9]; // 801D3014
  c->r[0]=R32(c->r[13]+0xFFFF9F44u); // 801D3018
  c->r[6]=c->r[5]&c->r[9]; // 801D301C
  c->r[4]=R32(c->r[13]+0xFFFF9F48u); // 801D3020
  c->r[0]=c->r[0]&c->r[9]; // 801D3024
  W32(c->r[13]+0xFFFF9F5Cu,c->r[8]); // 801D3028
  c->r[5]=c->r[4]&c->r[9]; // 801D302C
  c->r[4]=0u+0x00000000u; // 801D3030
  W32(c->r[13]+0xFFFF9F50u,c->r[7]); // 801D3034
  W32(c->r[13]+0xFFFF9F4Cu,c->r[6]); // 801D3038
  W32(c->r[13]+0xFFFF9F48u,c->r[5]); // 801D303C
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D3040
  c->lr=0x801D3048u; f_801C0BC4(c); // 801D3044
  c->r[3]=c->r[25]|c->r[25]; // 801D3048
  c->lr=0x801D3050u; f_801BE774(c); // 801D304C
  W8(c->r[19]+0x0000000Au,c->r[28]); // 801D3050
  c->r[3]=c->r[19]|c->r[19]; // 801D3054
  c->r[4]=0u+0x00000000u; // 801D3058
  c->r[5]=0u+0x0000000Au; // 801D305C
  c->lr=0x801D3064u; f_8000443C(c); // 801D3060
  goto L_801D313C; // 801D3064
L_801D3068:;
  c->r[3]=c->r[21]|c->r[21]; // 801D3068
  c->lr=0x801D3070u; f_801FA5DC(c); // 801D306C
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 801D3070
  if (!crb(c,2)) { goto L_801D307C; } // 801D3074
  c->r[20]=c->r[20]|c->r[23]; // 801D3078
L_801D307C:;
  c->r[3]=c->r[21]|c->r[21]; // 801D307C
  c->r[4]=c->r[1]+0x00000008u; // 801D3080
  c->lr=0x801D3088u; f_801FA010(c); // 801D3084
  cmps(c,0,(int32_t)c->r[3],0); // 801D3088
  if (!crb(c,2)) { goto L_801D30A8; } // 801D308C
  W8(c->r[19]+0x0000000Au,c->r[29]); // 801D3090
  c->r[3]=c->r[19]|c->r[19]; // 801D3094
  c->r[4]=0u+0x00000000u; // 801D3098
  c->r[5]=0u+0x0000000Au; // 801D309C
  c->lr=0x801D30A4u; f_8000443C(c); // 801D30A0
  goto L_801D313C; // 801D30A4
L_801D30A8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D30A8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801D30AC
  if (crb(c,2)) { goto L_801D30CC; } // 801D30B0
  W8(c->r[19]+0x0000000Au,c->r[29]); // 801D30B4
  c->r[3]=c->r[19]|c->r[19]; // 801D30B8
  c->r[4]=0u+0x00000000u; // 801D30BC
  c->r[5]=0u+0x0000000Au; // 801D30C0
  c->lr=0x801D30C8u; f_8000443C(c); // 801D30C4
  goto L_801D313C; // 801D30C8
L_801D30CC:;
  c->r[12]=R32(c->r[13]+0xFFFF84E4u); // 801D30CC
  c->r[3]=c->r[21]|c->r[21]; // 801D30D0
  c->r[4]=c->r[19]|c->r[19]; // 801D30D4
  c->r[5]=c->r[1]+0x00000008u; // 801D30D8
  c->ctr=c->r[12]; // 801D30DC
  if (true) { c->lr=0x801D30E4u; dispatch(c,c->ctr); } // 801D30E0
  c->r[0]=R16(c->r[19]+0x00000000u); // 801D30E4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 801D30E8
  if (crb(c,2)) { goto L_801D312C; } // 801D30EC
  W8(c->r[19]+0x0000000Au,c->r[29]); // 801D30F0
  c->r[3]=c->r[19]|c->r[19]; // 801D30F4
  c->r[4]=0u+0x00000000u; // 801D30F8
  c->r[5]=0u+0x0000000Au; // 801D30FC
  c->lr=0x801D3104u; f_8000443C(c); // 801D3100
  c->r[3]=c->r[21]|c->r[21]; // 801D3104
  c->r[6]=c->r[24]|c->r[24]; // 801D3108
  c->r[8]=c->r[18]+0x0000252Cu; // 801D310C
  c->r[4]=c->r[13]+0xFFFF84E8u; // 801D3110
  c->r[5]=0u+0x00000001u; // 801D3114
  c->r[7]=0u+0x0000000Au; // 801D3118
  c->r[10]=0u+0x00000000u; // 801D311C
  c->r[9]=0u+0x00000000u; // 801D3120
  c->lr=0x801D3128u; f_801FA1C0(c); // 801D3124
  goto L_801D313C; // 801D3128
L_801D312C:;
  W8(c->r[19]+0x0000000Au,c->r[30]); // 801D312C
  c->r[0]=R16(c->r[19]+0x00000000u); // 801D3130
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 801D3134
  W16(c->r[19]+0x00000000u,c->r[0]); // 801D3138
L_801D313C:;
  c->r[21]=c->r[21]+0x00000001u; // 801D313C
  c->r[19]=c->r[19]+0x0000000Cu; // 801D3140
  cmps(c,0,(int32_t)c->r[21],4); // 801D3144
  c->r[24]=c->r[24]+0x0000000Cu; // 801D3148
  if (crb(c,0)) { IRQCHK(c); goto L_801D2EE0; } // 801D314C
  c->r[3]=c->r[22]|c->r[22]; // 801D3150
  c->lr=0x801D3158u; f_801BE774(c); // 801D3154
  c->r[11]=c->r[1]+0x00000050u; // 801D3158
  c->r[3]=c->r[20]|c->r[20]; // 801D315C
  c->lr=0x801D3164u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3160
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D3164
  c->lr=c->r[0]; // 801D3168
  c->r[1]=c->r[1]+0x00000050u; // 801D316C
  return; // 801D3170
}

// SPEC0_MakeStatus
void f_801D3174(Ctx* __restrict c) {
  trace_call(0x801D3174u);
  c->r[0]=0u+0x00000000u; // 801D3174
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D3178
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D317C
  c->r[3]=rotl(c->r[3],13)&0x00000001u; // 801D3180
  c->r[7]=0u-c->r[3]; // 801D3184
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 801D3188
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D318C
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3190
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 801D3194
  c->r[3]=0u-c->r[3]; // 801D3198
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 801D319C
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 801D31A0
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D31A4
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D31A8
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 801D31AC
  c->r[3]=0u-c->r[3]; // 801D31B0
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 801D31B4
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D31B8
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D31BC
  c->r[3]=rotl(c->r[3],16)&0x00000001u; // 801D31C0
  c->r[3]=0u-c->r[3]; // 801D31C4
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 801D31C8
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D31CC
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D31D0
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 801D31D4
  c->r[3]=0u-c->r[3]; // 801D31D8
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 801D31DC
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D31E0
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D31E4
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 801D31E8
  W8(c->r[4]+0x00000002u,c->r[3]); // 801D31EC
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D31F0
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 801D31F4
  W8(c->r[4]+0x00000003u,c->r[3]); // 801D31F8
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D31FC
  W8(c->r[4]+0x00000004u,c->r[3]); // 801D3200
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D3204
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 801D3208
  W8(c->r[4]+0x00000005u,c->r[3]); // 801D320C
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3210
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 801D3214
  W8(c->r[4]+0x00000006u,c->r[3]); // 801D3218
  cmpu(c,0,c->r[3],0x000000AAu); // 801D321C
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3220
  W8(c->r[4]+0x00000007u,c->r[3]); // 801D3224
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3228
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D322C
  if (crb(c,0)) { goto L_801D3240; } // 801D3230
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 801D3234
  c->r[0]=c->r[0]|0x00000040u; // 801D3238
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D323C
L_801D3240:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 801D3240
  cmpu(c,0,c->r[0],0x000000AAu); // 801D3244
  if (crb(c,0)) { goto L_801D3258; } // 801D3248
  c->r[0]=R16(c->r[4]+0x00000000u); // 801D324C
  c->r[0]=c->r[0]|0x00000020u; // 801D3250
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D3254
L_801D3258:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D3258
  c->r[6]=R8(c->r[4]+0x00000003u); // 801D325C
  c->r[0]=c->r[3]+0xFFFFFF80u; // 801D3260
  c->r[5]=R8(c->r[4]+0x00000004u); // 801D3264
  c->r[3]=R8(c->r[4]+0x00000005u); // 801D3268
  c->r[6]=c->r[6]+0xFFFFFF80u; // 801D326C
  c->r[5]=c->r[5]+0xFFFFFF80u; // 801D3270
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D3274
  c->r[0]=c->r[3]+0xFFFFFF80u; // 801D3278
  W8(c->r[4]+0x00000003u,c->r[6]); // 801D327C
  W8(c->r[4]+0x00000004u,c->r[5]); // 801D3280
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D3284
  return; // 801D3288
}

// SPEC1_MakeStatus
void f_801D328C(Ctx* __restrict c) {
  trace_call(0x801D328Cu);
  c->r[0]=0u+0x00000000u; // 801D328C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D3290
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3294
  c->r[3]=rotl(c->r[3],9)&0x00000001u; // 801D3298
  c->r[7]=0u-c->r[3]; // 801D329C
  c->r[3]=rotl(c->r[7],0)&0x00000100u; // 801D32A0
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D32A4
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D32A8
  c->r[3]=rotl(c->r[3],8)&0x00000001u; // 801D32AC
  c->r[3]=0u-c->r[3]; // 801D32B0
  c->r[6]=rotl(c->r[3],0)&0x00000200u; // 801D32B4
  c->r[6]=(rotl(c->r[7],0)&0x00000100u)|(c->r[6]&~0x00000100u); // 801D32B8
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D32BC
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D32C0
  c->r[3]=rotl(c->r[3],11)&0x00000001u; // 801D32C4
  c->r[3]=0u-c->r[3]; // 801D32C8
  c->r[6]=(rotl(c->r[3],0)&0x00000400u)|(c->r[6]&~0x00000400u); // 801D32CC
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D32D0
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D32D4
  c->r[3]=rotl(c->r[3],12)&0x00000001u; // 801D32D8
  c->r[3]=0u-c->r[3]; // 801D32DC
  c->r[6]=(rotl(c->r[3],0)&0x00000800u)|(c->r[6]&~0x00000800u); // 801D32E0
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D32E4
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D32E8
  c->r[3]=rotl(c->r[3],7)&0x00000001u; // 801D32EC
  c->r[3]=0u-c->r[3]; // 801D32F0
  c->r[6]=(rotl(c->r[3],0)&0x00001000u)|(c->r[6]&~0x00001000u); // 801D32F4
  W16(c->r[4]+0x00000000u,c->r[6]); // 801D32F8
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D32FC
  c->r[3]=rotl(c->r[3],16)&0x0000FFFFu; // 801D3300
  W8(c->r[4]+0x00000002u,c->r[3]); // 801D3304
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D3308
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 801D330C
  W8(c->r[4]+0x00000003u,c->r[3]); // 801D3310
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D3314
  W8(c->r[4]+0x00000004u,c->r[3]); // 801D3318
  c->r[3]=R32(c->r[5]+0x00000004u); // 801D331C
  c->r[3]=rotl(c->r[3],24)&0x00FFFFFFu; // 801D3320
  W8(c->r[4]+0x00000005u,c->r[3]); // 801D3324
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3328
  c->r[3]=rotl(c->r[3],24)&0x000000FFu; // 801D332C
  W8(c->r[4]+0x00000006u,c->r[3]); // 801D3330
  cmpu(c,0,c->r[3],0x000000AAu); // 801D3334
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D3338
  W8(c->r[4]+0x00000007u,c->r[3]); // 801D333C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3340
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D3344
  if (crb(c,0)) { goto L_801D3358; } // 801D3348
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 801D334C
  c->r[0]=c->r[0]|0x00000040u; // 801D3350
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D3354
L_801D3358:;
  c->r[0]=R8(c->r[4]+0x00000007u); // 801D3358
  cmpu(c,0,c->r[0],0x000000AAu); // 801D335C
  if (crb(c,0)) { goto L_801D3370; } // 801D3360
  c->r[0]=R16(c->r[4]+0x00000000u); // 801D3364
  c->r[0]=c->r[0]|0x00000020u; // 801D3368
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D336C
L_801D3370:;
  c->r[3]=R8(c->r[4]+0x00000002u); // 801D3370
  c->r[6]=R8(c->r[4]+0x00000003u); // 801D3374
  c->r[0]=c->r[3]+0xFFFFFF80u; // 801D3378
  c->r[5]=R8(c->r[4]+0x00000004u); // 801D337C
  c->r[3]=R8(c->r[4]+0x00000005u); // 801D3380
  c->r[6]=c->r[6]+0xFFFFFF80u; // 801D3384
  c->r[5]=c->r[5]+0xFFFFFF80u; // 801D3388
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D338C
  c->r[0]=c->r[3]+0xFFFFFF80u; // 801D3390
  W8(c->r[4]+0x00000003u,c->r[6]); // 801D3394
  W8(c->r[4]+0x00000004u,c->r[5]); // 801D3398
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D339C
  return; // 801D33A0
}

// fn_801D33A4
void f_801D33A4(Ctx* __restrict c) {
  trace_call(0x801D33A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D33A4
  c->r[0]=c->lr; // 801D33A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D33AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D33B0
  c->r[31]=0u+0x80570000u; // 801D33B4
  c->r[31]=c->r[31]+0xFFFFF510u; // 801D33B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D33BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D33C0
  c->r[29]=c->r[4]|c->r[4]; // 801D33C4
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D33C8
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801D33CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D33D0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D33D4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 801D33D8
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D33DC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D33E0
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D33E4
  c->r[0]=R32(c->r[13]+0xFFFF84DCu); // 801D33E8
  c->r[0]=rotl(c->r[0],0)&0x00000700u; // 801D33EC
  cmps(c,0,(int32_t)c->r[0],1024); // 801D33F0
  if (crb(c,2)) { goto L_801D356C; } // 801D33F4
  if (!crb(c,0)) { goto L_801D342C; } // 801D33F8
  cmps(c,0,(int32_t)c->r[0],512); // 801D33FC
  if (crb(c,2)) { goto L_801D34E8; } // 801D3400
  if (!crb(c,0)) { goto L_801D3420; } // 801D3404
  cmps(c,0,(int32_t)c->r[0],256); // 801D3408
  if (crb(c,2)) { goto L_801D349C; } // 801D340C
  if (!crb(c,0)) { goto L_801D35A4; } // 801D3410
  cmps(c,0,(int32_t)c->r[0],0); // 801D3414
  if (crb(c,2)) { goto L_801D3450; } // 801D3418
  goto L_801D35A4; // 801D341C
L_801D3420:;
  cmps(c,0,(int32_t)c->r[0],768); // 801D3420
  if (crb(c,2)) { goto L_801D3530; } // 801D3424
  goto L_801D35A4; // 801D3428
L_801D342C:;
  cmps(c,0,(int32_t)c->r[0],1536); // 801D342C
  if (crb(c,2)) { goto L_801D3450; } // 801D3430
  if (!crb(c,0)) { goto L_801D3444; } // 801D3434
  cmps(c,0,(int32_t)c->r[0],1280); // 801D3438
  if (crb(c,2)) { goto L_801D3450; } // 801D343C
  goto L_801D35A4; // 801D3440
L_801D3444:;
  cmps(c,0,(int32_t)c->r[0],1792); // 801D3444
  if (crb(c,2)) { goto L_801D3450; } // 801D3448
  goto L_801D35A4; // 801D344C
L_801D3450:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3450
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801D3454
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D3458
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D345C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D3460
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D3464
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3468
  c->r[0]=rotl(c->r[0],24)&0x000000F0u; // 801D346C
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D3470
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3474
  c->r[0]=rotl(c->r[0],28)&0x000000F0u; // 801D3478
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D347C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3480
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 801D3484
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3488
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D348C
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 801D3490
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D3494
  goto L_801D35A4; // 801D3498
L_801D349C:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D349C
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 801D34A0
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D34A4
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34A8
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 801D34AC
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D34B0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34B4
  c->r[0]=rotl(c->r[0],16)&0x000000FFu; // 801D34B8
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D34BC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34C0
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D34C4
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D34C8
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34CC
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 801D34D0
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D34D4
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34D8
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 801D34DC
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D34E0
  goto L_801D35A4; // 801D34E4
L_801D34E8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34E8
  c->r[0]=rotl(c->r[0],8)&0x000000F0u; // 801D34EC
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D34F0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D34F4
  c->r[0]=rotl(c->r[0],12)&0x000000F0u; // 801D34F8
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D34FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3500
  c->r[0]=rotl(c->r[0],16)&0x000000F0u; // 801D3504
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D3508
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D350C
  c->r[0]=rotl(c->r[0],20)&0x000000F0u; // 801D3510
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D3514
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3518
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D351C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3520
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3524
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D3528
  goto L_801D35A4; // 801D352C
L_801D3530:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 801D3530
  c->r[0]=0u+0x00000000u; // 801D3534
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 801D3538
  W8(c->r[4]+0x00000004u,c->r[6]); // 801D353C
  c->r[6]=R32(c->r[5]+0x00000004u); // 801D3540
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 801D3544
  W8(c->r[4]+0x00000005u,c->r[6]); // 801D3548
  c->r[6]=R32(c->r[5]+0x00000004u); // 801D354C
  c->r[6]=rotl(c->r[6],24)&0x000000FFu; // 801D3550
  W8(c->r[4]+0x00000006u,c->r[6]); // 801D3554
  c->r[5]=R32(c->r[5]+0x00000004u); // 801D3558
  W8(c->r[4]+0x00000007u,c->r[5]); // 801D355C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3560
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D3564
  goto L_801D35A4; // 801D3568
L_801D356C:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 801D356C
  c->r[0]=0u+0x00000000u; // 801D3570
  c->r[6]=rotl(c->r[6],8)&0x000000FFu; // 801D3574
  W8(c->r[4]+0x00000004u,c->r[6]); // 801D3578
  c->r[6]=R32(c->r[5]+0x00000004u); // 801D357C
  c->r[6]=rotl(c->r[6],16)&0x0000FFFFu; // 801D3580
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D3584
  W8(c->r[4]+0x00000005u,c->r[6]); // 801D3588
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D358C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D3590
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D3594
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D3598
  c->r[0]=R32(c->r[5]+0x00000004u); // 801D359C
  W8(c->r[4]+0x00000009u,c->r[0]); // 801D35A0
L_801D35A4:;
  c->r[6]=R8(c->r[4]+0x00000002u); // 801D35A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D35A8
  c->r[8]=R8(c->r[4]+0x00000003u); // 801D35AC
  c->r[5]=c->r[31]+0x00000030u; // 801D35B0
  c->r[9]=c->r[6]+0xFFFFFF80u; // 801D35B4
  c->r[7]=R8(c->r[4]+0x00000004u); // 801D35B8
  c->r[6]=R8(c->r[4]+0x00000005u); // 801D35BC
  c->r[8]=c->r[8]+0xFFFFFF80u; // 801D35C0
  c->r[7]=c->r[7]+0xFFFFFF80u; // 801D35C4
  W8(c->r[4]+0x00000002u,c->r[9]); // 801D35C8
  c->r[6]=c->r[6]+0xFFFFFF80u; // 801D35CC
  W8(c->r[4]+0x00000003u,c->r[8]); // 801D35D0
  W8(c->r[4]+0x00000004u,c->r[7]); // 801D35D4
  W8(c->r[4]+0x00000005u,c->r[6]); // 801D35D8
  c->r[0]=R32(c->r[5]+c->r[0]); // 801D35DC
  c->r[5]=rotl(c->r[0],0)&0xFFFF0000u; // 801D35E0
  c->r[0]=c->r[5]+0xF7000000u; // 801D35E4
  cmpu(c,0,c->r[0],0x00000000u); // 801D35E8
  if (!crb(c,2)) { goto L_801D3630; } // 801D35EC
  c->r[0]=R16(c->r[4]+0x00000000u); // 801D35F0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 801D35F4
  c->r[0]=c->r[0]^0x00000080u; // 801D35F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D35FC
  if (crb(c,2)) { goto L_801D3630; } // 801D3600
  c->r[0]=0u+0x80000000u; // 801D3604
  c->r[5]=R32(c->r[13]+0xFFFF9F44u); // 801D3608
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 801D360C
  c->r[3]=c->r[5]|c->r[3]; // 801D3610
  c->r[0]=0u+0x00000000u; // 801D3614
  W32(c->r[13]+0xFFFF9F44u,c->r[3]); // 801D3618
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D361C
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D3620
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D3624
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D3628
  goto L_801D3908; // 801D362C
L_801D3630:;
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D3630
  c->r[0]=c->r[31]+0x00000000u; // 801D3634
  c->r[6]=0u+0x80000000u; // 801D3638
  c->r[7]=R32(c->r[13]+0xFFFF9F44u); // 801D363C
  c->r[5]=c->r[0]+c->r[30]; // 801D3640
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[6]>>((c->r[3])&31)); // 801D3644
  c->r[0]=c->r[7]&~c->r[0]; // 801D3648
  c->r[8]=R8(c->r[5]+0x00000002u); // 801D364C
  W32(c->r[13]+0xFFFF9F44u,c->r[0]); // 801D3650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[0]); // 801D3654
  c->r[6]=R8(c->r[4]+0x00000002u); // 801D3658
  if (!crb(c,1)) { goto L_801D367C; } // 801D365C
  c->r[3]=c->r[8]+0xFFFFFF80u; // 801D3660
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3664
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3668
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D366C
  if (!crb(c,0)) { goto L_801D3698; } // 801D3670
  c->r[6]=c->r[3]|c->r[3]; // 801D3674
  goto L_801D3698; // 801D3678
L_801D367C:;
  if (!crb(c,0)) { goto L_801D3698; } // 801D367C
  c->r[3]=c->r[8]+0x0000007Fu; // 801D3680
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3684
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3688
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D368C
  if (!crb(c,0)) { goto L_801D3698; } // 801D3690
  c->r[6]=c->r[3]|c->r[3]; // 801D3694
L_801D3698:;
  c->r[0]=c->r[6]-c->r[8]; // 801D3698
  c->r[6]=R8(c->r[4]+0x00000003u); // 801D369C
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D36A0
  c->r[7]=R8(c->r[5]+0x00000003u); // 801D36A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801D36A8
  if (!crb(c,1)) { goto L_801D36CC; } // 801D36AC
  c->r[3]=c->r[7]+0xFFFFFF80u; // 801D36B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D36B4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D36B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D36BC
  if (!crb(c,0)) { goto L_801D36E8; } // 801D36C0
  c->r[6]=c->r[3]|c->r[3]; // 801D36C4
  goto L_801D36E8; // 801D36C8
L_801D36CC:;
  if (!crb(c,0)) { goto L_801D36E8; } // 801D36CC
  c->r[3]=c->r[7]+0x0000007Fu; // 801D36D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D36D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D36D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D36DC
  if (!crb(c,0)) { goto L_801D36E8; } // 801D36E0
  c->r[6]=c->r[3]|c->r[3]; // 801D36E4
L_801D36E8:;
  c->r[0]=c->r[6]-c->r[7]; // 801D36E8
  c->r[6]=R8(c->r[4]+0x00000004u); // 801D36EC
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D36F0
  c->r[7]=R8(c->r[5]+0x00000004u); // 801D36F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801D36F8
  if (!crb(c,1)) { goto L_801D371C; } // 801D36FC
  c->r[3]=c->r[7]+0xFFFFFF80u; // 801D3700
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3704
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3708
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D370C
  if (!crb(c,0)) { goto L_801D3738; } // 801D3710
  c->r[6]=c->r[3]|c->r[3]; // 801D3714
  goto L_801D3738; // 801D3718
L_801D371C:;
  if (!crb(c,0)) { goto L_801D3738; } // 801D371C
  c->r[3]=c->r[7]+0x0000007Fu; // 801D3720
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3724
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3728
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D372C
  if (!crb(c,0)) { goto L_801D3738; } // 801D3730
  c->r[6]=c->r[3]|c->r[3]; // 801D3734
L_801D3738:;
  c->r[0]=c->r[6]-c->r[7]; // 801D3738
  c->r[6]=R8(c->r[4]+0x00000005u); // 801D373C
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D3740
  c->r[7]=R8(c->r[5]+0x00000005u); // 801D3744
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801D3748
  if (!crb(c,1)) { goto L_801D376C; } // 801D374C
  c->r[3]=c->r[7]+0xFFFFFF80u; // 801D3750
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3754
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3758
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D375C
  if (!crb(c,0)) { goto L_801D3788; } // 801D3760
  c->r[6]=c->r[3]|c->r[3]; // 801D3764
  goto L_801D3788; // 801D3768
L_801D376C:;
  if (!crb(c,0)) { goto L_801D3788; } // 801D376C
  c->r[3]=c->r[7]+0x0000007Fu; // 801D3770
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3774
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3778
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D377C
  if (!crb(c,0)) { goto L_801D3788; } // 801D3780
  c->r[6]=c->r[3]|c->r[3]; // 801D3784
L_801D3788:;
  c->r[0]=c->r[6]-c->r[7]; // 801D3788
  c->r[3]=R8(c->r[4]+0x00000006u); // 801D378C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D3790
  c->r[0]=R8(c->r[5]+0x00000006u); // 801D3794
  cmpu(c,0,c->r[3],c->r[0]); // 801D3798
  if (!crb(c,0)) { goto L_801D37A4; } // 801D379C
  c->r[3]=c->r[0]|c->r[0]; // 801D37A0
L_801D37A4:;
  c->r[0]=c->r[3]-c->r[0]; // 801D37A4
  c->r[3]=R8(c->r[4]+0x00000007u); // 801D37A8
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D37AC
  c->r[0]=R8(c->r[5]+0x00000007u); // 801D37B0
  cmpu(c,0,c->r[3],c->r[0]); // 801D37B4
  if (!crb(c,0)) { goto L_801D37C0; } // 801D37B8
  c->r[3]=c->r[0]|c->r[0]; // 801D37BC
L_801D37C0:;
  c->r[0]=c->r[3]-c->r[0]; // 801D37C0
  c->r[5]=c->r[31]+0x00000050u; // 801D37C4
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D37C8
  c->r[3]=c->r[5]+c->r[30]; // 801D37CC
  c->r[6]=R8(c->r[4]+0x00000002u); // 801D37D0
  c->r[7]=R8(c->r[3]+0x00000002u); // 801D37D4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D37D8
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801D37DC
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[7]); // 801D37E0
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[6]); // 801D37E4
  c->r[6]=c->r[6]-c->r[7]; // 801D37E8
  c->r[7]=sraw(c,c->r[6],31); // 801D37EC
  c->r[6]=c->r[7]^c->r[6]; // 801D37F0
  c->r[6]=c->r[6]-c->r[7]; // 801D37F4
  cmps(c,0,(int32_t)c->r[6],9); // 801D37F8
  if (!crb(c,0)) { goto L_801D38F0; } // 801D37FC
  c->r[6]=R8(c->r[3]+0x00000003u); // 801D3800
  c->r[8]=R8(c->r[4]+0x00000003u); // 801D3804
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3808
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D380C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[7]); // 801D3810
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[6]); // 801D3814
  c->r[6]=c->r[6]-c->r[7]; // 801D3818
  c->r[7]=sraw(c,c->r[6],31); // 801D381C
  c->r[6]=c->r[7]^c->r[6]; // 801D3820
  c->r[6]=c->r[6]-c->r[7]; // 801D3824
  cmps(c,0,(int32_t)c->r[6],9); // 801D3828
  if (!crb(c,0)) { goto L_801D38F0; } // 801D382C
  c->r[6]=R8(c->r[3]+0x00000004u); // 801D3830
  c->r[8]=R8(c->r[4]+0x00000004u); // 801D3834
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3838
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D383C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[7]); // 801D3840
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[6]); // 801D3844
  c->r[6]=c->r[6]-c->r[7]; // 801D3848
  c->r[7]=sraw(c,c->r[6],31); // 801D384C
  c->r[6]=c->r[7]^c->r[6]; // 801D3850
  c->r[6]=c->r[6]-c->r[7]; // 801D3854
  cmps(c,0,(int32_t)c->r[6],9); // 801D3858
  if (!crb(c,0)) { goto L_801D38F0; } // 801D385C
  c->r[6]=R8(c->r[3]+0x00000005u); // 801D3860
  c->r[8]=R8(c->r[4]+0x00000005u); // 801D3864
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D3868
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D386C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[7]); // 801D3870
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[6]); // 801D3874
  c->r[6]=c->r[6]-c->r[7]; // 801D3878
  c->r[7]=sraw(c,c->r[6],31); // 801D387C
  c->r[6]=c->r[7]^c->r[6]; // 801D3880
  c->r[6]=c->r[6]-c->r[7]; // 801D3884
  cmps(c,0,(int32_t)c->r[6],9); // 801D3888
  if (!crb(c,0)) { goto L_801D38F0; } // 801D388C
  c->r[6]=R8(c->r[3]+0x00000006u); // 801D3890
  c->r[8]=R8(c->r[4]+0x00000006u); // 801D3894
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[6]); // 801D3898
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[8]); // 801D389C
  c->r[6]=c->r[6]-c->r[7]; // 801D38A0
  c->r[7]=sraw(c,c->r[6],31); // 801D38A4
  c->r[6]=c->r[7]^c->r[6]; // 801D38A8
  c->r[6]=c->r[6]-c->r[7]; // 801D38AC
  cmps(c,0,(int32_t)c->r[6],9); // 801D38B0
  if (!crb(c,0)) { goto L_801D38F0; } // 801D38B4
  c->r[3]=R8(c->r[3]+0x00000007u); // 801D38B8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D38BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 801D38C0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[3]); // 801D38C4
  c->r[0]=c->r[0]-c->r[3]; // 801D38C8
  c->r[3]=sraw(c,c->r[0],31); // 801D38CC
  c->r[0]=c->r[3]^c->r[0]; // 801D38D0
  c->r[0]=c->r[0]-c->r[3]; // 801D38D4
  cmps(c,0,(int32_t)c->r[0],9); // 801D38D8
  if (!crb(c,0)) { goto L_801D38F0; } // 801D38DC
  c->r[3]=R16(c->r[4]+0x00000000u); // 801D38E0
  c->r[0]=R16(c->r[5]+c->r[30]); // 801D38E4
  cmpu(c,0,c->r[3],c->r[0]); // 801D38E8
  if (crb(c,2)) { goto L_801D38F4; } // 801D38EC
L_801D38F0:;
  c->lr=0x801D38F4u; f_801CFFD8(c); // 801D38F0
L_801D38F4:;
  c->r[0]=c->r[31]+0x00000050u; // 801D38F4
  c->r[4]=c->r[29]|c->r[29]; // 801D38F8
  c->r[3]=c->r[0]+c->r[30]; // 801D38FC
  c->r[5]=0u+0x0000000Cu; // 801D3900
  c->lr=0x801D3908u; f_80004338(c); // 801D3904
L_801D3908:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3908
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D390C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3910
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3914
  c->lr=c->r[0]; // 801D3918
  c->r[1]=c->r[1]+0x00000020u; // 801D391C
  return; // 801D3920
}

// OnShutdown_801D3924
void f_801D3924(Ctx* __restrict c) {
  trace_call(0x801D3924u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3924
  c->r[0]=c->lr; // 801D3928
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D392C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3930
  c->r[31]=c->r[3]|c->r[3]; // 801D3934
  c->r[0]=R32(c->r[13]+0xFFFF9F3Cu); // 801D3938
  cmps(c,0,(int32_t)c->r[0],0); // 801D393C
  if (crb(c,2)) { goto L_801D3958; } // 801D3940
  c->r[0]=0u+0x00000000u; // 801D3944
  c->r[3]=0u+0x801D0000u; // 801D3948
  W32(c->r[13]+0xFFFF9F3Cu,c->r[0]); // 801D394C
  c->r[3]=c->r[3]+0x000039ECu; // 801D3950
  c->lr=0x801D3958u; f_801F9ADC(c); // 801D3954
L_801D3958:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D3958
  if (!crb(c,2)) { goto L_801D39CC; } // 801D395C
  c->r[0]=R32(c->r[13]+0xFFFF9F58u); // 801D3960
  c->r[31]=0u+0x00000000u; // 801D3964
  c->r[3]=0u+0x00000000u; // 801D3968
  cmps(c,0,(int32_t)c->r[0],0); // 801D396C
  if (!crb(c,2)) { goto L_801D3984; } // 801D3970
  c->r[0]=R32(c->r[13]+0xFFFF84D4u); // 801D3974
  cmps(c,0,(int32_t)c->r[0],32); // 801D3978
  if (!crb(c,2)) { goto L_801D3984; } // 801D397C
  c->r[3]=0u+0x00000001u; // 801D3980
L_801D3984:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D3984
  if (crb(c,2)) { goto L_801D399C; } // 801D3988
  c->lr=0x801D3990u; f_801F9330(c); // 801D398C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3990
  if (!crb(c,2)) { goto L_801D399C; } // 801D3994
  c->r[31]=0u+0x00000001u; // 801D3998
L_801D399C:;
  c->r[0]=R32(c->r[13]+0xFFFF9F38u); // 801D399C
  cmps(c,0,(int32_t)c->r[0],0); // 801D39A0
  if (!crb(c,2)) { goto L_801D39C4; } // 801D39A4
  cmps(c,0,(int32_t)c->r[31],0); // 801D39A8
  if (crb(c,2)) { goto L_801D39C4; } // 801D39AC
  c->r[3]=0u+0xF0000000u; // 801D39B0
  c->lr=0x801D39B8u; f_801D2C2C(c); // 801D39B4
  W32(c->r[13]+0xFFFF9F38u,c->r[3]); // 801D39B8
  c->r[3]=0u+0x00000000u; // 801D39BC
  goto L_801D39D8; // 801D39C0
L_801D39C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D39C4
  goto L_801D39D8; // 801D39C8
L_801D39CC:;
  c->r[0]=0u+0x00000000u; // 801D39CC
  c->r[3]=0u+0x00000001u; // 801D39D0
  W32(c->r[13]+0xFFFF9F38u,c->r[0]); // 801D39D4
L_801D39D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D39D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D39DC
  c->lr=c->r[0]; // 801D39E0
  c->r[1]=c->r[1]+0x00000010u; // 801D39E4
  return; // 801D39E8
}

// SamplingHandler
void f_801D39EC(Ctx* __restrict c) {
  trace_call(0x801D39ECu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D39EC
  c->r[0]=c->lr; // 801D39F0
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801D39F4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801D39F8
  c->r[31]=c->r[4]|c->r[4]; // 801D39FC
  c->r[0]=R32(c->r[13]+0xFFFF9F3Cu); // 801D3A00
  cmps(c,0,(int32_t)c->r[0],0); // 801D3A04
  if (crb(c,2)) { goto L_801D3A38; } // 801D3A08
  c->r[3]=c->r[1]+0x00000008u; // 801D3A0C
  c->lr=0x801D3A14u; f_801BAFF0(c); // 801D3A10
  c->r[3]=c->r[1]+0x00000008u; // 801D3A14
  c->lr=0x801D3A1Cu; f_801BADC8(c); // 801D3A18
  c->r[12]=R32(c->r[13]+0xFFFF9F3Cu); // 801D3A1C
  c->ctr=c->r[12]; // 801D3A20
  if (true) { c->lr=0x801D3A28u; dispatch(c,c->ctr); } // 801D3A24
  c->r[3]=c->r[1]+0x00000008u; // 801D3A28
  c->lr=0x801D3A30u; f_801BAFF0(c); // 801D3A2C
  c->r[3]=c->r[31]|c->r[31]; // 801D3A30
  c->lr=0x801D3A38u; f_801BADC8(c); // 801D3A34
L_801D3A38:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801D3A38
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801D3A3C
  c->lr=c->r[0]; // 801D3A40
  c->r[1]=c->r[1]+0x000002E0u; // 801D3A44
  return; // 801D3A48
}

// __PADDisableRecalibration
void f_801D3A4C(Ctx* __restrict c) {
  trace_call(0x801D3A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3A4C
  c->r[0]=c->lr; // 801D3A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3A58
  c->r[31]=c->r[3]|c->r[3]; // 801D3A5C
  c->lr=0x801D3A64u; f_801BE74C(c); // 801D3A60
  c->r[5]=0u+0x80000000u; // 801D3A64
  cmps(c,0,(int32_t)c->r[31],0); // 801D3A68
  c->r[4]=R8(c->r[5]+0x000030E3u); // 801D3A6C
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFBFu; // 801D3A70
  c->r[31]=rotl(c->r[4],26)&0x00000001u; // 801D3A74
  W8(c->r[5]+0x000030E3u,c->r[0]); // 801D3A78
  if (crb(c,2)) { goto L_801D3A8C; } // 801D3A7C
  c->r[0]=R8(c->r[5]+0x000030E3u); // 801D3A80
  c->r[0]=c->r[0]|0x00000040u; // 801D3A84
  W8(c->r[5]+0x000030E3u,c->r[0]); // 801D3A88
L_801D3A8C:;
  c->lr=0x801D3A90u; f_801BE774(c); // 801D3A8C
  c->r[3]=c->r[31]|c->r[31]; // 801D3A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3A98
  c->lr=c->r[0]; // 801D3A9C
  c->r[1]=c->r[1]+0x00000010u; // 801D3AA0
  return; // 801D3AA4
}

void hle_AIRegisterDMACallback(Ctx*);
// AIRegisterDMACallback
void f_801D3AA8(Ctx* __restrict c) {
  hle_AIRegisterDMACallback(c);
}

void hle_AIInitDMA(Ctx*);
// AIInitDMA
void f_801D3AEC(Ctx* __restrict c) {
  hle_AIInitDMA(c);
}

void hle_AIStartDMA(Ctx*);
// AIStartDMA
void f_801D3B68(Ctx* __restrict c) {
  hle_AIStartDMA(c);
}

// AIStopDMA
void f_801D3B7C(Ctx* __restrict c) {
  trace_call(0x801D3B7Cu);
  c->r[3]=0u+0xCC000000u; // 801D3B7C
  c->r[0]=R16(c->r[3]+0x00005036u); // 801D3B80
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801D3B84
  W16(c->r[3]+0x00005036u,c->r[0]); // 801D3B88
  return; // 801D3B8C
}

// AIGetDMABytesLeft
void f_801D3B90(Ctx* __restrict c) {
  stub_log(0x801D3B90u); c->r[3]=0; return;
}

// fn_801D3BA0
void f_801D3BA0(Ctx* __restrict c) {
  trace_call(0x801D3BA0u);
  c->r[3]=R32(c->r[13]+0xFFFF9F68u); // 801D3BA0
  return; // 801D3BA4
}

// AIInit
void f_801D3BA8(Ctx* __restrict c) {
  trace_call(0x801D3BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3BA8
  c->r[0]=c->lr; // 801D3BAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3BB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3BB4
  c->r[31]=c->r[3]|c->r[3]; // 801D3BB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3BBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3BC0
  c->r[0]=R32(c->r[13]+0xFFFF9F68u); // 801D3BC4
  cmps(c,0,(int32_t)c->r[0],1); // 801D3BC8
  if (crb(c,2)) { goto L_801D3D0C; } // 801D3BCC
  c->r[3]=R32(c->r[13]+0xFFFF84F0u); // 801D3BD0
  c->lr=0x801D3BD8u; f_801B96A0(c); // 801D3BD4
  c->r[3]=0u+0x80000000u; // 801D3BD8
  c->r[4]=0u+0x431C0000u; // 801D3BDC
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801D3BE0
  c->r[7]=0u+0x00000000u; // 801D3BE4
  c->r[5]=0u+0x10620000u; // 801D3BE8
  c->r[4]=c->r[4]+0xFFFFDE83u; // 801D3BEC
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D3BF0
  c->r[3]=0u+0x00010000u; // 801D3BF4
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 801D3BF8
  c->r[9]=c->r[5]+0x00004DD3u; // 801D3BFC
  c->r[0]=c->r[3]+0xFFFFA428u; // 801D3C00
  W32(c->r[13]+0xFFFF9F90u,c->r[7]); // 801D3C04
  c->r[4]=c->r[3]+0xFFFFA410u; // 801D3C08
  c->r[3]=c->r[3]+0xFFFFF618u; // 801D3C0C
  c->r[10]=rotl(c->r[6],17)&0x0001FFFFu; // 801D3C10
  W32(c->r[13]+0xFFFF9F88u,c->r[7]); // 801D3C14
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 801D3C18
  c->r[30]=0u+0xCD000000u; // 801D3C1C
  W32(c->r[13]+0xFFFF9F80u,c->r[7]); // 801D3C20
  c->r[0]=0u+0xFFFFFFEAu; // 801D3C24
  W32(c->r[13]+0xFFFF9F78u,c->r[7]); // 801D3C28
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[4]); // 801D3C2C
  W32(c->r[13]+0xFFFF9F70u,c->r[7]); // 801D3C30
  c->r[4]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[3]); // 801D3C34
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)31524); // 801D3C38
  c->r[3]=(uint32_t)((int32_t)c->r[10]*(int32_t)3000); // 801D3C3C
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[8])>>32); // 801D3C40
  c->r[6]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[6])>>32); // 801D3C44
  c->r[8]=rotl(c->r[8],23)&0x007FFFFFu; // 801D3C48
  W32(c->r[13]+0xFFFF9F94u,c->r[8]); // 801D3C4C
  c->r[5]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[5])>>32); // 801D3C50
  c->r[6]=rotl(c->r[6],23)&0x007FFFFFu; // 801D3C54
  W32(c->r[13]+0xFFFF9F8Cu,c->r[6]); // 801D3C58
  c->r[4]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[4])>>32); // 801D3C5C
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 801D3C60
  W32(c->r[13]+0xFFFF9F84u,c->r[5]); // 801D3C64
  c->r[3]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[3])>>32); // 801D3C68
  c->r[4]=rotl(c->r[4],23)&0x007FFFFFu; // 801D3C6C
  W32(c->r[13]+0xFFFF9F7Cu,c->r[4]); // 801D3C70
  c->r[3]=rotl(c->r[3],23)&0x007FFFFFu; // 801D3C74
  W32(c->r[13]+0xFFFF9F74u,c->r[3]); // 801D3C78
  c->r[3]=R32(c->r[30]+0x00006C00u); // 801D3C7C
  c->r[0]=c->r[3]&c->r[0]; // 801D3C80
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801D3C84
  W32(c->r[30]+0x00006C04u,c->r[7]); // 801D3C88
  W32(c->r[30]+0x00006C0Cu,c->r[7]); // 801D3C8C
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801D3C90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801D3C94
  c->r[0]=c->r[0]|0x00000020u; // 801D3C98
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801D3C9C
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801D3CA0
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 801D3CA4
  c->r[0]=c->r[0]^0x00000001u; // 801D3CA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D3CAC
  if (crb(c,2)) { goto L_801D3CE0; } // 801D3CB0
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801D3CB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801D3CB8
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801D3CBC
  c->lr=0x801D3CC4u; f_801BE74C(c); // 801D3CC0
  c->r[29]=c->r[3]|c->r[3]; // 801D3CC4
  c->lr=0x801D3CCCu; f_801D3E34(c); // 801D3CC8
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801D3CCC
  c->r[3]=c->r[29]|c->r[29]; // 801D3CD0
  c->r[0]=c->r[0]|0x00000040u; // 801D3CD4
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801D3CD8
  c->lr=0x801D3CE0u; f_801BE774(c); // 801D3CDC
L_801D3CE0:;
  c->r[0]=0u+0x00000000u; // 801D3CE0
  c->r[4]=0u+0x801D0000u; // 801D3CE4
  W32(c->r[13]+0xFFFF9FA0u,c->r[0]); // 801D3CE8
  c->r[4]=c->r[4]+0x00003D28u; // 801D3CEC
  c->r[3]=0u+0x00000005u; // 801D3CF0
  W32(c->r[13]+0xFFFF9F9Cu,c->r[31]); // 801D3CF4
  c->lr=0x801D3CFCu; f_801BE798(c); // 801D3CF8
  c->r[3]=0u+0x04000000u; // 801D3CFC
  c->lr=0x801D3D04u; f_801BEB5C(c); // 801D3D00
  c->r[0]=0u+0x00000001u; // 801D3D04
  W32(c->r[13]+0xFFFF9F68u,c->r[0]); // 801D3D08
L_801D3D0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3D0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3D10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3D14
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3D18
  c->lr=c->r[0]; // 801D3D1C
  c->r[1]=c->r[1]+0x00000020u; // 801D3D20
  return; // 801D3D24
}

// __AIDHandler
void f_801D3D28(Ctx* __restrict c) {
  trace_call(0x801D3D28u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D28
  c->r[0]=c->lr; // 801D3D2C
  c->r[6]=0u+0xCC000000u; // 801D3D30
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801D3D34
  c->r[0]=0u+0xFFFFFF5Fu; // 801D3D38
  c->r[3]=c->r[1]+0x00000008u; // 801D3D3C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801D3D40
  c->r[31]=c->r[4]|c->r[4]; // 801D3D44
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801D3D48
  c->r[0]=c->r[5]&c->r[0]; // 801D3D4C
  c->r[0]=c->r[0]|0x00000008u; // 801D3D50
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801D3D54
  c->lr=0x801D3D5Cu; f_801BAFF0(c); // 801D3D58
  c->r[3]=c->r[1]+0x00000008u; // 801D3D5C
  c->lr=0x801D3D64u; f_801BADC8(c); // 801D3D60
  c->r[3]=R32(c->r[13]+0xFFFF9FA0u); // 801D3D64
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D68
  if (crb(c,2)) { goto L_801D3DAC; } // 801D3D6C
  c->r[0]=R32(c->r[13]+0xFFFF9F6Cu); // 801D3D70
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D74
  if (!crb(c,2)) { goto L_801D3DAC; } // 801D3D78
  c->r[0]=R32(c->r[13]+0xFFFF9F9Cu); // 801D3D7C
  c->r[4]=0u+0x00000001u; // 801D3D80
  W32(c->r[13]+0xFFFF9F6Cu,c->r[4]); // 801D3D84
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D88
  if (crb(c,2)) { goto L_801D3D98; } // 801D3D8C
  c->lr=0x801D3D94u; f_801D3DD0(c); // 801D3D90
  goto L_801D3DA4; // 801D3D94
L_801D3D98:;
  c->r[12]=c->r[3]|c->r[3]; // 801D3D98
  c->ctr=c->r[12]; // 801D3D9C
  if (true) { c->lr=0x801D3DA4u; dispatch(c,c->ctr); } // 801D3DA0
L_801D3DA4:;
  c->r[0]=0u+0x00000000u; // 801D3DA4
  W32(c->r[13]+0xFFFF9F6Cu,c->r[0]); // 801D3DA8
L_801D3DAC:;
  c->r[3]=c->r[1]+0x00000008u; // 801D3DAC
  c->lr=0x801D3DB4u; f_801BAFF0(c); // 801D3DB0
  c->r[3]=c->r[31]|c->r[31]; // 801D3DB4
  c->lr=0x801D3DBCu; f_801BADC8(c); // 801D3DB8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801D3DBC
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801D3DC0
  c->lr=c->r[0]; // 801D3DC4
  c->r[1]=c->r[1]+0x000002E0u; // 801D3DC8
  return; // 801D3DCC
}

// __AICallbackStackSwitch
void f_801D3DD0(Ctx* __restrict c) {
  trace_call(0x801D3DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3DD0
  c->r[0]=c->lr; // 801D3DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3DDC
  c->r[31]=c->r[1]|c->r[1]; // 801D3DE0
  c->r[31]=c->r[3]|c->r[3]; // 801D3DE4
  c->r[5]=0u+0x806D0000u; // 801D3DE8
  c->r[5]=c->r[5]+0x00004518u; // 801D3DEC
  W32(c->r[5]+0x00000000u,c->r[1]); // 801D3DF0
  c->r[5]=0u+0x806D0000u; // 801D3DF4
  c->r[5]=c->r[5]+0x0000451Cu; // 801D3DF8
  c->r[1]=R32(c->r[5]+0x00000000u); // 801D3DFC
  c->r[1]=c->r[1]+0xFFFFFFF8u; // 801D3E00
  c->lr=c->r[31]; // 801D3E04
  if (true) { uint32_t t=c->lr; c->lr=0x801D3E0Cu; dispatch(c,t); } // 801D3E08
  c->r[5]=0u+0x806D0000u; // 801D3E0C
  c->r[5]=c->r[5]+0x00004518u; // 801D3E10
  c->r[1]=R32(c->r[5]+0x00000000u); // 801D3E14
  c->r[10]=c->r[1]|c->r[1]; // 801D3E18
  c->r[31]=R32(c->r[10]+0x0000000Cu); // 801D3E1C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D3E20
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D3E24
  c->r[1]=c->r[10]|c->r[10]; // 801D3E28
  c->lr=c->r[0]; // 801D3E2C
  return; // 801D3E30
}

// __AI_SRC_INIT
void f_801D3E34(Ctx* __restrict c) {
  stub_log(0x801D3E34u);  return;
}

// AXInit
void f_801D3FF8(Ctx* __restrict c) {
  trace_call(0x801D3FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3FF8
  c->r[0]=c->lr; // 801D3FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4000
  c->r[0]=R32(c->r[13]+0xFFFF9FA8u); // 801D4004
  cmps(c,0,(int32_t)c->r[0],0); // 801D4008
  if (!crb(c,2)) { goto L_801D403C; } // 801D400C
  c->r[3]=R32(c->r[13]+0xFFFF84F8u); // 801D4010
  c->lr=0x801D4018u; f_801B96A0(c); // 801D4014
  c->lr=0x801D401Cu; f_801D41D0(c); // 801D4018
  c->lr=0x801D4020u; f_801D6E3C(c); // 801D401C
  c->lr=0x801D4024u; f_801D63C4(c); // 801D4020
  c->lr=0x801D4028u; f_801D4678(c); // 801D4024
  c->lr=0x801D402Cu; f_801D589C(c); // 801D4028
  c->r[3]=0u+0x00000000u; // 801D402C
  c->lr=0x801D4034u; f_801D5D84(c); // 801D4030
  c->r[0]=0u+0x00000001u; // 801D4034
  W32(c->r[13]+0xFFFF9FA8u,c->r[0]); // 801D4038
L_801D403C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D403C
  c->lr=c->r[0]; // 801D4040
  c->r[1]=c->r[1]+0x00000010u; // 801D4044
  return; // 801D4048
}

// fn_801D404C
void f_801D404C(Ctx* __restrict c) {
  trace_call(0x801D404Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D404C
  c->r[0]=c->lr; // 801D4050
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4058
  c->r[31]=c->r[4]|c->r[4]; // 801D405C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4060
  c->r[30]=c->r[3]|c->r[3]; // 801D4064
  c->r[0]=R32(c->r[13]+0xFFFF9FA8u); // 801D4068
  cmps(c,0,(int32_t)c->r[0],0); // 801D406C
  if (!crb(c,2)) { goto L_801D40A8; } // 801D4070
  c->r[3]=R32(c->r[13]+0xFFFF84F8u); // 801D4074
  c->lr=0x801D407Cu; f_801B96A0(c); // 801D4078
  c->lr=0x801D4080u; f_801D41D0(c); // 801D407C
  c->r[3]=c->r[30]|c->r[30]; // 801D4080
  c->r[4]=c->r[31]|c->r[31]; // 801D4084
  c->lr=0x801D408Cu; f_801D6E6C(c); // 801D4088
  c->lr=0x801D4090u; f_801D63C4(c); // 801D408C
  c->lr=0x801D4094u; f_801D4678(c); // 801D4090
  c->lr=0x801D4098u; f_801D589C(c); // 801D4094
  c->r[3]=0u+0x00000000u; // 801D4098
  c->lr=0x801D40A0u; f_801D5D84(c); // 801D409C
  c->r[0]=0u+0x00000001u; // 801D40A0
  W32(c->r[13]+0xFFFF9FA8u,c->r[0]); // 801D40A4
L_801D40A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D40A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D40AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D40B0
  c->lr=c->r[0]; // 801D40B4
  c->r[1]=c->r[1]+0x00000010u; // 801D40B8
  return; // 801D40BC
}

// fn_801D40C0
void f_801D40C0(Ctx* __restrict c) {
  trace_call(0x801D40C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D40C0
  c->r[0]=c->lr; // 801D40C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D40C8
  c->r[0]=R32(c->r[13]+0xFFFF9FA8u); // 801D40CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D40D0
  if (crb(c,2)) { goto L_801D40F8; } // 801D40D4
  c->lr=0x801D40DCu; f_801D5F7C(c); // 801D40D8
  c->lr=0x801D40E0u; f_801D4280(c); // 801D40DC
  c->lr=0x801D40E4u; f_801D7138(c); // 801D40E0
  c->lr=0x801D40E8u; f_801D641C(c); // 801D40E4
  c->lr=0x801D40ECu; f_801D478C(c); // 801D40E8
  c->lr=0x801D40F0u; f_801D58D8(c); // 801D40EC
  c->r[0]=0u+0x00000000u; // 801D40F0
  W32(c->r[13]+0xFFFF9FA8u,c->r[0]); // 801D40F4
L_801D40F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D40F8
  c->lr=c->r[0]; // 801D40FC
  c->r[1]=c->r[1]+0x00000010u; // 801D4100
  return; // 801D4104
}

// fn_801D4108
void f_801D4108(Ctx* __restrict c) {
  trace_call(0x801D4108u);
  c->r[3]=R32(c->r[13]+0xFFFF9FA8u); // 801D4108
  return; // 801D410C
}

// __AXGetStackHead
void f_801D4110(Ctx* __restrict c) {
  trace_call(0x801D4110u);
  c->r[4]=0u+0x80570000u; // 801D4110
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D4114
  c->r[4]=c->r[4]+0xFFFFF590u; // 801D4118
  c->r[3]=R32(c->r[4]+c->r[0]); // 801D411C
  return; // 801D4120
}

// __AXServiceCallbackStack
void f_801D4124(Ctx* __restrict c) {
  trace_call(0x801D4124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4124
  c->r[0]=c->lr; // 801D4128
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D412C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4130
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4134
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4138
  c->r[29]=R32(c->r[13]+0xFFFF9FB0u); // 801D413C
  cmps(c,0,(int32_t)c->r[29],0); // 801D4140
  if (crb(c,2)) { goto L_801D4150; } // 801D4144
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D4148
  W32(c->r[13]+0xFFFF9FB0u,c->r[0]); // 801D414C
L_801D4150:;
  c->r[30]=0u+0x80570000u; // 801D4150
  c->r[31]=0u+0x00000000u; // 801D4154
  goto L_801D41AC; // 801D4158
L_801D415C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D415C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4160
  if (crb(c,2)) { goto L_801D4198; } // 801D4164
  c->r[12]=R32(c->r[29]+0x00000010u); // 801D4168
  cmps(c,0,(int32_t)c->r[12],0); // 801D416C
  if (crb(c,2)) { goto L_801D4180; } // 801D4170
  c->r[3]=c->r[29]|c->r[29]; // 801D4174
  c->ctr=c->r[12]; // 801D4178
  if (true) { c->lr=0x801D4180u; dispatch(c,c->ctr); } // 801D417C
L_801D4180:;
  c->r[3]=c->r[29]|c->r[29]; // 801D4180
  c->lr=0x801D4188u; f_801D435C(c); // 801D4184
  c->r[0]=R32(c->r[30]+0xFFFFF590u); // 801D4188
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D418C
  W32(c->r[30]+0xFFFFF590u,c->r[29]); // 801D4190
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801D4194
L_801D4198:;
  c->r[29]=R32(c->r[13]+0xFFFF9FB0u); // 801D4198
  cmps(c,0,(int32_t)c->r[29],0); // 801D419C
  if (crb(c,2)) { goto L_801D41AC; } // 801D41A0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D41A4
  W32(c->r[13]+0xFFFF9FB0u,c->r[0]); // 801D41A8
L_801D41AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D41AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D415C; } // 801D41B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D41B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D41B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D41BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D41C0
  c->lr=c->r[0]; // 801D41C4
  c->r[1]=c->r[1]+0x00000020u; // 801D41C8
  return; // 801D41CC
}

// __AXAllocInit
void f_801D41D0(Ctx* __restrict c) {
  trace_call(0x801D41D0u);
  c->r[3]=0u+0x00000000u; // 801D41D0
  c->r[4]=0u+0x80570000u; // 801D41D4
  c->r[5]=0u+0x80570000u; // 801D41D8
  c->r[0]=0u+0x00000002u; // 801D41DC
  W32(c->r[13]+0xFFFF9FB0u,c->r[3]); // 801D41E0
  c->r[4]=c->r[4]+0xFFFFF610u; // 801D41E4
  c->r[5]=c->r[5]+0xFFFFF590u; // 801D41E8
  c->ctr=c->r[0]; // 801D41EC
L_801D41F0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D41F0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D41F4
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D41F8
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D41FC
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D4200
  W32(c->r[5]+0x00000008u,c->r[3]); // 801D4204
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D4208
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801D420C
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D4210
  W32(c->r[5]+0x00000010u,c->r[3]); // 801D4214
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D4218
  W32(c->r[5]+0x00000014u,c->r[3]); // 801D421C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D4220
  W32(c->r[5]+0x00000018u,c->r[3]); // 801D4224
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D4228
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801D422C
  W32(c->r[4]+0x00000020u,c->r[3]); // 801D4230
  W32(c->r[5]+0x00000020u,c->r[3]); // 801D4234
  W32(c->r[4]+0x00000024u,c->r[3]); // 801D4238
  W32(c->r[5]+0x00000024u,c->r[3]); // 801D423C
  W32(c->r[4]+0x00000028u,c->r[3]); // 801D4240
  W32(c->r[5]+0x00000028u,c->r[3]); // 801D4244
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801D4248
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801D424C
  W32(c->r[4]+0x00000030u,c->r[3]); // 801D4250
  W32(c->r[5]+0x00000030u,c->r[3]); // 801D4254
  W32(c->r[4]+0x00000034u,c->r[3]); // 801D4258
  W32(c->r[5]+0x00000034u,c->r[3]); // 801D425C
  W32(c->r[4]+0x00000038u,c->r[3]); // 801D4260
  W32(c->r[5]+0x00000038u,c->r[3]); // 801D4264
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801D4268
  c->r[4]=c->r[4]+0x00000040u; // 801D426C
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801D4270
  c->r[5]=c->r[5]+0x00000040u; // 801D4274
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D41F0; } // 801D4278
  return; // 801D427C
}

// fn_801D4280
void f_801D4280(Ctx* __restrict c) {
  trace_call(0x801D4280u);
  c->r[3]=0u+0x00000000u; // 801D4280
  c->r[4]=0u+0x80570000u; // 801D4284
  c->r[5]=0u+0x80570000u; // 801D4288
  c->r[0]=0u+0x00000002u; // 801D428C
  W32(c->r[13]+0xFFFF9FB0u,c->r[3]); // 801D4290
  c->r[4]=c->r[4]+0xFFFFF610u; // 801D4294
  c->r[5]=c->r[5]+0xFFFFF590u; // 801D4298
  c->ctr=c->r[0]; // 801D429C
L_801D42A0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D42A0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D42A4
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D42A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D42AC
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D42B0
  W32(c->r[5]+0x00000008u,c->r[3]); // 801D42B4
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D42B8
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801D42BC
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D42C0
  W32(c->r[5]+0x00000010u,c->r[3]); // 801D42C4
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D42C8
  W32(c->r[5]+0x00000014u,c->r[3]); // 801D42CC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D42D0
  W32(c->r[5]+0x00000018u,c->r[3]); // 801D42D4
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D42D8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801D42DC
  W32(c->r[4]+0x00000020u,c->r[3]); // 801D42E0
  W32(c->r[5]+0x00000020u,c->r[3]); // 801D42E4
  W32(c->r[4]+0x00000024u,c->r[3]); // 801D42E8
  W32(c->r[5]+0x00000024u,c->r[3]); // 801D42EC
  W32(c->r[4]+0x00000028u,c->r[3]); // 801D42F0
  W32(c->r[5]+0x00000028u,c->r[3]); // 801D42F4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801D42F8
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801D42FC
  W32(c->r[4]+0x00000030u,c->r[3]); // 801D4300
  W32(c->r[5]+0x00000030u,c->r[3]); // 801D4304
  W32(c->r[4]+0x00000034u,c->r[3]); // 801D4308
  W32(c->r[5]+0x00000034u,c->r[3]); // 801D430C
  W32(c->r[4]+0x00000038u,c->r[3]); // 801D4310
  W32(c->r[5]+0x00000038u,c->r[3]); // 801D4314
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801D4318
  c->r[4]=c->r[4]+0x00000040u; // 801D431C
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801D4320
  c->r[5]=c->r[5]+0x00000040u; // 801D4324
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D42A0; } // 801D4328
  return; // 801D432C
}

// __AXPushFreeStack
void f_801D4330(Ctx* __restrict c) {
  trace_call(0x801D4330u);
  c->r[5]=0u+0x80570000u; // 801D4330
  c->r[0]=0u+0x00000000u; // 801D4334
  c->r[4]=R32(c->r[5]+0xFFFFF590u); // 801D4338
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D433C
  W32(c->r[5]+0xFFFFF590u,c->r[3]); // 801D4340
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D4344
  return; // 801D4348
}

// __AXPushCallbackStack
void f_801D434C(Ctx* __restrict c) {
  trace_call(0x801D434Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9FB0u); // 801D434C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D4350
  W32(c->r[13]+0xFFFF9FB0u,c->r[3]); // 801D4354
  return; // 801D4358
}

// __AXRemoveFromStack
void f_801D435C(Ctx* __restrict c) {
  trace_call(0x801D435Cu);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D435C
  c->r[5]=0u+0x80570000u; // 801D4360
  c->r[4]=0u+0x80570000u; // 801D4364
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D4368
  c->r[5]=c->r[5]+0xFFFFF590u; // 801D436C
  c->r[4]=c->r[4]+0xFFFFF610u; // 801D4370
  c->r[0]=R32(c->r[5]+c->r[6]); // 801D4374
  c->r[7]=R32(c->r[4]+c->r[6]); // 801D4378
  cmpu(c,0,c->r[0],c->r[7]); // 801D437C
  if (!crb(c,2)) { goto L_801D4394; } // 801D4380
  c->r[0]=0u+0x00000000u; // 801D4384
  W32(c->r[4]+c->r[6],c->r[0]); // 801D4388
  W32(c->r[5]+c->r[6],c->r[0]); // 801D438C
  return; // 801D4390
L_801D4394:;
  cmpu(c,0,c->r[3],c->r[0]); // 801D4394
  if (!crb(c,2)) { goto L_801D43B0; } // 801D4398
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D439C
  c->r[0]=0u+0x00000000u; // 801D43A0
  W32(c->r[5]+c->r[6],c->r[3]); // 801D43A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D43A8
  return; // 801D43AC
L_801D43B0:;
  cmpu(c,0,c->r[3],c->r[7]); // 801D43B0
  if (!crb(c,2)) { goto L_801D43CC; } // 801D43B4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D43B8
  c->r[0]=0u+0x00000000u; // 801D43BC
  W32(c->r[4]+c->r[6],c->r[3]); // 801D43C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D43C4
  return; // 801D43C8
L_801D43CC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D43CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D43D0
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D43D4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D43D8
  return; // 801D43DC
}

// AXFreeVoice
void f_801D43E0(Ctx* __restrict c) {
  trace_call(0x801D43E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D43E0
  c->r[0]=c->lr; // 801D43E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D43E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D43EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D43F0
  c->r[30]=c->r[3]|c->r[3]; // 801D43F4
  c->lr=0x801D43FCu; f_801BE74C(c); // 801D43F8
  c->r[31]=c->r[3]|c->r[3]; // 801D43FC
  c->r[3]=c->r[30]|c->r[30]; // 801D4400
  c->lr=0x801D4408u; f_801D435C(c); // 801D4404
  c->r[0]=R16(c->r[30]+0x00000038u); // 801D4408
  cmpu(c,0,c->r[0],0x00000001u); // 801D440C
  if (!crb(c,2)) { goto L_801D441C; } // 801D4410
  c->r[0]=0u+0x00000001u; // 801D4414
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D4418
L_801D441C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D441C
  c->lr=0x801D4424u; f_801D6DFC(c); // 801D4420
  c->r[5]=0u+0x80570000u; // 801D4424
  c->r[0]=0u+0x00000000u; // 801D4428
  c->r[4]=R32(c->r[5]+0xFFFFF590u); // 801D442C
  c->r[3]=c->r[31]|c->r[31]; // 801D4430
  W32(c->r[30]+0x00000000u,c->r[4]); // 801D4434
  W32(c->r[5]+0xFFFFF590u,c->r[30]); // 801D4438
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D443C
  c->lr=0x801D4444u; f_801BE774(c); // 801D4440
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4444
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4448
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D444C
  c->lr=c->r[0]; // 801D4450
  c->r[1]=c->r[1]+0x00000010u; // 801D4454
  return; // 801D4458
}

// AXAcquireVoice
void f_801D445C(Ctx* __restrict c) {
  trace_call(0x801D445Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D445C
  c->r[0]=c->lr; // 801D4460
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4464
  c->r[11]=c->r[1]+0x00000020u; // 801D4468
  c->lr=0x801D4470u; f_801E795C(c); // 801D446C
  c->r[27]=c->r[3]|c->r[3]; // 801D4470
  c->r[28]=c->r[4]|c->r[4]; // 801D4474
  c->r[29]=c->r[5]|c->r[5]; // 801D4478
  c->lr=0x801D4480u; f_801BE74C(c); // 801D447C
  c->r[4]=0u+0x80570000u; // 801D4480
  c->r[31]=c->r[3]|c->r[3]; // 801D4484
  c->r[30]=R32(c->r[4]+0xFFFFF590u); // 801D4488
  cmps(c,0,(int32_t)c->r[30],0); // 801D448C
  if (crb(c,2)) { goto L_801D449C; } // 801D4490
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D4494
  W32(c->r[4]+0xFFFFF590u,c->r[0]); // 801D4498
L_801D449C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D449C
  if (!crb(c,2)) { goto L_801D4558; } // 801D44A0
  c->r[3]=0u+0x80570000u; // 801D44A4
  c->r[4]=0u+0x80570000u; // 801D44A8
  c->r[3]=c->r[3]+0xFFFFF590u; // 801D44AC
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801D44B0
  c->r[4]=c->r[4]+0xFFFFF610u; // 801D44B4
  c->r[5]=c->r[3]+0x00000004u; // 801D44B8
  c->r[3]=0u+0x00000000u; // 801D44BC
  c->r[6]=c->r[4]+0x00000004u; // 801D44C0
  c->ctr=c->r[0]; // 801D44C4
  cmpu(c,0,c->r[27],0x00000001u); // 801D44C8
  if (!crb(c,1)) { goto L_801D4558; } // 801D44CC
L_801D44D0:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801D44D0
  c->r[30]=0u+0x00000000u; // 801D44D4
  cmps(c,0,(int32_t)c->r[0],0); // 801D44D8
  if (crb(c,2)) { goto L_801D4514; } // 801D44DC
  c->r[7]=R32(c->r[6]+0x00000000u); // 801D44E0
  cmpu(c,0,c->r[0],c->r[7]); // 801D44E4
  if (!crb(c,2)) { goto L_801D44FC; } // 801D44E8
  W32(c->r[6]+0x00000000u,c->r[3]); // 801D44EC
  c->r[30]=c->r[0]|c->r[0]; // 801D44F0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D44F4
  goto L_801D4514; // 801D44F8
L_801D44FC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D44FC
  if (crb(c,2)) { goto L_801D4514; } // 801D4500
  c->r[4]=R32(c->r[7]+0x00000004u); // 801D4504
  c->r[30]=c->r[7]|c->r[7]; // 801D4508
  W32(c->r[6]+0x00000000u,c->r[4]); // 801D450C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D4510
L_801D4514:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4514
  if (crb(c,2)) { goto L_801D454C; } // 801D4518
  c->r[0]=R16(c->r[30]+0x00000038u); // 801D451C
  cmpu(c,0,c->r[0],0x00000001u); // 801D4520
  if (!crb(c,2)) { goto L_801D4530; } // 801D4524
  c->r[0]=0u+0x00000001u; // 801D4528
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D452C
L_801D4530:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801D4530
  cmps(c,0,(int32_t)c->r[12],0); // 801D4534
  if (crb(c,2)) { goto L_801D4558; } // 801D4538
  c->r[3]=c->r[30]|c->r[30]; // 801D453C
  c->ctr=c->r[12]; // 801D4540
  if (true) { c->lr=0x801D4548u; dispatch(c,c->ctr); } // 801D4544
  goto L_801D4558; // 801D4548
L_801D454C:;
  c->r[5]=c->r[5]+0x00000004u; // 801D454C
  c->r[6]=c->r[6]+0x00000004u; // 801D4550
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D44D0; } // 801D4554
L_801D4558:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4558
  if (crb(c,2)) { goto L_801D45B8; } // 801D455C
  c->r[4]=0u+0x80570000u; // 801D4560
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D4564
  c->r[4]=c->r[4]+0xFFFFF590u; // 801D4568
  c->r[0]=0u+0x00000000u; // 801D456C
  c->r[3]=R32(c->r[4]+c->r[5]); // 801D4570
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D4574
  cmps(c,0,(int32_t)c->r[3],0); // 801D4578
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D457C
  if (crb(c,2)) { goto L_801D4594; } // 801D4580
  c->r[3]=R32(c->r[4]+c->r[5]); // 801D4584
  W32(c->r[3]+0x00000004u,c->r[30]); // 801D4588
  W32(c->r[4]+c->r[5],c->r[30]); // 801D458C
  goto L_801D45A4; // 801D4590
L_801D4594:;
  c->r[3]=0u+0x80570000u; // 801D4594
  W32(c->r[4]+c->r[5],c->r[30]); // 801D4598
  c->r[3]=c->r[3]+0xFFFFF610u; // 801D459C
  W32(c->r[3]+c->r[5],c->r[30]); // 801D45A0
L_801D45A4:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 801D45A4
  c->r[3]=c->r[30]|c->r[30]; // 801D45A8
  W32(c->r[30]+0x00000010u,c->r[28]); // 801D45AC
  W32(c->r[30]+0x00000014u,c->r[29]); // 801D45B0
  c->lr=0x801D45B8u; f_801D6DFC(c); // 801D45B4
L_801D45B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D45B8
  c->lr=0x801D45C0u; f_801BE774(c); // 801D45BC
  c->r[11]=c->r[1]+0x00000020u; // 801D45C0
  c->r[3]=c->r[30]|c->r[30]; // 801D45C4
  c->lr=0x801D45CCu; f_801E79A8(c); // 801D45C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D45CC
  c->lr=c->r[0]; // 801D45D0
  c->r[1]=c->r[1]+0x00000020u; // 801D45D4
  return; // 801D45D8
}

// AXSetVoicePriority
void f_801D45DC(Ctx* __restrict c) {
  trace_call(0x801D45DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D45DC
  c->r[0]=c->lr; // 801D45E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D45E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D45E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D45EC
  c->r[30]=c->r[4]|c->r[4]; // 801D45F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D45F4
  c->r[29]=c->r[3]|c->r[3]; // 801D45F8
  c->lr=0x801D4600u; f_801BE74C(c); // 801D45FC
  c->r[31]=c->r[3]|c->r[3]; // 801D4600
  c->r[3]=c->r[29]|c->r[29]; // 801D4604
  c->lr=0x801D460Cu; f_801D435C(c); // 801D4608
  c->r[4]=0u+0x80570000u; // 801D460C
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801D4610
  c->r[4]=c->r[4]+0xFFFFF590u; // 801D4614
  c->r[0]=0u+0x00000000u; // 801D4618
  c->r[3]=R32(c->r[4]+c->r[5]); // 801D461C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4620
  W32(c->r[29]+0x00000000u,c->r[3]); // 801D4624
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D4628
  if (crb(c,2)) { goto L_801D4640; } // 801D462C
  c->r[3]=R32(c->r[4]+c->r[5]); // 801D4630
  W32(c->r[3]+0x00000004u,c->r[29]); // 801D4634
  W32(c->r[4]+c->r[5],c->r[29]); // 801D4638
  goto L_801D4650; // 801D463C
L_801D4640:;
  c->r[3]=0u+0x80570000u; // 801D4640
  W32(c->r[4]+c->r[5],c->r[29]); // 801D4644
  c->r[3]=c->r[3]+0xFFFFF610u; // 801D4648
  W32(c->r[3]+c->r[5],c->r[29]); // 801D464C
L_801D4650:;
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801D4650
  c->r[3]=c->r[31]|c->r[31]; // 801D4654
  c->lr=0x801D465Cu; f_801BE774(c); // 801D4658
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D465C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4660
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4664
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4668
  c->lr=c->r[0]; // 801D466C
  c->r[1]=c->r[1]+0x00000020u; // 801D4670
  return; // 801D4674
}

// __AXAuxInit
void f_801D4678(Ctx* __restrict c) {
  trace_call(0x801D4678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4678
  c->r[0]=c->lr; // 801D467C
  c->r[6]=0u+0x80570000u; // 801D4680
  c->r[5]=0u+0x00000000u; // 801D4684
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4688
  c->r[6]=c->r[6]+0xFFFFF6A0u; // 801D468C
  c->r[4]=0u+0x00000001u; // 801D4690
  c->r[3]=0u+0x00000002u; // 801D4694
  c->r[0]=0u+0x00000020u; // 801D4698
  W32(c->r[13]+0xFFFF9FF0u,c->r[5]); // 801D469C
  c->r[7]=c->r[6]+0x00000000u; // 801D46A0
  c->r[8]=c->r[6]+0x00001200u; // 801D46A4
  W32(c->r[13]+0xFFFF9FECu,c->r[5]); // 801D46A8
  c->r[6]=c->r[6]+0x00002400u; // 801D46AC
  W32(c->r[13]+0xFFFF9FE8u,c->r[5]); // 801D46B0
  W32(c->r[13]+0xFFFF9FE4u,c->r[5]); // 801D46B4
  W32(c->r[13]+0xFFFF9FE0u,c->r[5]); // 801D46B8
  W32(c->r[13]+0xFFFF9FDCu,c->r[5]); // 801D46BC
  W32(c->r[13]+0xFFFF9FC0u,c->r[5]); // 801D46C0
  W32(c->r[13]+0xFFFF9FBCu,c->r[4]); // 801D46C4
  W32(c->r[13]+0xFFFF9FB8u,c->r[3]); // 801D46C8
  c->ctr=c->r[0]; // 801D46CC
L_801D46D0:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 801D46D0
  W32(c->r[8]+0x00000000u,c->r[5]); // 801D46D4
  W32(c->r[6]+0x00000000u,c->r[5]); // 801D46D8
  W32(c->r[7]+0x00000004u,c->r[5]); // 801D46DC
  W32(c->r[8]+0x00000004u,c->r[5]); // 801D46E0
  W32(c->r[6]+0x00000004u,c->r[5]); // 801D46E4
  W32(c->r[7]+0x00000008u,c->r[5]); // 801D46E8
  W32(c->r[8]+0x00000008u,c->r[5]); // 801D46EC
  W32(c->r[6]+0x00000008u,c->r[5]); // 801D46F0
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801D46F4
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 801D46F8
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801D46FC
  W32(c->r[7]+0x00000010u,c->r[5]); // 801D4700
  W32(c->r[8]+0x00000010u,c->r[5]); // 801D4704
  W32(c->r[6]+0x00000010u,c->r[5]); // 801D4708
  W32(c->r[7]+0x00000014u,c->r[5]); // 801D470C
  W32(c->r[8]+0x00000014u,c->r[5]); // 801D4710
  W32(c->r[6]+0x00000014u,c->r[5]); // 801D4714
  W32(c->r[7]+0x00000018u,c->r[5]); // 801D4718
  W32(c->r[8]+0x00000018u,c->r[5]); // 801D471C
  W32(c->r[6]+0x00000018u,c->r[5]); // 801D4720
  W32(c->r[7]+0x0000001Cu,c->r[5]); // 801D4724
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 801D4728
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 801D472C
  W32(c->r[7]+0x00000020u,c->r[5]); // 801D4730
  c->r[7]=c->r[7]+0x00000024u; // 801D4734
  W32(c->r[8]+0x00000020u,c->r[5]); // 801D4738
  c->r[8]=c->r[8]+0x00000024u; // 801D473C
  W32(c->r[6]+0x00000020u,c->r[5]); // 801D4740
  c->r[6]=c->r[6]+0x00000024u; // 801D4744
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D46D0; } // 801D4748
  c->r[3]=c->r[13]+0xFFFF9FFCu; // 801D474C
  c->r[4]=0u+0x00000000u; // 801D4750
  c->r[5]=0u+0x00000003u; // 801D4754
  c->lr=0x801D475Cu; f_8000443C(c); // 801D4758
  c->r[3]=c->r[13]+0xFFFF9FF8u; // 801D475C
  c->r[4]=0u+0x00000000u; // 801D4760
  c->r[5]=0u+0x00000003u; // 801D4764
  c->lr=0x801D476Cu; f_8000443C(c); // 801D4768
  c->r[3]=c->r[13]+0xFFFF9FF4u; // 801D476C
  c->r[4]=0u+0x00000000u; // 801D4770
  c->r[5]=0u+0x00000003u; // 801D4774
  c->lr=0x801D477Cu; f_8000443C(c); // 801D4778
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D477C
  c->lr=c->r[0]; // 801D4780
  c->r[1]=c->r[1]+0x00000010u; // 801D4784
  return; // 801D4788
}

// __AXAuxQuit
void f_801D478C(Ctx* __restrict c) {
  trace_call(0x801D478Cu);
  c->r[0]=0u+0x00000000u; // 801D478C
  W32(c->r[13]+0xFFFF9FF0u,c->r[0]); // 801D4790
  W32(c->r[13]+0xFFFF9FECu,c->r[0]); // 801D4794
  W32(c->r[13]+0xFFFF9FE8u,c->r[0]); // 801D4798
  return; // 801D479C
}

// __AXGetAuxAInput
void f_801D47A0(Ctx* __restrict c) {
  trace_call(0x801D47A0u);
  c->r[0]=R32(c->r[13]+0xFFFF9FF0u); // 801D47A0
  cmps(c,0,(int32_t)c->r[0],0); // 801D47A4
  if (crb(c,2)) { goto L_801D47C8; } // 801D47A8
  c->r[0]=R32(c->r[13]+0xFFFF9FC0u); // 801D47AC
  c->r[4]=0u+0x80570000u; // 801D47B0
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D47B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D47B8
  c->r[0]=c->r[4]+c->r[0]; // 801D47BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D47C0
  return; // 801D47C4
L_801D47C8:;
  c->r[0]=0u+0x00000000u; // 801D47C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D47CC
  return; // 801D47D0
}

// __AXGetAuxAOutput
void f_801D47D4(Ctx* __restrict c) {
  trace_call(0x801D47D4u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D47D4
  c->r[4]=0u+0x80570000u; // 801D47D8
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D47DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D47E0
  c->r[0]=c->r[4]+c->r[0]; // 801D47E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D47E8
  return; // 801D47EC
}

// __AXGetAuxAInputDpl2
void f_801D47F0(Ctx* __restrict c) {
  trace_call(0x801D47F0u);
  c->r[0]=R32(c->r[13]+0xFFFF9FC0u); // 801D47F0
  c->r[4]=0u+0x80570000u; // 801D47F4
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D47F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D47FC
  c->r[4]=c->r[4]+c->r[0]; // 801D4800
  c->r[0]=c->r[4]+0x00000480u; // 801D4804
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4808
  return; // 801D480C
}

// __AXGetAuxAOutputDpl2R
void f_801D4810(Ctx* __restrict c) {
  trace_call(0x801D4810u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4810
  c->r[4]=0u+0x80570000u; // 801D4814
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D4818
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D481C
  c->r[4]=c->r[4]+c->r[0]; // 801D4820
  c->r[0]=c->r[4]+0x00000180u; // 801D4824
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4828
  return; // 801D482C
}

// __AXGetAuxAOutputDpl2Ls
void f_801D4830(Ctx* __restrict c) {
  trace_call(0x801D4830u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4830
  c->r[4]=0u+0x80570000u; // 801D4834
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D4838
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D483C
  c->r[4]=c->r[4]+c->r[0]; // 801D4840
  c->r[0]=c->r[4]+0x00000300u; // 801D4844
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4848
  return; // 801D484C
}

// __AXGetAuxAOutputDpl2Rs
void f_801D4850(Ctx* __restrict c) {
  trace_call(0x801D4850u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4850
  c->r[4]=0u+0x80570000u; // 801D4854
  c->r[4]=c->r[4]+0xFFFFF6A0u; // 801D4858
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D485C
  c->r[4]=c->r[4]+c->r[0]; // 801D4860
  c->r[0]=c->r[4]+0x00000480u; // 801D4864
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4868
  return; // 801D486C
}

// __AXGetAuxBInput
void f_801D4870(Ctx* __restrict c) {
  trace_call(0x801D4870u);
  c->r[0]=R32(c->r[13]+0xFFFF9FECu); // 801D4870
  cmps(c,0,(int32_t)c->r[0],0); // 801D4874
  if (crb(c,2)) { goto L_801D4898; } // 801D4878
  c->r[0]=R32(c->r[13]+0xFFFF9FC0u); // 801D487C
  c->r[4]=0u+0x80570000u; // 801D4880
  c->r[4]=c->r[4]+0x000008A0u; // 801D4884
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D4888
  c->r[0]=c->r[4]+c->r[0]; // 801D488C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4890
  return; // 801D4894
L_801D4898:;
  c->r[0]=0u+0x00000000u; // 801D4898
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D489C
  return; // 801D48A0
}

// __AXGetAuxBOutput
void f_801D48A4(Ctx* __restrict c) {
  trace_call(0x801D48A4u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D48A4
  c->r[4]=0u+0x80570000u; // 801D48A8
  c->r[4]=c->r[4]+0x000008A0u; // 801D48AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D48B0
  c->r[0]=c->r[4]+c->r[0]; // 801D48B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D48B8
  return; // 801D48BC
}

// __AXGetAuxBInputDpl2
void f_801D48C0(Ctx* __restrict c) {
  trace_call(0x801D48C0u);
  c->r[0]=R32(c->r[13]+0xFFFF9FC0u); // 801D48C0
  c->r[4]=0u+0x80570000u; // 801D48C4
  c->r[4]=c->r[4]+0x000008A0u; // 801D48C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D48CC
  c->r[4]=c->r[4]+c->r[0]; // 801D48D0
  c->r[0]=c->r[4]+0x00000480u; // 801D48D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D48D8
  return; // 801D48DC
}

// __AXGetAuxBOutputDpl2R
void f_801D48E0(Ctx* __restrict c) {
  trace_call(0x801D48E0u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D48E0
  c->r[4]=0u+0x80570000u; // 801D48E4
  c->r[4]=c->r[4]+0x000008A0u; // 801D48E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D48EC
  c->r[4]=c->r[4]+c->r[0]; // 801D48F0
  c->r[0]=c->r[4]+0x00000180u; // 801D48F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D48F8
  return; // 801D48FC
}

// __AXGetAuxBOutputDpl2Ls
void f_801D4900(Ctx* __restrict c) {
  trace_call(0x801D4900u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4900
  c->r[4]=0u+0x80570000u; // 801D4904
  c->r[4]=c->r[4]+0x000008A0u; // 801D4908
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D490C
  c->r[4]=c->r[4]+c->r[0]; // 801D4910
  c->r[0]=c->r[4]+0x00000300u; // 801D4914
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4918
  return; // 801D491C
}

// __AXGetAuxBOutputDpl2Rs
void f_801D4920(Ctx* __restrict c) {
  trace_call(0x801D4920u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4920
  c->r[4]=0u+0x80570000u; // 801D4924
  c->r[4]=c->r[4]+0x000008A0u; // 801D4928
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D492C
  c->r[4]=c->r[4]+c->r[0]; // 801D4930
  c->r[0]=c->r[4]+0x00000480u; // 801D4934
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4938
  return; // 801D493C
}

// __AXGetAuxCInput
void f_801D4940(Ctx* __restrict c) {
  trace_call(0x801D4940u);
  c->r[0]=R32(c->r[13]+0xFFFF9FE8u); // 801D4940
  cmps(c,0,(int32_t)c->r[0],0); // 801D4944
  if (crb(c,2)) { goto L_801D4968; } // 801D4948
  c->r[0]=R32(c->r[13]+0xFFFF9FC0u); // 801D494C
  c->r[4]=0u+0x80570000u; // 801D4950
  c->r[4]=c->r[4]+0x00001AA0u; // 801D4954
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801D4958
  c->r[0]=c->r[4]+c->r[0]; // 801D495C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4960
  return; // 801D4964
L_801D4968:;
  c->r[0]=0u+0x00000000u; // 801D4968
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D496C
  return; // 801D4970
}

// __AXGetAuxCOutput
void f_801D4974(Ctx* __restrict c) {
  trace_call(0x801D4974u);
  c->r[0]=R32(c->r[13]+0xFFFF9FBCu); // 801D4974
  c->r[4]=0u+0x80570000u; // 801D4978
  c->r[4]=c->r[4]+0x00001AA0u; // 801D497C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801D4980
  c->r[0]=c->r[4]+c->r[0]; // 801D4984
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4988
  return; // 801D498C
}

// __AXProcessAux
void f_801D4990(Ctx* __restrict c) {
  trace_call(0x801D4990u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4990
  c->r[0]=c->lr; // 801D4994
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D4998
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D499C
  c->r[31]=0u+0x80570000u; // 801D49A0
  c->r[31]=c->r[31]+0xFFFFF6A0u; // 801D49A4
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D49A8
  c->r[10]=c->r[31]+0x00000000u; // 801D49AC
  c->r[6]=c->r[31]+0x00001200u; // 801D49B0
  c->r[5]=c->r[31]+0x00002400u; // 801D49B4
  W32(c->r[1]+0x00000054u,c->r[29]); // 801D49B8
  c->r[7]=R32(c->r[13]+0xFFFF9FC0u); // 801D49BC
  c->r[9]=R32(c->r[13]+0xFFFF9FBCu); // 801D49C0
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)1536); // 801D49C4
  c->r[0]=R32(c->r[13]+0xFFFF9FF0u); // 801D49C8
  cmps(c,0,(int32_t)c->r[0],0); // 801D49CC
  c->r[4]=c->r[10]+c->r[3]; // 801D49D0
  c->r[3]=c->r[6]+c->r[3]; // 801D49D4
  W32(c->r[13]+0xFFFF9FD8u,c->r[4]); // 801D49D8
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)1536); // 801D49DC
  W32(c->r[13]+0xFFFF9FD0u,c->r[3]); // 801D49E0
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)1152); // 801D49E4
  c->r[7]=c->r[10]+c->r[8]; // 801D49E8
  c->r[6]=c->r[6]+c->r[8]; // 801D49EC
  W32(c->r[13]+0xFFFF9FD4u,c->r[7]); // 801D49F0
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)1152); // 801D49F4
  c->r[4]=c->r[5]+c->r[4]; // 801D49F8
  W32(c->r[13]+0xFFFF9FCCu,c->r[6]); // 801D49FC
  c->r[0]=c->r[5]+c->r[3]; // 801D4A00
  W32(c->r[13]+0xFFFF9FC8u,c->r[4]); // 801D4A04
  W32(c->r[13]+0xFFFF9FC4u,c->r[0]); // 801D4A08
  if (crb(c,2)) { goto L_801D4ABC; } // 801D4A0C
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D4A10
  cmpu(c,0,c->r[0],0x00000002u); // 801D4A14
  if (!crb(c,2)) { goto L_801D4A70; } // 801D4A18
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 801D4A1C
  c->r[4]=0u+0x00000600u; // 801D4A20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D4A24
  c->r[3]=c->r[10]+c->r[0]; // 801D4A28
  c->r[6]=c->r[3]+0x00000180u; // 801D4A2C
  W32(c->r[1]+0x00000040u,c->r[3]); // 801D4A30
  c->r[5]=c->r[3]+0x00000300u; // 801D4A34
  c->r[0]=c->r[3]+0x00000480u; // 801D4A38
  W32(c->r[1]+0x00000044u,c->r[6]); // 801D4A3C
  W32(c->r[1]+0x00000048u,c->r[5]); // 801D4A40
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801D4A44
  c->lr=0x801D4A4Cu; f_801BA764(c); // 801D4A48
  c->r[12]=R32(c->r[13]+0xFFFF9FF0u); // 801D4A4C
  c->r[3]=c->r[1]+0x00000040u; // 801D4A50
  c->r[4]=R32(c->r[13]+0xFFFF9FE4u); // 801D4A54
  c->ctr=c->r[12]; // 801D4A58
  if (true) { c->lr=0x801D4A60u; dispatch(c,c->ctr); } // 801D4A5C
  c->r[3]=R32(c->r[1]+0x00000040u); // 801D4A60
  c->r[4]=0u+0x00000600u; // 801D4A64
  c->lr=0x801D4A6Cu; f_801BA7F0(c); // 801D4A68
  goto L_801D4B00; // 801D4A6C
L_801D4A70:;
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 801D4A70
  c->r[4]=0u+0x00000480u; // 801D4A74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801D4A78
  c->r[3]=c->r[10]+c->r[0]; // 801D4A7C
  c->r[5]=c->r[3]+0x00000180u; // 801D4A80
  W32(c->r[1]+0x00000030u,c->r[3]); // 801D4A84
  c->r[0]=c->r[3]+0x00000300u; // 801D4A88
  W32(c->r[1]+0x00000034u,c->r[5]); // 801D4A8C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801D4A90
  c->lr=0x801D4A98u; f_801BA764(c); // 801D4A94
  c->r[12]=R32(c->r[13]+0xFFFF9FF0u); // 801D4A98
  c->r[3]=c->r[1]+0x00000030u; // 801D4A9C
  c->r[4]=R32(c->r[13]+0xFFFF9FE4u); // 801D4AA0
  c->ctr=c->r[12]; // 801D4AA4
  if (true) { c->lr=0x801D4AACu; dispatch(c,c->ctr); } // 801D4AA8
  c->r[3]=R32(c->r[1]+0x00000030u); // 801D4AAC
  c->r[4]=0u+0x00000480u; // 801D4AB0
  c->lr=0x801D4AB8u; f_801BA7F0(c); // 801D4AB4
  goto L_801D4B00; // 801D4AB8
L_801D4ABC:;
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4ABC
  c->r[30]=c->r[13]+0xFFFF9FFCu; // 801D4AC0
  c->r[0]=R8(c->r[30]+c->r[3]); // 801D4AC4
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AC8
  if (crb(c,2)) { goto L_801D4B00; } // 801D4ACC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801D4AD0
  c->r[4]=0u+0x00000000u; // 801D4AD4
  c->r[5]=0u+0x00000600u; // 801D4AD8
  c->r[29]=c->r[10]+c->r[0]; // 801D4ADC
  c->r[3]=c->r[29]|c->r[29]; // 801D4AE0
  c->lr=0x801D4AE8u; f_8000443C(c); // 801D4AE4
  c->r[3]=c->r[29]|c->r[29]; // 801D4AE8
  c->r[4]=0u+0x00000600u; // 801D4AEC
  c->lr=0x801D4AF4u; f_801BA790(c); // 801D4AF0
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 801D4AF4
  c->r[3]=0u+0x00000000u; // 801D4AF8
  W8(c->r[30]+c->r[0],c->r[3]); // 801D4AFC
L_801D4B00:;
  c->r[0]=R32(c->r[13]+0xFFFF9FECu); // 801D4B00
  cmps(c,0,(int32_t)c->r[0],0); // 801D4B04
  if (crb(c,2)) { goto L_801D4BC0; } // 801D4B08
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D4B0C
  cmpu(c,0,c->r[0],0x00000002u); // 801D4B10
  if (!crb(c,2)) { goto L_801D4B70; } // 801D4B14
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4B18
  c->r[0]=c->r[31]+0x00001200u; // 801D4B1C
  c->r[4]=0u+0x00000600u; // 801D4B20
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801D4B24
  c->r[3]=c->r[0]+c->r[3]; // 801D4B28
  c->r[6]=c->r[3]+0x00000180u; // 801D4B2C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801D4B30
  c->r[5]=c->r[3]+0x00000300u; // 801D4B34
  c->r[0]=c->r[3]+0x00000480u; // 801D4B38
  W32(c->r[1]+0x00000024u,c->r[6]); // 801D4B3C
  W32(c->r[1]+0x00000028u,c->r[5]); // 801D4B40
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D4B44
  c->lr=0x801D4B4Cu; f_801BA764(c); // 801D4B48
  c->r[12]=R32(c->r[13]+0xFFFF9FECu); // 801D4B4C
  c->r[3]=c->r[1]+0x00000020u; // 801D4B50
  c->r[4]=R32(c->r[13]+0xFFFF9FE0u); // 801D4B54
  c->ctr=c->r[12]; // 801D4B58
  if (true) { c->lr=0x801D4B60u; dispatch(c,c->ctr); } // 801D4B5C
  c->r[3]=R32(c->r[1]+0x00000020u); // 801D4B60
  c->r[4]=0u+0x00000600u; // 801D4B64
  c->lr=0x801D4B6Cu; f_801BA7F0(c); // 801D4B68
  goto L_801D4C08; // 801D4B6C
L_801D4B70:;
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4B70
  c->r[0]=c->r[31]+0x00001200u; // 801D4B74
  c->r[4]=0u+0x00000480u; // 801D4B78
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801D4B7C
  c->r[3]=c->r[0]+c->r[3]; // 801D4B80
  c->r[5]=c->r[3]+0x00000180u; // 801D4B84
  W32(c->r[1]+0x00000014u,c->r[3]); // 801D4B88
  c->r[0]=c->r[3]+0x00000300u; // 801D4B8C
  W32(c->r[1]+0x00000018u,c->r[5]); // 801D4B90
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D4B94
  c->lr=0x801D4B9Cu; f_801BA764(c); // 801D4B98
  c->r[12]=R32(c->r[13]+0xFFFF9FECu); // 801D4B9C
  c->r[3]=c->r[1]+0x00000014u; // 801D4BA0
  c->r[4]=R32(c->r[13]+0xFFFF9FE0u); // 801D4BA4
  c->ctr=c->r[12]; // 801D4BA8
  if (true) { c->lr=0x801D4BB0u; dispatch(c,c->ctr); } // 801D4BAC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D4BB0
  c->r[4]=0u+0x00000480u; // 801D4BB4
  c->lr=0x801D4BBCu; f_801BA7F0(c); // 801D4BB8
  goto L_801D4C08; // 801D4BBC
L_801D4BC0:;
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4BC0
  c->r[30]=c->r[13]+0xFFFF9FF8u; // 801D4BC4
  c->r[0]=R8(c->r[30]+c->r[3]); // 801D4BC8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4BCC
  if (crb(c,2)) { goto L_801D4C08; } // 801D4BD0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801D4BD4
  c->r[0]=c->r[31]+0x00001200u; // 801D4BD8
  c->r[4]=0u+0x00000000u; // 801D4BDC
  c->r[5]=0u+0x00000600u; // 801D4BE0
  c->r[29]=c->r[0]+c->r[3]; // 801D4BE4
  c->r[3]=c->r[29]|c->r[29]; // 801D4BE8
  c->lr=0x801D4BF0u; f_8000443C(c); // 801D4BEC
  c->r[3]=c->r[29]|c->r[29]; // 801D4BF0
  c->r[4]=0u+0x00000600u; // 801D4BF4
  c->lr=0x801D4BFCu; f_801BA790(c); // 801D4BF8
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 801D4BFC
  c->r[3]=0u+0x00000000u; // 801D4C00
  W8(c->r[30]+c->r[0],c->r[3]); // 801D4C04
L_801D4C08:;
  c->r[0]=R32(c->r[13]+0xFFFF9FE8u); // 801D4C08
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C0C
  if (crb(c,2)) { goto L_801D4C70; } // 801D4C10
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D4C14
  cmpu(c,0,c->r[0],0x00000002u); // 801D4C18
  if (crb(c,2)) { goto L_801D4C70; } // 801D4C1C
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4C20
  c->r[0]=c->r[31]+0x00002400u; // 801D4C24
  c->r[4]=0u+0x00000480u; // 801D4C28
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801D4C2C
  c->r[3]=c->r[0]+c->r[3]; // 801D4C30
  c->r[5]=c->r[3]+0x00000180u; // 801D4C34
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D4C38
  c->r[0]=c->r[3]+0x00000300u; // 801D4C3C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D4C40
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D4C44
  c->lr=0x801D4C4Cu; f_801BA764(c); // 801D4C48
  c->r[12]=R32(c->r[13]+0xFFFF9FE8u); // 801D4C4C
  c->r[3]=c->r[1]+0x00000008u; // 801D4C50
  c->r[4]=R32(c->r[13]+0xFFFF9FDCu); // 801D4C54
  c->ctr=c->r[12]; // 801D4C58
  if (true) { c->lr=0x801D4C60u; dispatch(c,c->ctr); } // 801D4C5C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D4C60
  c->r[4]=0u+0x00000480u; // 801D4C64
  c->lr=0x801D4C6Cu; f_801BA7F0(c); // 801D4C68
  goto L_801D4CC4; // 801D4C6C
L_801D4C70:;
  c->r[0]=R32(c->r[13]+0xFFFF9FE8u); // 801D4C70
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C74
  if (!crb(c,2)) { goto L_801D4CC4; } // 801D4C78
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4C7C
  c->r[30]=c->r[13]+0xFFFF9FF4u; // 801D4C80
  c->r[0]=R8(c->r[30]+c->r[3]); // 801D4C84
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C88
  if (crb(c,2)) { goto L_801D4CC4; } // 801D4C8C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801D4C90
  c->r[0]=c->r[31]+0x00002400u; // 801D4C94
  c->r[4]=0u+0x00000000u; // 801D4C98
  c->r[5]=0u+0x00000480u; // 801D4C9C
  c->r[29]=c->r[0]+c->r[3]; // 801D4CA0
  c->r[3]=c->r[29]|c->r[29]; // 801D4CA4
  c->lr=0x801D4CACu; f_8000443C(c); // 801D4CA8
  c->r[3]=c->r[29]|c->r[29]; // 801D4CAC
  c->r[4]=0u+0x00000480u; // 801D4CB0
  c->lr=0x801D4CB8u; f_801BA790(c); // 801D4CB4
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 801D4CB8
  c->r[3]=0u+0x00000000u; // 801D4CBC
  W8(c->r[30]+c->r[0],c->r[3]); // 801D4CC0
L_801D4CC4:;
  c->r[3]=0u+0xAAAB0000u; // 801D4CC4
  c->r[5]=R32(c->r[13]+0xFFFF9FC0u); // 801D4CC8
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801D4CCC
  c->r[3]=R32(c->r[13]+0xFFFF9FB8u); // 801D4CD0
  c->r[4]=R32(c->r[13]+0xFFFF9FBCu); // 801D4CD4
  c->r[7]=c->r[5]+0x00000001u; // 801D4CD8
  c->r[3]=c->r[3]+0x00000001u; // 801D4CDC
  c->r[5]=c->r[4]+0x00000001u; // 801D4CE0
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 801D4CE4
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801D4CE8
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 801D4CEC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801D4CF0
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801D4CF4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 801D4CF8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D4CFC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 801D4D00
  c->r[6]=c->r[7]-c->r[6]; // 801D4D04
  W32(c->r[13]+0xFFFF9FC0u,c->r[6]); // 801D4D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D4D0C
  c->r[4]=c->r[5]-c->r[4]; // 801D4D10
  W32(c->r[13]+0xFFFF9FBCu,c->r[4]); // 801D4D14
  c->r[0]=c->r[3]-c->r[0]; // 801D4D18
  W32(c->r[13]+0xFFFF9FB8u,c->r[0]); // 801D4D1C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D4D20
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D4D24
  c->r[29]=R32(c->r[1]+0x00000054u); // 801D4D28
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D4D2C
  c->lr=c->r[0]; // 801D4D30
  c->r[1]=c->r[1]+0x00000060u; // 801D4D34
  return; // 801D4D38
}

// fn_801D4D3C
void f_801D4D3C(Ctx* __restrict c) {
  trace_call(0x801D4D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4D3C
  c->r[0]=c->lr; // 801D4D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4D44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4D48
  c->r[31]=c->r[3]|c->r[3]; // 801D4D4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4D50
  c->r[30]=c->r[4]|c->r[4]; // 801D4D54
  c->lr=0x801D4D5Cu; f_801BE74C(c); // 801D4D58
  cmps(c,0,(int32_t)c->r[31],0); // 801D4D5C
  W32(c->r[13]+0xFFFF9FF0u,c->r[31]); // 801D4D60
  c->r[31]=c->r[3]|c->r[3]; // 801D4D64
  W32(c->r[13]+0xFFFF9FE4u,c->r[30]); // 801D4D68
  if (!crb(c,2)) { goto L_801D4D80; } // 801D4D6C
  c->r[3]=c->r[13]+0xFFFF9FFCu; // 801D4D70
  c->r[4]=0u+0x00000001u; // 801D4D74
  c->r[5]=0u+0x00000003u; // 801D4D78
  c->lr=0x801D4D80u; f_8000443C(c); // 801D4D7C
L_801D4D80:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4D80
  c->lr=0x801D4D88u; f_801BE774(c); // 801D4D84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4D88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4D8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4D90
  c->lr=c->r[0]; // 801D4D94
  c->r[1]=c->r[1]+0x00000010u; // 801D4D98
  return; // 801D4D9C
}

// fn_801D4DA0
void f_801D4DA0(Ctx* __restrict c) {
  trace_call(0x801D4DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4DA0
  c->r[0]=c->lr; // 801D4DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4DAC
  c->r[31]=c->r[3]|c->r[3]; // 801D4DB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4DB4
  c->r[30]=c->r[4]|c->r[4]; // 801D4DB8
  c->lr=0x801D4DC0u; f_801BE74C(c); // 801D4DBC
  cmps(c,0,(int32_t)c->r[31],0); // 801D4DC0
  W32(c->r[13]+0xFFFF9FECu,c->r[31]); // 801D4DC4
  c->r[31]=c->r[3]|c->r[3]; // 801D4DC8
  W32(c->r[13]+0xFFFF9FE0u,c->r[30]); // 801D4DCC
  if (!crb(c,2)) { goto L_801D4DE4; } // 801D4DD0
  c->r[3]=c->r[13]+0xFFFF9FF8u; // 801D4DD4
  c->r[4]=0u+0x00000001u; // 801D4DD8
  c->r[5]=0u+0x00000003u; // 801D4DDC
  c->lr=0x801D4DE4u; f_8000443C(c); // 801D4DE0
L_801D4DE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4DE4
  c->lr=0x801D4DECu; f_801BE774(c); // 801D4DE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4DF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4DF4
  c->lr=c->r[0]; // 801D4DF8
  c->r[1]=c->r[1]+0x00000010u; // 801D4DFC
  return; // 801D4E00
}

// fn_801D4E04
void f_801D4E04(Ctx* __restrict c) {
  trace_call(0x801D4E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4E04
  c->r[0]=c->lr; // 801D4E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4E10
  c->r[31]=c->r[3]|c->r[3]; // 801D4E14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4E18
  c->r[30]=c->r[4]|c->r[4]; // 801D4E1C
  c->lr=0x801D4E24u; f_801BE74C(c); // 801D4E20
  cmps(c,0,(int32_t)c->r[31],0); // 801D4E24
  W32(c->r[13]+0xFFFF9FE8u,c->r[31]); // 801D4E28
  c->r[31]=c->r[3]|c->r[3]; // 801D4E2C
  W32(c->r[13]+0xFFFF9FDCu,c->r[30]); // 801D4E30
  if (!crb(c,2)) { goto L_801D4E48; } // 801D4E34
  c->r[3]=c->r[13]+0xFFFF9FF4u; // 801D4E38
  c->r[4]=0u+0x00000001u; // 801D4E3C
  c->r[5]=0u+0x00000003u; // 801D4E40
  c->lr=0x801D4E48u; f_8000443C(c); // 801D4E44
L_801D4E48:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4E48
  c->lr=0x801D4E50u; f_801BE774(c); // 801D4E4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4E50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4E54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4E58
  c->lr=c->r[0]; // 801D4E5C
  c->r[1]=c->r[1]+0x00000010u; // 801D4E60
  return; // 801D4E64
}

// fn_801D4E68
void f_801D4E68(Ctx* __restrict c) {
  trace_call(0x801D4E68u);
  c->r[0]=R32(c->r[13]+0xFFFF9FF0u); // 801D4E68
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4E6C
  c->r[0]=R32(c->r[13]+0xFFFF9FE4u); // 801D4E70
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D4E74
  return; // 801D4E78
}

// fn_801D4E7C
void f_801D4E7C(Ctx* __restrict c) {
  trace_call(0x801D4E7Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9FECu); // 801D4E7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4E80
  c->r[0]=R32(c->r[13]+0xFFFF9FE0u); // 801D4E84
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D4E88
  return; // 801D4E8C
}

// fn_801D4E90
void f_801D4E90(Ctx* __restrict c) {
  trace_call(0x801D4E90u);
  c->r[0]=R32(c->r[13]+0xFFFF9FE8u); // 801D4E90
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D4E94
  c->r[0]=R32(c->r[13]+0xFFFF9FDCu); // 801D4E98
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D4E9C
  return; // 801D4EA0
}

// __AXGetCommandListCycles
void f_801D4EA4(Ctx* __restrict c) {
  trace_call(0x801D4EA4u);
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D4EA4
  return; // 801D4EA8
}

// __AXGetCommandListAddress
void f_801D4EAC(Ctx* __restrict c) {
  trace_call(0x801D4EACu);
  c->r[4]=R32(c->r[13]+0xFFFFA018u); // 801D4EAC
  c->r[5]=0u+0x80570000u; // 801D4EB0
  c->r[5]=c->r[5]+0x00002820u; // 801D4EB4
  c->r[3]=c->r[4]+0x00000001u; // 801D4EB8
  c->r[6]=rotl(c->r[4],7)&0xFFFFFF80u; // 801D4EBC
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 801D4EC0
  c->r[4]=rotl(c->r[3],0)&0x00000001u; // 801D4EC4
  c->r[3]=c->r[5]+c->r[6]; // 801D4EC8
  c->r[0]=c->r[5]+c->r[0]; // 801D4ECC
  W32(c->r[13]+0xFFFFA018u,c->r[4]); // 801D4ED0
  W32(c->r[13]+0xFFFFA014u,c->r[0]); // 801D4ED4
  return; // 801D4ED8
}

// __AXNextFrame
void f_801D4EDC(Ctx* __restrict c) {
  trace_call(0x801D4EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4EDC
  c->r[0]=c->lr; // 801D4EE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4EE4
  c->r[0]=0u+0x00001E83u; // 801D4EE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4EEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4EF0
  c->r[30]=c->r[5]|c->r[5]; // 801D4EF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4EF8
  c->r[29]=c->r[4]|c->r[4]; // 801D4EFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D4F00
  c->r[28]=c->r[3]|c->r[3]; // 801D4F04
  c->r[31]=R32(c->r[13]+0xFFFFA014u); // 801D4F08
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D4F0C
  c->lr=0x801D4F14u; f_801D6168(c); // 801D4F10
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D4F14
  c->r[0]=0u+0x00000000u; // 801D4F18
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4F1C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D4F20
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4F24
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D4F28
  c->r[3]=c->r[3]+0x00000002u; // 801D4F2C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4F30
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D4F34
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D4F38
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4F3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D4F40
  c->r[3]=c->r[3]+0x00000002u; // 801D4F44
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4F48
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D4F4C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D4F50
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D4F54
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D4F58
  c->r[4]=c->r[4]+0x00000002u; // 801D4F5C
  c->r[3]=c->r[3]+0x0000101Eu; // 801D4F60
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D4F64
  cmps(c,0,(int32_t)c->r[0],1); // 801D4F68
  W32(c->r[13]+0xFFFFA00Cu,c->r[3]); // 801D4F6C
  if (crb(c,2)) { goto L_801D4FD8; } // 801D4F70
  if (!crb(c,0)) { goto L_801D4F84; } // 801D4F74
  cmps(c,0,(int32_t)c->r[0],0); // 801D4F78
  if (!crb(c,0)) { goto L_801D4F90; } // 801D4F7C
  goto L_801D5064; // 801D4F80
L_801D4F84:;
  cmps(c,0,(int32_t)c->r[0],3); // 801D4F84
  if (!crb(c,0)) { goto L_801D5064; } // 801D4F88
  goto L_801D5020; // 801D4F8C
L_801D4F90:;
  c->r[3]=0u+0x00000001u; // 801D4F90
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801D4F94
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D4F98
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4F9C
  c->r[3]=c->r[3]+0x00000002u; // 801D4FA0
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4FA4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D4FA8
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4FAC
  c->r[3]=c->r[3]+0x00000002u; // 801D4FB0
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4FB4
  W16(c->r[3]+0x00000000u,c->r[28]); // 801D4FB8
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D4FBC
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D4FC0
  c->r[5]=c->r[4]+0x00000002u; // 801D4FC4
  c->r[0]=c->r[3]+0x000002DDu; // 801D4FC8
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D4FCC
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D4FD0
  goto L_801D5064; // 801D4FD4
L_801D4FD8:;
  c->r[3]=0u+0x00000002u; // 801D4FD8
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801D4FDC
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D4FE0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4FE4
  c->r[3]=c->r[3]+0x00000002u; // 801D4FE8
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4FEC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D4FF0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D4FF4
  c->r[3]=c->r[3]+0x00000002u; // 801D4FF8
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D4FFC
  W16(c->r[3]+0x00000000u,c->r[28]); // 801D5000
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5004
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D5008
  c->r[5]=c->r[4]+0x00000002u; // 801D500C
  c->r[0]=c->r[3]+0x0000033Du; // 801D5010
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5014
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D5018
  goto L_801D5064; // 801D501C
L_801D5020:;
  c->r[3]=0u+0x00000003u; // 801D5020
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801D5024
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D5028
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D502C
  c->r[3]=c->r[3]+0x00000002u; // 801D5030
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5034
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5038
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D503C
  c->r[3]=c->r[3]+0x00000002u; // 801D5040
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5044
  W16(c->r[3]+0x00000000u,c->r[28]); // 801D5048
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D504C
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D5050
  c->r[5]=c->r[4]+0x00000002u; // 801D5054
  c->r[0]=c->r[3]+0x0000039Du; // 801D5058
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D505C
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D5060
L_801D5064:;
  c->lr=0x801D5068u; f_801D6DF4(c); // 801D5064
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D5068
  c->r[0]=0u+0x00000004u; // 801D506C
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5070
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5074
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5078
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D507C
  c->r[3]=c->r[3]+0x00000002u; // 801D5080
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5084
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5088
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D508C
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5090
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5094
  c->r[3]=c->r[3]+0x00000002u; // 801D5098
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D509C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D50A0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D50A4
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D50A8
  c->r[5]=c->r[3]+0x00000002u; // 801D50AC
  cmpu(c,0,c->r[0],0x00000002u); // 801D50B0
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D50B4
  if (!crb(c,2)) { goto L_801D53E0; } // 801D50B8
  c->r[3]=c->r[1]+0x00000008u; // 801D50BC
  c->lr=0x801D50C4u; f_801D47A0(c); // 801D50C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D50C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D50C8
  if (crb(c,2)) { goto L_801D524C; } // 801D50CC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D50D0
  c->r[0]=0u+0x00000008u; // 801D50D4
  c->r[3]=c->r[1]+0x00000008u; // 801D50D8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D50DC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D50E0
  c->r[0]=R16(c->r[13]+0xFFFFA004u); // 801D50E4
  c->r[4]=c->r[4]+0x00000002u; // 801D50E8
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D50EC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D50F0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D50F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D50F8
  c->r[4]=c->r[4]+0x00000002u; // 801D50FC
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5100
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5104
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5108
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D510C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5110
  c->r[4]=c->r[4]+0x00000002u; // 801D5114
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5118
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D511C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5120
  c->r[5]=c->r[4]+0x00000002u; // 801D5124
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5128
  c->lr=0x801D5130u; f_801D47F0(c); // 801D512C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5130
  c->r[3]=c->r[1]+0x00000008u; // 801D5134
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5138
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D513C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5140
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5144
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5148
  c->r[4]=c->r[4]+0x00000002u; // 801D514C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5150
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5154
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5158
  c->r[5]=c->r[4]+0x00000002u; // 801D515C
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5160
  c->lr=0x801D5168u; f_801D47D4(c); // 801D5164
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5168
  c->r[3]=c->r[1]+0x00000008u; // 801D516C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5170
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5174
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5178
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D517C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5180
  c->r[4]=c->r[4]+0x00000002u; // 801D5184
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5188
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D518C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5190
  c->r[5]=c->r[4]+0x00000002u; // 801D5194
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5198
  c->lr=0x801D51A0u; f_801D4810(c); // 801D519C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D51A0
  c->r[3]=c->r[1]+0x00000008u; // 801D51A4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D51A8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D51AC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D51B0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D51B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D51B8
  c->r[4]=c->r[4]+0x00000002u; // 801D51BC
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D51C0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D51C4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D51C8
  c->r[5]=c->r[4]+0x00000002u; // 801D51CC
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D51D0
  c->lr=0x801D51D8u; f_801D4830(c); // 801D51D4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D51D8
  c->r[3]=c->r[1]+0x00000008u; // 801D51DC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D51E0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D51E4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D51E8
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D51EC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D51F0
  c->r[4]=c->r[4]+0x00000002u; // 801D51F4
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D51F8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D51FC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5200
  c->r[5]=c->r[4]+0x00000002u; // 801D5204
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5208
  c->lr=0x801D5210u; f_801D4850(c); // 801D520C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5210
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5214
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5218
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D521C
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5220
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5224
  c->r[3]=c->r[3]+0x00000002u; // 801D5228
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D522C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5230
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5234
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D5238
  c->r[5]=c->r[4]+0x00000002u; // 801D523C
  c->r[0]=c->r[3]+0x00000BDCu; // 801D5240
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5244
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D5248
L_801D524C:;
  c->r[3]=c->r[1]+0x00000008u; // 801D524C
  c->lr=0x801D5254u; f_801D4870(c); // 801D5250
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5254
  cmps(c,0,(int32_t)c->r[0],0); // 801D5258
  if (crb(c,2)) { goto L_801D55F0; } // 801D525C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5260
  c->r[0]=0u+0x00000009u; // 801D5264
  c->r[3]=c->r[1]+0x00000008u; // 801D5268
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D526C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5270
  c->r[0]=R16(c->r[13]+0xFFFFA002u); // 801D5274
  c->r[4]=c->r[4]+0x00000002u; // 801D5278
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D527C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5280
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5284
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5288
  c->r[4]=c->r[4]+0x00000002u; // 801D528C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5290
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5294
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5298
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D529C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D52A0
  c->r[4]=c->r[4]+0x00000002u; // 801D52A4
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D52A8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D52AC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D52B0
  c->r[5]=c->r[4]+0x00000002u; // 801D52B4
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D52B8
  c->lr=0x801D52C0u; f_801D48C0(c); // 801D52BC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D52C0
  c->r[3]=c->r[1]+0x00000008u; // 801D52C4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D52C8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D52CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D52D0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D52D4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D52D8
  c->r[4]=c->r[4]+0x00000002u; // 801D52DC
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D52E0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D52E4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D52E8
  c->r[5]=c->r[4]+0x00000002u; // 801D52EC
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D52F0
  c->lr=0x801D52F8u; f_801D48A4(c); // 801D52F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D52F8
  c->r[3]=c->r[1]+0x00000008u; // 801D52FC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5300
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5304
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5308
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D530C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5310
  c->r[4]=c->r[4]+0x00000002u; // 801D5314
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5318
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D531C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5320
  c->r[5]=c->r[4]+0x00000002u; // 801D5324
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5328
  c->lr=0x801D5330u; f_801D48E0(c); // 801D532C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5330
  c->r[3]=c->r[1]+0x00000008u; // 801D5334
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5338
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D533C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5340
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5344
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5348
  c->r[4]=c->r[4]+0x00000002u; // 801D534C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5350
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5354
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5358
  c->r[5]=c->r[4]+0x00000002u; // 801D535C
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5360
  c->lr=0x801D5368u; f_801D4900(c); // 801D5364
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5368
  c->r[3]=c->r[1]+0x00000008u; // 801D536C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5370
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5374
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5378
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D537C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5380
  c->r[4]=c->r[4]+0x00000002u; // 801D5384
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5388
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D538C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5390
  c->r[5]=c->r[4]+0x00000002u; // 801D5394
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5398
  c->lr=0x801D53A0u; f_801D4920(c); // 801D539C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D53A0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D53A4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D53A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D53AC
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D53B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D53B4
  c->r[3]=c->r[3]+0x00000002u; // 801D53B8
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D53BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D53C0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D53C4
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D53C8
  c->r[5]=c->r[4]+0x00000002u; // 801D53CC
  c->r[0]=c->r[3]+0x00000BDCu; // 801D53D0
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D53D4
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D53D8
  goto L_801D55F0; // 801D53DC
L_801D53E0:;
  c->r[3]=c->r[1]+0x00000008u; // 801D53E0
  c->lr=0x801D53E8u; f_801D47A0(c); // 801D53E4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D53E8
  cmps(c,0,(int32_t)c->r[0],0); // 801D53EC
  if (crb(c,2)) { goto L_801D5490; } // 801D53F0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D53F4
  c->r[0]=0u+0x00000005u; // 801D53F8
  c->r[3]=c->r[1]+0x00000008u; // 801D53FC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5400
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5404
  c->r[0]=R16(c->r[13]+0xFFFFA004u); // 801D5408
  c->r[4]=c->r[4]+0x00000002u; // 801D540C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5410
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5414
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5418
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D541C
  c->r[4]=c->r[4]+0x00000002u; // 801D5420
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5424
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5428
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D542C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5430
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5434
  c->r[4]=c->r[4]+0x00000002u; // 801D5438
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D543C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5440
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5444
  c->r[5]=c->r[4]+0x00000002u; // 801D5448
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D544C
  c->lr=0x801D5454u; f_801D47D4(c); // 801D5450
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5454
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5458
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D545C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5460
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5464
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5468
  c->r[3]=c->r[3]+0x00000002u; // 801D546C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5470
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5474
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5478
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D547C
  c->r[5]=c->r[4]+0x00000002u; // 801D5480
  c->r[0]=c->r[3]+0x000008BBu; // 801D5484
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5488
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D548C
L_801D5490:;
  c->r[3]=c->r[1]+0x00000008u; // 801D5490
  c->lr=0x801D5498u; f_801D4870(c); // 801D5494
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5498
  cmps(c,0,(int32_t)c->r[0],0); // 801D549C
  if (crb(c,2)) { goto L_801D5540; } // 801D54A0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D54A4
  c->r[0]=0u+0x00000006u; // 801D54A8
  c->r[3]=c->r[1]+0x00000008u; // 801D54AC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D54B0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D54B4
  c->r[0]=R16(c->r[13]+0xFFFFA002u); // 801D54B8
  c->r[4]=c->r[4]+0x00000002u; // 801D54BC
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D54C0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D54C4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D54C8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D54CC
  c->r[4]=c->r[4]+0x00000002u; // 801D54D0
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D54D4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D54D8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D54DC
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D54E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D54E4
  c->r[4]=c->r[4]+0x00000002u; // 801D54E8
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D54EC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D54F0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D54F4
  c->r[5]=c->r[4]+0x00000002u; // 801D54F8
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D54FC
  c->lr=0x801D5504u; f_801D48A4(c); // 801D5500
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5504
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5508
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D550C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5510
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5514
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5518
  c->r[3]=c->r[3]+0x00000002u; // 801D551C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5520
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5524
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5528
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D552C
  c->r[5]=c->r[4]+0x00000002u; // 801D5530
  c->r[0]=c->r[3]+0x000008BBu; // 801D5534
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5538
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D553C
L_801D5540:;
  c->r[3]=c->r[1]+0x00000008u; // 801D5540
  c->lr=0x801D5548u; f_801D4940(c); // 801D5544
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5548
  cmps(c,0,(int32_t)c->r[0],0); // 801D554C
  if (crb(c,2)) { goto L_801D55F0; } // 801D5550
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5554
  c->r[0]=0u+0x00000007u; // 801D5558
  c->r[3]=c->r[1]+0x00000008u; // 801D555C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5560
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5564
  c->r[0]=R16(c->r[13]+0xFFFFA000u); // 801D5568
  c->r[4]=c->r[4]+0x00000002u; // 801D556C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5570
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D5574
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5578
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D557C
  c->r[4]=c->r[4]+0x00000002u; // 801D5580
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5584
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5588
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D558C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5590
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D5594
  c->r[4]=c->r[4]+0x00000002u; // 801D5598
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D559C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D55A0
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D55A4
  c->r[5]=c->r[4]+0x00000002u; // 801D55A8
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D55AC
  c->lr=0x801D55B4u; f_801D4974(c); // 801D55B0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D55B4
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D55B8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D55BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D55C0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D55C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D55C8
  c->r[3]=c->r[3]+0x00000002u; // 801D55CC
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D55D0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D55D4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D55D8
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D55DC
  c->r[5]=c->r[4]+0x00000002u; // 801D55E0
  c->r[0]=c->r[3]+0x000008BBu; // 801D55E4
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D55E8
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D55EC
L_801D55F0:;
  c->r[0]=R32(c->r[13]+0xFFFFA008u); // 801D55F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D55F4
  if (crb(c,2)) { goto L_801D5674; } // 801D55F8
  c->r[5]=R32(c->r[13]+0xFFFFA014u); // 801D55FC
  c->r[6]=0u+0x0000000Au; // 801D5600
  c->r[3]=0u+0x00010000u; // 801D5604
  c->r[4]=0u+0x804B0000u; // 801D5608
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D560C
  c->r[4]=c->r[4]+0x00002CA0u; // 801D5610
  c->r[3]=c->r[3]+0xFFFF8000u; // 801D5614
  c->r[5]=R32(c->r[13]+0xFFFFA014u); // 801D5618
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 801D561C
  c->r[5]=c->r[5]+0x00000002u; // 801D5620
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5624
  W16(c->r[5]+0x00000000u,c->r[3]); // 801D5628
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D562C
  c->r[3]=c->r[3]+0x00000002u; // 801D5630
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5634
  W16(c->r[3]+0x00000000u,c->r[6]); // 801D5638
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D563C
  c->r[3]=c->r[3]+0x00000002u; // 801D5640
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5644
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5648
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D564C
  c->r[3]=c->r[3]+0x00000002u; // 801D5650
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5654
  W16(c->r[3]+0x00000000u,c->r[4]); // 801D5658
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D565C
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D5660
  c->r[5]=c->r[4]+0x00000002u; // 801D5664
  c->r[0]=c->r[3]+0x0000073Au; // 801D5668
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D566C
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D5670
L_801D5674:;
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5674
  c->r[0]=0u+0x0000000Du; // 801D5678
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D567C
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5680
  c->r[3]=c->r[3]+0x00000002u; // 801D5684
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5688
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D568C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5690
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5694
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5698
  c->r[3]=c->r[3]+0x00000002u; // 801D569C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D56A0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D56A4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D56A8
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D56AC
  c->r[3]=c->r[3]+0x00000002u; // 801D56B0
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D56B4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D56B8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D56BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D56C0
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D56C4
  c->r[3]=c->r[3]+0x00000002u; // 801D56C8
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D56CC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D56D0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D56D4
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D56D8
  c->r[3]=c->r[3]+0x00000002u; // 801D56DC
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D56E0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D56E4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D56E8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D56EC
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D56F0
  c->r[3]=c->r[3]+0x00000002u; // 801D56F4
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D56F8
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D56FC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5700
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5704
  c->r[3]=c->r[3]+0x00000002u; // 801D5708
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D570C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D5710
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801D5714
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5718
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D571C
  c->r[3]=c->r[3]+0x00000002u; // 801D5720
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5724
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D5728
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D572C
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5730
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D5734
  c->r[0]=R32(c->r[13]+0xFFFFA010u); // 801D5738
  c->r[4]=c->r[4]+0x00000002u; // 801D573C
  c->r[3]=c->r[3]+0x00000199u; // 801D5740
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5744
  cmpu(c,0,c->r[0],0x00000002u); // 801D5748
  W32(c->r[13]+0xFFFFA00Cu,c->r[3]); // 801D574C
  if (!crb(c,2)) { goto L_801D57D4; } // 801D5750
  c->r[0]=0u+0x0000000Cu; // 801D5754
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801D5758
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D575C
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801D5760
  c->r[5]=R32(c->r[13]+0xFFFFA014u); // 801D5764
  c->r[4]=R16(c->r[13]+0xFFFFA006u); // 801D5768
  c->r[5]=c->r[5]+0x00000002u; // 801D576C
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5770
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D5774
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5778
  c->r[4]=c->r[4]+0x00000002u; // 801D577C
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5780
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D5784
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5788
  c->r[3]=c->r[3]+0x00000002u; // 801D578C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5790
  W16(c->r[3]+0x00000000u,c->r[28]); // 801D5794
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5798
  c->r[3]=c->r[3]+0x00000002u; // 801D579C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D57A0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D57A4
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D57A8
  c->r[3]=c->r[3]+0x00000002u; // 801D57AC
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D57B0
  W16(c->r[3]+0x00000000u,c->r[29]); // 801D57B4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D57B8
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D57BC
  c->r[5]=c->r[4]+0x00000002u; // 801D57C0
  c->r[0]=c->r[3]+0x000004ABu; // 801D57C4
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D57C8
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D57CC
  goto L_801D5850; // 801D57D0
L_801D57D4:;
  c->r[0]=0u+0x0000000Bu; // 801D57D4
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801D57D8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D57DC
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801D57E0
  c->r[5]=R32(c->r[13]+0xFFFFA014u); // 801D57E4
  c->r[4]=R16(c->r[13]+0xFFFFA006u); // 801D57E8
  c->r[5]=c->r[5]+0x00000002u; // 801D57EC
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D57F0
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D57F4
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D57F8
  c->r[4]=c->r[4]+0x00000002u; // 801D57FC
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D5800
  W16(c->r[4]+0x00000000u,c->r[3]); // 801D5804
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5808
  c->r[3]=c->r[3]+0x00000002u; // 801D580C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5810
  W16(c->r[3]+0x00000000u,c->r[28]); // 801D5814
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5818
  c->r[3]=c->r[3]+0x00000002u; // 801D581C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5820
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D5824
  c->r[3]=R32(c->r[13]+0xFFFFA014u); // 801D5828
  c->r[3]=c->r[3]+0x00000002u; // 801D582C
  W32(c->r[13]+0xFFFFA014u,c->r[3]); // 801D5830
  W16(c->r[3]+0x00000000u,c->r[29]); // 801D5834
  c->r[4]=R32(c->r[13]+0xFFFFA014u); // 801D5838
  c->r[3]=R32(c->r[13]+0xFFFFA00Cu); // 801D583C
  c->r[5]=c->r[4]+0x00000002u; // 801D5840
  c->r[0]=c->r[3]+0x00000494u; // 801D5844
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5848
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D584C
L_801D5850:;
  c->r[0]=0u+0x0000000Eu; // 801D5850
  c->r[3]=c->r[31]|c->r[31]; // 801D5854
  W16(c->r[5]+0x00000000u,c->r[0]); // 801D5858
  c->r[4]=0u+0x00000080u; // 801D585C
  c->r[5]=R32(c->r[13]+0xFFFFA014u); // 801D5860
  c->r[6]=R32(c->r[13]+0xFFFFA00Cu); // 801D5864
  c->r[5]=c->r[5]+0x00000002u; // 801D5868
  c->r[0]=c->r[6]+0x0000001Eu; // 801D586C
  W32(c->r[13]+0xFFFFA014u,c->r[5]); // 801D5870
  W32(c->r[13]+0xFFFFA00Cu,c->r[0]); // 801D5874
  c->lr=0x801D587Cu; f_801BA790(c); // 801D5878
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D587C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5880
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5884
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5888
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D588C
  c->lr=c->r[0]; // 801D5890
  c->r[1]=c->r[1]+0x00000020u; // 801D5894
  return; // 801D5898
}

// __AXClInit
void f_801D589C(Ctx* __restrict c) {
  trace_call(0x801D589Cu);
  c->r[4]=0u+0x80570000u; // 801D589C
  c->r[3]=0u+0x00010000u; // 801D58A0
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D58A4
  c->r[5]=0u+0x00000000u; // 801D58A8
  c->r[4]=c->r[4]+0x00002820u; // 801D58AC
  c->r[3]=0u+0x00000001u; // 801D58B0
  W32(c->r[13]+0xFFFFA010u,c->r[5]); // 801D58B4
  W32(c->r[13]+0xFFFFA018u,c->r[5]); // 801D58B8
  W32(c->r[13]+0xFFFFA014u,c->r[4]); // 801D58BC
  W32(c->r[13]+0xFFFFA008u,c->r[3]); // 801D58C0
  W16(c->r[13]+0xFFFFA006u,c->r[0]); // 801D58C4
  W16(c->r[13]+0xFFFFA004u,c->r[0]); // 801D58C8
  W16(c->r[13]+0xFFFFA002u,c->r[0]); // 801D58CC
  W16(c->r[13]+0xFFFFA000u,c->r[0]); // 801D58D0
  return; // 801D58D4
}

// fn_801D58D8
void f_801D58D8(Ctx* __restrict c) {
  trace_call(0x801D58D8u);
  return; // 801D58D8
}

// fn_801D58DC
void f_801D58DC(Ctx* __restrict c) {
  trace_call(0x801D58DCu);
  W32(c->r[13]+0xFFFFA010u,c->r[3]); // 801D58DC
  return; // 801D58E0
}

// fn_801D58E4
void f_801D58E4(Ctx* __restrict c) {
  trace_call(0x801D58E4u);
  c->r[3]=R32(c->r[13]+0xFFFFA010u); // 801D58E4
  return; // 801D58E8
}

// fn_801D58EC
void f_801D58EC(Ctx* __restrict c) {
  trace_call(0x801D58ECu);
  c->r[3]=R16(c->r[13]+0xFFFFA004u); // 801D58EC
  return; // 801D58F0
}

// fn_801D58F4
void f_801D58F4(Ctx* __restrict c) {
  trace_call(0x801D58F4u);
  c->r[3]=R16(c->r[13]+0xFFFFA002u); // 801D58F4
  return; // 801D58F8
}

// fn_801D58FC
void f_801D58FC(Ctx* __restrict c) {
  trace_call(0x801D58FCu);
  c->r[3]=R16(c->r[13]+0xFFFFA000u); // 801D58FC
  return; // 801D5900
}

// fn_801D5904
void f_801D5904(Ctx* __restrict c) {
  trace_call(0x801D5904u);
  W16(c->r[13]+0xFFFFA004u,c->r[3]); // 801D5904
  return; // 801D5908
}

// fn_801D590C
void f_801D590C(Ctx* __restrict c) {
  trace_call(0x801D590Cu);
  W16(c->r[13]+0xFFFFA002u,c->r[3]); // 801D590C
  return; // 801D5910
}

// fn_801D5914
void f_801D5914(Ctx* __restrict c) {
  trace_call(0x801D5914u);
  W16(c->r[13]+0xFFFFA000u,c->r[3]); // 801D5914
  return; // 801D5918
}

// __AXOutNewFrame
void f_801D591C(Ctx* __restrict c) {
  trace_call(0x801D591Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D591C
  c->r[0]=c->lr; // 801D5920
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5924
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D5928
  c->r[31]=0u+0x80570000u; // 801D592C
  c->r[31]=c->r[31]+0x00002920u; // 801D5930
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D5934
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D5938
  c->lr=0x801D5940u; f_801C257C(c); // 801D593C
  c->r[5]=c->r[31]+0x00000000u; // 801D5940
  W32(c->r[31]+0x00000000u,c->r[3]); // 801D5944
  W32(c->r[5]+0x00000004u,c->r[4]); // 801D5948
  c->lr=0x801D5950u; f_801D3B90(c); // 801D594C
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801D5950
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 801D5954
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 801D5958
  cmpu(c,0,c->r[0],0x00000001u); // 801D595C
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 801D5960
  if (!crb(c,2)) { goto L_801D5974; } // 801D5964
  c->r[3]=0u+0x00000000u; // 801D5968
  c->lr=0x801D5970u; f_801D6AE4(c); // 801D596C
  goto L_801D597C; // 801D5970
L_801D5974:;
  c->r[3]=0u+0x00005F50u; // 801D5974
  c->lr=0x801D597Cu; f_801D6AE4(c); // 801D5978
L_801D597C:;
  c->lr=0x801D5980u; f_801D624C(c); // 801D597C
  c->lr=0x801D5984u; f_801D4EAC(c); // 801D5980
  c->r[4]=0u+0xBABE0000u; // 801D5984
  c->r[29]=c->r[3]|c->r[3]; // 801D5988
  c->r[3]=c->r[4]+0x00000080u; // 801D598C
  c->lr=0x801D5994u; f_801DECD4(c); // 801D5990
L_801D5994:;
  c->lr=0x801D5998u; f_801DECA0(c); // 801D5994
  cmps(c,0,(int32_t)c->r[3],0); // 801D5998
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5994; } // 801D599C
  c->r[3]=c->r[29]|c->r[29]; // 801D59A0
  c->lr=0x801D59A8u; f_801DECD4(c); // 801D59A4
L_801D59A8:;
  c->lr=0x801D59ACu; f_801DECA0(c); // 801D59A8
  cmps(c,0,(int32_t)c->r[3],0); // 801D59AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D59A8; } // 801D59B0
  c->lr=0x801D59B8u; f_801D4124(c); // 801D59B4
  c->lr=0x801D59BCu; f_801C257C(c); // 801D59B8
  c->r[29]=c->r[31]+0x00000000u; // 801D59BC
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 801D59C0
  W32(c->r[29]+0x00000008u,c->r[3]); // 801D59C4
  c->lr=0x801D59CCu; f_801D4990(c); // 801D59C8
  c->lr=0x801D59D0u; f_801C257C(c); // 801D59CC
  W32(c->r[29]+0x00000014u,c->r[4]); // 801D59D0
  W32(c->r[29]+0x00000010u,c->r[3]); // 801D59D4
  c->lr=0x801D59DCu; f_801C257C(c); // 801D59D8
  c->r[12]=R32(c->r[13]+0xFFFFA04Cu); // 801D59DC
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801D59E0
  cmps(c,0,(int32_t)c->r[12],0); // 801D59E4
  W32(c->r[29]+0x00000018u,c->r[3]); // 801D59E8
  if (crb(c,2)) { goto L_801D59F8; } // 801D59EC
  c->ctr=c->r[12]; // 801D59F0
  if (true) { c->lr=0x801D59F8u; dispatch(c,c->ctr); } // 801D59F4
L_801D59F8:;
  c->lr=0x801D59FCu; f_801C257C(c); // 801D59F8
  c->r[7]=R32(c->r[13]+0xFFFFA028u); // 801D59FC
  c->r[8]=c->r[31]+0x00000000u; // 801D5A00
  c->r[5]=c->r[31]+0x00000040u; // 801D5A04
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D5A08
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801D5A0C
  c->r[7]=c->r[7]+0x00000012u; // 801D5A10
  c->r[6]=c->r[5]+c->r[6]; // 801D5A14
  W32(c->r[8]+0x00000024u,c->r[4]); // 801D5A18
  c->r[5]=c->r[6]+0x00000168u; // 801D5A1C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801D5A20
  c->r[4]=c->r[6]+0x000002D0u; // 801D5A24
  c->r[0]=c->r[6]+0x00000438u; // 801D5A28
  W32(c->r[8]+0x00000020u,c->r[3]); // 801D5A2C
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D5A30
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D5A34
  W32(c->r[1]+0x00000010u,c->r[4]); // 801D5A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5A3C
  if (crb(c,0)) { goto L_801D5A48; } // 801D5A40
  c->r[7]=0u+0x00000000u; // 801D5A44
L_801D5A48:;
  c->r[4]=R32(c->r[13]+0xFFFFA024u); // 801D5A48
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 801D5A4C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801D5A50
  if (crb(c,0)) { goto L_801D5A68; } // 801D5A54
  c->r[0]=c->r[3]+0x00000012u; // 801D5A58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5A5C
  if (!crb(c,0)) { goto L_801D5A68; } // 801D5A60
  W32(c->r[13]+0xFFFFA024u,c->r[7]); // 801D5A64
L_801D5A68:;
  c->r[0]=R32(c->r[13]+0xFFFFA058u); // 801D5A68
  c->r[29]=c->r[31]+0x000008E0u; // 801D5A6C
  W32(c->r[13]+0xFFFFA028u,c->r[7]); // 801D5A70
  c->r[3]=c->r[31]+0x000005E0u; // 801D5A74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801D5A78
  c->r[5]=c->r[1]+0x00000008u; // 801D5A7C
  c->r[4]=c->r[29]+c->r[0]; // 801D5A80
  c->lr=0x801D5A88u; f_801D4EDC(c); // 801D5A84
  c->r[3]=R32(c->r[13]+0xFFFFA058u); // 801D5A88
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 801D5A8C
  c->r[3]=c->r[3]+0x00000001u; // 801D5A90
  cmpu(c,0,c->r[0],0x00000001u); // 801D5A94
  W32(c->r[13]+0xFFFFA058u,c->r[3]); // 801D5A98
  if (!crb(c,2)) { goto L_801D5AC4; } // 801D5A9C
  c->r[3]=0u+0xAAAB0000u; // 801D5AA0
  c->r[4]=R32(c->r[13]+0xFFFFA058u); // 801D5AA4
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801D5AA8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 801D5AAC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D5AB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801D5AB4
  c->r[0]=c->r[4]-c->r[0]; // 801D5AB8
  W32(c->r[13]+0xFFFFA058u,c->r[0]); // 801D5ABC
  goto L_801D5AE4; // 801D5AC0
L_801D5AC4:;
  c->r[0]=R32(c->r[13]+0xFFFFA058u); // 801D5AC4
  c->r[4]=0u+0x00000180u; // 801D5AC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D5ACC
  W32(c->r[13]+0xFFFFA058u,c->r[0]); // 801D5AD0
  c->r[0]=R32(c->r[13]+0xFFFFA058u); // 801D5AD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801D5AD8
  c->r[3]=c->r[29]+c->r[0]; // 801D5ADC
  c->lr=0x801D5AE4u; f_801D3AEC(c); // 801D5AE0
L_801D5AE4:;
  c->lr=0x801D5AE8u; f_801C257C(c); // 801D5AE4
  c->r[29]=c->r[31]+0x00000000u; // 801D5AE8
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 801D5AEC
  W32(c->r[29]+0x00000028u,c->r[3]); // 801D5AF0
  c->lr=0x801D5AF8u; f_801D658C(c); // 801D5AF4
  W32(c->r[29]+0x00000030u,c->r[3]); // 801D5AF8
  c->lr=0x801D5B00u; f_801D7CC8(c); // 801D5AFC
  cmps(c,0,(int32_t)c->r[3],0); // 801D5B00
  if (crb(c,2)) { goto L_801D5B5C; } // 801D5B04
  c->r[0]=0u+0x00000007u; // 801D5B08
  c->ctr=c->r[0]; // 801D5B0C
L_801D5B10:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801D5B10
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D5B14
  c->r[0]=R8(c->r[29]+0x00000001u); // 801D5B18
  W8(c->r[3]+0x00000001u,c->r[0]); // 801D5B1C
  c->r[0]=R8(c->r[29]+0x00000002u); // 801D5B20
  W8(c->r[3]+0x00000002u,c->r[0]); // 801D5B24
  c->r[0]=R8(c->r[29]+0x00000003u); // 801D5B28
  W8(c->r[3]+0x00000003u,c->r[0]); // 801D5B2C
  c->r[0]=R8(c->r[29]+0x00000004u); // 801D5B30
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D5B34
  c->r[0]=R8(c->r[29]+0x00000005u); // 801D5B38
  W8(c->r[3]+0x00000005u,c->r[0]); // 801D5B3C
  c->r[0]=R8(c->r[29]+0x00000006u); // 801D5B40
  W8(c->r[3]+0x00000006u,c->r[0]); // 801D5B44
  c->r[0]=R8(c->r[29]+0x00000007u); // 801D5B48
  c->r[29]=c->r[29]+0x00000008u; // 801D5B4C
  W8(c->r[3]+0x00000007u,c->r[0]); // 801D5B50
  c->r[3]=c->r[3]+0x00000008u; // 801D5B54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5B10; } // 801D5B58
L_801D5B5C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5B5C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D5B60
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D5B64
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D5B68
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5B6C
  c->lr=c->r[0]; // 801D5B70
  c->r[1]=c->r[1]+0x00000030u; // 801D5B74
  return; // 801D5B78
}

// fn_801D5B7C
void f_801D5B7C(Ctx* __restrict c) {
  trace_call(0x801D5B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5B7C
  c->r[0]=c->lr; // 801D5B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5B84
  c->r[0]=R32(c->r[13]+0xFFFFA050u); // 801D5B88
  cmpu(c,0,c->r[0],0x00000001u); // 801D5B8C
  if (!crb(c,2)) { goto L_801D5BA4; } // 801D5B90
  c->r[0]=0u+0x00000000u; // 801D5B94
  W32(c->r[13]+0xFFFFA050u,c->r[0]); // 801D5B98
  c->lr=0x801D5BA0u; f_801D591C(c); // 801D5B9C
  goto L_801D5BB8; // 801D5BA0
L_801D5BA4:;
  c->r[0]=0u+0x00000002u; // 801D5BA4
  c->r[3]=0u+0x80570000u; // 801D5BA8
  W32(c->r[13]+0xFFFFA050u,c->r[0]); // 801D5BAC
  c->r[3]=c->r[3]+0x00003680u; // 801D5BB0
  c->lr=0x801D5BB8u; f_801DEE60(c); // 801D5BB4
L_801D5BB8:;
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 801D5BB8
  cmpu(c,0,c->r[0],0x00000001u); // 801D5BBC
  if (!crb(c,2)) { goto L_801D5C10; } // 801D5BC0
  c->r[0]=R32(c->r[13]+0xFFFFA054u); // 801D5BC4
  c->r[3]=0u+0x80570000u; // 801D5BC8
  c->r[3]=c->r[3]+0x00003200u; // 801D5BCC
  c->r[4]=0u+0x00000180u; // 801D5BD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801D5BD4
  c->r[3]=c->r[3]+c->r[0]; // 801D5BD8
  c->lr=0x801D5BE0u; f_801D3AEC(c); // 801D5BDC
  c->r[4]=R32(c->r[13]+0xFFFFA054u); // 801D5BE0
  c->r[3]=0u+0xAAAB0000u; // 801D5BE4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801D5BE8
  c->r[0]=R32(c->r[13]+0xFFFFA058u); // 801D5BEC
  c->r[4]=c->r[4]+0x00000001u; // 801D5BF0
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 801D5BF4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801D5BF8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 801D5BFC
  c->r[4]=c->r[4]-c->r[3]; // 801D5C00
  cmpu(c,0,c->r[4],c->r[0]); // 801D5C04
  if (crb(c,2)) { goto L_801D5C10; } // 801D5C08
  W32(c->r[13]+0xFFFFA054u,c->r[4]); // 801D5C0C
L_801D5C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5C10
  c->lr=c->r[0]; // 801D5C14
  c->r[1]=c->r[1]+0x00000010u; // 801D5C18
  return; // 801D5C1C
}

// fn_801D5C20
void f_801D5C20(Ctx* __restrict c) {
  trace_call(0x801D5C20u);
  c->r[0]=0u+0x00000001u; // 801D5C20
  W32(c->r[13]+0xFFFFA048u,c->r[0]); // 801D5C24
  return; // 801D5C28
}

// __AXDSPResumeCallback
void f_801D5C2C(Ctx* __restrict c) {
  trace_call(0x801D5C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C2C
  c->r[0]=c->lr; // 801D5C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5C34
  c->r[0]=R32(c->r[13]+0xFFFFA050u); // 801D5C38
  cmpu(c,0,c->r[0],0x00000002u); // 801D5C3C
  if (!crb(c,2)) { goto L_801D5C68; } // 801D5C40
  c->r[0]=0u+0x00000000u; // 801D5C44
  W32(c->r[13]+0xFFFFA050u,c->r[0]); // 801D5C48
  c->lr=0x801D5C50u; f_801D591C(c); // 801D5C4C
  c->r[12]=R32(c->r[13]+0xFFFFA020u); // 801D5C50
  cmps(c,0,(int32_t)c->r[12],0); // 801D5C54
  if (crb(c,2)) { goto L_801D5C70; } // 801D5C58
  c->ctr=c->r[12]; // 801D5C5C
  if (true) { c->lr=0x801D5C64u; dispatch(c,c->ctr); } // 801D5C60
  goto L_801D5C70; // 801D5C64
L_801D5C68:;
  c->r[0]=0u+0x00000001u; // 801D5C68
  W32(c->r[13]+0xFFFFA050u,c->r[0]); // 801D5C6C
L_801D5C70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5C70
  c->lr=c->r[0]; // 801D5C74
  c->r[1]=c->r[1]+0x00000010u; // 801D5C78
  return; // 801D5C7C
}

// fn_801D5C80
void f_801D5C80(Ctx* __restrict c) {
  trace_call(0x801D5C80u);
  c->r[0]=0u+0x00000001u; // 801D5C80
  c->r[3]=c->r[13]+0xFFFFA038u; // 801D5C84
  W32(c->r[13]+0xFFFFA044u,c->r[0]); // 801D5C88
  f_801C22BC(c); return; // 801D5C8C
}

// fn_801D5C90
void f_801D5C90(Ctx* __restrict c) {
  trace_call(0x801D5C90u);
  return; // 801D5C90
}

// __AXOutInitDSP
void f_801D5C94(Ctx* __restrict c) {
  stub_log(0x801D5C94u);  return;
}

// __AXOutInit
void f_801D5D84(Ctx* __restrict c) {
  trace_call(0x801D5D84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5D84
  c->r[0]=c->lr; // 801D5D88
  c->r[4]=0u+0x00000000u; // 801D5D8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5D90
  c->r[0]=0u+0x00000020u; // 801D5D94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5D98
  c->r[31]=0u+0x80570000u; // 801D5D9C
  c->r[31]=c->r[31]+0x00002920u; // 801D5DA0
  W32(c->r[13]+0xFFFFA058u,c->r[4]); // 801D5DA4
  c->r[5]=c->r[31]+0x000008E0u; // 801D5DA8
  W32(c->r[13]+0xFFFFA054u,c->r[4]); // 801D5DAC
  W32(c->r[13]+0xFFFFA030u,c->r[3]); // 801D5DB0
  W32(c->r[13]+0xFFFFA040u,c->r[4]); // 801D5DB4
  c->ctr=c->r[0]; // 801D5DB8
L_801D5DBC:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 801D5DBC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801D5DC0
  W32(c->r[5]+0x00000008u,c->r[4]); // 801D5DC4
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801D5DC8
  W32(c->r[5]+0x00000010u,c->r[4]); // 801D5DCC
  W32(c->r[5]+0x00000014u,c->r[4]); // 801D5DD0
  W32(c->r[5]+0x00000018u,c->r[4]); // 801D5DD4
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801D5DD8
  W32(c->r[5]+0x00000020u,c->r[4]); // 801D5DDC
  c->r[5]=c->r[5]+0x00000024u; // 801D5DE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5DBC; } // 801D5DE4
  c->r[3]=c->r[31]+0x000008E0u; // 801D5DE8
  c->r[4]=0u+0x00000480u; // 801D5DEC
  c->lr=0x801D5DF4u; f_801BA790(c); // 801D5DF0
  c->r[0]=0u+0x00000018u; // 801D5DF4
  c->r[4]=c->r[31]+0x000005E0u; // 801D5DF8
  c->r[3]=0u+0x00000000u; // 801D5DFC
  c->ctr=c->r[0]; // 801D5E00
L_801D5E04:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D5E04
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D5E08
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D5E0C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D5E10
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D5E14
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D5E18
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D5E1C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D5E20
  c->r[4]=c->r[4]+0x00000020u; // 801D5E24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5E04; } // 801D5E28
  c->r[3]=c->r[31]+0x000005E0u; // 801D5E2C
  c->r[4]=0u+0x00000300u; // 801D5E30
  c->lr=0x801D5E38u; f_801BA790(c); // 801D5E34
  c->r[0]=0u+0x00000024u; // 801D5E38
  c->r[4]=c->r[31]+0x00000040u; // 801D5E3C
  c->r[3]=0u+0x00000000u; // 801D5E40
  c->ctr=c->r[0]; // 801D5E44
L_801D5E48:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D5E48
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D5E4C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D5E50
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D5E54
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D5E58
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D5E5C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D5E60
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D5E64
  W32(c->r[4]+0x00000020u,c->r[3]); // 801D5E68
  W32(c->r[4]+0x00000024u,c->r[3]); // 801D5E6C
  c->r[4]=c->r[4]+0x00000028u; // 801D5E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5E48; } // 801D5E74
  c->r[3]=c->r[31]+0x00000040u; // 801D5E78
  c->r[4]=0u+0x000005A0u; // 801D5E7C
  c->lr=0x801D5E84u; f_801BA790(c); // 801D5E80
  c->lr=0x801D5E88u; f_801D5C94(c); // 801D5E84
  c->r[3]=0u+0x801D0000u; // 801D5E88
  c->r[3]=c->r[3]+0x00005B7Cu; // 801D5E8C
  c->lr=0x801D5E94u; f_801D3AA8(c); // 801D5E90
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 801D5E94
  c->r[8]=c->r[31]+0x00000040u; // 801D5E98
  c->r[4]=0u+0x00000012u; // 801D5E9C
  c->r[3]=0u+0x000000B4u; // 801D5EA0
  c->r[7]=c->r[8]+0x00000168u; // 801D5EA4
  c->r[6]=c->r[8]+0x000002D0u; // 801D5EA8
  c->r[5]=c->r[8]+0x00000438u; // 801D5EAC
  cmpu(c,0,c->r[0],0x00000001u); // 801D5EB0
  W32(c->r[1]+0x00000008u,c->r[8]); // 801D5EB4
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801D5EB8
  W32(c->r[1]+0x00000010u,c->r[6]); // 801D5EBC
  W32(c->r[1]+0x00000014u,c->r[5]); // 801D5EC0
  W32(c->r[13]+0xFFFFA024u,c->r[4]); // 801D5EC4
  W32(c->r[13]+0xFFFFA028u,c->r[4]); // 801D5EC8
  W32(c->r[13]+0xFFFFA02Cu,c->r[3]); // 801D5ECC
  if (!crb(c,2)) { goto L_801D5EEC; } // 801D5ED0
  c->r[4]=c->r[31]+0x000008E0u; // 801D5ED4
  c->r[3]=c->r[31]+0x000005E0u; // 801D5ED8
  c->r[4]=c->r[4]+0x00000300u; // 801D5EDC
  c->r[5]=c->r[1]+0x00000008u; // 801D5EE0
  c->lr=0x801D5EE8u; f_801D4EDC(c); // 801D5EE4
  goto L_801D5F00; // 801D5EE8
L_801D5EEC:;
  c->r[4]=c->r[31]+0x000008E0u; // 801D5EEC
  c->r[3]=c->r[31]+0x000005E0u; // 801D5EF0
  c->r[4]=c->r[4]+0x00000180u; // 801D5EF4
  c->r[5]=c->r[1]+0x00000008u; // 801D5EF8
  c->lr=0x801D5F00u; f_801D4EDC(c); // 801D5EFC
L_801D5F00:;
  c->r[0]=R32(c->r[13]+0xFFFFA030u); // 801D5F00
  c->r[4]=0u+0x00000001u; // 801D5F04
  c->r[3]=0u+0x00000000u; // 801D5F08
  W32(c->r[13]+0xFFFFA050u,c->r[4]); // 801D5F0C
  cmpu(c,0,c->r[0],0x00000001u); // 801D5F10
  W32(c->r[13]+0xFFFFA04Cu,c->r[3]); // 801D5F14
  if (!crb(c,2)) { goto L_801D5F44; } // 801D5F18
  c->r[3]=R32(c->r[13]+0xFFFFA054u); // 801D5F1C
  c->r[0]=c->r[31]+0x000008E0u; // 801D5F20
  c->r[4]=0u+0x00000180u; // 801D5F24
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801D5F28
  c->r[3]=c->r[0]+c->r[3]; // 801D5F2C
  c->lr=0x801D5F34u; f_801D3AEC(c); // 801D5F30
  c->r[3]=R32(c->r[13]+0xFFFFA054u); // 801D5F34
  c->r[0]=c->r[3]+0x00000001u; // 801D5F38
  W32(c->r[13]+0xFFFFA054u,c->r[0]); // 801D5F3C
  goto L_801D5F5C; // 801D5F40
L_801D5F44:;
  c->r[3]=R32(c->r[13]+0xFFFFA058u); // 801D5F44
  c->r[0]=c->r[31]+0x000008E0u; // 801D5F48
  c->r[4]=0u+0x00000180u; // 801D5F4C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801D5F50
  c->r[3]=c->r[0]+c->r[3]; // 801D5F54
  c->lr=0x801D5F5Cu; f_801D3AEC(c); // 801D5F58
L_801D5F5C:;
  c->lr=0x801D5F60u; f_801D3B68(c); // 801D5F5C
  c->r[0]=0u+0x00000000u; // 801D5F60
  W32(c->r[13]+0xFFFFA020u,c->r[0]); // 801D5F64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5F68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5F6C
  c->lr=c->r[0]; // 801D5F70
  c->r[1]=c->r[1]+0x00000020u; // 801D5F74
  return; // 801D5F78
}

// fn_801D5F7C
void f_801D5F7C(Ctx* __restrict c) {
  trace_call(0x801D5F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F7C
  c->r[0]=c->lr; // 801D5F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5F88
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5F8C
  c->lr=0x801D5F94u; f_801BE74C(c); // 801D5F90
  c->r[31]=0u+0x00000000u; // 801D5F94
  c->r[4]=0u+0x80570000u; // 801D5F98
  W32(c->r[13]+0xFFFFA04Cu,c->r[31]); // 801D5F9C
  c->r[30]=c->r[3]|c->r[3]; // 801D5FA0
  c->r[3]=c->r[4]+0x00003680u; // 801D5FA4
  c->lr=0x801D5FACu; f_801DEE20(c); // 801D5FA8
  c->r[3]=c->r[13]+0xFFFFA038u; // 801D5FAC
  c->lr=0x801D5FB4u; f_801C21D0(c); // 801D5FB0
  c->lr=0x801D5FB8u; f_801D3B7C(c); // 801D5FB4
  W32(c->r[13]+0xFFFFA020u,c->r[31]); // 801D5FB8
  c->r[3]=c->r[30]|c->r[30]; // 801D5FBC
  c->lr=0x801D5FC4u; f_801BE774(c); // 801D5FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5FC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5FC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5FCC
  c->lr=c->r[0]; // 801D5FD0
  c->r[1]=c->r[1]+0x00000010u; // 801D5FD4
  return; // 801D5FD8
}

// fn_801D5FDC
void f_801D5FDC(Ctx* __restrict c) {
  trace_call(0x801D5FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5FDC
  c->r[0]=c->lr; // 801D5FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5FE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5FEC
  c->r[30]=c->r[3]|c->r[3]; // 801D5FF0
  c->r[31]=R32(c->r[13]+0xFFFFA04Cu); // 801D5FF4
  c->lr=0x801D5FFCu; f_801BE74C(c); // 801D5FF8
  W32(c->r[13]+0xFFFFA04Cu,c->r[30]); // 801D5FFC
  c->lr=0x801D6004u; f_801BE774(c); // 801D6000
  c->r[3]=c->r[31]|c->r[31]; // 801D6004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6008
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D600C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6010
  c->lr=c->r[0]; // 801D6014
  c->r[1]=c->r[1]+0x00000010u; // 801D6018
  return; // 801D601C
}

// AXRmtGetSamplesLeft
void f_801D6020(Ctx* __restrict c) {
  trace_call(0x801D6020u);
  c->r[3]=R32(c->r[13]+0xFFFFA028u); // 801D6020
  c->r[3]=addc(c,c->r[3],0xFFFFFFDCu,0); cr0(c,c->r[3]); // 801D6024
  if (!crb(c,0)) { goto L_801D6034; } // 801D6028
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D602C
  c->r[3]=c->r[3]+c->r[0]; // 801D6030
L_801D6034:;
  c->r[0]=R32(c->r[13]+0xFFFFA024u); // 801D6034
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 801D6038
  if (!crb(c,0)) return; // 801D603C
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D6040
  c->r[3]=c->r[3]+c->r[0]; // 801D6044
  return; // 801D6048
}

// AXRmtGetSamples
void f_801D604C(Ctx* __restrict c) {
  trace_call(0x801D604Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D604C
  c->r[0]=c->lr; // 801D6050
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6054
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6058
  c->r[6]=R32(c->r[13]+0xFFFFA028u); // 801D605C
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 801D6060
  if (!crb(c,0)) { goto L_801D6070; } // 801D6064
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D6068
  c->r[31]=c->r[31]+c->r[0]; // 801D606C
L_801D6070:;
  c->r[0]=R32(c->r[13]+0xFFFFA024u); // 801D6070
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 801D6074
  if (!crb(c,0)) { goto L_801D6084; } // 801D6078
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D607C
  c->r[31]=c->r[31]+c->r[0]; // 801D6080
L_801D6084:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 801D6084
  if (!crb(c,1)) { goto L_801D6090; } // 801D6088
  goto L_801D6094; // 801D608C
L_801D6090:;
  c->r[31]=c->r[5]|c->r[5]; // 801D6090
L_801D6094:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801D6094
  c->r[5]=0u+0x80570000u; // 801D6098
  c->r[7]=R32(c->r[13]+0xFFFFA024u); // 801D609C
  c->r[5]=c->r[5]+0x00002960u; // 801D60A0
  c->r[5]=c->r[5]+c->r[0]; // 801D60A4
  c->ctr=c->r[31]; // 801D60A8
  cmps(c,0,(int32_t)c->r[31],0); // 801D60AC
  if (!crb(c,1)) { goto L_801D60DC; } // 801D60B0
L_801D60B4:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801D60B4
  c->r[7]=c->r[7]+0x00000001u; // 801D60B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 801D60BC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D60C0
  c->r[4]=c->r[4]+0x00000002u; // 801D60C4
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D60C8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801D60CC
  if (crb(c,0)) { goto L_801D60D8; } // 801D60D0
  c->r[7]=0u+0x00000000u; // 801D60D4
L_801D60D8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D60B4; } // 801D60D8
L_801D60DC:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801D60DC
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D60E0
  c->r[3]=0u+0x80570000u; // 801D60E4
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D60E8
  c->r[3]=c->r[3]+0x00002960u; // 801D60EC
  c->r[3]=c->r[3]+c->r[5]; // 801D60F0
  c->lr=0x801D60F8u; f_801BA764(c); // 801D60F4
  c->r[3]=c->r[31]|c->r[31]; // 801D60F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D60FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6100
  c->lr=c->r[0]; // 801D6104
  c->r[1]=c->r[1]+0x00000010u; // 801D6108
  return; // 801D610C
}

// AXRmtAdvancePtr
void f_801D6110(Ctx* __restrict c) {
  trace_call(0x801D6110u);
  c->r[4]=R32(c->r[13]+0xFFFFA028u); // 801D6110
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 801D6114
  if (!crb(c,0)) { goto L_801D6124; } // 801D6118
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D611C
  c->r[4]=c->r[4]+c->r[0]; // 801D6120
L_801D6124:;
  c->r[0]=R32(c->r[13]+0xFFFFA024u); // 801D6124
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 801D6128
  if (!crb(c,0)) { goto L_801D6138; } // 801D612C
  c->r[0]=R32(c->r[13]+0xFFFFA02Cu); // 801D6130
  c->r[4]=c->r[4]+c->r[0]; // 801D6134
L_801D6138:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801D6138
  if (!crb(c,1)) { goto L_801D6144; } // 801D613C
  c->r[3]=c->r[4]|c->r[4]; // 801D6140
L_801D6144:;
  c->r[0]=R32(c->r[13]+0xFFFFA024u); // 801D6144
  c->r[4]=R32(c->r[13]+0xFFFFA02Cu); // 801D6148
  c->r[0]=c->r[0]+c->r[3]; // 801D614C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D6150
  W32(c->r[13]+0xFFFFA024u,c->r[0]); // 801D6154
  if (crb(c,0)) return; // 801D6158
  c->r[0]=c->r[0]-c->r[4]; // 801D615C
  W32(c->r[13]+0xFFFFA024u,c->r[0]); // 801D6160
  return; // 801D6164
}

// __AXGetStudio
void f_801D6168(Ctx* __restrict c) {
  trace_call(0x801D6168u);
  c->r[3]=0u+0x80570000u; // 801D6168
  c->r[3]=c->r[3]+0x00003720u; // 801D616C
  return; // 801D6170
}

// __AXDepopFadeMain
void f_801D6174(Ctx* __restrict c) {
  trace_call(0x801D6174u);
  c->r[6]=0u+0x2AAB0000u; // 801D6174
  c->r[7]=R32(c->r[3]+0x00000000u); // 801D6178
  c->r[0]=c->r[6]+0xFFFFAAABu; // 801D617C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801D6180
  c->r[0]=sraw(c,c->r[0],4); // 801D6184
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801D6188
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801D618C
  if (crb(c,2)) { goto L_801D61CC; } // 801D6190
  cmps(c,0,(int32_t)c->r[0],20); // 801D6194
  if (!crb(c,1)) { goto L_801D61A0; } // 801D6198
  c->r[0]=0u+0x00000014u; // 801D619C
L_801D61A0:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801D61A0
  if (!crb(c,0)) { goto L_801D61AC; } // 801D61A4
  c->r[0]=0u+0xFFFFFFECu; // 801D61A8
L_801D61AC:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801D61AC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801D61B0
  c->r[0]=0u-c->r[0]; // 801D61B4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D61B8
  c->r[4]=c->r[4]-c->r[6]; // 801D61BC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D61C0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801D61C4
  return; // 801D61C8
L_801D61CC:;
  c->r[0]=0u+0x00000000u; // 801D61CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D61D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D61D4
  W16(c->r[5]+0x00000000u,c->r[0]); // 801D61D8
  return; // 801D61DC
}

// __AXDepopFadeRmt
void f_801D61E0(Ctx* __restrict c) {
  trace_call(0x801D61E0u);
  c->r[6]=0u+0x38E40000u; // 801D61E0
  c->r[7]=R32(c->r[3]+0x00000000u); // 801D61E4
  c->r[0]=c->r[6]+0xFFFF8E39u; // 801D61E8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801D61EC
  c->r[0]=sraw(c,c->r[0],2); // 801D61F0
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801D61F4
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801D61F8
  if (crb(c,2)) { goto L_801D6238; } // 801D61FC
  cmps(c,0,(int32_t)c->r[0],20); // 801D6200
  if (!crb(c,1)) { goto L_801D620C; } // 801D6204
  c->r[0]=0u+0x00000014u; // 801D6208
L_801D620C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801D620C
  if (!crb(c,0)) { goto L_801D6218; } // 801D6210
  c->r[0]=0u+0xFFFFFFECu; // 801D6214
L_801D6218:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801D6218
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 801D621C
  c->r[0]=0u-c->r[0]; // 801D6220
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D6224
  c->r[4]=c->r[4]-c->r[6]; // 801D6228
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D622C
  W16(c->r[5]+0x00000000u,c->r[0]); // 801D6230
  return; // 801D6234
L_801D6238:;
  c->r[0]=0u+0x00000000u; // 801D6238
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D623C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D6240
  W16(c->r[5]+0x00000000u,c->r[0]); // 801D6244
  return; // 801D6248
}

// __AXPrintStudio
void f_801D624C(Ctx* __restrict c) {
  trace_call(0x801D624Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D624C
  c->r[0]=c->lr; // 801D6250
  c->r[3]=c->r[13]+0xFFFFA0ACu; // 801D6254
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D625C
  c->r[31]=0u+0x80570000u; // 801D6260
  c->r[4]=c->r[31]+0x00003720u; // 801D6264
  c->r[5]=c->r[4]+0x00000004u; // 801D6268
  c->lr=0x801D6270u; f_801D6174(c); // 801D626C
  c->r[31]=c->r[31]+0x00003720u; // 801D6270
  c->r[3]=c->r[13]+0xFFFFA0A8u; // 801D6274
  c->r[4]=c->r[31]+0x00000006u; // 801D6278
  c->r[5]=c->r[31]+0x0000000Au; // 801D627C
  c->lr=0x801D6284u; f_801D6174(c); // 801D6280
  c->r[4]=c->r[31]+0x0000000Cu; // 801D6284
  c->r[5]=c->r[31]+0x00000010u; // 801D6288
  c->r[3]=c->r[13]+0xFFFFA0A4u; // 801D628C
  c->lr=0x801D6294u; f_801D6174(c); // 801D6290
  c->r[4]=c->r[31]+0x00000012u; // 801D6294
  c->r[5]=c->r[31]+0x00000016u; // 801D6298
  c->r[3]=c->r[13]+0xFFFFA0A0u; // 801D629C
  c->lr=0x801D62A4u; f_801D6174(c); // 801D62A0
  c->r[4]=c->r[31]+0x00000018u; // 801D62A4
  c->r[5]=c->r[31]+0x0000001Cu; // 801D62A8
  c->r[3]=c->r[13]+0xFFFFA09Cu; // 801D62AC
  c->lr=0x801D62B4u; f_801D6174(c); // 801D62B0
  c->r[4]=c->r[31]+0x0000001Eu; // 801D62B4
  c->r[5]=c->r[31]+0x00000022u; // 801D62B8
  c->r[3]=c->r[13]+0xFFFFA098u; // 801D62BC
  c->lr=0x801D62C4u; f_801D6174(c); // 801D62C0
  c->r[4]=c->r[31]+0x00000024u; // 801D62C4
  c->r[5]=c->r[31]+0x00000028u; // 801D62C8
  c->r[3]=c->r[13]+0xFFFFA094u; // 801D62CC
  c->lr=0x801D62D4u; f_801D6174(c); // 801D62D0
  c->r[4]=c->r[31]+0x0000002Au; // 801D62D4
  c->r[5]=c->r[31]+0x0000002Eu; // 801D62D8
  c->r[3]=c->r[13]+0xFFFFA090u; // 801D62DC
  c->lr=0x801D62E4u; f_801D6174(c); // 801D62E0
  c->r[4]=c->r[31]+0x00000030u; // 801D62E4
  c->r[5]=c->r[31]+0x00000034u; // 801D62E8
  c->r[3]=c->r[13]+0xFFFFA08Cu; // 801D62EC
  c->lr=0x801D62F4u; f_801D6174(c); // 801D62F0
  c->r[4]=c->r[31]+0x00000036u; // 801D62F4
  c->r[5]=c->r[31]+0x0000003Au; // 801D62F8
  c->r[3]=c->r[13]+0xFFFFA088u; // 801D62FC
  c->lr=0x801D6304u; f_801D6174(c); // 801D6300
  c->r[4]=c->r[31]+0x0000003Cu; // 801D6304
  c->r[5]=c->r[31]+0x00000040u; // 801D6308
  c->r[3]=c->r[13]+0xFFFFA084u; // 801D630C
  c->lr=0x801D6314u; f_801D6174(c); // 801D6310
  c->r[4]=c->r[31]+0x00000042u; // 801D6314
  c->r[5]=c->r[31]+0x00000046u; // 801D6318
  c->r[3]=c->r[13]+0xFFFFA080u; // 801D631C
  c->lr=0x801D6324u; f_801D6174(c); // 801D6320
  c->r[4]=c->r[31]+0x00000048u; // 801D6324
  c->r[5]=c->r[31]+0x0000004Cu; // 801D6328
  c->r[3]=c->r[13]+0xFFFFA07Cu; // 801D632C
  c->lr=0x801D6334u; f_801D61E0(c); // 801D6330
  c->r[4]=c->r[31]+0x00000054u; // 801D6334
  c->r[5]=c->r[31]+0x00000058u; // 801D6338
  c->r[3]=c->r[13]+0xFFFFA078u; // 801D633C
  c->lr=0x801D6344u; f_801D61E0(c); // 801D6340
  c->r[4]=c->r[31]+0x00000060u; // 801D6344
  c->r[5]=c->r[31]+0x00000064u; // 801D6348
  c->r[3]=c->r[13]+0xFFFFA074u; // 801D634C
  c->lr=0x801D6354u; f_801D61E0(c); // 801D6350
  c->r[4]=c->r[31]+0x0000006Cu; // 801D6354
  c->r[5]=c->r[31]+0x00000070u; // 801D6358
  c->r[3]=c->r[13]+0xFFFFA070u; // 801D635C
  c->lr=0x801D6364u; f_801D61E0(c); // 801D6360
  c->r[4]=c->r[31]+0x0000004Eu; // 801D6364
  c->r[5]=c->r[31]+0x00000052u; // 801D6368
  c->r[3]=c->r[13]+0xFFFFA06Cu; // 801D636C
  c->lr=0x801D6374u; f_801D61E0(c); // 801D6370
  c->r[4]=c->r[31]+0x0000005Au; // 801D6374
  c->r[5]=c->r[31]+0x0000005Eu; // 801D6378
  c->r[3]=c->r[13]+0xFFFFA068u; // 801D637C
  c->lr=0x801D6384u; f_801D61E0(c); // 801D6380
  c->r[4]=c->r[31]+0x00000066u; // 801D6384
  c->r[5]=c->r[31]+0x0000006Au; // 801D6388
  c->r[3]=c->r[13]+0xFFFFA064u; // 801D638C
  c->lr=0x801D6394u; f_801D61E0(c); // 801D6390
  c->r[4]=c->r[31]+0x00000072u; // 801D6394
  c->r[5]=c->r[31]+0x00000076u; // 801D6398
  c->r[3]=c->r[13]+0xFFFFA060u; // 801D639C
  c->lr=0x801D63A4u; f_801D61E0(c); // 801D63A0
  c->r[3]=c->r[31]|c->r[31]; // 801D63A4
  c->r[4]=0u+0x00000078u; // 801D63A8
  c->lr=0x801D63B0u; f_801BA790(c); // 801D63AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D63B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D63B4
  c->lr=c->r[0]; // 801D63B8
  c->r[1]=c->r[1]+0x00000010u; // 801D63BC
  return; // 801D63C0
}

// __AXSPBInit
void f_801D63C4(Ctx* __restrict c) {
  trace_call(0x801D63C4u);
  c->r[0]=0u+0x00000000u; // 801D63C4
  W32(c->r[13]+0xFFFFA060u,c->r[0]); // 801D63C8
  W32(c->r[13]+0xFFFFA064u,c->r[0]); // 801D63CC
  W32(c->r[13]+0xFFFFA068u,c->r[0]); // 801D63D0
  W32(c->r[13]+0xFFFFA06Cu,c->r[0]); // 801D63D4
  W32(c->r[13]+0xFFFFA070u,c->r[0]); // 801D63D8
  W32(c->r[13]+0xFFFFA074u,c->r[0]); // 801D63DC
  W32(c->r[13]+0xFFFFA078u,c->r[0]); // 801D63E0
  W32(c->r[13]+0xFFFFA07Cu,c->r[0]); // 801D63E4
  W32(c->r[13]+0xFFFFA080u,c->r[0]); // 801D63E8
  W32(c->r[13]+0xFFFFA084u,c->r[0]); // 801D63EC
  W32(c->r[13]+0xFFFFA088u,c->r[0]); // 801D63F0
  W32(c->r[13]+0xFFFFA08Cu,c->r[0]); // 801D63F4
  W32(c->r[13]+0xFFFFA090u,c->r[0]); // 801D63F8
  W32(c->r[13]+0xFFFFA094u,c->r[0]); // 801D63FC
  W32(c->r[13]+0xFFFFA098u,c->r[0]); // 801D6400
  W32(c->r[13]+0xFFFFA09Cu,c->r[0]); // 801D6404
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 801D6408
  W32(c->r[13]+0xFFFFA0A4u,c->r[0]); // 801D640C
  W32(c->r[13]+0xFFFFA0A8u,c->r[0]); // 801D6410
  W32(c->r[13]+0xFFFFA0ACu,c->r[0]); // 801D6414
  return; // 801D6418
}

// fn_801D641C
void f_801D641C(Ctx* __restrict c) {
  trace_call(0x801D641Cu);
  return; // 801D641C
}

// __AXDepopVoice
void f_801D6420(Ctx* __restrict c) {
  trace_call(0x801D6420u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6420
  c->r[0]=c->lr; // 801D6424
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6428
  c->r[11]=c->r[1]+0x00000020u; // 801D642C
  c->lr=0x801D6434u; f_801E795C(c); // 801D6430
  c->r[5]=R32(c->r[13]+0xFFFFA0ACu); // 801D6434
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 801D6438
  c->r[4]=R32(c->r[13]+0xFFFFA0A0u); // 801D643C
  c->r[0]=c->r[5]+c->r[0]; // 801D6440
  c->r[7]=R32(c->r[13]+0xFFFFA094u); // 801D6444
  W32(c->r[13]+0xFFFFA0ACu,c->r[0]); // 801D6448
  c->r[6]=R32(c->r[13]+0xFFFFA088u); // 801D644C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 801D6450
  c->r[5]=R32(c->r[13]+0xFFFFA0A8u); // 801D6454
  c->r[0]=c->r[4]+c->r[0]; // 801D6458
  c->r[4]=R32(c->r[13]+0xFFFFA09Cu); // 801D645C
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 801D6460
  c->r[27]=R32(c->r[13]+0xFFFFA090u); // 801D6464
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 801D6468
  c->r[28]=R32(c->r[13]+0xFFFFA084u); // 801D646C
  c->r[0]=c->r[7]+c->r[0]; // 801D6470
  c->r[29]=R32(c->r[13]+0xFFFFA0A4u); // 801D6474
  W32(c->r[13]+0xFFFFA094u,c->r[0]); // 801D6478
  c->r[30]=R32(c->r[13]+0xFFFFA098u); // 801D647C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 801D6480
  c->r[31]=R32(c->r[13]+0xFFFFA08Cu); // 801D6484
  c->r[0]=c->r[6]+c->r[0]; // 801D6488
  c->r[12]=R32(c->r[13]+0xFFFFA080u); // 801D648C
  W32(c->r[13]+0xFFFFA088u,c->r[0]); // 801D6490
  c->r[11]=R32(c->r[13]+0xFFFFA07Cu); // 801D6494
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 801D6498
  c->r[10]=R32(c->r[13]+0xFFFFA078u); // 801D649C
  c->r[0]=c->r[5]+c->r[0]; // 801D64A0
  c->r[9]=R32(c->r[13]+0xFFFFA074u); // 801D64A4
  W32(c->r[13]+0xFFFFA0A8u,c->r[0]); // 801D64A8
  c->r[8]=R32(c->r[13]+0xFFFFA070u); // 801D64AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 801D64B0
  c->r[7]=R32(c->r[13]+0xFFFFA06Cu); // 801D64B4
  c->r[0]=c->r[4]+c->r[0]; // 801D64B8
  c->r[6]=R32(c->r[13]+0xFFFFA068u); // 801D64BC
  W32(c->r[13]+0xFFFFA09Cu,c->r[0]); // 801D64C0
  c->r[5]=R32(c->r[13]+0xFFFFA064u); // 801D64C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 801D64C8
  c->r[4]=R32(c->r[13]+0xFFFFA060u); // 801D64CC
  c->r[0]=c->r[27]+c->r[0]; // 801D64D0
  W32(c->r[13]+0xFFFFA090u,c->r[0]); // 801D64D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801D64D8
  c->r[0]=c->r[28]+c->r[0]; // 801D64DC
  W32(c->r[13]+0xFFFFA084u,c->r[0]); // 801D64E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 801D64E4
  c->r[0]=c->r[29]+c->r[0]; // 801D64E8
  W32(c->r[13]+0xFFFFA0A4u,c->r[0]); // 801D64EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 801D64F0
  c->r[0]=c->r[30]+c->r[0]; // 801D64F4
  W32(c->r[13]+0xFFFFA098u,c->r[0]); // 801D64F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 801D64FC
  c->r[0]=c->r[31]+c->r[0]; // 801D6500
  W32(c->r[13]+0xFFFFA08Cu,c->r[0]); // 801D6504
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 801D6508
  c->r[0]=c->r[12]+c->r[0]; // 801D650C
  W32(c->r[13]+0xFFFFA080u,c->r[0]); // 801D6510
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 801D6514
  c->r[0]=c->r[11]+c->r[0]; // 801D6518
  c->r[11]=c->r[1]+0x00000020u; // 801D651C
  W32(c->r[13]+0xFFFFA07Cu,c->r[0]); // 801D6520
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 801D6524
  c->r[0]=c->r[10]+c->r[0]; // 801D6528
  W32(c->r[13]+0xFFFFA078u,c->r[0]); // 801D652C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 801D6530
  c->r[0]=c->r[9]+c->r[0]; // 801D6534
  W32(c->r[13]+0xFFFFA074u,c->r[0]); // 801D6538
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 801D653C
  c->r[0]=c->r[8]+c->r[0]; // 801D6540
  W32(c->r[13]+0xFFFFA070u,c->r[0]); // 801D6544
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 801D6548
  c->r[0]=c->r[7]+c->r[0]; // 801D654C
  W32(c->r[13]+0xFFFFA06Cu,c->r[0]); // 801D6550
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 801D6554
  c->r[0]=c->r[6]+c->r[0]; // 801D6558
  W32(c->r[13]+0xFFFFA068u,c->r[0]); // 801D655C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 801D6560
  c->r[0]=c->r[5]+c->r[0]; // 801D6564
  W32(c->r[13]+0xFFFFA064u,c->r[0]); // 801D6568
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 801D656C
  c->r[0]=c->r[4]+c->r[0]; // 801D6570
  W32(c->r[13]+0xFFFFA060u,c->r[0]); // 801D6574
  c->lr=0x801D657Cu; f_801E79A8(c); // 801D6578
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D657C
  c->lr=c->r[0]; // 801D6580
  c->r[1]=c->r[1]+0x00000020u; // 801D6584
  return; // 801D6588
}

// __AXGetNumVoices
void f_801D658C(Ctx* __restrict c) {
  trace_call(0x801D658Cu);
  c->r[3]=R32(c->r[13]+0xFFFFA0C0u); // 801D658C
  return; // 801D6590
}

// __AXServiceVPB
void f_801D6594(Ctx* __restrict c) {
  trace_call(0x801D6594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6594
  c->r[0]=c->lr; // 801D6598
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D659C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D65A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D65A4
  c->r[30]=c->r[3]+0x00000028u; // 801D65A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D65AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D65B0
  c->r[28]=c->r[3]|c->r[3]; // 801D65B4
  c->r[5]=R32(c->r[13]+0xFFFFA0C0u); // 801D65B8
  c->r[4]=R32(c->r[13]+0xFFFFA0B0u); // 801D65BC
  c->r[0]=c->r[5]+0x00000001u; // 801D65C0
  W32(c->r[13]+0xFFFFA0C0u,c->r[0]); // 801D65C4
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D65C8
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801D65CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D65D0
  cmps(c,0,(int32_t)c->r[29],0); // 801D65D4
  c->r[31]=c->r[4]+c->r[0]; // 801D65D8
  if (!crb(c,2)) { goto L_801D6604; } // 801D65DC
  c->r[0]=R16(c->r[31]+0x00000010u); // 801D65E0
  W16(c->r[30]+0x00000010u,c->r[0]); // 801D65E4
  c->r[0]=R16(c->r[31]+0x0000006Au); // 801D65E8
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801D65EC
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801D65F0
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801D65F4
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801D65F8
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801D65FC
  goto L_801D6AC4; // 801D6600
L_801D6604:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 801D6604
  if (crb(c,2)) { goto L_801D6620; } // 801D6608
  c->r[3]=c->r[31]|c->r[31]; // 801D660C
  c->r[4]=c->r[30]|c->r[30]; // 801D6610
  c->r[5]=0u+0x00000140u; // 801D6614
  c->lr=0x801D661Cu; f_80004338(c); // 801D6618
  goto L_801D6AC4; // 801D661C
L_801D6620:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801D6620
  if (crb(c,2)) { goto L_801D6638; } // 801D6624
  c->r[0]=R16(c->r[30]+0x00000008u); // 801D6628
  W16(c->r[31]+0x00000008u,c->r[0]); // 801D662C
  c->r[0]=R16(c->r[30]+0x0000000Au); // 801D6630
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801D6634
L_801D6638:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 801D6638
  if (crb(c,2)) { goto L_801D6648; } // 801D663C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801D6640
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D6644
L_801D6648:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 801D6648
  if (crb(c,2)) { goto L_801D665C; } // 801D664C
  c->r[0]=R16(c->r[30]+0x00000010u); // 801D6650
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D6654
  goto L_801D6664; // 801D6658
L_801D665C:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801D665C
  W16(c->r[30]+0x00000010u,c->r[0]); // 801D6660
L_801D6664:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 801D6664
  if (crb(c,2)) { goto L_801D6674; } // 801D6668
  c->r[0]=R16(c->r[30]+0x00000012u); // 801D666C
  W16(c->r[31]+0x00000012u,c->r[0]); // 801D6670
L_801D6674:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 801D6674
  if (crb(c,2)) { goto L_801D668C; } // 801D6678
  c->r[3]=c->r[31]+0x00000014u; // 801D667C
  c->r[4]=c->r[30]+0x00000014u; // 801D6680
  c->r[5]=0u+0x00000030u; // 801D6684
  c->lr=0x801D668Cu; f_80004338(c); // 801D6688
L_801D668C:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 801D668C
  if (crb(c,2)) { goto L_801D66A8; } // 801D6690
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 801D6694
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 801D6698
  c->r[0]=R16(c->r[30]+0x00000050u); // 801D669C
  W16(c->r[31]+0x00000050u,c->r[0]); // 801D66A0
  goto L_801D6730; // 801D66A4
L_801D66A8:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 801D66A8
  if (crb(c,2)) { goto L_801D6730; } // 801D66AC
  c->r[3]=R16(c->r[30]+0x00000044u); // 801D66B0
  c->r[0]=0u+0x00000000u; // 801D66B4
  W16(c->r[31]+0x00000044u,c->r[3]); // 801D66B8
  c->r[3]=R16(c->r[30]+0x00000046u); // 801D66BC
  W16(c->r[31]+0x00000046u,c->r[3]); // 801D66C0
  c->r[3]=R16(c->r[30]+0x00000048u); // 801D66C4
  W16(c->r[31]+0x00000048u,c->r[3]); // 801D66C8
  c->r[3]=R16(c->r[30]+0x0000004Au); // 801D66CC
  W16(c->r[31]+0x0000004Au,c->r[3]); // 801D66D0
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 801D66D4
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 801D66D8
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 801D66DC
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 801D66E0
  c->r[3]=R16(c->r[30]+0x00000050u); // 801D66E4
  W16(c->r[31]+0x00000050u,c->r[3]); // 801D66E8
  c->r[3]=R32(c->r[28]+0x00000024u); // 801D66EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D66F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D66F4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D66F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D66FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D6700
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D6704
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D6708
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D670C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801D6710
  W32(c->r[3]+0x00000024u,c->r[0]); // 801D6714
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D6718
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801D671C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801D6720
  W32(c->r[3]+0x00000034u,c->r[0]); // 801D6724
  W32(c->r[3]+0x00000038u,c->r[0]); // 801D6728
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D672C
L_801D6730:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 801D6730
  if (crb(c,2)) { goto L_801D6748; } // 801D6734
  c->r[3]=c->r[31]+0x00000052u; // 801D6738
  c->r[4]=c->r[30]+0x00000052u; // 801D673C
  c->r[5]=0u+0x00000018u; // 801D6740
  c->lr=0x801D6748u; f_80004338(c); // 801D6744
L_801D6748:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 801D6748
  if (crb(c,2)) { goto L_801D6764; } // 801D674C
  c->r[3]=R16(c->r[31]+0x0000006Au); // 801D6750
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801D6754
  W16(c->r[30]+0x0000006Au,c->r[3]); // 801D6758
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801D675C
  goto L_801D677C; // 801D6760
L_801D6764:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 801D6764
  if (crb(c,2)) { goto L_801D677C; } // 801D6768
  c->r[0]=R16(c->r[30]+0x0000006Au); // 801D676C
  W16(c->r[31]+0x0000006Au,c->r[0]); // 801D6770
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801D6774
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801D6778
L_801D677C:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 801D677C
  if (crb(c,2)) { goto L_801D67D4; } // 801D6780
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 801D6784
  if (crb(c,2)) { goto L_801D6794; } // 801D6788
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 801D678C
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 801D6790
L_801D6794:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 801D6794
  if (crb(c,2)) { goto L_801D67A4; } // 801D6798
  c->r[0]=R32(c->r[30]+0x00000072u); // 801D679C
  W32(c->r[31]+0x00000072u,c->r[0]); // 801D67A0
L_801D67A4:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 801D67A4
  if (crb(c,2)) { goto L_801D67B4; } // 801D67A8
  c->r[0]=R32(c->r[30]+0x00000076u); // 801D67AC
  W32(c->r[31]+0x00000076u,c->r[0]); // 801D67B0
L_801D67B4:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 801D67B4
  if (crb(c,2)) { goto L_801D67C8; } // 801D67B8
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801D67BC
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801D67C0
  goto L_801D6810; // 801D67C4
L_801D67C8:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 801D67C8
  W32(c->r[30]+0x0000007Au,c->r[0]); // 801D67CC
  goto L_801D6810; // 801D67D0
L_801D67D4:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 801D67D4
  if (crb(c,2)) { goto L_801D6800; } // 801D67D8
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 801D67DC
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 801D67E0
  c->r[0]=R32(c->r[30]+0x00000072u); // 801D67E4
  W32(c->r[31]+0x00000072u,c->r[0]); // 801D67E8
  c->r[0]=R32(c->r[30]+0x00000076u); // 801D67EC
  W32(c->r[31]+0x00000076u,c->r[0]); // 801D67F0
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801D67F4
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801D67F8
  goto L_801D6810; // 801D67FC
L_801D6800:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801D6800
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801D6804
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801D6808
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801D680C
L_801D6810:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 801D6810
  if (crb(c,2)) { goto L_801D6868; } // 801D6814
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 801D6818
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 801D681C
  c->r[0]=R32(c->r[30]+0x00000082u); // 801D6820
  W32(c->r[31]+0x00000082u,c->r[0]); // 801D6824
  c->r[0]=R32(c->r[30]+0x00000086u); // 801D6828
  W32(c->r[31]+0x00000086u,c->r[0]); // 801D682C
  c->r[0]=R32(c->r[30]+0x0000008Au); // 801D6830
  W32(c->r[31]+0x0000008Au,c->r[0]); // 801D6834
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 801D6838
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 801D683C
  c->r[0]=R32(c->r[30]+0x00000092u); // 801D6840
  W32(c->r[31]+0x00000092u,c->r[0]); // 801D6844
  c->r[0]=R32(c->r[30]+0x00000096u); // 801D6848
  W32(c->r[31]+0x00000096u,c->r[0]); // 801D684C
  c->r[0]=R32(c->r[30]+0x0000009Au); // 801D6850
  W32(c->r[31]+0x0000009Au,c->r[0]); // 801D6854
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 801D6858
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 801D685C
  c->r[0]=R32(c->r[30]+0x000000A2u); // 801D6860
  W32(c->r[31]+0x000000A2u,c->r[0]); // 801D6864
L_801D6868:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 801D6868
  if (crb(c,2)) { goto L_801D6884; } // 801D686C
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801D6870
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801D6874
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801D6878
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801D687C
  goto L_801D68C4; // 801D6880
L_801D6884:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 801D6884
  if (crb(c,2)) { goto L_801D68C4; } // 801D6888
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801D688C
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801D6890
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801D6894
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801D6898
  c->r[0]=R16(c->r[30]+0x000000AAu); // 801D689C
  W16(c->r[31]+0x000000AAu,c->r[0]); // 801D68A0
  c->r[0]=R16(c->r[30]+0x000000ACu); // 801D68A4
  W16(c->r[31]+0x000000ACu,c->r[0]); // 801D68A8
  c->r[0]=R16(c->r[30]+0x000000AEu); // 801D68AC
  W16(c->r[31]+0x000000AEu,c->r[0]); // 801D68B0
  c->r[0]=R16(c->r[30]+0x000000B0u); // 801D68B4
  W16(c->r[31]+0x000000B0u,c->r[0]); // 801D68B8
  c->r[0]=R16(c->r[30]+0x000000B2u); // 801D68BC
  W16(c->r[31]+0x000000B2u,c->r[0]); // 801D68C0
L_801D68C4:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 801D68C4
  if (crb(c,2)) { goto L_801D68E4; } // 801D68C8
  c->r[0]=R16(c->r[30]+0x000000B4u); // 801D68CC
  W16(c->r[31]+0x000000B4u,c->r[0]); // 801D68D0
  c->r[0]=R16(c->r[30]+0x000000B6u); // 801D68D4
  W16(c->r[31]+0x000000B6u,c->r[0]); // 801D68D8
  c->r[0]=R16(c->r[30]+0x000000B8u); // 801D68DC
  W16(c->r[31]+0x000000B8u,c->r[0]); // 801D68E0
L_801D68E4:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 801D68E4
  if (crb(c,2)) { goto L_801D6900; } // 801D68E8
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801D68EC
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801D68F0
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801D68F4
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801D68F8
  goto L_801D6928; // 801D68FC
L_801D6900:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 801D6900
  if (crb(c,2)) { goto L_801D6928; } // 801D6904
  c->r[0]=R16(c->r[30]+0x000000BAu); // 801D6908
  W16(c->r[31]+0x000000BAu,c->r[0]); // 801D690C
  c->r[0]=R16(c->r[30]+0x000000BCu); // 801D6910
  W16(c->r[31]+0x000000BCu,c->r[0]); // 801D6914
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801D6918
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801D691C
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801D6920
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801D6924
L_801D6928:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 801D6928
  if (crb(c,2)) { goto L_801D695C; } // 801D692C
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801D6930
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801D6934
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801D6938
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801D693C
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801D6940
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801D6944
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801D6948
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801D694C
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801D6950
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801D6954
  goto L_801D69B4; // 801D6958
L_801D695C:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 801D695C
  if (crb(c,2)) { goto L_801D69B4; } // 801D6960
  c->r[0]=R16(c->r[30]+0x000000C2u); // 801D6964
  W16(c->r[31]+0x000000C2u,c->r[0]); // 801D6968
  c->r[0]=R16(c->r[30]+0x000000C4u); // 801D696C
  W16(c->r[31]+0x000000C4u,c->r[0]); // 801D6970
  c->r[0]=R16(c->r[30]+0x000000C6u); // 801D6974
  W16(c->r[31]+0x000000C6u,c->r[0]); // 801D6978
  c->r[0]=R16(c->r[30]+0x000000C8u); // 801D697C
  W16(c->r[31]+0x000000C8u,c->r[0]); // 801D6980
  c->r[0]=R16(c->r[30]+0x000000CAu); // 801D6984
  W16(c->r[31]+0x000000CAu,c->r[0]); // 801D6988
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801D698C
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801D6990
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801D6994
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801D6998
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801D699C
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801D69A0
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801D69A4
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801D69A8
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801D69AC
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801D69B0
L_801D69B4:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 801D69B4
  if (crb(c,2)) { goto L_801D69C4; } // 801D69B8
  c->r[0]=R16(c->r[30]+0x000000D6u); // 801D69BC
  W16(c->r[31]+0x000000D6u,c->r[0]); // 801D69C0
L_801D69C4:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 801D69C4
  if (crb(c,2)) { goto L_801D69D4; } // 801D69C8
  c->r[0]=R16(c->r[30]+0x000000D8u); // 801D69CC
  W16(c->r[31]+0x000000D8u,c->r[0]); // 801D69D0
L_801D69D4:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 801D69D4
  if (crb(c,2)) { goto L_801D69EC; } // 801D69D8
  c->r[3]=c->r[31]+0x000000DAu; // 801D69DC
  c->r[4]=c->r[30]+0x000000DAu; // 801D69E0
  c->r[5]=0u+0x00000020u; // 801D69E4
  c->lr=0x801D69ECu; f_80004338(c); // 801D69E8
L_801D69EC:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 801D69EC
  if (crb(c,2)) { goto L_801D6A04; } // 801D69F0
  c->r[3]=c->r[31]+0x000000FAu; // 801D69F4
  c->r[4]=c->r[30]+0x000000FAu; // 801D69F8
  c->r[5]=0u+0x00000010u; // 801D69FC
  c->lr=0x801D6A04u; f_80004338(c); // 801D6A00
L_801D6A04:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 801D6A04
  if (crb(c,2)) { goto L_801D6A1C; } // 801D6A08
  c->r[3]=c->r[31]+0x0000010Au; // 801D6A0C
  c->r[4]=c->r[30]+0x0000010Au; // 801D6A10
  c->r[5]=0u+0x0000000Au; // 801D6A14
  c->lr=0x801D6A1Cu; f_80004338(c); // 801D6A18
L_801D6A1C:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 801D6A1C
  if (crb(c,2)) { goto L_801D6A38; } // 801D6A20
  c->r[0]=R16(c->r[30]+0x00000118u); // 801D6A24
  W16(c->r[31]+0x00000118u,c->r[0]); // 801D6A28
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801D6A2C
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801D6A30
  goto L_801D6AC4; // 801D6A34
L_801D6A38:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 801D6A38
  if (crb(c,2)) { goto L_801D6A6C; } // 801D6A3C
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801D6A40
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801D6A44
  c->r[0]=R16(c->r[30]+0x00000120u); // 801D6A48
  W16(c->r[31]+0x00000120u,c->r[0]); // 801D6A4C
  c->r[0]=R16(c->r[30]+0x00000122u); // 801D6A50
  W16(c->r[31]+0x00000122u,c->r[0]); // 801D6A54
  c->r[0]=R16(c->r[30]+0x00000124u); // 801D6A58
  W16(c->r[31]+0x00000124u,c->r[0]); // 801D6A5C
  c->r[0]=R16(c->r[30]+0x00000126u); // 801D6A60
  W16(c->r[31]+0x00000126u,c->r[0]); // 801D6A64
  goto L_801D6AC4; // 801D6A68
L_801D6A6C:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 801D6A6C
  if (crb(c,2)) { goto L_801D6AC4; } // 801D6A70
  c->r[0]=R16(c->r[30]+0x00000114u); // 801D6A74
  W16(c->r[31]+0x00000114u,c->r[0]); // 801D6A78
  c->r[0]=R16(c->r[30]+0x00000116u); // 801D6A7C
  W16(c->r[31]+0x00000116u,c->r[0]); // 801D6A80
  c->r[0]=R16(c->r[30]+0x00000118u); // 801D6A84
  W16(c->r[31]+0x00000118u,c->r[0]); // 801D6A88
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801D6A8C
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801D6A90
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 801D6A94
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 801D6A98
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801D6A9C
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801D6AA0
  c->r[0]=R16(c->r[30]+0x00000120u); // 801D6AA4
  W16(c->r[31]+0x00000120u,c->r[0]); // 801D6AA8
  c->r[0]=R16(c->r[30]+0x00000122u); // 801D6AAC
  W16(c->r[31]+0x00000122u,c->r[0]); // 801D6AB0
  c->r[0]=R16(c->r[30]+0x00000124u); // 801D6AB4
  W16(c->r[31]+0x00000124u,c->r[0]); // 801D6AB8
  c->r[0]=R16(c->r[30]+0x00000126u); // 801D6ABC
  W16(c->r[31]+0x00000126u,c->r[0]); // 801D6AC0
L_801D6AC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6AC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6AC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6ACC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D6AD0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D6AD4
  c->lr=c->r[0]; // 801D6AD8
  c->r[1]=c->r[1]+0x00000020u; // 801D6ADC
  return; // 801D6AE0
}

// __AXSyncPBs
void f_801D6AE4(Ctx* __restrict c) {
  trace_call(0x801D6AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6AE4
  c->r[0]=c->lr; // 801D6AE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6AEC
  c->r[11]=c->r[1]+0x00000030u; // 801D6AF0
  c->lr=0x801D6AF8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6AF4
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6AF8
  c->r[29]=0u+0x00000000u; // 801D6AFC
  c->r[25]=c->r[3]|c->r[3]; // 801D6B00
  W32(c->r[13]+0xFFFFA0C0u,c->r[29]); // 801D6B04
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6B08
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6B0C
  c->lr=0x801D6B14u; f_801BA764(c); // 801D6B10
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6B14
  c->r[3]=R32(c->r[13]+0xFFFFA0B4u); // 801D6B18
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801D6B1C
  c->lr=0x801D6B24u; f_801BA764(c); // 801D6B20
  c->lr=0x801D6B28u; f_801D4EA4(c); // 801D6B24
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6B28
  c->r[31]=0u+0x804B0000u; // 801D6B2C
  c->r[30]=0u+0x804B0000u; // 801D6B30
  c->r[27]=0u+0x0000001Fu; // 801D6B34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 801D6B38
  c->r[31]=c->r[31]+0x00002C90u; // 801D6B3C
  c->r[30]=c->r[30]+0x00002C10u; // 801D6B40
  c->r[0]=c->r[3]+c->r[0]; // 801D6B44
  c->r[3]=c->r[0]+c->r[25]; // 801D6B48
  c->r[28]=c->r[3]+0x00000020u; // 801D6B4C
L_801D6B50:;
  c->r[3]=c->r[27]|c->r[27]; // 801D6B50
  c->lr=0x801D6B58u; f_801D4110(c); // 801D6B54
  c->r[26]=c->r[3]|c->r[3]; // 801D6B58
  goto L_801D6D50; // 801D6B5C
L_801D6B60:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801D6B60
  cmpu(c,0,c->r[0],0x00000001u); // 801D6B64
  if (!crb(c,2)) { goto L_801D6B70; } // 801D6B68
  c->r[28]=c->r[28]+0x00000081u; // 801D6B6C
L_801D6B70:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 801D6B70
  cmps(c,0,(int32_t)c->r[0],0); // 801D6B74
  if (crb(c,2)) { goto L_801D6B90; } // 801D6B78
  c->r[0]=R32(c->r[26]+0x00000018u); // 801D6B7C
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6B80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6B84
  c->r[3]=c->r[3]+c->r[0]; // 801D6B88
  c->lr=0x801D6B90u; f_801D6420(c); // 801D6B8C
L_801D6B90:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 801D6B90
  cmpu(c,0,c->r[0],0x00000001u); // 801D6B94
  if (!crb(c,2)) { goto L_801D6D3C; } // 801D6B98
  c->r[0]=R16(c->r[26]+0x000000E2u); // 801D6B9C
  c->r[28]=c->r[28]+0x00000183u; // 801D6BA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6BA4
  if (crb(c,2)) { goto L_801D6BB0; } // 801D6BA8
  c->r[28]=c->r[28]+0x00000135u; // 801D6BAC
L_801D6BB0:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 801D6BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6BB4
  if (crb(c,2)) { goto L_801D6BC0; } // 801D6BB8
  c->r[28]=c->r[28]+0x00000400u; // 801D6BBC
L_801D6BC0:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801D6BC0
  cmpu(c,0,c->r[0],0x00000001u); // 801D6BC4
  if (!crb(c,2)) { goto L_801D6BD0; } // 801D6BC8
  c->r[28]=c->r[28]+0x0000001Bu; // 801D6BCC
L_801D6BD0:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 801D6BD0
  c->r[0]=R16(c->r[26]+0x000000CEu); // 801D6BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D6BD8
  c->r[4]=R16(c->r[26]+0x000000D0u); // 801D6BDC
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 801D6BE0
  if (!crb(c,2)) { goto L_801D6C00; } // 801D6BE4
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801D6BE8
  c->r[3]=c->r[3]+0x00010000u; // 801D6BEC
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D6BF0
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801D6BF4
  c->r[0]=c->r[3]+0x00000619u; // 801D6BF8
  goto L_801D6C20; // 801D6BFC
L_801D6C00:;
  cmpu(c,0,c->r[3],0x00000001u); // 801D6C00
  c->r[0]=0u+0x0000025Du; // 801D6C04
  if (!crb(c,2)) { goto L_801D6C20; } // 801D6C08
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801D6C0C
  c->r[3]=c->r[3]+0x00010000u; // 801D6C10
  c->r[0]=c->r[3]+0xFFFF8000u; // 801D6C14
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801D6C18
  c->r[0]=c->r[3]+0x000005BAu; // 801D6C1C
L_801D6C20:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 801D6C20
  c->r[28]=c->r[28]+c->r[0]; // 801D6C24
  c->r[0]=R16(c->r[26]+0x000000FEu); // 801D6C28
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 801D6C2C
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 801D6C30
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 801D6C34
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 801D6C38
  cmpu(c,0,c->r[0],0x00000001u); // 801D6C3C
  c->r[5]=R32(c->r[30]+c->r[5]); // 801D6C40
  c->r[0]=R32(c->r[30]+c->r[3]); // 801D6C44
  c->r[6]=R32(c->r[30]+c->r[6]); // 801D6C48
  c->r[4]=R32(c->r[30]+c->r[4]); // 801D6C4C
  c->r[0]=c->r[5]+c->r[0]; // 801D6C50
  c->r[3]=c->r[28]+c->r[6]; // 801D6C54
  c->r[0]=c->r[4]+c->r[0]; // 801D6C58
  c->r[28]=c->r[3]+c->r[0]; // 801D6C5C
  if (!crb(c,2)) { goto L_801D6CEC; } // 801D6C60
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 801D6C64
  c->r[28]=c->r[28]+0x00000265u; // 801D6C68
  cmpu(c,0,c->r[0],0x00000001u); // 801D6C6C
  if (!crb(c,2)) { goto L_801D6C7C; } // 801D6C70
  c->r[28]=c->r[28]+0x00000076u; // 801D6C74
  goto L_801D6C88; // 801D6C78
L_801D6C7C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D6C7C
  if (!crb(c,2)) { goto L_801D6C88; } // 801D6C80
  c->r[28]=c->r[28]+0x00000342u; // 801D6C84
L_801D6C88:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 801D6C88
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 801D6C8C
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 801D6C90
  c->r[4]=R32(c->r[31]+c->r[4]); // 801D6C94
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 801D6C98
  c->r[0]=R32(c->r[31]+c->r[0]); // 801D6C9C
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 801D6CA0
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 801D6CA4
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 801D6CA8
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 801D6CAC
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 801D6CB0
  c->r[7]=R32(c->r[31]+c->r[7]); // 801D6CB4
  c->r[0]=c->r[4]+c->r[0]; // 801D6CB8
  c->r[3]=R32(c->r[31]+c->r[3]); // 801D6CBC
  c->r[9]=R32(c->r[31]+c->r[9]); // 801D6CC0
  c->r[7]=c->r[28]+c->r[7]; // 801D6CC4
  c->r[8]=R32(c->r[31]+c->r[8]); // 801D6CC8
  c->r[0]=c->r[3]+c->r[0]; // 801D6CCC
  c->r[6]=R32(c->r[31]+c->r[6]); // 801D6CD0
  c->r[4]=R32(c->r[31]+c->r[5]); // 801D6CD4
  c->r[8]=c->r[9]+c->r[8]; // 801D6CD8
  c->r[3]=c->r[8]+c->r[7]; // 801D6CDC
  c->r[4]=c->r[6]+c->r[4]; // 801D6CE0
  c->r[0]=c->r[4]+c->r[0]; // 801D6CE4
  c->r[28]=c->r[3]+c->r[0]; // 801D6CE8
L_801D6CEC:;
  c->r[0]=R32(c->r[13]+0xFFFFA0C8u); // 801D6CEC
  cmpu(c,0,c->r[0],c->r[28]); // 801D6CF0
  if (!crb(c,1)) { goto L_801D6D04; } // 801D6CF4
  c->r[3]=c->r[26]|c->r[26]; // 801D6CF8
  c->lr=0x801D6D00u; f_801D6594(c); // 801D6CFC
  goto L_801D6D44; // 801D6D00
L_801D6D04:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 801D6D04
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6D0C
  c->r[25]=c->r[3]+c->r[0]; // 801D6D10
  c->r[0]=R16(c->r[25]+0x00000010u); // 801D6D14
  cmpu(c,0,c->r[0],0x00000001u); // 801D6D18
  if (!crb(c,2)) { goto L_801D6D28; } // 801D6D1C
  c->r[3]=c->r[25]|c->r[25]; // 801D6D20
  c->lr=0x801D6D28u; f_801D6420(c); // 801D6D24
L_801D6D28:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 801D6D28
  c->r[3]=c->r[26]|c->r[26]; // 801D6D2C
  W16(c->r[25]+0x00000010u,c->r[29]); // 801D6D30
  c->lr=0x801D6D38u; f_801D434C(c); // 801D6D34
  goto L_801D6D44; // 801D6D38
L_801D6D3C:;
  c->r[3]=c->r[26]|c->r[26]; // 801D6D3C
  c->lr=0x801D6D44u; f_801D6594(c); // 801D6D40
L_801D6D44:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 801D6D44
  W32(c->r[26]+0x00000020u,c->r[29]); // 801D6D48
  c->r[26]=R32(c->r[26]+0x00000000u); // 801D6D4C
L_801D6D50:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D6D50
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6B60; } // 801D6D54
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 801D6D58
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6B50; } // 801D6D5C
  W32(c->r[13]+0xFFFFA0C4u,c->r[28]); // 801D6D60
  c->r[3]=0u+0x00000000u; // 801D6D64
  c->lr=0x801D6D6Cu; f_801D4110(c); // 801D6D68
  c->r[25]=c->r[3]|c->r[3]; // 801D6D6C
  c->r[26]=0u+0x00000000u; // 801D6D70
  goto L_801D6DB4; // 801D6D74
L_801D6D78:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 801D6D78
  cmps(c,0,(int32_t)c->r[0],0); // 801D6D7C
  if (crb(c,2)) { goto L_801D6D98; } // 801D6D80
  c->r[0]=R32(c->r[25]+0x00000018u); // 801D6D84
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6D88
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6D8C
  c->r[3]=c->r[3]+c->r[0]; // 801D6D90
  c->lr=0x801D6D98u; f_801D6420(c); // 801D6D94
L_801D6D98:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 801D6D98
  c->r[0]=R32(c->r[25]+0x00000018u); // 801D6D9C
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6DA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6DA4
  c->r[3]=c->r[3]+c->r[0]; // 801D6DA8
  W16(c->r[3]+0x00000010u,c->r[26]); // 801D6DAC
  c->r[25]=R32(c->r[25]+0x00000000u); // 801D6DB0
L_801D6DB4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D6DB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6D78; } // 801D6DB8
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6DBC
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6DC0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D6DC4
  c->lr=0x801D6DCCu; f_801BA790(c); // 801D6DC8
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6DCC
  c->r[3]=R32(c->r[13]+0xFFFFA0B4u); // 801D6DD0
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801D6DD4
  c->lr=0x801D6DDCu; f_801BA790(c); // 801D6DD8
  c->r[11]=c->r[1]+0x00000030u; // 801D6DDC
  c->lr=0x801D6DE4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6DE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6DE4
  c->lr=c->r[0]; // 801D6DE8
  c->r[1]=c->r[1]+0x00000030u; // 801D6DEC
  return; // 801D6DF0
}

// __AXGetPBs
void f_801D6DF4(Ctx* __restrict c) {
  trace_call(0x801D6DF4u);
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D6DF4
  return; // 801D6DF8
}

// __AXSetPBDefault
void f_801D6DFC(Ctx* __restrict c) {
  trace_call(0x801D6DFCu);
  c->r[4]=0u+0x18A80000u; // 801D6DFC
  c->r[5]=0u+0x00000000u; // 801D6E00
  c->r[0]=c->r[4]+0x00000024u; // 801D6E04
  W16(c->r[3]+0x00000038u,c->r[5]); // 801D6E08
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 801D6E0C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D6E10
  W16(c->r[3]+0x000000E2u,c->r[5]); // 801D6E14
  W16(c->r[3]+0x000000EAu,c->r[5]); // 801D6E18
  W16(c->r[3]+0x000000FEu,c->r[5]); // 801D6E1C
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 801D6E20
  W16(c->r[3]+0x00000132u,c->r[5]); // 801D6E24
  W16(c->r[3]+0x00000134u,c->r[5]); // 801D6E28
  W16(c->r[3]+0x00000136u,c->r[5]); // 801D6E2C
  W16(c->r[3]+0x00000138u,c->r[5]); // 801D6E30
  W16(c->r[3]+0x0000013Au,c->r[5]); // 801D6E34
  return; // 801D6E38
}

// __AXVPBInit
void f_801D6E3C(Ctx* __restrict c) {
  trace_call(0x801D6E3Cu);
  c->r[5]=0u+0x80570000u; // 801D6E3C
  c->r[4]=0u+0x80580000u; // 801D6E40
  c->r[3]=0u+0x80580000u; // 801D6E44
  c->r[0]=0u+0x00000060u; // 801D6E48
  c->r[5]=c->r[5]+0x000037A0u; // 801D6E4C
  c->r[4]=c->r[4]+0xFFFFAFA0u; // 801D6E50
  c->r[3]=c->r[3]+0xFFFFC7A0u; // 801D6E54
  W32(c->r[13]+0xFFFFA0BCu,c->r[0]); // 801D6E58
  W32(c->r[13]+0xFFFFA0B0u,c->r[5]); // 801D6E5C
  W32(c->r[13]+0xFFFFA0B4u,c->r[4]); // 801D6E60
  W32(c->r[13]+0xFFFFA0B8u,c->r[3]); // 801D6E64
  f_801D6EB0(c); return; // 801D6E68
}

// fn_801D6E6C
void f_801D6E6C(Ctx* __restrict c) {
  trace_call(0x801D6E6Cu);
  cmpu(c,0,c->r[3],0x00000060u); // 801D6E6C
  if (crb(c,1)) return; // 801D6E70
  cmps(c,0,(int32_t)c->r[4],0); // 801D6E74
  if (crb(c,2)) return; // 801D6E78
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D6E7C
  if (crb(c,2)) { goto L_801D6E88; } // 801D6E80
  return; // 801D6E84
L_801D6E88:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)320); // 801D6E88
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801D6E8C
  W32(c->r[13]+0xFFFFA0BCu,c->r[3]); // 801D6E90
  c->r[3]=c->r[4]+c->r[5]; // 801D6E94
  W32(c->r[13]+0xFFFFA0B0u,c->r[4]); // 801D6E98
  W32(c->r[13]+0xFFFFA0B4u,c->r[3]); // 801D6E9C
  c->r[3]=c->r[3]+c->r[0]; // 801D6EA0
  W32(c->r[13]+0xFFFFA0B8u,c->r[3]); // 801D6EA4
  f_801D6EB0(c); return; // 801D6EA8
  return; // 801D6EAC
}

// __AXVPBInitCommon
void f_801D6EB0(Ctx* __restrict c) {
  trace_call(0x801D6EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6EB0
  c->r[0]=c->lr; // 801D6EB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6EB8
  c->r[11]=c->r[1]+0x00000030u; // 801D6EBC
  c->lr=0x801D6EC4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6EC0
  c->r[4]=0u+0x80000000u; // 801D6EC4
  c->r[3]=0u+0x89050000u; // 801D6EC8
  c->r[4]=R32(c->r[4]+0x000000F8u); // 801D6ECC
  c->r[5]=c->r[3]+0xFFFFFD51u; // 801D6ED0
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6ED4
  c->r[3]=0u+0x00000000u; // 801D6ED8
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 801D6EDC
  W32(c->r[13]+0xFFFFA0C4u,c->r[3]); // 801D6EE0
  c->r[7]=R32(c->r[13]+0xFFFFA0B0u); // 801D6EE4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801D6EE8
  c->r[0]=c->r[4]-c->r[5]; // 801D6EEC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D6EF0
  c->r[0]=c->r[0]+c->r[5]; // 801D6EF4
  cmps(c,0,(int32_t)c->r[6],0); // 801D6EF8
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 801D6EFC
  W32(c->r[13]+0xFFFFA0C8u,c->r[0]); // 801D6F00
  if (crb(c,2)) { goto L_801D6F54; } // 801D6F04
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801D6F08
  c->ctr=c->r[0]; // 801D6F0C
  if (crb(c,2)) { goto L_801D6F44; } // 801D6F10
L_801D6F14:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801D6F14
  W32(c->r[7]+0x00000004u,c->r[3]); // 801D6F18
  W32(c->r[7]+0x00000008u,c->r[3]); // 801D6F1C
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 801D6F20
  W32(c->r[7]+0x00000010u,c->r[3]); // 801D6F24
  W32(c->r[7]+0x00000014u,c->r[3]); // 801D6F28
  W32(c->r[7]+0x00000018u,c->r[3]); // 801D6F2C
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 801D6F30
  c->r[7]=c->r[7]+0x00000020u; // 801D6F34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6F14; } // 801D6F38
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801D6F3C
  if (crb(c,2)) { goto L_801D6F54; } // 801D6F40
L_801D6F44:;
  c->ctr=c->r[6]; // 801D6F44
L_801D6F48:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801D6F48
  c->r[7]=c->r[7]+0x00000004u; // 801D6F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6F48; } // 801D6F50
L_801D6F54:;
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6F54
  c->r[3]=0u+0x00000000u; // 801D6F58
  c->r[4]=R32(c->r[13]+0xFFFFA0B4u); // 801D6F5C
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 801D6F60
  if (crb(c,2)) { goto L_801D6FB4; } // 801D6F64
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801D6F68
  c->ctr=c->r[0]; // 801D6F6C
  if (crb(c,2)) { goto L_801D6FA4; } // 801D6F70
L_801D6F74:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D6F74
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D6F78
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D6F7C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D6F80
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D6F84
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D6F88
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D6F8C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D6F90
  c->r[4]=c->r[4]+0x00000020u; // 801D6F94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6F74; } // 801D6F98
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801D6F9C
  if (crb(c,2)) { goto L_801D6FB4; } // 801D6FA0
L_801D6FA4:;
  c->ctr=c->r[5]; // 801D6FA4
L_801D6FA8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D6FA8
  c->r[4]=c->r[4]+0x00000004u; // 801D6FAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6FA8; } // 801D6FB0
L_801D6FB4:;
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D6FB4
  c->r[3]=0u+0x00000000u; // 801D6FB8
  c->r[4]=R32(c->r[13]+0xFFFFA0B8u); // 801D6FBC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 801D6FC0
  cmps(c,0,(int32_t)c->r[5],0); // 801D6FC4
  if (crb(c,2)) { goto L_801D7018; } // 801D6FC8
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801D6FCC
  c->ctr=c->r[0]; // 801D6FD0
  if (crb(c,2)) { goto L_801D7008; } // 801D6FD4
L_801D6FD8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D6FD8
  W32(c->r[4]+0x00000004u,c->r[3]); // 801D6FDC
  W32(c->r[4]+0x00000008u,c->r[3]); // 801D6FE0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801D6FE4
  W32(c->r[4]+0x00000010u,c->r[3]); // 801D6FE8
  W32(c->r[4]+0x00000014u,c->r[3]); // 801D6FEC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801D6FF0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801D6FF4
  c->r[4]=c->r[4]+0x00000020u; // 801D6FF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6FD8; } // 801D6FFC
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801D7000
  if (crb(c,2)) { goto L_801D7018; } // 801D7004
L_801D7008:;
  c->ctr=c->r[5]; // 801D7008
L_801D700C:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D700C
  c->r[4]=c->r[4]+0x00000004u; // 801D7010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D700C; } // 801D7014
L_801D7018:;
  c->r[3]=0u+0x18A80000u; // 801D7018
  c->r[31]=0u+0x00000000u; // 801D701C
  c->r[29]=c->r[3]+0x00000024u; // 801D7020
  c->r[27]=0u+0x00000000u; // 801D7024
  c->r[26]=0u+0x00000000u; // 801D7028
  c->r[25]=0u+0x00000000u; // 801D702C
  c->r[28]=0u+0x00000000u; // 801D7030
  c->r[30]=0u+0x00000001u; // 801D7034
  goto L_801D7108; // 801D7038
L_801D703C:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B8u); // 801D703C
  c->r[5]=R32(c->r[13]+0xFFFFA0B0u); // 801D7040
  c->r[4]=R32(c->r[13]+0xFFFFA0B4u); // 801D7044
  c->r[3]=c->r[0]+c->r[25]; // 801D7048
  c->r[5]=c->r[5]+c->r[27]; // 801D704C
  W32(c->r[3]+0x00000018u,c->r[31]); // 801D7050
  c->r[6]=c->r[4]+c->r[26]; // 801D7054
  W32(c->r[3]+0x00000024u,c->r[6]); // 801D7058
  W16(c->r[3]+0x00000038u,c->r[28]); // 801D705C
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 801D7060
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 801D7064
  W16(c->r[3]+0x000000E2u,c->r[28]); // 801D7068
  W16(c->r[3]+0x000000EAu,c->r[28]); // 801D706C
  W16(c->r[3]+0x000000FEu,c->r[28]); // 801D7070
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 801D7074
  W16(c->r[3]+0x00000132u,c->r[28]); // 801D7078
  W16(c->r[3]+0x00000134u,c->r[28]); // 801D707C
  W16(c->r[3]+0x00000136u,c->r[28]); // 801D7080
  W16(c->r[3]+0x00000138u,c->r[28]); // 801D7084
  W16(c->r[3]+0x0000013Au,c->r[28]); // 801D7088
  c->r[4]=R32(c->r[13]+0xFFFFA0BCu); // 801D708C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D7090
  cmpu(c,0,c->r[31],c->r[0]); // 801D7094
  if (!crb(c,2)) { goto L_801D70B0; } // 801D7098
  W16(c->r[5]+0x00000002u,c->r[28]); // 801D709C
  W16(c->r[5]+0x00000000u,c->r[28]); // 801D70A0
  W16(c->r[3]+0x0000002Au,c->r[28]); // 801D70A4
  W16(c->r[3]+0x00000028u,c->r[28]); // 801D70A8
  goto L_801D70C8; // 801D70AC
L_801D70B0:;
  c->r[0]=c->r[5]+0x00000140u; // 801D70B0
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 801D70B4
  W16(c->r[3]+0x00000028u,c->r[4]); // 801D70B8
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801D70BC
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D70C0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D70C4
L_801D70C8:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 801D70C8
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 801D70CC
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801D70D0
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 801D70D4
  W16(c->r[5]+0x00000004u,c->r[0]); // 801D70D8
  W16(c->r[5]+0x00000006u,c->r[5]); // 801D70DC
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 801D70E0
  W16(c->r[3]+0x00000070u,c->r[6]); // 801D70E4
  W16(c->r[5]+0x00000046u,c->r[4]); // 801D70E8
  W16(c->r[5]+0x00000048u,c->r[6]); // 801D70EC
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801D70F0
  c->lr=0x801D70F8u; f_801D4330(c); // 801D70F4
  c->r[27]=c->r[27]+0x00000140u; // 801D70F8
  c->r[26]=c->r[26]+0x00000040u; // 801D70FC
  c->r[25]=c->r[25]+0x00000168u; // 801D7100
  c->r[31]=c->r[31]+0x00000001u; // 801D7104
L_801D7108:;
  c->r[0]=R32(c->r[13]+0xFFFFA0BCu); // 801D7108
  cmpu(c,0,c->r[31],c->r[0]); // 801D710C
  if (crb(c,0)) { IRQCHK(c); goto L_801D703C; } // 801D7110
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801D7114
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 801D7118
  c->lr=0x801D7120u; f_801BA790(c); // 801D711C
  c->r[11]=c->r[1]+0x00000030u; // 801D7120
  c->lr=0x801D7128u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7124
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7128
  c->lr=c->r[0]; // 801D712C
  c->r[1]=c->r[1]+0x00000030u; // 801D7130
  return; // 801D7134
}

// fn_801D7138
void f_801D7138(Ctx* __restrict c) {
  trace_call(0x801D7138u);
  c->r[0]=0u+0x00000000u; // 801D7138
  W32(c->r[13]+0xFFFFA0B0u,c->r[0]); // 801D713C
  W32(c->r[13]+0xFFFFA0B4u,c->r[0]); // 801D7140
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 801D7144
  W32(c->r[13]+0xFFFFA0BCu,c->r[0]); // 801D7148
  return; // 801D714C
}

// fn_801D7150
void f_801D7150(Ctx* __restrict c) {
  trace_call(0x801D7150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7150
  c->r[0]=c->lr; // 801D7154
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D715C
  c->r[31]=c->r[4]|c->r[4]; // 801D7160
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7164
  c->r[30]=c->r[3]|c->r[3]; // 801D7168
  c->lr=0x801D7170u; f_801BE74C(c); // 801D716C
  cmps(c,0,(int32_t)c->r[31],2); // 801D7170
  if (crb(c,2)) { goto L_801D71B4; } // 801D7174
  if (!crb(c,0)) { goto L_801D718C; } // 801D7178
  cmps(c,0,(int32_t)c->r[31],0); // 801D717C
  if (crb(c,2)) { goto L_801D719C; } // 801D7180
  if (!crb(c,0)) { goto L_801D71A8; } // 801D7184
  goto L_801D71E8; // 801D7188
L_801D718C:;
  cmps(c,0,(int32_t)c->r[31],4); // 801D718C
  if (crb(c,2)) { goto L_801D71D8; } // 801D7190
  if (!crb(c,0)) { goto L_801D71E8; } // 801D7194
  goto L_801D71C4; // 801D7198
L_801D719C:;
  c->r[0]=0u+0x00000002u; // 801D719C
  W16(c->r[30]+0x00000030u,c->r[0]); // 801D71A0
  goto L_801D71E8; // 801D71A4
L_801D71A8:;
  c->r[0]=0u+0x00000001u; // 801D71A8
  W16(c->r[30]+0x00000030u,c->r[0]); // 801D71AC
  goto L_801D71E8; // 801D71B0
L_801D71B4:;
  c->r[0]=0u+0x00000000u; // 801D71B4
  W16(c->r[30]+0x00000030u,c->r[0]); // 801D71B8
  W16(c->r[30]+0x00000032u,c->r[0]); // 801D71BC
  goto L_801D71E8; // 801D71C0
L_801D71C4:;
  c->r[4]=0u+0x00000000u; // 801D71C4
  c->r[0]=0u+0x00000001u; // 801D71C8
  W16(c->r[30]+0x00000030u,c->r[4]); // 801D71CC
  W16(c->r[30]+0x00000032u,c->r[0]); // 801D71D0
  goto L_801D71E8; // 801D71D4
L_801D71D8:;
  c->r[4]=0u+0x00000000u; // 801D71D8
  c->r[0]=0u+0x00000002u; // 801D71DC
  W16(c->r[30]+0x00000030u,c->r[4]); // 801D71E0
  W16(c->r[30]+0x00000032u,c->r[0]); // 801D71E4
L_801D71E8:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D71E8
  c->r[0]=c->r[0]|0x00000001u; // 801D71EC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D71F0
  c->lr=0x801D71F8u; f_801BE774(c); // 801D71F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D71F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D71FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7200
  c->lr=c->r[0]; // 801D7204
  c->r[1]=c->r[1]+0x00000010u; // 801D7208
  return; // 801D720C
}

// AXSetVoiceState
void f_801D7210(Ctx* __restrict c) {
  trace_call(0x801D7210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7210
  c->r[0]=c->lr; // 801D7214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D721C
  c->r[31]=c->r[4]|c->r[4]; // 801D7220
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7224
  c->r[30]=c->r[3]|c->r[3]; // 801D7228
  c->lr=0x801D7230u; f_801BE74C(c); // 801D722C
  c->r[0]=R16(c->r[30]+0x00000038u); // 801D7230
  cmpu(c,0,c->r[0],c->r[31]); // 801D7234
  if (!crb(c,2)) { goto L_801D7244; } // 801D7238
  c->lr=0x801D7240u; f_801BE774(c); // 801D723C
  goto L_801D7268; // 801D7240
L_801D7244:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D7244
  cmps(c,0,(int32_t)c->r[31],0); // 801D7248
  W16(c->r[30]+0x00000038u,c->r[31]); // 801D724C
  c->r[0]=c->r[0]|0x00000004u; // 801D7250
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7254
  if (!crb(c,2)) { goto L_801D7264; } // 801D7258
  c->r[0]=0u+0x00000001u; // 801D725C
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D7260
L_801D7264:;
  c->lr=0x801D7268u; f_801BE774(c); // 801D7264
L_801D7268:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D726C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7270
  c->lr=c->r[0]; // 801D7274
  c->r[1]=c->r[1]+0x00000010u; // 801D7278
  return; // 801D727C
}

// fn_801D7280
void f_801D7280(Ctx* __restrict c) {
  trace_call(0x801D7280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7280
  c->r[0]=c->lr; // 801D7284
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D728C
  c->r[31]=c->r[4]|c->r[4]; // 801D7290
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7294
  c->r[30]=c->r[3]|c->r[3]; // 801D7298
  c->lr=0x801D72A0u; f_801BE74C(c); // 801D729C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D72A0
  W16(c->r[30]+0x0000003Au,c->r[31]); // 801D72A4
  c->r[0]=c->r[0]|0x00000008u; // 801D72A8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D72AC
  c->lr=0x801D72B4u; f_801BE774(c); // 801D72B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D72B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D72B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D72BC
  c->lr=c->r[0]; // 801D72C0
  c->r[1]=c->r[1]+0x00000010u; // 801D72C4
  return; // 801D72C8
}

// fn_801D72CC
void f_801D72CC(Ctx* __restrict c) {
  trace_call(0x801D72CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D72CC
  c->r[0]=c->lr; // 801D72D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D72D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D72D8
  c->r[31]=0u+0x00000000u; // 801D72DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D72E0
  c->r[30]=c->r[3]|c->r[3]; // 801D72E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D72E8
  c->r[29]=c->r[4]|c->r[4]; // 801D72EC
  c->lr=0x801D72F4u; f_801BE74C(c); // 801D72F0
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D72F4
  c->r[4]=c->r[30]+0x0000003Eu; // 801D72F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D72FC
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 801D7300
  if (crb(c,2)) { goto L_801D730C; } // 801D7304
  c->r[31]=c->r[31]|0x00000001u; // 801D7308
L_801D730C:;
  c->r[0]=R16(c->r[29]+0x00000002u); // 801D730C
  c->r[5]=c->r[29]+0x00000004u; // 801D7310
  cmps(c,0,(int32_t)c->r[0],0); // 801D7314
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D7318
  if (crb(c,2)) { goto L_801D7324; } // 801D731C
  c->r[31]=c->r[31]|0x00000005u; // 801D7320
L_801D7324:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 801D7324
  cmps(c,0,(int32_t)c->r[0],0); // 801D7328
  W16(c->r[4]+0x00000002u,c->r[0]); // 801D732C
  if (crb(c,2)) { goto L_801D7338; } // 801D7330
  c->r[31]=c->r[31]|0x00000002u; // 801D7334
L_801D7338:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D7338
  cmps(c,0,(int32_t)c->r[0],0); // 801D733C
  W16(c->r[4]+0x00000004u,c->r[0]); // 801D7340
  if (crb(c,2)) { goto L_801D734C; } // 801D7344
  c->r[31]=c->r[31]|0x00000006u; // 801D7348
L_801D734C:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D734C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7350
  W16(c->r[4]+0x00000006u,c->r[0]); // 801D7354
  if (crb(c,2)) { goto L_801D7360; } // 801D7358
  c->r[31]=c->r[31]|0x00010000u; // 801D735C
L_801D7360:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801D7360
  cmps(c,0,(int32_t)c->r[0],0); // 801D7364
  W16(c->r[4]+0x00000008u,c->r[0]); // 801D7368
  if (crb(c,2)) { goto L_801D7374; } // 801D736C
  c->r[31]=c->r[31]|0x00050000u; // 801D7370
L_801D7374:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801D7374
  cmps(c,0,(int32_t)c->r[0],0); // 801D7378
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801D737C
  if (crb(c,2)) { goto L_801D7388; } // 801D7380
  c->r[31]=c->r[31]|0x00020000u; // 801D7384
L_801D7388:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801D7388
  cmps(c,0,(int32_t)c->r[0],0); // 801D738C
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801D7390
  if (crb(c,2)) { goto L_801D739C; } // 801D7394
  c->r[31]=c->r[31]|0x00060000u; // 801D7398
L_801D739C:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801D739C
  cmps(c,0,(int32_t)c->r[0],0); // 801D73A0
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801D73A4
  if (crb(c,2)) { goto L_801D73B0; } // 801D73A8
  c->r[31]=c->r[31]|0x00200000u; // 801D73AC
L_801D73B0:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801D73B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D73B4
  W16(c->r[4]+0x00000010u,c->r[0]); // 801D73B8
  if (crb(c,2)) { goto L_801D73C4; } // 801D73BC
  c->r[31]=c->r[31]|0x00A00000u; // 801D73C0
L_801D73C4:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 801D73C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D73C8
  W16(c->r[4]+0x00000012u,c->r[0]); // 801D73CC
  if (crb(c,2)) { goto L_801D73D8; } // 801D73D0
  c->r[31]=c->r[31]|0x00400000u; // 801D73D4
L_801D73D8:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 801D73D8
  cmps(c,0,(int32_t)c->r[0],0); // 801D73DC
  W16(c->r[4]+0x00000014u,c->r[0]); // 801D73E0
  if (crb(c,2)) { goto L_801D73EC; } // 801D73E4
  c->r[31]=c->r[31]|0x00C00000u; // 801D73E8
L_801D73EC:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 801D73EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D73F0
  W16(c->r[4]+0x00000016u,c->r[0]); // 801D73F4
  if (crb(c,2)) { goto L_801D7400; } // 801D73F8
  c->r[31]=c->r[31]|0x04000000u; // 801D73FC
L_801D7400:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 801D7400
  cmps(c,0,(int32_t)c->r[0],0); // 801D7404
  W16(c->r[4]+0x00000018u,c->r[0]); // 801D7408
  if (crb(c,2)) { goto L_801D7414; } // 801D740C
  c->r[31]=c->r[31]|0x14000000u; // 801D7410
L_801D7414:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 801D7414
  cmps(c,0,(int32_t)c->r[0],0); // 801D7418
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801D741C
  if (crb(c,2)) { goto L_801D7428; } // 801D7420
  c->r[31]=c->r[31]|0x08000000u; // 801D7424
L_801D7428:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 801D7428
  cmps(c,0,(int32_t)c->r[0],0); // 801D742C
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 801D7430
  if (crb(c,2)) { goto L_801D743C; } // 801D7434
  c->r[31]=c->r[31]|0x18000000u; // 801D7438
L_801D743C:;
  c->r[0]=R16(c->r[5]+0x0000001Cu); // 801D743C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7440
  W16(c->r[4]+0x0000001Eu,c->r[0]); // 801D7444
  if (crb(c,2)) { goto L_801D7450; } // 801D7448
  c->r[31]=c->r[31]|0x00000008u; // 801D744C
L_801D7450:;
  c->r[0]=R16(c->r[5]+0x0000001Eu); // 801D7450
  cmps(c,0,(int32_t)c->r[0],0); // 801D7454
  W16(c->r[4]+0x00000020u,c->r[0]); // 801D7458
  if (crb(c,2)) { goto L_801D7464; } // 801D745C
  c->r[31]=c->r[31]|0x00000018u; // 801D7460
L_801D7464:;
  c->r[0]=R16(c->r[5]+0x00000020u); // 801D7464
  cmps(c,0,(int32_t)c->r[0],0); // 801D7468
  W16(c->r[4]+0x00000022u,c->r[0]); // 801D746C
  if (crb(c,2)) { goto L_801D7478; } // 801D7470
  c->r[31]=c->r[31]|0x00080000u; // 801D7474
L_801D7478:;
  c->r[0]=R16(c->r[5]+0x00000022u); // 801D7478
  cmps(c,0,(int32_t)c->r[0],0); // 801D747C
  W16(c->r[4]+0x00000024u,c->r[0]); // 801D7480
  if (crb(c,2)) { goto L_801D748C; } // 801D7484
  c->r[31]=c->r[31]|0x00180000u; // 801D7488
L_801D748C:;
  c->r[0]=R16(c->r[5]+0x00000024u); // 801D748C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7490
  W16(c->r[4]+0x00000026u,c->r[0]); // 801D7494
  if (crb(c,2)) { goto L_801D74A0; } // 801D7498
  c->r[31]=c->r[31]|0x01000000u; // 801D749C
L_801D74A0:;
  c->r[0]=R16(c->r[5]+0x00000026u); // 801D74A0
  cmps(c,0,(int32_t)c->r[0],0); // 801D74A4
  W16(c->r[4]+0x00000028u,c->r[0]); // 801D74A8
  if (crb(c,2)) { goto L_801D74B4; } // 801D74AC
  c->r[31]=c->r[31]|0x03000000u; // 801D74B0
L_801D74B4:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 801D74B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D74B8
  W16(c->r[4]+0x0000002Au,c->r[0]); // 801D74BC
  if (crb(c,2)) { goto L_801D74C8; } // 801D74C0
  c->r[31]=c->r[31]|0x20000000u; // 801D74C4
L_801D74C8:;
  c->r[0]=R16(c->r[5]+0x0000002Au); // 801D74C8
  cmps(c,0,(int32_t)c->r[0],0); // 801D74CC
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 801D74D0
  if (crb(c,2)) { goto L_801D74DC; } // 801D74D4
  c->r[31]=c->r[31]|0x60000000u; // 801D74D8
L_801D74DC:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D74DC
  W32(c->r[30]+0x00000034u,c->r[31]); // 801D74E0
  c->r[0]=c->r[0]|0x00000012u; // 801D74E4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D74E8
  c->lr=0x801D74F0u; f_801BE774(c); // 801D74EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D74F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D74F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D74F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D74FC
  c->lr=c->r[0]; // 801D7500
  c->r[1]=c->r[1]+0x00000020u; // 801D7504
  return; // 801D7508
}

// fn_801D750C
void f_801D750C(Ctx* __restrict c) {
  trace_call(0x801D750Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D750C
  c->r[0]=c->lr; // 801D7510
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7514
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7518
  c->r[31]=c->r[3]|c->r[3]; // 801D751C
  c->lr=0x801D7524u; f_801BE74C(c); // 801D7520
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801D7524
  c->r[4]=0u+0x00000000u; // 801D7528
  c->r[5]=0u+0x00000001u; // 801D752C
  W16(c->r[31]+0x00000078u,c->r[4]); // 801D7530
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801D7534
  c->r[0]=c->r[0]|0x00000020u; // 801D7538
  W16(c->r[31]+0x0000006Cu,c->r[5]); // 801D753C
  W16(c->r[31]+0x00000076u,c->r[4]); // 801D7540
  W16(c->r[31]+0x00000074u,c->r[4]); // 801D7544
  W16(c->r[31]+0x00000072u,c->r[4]); // 801D7548
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801D754C
  c->lr=0x801D7554u; f_801BE774(c); // 801D7550
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7558
  c->lr=c->r[0]; // 801D755C
  c->r[1]=c->r[1]+0x00000010u; // 801D7560
  return; // 801D7564
}

// fn_801D7568
void f_801D7568(Ctx* __restrict c) {
  trace_call(0x801D7568u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7568
  c->r[0]=c->lr; // 801D756C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7570
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7574
  c->r[31]=c->r[5]|c->r[5]; // 801D7578
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D757C
  c->r[30]=c->r[4]|c->r[4]; // 801D7580
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7584
  c->r[29]=c->r[3]|c->r[3]; // 801D7588
  c->lr=0x801D7590u; f_801BE74C(c); // 801D758C
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801D7590
  W16(c->r[29]+0x00000076u,c->r[30]); // 801D7594
  c->r[0]=c->r[0]|0x00000040u; // 801D7598
  W16(c->r[29]+0x00000078u,c->r[31]); // 801D759C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801D75A0
  c->lr=0x801D75A8u; f_801BE774(c); // 801D75A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D75A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D75AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D75B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D75B4
  c->lr=c->r[0]; // 801D75B8
  c->r[1]=c->r[1]+0x00000020u; // 801D75BC
  return; // 801D75C0
}

// fn_801D75C4
void f_801D75C4(Ctx* __restrict c) {
  trace_call(0x801D75C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D75C4
  c->r[0]=c->lr; // 801D75C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D75CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D75D0
  c->r[31]=c->r[4]|c->r[4]; // 801D75D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D75D8
  c->r[30]=c->r[3]|c->r[3]; // 801D75DC
  c->lr=0x801D75E4u; f_801BE74C(c); // 801D75E0
  c->r[4]=R16(c->r[31]+0x00000000u); // 801D75E4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D75E8
  W16(c->r[30]+0x00000092u,c->r[4]); // 801D75EC
  c->r[0]=c->r[0]|0x00000100u; // 801D75F0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000002u); // 801D75F4
  W16(c->r[30]+0x00000094u,c->r[4]); // 801D75F8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D75FC
  c->lr=0x801D7604u; f_801BE774(c); // 801D7600
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7608
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D760C
  c->lr=c->r[0]; // 801D7610
  c->r[1]=c->r[1]+0x00000010u; // 801D7614
  return; // 801D7618
}

// AXSetVoiceAddr
void f_801D761C(Ctx* __restrict c) {
  trace_call(0x801D761Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D761C
  c->r[0]=c->lr; // 801D7620
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7628
  c->r[31]=c->r[4]|c->r[4]; // 801D762C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7630
  c->r[30]=c->r[3]|c->r[3]; // 801D7634
  c->lr=0x801D763Cu; f_801BE74C(c); // 801D7638
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D763C
  W32(c->r[30]+0x00000096u,c->r[0]); // 801D7640
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D7644
  W32(c->r[30]+0x0000009Au,c->r[0]); // 801D7648
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D764C
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 801D7650
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801D7654
  W32(c->r[30]+0x000000A2u,c->r[0]); // 801D7658
  c->r[0]=R16(c->r[31]+0x00000002u); // 801D765C
  cmps(c,0,(int32_t)c->r[0],10); // 801D7660
  if (crb(c,2)) { goto L_801D7684; } // 801D7664
  if (!crb(c,0)) { goto L_801D7678; } // 801D7668
  cmps(c,0,(int32_t)c->r[0],0); // 801D766C
  if (crb(c,2)) { goto L_801D76E8; } // 801D7670
  goto L_801D76E8; // 801D7674
L_801D7678:;
  cmps(c,0,(int32_t)c->r[0],25); // 801D7678
  if (crb(c,2)) { goto L_801D76B8; } // 801D767C
  goto L_801D76E8; // 801D7680
L_801D7684:;
  c->r[4]=0u+0x00000000u; // 801D7684
  c->r[0]=0u+0x08000000u; // 801D7688
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801D768C
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801D7690
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801D7694
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801D7698
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801D769C
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801D76A0
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801D76A4
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801D76A8
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801D76AC
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801D76B0
  goto L_801D76E8; // 801D76B4
L_801D76B8:;
  c->r[4]=0u+0x00000000u; // 801D76B8
  c->r[0]=0u+0x01000000u; // 801D76BC
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801D76C0
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801D76C4
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801D76C8
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801D76CC
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801D76D0
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801D76D4
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801D76D8
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801D76DC
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801D76E0
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801D76E4
L_801D76E8:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D76E8
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 801D76EC
  c->r[0]=c->r[0]|0x00008400u; // 801D76F0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D76F4
  c->lr=0x801D76FCu; f_801BE774(c); // 801D76F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D76FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7700
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7704
  c->lr=c->r[0]; // 801D7708
  c->r[1]=c->r[1]+0x00000010u; // 801D770C
  return; // 801D7710
}

// fn_801D7714
void f_801D7714(Ctx* __restrict c) {
  trace_call(0x801D7714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7714
  c->r[0]=c->lr; // 801D7718
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D771C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7720
  c->r[31]=c->r[4]|c->r[4]; // 801D7724
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7728
  c->r[30]=c->r[3]|c->r[3]; // 801D772C
  c->lr=0x801D7734u; f_801BE74C(c); // 801D7730
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D7734
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D7738
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801D773C
  c->r[0]=c->r[0]|0x00008000u; // 801D7740
  c->r[4]=R32(c->r[31]+0x00000004u); // 801D7744
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801D7748
  c->r[4]=R32(c->r[31]+0x00000008u); // 801D774C
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801D7750
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801D7754
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801D7758
  c->r[4]=R32(c->r[31]+0x00000010u); // 801D775C
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801D7760
  c->r[4]=R32(c->r[31]+0x00000014u); // 801D7764
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801D7768
  c->r[4]=R32(c->r[31]+0x00000018u); // 801D776C
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801D7770
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801D7774
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801D7778
  c->r[4]=R32(c->r[31]+0x00000020u); // 801D777C
  W32(c->r[30]+0x000000C6u,c->r[4]); // 801D7780
  c->r[4]=R32(c->r[31]+0x00000024u); // 801D7784
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801D7788
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D778C
  c->lr=0x801D7794u; f_801BE774(c); // 801D7790
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7794
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7798
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D779C
  c->lr=c->r[0]; // 801D77A0
  c->r[1]=c->r[1]+0x00000010u; // 801D77A4
  return; // 801D77A8
}

// fn_801D77AC
void f_801D77AC(Ctx* __restrict c) {
  trace_call(0x801D77ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D77AC
  c->r[0]=c->lr; // 801D77B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D77B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D77B8
  c->r[31]=c->r[4]|c->r[4]; // 801D77BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D77C0
  c->r[30]=c->r[3]|c->r[3]; // 801D77C4
  c->lr=0x801D77CCu; f_801BE74C(c); // 801D77C8
  c->r[4]=R16(c->r[31]+0x00000000u); // 801D77CC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D77D0
  W16(c->r[30]+0x000000CEu,c->r[4]); // 801D77D4
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 801D77D8
  c->r[4]=R16(c->r[31]+0x00000002u); // 801D77DC
  c->r[0]=c->r[0]|0x00010000u; // 801D77E0
  W16(c->r[30]+0x000000D0u,c->r[4]); // 801D77E4
  c->r[4]=R16(c->r[31]+0x00000004u); // 801D77E8
  W16(c->r[30]+0x000000D2u,c->r[4]); // 801D77EC
  c->r[4]=R16(c->r[31]+0x00000006u); // 801D77F0
  W16(c->r[30]+0x000000D4u,c->r[4]); // 801D77F4
  c->r[4]=R16(c->r[31]+0x00000008u); // 801D77F8
  W16(c->r[30]+0x000000D6u,c->r[4]); // 801D77FC
  c->r[4]=R16(c->r[31]+0x0000000Au); // 801D7800
  W16(c->r[30]+0x000000D8u,c->r[4]); // 801D7804
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 801D7808
  W16(c->r[30]+0x000000DAu,c->r[4]); // 801D780C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7810
  c->lr=0x801D7818u; f_801BE774(c); // 801D7814
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D781C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7820
  c->lr=c->r[0]; // 801D7824
  c->r[1]=c->r[1]+0x00000010u; // 801D7828
  return; // 801D782C
}

// fn_801D7830
void f_801D7830(Ctx* __restrict c) {
  trace_call(0x801D7830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7830
  c->r[0]=c->lr; // 801D7834
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7838
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801D783C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801D7840
  c->f[31]=c->f[1]; // 801D7844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7848
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D784C
  c->r[30]=c->r[3]|c->r[3]; // 801D7850
  c->lr=0x801D7858u; f_801BE74C(c); // 801D7854
  {uint32_t ea=c->r[2]+0xFFFFC1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7858
  c->r[31]=c->r[3]|c->r[3]; // 801D785C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801D7860
  c->lr=0x801D7868u; f_801E7834(c); // 801D7864
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D7868
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 801D786C
  W16(c->r[30]+0x000000D0u,c->r[3]); // 801D7870
  c->r[3]=c->r[31]|c->r[31]; // 801D7874
  c->r[0]=c->r[0]|0x00020000u; // 801D7878
  W16(c->r[30]+0x000000CEu,c->r[4]); // 801D787C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7880
  c->lr=0x801D7888u; f_801BE774(c); // 801D7884
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801D7888
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D788C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801D7890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7894
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7898
  c->lr=c->r[0]; // 801D789C
  c->r[1]=c->r[1]+0x00000020u; // 801D78A0
  return; // 801D78A4
}

// fn_801D78A8
void f_801D78A8(Ctx* __restrict c) {
  trace_call(0x801D78A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D78A8
  c->r[0]=c->lr; // 801D78AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D78B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D78B4
  c->r[31]=c->r[4]|c->r[4]; // 801D78B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D78BC
  c->r[30]=c->r[3]|c->r[3]; // 801D78C0
  c->lr=0x801D78C8u; f_801BE74C(c); // 801D78C4
  c->r[4]=R16(c->r[31]+0x00000000u); // 801D78C8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D78CC
  W16(c->r[30]+0x000000DCu,c->r[4]); // 801D78D0
  c->r[0]=c->r[0]|0x00040000u; // 801D78D4
  c->r[4]=R16(c->r[31]+0x00000002u); // 801D78D8
  W16(c->r[30]+0x000000DEu,c->r[4]); // 801D78DC
  c->r[4]=R16(c->r[31]+0x00000004u); // 801D78E0
  W16(c->r[30]+0x000000E0u,c->r[4]); // 801D78E4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D78E8
  c->lr=0x801D78F0u; f_801BE774(c); // 801D78EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D78F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D78F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D78F8
  c->lr=c->r[0]; // 801D78FC
  c->r[1]=c->r[1]+0x00000010u; // 801D7900
  return; // 801D7904
}

// fn_801D7908
void f_801D7908(Ctx* __restrict c) {
  trace_call(0x801D7908u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7908
  c->r[0]=c->lr; // 801D790C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7914
  c->r[31]=c->r[4]|c->r[4]; // 801D7918
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D791C
  c->r[30]=c->r[3]|c->r[3]; // 801D7920
  c->lr=0x801D7928u; f_801BE74C(c); // 801D7924
  c->r[4]=R16(c->r[31]+0x00000000u); // 801D7928
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D792C
  W16(c->r[30]+0x000000E2u,c->r[4]); // 801D7930
  c->r[0]=c->r[0]|0x00080000u; // 801D7934
  c->r[4]=R16(c->r[31]+0x00000002u); // 801D7938
  W16(c->r[30]+0x000000E4u,c->r[4]); // 801D793C
  c->r[4]=R16(c->r[31]+0x00000004u); // 801D7940
  W16(c->r[30]+0x000000E6u,c->r[4]); // 801D7944
  c->r[4]=R16(c->r[31]+0x00000006u); // 801D7948
  W16(c->r[30]+0x000000E8u,c->r[4]); // 801D794C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7950
  c->lr=0x801D7958u; f_801BE774(c); // 801D7954
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D795C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7960
  c->lr=c->r[0]; // 801D7964
  c->r[1]=c->r[1]+0x00000010u; // 801D7968
  return; // 801D796C
}

// fn_801D7970
void f_801D7970(Ctx* __restrict c) {
  trace_call(0x801D7970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7970
  c->r[0]=c->lr; // 801D7974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D797C
  c->r[31]=c->r[5]|c->r[5]; // 801D7980
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7984
  c->r[30]=c->r[4]|c->r[4]; // 801D7988
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D798C
  c->r[29]=c->r[3]|c->r[3]; // 801D7990
  c->lr=0x801D7998u; f_801BE74C(c); // 801D7994
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801D7998
  W16(c->r[29]+0x000000E6u,c->r[30]); // 801D799C
  c->r[0]=c->r[0]|0x00100000u; // 801D79A0
  W16(c->r[29]+0x000000E8u,c->r[31]); // 801D79A4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801D79A8
  c->lr=0x801D79B0u; f_801BE774(c); // 801D79AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D79B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D79B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D79B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D79BC
  c->lr=c->r[0]; // 801D79C0
  c->r[1]=c->r[1]+0x00000020u; // 801D79C4
  return; // 801D79C8
}

// AXGetLpfCoefs
void f_801D79CC(Ctx* __restrict c) {
  trace_call(0x801D79CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D79CC
  c->r[0]=c->lr; // 801D79D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D79D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801D79D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801D79DC
  c->r[0]=0u+0x43300000u; // 801D79E0
  {uint32_t ea=c->r[2]+0xFFFFC1F8u; c->f[3]=RF64(ea);} // 801D79E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D79E8
  {uint32_t ea=c->r[2]+0xFFFFC1E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D79EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D79F0
  {uint32_t ea=c->r[2]+0xFFFFC1ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D79F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801D79F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D79FC
  c->r[31]=c->r[5]|c->r[5]; // 801D7A00
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801D7A04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7A08
  c->r[30]=c->r[4]|c->r[4]; // 801D7A0C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801D7A10
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D7A14
  c->lr=0x801D7A1Cu; f_801F6E10(c); // 801D7A18
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801D7A1C
  {uint32_t ea=c->r[2]+0xFFFFC1E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7A20
  {uint32_t ea=c->r[2]+0xFFFFC1F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7A24
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 801D7A28
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801D7A2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D7A30
  c->lr=0x801D7A38u; f_801F75D8(c); // 801D7A34
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801D7A38
  {uint32_t ea=c->r[2]+0xFFFFC1F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7A3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801D7A40
  c->f[1]=-c->f[1]; // 801D7A44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D7A48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D7A4C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D7A50
  c->r[3]=R32(c->r[1]+0x00000014u); // 801D7A54
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801D7A58
  W16(c->r[31]+0x00000000u,c->r[3]); // 801D7A5C
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 801D7A60
  W16(c->r[30]+0x00000000u,c->r[0]); // 801D7A64
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801D7A68
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801D7A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7A70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7A74
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7A78
  c->lr=c->r[0]; // 801D7A7C
  c->r[1]=c->r[1]+0x00000030u; // 801D7A80
  return; // 801D7A84
}

// fn_801D7A88
void f_801D7A88(Ctx* __restrict c) {
  trace_call(0x801D7A88u);
  c->r[3]=R32(c->r[13]+0xFFFFA0C8u); // 801D7A88
  return; // 801D7A8C
}

// fn_801D7A90
void f_801D7A90(Ctx* __restrict c) {
  trace_call(0x801D7A90u);
  c->r[3]=R32(c->r[13]+0xFFFFA0C4u); // 801D7A90
  return; // 801D7A94
}

// fn_801D7A98
void f_801D7A98(Ctx* __restrict c) {
  trace_call(0x801D7A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7A98
  c->r[0]=c->lr; // 801D7A9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7AA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7AA4
  c->r[31]=c->r[4]|c->r[4]; // 801D7AA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7AAC
  c->r[30]=c->r[3]|c->r[3]; // 801D7AB0
  c->lr=0x801D7AB8u; f_801BE74C(c); // 801D7AB4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D7AB8
  W16(c->r[30]+0x000000FEu,c->r[31]); // 801D7ABC
  c->r[0]=c->r[0]|0x00800000u; // 801D7AC0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7AC4
  c->lr=0x801D7ACCu; f_801BE774(c); // 801D7AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7ACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7AD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7AD4
  c->lr=c->r[0]; // 801D7AD8
  c->r[1]=c->r[1]+0x00000010u; // 801D7ADC
  return; // 801D7AE0
}

// fn_801D7AE4
void f_801D7AE4(Ctx* __restrict c) {
  trace_call(0x801D7AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7AE4
  c->r[0]=c->lr; // 801D7AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7AF0
  c->r[31]=0u+0x00000000u; // 801D7AF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7AF8
  c->r[30]=c->r[3]|c->r[3]; // 801D7AFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7B00
  c->r[29]=c->r[4]|c->r[4]; // 801D7B04
  c->lr=0x801D7B0Cu; f_801BE74C(c); // 801D7B08
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D7B0C
  c->r[4]=c->r[30]+0x00000104u; // 801D7B10
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B14
  W16(c->r[30]+0x00000102u,c->r[0]); // 801D7B18
  if (crb(c,2)) { goto L_801D7B24; } // 801D7B1C
  c->r[31]=c->r[31]|0x00000001u; // 801D7B20
L_801D7B24:;
  c->r[0]=R16(c->r[29]+0x00000002u); // 801D7B24
  c->r[5]=c->r[29]+0x00000004u; // 801D7B28
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B2C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801D7B30
  if (crb(c,2)) { goto L_801D7B40; } // 801D7B34
  c->r[0]=c->r[31]|0x00000002u; // 801D7B38
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7B3C
L_801D7B40:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 801D7B40
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B44
  W16(c->r[4]+0x00000002u,c->r[0]); // 801D7B48
  if (crb(c,2)) { goto L_801D7B58; } // 801D7B4C
  c->r[0]=c->r[31]|0x00000004u; // 801D7B50
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7B54
L_801D7B58:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D7B58
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B5C
  W16(c->r[4]+0x00000004u,c->r[0]); // 801D7B60
  if (crb(c,2)) { goto L_801D7B70; } // 801D7B64
  c->r[0]=c->r[31]|0x00000008u; // 801D7B68
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7B6C
L_801D7B70:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D7B70
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B74
  W16(c->r[4]+0x00000006u,c->r[0]); // 801D7B78
  if (crb(c,2)) { goto L_801D7B88; } // 801D7B7C
  c->r[0]=c->r[31]|0x00000010u; // 801D7B80
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7B84
L_801D7B88:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801D7B88
  cmps(c,0,(int32_t)c->r[0],0); // 801D7B8C
  W16(c->r[4]+0x00000008u,c->r[0]); // 801D7B90
  if (crb(c,2)) { goto L_801D7BA0; } // 801D7B94
  c->r[0]=c->r[31]|0x00000020u; // 801D7B98
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7B9C
L_801D7BA0:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801D7BA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BA4
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801D7BA8
  if (crb(c,2)) { goto L_801D7BB8; } // 801D7BAC
  c->r[0]=c->r[31]|0x00000040u; // 801D7BB0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7BB4
L_801D7BB8:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801D7BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BBC
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801D7BC0
  if (crb(c,2)) { goto L_801D7BD0; } // 801D7BC4
  c->r[0]=c->r[31]|0x00000080u; // 801D7BC8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7BCC
L_801D7BD0:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801D7BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BD4
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801D7BD8
  if (crb(c,2)) { goto L_801D7BE8; } // 801D7BDC
  c->r[0]=c->r[31]|0x00000100u; // 801D7BE0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7BE4
L_801D7BE8:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801D7BE8
  cmps(c,0,(int32_t)c->r[0],0); // 801D7BEC
  W16(c->r[4]+0x00000010u,c->r[0]); // 801D7BF0
  if (crb(c,2)) { goto L_801D7C00; } // 801D7BF4
  c->r[0]=c->r[31]|0x00000200u; // 801D7BF8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7BFC
L_801D7C00:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 801D7C00
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C04
  W16(c->r[4]+0x00000012u,c->r[0]); // 801D7C08
  if (crb(c,2)) { goto L_801D7C18; } // 801D7C0C
  c->r[0]=c->r[31]|0x00000400u; // 801D7C10
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C14
L_801D7C18:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 801D7C18
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C1C
  W16(c->r[4]+0x00000014u,c->r[0]); // 801D7C20
  if (crb(c,2)) { goto L_801D7C30; } // 801D7C24
  c->r[0]=c->r[31]|0x00000800u; // 801D7C28
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C2C
L_801D7C30:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 801D7C30
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C34
  W16(c->r[4]+0x00000016u,c->r[0]); // 801D7C38
  if (crb(c,2)) { goto L_801D7C48; } // 801D7C3C
  c->r[0]=c->r[31]|0x00001000u; // 801D7C40
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C44
L_801D7C48:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 801D7C48
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C4C
  W16(c->r[4]+0x00000018u,c->r[0]); // 801D7C50
  if (crb(c,2)) { goto L_801D7C60; } // 801D7C54
  c->r[0]=c->r[31]|0x00002000u; // 801D7C58
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C5C
L_801D7C60:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 801D7C60
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C64
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801D7C68
  if (crb(c,2)) { goto L_801D7C78; } // 801D7C6C
  c->r[0]=c->r[31]|0x00004000u; // 801D7C70
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C74
L_801D7C78:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 801D7C78
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C7C
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 801D7C80
  if (crb(c,2)) { goto L_801D7C90; } // 801D7C84
  c->r[0]=c->r[31]|0x00008000u; // 801D7C88
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7C8C
L_801D7C90:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801D7C90
  W16(c->r[30]+0x00000100u,c->r[31]); // 801D7C94
  c->r[0]=c->r[0]|0x03000000u; // 801D7C98
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7C9C
  c->lr=0x801D7CA4u; f_801BE774(c); // 801D7CA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7CA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7CA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7CAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7CB0
  c->lr=c->r[0]; // 801D7CB4
  c->r[1]=c->r[1]+0x00000020u; // 801D7CB8
  return; // 801D7CBC
}

// fn_801D7CC0
void f_801D7CC0(Ctx* __restrict c) {
  trace_call(0x801D7CC0u);
  c->r[3]=R32(c->r[13]+0xFFFFA0BCu); // 801D7CC0
  return; // 801D7CC4
}

// __AXGetCurrentProfile
void f_801D7CC8(Ctx* __restrict c) {
  trace_call(0x801D7CC8u);
  c->r[0]=R32(c->r[13]+0xFFFFA0D0u); // 801D7CC8
  cmps(c,0,(int32_t)c->r[0],0); // 801D7CCC
  if (crb(c,2)) { goto L_801D7D00; } // 801D7CD0
  c->r[5]=R32(c->r[13]+0xFFFFA0D4u); // 801D7CD4
  c->r[3]=R32(c->r[13]+0xFFFFA0D8u); // 801D7CD8
  c->r[4]=c->r[5]+0x00000001u; // 801D7CDC
  c->r[6]=R32(c->r[13]+0xFFFFA0DCu); // 801D7CE0
  c->r[0]=divwu(c->r[4],c->r[3]); // 801D7CE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801D7CE8
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 801D7CEC
  c->r[0]=c->r[4]-c->r[0]; // 801D7CF0
  W32(c->r[13]+0xFFFFA0D4u,c->r[0]); // 801D7CF4
  c->r[3]=c->r[6]+c->r[3]; // 801D7CF8
  return; // 801D7CFC
L_801D7D00:;
  c->r[3]=0u+0x00000000u; // 801D7D00
  return; // 801D7D04
}

// AXFXReverbHiInit
void f_801D7D08(Ctx* __restrict c) {
  trace_call(0x801D7D08u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D7D08
  c->r[0]=0u+0x00000000u; // 801D7D0C
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7D10
  c->r[4]=0u+0x00000005u; // 801D7D14
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D7D18
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D7D1C
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D7D20
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D7D24
  {uint32_t ea=c->r[2]+0xFFFFC204u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7D28
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7D2C
  W32(c->r[3]+0x00000110u,c->r[4]); // 801D7D30
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 801D7D34
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 801D7D38
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 801D7D3C
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 801D7D40
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 801D7D44
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 801D7D48
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 801D7D4C
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 801D7D50
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 801D7D54
  W32(c->r[3]+0x00000138u,c->r[0]); // 801D7D58
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 801D7D5C
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 801D7D60
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 801D7D64
  f_801D7E60(c); return; // 801D7D68
}

// fn_801D7D6C
void f_801D7D6C(Ctx* __restrict c) {
  trace_call(0x801D7D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7D6C
  c->r[0]=c->lr; // 801D7D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7D74
  c->lr=0x801D7D7Cu; f_801D7FFC(c); // 801D7D78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7D7C
  c->r[3]=0u+0x00000001u; // 801D7D80
  c->lr=c->r[0]; // 801D7D84
  c->r[1]=c->r[1]+0x00000010u; // 801D7D88
  return; // 801D7D8C
}

// fn_801D7D90
void f_801D7D90(Ctx* __restrict c) {
  trace_call(0x801D7D90u);
  f_801D8050(c); return; // 801D7D90
}

// fn_801D7D94
void f_801D7D94(Ctx* __restrict c) {
  trace_call(0x801D7D94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7D94
  c->r[0]=c->lr; // 801D7D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7DA0
  c->r[31]=c->r[3]|c->r[3]; // 801D7DA4
  c->lr=0x801D7DACu; f_801D58E4(c); // 801D7DA8
  cmpu(c,0,c->r[3],0x00000002u); // 801D7DAC
  if (crb(c,2)) { goto L_801D7DBC; } // 801D7DB0
  c->r[3]=0u+0x00000000u; // 801D7DB4
  goto L_801D7E24; // 801D7DB8
L_801D7DBC:;
  {uint32_t ea=c->r[31]+0x00000188u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D7DBC
  c->r[0]=0u+0x00000000u; // 801D7DC0
  {uint32_t ea=c->r[2]+0xFFFFC208u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7DC4
  c->r[4]=0u+0x00000005u; // 801D7DC8
  {uint32_t ea=c->r[31]+0x00000180u; c->f[6]=c->ps1[6]=RF32(ea);} // 801D7DCC
  c->r[3]=c->r[31]|c->r[31]; // 801D7DD0
  {uint32_t ea=c->r[31]+0x00000178u; c->f[5]=c->ps1[5]=RF32(ea);} // 801D7DD4
  {uint32_t ea=c->r[31]+0x00000184u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D7DD8
  {uint32_t ea=c->r[31]+0x0000018Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D7DDC
  {uint32_t ea=c->r[2]+0xFFFFC20Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7DE0
  {uint32_t ea=c->r[31]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7DE4
  W32(c->r[31]+0x00000140u,c->r[4]); // 801D7DE8
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[7]);} // 801D7DEC
  {uint32_t ea=c->r[31]+0x00000148u; WF32(ea,c->f[7]);} // 801D7DF0
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 801D7DF4
  {uint32_t ea=c->r[31]+0x00000150u; WF32(ea,c->f[6]);} // 801D7DF8
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[5]);} // 801D7DFC
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[4]);} // 801D7E00
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[3]);} // 801D7E04
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[2]);} // 801D7E08
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[1]);} // 801D7E0C
  W32(c->r[31]+0x00000168u,c->r[0]); // 801D7E10
  W32(c->r[31]+0x0000016Cu,c->r[0]); // 801D7E14
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[0]);} // 801D7E18
  {uint32_t ea=c->r[31]+0x00000174u; WF32(ea,c->f[2]);} // 801D7E1C
  c->lr=0x801D7E24u; f_801D8C38(c); // 801D7E20
L_801D7E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7E28
  c->lr=c->r[0]; // 801D7E2C
  c->r[1]=c->r[1]+0x00000010u; // 801D7E30
  return; // 801D7E34
}

// fn_801D7E38
void f_801D7E38(Ctx* __restrict c) {
  trace_call(0x801D7E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7E38
  c->r[0]=c->lr; // 801D7E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7E40
  c->lr=0x801D7E48u; f_801D8DF8(c); // 801D7E44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7E48
  c->r[3]=0u+0x00000001u; // 801D7E4C
  c->lr=c->r[0]; // 801D7E50
  c->r[1]=c->r[1]+0x00000010u; // 801D7E54
  return; // 801D7E58
}

// fn_801D7E5C
void f_801D7E5C(Ctx* __restrict c) {
  trace_call(0x801D7E5Cu);
  f_801D8E4C(c); return; // 801D7E5C
}

// AXFXReverbHiExpInit
void f_801D7E60(Ctx* __restrict c) {
  trace_call(0x801D7E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7E60
  c->r[0]=c->lr; // 801D7E64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7E68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7E6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7E70
  c->r[30]=c->r[3]|c->r[3]; // 801D7E74
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7E78
  c->lr=0x801D7E80u; f_801BE74C(c); // 801D7E7C
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7E80
  c->r[0]=0u+0x00000001u; // 801D7E84
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7E88
  c->r[31]=c->r[3]|c->r[3]; // 801D7E8C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D7E90
  fcmp(c,0,c->f[1],c->f[0]); // 801D7E94
  if (!crb(c,0)) { goto L_801D7ED0; } // 801D7E98
  c->lr=0x801D7EA0u; f_801BE74C(c); // 801D7E9C
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801D7EA0
  c->r[29]=c->r[3]|c->r[3]; // 801D7EA4
  c->r[3]=c->r[30]|c->r[30]; // 801D7EA8
  c->r[0]=c->r[0]|0x00000001u; // 801D7EAC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D7EB0
  c->lr=0x801D7EB8u; f_801D8800(c); // 801D7EB4
  c->r[3]=c->r[29]|c->r[29]; // 801D7EB8
  c->lr=0x801D7EC0u; f_801BE774(c); // 801D7EBC
  c->r[3]=c->r[31]|c->r[31]; // 801D7EC0
  c->lr=0x801D7EC8u; f_801BE774(c); // 801D7EC4
  c->r[3]=0u+0x00000000u; // 801D7EC8
  goto L_801D7FE0; // 801D7ECC
L_801D7ED0:;
  c->r[3]=0u+0x804B0000u; // 801D7ED0
  {uint32_t ea=c->r[2]+0xFFFFC210u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7ED4
  c->r[3]=c->r[3]+0x00005C60u; // 801D7ED8
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801D7EDC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D7EE0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D7EE4
  c->lr=0x801D7EECu; f_801E7834(c); // 801D7EE8
  W32(c->r[30]+0x00000040u,c->r[3]); // 801D7EEC
  c->r[4]=0u+0x804B0000u; // 801D7EF0
  c->r[4]=c->r[4]+0x00005D20u; // 801D7EF4
  c->r[3]=c->r[30]|c->r[30]; // 801D7EF8
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801D7EFC
  W32(c->r[30]+0x00000080u,c->r[0]); // 801D7F00
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801D7F04
  W32(c->r[30]+0x00000084u,c->r[0]); // 801D7F08
  c->r[0]=R32(c->r[4]+0x000000C8u); // 801D7F0C
  W32(c->r[30]+0x00000088u,c->r[0]); // 801D7F10
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801D7F14
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801D7F18
  c->r[0]=R32(c->r[4]+0x000000D0u); // 801D7F1C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801D7F20
  c->r[0]=R32(c->r[4]+0x000000D4u); // 801D7F24
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801D7F28
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801D7F2C
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801D7F30
  c->r[0]=R32(c->r[4]+0x000000DCu); // 801D7F34
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801D7F38
  c->lr=0x801D7F40u; f_801D8568(c); // 801D7F3C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7F40
  if (!crb(c,2)) { goto L_801D7F7C; } // 801D7F44
  c->lr=0x801D7F4Cu; f_801BE74C(c); // 801D7F48
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801D7F4C
  c->r[29]=c->r[3]|c->r[3]; // 801D7F50
  c->r[3]=c->r[30]|c->r[30]; // 801D7F54
  c->r[0]=c->r[0]|0x00000001u; // 801D7F58
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D7F5C
  c->lr=0x801D7F64u; f_801D8800(c); // 801D7F60
  c->r[3]=c->r[29]|c->r[29]; // 801D7F64
  c->lr=0x801D7F6Cu; f_801BE774(c); // 801D7F68
  c->r[3]=c->r[31]|c->r[31]; // 801D7F6C
  c->lr=0x801D7F74u; f_801BE774(c); // 801D7F70
  c->r[3]=0u+0x00000000u; // 801D7F74
  goto L_801D7FE0; // 801D7F78
L_801D7F7C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D7F7C
  c->lr=0x801D7F84u; f_801D86DC(c); // 801D7F80
  c->r[3]=c->r[30]|c->r[30]; // 801D7F84
  c->lr=0x801D7F8Cu; f_801D8914(c); // 801D7F88
  cmps(c,0,(int32_t)c->r[3],0); // 801D7F8C
  if (!crb(c,2)) { goto L_801D7FC8; } // 801D7F90
  c->lr=0x801D7F98u; f_801BE74C(c); // 801D7F94
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801D7F98
  c->r[29]=c->r[3]|c->r[3]; // 801D7F9C
  c->r[3]=c->r[30]|c->r[30]; // 801D7FA0
  c->r[0]=c->r[0]|0x00000001u; // 801D7FA4
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D7FA8
  c->lr=0x801D7FB0u; f_801D8800(c); // 801D7FAC
  c->r[3]=c->r[29]|c->r[29]; // 801D7FB0
  c->lr=0x801D7FB8u; f_801BE774(c); // 801D7FB4
  c->r[3]=c->r[31]|c->r[31]; // 801D7FB8
  c->lr=0x801D7FC0u; f_801BE774(c); // 801D7FBC
  c->r[3]=0u+0x00000000u; // 801D7FC0
  goto L_801D7FE0; // 801D7FC4
L_801D7FC8:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801D7FC8
  c->r[3]=c->r[31]|c->r[31]; // 801D7FCC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801D7FD0
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D7FD4
  c->lr=0x801D7FDCu; f_801BE774(c); // 801D7FD8
  c->r[3]=0u+0x00000001u; // 801D7FDC
L_801D7FE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7FE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7FE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7FE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7FEC
  c->lr=c->r[0]; // 801D7FF0
  c->r[1]=c->r[1]+0x00000020u; // 801D7FF4
  return; // 801D7FF8
}

// fn_801D7FFC
void f_801D7FFC(Ctx* __restrict c) {
  trace_call(0x801D7FFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7FFC
  c->r[0]=c->lr; // 801D8000
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8008
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D800C
  c->r[30]=c->r[3]|c->r[3]; // 801D8010
  c->lr=0x801D8018u; f_801BE74C(c); // 801D8014
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801D8018
  c->r[31]=c->r[3]|c->r[3]; // 801D801C
  c->r[3]=c->r[30]|c->r[30]; // 801D8020
  c->r[0]=c->r[0]|0x00000001u; // 801D8024
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D8028
  c->lr=0x801D8030u; f_801D8800(c); // 801D802C
  c->r[3]=c->r[31]|c->r[31]; // 801D8030
  c->lr=0x801D8038u; f_801BE774(c); // 801D8034
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D803C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D8040
  c->lr=c->r[0]; // 801D8044
  c->r[1]=c->r[1]+0x00000010u; // 801D8048
  return; // 801D804C
}

// AXFXReverbHiExpCallback
void f_801D8050(Ctx* __restrict c) {
  trace_call(0x801D8050u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8050
  c->r[0]=c->lr; // 801D8054
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D8058
  c->r[11]=c->r[1]+0x00000070u; // 801D805C
  c->lr=0x801D8064u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8060
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 801D8064
  cmps(c,0,(int32_t)c->r[0],0); // 801D8068
  if (crb(c,2)) { goto L_801D807C; } // 801D806C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801D8070
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 801D8074
  goto L_801D8550; // 801D8078
L_801D807C:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 801D807C
  c->r[6]=R32(c->r[3]+0x00000000u); // 801D8080
  c->r[5]=R32(c->r[3]+0x00000004u); // 801D8084
  cmps(c,0,(int32_t)c->r[7],0); // 801D8088
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D808C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801D8090
  W32(c->r[1]+0x00000030u,c->r[5]); // 801D8094
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D8098
  if (crb(c,2)) { goto L_801D80B8; } // 801D809C
  c->r[5]=R32(c->r[7]+0x00000000u); // 801D80A0
  c->r[3]=R32(c->r[7]+0x00000004u); // 801D80A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 801D80A8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D80AC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D80B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D80B4
L_801D80B8:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801D80B8
  cmps(c,0,(int32_t)c->r[7],0); // 801D80BC
  if (crb(c,2)) { goto L_801D80D0; } // 801D80C0
  c->r[3]=R32(c->r[7]+0x00000000u); // 801D80C4
  c->r[5]=R32(c->r[7]+0x00000004u); // 801D80C8
  c->r[6]=R32(c->r[7]+0x00000008u); // 801D80CC
L_801D80D0:;
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D80D0
  c->r[31]=0u+0x00000000u; // 801D80D4
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D80D8
  c->r[29]=0u+0x00000000u; // 801D80DC
  {uint32_t ea=c->r[2]+0xFFFFC21Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801D80E0
  c->r[0]=0u+0x43300000u; // 801D80E4
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D80E8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801D80EC
  {uint32_t ea=c->r[2]+0xFFFFC220u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D80F0
  c->r[30]=0u+0x00000003u; // 801D80F4
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D80F8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801D80FC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D8100
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801D8104
  {uint32_t ea=c->r[2]+0xFFFFC228u; c->f[0]=RF64(ea);} // 801D8108
L_801D810C:;
  c->r[9]=c->r[4]|c->r[4]; // 801D810C
  c->r[10]=c->r[4]|c->r[4]; // 801D8110
  c->r[11]=c->r[4]|c->r[4]; // 801D8114
  c->r[7]=c->r[1]+0x00000008u; // 801D8118
  c->r[8]=c->r[1]+0x0000002Cu; // 801D811C
  c->r[12]=c->r[1]+0x00000014u; // 801D8120
  c->ctr=c->r[30]; // 801D8124
L_801D8128:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 801D8128
  cmps(c,0,(int32_t)c->r[26],0); // 801D812C
  if (crb(c,2)) { goto L_801D8168; } // 801D8130
  c->r[27]=R32(c->r[7]+0x00000000u); // 801D8134
  c->r[28]=R32(c->r[8]+0x00000000u); // 801D8138
  c->r[26]=R32(c->r[27]+0x00000000u); // 801D813C
  c->r[27]=c->r[27]+0x00000004u; // 801D8140
  c->r[28]=R32(c->r[28]+0x00000000u); // 801D8144
  W32(c->r[1]+0x00000038u,c->r[0]); // 801D8148
  c->r[26]=c->r[28]+c->r[26]; // 801D814C
  c->r[26]=c->r[26]^0x80000000u; // 801D8150
  W32(c->r[7]+0x00000000u,c->r[27]); // 801D8154
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 801D8158
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801D815C
  c->f[10]=c->ps1[10]=S(c->f[2]-c->f[0]); // 801D8160
  goto L_801D8184; // 801D8164
L_801D8168:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 801D8168
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D816C
  c->r[26]=R32(c->r[26]+0x00000000u); // 801D8170
  c->r[26]=c->r[26]^0x80000000u; // 801D8174
  W32(c->r[1]+0x00000044u,c->r[26]); // 801D8178
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 801D817C
  c->f[10]=c->ps1[10]=S(c->f[2]-c->f[0]); // 801D8180
L_801D8184:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 801D8184
  c->r[27]=R32(c->r[4]+0x00000010u); // 801D8188
  c->r[25]=R32(c->r[9]+0x00000000u); // 801D818C
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801D8190
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8194
  c->r[26]=R32(c->r[4]+0x00000014u); // 801D8198
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D819C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D81A0
  c->r[28]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D81A4
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D81A8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D81AC
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801D81B0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D81B4
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D81B8
  {uint32_t ea=c->r[25]+c->r[28]; c->f[7]=c->ps1[7]=RF32(ea);} // 801D81BC
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 801D81C0
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 801D81C4
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801D81C8
  cmps(c,0,(int32_t)c->r[27],0); // 801D81CC
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801D81D0
  if (crb(c,2)) { goto L_801D81F0; } // 801D81D4
  c->r[27]=R32(c->r[4]+0x00000038u); // 801D81D8
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 801D81DC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D81E0
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801D81E4
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[10]);} // 801D81E8
  goto L_801D81F4; // 801D81EC
L_801D81F0:;
  c->f[9]=c->f[10]; // 801D81F0
L_801D81F4:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 801D81F4
  c->r[25]=R32(c->r[10]+0x00000044u); // 801D81F8
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D81FC
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801D8200
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D8204
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D8208
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D820C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D8210
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D8214
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801D8218
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 801D821C
  c->r[26]=R32(c->r[10]+0x00000048u); // 801D8220
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8224
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D8228
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D822C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D8230
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D8234
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D8238
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801D823C
  c->r[27]=R32(c->r[4]+0x00000070u); // 801D8240
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 801D8244
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8248
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D824C
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D8250
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D8254
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D8258
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D825C
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801D8260
  c->r[27]=R32(c->r[4]+0x000000B0u); // 801D8264
  c->r[25]=R32(c->r[11]+0x00000098u); // 801D8268
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D826C
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D8270
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801D8274
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 801D8278
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801D827C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801D8280
  c->r[27]=R32(c->r[4]+0x000000B4u); // 801D8284
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 801D8288
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 801D828C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8290
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801D8294
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801D8298
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801D829C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801D82A0
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801D82A4
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801D82A8
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801D82AC
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801D82B0
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801D82B4
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801D82B8
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 801D82BC
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801D82C0
  c->r[28]=R32(c->r[9]+0x000000C8u); // 801D82C4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D82C8
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D82CC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801D82D0
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D82D4
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801D82D8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801D82DC
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801D82E0
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801D82E4
  c->r[27]=c->r[27]+0x00000001u; // 801D82E8
  W32(c->r[9]+0x000000D4u,c->r[27]); // 801D82EC
  c->r[28]=R32(c->r[9]+0x000000E0u); // 801D82F0
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 801D82F4
  cmpu(c,0,c->r[27],c->r[28]); // 801D82F8
  if (crb(c,0)) { goto L_801D8304; } // 801D82FC
  W32(c->r[9]+0x000000D4u,c->r[29]); // 801D8300
L_801D8304:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D8304
  c->r[7]=c->r[7]+0x00000004u; // 801D8308
  c->r[8]=c->r[8]+0x00000004u; // 801D830C
  c->r[9]=c->r[9]+0x00000004u; // 801D8310
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801D8314
  c->r[10]=c->r[10]+0x0000000Cu; // 801D8318
  c->r[11]=c->r[11]+0x00000008u; // 801D831C
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801D8320
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 801D8324
  c->r[12]=c->r[12]+0x00000004u; // 801D8328
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8128; } // 801D832C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 801D8330
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801D8334
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D8338
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 801D833C
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801D8340
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 801D8344
  c->r[8]=R32(c->r[1]+0x00000034u); // 801D8348
  c->r[11]=c->r[12]+0x00000004u; // 801D834C
  c->r[10]=R32(c->r[1]+0x00000030u); // 801D8350
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 801D8354
  c->r[7]=c->r[8]+0x00000004u; // 801D8358
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 801D835C
  c->r[9]=c->r[10]+0x00000004u; // 801D8360
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8364
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 801D8368
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 801D836C
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 801D8370
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801D8374
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 801D8378
  W32(c->r[1]+0x00000034u,c->r[7]); // 801D837C
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801D8380
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 801D8384
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 801D8388
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D838C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 801D8390
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 801D8394
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801D8398
  c->r[11]=R32(c->r[1]+0x00000044u); // 801D839C
  W32(c->r[1]+0x00000030u,c->r[9]); // 801D83A0
  W32(c->r[12]+0x00000000u,c->r[11]); // 801D83A4
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D83A8
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801D83AC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D83B0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801D83B4
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801D83B8
  W32(c->r[10]+0x00000000u,c->r[7]); // 801D83BC
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D83C0
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D83C4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D83C8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801D83CC
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801D83D0
  W32(c->r[8]+0x00000000u,c->r[7]); // 801D83D4
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801D83D8
  cmps(c,0,(int32_t)c->r[7],0); // 801D83DC
  if (crb(c,2)) { goto L_801D8438; } // 801D83E0
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D83E4
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801D83E8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D83EC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801D83F0
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801D83F4
  W32(c->r[3]+0x00000000u,c->r[7]); // 801D83F8
  c->r[3]=c->r[3]+0x00000004u; // 801D83FC
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8400
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801D8404
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D8408
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801D840C
  c->r[7]=R32(c->r[1]+0x00000044u); // 801D8410
  W32(c->r[5]+0x00000000u,c->r[7]); // 801D8414
  c->r[5]=c->r[5]+0x00000004u; // 801D8418
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D841C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D8420
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D8424
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801D8428
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801D842C
  W32(c->r[6]+0x00000000u,c->r[7]); // 801D8430
  c->r[6]=c->r[6]+0x00000004u; // 801D8434
L_801D8438:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 801D8438
  c->r[8]=c->r[7]+0x00000001u; // 801D843C
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801D8440
  c->r[7]=R32(c->r[4]+0x00000018u); // 801D8444
  cmpu(c,0,c->r[8],c->r[7]); // 801D8448
  if (crb(c,0)) { goto L_801D8454; } // 801D844C
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801D8450
L_801D8454:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 801D8454
  c->r[8]=c->r[7]+0x00000001u; // 801D8458
  W32(c->r[4]+0x00000010u,c->r[8]); // 801D845C
  c->r[7]=R32(c->r[4]+0x00000018u); // 801D8460
  cmpu(c,0,c->r[8],c->r[7]); // 801D8464
  if (crb(c,0)) { goto L_801D8470; } // 801D8468
  W32(c->r[4]+0x00000010u,c->r[29]); // 801D846C
L_801D8470:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 801D8470
  c->r[9]=c->r[4]+0x00000008u; // 801D8474
  c->r[8]=c->r[7]+0x00000001u; // 801D8478
  W32(c->r[4]+0x00000014u,c->r[8]); // 801D847C
  c->r[7]=R32(c->r[4]+0x00000018u); // 801D8480
  cmpu(c,0,c->r[8],c->r[7]); // 801D8484
  if (crb(c,0)) { goto L_801D8490; } // 801D8488
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 801D848C
L_801D8490:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 801D8490
  cmps(c,0,(int32_t)c->r[8],0); // 801D8494
  if (crb(c,2)) { goto L_801D84B4; } // 801D8498
  c->r[7]=R32(c->r[4]+0x00000038u); // 801D849C
  c->r[7]=c->r[7]+0x00000001u; // 801D84A0
  cmpu(c,0,c->r[7],c->r[8]); // 801D84A4
  W32(c->r[4]+0x00000038u,c->r[7]); // 801D84A8
  if (crb(c,0)) { goto L_801D84B4; } // 801D84AC
  W32(c->r[4]+0x00000038u,c->r[29]); // 801D84B0
L_801D84B4:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 801D84B4
  c->r[8]=c->r[7]+0x00000001u; // 801D84B8
  W32(c->r[4]+0x00000068u,c->r[8]); // 801D84BC
  c->r[7]=R32(c->r[4]+0x00000074u); // 801D84C0
  cmpu(c,0,c->r[8],c->r[7]); // 801D84C4
  if (crb(c,0)) { goto L_801D84D0; } // 801D84C8
  W32(c->r[4]+0x00000068u,c->r[29]); // 801D84CC
L_801D84D0:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 801D84D0
  c->r[8]=c->r[7]+0x00000001u; // 801D84D4
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801D84D8
  c->r[7]=R32(c->r[4]+0x00000078u); // 801D84DC
  cmpu(c,0,c->r[8],c->r[7]); // 801D84E0
  if (crb(c,0)) { goto L_801D84EC; } // 801D84E4
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 801D84E8
L_801D84EC:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 801D84EC
  c->r[9]=c->r[4]+0x00000008u; // 801D84F0
  c->r[8]=c->r[7]+0x00000001u; // 801D84F4
  W32(c->r[4]+0x00000070u,c->r[8]); // 801D84F8
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 801D84FC
  cmpu(c,0,c->r[8],c->r[7]); // 801D8500
  if (crb(c,0)) { goto L_801D850C; } // 801D8504
  W32(c->r[9]+0x00000068u,c->r[29]); // 801D8508
L_801D850C:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 801D850C
  c->r[8]=c->r[7]+0x00000001u; // 801D8510
  W32(c->r[4]+0x000000B0u,c->r[8]); // 801D8514
  c->r[7]=R32(c->r[4]+0x000000B8u); // 801D8518
  cmpu(c,0,c->r[8],c->r[7]); // 801D851C
  if (crb(c,0)) { goto L_801D8528; } // 801D8520
  W32(c->r[4]+0x000000B0u,c->r[29]); // 801D8524
L_801D8528:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 801D8528
  c->r[8]=c->r[7]+0x00000001u; // 801D852C
  W32(c->r[4]+0x000000B4u,c->r[8]); // 801D8530
  c->r[7]=R32(c->r[4]+0x000000BCu); // 801D8534
  cmpu(c,0,c->r[8],c->r[7]); // 801D8538
  if (crb(c,0)) { goto L_801D8544; } // 801D853C
  W32(c->r[4]+0x000000B4u,c->r[29]); // 801D8540
L_801D8544:;
  c->r[31]=c->r[31]+0x00000001u; // 801D8544
  cmpu(c,0,c->r[31],0x00000060u); // 801D8548
  if (crb(c,0)) { IRQCHK(c); goto L_801D810C; } // 801D854C
L_801D8550:;
  c->r[11]=c->r[1]+0x00000070u; // 801D8550
  c->lr=0x801D8558u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8554
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D8558
  c->lr=c->r[0]; // 801D855C
  c->r[1]=c->r[1]+0x00000070u; // 801D8560
  return; // 801D8564
}

// __AllocDelayLine
void f_801D8568(Ctx* __restrict c) {
  trace_call(0x801D8568u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8568
  c->r[0]=c->lr; // 801D856C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D8570
  c->r[11]=c->r[1]+0x00000030u; // 801D8574
  c->lr=0x801D857Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8578
  c->r[23]=c->r[3]|c->r[3]; // 801D857C
  c->r[24]=0u+0x00000000u; // 801D8580
  c->r[30]=c->r[23]|c->r[23]; // 801D8584
  c->r[31]=0u+0x00000000u; // 801D8588
  c->r[29]=c->r[23]|c->r[23]; // 801D858C
  c->r[28]=c->r[23]|c->r[23]; // 801D8590
L_801D8594:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 801D8594
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D8598
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D859C
  c->ctr=c->r[12]; // 801D85A0
  if (true) { c->lr=0x801D85A8u; dispatch(c,c->ctr); } // 801D85A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D85A8
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D85AC
  if (!crb(c,2)) { goto L_801D85BC; } // 801D85B0
  c->r[3]=0u+0x00000000u; // 801D85B4
  goto L_801D86C4; // 801D85B8
L_801D85BC:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 801D85BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D85C0
  if (crb(c,2)) { goto L_801D85EC; } // 801D85C4
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D85C8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D85CC
  c->ctr=c->r[12]; // 801D85D0
  if (true) { c->lr=0x801D85D8u; dispatch(c,c->ctr); } // 801D85D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D85D8
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801D85DC
  if (!crb(c,2)) { goto L_801D85F0; } // 801D85E0
  c->r[3]=0u+0x00000000u; // 801D85E4
  goto L_801D86C4; // 801D85E8
L_801D85EC:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801D85EC
L_801D85F0:;
  c->r[26]=c->r[23]|c->r[23]; // 801D85F0
  c->r[27]=c->r[29]|c->r[29]; // 801D85F4
  c->r[25]=0u+0x00000000u; // 801D85F8
L_801D85FC:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 801D85FC
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D8600
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8604
  c->ctr=c->r[12]; // 801D8608
  if (true) { c->lr=0x801D8610u; dispatch(c,c->ctr); } // 801D860C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8610
  W32(c->r[27]+0x00000044u,c->r[3]); // 801D8614
  if (!crb(c,2)) { goto L_801D8624; } // 801D8618
  c->r[3]=0u+0x00000000u; // 801D861C
  goto L_801D86C4; // 801D8620
L_801D8624:;
  c->r[25]=c->r[25]+0x00000001u; // 801D8624
  c->r[27]=c->r[27]+0x00000004u; // 801D8628
  cmpu(c,0,c->r[25],0x00000003u); // 801D862C
  c->r[26]=c->r[26]+0x00000004u; // 801D8630
  if (crb(c,0)) { IRQCHK(c); goto L_801D85FC; } // 801D8634
  c->r[27]=c->r[23]|c->r[23]; // 801D8638
  c->r[26]=c->r[28]|c->r[28]; // 801D863C
  c->r[25]=0u+0x00000000u; // 801D8640
L_801D8644:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801D8644
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D8648
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D864C
  c->ctr=c->r[12]; // 801D8650
  if (true) { c->lr=0x801D8658u; dispatch(c,c->ctr); } // 801D8654
  cmps(c,0,(int32_t)c->r[3],0); // 801D8658
  W32(c->r[26]+0x00000098u,c->r[3]); // 801D865C
  if (!crb(c,2)) { goto L_801D866C; } // 801D8660
  c->r[3]=0u+0x00000000u; // 801D8664
  goto L_801D86C4; // 801D8668
L_801D866C:;
  c->r[25]=c->r[25]+0x00000001u; // 801D866C
  c->r[26]=c->r[26]+0x00000004u; // 801D8670
  cmpu(c,0,c->r[25],0x00000002u); // 801D8674
  c->r[27]=c->r[27]+0x00000004u; // 801D8678
  if (crb(c,0)) { IRQCHK(c); goto L_801D8644; } // 801D867C
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801D8680
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D8684
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8688
  c->ctr=c->r[12]; // 801D868C
  if (true) { c->lr=0x801D8694u; dispatch(c,c->ctr); } // 801D8690
  cmps(c,0,(int32_t)c->r[3],0); // 801D8694
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801D8698
  if (!crb(c,2)) { goto L_801D86A8; } // 801D869C
  c->r[3]=0u+0x00000000u; // 801D86A0
  goto L_801D86C4; // 801D86A4
L_801D86A8:;
  c->r[24]=c->r[24]+0x00000001u; // 801D86A8
  c->r[29]=c->r[29]+0x0000000Cu; // 801D86AC
  cmpu(c,0,c->r[24],0x00000003u); // 801D86B0
  c->r[28]=c->r[28]+0x00000008u; // 801D86B4
  c->r[30]=c->r[30]+0x00000004u; // 801D86B8
  if (crb(c,0)) { IRQCHK(c); goto L_801D8594; } // 801D86BC
  c->r[3]=0u+0x00000001u; // 801D86C0
L_801D86C4:;
  c->r[11]=c->r[1]+0x00000030u; // 801D86C4
  c->lr=0x801D86CCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D86C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D86CC
  c->lr=c->r[0]; // 801D86D0
  c->r[1]=c->r[1]+0x00000030u; // 801D86D4
  return; // 801D86D8
}

// __BzeroDelayLines
void f_801D86DC(Ctx* __restrict c) {
  trace_call(0x801D86DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D86DC
  c->r[0]=c->lr; // 801D86E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D86E4
  c->r[11]=c->r[1]+0x00000030u; // 801D86E8
  c->lr=0x801D86F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D86EC
  c->r[24]=c->r[3]|c->r[3]; // 801D86F0
  c->r[25]=0u+0x00000000u; // 801D86F4
  c->r[31]=c->r[24]|c->r[24]; // 801D86F8
  c->r[30]=c->r[24]|c->r[24]; // 801D86FC
  c->r[29]=c->r[24]|c->r[24]; // 801D8700
L_801D8704:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D8704
  cmps(c,0,(int32_t)c->r[3],0); // 801D8708
  if (crb(c,2)) { goto L_801D8720; } // 801D870C
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 801D8710
  c->r[4]=0u+0x00000000u; // 801D8714
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8718
  c->lr=0x801D8720u; f_8000443C(c); // 801D871C
L_801D8720:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801D8720
  cmps(c,0,(int32_t)c->r[3],0); // 801D8724
  if (crb(c,2)) { goto L_801D873C; } // 801D8728
  c->r[0]=R32(c->r[24]+0x00000040u); // 801D872C
  c->r[4]=0u+0x00000000u; // 801D8730
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8734
  c->lr=0x801D873Cu; f_8000443C(c); // 801D8738
L_801D873C:;
  c->r[27]=c->r[30]|c->r[30]; // 801D873C
  c->r[28]=c->r[24]|c->r[24]; // 801D8740
  c->r[26]=0u+0x00000000u; // 801D8744
L_801D8748:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801D8748
  cmps(c,0,(int32_t)c->r[3],0); // 801D874C
  if (crb(c,2)) { goto L_801D8764; } // 801D8750
  c->r[0]=R32(c->r[28]+0x00000080u); // 801D8754
  c->r[4]=0u+0x00000000u; // 801D8758
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D875C
  c->lr=0x801D8764u; f_8000443C(c); // 801D8760
L_801D8764:;
  c->r[26]=c->r[26]+0x00000001u; // 801D8764
  c->r[28]=c->r[28]+0x00000004u; // 801D8768
  cmpu(c,0,c->r[26],0x00000003u); // 801D876C
  c->r[27]=c->r[27]+0x00000004u; // 801D8770
  if (crb(c,0)) { IRQCHK(c); goto L_801D8748; } // 801D8774
  c->r[28]=c->r[29]|c->r[29]; // 801D8778
  c->r[27]=c->r[24]|c->r[24]; // 801D877C
  c->r[26]=0u+0x00000000u; // 801D8780
L_801D8784:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 801D8784
  cmps(c,0,(int32_t)c->r[3],0); // 801D8788
  if (crb(c,2)) { goto L_801D87A0; } // 801D878C
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801D8790
  c->r[4]=0u+0x00000000u; // 801D8794
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8798
  c->lr=0x801D87A0u; f_8000443C(c); // 801D879C
L_801D87A0:;
  c->r[26]=c->r[26]+0x00000001u; // 801D87A0
  c->r[27]=c->r[27]+0x00000004u; // 801D87A4
  cmpu(c,0,c->r[26],0x00000002u); // 801D87A8
  c->r[28]=c->r[28]+0x00000004u; // 801D87AC
  if (crb(c,0)) { IRQCHK(c); goto L_801D8784; } // 801D87B0
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801D87B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D87B8
  if (crb(c,2)) { goto L_801D87D0; } // 801D87BC
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801D87C0
  c->r[4]=0u+0x00000000u; // 801D87C4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D87C8
  c->lr=0x801D87D0u; f_8000443C(c); // 801D87CC
L_801D87D0:;
  c->r[25]=c->r[25]+0x00000001u; // 801D87D0
  c->r[30]=c->r[30]+0x0000000Cu; // 801D87D4
  cmpu(c,0,c->r[25],0x00000003u); // 801D87D8
  c->r[29]=c->r[29]+0x00000008u; // 801D87DC
  c->r[31]=c->r[31]+0x00000004u; // 801D87E0
  if (crb(c,0)) { IRQCHK(c); goto L_801D8704; } // 801D87E4
  c->r[11]=c->r[1]+0x00000030u; // 801D87E8
  c->lr=0x801D87F0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D87EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D87F0
  c->lr=c->r[0]; // 801D87F4
  c->r[1]=c->r[1]+0x00000030u; // 801D87F8
  return; // 801D87FC
}

// __FreeDelayLine
void f_801D8800(Ctx* __restrict c) {
  trace_call(0x801D8800u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8800
  c->r[0]=c->lr; // 801D8804
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D8808
  c->r[11]=c->r[1]+0x00000030u; // 801D880C
  c->lr=0x801D8814u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8810
  c->r[25]=0u+0x00000000u; // 801D8814
  c->r[30]=c->r[3]|c->r[3]; // 801D8818
  c->r[31]=0u+0x00000000u; // 801D881C
  c->r[29]=c->r[3]|c->r[3]; // 801D8820
  c->r[28]=c->r[3]|c->r[3]; // 801D8824
L_801D8828:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D8828
  cmps(c,0,(int32_t)c->r[3],0); // 801D882C
  if (crb(c,2)) { goto L_801D8844; } // 801D8830
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D8834
  c->ctr=c->r[12]; // 801D8838
  if (true) { c->lr=0x801D8840u; dispatch(c,c->ctr); } // 801D883C
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D8840
L_801D8844:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 801D8844
  cmps(c,0,(int32_t)c->r[3],0); // 801D8848
  if (crb(c,2)) { goto L_801D8860; } // 801D884C
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D8850
  c->ctr=c->r[12]; // 801D8854
  if (true) { c->lr=0x801D885Cu; dispatch(c,c->ctr); } // 801D8858
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801D885C
L_801D8860:;
  c->r[27]=c->r[29]|c->r[29]; // 801D8860
  c->r[26]=0u+0x00000000u; // 801D8864
L_801D8868:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801D8868
  cmps(c,0,(int32_t)c->r[3],0); // 801D886C
  if (crb(c,2)) { goto L_801D8884; } // 801D8870
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D8874
  c->ctr=c->r[12]; // 801D8878
  if (true) { c->lr=0x801D8880u; dispatch(c,c->ctr); } // 801D887C
  W32(c->r[27]+0x00000044u,c->r[31]); // 801D8880
L_801D8884:;
  c->r[26]=c->r[26]+0x00000001u; // 801D8884
  c->r[27]=c->r[27]+0x00000004u; // 801D8888
  cmpu(c,0,c->r[26],0x00000003u); // 801D888C
  if (crb(c,0)) { IRQCHK(c); goto L_801D8868; } // 801D8890
  c->r[27]=c->r[28]|c->r[28]; // 801D8894
  c->r[26]=0u+0x00000000u; // 801D8898
L_801D889C:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 801D889C
  cmps(c,0,(int32_t)c->r[3],0); // 801D88A0
  if (crb(c,2)) { goto L_801D88B8; } // 801D88A4
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D88A8
  c->ctr=c->r[12]; // 801D88AC
  if (true) { c->lr=0x801D88B4u; dispatch(c,c->ctr); } // 801D88B0
  W32(c->r[27]+0x00000098u,c->r[31]); // 801D88B4
L_801D88B8:;
  c->r[26]=c->r[26]+0x00000001u; // 801D88B8
  c->r[27]=c->r[27]+0x00000004u; // 801D88BC
  cmpu(c,0,c->r[26],0x00000002u); // 801D88C0
  if (crb(c,0)) { IRQCHK(c); goto L_801D889C; } // 801D88C4
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801D88C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D88CC
  if (crb(c,2)) { goto L_801D88E4; } // 801D88D0
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D88D4
  c->ctr=c->r[12]; // 801D88D8
  if (true) { c->lr=0x801D88E0u; dispatch(c,c->ctr); } // 801D88DC
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801D88E0
L_801D88E4:;
  c->r[25]=c->r[25]+0x00000001u; // 801D88E4
  c->r[29]=c->r[29]+0x0000000Cu; // 801D88E8
  cmpu(c,0,c->r[25],0x00000003u); // 801D88EC
  c->r[28]=c->r[28]+0x00000008u; // 801D88F0
  c->r[30]=c->r[30]+0x00000004u; // 801D88F4
  if (crb(c,0)) { IRQCHK(c); goto L_801D8828; } // 801D88F8
  c->r[11]=c->r[1]+0x00000030u; // 801D88FC
  c->lr=0x801D8904u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8900
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D8904
  c->lr=c->r[0]; // 801D8908
  c->r[1]=c->r[1]+0x00000030u; // 801D890C
  return; // 801D8910
}

// __InitParams
void f_801D8914(Ctx* __restrict c) {
  trace_call(0x801D8914u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8914
  c->r[0]=c->lr; // 801D8918
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D891C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D8920
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D8924
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D8928
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D892C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801D8930
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801D8934
  c->r[11]=c->r[1]+0x00000030u; // 801D8938
  c->lr=0x801D8940u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D893C
  c->r[4]=R32(c->r[3]+0x00000110u); // 801D8940
  c->r[31]=0u+0x804B0000u; // 801D8944
  c->r[30]=c->r[3]|c->r[3]; // 801D8948
  cmpu(c,0,c->r[4],0x00000008u); // 801D894C
  c->r[31]=c->r[31]+0x00005C60u; // 801D8950
  if (crb(c,0)) { goto L_801D8960; } // 801D8954
  c->r[3]=0u+0x00000000u; // 801D8958
  goto L_801D8C08; // 801D895C
L_801D8960:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D8960
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8964
  fcmp(c,0,c->f[4],c->f[2]); // 801D8968
  if (crb(c,0)) { goto L_801D897C; } // 801D896C
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8970
  fcmp(c,0,c->f[4],c->f[0]); // 801D8974
  if (!crb(c,1)) { goto L_801D8984; } // 801D8978
L_801D897C:;
  c->r[3]=0u+0x00000000u; // 801D897C
  goto L_801D8C08; // 801D8980
L_801D8984:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 801D8984
  cmpu(c,0,c->r[0],0x00000006u); // 801D8988
  if (crb(c,0)) { goto L_801D8998; } // 801D898C
  c->r[3]=0u+0x00000000u; // 801D8990
  goto L_801D8C08; // 801D8994
L_801D8998:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8998
  fcmp(c,0,c->f[0],c->f[2]); // 801D899C
  if (!crb(c,0)) { goto L_801D89AC; } // 801D89A0
  c->r[3]=0u+0x00000000u; // 801D89A4
  goto L_801D8C08; // 801D89A8
L_801D89AC:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D89AC
  fcmp(c,0,c->f[0],c->f[2]); // 801D89B0
  if (crb(c,0)) { goto L_801D89C4; } // 801D89B4
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D89B8
  fcmp(c,0,c->f[0],c->f[1]); // 801D89BC
  if (!crb(c,1)) { goto L_801D89CC; } // 801D89C0
L_801D89C4:;
  c->r[3]=0u+0x00000000u; // 801D89C4
  goto L_801D8C08; // 801D89C8
L_801D89CC:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D89CC
  fcmp(c,0,c->f[0],c->f[2]); // 801D89D0
  if (crb(c,0)) { goto L_801D89E0; } // 801D89D4
  fcmp(c,0,c->f[0],c->f[1]); // 801D89D8
  if (!crb(c,1)) { goto L_801D89E8; } // 801D89DC
L_801D89E0:;
  c->r[3]=0u+0x00000000u; // 801D89E0
  goto L_801D8C08; // 801D89E4
L_801D89E8:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D89E8
  fcmp(c,0,c->f[0],c->f[2]); // 801D89EC
  if (crb(c,0)) { goto L_801D89FC; } // 801D89F0
  fcmp(c,0,c->f[0],c->f[1]); // 801D89F4
  if (!crb(c,1)) { goto L_801D8A04; } // 801D89F8
L_801D89FC:;
  c->r[3]=0u+0x00000000u; // 801D89FC
  goto L_801D8C08; // 801D8A00
L_801D8A04:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D8A04
  fcmp(c,0,c->f[3],c->f[2]); // 801D8A08
  if (crb(c,0)) { goto L_801D8A18; } // 801D8A0C
  fcmp(c,0,c->f[3],c->f[1]); // 801D8A10
  if (!crb(c,1)) { goto L_801D8A20; } // 801D8A14
L_801D8A18:;
  c->r[3]=0u+0x00000000u; // 801D8A18
  goto L_801D8C08; // 801D8A1C
L_801D8A20:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8A20
  fcmp(c,0,c->f[0],c->f[2]); // 801D8A24
  if (crb(c,0)) { goto L_801D8A34; } // 801D8A28
  fcmp(c,0,c->f[0],c->f[1]); // 801D8A2C
  if (!crb(c,1)) { goto L_801D8A3C; } // 801D8A30
L_801D8A34:;
  c->r[3]=0u+0x00000000u; // 801D8A34
  goto L_801D8C08; // 801D8A38
L_801D8A3C:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8A3C
  fcmp(c,0,c->f[0],c->f[2]); // 801D8A40
  if (crb(c,0)) { goto L_801D8A50; } // 801D8A44
  fcmp(c,0,c->f[0],c->f[1]); // 801D8A48
  if (!crb(c,1)) { goto L_801D8A58; } // 801D8A4C
L_801D8A50:;
  c->r[3]=0u+0x00000000u; // 801D8A50
  goto L_801D8C08; // 801D8A54
L_801D8A58:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8A58
  fcmp(c,0,c->f[0],c->f[2]); // 801D8A5C
  if (crb(c,0)) { goto L_801D8A6C; } // 801D8A60
  fcmp(c,0,c->f[0],c->f[1]); // 801D8A64
  if (!crb(c,1)) { goto L_801D8A74; } // 801D8A68
L_801D8A6C:;
  c->r[3]=0u+0x00000000u; // 801D8A6C
  goto L_801D8C08; // 801D8A70
L_801D8A74:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801D8A74
  c->r[9]=c->r[31]+0x00000000u; // 801D8A78
  {uint32_t ea=c->r[2]+0xFFFFC210u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8A7C
  c->r[5]=c->r[31]+0x00000060u; // 801D8A80
  {uint32_t ea=c->r[2]+0xFFFFC21Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8A84
  c->r[27]=0u+0x00000000u; // 801D8A88
  c->r[7]=c->r[9]+c->r[8]; // 801D8A8C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801D8A90
  c->r[6]=R32(c->r[7]+0x00000008u); // 801D8A94
  c->r[4]=c->r[5]+c->r[8]; // 801D8A98
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D8A9C
  c->r[0]=R32(c->r[9]+c->r[8]); // 801D8AA0
  c->r[0]=c->r[6]-c->r[0]; // 801D8AA4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D8AA8
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8AAC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D8AB0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D8AB4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801D8AB8
  c->r[0]=R32(c->r[7]+0x00000004u); // 801D8ABC
  c->r[0]=c->r[6]-c->r[0]; // 801D8AC0
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D8AC4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8AC8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D8ACC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D8AD0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801D8AD4
  c->r[0]=R32(c->r[7]+0x00000008u); // 801D8AD8
  c->r[0]=c->r[6]-c->r[0]; // 801D8ADC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D8AE0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8AE4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D8AE8
  W32(c->r[3]+0x00000038u,c->r[27]); // 801D8AEC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D8AF0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801D8AF4
  c->lr=0x801D8AFCu; f_801E7834(c); // 801D8AF8
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 801D8AFC
  c->r[26]=c->r[30]|c->r[30]; // 801D8B00
  {uint32_t ea=c->r[2]+0xFFFFC248u; c->f[29]=RF64(ea);} // 801D8B04
  c->r[28]=c->r[31]+0x000000C0u; // 801D8B08
  {uint32_t ea=c->r[2]+0xFFFFC230u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D8B0C
  c->r[24]=0u+0x00000000u; // 801D8B10
  {uint32_t ea=c->r[2]+0xFFFFC210u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D8B14
  c->r[25]=0u+0x00000000u; // 801D8B18
  c->r[29]=0u+0x43300000u; // 801D8B1C
L_801D8B20:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 801D8B20
  {uint32_t ea=c->r[2]+0xFFFFC238u; c->f[1]=RF64(ea);} // 801D8B24
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801D8B28
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D8B2C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801D8B30
  c->r[0]=c->r[25]+c->r[0]; // 801D8B34
  c->r[0]=R32(c->r[28]+c->r[0]); // 801D8B38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D8B3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D8B40
  W32(c->r[26]+0x00000074u,c->r[0]); // 801D8B44
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801D8B48
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8B4C
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801D8B50
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D8B54
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801D8B58
  c->lr=0x801D8B60u; f_801F7388(c); // 801D8B5C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801D8B60
  c->r[24]=c->r[24]+0x00000001u; // 801D8B64
  cmpu(c,0,c->r[24],0x00000003u); // 801D8B68
  c->r[25]=c->r[25]+0x00000004u; // 801D8B6C
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 801D8B70
  c->r[26]=c->r[26]+0x00000004u; // 801D8B74
  if (crb(c,0)) { IRQCHK(c); goto L_801D8B20; } // 801D8B78
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801D8B7C
  c->r[4]=0u+0x00000000u; // 801D8B80
  W32(c->r[30]+0x000000B0u,c->r[4]); // 801D8B84
  c->r[3]=c->r[31]+0x000000C0u; // 801D8B88
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801D8B8C
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8B90
  c->r[3]=c->r[3]+c->r[0]; // 801D8B94
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8B98
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D8B9C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801D8BA0
  {uint32_t ea=c->r[2]+0xFFFFC240u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8BA4
  W32(c->r[30]+0x000000B8u,c->r[0]); // 801D8BA8
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8BAC
  W32(c->r[30]+0x000000B4u,c->r[4]); // 801D8BB0
  fcmp(c,0,c->f[1],c->f[0]); // 801D8BB4
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D8BB8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 801D8BBC
  W32(c->r[30]+0x000000D4u,c->r[4]); // 801D8BC0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801D8BC4
  W32(c->r[30]+0x000000E0u,c->r[0]); // 801D8BC8
  W32(c->r[30]+0x000000D8u,c->r[4]); // 801D8BCC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D8BD0
  W32(c->r[30]+0x000000E4u,c->r[0]); // 801D8BD4
  W32(c->r[30]+0x000000DCu,c->r[4]); // 801D8BD8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D8BDC
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801D8BE0
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 801D8BE4
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 801D8BE8
  if (!crb(c,1)) { goto L_801D8BF4; } // 801D8BEC
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 801D8BF0
L_801D8BF4:;
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8BF4
  c->r[3]=0u+0x00000001u; // 801D8BF8
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 801D8BFC
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 801D8C00
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 801D8C04
L_801D8C08:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801D8C08
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D8C0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801D8C10
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D8C14
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801D8C18
  c->r[11]=c->r[1]+0x00000030u; // 801D8C1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801D8C20
  c->lr=0x801D8C28u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8C24
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D8C28
  c->lr=c->r[0]; // 801D8C2C
  c->r[1]=c->r[1]+0x00000060u; // 801D8C30
  return; // 801D8C34
}

// fn_801D8C38
void f_801D8C38(Ctx* __restrict c) {
  trace_call(0x801D8C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8C38
  c->r[0]=c->lr; // 801D8C3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8C40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8C44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8C48
  c->r[30]=c->r[3]|c->r[3]; // 801D8C4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8C50
  c->lr=0x801D8C58u; f_801BE74C(c); // 801D8C54
  c->r[31]=c->r[3]|c->r[3]; // 801D8C58
  c->lr=0x801D8C60u; f_801D58E4(c); // 801D8C5C
  cmpu(c,0,c->r[3],0x00000002u); // 801D8C60
  if (crb(c,2)) { goto L_801D8C78; } // 801D8C64
  c->r[3]=c->r[31]|c->r[31]; // 801D8C68
  c->lr=0x801D8C70u; f_801BE774(c); // 801D8C6C
  c->r[3]=0u+0x00000000u; // 801D8C70
  goto L_801D8DDC; // 801D8C74
L_801D8C78:;
  {uint32_t ea=c->r[30]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8C78
  c->r[0]=0u+0x00000001u; // 801D8C7C
  {uint32_t ea=c->r[2]+0xFFFFC254u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8C80
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8C84
  fcmp(c,0,c->f[1],c->f[0]); // 801D8C88
  if (!crb(c,0)) { goto L_801D8CC4; } // 801D8C8C
  c->lr=0x801D8C94u; f_801BE74C(c); // 801D8C90
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801D8C94
  c->r[29]=c->r[3]|c->r[3]; // 801D8C98
  c->r[3]=c->r[30]|c->r[30]; // 801D8C9C
  c->r[0]=c->r[0]|0x00000001u; // 801D8CA0
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8CA4
  c->lr=0x801D8CACu; f_801D9690(c); // 801D8CA8
  c->r[3]=c->r[29]|c->r[29]; // 801D8CAC
  c->lr=0x801D8CB4u; f_801BE774(c); // 801D8CB0
  c->r[3]=c->r[31]|c->r[31]; // 801D8CB4
  c->lr=0x801D8CBCu; f_801BE774(c); // 801D8CB8
  c->r[3]=0u+0x00000000u; // 801D8CBC
  goto L_801D8DDC; // 801D8CC0
L_801D8CC4:;
  c->r[3]=0u+0x804B0000u; // 801D8CC4
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8CC8
  c->r[3]=c->r[3]+0x00005E00u; // 801D8CCC
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801D8CD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D8CD4
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D8CD8
  c->lr=0x801D8CE0u; f_801E7834(c); // 801D8CDC
  W32(c->r[30]+0x00000048u,c->r[3]); // 801D8CE0
  c->r[4]=0u+0x804B0000u; // 801D8CE4
  c->r[4]=c->r[4]+0x00005EC0u; // 801D8CE8
  c->r[3]=c->r[30]|c->r[30]; // 801D8CEC
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801D8CF0
  W32(c->r[30]+0x00000094u,c->r[0]); // 801D8CF4
  c->r[0]=R32(c->r[4]+0x000000DCu); // 801D8CF8
  W32(c->r[30]+0x00000098u,c->r[0]); // 801D8CFC
  c->r[0]=R32(c->r[4]+0x000000E0u); // 801D8D00
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 801D8D04
  c->r[0]=R32(c->r[4]+0x000000E4u); // 801D8D08
  W32(c->r[30]+0x000000DCu,c->r[0]); // 801D8D0C
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801D8D10
  W32(c->r[30]+0x000000E0u,c->r[0]); // 801D8D14
  c->r[0]=R32(c->r[4]+0x000000ECu); // 801D8D18
  W32(c->r[30]+0x00000114u,c->r[0]); // 801D8D1C
  c->r[0]=R32(c->r[4]+0x000000F0u); // 801D8D20
  W32(c->r[30]+0x00000118u,c->r[0]); // 801D8D24
  c->r[0]=R32(c->r[4]+0x000000F4u); // 801D8D28
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 801D8D2C
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801D8D30
  W32(c->r[30]+0x00000120u,c->r[0]); // 801D8D34
  c->lr=0x801D8D3Cu; f_801D93F8(c); // 801D8D38
  cmps(c,0,(int32_t)c->r[3],0); // 801D8D3C
  if (!crb(c,2)) { goto L_801D8D78; } // 801D8D40
  c->lr=0x801D8D48u; f_801BE74C(c); // 801D8D44
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801D8D48
  c->r[29]=c->r[3]|c->r[3]; // 801D8D4C
  c->r[3]=c->r[30]|c->r[30]; // 801D8D50
  c->r[0]=c->r[0]|0x00000001u; // 801D8D54
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8D58
  c->lr=0x801D8D60u; f_801D9690(c); // 801D8D5C
  c->r[3]=c->r[29]|c->r[29]; // 801D8D60
  c->lr=0x801D8D68u; f_801BE774(c); // 801D8D64
  c->r[3]=c->r[31]|c->r[31]; // 801D8D68
  c->lr=0x801D8D70u; f_801BE774(c); // 801D8D6C
  c->r[3]=0u+0x00000000u; // 801D8D70
  goto L_801D8DDC; // 801D8D74
L_801D8D78:;
  c->r[3]=c->r[30]|c->r[30]; // 801D8D78
  c->lr=0x801D8D80u; f_801D956C(c); // 801D8D7C
  c->r[3]=c->r[30]|c->r[30]; // 801D8D80
  c->lr=0x801D8D88u; f_801D97A4(c); // 801D8D84
  cmps(c,0,(int32_t)c->r[3],0); // 801D8D88
  if (!crb(c,2)) { goto L_801D8DC4; } // 801D8D8C
  c->lr=0x801D8D94u; f_801BE74C(c); // 801D8D90
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801D8D94
  c->r[29]=c->r[3]|c->r[3]; // 801D8D98
  c->r[3]=c->r[30]|c->r[30]; // 801D8D9C
  c->r[0]=c->r[0]|0x00000001u; // 801D8DA0
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8DA4
  c->lr=0x801D8DACu; f_801D9690(c); // 801D8DA8
  c->r[3]=c->r[29]|c->r[29]; // 801D8DAC
  c->lr=0x801D8DB4u; f_801BE774(c); // 801D8DB0
  c->r[3]=c->r[31]|c->r[31]; // 801D8DB4
  c->lr=0x801D8DBCu; f_801BE774(c); // 801D8DB8
  c->r[3]=0u+0x00000000u; // 801D8DBC
  goto L_801D8DDC; // 801D8DC0
L_801D8DC4:;
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801D8DC4
  c->r[3]=c->r[31]|c->r[31]; // 801D8DC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801D8DCC
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8DD0
  c->lr=0x801D8DD8u; f_801BE774(c); // 801D8DD4
  c->r[3]=0u+0x00000001u; // 801D8DD8
L_801D8DDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8DDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8DE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8DE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8DE8
  c->lr=c->r[0]; // 801D8DEC
  c->r[1]=c->r[1]+0x00000020u; // 801D8DF0
  return; // 801D8DF4
}

// fn_801D8DF8
void f_801D8DF8(Ctx* __restrict c) {
  trace_call(0x801D8DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8DF8
  c->r[0]=c->lr; // 801D8DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8E00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8E04
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8E08
  c->r[30]=c->r[3]|c->r[3]; // 801D8E0C
  c->lr=0x801D8E14u; f_801BE74C(c); // 801D8E10
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801D8E14
  c->r[31]=c->r[3]|c->r[3]; // 801D8E18
  c->r[3]=c->r[30]|c->r[30]; // 801D8E1C
  c->r[0]=c->r[0]|0x00000001u; // 801D8E20
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801D8E24
  c->lr=0x801D8E2Cu; f_801D9690(c); // 801D8E28
  c->r[3]=c->r[31]|c->r[31]; // 801D8E2C
  c->lr=0x801D8E34u; f_801BE774(c); // 801D8E30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8E34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8E38
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D8E3C
  c->lr=c->r[0]; // 801D8E40
  c->r[1]=c->r[1]+0x00000010u; // 801D8E44
  return; // 801D8E48
}

// fn_801D8E4C
void f_801D8E4C(Ctx* __restrict c) {
  trace_call(0x801D8E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8E4C
  c->r[0]=c->lr; // 801D8E50
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D8E54
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801D8E58
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801D8E5C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 801D8E60
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 801D8E64
  c->r[11]=c->r[1]+0x00000090u; // 801D8E68
  c->lr=0x801D8E70u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8E6C
  c->r[0]=R32(c->r[4]+0x0000013Cu); // 801D8E70
  cmps(c,0,(int32_t)c->r[0],0); // 801D8E74
  if (crb(c,2)) { goto L_801D8E88; } // 801D8E78
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801D8E7C
  W32(c->r[4]+0x0000013Cu,c->r[0]); // 801D8E80
  goto L_801D93D0; // 801D8E84
L_801D8E88:;
  c->r[8]=R32(c->r[4]+0x00000168u); // 801D8E88
  c->r[7]=R32(c->r[3]+0x00000000u); // 801D8E8C
  c->r[6]=R32(c->r[3]+0x00000004u); // 801D8E90
  cmps(c,0,(int32_t)c->r[8],0); // 801D8E94
  c->r[5]=R32(c->r[3]+0x00000008u); // 801D8E98
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D8E9C
  W32(c->r[1]+0x00000038u,c->r[7]); // 801D8EA0
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 801D8EA4
  W32(c->r[1]+0x00000040u,c->r[5]); // 801D8EA8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D8EAC
  if (crb(c,2)) { goto L_801D8ED4; } // 801D8EB0
  c->r[6]=R32(c->r[8]+0x00000000u); // 801D8EB4
  c->r[5]=R32(c->r[8]+0x00000004u); // 801D8EB8
  c->r[3]=R32(c->r[8]+0x00000008u); // 801D8EBC
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801D8EC0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D8EC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801D8EC8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D8ECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8ED0
L_801D8ED4:;
  c->r[8]=R32(c->r[4]+0x0000016Cu); // 801D8ED4
  cmps(c,0,(int32_t)c->r[8],0); // 801D8ED8
  if (crb(c,2)) { goto L_801D8EF0; } // 801D8EDC
  c->r[3]=R32(c->r[8]+0x00000000u); // 801D8EE0
  c->r[5]=R32(c->r[8]+0x00000004u); // 801D8EE4
  c->r[6]=R32(c->r[8]+0x00000008u); // 801D8EE8
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801D8EEC
L_801D8EF0:;
  {uint32_t ea=c->r[2]+0xFFFFC258u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8EF0
  c->r[30]=0u+0x00000000u; // 801D8EF4
  {uint32_t ea=c->r[4]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D8EF8
  c->r[28]=0u+0x00000000u; // 801D8EFC
  {uint32_t ea=c->r[2]+0xFFFFC25Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801D8F00
  c->r[0]=0u+0x43300000u; // 801D8F04
  {uint32_t ea=c->r[4]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D8F08
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801D8F0C
  {uint32_t ea=c->r[2]+0xFFFFC260u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8F10
  c->r[29]=0u+0x00000004u; // 801D8F14
  {uint32_t ea=c->r[4]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D8F18
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801D8F1C
  {uint32_t ea=c->r[4]+0x00000124u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D8F20
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801D8F24
  {uint32_t ea=c->r[2]+0xFFFFC268u; c->f[0]=RF64(ea);} // 801D8F28
L_801D8F2C:;
  c->r[10]=c->r[4]|c->r[4]; // 801D8F2C
  c->r[11]=c->r[4]|c->r[4]; // 801D8F30
  c->r[12]=c->r[4]|c->r[4]; // 801D8F34
  c->r[8]=c->r[1]+0x00000008u; // 801D8F38
  c->r[9]=c->r[1]+0x00000038u; // 801D8F3C
  c->r[31]=c->r[1]+0x00000018u; // 801D8F40
  c->ctr=c->r[29]; // 801D8F44
L_801D8F48:;
  c->r[25]=R32(c->r[4]+0x00000168u); // 801D8F48
  cmps(c,0,(int32_t)c->r[25],0); // 801D8F4C
  if (crb(c,2)) { goto L_801D8F88; } // 801D8F50
  c->r[26]=R32(c->r[8]+0x00000000u); // 801D8F54
  c->r[27]=R32(c->r[9]+0x00000000u); // 801D8F58
  c->r[25]=R32(c->r[26]+0x00000000u); // 801D8F5C
  c->r[26]=c->r[26]+0x00000004u; // 801D8F60
  c->r[27]=R32(c->r[27]+0x00000000u); // 801D8F64
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D8F68
  c->r[25]=c->r[27]+c->r[25]; // 801D8F6C
  c->r[25]=c->r[25]^0x80000000u; // 801D8F70
  W32(c->r[8]+0x00000000u,c->r[26]); // 801D8F74
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 801D8F78
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 801D8F7C
  c->f[10]=c->ps1[10]=S(c->f[2]-c->f[0]); // 801D8F80
  goto L_801D8FA4; // 801D8F84
L_801D8F88:;
  c->r[25]=R32(c->r[9]+0x00000000u); // 801D8F88
  W32(c->r[1]+0x00000050u,c->r[0]); // 801D8F8C
  c->r[25]=R32(c->r[25]+0x00000000u); // 801D8F90
  c->r[25]=c->r[25]^0x80000000u; // 801D8F94
  W32(c->r[1]+0x00000054u,c->r[25]); // 801D8F98
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=RF64(ea);} // 801D8F9C
  c->f[10]=c->ps1[10]=S(c->f[2]-c->f[0]); // 801D8FA0
L_801D8FA4:;
  c->r[27]=R32(c->r[4]+0x00000010u); // 801D8FA4
  c->r[26]=R32(c->r[4]+0x00000014u); // 801D8FA8
  c->r[24]=R32(c->r[10]+0x00000000u); // 801D8FAC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801D8FB0
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D8FB4
  c->r[25]=R32(c->r[4]+0x00000018u); // 801D8FB8
  {uint32_t ea=c->r[24]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D8FBC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801D8FC0
  c->r[27]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801D8FC4
  {uint32_t ea=c->r[24]+c->r[26]; c->f[2]=c->ps1[2]=RF32(ea);} // 801D8FC8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D8FCC
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801D8FD0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801D8FD4
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D8FD8
  {uint32_t ea=c->r[24]+c->r[27]; c->f[7]=c->ps1[7]=RF32(ea);} // 801D8FDC
  c->r[26]=R32(c->r[4]+0x00000044u); // 801D8FE0
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[7]); // 801D8FE4
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801D8FE8
  cmps(c,0,(int32_t)c->r[26],0); // 801D8FEC
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801D8FF0
  if (crb(c,2)) { goto L_801D9010; } // 801D8FF4
  c->r[26]=R32(c->r[4]+0x00000040u); // 801D8FF8
  c->r[27]=R32(c->r[10]+0x00000030u); // 801D8FFC
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D9000
  {uint32_t ea=c->r[27]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801D9004
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[10]);} // 801D9008
  goto L_801D9014; // 801D900C
L_801D9010:;
  c->f[9]=c->f[10]; // 801D9010
L_801D9014:;
  c->r[26]=R32(c->r[4]+0x0000007Cu); // 801D9014
  c->r[24]=R32(c->r[11]+0x0000004Cu); // 801D9018
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D901C
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D9020
  {uint32_t ea=c->r[24]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D9024
  {uint32_t ea=c->r[2]+0xFFFFC254u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D9028
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D902C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D9030
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D9034
  {uint32_t ea=c->r[24]+c->r[26]; WF32(ea,c->f[7]);} // 801D9038
  c->r[26]=R32(c->r[4]+0x00000080u); // 801D903C
  c->r[25]=R32(c->r[11]+0x00000050u); // 801D9040
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D9044
  {uint32_t ea=c->r[4]+0x000000A4u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D9048
  {uint32_t ea=c->r[25]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D904C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D9050
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D9054
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D9058
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[7]);} // 801D905C
  c->r[26]=R32(c->r[4]+0x00000084u); // 801D9060
  c->r[27]=R32(c->r[11]+0x00000054u); // 801D9064
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D9068
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D906C
  {uint32_t ea=c->r[27]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D9070
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801D9074
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801D9078
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D907C
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[7]);} // 801D9080
  c->r[26]=R32(c->r[4]+0x000000CCu); // 801D9084
  c->r[24]=R32(c->r[12]+0x000000ACu); // 801D9088
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D908C
  {uint32_t ea=c->r[24]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D9090
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801D9094
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 801D9098
  {uint32_t ea=c->r[24]+c->r[26]; WF32(ea,c->f[7]);} // 801D909C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801D90A0
  c->r[26]=R32(c->r[4]+0x000000D0u); // 801D90A4
  c->r[25]=R32(c->r[12]+0x000000B0u); // 801D90A8
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 801D90AC
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D90B0
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801D90B4
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801D90B8
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801D90BC
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801D90C0
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[7]);} // 801D90C4
  {uint32_t ea=c->r[10]+0x00000128u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D90C8
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801D90CC
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801D90D0
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801D90D4
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801D90D8
  {uint32_t ea=c->r[10]+0x00000128u; WF32(ea,c->f[9]);} // 801D90DC
  c->r[26]=R32(c->r[10]+0x000000F4u); // 801D90E0
  c->r[27]=R32(c->r[10]+0x000000E4u); // 801D90E4
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D90E8
  {uint32_t ea=c->r[27]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801D90EC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801D90F0
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801D90F4
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[7]);} // 801D90F8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801D90FC
  c->r[26]=R32(c->r[10]+0x000000F4u); // 801D9100
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801D9104
  c->r[27]=c->r[26]+0x00000001u; // 801D9108
  W32(c->r[10]+0x000000F4u,c->r[27]); // 801D910C
  c->r[26]=R32(c->r[10]+0x00000104u); // 801D9110
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[7]);} // 801D9114
  cmpu(c,0,c->r[27],c->r[26]); // 801D9118
  if (crb(c,0)) { goto L_801D9124; } // 801D911C
  W32(c->r[10]+0x000000F4u,c->r[28]); // 801D9120
L_801D9124:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801D9124
  c->r[8]=c->r[8]+0x00000004u; // 801D9128
  c->r[9]=c->r[9]+0x00000004u; // 801D912C
  c->r[10]=c->r[10]+0x00000004u; // 801D9130
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801D9134
  c->r[11]=c->r[11]+0x0000000Cu; // 801D9138
  c->r[12]=c->r[12]+0x00000008u; // 801D913C
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801D9140
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 801D9144
  c->r[31]=c->r[31]+0x00000004u; // 801D9148
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8F48; } // 801D914C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801D9150
  {uint32_t ea=c->r[1]+0x00000020u; c->f[13]=c->ps1[13]=RF32(ea);} // 801D9154
  {uint32_t ea=c->r[1]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 801D9158
  c->f[7]=c->ps1[7]=S(c->f[31]+c->f[13]); // 801D915C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[12]=c->ps1[12]=RF32(ea);} // 801D9160
  c->f[2]=c->ps1[2]=S(c->f[10]+c->f[13]); // 801D9164
  c->r[26]=R32(c->r[1]+0x00000038u); // 801D9168
  c->f[11]=c->ps1[11]=S(c->f[10]+c->f[31]); // 801D916C
  c->r[9]=R32(c->r[1]+0x00000044u); // 801D9170
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[7]); // 801D9174
  c->r[27]=c->r[26]+0x00000004u; // 801D9178
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[2]); // 801D917C
  c->r[8]=c->r[9]+0x00000004u; // 801D9180
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D9184
  c->f[30]=c->ps1[30]=S(c->f[12]+c->f[11]); // 801D9188
  c->f[9]=c->ps1[9]=S(c->f[7]*c->f[6]); // 801D918C
  c->r[11]=R32(c->r[1]+0x00000040u); // 801D9190
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9194
  c->r[12]=c->r[31]+0x00000004u; // 801D9198
  c->r[10]=c->r[11]+0x00000004u; // 801D919C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[6]); // 801D91A0
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[9]); // 801D91A4
  W32(c->r[1]+0x00000038u,c->r[27]); // 801D91A8
  c->f[9]=c->ps1[9]=S(c->f[31]+c->f[8]); // 801D91AC
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[6]); // 801D91B0
  W32(c->r[1]+0x00000044u,c->r[8]); // 801D91B4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 801D91B8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[10]);} // 801D91BC
  c->f[8]=c->ps1[8]=S(c->f[13]+c->f[7]); // 801D91C0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D91C4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[9]);} // 801D91C8
  c->f[7]=c->ps1[7]=S(c->f[13]+c->f[11]); // 801D91CC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[8]);} // 801D91D0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 801D91D4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[6]); // 801D91D8
  c->r[27]=R32(c->r[1]+0x00000054u); // 801D91DC
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[7]); // 801D91E0
  W32(c->r[1]+0x0000003Cu,c->r[12]); // 801D91E4
  W32(c->r[26]+0x00000000u,c->r[27]); // 801D91E8
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D91EC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[7]);} // 801D91F0
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801D91F4
  W32(c->r[1]+0x00000040u,c->r[10]); // 801D91F8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D91FC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801D9200
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801D9204
  W32(c->r[31]+0x00000000u,c->r[8]); // 801D9208
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D920C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801D9210
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D9214
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 801D9218
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 801D921C
  W32(c->r[11]+0x00000000u,c->r[8]); // 801D9220
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9224
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D9228
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D922C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 801D9230
  c->r[8]=R32(c->r[1]+0x00000064u); // 801D9234
  W32(c->r[9]+0x00000000u,c->r[8]); // 801D9238
  c->r[8]=R32(c->r[4]+0x0000016Cu); // 801D923C
  cmps(c,0,(int32_t)c->r[8],0); // 801D9240
  if (crb(c,2)) { goto L_801D92B8; } // 801D9244
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9248
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 801D924C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D9250
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 801D9254
  c->r[8]=R32(c->r[1]+0x00000064u); // 801D9258
  W32(c->r[3]+0x00000000u,c->r[8]); // 801D925C
  c->r[3]=c->r[3]+0x00000004u; // 801D9260
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9264
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801D9268
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D926C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 801D9270
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 801D9274
  W32(c->r[5]+0x00000000u,c->r[8]); // 801D9278
  c->r[5]=c->r[5]+0x00000004u; // 801D927C
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9280
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801D9284
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D9288
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 801D928C
  c->r[8]=R32(c->r[1]+0x00000054u); // 801D9290
  W32(c->r[6]+0x00000000u,c->r[8]); // 801D9294
  c->r[6]=c->r[6]+0x00000004u; // 801D9298
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D929C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801D92A0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D92A4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801D92A8
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801D92AC
  W32(c->r[7]+0x00000000u,c->r[8]); // 801D92B0
  c->r[7]=c->r[7]+0x00000004u; // 801D92B4
L_801D92B8:;
  c->r[8]=R32(c->r[4]+0x00000010u); // 801D92B8
  c->r[9]=c->r[8]+0x00000001u; // 801D92BC
  W32(c->r[4]+0x00000010u,c->r[9]); // 801D92C0
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801D92C4
  cmpu(c,0,c->r[9],c->r[8]); // 801D92C8
  if (crb(c,0)) { goto L_801D92D4; } // 801D92CC
  W32(c->r[4]+0x00000010u,c->r[28]); // 801D92D0
L_801D92D4:;
  c->r[8]=R32(c->r[4]+0x00000014u); // 801D92D4
  c->r[9]=c->r[8]+0x00000001u; // 801D92D8
  W32(c->r[4]+0x00000014u,c->r[9]); // 801D92DC
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801D92E0
  cmpu(c,0,c->r[9],c->r[8]); // 801D92E4
  if (crb(c,0)) { goto L_801D92F0; } // 801D92E8
  W32(c->r[4]+0x00000014u,c->r[28]); // 801D92EC
L_801D92F0:;
  c->r[8]=R32(c->r[4]+0x00000018u); // 801D92F0
  c->r[10]=c->r[4]+0x00000008u; // 801D92F4
  c->r[9]=c->r[8]+0x00000001u; // 801D92F8
  W32(c->r[4]+0x00000018u,c->r[9]); // 801D92FC
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801D9300
  cmpu(c,0,c->r[9],c->r[8]); // 801D9304
  if (crb(c,0)) { goto L_801D9310; } // 801D9308
  W32(c->r[10]+0x00000010u,c->r[28]); // 801D930C
L_801D9310:;
  c->r[9]=R32(c->r[4]+0x00000044u); // 801D9310
  cmps(c,0,(int32_t)c->r[9],0); // 801D9314
  if (crb(c,2)) { goto L_801D9334; } // 801D9318
  c->r[8]=R32(c->r[4]+0x00000040u); // 801D931C
  c->r[8]=c->r[8]+0x00000001u; // 801D9320
  cmpu(c,0,c->r[8],c->r[9]); // 801D9324
  W32(c->r[4]+0x00000040u,c->r[8]); // 801D9328
  if (crb(c,0)) { goto L_801D9334; } // 801D932C
  W32(c->r[4]+0x00000040u,c->r[28]); // 801D9330
L_801D9334:;
  c->r[8]=R32(c->r[4]+0x0000007Cu); // 801D9334
  c->r[9]=c->r[8]+0x00000001u; // 801D9338
  W32(c->r[4]+0x0000007Cu,c->r[9]); // 801D933C
  c->r[8]=R32(c->r[4]+0x00000088u); // 801D9340
  cmpu(c,0,c->r[9],c->r[8]); // 801D9344
  if (crb(c,0)) { goto L_801D9350; } // 801D9348
  W32(c->r[4]+0x0000007Cu,c->r[28]); // 801D934C
L_801D9350:;
  c->r[8]=R32(c->r[4]+0x00000080u); // 801D9350
  c->r[9]=c->r[8]+0x00000001u; // 801D9354
  W32(c->r[4]+0x00000080u,c->r[9]); // 801D9358
  c->r[8]=R32(c->r[4]+0x0000008Cu); // 801D935C
  cmpu(c,0,c->r[9],c->r[8]); // 801D9360
  if (crb(c,0)) { goto L_801D936C; } // 801D9364
  W32(c->r[4]+0x00000080u,c->r[28]); // 801D9368
L_801D936C:;
  c->r[8]=R32(c->r[4]+0x00000084u); // 801D936C
  c->r[10]=c->r[4]+0x00000008u; // 801D9370
  c->r[9]=c->r[8]+0x00000001u; // 801D9374
  W32(c->r[4]+0x00000084u,c->r[9]); // 801D9378
  c->r[8]=R32(c->r[4]+0x00000090u); // 801D937C
  cmpu(c,0,c->r[9],c->r[8]); // 801D9380
  if (crb(c,0)) { goto L_801D938C; } // 801D9384
  W32(c->r[10]+0x0000007Cu,c->r[28]); // 801D9388
L_801D938C:;
  c->r[8]=R32(c->r[4]+0x000000CCu); // 801D938C
  c->r[9]=c->r[8]+0x00000001u; // 801D9390
  W32(c->r[4]+0x000000CCu,c->r[9]); // 801D9394
  c->r[8]=R32(c->r[4]+0x000000D4u); // 801D9398
  cmpu(c,0,c->r[9],c->r[8]); // 801D939C
  if (crb(c,0)) { goto L_801D93A8; } // 801D93A0
  W32(c->r[4]+0x000000CCu,c->r[28]); // 801D93A4
L_801D93A8:;
  c->r[8]=R32(c->r[4]+0x000000D0u); // 801D93A8
  c->r[9]=c->r[8]+0x00000001u; // 801D93AC
  W32(c->r[4]+0x000000D0u,c->r[9]); // 801D93B0
  c->r[8]=R32(c->r[4]+0x000000D8u); // 801D93B4
  cmpu(c,0,c->r[9],c->r[8]); // 801D93B8
  if (crb(c,0)) { goto L_801D93C4; } // 801D93BC
  W32(c->r[4]+0x000000D0u,c->r[28]); // 801D93C0
L_801D93C4:;
  c->r[30]=c->r[30]+0x00000001u; // 801D93C4
  cmpu(c,0,c->r[30],0x00000060u); // 801D93C8
  if (crb(c,0)) { IRQCHK(c); goto L_801D8F2C; } // 801D93CC
L_801D93D0:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801D93D0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801D93D4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 801D93D8
  c->r[11]=c->r[1]+0x00000090u; // 801D93DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 801D93E0
  c->lr=0x801D93E8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D93E4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801D93E8
  c->lr=c->r[0]; // 801D93EC
  c->r[1]=c->r[1]+0x000000B0u; // 801D93F0
  return; // 801D93F4
}

// fn_801D93F8
void f_801D93F8(Ctx* __restrict c) {
  trace_call(0x801D93F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D93F8
  c->r[0]=c->lr; // 801D93FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9400
  c->r[11]=c->r[1]+0x00000030u; // 801D9404
  c->lr=0x801D940Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9408
  c->r[23]=c->r[3]|c->r[3]; // 801D940C
  c->r[24]=0u+0x00000000u; // 801D9410
  c->r[30]=c->r[23]|c->r[23]; // 801D9414
  c->r[31]=0u+0x00000000u; // 801D9418
  c->r[29]=c->r[23]|c->r[23]; // 801D941C
  c->r[28]=c->r[23]|c->r[23]; // 801D9420
L_801D9424:;
  c->r[0]=R32(c->r[23]+0x00000020u); // 801D9424
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D9428
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D942C
  c->ctr=c->r[12]; // 801D9430
  if (true) { c->lr=0x801D9438u; dispatch(c,c->ctr); } // 801D9434
  cmps(c,0,(int32_t)c->r[3],0); // 801D9438
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D943C
  if (!crb(c,2)) { goto L_801D944C; } // 801D9440
  c->r[3]=0u+0x00000000u; // 801D9444
  goto L_801D9554; // 801D9448
L_801D944C:;
  c->r[0]=R32(c->r[23]+0x00000048u); // 801D944C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9450
  if (crb(c,2)) { goto L_801D947C; } // 801D9454
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D9458
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D945C
  c->ctr=c->r[12]; // 801D9460
  if (true) { c->lr=0x801D9468u; dispatch(c,c->ctr); } // 801D9464
  cmps(c,0,(int32_t)c->r[3],0); // 801D9468
  W32(c->r[30]+0x00000030u,c->r[3]); // 801D946C
  if (!crb(c,2)) { goto L_801D9480; } // 801D9470
  c->r[3]=0u+0x00000000u; // 801D9474
  goto L_801D9554; // 801D9478
L_801D947C:;
  W32(c->r[30]+0x00000030u,c->r[31]); // 801D947C
L_801D9480:;
  c->r[26]=c->r[23]|c->r[23]; // 801D9480
  c->r[27]=c->r[29]|c->r[29]; // 801D9484
  c->r[25]=0u+0x00000000u; // 801D9488
L_801D948C:;
  c->r[0]=R32(c->r[26]+0x00000094u); // 801D948C
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D9490
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9494
  c->ctr=c->r[12]; // 801D9498
  if (true) { c->lr=0x801D94A0u; dispatch(c,c->ctr); } // 801D949C
  cmps(c,0,(int32_t)c->r[3],0); // 801D94A0
  W32(c->r[27]+0x0000004Cu,c->r[3]); // 801D94A4
  if (!crb(c,2)) { goto L_801D94B4; } // 801D94A8
  c->r[3]=0u+0x00000000u; // 801D94AC
  goto L_801D9554; // 801D94B0
L_801D94B4:;
  c->r[25]=c->r[25]+0x00000001u; // 801D94B4
  c->r[27]=c->r[27]+0x00000004u; // 801D94B8
  cmpu(c,0,c->r[25],0x00000003u); // 801D94BC
  c->r[26]=c->r[26]+0x00000004u; // 801D94C0
  if (crb(c,0)) { IRQCHK(c); goto L_801D948C; } // 801D94C4
  c->r[27]=c->r[23]|c->r[23]; // 801D94C8
  c->r[26]=c->r[28]|c->r[28]; // 801D94CC
  c->r[25]=0u+0x00000000u; // 801D94D0
L_801D94D4:;
  c->r[0]=R32(c->r[27]+0x000000DCu); // 801D94D4
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D94D8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D94DC
  c->ctr=c->r[12]; // 801D94E0
  if (true) { c->lr=0x801D94E8u; dispatch(c,c->ctr); } // 801D94E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D94E8
  W32(c->r[26]+0x000000ACu,c->r[3]); // 801D94EC
  if (!crb(c,2)) { goto L_801D94FC; } // 801D94F0
  c->r[3]=0u+0x00000000u; // 801D94F4
  goto L_801D9554; // 801D94F8
L_801D94FC:;
  c->r[25]=c->r[25]+0x00000001u; // 801D94FC
  c->r[26]=c->r[26]+0x00000004u; // 801D9500
  cmpu(c,0,c->r[25],0x00000002u); // 801D9504
  c->r[27]=c->r[27]+0x00000004u; // 801D9508
  if (crb(c,0)) { IRQCHK(c); goto L_801D94D4; } // 801D950C
  c->r[0]=R32(c->r[30]+0x00000114u); // 801D9510
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D9514
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9518
  c->ctr=c->r[12]; // 801D951C
  if (true) { c->lr=0x801D9524u; dispatch(c,c->ctr); } // 801D9520
  cmps(c,0,(int32_t)c->r[3],0); // 801D9524
  W32(c->r[30]+0x000000E4u,c->r[3]); // 801D9528
  if (!crb(c,2)) { goto L_801D9538; } // 801D952C
  c->r[3]=0u+0x00000000u; // 801D9530
  goto L_801D9554; // 801D9534
L_801D9538:;
  c->r[24]=c->r[24]+0x00000001u; // 801D9538
  c->r[29]=c->r[29]+0x0000000Cu; // 801D953C
  cmpu(c,0,c->r[24],0x00000004u); // 801D9540
  c->r[28]=c->r[28]+0x00000008u; // 801D9544
  c->r[30]=c->r[30]+0x00000004u; // 801D9548
  if (crb(c,0)) { IRQCHK(c); goto L_801D9424; } // 801D954C
  c->r[3]=0u+0x00000001u; // 801D9550
L_801D9554:;
  c->r[11]=c->r[1]+0x00000030u; // 801D9554
  c->lr=0x801D955Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9558
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D955C
  c->lr=c->r[0]; // 801D9560
  c->r[1]=c->r[1]+0x00000030u; // 801D9564
  return; // 801D9568
}

// fn_801D956C
void f_801D956C(Ctx* __restrict c) {
  trace_call(0x801D956Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D956C
  c->r[0]=c->lr; // 801D9570
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9574
  c->r[11]=c->r[1]+0x00000030u; // 801D9578
  c->lr=0x801D9580u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D957C
  c->r[24]=c->r[3]|c->r[3]; // 801D9580
  c->r[25]=0u+0x00000000u; // 801D9584
  c->r[31]=c->r[24]|c->r[24]; // 801D9588
  c->r[30]=c->r[24]|c->r[24]; // 801D958C
  c->r[29]=c->r[24]|c->r[24]; // 801D9590
L_801D9594:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D9594
  cmps(c,0,(int32_t)c->r[3],0); // 801D9598
  if (crb(c,2)) { goto L_801D95B0; } // 801D959C
  c->r[0]=R32(c->r[24]+0x00000020u); // 801D95A0
  c->r[4]=0u+0x00000000u; // 801D95A4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D95A8
  c->lr=0x801D95B0u; f_8000443C(c); // 801D95AC
L_801D95B0:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801D95B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D95B4
  if (crb(c,2)) { goto L_801D95CC; } // 801D95B8
  c->r[0]=R32(c->r[24]+0x00000048u); // 801D95BC
  c->r[4]=0u+0x00000000u; // 801D95C0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D95C4
  c->lr=0x801D95CCu; f_8000443C(c); // 801D95C8
L_801D95CC:;
  c->r[27]=c->r[30]|c->r[30]; // 801D95CC
  c->r[28]=c->r[24]|c->r[24]; // 801D95D0
  c->r[26]=0u+0x00000000u; // 801D95D4
L_801D95D8:;
  c->r[3]=R32(c->r[27]+0x0000004Cu); // 801D95D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D95DC
  if (crb(c,2)) { goto L_801D95F4; } // 801D95E0
  c->r[0]=R32(c->r[28]+0x00000094u); // 801D95E4
  c->r[4]=0u+0x00000000u; // 801D95E8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D95EC
  c->lr=0x801D95F4u; f_8000443C(c); // 801D95F0
L_801D95F4:;
  c->r[26]=c->r[26]+0x00000001u; // 801D95F4
  c->r[28]=c->r[28]+0x00000004u; // 801D95F8
  cmpu(c,0,c->r[26],0x00000003u); // 801D95FC
  c->r[27]=c->r[27]+0x00000004u; // 801D9600
  if (crb(c,0)) { IRQCHK(c); goto L_801D95D8; } // 801D9604
  c->r[28]=c->r[29]|c->r[29]; // 801D9608
  c->r[27]=c->r[24]|c->r[24]; // 801D960C
  c->r[26]=0u+0x00000000u; // 801D9610
L_801D9614:;
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801D9614
  cmps(c,0,(int32_t)c->r[3],0); // 801D9618
  if (crb(c,2)) { goto L_801D9630; } // 801D961C
  c->r[0]=R32(c->r[27]+0x000000DCu); // 801D9620
  c->r[4]=0u+0x00000000u; // 801D9624
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9628
  c->lr=0x801D9630u; f_8000443C(c); // 801D962C
L_801D9630:;
  c->r[26]=c->r[26]+0x00000001u; // 801D9630
  c->r[27]=c->r[27]+0x00000004u; // 801D9634
  cmpu(c,0,c->r[26],0x00000002u); // 801D9638
  c->r[28]=c->r[28]+0x00000004u; // 801D963C
  if (crb(c,0)) { IRQCHK(c); goto L_801D9614; } // 801D9640
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801D9644
  cmps(c,0,(int32_t)c->r[3],0); // 801D9648
  if (crb(c,2)) { goto L_801D9660; } // 801D964C
  c->r[0]=R32(c->r[31]+0x00000114u); // 801D9650
  c->r[4]=0u+0x00000000u; // 801D9654
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9658
  c->lr=0x801D9660u; f_8000443C(c); // 801D965C
L_801D9660:;
  c->r[25]=c->r[25]+0x00000001u; // 801D9660
  c->r[30]=c->r[30]+0x0000000Cu; // 801D9664
  cmpu(c,0,c->r[25],0x00000004u); // 801D9668
  c->r[29]=c->r[29]+0x00000008u; // 801D966C
  c->r[31]=c->r[31]+0x00000004u; // 801D9670
  if (crb(c,0)) { IRQCHK(c); goto L_801D9594; } // 801D9674
  c->r[11]=c->r[1]+0x00000030u; // 801D9678
  c->lr=0x801D9680u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D967C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9680
  c->lr=c->r[0]; // 801D9684
  c->r[1]=c->r[1]+0x00000030u; // 801D9688
  return; // 801D968C
}

// fn_801D9690
void f_801D9690(Ctx* __restrict c) {
  trace_call(0x801D9690u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9690
  c->r[0]=c->lr; // 801D9694
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9698
  c->r[11]=c->r[1]+0x00000030u; // 801D969C
  c->lr=0x801D96A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D96A0
  c->r[25]=0u+0x00000000u; // 801D96A4
  c->r[30]=c->r[3]|c->r[3]; // 801D96A8
  c->r[31]=0u+0x00000000u; // 801D96AC
  c->r[29]=c->r[3]|c->r[3]; // 801D96B0
  c->r[28]=c->r[3]|c->r[3]; // 801D96B4
L_801D96B8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D96B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D96BC
  if (crb(c,2)) { goto L_801D96D4; } // 801D96C0
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D96C4
  c->ctr=c->r[12]; // 801D96C8
  if (true) { c->lr=0x801D96D0u; dispatch(c,c->ctr); } // 801D96CC
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D96D0
L_801D96D4:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 801D96D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D96D8
  if (crb(c,2)) { goto L_801D96F0; } // 801D96DC
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D96E0
  c->ctr=c->r[12]; // 801D96E4
  if (true) { c->lr=0x801D96ECu; dispatch(c,c->ctr); } // 801D96E8
  W32(c->r[30]+0x00000030u,c->r[31]); // 801D96EC
L_801D96F0:;
  c->r[27]=c->r[29]|c->r[29]; // 801D96F0
  c->r[26]=0u+0x00000000u; // 801D96F4
L_801D96F8:;
  c->r[3]=R32(c->r[27]+0x0000004Cu); // 801D96F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D96FC
  if (crb(c,2)) { goto L_801D9714; } // 801D9700
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9704
  c->ctr=c->r[12]; // 801D9708
  if (true) { c->lr=0x801D9710u; dispatch(c,c->ctr); } // 801D970C
  W32(c->r[27]+0x0000004Cu,c->r[31]); // 801D9710
L_801D9714:;
  c->r[26]=c->r[26]+0x00000001u; // 801D9714
  c->r[27]=c->r[27]+0x00000004u; // 801D9718
  cmpu(c,0,c->r[26],0x00000003u); // 801D971C
  if (crb(c,0)) { IRQCHK(c); goto L_801D96F8; } // 801D9720
  c->r[27]=c->r[28]|c->r[28]; // 801D9724
  c->r[26]=0u+0x00000000u; // 801D9728
L_801D972C:;
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801D972C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9730
  if (crb(c,2)) { goto L_801D9748; } // 801D9734
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9738
  c->ctr=c->r[12]; // 801D973C
  if (true) { c->lr=0x801D9744u; dispatch(c,c->ctr); } // 801D9740
  W32(c->r[27]+0x000000ACu,c->r[31]); // 801D9744
L_801D9748:;
  c->r[26]=c->r[26]+0x00000001u; // 801D9748
  c->r[27]=c->r[27]+0x00000004u; // 801D974C
  cmpu(c,0,c->r[26],0x00000002u); // 801D9750
  if (crb(c,0)) { IRQCHK(c); goto L_801D972C; } // 801D9754
  c->r[3]=R32(c->r[30]+0x000000E4u); // 801D9758
  cmps(c,0,(int32_t)c->r[3],0); // 801D975C
  if (crb(c,2)) { goto L_801D9774; } // 801D9760
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9764
  c->ctr=c->r[12]; // 801D9768
  if (true) { c->lr=0x801D9770u; dispatch(c,c->ctr); } // 801D976C
  W32(c->r[30]+0x000000E4u,c->r[31]); // 801D9770
L_801D9774:;
  c->r[25]=c->r[25]+0x00000001u; // 801D9774
  c->r[29]=c->r[29]+0x0000000Cu; // 801D9778
  cmpu(c,0,c->r[25],0x00000004u); // 801D977C
  c->r[28]=c->r[28]+0x00000008u; // 801D9780
  c->r[30]=c->r[30]+0x00000004u; // 801D9784
  if (crb(c,0)) { IRQCHK(c); goto L_801D96B8; } // 801D9788
  c->r[11]=c->r[1]+0x00000030u; // 801D978C
  c->lr=0x801D9794u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9790
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9794
  c->lr=c->r[0]; // 801D9798
  c->r[1]=c->r[1]+0x00000030u; // 801D979C
  return; // 801D97A0
}

// fn_801D97A4
void f_801D97A4(Ctx* __restrict c) {
  trace_call(0x801D97A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D97A4
  c->r[0]=c->lr; // 801D97A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D97AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801D97B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801D97B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801D97B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801D97BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801D97C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801D97C4
  c->r[11]=c->r[1]+0x00000030u; // 801D97C8
  c->lr=0x801D97D0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D97CC
  c->r[4]=R32(c->r[3]+0x00000140u); // 801D97D0
  c->r[31]=0u+0x804B0000u; // 801D97D4
  c->r[30]=c->r[3]|c->r[3]; // 801D97D8
  cmpu(c,0,c->r[4],0x00000008u); // 801D97DC
  c->r[31]=c->r[31]+0x00005E00u; // 801D97E0
  if (crb(c,0)) { goto L_801D97F0; } // 801D97E4
  c->r[3]=0u+0x00000000u; // 801D97E8
  goto L_801D9AA8; // 801D97EC
L_801D97F0:;
  {uint32_t ea=c->r[3]+0x00000148u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D97F0
  {uint32_t ea=c->r[2]+0xFFFFC254u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D97F4
  fcmp(c,0,c->f[4],c->f[2]); // 801D97F8
  if (crb(c,0)) { goto L_801D980C; } // 801D97FC
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9800
  fcmp(c,0,c->f[4],c->f[0]); // 801D9804
  if (!crb(c,1)) { goto L_801D9814; } // 801D9808
L_801D980C:;
  c->r[3]=0u+0x00000000u; // 801D980C
  goto L_801D9AA8; // 801D9810
L_801D9814:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 801D9814
  cmpu(c,0,c->r[0],0x00000006u); // 801D9818
  if (crb(c,0)) { goto L_801D9828; } // 801D981C
  c->r[3]=0u+0x00000000u; // 801D9820
  goto L_801D9AA8; // 801D9824
L_801D9828:;
  {uint32_t ea=c->r[3]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9828
  fcmp(c,0,c->f[0],c->f[2]); // 801D982C
  if (!crb(c,0)) { goto L_801D983C; } // 801D9830
  c->r[3]=0u+0x00000000u; // 801D9834
  goto L_801D9AA8; // 801D9838
L_801D983C:;
  {uint32_t ea=c->r[3]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D983C
  fcmp(c,0,c->f[0],c->f[2]); // 801D9840
  if (crb(c,0)) { goto L_801D9854; } // 801D9844
  {uint32_t ea=c->r[2]+0xFFFFC258u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D9848
  fcmp(c,0,c->f[0],c->f[1]); // 801D984C
  if (!crb(c,1)) { goto L_801D985C; } // 801D9850
L_801D9854:;
  c->r[3]=0u+0x00000000u; // 801D9854
  goto L_801D9AA8; // 801D9858
L_801D985C:;
  {uint32_t ea=c->r[3]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D985C
  fcmp(c,0,c->f[0],c->f[2]); // 801D9860
  if (crb(c,0)) { goto L_801D9870; } // 801D9864
  fcmp(c,0,c->f[0],c->f[1]); // 801D9868
  if (!crb(c,1)) { goto L_801D9878; } // 801D986C
L_801D9870:;
  c->r[3]=0u+0x00000000u; // 801D9870
  goto L_801D9AA8; // 801D9874
L_801D9878:;
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9878
  fcmp(c,0,c->f[0],c->f[2]); // 801D987C
  if (crb(c,0)) { goto L_801D988C; } // 801D9880
  fcmp(c,0,c->f[0],c->f[1]); // 801D9884
  if (!crb(c,1)) { goto L_801D9894; } // 801D9888
L_801D988C:;
  c->r[3]=0u+0x00000000u; // 801D988C
  goto L_801D9AA8; // 801D9890
L_801D9894:;
  {uint32_t ea=c->r[3]+0x00000160u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D9894
  fcmp(c,0,c->f[3],c->f[2]); // 801D9898
  if (crb(c,0)) { goto L_801D98A8; } // 801D989C
  fcmp(c,0,c->f[3],c->f[1]); // 801D98A0
  if (!crb(c,1)) { goto L_801D98B0; } // 801D98A4
L_801D98A8:;
  c->r[3]=0u+0x00000000u; // 801D98A8
  goto L_801D9AA8; // 801D98AC
L_801D98B0:;
  {uint32_t ea=c->r[3]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D98B0
  fcmp(c,0,c->f[0],c->f[2]); // 801D98B4
  if (crb(c,0)) { goto L_801D98C4; } // 801D98B8
  fcmp(c,0,c->f[0],c->f[1]); // 801D98BC
  if (!crb(c,1)) { goto L_801D98CC; } // 801D98C0
L_801D98C4:;
  c->r[3]=0u+0x00000000u; // 801D98C4
  goto L_801D9AA8; // 801D98C8
L_801D98CC:;
  {uint32_t ea=c->r[3]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D98CC
  fcmp(c,0,c->f[0],c->f[2]); // 801D98D0
  if (crb(c,0)) { goto L_801D98E0; } // 801D98D4
  fcmp(c,0,c->f[0],c->f[1]); // 801D98D8
  if (!crb(c,1)) { goto L_801D98E8; } // 801D98DC
L_801D98E0:;
  c->r[3]=0u+0x00000000u; // 801D98E0
  goto L_801D9AA8; // 801D98E4
L_801D98E8:;
  {uint32_t ea=c->r[3]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D98E8
  fcmp(c,0,c->f[0],c->f[2]); // 801D98EC
  if (crb(c,0)) { goto L_801D98FC; } // 801D98F0
  fcmp(c,0,c->f[0],c->f[1]); // 801D98F4
  if (!crb(c,1)) { goto L_801D9904; } // 801D98F8
L_801D98FC:;
  c->r[3]=0u+0x00000000u; // 801D98FC
  goto L_801D9AA8; // 801D9900
L_801D9904:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801D9904
  c->r[9]=c->r[31]+0x00000000u; // 801D9908
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D990C
  c->r[5]=c->r[31]+0x00000060u; // 801D9910
  {uint32_t ea=c->r[2]+0xFFFFC25Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9914
  c->r[27]=0u+0x00000000u; // 801D9918
  c->r[7]=c->r[9]+c->r[8]; // 801D991C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801D9920
  c->r[6]=R32(c->r[7]+0x00000008u); // 801D9924
  c->r[4]=c->r[5]+c->r[8]; // 801D9928
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 801D992C
  c->r[0]=R32(c->r[9]+c->r[8]); // 801D9930
  c->r[0]=c->r[6]-c->r[0]; // 801D9934
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D9938
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 801D993C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D9940
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D9944
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801D9948
  c->r[0]=R32(c->r[7]+0x00000004u); // 801D994C
  c->r[0]=c->r[6]-c->r[0]; // 801D9950
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D9954
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9958
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D995C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D9960
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801D9964
  c->r[0]=R32(c->r[7]+0x00000008u); // 801D9968
  c->r[0]=c->r[6]-c->r[0]; // 801D996C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D9970
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9974
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801D9978
  W32(c->r[3]+0x00000040u,c->r[27]); // 801D997C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801D9980
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D9984
  c->lr=0x801D998Cu; f_801E7834(c); // 801D9988
  W32(c->r[30]+0x00000044u,c->r[3]); // 801D998C
  c->r[26]=c->r[30]|c->r[30]; // 801D9990
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[29]=RF64(ea);} // 801D9994
  c->r[28]=c->r[31]+0x000000C0u; // 801D9998
  {uint32_t ea=c->r[2]+0xFFFFC270u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D999C
  c->r[24]=0u+0x00000000u; // 801D99A0
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D99A4
  c->r[25]=0u+0x00000000u; // 801D99A8
  c->r[29]=0u+0x43300000u; // 801D99AC
L_801D99B0:;
  W32(c->r[26]+0x0000007Cu,c->r[27]); // 801D99B0
  {uint32_t ea=c->r[2]+0xFFFFC278u; c->f[1]=RF64(ea);} // 801D99B4
  c->r[0]=R32(c->r[30]+0x0000014Cu); // 801D99B8
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D99BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801D99C0
  c->r[0]=c->r[25]+c->r[0]; // 801D99C4
  c->r[0]=R32(c->r[28]+c->r[0]); // 801D99C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D99CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D99D0
  W32(c->r[26]+0x00000088u,c->r[0]); // 801D99D4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801D99D8
  {uint32_t ea=c->r[30]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D99DC
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801D99E0
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801D99E4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801D99E8
  c->lr=0x801D99F0u; f_801F7388(c); // 801D99EC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801D99F0
  c->r[24]=c->r[24]+0x00000001u; // 801D99F4
  cmpu(c,0,c->r[24],0x00000003u); // 801D99F8
  c->r[25]=c->r[25]+0x00000004u; // 801D99FC
  {uint32_t ea=c->r[26]+0x000000A0u; WF32(ea,c->f[0]);} // 801D9A00
  c->r[26]=c->r[26]+0x00000004u; // 801D9A04
  if (crb(c,0)) { IRQCHK(c); goto L_801D99B0; } // 801D9A08
  c->r[0]=R32(c->r[30]+0x0000014Cu); // 801D9A0C
  c->r[4]=0u+0x00000000u; // 801D9A10
  W32(c->r[30]+0x000000CCu,c->r[4]); // 801D9A14
  c->r[3]=c->r[31]+0x000000C0u; // 801D9A18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801D9A1C
  {uint32_t ea=c->r[2]+0xFFFFC258u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9A20
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D9A24
  {uint32_t ea=c->r[2]+0xFFFFC280u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9A28
  c->r[3]=c->r[3]+c->r[0]; // 801D9A2C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D9A30
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D9A34
  {uint32_t ea=c->r[30]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D9A38
  W32(c->r[30]+0x000000D4u,c->r[0]); // 801D9A3C
  fcmp(c,0,c->f[1],c->f[0]); // 801D9A40
  W32(c->r[30]+0x000000D0u,c->r[4]); // 801D9A44
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D9A48
  W32(c->r[30]+0x000000D8u,c->r[0]); // 801D9A4C
  W32(c->r[30]+0x000000F4u,c->r[4]); // 801D9A50
  c->r[0]=R32(c->r[3]+0x00000014u); // 801D9A54
  W32(c->r[30]+0x00000104u,c->r[0]); // 801D9A58
  W32(c->r[30]+0x000000F8u,c->r[4]); // 801D9A5C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D9A60
  W32(c->r[30]+0x00000108u,c->r[0]); // 801D9A64
  W32(c->r[30]+0x000000FCu,c->r[4]); // 801D9A68
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D9A6C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801D9A70
  W32(c->r[30]+0x00000100u,c->r[4]); // 801D9A74
  c->r[0]=R32(c->r[3]+0x00000020u); // 801D9A78
  W32(c->r[30]+0x00000110u,c->r[0]); // 801D9A7C
  {uint32_t ea=c->r[30]+0x00000124u; WF32(ea,c->f[2]);} // 801D9A80
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 801D9A84
  if (!crb(c,1)) { goto L_801D9A90; } // 801D9A88
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[0]);} // 801D9A8C
L_801D9A90:;
  {uint32_t ea=c->r[2]+0xFFFFC254u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9A90
  c->r[3]=0u+0x00000001u; // 801D9A94
  {uint32_t ea=c->r[30]+0x00000128u; WF32(ea,c->f[0]);} // 801D9A98
  {uint32_t ea=c->r[30]+0x0000012Cu; WF32(ea,c->f[0]);} // 801D9A9C
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[0]);} // 801D9AA0
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[0]);} // 801D9AA4
L_801D9AA8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801D9AA8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801D9AAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801D9AB0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801D9AB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801D9AB8
  c->r[11]=c->r[1]+0x00000030u; // 801D9ABC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801D9AC0
  c->lr=0x801D9AC8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9AC4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D9AC8
  c->lr=c->r[0]; // 801D9ACC
  c->r[1]=c->r[1]+0x00000060u; // 801D9AD0
  return; // 801D9AD4
}

// fn_801D9AD8
void f_801D9AD8(Ctx* __restrict c) {
  trace_call(0x801D9AD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9AD8
  c->r[0]=c->lr; // 801D9ADC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9AE0
  c->r[11]=c->r[1]+0x00000020u; // 801D9AE4
  c->lr=0x801D9AECu; f_801E795C(c); // 801D9AE8
  c->r[30]=c->r[3]|c->r[3]; // 801D9AEC
  c->lr=0x801D9AF4u; f_801BE74C(c); // 801D9AF0
  c->r[4]=0u+0x00000001u; // 801D9AF4
  c->r[0]=0u+0x00000003u; // 801D9AF8
  c->r[31]=c->r[3]|c->r[3]; // 801D9AFC
  c->r[3]=c->r[30]|c->r[30]; // 801D9B00
  W32(c->r[30]+0x0000003Cu,c->r[4]); // 801D9B04
  c->ctr=c->r[0]; // 801D9B08
L_801D9B0C:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 801D9B0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9B10
  if (!crb(c,2)) { goto L_801D9B78; } // 801D9B14
  c->lr=0x801D9B1Cu; f_801BE74C(c); // 801D9B18
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801D9B1C
  c->r[27]=c->r[3]|c->r[3]; // 801D9B20
  c->r[28]=0u+0x00000000u; // 801D9B24
  c->r[29]=0u+0x00000000u; // 801D9B28
  c->r[0]=c->r[0]|0x00000001u; // 801D9B2C
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D9B30
L_801D9B34:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D9B34
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B38
  if (crb(c,2)) { goto L_801D9B50; } // 801D9B3C
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9B40
  c->ctr=c->r[12]; // 801D9B44
  if (true) { c->lr=0x801D9B4Cu; dispatch(c,c->ctr); } // 801D9B48
  W32(c->r[30]+0x00000000u,c->r[29]); // 801D9B4C
L_801D9B50:;
  c->r[28]=c->r[28]+0x00000001u; // 801D9B50
  c->r[30]=c->r[30]+0x00000004u; // 801D9B54
  cmpu(c,0,c->r[28],0x00000003u); // 801D9B58
  if (crb(c,0)) { IRQCHK(c); goto L_801D9B34; } // 801D9B5C
  c->r[3]=c->r[27]|c->r[27]; // 801D9B60
  c->lr=0x801D9B68u; f_801BE774(c); // 801D9B64
  c->r[3]=c->r[31]|c->r[31]; // 801D9B68
  c->lr=0x801D9B70u; f_801BE774(c); // 801D9B6C
  c->r[3]=0u+0x00000000u; // 801D9B70
  goto L_801D9CC0; // 801D9B74
L_801D9B78:;
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801D9B78
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D9B7C
  c->r[3]=c->r[3]+0x00000004u; // 801D9B80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9B0C; } // 801D9B84
  c->r[28]=c->r[30]|c->r[30]; // 801D9B88
  c->r[27]=0u+0x00000000u; // 801D9B8C
L_801D9B90:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 801D9B90
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801D9B94
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9B98
  c->ctr=c->r[12]; // 801D9B9C
  if (true) { c->lr=0x801D9BA4u; dispatch(c,c->ctr); } // 801D9BA0
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BA4
  W32(c->r[28]+0x00000000u,c->r[3]); // 801D9BA8
  if (!crb(c,2)) { goto L_801D9BB8; } // 801D9BAC
  c->r[0]=0u+0x00000000u; // 801D9BB0
  goto L_801D9BCC; // 801D9BB4
L_801D9BB8:;
  c->r[27]=c->r[27]+0x00000001u; // 801D9BB8
  c->r[28]=c->r[28]+0x00000004u; // 801D9BBC
  cmpu(c,0,c->r[27],0x00000003u); // 801D9BC0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9B90; } // 801D9BC4
  c->r[0]=0u+0x00000001u; // 801D9BC8
L_801D9BCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BCC
  if (!crb(c,2)) { goto L_801D9C34; } // 801D9BD0
  c->lr=0x801D9BD8u; f_801BE74C(c); // 801D9BD4
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801D9BD8
  c->r[28]=c->r[3]|c->r[3]; // 801D9BDC
  c->r[27]=0u+0x00000000u; // 801D9BE0
  c->r[29]=0u+0x00000000u; // 801D9BE4
  c->r[0]=c->r[0]|0x00000001u; // 801D9BE8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D9BEC
L_801D9BF0:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D9BF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BF4
  if (crb(c,2)) { goto L_801D9C0C; } // 801D9BF8
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9BFC
  c->ctr=c->r[12]; // 801D9C00
  if (true) { c->lr=0x801D9C08u; dispatch(c,c->ctr); } // 801D9C04
  W32(c->r[30]+0x00000000u,c->r[29]); // 801D9C08
L_801D9C0C:;
  c->r[27]=c->r[27]+0x00000001u; // 801D9C0C
  c->r[30]=c->r[30]+0x00000004u; // 801D9C10
  cmpu(c,0,c->r[27],0x00000003u); // 801D9C14
  if (crb(c,0)) { IRQCHK(c); goto L_801D9BF0; } // 801D9C18
  c->r[3]=c->r[28]|c->r[28]; // 801D9C1C
  c->lr=0x801D9C24u; f_801BE774(c); // 801D9C20
  c->r[3]=c->r[31]|c->r[31]; // 801D9C24
  c->lr=0x801D9C2Cu; f_801BE774(c); // 801D9C28
  c->r[3]=0u+0x00000000u; // 801D9C2C
  goto L_801D9CC0; // 801D9C30
L_801D9C34:;
  c->r[3]=c->r[30]|c->r[30]; // 801D9C34
  c->lr=0x801D9C3Cu; f_801D9EE8(c); // 801D9C38
  cmps(c,0,(int32_t)c->r[3],0); // 801D9C3C
  if (!crb(c,2)) { goto L_801D9CA4; } // 801D9C40
  c->lr=0x801D9C48u; f_801BE74C(c); // 801D9C44
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801D9C48
  c->r[28]=c->r[3]|c->r[3]; // 801D9C4C
  c->r[27]=0u+0x00000000u; // 801D9C50
  c->r[29]=0u+0x00000000u; // 801D9C54
  c->r[0]=c->r[0]|0x00000001u; // 801D9C58
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D9C5C
L_801D9C60:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D9C60
  cmps(c,0,(int32_t)c->r[3],0); // 801D9C64
  if (crb(c,2)) { goto L_801D9C7C; } // 801D9C68
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9C6C
  c->ctr=c->r[12]; // 801D9C70
  if (true) { c->lr=0x801D9C78u; dispatch(c,c->ctr); } // 801D9C74
  W32(c->r[30]+0x00000000u,c->r[29]); // 801D9C78
L_801D9C7C:;
  c->r[27]=c->r[27]+0x00000001u; // 801D9C7C
  c->r[30]=c->r[30]+0x00000004u; // 801D9C80
  cmpu(c,0,c->r[27],0x00000003u); // 801D9C84
  if (crb(c,0)) { IRQCHK(c); goto L_801D9C60; } // 801D9C88
  c->r[3]=c->r[28]|c->r[28]; // 801D9C8C
  c->lr=0x801D9C94u; f_801BE774(c); // 801D9C90
  c->r[3]=c->r[31]|c->r[31]; // 801D9C94
  c->lr=0x801D9C9Cu; f_801BE774(c); // 801D9C98
  c->r[3]=0u+0x00000000u; // 801D9C9C
  goto L_801D9CC0; // 801D9CA0
L_801D9CA4:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 801D9CA4
  c->r[3]=c->r[31]|c->r[31]; // 801D9CA8
  c->r[0]=c->r[0]|0x00000002u; // 801D9CAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801D9CB0
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D9CB4
  c->lr=0x801D9CBCu; f_801BE774(c); // 801D9CB8
  c->r[3]=0u+0x00000001u; // 801D9CBC
L_801D9CC0:;
  c->r[11]=c->r[1]+0x00000020u; // 801D9CC0
  c->lr=0x801D9CC8u; f_801E79A8(c); // 801D9CC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9CC8
  c->lr=c->r[0]; // 801D9CCC
  c->r[1]=c->r[1]+0x00000020u; // 801D9CD0
  return; // 801D9CD4
}

// fn_801D9CD8
void f_801D9CD8(Ctx* __restrict c) {
  trace_call(0x801D9CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9CD8
  c->r[0]=c->lr; // 801D9CDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9CE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9CE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9CE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9CEC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9CF0
  c->r[28]=c->r[3]|c->r[3]; // 801D9CF4
  c->lr=0x801D9CFCu; f_801BE74C(c); // 801D9CF8
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 801D9CFC
  c->r[29]=c->r[3]|c->r[3]; // 801D9D00
  c->r[30]=0u+0x00000000u; // 801D9D04
  c->r[31]=0u+0x00000000u; // 801D9D08
  c->r[0]=c->r[0]|0x00000001u; // 801D9D0C
  W32(c->r[28]+0x0000003Cu,c->r[0]); // 801D9D10
L_801D9D14:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D9D14
  cmps(c,0,(int32_t)c->r[3],0); // 801D9D18
  if (crb(c,2)) { goto L_801D9D30; } // 801D9D1C
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801D9D20
  c->ctr=c->r[12]; // 801D9D24
  if (true) { c->lr=0x801D9D2Cu; dispatch(c,c->ctr); } // 801D9D28
  W32(c->r[28]+0x00000000u,c->r[31]); // 801D9D2C
L_801D9D30:;
  c->r[30]=c->r[30]+0x00000001u; // 801D9D30
  c->r[28]=c->r[28]+0x00000004u; // 801D9D34
  cmpu(c,0,c->r[30],0x00000003u); // 801D9D38
  if (crb(c,0)) { IRQCHK(c); goto L_801D9D14; } // 801D9D3C
  c->r[3]=c->r[29]|c->r[29]; // 801D9D40
  c->lr=0x801D9D48u; f_801BE774(c); // 801D9D44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9D48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9D4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9D50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9D54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9D58
  c->lr=c->r[0]; // 801D9D5C
  c->r[1]=c->r[1]+0x00000020u; // 801D9D60
  return; // 801D9D64
}

