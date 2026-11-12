#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801D9D68
void f_801D9D68(Ctx* __restrict c) {
  trace_call(0x801D9D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9D68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9D6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9D70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9D74
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9D78
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801D9D7C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9D80
  if (crb(c,2)) { goto L_801D9D94; } // 801D9D84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801D9D88
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 801D9D8C
  goto L_801D9ED0; // 801D9D90
L_801D9D94:;
  c->r[0]=0u+0x00000060u; // 801D9D94
  c->r[5]=R32(c->r[3]+0x00000000u); // 801D9D98
  c->r[6]=R32(c->r[3]+0x00000004u); // 801D9D9C
  c->r[11]=0u+0x00000000u; // 801D9DA0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D9DA4
  c->ctr=c->r[0]; // 801D9DA8
L_801D9DAC:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D9DAC
  c->r[28]=R32(c->r[4]+0x00000000u); // 801D9DB0
  c->r[29]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9DB4
  c->r[8]=R32(c->r[4]+0x00000010u); // 801D9DB8
  c->r[0]=R32(c->r[28]+c->r[29]); // 801D9DBC
  c->r[7]=R32(c->r[4]+0x00000024u); // 801D9DC0
  c->r[30]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801D9DC4
  c->r[9]=R32(c->r[4]+0x00000014u); // 801D9DC8
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 801D9DCC
  c->r[7]=R32(c->r[4]+0x00000004u); // 801D9DD0
  c->r[12]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801D9DD4
  c->r[31]=R32(c->r[4]+0x00000008u); // 801D9DD8
  c->r[10]=R32(c->r[5]+0x00000000u); // 801D9DDC
  c->r[7]=R32(c->r[7]+c->r[30]); // 801D9DE0
  c->r[9]=sraw(c,c->r[8],7); // 801D9DE4
  c->r[8]=R32(c->r[31]+c->r[12]); // 801D9DE8
  c->r[9]=c->r[10]+c->r[9]; // 801D9DEC
  W32(c->r[28]+c->r[29],c->r[9]); // 801D9DF0
  c->r[10]=R32(c->r[4]+0x00000028u); // 801D9DF4
  c->r[9]=R32(c->r[4]+0x00000010u); // 801D9DF8
  c->r[12]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[10]); // 801D9DFC
  c->r[31]=R32(c->r[6]+0x00000000u); // 801D9E00
  c->r[10]=R32(c->r[4]+0x00000004u); // 801D9E04
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801D9E08
  c->r[12]=sraw(c,c->r[12],7); // 801D9E0C
  c->r[12]=c->r[31]+c->r[12]; // 801D9E10
  W32(c->r[10]+c->r[9],c->r[12]); // 801D9E14
  c->r[10]=R32(c->r[4]+0x0000002Cu); // 801D9E18
  c->r[9]=R32(c->r[4]+0x00000014u); // 801D9E1C
  c->r[12]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[10]); // 801D9E20
  c->r[31]=R32(c->r[3]+0x00000000u); // 801D9E24
  c->r[10]=R32(c->r[4]+0x00000008u); // 801D9E28
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801D9E2C
  c->r[12]=sraw(c,c->r[12],7); // 801D9E30
  c->r[12]=c->r[31]+c->r[12]; // 801D9E34
  W32(c->r[10]+c->r[9],c->r[12]); // 801D9E38
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801D9E3C
  c->r[9]=R32(c->r[4]+0x00000018u); // 801D9E40
  c->r[10]=c->r[10]+0x00000001u; // 801D9E44
  cmpu(c,0,c->r[10],c->r[9]); // 801D9E48
  W32(c->r[4]+0x0000000Cu,c->r[10]); // 801D9E4C
  if (crb(c,0)) { goto L_801D9E58; } // 801D9E50
  W32(c->r[4]+0x0000000Cu,c->r[11]); // 801D9E54
L_801D9E58:;
  c->r[10]=R32(c->r[4]+0x00000010u); // 801D9E58
  c->r[9]=R32(c->r[4]+0x0000001Cu); // 801D9E5C
  c->r[10]=c->r[10]+0x00000001u; // 801D9E60
  cmpu(c,0,c->r[10],c->r[9]); // 801D9E64
  W32(c->r[4]+0x00000010u,c->r[10]); // 801D9E68
  if (crb(c,0)) { goto L_801D9E74; } // 801D9E6C
  W32(c->r[4]+0x00000010u,c->r[11]); // 801D9E70
L_801D9E74:;
  c->r[10]=R32(c->r[4]+0x00000014u); // 801D9E74
  c->r[9]=R32(c->r[4]+0x00000020u); // 801D9E78
  c->r[10]=c->r[10]+0x00000001u; // 801D9E7C
  cmpu(c,0,c->r[10],c->r[9]); // 801D9E80
  W32(c->r[4]+0x00000014u,c->r[10]); // 801D9E84
  if (crb(c,0)) { goto L_801D9E90; } // 801D9E88
  W32(c->r[4]+0x00000014u,c->r[11]); // 801D9E8C
L_801D9E90:;
  c->r[9]=R32(c->r[4]+0x00000030u); // 801D9E90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[9]); // 801D9E94
  c->r[0]=sraw(c,c->r[0],7); // 801D9E98
  W32(c->r[5]+0x00000000u,c->r[0]); // 801D9E9C
  c->r[5]=c->r[5]+0x00000004u; // 801D9EA0
  c->r[0]=R32(c->r[4]+0x00000034u); // 801D9EA4
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801D9EA8
  c->r[0]=sraw(c,c->r[0],7); // 801D9EAC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801D9EB0
  c->r[6]=c->r[6]+0x00000004u; // 801D9EB4
  c->r[0]=R32(c->r[4]+0x00000038u); // 801D9EB8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[0]); // 801D9EBC
  c->r[0]=sraw(c,c->r[0],7); // 801D9EC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D9EC4
  c->r[3]=c->r[3]+0x00000004u; // 801D9EC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9DAC; } // 801D9ECC
L_801D9ED0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9ED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9ED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9ED8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9EDC
  c->r[1]=c->r[1]+0x00000020u; // 801D9EE0
  return; // 801D9EE4
}

// fn_801D9EE8
void f_801D9EE8(Ctx* __restrict c) {
  trace_call(0x801D9EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9EE8
  c->r[0]=c->lr; // 801D9EEC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D9EF0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801D9EF4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801D9EF8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801D9EFC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801D9F00
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801D9F04
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801D9F08
  {uint32_t ea=c->r[2]+0xFFFFC298u; c->f[29]=RF64(ea);} // 801D9F0C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D9F10
  c->r[31]=0u+0x43300000u; // 801D9F14
  {uint32_t ea=c->r[2]+0xFFFFC290u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D9F18
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D9F1C
  c->r[30]=0u+0x00000000u; // 801D9F20
  {uint32_t ea=c->r[2]+0xFFFFC294u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D9F24
  W32(c->r[1]+0x00000034u,c->r[29]); // 801D9F28
  c->r[29]=c->r[3]|c->r[3]; // 801D9F2C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801D9F30
  c->r[28]=0u+0x00000000u; // 801D9F34
L_801D9F38:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801D9F38
  cmpu(c,0,c->r[0],0x00000064u); // 801D9F3C
  if (crb(c,0)) { goto L_801D9F4C; } // 801D9F40
  c->r[3]=0u+0x00000000u; // 801D9F44
  goto L_801D9FF4; // 801D9F48
L_801D9F4C:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 801D9F4C
  cmpu(c,0,c->r[0],0x00000064u); // 801D9F50
  if (!crb(c,1)) { goto L_801D9F60; } // 801D9F54
  c->r[3]=0u+0x00000000u; // 801D9F58
  goto L_801D9FF4; // 801D9F5C
L_801D9F60:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D9F60
  cmps(c,0,(int32_t)c->r[3],0); // 801D9F64
  if (!crb(c,2)) { goto L_801D9F74; } // 801D9F68
  c->r[3]=0u+0x00000000u; // 801D9F6C
  goto L_801D9FF4; // 801D9F70
L_801D9F74:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D9F74
  c->r[4]=0u+0x00000000u; // 801D9F78
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9F7C
  c->lr=0x801D9F84u; f_8000443C(c); // 801D9F80
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801D9F84
  c->r[28]=c->r[28]+0x00000001u; // 801D9F88
  cmpu(c,0,c->r[28],0x00000003u); // 801D9F8C
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801D9F90
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D9F94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D9F98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D9F9C
  W32(c->r[1]+0x00000018u,c->r[31]); // 801D9FA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D9FA4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 801D9FA8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 801D9FAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D9FB0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801D9FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9FB8
  W32(c->r[29]+0x00000024u,c->r[0]); // 801D9FBC
  c->r[0]=R32(c->r[29]+0x00000058u); // 801D9FC0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D9FC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801D9FC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D9FCC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 801D9FD0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 801D9FD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D9FD8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801D9FDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9FE0
  W32(c->r[29]+0x00000030u,c->r[0]); // 801D9FE4
  c->r[29]=c->r[29]+0x00000004u; // 801D9FE8
  if (crb(c,0)) { IRQCHK(c); goto L_801D9F38; } // 801D9FEC
  c->r[3]=0u+0x00000001u; // 801D9FF0
L_801D9FF4:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801D9FF4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801D9FF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801D9FFC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801DA000
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801DA004
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801DA008
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801DA00C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801DA010
  c->r[29]=R32(c->r[1]+0x00000034u); // 801DA014
  c->r[0]=R32(c->r[1]+0x00000074u); // 801DA018
  c->r[28]=R32(c->r[1]+0x00000030u); // 801DA01C
  c->lr=c->r[0]; // 801DA020
  c->r[1]=c->r[1]+0x00000070u; // 801DA024
  return; // 801DA028
}

// fn_801DA02C
void f_801DA02C(Ctx* __restrict c) {
  trace_call(0x801DA02Cu);
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DA02C
  c->r[0]=0u+0x00000000u; // 801DA030
  {uint32_t ea=c->r[2]+0xFFFFC2A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DA034
  c->r[4]=0u+0x00000005u; // 801DA038
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DA03C
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DA040
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DA044
  {uint32_t ea=c->r[2]+0xFFFFC2A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA048
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA04C
  W32(c->r[3]+0x000000B4u,c->r[4]); // 801DA050
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 801DA054
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[6]);} // 801DA058
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801DA05C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[5]);} // 801DA060
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 801DA064
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 801DA068
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[2]);} // 801DA06C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 801DA070
  W32(c->r[3]+0x000000D8u,c->r[0]); // 801DA074
  W32(c->r[3]+0x000000DCu,c->r[0]); // 801DA078
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 801DA07C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[2]);} // 801DA080
  f_801DA0B0(c); return; // 801DA084
}

// fn_801DA088
void f_801DA088(Ctx* __restrict c) {
  trace_call(0x801DA088u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA088
  c->r[0]=c->lr; // 801DA08C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA090
  c->lr=0x801DA098u; f_801DA22C(c); // 801DA094
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA098
  c->r[3]=0u+0x00000001u; // 801DA09C
  c->lr=c->r[0]; // 801DA0A0
  c->r[1]=c->r[1]+0x00000010u; // 801DA0A4
  return; // 801DA0A8
}

// fn_801DA0AC
void f_801DA0AC(Ctx* __restrict c) {
  trace_call(0x801DA0ACu);
  f_801DA280(c); return; // 801DA0AC
}

// fn_801DA0B0
void f_801DA0B0(Ctx* __restrict c) {
  trace_call(0x801DA0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA0B0
  c->r[0]=c->lr; // 801DA0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA0B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA0BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA0C0
  c->r[30]=c->r[3]|c->r[3]; // 801DA0C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA0C8
  c->lr=0x801DA0D0u; f_801BE74C(c); // 801DA0CC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA0D0
  c->r[0]=0u+0x00000001u; // 801DA0D4
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA0D8
  c->r[31]=c->r[3]|c->r[3]; // 801DA0DC
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA0E0
  fcmp(c,0,c->f[1],c->f[0]); // 801DA0E4
  if (!crb(c,0)) { goto L_801DA120; } // 801DA0E8
  c->lr=0x801DA0F0u; f_801BE74C(c); // 801DA0EC
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801DA0F0
  c->r[29]=c->r[3]|c->r[3]; // 801DA0F4
  c->r[3]=c->r[30]|c->r[30]; // 801DA0F8
  c->r[0]=c->r[0]|0x00000001u; // 801DA0FC
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA100
  c->lr=0x801DA108u; f_801DA830(c); // 801DA104
  c->r[3]=c->r[29]|c->r[29]; // 801DA108
  c->lr=0x801DA110u; f_801BE774(c); // 801DA10C
  c->r[3]=c->r[31]|c->r[31]; // 801DA110
  c->lr=0x801DA118u; f_801BE774(c); // 801DA114
  c->r[3]=0u+0x00000000u; // 801DA118
  goto L_801DA210; // 801DA11C
L_801DA120:;
  c->r[3]=0u+0x804B0000u; // 801DA120
  {uint32_t ea=c->r[2]+0xFFFFC2A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA124
  c->r[3]=c->r[3]+0x00005FC0u; // 801DA128
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801DA12C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801DA130
  W32(c->r[30]+0x00000014u,c->r[0]); // 801DA134
  c->lr=0x801DA13Cu; f_801E7834(c); // 801DA138
  W32(c->r[30]+0x00000030u,c->r[3]); // 801DA13C
  c->r[4]=0u+0x804B0000u; // 801DA140
  c->r[4]=c->r[4]+0x00005FE0u; // 801DA144
  c->r[3]=c->r[30]|c->r[30]; // 801DA148
  c->r[0]=R32(c->r[4]+0x00000060u); // 801DA14C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 801DA150
  c->r[0]=R32(c->r[4]+0x00000064u); // 801DA154
  W32(c->r[30]+0x00000060u,c->r[0]); // 801DA158
  c->r[0]=R32(c->r[4]+0x00000068u); // 801DA15C
  W32(c->r[30]+0x00000094u,c->r[0]); // 801DA160
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 801DA164
  W32(c->r[30]+0x00000098u,c->r[0]); // 801DA168
  c->lr=0x801DA170u; f_801DA5EC(c); // 801DA16C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA170
  if (!crb(c,2)) { goto L_801DA1AC; } // 801DA174
  c->lr=0x801DA17Cu; f_801BE74C(c); // 801DA178
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801DA17C
  c->r[29]=c->r[3]|c->r[3]; // 801DA180
  c->r[3]=c->r[30]|c->r[30]; // 801DA184
  c->r[0]=c->r[0]|0x00000001u; // 801DA188
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA18C
  c->lr=0x801DA194u; f_801DA830(c); // 801DA190
  c->r[3]=c->r[29]|c->r[29]; // 801DA194
  c->lr=0x801DA19Cu; f_801BE774(c); // 801DA198
  c->r[3]=c->r[31]|c->r[31]; // 801DA19C
  c->lr=0x801DA1A4u; f_801BE774(c); // 801DA1A0
  c->r[3]=0u+0x00000000u; // 801DA1A4
  goto L_801DA210; // 801DA1A8
L_801DA1AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA1AC
  c->lr=0x801DA1B4u; f_801DA730(c); // 801DA1B0
  c->r[3]=c->r[30]|c->r[30]; // 801DA1B4
  c->lr=0x801DA1BCu; f_801DA920(c); // 801DA1B8
  cmps(c,0,(int32_t)c->r[3],0); // 801DA1BC
  if (!crb(c,2)) { goto L_801DA1F8; } // 801DA1C0
  c->lr=0x801DA1C8u; f_801BE74C(c); // 801DA1C4
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801DA1C8
  c->r[29]=c->r[3]|c->r[3]; // 801DA1CC
  c->r[3]=c->r[30]|c->r[30]; // 801DA1D0
  c->r[0]=c->r[0]|0x00000001u; // 801DA1D4
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA1D8
  c->lr=0x801DA1E0u; f_801DA830(c); // 801DA1DC
  c->r[3]=c->r[29]|c->r[29]; // 801DA1E0
  c->lr=0x801DA1E8u; f_801BE774(c); // 801DA1E4
  c->r[3]=c->r[31]|c->r[31]; // 801DA1E8
  c->lr=0x801DA1F0u; f_801BE774(c); // 801DA1EC
  c->r[3]=0u+0x00000000u; // 801DA1F0
  goto L_801DA210; // 801DA1F4
L_801DA1F8:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801DA1F8
  c->r[3]=c->r[31]|c->r[31]; // 801DA1FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801DA200
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA204
  c->lr=0x801DA20Cu; f_801BE774(c); // 801DA208
  c->r[3]=0u+0x00000001u; // 801DA20C
L_801DA210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DA214
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DA218
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DA21C
  c->lr=c->r[0]; // 801DA220
  c->r[1]=c->r[1]+0x00000020u; // 801DA224
  return; // 801DA228
}

// fn_801DA22C
void f_801DA22C(Ctx* __restrict c) {
  trace_call(0x801DA22Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA22C
  c->r[0]=c->lr; // 801DA230
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DA238
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DA23C
  c->r[30]=c->r[3]|c->r[3]; // 801DA240
  c->lr=0x801DA248u; f_801BE74C(c); // 801DA244
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801DA248
  c->r[31]=c->r[3]|c->r[3]; // 801DA24C
  c->r[3]=c->r[30]|c->r[30]; // 801DA250
  c->r[0]=c->r[0]|0x00000001u; // 801DA254
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801DA258
  c->lr=0x801DA260u; f_801DA830(c); // 801DA25C
  c->r[3]=c->r[31]|c->r[31]; // 801DA260
  c->lr=0x801DA268u; f_801BE774(c); // 801DA264
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DA26C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DA270
  c->lr=c->r[0]; // 801DA274
  c->r[1]=c->r[1]+0x00000010u; // 801DA278
  return; // 801DA27C
}

// fn_801DA280
void f_801DA280(Ctx* __restrict c) {
  trace_call(0x801DA280u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA280
  c->r[0]=c->lr; // 801DA284
  W32(c->r[1]+0x00000064u,c->r[0]); // 801DA288
  c->r[11]=c->r[1]+0x00000060u; // 801DA28C
  c->lr=0x801DA294u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA290
  c->r[0]=R32(c->r[4]+0x000000B0u); // 801DA294
  cmps(c,0,(int32_t)c->r[0],0); // 801DA298
  if (crb(c,2)) { goto L_801DA2AC; } // 801DA29C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801DA2A0
  W32(c->r[4]+0x000000B0u,c->r[0]); // 801DA2A4
  goto L_801DA5D4; // 801DA2A8
L_801DA2AC:;
  c->r[7]=R32(c->r[4]+0x000000D8u); // 801DA2AC
  c->r[6]=R32(c->r[3]+0x00000000u); // 801DA2B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DA2B4
  cmps(c,0,(int32_t)c->r[7],0); // 801DA2B8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DA2BC
  W32(c->r[1]+0x00000020u,c->r[6]); // 801DA2C0
  W32(c->r[1]+0x00000024u,c->r[5]); // 801DA2C4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801DA2C8
  if (crb(c,2)) { goto L_801DA2E8; } // 801DA2CC
  c->r[5]=R32(c->r[7]+0x00000000u); // 801DA2D0
  c->r[3]=R32(c->r[7]+0x00000004u); // 801DA2D4
  c->r[0]=R32(c->r[7]+0x00000008u); // 801DA2D8
  W32(c->r[1]+0x00000014u,c->r[5]); // 801DA2DC
  W32(c->r[1]+0x00000018u,c->r[3]); // 801DA2E0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DA2E4
L_801DA2E8:;
  c->r[6]=R32(c->r[4]+0x000000DCu); // 801DA2E8
  cmps(c,0,(int32_t)c->r[6],0); // 801DA2EC
  if (crb(c,2)) { goto L_801DA30C; } // 801DA2F0
  c->r[5]=R32(c->r[6]+0x00000000u); // 801DA2F4
  c->r[3]=R32(c->r[6]+0x00000004u); // 801DA2F8
  c->r[0]=R32(c->r[6]+0x00000008u); // 801DA2FC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801DA300
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DA304
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DA308
L_801DA30C:;
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DA30C
  c->r[28]=0u+0x00000000u; // 801DA310
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA314
  c->r[3]=0u+0x43300000u; // 801DA318
  {uint32_t ea=c->r[2]+0xFFFFC2B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DA31C
  c->r[0]=0u+0x00000000u; // 801DA320
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA324
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801DA328
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DA32C
  c->r[27]=0u+0x00000003u; // 801DA330
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[1]); // 801DA334
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA338
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 801DA33C
  {uint32_t ea=c->r[4]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DA340
  {uint32_t ea=c->r[4]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DA344
  {uint32_t ea=c->r[4]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DA348
  {uint32_t ea=c->r[2]+0xFFFFC2B8u; c->f[11]=RF64(ea);} // 801DA34C
L_801DA350:;
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801DA350
  c->r[7]=c->r[4]|c->r[4]; // 801DA354
  c->r[11]=R32(c->r[4]+0x00000028u); // 801DA358
  c->r[8]=c->r[4]|c->r[4]; // 801DA35C
  c->r[12]=R32(c->r[4]+0x0000004Cu); // 801DA360
  c->r[5]=c->r[1]+0x00000014u; // 801DA364
  c->r[26]=R32(c->r[4]+0x00000050u); // 801DA368
  c->r[6]=c->r[1]+0x00000020u; // 801DA36C
  c->r[25]=R32(c->r[4]+0x00000084u); // 801DA370
  c->r[9]=c->r[1]+0x00000008u; // 801DA374
  c->r[24]=R32(c->r[4]+0x00000088u); // 801DA378
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801DA37C
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801DA380
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801DA384
  c->r[31]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801DA388
  c->r[30]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801DA38C
  c->r[29]=rotl(c->r[24],2)&0xFFFFFFFCu; // 801DA390
  c->ctr=c->r[27]; // 801DA394
L_801DA398:;
  c->r[24]=R32(c->r[4]+0x000000D8u); // 801DA398
  cmps(c,0,(int32_t)c->r[24],0); // 801DA39C
  if (crb(c,2)) { goto L_801DA3D8; } // 801DA3A0
  c->r[25]=R32(c->r[5]+0x00000000u); // 801DA3A4
  c->r[26]=R32(c->r[6]+0x00000000u); // 801DA3A8
  c->r[24]=R32(c->r[25]+0x00000000u); // 801DA3AC
  c->r[25]=c->r[25]+0x00000004u; // 801DA3B0
  c->r[26]=R32(c->r[26]+0x00000000u); // 801DA3B4
  W32(c->r[1]+0x00000030u,c->r[3]); // 801DA3B8
  c->r[24]=c->r[26]+c->r[24]; // 801DA3BC
  c->r[24]=c->r[24]^0x80000000u; // 801DA3C0
  W32(c->r[5]+0x00000000u,c->r[25]); // 801DA3C4
  W32(c->r[1]+0x00000034u,c->r[24]); // 801DA3C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=RF64(ea);} // 801DA3CC
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 801DA3D0
  goto L_801DA3F4; // 801DA3D4
L_801DA3D8:;
  c->r[24]=R32(c->r[6]+0x00000000u); // 801DA3D8
  W32(c->r[1]+0x00000038u,c->r[3]); // 801DA3DC
  c->r[24]=R32(c->r[24]+0x00000000u); // 801DA3E0
  c->r[24]=c->r[24]^0x80000000u; // 801DA3E4
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 801DA3E8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[8]=RF64(ea);} // 801DA3EC
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 801DA3F0
L_801DA3F4:;
  c->r[24]=R32(c->r[7]+0x00000000u); // 801DA3F4
  {uint32_t ea=c->r[10]+c->r[24]; c->f[10]=c->ps1[10]=RF32(ea);} // 801DA3F8
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[1]); // 801DA3FC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801DA400
  {uint32_t ea=c->r[10]+c->r[24]; WF32(ea,c->f[8]);} // 801DA404
  c->r[24]=R32(c->r[4]+0x0000002Cu); // 801DA408
  cmps(c,0,(int32_t)c->r[24],0); // 801DA40C
  if (crb(c,2)) { goto L_801DA424; } // 801DA410
  c->r[24]=R32(c->r[7]+0x0000001Cu); // 801DA414
  {uint32_t ea=c->r[11]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 801DA418
  {uint32_t ea=c->r[11]+c->r[24]; WF32(ea,c->f[9]);} // 801DA41C
  goto L_801DA428; // 801DA420
L_801DA424:;
  c->f[12]=c->f[9]; // 801DA424
L_801DA428:;
  c->r[24]=R32(c->r[8]+0x00000034u); // 801DA428
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[6]); // 801DA42C
  c->r[26]=R32(c->r[6]+0x00000000u); // 801DA430
  {uint32_t ea=c->r[12]+c->r[24]; c->f[9]=c->ps1[9]=RF32(ea);} // 801DA434
  c->r[25]=c->r[26]+0x00000004u; // 801DA438
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 801DA43C
  W32(c->r[6]+0x00000000u,c->r[25]); // 801DA440
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801DA444
  {uint32_t ea=c->r[12]+c->r[24]; WF32(ea,c->f[8]);} // 801DA448
  c->r[25]=R32(c->r[8]+0x00000038u); // 801DA44C
  {uint32_t ea=c->r[31]+c->r[25]; c->f[13]=c->ps1[13]=RF32(ea);} // 801DA450
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[3]); // 801DA454
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[13]); // 801DA458
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801DA45C
  {uint32_t ea=c->r[31]+c->r[25]; WF32(ea,c->f[8]);} // 801DA460
  c->r[24]=R32(c->r[8]+0x0000006Cu); // 801DA464
  {uint32_t ea=c->r[30]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 801DA468
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 801DA46C
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801DA470
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 801DA474
  {uint32_t ea=c->r[30]+c->r[24]; WF32(ea,c->f[8]);} // 801DA478
  {uint32_t ea=c->r[7]+0x000000A0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DA47C
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 801DA480
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[8]); // 801DA484
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[9]); // 801DA488
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[8]); // 801DA48C
  {uint32_t ea=c->r[7]+0x000000A0u; WF32(ea,c->f[9]);} // 801DA490
  c->r[25]=R32(c->r[8]+0x00000070u); // 801DA494
  {uint32_t ea=c->r[29]+c->r[25]; c->f[12]=c->ps1[12]=RF32(ea);} // 801DA498
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 801DA49C
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801DA4A0
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 801DA4A4
  {uint32_t ea=c->r[29]+c->r[25]; WF32(ea,c->f[8]);} // 801DA4A8
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DA4AC
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 801DA4B0
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[7]); // 801DA4B4
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 801DA4B8
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801DA4BC
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 801DA4C0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 801DA4C4
  c->r[25]=R32(c->r[1]+0x0000003Cu); // 801DA4C8
  W32(c->r[26]+0x00000000u,c->r[25]); // 801DA4CC
  c->r[25]=R32(c->r[4]+0x000000DCu); // 801DA4D0
  cmps(c,0,(int32_t)c->r[25],0); // 801DA4D4
  if (crb(c,2)) { goto L_801DA500; } // 801DA4D8
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[8]=c->ps1[8]=RF32(ea);} // 801DA4DC
  c->r[25]=R32(c->r[9]+0x00000000u); // 801DA4E0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801DA4E4
  c->r[26]=c->r[25]+0x00000004u; // 801DA4E8
  W32(c->r[9]+0x00000000u,c->r[26]); // 801DA4EC
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 801DA4F0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 801DA4F4
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 801DA4F8
  W32(c->r[25]+0x00000000u,c->r[26]); // 801DA4FC
L_801DA500:;
  c->r[5]=c->r[5]+0x00000004u; // 801DA500
  c->r[6]=c->r[6]+0x00000004u; // 801DA504
  c->r[7]=c->r[7]+0x00000004u; // 801DA508
  c->r[8]=c->r[8]+0x00000008u; // 801DA50C
  c->r[9]=c->r[9]+0x00000004u; // 801DA510
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA398; } // 801DA514
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 801DA518
  c->r[5]=R32(c->r[4]+0x00000010u); // 801DA51C
  c->r[6]=c->r[6]+0x00000001u; // 801DA520
  cmpu(c,0,c->r[6],c->r[5]); // 801DA524
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 801DA528
  if (crb(c,0)) { goto L_801DA534; } // 801DA52C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801DA530
L_801DA534:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 801DA534
  cmps(c,0,(int32_t)c->r[6],0); // 801DA538
  if (crb(c,2)) { goto L_801DA558; } // 801DA53C
  c->r[5]=R32(c->r[4]+0x00000028u); // 801DA540
  c->r[5]=c->r[5]+0x00000001u; // 801DA544
  cmpu(c,0,c->r[5],c->r[6]); // 801DA548
  W32(c->r[4]+0x00000028u,c->r[5]); // 801DA54C
  if (crb(c,0)) { goto L_801DA558; } // 801DA550
  W32(c->r[4]+0x00000028u,c->r[0]); // 801DA554
L_801DA558:;
  c->r[6]=R32(c->r[4]+0x0000004Cu); // 801DA558
  c->r[5]=R32(c->r[4]+0x00000054u); // 801DA55C
  c->r[6]=c->r[6]+0x00000001u; // 801DA560
  cmpu(c,0,c->r[6],c->r[5]); // 801DA564
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 801DA568
  if (crb(c,0)) { goto L_801DA574; } // 801DA56C
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 801DA570
L_801DA574:;
  c->r[6]=R32(c->r[4]+0x00000050u); // 801DA574
  c->r[5]=R32(c->r[4]+0x00000058u); // 801DA578
  c->r[6]=c->r[6]+0x00000001u; // 801DA57C
  cmpu(c,0,c->r[6],c->r[5]); // 801DA580
  W32(c->r[4]+0x00000050u,c->r[6]); // 801DA584
  if (crb(c,0)) { goto L_801DA590; } // 801DA588
  W32(c->r[4]+0x00000050u,c->r[0]); // 801DA58C
L_801DA590:;
  c->r[6]=R32(c->r[4]+0x00000084u); // 801DA590
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 801DA594
  c->r[6]=c->r[6]+0x00000001u; // 801DA598
  cmpu(c,0,c->r[6],c->r[5]); // 801DA59C
  W32(c->r[4]+0x00000084u,c->r[6]); // 801DA5A0
  if (crb(c,0)) { goto L_801DA5AC; } // 801DA5A4
  W32(c->r[4]+0x00000084u,c->r[0]); // 801DA5A8
L_801DA5AC:;
  c->r[6]=R32(c->r[4]+0x00000088u); // 801DA5AC
  c->r[5]=R32(c->r[4]+0x00000090u); // 801DA5B0
  c->r[6]=c->r[6]+0x00000001u; // 801DA5B4
  cmpu(c,0,c->r[6],c->r[5]); // 801DA5B8
  W32(c->r[4]+0x00000088u,c->r[6]); // 801DA5BC
  if (crb(c,0)) { goto L_801DA5C8; } // 801DA5C0
  W32(c->r[4]+0x00000088u,c->r[0]); // 801DA5C4
L_801DA5C8:;
  c->r[28]=c->r[28]+0x00000001u; // 801DA5C8
  cmpu(c,0,c->r[28],0x00000060u); // 801DA5CC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA350; } // 801DA5D0
L_801DA5D4:;
  c->r[11]=c->r[1]+0x00000060u; // 801DA5D4
  c->lr=0x801DA5DCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA5D8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801DA5DC
  c->lr=c->r[0]; // 801DA5E0
  c->r[1]=c->r[1]+0x00000060u; // 801DA5E4
  return; // 801DA5E8
}

// fn_801DA5EC
void f_801DA5EC(Ctx* __restrict c) {
  trace_call(0x801DA5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA5EC
  c->r[0]=c->lr; // 801DA5F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA5F4
  c->r[11]=c->r[1]+0x00000030u; // 801DA5F8
  c->lr=0x801DA600u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA5FC
  c->r[24]=c->r[3]|c->r[3]; // 801DA600
  c->r[25]=0u+0x00000000u; // 801DA604
  c->r[30]=c->r[24]|c->r[24]; // 801DA608
  c->r[31]=0u+0x00000000u; // 801DA60C
  c->r[29]=c->r[24]|c->r[24]; // 801DA610
L_801DA614:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 801DA614
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801DA618
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA61C
  c->ctr=c->r[12]; // 801DA620
  if (true) { c->lr=0x801DA628u; dispatch(c,c->ctr); } // 801DA624
  cmps(c,0,(int32_t)c->r[3],0); // 801DA628
  W32(c->r[30]+0x00000000u,c->r[3]); // 801DA62C
  if (!crb(c,2)) { goto L_801DA63C; } // 801DA630
  c->r[3]=0u+0x00000000u; // 801DA634
  goto L_801DA718; // 801DA638
L_801DA63C:;
  c->r[0]=R32(c->r[24]+0x00000030u); // 801DA63C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA640
  if (crb(c,2)) { goto L_801DA66C; } // 801DA644
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801DA648
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA64C
  c->ctr=c->r[12]; // 801DA650
  if (true) { c->lr=0x801DA658u; dispatch(c,c->ctr); } // 801DA654
  cmps(c,0,(int32_t)c->r[3],0); // 801DA658
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801DA65C
  if (!crb(c,2)) { goto L_801DA670; } // 801DA660
  c->r[3]=0u+0x00000000u; // 801DA664
  goto L_801DA718; // 801DA668
L_801DA66C:;
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801DA66C
L_801DA670:;
  c->r[27]=c->r[24]|c->r[24]; // 801DA670
  c->r[28]=c->r[29]|c->r[29]; // 801DA674
  c->r[26]=0u+0x00000000u; // 801DA678
L_801DA67C:;
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 801DA67C
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801DA680
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA684
  c->ctr=c->r[12]; // 801DA688
  if (true) { c->lr=0x801DA690u; dispatch(c,c->ctr); } // 801DA68C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA690
  W32(c->r[28]+0x00000034u,c->r[3]); // 801DA694
  if (!crb(c,2)) { goto L_801DA6A4; } // 801DA698
  c->r[3]=0u+0x00000000u; // 801DA69C
  goto L_801DA718; // 801DA6A0
L_801DA6A4:;
  c->r[26]=c->r[26]+0x00000001u; // 801DA6A4
  c->r[28]=c->r[28]+0x00000004u; // 801DA6A8
  cmpu(c,0,c->r[26],0x00000002u); // 801DA6AC
  c->r[27]=c->r[27]+0x00000004u; // 801DA6B0
  if (crb(c,0)) { IRQCHK(c); goto L_801DA67C; } // 801DA6B4
  c->r[28]=c->r[24]|c->r[24]; // 801DA6B8
  c->r[27]=c->r[29]|c->r[29]; // 801DA6BC
  c->r[26]=0u+0x00000000u; // 801DA6C0
L_801DA6C4:;
  c->r[0]=R32(c->r[28]+0x00000094u); // 801DA6C4
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801DA6C8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA6CC
  c->ctr=c->r[12]; // 801DA6D0
  if (true) { c->lr=0x801DA6D8u; dispatch(c,c->ctr); } // 801DA6D4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA6D8
  W32(c->r[27]+0x0000006Cu,c->r[3]); // 801DA6DC
  if (!crb(c,2)) { goto L_801DA6EC; } // 801DA6E0
  c->r[3]=0u+0x00000000u; // 801DA6E4
  goto L_801DA718; // 801DA6E8
L_801DA6EC:;
  c->r[26]=c->r[26]+0x00000001u; // 801DA6EC
  c->r[27]=c->r[27]+0x00000004u; // 801DA6F0
  cmpu(c,0,c->r[26],0x00000002u); // 801DA6F4
  c->r[28]=c->r[28]+0x00000004u; // 801DA6F8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA6C4; } // 801DA6FC
  c->r[25]=c->r[25]+0x00000001u; // 801DA700
  c->r[29]=c->r[29]+0x00000008u; // 801DA704
  cmpu(c,0,c->r[25],0x00000003u); // 801DA708
  c->r[30]=c->r[30]+0x00000004u; // 801DA70C
  if (crb(c,0)) { IRQCHK(c); goto L_801DA614; } // 801DA710
  c->r[3]=0u+0x00000001u; // 801DA714
L_801DA718:;
  c->r[11]=c->r[1]+0x00000030u; // 801DA718
  c->lr=0x801DA720u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA71C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA720
  c->lr=c->r[0]; // 801DA724
  c->r[1]=c->r[1]+0x00000030u; // 801DA728
  return; // 801DA72C
}

// fn_801DA730
void f_801DA730(Ctx* __restrict c) {
  trace_call(0x801DA730u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA730
  c->r[0]=c->lr; // 801DA734
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA738
  c->r[11]=c->r[1]+0x00000030u; // 801DA73C
  c->lr=0x801DA744u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA740
  c->r[25]=c->r[3]|c->r[3]; // 801DA744
  c->r[26]=0u+0x00000000u; // 801DA748
  c->r[31]=c->r[25]|c->r[25]; // 801DA74C
  c->r[30]=c->r[25]|c->r[25]; // 801DA750
L_801DA754:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DA754
  cmps(c,0,(int32_t)c->r[3],0); // 801DA758
  if (crb(c,2)) { goto L_801DA770; } // 801DA75C
  c->r[0]=R32(c->r[25]+0x00000014u); // 801DA760
  c->r[4]=0u+0x00000000u; // 801DA764
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA768
  c->lr=0x801DA770u; f_8000443C(c); // 801DA76C
L_801DA770:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801DA770
  cmps(c,0,(int32_t)c->r[3],0); // 801DA774
  if (crb(c,2)) { goto L_801DA78C; } // 801DA778
  c->r[0]=R32(c->r[25]+0x00000030u); // 801DA77C
  c->r[4]=0u+0x00000000u; // 801DA780
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA784
  c->lr=0x801DA78Cu; f_8000443C(c); // 801DA788
L_801DA78C:;
  c->r[28]=c->r[30]|c->r[30]; // 801DA78C
  c->r[29]=c->r[25]|c->r[25]; // 801DA790
  c->r[27]=0u+0x00000000u; // 801DA794
L_801DA798:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 801DA798
  cmps(c,0,(int32_t)c->r[3],0); // 801DA79C
  if (crb(c,2)) { goto L_801DA7B4; } // 801DA7A0
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 801DA7A4
  c->r[4]=0u+0x00000000u; // 801DA7A8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA7AC
  c->lr=0x801DA7B4u; f_8000443C(c); // 801DA7B0
L_801DA7B4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA7B4
  c->r[29]=c->r[29]+0x00000004u; // 801DA7B8
  cmpu(c,0,c->r[27],0x00000002u); // 801DA7BC
  c->r[28]=c->r[28]+0x00000004u; // 801DA7C0
  if (crb(c,0)) { IRQCHK(c); goto L_801DA798; } // 801DA7C4
  c->r[29]=c->r[30]|c->r[30]; // 801DA7C8
  c->r[28]=c->r[25]|c->r[25]; // 801DA7CC
  c->r[27]=0u+0x00000000u; // 801DA7D0
L_801DA7D4:;
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 801DA7D4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA7D8
  if (crb(c,2)) { goto L_801DA7F0; } // 801DA7DC
  c->r[0]=R32(c->r[28]+0x00000094u); // 801DA7E0
  c->r[4]=0u+0x00000000u; // 801DA7E4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA7E8
  c->lr=0x801DA7F0u; f_8000443C(c); // 801DA7EC
L_801DA7F0:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA7F0
  c->r[28]=c->r[28]+0x00000004u; // 801DA7F4
  cmpu(c,0,c->r[27],0x00000002u); // 801DA7F8
  c->r[29]=c->r[29]+0x00000004u; // 801DA7FC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA7D4; } // 801DA800
  c->r[26]=c->r[26]+0x00000001u; // 801DA804
  c->r[30]=c->r[30]+0x00000008u; // 801DA808
  cmpu(c,0,c->r[26],0x00000003u); // 801DA80C
  c->r[31]=c->r[31]+0x00000004u; // 801DA810
  if (crb(c,0)) { IRQCHK(c); goto L_801DA754; } // 801DA814
  c->r[11]=c->r[1]+0x00000030u; // 801DA818
  c->lr=0x801DA820u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA81C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA820
  c->lr=c->r[0]; // 801DA824
  c->r[1]=c->r[1]+0x00000030u; // 801DA828
  return; // 801DA82C
}

// fn_801DA830
void f_801DA830(Ctx* __restrict c) {
  trace_call(0x801DA830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA830
  c->r[0]=c->lr; // 801DA834
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA838
  c->r[11]=c->r[1]+0x00000020u; // 801DA83C
  c->lr=0x801DA844u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA840
  c->r[26]=0u+0x00000000u; // 801DA844
  c->r[30]=c->r[3]|c->r[3]; // 801DA848
  c->r[31]=0u+0x00000000u; // 801DA84C
  c->r[29]=c->r[3]|c->r[3]; // 801DA850
L_801DA854:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DA854
  cmps(c,0,(int32_t)c->r[3],0); // 801DA858
  if (crb(c,2)) { goto L_801DA870; } // 801DA85C
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DA860
  c->ctr=c->r[12]; // 801DA864
  if (true) { c->lr=0x801DA86Cu; dispatch(c,c->ctr); } // 801DA868
  W32(c->r[30]+0x00000000u,c->r[31]); // 801DA86C
L_801DA870:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801DA870
  cmps(c,0,(int32_t)c->r[3],0); // 801DA874
  if (crb(c,2)) { goto L_801DA88C; } // 801DA878
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DA87C
  c->ctr=c->r[12]; // 801DA880
  if (true) { c->lr=0x801DA888u; dispatch(c,c->ctr); } // 801DA884
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801DA888
L_801DA88C:;
  c->r[28]=c->r[29]|c->r[29]; // 801DA88C
  c->r[27]=0u+0x00000000u; // 801DA890
L_801DA894:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 801DA894
  cmps(c,0,(int32_t)c->r[3],0); // 801DA898
  if (crb(c,2)) { goto L_801DA8B0; } // 801DA89C
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DA8A0
  c->ctr=c->r[12]; // 801DA8A4
  if (true) { c->lr=0x801DA8ACu; dispatch(c,c->ctr); } // 801DA8A8
  W32(c->r[28]+0x00000034u,c->r[31]); // 801DA8AC
L_801DA8B0:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA8B0
  c->r[28]=c->r[28]+0x00000004u; // 801DA8B4
  cmpu(c,0,c->r[27],0x00000002u); // 801DA8B8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA894; } // 801DA8BC
  c->r[28]=c->r[29]|c->r[29]; // 801DA8C0
  c->r[27]=0u+0x00000000u; // 801DA8C4
L_801DA8C8:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 801DA8C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DA8CC
  if (crb(c,2)) { goto L_801DA8E4; } // 801DA8D0
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DA8D4
  c->ctr=c->r[12]; // 801DA8D8
  if (true) { c->lr=0x801DA8E0u; dispatch(c,c->ctr); } // 801DA8DC
  W32(c->r[28]+0x0000006Cu,c->r[31]); // 801DA8E0
L_801DA8E4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA8E4
  c->r[28]=c->r[28]+0x00000004u; // 801DA8E8
  cmpu(c,0,c->r[27],0x00000002u); // 801DA8EC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA8C8; } // 801DA8F0
  c->r[26]=c->r[26]+0x00000001u; // 801DA8F4
  c->r[29]=c->r[29]+0x00000008u; // 801DA8F8
  cmpu(c,0,c->r[26],0x00000003u); // 801DA8FC
  c->r[30]=c->r[30]+0x00000004u; // 801DA900
  if (crb(c,0)) { IRQCHK(c); goto L_801DA854; } // 801DA904
  c->r[11]=c->r[1]+0x00000020u; // 801DA908
  c->lr=0x801DA910u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA90C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA910
  c->lr=c->r[0]; // 801DA914
  c->r[1]=c->r[1]+0x00000020u; // 801DA918
  return; // 801DA91C
}

// fn_801DA920
void f_801DA920(Ctx* __restrict c) {
  trace_call(0x801DA920u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA920
  c->r[0]=c->lr; // 801DA924
  W32(c->r[1]+0x00000064u,c->r[0]); // 801DA928
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801DA92C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801DA930
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801DA934
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801DA938
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801DA93C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801DA940
  c->r[11]=c->r[1]+0x00000030u; // 801DA944
  c->lr=0x801DA94Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA948
  c->r[5]=R32(c->r[3]+0x000000B4u); // 801DA94C
  c->r[31]=c->r[3]|c->r[3]; // 801DA950
  cmpu(c,0,c->r[5],0x00000008u); // 801DA954
  if (crb(c,0)) { goto L_801DA964; } // 801DA958
  c->r[3]=0u+0x00000000u; // 801DA95C
  goto L_801DAB9C; // 801DA960
L_801DA964:;
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA964
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801DA968
  fcmp(c,0,c->f[1],c->f[2]); // 801DA96C
  if (crb(c,0)) { goto L_801DA980; } // 801DA970
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA974
  fcmp(c,0,c->f[1],c->f[0]); // 801DA978
  if (!crb(c,1)) { goto L_801DA988; } // 801DA97C
L_801DA980:;
  c->r[3]=0u+0x00000000u; // 801DA980
  goto L_801DAB9C; // 801DA984
L_801DA988:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801DA988
  cmpu(c,0,c->r[0],0x00000006u); // 801DA98C
  if (crb(c,0)) { goto L_801DA99C; } // 801DA990
  c->r[3]=0u+0x00000000u; // 801DA994
  goto L_801DAB9C; // 801DA998
L_801DA99C:;
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA99C
  fcmp(c,0,c->f[0],c->f[2]); // 801DA9A0
  if (!crb(c,0)) { goto L_801DA9B0; } // 801DA9A4
  c->r[3]=0u+0x00000000u; // 801DA9A8
  goto L_801DAB9C; // 801DA9AC
L_801DA9B0:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA9B0
  fcmp(c,0,c->f[0],c->f[2]); // 801DA9B4
  if (crb(c,0)) { goto L_801DA9C8; } // 801DA9B8
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DA9BC
  fcmp(c,0,c->f[0],c->f[1]); // 801DA9C0
  if (!crb(c,1)) { goto L_801DA9D0; } // 801DA9C4
L_801DA9C8:;
  c->r[3]=0u+0x00000000u; // 801DA9C8
  goto L_801DAB9C; // 801DA9CC
L_801DA9D0:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA9D0
  fcmp(c,0,c->f[0],c->f[2]); // 801DA9D4
  if (crb(c,0)) { goto L_801DA9E4; } // 801DA9D8
  fcmp(c,0,c->f[0],c->f[1]); // 801DA9DC
  if (!crb(c,1)) { goto L_801DA9EC; } // 801DA9E0
L_801DA9E4:;
  c->r[3]=0u+0x00000000u; // 801DA9E4
  goto L_801DAB9C; // 801DA9E8
L_801DA9EC:;
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DA9EC
  fcmp(c,0,c->f[0],c->f[2]); // 801DA9F0
  if (crb(c,0)) { goto L_801DAA00; } // 801DA9F4
  fcmp(c,0,c->f[0],c->f[1]); // 801DA9F8
  if (!crb(c,1)) { goto L_801DAA08; } // 801DA9FC
L_801DAA00:;
  c->r[3]=0u+0x00000000u; // 801DAA00
  goto L_801DAB9C; // 801DAA04
L_801DAA08:;
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA08
  fcmp(c,0,c->f[0],c->f[2]); // 801DAA0C
  if (crb(c,0)) { goto L_801DAA1C; } // 801DAA10
  fcmp(c,0,c->f[0],c->f[1]); // 801DAA14
  if (!crb(c,1)) { goto L_801DAA24; } // 801DAA18
L_801DAA1C:;
  c->r[3]=0u+0x00000000u; // 801DAA1C
  goto L_801DAB9C; // 801DAA20
L_801DAA24:;
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA24
  fcmp(c,0,c->f[0],c->f[2]); // 801DAA28
  if (crb(c,0)) { goto L_801DAA38; } // 801DAA2C
  fcmp(c,0,c->f[0],c->f[1]); // 801DAA30
  if (!crb(c,1)) { goto L_801DAA40; } // 801DAA34
L_801DAA38:;
  c->r[3]=0u+0x00000000u; // 801DAA38
  goto L_801DAB9C; // 801DAA3C
L_801DAA40:;
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA40
  fcmp(c,0,c->f[0],c->f[2]); // 801DAA44
  if (crb(c,0)) { goto L_801DAA54; } // 801DAA48
  fcmp(c,0,c->f[0],c->f[1]); // 801DAA4C
  if (!crb(c,1)) { goto L_801DAA5C; } // 801DAA50
L_801DAA54:;
  c->r[3]=0u+0x00000000u; // 801DAA54
  goto L_801DAB9C; // 801DAA58
L_801DAA5C:;
  c->r[0]=0u+0x00000000u; // 801DAA5C
  c->r[4]=0u+0x804B0000u; // 801DAA60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801DAA64
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DAA68
  c->r[4]=c->r[4]+0x00005FC0u; // 801DAA6C
  cmpu(c,0,c->r[5],0x00000003u); // 801DAA70
  c->r[0]=R32(c->r[4]+c->r[0]); // 801DAA74
  W32(c->r[3]+0x00000010u,c->r[0]); // 801DAA78
  if (crb(c,1)) { goto L_801DAA8C; } // 801DAA7C
  {uint32_t ea=c->r[2]+0xFFFFC2C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA80
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801DAA84
  goto L_801DAA94; // 801DAA88
L_801DAA8C:;
  {uint32_t ea=c->r[2]+0xFFFFC2C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA8C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801DAA90
L_801DAA94:;
  {uint32_t ea=c->r[2]+0xFFFFC2A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAA94
  c->r[28]=0u+0x00000000u; // 801DAA98
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAA9C
  W32(c->r[3]+0x00000028u,c->r[28]); // 801DAAA0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DAAA4
  c->lr=0x801DAAACu; f_801E7834(c); // 801DAAA8
  c->r[29]=0u+0x804B0000u; // 801DAAAC
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801DAAB0
  {uint32_t ea=c->r[2]+0xFFFFC2E0u; c->f[29]=RF64(ea);} // 801DAAB4
  c->r[27]=c->r[31]|c->r[31]; // 801DAAB8
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[30]=c->ps1[30]=RF32(ea);} // 801DAABC
  c->r[29]=c->r[29]+0x00005FE0u; // 801DAAC0
  {uint32_t ea=c->r[2]+0xFFFFC2A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DAAC4
  c->r[25]=0u+0x00000000u; // 801DAAC8
  c->r[26]=0u+0x00000000u; // 801DAACC
  c->r[30]=0u+0x43300000u; // 801DAAD0
L_801DAAD4:;
  W32(c->r[27]+0x0000004Cu,c->r[28]); // 801DAAD4
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[1]=RF64(ea);} // 801DAAD8
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801DAADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DAAE0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DAAE4
  c->r[0]=c->r[26]+c->r[0]; // 801DAAE8
  c->r[0]=R32(c->r[29]+c->r[0]); // 801DAAEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DAAF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801DAAF4
  W32(c->r[27]+0x00000054u,c->r[0]); // 801DAAF8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801DAAFC
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAB00
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801DAB04
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801DAB08
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801DAB0C
  c->lr=0x801DAB14u; f_801F7388(c); // 801DAB10
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801DAB14
  c->r[25]=c->r[25]+0x00000001u; // 801DAB18
  cmpu(c,0,c->r[25],0x00000002u); // 801DAB1C
  c->r[26]=c->r[26]+0x00000004u; // 801DAB20
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 801DAB24
  c->r[27]=c->r[27]+0x00000004u; // 801DAB28
  if (crb(c,0)) { IRQCHK(c); goto L_801DAAD4; } // 801DAB2C
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801DAB30
  c->r[4]=0u+0x00000000u; // 801DAB34
  c->r[3]=0u+0x804B0000u; // 801DAB38
  W32(c->r[31]+0x00000084u,c->r[4]); // 801DAB3C
  c->r[3]=c->r[3]+0x00005FE0u; // 801DAB40
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DAB44
  c->r[3]=c->r[3]+c->r[0]; // 801DAB48
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAB4C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DAB50
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAB54
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801DAB58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801DAB5C
  {uint32_t ea=c->r[2]+0xFFFFC2D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAB60
  W32(c->r[31]+0x00000088u,c->r[4]); // 801DAB64
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DAB68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801DAB6C
  fcmp(c,0,c->f[1],c->f[0]); // 801DAB70
  W32(c->r[31]+0x00000090u,c->r[0]); // 801DAB74
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 801DAB78
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 801DAB7C
  if (!crb(c,1)) { goto L_801DAB88; } // 801DAB80
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 801DAB84
L_801DAB88:;
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAB88
  c->r[3]=0u+0x00000001u; // 801DAB8C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 801DAB90
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 801DAB94
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 801DAB98
L_801DAB9C:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801DAB9C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801DABA0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801DABA4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801DABA8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801DABAC
  c->r[11]=c->r[1]+0x00000030u; // 801DABB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801DABB4
  c->lr=0x801DABBCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DABB8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801DABBC
  c->lr=c->r[0]; // 801DABC0
  c->r[1]=c->r[1]+0x00000060u; // 801DABC4
  return; // 801DABC8
}

// fn_801DABCC
void f_801DABCC(Ctx* __restrict c) {
  trace_call(0x801DABCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DABCC
  c->r[0]=c->lr; // 801DABD0
  c->r[6]=0u+0x43300000u; // 801DABD4
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[6]=RF64(ea);} // 801DABD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DABDC
  c->r[0]=0u+0x00000000u; // 801DABE0
  {uint32_t ea=c->r[2]+0xFFFFC2ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DABE4
  c->r[7]=R32(c->r[3]+0x000000A0u); // 801DABE8
  c->r[5]=R32(c->r[3]+0x000000A4u); // 801DABEC
  c->r[4]=R32(c->r[3]+0x000000A8u); // 801DABF0
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801DABF4
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DABF8
  W32(c->r[1]+0x00000008u,c->r[6]); // 801DABFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801DAC00
  W32(c->r[1]+0x00000014u,c->r[5]); // 801DAC04
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 801DAC08
  {uint32_t ea=c->r[2]+0xFFFFC2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC0C
  W32(c->r[1]+0x00000010u,c->r[6]); // 801DAC10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 801DAC14
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 801DAC18
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[6]); // 801DAC1C
  W32(c->r[1]+0x00000018u,c->r[6]); // 801DAC20
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[5]); // 801DAC24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=RF64(ea);} // 801DAC28
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801DAC2C
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[5]);} // 801DAC30
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[1]);} // 801DAC34
  W32(c->r[3]+0x00000090u,c->r[0]); // 801DAC38
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[6]); // 801DAC3C
  W32(c->r[3]+0x00000094u,c->r[0]); // 801DAC40
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[4]);} // 801DAC44
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801DAC48
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801DAC4C
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 801DAC50
  c->lr=0x801DAC58u; f_801DAC90(c); // 801DAC54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAC58
  c->lr=c->r[0]; // 801DAC5C
  c->r[1]=c->r[1]+0x00000020u; // 801DAC60
  return; // 801DAC64
}

// fn_801DAC68
void f_801DAC68(Ctx* __restrict c) {
  trace_call(0x801DAC68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAC68
  c->r[0]=c->lr; // 801DAC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DAC70
  c->lr=0x801DAC78u; f_801DAEEC(c); // 801DAC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DAC78
  c->r[3]=0u+0x00000001u; // 801DAC7C
  c->lr=c->r[0]; // 801DAC80
  c->r[1]=c->r[1]+0x00000010u; // 801DAC84
  return; // 801DAC88
}

// fn_801DAC8C
void f_801DAC8C(Ctx* __restrict c) {
  trace_call(0x801DAC8Cu);
  f_801DAF7C(c); return; // 801DAC8C
}

// fn_801DAC90
void f_801DAC90(Ctx* __restrict c) {
  trace_call(0x801DAC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAC90
  c->r[0]=c->lr; // 801DAC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAC98
  c->r[11]=c->r[1]+0x00000020u; // 801DAC9C
  c->lr=0x801DACA4u; f_801E795C(c); // 801DACA0
  c->r[30]=c->r[3]|c->r[3]; // 801DACA4
  c->lr=0x801DACACu; f_801BE74C(c); // 801DACA8
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 801DACAC
  c->r[0]=0u+0x00000C80u; // 801DACB0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801DACB4
  c->r[31]=c->r[3]|c->r[3]; // 801DACB8
  c->r[0]=c->r[4]|0x00000001u; // 801DACBC
  c->r[27]=c->r[30]|c->r[30]; // 801DACC0
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801DACC4
  c->r[29]=0u+0x00000000u; // 801DACC8
L_801DACCC:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801DACCC
  c->r[12]=R32(c->r[13]+0xFFFF8508u); // 801DACD0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DACD4
  c->ctr=c->r[12]; // 801DACD8
  if (true) { c->lr=0x801DACE0u; dispatch(c,c->ctr); } // 801DACDC
  cmps(c,0,(int32_t)c->r[3],0); // 801DACE0
  W32(c->r[27]+0x00000000u,c->r[3]); // 801DACE4
  if (!crb(c,2)) { goto L_801DACF4; } // 801DACE8
  c->r[0]=0u+0x00000000u; // 801DACEC
  goto L_801DAD08; // 801DACF0
L_801DACF4:;
  c->r[29]=c->r[29]+0x00000001u; // 801DACF4
  c->r[27]=c->r[27]+0x00000004u; // 801DACF8
  cmpu(c,0,c->r[29],0x00000003u); // 801DACFC
  if (crb(c,0)) { IRQCHK(c); goto L_801DACCC; } // 801DAD00
  c->r[0]=0u+0x00000001u; // 801DAD04
L_801DAD08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAD08
  if (!crb(c,2)) { goto L_801DAD70; } // 801DAD0C
  c->lr=0x801DAD14u; f_801BE74C(c); // 801DAD10
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 801DAD14
  c->r[27]=c->r[3]|c->r[3]; // 801DAD18
  c->r[28]=0u+0x00000000u; // 801DAD1C
  c->r[29]=0u+0x00000000u; // 801DAD20
  c->r[0]=c->r[0]|0x00000001u; // 801DAD24
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801DAD28
L_801DAD2C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DAD2C
  cmps(c,0,(int32_t)c->r[3],0); // 801DAD30
  if (crb(c,2)) { goto L_801DAD44; } // 801DAD34
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DAD38
  c->ctr=c->r[12]; // 801DAD3C
  if (true) { c->lr=0x801DAD44u; dispatch(c,c->ctr); } // 801DAD40
L_801DAD44:;
  c->r[28]=c->r[28]+0x00000001u; // 801DAD44
  W32(c->r[30]+0x00000000u,c->r[29]); // 801DAD48
  cmpu(c,0,c->r[28],0x00000003u); // 801DAD4C
  c->r[30]=c->r[30]+0x00000004u; // 801DAD50
  if (crb(c,0)) { IRQCHK(c); goto L_801DAD2C; } // 801DAD54
  c->r[3]=c->r[27]|c->r[27]; // 801DAD58
  c->lr=0x801DAD60u; f_801BE774(c); // 801DAD5C
  c->r[3]=c->r[31]|c->r[31]; // 801DAD60
  c->lr=0x801DAD68u; f_801BE774(c); // 801DAD64
  c->r[3]=0u+0x00000000u; // 801DAD68
  goto L_801DAED4; // 801DAD6C
L_801DAD70:;
  c->r[28]=c->r[30]|c->r[30]; // 801DAD70
  c->r[27]=0u+0x00000000u; // 801DAD74
L_801DAD78:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DAD78
  cmps(c,0,(int32_t)c->r[3],0); // 801DAD7C
  if (!crb(c,2)) { goto L_801DAD8C; } // 801DAD80
  c->r[4]=0u+0x00000000u; // 801DAD84
  goto L_801DADE4; // 801DAD88
L_801DAD8C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801DAD8C
  c->r[4]=0u+0x00000000u; // 801DAD90
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DAD94
  c->lr=0x801DAD9Cu; f_8000443C(c); // 801DAD98
  c->r[27]=c->r[27]+0x00000001u; // 801DAD9C
  c->r[28]=c->r[28]+0x00000004u; // 801DADA0
  cmpu(c,0,c->r[27],0x00000003u); // 801DADA4
  if (crb(c,0)) { IRQCHK(c); goto L_801DAD78; } // 801DADA8
  {uint32_t ea=c->r[2]+0xFFFFC300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DADAC
  c->r[0]=0u+0x00000000u; // 801DADB0
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DADB4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DADB8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801DADBC
  c->lr=0x801DADC4u; f_801E7834(c); // 801DADC0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801DADC4
  c->r[4]=0u+0x00000001u; // 801DADC8
  c->r[3]=c->r[0]-c->r[3]; // 801DADCC
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801DADD0
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801DADD4
  W32(c->r[30]+0x00000018u,c->r[0]); // 801DADD8
  W32(c->r[30]+0x00000010u,c->r[3]); // 801DADDC
  W32(c->r[30]+0x00000014u,c->r[3]); // 801DADE0
L_801DADE4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DADE4
  if (!crb(c,2)) { goto L_801DAE4C; } // 801DADE8
  c->lr=0x801DADF0u; f_801BE74C(c); // 801DADEC
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 801DADF0
  c->r[28]=c->r[3]|c->r[3]; // 801DADF4
  c->r[27]=0u+0x00000000u; // 801DADF8
  c->r[29]=0u+0x00000000u; // 801DADFC
  c->r[0]=c->r[0]|0x00000001u; // 801DAE00
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801DAE04
L_801DAE08:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DAE08
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE0C
  if (crb(c,2)) { goto L_801DAE20; } // 801DAE10
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DAE14
  c->ctr=c->r[12]; // 801DAE18
  if (true) { c->lr=0x801DAE20u; dispatch(c,c->ctr); } // 801DAE1C
L_801DAE20:;
  c->r[27]=c->r[27]+0x00000001u; // 801DAE20
  W32(c->r[30]+0x00000000u,c->r[29]); // 801DAE24
  cmpu(c,0,c->r[27],0x00000003u); // 801DAE28
  c->r[30]=c->r[30]+0x00000004u; // 801DAE2C
  if (crb(c,0)) { IRQCHK(c); goto L_801DAE08; } // 801DAE30
  c->r[3]=c->r[28]|c->r[28]; // 801DAE34
  c->lr=0x801DAE3Cu; f_801BE774(c); // 801DAE38
  c->r[3]=c->r[31]|c->r[31]; // 801DAE3C
  c->lr=0x801DAE44u; f_801BE774(c); // 801DAE40
  c->r[3]=0u+0x00000000u; // 801DAE44
  goto L_801DAED4; // 801DAE48
L_801DAE4C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DAE4C
  c->lr=0x801DAE54u; f_801DB2DC(c); // 801DAE50
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE54
  if (!crb(c,2)) { goto L_801DAEBC; } // 801DAE58
  c->lr=0x801DAE60u; f_801BE74C(c); // 801DAE5C
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 801DAE60
  c->r[28]=c->r[3]|c->r[3]; // 801DAE64
  c->r[27]=0u+0x00000000u; // 801DAE68
  c->r[29]=0u+0x00000000u; // 801DAE6C
  c->r[0]=c->r[0]|0x00000001u; // 801DAE70
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801DAE74
L_801DAE78:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DAE78
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE7C
  if (crb(c,2)) { goto L_801DAE90; } // 801DAE80
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DAE84
  c->ctr=c->r[12]; // 801DAE88
  if (true) { c->lr=0x801DAE90u; dispatch(c,c->ctr); } // 801DAE8C
L_801DAE90:;
  c->r[27]=c->r[27]+0x00000001u; // 801DAE90
  W32(c->r[30]+0x00000000u,c->r[29]); // 801DAE94
  cmpu(c,0,c->r[27],0x00000003u); // 801DAE98
  c->r[30]=c->r[30]+0x00000004u; // 801DAE9C
  if (crb(c,0)) { IRQCHK(c); goto L_801DAE78; } // 801DAEA0
  c->r[3]=c->r[28]|c->r[28]; // 801DAEA4
  c->lr=0x801DAEACu; f_801BE774(c); // 801DAEA8
  c->r[3]=c->r[31]|c->r[31]; // 801DAEAC
  c->lr=0x801DAEB4u; f_801BE774(c); // 801DAEB0
  c->r[3]=0u+0x00000000u; // 801DAEB4
  goto L_801DAED4; // 801DAEB8
L_801DAEBC:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 801DAEBC
  c->r[3]=c->r[31]|c->r[31]; // 801DAEC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801DAEC4
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801DAEC8
  c->lr=0x801DAED0u; f_801BE774(c); // 801DAECC
  c->r[3]=0u+0x00000001u; // 801DAED0
L_801DAED4:;
  c->r[11]=c->r[1]+0x00000020u; // 801DAED4
  c->lr=0x801DAEDCu; f_801E79A8(c); // 801DAED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAEDC
  c->lr=c->r[0]; // 801DAEE0
  c->r[1]=c->r[1]+0x00000020u; // 801DAEE4
  return; // 801DAEE8
}

// fn_801DAEEC
void f_801DAEEC(Ctx* __restrict c) {
  trace_call(0x801DAEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAEEC
  c->r[0]=c->lr; // 801DAEF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAEF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAEF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAEFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAF00
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DAF04
  c->r[28]=c->r[3]|c->r[3]; // 801DAF08
  c->lr=0x801DAF10u; f_801BE74C(c); // 801DAF0C
  c->r[0]=R32(c->r[28]+0x0000007Cu); // 801DAF10
  c->r[29]=c->r[3]|c->r[3]; // 801DAF14
  c->r[30]=0u+0x00000000u; // 801DAF18
  c->r[31]=0u+0x00000000u; // 801DAF1C
  c->r[0]=c->r[0]|0x00000001u; // 801DAF20
  W32(c->r[28]+0x0000007Cu,c->r[0]); // 801DAF24
L_801DAF28:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DAF28
  cmps(c,0,(int32_t)c->r[3],0); // 801DAF2C
  if (crb(c,2)) { goto L_801DAF40; } // 801DAF30
  c->r[12]=R32(c->r[13]+0xFFFF850Cu); // 801DAF34
  c->ctr=c->r[12]; // 801DAF38
  if (true) { c->lr=0x801DAF40u; dispatch(c,c->ctr); } // 801DAF3C
L_801DAF40:;
  c->r[30]=c->r[30]+0x00000001u; // 801DAF40
  W32(c->r[28]+0x00000000u,c->r[31]); // 801DAF44
  cmpu(c,0,c->r[30],0x00000003u); // 801DAF48
  c->r[28]=c->r[28]+0x00000004u; // 801DAF4C
  if (crb(c,0)) { IRQCHK(c); goto L_801DAF28; } // 801DAF50
  c->r[3]=c->r[29]|c->r[29]; // 801DAF54
  c->lr=0x801DAF5Cu; f_801BE774(c); // 801DAF58
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAF5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DAF60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DAF64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DAF68
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DAF6C
  c->lr=c->r[0]; // 801DAF70
  c->r[1]=c->r[1]+0x00000020u; // 801DAF74
  return; // 801DAF78
}

// fn_801DAF7C
void f_801DAF7C(Ctx* __restrict c) {
  trace_call(0x801DAF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAF7C
  c->r[0]=c->lr; // 801DAF80
  W32(c->r[1]+0x00000204u,c->r[0]); // 801DAF84
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 801DAF88
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 801DAF8C
  c->r[11]=c->r[1]+0x000001F0u; // 801DAF90
  c->lr=0x801DAF98u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DAF94
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801DAF98
  c->r[27]=c->r[4]|c->r[4]; // 801DAF9C
  cmps(c,0,(int32_t)c->r[0],0); // 801DAFA0
  if (crb(c,2)) { goto L_801DAFB4; } // 801DAFA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801DAFA8
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801DAFAC
  goto L_801DB2BC; // 801DAFB0
L_801DAFB4:;
  c->r[7]=R32(c->r[4]+0x00000090u); // 801DAFB4
  c->r[6]=R32(c->r[3]+0x00000000u); // 801DAFB8
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DAFBC
  cmps(c,0,(int32_t)c->r[7],0); // 801DAFC0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801DAFC4
  W32(c->r[1]+0x00000020u,c->r[6]); // 801DAFC8
  W32(c->r[1]+0x00000024u,c->r[5]); // 801DAFCC
  W32(c->r[1]+0x00000028u,c->r[0]); // 801DAFD0
  if (crb(c,2)) { goto L_801DAFF0; } // 801DAFD4
  c->r[5]=R32(c->r[7]+0x00000000u); // 801DAFD8
  c->r[3]=R32(c->r[7]+0x00000004u); // 801DAFDC
  c->r[0]=R32(c->r[7]+0x00000008u); // 801DAFE0
  W32(c->r[1]+0x00000014u,c->r[5]); // 801DAFE4
  W32(c->r[1]+0x00000018u,c->r[3]); // 801DAFE8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DAFEC
L_801DAFF0:;
  c->r[6]=R32(c->r[4]+0x00000094u); // 801DAFF0
  cmps(c,0,(int32_t)c->r[6],0); // 801DAFF4
  if (crb(c,2)) { goto L_801DB014; } // 801DAFF8
  c->r[5]=R32(c->r[6]+0x00000000u); // 801DAFFC
  c->r[3]=R32(c->r[6]+0x00000004u); // 801DB000
  c->r[0]=R32(c->r[6]+0x00000008u); // 801DB004
  W32(c->r[1]+0x00000008u,c->r[5]); // 801DB008
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DB00C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DB010
L_801DB014:;
  c->r[3]=c->r[1]+0x00000030u; // 801DB014
  c->r[4]=c->r[4]+0x00000020u; // 801DB018
  c->lr=0x801DB020u; f_801DB4D4(c); // 801DB01C
  {uint32_t ea=c->r[2]+0xFFFFC308u; c->f[31]=RF64(ea);} // 801DB020
  c->r[30]=c->r[1]+0x00000030u; // 801DB024
  c->r[29]=0u+0x00000000u; // 801DB028
  c->r[31]=0u+0x43300000u; // 801DB02C
  c->r[25]=0u+0x00000000u; // 801DB030
  c->r[26]=0u+0x00000003u; // 801DB034
L_801DB038:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801DB038
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DB03C
  c->r[4]=R32(c->r[27]+0x00000018u); // 801DB040
  c->r[6]=c->r[3]+c->r[0]; // 801DB044
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 801DB048
  if (crb(c,0)) { goto L_801DB058; } // 801DB04C
  c->r[6]=c->r[6]-c->r[4]; // 801DB050
  goto L_801DB064; // 801DB054
L_801DB058:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DB058
  if (!crb(c,0)) { goto L_801DB064; } // 801DB05C
  c->r[6]=c->r[6]+c->r[4]; // 801DB060
L_801DB064:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 801DB064
  c->r[3]=c->r[6]-c->r[0]; cr0(c,c->r[3]); // 801DB068
  if (!crb(c,0)) { goto L_801DB074; } // 801DB06C
  c->r[3]=c->r[3]+c->r[4]; // 801DB070
L_801DB074:;
  c->r[7]=rotl(c->r[3],16)&0x0000FFFFu; cr0(c,c->r[7]); // 801DB074
  c->r[8]=rotl(c->r[3],0)&0x0000FFFFu; // 801DB078
  c->r[9]=rotl(c->r[0],16)&0x0000FFFFu; // 801DB07C
  c->r[28]=R32(c->r[27]+0x00000078u); // 801DB080
  c->ctr=c->r[7]; // 801DB084
  if (crb(c,2)) { goto L_801DB0E0; } // 801DB088
L_801DB08C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801DB08C
  c->r[4]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801DB090
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801DB094
  c->r[28]=c->r[28]+0x00000001u; // 801DB098
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB09C
  c->r[5]=c->r[27]+c->r[0]; // 801DB0A0
  c->r[9]=c->r[9]+0x00000001u; // 801DB0A4
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 801DB0A8
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 801DB0AC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801DB0B0
  c->r[3]=R32(c->r[27]+0x00000004u); // 801DB0B4
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB0B8
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 801DB0BC
  c->r[3]=R32(c->r[27]+0x00000008u); // 801DB0C0
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB0C4
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 801DB0C8
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801DB0CC
  cmpu(c,0,c->r[9],c->r[0]); // 801DB0D0
  if (crb(c,0)) { goto L_801DB0DC; } // 801DB0D4
  c->r[9]=0u+0x00000000u; // 801DB0D8
L_801DB0DC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB08C; } // 801DB0DC
L_801DB0E0:;
  c->r[0]=rotl(c->r[6],0)&0xFFFF0000u; // 801DB0E0
  c->r[3]=rotl(c->r[8],23)&0x0000007Fu; // 801DB0E4
  W32(c->r[27]+0x00000014u,c->r[0]); // 801DB0E8
  c->lr=0x801DB0F0u; f_801DB5E4(c); // 801DB0EC
  c->r[4]=c->r[27]|c->r[27]; // 801DB0F0
  c->r[7]=c->r[27]|c->r[27]; // 801DB0F4
  c->r[5]=c->r[1]+0x00000014u; // 801DB0F8
  c->r[6]=c->r[1]+0x00000020u; // 801DB0FC
  c->r[8]=c->r[1]+0x00000008u; // 801DB100
  c->ctr=c->r[26]; // 801DB104
L_801DB108:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801DB108
  c->r[28]=c->r[28]+0x00000001u; // 801DB10C
  c->r[10]=c->r[4]+c->r[0]; // 801DB110
  c->r[0]=R32(c->r[27]+0x00000090u); // 801DB114
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 801DB118
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB11C
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801DB120
  {uint32_t ea=c->r[10]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB124
  c->r[28]=c->r[28]+0x00000001u; // 801DB128
  {uint32_t ea=c->r[2]+0xFFFFC304u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DB12C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 801DB130
  c->r[11]=c->r[4]+c->r[9]; // 801DB134
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 801DB138
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB13C
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801DB140
  {uint32_t ea=c->r[11]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB144
  c->r[28]=c->r[28]+0x00000001u; // 801DB148
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 801DB14C
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[2]); // 801DB150
  c->r[10]=c->r[4]+c->r[9]; // 801DB154
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 801DB158
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB15C
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801DB160
  {uint32_t ea=c->r[10]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB164
  c->r[9]=c->r[4]+c->r[9]; // 801DB168
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 801DB16C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801DB170
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB174
  {uint32_t ea=c->r[9]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB178
  cmps(c,0,(int32_t)c->r[0],0); // 801DB17C
  c->r[28]=c->r[28]+0x00000001u; // 801DB180
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801DB184
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[2]); // 801DB188
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 801DB18C
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[0]); // 801DB190
  if (crb(c,2)) { goto L_801DB1CC; } // 801DB194
  c->r[9]=R32(c->r[5]+0x00000000u); // 801DB198
  c->r[10]=R32(c->r[6]+0x00000000u); // 801DB19C
  c->r[0]=R32(c->r[9]+0x00000000u); // 801DB1A0
  c->r[9]=c->r[9]+0x00000004u; // 801DB1A4
  c->r[10]=R32(c->r[10]+0x00000000u); // 801DB1A8
  W32(c->r[1]+0x000001B0u,c->r[31]); // 801DB1AC
  c->r[0]=c->r[10]+c->r[0]; // 801DB1B0
  c->r[0]=c->r[0]^0x80000000u; // 801DB1B4
  W32(c->r[5]+0x00000000u,c->r[9]); // 801DB1B8
  W32(c->r[1]+0x000001B4u,c->r[0]); // 801DB1BC
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[0]=RF64(ea);} // 801DB1C0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801DB1C4
  goto L_801DB1E8; // 801DB1C8
L_801DB1CC:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 801DB1CC
  W32(c->r[1]+0x000001B8u,c->r[31]); // 801DB1D0
  c->r[0]=R32(c->r[9]+0x00000000u); // 801DB1D4
  c->r[0]=c->r[0]^0x80000000u; // 801DB1D8
  W32(c->r[1]+0x000001BCu,c->r[0]); // 801DB1DC
  {uint32_t ea=c->r[1]+0x000001B8u; c->f[0]=RF64(ea);} // 801DB1E0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801DB1E4
L_801DB1E8:;
  {uint32_t ea=c->r[27]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB1E8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801DB1EC
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801DB1F0
  c->r[11]=R32(c->r[7]+0x00000000u); // 801DB1F4
  c->r[10]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DB1F8
  c->r[9]=R32(c->r[6]+0x00000000u); // 801DB1FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801DB200
  c->r[0]=c->r[9]+0x00000004u; // 801DB204
  W32(c->r[6]+0x00000000u,c->r[0]); // 801DB208
  {uint32_t ea=c->r[11]+c->r[10]; WF32(ea,c->f[0]);} // 801DB20C
  {uint32_t ea=c->r[27]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB210
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801DB214
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DB218
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[0]);} // 801DB21C
  c->r[0]=R32(c->r[1]+0x000001C4u); // 801DB220
  W32(c->r[9]+0x00000000u,c->r[0]); // 801DB224
  c->r[0]=R32(c->r[27]+0x00000094u); // 801DB228
  cmps(c,0,(int32_t)c->r[0],0); // 801DB22C
  if (crb(c,2)) { goto L_801DB258; } // 801DB230
  {uint32_t ea=c->r[27]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB234
  c->r[9]=R32(c->r[8]+0x00000000u); // 801DB238
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801DB23C
  c->r[0]=c->r[9]+0x00000004u; // 801DB240
  W32(c->r[8]+0x00000000u,c->r[0]); // 801DB244
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801DB248
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[0]);} // 801DB24C
  c->r[0]=R32(c->r[1]+0x000001C4u); // 801DB250
  W32(c->r[9]+0x00000000u,c->r[0]); // 801DB254
L_801DB258:;
  c->r[4]=c->r[4]+0x00000010u; // 801DB258
  c->r[5]=c->r[5]+0x00000004u; // 801DB25C
  c->r[6]=c->r[6]+0x00000004u; // 801DB260
  c->r[7]=c->r[7]+0x00000004u; // 801DB264
  c->r[8]=c->r[8]+0x00000004u; // 801DB268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB108; } // 801DB26C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801DB270
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801DB274
  c->r[3]=c->r[3]+0x00000001u; // 801DB278
  W32(c->r[27]+0x00000078u,c->r[28]); // 801DB27C
  cmpu(c,0,c->r[3],c->r[0]); // 801DB280
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 801DB284
  if (crb(c,0)) { goto L_801DB290; } // 801DB288
  W32(c->r[27]+0x0000000Cu,c->r[25]); // 801DB28C
L_801DB290:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801DB290
  c->r[0]=R32(c->r[27]+0x00000018u); // 801DB294
  c->r[3]=c->r[3]+0x00010000u; // 801DB298
  cmpu(c,0,c->r[3],c->r[0]); // 801DB29C
  W32(c->r[27]+0x00000010u,c->r[3]); // 801DB2A0
  if (crb(c,0)) { goto L_801DB2AC; } // 801DB2A4
  W32(c->r[27]+0x00000010u,c->r[25]); // 801DB2A8
L_801DB2AC:;
  c->r[29]=c->r[29]+0x00000001u; // 801DB2AC
  c->r[30]=c->r[30]+0x00000004u; // 801DB2B0
  cmpu(c,0,c->r[29],0x00000060u); // 801DB2B4
  if (crb(c,0)) { IRQCHK(c); goto L_801DB038; } // 801DB2B8
L_801DB2BC:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 801DB2BC
  c->r[11]=c->r[1]+0x000001F0u; // 801DB2C0
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 801DB2C4
  c->lr=0x801DB2CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB2C8
  c->r[0]=R32(c->r[1]+0x00000204u); // 801DB2CC
  c->lr=c->r[0]; // 801DB2D0
  c->r[1]=c->r[1]+0x00000200u; // 801DB2D4
  return; // 801DB2D8
}

// fn_801DB2DC
void f_801DB2DC(Ctx* __restrict c) {
  trace_call(0x801DB2DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB2DC
  c->r[0]=c->lr; // 801DB2E0
  {uint32_t ea=c->r[2]+0xFFFFC310u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DB2E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB2E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DB2EC
  c->r[31]=c->r[3]|c->r[3]; // 801DB2F0
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB2F4
  fcmp(c,0,c->f[1],c->f[4]); // 801DB2F8
  if (crb(c,0)) { goto L_801DB30C; } // 801DB2FC
  {uint32_t ea=c->r[2]+0xFFFFC314u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB300
  fcmp(c,0,c->f[1],c->f[0]); // 801DB304
  if (!crb(c,1)) { goto L_801DB314; } // 801DB308
L_801DB30C:;
  c->r[3]=0u+0x00000000u; // 801DB30C
  goto L_801DB4C0; // 801DB310
L_801DB314:;
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB314
  {uint32_t ea=c->r[2]+0xFFFFC304u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB318
  fcmp(c,0,c->f[0],c->f[3]); // 801DB31C
  if (crb(c,0)) { goto L_801DB330; } // 801DB320
  {uint32_t ea=c->r[2]+0xFFFFC318u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB324
  fcmp(c,0,c->f[0],c->f[2]); // 801DB328
  if (!crb(c,1)) { goto L_801DB338; } // 801DB32C
L_801DB330:;
  c->r[3]=0u+0x00000000u; // 801DB330
  goto L_801DB4C0; // 801DB334
L_801DB338:;
  {uint32_t ea=c->r[3]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB338
  fcmp(c,0,c->f[1],c->f[4]); // 801DB33C
  if (crb(c,0)) { goto L_801DB350; } // 801DB340
  {uint32_t ea=c->r[2]+0xFFFFC31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB344
  fcmp(c,0,c->f[1],c->f[0]); // 801DB348
  if (!crb(c,1)) { goto L_801DB358; } // 801DB34C
L_801DB350:;
  c->r[3]=0u+0x00000000u; // 801DB350
  goto L_801DB4C0; // 801DB354
L_801DB358:;
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB358
  fcmp(c,0,c->f[0],c->f[3]); // 801DB35C
  if (crb(c,0)) { goto L_801DB370; } // 801DB360
  fcmp(c,0,c->f[0],c->f[2]); // 801DB364
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DB368
  if (!crb(c,2)) { goto L_801DB378; } // 801DB36C
L_801DB370:;
  c->r[3]=0u+0x00000000u; // 801DB370
  goto L_801DB4C0; // 801DB374
L_801DB378:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB378
  fcmp(c,0,c->f[0],c->f[3]); // 801DB37C
  if (crb(c,0)) { goto L_801DB38C; } // 801DB380
  fcmp(c,0,c->f[0],c->f[2]); // 801DB384
  if (!crb(c,1)) { goto L_801DB394; } // 801DB388
L_801DB38C:;
  c->r[3]=0u+0x00000000u; // 801DB38C
  goto L_801DB4C0; // 801DB390
L_801DB394:;
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB394
  fcmp(c,0,c->f[0],c->f[3]); // 801DB398
  if (crb(c,0)) { goto L_801DB3A8; } // 801DB39C
  fcmp(c,0,c->f[0],c->f[2]); // 801DB3A0
  if (!crb(c,1)) { goto L_801DB3B0; } // 801DB3A4
L_801DB3A8:;
  c->r[3]=0u+0x00000000u; // 801DB3A8
  goto L_801DB4C0; // 801DB3AC
L_801DB3B0:;
  c->lr=0x801DB3B4u; f_801DB5D8(c); // 801DB3B0
  {uint32_t ea=c->r[2]+0xFFFFC300u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB3B4
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB3B8
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB3BC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801DB3C0
  W32(c->r[31]+0x00000020u,c->r[3]); // 801DB3C4
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 801DB3C8
  fcmp(c,0,c->f[6],c->f[1]); // 801DB3CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DB3D0
  if (!crb(c,2)) { goto L_801DB3F0; } // 801DB3D4
  {uint32_t ea=c->r[2]+0xFFFFC318u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DB3D8
  {uint32_t ea=c->r[2]+0xFFFFC304u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB3DC
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 801DB3E0
  fcmp(c,0,c->f[6],c->f[0]); // 801DB3E4
  if (!crb(c,0)) { goto L_801DB3F0; } // 801DB3E8
  c->f[6]=c->f[0]; // 801DB3EC
L_801DB3F0:;
  {uint32_t ea=c->r[31]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DB3F0
  c->r[4]=0u+0x00000000u; // 801DB3F4
  {uint32_t ea=c->r[2]+0xFFFFC328u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DB3F8
  c->r[0]=0u+0xFFFFFFFFu; // 801DB3FC
  {uint32_t ea=c->r[2]+0xFFFFC324u; c->f[4]=c->ps1[4]=RF32(ea);} // 801DB400
  c->r[3]=0u+0x00000001u; // 801DB404
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 801DB408
  {uint32_t ea=c->r[2]+0xFFFFC32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB40C
  {uint32_t ea=c->r[2]+0xFFFFC320u; c->f[5]=c->ps1[5]=RF32(ea);} // 801DB410
  W32(c->r[31]+0x00000038u,c->r[0]); // 801DB414
  W32(c->r[31]+0x00000030u,c->r[4]); // 801DB418
  W32(c->r[31]+0x00000034u,c->r[4]); // 801DB41C
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[0]); // 801DB420
  {uint32_t ea=c->r[2]+0xFFFFC304u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DB424
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[3]); // 801DB428
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 801DB42C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 801DB430
  c->f[6]=c->ps1[6]=S(c->f[6]/c->f[7]); // 801DB434
  W32(c->r[31]+0x00000040u,c->r[4]); // 801DB438
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801DB43C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 801DB440
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[7]); // 801DB444
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 801DB448
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 801DB44C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801DB450
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801DB454
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801DB458
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[4]);} // 801DB45C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[3]);} // 801DB460
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801DB464
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 801DB468
  c->r[6]=R32(c->r[1]+0x00000014u); // 801DB46C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 801DB470
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801DB474
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB478
  W32(c->r[31]+0x0000002Cu,c->r[7]); // 801DB47C
  W32(c->r[31]+0x00000024u,c->r[6]); // 801DB480
  W32(c->r[31]+0x00000028u,c->r[5]); // 801DB484
  W32(c->r[31]+0x00000044u,c->r[0]); // 801DB488
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 801DB48C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 801DB490
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 801DB494
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801DB498
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 801DB49C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 801DB4A0
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 801DB4A4
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 801DB4A8
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 801DB4AC
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 801DB4B0
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 801DB4B4
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 801DB4B8
  W32(c->r[31]+0x00000078u,c->r[4]); // 801DB4BC
L_801DB4C0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB4C0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DB4C4
  c->lr=c->r[0]; // 801DB4C8
  c->r[1]=c->r[1]+0x00000030u; // 801DB4CC
  return; // 801DB4D0
}

// fn_801DB4D4
void f_801DB4D4(Ctx* __restrict c) {
  trace_call(0x801DB4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB4D4
  c->r[0]=0u+0x00000060u; // 801DB4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB4DC
  c->ctr=c->r[0]; // 801DB4E0
L_801DB4E4:;
  c->r[5]=R32(c->r[4]+0x00000010u); // 801DB4E4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801DB4E8
  c->r[5]=rotl(c->r[5],0)&0xFFFF0000u; // 801DB4EC
  cmpu(c,0,c->r[5],c->r[0]); // 801DB4F0
  if (crb(c,2)) { goto L_801DB56C; } // 801DB4F4
  W32(c->r[4]+0x00000018u,c->r[5]); // 801DB4F8
  c->r[5]=rotl(c->r[5],16)&0x0000FFFFu; // 801DB4FC
  c->r[0]=c->r[5]+0x00000001u; // 801DB500
  c->r[6]=R32(c->r[4]+0x00000000u); // 801DB504
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DB508
  c->r[9]=R32(c->r[4]+0x00000024u); // 801DB50C
  c->r[0]=rotl(c->r[0],2)&0x000001FCu; // 801DB510
  c->r[11]=R32(c->r[6]+c->r[5]); // 801DB514
  c->r[0]=R32(c->r[6]+c->r[0]); // 801DB518
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801DB51C
  c->r[10]=c->r[0]-c->r[11]; // 801DB520
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 801DB524
  c->r[31]=sraw(c,c->r[10],31); // 801DB528
  c->r[7]=sraw(c,c->r[9],31); // 801DB52C
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 801DB530
  c->r[12]=rotl(c->r[0],8)&0xFFFFFFFFu; // 801DB534
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[5])>>32); // 801DB538
  c->r[6]=rotl(c->r[6],8)&0xFFFFFFFFu; // 801DB53C
  c->r[8]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[9])>>32); // 801DB540
  c->r[12]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[12]&~0xFFFFFF00u); // 801DB544
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[9]); // 801DB548
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 801DB54C
  c->r[8]=c->r[8]+c->r[9]; // 801DB550
  c->r[8]=c->r[8]+c->r[5]; // 801DB554
  c->r[6]=(rotl(c->r[8],8)&0xFFFFFF00u)|(c->r[6]&~0xFFFFFF00u); // 801DB558
  c->r[5]=sraw(c,c->r[8],24); // 801DB55C
  W32(c->r[4]+0x00000020u,c->r[6]); // 801DB560
  c->r[5]=sraw(c,c->r[0],24); // 801DB564
  goto L_801DB57C; // 801DB568
L_801DB56C:;
  c->r[5]=R32(c->r[4]+0x0000001Cu); // 801DB56C
  c->r[0]=R32(c->r[4]+0x00000020u); // 801DB570
  c->r[12]=c->r[5]+c->r[0]; // 801DB574
  c->r[5]=sraw(c,c->r[12],31); // 801DB578
L_801DB57C:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 801DB57C
  W32(c->r[4]+0x0000001Cu,c->r[12]); // 801DB580
  cmpu(c,0,c->r[0],0x00000001u); // 801DB584
  if (crb(c,0)) { goto L_801DB594; } // 801DB588
  c->r[12]=addc(c,~c->r[12],0x00000000u,1); // 801DB58C
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 801DB590
L_801DB594:;
  c->r[5]=R32(c->r[4]+0x00000010u); // 801DB594
  c->r[0]=R32(c->r[4]+0x00000004u); // 801DB598
  c->r[5]=c->r[5]+c->r[0]; // 801DB59C
  c->r[0]=rotl(c->r[5],0)&0xFF800000u; cr0(c,c->r[0]); // 801DB5A0
  W32(c->r[4]+0x00000010u,c->r[5]); // 801DB5A4
  if (crb(c,2)) { goto L_801DB5C0; } // 801DB5A8
  c->r[0]=R32(c->r[4]+0x00000014u); // 801DB5AC
  c->r[5]=rotl(c->r[5],0)&0x007FFFFFu; // 801DB5B0
  W32(c->r[4]+0x00000010u,c->r[5]); // 801DB5B4
  c->r[0]=c->r[0]^0x00000001u; // 801DB5B8
  W32(c->r[4]+0x00000014u,c->r[0]); // 801DB5BC
L_801DB5C0:;
  W32(c->r[3]+0x00000000u,c->r[12]); // 801DB5C0
  c->r[3]=c->r[3]+0x00000004u; // 801DB5C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB4E4; } // 801DB5C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB5CC
  c->r[1]=c->r[1]+0x00000010u; // 801DB5D0
  return; // 801DB5D4
}

// fn_801DB5D8
void f_801DB5D8(Ctx* __restrict c) {
  trace_call(0x801DB5D8u);
  c->r[3]=0u+0x804B0000u; // 801DB5D8
  c->r[3]=c->r[3]+0x00006050u; // 801DB5DC
  return; // 801DB5E0
}

// fn_801DB5E4
void f_801DB5E4(Ctx* __restrict c) {
  trace_call(0x801DB5E4u);
  c->r[4]=0u+0x804B0000u; // 801DB5E4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801DB5E8
  c->r[4]=c->r[4]+0x00006250u; // 801DB5EC
  c->r[3]=c->r[4]+c->r[0]; // 801DB5F0
  return; // 801DB5F4
}

// fn_801DB5F8
void f_801DB5F8(Ctx* __restrict c) {
  trace_call(0x801DB5F8u);
  c->r[4]=c->r[3]|c->r[3]; // 801DB5F8
  c->r[3]=R32(c->r[13]+0xFFFF8400u); // 801DB5FC
  f_801B9FAC(c); return; // 801DB600
}

// fn_801DB604
void f_801DB604(Ctx* __restrict c) {
  trace_call(0x801DB604u);
  c->r[4]=c->r[3]|c->r[3]; // 801DB604
  c->r[3]=R32(c->r[13]+0xFFFF8400u); // 801DB608
  f_801BA0A4(c); return; // 801DB60C
}

// fn_801DB610
void f_801DB610(Ctx* __restrict c) {
  trace_call(0x801DB610u);
  W32(c->r[13]+0xFFFF8508u,c->r[3]); // 801DB610
  W32(c->r[13]+0xFFFF850Cu,c->r[4]); // 801DB614
  return; // 801DB618
}

// fn_801DB61C
void f_801DB61C(Ctx* __restrict c) {
  trace_call(0x801DB61Cu);
  c->r[0]=R32(c->r[13]+0xFFFF8508u); // 801DB61C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DB620
  c->r[0]=R32(c->r[13]+0xFFFF850Cu); // 801DB624
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DB628
  return; // 801DB62C
}

// fn_801DB630
void f_801DB630(Ctx* __restrict c) {
  trace_call(0x801DB630u);
  c->r[0]=R32(c->r[13]+0xFFFFA0ECu); // 801DB630
  c->r[6]=0u+0x804B0000u; // 801DB634
  c->r[4]=R32(c->r[3]+0x00000018u); // 801DB638
  c->r[6]=c->r[6]+0x00006A50u; // 801DB63C
  cmpu(c,0,c->r[0],0x00000003u); // 801DB640
  c->r[10]=R32(c->r[3]+0x0000001Cu); // 801DB644
  c->r[5]=addc(c,~c->r[4],0x0000007Fu,1); // 801DB648
  c->r[11]=addc(c,~c->r[10],0x0000007Fu,1); // 801DB64C
  if (!crb(c,2)) { goto L_801DB6A0; } // 801DB650
  c->r[9]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801DB654
  c->r[7]=c->r[6]+0x00000990u; // 801DB658
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[9]); // 801DB65C
  c->r[8]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801DB660
  c->r[5]=rotl(c->r[11],1)&0xFFFFFFFEu; // 801DB664
  c->r[0]=rotl(c->r[10],1)&0xFFFFFFFEu; // 801DB668
  W32(c->r[3]+0x00000024u,c->r[4]); // 801DB66C
  c->r[4]=c->r[6]+0x00000A90u; // 801DB670
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[8]); // 801DB674
  W32(c->r[3]+0x00000028u,c->r[6]); // 801DB678
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[5]); // 801DB67C
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801DB680
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[0]); // 801DB684
  W32(c->r[3]+0x00000030u,c->r[0]); // 801DB688
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[8]); // 801DB68C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801DB690
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[9]); // 801DB694
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DB698
  return; // 801DB69C
L_801DB6A0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801DB6A0
  c->r[7]=c->r[6]+0x00000790u; // 801DB6A4
  c->r[0]=R32(c->r[7]+c->r[0]); // 801DB6A8
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DB6AC
  c->r[5]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801DB6B0
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801DB6B4
  W32(c->r[3]+0x00000024u,c->r[0]); // 801DB6B8
  c->r[0]=0u+0x00000000u; // 801DB6BC
  c->r[6]=R32(c->r[7]+c->r[6]); // 801DB6C0
  W32(c->r[3]+0x00000028u,c->r[6]); // 801DB6C4
  c->r[5]=R32(c->r[7]+c->r[5]); // 801DB6C8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801DB6CC
  c->r[4]=R32(c->r[7]+c->r[4]); // 801DB6D0
  W32(c->r[3]+0x00000030u,c->r[4]); // 801DB6D4
  W32(c->r[3]+0x00000034u,c->r[0]); // 801DB6D8
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DB6DC
  return; // 801DB6E0
}

// fn_801DB6E4
void f_801DB6E4(Ctx* __restrict c) {
  trace_call(0x801DB6E4u);
  cmps(c,0,(int32_t)c->r[3],-904); // 801DB6E4
  if (crb(c,1)) { goto L_801DB6F4; } // 801DB6E8
  c->r[3]=0u+0x00000000u; // 801DB6EC
  return; // 801DB6F0
L_801DB6F4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DB6F4
  if (crb(c,0)) { goto L_801DB708; } // 801DB6F8
  c->r[3]=0u+0x00010000u; // 801DB6FC
  c->r[3]=c->r[3]+0xFFFFFF64u; // 801DB700
  return; // 801DB704
L_801DB708:;
  c->r[0]=c->r[3]+0x00000388u; // 801DB708
  c->r[3]=0u+0x804B0000u; // 801DB70C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB710
  c->r[3]=c->r[3]+0x00006A50u; // 801DB714
  c->r[3]=R16(c->r[3]+c->r[0]); // 801DB718
  return; // 801DB71C
}

// fn_801DB720
void f_801DB720(Ctx* __restrict c) {
  trace_call(0x801DB720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB720
  c->r[0]=c->lr; // 801DB724
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB728
  c->r[11]=c->r[1]+0x00000030u; // 801DB72C
  c->lr=0x801DB734u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB730
  c->r[27]=c->r[3]|c->r[3]; // 801DB734
  c->lr=0x801DB73Cu; f_801D4108(c); // 801DB738
  cmps(c,0,(int32_t)c->r[3],0); // 801DB73C
  if (crb(c,2)) { goto L_801DB818; } // 801DB740
  cmps(c,0,(int32_t)c->r[27],0); // 801DB744
  if (!crb(c,2)) { goto L_801DB750; } // 801DB748
  goto L_801DB818; // 801DB74C
L_801DB750:;
  c->lr=0x801DB754u; f_801D7CC0(c); // 801DB750
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)112); // 801DB754
  W32(c->r[13]+0xFFFFA0E8u,c->r[3]); // 801DB758
  c->r[25]=0u+0x00000000u; // 801DB75C
  W32(c->r[13]+0xFFFFA0E0u,c->r[27]); // 801DB760
  c->r[26]=0u+0x00000000u; // 801DB764
  c->r[0]=c->r[27]+c->r[0]; // 801DB768
  W32(c->r[13]+0xFFFFA0F0u,c->r[0]); // 801DB76C
  c->r[27]=0u+0x00000000u; // 801DB770
  c->r[28]=0u+0x50000000u; // 801DB774
  c->r[29]=0u+0xFFFFFC40u; // 801DB778
  c->r[30]=0u+0x00000040u; // 801DB77C
  c->r[31]=0u+0x0000007Fu; // 801DB780
  goto L_801DB800; // 801DB784
L_801DB788:;
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DB788
  W32(c->r[3]+c->r[26],c->r[27]); // 801DB78C
  c->r[0]=R32(c->r[13]+0xFFFFA0E0u); // 801DB790
  c->r[3]=c->r[0]+c->r[26]; // 801DB794
  W32(c->r[3]+0x00000004u,c->r[28]); // 801DB798
  W32(c->r[3]+0x00000008u,c->r[27]); // 801DB79C
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 801DB7A0
  W32(c->r[3]+0x00000010u,c->r[29]); // 801DB7A4
  W32(c->r[3]+0x00000014u,c->r[29]); // 801DB7A8
  W32(c->r[3]+0x00000020u,c->r[27]); // 801DB7AC
  W32(c->r[3]+0x00000018u,c->r[30]); // 801DB7B0
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801DB7B4
  W16(c->r[3]+0x0000006Cu,c->r[27]); // 801DB7B8
  W16(c->r[3]+0x00000068u,c->r[27]); // 801DB7BC
  W16(c->r[3]+0x00000064u,c->r[27]); // 801DB7C0
  W16(c->r[3]+0x00000060u,c->r[27]); // 801DB7C4
  W16(c->r[3]+0x0000005Cu,c->r[27]); // 801DB7C8
  W16(c->r[3]+0x00000058u,c->r[27]); // 801DB7CC
  W16(c->r[3]+0x00000054u,c->r[27]); // 801DB7D0
  W16(c->r[3]+0x00000050u,c->r[27]); // 801DB7D4
  W16(c->r[3]+0x0000004Cu,c->r[27]); // 801DB7D8
  W16(c->r[3]+0x00000048u,c->r[27]); // 801DB7DC
  W16(c->r[3]+0x00000044u,c->r[27]); // 801DB7E0
  W16(c->r[3]+0x00000040u,c->r[27]); // 801DB7E4
  W16(c->r[3]+0x0000003Cu,c->r[27]); // 801DB7E8
  c->lr=0x801DB7F0u; f_801DB630(c); // 801DB7EC
  c->r[3]=c->r[25]|c->r[25]; // 801DB7F0
  c->lr=0x801DB7F8u; f_801DEC48(c); // 801DB7F4
  c->r[26]=c->r[26]+0x00000070u; // 801DB7F8
  c->r[25]=c->r[25]+0x00000001u; // 801DB7FC
L_801DB800:;
  c->r[0]=R32(c->r[13]+0xFFFFA0E8u); // 801DB800
  cmpu(c,0,c->r[25],c->r[0]); // 801DB804
  if (crb(c,0)) { IRQCHK(c); goto L_801DB788; } // 801DB808
  c->r[0]=0u+0x00000001u; // 801DB80C
  W32(c->r[13]+0xFFFFA0ECu,c->r[0]); // 801DB810
  W32(c->r[13]+0xFFFFA0E4u,c->r[0]); // 801DB814
L_801DB818:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB818
  c->lr=0x801DB820u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB81C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB820
  c->lr=c->r[0]; // 801DB824
  c->r[1]=c->r[1]+0x00000030u; // 801DB828
  return; // 801DB82C
}

// fn_801DB830
void f_801DB830(Ctx* __restrict c) {
  trace_call(0x801DB830u);
  c->r[0]=0u+0x00000000u; // 801DB830
  W32(c->r[13]+0xFFFFA0E0u,c->r[0]); // 801DB834
  W32(c->r[13]+0xFFFFA0F0u,c->r[0]); // 801DB838
  W32(c->r[13]+0xFFFFA0E4u,c->r[0]); // 801DB83C
  return; // 801DB840
}

// fn_801DB844
void f_801DB844(Ctx* __restrict c) {
  trace_call(0x801DB844u);
  W32(c->r[13]+0xFFFFA0ECu,c->r[3]); // 801DB844
  return; // 801DB848
}

// fn_801DB84C
void f_801DB84C(Ctx* __restrict c) {
  trace_call(0x801DB84Cu);
  c->r[3]=R32(c->r[13]+0xFFFFA0ECu); // 801DB84C
  return; // 801DB850
}

// fn_801DB854
void f_801DB854(Ctx* __restrict c) {
  trace_call(0x801DB854u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB854
  c->r[0]=c->lr; // 801DB858
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB85C
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801DB860
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB864
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB868
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB86C
  c->r[29]=c->r[5]|c->r[5]; // 801DB870
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DB874
  c->r[28]=c->r[3]|c->r[3]; // 801DB878
  c->r[11]=R32(c->r[3]+0x00000018u); // 801DB87C
  c->r[12]=R32(c->r[13]+0xFFFFA0E0u); // 801DB880
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)112); // 801DB884
  c->r[11]=R32(c->r[1]+0x00000028u); // 801DB888
  W32(c->r[12]+c->r[4],c->r[3]); // 801DB88C
  c->r[30]=c->r[12]+c->r[4]; // 801DB890
  c->r[3]=c->r[30]|c->r[30]; // 801DB894
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DB898
  W32(c->r[30]+0x00000008u,c->r[5]); // 801DB89C
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 801DB8A0
  W32(c->r[30]+0x00000010u,c->r[7]); // 801DB8A4
  W32(c->r[30]+0x00000014u,c->r[8]); // 801DB8A8
  W32(c->r[30]+0x00000018u,c->r[9]); // 801DB8AC
  W32(c->r[30]+0x0000001Cu,c->r[10]); // 801DB8B0
  W32(c->r[30]+0x00000020u,c->r[11]); // 801DB8B4
  c->lr=0x801DB8BCu; f_801DB630(c); // 801DB8B8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DB8BC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DB8C0
  if (crb(c,2)) { goto L_801DB8D4; } // 801DB8C4
  c->r[0]=0u+0x00000000u; // 801DB8C8
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 801DB8CC
  goto L_801DB910; // 801DB8D0
L_801DB8D4:;
  cmps(c,0,(int32_t)c->r[29],-904); // 801DB8D4
  if (crb(c,1)) { goto L_801DB8E4; } // 801DB8D8
  c->r[0]=0u+0x00000000u; // 801DB8DC
  goto L_801DB90C; // 801DB8E0
L_801DB8E4:;
  cmps(c,0,(int32_t)c->r[29],60); // 801DB8E4
  if (crb(c,0)) { goto L_801DB8F8; } // 801DB8E8
  c->r[3]=0u+0x00010000u; // 801DB8EC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DB8F0
  goto L_801DB90C; // 801DB8F4
L_801DB8F8:;
  c->r[0]=c->r[29]+0x00000388u; // 801DB8F8
  c->r[3]=0u+0x804B0000u; // 801DB8FC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB900
  c->r[3]=c->r[3]+0x00006A50u; // 801DB904
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DB908
L_801DB90C:;
  W16(c->r[30]+0x0000003Cu,c->r[0]); // 801DB90C
L_801DB910:;
  c->r[0]=R32(c->r[13]+0xFFFFA0ECu); // 801DB910
  c->r[29]=0u+0x00000000u; // 801DB914
  cmps(c,0,(int32_t)c->r[0],3); // 801DB918
  if (crb(c,2)) { goto L_801DC6A4; } // 801DB91C
  if (!crb(c,0)) { goto L_801DCD48; } // 801DB920
  cmps(c,0,(int32_t)c->r[0],0); // 801DB924
  if (crb(c,2)) { goto L_801DB934; } // 801DB928
  if (!crb(c,0)) { goto L_801DBFB4; } // 801DB92C
  goto L_801DCD48; // 801DB930
L_801DB934:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 801DB934
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DB938
  c->r[3]=c->r[3]+c->r[0]; // 801DB93C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DB940
  if (crb(c,1)) { goto L_801DB950; } // 801DB944
  c->r[0]=0u+0x00000000u; // 801DB948
  goto L_801DB978; // 801DB94C
L_801DB950:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DB950
  if (crb(c,0)) { goto L_801DB964; } // 801DB954
  c->r[3]=0u+0x00010000u; // 801DB958
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DB95C
  goto L_801DB978; // 801DB960
L_801DB964:;
  c->r[0]=c->r[3]+0x00000388u; // 801DB964
  c->r[3]=0u+0x804B0000u; // 801DB968
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB96C
  c->r[3]=c->r[3]+0x00006A50u; // 801DB970
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DB974
L_801DB978:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 801DB978
  c->r[3]=R32(c->r[30]+0x00000020u); // 801DB97C
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DB980
  c->r[3]=c->r[3]+c->r[0]; // 801DB984
  cmps(c,0,(int32_t)c->r[3],-904); // 801DB988
  if (crb(c,1)) { goto L_801DB998; } // 801DB98C
  c->r[0]=0u+0x00000000u; // 801DB990
  goto L_801DB9C0; // 801DB994
L_801DB998:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DB998
  if (crb(c,0)) { goto L_801DB9AC; } // 801DB99C
  c->r[3]=0u+0x00010000u; // 801DB9A0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DB9A4
  goto L_801DB9C0; // 801DB9A8
L_801DB9AC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DB9AC
  c->r[3]=0u+0x804B0000u; // 801DB9B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DB9B4
  c->r[3]=c->r[3]+0x00006A50u; // 801DB9B8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DB9BC
L_801DB9C0:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 801DB9C0
  c->r[3]=R32(c->r[30]+0x00000020u); // 801DB9C4
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DB9C8
  c->r[3]=c->r[3]+c->r[0]; // 801DB9CC
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DB9D0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DB9D4
  if (crb(c,1)) { goto L_801DB9E4; } // 801DB9D8
  c->r[0]=0u+0x00000000u; // 801DB9DC
  goto L_801DBA0C; // 801DB9E0
L_801DB9E4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DB9E4
  if (crb(c,0)) { goto L_801DB9F8; } // 801DB9E8
  c->r[3]=0u+0x00010000u; // 801DB9EC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DB9F0
  goto L_801DBA0C; // 801DB9F4
L_801DB9F8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DB9F8
  c->r[3]=0u+0x804B0000u; // 801DB9FC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBA00
  c->r[3]=c->r[3]+0x00006A50u; // 801DBA04
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBA08
L_801DBA0C:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 801DBA0C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DBA10
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DBA14
  if (crb(c,2)) { goto L_801DBAFC; } // 801DBA18
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DBA1C
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBA20
  c->r[3]=c->r[3]+c->r[0]; // 801DBA24
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBA28
  if (crb(c,1)) { goto L_801DBA38; } // 801DBA2C
  c->r[0]=0u+0x00000000u; // 801DBA30
  goto L_801DBA60; // 801DBA34
L_801DBA38:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBA38
  if (crb(c,0)) { goto L_801DBA4C; } // 801DBA3C
  c->r[3]=0u+0x00010000u; // 801DBA40
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBA44
  goto L_801DBA60; // 801DBA48
L_801DBA4C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBA4C
  c->r[3]=0u+0x804B0000u; // 801DBA50
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBA54
  c->r[3]=c->r[3]+0x00006A50u; // 801DBA58
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBA5C
L_801DBA60:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DBA60
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DBA64
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBA68
  c->r[3]=c->r[3]+c->r[0]; // 801DBA6C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBA70
  if (crb(c,1)) { goto L_801DBA80; } // 801DBA74
  c->r[0]=0u+0x00000000u; // 801DBA78
  goto L_801DBAA8; // 801DBA7C
L_801DBA80:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBA80
  if (crb(c,0)) { goto L_801DBA94; } // 801DBA84
  c->r[3]=0u+0x00010000u; // 801DBA88
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBA8C
  goto L_801DBAA8; // 801DBA90
L_801DBA94:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBA94
  c->r[3]=0u+0x804B0000u; // 801DBA98
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBA9C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBAA0
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBAA4
L_801DBAA8:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DBAA8
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DBAAC
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DBAB0
  c->r[3]=c->r[3]+c->r[0]; // 801DBAB4
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBAB8
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBABC
  if (crb(c,1)) { goto L_801DBACC; } // 801DBAC0
  c->r[0]=0u+0x00000000u; // 801DBAC4
  goto L_801DBAF4; // 801DBAC8
L_801DBACC:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBACC
  if (crb(c,0)) { goto L_801DBAE0; } // 801DBAD0
  c->r[3]=0u+0x00010000u; // 801DBAD4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBAD8
  goto L_801DBAF4; // 801DBADC
L_801DBAE0:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBAE0
  c->r[3]=0u+0x804B0000u; // 801DBAE4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBAE8
  c->r[3]=c->r[3]+0x00006A50u; // 801DBAEC
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBAF0
L_801DBAF4:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DBAF4
  goto L_801DBBF0; // 801DBAF8
L_801DBAFC:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBAFC
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBB00
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DBB04
  c->r[0]=c->r[4]+c->r[0]; // 801DBB08
  c->r[3]=c->r[3]+c->r[0]; // 801DBB0C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBB10
  if (crb(c,1)) { goto L_801DBB20; } // 801DBB14
  c->r[0]=0u+0x00000000u; // 801DBB18
  goto L_801DBB48; // 801DBB1C
L_801DBB20:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBB20
  if (crb(c,0)) { goto L_801DBB34; } // 801DBB24
  c->r[3]=0u+0x00010000u; // 801DBB28
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBB2C
  goto L_801DBB48; // 801DBB30
L_801DBB34:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBB34
  c->r[3]=0u+0x804B0000u; // 801DBB38
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBB3C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBB40
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBB44
L_801DBB48:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DBB48
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBB4C
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBB50
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DBB54
  c->r[0]=c->r[4]+c->r[0]; // 801DBB58
  c->r[3]=c->r[3]+c->r[0]; // 801DBB5C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBB60
  if (crb(c,1)) { goto L_801DBB70; } // 801DBB64
  c->r[0]=0u+0x00000000u; // 801DBB68
  goto L_801DBB98; // 801DBB6C
L_801DBB70:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBB70
  if (crb(c,0)) { goto L_801DBB84; } // 801DBB74
  c->r[3]=0u+0x00010000u; // 801DBB78
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBB7C
  goto L_801DBB98; // 801DBB80
L_801DBB84:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBB84
  c->r[3]=0u+0x804B0000u; // 801DBB88
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBB8C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBB90
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBB94
L_801DBB98:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DBB98
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DBB9C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DBBA0
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DBBA4
  c->r[0]=c->r[4]+c->r[0]; // 801DBBA8
  c->r[3]=c->r[0]+c->r[3]; // 801DBBAC
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBBB0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBBB4
  if (crb(c,1)) { goto L_801DBBC4; } // 801DBBB8
  c->r[0]=0u+0x00000000u; // 801DBBBC
  goto L_801DBBEC; // 801DBBC0
L_801DBBC4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBBC4
  if (crb(c,0)) { goto L_801DBBD8; } // 801DBBC8
  c->r[3]=0u+0x00010000u; // 801DBBCC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBBD0
  goto L_801DBBEC; // 801DBBD4
L_801DBBD8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBBD8
  c->r[3]=0u+0x804B0000u; // 801DBBDC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBBE0
  c->r[3]=c->r[3]+0x00006A50u; // 801DBBE4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBBE8
L_801DBBEC:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DBBEC
L_801DBBF0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DBBF0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DBBF4
  if (crb(c,2)) { goto L_801DBCDC; } // 801DBBF8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DBBFC
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBC00
  c->r[3]=c->r[3]+c->r[0]; // 801DBC04
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBC08
  if (crb(c,1)) { goto L_801DBC18; } // 801DBC0C
  c->r[0]=0u+0x00000000u; // 801DBC10
  goto L_801DBC40; // 801DBC14
L_801DBC18:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBC18
  if (crb(c,0)) { goto L_801DBC2C; } // 801DBC1C
  c->r[3]=0u+0x00010000u; // 801DBC20
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBC24
  goto L_801DBC40; // 801DBC28
L_801DBC2C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBC2C
  c->r[3]=0u+0x804B0000u; // 801DBC30
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBC34
  c->r[3]=c->r[3]+0x00006A50u; // 801DBC38
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBC3C
L_801DBC40:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DBC40
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DBC44
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBC48
  c->r[3]=c->r[3]+c->r[0]; // 801DBC4C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBC50
  if (crb(c,1)) { goto L_801DBC60; } // 801DBC54
  c->r[0]=0u+0x00000000u; // 801DBC58
  goto L_801DBC88; // 801DBC5C
L_801DBC60:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBC60
  if (crb(c,0)) { goto L_801DBC74; } // 801DBC64
  c->r[3]=0u+0x00010000u; // 801DBC68
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBC6C
  goto L_801DBC88; // 801DBC70
L_801DBC74:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBC74
  c->r[3]=0u+0x804B0000u; // 801DBC78
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBC7C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBC80
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBC84
L_801DBC88:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DBC88
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DBC8C
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DBC90
  c->r[3]=c->r[3]+c->r[0]; // 801DBC94
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBC98
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBC9C
  if (crb(c,1)) { goto L_801DBCAC; } // 801DBCA0
  c->r[0]=0u+0x00000000u; // 801DBCA4
  goto L_801DBCD4; // 801DBCA8
L_801DBCAC:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBCAC
  if (crb(c,0)) { goto L_801DBCC0; } // 801DBCB0
  c->r[3]=0u+0x00010000u; // 801DBCB4
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBCB8
  goto L_801DBCD4; // 801DBCBC
L_801DBCC0:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBCC0
  c->r[3]=0u+0x804B0000u; // 801DBCC4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBCC8
  c->r[3]=c->r[3]+0x00006A50u; // 801DBCCC
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBCD0
L_801DBCD4:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DBCD4
  goto L_801DBDD0; // 801DBCD8
L_801DBCDC:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBCDC
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBCE0
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DBCE4
  c->r[0]=c->r[4]+c->r[0]; // 801DBCE8
  c->r[3]=c->r[3]+c->r[0]; // 801DBCEC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBCF0
  if (crb(c,1)) { goto L_801DBD00; } // 801DBCF4
  c->r[0]=0u+0x00000000u; // 801DBCF8
  goto L_801DBD28; // 801DBCFC
L_801DBD00:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBD00
  if (crb(c,0)) { goto L_801DBD14; } // 801DBD04
  c->r[3]=0u+0x00010000u; // 801DBD08
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBD0C
  goto L_801DBD28; // 801DBD10
L_801DBD14:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBD14
  c->r[3]=0u+0x804B0000u; // 801DBD18
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBD1C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBD20
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBD24
L_801DBD28:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DBD28
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBD2C
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBD30
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DBD34
  c->r[0]=c->r[4]+c->r[0]; // 801DBD38
  c->r[3]=c->r[3]+c->r[0]; // 801DBD3C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBD40
  if (crb(c,1)) { goto L_801DBD50; } // 801DBD44
  c->r[0]=0u+0x00000000u; // 801DBD48
  goto L_801DBD78; // 801DBD4C
L_801DBD50:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBD50
  if (crb(c,0)) { goto L_801DBD64; } // 801DBD54
  c->r[3]=0u+0x00010000u; // 801DBD58
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBD5C
  goto L_801DBD78; // 801DBD60
L_801DBD64:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBD64
  c->r[3]=0u+0x804B0000u; // 801DBD68
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBD6C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBD70
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBD74
L_801DBD78:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DBD78
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DBD7C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DBD80
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DBD84
  c->r[0]=c->r[4]+c->r[0]; // 801DBD88
  c->r[3]=c->r[0]+c->r[3]; // 801DBD8C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBD90
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBD94
  if (crb(c,1)) { goto L_801DBDA4; } // 801DBD98
  c->r[0]=0u+0x00000000u; // 801DBD9C
  goto L_801DBDCC; // 801DBDA0
L_801DBDA4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBDA4
  if (crb(c,0)) { goto L_801DBDB8; } // 801DBDA8
  c->r[3]=0u+0x00010000u; // 801DBDAC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBDB0
  goto L_801DBDCC; // 801DBDB4
L_801DBDB8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBDB8
  c->r[3]=0u+0x804B0000u; // 801DBDBC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBDC0
  c->r[3]=c->r[3]+0x00006A50u; // 801DBDC4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBDC8
L_801DBDCC:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DBDCC
L_801DBDD0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DBDD0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DBDD4
  if (crb(c,2)) { goto L_801DBEBC; } // 801DBDD8
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DBDDC
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBDE0
  c->r[3]=c->r[3]+c->r[0]; // 801DBDE4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBDE8
  if (crb(c,1)) { goto L_801DBDF8; } // 801DBDEC
  c->r[0]=0u+0x00000000u; // 801DBDF0
  goto L_801DBE20; // 801DBDF4
L_801DBDF8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBDF8
  if (crb(c,0)) { goto L_801DBE0C; } // 801DBDFC
  c->r[3]=0u+0x00010000u; // 801DBE00
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBE04
  goto L_801DBE20; // 801DBE08
L_801DBE0C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBE0C
  c->r[3]=0u+0x804B0000u; // 801DBE10
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBE14
  c->r[3]=c->r[3]+0x00006A50u; // 801DBE18
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBE1C
L_801DBE20:;
  W16(c->r[30]+0x00000064u,c->r[0]); // 801DBE20
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DBE24
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801DBE28
  c->r[3]=c->r[3]+c->r[0]; // 801DBE2C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBE30
  if (crb(c,1)) { goto L_801DBE40; } // 801DBE34
  c->r[0]=0u+0x00000000u; // 801DBE38
  goto L_801DBE68; // 801DBE3C
L_801DBE40:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBE40
  if (crb(c,0)) { goto L_801DBE54; } // 801DBE44
  c->r[3]=0u+0x00010000u; // 801DBE48
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBE4C
  goto L_801DBE68; // 801DBE50
L_801DBE54:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBE54
  c->r[3]=0u+0x804B0000u; // 801DBE58
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBE5C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBE60
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBE64
L_801DBE68:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DBE68
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DBE6C
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DBE70
  c->r[3]=c->r[3]+c->r[0]; // 801DBE74
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBE78
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBE7C
  if (crb(c,1)) { goto L_801DBE8C; } // 801DBE80
  c->r[0]=0u+0x00000000u; // 801DBE84
  goto L_801DBEB4; // 801DBE88
L_801DBE8C:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBE8C
  if (crb(c,0)) { goto L_801DBEA0; } // 801DBE90
  c->r[3]=0u+0x00010000u; // 801DBE94
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBE98
  goto L_801DBEB4; // 801DBE9C
L_801DBEA0:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBEA0
  c->r[3]=0u+0x804B0000u; // 801DBEA4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBEA8
  c->r[3]=c->r[3]+0x00006A50u; // 801DBEAC
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBEB0
L_801DBEB4:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DBEB4
  goto L_801DCD48; // 801DBEB8
L_801DBEBC:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBEBC
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBEC0
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DBEC4
  c->r[0]=c->r[4]+c->r[0]; // 801DBEC8
  c->r[3]=c->r[3]+c->r[0]; // 801DBECC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBED0
  if (crb(c,1)) { goto L_801DBEE0; } // 801DBED4
  c->r[0]=0u+0x00000000u; // 801DBED8
  goto L_801DBF08; // 801DBEDC
L_801DBEE0:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBEE0
  if (crb(c,0)) { goto L_801DBEF4; } // 801DBEE4
  c->r[3]=0u+0x00010000u; // 801DBEE8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBEEC
  goto L_801DBF08; // 801DBEF0
L_801DBEF4:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBEF4
  c->r[3]=0u+0x804B0000u; // 801DBEF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBEFC
  c->r[3]=c->r[3]+0x00006A50u; // 801DBF00
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBF04
L_801DBF08:;
  W16(c->r[30]+0x00000064u,c->r[0]); // 801DBF08
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBF0C
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBF10
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DBF14
  c->r[0]=c->r[4]+c->r[0]; // 801DBF18
  c->r[3]=c->r[3]+c->r[0]; // 801DBF1C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBF20
  if (crb(c,1)) { goto L_801DBF30; } // 801DBF24
  c->r[0]=0u+0x00000000u; // 801DBF28
  goto L_801DBF58; // 801DBF2C
L_801DBF30:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBF30
  if (crb(c,0)) { goto L_801DBF44; } // 801DBF34
  c->r[3]=0u+0x00010000u; // 801DBF38
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBF3C
  goto L_801DBF58; // 801DBF40
L_801DBF44:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBF44
  c->r[3]=0u+0x804B0000u; // 801DBF48
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBF4C
  c->r[3]=c->r[3]+0x00006A50u; // 801DBF50
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBF54
L_801DBF58:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DBF58
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DBF5C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DBF60
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DBF64
  c->r[0]=c->r[4]+c->r[0]; // 801DBF68
  c->r[3]=c->r[0]+c->r[3]; // 801DBF6C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DBF70
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBF74
  if (crb(c,1)) { goto L_801DBF84; } // 801DBF78
  c->r[0]=0u+0x00000000u; // 801DBF7C
  goto L_801DBFAC; // 801DBF80
L_801DBF84:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBF84
  if (crb(c,0)) { goto L_801DBF98; } // 801DBF88
  c->r[3]=0u+0x00010000u; // 801DBF8C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBF90
  goto L_801DBFAC; // 801DBF94
L_801DBF98:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBF98
  c->r[3]=0u+0x804B0000u; // 801DBF9C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBFA0
  c->r[3]=c->r[3]+0x00006A50u; // 801DBFA4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBFA8
L_801DBFAC:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DBFAC
  goto L_801DCD48; // 801DBFB0
L_801DBFB4:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DBFB4
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DBFB8
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DBFBC
  c->r[0]=c->r[4]+c->r[0]; // 801DBFC0
  c->r[3]=c->r[3]+c->r[0]; // 801DBFC4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DBFC8
  if (crb(c,1)) { goto L_801DBFD8; } // 801DBFCC
  c->r[0]=0u+0x00000000u; // 801DBFD0
  goto L_801DC000; // 801DBFD4
L_801DBFD8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DBFD8
  if (crb(c,0)) { goto L_801DBFEC; } // 801DBFDC
  c->r[3]=0u+0x00010000u; // 801DBFE0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DBFE4
  goto L_801DC000; // 801DBFE8
L_801DBFEC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DBFEC
  c->r[3]=0u+0x804B0000u; // 801DBFF0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DBFF4
  c->r[3]=c->r[3]+0x00006A50u; // 801DBFF8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBFFC
L_801DC000:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 801DC000
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC004
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DC008
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC00C
  c->r[0]=c->r[4]+c->r[0]; // 801DC010
  c->r[3]=c->r[3]+c->r[0]; // 801DC014
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC018
  if (crb(c,1)) { goto L_801DC028; } // 801DC01C
  c->r[0]=0u+0x00000000u; // 801DC020
  goto L_801DC050; // 801DC024
L_801DC028:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC028
  if (crb(c,0)) { goto L_801DC03C; } // 801DC02C
  c->r[3]=0u+0x00010000u; // 801DC030
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC034
  goto L_801DC050; // 801DC038
L_801DC03C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC03C
  c->r[3]=0u+0x804B0000u; // 801DC040
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC044
  c->r[3]=c->r[3]+0x00006A50u; // 801DC048
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC04C
L_801DC050:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 801DC050
  c->r[3]=R32(c->r[30]+0x00000020u); // 801DC054
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DC058
  c->r[3]=c->r[3]+c->r[0]; // 801DC05C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC060
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC064
  if (crb(c,1)) { goto L_801DC074; } // 801DC068
  c->r[0]=0u+0x00000000u; // 801DC06C
  goto L_801DC09C; // 801DC070
L_801DC074:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC074
  if (crb(c,0)) { goto L_801DC088; } // 801DC078
  c->r[3]=0u+0x00010000u; // 801DC07C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC080
  goto L_801DC09C; // 801DC084
L_801DC088:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC088
  c->r[3]=0u+0x804B0000u; // 801DC08C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC090
  c->r[3]=c->r[3]+0x00006A50u; // 801DC094
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC098
L_801DC09C:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 801DC09C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DC0A0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DC0A4
  if (crb(c,2)) { goto L_801DC19C; } // 801DC0A8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC0AC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC0B0
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC0B4
  c->r[0]=c->r[4]+c->r[0]; // 801DC0B8
  c->r[3]=c->r[3]+c->r[0]; // 801DC0BC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC0C0
  if (crb(c,1)) { goto L_801DC0D0; } // 801DC0C4
  c->r[0]=0u+0x00000000u; // 801DC0C8
  goto L_801DC0F8; // 801DC0CC
L_801DC0D0:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC0D0
  if (crb(c,0)) { goto L_801DC0E4; } // 801DC0D4
  c->r[3]=0u+0x00010000u; // 801DC0D8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC0DC
  goto L_801DC0F8; // 801DC0E0
L_801DC0E4:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC0E4
  c->r[3]=0u+0x804B0000u; // 801DC0E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC0EC
  c->r[3]=c->r[3]+0x00006A50u; // 801DC0F0
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC0F4
L_801DC0F8:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DC0F8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC0FC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC100
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC104
  c->r[0]=c->r[4]+c->r[0]; // 801DC108
  c->r[3]=c->r[3]+c->r[0]; // 801DC10C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC110
  if (crb(c,1)) { goto L_801DC120; } // 801DC114
  c->r[0]=0u+0x00000000u; // 801DC118
  goto L_801DC148; // 801DC11C
L_801DC120:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC120
  if (crb(c,0)) { goto L_801DC134; } // 801DC124
  c->r[3]=0u+0x00010000u; // 801DC128
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC12C
  goto L_801DC148; // 801DC130
L_801DC134:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC134
  c->r[3]=0u+0x804B0000u; // 801DC138
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC13C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC140
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC144
L_801DC148:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DC148
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DC14C
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DC150
  c->r[3]=c->r[3]+c->r[0]; // 801DC154
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC158
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC15C
  if (crb(c,1)) { goto L_801DC16C; } // 801DC160
  c->r[0]=0u+0x00000000u; // 801DC164
  goto L_801DC194; // 801DC168
L_801DC16C:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC16C
  if (crb(c,0)) { goto L_801DC180; } // 801DC170
  c->r[3]=0u+0x00010000u; // 801DC174
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC178
  goto L_801DC194; // 801DC17C
L_801DC180:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC180
  c->r[3]=0u+0x804B0000u; // 801DC184
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC188
  c->r[3]=c->r[3]+0x00006A50u; // 801DC18C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC190
L_801DC194:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DC194
  goto L_801DC2A0; // 801DC198
L_801DC19C:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC19C
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC1A0
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC1A4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC1A8
  c->r[3]=c->r[5]+c->r[3]; // 801DC1AC
  c->r[0]=c->r[4]+c->r[0]; // 801DC1B0
  c->r[3]=c->r[3]+c->r[0]; // 801DC1B4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC1B8
  if (crb(c,1)) { goto L_801DC1C8; } // 801DC1BC
  c->r[0]=0u+0x00000000u; // 801DC1C0
  goto L_801DC1F0; // 801DC1C4
L_801DC1C8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC1C8
  if (crb(c,0)) { goto L_801DC1DC; } // 801DC1CC
  c->r[3]=0u+0x00010000u; // 801DC1D0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC1D4
  goto L_801DC1F0; // 801DC1D8
L_801DC1DC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC1DC
  c->r[3]=0u+0x804B0000u; // 801DC1E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC1E4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC1E8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC1EC
L_801DC1F0:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DC1F0
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC1F4
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC1F8
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC1FC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC200
  c->r[3]=c->r[5]+c->r[3]; // 801DC204
  c->r[0]=c->r[4]+c->r[0]; // 801DC208
  c->r[3]=c->r[3]+c->r[0]; // 801DC20C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC210
  if (crb(c,1)) { goto L_801DC220; } // 801DC214
  c->r[0]=0u+0x00000000u; // 801DC218
  goto L_801DC248; // 801DC21C
L_801DC220:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC220
  if (crb(c,0)) { goto L_801DC234; } // 801DC224
  c->r[3]=0u+0x00010000u; // 801DC228
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC22C
  goto L_801DC248; // 801DC230
L_801DC234:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC234
  c->r[3]=0u+0x804B0000u; // 801DC238
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC23C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC240
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC244
L_801DC248:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DC248
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC24C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC250
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DC254
  c->r[0]=c->r[4]+c->r[0]; // 801DC258
  c->r[3]=c->r[0]+c->r[3]; // 801DC25C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC260
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC264
  if (crb(c,1)) { goto L_801DC274; } // 801DC268
  c->r[0]=0u+0x00000000u; // 801DC26C
  goto L_801DC29C; // 801DC270
L_801DC274:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC274
  if (crb(c,0)) { goto L_801DC288; } // 801DC278
  c->r[3]=0u+0x00010000u; // 801DC27C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC280
  goto L_801DC29C; // 801DC284
L_801DC288:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC288
  c->r[3]=0u+0x804B0000u; // 801DC28C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC290
  c->r[3]=c->r[3]+0x00006A50u; // 801DC294
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC298
L_801DC29C:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DC29C
L_801DC2A0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DC2A0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DC2A4
  if (crb(c,2)) { goto L_801DC39C; } // 801DC2A8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC2AC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DC2B0
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC2B4
  c->r[0]=c->r[4]+c->r[0]; // 801DC2B8
  c->r[3]=c->r[3]+c->r[0]; // 801DC2BC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC2C0
  if (crb(c,1)) { goto L_801DC2D0; } // 801DC2C4
  c->r[0]=0u+0x00000000u; // 801DC2C8
  goto L_801DC2F8; // 801DC2CC
L_801DC2D0:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC2D0
  if (crb(c,0)) { goto L_801DC2E4; } // 801DC2D4
  c->r[3]=0u+0x00010000u; // 801DC2D8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC2DC
  goto L_801DC2F8; // 801DC2E0
L_801DC2E4:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC2E4
  c->r[3]=0u+0x804B0000u; // 801DC2E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC2EC
  c->r[3]=c->r[3]+0x00006A50u; // 801DC2F0
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC2F4
L_801DC2F8:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DC2F8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC2FC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DC300
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC304
  c->r[0]=c->r[4]+c->r[0]; // 801DC308
  c->r[3]=c->r[3]+c->r[0]; // 801DC30C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC310
  if (crb(c,1)) { goto L_801DC320; } // 801DC314
  c->r[0]=0u+0x00000000u; // 801DC318
  goto L_801DC348; // 801DC31C
L_801DC320:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC320
  if (crb(c,0)) { goto L_801DC334; } // 801DC324
  c->r[3]=0u+0x00010000u; // 801DC328
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC32C
  goto L_801DC348; // 801DC330
L_801DC334:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC334
  c->r[3]=0u+0x804B0000u; // 801DC338
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC33C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC340
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC344
L_801DC348:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DC348
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DC34C
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DC350
  c->r[3]=c->r[3]+c->r[0]; // 801DC354
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC358
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC35C
  if (crb(c,1)) { goto L_801DC36C; } // 801DC360
  c->r[0]=0u+0x00000000u; // 801DC364
  goto L_801DC394; // 801DC368
L_801DC36C:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC36C
  if (crb(c,0)) { goto L_801DC380; } // 801DC370
  c->r[3]=0u+0x00010000u; // 801DC374
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC378
  goto L_801DC394; // 801DC37C
L_801DC380:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC380
  c->r[3]=0u+0x804B0000u; // 801DC384
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC388
  c->r[3]=c->r[3]+0x00006A50u; // 801DC38C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC390
L_801DC394:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DC394
  goto L_801DC4A0; // 801DC398
L_801DC39C:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC39C
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC3A0
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC3A4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DC3A8
  c->r[3]=c->r[5]+c->r[3]; // 801DC3AC
  c->r[0]=c->r[4]+c->r[0]; // 801DC3B0
  c->r[3]=c->r[3]+c->r[0]; // 801DC3B4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC3B8
  if (crb(c,1)) { goto L_801DC3C8; } // 801DC3BC
  c->r[0]=0u+0x00000000u; // 801DC3C0
  goto L_801DC3F0; // 801DC3C4
L_801DC3C8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC3C8
  if (crb(c,0)) { goto L_801DC3DC; } // 801DC3CC
  c->r[3]=0u+0x00010000u; // 801DC3D0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC3D4
  goto L_801DC3F0; // 801DC3D8
L_801DC3DC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC3DC
  c->r[3]=0u+0x804B0000u; // 801DC3E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC3E4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC3E8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC3EC
L_801DC3F0:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DC3F0
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC3F4
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC3F8
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC3FC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DC400
  c->r[3]=c->r[5]+c->r[3]; // 801DC404
  c->r[0]=c->r[4]+c->r[0]; // 801DC408
  c->r[3]=c->r[3]+c->r[0]; // 801DC40C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC410
  if (crb(c,1)) { goto L_801DC420; } // 801DC414
  c->r[0]=0u+0x00000000u; // 801DC418
  goto L_801DC448; // 801DC41C
L_801DC420:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC420
  if (crb(c,0)) { goto L_801DC434; } // 801DC424
  c->r[3]=0u+0x00010000u; // 801DC428
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC42C
  goto L_801DC448; // 801DC430
L_801DC434:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC434
  c->r[3]=0u+0x804B0000u; // 801DC438
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC43C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC440
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC444
L_801DC448:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DC448
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC44C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DC450
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DC454
  c->r[0]=c->r[4]+c->r[0]; // 801DC458
  c->r[3]=c->r[0]+c->r[3]; // 801DC45C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC460
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC464
  if (crb(c,1)) { goto L_801DC474; } // 801DC468
  c->r[0]=0u+0x00000000u; // 801DC46C
  goto L_801DC49C; // 801DC470
L_801DC474:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC474
  if (crb(c,0)) { goto L_801DC488; } // 801DC478
  c->r[3]=0u+0x00010000u; // 801DC47C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC480
  goto L_801DC49C; // 801DC484
L_801DC488:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC488
  c->r[3]=0u+0x804B0000u; // 801DC48C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC490
  c->r[3]=c->r[3]+0x00006A50u; // 801DC494
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC498
L_801DC49C:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DC49C
L_801DC4A0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DC4A0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DC4A4
  if (crb(c,2)) { goto L_801DC59C; } // 801DC4A8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC4AC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DC4B0
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC4B4
  c->r[0]=c->r[4]+c->r[0]; // 801DC4B8
  c->r[3]=c->r[3]+c->r[0]; // 801DC4BC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC4C0
  if (crb(c,1)) { goto L_801DC4D0; } // 801DC4C4
  c->r[0]=0u+0x00000000u; // 801DC4C8
  goto L_801DC4F8; // 801DC4CC
L_801DC4D0:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC4D0
  if (crb(c,0)) { goto L_801DC4E4; } // 801DC4D4
  c->r[3]=0u+0x00010000u; // 801DC4D8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC4DC
  goto L_801DC4F8; // 801DC4E0
L_801DC4E4:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC4E4
  c->r[3]=0u+0x804B0000u; // 801DC4E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC4EC
  c->r[3]=c->r[3]+0x00006A50u; // 801DC4F0
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC4F4
L_801DC4F8:;
  W16(c->r[30]+0x00000064u,c->r[0]); // 801DC4F8
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC4FC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DC500
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC504
  c->r[0]=c->r[4]+c->r[0]; // 801DC508
  c->r[3]=c->r[3]+c->r[0]; // 801DC50C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC510
  if (crb(c,1)) { goto L_801DC520; } // 801DC514
  c->r[0]=0u+0x00000000u; // 801DC518
  goto L_801DC548; // 801DC51C
L_801DC520:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC520
  if (crb(c,0)) { goto L_801DC534; } // 801DC524
  c->r[3]=0u+0x00010000u; // 801DC528
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC52C
  goto L_801DC548; // 801DC530
L_801DC534:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC534
  c->r[3]=0u+0x804B0000u; // 801DC538
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC53C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC540
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC544
L_801DC548:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DC548
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DC54C
  c->r[0]=R32(c->r[30]+0x00000030u); // 801DC550
  c->r[3]=c->r[3]+c->r[0]; // 801DC554
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC558
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC55C
  if (crb(c,1)) { goto L_801DC56C; } // 801DC560
  c->r[0]=0u+0x00000000u; // 801DC564
  goto L_801DC594; // 801DC568
L_801DC56C:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC56C
  if (crb(c,0)) { goto L_801DC580; } // 801DC570
  c->r[3]=0u+0x00010000u; // 801DC574
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC578
  goto L_801DC594; // 801DC57C
L_801DC580:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC580
  c->r[3]=0u+0x804B0000u; // 801DC584
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC588
  c->r[3]=c->r[3]+0x00006A50u; // 801DC58C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC590
L_801DC594:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DC594
  goto L_801DCD48; // 801DC598
L_801DC59C:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC59C
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC5A0
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC5A4
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DC5A8
  c->r[3]=c->r[5]+c->r[3]; // 801DC5AC
  c->r[0]=c->r[4]+c->r[0]; // 801DC5B0
  c->r[3]=c->r[3]+c->r[0]; // 801DC5B4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC5B8
  if (crb(c,1)) { goto L_801DC5C8; } // 801DC5BC
  c->r[0]=0u+0x00000000u; // 801DC5C0
  goto L_801DC5F0; // 801DC5C4
L_801DC5C8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC5C8
  if (crb(c,0)) { goto L_801DC5DC; } // 801DC5CC
  c->r[3]=0u+0x00010000u; // 801DC5D0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC5D4
  goto L_801DC5F0; // 801DC5D8
L_801DC5DC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC5DC
  c->r[3]=0u+0x804B0000u; // 801DC5E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC5E4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC5E8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC5EC
L_801DC5F0:;
  W16(c->r[30]+0x00000064u,c->r[0]); // 801DC5F0
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC5F4
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC5F8
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC5FC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DC600
  c->r[3]=c->r[5]+c->r[3]; // 801DC604
  c->r[0]=c->r[4]+c->r[0]; // 801DC608
  c->r[3]=c->r[3]+c->r[0]; // 801DC60C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC610
  if (crb(c,1)) { goto L_801DC620; } // 801DC614
  c->r[0]=0u+0x00000000u; // 801DC618
  goto L_801DC648; // 801DC61C
L_801DC620:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC620
  if (crb(c,0)) { goto L_801DC634; } // 801DC624
  c->r[3]=0u+0x00010000u; // 801DC628
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC62C
  goto L_801DC648; // 801DC630
L_801DC634:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC634
  c->r[3]=0u+0x804B0000u; // 801DC638
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC63C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC640
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC644
L_801DC648:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DC648
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC64C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DC650
  c->r[3]=R32(c->r[30]+0x00000030u); // 801DC654
  c->r[0]=c->r[4]+c->r[0]; // 801DC658
  c->r[3]=c->r[0]+c->r[3]; // 801DC65C
  c->r[3]=c->r[3]+0xFFFFFFE2u; // 801DC660
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC664
  if (crb(c,1)) { goto L_801DC674; } // 801DC668
  c->r[0]=0u+0x00000000u; // 801DC66C
  goto L_801DC69C; // 801DC670
L_801DC674:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC674
  if (crb(c,0)) { goto L_801DC688; } // 801DC678
  c->r[3]=0u+0x00010000u; // 801DC67C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC680
  goto L_801DC69C; // 801DC684
L_801DC688:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC688
  c->r[3]=0u+0x804B0000u; // 801DC68C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC690
  c->r[3]=c->r[3]+0x00006A50u; // 801DC694
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC698
L_801DC69C:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DC69C
  goto L_801DCD48; // 801DC6A0
L_801DC6A4:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC6A4
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DC6A8
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC6AC
  c->r[0]=c->r[4]+c->r[0]; // 801DC6B0
  c->r[3]=c->r[3]+c->r[0]; // 801DC6B4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC6B8
  if (crb(c,1)) { goto L_801DC6C8; } // 801DC6BC
  c->r[0]=0u+0x00000000u; // 801DC6C0
  goto L_801DC6F0; // 801DC6C4
L_801DC6C8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC6C8
  if (crb(c,0)) { goto L_801DC6DC; } // 801DC6CC
  c->r[3]=0u+0x00010000u; // 801DC6D0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC6D4
  goto L_801DC6F0; // 801DC6D8
L_801DC6DC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC6DC
  c->r[3]=0u+0x804B0000u; // 801DC6E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC6E4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC6E8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC6EC
L_801DC6F0:;
  W16(c->r[30]+0x00000040u,c->r[0]); // 801DC6F0
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC6F4
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DC6F8
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC6FC
  c->r[0]=c->r[4]+c->r[0]; // 801DC700
  c->r[3]=c->r[3]+c->r[0]; // 801DC704
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC708
  if (crb(c,1)) { goto L_801DC718; } // 801DC70C
  c->r[0]=0u+0x00000000u; // 801DC710
  goto L_801DC740; // 801DC714
L_801DC718:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC718
  if (crb(c,0)) { goto L_801DC72C; } // 801DC71C
  c->r[3]=0u+0x00010000u; // 801DC720
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC724
  goto L_801DC740; // 801DC728
L_801DC72C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC72C
  c->r[3]=0u+0x804B0000u; // 801DC730
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC734
  c->r[3]=c->r[3]+0x00006A50u; // 801DC738
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC73C
L_801DC740:;
  W16(c->r[30]+0x00000044u,c->r[0]); // 801DC740
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DC744
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DC748
  c->r[3]=R32(c->r[30]+0x00000034u); // 801DC74C
  c->r[0]=c->r[4]+c->r[0]; // 801DC750
  c->r[3]=c->r[3]+c->r[0]; // 801DC754
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC758
  if (crb(c,1)) { goto L_801DC768; } // 801DC75C
  c->r[0]=0u+0x00000000u; // 801DC760
  goto L_801DC790; // 801DC764
L_801DC768:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC768
  if (crb(c,0)) { goto L_801DC77C; } // 801DC76C
  c->r[3]=0u+0x00010000u; // 801DC770
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC774
  goto L_801DC790; // 801DC778
L_801DC77C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC77C
  c->r[3]=0u+0x804B0000u; // 801DC780
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC784
  c->r[3]=c->r[3]+0x00006A50u; // 801DC788
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC78C
L_801DC790:;
  W16(c->r[30]+0x00000048u,c->r[0]); // 801DC790
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DC794
  c->r[0]=R32(c->r[30]+0x00000020u); // 801DC798
  c->r[3]=R32(c->r[30]+0x00000038u); // 801DC79C
  c->r[0]=c->r[4]+c->r[0]; // 801DC7A0
  c->r[3]=c->r[3]+c->r[0]; // 801DC7A4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC7A8
  if (crb(c,1)) { goto L_801DC7B8; } // 801DC7AC
  c->r[0]=0u+0x00000000u; // 801DC7B0
  goto L_801DC7E0; // 801DC7B4
L_801DC7B8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC7B8
  if (crb(c,0)) { goto L_801DC7CC; } // 801DC7BC
  c->r[3]=0u+0x00010000u; // 801DC7C0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC7C4
  goto L_801DC7E0; // 801DC7C8
L_801DC7CC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC7CC
  c->r[3]=0u+0x804B0000u; // 801DC7D0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC7D4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC7D8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC7DC
L_801DC7E0:;
  W16(c->r[30]+0x00000064u,c->r[0]); // 801DC7E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DC7E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DC7E8
  if (crb(c,2)) { goto L_801DC934; } // 801DC7EC
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC7F0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC7F4
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC7F8
  c->r[0]=c->r[4]+c->r[0]; // 801DC7FC
  c->r[3]=c->r[3]+c->r[0]; // 801DC800
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC804
  if (crb(c,1)) { goto L_801DC814; } // 801DC808
  c->r[0]=0u+0x00000000u; // 801DC80C
  goto L_801DC83C; // 801DC810
L_801DC814:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC814
  if (crb(c,0)) { goto L_801DC828; } // 801DC818
  c->r[3]=0u+0x00010000u; // 801DC81C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC820
  goto L_801DC83C; // 801DC824
L_801DC828:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC828
  c->r[3]=0u+0x804B0000u; // 801DC82C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC830
  c->r[3]=c->r[3]+0x00006A50u; // 801DC834
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC838
L_801DC83C:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DC83C
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DC840
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC844
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC848
  c->r[0]=c->r[4]+c->r[0]; // 801DC84C
  c->r[3]=c->r[3]+c->r[0]; // 801DC850
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC854
  if (crb(c,1)) { goto L_801DC864; } // 801DC858
  c->r[0]=0u+0x00000000u; // 801DC85C
  goto L_801DC88C; // 801DC860
L_801DC864:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC864
  if (crb(c,0)) { goto L_801DC878; } // 801DC868
  c->r[3]=0u+0x00010000u; // 801DC86C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC870
  goto L_801DC88C; // 801DC874
L_801DC878:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC878
  c->r[3]=0u+0x804B0000u; // 801DC87C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC880
  c->r[3]=c->r[3]+0x00006A50u; // 801DC884
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC888
L_801DC88C:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DC88C
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DC890
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC894
  c->r[3]=R32(c->r[30]+0x00000034u); // 801DC898
  c->r[0]=c->r[4]+c->r[0]; // 801DC89C
  c->r[3]=c->r[3]+c->r[0]; // 801DC8A0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC8A4
  if (crb(c,1)) { goto L_801DC8B4; } // 801DC8A8
  c->r[0]=0u+0x00000000u; // 801DC8AC
  goto L_801DC8DC; // 801DC8B0
L_801DC8B4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC8B4
  if (crb(c,0)) { goto L_801DC8C8; } // 801DC8B8
  c->r[3]=0u+0x00010000u; // 801DC8BC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC8C0
  goto L_801DC8DC; // 801DC8C4
L_801DC8C8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC8C8
  c->r[3]=0u+0x804B0000u; // 801DC8CC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC8D0
  c->r[3]=c->r[3]+0x00006A50u; // 801DC8D4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC8D8
L_801DC8DC:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DC8DC
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DC8E0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC8E4
  c->r[3]=R32(c->r[30]+0x00000038u); // 801DC8E8
  c->r[0]=c->r[4]+c->r[0]; // 801DC8EC
  c->r[3]=c->r[3]+c->r[0]; // 801DC8F0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC8F4
  if (crb(c,1)) { goto L_801DC904; } // 801DC8F8
  c->r[0]=0u+0x00000000u; // 801DC8FC
  goto L_801DC92C; // 801DC900
L_801DC904:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC904
  if (crb(c,0)) { goto L_801DC918; } // 801DC908
  c->r[3]=0u+0x00010000u; // 801DC90C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC910
  goto L_801DC92C; // 801DC914
L_801DC918:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC918
  c->r[3]=0u+0x804B0000u; // 801DC91C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC920
  c->r[3]=c->r[3]+0x00006A50u; // 801DC924
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC928
L_801DC92C:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DC92C
  goto L_801DCA94; // 801DC930
L_801DC934:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC934
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DC938
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC93C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC940
  c->r[3]=c->r[5]+c->r[3]; // 801DC944
  c->r[0]=c->r[4]+c->r[0]; // 801DC948
  c->r[3]=c->r[3]+c->r[0]; // 801DC94C
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC950
  if (crb(c,1)) { goto L_801DC960; } // 801DC954
  c->r[0]=0u+0x00000000u; // 801DC958
  goto L_801DC988; // 801DC95C
L_801DC960:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC960
  if (crb(c,0)) { goto L_801DC974; } // 801DC964
  c->r[3]=0u+0x00010000u; // 801DC968
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC96C
  goto L_801DC988; // 801DC970
L_801DC974:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC974
  c->r[3]=0u+0x804B0000u; // 801DC978
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC97C
  c->r[3]=c->r[3]+0x00006A50u; // 801DC980
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC984
L_801DC988:;
  W16(c->r[30]+0x0000004Cu,c->r[0]); // 801DC988
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DC98C
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DC990
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC994
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC998
  c->r[3]=c->r[5]+c->r[3]; // 801DC99C
  c->r[0]=c->r[4]+c->r[0]; // 801DC9A0
  c->r[3]=c->r[3]+c->r[0]; // 801DC9A4
  cmps(c,0,(int32_t)c->r[3],-904); // 801DC9A8
  if (crb(c,1)) { goto L_801DC9B8; } // 801DC9AC
  c->r[0]=0u+0x00000000u; // 801DC9B0
  goto L_801DC9E0; // 801DC9B4
L_801DC9B8:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DC9B8
  if (crb(c,0)) { goto L_801DC9CC; } // 801DC9BC
  c->r[3]=0u+0x00010000u; // 801DC9C0
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DC9C4
  goto L_801DC9E0; // 801DC9C8
L_801DC9CC:;
  c->r[0]=c->r[3]+0x00000388u; // 801DC9CC
  c->r[3]=0u+0x804B0000u; // 801DC9D0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DC9D4
  c->r[3]=c->r[3]+0x00006A50u; // 801DC9D8
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DC9DC
L_801DC9E0:;
  W16(c->r[30]+0x00000050u,c->r[0]); // 801DC9E0
  c->r[5]=R32(c->r[30]+0x00000030u); // 801DC9E4
  c->r[3]=R32(c->r[30]+0x00000034u); // 801DC9E8
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DC9EC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DC9F0
  c->r[3]=c->r[5]+c->r[3]; // 801DC9F4
  c->r[0]=c->r[4]+c->r[0]; // 801DC9F8
  c->r[3]=c->r[3]+c->r[0]; // 801DC9FC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCA00
  if (crb(c,1)) { goto L_801DCA10; } // 801DCA04
  c->r[0]=0u+0x00000000u; // 801DCA08
  goto L_801DCA38; // 801DCA0C
L_801DCA10:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCA10
  if (crb(c,0)) { goto L_801DCA24; } // 801DCA14
  c->r[3]=0u+0x00010000u; // 801DCA18
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCA1C
  goto L_801DCA38; // 801DCA20
L_801DCA24:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCA24
  c->r[3]=0u+0x804B0000u; // 801DCA28
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCA2C
  c->r[3]=c->r[3]+0x00006A50u; // 801DCA30
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCA34
L_801DCA38:;
  W16(c->r[30]+0x00000054u,c->r[0]); // 801DCA38
  c->r[5]=R32(c->r[30]+0x00000030u); // 801DCA3C
  c->r[3]=R32(c->r[30]+0x00000038u); // 801DCA40
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DCA44
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DCA48
  c->r[3]=c->r[5]+c->r[3]; // 801DCA4C
  c->r[0]=c->r[4]+c->r[0]; // 801DCA50
  c->r[3]=c->r[3]+c->r[0]; // 801DCA54
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCA58
  if (crb(c,1)) { goto L_801DCA68; } // 801DCA5C
  c->r[0]=0u+0x00000000u; // 801DCA60
  goto L_801DCA90; // 801DCA64
L_801DCA68:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCA68
  if (crb(c,0)) { goto L_801DCA7C; } // 801DCA6C
  c->r[3]=0u+0x00010000u; // 801DCA70
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCA74
  goto L_801DCA90; // 801DCA78
L_801DCA7C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCA7C
  c->r[3]=0u+0x804B0000u; // 801DCA80
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCA84
  c->r[3]=c->r[3]+0x00006A50u; // 801DCA88
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCA8C
L_801DCA90:;
  W16(c->r[30]+0x00000068u,c->r[0]); // 801DCA90
L_801DCA94:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801DCA94
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DCA98
  if (crb(c,2)) { goto L_801DCBE4; } // 801DCA9C
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DCAA0
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCAA4
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DCAA8
  c->r[0]=c->r[4]+c->r[0]; // 801DCAAC
  c->r[3]=c->r[3]+c->r[0]; // 801DCAB0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCAB4
  if (crb(c,1)) { goto L_801DCAC4; } // 801DCAB8
  c->r[0]=0u+0x00000000u; // 801DCABC
  goto L_801DCAEC; // 801DCAC0
L_801DCAC4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCAC4
  if (crb(c,0)) { goto L_801DCAD8; } // 801DCAC8
  c->r[3]=0u+0x00010000u; // 801DCACC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCAD0
  goto L_801DCAEC; // 801DCAD4
L_801DCAD8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCAD8
  c->r[3]=0u+0x804B0000u; // 801DCADC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCAE0
  c->r[3]=c->r[3]+0x00006A50u; // 801DCAE4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCAE8
L_801DCAEC:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DCAEC
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801DCAF0
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCAF4
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DCAF8
  c->r[0]=c->r[4]+c->r[0]; // 801DCAFC
  c->r[3]=c->r[3]+c->r[0]; // 801DCB00
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCB04
  if (crb(c,1)) { goto L_801DCB14; } // 801DCB08
  c->r[0]=0u+0x00000000u; // 801DCB0C
  goto L_801DCB3C; // 801DCB10
L_801DCB14:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCB14
  if (crb(c,0)) { goto L_801DCB28; } // 801DCB18
  c->r[3]=0u+0x00010000u; // 801DCB1C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCB20
  goto L_801DCB3C; // 801DCB24
L_801DCB28:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCB28
  c->r[3]=0u+0x804B0000u; // 801DCB2C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCB30
  c->r[3]=c->r[3]+0x00006A50u; // 801DCB34
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCB38
L_801DCB3C:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DCB3C
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DCB40
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCB44
  c->r[3]=R32(c->r[30]+0x00000034u); // 801DCB48
  c->r[0]=c->r[4]+c->r[0]; // 801DCB4C
  c->r[3]=c->r[3]+c->r[0]; // 801DCB50
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCB54
  if (crb(c,1)) { goto L_801DCB64; } // 801DCB58
  c->r[0]=0u+0x00000000u; // 801DCB5C
  goto L_801DCB8C; // 801DCB60
L_801DCB64:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCB64
  if (crb(c,0)) { goto L_801DCB78; } // 801DCB68
  c->r[3]=0u+0x00010000u; // 801DCB6C
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCB70
  goto L_801DCB8C; // 801DCB74
L_801DCB78:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCB78
  c->r[3]=0u+0x804B0000u; // 801DCB7C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCB80
  c->r[3]=c->r[3]+0x00006A50u; // 801DCB84
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCB88
L_801DCB8C:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DCB8C
  c->r[4]=R32(c->r[30]+0x00000030u); // 801DCB90
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCB94
  c->r[3]=R32(c->r[30]+0x00000038u); // 801DCB98
  c->r[0]=c->r[4]+c->r[0]; // 801DCB9C
  c->r[3]=c->r[3]+c->r[0]; // 801DCBA0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCBA4
  if (crb(c,1)) { goto L_801DCBB4; } // 801DCBA8
  c->r[0]=0u+0x00000000u; // 801DCBAC
  goto L_801DCBDC; // 801DCBB0
L_801DCBB4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCBB4
  if (crb(c,0)) { goto L_801DCBC8; } // 801DCBB8
  c->r[3]=0u+0x00010000u; // 801DCBBC
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCBC0
  goto L_801DCBDC; // 801DCBC4
L_801DCBC8:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCBC8
  c->r[3]=0u+0x804B0000u; // 801DCBCC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCBD0
  c->r[3]=c->r[3]+0x00006A50u; // 801DCBD4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCBD8
L_801DCBDC:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DCBDC
  goto L_801DCD44; // 801DCBE0
L_801DCBE4:;
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DCBE4
  c->r[3]=R32(c->r[30]+0x00000024u); // 801DCBE8
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DCBEC
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCBF0
  c->r[3]=c->r[5]+c->r[3]; // 801DCBF4
  c->r[0]=c->r[4]+c->r[0]; // 801DCBF8
  c->r[3]=c->r[3]+c->r[0]; // 801DCBFC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCC00
  if (crb(c,1)) { goto L_801DCC10; } // 801DCC04
  c->r[0]=0u+0x00000000u; // 801DCC08
  goto L_801DCC38; // 801DCC0C
L_801DCC10:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCC10
  if (crb(c,0)) { goto L_801DCC24; } // 801DCC14
  c->r[3]=0u+0x00010000u; // 801DCC18
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCC1C
  goto L_801DCC38; // 801DCC20
L_801DCC24:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCC24
  c->r[3]=0u+0x804B0000u; // 801DCC28
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCC2C
  c->r[3]=c->r[3]+0x00006A50u; // 801DCC30
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCC34
L_801DCC38:;
  W16(c->r[30]+0x00000058u,c->r[0]); // 801DCC38
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 801DCC3C
  c->r[3]=R32(c->r[30]+0x00000028u); // 801DCC40
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DCC44
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCC48
  c->r[3]=c->r[5]+c->r[3]; // 801DCC4C
  c->r[0]=c->r[4]+c->r[0]; // 801DCC50
  c->r[3]=c->r[3]+c->r[0]; // 801DCC54
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCC58
  if (crb(c,1)) { goto L_801DCC68; } // 801DCC5C
  c->r[0]=0u+0x00000000u; // 801DCC60
  goto L_801DCC90; // 801DCC64
L_801DCC68:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCC68
  if (crb(c,0)) { goto L_801DCC7C; } // 801DCC6C
  c->r[3]=0u+0x00010000u; // 801DCC70
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCC74
  goto L_801DCC90; // 801DCC78
L_801DCC7C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCC7C
  c->r[3]=0u+0x804B0000u; // 801DCC80
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCC84
  c->r[3]=c->r[3]+0x00006A50u; // 801DCC88
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCC8C
L_801DCC90:;
  W16(c->r[30]+0x0000005Cu,c->r[0]); // 801DCC90
  c->r[5]=R32(c->r[30]+0x00000030u); // 801DCC94
  c->r[3]=R32(c->r[30]+0x00000034u); // 801DCC98
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DCC9C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCCA0
  c->r[3]=c->r[5]+c->r[3]; // 801DCCA4
  c->r[0]=c->r[4]+c->r[0]; // 801DCCA8
  c->r[3]=c->r[3]+c->r[0]; // 801DCCAC
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCCB0
  if (crb(c,1)) { goto L_801DCCC0; } // 801DCCB4
  c->r[0]=0u+0x00000000u; // 801DCCB8
  goto L_801DCCE8; // 801DCCBC
L_801DCCC0:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCCC0
  if (crb(c,0)) { goto L_801DCCD4; } // 801DCCC4
  c->r[3]=0u+0x00010000u; // 801DCCC8
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCCCC
  goto L_801DCCE8; // 801DCCD0
L_801DCCD4:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCCD4
  c->r[3]=0u+0x804B0000u; // 801DCCD8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCCDC
  c->r[3]=c->r[3]+0x00006A50u; // 801DCCE0
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCCE4
L_801DCCE8:;
  W16(c->r[30]+0x00000060u,c->r[0]); // 801DCCE8
  c->r[5]=R32(c->r[30]+0x00000030u); // 801DCCEC
  c->r[3]=R32(c->r[30]+0x00000038u); // 801DCCF0
  c->r[4]=R32(c->r[30]+0x00000020u); // 801DCCF4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801DCCF8
  c->r[3]=c->r[5]+c->r[3]; // 801DCCFC
  c->r[0]=c->r[4]+c->r[0]; // 801DCD00
  c->r[3]=c->r[3]+c->r[0]; // 801DCD04
  cmps(c,0,(int32_t)c->r[3],-904); // 801DCD08
  if (crb(c,1)) { goto L_801DCD18; } // 801DCD0C
  c->r[0]=0u+0x00000000u; // 801DCD10
  goto L_801DCD40; // 801DCD14
L_801DCD18:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DCD18
  if (crb(c,0)) { goto L_801DCD2C; } // 801DCD1C
  c->r[3]=0u+0x00010000u; // 801DCD20
  c->r[0]=c->r[3]+0xFFFFFF64u; // 801DCD24
  goto L_801DCD40; // 801DCD28
L_801DCD2C:;
  c->r[0]=c->r[3]+0x00000388u; // 801DCD2C
  c->r[3]=0u+0x804B0000u; // 801DCD30
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DCD34
  c->r[3]=c->r[3]+0x00006A50u; // 801DCD38
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DCD3C
L_801DCD40:;
  W16(c->r[30]+0x0000006Cu,c->r[0]); // 801DCD40
L_801DCD44:;
  c->r[29]=c->r[29]|0x80000000u; // 801DCD44
L_801DCD48:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 801DCD48
  c->lr=0x801DCD50u; f_801DEC48(c); // 801DCD4C
  c->lr=0x801DCD54u; f_801BE74C(c); // 801DCD50
  c->r[4]=R16(c->r[30]+0x0000003Cu); // 801DCD54
  c->r[0]=0u+0x00000000u; // 801DCD58
  c->r[31]=c->r[3]|c->r[3]; // 801DCD5C
  c->r[3]=c->r[28]+0x0000003Eu; // 801DCD60
  W16(c->r[28]+0x00000092u,c->r[4]); // 801DCD64
  W16(c->r[28]+0x00000094u,c->r[0]); // 801DCD68
  c->r[0]=R16(c->r[30]+0x00000040u); // 801DCD6C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD70
  W16(c->r[28]+0x0000003Cu,c->r[0]); // 801DCD74
  if (crb(c,2)) { goto L_801DCD80; } // 801DCD78
  c->r[29]=c->r[29]|0x00000001u; // 801DCD7C
L_801DCD80:;
  c->r[0]=0u+0x00000000u; // 801DCD80
  W16(c->r[3]+0x00000000u,c->r[0]); // 801DCD84
  c->r[0]=R16(c->r[30]+0x00000044u); // 801DCD88
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD8C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801DCD90
  if (crb(c,2)) { goto L_801DCD9C; } // 801DCD94
  c->r[29]=c->r[29]|0x00000002u; // 801DCD98
L_801DCD9C:;
  c->r[0]=0u+0x00000000u; // 801DCD9C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801DCDA0
  c->r[0]=R16(c->r[30]+0x0000004Cu); // 801DCDA4
  cmps(c,0,(int32_t)c->r[0],0); // 801DCDA8
  W16(c->r[3]+0x00000006u,c->r[0]); // 801DCDAC
  if (crb(c,2)) { goto L_801DCDB8; } // 801DCDB0
  c->r[29]=c->r[29]|0x00010000u; // 801DCDB4
L_801DCDB8:;
  c->r[0]=0u+0x00000000u; // 801DCDB8
  W16(c->r[3]+0x00000008u,c->r[0]); // 801DCDBC
  c->r[0]=R16(c->r[30]+0x00000050u); // 801DCDC0
  cmps(c,0,(int32_t)c->r[0],0); // 801DCDC4
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801DCDC8
  if (crb(c,2)) { goto L_801DCDD4; } // 801DCDCC
  c->r[29]=c->r[29]|0x00020000u; // 801DCDD0
L_801DCDD4:;
  c->r[0]=0u+0x00000000u; // 801DCDD4
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 801DCDD8
  c->r[0]=R16(c->r[30]+0x00000058u); // 801DCDDC
  cmps(c,0,(int32_t)c->r[0],0); // 801DCDE0
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801DCDE4
  if (crb(c,2)) { goto L_801DCDF0; } // 801DCDE8
  c->r[29]=c->r[29]|0x00200000u; // 801DCDEC
L_801DCDF0:;
  c->r[0]=0u+0x00000000u; // 801DCDF0
  W16(c->r[3]+0x00000010u,c->r[0]); // 801DCDF4
  c->r[0]=R16(c->r[30]+0x0000005Cu); // 801DCDF8
  cmps(c,0,(int32_t)c->r[0],0); // 801DCDFC
  W16(c->r[3]+0x00000012u,c->r[0]); // 801DCE00
  if (crb(c,2)) { goto L_801DCE0C; } // 801DCE04
  c->r[29]=c->r[29]|0x00400000u; // 801DCE08
L_801DCE0C:;
  c->r[0]=0u+0x00000000u; // 801DCE0C
  W16(c->r[3]+0x00000014u,c->r[0]); // 801DCE10
  c->r[0]=R16(c->r[30]+0x00000064u); // 801DCE14
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE18
  W16(c->r[3]+0x00000016u,c->r[0]); // 801DCE1C
  if (crb(c,2)) { goto L_801DCE28; } // 801DCE20
  c->r[29]=c->r[29]|0x04000000u; // 801DCE24
L_801DCE28:;
  c->r[0]=0u+0x00000000u; // 801DCE28
  W16(c->r[3]+0x00000018u,c->r[0]); // 801DCE2C
  c->r[0]=R16(c->r[30]+0x00000068u); // 801DCE30
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE34
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801DCE38
  if (crb(c,2)) { goto L_801DCE44; } // 801DCE3C
  c->r[29]=c->r[29]|0x08000000u; // 801DCE40
L_801DCE44:;
  c->r[0]=0u+0x00000000u; // 801DCE44
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801DCE48
  c->r[0]=R16(c->r[30]+0x00000048u); // 801DCE4C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE50
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801DCE54
  if (crb(c,2)) { goto L_801DCE60; } // 801DCE58
  c->r[29]=c->r[29]|0x00000008u; // 801DCE5C
L_801DCE60:;
  c->r[0]=0u+0x00000000u; // 801DCE60
  W16(c->r[3]+0x00000020u,c->r[0]); // 801DCE64
  c->r[0]=R16(c->r[30]+0x00000054u); // 801DCE68
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE6C
  W16(c->r[3]+0x00000022u,c->r[0]); // 801DCE70
  if (crb(c,2)) { goto L_801DCE7C; } // 801DCE74
  c->r[29]=c->r[29]|0x00080000u; // 801DCE78
L_801DCE7C:;
  c->r[0]=0u+0x00000000u; // 801DCE7C
  W16(c->r[3]+0x00000024u,c->r[0]); // 801DCE80
  c->r[0]=R16(c->r[30]+0x00000060u); // 801DCE84
  cmps(c,0,(int32_t)c->r[0],0); // 801DCE88
  W16(c->r[3]+0x00000026u,c->r[0]); // 801DCE8C
  if (crb(c,2)) { goto L_801DCE98; } // 801DCE90
  c->r[29]=c->r[29]|0x01000000u; // 801DCE94
L_801DCE98:;
  c->r[0]=0u+0x00000000u; // 801DCE98
  W16(c->r[3]+0x00000028u,c->r[0]); // 801DCE9C
  c->r[0]=R16(c->r[30]+0x0000006Cu); // 801DCEA0
  cmps(c,0,(int32_t)c->r[0],0); // 801DCEA4
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801DCEA8
  if (crb(c,2)) { goto L_801DCEB4; } // 801DCEAC
  c->r[29]=c->r[29]|0x20000000u; // 801DCEB0
L_801DCEB4:;
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801DCEB4
  c->r[30]=0u+0x00000000u; // 801DCEB8
  W16(c->r[3]+0x0000002Cu,c->r[30]); // 801DCEBC
  c->r[3]=c->r[28]+0x00000102u; // 801DCEC0
  c->r[0]=c->r[0]|0x00000112u; // 801DCEC4
  c->r[4]=0u+0x00000000u; // 801DCEC8
  W32(c->r[28]+0x00000034u,c->r[29]); // 801DCECC
  c->r[5]=0u+0x00000020u; // 801DCED0
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 801DCED4
  c->lr=0x801DCEDCu; f_8000443C(c); // 801DCED8
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801DCEDC
  c->r[3]=c->r[31]|c->r[31]; // 801DCEE0
  W16(c->r[28]+0x00000100u,c->r[30]); // 801DCEE4
  c->r[0]=c->r[0]|0x03000000u; // 801DCEE8
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 801DCEEC
  c->lr=0x801DCEF4u; f_801BE774(c); // 801DCEF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCEF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCEF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCEFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCF00
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DCF04
  c->lr=c->r[0]; // 801DCF08
  c->r[1]=c->r[1]+0x00000020u; // 801DCF0C
  return; // 801DCF10
}

// fn_801DCF14
void f_801DCF14(Ctx* __restrict c) {
  trace_call(0x801DCF14u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCF14
  c->r[4]=0u+0x00000000u; // 801DCF18
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCF1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCF20
  W32(c->r[3]+c->r[0],c->r[4]); // 801DCF24
  return; // 801DCF28
}

// fn_801DCF2C
void f_801DCF2C(Ctx* __restrict c) {
  trace_call(0x801DCF2Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCF2C
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCF30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCF34
  c->r[3]=c->r[3]+c->r[0]; // 801DCF38
  W32(c->r[3]+0x00000008u,c->r[4]); // 801DCF3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCF40
  c->r[0]=c->r[0]|0x10000000u; // 801DCF44
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCF48
  return; // 801DCF4C
}

// fn_801DCF50
void f_801DCF50(Ctx* __restrict c) {
  trace_call(0x801DCF50u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCF50
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCF54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCF58
  c->r[3]=c->r[3]+c->r[0]; // 801DCF5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCF60
  c->r[0]=c->r[0]|0x40000000u; // 801DCF64
  c->r[0]=c->r[0]|0x00000001u; // 801DCF68
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCF6C
  return; // 801DCF70
}

// fn_801DCF74
void f_801DCF74(Ctx* __restrict c) {
  trace_call(0x801DCF74u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCF74
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCF78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCF7C
  c->r[3]=c->r[3]+c->r[0]; // 801DCF80
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801DCF84
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCF88
  c->r[0]=c->r[0]|0x40000000u; // 801DCF8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCF90
  return; // 801DCF94
}

// fn_801DCF98
void f_801DCF98(Ctx* __restrict c) {
  trace_call(0x801DCF98u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCF98
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCF9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCFA0
  c->r[3]=c->r[3]+c->r[0]; // 801DCFA4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCFA8
  c->r[0]=c->r[0]|0x40000000u; // 801DCFAC
  c->r[0]=c->r[0]|0x00000002u; // 801DCFB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCFB4
  return; // 801DCFB8
}

// fn_801DCFBC
void f_801DCFBC(Ctx* __restrict c) {
  trace_call(0x801DCFBCu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCFBC
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCFC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCFC4
  c->r[3]=c->r[3]+c->r[0]; // 801DCFC8
  W32(c->r[3]+0x00000010u,c->r[4]); // 801DCFCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCFD0
  c->r[0]=c->r[0]|0x40000000u; // 801DCFD4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCFD8
  return; // 801DCFDC
}

// fn_801DCFE0
void f_801DCFE0(Ctx* __restrict c) {
  trace_call(0x801DCFE0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DCFE0
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DCFE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DCFE8
  c->r[3]=c->r[3]+c->r[0]; // 801DCFEC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DCFF0
  c->r[0]=c->r[0]|0x40000000u; // 801DCFF4
  c->r[0]=c->r[0]|0x00000004u; // 801DCFF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DCFFC
  return; // 801DD000
}

// fn_801DD004
void f_801DD004(Ctx* __restrict c) {
  trace_call(0x801DD004u);
  c->r[0]=R32(c->r[13]+0xFFFFA0ECu); // 801DD004
  cmpu(c,0,c->r[0],0x00000003u); // 801DD008
  if (crb(c,2)) return; // 801DD00C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DD010
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DD014
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DD018
  c->r[3]=c->r[3]+c->r[0]; // 801DD01C
  W32(c->r[3]+0x00000014u,c->r[4]); // 801DD020
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DD024
  c->r[0]=c->r[0]|0x40000000u; // 801DD028
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DD02C
  return; // 801DD030
}

// fn_801DD034
void f_801DD034(Ctx* __restrict c) {
  trace_call(0x801DD034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD034
  c->r[0]=c->lr; // 801DD038
  cmps(c,0,(int32_t)c->r[4],0); // 801DD03C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD044
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DD048
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DD04C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DD050
  c->r[31]=c->r[3]+c->r[0]; // 801DD054
  if (!crb(c,0)) { goto L_801DD064; } // 801DD058
  c->r[0]=0u+0x00000000u; // 801DD05C
  goto L_801DD074; // 801DD060
L_801DD064:;
  cmps(c,0,(int32_t)c->r[4],127); // 801DD064
  c->r[0]=0u+0x0000007Fu; // 801DD068
  if (crb(c,1)) { goto L_801DD074; } // 801DD06C
  c->r[0]=c->r[4]|c->r[4]; // 801DD070
L_801DD074:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 801DD074
  c->r[3]=c->r[31]|c->r[31]; // 801DD078
  c->lr=0x801DD080u; f_801DB630(c); // 801DD07C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DD080
  c->r[0]=c->r[0]|0x40000000u; // 801DD084
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DD088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD08C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD090
  c->lr=c->r[0]; // 801DD094
  c->r[1]=c->r[1]+0x00000010u; // 801DD098
  return; // 801DD09C
}

// fn_801DD0A0
void f_801DD0A0(Ctx* __restrict c) {
  trace_call(0x801DD0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD0A0
  c->r[0]=c->lr; // 801DD0A4
  cmps(c,0,(int32_t)c->r[4],0); // 801DD0A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD0AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD0B0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DD0B4
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DD0B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DD0BC
  c->r[31]=c->r[3]+c->r[0]; // 801DD0C0
  if (!crb(c,0)) { goto L_801DD0D0; } // 801DD0C4
  c->r[0]=0u+0x00000000u; // 801DD0C8
  goto L_801DD0E0; // 801DD0CC
L_801DD0D0:;
  cmps(c,0,(int32_t)c->r[4],127); // 801DD0D0
  c->r[0]=0u+0x0000007Fu; // 801DD0D4
  if (crb(c,1)) { goto L_801DD0E0; } // 801DD0D8
  c->r[0]=c->r[4]|c->r[4]; // 801DD0DC
L_801DD0E0:;
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801DD0E0
  c->r[3]=c->r[31]|c->r[31]; // 801DD0E4
  c->lr=0x801DD0ECu; f_801DB630(c); // 801DD0E8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DD0EC
  c->r[0]=c->r[0]|0x40000000u; // 801DD0F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DD0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD0F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD0FC
  c->lr=c->r[0]; // 801DD100
  c->r[1]=c->r[1]+0x00000010u; // 801DD104
  return; // 801DD108
}

// fn_801DD10C
void f_801DD10C(Ctx* __restrict c) {
  trace_call(0x801DD10Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801DD10C
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 801DD110
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801DD114
  c->r[3]=c->r[3]+c->r[0]; // 801DD118
  W32(c->r[3]+0x00000020u,c->r[4]); // 801DD11C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DD120
  c->r[0]=c->r[0]|0x40000000u; // 801DD124
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DD128
  return; // 801DD12C
}

// fn_801DD130
void f_801DD130(Ctx* __restrict c) {
  trace_call(0x801DD130u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD130
  c->r[0]=c->lr; // 801DD134
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD138
  c->r[11]=c->r[1]+0x00000020u; // 801DD13C
  c->lr=0x801DD144u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DD140
  c->r[0]=R32(c->r[13]+0xFFFFA0E4u); // 801DD144
  cmps(c,0,(int32_t)c->r[0],0); // 801DD148
  if (crb(c,2)) { goto L_801DE7A8; } // 801DD14C
  c->r[3]=0u+0x804B0000u; // 801DD150
  c->r[26]=0u+0x00000000u; // 801DD154
  c->r[27]=0u+0x00000000u; // 801DD158
  c->r[29]=0u+0x00010000u; // 801DD15C
  c->r[30]=c->r[3]+0x00006A50u; // 801DD160
  c->r[28]=0u+0x00000000u; // 801DD164
  c->r[31]=0u+0x2AAB0000u; // 801DD168
  goto L_801DE79C; // 801DD16C
L_801DD170:;
  c->r[4]=R32(c->r[13]+0xFFFFA0E0u); // 801DD170
  c->r[3]=0u+0x00000000u; // 801DD174
  c->r[0]=0u+0x00000000u; // 801DD178
  c->r[5]=c->r[4]+c->r[27]; // 801DD17C
  c->r[4]=R32(c->r[4]+c->r[27]); // 801DD180
  cmps(c,0,(int32_t)c->r[4],0); // 801DD184
  if (crb(c,2)) { goto L_801DE794; } // 801DD188
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD18C
  c->r[6]=0u+0x00000000u; // 801DD190
  c->r[7]=rotl(c->r[7],0)&0x20000000u; cr0(c,c->r[7]); // 801DD194
  if (crb(c,2)) { goto L_801DD1B4; } // 801DD198
  c->r[7]=R16(c->r[5]+0x0000003Eu); // 801DD19C
  c->r[3]=0u+0x00000001u; // 801DD1A0
  W16(c->r[5]+0x0000003Cu,c->r[7]); // 801DD1A4
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD1A8
  c->r[7]=rotl(c->r[7],0)&0xDFFFFFFFu; // 801DD1AC
  W32(c->r[5]+0x00000004u,c->r[7]); // 801DD1B0
L_801DD1B4:;
  c->r[8]=R32(c->r[5]+0x00000004u); // 801DD1B4
  c->r[7]=rotl(c->r[8],0)&0x10000000u; cr0(c,c->r[7]); // 801DD1B8
  if (crb(c,2)) { goto L_801DD218; } // 801DD1BC
  c->r[3]=rotl(c->r[8],0)&0x00000008u; cr0(c,c->r[3]); // 801DD1C0
  if (crb(c,2)) { goto L_801DD1D0; } // 801DD1C4
  W16(c->r[5]+0x0000003Eu,c->r[28]); // 801DD1C8
  goto L_801DD204; // 801DD1CC
L_801DD1D0:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801DD1D0
  cmps(c,0,(int32_t)c->r[3],-904); // 801DD1D4
  if (crb(c,1)) { goto L_801DD1E4; } // 801DD1D8
  c->r[3]=0u+0x00000000u; // 801DD1DC
  goto L_801DD200; // 801DD1E0
L_801DD1E4:;
  cmps(c,0,(int32_t)c->r[3],60); // 801DD1E4
  if (crb(c,0)) { goto L_801DD1F4; } // 801DD1E8
  c->r[3]=c->r[29]+0xFFFFFF64u; // 801DD1EC
  goto L_801DD200; // 801DD1F0
L_801DD1F4:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DD1F4
  c->r[3]=c->r[30]+c->r[3]; // 801DD1F8
  c->r[3]=R16(c->r[3]+0x00000710u); // 801DD1FC
L_801DD200:;
  W16(c->r[5]+0x0000003Eu,c->r[3]); // 801DD200
L_801DD204:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD204
  c->r[3]=0u+0x00000001u; // 801DD208
  c->r[7]=rotl(c->r[7],0)&0xEFFFFFFFu; // 801DD20C
  c->r[7]=c->r[7]|0x20000000u; // 801DD210
  W32(c->r[5]+0x00000004u,c->r[7]); // 801DD214
L_801DD218:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD218
  c->r[7]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[7]); // 801DD21C
  if (crb(c,2)) { goto L_801DD294; } // 801DD220
  c->r[7]=R16(c->r[5]+0x00000042u); // 801DD224
  c->r[0]=0u+0x00000001u; // 801DD228
  W16(c->r[5]+0x00000040u,c->r[7]); // 801DD22C
  c->r[7]=R16(c->r[5]+0x00000046u); // 801DD230
  W16(c->r[5]+0x00000044u,c->r[7]); // 801DD234
  c->r[7]=R16(c->r[5]+0x0000004Au); // 801DD238
  W16(c->r[5]+0x00000048u,c->r[7]); // 801DD23C
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 801DD240
  W16(c->r[5]+0x0000004Cu,c->r[7]); // 801DD244
  c->r[7]=R16(c->r[5]+0x00000052u); // 801DD248
  W16(c->r[5]+0x00000050u,c->r[7]); // 801DD24C
  c->r[7]=R16(c->r[5]+0x00000056u); // 801DD250
  W16(c->r[5]+0x00000054u,c->r[7]); // 801DD254
  c->r[7]=R16(c->r[5]+0x0000005Au); // 801DD258
  W16(c->r[5]+0x00000058u,c->r[7]); // 801DD25C
  c->r[7]=R16(c->r[5]+0x0000005Eu); // 801DD260
  W16(c->r[5]+0x0000005Cu,c->r[7]); // 801DD264
  c->r[7]=R16(c->r[5]+0x00000062u); // 801DD268
  W16(c->r[5]+0x00000060u,c->r[7]); // 801DD26C
  c->r[7]=R16(c->r[5]+0x00000066u); // 801DD270
  W16(c->r[5]+0x00000064u,c->r[7]); // 801DD274
  c->r[7]=R16(c->r[5]+0x0000006Au); // 801DD278
  W16(c->r[5]+0x00000068u,c->r[7]); // 801DD27C
  c->r[7]=R16(c->r[5]+0x0000006Eu); // 801DD280
  W16(c->r[5]+0x0000006Cu,c->r[7]); // 801DD284
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD288
  c->r[7]=rotl(c->r[7],0)&0x7FFFFFFFu; // 801DD28C
  W32(c->r[5]+0x00000004u,c->r[7]); // 801DD290
L_801DD294:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DD294
  c->r[7]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[7]); // 801DD298
  if (crb(c,2)) { goto L_801DE400; } // 801DD29C
  c->r[0]=R32(c->r[13]+0xFFFFA0ECu); // 801DD2A0
  cmps(c,0,(int32_t)c->r[0],3); // 801DD2A4
  if (crb(c,2)) { goto L_801DDE38; } // 801DD2A8
  if (!crb(c,0)) { goto L_801DE3EC; } // 801DD2AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD2B0
  if (crb(c,2)) { goto L_801DD2C0; } // 801DD2B4
  if (!crb(c,0)) { goto L_801DD844; } // 801DD2B8
  goto L_801DE3EC; // 801DD2BC
L_801DD2C0:;
  c->r[7]=R32(c->r[5]+0x00000020u); // 801DD2C0
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD2C4
  c->r[0]=c->r[7]+c->r[0]; // 801DD2C8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD2CC
  if (crb(c,1)) { goto L_801DD2DC; } // 801DD2D0
  c->r[0]=0u+0x00000000u; // 801DD2D4
  goto L_801DD2F8; // 801DD2D8
L_801DD2DC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD2DC
  if (crb(c,0)) { goto L_801DD2EC; } // 801DD2E0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD2E4
  goto L_801DD2F8; // 801DD2E8
L_801DD2EC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD2EC
  c->r[7]=c->r[30]+c->r[0]; // 801DD2F0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD2F4
L_801DD2F8:;
  W16(c->r[5]+0x00000042u,c->r[0]); // 801DD2F8
  c->r[7]=R32(c->r[5]+0x00000020u); // 801DD2FC
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD300
  c->r[0]=c->r[7]+c->r[0]; // 801DD304
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD308
  if (crb(c,1)) { goto L_801DD318; } // 801DD30C
  c->r[0]=0u+0x00000000u; // 801DD310
  goto L_801DD334; // 801DD314
L_801DD318:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD318
  if (crb(c,0)) { goto L_801DD328; } // 801DD31C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD320
  goto L_801DD334; // 801DD324
L_801DD328:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD328
  c->r[7]=c->r[30]+c->r[0]; // 801DD32C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD330
L_801DD334:;
  W16(c->r[5]+0x00000046u,c->r[0]); // 801DD334
  c->r[7]=R32(c->r[5]+0x00000020u); // 801DD338
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD33C
  c->r[7]=c->r[7]+c->r[0]; // 801DD340
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD344
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD348
  if (crb(c,1)) { goto L_801DD358; } // 801DD34C
  c->r[0]=0u+0x00000000u; // 801DD350
  goto L_801DD374; // 801DD354
L_801DD358:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD358
  if (crb(c,0)) { goto L_801DD368; } // 801DD35C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD360
  goto L_801DD374; // 801DD364
L_801DD368:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD368
  c->r[7]=c->r[30]+c->r[0]; // 801DD36C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD370
L_801DD374:;
  W16(c->r[5]+0x0000004Au,c->r[0]); // 801DD374
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DD378
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DD37C
  if (crb(c,2)) { goto L_801DD440; } // 801DD380
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD384
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD388
  c->r[0]=c->r[7]+c->r[0]; // 801DD38C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD390
  if (crb(c,1)) { goto L_801DD3A0; } // 801DD394
  c->r[0]=0u+0x00000000u; // 801DD398
  goto L_801DD3BC; // 801DD39C
L_801DD3A0:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD3A0
  if (crb(c,0)) { goto L_801DD3B0; } // 801DD3A4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD3A8
  goto L_801DD3BC; // 801DD3AC
L_801DD3B0:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD3B0
  c->r[7]=c->r[30]+c->r[0]; // 801DD3B4
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD3B8
L_801DD3BC:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DD3BC
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD3C0
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD3C4
  c->r[0]=c->r[7]+c->r[0]; // 801DD3C8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD3CC
  if (crb(c,1)) { goto L_801DD3DC; } // 801DD3D0
  c->r[0]=0u+0x00000000u; // 801DD3D4
  goto L_801DD3F8; // 801DD3D8
L_801DD3DC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD3DC
  if (crb(c,0)) { goto L_801DD3EC; } // 801DD3E0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD3E4
  goto L_801DD3F8; // 801DD3E8
L_801DD3EC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD3EC
  c->r[7]=c->r[30]+c->r[0]; // 801DD3F0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD3F4
L_801DD3F8:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DD3F8
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD3FC
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD400
  c->r[7]=c->r[7]+c->r[0]; // 801DD404
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD408
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD40C
  if (crb(c,1)) { goto L_801DD41C; } // 801DD410
  c->r[0]=0u+0x00000000u; // 801DD414
  goto L_801DD438; // 801DD418
L_801DD41C:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD41C
  if (crb(c,0)) { goto L_801DD42C; } // 801DD420
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD424
  goto L_801DD438; // 801DD428
L_801DD42C:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD42C
  c->r[7]=c->r[30]+c->r[0]; // 801DD430
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD434
L_801DD438:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DD438
  goto L_801DD510; // 801DD43C
L_801DD440:;
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD440
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD444
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD448
  c->r[0]=c->r[8]+c->r[0]; // 801DD44C
  c->r[0]=c->r[7]+c->r[0]; // 801DD450
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD454
  if (crb(c,1)) { goto L_801DD464; } // 801DD458
  c->r[0]=0u+0x00000000u; // 801DD45C
  goto L_801DD480; // 801DD460
L_801DD464:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD464
  if (crb(c,0)) { goto L_801DD474; } // 801DD468
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD46C
  goto L_801DD480; // 801DD470
L_801DD474:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD474
  c->r[7]=c->r[30]+c->r[0]; // 801DD478
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD47C
L_801DD480:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DD480
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD484
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD488
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD48C
  c->r[0]=c->r[8]+c->r[0]; // 801DD490
  c->r[0]=c->r[7]+c->r[0]; // 801DD494
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD498
  if (crb(c,1)) { goto L_801DD4A8; } // 801DD49C
  c->r[0]=0u+0x00000000u; // 801DD4A0
  goto L_801DD4C4; // 801DD4A4
L_801DD4A8:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD4A8
  if (crb(c,0)) { goto L_801DD4B8; } // 801DD4AC
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD4B0
  goto L_801DD4C4; // 801DD4B4
L_801DD4B8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD4B8
  c->r[7]=c->r[30]+c->r[0]; // 801DD4BC
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD4C0
L_801DD4C4:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DD4C4
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DD4C8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DD4CC
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DD4D0
  c->r[0]=c->r[8]+c->r[0]; // 801DD4D4
  c->r[7]=c->r[0]+c->r[7]; // 801DD4D8
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD4DC
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD4E0
  if (crb(c,1)) { goto L_801DD4F0; } // 801DD4E4
  c->r[0]=0u+0x00000000u; // 801DD4E8
  goto L_801DD50C; // 801DD4EC
L_801DD4F0:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD4F0
  if (crb(c,0)) { goto L_801DD500; } // 801DD4F4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD4F8
  goto L_801DD50C; // 801DD4FC
L_801DD500:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD500
  c->r[7]=c->r[30]+c->r[0]; // 801DD504
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD508
L_801DD50C:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DD50C
L_801DD510:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DD510
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DD514
  if (crb(c,2)) { goto L_801DD5D8; } // 801DD518
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DD51C
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD520
  c->r[0]=c->r[7]+c->r[0]; // 801DD524
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD528
  if (crb(c,1)) { goto L_801DD538; } // 801DD52C
  c->r[0]=0u+0x00000000u; // 801DD530
  goto L_801DD554; // 801DD534
L_801DD538:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD538
  if (crb(c,0)) { goto L_801DD548; } // 801DD53C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD540
  goto L_801DD554; // 801DD544
L_801DD548:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD548
  c->r[7]=c->r[30]+c->r[0]; // 801DD54C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD550
L_801DD554:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DD554
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DD558
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD55C
  c->r[0]=c->r[7]+c->r[0]; // 801DD560
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD564
  if (crb(c,1)) { goto L_801DD574; } // 801DD568
  c->r[0]=0u+0x00000000u; // 801DD56C
  goto L_801DD590; // 801DD570
L_801DD574:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD574
  if (crb(c,0)) { goto L_801DD584; } // 801DD578
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD57C
  goto L_801DD590; // 801DD580
L_801DD584:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD584
  c->r[7]=c->r[30]+c->r[0]; // 801DD588
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD58C
L_801DD590:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DD590
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DD594
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD598
  c->r[7]=c->r[7]+c->r[0]; // 801DD59C
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD5A0
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD5A4
  if (crb(c,1)) { goto L_801DD5B4; } // 801DD5A8
  c->r[0]=0u+0x00000000u; // 801DD5AC
  goto L_801DD5D0; // 801DD5B0
L_801DD5B4:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD5B4
  if (crb(c,0)) { goto L_801DD5C4; } // 801DD5B8
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD5BC
  goto L_801DD5D0; // 801DD5C0
L_801DD5C4:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD5C4
  c->r[7]=c->r[30]+c->r[0]; // 801DD5C8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD5CC
L_801DD5D0:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DD5D0
  goto L_801DD6A8; // 801DD5D4
L_801DD5D8:;
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD5D8
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD5DC
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DD5E0
  c->r[0]=c->r[8]+c->r[0]; // 801DD5E4
  c->r[0]=c->r[7]+c->r[0]; // 801DD5E8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD5EC
  if (crb(c,1)) { goto L_801DD5FC; } // 801DD5F0
  c->r[0]=0u+0x00000000u; // 801DD5F4
  goto L_801DD618; // 801DD5F8
L_801DD5FC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD5FC
  if (crb(c,0)) { goto L_801DD60C; } // 801DD600
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD604
  goto L_801DD618; // 801DD608
L_801DD60C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD60C
  c->r[7]=c->r[30]+c->r[0]; // 801DD610
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD614
L_801DD618:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DD618
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD61C
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD620
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DD624
  c->r[0]=c->r[8]+c->r[0]; // 801DD628
  c->r[0]=c->r[7]+c->r[0]; // 801DD62C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD630
  if (crb(c,1)) { goto L_801DD640; } // 801DD634
  c->r[0]=0u+0x00000000u; // 801DD638
  goto L_801DD65C; // 801DD63C
L_801DD640:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD640
  if (crb(c,0)) { goto L_801DD650; } // 801DD644
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD648
  goto L_801DD65C; // 801DD64C
L_801DD650:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD650
  c->r[7]=c->r[30]+c->r[0]; // 801DD654
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD658
L_801DD65C:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DD65C
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DD660
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DD664
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DD668
  c->r[0]=c->r[8]+c->r[0]; // 801DD66C
  c->r[7]=c->r[0]+c->r[7]; // 801DD670
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD674
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD678
  if (crb(c,1)) { goto L_801DD688; } // 801DD67C
  c->r[0]=0u+0x00000000u; // 801DD680
  goto L_801DD6A4; // 801DD684
L_801DD688:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD688
  if (crb(c,0)) { goto L_801DD698; } // 801DD68C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD690
  goto L_801DD6A4; // 801DD694
L_801DD698:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD698
  c->r[7]=c->r[30]+c->r[0]; // 801DD69C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD6A0
L_801DD6A4:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DD6A4
L_801DD6A8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DD6A8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DD6AC
  if (crb(c,2)) { goto L_801DD770; } // 801DD6B0
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DD6B4
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD6B8
  c->r[0]=c->r[7]+c->r[0]; // 801DD6BC
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD6C0
  if (crb(c,1)) { goto L_801DD6D0; } // 801DD6C4
  c->r[0]=0u+0x00000000u; // 801DD6C8
  goto L_801DD6EC; // 801DD6CC
L_801DD6D0:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD6D0
  if (crb(c,0)) { goto L_801DD6E0; } // 801DD6D4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD6D8
  goto L_801DD6EC; // 801DD6DC
L_801DD6E0:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD6E0
  c->r[7]=c->r[30]+c->r[0]; // 801DD6E4
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD6E8
L_801DD6EC:;
  W16(c->r[5]+0x00000066u,c->r[0]); // 801DD6EC
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DD6F0
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 801DD6F4
  c->r[0]=c->r[7]+c->r[0]; // 801DD6F8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD6FC
  if (crb(c,1)) { goto L_801DD70C; } // 801DD700
  c->r[0]=0u+0x00000000u; // 801DD704
  goto L_801DD728; // 801DD708
L_801DD70C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD70C
  if (crb(c,0)) { goto L_801DD71C; } // 801DD710
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD714
  goto L_801DD728; // 801DD718
L_801DD71C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD71C
  c->r[7]=c->r[30]+c->r[0]; // 801DD720
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD724
L_801DD728:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DD728
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DD72C
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD730
  c->r[7]=c->r[7]+c->r[0]; // 801DD734
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD738
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD73C
  if (crb(c,1)) { goto L_801DD74C; } // 801DD740
  c->r[0]=0u+0x00000000u; // 801DD744
  goto L_801DD768; // 801DD748
L_801DD74C:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD74C
  if (crb(c,0)) { goto L_801DD75C; } // 801DD750
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD754
  goto L_801DD768; // 801DD758
L_801DD75C:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD75C
  c->r[7]=c->r[30]+c->r[0]; // 801DD760
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD764
L_801DD768:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DD768
  goto L_801DE3EC; // 801DD76C
L_801DD770:;
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD770
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD774
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DD778
  c->r[0]=c->r[8]+c->r[0]; // 801DD77C
  c->r[0]=c->r[7]+c->r[0]; // 801DD780
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD784
  if (crb(c,1)) { goto L_801DD794; } // 801DD788
  c->r[0]=0u+0x00000000u; // 801DD78C
  goto L_801DD7B0; // 801DD790
L_801DD794:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD794
  if (crb(c,0)) { goto L_801DD7A4; } // 801DD798
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD79C
  goto L_801DD7B0; // 801DD7A0
L_801DD7A4:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD7A4
  c->r[7]=c->r[30]+c->r[0]; // 801DD7A8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD7AC
L_801DD7B0:;
  W16(c->r[5]+0x00000066u,c->r[0]); // 801DD7B0
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD7B4
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD7B8
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DD7BC
  c->r[0]=c->r[8]+c->r[0]; // 801DD7C0
  c->r[0]=c->r[7]+c->r[0]; // 801DD7C4
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD7C8
  if (crb(c,1)) { goto L_801DD7D8; } // 801DD7CC
  c->r[0]=0u+0x00000000u; // 801DD7D0
  goto L_801DD7F4; // 801DD7D4
L_801DD7D8:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD7D8
  if (crb(c,0)) { goto L_801DD7E8; } // 801DD7DC
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD7E0
  goto L_801DD7F4; // 801DD7E4
L_801DD7E8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD7E8
  c->r[7]=c->r[30]+c->r[0]; // 801DD7EC
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD7F0
L_801DD7F4:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DD7F4
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DD7F8
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DD7FC
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DD800
  c->r[0]=c->r[8]+c->r[0]; // 801DD804
  c->r[7]=c->r[0]+c->r[7]; // 801DD808
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD80C
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD810
  if (crb(c,1)) { goto L_801DD820; } // 801DD814
  c->r[0]=0u+0x00000000u; // 801DD818
  goto L_801DD83C; // 801DD81C
L_801DD820:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD820
  if (crb(c,0)) { goto L_801DD830; } // 801DD824
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD828
  goto L_801DD83C; // 801DD82C
L_801DD830:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD830
  c->r[7]=c->r[30]+c->r[0]; // 801DD834
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD838
L_801DD83C:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DD83C
  goto L_801DE3EC; // 801DD840
L_801DD844:;
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD844
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD848
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DD84C
  c->r[0]=c->r[8]+c->r[0]; // 801DD850
  c->r[0]=c->r[7]+c->r[0]; // 801DD854
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD858
  if (crb(c,1)) { goto L_801DD868; } // 801DD85C
  c->r[0]=0u+0x00000000u; // 801DD860
  goto L_801DD884; // 801DD864
L_801DD868:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD868
  if (crb(c,0)) { goto L_801DD878; } // 801DD86C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD870
  goto L_801DD884; // 801DD874
L_801DD878:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD878
  c->r[7]=c->r[30]+c->r[0]; // 801DD87C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD880
L_801DD884:;
  W16(c->r[5]+0x00000042u,c->r[0]); // 801DD884
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD888
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DD88C
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DD890
  c->r[0]=c->r[8]+c->r[0]; // 801DD894
  c->r[0]=c->r[7]+c->r[0]; // 801DD898
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD89C
  if (crb(c,1)) { goto L_801DD8AC; } // 801DD8A0
  c->r[0]=0u+0x00000000u; // 801DD8A4
  goto L_801DD8C8; // 801DD8A8
L_801DD8AC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD8AC
  if (crb(c,0)) { goto L_801DD8BC; } // 801DD8B0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD8B4
  goto L_801DD8C8; // 801DD8B8
L_801DD8BC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD8BC
  c->r[7]=c->r[30]+c->r[0]; // 801DD8C0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD8C4
L_801DD8C8:;
  W16(c->r[5]+0x00000046u,c->r[0]); // 801DD8C8
  c->r[7]=R32(c->r[5]+0x00000020u); // 801DD8CC
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD8D0
  c->r[7]=c->r[7]+c->r[0]; // 801DD8D4
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD8D8
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD8DC
  if (crb(c,1)) { goto L_801DD8EC; } // 801DD8E0
  c->r[0]=0u+0x00000000u; // 801DD8E4
  goto L_801DD908; // 801DD8E8
L_801DD8EC:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD8EC
  if (crb(c,0)) { goto L_801DD8FC; } // 801DD8F0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD8F4
  goto L_801DD908; // 801DD8F8
L_801DD8FC:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD8FC
  c->r[7]=c->r[30]+c->r[0]; // 801DD900
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD904
L_801DD908:;
  W16(c->r[5]+0x0000004Au,c->r[0]); // 801DD908
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DD90C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DD910
  if (crb(c,2)) { goto L_801DD9E4; } // 801DD914
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD918
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DD91C
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DD920
  c->r[0]=c->r[8]+c->r[0]; // 801DD924
  c->r[0]=c->r[7]+c->r[0]; // 801DD928
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD92C
  if (crb(c,1)) { goto L_801DD93C; } // 801DD930
  c->r[0]=0u+0x00000000u; // 801DD934
  goto L_801DD958; // 801DD938
L_801DD93C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD93C
  if (crb(c,0)) { goto L_801DD94C; } // 801DD940
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD944
  goto L_801DD958; // 801DD948
L_801DD94C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD94C
  c->r[7]=c->r[30]+c->r[0]; // 801DD950
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD954
L_801DD958:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DD958
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DD95C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DD960
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DD964
  c->r[0]=c->r[8]+c->r[0]; // 801DD968
  c->r[0]=c->r[7]+c->r[0]; // 801DD96C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DD970
  if (crb(c,1)) { goto L_801DD980; } // 801DD974
  c->r[0]=0u+0x00000000u; // 801DD978
  goto L_801DD99C; // 801DD97C
L_801DD980:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DD980
  if (crb(c,0)) { goto L_801DD990; } // 801DD984
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD988
  goto L_801DD99C; // 801DD98C
L_801DD990:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DD990
  c->r[7]=c->r[30]+c->r[0]; // 801DD994
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD998
L_801DD99C:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DD99C
  c->r[7]=R32(c->r[5]+0x0000000Cu); // 801DD9A0
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DD9A4
  c->r[7]=c->r[7]+c->r[0]; // 801DD9A8
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DD9AC
  cmps(c,0,(int32_t)c->r[7],-904); // 801DD9B0
  if (crb(c,1)) { goto L_801DD9C0; } // 801DD9B4
  c->r[0]=0u+0x00000000u; // 801DD9B8
  goto L_801DD9DC; // 801DD9BC
L_801DD9C0:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DD9C0
  if (crb(c,0)) { goto L_801DD9D0; } // 801DD9C4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DD9C8
  goto L_801DD9DC; // 801DD9CC
L_801DD9D0:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DD9D0
  c->r[7]=c->r[30]+c->r[0]; // 801DD9D4
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DD9D8
L_801DD9DC:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DD9DC
  goto L_801DDAC4; // 801DD9E0
L_801DD9E4:;
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DD9E4
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DD9E8
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DD9EC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DD9F0
  c->r[7]=c->r[9]+c->r[7]; // 801DD9F4
  c->r[0]=c->r[8]+c->r[0]; // 801DD9F8
  c->r[0]=c->r[7]+c->r[0]; // 801DD9FC
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDA00
  if (crb(c,1)) { goto L_801DDA10; } // 801DDA04
  c->r[0]=0u+0x00000000u; // 801DDA08
  goto L_801DDA2C; // 801DDA0C
L_801DDA10:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDA10
  if (crb(c,0)) { goto L_801DDA20; } // 801DDA14
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDA18
  goto L_801DDA2C; // 801DDA1C
L_801DDA20:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDA20
  c->r[7]=c->r[30]+c->r[0]; // 801DDA24
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDA28
L_801DDA2C:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DDA2C
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DDA30
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDA34
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDA38
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DDA3C
  c->r[7]=c->r[9]+c->r[7]; // 801DDA40
  c->r[0]=c->r[8]+c->r[0]; // 801DDA44
  c->r[0]=c->r[7]+c->r[0]; // 801DDA48
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDA4C
  if (crb(c,1)) { goto L_801DDA5C; } // 801DDA50
  c->r[0]=0u+0x00000000u; // 801DDA54
  goto L_801DDA78; // 801DDA58
L_801DDA5C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDA5C
  if (crb(c,0)) { goto L_801DDA6C; } // 801DDA60
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDA64
  goto L_801DDA78; // 801DDA68
L_801DDA6C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDA6C
  c->r[7]=c->r[30]+c->r[0]; // 801DDA70
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDA74
L_801DDA78:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DDA78
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDA7C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DDA80
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DDA84
  c->r[0]=c->r[8]+c->r[0]; // 801DDA88
  c->r[7]=c->r[0]+c->r[7]; // 801DDA8C
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DDA90
  cmps(c,0,(int32_t)c->r[7],-904); // 801DDA94
  if (crb(c,1)) { goto L_801DDAA4; } // 801DDA98
  c->r[0]=0u+0x00000000u; // 801DDA9C
  goto L_801DDAC0; // 801DDAA0
L_801DDAA4:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DDAA4
  if (crb(c,0)) { goto L_801DDAB4; } // 801DDAA8
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDAAC
  goto L_801DDAC0; // 801DDAB0
L_801DDAB4:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DDAB4
  c->r[7]=c->r[30]+c->r[0]; // 801DDAB8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDABC
L_801DDAC0:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DDAC0
L_801DDAC4:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DDAC4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DDAC8
  if (crb(c,2)) { goto L_801DDB9C; } // 801DDACC
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDAD0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DDAD4
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDAD8
  c->r[0]=c->r[8]+c->r[0]; // 801DDADC
  c->r[0]=c->r[7]+c->r[0]; // 801DDAE0
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDAE4
  if (crb(c,1)) { goto L_801DDAF4; } // 801DDAE8
  c->r[0]=0u+0x00000000u; // 801DDAEC
  goto L_801DDB10; // 801DDAF0
L_801DDAF4:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDAF4
  if (crb(c,0)) { goto L_801DDB04; } // 801DDAF8
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDAFC
  goto L_801DDB10; // 801DDB00
L_801DDB04:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDB04
  c->r[7]=c->r[30]+c->r[0]; // 801DDB08
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDB0C
L_801DDB10:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DDB10
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDB14
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DDB18
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDB1C
  c->r[0]=c->r[8]+c->r[0]; // 801DDB20
  c->r[0]=c->r[7]+c->r[0]; // 801DDB24
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDB28
  if (crb(c,1)) { goto L_801DDB38; } // 801DDB2C
  c->r[0]=0u+0x00000000u; // 801DDB30
  goto L_801DDB54; // 801DDB34
L_801DDB38:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDB38
  if (crb(c,0)) { goto L_801DDB48; } // 801DDB3C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDB40
  goto L_801DDB54; // 801DDB44
L_801DDB48:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDB48
  c->r[7]=c->r[30]+c->r[0]; // 801DDB4C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDB50
L_801DDB54:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DDB54
  c->r[7]=R32(c->r[5]+0x00000010u); // 801DDB58
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DDB5C
  c->r[7]=c->r[7]+c->r[0]; // 801DDB60
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DDB64
  cmps(c,0,(int32_t)c->r[7],-904); // 801DDB68
  if (crb(c,1)) { goto L_801DDB78; } // 801DDB6C
  c->r[0]=0u+0x00000000u; // 801DDB70
  goto L_801DDB94; // 801DDB74
L_801DDB78:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DDB78
  if (crb(c,0)) { goto L_801DDB88; } // 801DDB7C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDB80
  goto L_801DDB94; // 801DDB84
L_801DDB88:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DDB88
  c->r[7]=c->r[30]+c->r[0]; // 801DDB8C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDB90
L_801DDB94:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DDB94
  goto L_801DDC7C; // 801DDB98
L_801DDB9C:;
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DDB9C
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDBA0
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDBA4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DDBA8
  c->r[7]=c->r[9]+c->r[7]; // 801DDBAC
  c->r[0]=c->r[8]+c->r[0]; // 801DDBB0
  c->r[0]=c->r[7]+c->r[0]; // 801DDBB4
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDBB8
  if (crb(c,1)) { goto L_801DDBC8; } // 801DDBBC
  c->r[0]=0u+0x00000000u; // 801DDBC0
  goto L_801DDBE4; // 801DDBC4
L_801DDBC8:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDBC8
  if (crb(c,0)) { goto L_801DDBD8; } // 801DDBCC
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDBD0
  goto L_801DDBE4; // 801DDBD4
L_801DDBD8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDBD8
  c->r[7]=c->r[30]+c->r[0]; // 801DDBDC
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDBE0
L_801DDBE4:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DDBE4
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DDBE8
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDBEC
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDBF0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DDBF4
  c->r[7]=c->r[9]+c->r[7]; // 801DDBF8
  c->r[0]=c->r[8]+c->r[0]; // 801DDBFC
  c->r[0]=c->r[7]+c->r[0]; // 801DDC00
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDC04
  if (crb(c,1)) { goto L_801DDC14; } // 801DDC08
  c->r[0]=0u+0x00000000u; // 801DDC0C
  goto L_801DDC30; // 801DDC10
L_801DDC14:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDC14
  if (crb(c,0)) { goto L_801DDC24; } // 801DDC18
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDC1C
  goto L_801DDC30; // 801DDC20
L_801DDC24:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDC24
  c->r[7]=c->r[30]+c->r[0]; // 801DDC28
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDC2C
L_801DDC30:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DDC30
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDC34
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DDC38
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DDC3C
  c->r[0]=c->r[8]+c->r[0]; // 801DDC40
  c->r[7]=c->r[0]+c->r[7]; // 801DDC44
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DDC48
  cmps(c,0,(int32_t)c->r[7],-904); // 801DDC4C
  if (crb(c,1)) { goto L_801DDC5C; } // 801DDC50
  c->r[0]=0u+0x00000000u; // 801DDC54
  goto L_801DDC78; // 801DDC58
L_801DDC5C:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DDC5C
  if (crb(c,0)) { goto L_801DDC6C; } // 801DDC60
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDC64
  goto L_801DDC78; // 801DDC68
L_801DDC6C:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DDC6C
  c->r[7]=c->r[30]+c->r[0]; // 801DDC70
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDC74
L_801DDC78:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DDC78
L_801DDC7C:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DDC7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DDC80
  if (crb(c,2)) { goto L_801DDD54; } // 801DDC84
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDC88
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DDC8C
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDC90
  c->r[0]=c->r[8]+c->r[0]; // 801DDC94
  c->r[0]=c->r[7]+c->r[0]; // 801DDC98
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDC9C
  if (crb(c,1)) { goto L_801DDCAC; } // 801DDCA0
  c->r[0]=0u+0x00000000u; // 801DDCA4
  goto L_801DDCC8; // 801DDCA8
L_801DDCAC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDCAC
  if (crb(c,0)) { goto L_801DDCBC; } // 801DDCB0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDCB4
  goto L_801DDCC8; // 801DDCB8
L_801DDCBC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDCBC
  c->r[7]=c->r[30]+c->r[0]; // 801DDCC0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDCC4
L_801DDCC8:;
  W16(c->r[5]+0x00000066u,c->r[0]); // 801DDCC8
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDCCC
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DDCD0
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDCD4
  c->r[0]=c->r[8]+c->r[0]; // 801DDCD8
  c->r[0]=c->r[7]+c->r[0]; // 801DDCDC
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDCE0
  if (crb(c,1)) { goto L_801DDCF0; } // 801DDCE4
  c->r[0]=0u+0x00000000u; // 801DDCE8
  goto L_801DDD0C; // 801DDCEC
L_801DDCF0:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDCF0
  if (crb(c,0)) { goto L_801DDD00; } // 801DDCF4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDCF8
  goto L_801DDD0C; // 801DDCFC
L_801DDD00:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDD00
  c->r[7]=c->r[30]+c->r[0]; // 801DDD04
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDD08
L_801DDD0C:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DDD0C
  c->r[7]=R32(c->r[5]+0x00000014u); // 801DDD10
  c->r[0]=R32(c->r[5]+0x00000030u); // 801DDD14
  c->r[7]=c->r[7]+c->r[0]; // 801DDD18
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DDD1C
  cmps(c,0,(int32_t)c->r[7],-904); // 801DDD20
  if (crb(c,1)) { goto L_801DDD30; } // 801DDD24
  c->r[0]=0u+0x00000000u; // 801DDD28
  goto L_801DDD4C; // 801DDD2C
L_801DDD30:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DDD30
  if (crb(c,0)) { goto L_801DDD40; } // 801DDD34
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDD38
  goto L_801DDD4C; // 801DDD3C
L_801DDD40:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DDD40
  c->r[7]=c->r[30]+c->r[0]; // 801DDD44
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDD48
L_801DDD4C:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DDD4C
  goto L_801DE3EC; // 801DDD50
L_801DDD54:;
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DDD54
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDD58
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDD5C
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DDD60
  c->r[7]=c->r[9]+c->r[7]; // 801DDD64
  c->r[0]=c->r[8]+c->r[0]; // 801DDD68
  c->r[0]=c->r[7]+c->r[0]; // 801DDD6C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDD70
  if (crb(c,1)) { goto L_801DDD80; } // 801DDD74
  c->r[0]=0u+0x00000000u; // 801DDD78
  goto L_801DDD9C; // 801DDD7C
L_801DDD80:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDD80
  if (crb(c,0)) { goto L_801DDD90; } // 801DDD84
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDD88
  goto L_801DDD9C; // 801DDD8C
L_801DDD90:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDD90
  c->r[7]=c->r[30]+c->r[0]; // 801DDD94
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDD98
L_801DDD9C:;
  W16(c->r[5]+0x00000066u,c->r[0]); // 801DDD9C
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DDDA0
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDDA4
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDDA8
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DDDAC
  c->r[7]=c->r[9]+c->r[7]; // 801DDDB0
  c->r[0]=c->r[8]+c->r[0]; // 801DDDB4
  c->r[0]=c->r[7]+c->r[0]; // 801DDDB8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDDBC
  if (crb(c,1)) { goto L_801DDDCC; } // 801DDDC0
  c->r[0]=0u+0x00000000u; // 801DDDC4
  goto L_801DDDE8; // 801DDDC8
L_801DDDCC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDDCC
  if (crb(c,0)) { goto L_801DDDDC; } // 801DDDD0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDDD4
  goto L_801DDDE8; // 801DDDD8
L_801DDDDC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDDDC
  c->r[7]=c->r[30]+c->r[0]; // 801DDDE0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDDE4
L_801DDDE8:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DDDE8
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DDDEC
  c->r[0]=R32(c->r[5]+0x00000014u); // 801DDDF0
  c->r[7]=R32(c->r[5]+0x00000030u); // 801DDDF4
  c->r[0]=c->r[8]+c->r[0]; // 801DDDF8
  c->r[7]=c->r[0]+c->r[7]; // 801DDDFC
  c->r[7]=c->r[7]+0xFFFFFFE2u; // 801DDE00
  cmps(c,0,(int32_t)c->r[7],-904); // 801DDE04
  if (crb(c,1)) { goto L_801DDE14; } // 801DDE08
  c->r[0]=0u+0x00000000u; // 801DDE0C
  goto L_801DDE30; // 801DDE10
L_801DDE14:;
  cmps(c,0,(int32_t)c->r[7],60); // 801DDE14
  if (crb(c,0)) { goto L_801DDE24; } // 801DDE18
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDE1C
  goto L_801DDE30; // 801DDE20
L_801DDE24:;
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DDE24
  c->r[7]=c->r[30]+c->r[0]; // 801DDE28
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDE2C
L_801DDE30:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DDE30
  goto L_801DE3EC; // 801DDE34
L_801DDE38:;
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDE38
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DDE3C
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDE40
  c->r[0]=c->r[8]+c->r[0]; // 801DDE44
  c->r[0]=c->r[7]+c->r[0]; // 801DDE48
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDE4C
  if (crb(c,1)) { goto L_801DDE5C; } // 801DDE50
  c->r[0]=0u+0x00000000u; // 801DDE54
  goto L_801DDE78; // 801DDE58
L_801DDE5C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDE5C
  if (crb(c,0)) { goto L_801DDE6C; } // 801DDE60
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDE64
  goto L_801DDE78; // 801DDE68
L_801DDE6C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDE6C
  c->r[7]=c->r[30]+c->r[0]; // 801DDE70
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDE74
L_801DDE78:;
  W16(c->r[5]+0x00000042u,c->r[0]); // 801DDE78
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDE7C
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DDE80
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDE84
  c->r[0]=c->r[8]+c->r[0]; // 801DDE88
  c->r[0]=c->r[7]+c->r[0]; // 801DDE8C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDE90
  if (crb(c,1)) { goto L_801DDEA0; } // 801DDE94
  c->r[0]=0u+0x00000000u; // 801DDE98
  goto L_801DDEBC; // 801DDE9C
L_801DDEA0:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDEA0
  if (crb(c,0)) { goto L_801DDEB0; } // 801DDEA4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDEA8
  goto L_801DDEBC; // 801DDEAC
L_801DDEB0:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDEB0
  c->r[7]=c->r[30]+c->r[0]; // 801DDEB4
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDEB8
L_801DDEBC:;
  W16(c->r[5]+0x00000046u,c->r[0]); // 801DDEBC
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DDEC0
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DDEC4
  c->r[7]=R32(c->r[5]+0x00000034u); // 801DDEC8
  c->r[0]=c->r[8]+c->r[0]; // 801DDECC
  c->r[0]=c->r[7]+c->r[0]; // 801DDED0
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDED4
  if (crb(c,1)) { goto L_801DDEE4; } // 801DDED8
  c->r[0]=0u+0x00000000u; // 801DDEDC
  goto L_801DDF00; // 801DDEE0
L_801DDEE4:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDEE4
  if (crb(c,0)) { goto L_801DDEF4; } // 801DDEE8
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDEEC
  goto L_801DDF00; // 801DDEF0
L_801DDEF4:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDEF4
  c->r[7]=c->r[30]+c->r[0]; // 801DDEF8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDEFC
L_801DDF00:;
  W16(c->r[5]+0x0000004Au,c->r[0]); // 801DDF00
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DDF04
  c->r[0]=R32(c->r[5]+0x00000020u); // 801DDF08
  c->r[7]=R32(c->r[5]+0x00000038u); // 801DDF0C
  c->r[0]=c->r[8]+c->r[0]; // 801DDF10
  c->r[0]=c->r[7]+c->r[0]; // 801DDF14
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDF18
  if (crb(c,1)) { goto L_801DDF28; } // 801DDF1C
  c->r[0]=0u+0x00000000u; // 801DDF20
  goto L_801DDF44; // 801DDF24
L_801DDF28:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDF28
  if (crb(c,0)) { goto L_801DDF38; } // 801DDF2C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDF30
  goto L_801DDF44; // 801DDF34
L_801DDF38:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDF38
  c->r[7]=c->r[30]+c->r[0]; // 801DDF3C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDF40
L_801DDF44:;
  W16(c->r[5]+0x00000066u,c->r[0]); // 801DDF44
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DDF48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DDF4C
  if (crb(c,2)) { goto L_801DE068; } // 801DDF50
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDF54
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DDF58
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DDF5C
  c->r[0]=c->r[8]+c->r[0]; // 801DDF60
  c->r[0]=c->r[7]+c->r[0]; // 801DDF64
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDF68
  if (crb(c,1)) { goto L_801DDF78; } // 801DDF6C
  c->r[0]=0u+0x00000000u; // 801DDF70
  goto L_801DDF94; // 801DDF74
L_801DDF78:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDF78
  if (crb(c,0)) { goto L_801DDF88; } // 801DDF7C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDF80
  goto L_801DDF94; // 801DDF84
L_801DDF88:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDF88
  c->r[7]=c->r[30]+c->r[0]; // 801DDF8C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDF90
L_801DDF94:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DDF94
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DDF98
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DDF9C
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DDFA0
  c->r[0]=c->r[8]+c->r[0]; // 801DDFA4
  c->r[0]=c->r[7]+c->r[0]; // 801DDFA8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDFAC
  if (crb(c,1)) { goto L_801DDFBC; } // 801DDFB0
  c->r[0]=0u+0x00000000u; // 801DDFB4
  goto L_801DDFD8; // 801DDFB8
L_801DDFBC:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DDFBC
  if (crb(c,0)) { goto L_801DDFCC; } // 801DDFC0
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DDFC4
  goto L_801DDFD8; // 801DDFC8
L_801DDFCC:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DDFCC
  c->r[7]=c->r[30]+c->r[0]; // 801DDFD0
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DDFD4
L_801DDFD8:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DDFD8
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DDFDC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DDFE0
  c->r[7]=R32(c->r[5]+0x00000034u); // 801DDFE4
  c->r[0]=c->r[8]+c->r[0]; // 801DDFE8
  c->r[0]=c->r[7]+c->r[0]; // 801DDFEC
  cmps(c,0,(int32_t)c->r[0],-904); // 801DDFF0
  if (crb(c,1)) { goto L_801DE000; } // 801DDFF4
  c->r[0]=0u+0x00000000u; // 801DDFF8
  goto L_801DE01C; // 801DDFFC
L_801DE000:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE000
  if (crb(c,0)) { goto L_801DE010; } // 801DE004
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE008
  goto L_801DE01C; // 801DE00C
L_801DE010:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE010
  c->r[7]=c->r[30]+c->r[0]; // 801DE014
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE018
L_801DE01C:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DE01C
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DE020
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DE024
  c->r[7]=R32(c->r[5]+0x00000038u); // 801DE028
  c->r[0]=c->r[8]+c->r[0]; // 801DE02C
  c->r[0]=c->r[7]+c->r[0]; // 801DE030
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE034
  if (crb(c,1)) { goto L_801DE044; } // 801DE038
  c->r[0]=0u+0x00000000u; // 801DE03C
  goto L_801DE060; // 801DE040
L_801DE044:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE044
  if (crb(c,0)) { goto L_801DE054; } // 801DE048
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE04C
  goto L_801DE060; // 801DE050
L_801DE054:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE054
  c->r[7]=c->r[30]+c->r[0]; // 801DE058
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE05C
L_801DE060:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DE060
  goto L_801DE198; // 801DE064
L_801DE068:;
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DE068
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DE06C
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE070
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DE074
  c->r[7]=c->r[9]+c->r[7]; // 801DE078
  c->r[0]=c->r[8]+c->r[0]; // 801DE07C
  c->r[0]=c->r[7]+c->r[0]; // 801DE080
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE084
  if (crb(c,1)) { goto L_801DE094; } // 801DE088
  c->r[0]=0u+0x00000000u; // 801DE08C
  goto L_801DE0B0; // 801DE090
L_801DE094:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE094
  if (crb(c,0)) { goto L_801DE0A4; } // 801DE098
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE09C
  goto L_801DE0B0; // 801DE0A0
L_801DE0A4:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE0A4
  c->r[7]=c->r[30]+c->r[0]; // 801DE0A8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE0AC
L_801DE0B0:;
  W16(c->r[5]+0x0000004Eu,c->r[0]); // 801DE0B0
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DE0B4
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DE0B8
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE0BC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DE0C0
  c->r[7]=c->r[9]+c->r[7]; // 801DE0C4
  c->r[0]=c->r[8]+c->r[0]; // 801DE0C8
  c->r[0]=c->r[7]+c->r[0]; // 801DE0CC
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE0D0
  if (crb(c,1)) { goto L_801DE0E0; } // 801DE0D4
  c->r[0]=0u+0x00000000u; // 801DE0D8
  goto L_801DE0FC; // 801DE0DC
L_801DE0E0:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE0E0
  if (crb(c,0)) { goto L_801DE0F0; } // 801DE0E4
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE0E8
  goto L_801DE0FC; // 801DE0EC
L_801DE0F0:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE0F0
  c->r[7]=c->r[30]+c->r[0]; // 801DE0F4
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE0F8
L_801DE0FC:;
  W16(c->r[5]+0x00000052u,c->r[0]); // 801DE0FC
  c->r[9]=R32(c->r[5]+0x00000030u); // 801DE100
  c->r[7]=R32(c->r[5]+0x00000034u); // 801DE104
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE108
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DE10C
  c->r[7]=c->r[9]+c->r[7]; // 801DE110
  c->r[0]=c->r[8]+c->r[0]; // 801DE114
  c->r[0]=c->r[7]+c->r[0]; // 801DE118
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE11C
  if (crb(c,1)) { goto L_801DE12C; } // 801DE120
  c->r[0]=0u+0x00000000u; // 801DE124
  goto L_801DE148; // 801DE128
L_801DE12C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE12C
  if (crb(c,0)) { goto L_801DE13C; } // 801DE130
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE134
  goto L_801DE148; // 801DE138
L_801DE13C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE13C
  c->r[7]=c->r[30]+c->r[0]; // 801DE140
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE144
L_801DE148:;
  W16(c->r[5]+0x00000056u,c->r[0]); // 801DE148
  c->r[9]=R32(c->r[5]+0x00000030u); // 801DE14C
  c->r[7]=R32(c->r[5]+0x00000038u); // 801DE150
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE154
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DE158
  c->r[7]=c->r[9]+c->r[7]; // 801DE15C
  c->r[0]=c->r[8]+c->r[0]; // 801DE160
  c->r[0]=c->r[7]+c->r[0]; // 801DE164
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE168
  if (crb(c,1)) { goto L_801DE178; } // 801DE16C
  c->r[0]=0u+0x00000000u; // 801DE170
  goto L_801DE194; // 801DE174
L_801DE178:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE178
  if (crb(c,0)) { goto L_801DE188; } // 801DE17C
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE180
  goto L_801DE194; // 801DE184
L_801DE188:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE188
  c->r[7]=c->r[30]+c->r[0]; // 801DE18C
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE190
L_801DE194:;
  W16(c->r[5]+0x0000006Au,c->r[0]); // 801DE194
L_801DE198:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DE198
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DE19C
  if (crb(c,2)) { goto L_801DE2B8; } // 801DE1A0
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DE1A4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE1A8
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DE1AC
  c->r[0]=c->r[8]+c->r[0]; // 801DE1B0
  c->r[0]=c->r[7]+c->r[0]; // 801DE1B4
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE1B8
  if (crb(c,1)) { goto L_801DE1C8; } // 801DE1BC
  c->r[0]=0u+0x00000000u; // 801DE1C0
  goto L_801DE1E4; // 801DE1C4
L_801DE1C8:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE1C8
  if (crb(c,0)) { goto L_801DE1D8; } // 801DE1CC
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE1D0
  goto L_801DE1E4; // 801DE1D4
L_801DE1D8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE1D8
  c->r[7]=c->r[30]+c->r[0]; // 801DE1DC
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE1E0
L_801DE1E4:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DE1E4
  c->r[8]=R32(c->r[5]+0x0000002Cu); // 801DE1E8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE1EC
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DE1F0
  c->r[0]=c->r[8]+c->r[0]; // 801DE1F4
  c->r[0]=c->r[7]+c->r[0]; // 801DE1F8
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE1FC
  if (crb(c,1)) { goto L_801DE20C; } // 801DE200
  c->r[0]=0u+0x00000000u; // 801DE204
  goto L_801DE228; // 801DE208
L_801DE20C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE20C
  if (crb(c,0)) { goto L_801DE21C; } // 801DE210
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE214
  goto L_801DE228; // 801DE218
L_801DE21C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE21C
  c->r[7]=c->r[30]+c->r[0]; // 801DE220
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE224
L_801DE228:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DE228
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DE22C
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE230
  c->r[7]=R32(c->r[5]+0x00000034u); // 801DE234
  c->r[0]=c->r[8]+c->r[0]; // 801DE238
  c->r[0]=c->r[7]+c->r[0]; // 801DE23C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE240
  if (crb(c,1)) { goto L_801DE250; } // 801DE244
  c->r[0]=0u+0x00000000u; // 801DE248
  goto L_801DE26C; // 801DE24C
L_801DE250:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE250
  if (crb(c,0)) { goto L_801DE260; } // 801DE254
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE258
  goto L_801DE26C; // 801DE25C
L_801DE260:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE260
  c->r[7]=c->r[30]+c->r[0]; // 801DE264
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE268
L_801DE26C:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DE26C
  c->r[8]=R32(c->r[5]+0x00000030u); // 801DE270
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE274
  c->r[7]=R32(c->r[5]+0x00000038u); // 801DE278
  c->r[0]=c->r[8]+c->r[0]; // 801DE27C
  c->r[0]=c->r[7]+c->r[0]; // 801DE280
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE284
  if (crb(c,1)) { goto L_801DE294; } // 801DE288
  c->r[0]=0u+0x00000000u; // 801DE28C
  goto L_801DE2B0; // 801DE290
L_801DE294:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE294
  if (crb(c,0)) { goto L_801DE2A4; } // 801DE298
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE29C
  goto L_801DE2B0; // 801DE2A0
L_801DE2A4:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE2A4
  c->r[7]=c->r[30]+c->r[0]; // 801DE2A8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE2AC
L_801DE2B0:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DE2B0
  goto L_801DE3E8; // 801DE2B4
L_801DE2B8:;
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DE2B8
  c->r[7]=R32(c->r[5]+0x00000024u); // 801DE2BC
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE2C0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE2C4
  c->r[7]=c->r[9]+c->r[7]; // 801DE2C8
  c->r[0]=c->r[8]+c->r[0]; // 801DE2CC
  c->r[0]=c->r[7]+c->r[0]; // 801DE2D0
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE2D4
  if (crb(c,1)) { goto L_801DE2E4; } // 801DE2D8
  c->r[0]=0u+0x00000000u; // 801DE2DC
  goto L_801DE300; // 801DE2E0
L_801DE2E4:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE2E4
  if (crb(c,0)) { goto L_801DE2F4; } // 801DE2E8
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE2EC
  goto L_801DE300; // 801DE2F0
L_801DE2F4:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE2F4
  c->r[7]=c->r[30]+c->r[0]; // 801DE2F8
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE2FC
L_801DE300:;
  W16(c->r[5]+0x0000005Au,c->r[0]); // 801DE300
  c->r[9]=R32(c->r[5]+0x0000002Cu); // 801DE304
  c->r[7]=R32(c->r[5]+0x00000028u); // 801DE308
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE30C
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE310
  c->r[7]=c->r[9]+c->r[7]; // 801DE314
  c->r[0]=c->r[8]+c->r[0]; // 801DE318
  c->r[0]=c->r[7]+c->r[0]; // 801DE31C
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE320
  if (crb(c,1)) { goto L_801DE330; } // 801DE324
  c->r[0]=0u+0x00000000u; // 801DE328
  goto L_801DE34C; // 801DE32C
L_801DE330:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE330
  if (crb(c,0)) { goto L_801DE340; } // 801DE334
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE338
  goto L_801DE34C; // 801DE33C
L_801DE340:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE340
  c->r[7]=c->r[30]+c->r[0]; // 801DE344
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE348
L_801DE34C:;
  W16(c->r[5]+0x0000005Eu,c->r[0]); // 801DE34C
  c->r[9]=R32(c->r[5]+0x00000030u); // 801DE350
  c->r[7]=R32(c->r[5]+0x00000034u); // 801DE354
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE358
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE35C
  c->r[7]=c->r[9]+c->r[7]; // 801DE360
  c->r[0]=c->r[8]+c->r[0]; // 801DE364
  c->r[0]=c->r[7]+c->r[0]; // 801DE368
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE36C
  if (crb(c,1)) { goto L_801DE37C; } // 801DE370
  c->r[0]=0u+0x00000000u; // 801DE374
  goto L_801DE398; // 801DE378
L_801DE37C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE37C
  if (crb(c,0)) { goto L_801DE38C; } // 801DE380
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE384
  goto L_801DE398; // 801DE388
L_801DE38C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE38C
  c->r[7]=c->r[30]+c->r[0]; // 801DE390
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE394
L_801DE398:;
  W16(c->r[5]+0x00000062u,c->r[0]); // 801DE398
  c->r[9]=R32(c->r[5]+0x00000030u); // 801DE39C
  c->r[7]=R32(c->r[5]+0x00000038u); // 801DE3A0
  c->r[8]=R32(c->r[5]+0x00000020u); // 801DE3A4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801DE3A8
  c->r[7]=c->r[9]+c->r[7]; // 801DE3AC
  c->r[0]=c->r[8]+c->r[0]; // 801DE3B0
  c->r[0]=c->r[7]+c->r[0]; // 801DE3B4
  cmps(c,0,(int32_t)c->r[0],-904); // 801DE3B8
  if (crb(c,1)) { goto L_801DE3C8; } // 801DE3BC
  c->r[0]=0u+0x00000000u; // 801DE3C0
  goto L_801DE3E4; // 801DE3C4
L_801DE3C8:;
  cmps(c,0,(int32_t)c->r[0],60); // 801DE3C8
  if (crb(c,0)) { goto L_801DE3D8; } // 801DE3CC
  c->r[0]=c->r[29]+0xFFFFFF64u; // 801DE3D0
  goto L_801DE3E4; // 801DE3D4
L_801DE3D8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DE3D8
  c->r[7]=c->r[30]+c->r[0]; // 801DE3DC
  c->r[0]=R16(c->r[7]+0x00000710u); // 801DE3E0
L_801DE3E4:;
  W16(c->r[5]+0x0000006Eu,c->r[0]); // 801DE3E4
L_801DE3E8:;
  c->r[6]=c->r[6]|0x80000000u; // 801DE3E8
L_801DE3EC:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 801DE3EC
  c->r[0]=0u+0x00000001u; // 801DE3F0
  c->r[7]=rotl(c->r[7],0)&0xBFFFFFFFu; // 801DE3F4
  c->r[7]=c->r[7]|0x80000000u; // 801DE3F8
  W32(c->r[5]+0x00000004u,c->r[7]); // 801DE3FC
L_801DE400:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DE400
  if (crb(c,2)) { goto L_801DE440; } // 801DE404
  c->r[3]=R16(c->r[5]+0x0000003Cu); // 801DE408
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE40C
  W16(c->r[4]+0x00000092u,c->r[3]); // 801DE410
  c->r[7]=R16(c->r[5]+0x0000003Cu); // 801DE414
  c->r[3]=R16(c->r[5]+0x0000003Eu); // 801DE418
  c->r[3]=c->r[3]-c->r[7]; // 801DE41C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[3])>>32); // 801DE420
  c->r[3]=sraw(c,c->r[3],4); // 801DE424
  c->r[7]=rotl(c->r[3],1)&0x00000001u; // 801DE428
  c->r[3]=c->r[3]+c->r[7]; // 801DE42C
  W16(c->r[4]+0x00000094u,c->r[3]); // 801DE430
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 801DE434
  c->r[3]=c->r[3]|0x00000100u; // 801DE438
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801DE43C
L_801DE440:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DE440
  if (crb(c,2)) { goto L_801DE78C; } // 801DE444
  c->r[0]=R16(c->r[5]+0x00000040u); // 801DE448
  c->r[3]=c->r[4]+0x0000003Eu; // 801DE44C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE450
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 801DE454
  if (crb(c,2)) { goto L_801DE460; } // 801DE458
  c->r[6]=c->r[6]|0x00000001u; // 801DE45C
L_801DE460:;
  c->r[7]=R16(c->r[5]+0x00000040u); // 801DE460
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE464
  c->r[0]=R16(c->r[5]+0x00000042u); // 801DE468
  c->r[0]=c->r[0]-c->r[7]; // 801DE46C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE470
  c->r[0]=sraw(c,c->r[0],4); // 801DE474
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE478
  c->r[7]=c->r[0]+c->r[7]; // 801DE47C
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE480
  W16(c->r[3]+0x00000000u,c->r[7]); // 801DE484
  if (crb(c,2)) { goto L_801DE490; } // 801DE488
  c->r[6]=c->r[6]|0x00000004u; // 801DE48C
L_801DE490:;
  c->r[0]=R16(c->r[5]+0x00000044u); // 801DE490
  cmps(c,0,(int32_t)c->r[0],0); // 801DE494
  W16(c->r[3]+0x00000002u,c->r[0]); // 801DE498
  if (crb(c,2)) { goto L_801DE4A4; } // 801DE49C
  c->r[6]=c->r[6]|0x00000002u; // 801DE4A0
L_801DE4A4:;
  c->r[7]=R16(c->r[5]+0x00000044u); // 801DE4A4
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE4A8
  c->r[0]=R16(c->r[5]+0x00000046u); // 801DE4AC
  c->r[0]=c->r[0]-c->r[7]; // 801DE4B0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE4B4
  c->r[0]=sraw(c,c->r[0],4); // 801DE4B8
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE4BC
  c->r[7]=c->r[0]+c->r[7]; // 801DE4C0
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE4C4
  W16(c->r[3]+0x00000004u,c->r[7]); // 801DE4C8
  if (crb(c,2)) { goto L_801DE4D4; } // 801DE4CC
  c->r[6]=c->r[6]|0x00000004u; // 801DE4D0
L_801DE4D4:;
  c->r[0]=R16(c->r[5]+0x0000004Cu); // 801DE4D4
  cmps(c,0,(int32_t)c->r[0],0); // 801DE4D8
  W16(c->r[3]+0x00000006u,c->r[0]); // 801DE4DC
  if (crb(c,2)) { goto L_801DE4E8; } // 801DE4E0
  c->r[6]=c->r[6]|0x00010000u; // 801DE4E4
L_801DE4E8:;
  c->r[7]=R16(c->r[5]+0x0000004Cu); // 801DE4E8
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE4EC
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801DE4F0
  c->r[0]=c->r[0]-c->r[7]; // 801DE4F4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE4F8
  c->r[0]=sraw(c,c->r[0],4); // 801DE4FC
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE500
  c->r[7]=c->r[0]+c->r[7]; // 801DE504
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE508
  W16(c->r[3]+0x00000008u,c->r[7]); // 801DE50C
  if (crb(c,2)) { goto L_801DE518; } // 801DE510
  c->r[6]=c->r[6]|0x00040000u; // 801DE514
L_801DE518:;
  c->r[0]=R16(c->r[5]+0x00000050u); // 801DE518
  cmps(c,0,(int32_t)c->r[0],0); // 801DE51C
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801DE520
  if (crb(c,2)) { goto L_801DE52C; } // 801DE524
  c->r[6]=c->r[6]|0x00020000u; // 801DE528
L_801DE52C:;
  c->r[7]=R16(c->r[5]+0x00000050u); // 801DE52C
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE530
  c->r[0]=R16(c->r[5]+0x00000052u); // 801DE534
  c->r[0]=c->r[0]-c->r[7]; // 801DE538
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE53C
  c->r[0]=sraw(c,c->r[0],4); // 801DE540
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE544
  c->r[7]=c->r[0]+c->r[7]; // 801DE548
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE54C
  W16(c->r[3]+0x0000000Cu,c->r[7]); // 801DE550
  if (crb(c,2)) { goto L_801DE55C; } // 801DE554
  c->r[6]=c->r[6]|0x00040000u; // 801DE558
L_801DE55C:;
  c->r[0]=R16(c->r[5]+0x00000058u); // 801DE55C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE560
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801DE564
  if (crb(c,2)) { goto L_801DE570; } // 801DE568
  c->r[6]=c->r[6]|0x00200000u; // 801DE56C
L_801DE570:;
  c->r[7]=R16(c->r[5]+0x00000058u); // 801DE570
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE574
  c->r[0]=R16(c->r[5]+0x0000005Au); // 801DE578
  c->r[0]=c->r[0]-c->r[7]; // 801DE57C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE580
  c->r[0]=sraw(c,c->r[0],4); // 801DE584
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE588
  c->r[7]=c->r[0]+c->r[7]; // 801DE58C
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE590
  W16(c->r[3]+0x00000010u,c->r[7]); // 801DE594
  if (crb(c,2)) { goto L_801DE5A0; } // 801DE598
  c->r[6]=c->r[6]|0x00800000u; // 801DE59C
L_801DE5A0:;
  c->r[0]=R16(c->r[5]+0x0000005Cu); // 801DE5A0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE5A4
  W16(c->r[3]+0x00000012u,c->r[0]); // 801DE5A8
  if (crb(c,2)) { goto L_801DE5B4; } // 801DE5AC
  c->r[6]=c->r[6]|0x00400000u; // 801DE5B0
L_801DE5B4:;
  c->r[7]=R16(c->r[5]+0x0000005Cu); // 801DE5B4
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE5B8
  c->r[0]=R16(c->r[5]+0x0000005Eu); // 801DE5BC
  c->r[0]=c->r[0]-c->r[7]; // 801DE5C0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE5C4
  c->r[0]=sraw(c,c->r[0],4); // 801DE5C8
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE5CC
  c->r[7]=c->r[0]+c->r[7]; // 801DE5D0
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE5D4
  W16(c->r[3]+0x00000014u,c->r[7]); // 801DE5D8
  if (crb(c,2)) { goto L_801DE5E4; } // 801DE5DC
  c->r[6]=c->r[6]|0x00800000u; // 801DE5E0
L_801DE5E4:;
  c->r[0]=R16(c->r[5]+0x00000064u); // 801DE5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DE5E8
  W16(c->r[3]+0x00000016u,c->r[0]); // 801DE5EC
  if (crb(c,2)) { goto L_801DE5F8; } // 801DE5F0
  c->r[6]=c->r[6]|0x04000000u; // 801DE5F4
L_801DE5F8:;
  c->r[7]=R16(c->r[5]+0x00000064u); // 801DE5F8
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE5FC
  c->r[0]=R16(c->r[5]+0x00000066u); // 801DE600
  c->r[0]=c->r[0]-c->r[7]; // 801DE604
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE608
  c->r[0]=sraw(c,c->r[0],4); // 801DE60C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE610
  c->r[7]=c->r[0]+c->r[7]; // 801DE614
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE618
  W16(c->r[3]+0x00000018u,c->r[7]); // 801DE61C
  if (crb(c,2)) { goto L_801DE628; } // 801DE620
  c->r[6]=c->r[6]|0x10000000u; // 801DE624
L_801DE628:;
  c->r[0]=R16(c->r[5]+0x00000068u); // 801DE628
  cmps(c,0,(int32_t)c->r[0],0); // 801DE62C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801DE630
  if (crb(c,2)) { goto L_801DE63C; } // 801DE634
  c->r[6]=c->r[6]|0x08000000u; // 801DE638
L_801DE63C:;
  c->r[7]=R16(c->r[5]+0x00000068u); // 801DE63C
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE640
  c->r[0]=R16(c->r[5]+0x0000006Au); // 801DE644
  c->r[0]=c->r[0]-c->r[7]; // 801DE648
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE64C
  c->r[0]=sraw(c,c->r[0],4); // 801DE650
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE654
  c->r[7]=c->r[0]+c->r[7]; // 801DE658
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE65C
  W16(c->r[3]+0x0000001Cu,c->r[7]); // 801DE660
  if (crb(c,2)) { goto L_801DE66C; } // 801DE664
  c->r[6]=c->r[6]|0x10000000u; // 801DE668
L_801DE66C:;
  c->r[0]=R16(c->r[5]+0x00000048u); // 801DE66C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE670
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801DE674
  if (crb(c,2)) { goto L_801DE680; } // 801DE678
  c->r[6]=c->r[6]|0x00000008u; // 801DE67C
L_801DE680:;
  c->r[7]=R16(c->r[5]+0x00000048u); // 801DE680
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE684
  c->r[0]=R16(c->r[5]+0x0000004Au); // 801DE688
  c->r[0]=c->r[0]-c->r[7]; // 801DE68C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE690
  c->r[0]=sraw(c,c->r[0],4); // 801DE694
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE698
  c->r[7]=c->r[0]+c->r[7]; // 801DE69C
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE6A0
  W16(c->r[3]+0x00000020u,c->r[7]); // 801DE6A4
  if (crb(c,2)) { goto L_801DE6B0; } // 801DE6A8
  c->r[6]=c->r[6]|0x00000010u; // 801DE6AC
L_801DE6B0:;
  c->r[0]=R16(c->r[5]+0x00000054u); // 801DE6B0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE6B4
  W16(c->r[3]+0x00000022u,c->r[0]); // 801DE6B8
  if (crb(c,2)) { goto L_801DE6C4; } // 801DE6BC
  c->r[6]=c->r[6]|0x00080000u; // 801DE6C0
L_801DE6C4:;
  c->r[7]=R16(c->r[5]+0x00000054u); // 801DE6C4
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE6C8
  c->r[0]=R16(c->r[5]+0x00000056u); // 801DE6CC
  c->r[0]=c->r[0]-c->r[7]; // 801DE6D0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE6D4
  c->r[0]=sraw(c,c->r[0],4); // 801DE6D8
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE6DC
  c->r[7]=c->r[0]+c->r[7]; // 801DE6E0
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE6E4
  W16(c->r[3]+0x00000024u,c->r[7]); // 801DE6E8
  if (crb(c,2)) { goto L_801DE6F4; } // 801DE6EC
  c->r[6]=c->r[6]|0x00100000u; // 801DE6F0
L_801DE6F4:;
  c->r[0]=R16(c->r[5]+0x00000060u); // 801DE6F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DE6F8
  W16(c->r[3]+0x00000026u,c->r[0]); // 801DE6FC
  if (crb(c,2)) { goto L_801DE708; } // 801DE700
  c->r[6]=c->r[6]|0x01000000u; // 801DE704
L_801DE708:;
  c->r[7]=R16(c->r[5]+0x00000060u); // 801DE708
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE70C
  c->r[0]=R16(c->r[5]+0x00000062u); // 801DE710
  c->r[0]=c->r[0]-c->r[7]; // 801DE714
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE718
  c->r[0]=sraw(c,c->r[0],4); // 801DE71C
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801DE720
  c->r[7]=c->r[0]+c->r[7]; // 801DE724
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE728
  W16(c->r[3]+0x00000028u,c->r[7]); // 801DE72C
  if (crb(c,2)) { goto L_801DE738; } // 801DE730
  c->r[6]=c->r[6]|0x02000000u; // 801DE734
L_801DE738:;
  c->r[0]=R16(c->r[5]+0x0000006Cu); // 801DE738
  cmps(c,0,(int32_t)c->r[0],0); // 801DE73C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801DE740
  if (crb(c,2)) { goto L_801DE74C; } // 801DE744
  c->r[6]=c->r[6]|0x20000000u; // 801DE748
L_801DE74C:;
  c->r[7]=R16(c->r[5]+0x0000006Cu); // 801DE74C
  c->r[8]=c->r[31]+0xFFFFAAABu; // 801DE750
  c->r[0]=R16(c->r[5]+0x0000006Eu); // 801DE754
  c->r[0]=c->r[0]-c->r[7]; // 801DE758
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 801DE75C
  c->r[0]=sraw(c,c->r[0],4); // 801DE760
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801DE764
  c->r[5]=c->r[0]+c->r[5]; // 801DE768
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DE76C
  W16(c->r[3]+0x0000002Cu,c->r[5]); // 801DE770
  if (crb(c,2)) { goto L_801DE77C; } // 801DE774
  c->r[6]=c->r[6]|0x40000000u; // 801DE778
L_801DE77C:;
  W32(c->r[4]+0x00000034u,c->r[6]); // 801DE77C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801DE780
  c->r[0]=c->r[0]|0x00000012u; // 801DE784
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801DE788
L_801DE78C:;
  c->r[3]=c->r[26]|c->r[26]; // 801DE78C
  c->lr=0x801DE794u; f_801DE80C(c); // 801DE790
L_801DE794:;
  c->r[27]=c->r[27]+0x00000070u; // 801DE794
  c->r[26]=c->r[26]+0x00000001u; // 801DE798
L_801DE79C:;
  c->r[0]=R32(c->r[13]+0xFFFFA0E8u); // 801DE79C
  cmpu(c,0,c->r[26],c->r[0]); // 801DE7A0
  if (crb(c,0)) { IRQCHK(c); goto L_801DD170; } // 801DE7A4
L_801DE7A8:;
  c->r[11]=c->r[1]+0x00000020u; // 801DE7A8
  c->lr=0x801DE7B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DE7AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE7B0
  c->lr=c->r[0]; // 801DE7B4
  c->r[1]=c->r[1]+0x00000020u; // 801DE7B8
  return; // 801DE7BC
}

// fn_801DE7C0
void f_801DE7C0(Ctx* __restrict c) {
  trace_call(0x801DE7C0u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 801DE7C0
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801DE7C4
  c->r[4]=R32(c->r[13]+0xFFFFA0F0u); // 801DE7C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801DE7CC
  c->r[12]=R32(c->r[1]+0x00000008u); // 801DE7D0
  c->r[11]=R32(c->r[1]+0x0000000Cu); // 801DE7D4
  {uint32_t ea=c->r[4]+c->r[3]; c->r[3]=R32(ea); c->r[4]=ea;} // 801DE7D8
  W32(c->r[4]+0x00000004u,c->r[5]); // 801DE7DC
  c->r[0]=c->r[3]|c->r[0]; // 801DE7E0
  c->r[0]=c->r[0]|0x40000000u; // 801DE7E4
  W32(c->r[4]+0x00000008u,c->r[6]); // 801DE7E8
  W32(c->r[4]+0x0000000Cu,c->r[7]); // 801DE7EC
  W32(c->r[4]+0x00000010u,c->r[8]); // 801DE7F0
  W32(c->r[4]+0x00000014u,c->r[9]); // 801DE7F4
  W32(c->r[4]+0x00000018u,c->r[10]); // 801DE7F8
  W32(c->r[4]+0x0000001Cu,c->r[12]); // 801DE7FC
  W32(c->r[4]+0x00000020u,c->r[11]); // 801DE800
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DE804
  return; // 801DE808
}

// fn_801DE80C
void f_801DE80C(Ctx* __restrict c) {
  trace_call(0x801DE80Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE80C
  c->r[0]=c->lr; // 801DE810
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE814
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801DE818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE81C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE820
  c->r[30]=c->r[4]|c->r[4]; // 801DE824
  c->r[3]=R32(c->r[13]+0xFFFFA0F0u); // 801DE828
  c->r[31]=c->r[3]+c->r[0]; // 801DE82C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DE830
  c->r[0]=rotl(c->r[3],0)&0xC0000000u; cr0(c,c->r[0]); // 801DE834
  if (crb(c,2)) { goto L_801DEC30; } // 801DE838
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 801DE83C
  if (crb(c,2)) { goto L_801DE890; } // 801DE840
  c->r[0]=R16(c->r[31]+0x00000026u); // 801DE844
  W16(c->r[31]+0x00000024u,c->r[0]); // 801DE848
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801DE84C
  W16(c->r[31]+0x00000028u,c->r[0]); // 801DE850
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801DE854
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801DE858
  c->r[0]=R16(c->r[31]+0x00000032u); // 801DE85C
  W16(c->r[31]+0x00000030u,c->r[0]); // 801DE860
  c->r[0]=R16(c->r[31]+0x00000036u); // 801DE864
  W16(c->r[31]+0x00000034u,c->r[0]); // 801DE868
  c->r[0]=R16(c->r[31]+0x0000003Au); // 801DE86C
  W16(c->r[31]+0x00000038u,c->r[0]); // 801DE870
  c->r[0]=R16(c->r[31]+0x0000003Eu); // 801DE874
  W16(c->r[31]+0x0000003Cu,c->r[0]); // 801DE878
  c->r[0]=R16(c->r[31]+0x00000042u); // 801DE87C
  W16(c->r[31]+0x00000040u,c->r[0]); // 801DE880
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE884
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801DE888
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DE88C
L_801DE890:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE890
  c->r[0]=rotl(c->r[0],0)&0x40000000u; cr0(c,c->r[0]); // 801DE894
  if (crb(c,2)) { goto L_801DE99C; } // 801DE898
  c->r[3]=R32(c->r[31]+0x00000004u); // 801DE89C
  c->lr=0x801DE8A4u; f_801DB6E4(c); // 801DE8A0
  W16(c->r[31]+0x00000026u,c->r[3]); // 801DE8A4
  c->r[3]=R32(c->r[31]+0x00000008u); // 801DE8A8
  c->lr=0x801DE8B0u; f_801DB6E4(c); // 801DE8AC
  W16(c->r[31]+0x0000002Eu,c->r[3]); // 801DE8B0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801DE8B4
  c->lr=0x801DE8BCu; f_801DB6E4(c); // 801DE8B8
  W16(c->r[31]+0x00000036u,c->r[3]); // 801DE8BC
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DE8C0
  c->lr=0x801DE8C8u; f_801DB6E4(c); // 801DE8C4
  W16(c->r[31]+0x0000003Eu,c->r[3]); // 801DE8C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE8CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DE8D0
  if (crb(c,2)) { goto L_801DE8E8; } // 801DE8D4
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DE8D8
  c->lr=0x801DE8E0u; f_801DB6E4(c); // 801DE8DC
  W16(c->r[31]+0x0000002Au,c->r[3]); // 801DE8E0
  goto L_801DE8FC; // 801DE8E4
L_801DE8E8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801DE8E8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DE8EC
  c->r[3]=c->r[3]+c->r[0]; // 801DE8F0
  c->lr=0x801DE8F8u; f_801DB6E4(c); // 801DE8F4
  W16(c->r[31]+0x0000002Au,c->r[3]); // 801DE8F8
L_801DE8FC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE8FC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DE900
  if (crb(c,2)) { goto L_801DE918; } // 801DE904
  c->r[3]=R32(c->r[31]+0x00000018u); // 801DE908
  c->lr=0x801DE910u; f_801DB6E4(c); // 801DE90C
  W16(c->r[31]+0x00000032u,c->r[3]); // 801DE910
  goto L_801DE92C; // 801DE914
L_801DE918:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801DE918
  c->r[0]=R32(c->r[31]+0x00000018u); // 801DE91C
  c->r[3]=c->r[3]+c->r[0]; // 801DE920
  c->lr=0x801DE928u; f_801DB6E4(c); // 801DE924
  W16(c->r[31]+0x00000032u,c->r[3]); // 801DE928
L_801DE92C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE92C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DE930
  if (crb(c,2)) { goto L_801DE948; } // 801DE934
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801DE938
  c->lr=0x801DE940u; f_801DB6E4(c); // 801DE93C
  W16(c->r[31]+0x0000003Au,c->r[3]); // 801DE940
  goto L_801DE95C; // 801DE944
L_801DE948:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801DE948
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801DE94C
  c->r[3]=c->r[3]+c->r[0]; // 801DE950
  c->lr=0x801DE958u; f_801DB6E4(c); // 801DE954
  W16(c->r[31]+0x0000003Au,c->r[3]); // 801DE958
L_801DE95C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE95C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DE960
  if (crb(c,2)) { goto L_801DE978; } // 801DE964
  c->r[3]=R32(c->r[31]+0x00000020u); // 801DE968
  c->lr=0x801DE970u; f_801DB6E4(c); // 801DE96C
  W16(c->r[31]+0x00000042u,c->r[3]); // 801DE970
  goto L_801DE98C; // 801DE974
L_801DE978:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DE978
  c->r[0]=R32(c->r[31]+0x00000020u); // 801DE97C
  c->r[3]=c->r[3]+c->r[0]; // 801DE980
  c->lr=0x801DE988u; f_801DB6E4(c); // 801DE984
  W16(c->r[31]+0x00000042u,c->r[3]); // 801DE988
L_801DE98C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DE98C
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801DE990
  c->r[0]=c->r[0]|0x80000000u; // 801DE994
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DE998
L_801DE99C:;
  c->r[4]=R16(c->r[31]+0x00000024u); // 801DE99C
  c->r[3]=c->r[30]+0x00000104u; // 801DE9A0
  c->r[0]=0u+0x00000000u; // 801DE9A4
  cmps(c,0,(int32_t)c->r[4],0); // 801DE9A8
  W16(c->r[30]+0x00000102u,c->r[4]); // 801DE9AC
  if (crb(c,2)) { goto L_801DE9B8; } // 801DE9B0
  c->r[0]=c->r[0]|0x00000001u; // 801DE9B4
L_801DE9B8:;
  c->r[6]=R16(c->r[31]+0x00000024u); // 801DE9B8
  c->r[4]=0u+0x38E40000u; // 801DE9BC
  c->r[5]=R16(c->r[31]+0x00000026u); // 801DE9C0
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DE9C4
  c->r[4]=c->r[5]-c->r[6]; // 801DE9C8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DE9CC
  c->r[4]=sraw(c,c->r[4],2); // 801DE9D0
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DE9D4
  c->r[5]=c->r[4]+c->r[5]; // 801DE9D8
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DE9DC
  W16(c->r[3]+0x00000000u,c->r[5]); // 801DE9E0
  if (crb(c,2)) { goto L_801DE9F0; } // 801DE9E4
  c->r[0]=c->r[0]|0x00000002u; // 801DE9E8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE9EC
L_801DE9F0:;
  c->r[4]=R16(c->r[31]+0x00000028u); // 801DE9F0
  cmps(c,0,(int32_t)c->r[4],0); // 801DE9F4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DE9F8
  if (crb(c,2)) { goto L_801DEA08; } // 801DE9FC
  c->r[0]=c->r[0]|0x00000004u; // 801DEA00
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEA04
L_801DEA08:;
  c->r[6]=R16(c->r[31]+0x00000028u); // 801DEA08
  c->r[4]=0u+0x38E40000u; // 801DEA0C
  c->r[5]=R16(c->r[31]+0x0000002Au); // 801DEA10
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEA14
  c->r[4]=c->r[5]-c->r[6]; // 801DEA18
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEA1C
  c->r[4]=sraw(c,c->r[4],2); // 801DEA20
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEA24
  c->r[5]=c->r[4]+c->r[5]; // 801DEA28
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEA2C
  W16(c->r[3]+0x00000004u,c->r[5]); // 801DEA30
  if (crb(c,2)) { goto L_801DEA40; } // 801DEA34
  c->r[0]=c->r[0]|0x00000008u; // 801DEA38
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEA3C
L_801DEA40:;
  c->r[4]=R16(c->r[31]+0x0000002Cu); // 801DEA40
  cmps(c,0,(int32_t)c->r[4],0); // 801DEA44
  W16(c->r[3]+0x00000006u,c->r[4]); // 801DEA48
  if (crb(c,2)) { goto L_801DEA58; } // 801DEA4C
  c->r[0]=c->r[0]|0x00000010u; // 801DEA50
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEA54
L_801DEA58:;
  c->r[6]=R16(c->r[31]+0x0000002Cu); // 801DEA58
  c->r[4]=0u+0x38E40000u; // 801DEA5C
  c->r[5]=R16(c->r[31]+0x0000002Eu); // 801DEA60
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEA64
  c->r[4]=c->r[5]-c->r[6]; // 801DEA68
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEA6C
  c->r[4]=sraw(c,c->r[4],2); // 801DEA70
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEA74
  c->r[5]=c->r[4]+c->r[5]; // 801DEA78
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEA7C
  W16(c->r[3]+0x00000008u,c->r[5]); // 801DEA80
  if (crb(c,2)) { goto L_801DEA90; } // 801DEA84
  c->r[0]=c->r[0]|0x00000020u; // 801DEA88
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEA8C
L_801DEA90:;
  c->r[4]=R16(c->r[31]+0x00000030u); // 801DEA90
  cmps(c,0,(int32_t)c->r[4],0); // 801DEA94
  W16(c->r[3]+0x0000000Au,c->r[4]); // 801DEA98
  if (crb(c,2)) { goto L_801DEAA8; } // 801DEA9C
  c->r[0]=c->r[0]|0x00000040u; // 801DEAA0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEAA4
L_801DEAA8:;
  c->r[6]=R16(c->r[31]+0x00000030u); // 801DEAA8
  c->r[4]=0u+0x38E40000u; // 801DEAAC
  c->r[5]=R16(c->r[31]+0x00000032u); // 801DEAB0
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEAB4
  c->r[4]=c->r[5]-c->r[6]; // 801DEAB8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEABC
  c->r[4]=sraw(c,c->r[4],2); // 801DEAC0
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEAC4
  c->r[5]=c->r[4]+c->r[5]; // 801DEAC8
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEACC
  W16(c->r[3]+0x0000000Cu,c->r[5]); // 801DEAD0
  if (crb(c,2)) { goto L_801DEAE0; } // 801DEAD4
  c->r[0]=c->r[0]|0x00000080u; // 801DEAD8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEADC
L_801DEAE0:;
  c->r[4]=R16(c->r[31]+0x00000034u); // 801DEAE0
  cmps(c,0,(int32_t)c->r[4],0); // 801DEAE4
  W16(c->r[3]+0x0000000Eu,c->r[4]); // 801DEAE8
  if (crb(c,2)) { goto L_801DEAF8; } // 801DEAEC
  c->r[0]=c->r[0]|0x00000100u; // 801DEAF0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEAF4
L_801DEAF8:;
  c->r[6]=R16(c->r[31]+0x00000034u); // 801DEAF8
  c->r[4]=0u+0x38E40000u; // 801DEAFC
  c->r[5]=R16(c->r[31]+0x00000036u); // 801DEB00
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEB04
  c->r[4]=c->r[5]-c->r[6]; // 801DEB08
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEB0C
  c->r[4]=sraw(c,c->r[4],2); // 801DEB10
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEB14
  c->r[5]=c->r[4]+c->r[5]; // 801DEB18
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEB1C
  W16(c->r[3]+0x00000010u,c->r[5]); // 801DEB20
  if (crb(c,2)) { goto L_801DEB30; } // 801DEB24
  c->r[0]=c->r[0]|0x00000200u; // 801DEB28
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEB2C
L_801DEB30:;
  c->r[4]=R16(c->r[31]+0x00000038u); // 801DEB30
  cmps(c,0,(int32_t)c->r[4],0); // 801DEB34
  W16(c->r[3]+0x00000012u,c->r[4]); // 801DEB38
  if (crb(c,2)) { goto L_801DEB48; } // 801DEB3C
  c->r[0]=c->r[0]|0x00000400u; // 801DEB40
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEB44
L_801DEB48:;
  c->r[6]=R16(c->r[31]+0x00000038u); // 801DEB48
  c->r[4]=0u+0x38E40000u; // 801DEB4C
  c->r[5]=R16(c->r[31]+0x0000003Au); // 801DEB50
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEB54
  c->r[4]=c->r[5]-c->r[6]; // 801DEB58
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEB5C
  c->r[4]=sraw(c,c->r[4],2); // 801DEB60
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEB64
  c->r[5]=c->r[4]+c->r[5]; // 801DEB68
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEB6C
  W16(c->r[3]+0x00000014u,c->r[5]); // 801DEB70
  if (crb(c,2)) { goto L_801DEB80; } // 801DEB74
  c->r[0]=c->r[0]|0x00000800u; // 801DEB78
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEB7C
L_801DEB80:;
  c->r[4]=R16(c->r[31]+0x0000003Cu); // 801DEB80
  cmps(c,0,(int32_t)c->r[4],0); // 801DEB84
  W16(c->r[3]+0x00000016u,c->r[4]); // 801DEB88
  if (crb(c,2)) { goto L_801DEB98; } // 801DEB8C
  c->r[0]=c->r[0]|0x00001000u; // 801DEB90
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEB94
L_801DEB98:;
  c->r[6]=R16(c->r[31]+0x0000003Cu); // 801DEB98
  c->r[4]=0u+0x38E40000u; // 801DEB9C
  c->r[5]=R16(c->r[31]+0x0000003Eu); // 801DEBA0
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEBA4
  c->r[4]=c->r[5]-c->r[6]; // 801DEBA8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEBAC
  c->r[4]=sraw(c,c->r[4],2); // 801DEBB0
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEBB4
  c->r[5]=c->r[4]+c->r[5]; // 801DEBB8
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEBBC
  W16(c->r[3]+0x00000018u,c->r[5]); // 801DEBC0
  if (crb(c,2)) { goto L_801DEBD0; } // 801DEBC4
  c->r[0]=c->r[0]|0x00002000u; // 801DEBC8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEBCC
L_801DEBD0:;
  c->r[4]=R16(c->r[31]+0x00000040u); // 801DEBD0
  cmps(c,0,(int32_t)c->r[4],0); // 801DEBD4
  W16(c->r[3]+0x0000001Au,c->r[4]); // 801DEBD8
  if (crb(c,2)) { goto L_801DEBE8; } // 801DEBDC
  c->r[0]=c->r[0]|0x00004000u; // 801DEBE0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEBE4
L_801DEBE8:;
  c->r[6]=R16(c->r[31]+0x00000040u); // 801DEBE8
  c->r[4]=0u+0x38E40000u; // 801DEBEC
  c->r[5]=R16(c->r[31]+0x00000042u); // 801DEBF0
  c->r[7]=c->r[4]+0xFFFF8E39u; // 801DEBF4
  c->r[4]=c->r[5]-c->r[6]; // 801DEBF8
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[4])>>32); // 801DEBFC
  c->r[4]=sraw(c,c->r[4],2); // 801DEC00
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801DEC04
  c->r[5]=c->r[4]+c->r[5]; // 801DEC08
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; cr0(c,c->r[4]); // 801DEC0C
  W16(c->r[3]+0x0000001Cu,c->r[5]); // 801DEC10
  if (crb(c,2)) { goto L_801DEC20; } // 801DEC14
  c->r[0]=c->r[0]|0x00008000u; // 801DEC18
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEC1C
L_801DEC20:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801DEC20
  W16(c->r[30]+0x00000100u,c->r[0]); // 801DEC24
  c->r[0]=c->r[3]|0x03000000u; // 801DEC28
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801DEC2C
L_801DEC30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEC30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEC34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DEC38
  c->lr=c->r[0]; // 801DEC3C
  c->r[1]=c->r[1]+0x00000010u; // 801DEC40
  return; // 801DEC44
}

// fn_801DEC48
void f_801DEC48(Ctx* __restrict c) {
  trace_call(0x801DEC48u);
  c->r[5]=R32(c->r[13]+0xFFFFA0F0u); // 801DEC48
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801DEC4C
  c->r[3]=0u+0x00000000u; // 801DEC50
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[3]); c->r[4]=ea;} // 801DEC54
  c->r[0]=0u+0xFFFFFC40u; // 801DEC58
  W32(c->r[4]+0x00000004u,c->r[3]); // 801DEC5C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801DEC60
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801DEC64
  W32(c->r[4]+0x00000010u,c->r[3]); // 801DEC68
  W32(c->r[4]+0x00000014u,c->r[0]); // 801DEC6C
  W32(c->r[4]+0x00000018u,c->r[0]); // 801DEC70
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801DEC74
  W32(c->r[4]+0x00000020u,c->r[0]); // 801DEC78
  W16(c->r[4]+0x00000040u,c->r[3]); // 801DEC7C
  W16(c->r[4]+0x0000003Cu,c->r[3]); // 801DEC80
  W16(c->r[4]+0x00000038u,c->r[3]); // 801DEC84
  W16(c->r[4]+0x00000034u,c->r[3]); // 801DEC88
  W16(c->r[4]+0x00000030u,c->r[3]); // 801DEC8C
  W16(c->r[4]+0x0000002Cu,c->r[3]); // 801DEC90
  W16(c->r[4]+0x00000028u,c->r[3]); // 801DEC94
  W16(c->r[4]+0x00000024u,c->r[3]); // 801DEC98
  return; // 801DEC9C
}

void hle_DSPCheckMailToDSP(Ctx*);
// DSPCheckMailToDSP
void f_801DECA0(Ctx* __restrict c) {
  hle_DSPCheckMailToDSP(c);
}

void hle_DSPCheckMailFromDSP(Ctx*);
// DSPCheckMailFromDSP
void f_801DECB0(Ctx* __restrict c) {
  hle_DSPCheckMailFromDSP(c);
}

// DSPReadMailFromDSP
void f_801DECC0(Ctx* __restrict c) {
  trace_call(0x801DECC0u);
  c->r[3]=0u+0xCC000000u; // 801DECC0
  c->r[0]=R16(c->r[3]+0x00005004u); // 801DECC4
  c->r[3]=R16(c->r[3]+0x00005006u); // 801DECC8
  c->r[3]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[3]&~0xFFFF0000u); // 801DECCC
  return; // 801DECD0
}

void hle_DSPSendMailToDSP(Ctx*);
// DSPSendMailToDSP
void f_801DECD4(Ctx* __restrict c) {
  hle_DSPSendMailToDSP(c);
}

// DSPInit
void f_801DECE8(Ctx* __restrict c) {
  trace_call(0x801DECE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DECE8
  c->r[0]=c->lr; // 801DECEC
  c->r[5]=0u+0x804B0000u; // 801DECF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DECF4
  c->r[5]=c->r[5]+0x000075E0u; // 801DECF8
  c->r[3]=c->r[5]+0x00000048u; // 801DECFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DED00
  c->r[4]=c->r[5]+0x00000068u; // 801DED04
  c->r[5]=c->r[5]+0x00000074u; // 801DED08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DED0C
  c->lr=0x801DED14u; f_801DEF1C(c); // 801DED10
  c->r[0]=R32(c->r[13]+0xFFFFA0F8u); // 801DED14
  cmps(c,0,(int32_t)c->r[0],1); // 801DED18
  if (crb(c,2)) { goto L_801DED94; } // 801DED1C
  c->r[3]=R32(c->r[13]+0xFFFF8510u); // 801DED20
  c->lr=0x801DED28u; f_801B96A0(c); // 801DED24
  c->lr=0x801DED2Cu; f_801BE74C(c); // 801DED28
  c->r[4]=0u+0x801E0000u; // 801DED2C
  c->r[31]=c->r[3]|c->r[3]; // 801DED30
  c->r[4]=c->r[4]+0xFFFFEF6Cu; // 801DED34
  c->r[3]=0u+0x00000007u; // 801DED38
  c->lr=0x801DED40u; f_801BE798(c); // 801DED3C
  c->r[3]=0u+0x01000000u; // 801DED40
  c->lr=0x801DED48u; f_801BEB5C(c); // 801DED44
  c->r[7]=0u+0xCC000000u; // 801DED48
  c->r[3]=0u+0xFFFFFF57u; // 801DED4C
  c->r[6]=R16(c->r[7]+0x0000500Au); // 801DED50
  c->r[5]=0u+0xFFFFFF53u; // 801DED54
  c->r[4]=0u+0x00000000u; // 801DED58
  c->r[0]=0u+0x00000001u; // 801DED5C
  c->r[3]=c->r[6]&c->r[3]; // 801DED60
  c->r[3]=c->r[3]|0x00000800u; // 801DED64
  W16(c->r[7]+0x0000500Au,c->r[3]); // 801DED68
  c->r[3]=c->r[31]|c->r[31]; // 801DED6C
  c->r[6]=R16(c->r[7]+0x0000500Au); // 801DED70
  c->r[5]=c->r[6]&c->r[5]; // 801DED74
  W16(c->r[7]+0x0000500Au,c->r[5]); // 801DED78
  W32(c->r[13]+0xFFFFA108u,c->r[4]); // 801DED7C
  W32(c->r[13]+0xFFFFA114u,c->r[4]); // 801DED80
  W32(c->r[13]+0xFFFFA10Cu,c->r[4]); // 801DED84
  W32(c->r[13]+0xFFFFA110u,c->r[4]); // 801DED88
  W32(c->r[13]+0xFFFFA0F8u,c->r[0]); // 801DED8C
  c->lr=0x801DED94u; f_801BE774(c); // 801DED90
L_801DED94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DED94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DED98
  c->lr=c->r[0]; // 801DED9C
  c->r[1]=c->r[1]+0x00000010u; // 801DEDA0
  return; // 801DEDA4
}

// DSPCheckInit
void f_801DEDA8(Ctx* __restrict c) {
  trace_call(0x801DEDA8u);
  c->r[3]=R32(c->r[13]+0xFFFFA0F8u); // 801DEDA8
  return; // 801DEDAC
}

// DSPAddTask
void f_801DEDB0(Ctx* __restrict c) {
  trace_call(0x801DEDB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEDB0
  c->r[0]=c->lr; // 801DEDB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEDB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEDBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DEDC0
  c->r[30]=c->r[3]|c->r[3]; // 801DEDC4
  c->lr=0x801DEDCCu; f_801BE74C(c); // 801DEDC8
  c->r[31]=c->r[3]|c->r[3]; // 801DEDCC
  c->r[3]=c->r[30]|c->r[30]; // 801DEDD0
  c->lr=0x801DEDD8u; f_801DF6D0(c); // 801DEDD4
  c->r[3]=0u+0x00000000u; // 801DEDD8
  c->r[0]=0u+0x00000001u; // 801DEDDC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801DEDE0
  c->r[3]=c->r[31]|c->r[31]; // 801DEDE4
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DEDE8
  c->lr=0x801DEDF0u; f_801BE774(c); // 801DEDEC
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DEDF0
  cmpu(c,0,c->r[30],c->r[0]); // 801DEDF4
  if (!crb(c,2)) { goto L_801DEE04; } // 801DEDF8
  c->r[3]=c->r[30]|c->r[30]; // 801DEDFC
  c->lr=0x801DEE04u; f_801DF544(c); // 801DEE00
L_801DEE04:;
  c->r[3]=c->r[30]|c->r[30]; // 801DEE04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEE08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DEE0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEE10
  c->lr=c->r[0]; // 801DEE14
  c->r[1]=c->r[1]+0x00000010u; // 801DEE18
  return; // 801DEE1C
}

// fn_801DEE20
void f_801DEE20(Ctx* __restrict c) {
  trace_call(0x801DEE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEE20
  c->r[0]=c->lr; // 801DEE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEE2C
  c->r[31]=c->r[3]|c->r[3]; // 801DEE30
  c->lr=0x801DEE38u; f_801BE74C(c); // 801DEE34
  c->r[0]=R32(c->r[31]+0x00000008u); // 801DEE38
  c->r[0]=c->r[0]|0x00000002u; // 801DEE3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801DEE40
  c->lr=0x801DEE48u; f_801BE774(c); // 801DEE44
  c->r[3]=c->r[31]|c->r[31]; // 801DEE48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEE4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEE50
  c->lr=c->r[0]; // 801DEE54
  c->r[1]=c->r[1]+0x00000010u; // 801DEE58
  return; // 801DEE5C
}

void hle_DSPAssertTask(Ctx*);
// DSPAssertTask
void f_801DEE60(Ctx* __restrict c) {
  hle_DSPAssertTask(c);
}

// __DSP_debug_printf
void f_801DEF1C(Ctx* __restrict c) {
  trace_call(0x801DEF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEF1C
  if (!crb(c,6)) { goto L_801DEF44; } // 801DEF20
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801DEF24
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DEF28
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801DEF2C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801DEF30
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801DEF34
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801DEF38
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801DEF3C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801DEF40
L_801DEF44:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DEF44
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DEF48
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DEF4C
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DEF50
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DEF54
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801DEF58
  W32(c->r[1]+0x00000020u,c->r[9]); // 801DEF5C
  W32(c->r[1]+0x00000024u,c->r[10]); // 801DEF60
  c->r[1]=c->r[1]+0x00000070u; // 801DEF64
  return; // 801DEF68
}

// __DSPHandler
void f_801DEF6C(Ctx* __restrict c) {
  trace_call(0x801DEF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEF6C
  c->r[0]=c->lr; // 801DEF70
  c->r[6]=0u+0xCC000000u; // 801DEF74
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801DEF78
  c->r[0]=0u+0xFFFFFFD7u; // 801DEF7C
  c->r[3]=c->r[1]+0x00000008u; // 801DEF80
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801DEF84
  c->r[31]=c->r[4]|c->r[4]; // 801DEF88
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801DEF8C
  c->r[0]=c->r[5]&c->r[0]; // 801DEF90
  c->r[0]=c->r[0]|0x00000080u; // 801DEF94
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801DEF98
  c->lr=0x801DEFA0u; f_801BAFF0(c); // 801DEF9C
  c->r[3]=c->r[1]+0x00000008u; // 801DEFA0
  c->lr=0x801DEFA8u; f_801BADC8(c); // 801DEFA4
L_801DEFA8:;
  c->lr=0x801DEFACu; f_801DECB0(c); // 801DEFA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DEFAC
  if (crb(c,2)) { IRQCHK(c); goto L_801DEFA8; } // 801DEFB0
  c->lr=0x801DEFB8u; f_801DECC0(c); // 801DEFB4
  c->r[5]=R32(c->r[13]+0xFFFFA114u); // 801DEFB8
  c->r[0]=R32(c->r[5]+0x00000008u); // 801DEFBC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DEFC0
  if (crb(c,2)) { goto L_801DEFDC; } // 801DEFC4
  c->r[0]=c->r[3]+0x232F0000u; // 801DEFC8
  cmpu(c,0,c->r[0],0x00000002u); // 801DEFCC
  if (!crb(c,2)) { goto L_801DEFDC; } // 801DEFD0
  c->r[3]=0u+0xDCD10000u; // 801DEFD4
  c->r[3]=c->r[3]+0x00000003u; // 801DEFD8
L_801DEFDC:;
  c->r[4]=0u+0xDCD10000u; // 801DEFDC
  c->r[0]=c->r[4]+0x00000002u; // 801DEFE0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DEFE4
  if (crb(c,2)) { goto L_801DF05C; } // 801DEFE8
  if (!crb(c,0)) { goto L_801DF000; } // 801DEFEC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801DEFF0
  if (crb(c,2)) { goto L_801DF014; } // 801DEFF4
  if (!crb(c,0)) { goto L_801DF038; } // 801DEFF8
  goto L_801DF37C; // 801DEFFC
L_801DF000:;
  c->r[0]=c->r[4]+0x00000004u; // 801DF000
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DF004
  if (crb(c,2)) { goto L_801DF364; } // 801DF008
  if (!crb(c,0)) { goto L_801DF37C; } // 801DF00C
  goto L_801DF1C4; // 801DF010
L_801DF014:;
  c->r[0]=0u+0x00000001u; // 801DF014
  W32(c->r[5]+0x00000000u,c->r[0]); // 801DF018
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF01C
  c->r[12]=R32(c->r[3]+0x00000028u); // 801DF020
  cmps(c,0,(int32_t)c->r[12],0); // 801DF024
  if (crb(c,2)) { goto L_801DF37C; } // 801DF028
  c->ctr=c->r[12]; // 801DF02C
  if (true) { c->lr=0x801DF034u; dispatch(c,c->ctr); } // 801DF030
  goto L_801DF37C; // 801DF034
L_801DF038:;
  c->r[0]=0u+0x00000001u; // 801DF038
  W32(c->r[5]+0x00000000u,c->r[0]); // 801DF03C
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF040
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801DF044
  cmps(c,0,(int32_t)c->r[12],0); // 801DF048
  if (crb(c,2)) { goto L_801DF37C; } // 801DF04C
  c->ctr=c->r[12]; // 801DF050
  if (true) { c->lr=0x801DF058u; dispatch(c,c->ctr); } // 801DF054
  goto L_801DF37C; // 801DF058
L_801DF05C:;
  c->r[0]=R32(c->r[13]+0xFFFFA100u); // 801DF05C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF060
  if (crb(c,2)) { goto L_801DF0FC; } // 801DF064
  c->r[0]=R32(c->r[13]+0xFFFFA104u); // 801DF068
  cmpu(c,0,c->r[5],c->r[0]); // 801DF06C
  if (!crb(c,2)) { goto L_801DF0B4; } // 801DF070
  c->r[3]=0u+0xCDD10000u; // 801DF074
  c->r[3]=c->r[3]+0x00000003u; // 801DF078
  c->lr=0x801DF080u; f_801DECD4(c); // 801DF07C
L_801DF080:;
  c->lr=0x801DF084u; f_801DECA0(c); // 801DF080
  cmps(c,0,(int32_t)c->r[3],0); // 801DF084
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF080; } // 801DF088
  c->r[0]=0u+0x00000000u; // 801DF08C
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF090
  W32(c->r[13]+0xFFFFA104u,c->r[0]); // 801DF094
  W32(c->r[13]+0xFFFFA100u,c->r[0]); // 801DF098
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801DF09C
  cmps(c,0,(int32_t)c->r[12],0); // 801DF0A0
  if (crb(c,2)) { goto L_801DF37C; } // 801DF0A4
  c->ctr=c->r[12]; // 801DF0A8
  if (true) { c->lr=0x801DF0B0u; dispatch(c,c->ctr); } // 801DF0AC
  goto L_801DF37C; // 801DF0B0
L_801DF0B4:;
  c->r[3]=0u+0xCDD10000u; // 801DF0B4
  c->r[3]=c->r[3]+0x00000001u; // 801DF0B8
  c->lr=0x801DF0C0u; f_801DECD4(c); // 801DF0BC
L_801DF0C0:;
  c->lr=0x801DF0C4u; f_801DECA0(c); // 801DF0C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF0C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF0C0; } // 801DF0C8
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF0CC
  c->r[4]=R32(c->r[13]+0xFFFFA104u); // 801DF0D0
  c->lr=0x801DF0D8u; f_801DF3A0(c); // 801DF0D4
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF0D8
  c->r[4]=0u+0x00000002u; // 801DF0DC
  c->r[0]=0u+0x00000000u; // 801DF0E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DF0E4
  c->r[3]=R32(c->r[13]+0xFFFFA104u); // 801DF0E8
  W32(c->r[13]+0xFFFFA100u,c->r[0]); // 801DF0EC
  W32(c->r[13]+0xFFFFA114u,c->r[3]); // 801DF0F0
  W32(c->r[13]+0xFFFFA104u,c->r[0]); // 801DF0F4
  goto L_801DF37C; // 801DF0F8
L_801DF0FC:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 801DF0FC
  cmps(c,0,(int32_t)c->r[0],0); // 801DF100
  if (!crb(c,2)) { goto L_801DF184; } // 801DF104
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF108
  cmpu(c,0,c->r[5],c->r[0]); // 801DF10C
  if (!crb(c,2)) { goto L_801DF148; } // 801DF110
  c->r[3]=0u+0xCDD10000u; // 801DF114
  c->r[3]=c->r[3]+0x00000003u; // 801DF118
  c->lr=0x801DF120u; f_801DECD4(c); // 801DF11C
L_801DF120:;
  c->lr=0x801DF124u; f_801DECA0(c); // 801DF120
  cmps(c,0,(int32_t)c->r[3],0); // 801DF124
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF120; } // 801DF128
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF12C
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801DF130
  cmps(c,0,(int32_t)c->r[12],0); // 801DF134
  if (crb(c,2)) { goto L_801DF37C; } // 801DF138
  c->ctr=c->r[12]; // 801DF13C
  if (true) { c->lr=0x801DF144u; dispatch(c,c->ctr); } // 801DF140
  goto L_801DF37C; // 801DF144
L_801DF148:;
  c->r[3]=0u+0xCDD10000u; // 801DF148
  c->r[3]=c->r[3]+0x00000001u; // 801DF14C
  c->lr=0x801DF154u; f_801DECD4(c); // 801DF150
L_801DF154:;
  c->lr=0x801DF158u; f_801DECA0(c); // 801DF154
  cmps(c,0,(int32_t)c->r[3],0); // 801DF158
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF154; } // 801DF15C
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF160
  c->r[4]=R32(c->r[13]+0xFFFFA110u); // 801DF164
  c->lr=0x801DF16Cu; f_801DF3A0(c); // 801DF168
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF16C
  c->r[0]=0u+0x00000002u; // 801DF170
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DF174
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF178
  W32(c->r[13]+0xFFFFA114u,c->r[0]); // 801DF17C
  goto L_801DF37C; // 801DF180
L_801DF184:;
  c->r[3]=0u+0xCDD10000u; // 801DF184
  c->r[3]=c->r[3]+0x00000001u; // 801DF188
  c->lr=0x801DF190u; f_801DECD4(c); // 801DF18C
L_801DF190:;
  c->lr=0x801DF194u; f_801DECA0(c); // 801DF190
  cmps(c,0,(int32_t)c->r[3],0); // 801DF194
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF190; } // 801DF198
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF19C
  c->r[4]=R32(c->r[3]+0x00000038u); // 801DF1A0
  c->lr=0x801DF1A8u; f_801DF3A0(c); // 801DF1A4
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF1A8
  c->r[0]=0u+0x00000002u; // 801DF1AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DF1B0
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF1B4
  c->r[0]=R32(c->r[3]+0x00000038u); // 801DF1B8
  W32(c->r[13]+0xFFFFA114u,c->r[0]); // 801DF1BC
  goto L_801DF37C; // 801DF1C0
L_801DF1C4:;
  c->r[0]=R32(c->r[13]+0xFFFFA100u); // 801DF1C4
  cmps(c,0,(int32_t)c->r[0],0); // 801DF1C8
  if (crb(c,2)) { goto L_801DF244; } // 801DF1CC
  c->r[0]=R32(c->r[13]+0xFFFFA104u); // 801DF1D0
  cmpu(c,0,c->r[5],c->r[0]); // 801DF1D4
  if (crb(c,2)) { goto L_801DF238; } // 801DF1D8
  c->r[12]=R32(c->r[5]+0x00000030u); // 801DF1DC
  cmps(c,0,(int32_t)c->r[12],0); // 801DF1E0
  if (crb(c,2)) { goto L_801DF1F4; } // 801DF1E4
  c->r[3]=c->r[5]|c->r[5]; // 801DF1E8
  c->ctr=c->r[12]; // 801DF1EC
  if (true) { c->lr=0x801DF1F4u; dispatch(c,c->ctr); } // 801DF1F0
L_801DF1F4:;
  c->r[3]=0u+0xCDD10000u; // 801DF1F4
  c->r[3]=c->r[3]+0x00000001u; // 801DF1F8
  c->lr=0x801DF200u; f_801DECD4(c); // 801DF1FC
L_801DF200:;
  c->lr=0x801DF204u; f_801DECA0(c); // 801DF200
  cmps(c,0,(int32_t)c->r[3],0); // 801DF204
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF200; } // 801DF208
  c->r[4]=R32(c->r[13]+0xFFFFA104u); // 801DF20C
  c->r[3]=0u+0x00000000u; // 801DF210
  c->lr=0x801DF218u; f_801DF3A0(c); // 801DF214
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF218
  c->lr=0x801DF220u; f_801DF76C(c); // 801DF21C
  c->r[3]=R32(c->r[13]+0xFFFFA104u); // 801DF220
  c->r[0]=0u+0x00000000u; // 801DF224
  W32(c->r[13]+0xFFFFA100u,c->r[0]); // 801DF228
  W32(c->r[13]+0xFFFFA114u,c->r[3]); // 801DF22C
  W32(c->r[13]+0xFFFFA104u,c->r[0]); // 801DF230
  goto L_801DF37C; // 801DF234
L_801DF238:;
  c->r[0]=0u+0x00000000u; // 801DF238
  W32(c->r[13]+0xFFFFA104u,c->r[0]); // 801DF23C
  W32(c->r[13]+0xFFFFA100u,c->r[0]); // 801DF240
L_801DF244:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 801DF244
  cmps(c,0,(int32_t)c->r[0],0); // 801DF248
  if (!crb(c,2)) { goto L_801DF300; } // 801DF24C
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF250
  cmpu(c,0,c->r[5],c->r[0]); // 801DF254
  if (!crb(c,2)) { goto L_801DF2A4; } // 801DF258
  c->r[12]=R32(c->r[5]+0x00000030u); // 801DF25C
  cmps(c,0,(int32_t)c->r[12],0); // 801DF260
  if (crb(c,2)) { goto L_801DF274; } // 801DF264
  c->r[3]=c->r[5]|c->r[5]; // 801DF268
  c->ctr=c->r[12]; // 801DF26C
  if (true) { c->lr=0x801DF274u; dispatch(c,c->ctr); } // 801DF270
L_801DF274:;
  c->r[3]=0u+0xCDD10000u; // 801DF274
  c->r[3]=c->r[3]+0x00000002u; // 801DF278
  c->lr=0x801DF280u; f_801DECD4(c); // 801DF27C
L_801DF280:;
  c->lr=0x801DF284u; f_801DECA0(c); // 801DF280
  cmps(c,0,(int32_t)c->r[3],0); // 801DF284
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF280; } // 801DF288
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF28C
  c->r[0]=0u+0x00000003u; // 801DF290
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DF294
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF298
  c->lr=0x801DF2A0u; f_801DF76C(c); // 801DF29C
  goto L_801DF37C; // 801DF2A0
L_801DF2A4:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 801DF2A4
  cmps(c,0,(int32_t)c->r[12],0); // 801DF2A8
  if (crb(c,2)) { goto L_801DF2BC; } // 801DF2AC
  c->r[3]=c->r[5]|c->r[5]; // 801DF2B0
  c->ctr=c->r[12]; // 801DF2B4
  if (true) { c->lr=0x801DF2BCu; dispatch(c,c->ctr); } // 801DF2B8
L_801DF2BC:;
  c->r[3]=0u+0xCDD10000u; // 801DF2BC
  c->r[3]=c->r[3]+0x00000001u; // 801DF2C0
  c->lr=0x801DF2C8u; f_801DECD4(c); // 801DF2C4
L_801DF2C8:;
  c->lr=0x801DF2CCu; f_801DECA0(c); // 801DF2C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF2CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF2C8; } // 801DF2D0
  c->r[4]=R32(c->r[13]+0xFFFFA114u); // 801DF2D4
  c->r[0]=0u+0x00000003u; // 801DF2D8
  c->r[3]=0u+0x00000000u; // 801DF2DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DF2E0
  c->r[4]=R32(c->r[13]+0xFFFFA110u); // 801DF2E4
  c->lr=0x801DF2ECu; f_801DF3A0(c); // 801DF2E8
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF2EC
  c->r[3]=R32(c->r[13]+0xFFFFA10Cu); // 801DF2F0
  W32(c->r[13]+0xFFFFA114u,c->r[0]); // 801DF2F4
  c->lr=0x801DF2FCu; f_801DF76C(c); // 801DF2F8
  goto L_801DF37C; // 801DF2FC
L_801DF300:;
  c->r[12]=R32(c->r[5]+0x00000030u); // 801DF300
  cmps(c,0,(int32_t)c->r[12],0); // 801DF304
  if (crb(c,2)) { goto L_801DF318; } // 801DF308
  c->r[3]=c->r[5]|c->r[5]; // 801DF30C
  c->ctr=c->r[12]; // 801DF310
  if (true) { c->lr=0x801DF318u; dispatch(c,c->ctr); } // 801DF314
L_801DF318:;
  c->r[3]=0u+0xCDD10000u; // 801DF318
  c->r[3]=c->r[3]+0x00000001u; // 801DF31C
  c->lr=0x801DF324u; f_801DECD4(c); // 801DF320
L_801DF324:;
  c->lr=0x801DF328u; f_801DECA0(c); // 801DF324
  cmps(c,0,(int32_t)c->r[3],0); // 801DF328
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF324; } // 801DF32C
  c->r[4]=R32(c->r[13]+0xFFFFA114u); // 801DF330
  c->r[0]=0u+0x00000003u; // 801DF334
  c->r[3]=0u+0x00000000u; // 801DF338
  W32(c->r[4]+0x00000000u,c->r[0]); // 801DF33C
  c->r[4]=R32(c->r[13]+0xFFFFA114u); // 801DF340
  c->r[4]=R32(c->r[4]+0x00000038u); // 801DF344
  c->lr=0x801DF34Cu; f_801DF3A0(c); // 801DF348
  c->r[3]=R32(c->r[13]+0xFFFFA114u); // 801DF34C
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DF350
  W32(c->r[13]+0xFFFFA114u,c->r[3]); // 801DF354
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801DF358
  c->lr=0x801DF360u; f_801DF76C(c); // 801DF35C
  goto L_801DF37C; // 801DF360
L_801DF364:;
  c->r[12]=R32(c->r[5]+0x00000034u); // 801DF364
  cmps(c,0,(int32_t)c->r[12],0); // 801DF368
  if (crb(c,2)) { goto L_801DF37C; } // 801DF36C
  c->r[3]=c->r[5]|c->r[5]; // 801DF370
  c->ctr=c->r[12]; // 801DF374
  if (true) { c->lr=0x801DF37Cu; dispatch(c,c->ctr); } // 801DF378
L_801DF37C:;
  c->r[3]=c->r[1]+0x00000008u; // 801DF37C
  c->lr=0x801DF384u; f_801BAFF0(c); // 801DF380
  c->r[3]=c->r[31]|c->r[31]; // 801DF384
  c->lr=0x801DF38Cu; f_801BADC8(c); // 801DF388
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801DF38C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801DF390
  c->lr=c->r[0]; // 801DF394
  c->r[1]=c->r[1]+0x000002E0u; // 801DF398
  return; // 801DF39C
}

// __DSP_exec_task
void f_801DF3A0(Ctx* __restrict c) {
  trace_call(0x801DF3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF3A0
  c->r[0]=c->lr; // 801DF3A4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF3AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF3B0
  c->r[31]=c->r[4]|c->r[4]; // 801DF3B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF3B8
  c->r[30]=c->r[3]|c->r[3]; // 801DF3BC
  if (crb(c,2)) { goto L_801DF404; } // 801DF3C0
  c->r[3]=R32(c->r[3]+0x00000018u); // 801DF3C4
  c->lr=0x801DF3CCu; f_801DECD4(c); // 801DF3C8
L_801DF3CC:;
  c->lr=0x801DF3D0u; f_801DECA0(c); // 801DF3CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF3CC; } // 801DF3D4
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801DF3D8
  c->lr=0x801DF3E0u; f_801DECD4(c); // 801DF3DC
L_801DF3E0:;
  c->lr=0x801DF3E4u; f_801DECA0(c); // 801DF3E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF3E0; } // 801DF3E8
  c->r[3]=R32(c->r[30]+0x00000020u); // 801DF3EC
  c->lr=0x801DF3F4u; f_801DECD4(c); // 801DF3F0
L_801DF3F4:;
  c->lr=0x801DF3F8u; f_801DECA0(c); // 801DF3F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF3F4; } // 801DF3FC
  goto L_801DF440; // 801DF400
L_801DF404:;
  c->r[3]=0u+0x00000000u; // 801DF404
  c->lr=0x801DF40Cu; f_801DECD4(c); // 801DF408
L_801DF40C:;
  c->lr=0x801DF410u; f_801DECA0(c); // 801DF40C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF410
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF40C; } // 801DF414
  c->r[3]=0u+0x00000000u; // 801DF418
  c->lr=0x801DF420u; f_801DECD4(c); // 801DF41C
L_801DF420:;
  c->lr=0x801DF424u; f_801DECA0(c); // 801DF420
  cmps(c,0,(int32_t)c->r[3],0); // 801DF424
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF420; } // 801DF428
  c->r[3]=0u+0x00000000u; // 801DF42C
  c->lr=0x801DF434u; f_801DECD4(c); // 801DF430
L_801DF434:;
  c->lr=0x801DF438u; f_801DECA0(c); // 801DF434
  cmps(c,0,(int32_t)c->r[3],0); // 801DF438
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF434; } // 801DF43C
L_801DF440:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801DF440
  c->lr=0x801DF448u; f_801DECD4(c); // 801DF444
L_801DF448:;
  c->lr=0x801DF44Cu; f_801DECA0(c); // 801DF448
  cmps(c,0,(int32_t)c->r[3],0); // 801DF44C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF448; } // 801DF450
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DF454
  c->lr=0x801DF45Cu; f_801DECD4(c); // 801DF458
L_801DF45C:;
  c->lr=0x801DF460u; f_801DECA0(c); // 801DF45C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF460
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF45C; } // 801DF464
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DF468
  c->lr=0x801DF470u; f_801DECD4(c); // 801DF46C
L_801DF470:;
  c->lr=0x801DF474u; f_801DECA0(c); // 801DF470
  cmps(c,0,(int32_t)c->r[3],0); // 801DF474
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF470; } // 801DF478
  c->r[0]=R32(c->r[31]+0x00000000u); // 801DF47C
  cmps(c,0,(int32_t)c->r[0],0); // 801DF480
  if (!crb(c,2)) { goto L_801DF4DC; } // 801DF484
  c->r[3]=R16(c->r[31]+0x00000024u); // 801DF488
  c->lr=0x801DF490u; f_801DECD4(c); // 801DF48C
L_801DF490:;
  c->lr=0x801DF494u; f_801DECA0(c); // 801DF490
  cmps(c,0,(int32_t)c->r[3],0); // 801DF494
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF490; } // 801DF498
  c->r[3]=0u+0x00000000u; // 801DF49C
  c->lr=0x801DF4A4u; f_801DECD4(c); // 801DF4A0
L_801DF4A4:;
  c->lr=0x801DF4A8u; f_801DECA0(c); // 801DF4A4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4A4; } // 801DF4AC
  c->r[3]=0u+0x00000000u; // 801DF4B0
  c->lr=0x801DF4B8u; f_801DECD4(c); // 801DF4B4
L_801DF4B8:;
  c->lr=0x801DF4BCu; f_801DECA0(c); // 801DF4B8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4B8; } // 801DF4C0
  c->r[3]=0u+0x00000000u; // 801DF4C4
  c->lr=0x801DF4CCu; f_801DECD4(c); // 801DF4C8
L_801DF4CC:;
  c->lr=0x801DF4D0u; f_801DECA0(c); // 801DF4CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4CC; } // 801DF4D4
  goto L_801DF52C; // 801DF4D8
L_801DF4DC:;
  c->r[3]=R16(c->r[31]+0x00000026u); // 801DF4DC
  c->lr=0x801DF4E4u; f_801DECD4(c); // 801DF4E0
L_801DF4E4:;
  c->lr=0x801DF4E8u; f_801DECA0(c); // 801DF4E4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4E4; } // 801DF4EC
  c->r[3]=R32(c->r[31]+0x00000018u); // 801DF4F0
  c->lr=0x801DF4F8u; f_801DECD4(c); // 801DF4F4
L_801DF4F8:;
  c->lr=0x801DF4FCu; f_801DECA0(c); // 801DF4F8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF4F8; } // 801DF500
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801DF504
  c->lr=0x801DF50Cu; f_801DECD4(c); // 801DF508
L_801DF50C:;
  c->lr=0x801DF510u; f_801DECA0(c); // 801DF50C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF510
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF50C; } // 801DF514
  c->r[3]=R32(c->r[31]+0x00000020u); // 801DF518
  c->lr=0x801DF520u; f_801DECD4(c); // 801DF51C
L_801DF520:;
  c->lr=0x801DF524u; f_801DECA0(c); // 801DF520
  cmps(c,0,(int32_t)c->r[3],0); // 801DF524
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF520; } // 801DF528
L_801DF52C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF52C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF530
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF534
  c->lr=c->r[0]; // 801DF538
  c->r[1]=c->r[1]+0x00000010u; // 801DF53C
  return; // 801DF540
}

// __DSP_boot_task
void f_801DF544(Ctx* __restrict c) {
  trace_call(0x801DF544u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF544
  c->r[0]=c->lr; // 801DF548
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF54C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF550
  c->r[31]=0u+0x804B0000u; // 801DF554
  c->r[31]=c->r[31]+0x00007660u; // 801DF558
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF55C
  c->r[30]=c->r[3]|c->r[3]; // 801DF560
L_801DF564:;
  c->lr=0x801DF568u; f_801DECB0(c); // 801DF564
  cmps(c,0,(int32_t)c->r[3],0); // 801DF568
  if (crb(c,2)) { IRQCHK(c); goto L_801DF564; } // 801DF56C
  c->lr=0x801DF574u; f_801DECC0(c); // 801DF570
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DF574
  c->r[3]=0u+0x80F40000u; // 801DF578
  c->r[3]=c->r[3]+0xFFFFA001u; // 801DF57C
  c->lr=0x801DF584u; f_801DECD4(c); // 801DF580
L_801DF584:;
  c->lr=0x801DF588u; f_801DECA0(c); // 801DF584
  cmps(c,0,(int32_t)c->r[3],0); // 801DF588
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF584; } // 801DF58C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801DF590
  c->lr=0x801DF598u; f_801DECD4(c); // 801DF594
L_801DF598:;
  c->lr=0x801DF59Cu; f_801DECA0(c); // 801DF598
  cmps(c,0,(int32_t)c->r[3],0); // 801DF59C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF598; } // 801DF5A0
  c->r[3]=0u+0x80F40000u; // 801DF5A4
  c->r[3]=c->r[3]+0xFFFFC002u; // 801DF5A8
  c->lr=0x801DF5B0u; f_801DECD4(c); // 801DF5AC
L_801DF5B0:;
  c->lr=0x801DF5B4u; f_801DECA0(c); // 801DF5B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF5B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF5B0; } // 801DF5B8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801DF5BC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF5C0
  c->lr=0x801DF5C8u; f_801DECD4(c); // 801DF5C4
L_801DF5C8:;
  c->lr=0x801DF5CCu; f_801DECA0(c); // 801DF5C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF5CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF5C8; } // 801DF5D0
  c->r[3]=0u+0x80F40000u; // 801DF5D4
  c->r[3]=c->r[3]+0xFFFFA002u; // 801DF5D8
  c->lr=0x801DF5E0u; f_801DECD4(c); // 801DF5DC
L_801DF5E0:;
  c->lr=0x801DF5E4u; f_801DECA0(c); // 801DF5E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF5E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF5E0; } // 801DF5E8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DF5EC
  c->lr=0x801DF5F4u; f_801DECD4(c); // 801DF5F0
L_801DF5F4:;
  c->lr=0x801DF5F8u; f_801DECA0(c); // 801DF5F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF5F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF5F4; } // 801DF5FC
  c->r[3]=0u+0x80F40000u; // 801DF600
  c->r[3]=c->r[3]+0xFFFFB002u; // 801DF604
  c->lr=0x801DF60Cu; f_801DECD4(c); // 801DF608
L_801DF60C:;
  c->lr=0x801DF610u; f_801DECA0(c); // 801DF60C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF610
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF60C; } // 801DF614
  c->r[3]=0u+0x00000000u; // 801DF618
  c->lr=0x801DF620u; f_801DECD4(c); // 801DF61C
L_801DF620:;
  c->lr=0x801DF624u; f_801DECA0(c); // 801DF620
  cmps(c,0,(int32_t)c->r[3],0); // 801DF624
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF620; } // 801DF628
  c->r[3]=0u+0x80F40000u; // 801DF62C
  c->r[3]=c->r[3]+0xFFFFD001u; // 801DF630
  c->lr=0x801DF638u; f_801DECD4(c); // 801DF634
L_801DF638:;
  c->lr=0x801DF63Cu; f_801DECA0(c); // 801DF638
  cmps(c,0,(int32_t)c->r[3],0); // 801DF63C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF638; } // 801DF640
  c->r[3]=R16(c->r[30]+0x00000024u); // 801DF644
  c->lr=0x801DF64Cu; f_801DECD4(c); // 801DF648
L_801DF64C:;
  c->lr=0x801DF650u; f_801DECA0(c); // 801DF64C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF650
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF64C; } // 801DF654
  c->r[4]=c->r[30]|c->r[30]; // 801DF658
  c->r[3]=c->r[31]+0x00000000u; // 801DF65C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF660
  c->lr=0x801DF668u; f_801DEF1C(c); // 801DF664
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801DF668
  c->r[3]=c->r[31]+0x00000020u; // 801DF66C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF670
  c->lr=0x801DF678u; f_801DEF1C(c); // 801DF674
  c->r[4]=R32(c->r[30]+0x00000014u); // 801DF678
  c->r[3]=c->r[31]+0x00000050u; // 801DF67C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF680
  c->lr=0x801DF688u; f_801DEF1C(c); // 801DF684
  c->r[4]=R32(c->r[30]+0x00000010u); // 801DF688
  c->r[3]=c->r[31]+0x00000080u; // 801DF68C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF690
  c->lr=0x801DF698u; f_801DEF1C(c); // 801DF694
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801DF698
  c->r[3]=c->r[31]+0x000000B0u; // 801DF69C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF6A0
  c->lr=0x801DF6A8u; f_801DEF1C(c); // 801DF6A4
  c->r[4]=R16(c->r[30]+0x00000024u); // 801DF6A8
  c->r[3]=c->r[31]+0x000000E0u; // 801DF6AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DF6B0
  c->lr=0x801DF6B8u; f_801DEF1C(c); // 801DF6B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF6B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF6BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF6C0
  c->lr=c->r[0]; // 801DF6C4
  c->r[1]=c->r[1]+0x00000020u; // 801DF6C8
  return; // 801DF6CC
}

// __DSP_insert_task
void f_801DF6D0(Ctx* __restrict c) {
  trace_call(0x801DF6D0u);
  c->r[5]=R32(c->r[13]+0xFFFFA110u); // 801DF6D0
  cmps(c,0,(int32_t)c->r[5],0); // 801DF6D4
  if (!crb(c,2)) { goto L_801DF73C; } // 801DF6D8
  W32(c->r[13]+0xFFFFA114u,c->r[3]); // 801DF6DC
  c->r[0]=0u+0x00000000u; // 801DF6E0
  W32(c->r[13]+0xFFFFA10Cu,c->r[3]); // 801DF6E4
  W32(c->r[13]+0xFFFFA110u,c->r[3]); // 801DF6E8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801DF6EC
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DF6F0
  return; // 801DF6F4
  goto L_801DF73C; // 801DF6F8
L_801DF6FC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DF6FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DF700
  cmpu(c,0,c->r[4],c->r[0]); // 801DF704
  if (!crb(c,0)) { goto L_801DF738; } // 801DF708
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 801DF70C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801DF710
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801DF714
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801DF718
  W32(c->r[3]+0x00000038u,c->r[5]); // 801DF71C
  cmps(c,0,(int32_t)c->r[4],0); // 801DF720
  if (!crb(c,2)) { goto L_801DF730; } // 801DF724
  W32(c->r[13]+0xFFFFA110u,c->r[3]); // 801DF728
  goto L_801DF744; // 801DF72C
L_801DF730:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 801DF730
  goto L_801DF744; // 801DF734
L_801DF738:;
  c->r[5]=R32(c->r[5]+0x00000038u); // 801DF738
L_801DF73C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF73C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF6FC; } // 801DF740
L_801DF744:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF744
  if (!crb(c,2)) return; // 801DF748
  c->r[4]=R32(c->r[13]+0xFFFFA10Cu); // 801DF74C
  c->r[0]=0u+0x00000000u; // 801DF750
  W32(c->r[4]+0x00000038u,c->r[3]); // 801DF754
  W32(c->r[3]+0x00000038u,c->r[0]); // 801DF758
  c->r[0]=R32(c->r[13]+0xFFFFA10Cu); // 801DF75C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801DF760
  W32(c->r[13]+0xFFFFA10Cu,c->r[3]); // 801DF764
  return; // 801DF768
}

// __DSP_remove_task
void f_801DF76C(Ctx* __restrict c) {
  trace_call(0x801DF76Cu);
  c->r[4]=0u+0x00000000u; // 801DF76C
  c->r[0]=0u+0x00000003u; // 801DF770
  W32(c->r[3]+0x00000008u,c->r[4]); // 801DF774
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DF778
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF77C
  cmpu(c,0,c->r[0],c->r[3]); // 801DF780
  if (!crb(c,2)) { goto L_801DF7B4; } // 801DF784
  c->r[0]=R32(c->r[3]+0x00000038u); // 801DF788
  cmps(c,0,(int32_t)c->r[0],0); // 801DF78C
  if (crb(c,2)) { goto L_801DF7A4; } // 801DF790
  W32(c->r[13]+0xFFFFA110u,c->r[0]); // 801DF794
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DF798
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801DF79C
  return; // 801DF7A0
L_801DF7A4:;
  W32(c->r[13]+0xFFFFA114u,c->r[4]); // 801DF7A4
  W32(c->r[13]+0xFFFFA10Cu,c->r[4]); // 801DF7A8
  W32(c->r[13]+0xFFFFA110u,c->r[4]); // 801DF7AC
  return; // 801DF7B0
L_801DF7B4:;
  c->r[0]=R32(c->r[13]+0xFFFFA10Cu); // 801DF7B4
  cmpu(c,0,c->r[0],c->r[3]); // 801DF7B8
  if (!crb(c,2)) { goto L_801DF7DC; } // 801DF7BC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801DF7C0
  W32(c->r[13]+0xFFFFA10Cu,c->r[0]); // 801DF7C4
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801DF7C8
  W32(c->r[3]+0x00000038u,c->r[4]); // 801DF7CC
  c->r[0]=R32(c->r[13]+0xFFFFA110u); // 801DF7D0
  W32(c->r[13]+0xFFFFA114u,c->r[0]); // 801DF7D4
  return; // 801DF7D8
L_801DF7DC:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 801DF7DC
  W32(c->r[13]+0xFFFFA114u,c->r[0]); // 801DF7E0
  c->r[0]=R32(c->r[3]+0x00000038u); // 801DF7E4
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801DF7E8
  W32(c->r[4]+0x00000038u,c->r[0]); // 801DF7EC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801DF7F0
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DF7F4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801DF7F8
  return; // 801DF7FC
}

// __GXDefaultTexRegionCallback
void f_801DF800(Ctx* __restrict c) {
  trace_call(0x801DF800u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF800
  c->r[0]=c->lr; // 801DF804
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF808
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF80C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF810
  c->r[30]=c->r[4]|c->r[4]; // 801DF814
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF818
  c->r[29]=c->r[3]|c->r[3]; // 801DF81C
  c->lr=0x801DF824u; f_801E4458(c); // 801DF820
  c->r[31]=c->r[3]|c->r[3]; // 801DF824
  c->r[3]=c->r[29]|c->r[29]; // 801DF828
  c->lr=0x801DF830u; f_801E4478(c); // 801DF82C
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 801DF830
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 801DF834
  c->r[0]=c->r[0]-c->r[4]; // 801DF838
  cmps(c,0,(int32_t)c->r[31],7); // 801DF83C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801DF840
  c->r[30]=c->r[0]+c->r[4]; // 801DF844
  if (crb(c,2)) { goto L_801DF8AC; } // 801DF848
  if (!crb(c,0)) { goto L_801DF85C; } // 801DF84C
  cmps(c,0,(int32_t)c->r[31],6); // 801DF850
  if (!crb(c,0)) { goto L_801DF868; } // 801DF854
  goto L_801DF8AC; // 801DF858
L_801DF85C:;
  cmps(c,0,(int32_t)c->r[31],11); // 801DF85C
  if (!crb(c,0)) { goto L_801DF8AC; } // 801DF860
  goto L_801DF898; // 801DF864
L_801DF868:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF868
  if (crb(c,2)) { goto L_801DF884; } // 801DF86C
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DF870
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801DF874
  c->r[3]=c->r[3]+c->r[0]; // 801DF878
  c->r[3]=c->r[3]+0x00000358u; // 801DF87C
  goto L_801DF8D8; // 801DF880
L_801DF884:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DF884
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801DF888
  c->r[3]=c->r[3]+c->r[0]; // 801DF88C
  c->r[3]=c->r[3]+0x000002D8u; // 801DF890
  goto L_801DF8D8; // 801DF894
L_801DF898:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DF898
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801DF89C
  c->r[3]=c->r[3]+c->r[0]; // 801DF8A0
  c->r[3]=c->r[3]+0x00000258u; // 801DF8A4
  goto L_801DF8D8; // 801DF8A8
L_801DF8AC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF8AC
  if (crb(c,2)) { goto L_801DF8C8; } // 801DF8B0
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DF8B4
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801DF8B8
  c->r[3]=c->r[3]+c->r[0]; // 801DF8BC
  c->r[3]=c->r[3]+0x000002D8u; // 801DF8C0
  goto L_801DF8D8; // 801DF8C4
L_801DF8C8:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DF8C8
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801DF8CC
  c->r[3]=c->r[3]+c->r[0]; // 801DF8D0
  c->r[3]=c->r[3]+0x00000258u; // 801DF8D4
L_801DF8D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF8D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF8DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF8E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF8E4
  c->lr=c->r[0]; // 801DF8E8
  c->r[1]=c->r[1]+0x00000020u; // 801DF8EC
  return; // 801DF8F0
}

// __GXDefaultTlutRegionCallback
void f_801DF8F4(Ctx* __restrict c) {
  trace_call(0x801DF8F4u);
  cmpu(c,0,c->r[3],0x00000014u); // 801DF8F4
  if (crb(c,0)) { goto L_801DF904; } // 801DF8F8
  c->r[3]=0u+0x00000000u; // 801DF8FC
  return; // 801DF900
L_801DF904:;
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801DF904
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801DF908
  c->r[3]=c->r[4]+c->r[0]; // 801DF90C
  c->r[3]=c->r[3]+0x000003D8u; // 801DF910
  return; // 801DF914
}

// __GXShutdown
void f_801DF918(Ctx* __restrict c) {
  trace_call(0x801DF918u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF918
  c->r[0]=c->lr; // 801DF91C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF920
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF928
  if (!crb(c,2)) { goto L_801DFA04; } // 801DF92C
  c->r[0]=R32(c->r[13]+0xFFFFA138u); // 801DF930
  cmps(c,0,(int32_t)c->r[0],0); // 801DF934
  if (!crb(c,2)) { goto L_801DF980; } // 801DF938
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801DF93C
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 801DF940
L_801DF944:;
  c->r[0]=c->r[4]|c->r[4]; // 801DF944
  c->r[3]=R16(c->r[5]+0x00000050u); // 801DF948
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 801DF94C
  cmpu(c,0,c->r[4],c->r[0]); // 801DF950
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF944; } // 801DF954
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 801DF958
  c->r[0]=c->r[0]|c->r[3]; // 801DF95C
  W32(c->r[13]+0xFFFFA128u,c->r[0]); // 801DF960
  c->lr=0x801DF968u; f_801C257C(c); // 801DF964
  c->r[0]=0u+0x00000001u; // 801DF968
  W32(c->r[13]+0xFFFFA130u,c->r[3]); // 801DF96C
  c->r[3]=0u+0x00000000u; // 801DF970
  W32(c->r[13]+0xFFFFA134u,c->r[4]); // 801DF974
  W32(c->r[13]+0xFFFFA138u,c->r[0]); // 801DF978
  goto L_801DFA70; // 801DF97C
L_801DF980:;
  c->lr=0x801DF984u; f_801C257C(c); // 801DF980
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801DF984
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 801DF988
L_801DF98C:;
  c->r[0]=c->r[7]|c->r[7]; // 801DF98C
  c->r[10]=R16(c->r[5]+0x00000050u); // 801DF990
  c->r[7]=R16(c->r[5]+0x0000004Eu); // 801DF994
  cmpu(c,0,c->r[7],c->r[0]); // 801DF998
  if (!crb(c,2)) { IRQCHK(c); goto L_801DF98C; } // 801DF99C
  c->r[5]=R32(c->r[13]+0xFFFFA134u); // 801DF9A0
  c->r[0]=0u+0x00000000u; // 801DF9A4
  c->r[6]=R32(c->r[13]+0xFFFFA130u); // 801DF9A8
  c->r[9]=rotl(c->r[7],16)&0xFFFF0000u; // 801DF9AC
  c->r[8]=addc(c,~c->r[5],c->r[4],1); // 801DF9B0
  c->r[5]=0u+0x0000000Au; // 801DF9B4
  c->r[7]=addc(c,~c->r[6],c->r[3],c->xer_ca); // 801DF9B8
  c->r[6]=c->r[0]^0x80000000u; // 801DF9BC
  c->r[5]=addc(c,~c->r[5],c->r[8],1); // 801DF9C0
  c->r[0]=c->r[7]^0x80000000u; // 801DF9C4
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 801DF9C8
  c->r[5]=c->r[9]|c->r[10]; // 801DF9CC
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801DF9D0
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801DF9D4
  if (crb(c,2)) { goto L_801DF9E4; } // 801DF9D8
  c->r[3]=0u+0x00000000u; // 801DF9DC
  goto L_801DFA70; // 801DF9E0
L_801DF9E4:;
  c->r[0]=R32(c->r[13]+0xFFFFA128u); // 801DF9E4
  cmpu(c,0,c->r[5],c->r[0]); // 801DF9E8
  if (crb(c,2)) { goto L_801DFA6C; } // 801DF9EC
  W32(c->r[13]+0xFFFFA130u,c->r[3]); // 801DF9F0
  c->r[3]=0u+0x00000000u; // 801DF9F4
  W32(c->r[13]+0xFFFFA128u,c->r[5]); // 801DF9F8
  W32(c->r[13]+0xFFFFA134u,c->r[4]); // 801DF9FC
  goto L_801DFA70; // 801DFA00
L_801DFA04:;
  c->r[3]=0u+0x00000000u; // 801DFA04
  c->lr=0x801DFA0Cu; f_801E1124(c); // 801DFA08
  c->r[3]=0u+0x00000000u; // 801DFA0C
  c->lr=0x801DFA14u; f_801E248C(c); // 801DFA10
  c->r[3]=0u+0x00000000u; // 801DFA14
  c->lr=0x801DFA1Cu; f_801E2554(c); // 801DFA18
  c->r[31]=0u+0x00000000u; // 801DFA1C
  c->r[3]=0u+0xCC010000u; // 801DFA20
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA24
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA28
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA2C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA30
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA34
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA38
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA3C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801DFA40
  c->lr=0x801DFA48u; f_801B81D4(c); // 801DFA44
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801DFA48
  c->r[5]=0u+0x00000003u; // 801DFA4C
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DFA50
  c->r[0]=0u+0x00000001u; // 801DFA54
  W16(c->r[4]+0x00000002u,c->r[31]); // 801DFA58
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801DFA5C
  W16(c->r[4]+0x00000004u,c->r[5]); // 801DFA60
  W8(c->r[3]+0x000005FAu,c->r[0]); // 801DFA64
  c->lr=0x801DFA6Cu; f_801E1F60(c); // 801DFA68
L_801DFA6C:;
  c->r[3]=0u+0x00000001u; // 801DFA6C
L_801DFA70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFA70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFA74
  c->lr=c->r[0]; // 801DFA78
  c->r[1]=c->r[1]+0x00000010u; // 801DFA7C
  return; // 801DFA80
}

// __GXInitRevisionBits
void f_801DFA84(Ctx* __restrict c) {
  trace_call(0x801DFA84u);
  c->r[0]=0u+0x00000002u; // 801DFA84
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801DFA88
  c->r[7]=0u+0x00000000u; // 801DFA8C
  c->r[5]=0u+0x00000008u; // 801DFA90
  c->r[4]=0u+0xCC010000u; // 801DFA94
  c->ctr=c->r[0]; // 801DFA98
L_801DFA9C:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 801DFA9C
  c->r[3]=c->r[7]|0x00000080u; // 801DFAA0
  c->r[7]=c->r[7]+0x00000001u; // 801DFAA4
  c->r[0]=c->r[0]|0x40000000u; // 801DFAA8
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 801DFAAC
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 801DFAB0
  c->r[0]=c->r[0]|0x80000000u; // 801DFAB4
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 801DFAB8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801DFABC
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 801DFAC0
  c->r[3]=c->r[7]|0x00000080u; // 801DFAC4
  c->r[7]=c->r[7]+0x00000001u; // 801DFAC8
  c->r[0]=R32(c->r[6]+0x0000003Cu); // 801DFACC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801DFAD0
  c->r[0]=R32(c->r[6]+0x00000020u); // 801DFAD4
  c->r[0]=c->r[0]|0x40000000u; // 801DFAD8
  W32(c->r[6]+0x00000020u,c->r[0]); // 801DFADC
  c->r[0]=R32(c->r[6]+0x00000040u); // 801DFAE0
  c->r[0]=c->r[0]|0x80000000u; // 801DFAE4
  W32(c->r[6]+0x00000040u,c->r[0]); // 801DFAE8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801DFAEC
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 801DFAF0
  c->r[3]=c->r[7]|0x00000080u; // 801DFAF4
  c->r[7]=c->r[7]+0x00000001u; // 801DFAF8
  c->r[0]=R32(c->r[6]+0x00000040u); // 801DFAFC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801DFB00
  c->r[0]=R32(c->r[6]+0x00000024u); // 801DFB04
  c->r[0]=c->r[0]|0x40000000u; // 801DFB08
  W32(c->r[6]+0x00000024u,c->r[0]); // 801DFB0C
  c->r[0]=R32(c->r[6]+0x00000044u); // 801DFB10
  c->r[0]=c->r[0]|0x80000000u; // 801DFB14
  W32(c->r[6]+0x00000044u,c->r[0]); // 801DFB18
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801DFB1C
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 801DFB20
  c->r[3]=c->r[7]|0x00000080u; // 801DFB24
  c->r[7]=c->r[7]+0x00000001u; // 801DFB28
  c->r[0]=R32(c->r[6]+0x00000044u); // 801DFB2C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801DFB30
  c->r[0]=R32(c->r[6]+0x00000028u); // 801DFB34
  c->r[0]=c->r[0]|0x40000000u; // 801DFB38
  W32(c->r[6]+0x00000028u,c->r[0]); // 801DFB3C
  c->r[0]=R32(c->r[6]+0x00000048u); // 801DFB40
  c->r[0]=c->r[0]|0x80000000u; // 801DFB44
  W32(c->r[6]+0x00000048u,c->r[0]); // 801DFB48
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801DFB4C
  W8(c->r[4]+0xFFFF8000u,c->r[3]); // 801DFB50
  c->r[0]=R32(c->r[6]+0x00000048u); // 801DFB54
  c->r[6]=c->r[6]+0x00000010u; // 801DFB58
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801DFB5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFA9C; } // 801DFB60
  c->r[7]=0u+0xCC010000u; // 801DFB64
  c->r[8]=0u+0x00000010u; // 801DFB68
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801DFB6C
  c->r[4]=0u+0x00000000u; // 801DFB70
  c->r[0]=0u+0x00001000u; // 801DFB74
  c->r[5]=0u+0x00001012u; // 801DFB78
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801DFB7C
  c->r[3]=c->r[4]|0x0000003Fu; // 801DFB80
  c->r[6]=c->r[4]|0x00000001u; // 801DFB84
  c->r[0]=0u+0x00000061u; // 801DFB88
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801DFB8C
  c->r[3]=0u+0x00000058u; // 801DFB90
  c->r[4]=c->r[4]|0x0000000Fu; // 801DFB94
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801DFB98
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFB9C
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 801DFBA0
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801DFBA4
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 801DFBA8
  W32(c->r[7]+0xFFFF8000u,c->r[4]); // 801DFBAC
  return; // 801DFBB0
}

// GXInit
void f_801DFBB4(Ctx* __restrict c) {
  trace_call(0x801DFBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFBB4
  c->r[0]=c->lr; // 801DFBB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFBBC
  c->r[11]=c->r[1]+0x00000020u; // 801DFBC0
  c->lr=0x801DFBC8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DFBC4
  c->r[27]=c->r[3]|c->r[3]; // 801DFBC8
  c->r[3]=R32(c->r[13]+0xFFFF8518u); // 801DFBCC
  c->r[26]=c->r[4]|c->r[4]; // 801DFBD0
  c->lr=0x801DFBD8u; f_801B96A0(c); // 801DFBD4
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801DFBD8
  c->r[0]=0u+0x00000000u; // 801DFBDC
  c->r[29]=0u+0x00000001u; // 801DFBE0
  c->r[3]=0u+0x00000001u; // 801DFBE4
  W8(c->r[31]+0x000005F8u,c->r[0]); // 801DFBE8
  c->r[4]=0u+0x00000000u; // 801DFBEC
  W8(c->r[31]+0x000005F9u,c->r[29]); // 801DFBF0
  W8(c->r[31]+0x000005FAu,c->r[29]); // 801DFBF4
  W32(c->r[31]+0x000005E4u,c->r[0]); // 801DFBF8
  W32(c->r[31]+0x000005E8u,c->r[0]); // 801DFBFC
  c->lr=0x801DFC04u; f_801E1E78(c); // 801DFC00
  c->r[4]=0u+0xCC000000u; // 801DFC04
  c->r[5]=c->r[4]+0x00003000u; // 801DFC08
  W32(c->r[13]+0xFFFFA11Cu,c->r[4]); // 801DFC0C
  c->r[3]=c->r[4]+0x00001000u; // 801DFC10
  c->r[0]=c->r[4]+0x00004000u; // 801DFC14
  W32(c->r[13]+0xFFFFA118u,c->r[5]); // 801DFC18
  W32(c->r[13]+0xFFFFA120u,c->r[3]); // 801DFC1C
  W32(c->r[13]+0xFFFFA124u,c->r[0]); // 801DFC20
  c->lr=0x801DFC28u; f_801E1168(c); // 801DFC24
  c->r[28]=0u+0x80580000u; // 801DFC28
  c->r[4]=c->r[27]|c->r[27]; // 801DFC2C
  c->r[5]=c->r[26]|c->r[26]; // 801DFC30
  c->r[3]=c->r[28]+0x00004EA0u; // 801DFC34
  c->lr=0x801DFC3Cu; f_801E0B28(c); // 801DFC38
  c->r[3]=c->r[28]+0x00004EA0u; // 801DFC3C
  c->lr=0x801DFC44u; f_801E0CAC(c); // 801DFC40
  c->r[3]=c->r[28]+0x00004EA0u; // 801DFC44
  c->lr=0x801DFC4Cu; f_801E0E8C(c); // 801DFC48
  c->r[0]=R32(c->r[13]+0xFFFFA13Cu); // 801DFC4C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFC50
  if (!crb(c,2)) { goto L_801DFC68; } // 801DFC54
  c->r[3]=0u+0x804B0000u; // 801DFC58
  c->r[3]=c->r[3]+0x000079D0u; // 801DFC5C
  c->lr=0x801DFC64u; f_801BFD5C(c); // 801DFC60
  W32(c->r[13]+0xFFFFA13Cu,c->r[29]); // 801DFC64
L_801DFC68:;
  c->lr=0x801DFC6Cu; f_801E2618(c); // 801DFC68
  c->lr=0x801DFC70u; f_801B8268(c); // 801DFC6C
  c->r[4]=0u+0x0C010000u; // 801DFC70
  c->r[28]=c->r[3]|c->r[3]; // 801DFC74
  c->r[3]=c->r[4]+0xFFFF8000u; // 801DFC78
  c->lr=0x801DFC80u; f_801B8278(c); // 801DFC7C
  c->r[3]=c->r[28]|0x40000000u; // 801DFC80
  c->lr=0x801DFC88u; f_801B8270(c); // 801DFC84
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801DFC88
  c->r[8]=0u+0x00000000u; // 801DFC8C
  c->r[0]=0u+0x0000000Fu; // 801DFC90
  c->r[5]=0u+0x000000FFu; // 801DFC94
  W32(c->r[3]+0x00000254u,c->r[8]); // 801DFC98
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801DFC9C
  c->r[0]=0u+0x00000022u; // 801DFCA0
  c->r[4]=0u+0x00000000u; // 801DFCA4
  W32(c->r[3]+0x00000174u,c->r[5]); // 801DFCA8
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFCAC
  c->r[0]=0u+0x00000008u; // 801DFCB0
  c->r[9]=c->r[3]|c->r[3]; // 801DFCB4
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 801DFCB8
  c->r[26]=0u+0x00000000u; // 801DFCBC
  c->r[10]=0u+0x000000C0u; // 801DFCC0
  c->r[6]=0u+0x000000FFu; // 801DFCC4
  c->ctr=c->r[0]; // 801DFCC8
L_801DFCCC:;
  W32(c->r[9]+0x00000180u,c->r[8]); // 801DFCCC
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 801DFCD0
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 801DFCD4
  c->r[11]=c->r[10]+0x00000001u; // 801DFCD8
  W32(c->r[9]+0x000001C0u,c->r[8]); // 801DFCDC
  c->r[27]=c->r[3]+c->r[7]; // 801DFCE0
  c->r[26]=c->r[26]+0x00000001u; // 801DFCE4
  c->r[5]=c->r[12]+0x000000F6u; // 801DFCE8
  W32(c->r[27]+0x00000150u,c->r[8]); // 801DFCEC
  c->r[0]=c->r[12]+0x00000028u; // 801DFCF0
  c->r[7]=rotl(c->r[26],1)&0xFFFFFFFCu; // 801DFCF4
  c->r[12]=rotl(c->r[26],31)&0x7FFFFFFFu; // 801DFCF8
  W32(c->r[9]+0x000005A4u,c->r[6]); // 801DFCFC
  c->r[26]=c->r[26]+0x00000001u; // 801DFD00
  c->r[4]=R32(c->r[9]+0x00000180u); // 801DFD04
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD08
  W32(c->r[9]+0x00000180u,c->r[4]); // 801DFD0C
  c->r[4]=R32(c->r[9]+0x000001C0u); // 801DFD10
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD14
  c->r[11]=c->r[10]+0x00000003u; // 801DFD18
  c->r[10]=c->r[10]+0x00000002u; // 801DFD1C
  W32(c->r[9]+0x000001C0u,c->r[4]); // 801DFD20
  c->r[4]=R32(c->r[27]+0x00000200u); // 801DFD24
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD28
  c->r[5]=c->r[12]+0x000000F6u; // 801DFD2C
  W32(c->r[27]+0x00000200u,c->r[4]); // 801DFD30
  c->r[4]=R32(c->r[27]+0x00000150u); // 801DFD34
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD38
  c->r[0]=c->r[12]+0x00000028u; // 801DFD3C
  W32(c->r[27]+0x00000150u,c->r[4]); // 801DFD40
  c->r[27]=c->r[3]+c->r[7]; // 801DFD44
  W32(c->r[9]+0x00000184u,c->r[8]); // 801DFD48
  W32(c->r[9]+0x000001C4u,c->r[8]); // 801DFD4C
  W32(c->r[27]+0x00000150u,c->r[8]); // 801DFD50
  W32(c->r[9]+0x000005A8u,c->r[6]); // 801DFD54
  c->r[4]=R32(c->r[9]+0x00000184u); // 801DFD58
  c->r[4]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD5C
  c->r[10]=c->r[10]+0x00000002u; // 801DFD60
  W32(c->r[9]+0x00000184u,c->r[4]); // 801DFD64
  c->r[4]=R32(c->r[9]+0x000001C4u); // 801DFD68
  c->r[4]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD6C
  W32(c->r[9]+0x000001C4u,c->r[4]); // 801DFD70
  c->r[9]=c->r[9]+0x00000008u; // 801DFD74
  c->r[4]=R32(c->r[27]+0x00000200u); // 801DFD78
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD7C
  W32(c->r[27]+0x00000200u,c->r[4]); // 801DFD80
  c->r[4]=R32(c->r[27]+0x00000150u); // 801DFD84
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD88
  W32(c->r[27]+0x00000150u,c->r[4]); // 801DFD8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFCCC; } // 801DFD90
  c->r[0]=0u+0x00000027u; // 801DFD94
  c->r[4]=0u+0x00000000u; // 801DFD98
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFD9C
  c->r[5]=0u+0x00000030u; // 801DFDA0
  c->r[0]=0u+0x00000002u; // 801DFDA4
  W32(c->r[31]+0x00000170u,c->r[4]); // 801DFDA8
  c->ctr=c->r[0]; // 801DFDAC
L_801DFDB0:;
  c->r[4]=0u+0x00000000u; // 801DFDB0
  c->r[6]=c->r[5]+0x00000001u; // 801DFDB4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFDB8
  c->r[0]=0u+0x00000000u; // 801DFDBC
  W32(c->r[3]+0x00000108u,c->r[4]); // 801DFDC0
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801DFDC4
  c->r[6]=c->r[5]+0x00000003u; // 801DFDC8
  c->r[5]=c->r[5]+0x00000002u; // 801DFDCC
  W32(c->r[3]+0x00000128u,c->r[0]); // 801DFDD0
  c->r[4]=0u+0x00000000u; // 801DFDD4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFDD8
  c->r[0]=0u+0x00000000u; // 801DFDDC
  W32(c->r[3]+0x0000010Cu,c->r[4]); // 801DFDE0
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801DFDE4
  c->r[6]=c->r[5]+0x00000003u; // 801DFDE8
  c->r[5]=c->r[5]+0x00000002u; // 801DFDEC
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 801DFDF0
  c->r[4]=0u+0x00000000u; // 801DFDF4
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFDF8
  c->r[0]=0u+0x00000000u; // 801DFDFC
  W32(c->r[3]+0x00000110u,c->r[4]); // 801DFE00
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801DFE04
  c->r[6]=c->r[5]+0x00000003u; // 801DFE08
  c->r[5]=c->r[5]+0x00000002u; // 801DFE0C
  W32(c->r[3]+0x00000130u,c->r[0]); // 801DFE10
  c->r[4]=0u+0x00000000u; // 801DFE14
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFE18
  c->r[0]=0u+0x00000000u; // 801DFE1C
  W32(c->r[3]+0x00000114u,c->r[4]); // 801DFE20
  c->r[0]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801DFE24
  c->r[5]=c->r[5]+0x00000002u; // 801DFE28
  W32(c->r[3]+0x00000134u,c->r[0]); // 801DFE2C
  c->r[3]=c->r[3]+0x00000010u; // 801DFE30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFDB0; } // 801DFE34
  c->r[30]=R32(c->r[2]+0xFFFFC330u); // 801DFE38
  c->r[3]=0u+0x10620000u; // 801DFE3C
  c->r[4]=0u+0x00000020u; // 801DFE40
  c->r[0]=0u+0x00000021u; // 801DFE44
  c->r[5]=R32(c->r[30]+0x00000148u); // 801DFE48
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801DFE4C
  c->r[8]=0u+0x00000041u; // 801DFE50
  c->r[7]=0u+0x00000042u; // 801DFE54
  W32(c->r[30]+0x00000148u,c->r[5]); // 801DFE58
  c->r[6]=0u+0x00000040u; // 801DFE5C
  c->r[5]=0u+0x00000043u; // 801DFE60
  {uint32_t ea=c->r[2]+0xFFFFC334u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DFE64
  c->r[4]=R32(c->r[30]+0x0000014Cu); // 801DFE68
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801DFE6C
  {uint32_t ea=c->r[2]+0xFFFFC338u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DFE70
  c->r[0]=0u+0x00000000u; // 801DFE74
  W32(c->r[30]+0x0000014Cu,c->r[4]); // 801DFE78
  c->r[4]=0u+0x80000000u; // 801DFE7C
  c->r[3]=c->r[3]+0x00004DD3u; // 801DFE80
  c->r[9]=R32(c->r[30]+0x00000220u); // 801DFE84
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 801DFE88
  W32(c->r[30]+0x00000220u,c->r[9]); // 801DFE8C
  c->r[8]=R32(c->r[30]+0x00000224u); // 801DFE90
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801DFE94
  W32(c->r[30]+0x00000224u,c->r[8]); // 801DFE98
  c->r[7]=R32(c->r[30]+0x00000228u); // 801DFE9C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801DFEA0
  W32(c->r[30]+0x00000228u,c->r[7]); // 801DFEA4
  c->r[6]=R32(c->r[30]+0x0000022Cu); // 801DFEA8
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801DFEAC
  W32(c->r[30]+0x0000022Cu,c->r[6]); // 801DFEB0
  c->r[5]=R32(c->r[30]+0x0000024Cu); // 801DFEB4
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE7Fu; // 801DFEB8
  W32(c->r[30]+0x0000024Cu,c->r[5]); // 801DFEBC
  {uint32_t ea=c->r[30]+0x00000560u; WF32(ea,c->f[1]);} // 801DFEC0
  {uint32_t ea=c->r[30]+0x0000055Cu; WF32(ea,c->f[0]);} // 801DFEC4
  W32(c->r[30]+0x000005FCu,c->r[0]); // 801DFEC8
  W8(c->r[30]+0x000005FBu,c->r[0]); // 801DFECC
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801DFED0
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801DFED4
  c->r[26]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DFED8
  c->lr=0x801DFEE0u; f_801E5294(c); // 801DFEDC
  c->r[0]=rotl(c->r[26],21)&0x001FFFFFu; // 801DFEE0
  c->r[29]=0u+0xCC010000u; // 801DFEE4
  c->r[28]=0u+0x00000061u; // 801DFEE8
  c->r[0]=c->r[0]|0x69000000u; // 801DFEEC
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801DFEF0
  c->r[0]=c->r[0]|0x00000400u; // 801DFEF4
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 801DFEF8
  c->lr=0x801DFF00u; f_801E5294(c); // 801DFEFC
  c->r[3]=0u+0x3E100000u; // 801DFF00
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801DFF04
  c->r[0]=c->r[3]+0xFFFF83E1u; // 801DFF08
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 801DFF0C
  c->r[0]=rotl(c->r[0],22)&0x003FFFFFu; // 801DFF10
  c->r[0]=c->r[0]|0x46000000u; // 801DFF14
  c->r[0]=c->r[0]|0x00000200u; // 801DFF18
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 801DFF1C
  c->lr=0x801DFF24u; f_801DFA84(c); // 801DFF20
  c->r[28]=0u+0x804B0000u; // 801DFF24
  c->r[29]=c->r[30]+0x00000258u; // 801DFF28
  c->r[27]=c->r[30]+0x000002D8u; // 801DFF2C
  c->r[30]=c->r[30]+0x00000358u; // 801DFF30
  c->r[28]=c->r[28]+0x00007910u; // 801DFF34
  c->r[26]=0u+0x00000000u; // 801DFF38
L_801DFF3C:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 801DFF3C
  c->r[3]=c->r[29]|c->r[29]; // 801DFF40
  c->r[7]=R32(c->r[28]+0x00000020u); // 801DFF44
  c->r[4]=0u+0x00000000u; // 801DFF48
  c->r[6]=0u+0x00000000u; // 801DFF4C
  c->r[8]=0u+0x00000000u; // 801DFF50
  c->lr=0x801DFF58u; f_801E47DC(c); // 801DFF54
  c->r[5]=R32(c->r[28]+0x00000040u); // 801DFF58
  c->r[3]=c->r[27]|c->r[27]; // 801DFF5C
  c->r[7]=R32(c->r[28]+0x00000060u); // 801DFF60
  c->r[4]=0u+0x00000000u; // 801DFF64
  c->r[6]=0u+0x00000000u; // 801DFF68
  c->r[8]=0u+0x00000000u; // 801DFF6C
  c->lr=0x801DFF74u; f_801E47DC(c); // 801DFF70
  c->r[5]=R32(c->r[28]+0x00000080u); // 801DFF74
  c->r[3]=c->r[30]|c->r[30]; // 801DFF78
  c->r[7]=R32(c->r[28]+0x000000A0u); // 801DFF7C
  c->r[4]=0u+0x00000001u; // 801DFF80
  c->r[6]=0u+0x00000000u; // 801DFF84
  c->r[8]=0u+0x00000000u; // 801DFF88
  c->lr=0x801DFF90u; f_801E47DC(c); // 801DFF8C
  c->r[26]=c->r[26]+0x00000001u; // 801DFF90
  c->r[29]=c->r[29]+0x00000010u; // 801DFF94
  cmpu(c,0,c->r[26],0x00000008u); // 801DFF98
  c->r[27]=c->r[27]+0x00000010u; // 801DFF9C
  c->r[30]=c->r[30]+0x00000010u; // 801DFFA0
  c->r[28]=c->r[28]+0x00000004u; // 801DFFA4
  if (crb(c,0)) { IRQCHK(c); goto L_801DFF3C; } // 801DFFA8
  c->r[29]=c->r[31]+0x000003D8u; // 801DFFAC
  c->r[27]=0u+0x00000000u; // 801DFFB0
  c->r[28]=0u+0x000C0000u; // 801DFFB4
L_801DFFB8:;
  c->r[3]=c->r[29]|c->r[29]; // 801DFFB8
  c->r[4]=c->r[28]|c->r[28]; // 801DFFBC
  c->r[5]=0u+0x00000010u; // 801DFFC0
  c->lr=0x801DFFC8u; f_801E4890(c); // 801DFFC4
  c->r[27]=c->r[27]+0x00000001u; // 801DFFC8
  c->r[29]=c->r[29]+0x00000010u; // 801DFFCC
  cmpu(c,0,c->r[27],0x00000010u); // 801DFFD0
  c->r[28]=c->r[28]+0x00002000u; // 801DFFD4
  if (crb(c,0)) { IRQCHK(c); goto L_801DFFB8; } // 801DFFD8
  c->r[29]=c->r[31]+0x000003D8u; // 801DFFDC
  c->r[27]=0u+0x00000000u; // 801DFFE0
  c->r[28]=0u+0x000E0000u; // 801DFFE4
L_801DFFE8:;
  c->r[0]=c->r[27]+0x00000010u; // 801DFFE8
  c->r[4]=c->r[28]|c->r[28]; // 801DFFEC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801DFFF0
  c->r[5]=0u+0x00000040u; // 801DFFF4
  c->r[3]=c->r[29]+c->r[0]; // 801DFFF8
  c->lr=0x801E0000u; f_801E4890(c); // 801DFFFC
  c->r[27]=c->r[27]+0x00000001u; // 801E0000
  c->r[28]=c->r[28]+0x00010000u; // 801E0004
  cmpu(c,0,c->r[27],0x00000004u); // 801E0008
  c->r[28]=c->r[28]+0xFFFF8000u; // 801E000C
  if (crb(c,0)) { IRQCHK(c); goto L_801DFFE8; } // 801E0010
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0014
  c->r[12]=0u+0x00000000u; // 801E0018
  c->r[9]=0u+0xCC010000u; // 801E001C
  c->r[10]=0u+0x00000008u; // 801E0020
  W16(c->r[3]+0x00000006u,c->r[12]); // 801E0024
  c->r[3]=0u+0x00000020u; // 801E0028
  c->r[8]=0u+0x00000010u; // 801E002C
  c->r[7]=0u+0x00001006u; // 801E0030
  c->r[0]=R32(c->r[31]+0x000005F4u); // 801E0034
  c->r[6]=0u+0x00000061u; // 801E0038
  c->r[5]=0u+0x23000000u; // 801E003C
  c->r[4]=0u+0x24000000u; // 801E0040
  c->r[11]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 801E0044
  c->r[0]=0u+0x67000000u; // 801E0048
  W32(c->r[31]+0x000005F4u,c->r[11]); // 801E004C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 801E0050
  W8(c->r[9]+0xFFFF8000u,c->r[3]); // 801E0054
  c->r[3]=R32(c->r[31]+0x000005F4u); // 801E0058
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 801E005C
  c->r[3]=0u+0x00000000u; // 801E0060
  W8(c->r[9]+0xFFFF8000u,c->r[8]); // 801E0064
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 801E0068
  W32(c->r[9]+0xFFFF8000u,c->r[12]); // 801E006C
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 801E0070
  W32(c->r[9]+0xFFFF8000u,c->r[5]); // 801E0074
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 801E0078
  W32(c->r[9]+0xFFFF8000u,c->r[4]); // 801E007C
  W8(c->r[9]+0xFFFF8000u,c->r[6]); // 801E0080
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 801E0084
  c->lr=0x801E008Cu; f_801E5264(c); // 801E0088
  c->r[3]=0u+0x00000002u; // 801E008C
  c->lr=0x801E0094u; f_801E4B18(c); // 801E0090
  c->lr=0x801E0098u; f_801E00B8(c); // 801E0094
  c->r[3]=0u+0x80580000u; // 801E0098
  c->r[11]=c->r[1]+0x00000020u; // 801E009C
  c->r[3]=c->r[3]+0x00004EA0u; // 801E00A0
  c->lr=0x801E00A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E00A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E00A8
  c->lr=c->r[0]; // 801E00AC
  c->r[1]=c->r[1]+0x00000020u; // 801E00B0
  return; // 801E00B4
}

// __GXInitGX
void f_801E00B8(Ctx* __restrict c) {
  trace_call(0x801E00B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E00B8
  c->r[0]=c->lr; // 801E00BC
  c->r[10]=0u+0x43300000u; // 801E00C0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801E00C4
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801E00C8
  c->r[31]=0u+0x00000000u; // 801E00CC
  W32(c->r[1]+0x00000098u,c->r[30]); // 801E00D0
  c->r[30]=0u+0x804B0000u; // 801E00D4
  c->r[30]=c->r[30]+0x000077A0u; // 801E00D8
  W32(c->r[1]+0x00000094u,c->r[29]); // 801E00DC
  W32(c->r[1]+0x00000090u,c->r[28]); // 801E00E0
  c->r[9]=R8(c->r[2]+0xFFFFC33Cu); // 801E00E4
  c->r[8]=R8(c->r[2]+0xFFFFC33Du); // 801E00E8
  c->r[7]=R8(c->r[2]+0xFFFFC33Eu); // 801E00EC
  c->r[6]=R8(c->r[2]+0xFFFFC33Fu); // 801E00F0
  c->r[5]=R8(c->r[2]+0xFFFFC340u); // 801E00F4
  c->r[4]=R8(c->r[2]+0xFFFFC341u); // 801E00F8
  c->r[3]=R8(c->r[2]+0xFFFFC342u); // 801E00FC
  c->r[0]=R8(c->r[2]+0xFFFFC343u); // 801E0100
  W32(c->r[1]+0x00000078u,c->r[10]); // 801E0104
  W32(c->r[1]+0x00000080u,c->r[10]); // 801E0108
  W8(c->r[1]+0x00000024u,c->r[9]); // 801E010C
  W8(c->r[1]+0x00000025u,c->r[8]); // 801E0110
  W8(c->r[1]+0x00000026u,c->r[7]); // 801E0114
  W8(c->r[1]+0x00000027u,c->r[6]); // 801E0118
  W8(c->r[1]+0x00000020u,c->r[5]); // 801E011C
  W8(c->r[1]+0x00000021u,c->r[4]); // 801E0120
  W8(c->r[1]+0x00000022u,c->r[3]); // 801E0124
  W8(c->r[1]+0x00000023u,c->r[0]); // 801E0128
  c->lr=0x801E0130u; f_801CFB94(c); // 801E012C
  cmps(c,0,(int32_t)c->r[3],2); // 801E0130
  if (crb(c,2)) { goto L_801E017C; } // 801E0134
  if (!crb(c,0)) { goto L_801E014C; } // 801E0138
  cmps(c,0,(int32_t)c->r[3],0); // 801E013C
  if (crb(c,2)) { goto L_801E0158; } // 801E0140
  if (!crb(c,0)) { goto L_801E0164; } // 801E0144
  goto L_801E0188; // 801E0148
L_801E014C:;
  cmps(c,0,(int32_t)c->r[3],5); // 801E014C
  if (crb(c,2)) { goto L_801E0170; } // 801E0150
  goto L_801E0188; // 801E0154
L_801E0158:;
  c->r[29]=0u+0x804B0000u; // 801E0158
  c->r[29]=c->r[29]+0x00007B70u; // 801E015C
  goto L_801E0190; // 801E0160
L_801E0164:;
  c->r[29]=0u+0x804B0000u; // 801E0164
  c->r[29]=c->r[29]+0x00007C60u; // 801E0168
  goto L_801E0190; // 801E016C
L_801E0170:;
  c->r[29]=0u+0x804B0000u; // 801E0170
  c->r[29]=c->r[29]+0x00007C9Cu; // 801E0174
  goto L_801E0190; // 801E0178
L_801E017C:;
  c->r[29]=0u+0x804B0000u; // 801E017C
  c->r[29]=c->r[29]+0x00007BE8u; // 801E0180
  goto L_801E0190; // 801E0184
L_801E0188:;
  c->r[29]=0u+0x804B0000u; // 801E0188
  c->r[29]=c->r[29]+0x00007B70u; // 801E018C
L_801E0190:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0190
  c->r[4]=0u+0x01000000u; // 801E0194
  c->r[3]=c->r[1]+0x0000001Cu; // 801E0198
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E019C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E01A0
  c->lr=0x801E01A8u; f_801E3254(c); // 801E01A4
  c->r[3]=0u+0x00000000u; // 801E01A8
  c->r[4]=0u+0x00000001u; // 801E01AC
  c->r[5]=0u+0x00000004u; // 801E01B0
  c->r[6]=0u+0x0000003Cu; // 801E01B4
  c->r[7]=0u+0x00000000u; // 801E01B8
  c->r[8]=0u+0x0000007Du; // 801E01BC
  c->lr=0x801E01C4u; f_801E1C2C(c); // 801E01C0
  c->r[3]=0u+0x00000001u; // 801E01C4
  c->r[4]=0u+0x00000001u; // 801E01C8
  c->r[5]=0u+0x00000005u; // 801E01CC
  c->r[6]=0u+0x0000003Cu; // 801E01D0
  c->r[7]=0u+0x00000000u; // 801E01D4
  c->r[8]=0u+0x0000007Du; // 801E01D8
  c->lr=0x801E01E0u; f_801E1C2C(c); // 801E01DC
  c->r[3]=0u+0x00000002u; // 801E01E0
  c->r[4]=0u+0x00000001u; // 801E01E4
  c->r[5]=0u+0x00000006u; // 801E01E8
  c->r[6]=0u+0x0000003Cu; // 801E01EC
  c->r[7]=0u+0x00000000u; // 801E01F0
  c->r[8]=0u+0x0000007Du; // 801E01F4
  c->lr=0x801E01FCu; f_801E1C2C(c); // 801E01F8
  c->r[3]=0u+0x00000003u; // 801E01FC
  c->r[4]=0u+0x00000001u; // 801E0200
  c->r[5]=0u+0x00000007u; // 801E0204
  c->r[6]=0u+0x0000003Cu; // 801E0208
  c->r[7]=0u+0x00000000u; // 801E020C
  c->r[8]=0u+0x0000007Du; // 801E0210
  c->lr=0x801E0218u; f_801E1C2C(c); // 801E0214
  c->r[3]=0u+0x00000004u; // 801E0218
  c->r[4]=0u+0x00000001u; // 801E021C
  c->r[5]=0u+0x00000008u; // 801E0220
  c->r[6]=0u+0x0000003Cu; // 801E0224
  c->r[7]=0u+0x00000000u; // 801E0228
  c->r[8]=0u+0x0000007Du; // 801E022C
  c->lr=0x801E0234u; f_801E1C2C(c); // 801E0230
  c->r[3]=0u+0x00000005u; // 801E0234
  c->r[4]=0u+0x00000001u; // 801E0238
  c->r[5]=0u+0x00000009u; // 801E023C
  c->r[6]=0u+0x0000003Cu; // 801E0240
  c->r[7]=0u+0x00000000u; // 801E0244
  c->r[8]=0u+0x0000007Du; // 801E0248
  c->lr=0x801E0250u; f_801E1C2C(c); // 801E024C
  c->r[3]=0u+0x00000006u; // 801E0250
  c->r[4]=0u+0x00000001u; // 801E0254
  c->r[5]=0u+0x0000000Au; // 801E0258
  c->r[6]=0u+0x0000003Cu; // 801E025C
  c->r[7]=0u+0x00000000u; // 801E0260
  c->r[8]=0u+0x0000007Du; // 801E0264
  c->lr=0x801E026Cu; f_801E1C2C(c); // 801E0268
  c->r[3]=0u+0x00000007u; // 801E026C
  c->r[4]=0u+0x00000001u; // 801E0270
  c->r[5]=0u+0x0000000Bu; // 801E0274
  c->r[6]=0u+0x0000003Cu; // 801E0278
  c->r[7]=0u+0x00000000u; // 801E027C
  c->r[8]=0u+0x0000007Du; // 801E0280
  c->lr=0x801E0288u; f_801E1C2C(c); // 801E0284
  c->r[3]=0u+0x00000001u; // 801E0288
  c->lr=0x801E0290u; f_801E1E54(c); // 801E028C
  c->lr=0x801E0294u; f_801E17C4(c); // 801E0290
  c->lr=0x801E0298u; f_801E1C1C(c); // 801E0294
  c->r[28]=0u+0x00000009u; // 801E0298
L_801E029C:;
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E029C
  c->r[3]=c->r[28]|c->r[28]; // 801E02A0
  c->r[5]=0u+0x00000000u; // 801E02A4
  c->lr=0x801E02ACu; f_801E1BDC(c); // 801E02A8
  c->r[28]=c->r[28]+0x00000001u; // 801E02AC
  cmpu(c,0,c->r[28],0x00000018u); // 801E02B0
  if (!crb(c,1)) { IRQCHK(c); goto L_801E029C; } // 801E02B4
  c->r[28]=0u+0x00000000u; // 801E02B8
L_801E02BC:;
  c->r[3]=c->r[28]|c->r[28]; // 801E02BC
  c->r[4]=c->r[30]+0x00000080u; // 801E02C0
  c->lr=0x801E02C8u; f_801E1998(c); // 801E02C4
  c->r[28]=c->r[28]+0x00000001u; // 801E02C8
  cmpu(c,0,c->r[28],0x00000008u); // 801E02CC
  if (crb(c,0)) { IRQCHK(c); goto L_801E02BC; } // 801E02D0
  c->r[3]=0u+0x00000006u; // 801E02D4
  c->r[4]=0u+0x00000000u; // 801E02D8
  c->lr=0x801E02E0u; f_801E2B18(c); // 801E02DC
  c->r[3]=0u+0x00000006u; // 801E02E0
  c->r[4]=0u+0x00000000u; // 801E02E4
  c->lr=0x801E02ECu; f_801E2B4C(c); // 801E02E8
  c->r[3]=0u+0x00000000u; // 801E02EC
  c->r[4]=0u+0x00000000u; // 801E02F0
  c->r[5]=0u+0x00000000u; // 801E02F4
  c->lr=0x801E02FCu; f_801E2B80(c); // 801E02F8
  c->r[3]=0u+0x00000001u; // 801E02FC
  c->r[4]=0u+0x00000000u; // 801E0300
  c->r[5]=0u+0x00000000u; // 801E0304
  c->lr=0x801E030Cu; f_801E2B80(c); // 801E0308
  c->r[3]=0u+0x00000002u; // 801E030C
  c->r[4]=0u+0x00000000u; // 801E0310
  c->r[5]=0u+0x00000000u; // 801E0314
  c->lr=0x801E031Cu; f_801E2B80(c); // 801E0318
  c->r[3]=0u+0x00000003u; // 801E031C
  c->r[4]=0u+0x00000000u; // 801E0320
  c->r[5]=0u+0x00000000u; // 801E0324
  c->lr=0x801E032Cu; f_801E2B80(c); // 801E0328
  c->r[3]=0u+0x00000004u; // 801E032C
  c->r[4]=0u+0x00000000u; // 801E0330
  c->r[5]=0u+0x00000000u; // 801E0334
  c->lr=0x801E033Cu; f_801E2B80(c); // 801E0338
  c->r[3]=0u+0x00000005u; // 801E033C
  c->r[4]=0u+0x00000000u; // 801E0340
  c->r[5]=0u+0x00000000u; // 801E0344
  c->lr=0x801E034Cu; f_801E2B80(c); // 801E0348
  c->r[3]=0u+0x00000006u; // 801E034C
  c->r[4]=0u+0x00000000u; // 801E0350
  c->r[5]=0u+0x00000000u; // 801E0354
  c->lr=0x801E035Cu; f_801E2B80(c); // 801E0358
  c->r[3]=0u+0x00000007u; // 801E035C
  c->r[4]=0u+0x00000000u; // 801E0360
  c->r[5]=0u+0x00000000u; // 801E0364
  c->lr=0x801E036Cu; f_801E2B80(c); // 801E0368
  {uint32_t ea=c->r[2]+0xFFFFC338u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E036C
  c->r[3]=c->r[1]+0x00000048u; // 801E0370
  {uint32_t ea=c->r[2]+0xFFFFC344u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E0374
  c->r[4]=0u+0x00000000u; // 801E0378
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E037C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801E0380
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801E0384
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801E0388
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801E038C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801E0390
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801E0394
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801E0398
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 801E039C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E03A0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801E03A4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801E03A8
  c->lr=0x801E03B0u; f_801E6204(c); // 801E03AC
  c->r[3]=c->r[1]+0x00000048u; // 801E03B0
  c->r[4]=0u+0x00000000u; // 801E03B4
  c->lr=0x801E03BCu; f_801E6254(c); // 801E03B8
  c->r[3]=0u+0x00000000u; // 801E03BC
  c->lr=0x801E03C4u; f_801E62AC(c); // 801E03C0
  c->r[3]=c->r[1]+0x00000048u; // 801E03C4
  c->r[4]=0u+0x0000003Cu; // 801E03C8
  c->r[5]=0u+0x00000000u; // 801E03CC
  c->lr=0x801E03D4u; f_801E62CC(c); // 801E03D0
  c->r[3]=c->r[1]+0x00000048u; // 801E03D4
  c->r[4]=0u+0x0000007Du; // 801E03D8
  c->r[5]=0u+0x00000000u; // 801E03DC
  c->lr=0x801E03E4u; f_801E62CC(c); // 801E03E0
  c->r[3]=R16(c->r[29]+0x00000004u); // 801E03E4
  c->r[0]=R16(c->r[29]+0x00000008u); // 801E03E8
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801E03EC
  {uint32_t ea=c->r[2]+0xFFFFC338u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E03F0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E03F4
  {uint32_t ea=c->r[2]+0xFFFFC350u; c->f[4]=RF64(ea);} // 801E03F8
  c->f[2]=c->f[1]; // 801E03FC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[3]=RF64(ea);} // 801E0400
  c->f[5]=c->f[1]; // 801E0404
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 801E0408
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 801E040C
  {uint32_t ea=c->r[2]+0xFFFFC344u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E0410
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 801E0414
  c->lr=0x801E041Cu; f_801E644C(c); // 801E0418
  c->r[3]=c->r[30]+0x00000150u; // 801E041C
  c->lr=0x801E0424u; f_801E61B8(c); // 801E0420
  c->r[3]=0u+0x00000000u; // 801E0424
  c->lr=0x801E042Cu; f_801E2BE4(c); // 801E0428
  c->r[3]=0u+0x00000002u; // 801E042C
  c->lr=0x801E0434u; f_801E2BBC(c); // 801E0430
  c->r[3]=0u+0x00000000u; // 801E0434
  c->lr=0x801E043Cu; f_801E656C(c); // 801E0438
  c->r[5]=R16(c->r[29]+0x00000004u); // 801E043C
  c->r[3]=0u+0x00000000u; // 801E0440
  c->r[6]=R16(c->r[29]+0x00000006u); // 801E0444
  c->r[4]=0u+0x00000000u; // 801E0448
  c->lr=0x801E0450u; f_801E64C8(c); // 801E044C
  c->r[3]=0u+0x00000000u; // 801E0450
  c->r[4]=0u+0x00000000u; // 801E0454
  c->lr=0x801E045Cu; f_801E6530(c); // 801E0458
  c->r[3]=0u+0x00000000u; // 801E045C
  c->lr=0x801E0464u; f_801E3D74(c); // 801E0460
  c->r[3]=0u+0x00000004u; // 801E0464
  c->r[4]=0u+0x00000000u; // 801E0468
  c->r[5]=0u+0x00000000u; // 801E046C
  c->r[6]=0u+0x00000001u; // 801E0470
  c->r[7]=0u+0x00000000u; // 801E0474
  c->r[8]=0u+0x00000000u; // 801E0478
  c->r[9]=0u+0x00000002u; // 801E047C
  c->lr=0x801E0484u; f_801E3D98(c); // 801E0480
  W32(c->r[1]+0x00000018u,c->r[31]); // 801E0484
  c->r[4]=c->r[1]+0x00000018u; // 801E0488
  c->r[3]=0u+0x00000004u; // 801E048C
  c->lr=0x801E0494u; f_801E3BC4(c); // 801E0490
  c->r[0]=R32(c->r[1]+0x00000020u); // 801E0494
  c->r[4]=c->r[1]+0x00000014u; // 801E0498
  c->r[3]=0u+0x00000004u; // 801E049C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E04A0
  c->lr=0x801E04A8u; f_801E3C9C(c); // 801E04A4
  c->r[3]=0u+0x00000005u; // 801E04A8
  c->r[4]=0u+0x00000000u; // 801E04AC
  c->r[5]=0u+0x00000000u; // 801E04B0
  c->r[6]=0u+0x00000001u; // 801E04B4
  c->r[7]=0u+0x00000000u; // 801E04B8
  c->r[8]=0u+0x00000000u; // 801E04BC
  c->r[9]=0u+0x00000002u; // 801E04C0
  c->lr=0x801E04C8u; f_801E3D98(c); // 801E04C4
  W32(c->r[1]+0x00000010u,c->r[31]); // 801E04C8
  c->r[4]=c->r[1]+0x00000010u; // 801E04CC
  c->r[3]=0u+0x00000005u; // 801E04D0
  c->lr=0x801E04D8u; f_801E3BC4(c); // 801E04D4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801E04D8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E04DC
  c->r[3]=0u+0x00000005u; // 801E04E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E04E4
  c->lr=0x801E04ECu; f_801E3C9C(c); // 801E04E8
  c->lr=0x801E04F0u; f_801E48B0(c); // 801E04EC
  c->r[3]=0u+0x801E0000u; // 801E04F0
  c->r[3]=c->r[3]+0xFFFFF800u; // 801E04F4
  c->lr=0x801E04FCu; f_801E48F8(c); // 801E04F8
  c->r[3]=0u+0x801E0000u; // 801E04FC
  c->r[3]=c->r[3]+0xFFFFF8F4u; // 801E0500
  c->lr=0x801E0508u; f_801E490C(c); // 801E0504
  c->r[3]=c->r[1]+0x00000028u; // 801E0508
  c->r[4]=c->r[30]+0x00000060u; // 801E050C
  c->r[5]=0u+0x00000004u; // 801E0510
  c->r[6]=0u+0x00000004u; // 801E0514
  c->r[7]=0u+0x00000003u; // 801E0518
  c->r[8]=0u+0x00000000u; // 801E051C
  c->r[9]=0u+0x00000000u; // 801E0520
  c->r[10]=0u+0x00000000u; // 801E0524
  c->lr=0x801E052Cu; f_801E4020(c); // 801E0528
  c->r[3]=c->r[1]+0x00000028u; // 801E052C
  c->r[4]=0u+0x00000000u; // 801E0530
  c->lr=0x801E0538u; f_801E46CC(c); // 801E0534
  c->r[3]=c->r[1]+0x00000028u; // 801E0538
  c->r[4]=0u+0x00000001u; // 801E053C
  c->lr=0x801E0544u; f_801E46CC(c); // 801E0540
  c->r[3]=c->r[1]+0x00000028u; // 801E0544
  c->r[4]=0u+0x00000002u; // 801E0548
  c->lr=0x801E0550u; f_801E46CC(c); // 801E054C
  c->r[3]=c->r[1]+0x00000028u; // 801E0550
  c->r[4]=0u+0x00000003u; // 801E0554
  c->lr=0x801E055Cu; f_801E46CC(c); // 801E0558
  c->r[3]=c->r[1]+0x00000028u; // 801E055C
  c->r[4]=0u+0x00000004u; // 801E0560
  c->lr=0x801E0568u; f_801E46CC(c); // 801E0564
  c->r[3]=c->r[1]+0x00000028u; // 801E0568
  c->r[4]=0u+0x00000005u; // 801E056C
  c->lr=0x801E0574u; f_801E46CC(c); // 801E0570
  c->r[3]=c->r[1]+0x00000028u; // 801E0574
  c->r[4]=0u+0x00000006u; // 801E0578
  c->lr=0x801E0580u; f_801E46CC(c); // 801E057C
  c->r[3]=c->r[1]+0x00000028u; // 801E0580
  c->r[4]=0u+0x00000007u; // 801E0584
  c->lr=0x801E058Cu; f_801E46CC(c); // 801E0588
  c->r[3]=0u+0x00000000u; // 801E058C
  c->r[4]=0u+0x00000000u; // 801E0590
  c->r[5]=0u+0x00000000u; // 801E0594
  c->r[6]=0u+0x00000004u; // 801E0598
  c->lr=0x801E05A0u; f_801E57B8(c); // 801E059C
  c->r[3]=0u+0x00000001u; // 801E05A0
  c->r[4]=0u+0x00000001u; // 801E05A4
  c->r[5]=0u+0x00000001u; // 801E05A8
  c->r[6]=0u+0x00000004u; // 801E05AC
  c->lr=0x801E05B4u; f_801E57B8(c); // 801E05B0
  c->r[3]=0u+0x00000002u; // 801E05B4
  c->r[4]=0u+0x00000002u; // 801E05B8
  c->r[5]=0u+0x00000002u; // 801E05BC
  c->r[6]=0u+0x00000004u; // 801E05C0
  c->lr=0x801E05C8u; f_801E57B8(c); // 801E05C4
  c->r[3]=0u+0x00000003u; // 801E05C8
  c->r[4]=0u+0x00000003u; // 801E05CC
  c->r[5]=0u+0x00000003u; // 801E05D0
  c->r[6]=0u+0x00000004u; // 801E05D4
  c->lr=0x801E05DCu; f_801E57B8(c); // 801E05D8
  c->r[3]=0u+0x00000004u; // 801E05DC
  c->r[4]=0u+0x00000004u; // 801E05E0
  c->r[5]=0u+0x00000004u; // 801E05E4
  c->r[6]=0u+0x00000004u; // 801E05E8
  c->lr=0x801E05F0u; f_801E57B8(c); // 801E05EC
  c->r[3]=0u+0x00000005u; // 801E05F0
  c->r[4]=0u+0x00000005u; // 801E05F4
  c->r[5]=0u+0x00000005u; // 801E05F8
  c->r[6]=0u+0x00000004u; // 801E05FC
  c->lr=0x801E0604u; f_801E57B8(c); // 801E0600
  c->r[3]=0u+0x00000006u; // 801E0604
  c->r[4]=0u+0x00000006u; // 801E0608
  c->r[5]=0u+0x00000006u; // 801E060C
  c->r[6]=0u+0x00000004u; // 801E0610
  c->lr=0x801E0618u; f_801E57B8(c); // 801E0614
  c->r[3]=0u+0x00000007u; // 801E0618
  c->r[4]=0u+0x00000007u; // 801E061C
  c->r[5]=0u+0x00000007u; // 801E0620
  c->r[6]=0u+0x00000004u; // 801E0624
  c->lr=0x801E062Cu; f_801E57B8(c); // 801E0628
  c->r[3]=0u+0x00000008u; // 801E062C
  c->r[4]=0u+0x000000FFu; // 801E0630
  c->r[5]=0u+0x000000FFu; // 801E0634
  c->r[6]=0u+0x000000FFu; // 801E0638
  c->lr=0x801E0640u; f_801E57B8(c); // 801E063C
  c->r[3]=0u+0x00000009u; // 801E0640
  c->r[4]=0u+0x000000FFu; // 801E0644
  c->r[5]=0u+0x000000FFu; // 801E0648
  c->r[6]=0u+0x000000FFu; // 801E064C
  c->lr=0x801E0654u; f_801E57B8(c); // 801E0650
  c->r[3]=0u+0x0000000Au; // 801E0654
  c->r[4]=0u+0x000000FFu; // 801E0658
  c->r[5]=0u+0x000000FFu; // 801E065C
  c->r[6]=0u+0x000000FFu; // 801E0660
  c->lr=0x801E0668u; f_801E57B8(c); // 801E0664
  c->r[3]=0u+0x0000000Bu; // 801E0668
  c->r[4]=0u+0x000000FFu; // 801E066C
  c->r[5]=0u+0x000000FFu; // 801E0670
  c->r[6]=0u+0x000000FFu; // 801E0674
  c->lr=0x801E067Cu; f_801E57B8(c); // 801E0678
  c->r[3]=0u+0x0000000Cu; // 801E067C
  c->r[4]=0u+0x000000FFu; // 801E0680
  c->r[5]=0u+0x000000FFu; // 801E0684
  c->r[6]=0u+0x000000FFu; // 801E0688
  c->lr=0x801E0690u; f_801E57B8(c); // 801E068C
  c->r[3]=0u+0x0000000Du; // 801E0690
  c->r[4]=0u+0x000000FFu; // 801E0694
  c->r[5]=0u+0x000000FFu; // 801E0698
  c->r[6]=0u+0x000000FFu; // 801E069C
  c->lr=0x801E06A4u; f_801E57B8(c); // 801E06A0
  c->r[3]=0u+0x0000000Eu; // 801E06A4
  c->r[4]=0u+0x000000FFu; // 801E06A8
  c->r[5]=0u+0x000000FFu; // 801E06AC
  c->r[6]=0u+0x000000FFu; // 801E06B0
  c->lr=0x801E06B8u; f_801E57B8(c); // 801E06B4
  c->r[3]=0u+0x0000000Fu; // 801E06B8
  c->r[4]=0u+0x000000FFu; // 801E06BC
  c->r[5]=0u+0x000000FFu; // 801E06C0
  c->r[6]=0u+0x000000FFu; // 801E06C4
  c->lr=0x801E06CCu; f_801E57B8(c); // 801E06C8
  c->r[3]=0u+0x00000001u; // 801E06CC
  c->lr=0x801E06D4u; f_801E5914(c); // 801E06D0
  c->r[3]=0u+0x00000000u; // 801E06D4
  c->r[4]=0u+0x00000003u; // 801E06D8
  c->lr=0x801E06E0u; f_801E52B8(c); // 801E06DC
  c->r[3]=0u+0x00000007u; // 801E06E0
  c->r[4]=0u+0x00000000u; // 801E06E4
  c->r[5]=0u+0x00000000u; // 801E06E8
  c->r[6]=0u+0x00000007u; // 801E06EC
  c->r[7]=0u+0x00000000u; // 801E06F0
  c->lr=0x801E06F8u; f_801E56F4(c); // 801E06F4
  c->r[3]=0u+0x00000000u; // 801E06F8
  c->r[4]=0u+0x00000011u; // 801E06FC
  c->r[5]=0u+0x00000000u; // 801E0700
  c->lr=0x801E0708u; f_801E572C(c); // 801E0704
  c->r[28]=0u+0x00000000u; // 801E0708
L_801E070C:;
  c->r[3]=c->r[28]|c->r[28]; // 801E070C
  c->r[4]=0u+0x00000006u; // 801E0710
  c->lr=0x801E0718u; f_801E559C(c); // 801E0714
  c->r[3]=c->r[28]|c->r[28]; // 801E0718
  c->r[4]=0u+0x00000000u; // 801E071C
  c->lr=0x801E0724u; f_801E55EC(c); // 801E0720
  c->r[3]=c->r[28]|c->r[28]; // 801E0724
  c->r[4]=0u+0x00000000u; // 801E0728
  c->r[5]=0u+0x00000000u; // 801E072C
  c->lr=0x801E0734u; f_801E563C(c); // 801E0730
  c->r[28]=c->r[28]+0x00000001u; // 801E0734
  cmpu(c,0,c->r[28],0x00000010u); // 801E0738
  if (crb(c,0)) { IRQCHK(c); goto L_801E070C; } // 801E073C
  c->r[3]=0u+0x00000000u; // 801E0740
  c->r[4]=0u+0x00000000u; // 801E0744
  c->r[5]=0u+0x00000001u; // 801E0748
  c->r[6]=0u+0x00000002u; // 801E074C
  c->r[7]=0u+0x00000003u; // 801E0750
  c->lr=0x801E0758u; f_801E5678(c); // 801E0754
  c->r[3]=0u+0x00000001u; // 801E0758
  c->r[4]=0u+0x00000000u; // 801E075C
  c->r[5]=0u+0x00000000u; // 801E0760
  c->r[6]=0u+0x00000000u; // 801E0764
  c->r[7]=0u+0x00000003u; // 801E0768
  c->lr=0x801E0770u; f_801E5678(c); // 801E076C
  c->r[3]=0u+0x00000002u; // 801E0770
  c->r[4]=0u+0x00000001u; // 801E0774
  c->r[5]=0u+0x00000001u; // 801E0778
  c->r[6]=0u+0x00000001u; // 801E077C
  c->r[7]=0u+0x00000003u; // 801E0780
  c->lr=0x801E0788u; f_801E5678(c); // 801E0784
  c->r[3]=0u+0x00000003u; // 801E0788
  c->r[4]=0u+0x00000002u; // 801E078C
  c->r[5]=0u+0x00000002u; // 801E0790
  c->r[6]=0u+0x00000002u; // 801E0794
  c->r[7]=0u+0x00000003u; // 801E0798
  c->lr=0x801E07A0u; f_801E5678(c); // 801E079C
  c->r[28]=0u+0x00000000u; // 801E07A0
L_801E07A4:;
  c->r[3]=c->r[28]|c->r[28]; // 801E07A4
  c->lr=0x801E07ACu; f_801E5218(c); // 801E07A8
  c->r[28]=c->r[28]+0x00000001u; // 801E07AC
  cmpu(c,0,c->r[28],0x00000010u); // 801E07B0
  if (crb(c,0)) { IRQCHK(c); goto L_801E07A4; } // 801E07B4
  c->r[3]=0u+0x00000000u; // 801E07B8
  c->lr=0x801E07C0u; f_801E51F8(c); // 801E07BC
  c->r[3]=0u+0x00000000u; // 801E07C0
  c->r[4]=0u+0x00000000u; // 801E07C4
  c->r[5]=0u+0x00000000u; // 801E07C8
  c->lr=0x801E07D0u; f_801E5028(c); // 801E07CC
  c->r[3]=0u+0x00000001u; // 801E07D0
  c->r[4]=0u+0x00000000u; // 801E07D4
  c->r[5]=0u+0x00000000u; // 801E07D8
  c->lr=0x801E07E0u; f_801E5028(c); // 801E07DC
  c->r[3]=0u+0x00000002u; // 801E07E0
  c->r[4]=0u+0x00000000u; // 801E07E4
  c->r[5]=0u+0x00000000u; // 801E07E8
  c->lr=0x801E07F0u; f_801E5028(c); // 801E07EC
  c->r[3]=0u+0x00000003u; // 801E07F0
  c->r[4]=0u+0x00000000u; // 801E07F4
  c->r[5]=0u+0x00000000u; // 801E07F8
  c->lr=0x801E0800u; f_801E5028(c); // 801E07FC
  {uint32_t ea=c->r[2]+0xFFFFC344u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E0800
  c->r[4]=c->r[1]+0x00000008u; // 801E0804
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E0808
  c->r[3]=0u+0x00000000u; // 801E080C
  c->f[4]=c->f[2]; // 801E0810
  {uint32_t ea=c->r[2]+0xFFFFC338u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E0814
  {uint32_t ea=c->r[2]+0xFFFFC348u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E0818
  c->lr=0x801E0820u; f_801E5938(c); // 801E081C
  c->r[3]=0u+0x00000000u; // 801E0820
  c->r[4]=0u+0x00000000u; // 801E0824
  c->r[5]=0u+0x00000000u; // 801E0828
  c->lr=0x801E0830u; f_801E5CC4(c); // 801E082C
  c->r[3]=0u+0x00000000u; // 801E0830
  c->r[4]=0u+0x00000004u; // 801E0834
  c->r[5]=0u+0x00000005u; // 801E0838
  c->r[6]=0u+0x00000000u; // 801E083C
  c->lr=0x801E0844u; f_801E5DE8(c); // 801E0840
  c->r[3]=0u+0x00000001u; // 801E0844
  c->lr=0x801E084Cu; f_801E5E38(c); // 801E0848
  c->r[3]=0u+0x00000001u; // 801E084C
  c->lr=0x801E0854u; f_801E5E64(c); // 801E0850
  c->r[3]=0u+0x00000001u; // 801E0854
  c->r[4]=0u+0x00000003u; // 801E0858
  c->r[5]=0u+0x00000001u; // 801E085C
  c->lr=0x801E0864u; f_801E5E90(c); // 801E0860
  c->r[3]=0u+0x00000001u; // 801E0864
  c->lr=0x801E086Cu; f_801E5EC4(c); // 801E0868
  c->r[3]=0u+0x00000001u; // 801E086C
  c->lr=0x801E0874u; f_801E5F9C(c); // 801E0870
  c->r[3]=0u+0x00000000u; // 801E0874
  c->r[4]=0u+0x00000000u; // 801E0878
  c->lr=0x801E0880u; f_801E5FC8(c); // 801E087C
  c->r[3]=0u+0x00000000u; // 801E0880
  c->r[4]=0u+0x00000000u; // 801E0884
  c->lr=0x801E088Cu; f_801E5EF4(c); // 801E0888
  c->r[3]=0u+0x00000001u; // 801E088C
  c->r[4]=0u+0x00000001u; // 801E0890
  c->lr=0x801E0898u; f_801E5FF8(c); // 801E0894
  c->r[0]=R16(c->r[29]+0x00000008u); // 801E0898
  c->r[3]=R16(c->r[29]+0x00000010u); // 801E089C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801E08A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E08A4
  if (!crb(c,2)) { goto L_801E08B4; } // 801E08A8
  c->r[4]=0u+0x00000001u; // 801E08AC
  goto L_801E08B8; // 801E08B0
L_801E08B4:;
  c->r[4]=0u+0x00000000u; // 801E08B4
L_801E08B8:;
  c->r[3]=R8(c->r[29]+0x00000018u); // 801E08B8
  c->lr=0x801E08C0u; f_801E602C(c); // 801E08BC
  c->r[5]=R16(c->r[29]+0x00000004u); // 801E08C0
  c->r[3]=0u+0x00000000u; // 801E08C4
  c->r[6]=R16(c->r[29]+0x00000006u); // 801E08C8
  c->r[4]=0u+0x00000000u; // 801E08CC
  c->lr=0x801E08D4u; f_801E2D50(c); // 801E08D0
  c->r[3]=R16(c->r[29]+0x00000004u); // 801E08D4
  c->r[4]=R16(c->r[29]+0x00000006u); // 801E08D8
  c->lr=0x801E08E0u; f_801E2DD0(c); // 801E08DC
  c->r[3]=R16(c->r[29]+0x00000008u); // 801E08E0
  c->r[0]=R16(c->r[29]+0x00000006u); // 801E08E4
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 801E08E8
  {uint32_t ea=c->r[2]+0xFFFFC350u; c->f[2]=RF64(ea);} // 801E08EC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E08F0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 801E08F4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 801E08F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E08FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801E0900
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E0904
  c->lr=0x801E090Cu; f_801E3188(c); // 801E0908
  c->r[3]=0u+0x00000003u; // 801E090C
  c->lr=0x801E0914u; f_801E2F30(c); // 801E0910
  c->r[3]=R8(c->r[29]+0x00000019u); // 801E0914
  c->r[4]=c->r[29]+0x0000001Au; // 801E0918
  c->r[6]=c->r[29]+0x00000032u; // 801E091C
  c->r[5]=0u+0x00000001u; // 801E0920
  c->lr=0x801E0928u; f_801E32CC(c); // 801E0924
  c->r[3]=0u+0x00000000u; // 801E0928
  c->lr=0x801E0930u; f_801E34B0(c); // 801E092C
  c->r[3]=0u+0x00000000u; // 801E0930
  c->lr=0x801E0938u; f_801E2F10(c); // 801E0934
  c->lr=0x801E093Cu; f_801E3758(c); // 801E0938
  c->r[3]=0u+0x00000001u; // 801E093C
  c->lr=0x801E0944u; f_801E23F4(c); // 801E0940
  c->r[3]=0u+0x00000001u; // 801E0944
  c->lr=0x801E094Cu; f_801E2384(c); // 801E0948
  c->r[3]=0u+0x00000000u; // 801E094C
  c->lr=0x801E0954u; f_801E2420(c); // 801E0950
  c->r[3]=0u+0x00000000u; // 801E0954
  c->r[4]=0u+0x00000000u; // 801E0958
  c->r[5]=0u+0x00000001u; // 801E095C
  c->r[6]=0u+0x0000000Fu; // 801E0960
  c->lr=0x801E0968u; f_801E2398(c); // 801E0964
  c->r[3]=0u+0x00000007u; // 801E0968
  c->r[4]=0u+0x00000000u; // 801E096C
  c->lr=0x801E0974u; f_801E235C(c); // 801E0970
  c->r[3]=0u+0x00000001u; // 801E0974
  c->lr=0x801E097Cu; f_801E236C(c); // 801E0978
  c->r[3]=0u+0x00000000u; // 801E097C
  c->r[4]=0u+0x00000000u; // 801E0980
  c->lr=0x801E0988u; f_801E2408(c); // 801E0984
  c->r[3]=0u+0x00000001u; // 801E0988
  c->r[4]=0u+0x00000007u; // 801E098C
  c->r[5]=0u+0x00000001u; // 801E0990
  c->lr=0x801E0998u; f_801E2434(c); // 801E0994
  c->r[3]=0u+0x00000023u; // 801E0998
  c->r[4]=0u+0x00000016u; // 801E099C
  c->lr=0x801E09A4u; f_801E661C(c); // 801E09A0
  c->lr=0x801E09A8u; f_801E6E48(c); // 801E09A4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801E09A8
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801E09AC
  c->r[30]=R32(c->r[1]+0x00000098u); // 801E09B0
  c->r[29]=R32(c->r[1]+0x00000094u); // 801E09B4
  c->r[28]=R32(c->r[1]+0x00000090u); // 801E09B8
  c->lr=c->r[0]; // 801E09BC
  c->r[1]=c->r[1]+0x000000A0u; // 801E09C0
  return; // 801E09C4
}

// GXCPInterruptHandler
void f_801E09C8(Ctx* __restrict c) {
  trace_call(0x801E09C8u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E09C8
  c->r[0]=c->lr; // 801E09CC
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801E09D0
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801E09D4
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801E09D8
  W32(c->r[1]+0x000002D8u,c->r[30]); // 801E09DC
  c->r[30]=c->r[4]|c->r[4]; // 801E09E0
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E09E4
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E09E8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E09EC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E09F0
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801E09F4
  if (crb(c,2)) { goto L_801E0A48; } // 801E09F8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E09FC
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 801E0A00
  if (crb(c,2)) { goto L_801E0A48; } // 801E0A04
  c->r[3]=R32(c->r[13]+0xFFFFA154u); // 801E0A08
  c->lr=0x801E0A10u; f_801C1DA4(c); // 801E0A0C
  c->r[0]=0u+0x00000000u; // 801E0A10
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E0A14
  W32(c->r[13]+0xFFFFA150u,c->r[0]); // 801E0A18
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E0A1C
  c->r[0]=c->r[0]|0x00000003u; // 801E0A20
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E0A24
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0A28
  W16(c->r[3]+0x00000004u,c->r[0]); // 801E0A2C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E0A30
  c->r[0]=c->r[0]|0x00000004u; // 801E0A34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801E0A38
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E0A3C
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0A40
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E0A44
L_801E0A48:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E0A48
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 801E0A4C
  if (crb(c,2)) { goto L_801E0AB0; } // 801E0A50
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E0A54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801E0A58
  if (crb(c,2)) { goto L_801E0AB0; } // 801E0A5C
  c->r[3]=R32(c->r[13]+0xFFFFA144u); // 801E0A60
  c->r[0]=0u+0x00000001u; // 801E0A64
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E0A68
  c->r[3]=c->r[3]+0x00000001u; // 801E0A6C
  W32(c->r[13]+0xFFFFA144u,c->r[3]); // 801E0A70
  c->r[3]=R32(c->r[31]+0x00000008u); // 801E0A74
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801E0A78
  c->r[4]=c->r[4]|0x00000008u; // 801E0A7C
  W32(c->r[31]+0x00000008u,c->r[4]); // 801E0A80
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0A84
  W16(c->r[3]+0x00000002u,c->r[4]); // 801E0A88
  c->r[3]=R32(c->r[5]+0x00000010u); // 801E0A8C
  c->r[3]=c->r[3]|0x00000001u; // 801E0A90
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801E0A94
  W32(c->r[5]+0x00000010u,c->r[4]); // 801E0A98
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0A9C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801E0AA0
  W32(c->r[13]+0xFFFFA150u,c->r[0]); // 801E0AA4
  c->r[3]=R32(c->r[13]+0xFFFFA154u); // 801E0AA8
  c->lr=0x801E0AB0u; f_801C203C(c); // 801E0AAC
L_801E0AB0:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801E0AB0
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 801E0AB4
  if (crb(c,2)) { goto L_801E0B10; } // 801E0AB8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E0ABC
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801E0AC0
  if (crb(c,2)) { goto L_801E0B10; } // 801E0AC4
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 801E0AC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E0ACC
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0AD0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E0AD4
  c->r[0]=R32(c->r[13]+0xFFFFA14Cu); // 801E0AD8
  cmps(c,0,(int32_t)c->r[0],0); // 801E0ADC
  if (crb(c,2)) { goto L_801E0B10; } // 801E0AE0
  c->r[3]=c->r[1]+0x00000008u; // 801E0AE4
  c->lr=0x801E0AECu; f_801BAFF0(c); // 801E0AE8
  c->r[3]=c->r[1]+0x00000008u; // 801E0AEC
  c->lr=0x801E0AF4u; f_801BADC8(c); // 801E0AF0
  c->r[12]=R32(c->r[13]+0xFFFFA14Cu); // 801E0AF4
  c->ctr=c->r[12]; // 801E0AF8
  if (true) { c->lr=0x801E0B00u; dispatch(c,c->ctr); } // 801E0AFC
  c->r[3]=c->r[1]+0x00000008u; // 801E0B00
  c->lr=0x801E0B08u; f_801BAFF0(c); // 801E0B04
  c->r[3]=c->r[30]|c->r[30]; // 801E0B08
  c->lr=0x801E0B10u; f_801BADC8(c); // 801E0B0C
L_801E0B10:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801E0B10
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801E0B14
  c->r[30]=R32(c->r[1]+0x000002D8u); // 801E0B18
  c->lr=c->r[0]; // 801E0B1C
  c->r[1]=c->r[1]+0x000002E0u; // 801E0B20
  return; // 801E0B24
}

// GXInitFifoBase
void f_801E0B28(Ctx* __restrict c) {
  trace_call(0x801E0B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0B28
  c->r[0]=c->lr; // 801E0B2C
  c->r[7]=c->r[4]+c->r[5]; // 801E0B30
  c->r[6]=c->r[5]+0xFFFFC000u; // 801E0B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0B38
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 801E0B3C
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFE0u; // 801E0B40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0B44
  c->r[31]=0u+0x00000000u; // 801E0B48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0B4C
  c->r[30]=c->r[4]|c->r[4]; // 801E0B50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0B54
  c->r[29]=c->r[3]|c->r[3]; // 801E0B58
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E0B5C
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E0B60
  W32(c->r[3]+0x00000008u,c->r[5]); // 801E0B64
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801E0B68
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801E0B6C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E0B70
  c->lr=0x801E0B78u; f_801BE74C(c); // 801E0B74
  cmps(c,0,(int32_t)c->r[31],0); // 801E0B78
  W32(c->r[29]+0x00000014u,c->r[30]); // 801E0B7C
  W32(c->r[29]+0x00000018u,c->r[30]); // 801E0B80
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 801E0B84
  if (!crb(c,0)) { goto L_801E0B94; } // 801E0B88
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E0B8C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801E0B90
L_801E0B94:;
  c->lr=0x801E0B98u; f_801BE774(c); // 801E0B94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0B98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0B9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0BA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0BA4
  c->lr=c->r[0]; // 801E0BA8
  c->r[1]=c->r[1]+0x00000020u; // 801E0BAC
  return; // 801E0BB0
}

// CPGPLinkCheck
void f_801E0BB4(Ctx* __restrict c) {
  trace_call(0x801E0BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0BB4
  c->r[0]=c->lr; // 801E0BB8
  c->r[7]=0u+0x00000000u; // 801E0BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0BC0
  c->r[0]=R8(c->r[13]+0xFFFFA140u); // 801E0BC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E0BC8
  if (crb(c,2)) { goto L_801E0BDC; } // 801E0BCC
  c->r[0]=R8(c->r[13]+0xFFFFA141u); // 801E0BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801E0BD4
  if (!crb(c,2)) { goto L_801E0BE4; } // 801E0BD8
L_801E0BDC:;
  c->r[3]=0u+0x00000000u; // 801E0BDC
  goto L_801E0C9C; // 801E0BE0
L_801E0BE4:;
  c->r[4]=0u+0x80580000u; // 801E0BE4
  c->r[3]=0u+0x80580000u; // 801E0BE8
  c->r[6]=R32(c->r[4]+0x00005520u); // 801E0BEC
  c->r[4]=R32(c->r[3]+0x00005544u); // 801E0BF0
  cmpu(c,0,c->r[4],c->r[6]); // 801E0BF4
  if (!crb(c,2)) { goto L_801E0C00; } // 801E0BF8
  c->r[7]=0u+0x00000001u; // 801E0BFC
L_801E0C00:;
  c->r[5]=0u+0x80580000u; // 801E0C00
  c->r[3]=0u+0x80580000u; // 801E0C04
  c->r[5]=c->r[5]+0x00005520u; // 801E0C08
  c->r[3]=c->r[3]+0x00005544u; // 801E0C0C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801E0C10
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E0C14
  cmpu(c,0,c->r[5],c->r[0]); // 801E0C18
  if (!crb(c,2)) { goto L_801E0C24; } // 801E0C1C
  c->r[7]=c->r[7]+0x00000001u; // 801E0C20
L_801E0C24:;
  cmpu(c,0,c->r[7],0x00000002u); // 801E0C24
  if (!crb(c,2)) { goto L_801E0C34; } // 801E0C28
  c->r[3]=0u+0x00000001u; // 801E0C2C
  goto L_801E0C9C; // 801E0C30
L_801E0C34:;
  c->r[3]=c->r[5]-c->r[6]; cr0(c,c->r[3]); // 801E0C34
  c->r[6]=c->r[0]-c->r[4]; // 801E0C38
  c->r[0]=0u+0x00000000u; // 801E0C3C
  if (!crb(c,1)) { goto L_801E0C4C; } // 801E0C40
  cmps(c,0,(int32_t)c->r[6],0); // 801E0C44
  if (crb(c,1)) { goto L_801E0C5C; } // 801E0C48
L_801E0C4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0C4C
  if (!crb(c,0)) { goto L_801E0C60; } // 801E0C50
  cmps(c,0,(int32_t)c->r[6],0); // 801E0C54
  if (!crb(c,0)) { goto L_801E0C60; } // 801E0C58
L_801E0C5C:;
  c->r[0]=0u+0x00000001u; // 801E0C5C
L_801E0C60:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E0C60
  if (crb(c,2)) { goto L_801E0C98; } // 801E0C64
  c->r[3]=0u+0x804B0000u; // 801E0C68
  c->r[3]=c->r[3]+0x000079E0u; // 801E0C6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0C70
  c->lr=0x801E0C78u; f_801BB3FC(c); // 801E0C74
  c->r[4]=0u+0x80580000u; // 801E0C78
  c->r[3]=0u+0x804B0000u; // 801E0C7C
  c->r[5]=c->r[4]+0x00005520u; // 801E0C80
  c->r[4]=R32(c->r[4]+0x00005520u); // 801E0C84
  c->r[5]=R32(c->r[5]+0x00000004u); // 801E0C88
  c->r[3]=c->r[3]+0x000079F8u; // 801E0C8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E0C90
  c->lr=0x801E0C98u; f_801BB3FC(c); // 801E0C94
L_801E0C98:;
  c->r[3]=0u+0x00000000u; // 801E0C98
L_801E0C9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0C9C
  c->lr=c->r[0]; // 801E0CA0
  c->r[1]=c->r[1]+0x00000010u; // 801E0CA4
  return; // 801E0CA8
}

// GXSetCPUFifo
void f_801E0CAC(Ctx* __restrict c) {
  trace_call(0x801E0CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0CAC
  c->r[0]=c->lr; // 801E0CB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0CB4
  c->r[11]=c->r[1]+0x00000020u; // 801E0CB8
  c->lr=0x801E0CC0u; f_801E795C(c); // 801E0CBC
  c->r[27]=c->r[3]|c->r[3]; // 801E0CC0
  c->lr=0x801E0CC8u; f_801BE74C(c); // 801E0CC4
  cmps(c,0,(int32_t)c->r[27],0); // 801E0CC8
  c->r[30]=c->r[3]|c->r[3]; // 801E0CCC
  if (!crb(c,2)) { goto L_801E0CF8; } // 801E0CD0
  c->r[4]=0u+0x80580000u; // 801E0CD4
  c->r[0]=0u+0x00000000u; // 801E0CD8
  c->r[4]=c->r[4]+0x00005544u; // 801E0CDC
  W8(c->r[13]+0xFFFFA140u,c->r[0]); // 801E0CE0
  W8(c->r[13]+0xFFFFA158u,c->r[0]); // 801E0CE4
  W8(c->r[4]+0x00000022u,c->r[0]); // 801E0CE8
  W8(c->r[4]+0x00000021u,c->r[0]); // 801E0CEC
  c->lr=0x801E0CF4u; f_801BE774(c); // 801E0CF0
  goto L_801E0E74; // 801E0CF4
L_801E0CF8:;
  c->r[28]=0u+0x80580000u; // 801E0CF8
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E0CFC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801E0D00
  c->r[31]=c->r[28]+0x00005544u; // 801E0D04
  c->r[29]=0u+0x00000001u; // 801E0D08
  W32(c->r[31]+0x00000000u,c->r[3]); // 801E0D0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E0D10
  c->r[3]=R32(c->r[27]+0x00000008u); // 801E0D14
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801E0D18
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E0D1C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E0D20
  c->r[3]=R32(c->r[27]+0x00000010u); // 801E0D24
  c->r[0]=R32(c->r[27]+0x00000014u); // 801E0D28
  W32(c->r[31]+0x00000010u,c->r[3]); // 801E0D2C
  W32(c->r[31]+0x00000014u,c->r[0]); // 801E0D30
  c->r[3]=R32(c->r[27]+0x00000018u); // 801E0D34
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801E0D38
  W32(c->r[31]+0x00000018u,c->r[3]); // 801E0D3C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801E0D40
  c->r[0]=R32(c->r[27]+0x00000020u); // 801E0D44
  W32(c->r[31]+0x00000020u,c->r[0]); // 801E0D48
  W8(c->r[13]+0xFFFFA140u,c->r[29]); // 801E0D4C
  W8(c->r[31]+0x00000021u,c->r[29]); // 801E0D50
  c->lr=0x801E0D58u; f_801E0BB4(c); // 801E0D54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E0D58
  if (crb(c,2)) { goto L_801E0DE4; } // 801E0D5C
  c->r[4]=R32(c->r[28]+0x00005544u); // 801E0D60
  c->r[0]=0u+0x00000000u; // 801E0D64
  W8(c->r[13]+0xFFFFA158u,c->r[29]); // 801E0D68
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0D6C
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E0D70
  W8(c->r[31]+0x00000022u,c->r[29]); // 801E0D74
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E0D78
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801E0D7C
  c->r[4]=R32(c->r[31]+0x00000004u); // 801E0D80
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0D84
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E0D88
  W32(c->r[3]+0x00000010u,c->r[4]); // 801E0D8C
  c->r[4]=R32(c->r[31]+0x00000018u); // 801E0D90
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0D94
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 801E0D98
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E0D9C
  c->r[0]=R32(c->r[5]+0x00000010u); // 801E0DA0
  c->r[0]=c->r[0]|0x00000003u; // 801E0DA4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801E0DA8
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0DAC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801E0DB0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801E0DB4
  c->r[0]=c->r[0]|0x00000004u; // 801E0DB8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801E0DBC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801E0DC0
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0DC4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E0DC8
  c->r[0]=R32(c->r[5]+0x00000008u); // 801E0DCC
  c->r[0]=c->r[0]|0x00000010u; // 801E0DD0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801E0DD4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0DD8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E0DDC
  goto L_801E0E68; // 801E0DE0
L_801E0DE4:;
  c->r[0]=R8(c->r[13]+0xFFFFA158u); // 801E0DE4
  c->r[4]=0u+0x00000000u; // 801E0DE8
  W8(c->r[31]+0x00000022u,c->r[4]); // 801E0DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801E0DF0
  if (crb(c,2)) { goto L_801E0E14; } // 801E0DF4
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E0DF8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E0DFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E0E00
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E0E04
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0E08
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E0E0C
  W8(c->r[13]+0xFFFFA158u,c->r[4]); // 801E0E10
L_801E0E14:;
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E0E14
  c->r[3]=0u+0x80580000u; // 801E0E18
  c->r[5]=c->r[3]+0x00005544u; // 801E0E1C
  c->r[0]=0u+0x00000000u; // 801E0E20
  c->r[4]=R32(c->r[7]+0x00000008u); // 801E0E24
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFF3u; // 801E0E28
  W32(c->r[7]+0x00000008u,c->r[6]); // 801E0E2C
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0E30
  W16(c->r[4]+0x00000002u,c->r[6]); // 801E0E34
  c->r[4]=R32(c->r[3]+0x00005544u); // 801E0E38
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0E3C
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E0E40
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801E0E44
  c->r[4]=R32(c->r[5]+0x00000004u); // 801E0E48
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0E4C
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E0E50
  W32(c->r[3]+0x00000010u,c->r[4]); // 801E0E54
  c->r[4]=R32(c->r[5]+0x00000018u); // 801E0E58
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E0E5C
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 801E0E60
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E0E64
L_801E0E68:;
  c->lr=0x801E0E6Cu; f_801B81D4(c); // 801E0E68
  c->r[3]=c->r[30]|c->r[30]; // 801E0E6C
  c->lr=0x801E0E74u; f_801BE774(c); // 801E0E70
L_801E0E74:;
  c->r[11]=c->r[1]+0x00000020u; // 801E0E74
  c->lr=0x801E0E7Cu; f_801E79A8(c); // 801E0E78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0E7C
  c->lr=c->r[0]; // 801E0E80
  c->r[1]=c->r[1]+0x00000020u; // 801E0E84
  return; // 801E0E88
}

// GXSetGPFifo
void f_801E0E8C(Ctx* __restrict c) {
  trace_call(0x801E0E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0E8C
  c->r[0]=c->lr; // 801E0E90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0E94
  c->r[11]=c->r[1]+0x00000020u; // 801E0E98
  c->lr=0x801E0EA0u; f_801E795C(c); // 801E0E9C
  c->r[27]=c->r[3]|c->r[3]; // 801E0EA0
  c->lr=0x801E0EA8u; f_801BE74C(c); // 801E0EA4
  c->r[29]=R32(c->r[2]+0xFFFFC330u); // 801E0EA8
  cmps(c,0,(int32_t)c->r[27],0); // 801E0EAC
  c->r[28]=c->r[3]|c->r[3]; // 801E0EB0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E0EB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801E0EB8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E0EBC
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0EC0
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E0EC4
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E0EC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 801E0ECC
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E0ED0
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0ED4
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E0ED8
  if (!crb(c,2)) { goto L_801E0F18; } // 801E0EDC
  c->r[6]=0u+0x00000000u; // 801E0EE0
  c->r[4]=0u+0x80580000u; // 801E0EE4
  W8(c->r[13]+0xFFFFA141u,c->r[6]); // 801E0EE8
  c->r[4]=c->r[4]+0x00005520u; // 801E0EEC
  W8(c->r[13]+0xFFFFA158u,c->r[6]); // 801E0EF0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E0EF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E0EF8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E0EFC
  c->r[5]=R32(c->r[13]+0xFFFFA11Cu); // 801E0F00
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E0F04
  W8(c->r[4]+0x00000021u,c->r[6]); // 801E0F08
  W8(c->r[4]+0x00000022u,c->r[6]); // 801E0F0C
  c->lr=0x801E0F14u; f_801BE774(c); // 801E0F10
  goto L_801E1104; // 801E0F14
L_801E0F18:;
  c->r[3]=0u+0x80580000u; // 801E0F18
  c->r[6]=R32(c->r[27]+0x00000000u); // 801E0F1C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801E0F20
  c->r[30]=c->r[3]+0x00005520u; // 801E0F24
  c->r[31]=0u+0x00000001u; // 801E0F28
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0F2C
  W32(c->r[30]+0x00000000u,c->r[6]); // 801E0F30
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E0F34
  c->r[5]=R32(c->r[27]+0x00000008u); // 801E0F38
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801E0F3C
  W32(c->r[30]+0x00000008u,c->r[5]); // 801E0F40
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801E0F44
  c->r[5]=R32(c->r[27]+0x00000010u); // 801E0F48
  c->r[0]=R32(c->r[27]+0x00000014u); // 801E0F4C
  W32(c->r[30]+0x00000010u,c->r[5]); // 801E0F50
  W32(c->r[30]+0x00000014u,c->r[0]); // 801E0F54
  c->r[5]=R32(c->r[27]+0x00000018u); // 801E0F58
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801E0F5C
  W32(c->r[30]+0x00000018u,c->r[5]); // 801E0F60
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801E0F64
  c->r[0]=R32(c->r[27]+0x00000020u); // 801E0F68
  W32(c->r[30]+0x00000020u,c->r[0]); // 801E0F6C
  W8(c->r[13]+0xFFFFA141u,c->r[31]); // 801E0F70
  W8(c->r[30]+0x00000022u,c->r[31]); // 801E0F74
  W16(c->r[4]+0x00000020u,c->r[6]); // 801E0F78
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E0F7C
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0F80
  W16(c->r[4]+0x00000024u,c->r[0]); // 801E0F84
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E0F88
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0F8C
  W16(c->r[4]+0x00000030u,c->r[0]); // 801E0F90
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E0F94
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0F98
  W16(c->r[4]+0x00000034u,c->r[0]); // 801E0F9C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E0FA0
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FA4
  W16(c->r[4]+0x00000038u,c->r[0]); // 801E0FA8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E0FAC
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FB0
  W16(c->r[4]+0x00000028u,c->r[0]); // 801E0FB4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E0FB8
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FBC
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 801E0FC0
  c->r[0]=R32(c->r[3]+0x00005520u); // 801E0FC4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FC8
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E0FCC
  W16(c->r[3]+0x00000022u,c->r[0]); // 801E0FD0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E0FD4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FD8
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E0FDC
  W16(c->r[3]+0x00000026u,c->r[0]); // 801E0FE0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E0FE4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FE8
  c->r[0]=sraw(c,c->r[0],16); // 801E0FEC
  W16(c->r[3]+0x00000032u,c->r[0]); // 801E0FF0
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E0FF4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E0FF8
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E0FFC
  W16(c->r[3]+0x00000036u,c->r[0]); // 801E1000
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E1004
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1008
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E100C
  W16(c->r[3]+0x0000003Au,c->r[0]); // 801E1010
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E1014
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1018
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801E101C
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801E1020
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E1024
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1028
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801E102C
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 801E1030
  c->lr=0x801E1038u; f_801B81D4(c); // 801E1034
  c->lr=0x801E103Cu; f_801E0BB4(c); // 801E1038
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E103C
  if (crb(c,2)) { goto L_801E107C; } // 801E1040
  W8(c->r[13]+0xFFFFA158u,c->r[31]); // 801E1044
  W8(c->r[30]+0x00000021u,c->r[31]); // 801E1048
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E104C
  c->r[0]=c->r[0]|0x00000004u; // 801E1050
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801E1054
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E1058
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E105C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1060
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E1064
  c->r[0]=c->r[0]|0x00000010u; // 801E1068
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E106C
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1070
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1074
  goto L_801E10B0; // 801E1078
L_801E107C:;
  c->r[0]=0u+0x00000000u; // 801E107C
  W8(c->r[13]+0xFFFFA158u,c->r[0]); // 801E1080
  W8(c->r[30]+0x00000021u,c->r[0]); // 801E1084
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E1088
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 801E108C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E1090
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1094
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1098
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E109C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801E10A0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E10A4
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E10A8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E10AC
L_801E10B0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E10B0
  c->r[3]=c->r[28]|c->r[28]; // 801E10B4
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E10B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E10BC
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E10C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801E10C4
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E10C8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E10CC
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E10D0
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E10D4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801E10D8
  c->r[0]=c->r[0]|0x00000003u; // 801E10DC
  W32(c->r[5]+0x00000010u,c->r[0]); // 801E10E0
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E10E4
  W16(c->r[4]+0x00000004u,c->r[0]); // 801E10E8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E10EC
  c->r[0]=c->r[0]|0x00000001u; // 801E10F0
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E10F4
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E10F8
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E10FC
  c->lr=0x801E1104u; f_801BE774(c); // 801E1100
L_801E1104:;
  c->r[11]=c->r[1]+0x00000020u; // 801E1104
  c->lr=0x801E110Cu; f_801E79A8(c); // 801E1108
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E110C
  c->lr=c->r[0]; // 801E1110
  c->r[1]=c->r[1]+0x00000020u; // 801E1114
  return; // 801E1118
}

// __GXIsGPFifoReady
void f_801E111C(Ctx* __restrict c) {
  trace_call(0x801E111Cu);
  c->r[3]=R8(c->r[13]+0xFFFFA141u); // 801E111C
  return; // 801E1120
}

// GXSetBreakPtCallback
void f_801E1124(Ctx* __restrict c) {
  trace_call(0x801E1124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1124
  c->r[0]=c->lr; // 801E1128
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E112C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1130
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E1134
  c->r[30]=c->r[3]|c->r[3]; // 801E1138
  c->r[31]=R32(c->r[13]+0xFFFFA14Cu); // 801E113C
  c->lr=0x801E1144u; f_801BE74C(c); // 801E1140
  W32(c->r[13]+0xFFFFA14Cu,c->r[30]); // 801E1144
  c->lr=0x801E114Cu; f_801BE774(c); // 801E1148
  c->r[3]=c->r[31]|c->r[31]; // 801E114C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1150
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E1154
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1158
  c->lr=c->r[0]; // 801E115C
  c->r[1]=c->r[1]+0x00000010u; // 801E1160
  return; // 801E1164
}

// __GXFifoInit
void f_801E1168(Ctx* __restrict c) {
  trace_call(0x801E1168u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1168
  c->r[0]=c->lr; // 801E116C
  c->r[4]=0u+0x801E0000u; // 801E1170
  c->r[3]=0u+0x00000011u; // 801E1174
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1178
  c->r[4]=c->r[4]+0x000009C8u; // 801E117C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1180
  c->lr=0x801E1188u; f_801BE798(c); // 801E1184
  c->r[3]=0u+0x00004000u; // 801E1188
  c->lr=0x801E1190u; f_801BEB5C(c); // 801E118C
  c->lr=0x801E1194u; f_801C11A4(c); // 801E1190
  c->r[31]=0u+0x00000000u; // 801E1194
  W32(c->r[13]+0xFFFFA154u,c->r[3]); // 801E1198
  c->r[3]=0u+0x80580000u; // 801E119C
  c->r[4]=0u+0x00000000u; // 801E11A0
  W32(c->r[13]+0xFFFFA150u,c->r[31]); // 801E11A4
  c->r[3]=c->r[3]+0x00005544u; // 801E11A8
  c->r[5]=0u+0x00000024u; // 801E11AC
  c->lr=0x801E11B4u; f_8000443C(c); // 801E11B0
  c->r[3]=0u+0x80580000u; // 801E11B4
  c->r[4]=0u+0x00000000u; // 801E11B8
  c->r[3]=c->r[3]+0x00005520u; // 801E11BC
  c->r[5]=0u+0x00000024u; // 801E11C0
  c->lr=0x801E11C8u; f_8000443C(c); // 801E11C4
  W8(c->r[13]+0xFFFFA140u,c->r[31]); // 801E11C8
  W8(c->r[13]+0xFFFFA141u,c->r[31]); // 801E11CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E11D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E11D4
  c->lr=c->r[0]; // 801E11D8
  c->r[1]=c->r[1]+0x00000010u; // 801E11DC
  return; // 801E11E0
}

// __GXCleanGPFifo
void f_801E11E4(Ctx* __restrict c) {
  trace_call(0x801E11E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E11E4
  c->r[0]=c->lr; // 801E11E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E11EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E11F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E11F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E11F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E11FC
  c->r[0]=R8(c->r[13]+0xFFFFA141u); // 801E1200
  cmps(c,0,(int32_t)c->r[0],0); // 801E1204
  if (crb(c,2)) { goto L_801E1364; } // 801E1208
  c->lr=0x801E1210u; f_801BE74C(c); // 801E120C
  c->r[29]=R32(c->r[2]+0xFFFFC330u); // 801E1210
  c->r[30]=0u+0x80580000u; // 801E1214
  c->r[28]=c->r[3]|c->r[3]; // 801E1218
  c->r[31]=0u+0x00000000u; // 801E121C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E1220
  c->r[30]=c->r[30]+0x00005520u; // 801E1224
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801E1228
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E122C
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1230
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1234
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E1238
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 801E123C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E1240
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1244
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1248
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E124C
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801E1250
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1254
  W32(c->r[30]+0x00000014u,c->r[0]); // 801E1258
  W16(c->r[3]+0x00000030u,c->r[31]); // 801E125C
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E1260
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1264
  W16(c->r[3]+0x00000034u,c->r[0]); // 801E1268
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E126C
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1270
  W16(c->r[3]+0x00000038u,c->r[0]); // 801E1274
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E1278
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E127C
  c->r[0]=sraw(c,c->r[0],16); // 801E1280
  W16(c->r[3]+0x00000032u,c->r[0]); // 801E1284
  c->r[0]=R32(c->r[30]+0x00000018u); // 801E1288
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E128C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E1290
  W16(c->r[3]+0x00000036u,c->r[0]); // 801E1294
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E1298
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E129C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 801E12A0
  W16(c->r[3]+0x0000003Au,c->r[0]); // 801E12A4
  c->lr=0x801E12ACu; f_801B81D4(c); // 801E12A8
  c->r[0]=R8(c->r[13]+0xFFFFA158u); // 801E12AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E12B0
  if (crb(c,2)) { goto L_801E1310; } // 801E12B4
  c->r[5]=0u+0x80580000u; // 801E12B8
  c->r[4]=R32(c->r[30]+0x00000018u); // 801E12BC
  c->r[5]=c->r[5]+0x00005544u; // 801E12C0
  c->r[3]=R32(c->r[30]+0x00000014u); // 801E12C4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E12C8
  c->r[31]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[31]&~0x1FFFFFE0u); // 801E12CC
  W32(c->r[5]+0x00000014u,c->r[3]); // 801E12D0
  c->r[3]=R32(c->r[13]+0xFFFFA118u); // 801E12D4
  W32(c->r[5]+0x00000018u,c->r[4]); // 801E12D8
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801E12DC
  W32(c->r[3]+0x00000014u,c->r[31]); // 801E12E0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E12E4
  c->r[0]=c->r[0]|0x00000004u; // 801E12E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801E12EC
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E12F0
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E12F4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E12F8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E12FC
  c->r[0]=c->r[0]|0x00000010u; // 801E1300
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E1304
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E1308
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E130C
L_801E1310:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 801E1310
  c->r[0]=0u+0x00000000u; // 801E1314
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E1318
  c->r[3]=c->r[28]|c->r[28]; // 801E131C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 801E1320
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801E1324
  W32(c->r[29]+0x00000008u,c->r[5]); // 801E1328
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E132C
  W16(c->r[4]+0x00000002u,c->r[5]); // 801E1330
  W32(c->r[13]+0xFFFFA148u,c->r[0]); // 801E1334
  c->r[0]=R32(c->r[6]+0x00000010u); // 801E1338
  c->r[0]=c->r[0]|0x00000003u; // 801E133C
  W32(c->r[6]+0x00000010u,c->r[0]); // 801E1340
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E1344
  W16(c->r[4]+0x00000004u,c->r[0]); // 801E1348
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E134C
  c->r[0]=c->r[0]|0x00000001u; // 801E1350
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E1354
  c->r[4]=R32(c->r[13]+0xFFFFA11Cu); // 801E1358
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E135C
  c->lr=0x801E1364u; f_801BE774(c); // 801E1360
L_801E1364:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1364
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1368
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E136C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1370
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E1374
  c->lr=c->r[0]; // 801E1378
  c->r[1]=c->r[1]+0x00000020u; // 801E137C
  return; // 801E1380
}

// GXSetVtxDesc
void f_801E1384(Ctx* __restrict c) {
  trace_call(0x801E1384u);
  cmpu(c,0,c->r[3],0x00000019u); // 801E1384
  if (crb(c,1)) { goto L_801E1598; } // 801E1388
  c->r[5]=0u+0x804B0000u; // 801E138C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E1390
  c->r[5]=c->r[5]+0x00007A10u; // 801E1394
  c->r[5]=R32(c->r[5]+c->r[0]); // 801E1398
  c->ctr=c->r[5]; // 801E139C
  if (true) { switch (c->ctr) { case 0x801E13A4u: goto L_801E13A4; case 0x801E13B8u: goto L_801E13B8; case 0x801E13CCu: goto L_801E13CC; case 0x801E13E0u: goto L_801E13E0; case 0x801E13F4u: goto L_801E13F4; case 0x801E1408u: goto L_801E1408; case 0x801E141Cu: goto L_801E141C; case 0x801E1430u: goto L_801E1430; case 0x801E1444u: goto L_801E1444; case 0x801E1458u: goto L_801E1458; case 0x801E146Cu: goto L_801E146C; case 0x801E14A0u: goto L_801E14A0; case 0x801E14D4u: goto L_801E14D4; case 0x801E14E8u: goto L_801E14E8; case 0x801E14FCu: goto L_801E14FC; case 0x801E1510u: goto L_801E1510; case 0x801E1524u: goto L_801E1524; case 0x801E1538u: goto L_801E1538; case 0x801E154Cu: goto L_801E154C; case 0x801E1560u: goto L_801E1560; case 0x801E1574u: goto L_801E1574; case 0x801E1588u: goto L_801E1588; case 0x801E1598u: goto L_801E1598; default: break; } dispatch(c,c->ctr); return; } // 801E13A0
L_801E13A4:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E13A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E13A8
  c->r[0]=(rotl(c->r[4],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E13AC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E13B0
  goto L_801E1598; // 801E13B4
L_801E13B8:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E13B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E13BC
  c->r[0]=(rotl(c->r[4],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 801E13C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E13C4
  goto L_801E1598; // 801E13C8
L_801E13CC:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E13CC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E13D0
  c->r[0]=(rotl(c->r[4],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 801E13D4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E13D8
  goto L_801E1598; // 801E13DC
L_801E13E0:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E13E0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E13E4
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 801E13E8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E13EC
  goto L_801E1598; // 801E13F0
L_801E13F4:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E13F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E13F8
  c->r[0]=(rotl(c->r[4],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801E13FC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E1400
  goto L_801E1598; // 801E1404
L_801E1408:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1408
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E140C
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 801E1410
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E1414
  goto L_801E1598; // 801E1418
L_801E141C:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E141C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E1420
  c->r[0]=(rotl(c->r[4],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 801E1424
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E1428
  goto L_801E1598; // 801E142C
L_801E1430:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1430
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E1434
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 801E1438
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E143C
  goto L_801E1598; // 801E1440
L_801E1444:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1444
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E1448
  c->r[0]=(rotl(c->r[4],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 801E144C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E1450
  goto L_801E1598; // 801E1454
L_801E1458:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1458
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E145C
  c->r[0]=(rotl(c->r[4],9)&0x00000600u)|(c->r[0]&~0x00000600u); // 801E1460
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E1464
  goto L_801E1598; // 801E1468
L_801E146C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E146C
  if (crb(c,2)) { goto L_801E1490; } // 801E1470
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E1474
  c->r[3]=0u+0x00000001u; // 801E1478
  c->r[0]=0u+0x00000000u; // 801E147C
  W8(c->r[5]+0x00000524u,c->r[3]); // 801E1480
  W8(c->r[5]+0x00000525u,c->r[0]); // 801E1484
  W32(c->r[5]+0x00000520u,c->r[4]); // 801E1488
  goto L_801E1598; // 801E148C
L_801E1490:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1490
  c->r[0]=0u+0x00000000u; // 801E1494
  W8(c->r[3]+0x00000524u,c->r[0]); // 801E1498
  goto L_801E1598; // 801E149C
L_801E14A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E14A0
  if (crb(c,2)) { goto L_801E14C4; } // 801E14A4
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E14A8
  c->r[3]=0u+0x00000001u; // 801E14AC
  c->r[0]=0u+0x00000000u; // 801E14B0
  W8(c->r[5]+0x00000525u,c->r[3]); // 801E14B4
  W8(c->r[5]+0x00000524u,c->r[0]); // 801E14B8
  W32(c->r[5]+0x00000520u,c->r[4]); // 801E14BC
  goto L_801E1598; // 801E14C0
L_801E14C4:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E14C4
  c->r[0]=0u+0x00000000u; // 801E14C8
  W8(c->r[3]+0x00000525u,c->r[0]); // 801E14CC
  goto L_801E1598; // 801E14D0
L_801E14D4:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E14D4
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E14D8
  c->r[0]=(rotl(c->r[4],13)&0x00006000u)|(c->r[0]&~0x00006000u); // 801E14DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E14E0
  goto L_801E1598; // 801E14E4
L_801E14E8:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E14E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E14EC
  c->r[0]=(rotl(c->r[4],15)&0x00018000u)|(c->r[0]&~0x00018000u); // 801E14F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E14F4
  goto L_801E1598; // 801E14F8
L_801E14FC:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E14FC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1500
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801E1504
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1508
  goto L_801E1598; // 801E150C
L_801E1510:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1510
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1514
  c->r[0]=(rotl(c->r[4],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 801E1518
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E151C
  goto L_801E1598; // 801E1520
L_801E1524:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1524
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1528
  c->r[0]=(rotl(c->r[4],4)&0x00000030u)|(c->r[0]&~0x00000030u); // 801E152C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1530
  goto L_801E1598; // 801E1534
L_801E1538:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1538
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E153C
  c->r[0]=(rotl(c->r[4],6)&0x000000C0u)|(c->r[0]&~0x000000C0u); // 801E1540
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1544
  goto L_801E1598; // 801E1548
L_801E154C:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E154C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1550
  c->r[0]=(rotl(c->r[4],8)&0x00000300u)|(c->r[0]&~0x00000300u); // 801E1554
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1558
  goto L_801E1598; // 801E155C
L_801E1560:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1560
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1564
  c->r[0]=(rotl(c->r[4],10)&0x00000C00u)|(c->r[0]&~0x00000C00u); // 801E1568
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E156C
  goto L_801E1598; // 801E1570
L_801E1574:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1574
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1578
  c->r[0]=(rotl(c->r[4],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 801E157C
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1580
  goto L_801E1598; // 801E1584
L_801E1588:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1588
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E158C
  c->r[0]=(rotl(c->r[4],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 801E1590
  W32(c->r[3]+0x00000018u,c->r[0]); // 801E1594
L_801E1598:;
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E1598
  c->r[0]=R8(c->r[4]+0x00000524u); // 801E159C
  cmps(c,0,(int32_t)c->r[0],0); // 801E15A0
  if (!crb(c,2)) { goto L_801E15B4; } // 801E15A4
  c->r[0]=R8(c->r[4]+0x00000525u); // 801E15A8
  cmps(c,0,(int32_t)c->r[0],0); // 801E15AC
  if (crb(c,2)) { goto L_801E15CC; } // 801E15B0
L_801E15B4:;
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E15B4
  c->r[0]=R32(c->r[5]+0x00000520u); // 801E15B8
  c->r[3]=R32(c->r[5]+0x00000014u); // 801E15BC
  c->r[3]=(rotl(c->r[0],11)&0x00001800u)|(c->r[3]&~0x00001800u); // 801E15C0
  W32(c->r[5]+0x00000014u,c->r[3]); // 801E15C4
  goto L_801E15D8; // 801E15C8
L_801E15CC:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E15CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFE7FFu; // 801E15D0
  W32(c->r[4]+0x00000014u,c->r[0]); // 801E15D4
L_801E15D8:;
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E15D8
  c->r[0]=c->r[0]|0x00000008u; // 801E15DC
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E15E0
  return; // 801E15E4
}

// __GXSetVCD
void f_801E15E8(Ctx* __restrict c) {
  trace_call(0x801E15E8u);
  c->r[5]=0u+0xCC010000u; // 801E15E8
  c->r[6]=0u+0x00000008u; // 801E15EC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E15F0
  c->r[4]=0u+0x00000050u; // 801E15F4
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E15F8
  c->r[0]=0u+0x00000060u; // 801E15FC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 801E1600
  c->r[4]=R32(c->r[3]+0x00000014u); // 801E1604
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E1608
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E160C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E1610
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E1614
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E1618
  c->r[0]=R8(c->r[3]+0x00000525u); // 801E161C
  cmps(c,0,(int32_t)c->r[0],0); // 801E1620
  if (crb(c,2)) { goto L_801E1630; } // 801E1624
  c->r[8]=0u+0x00000002u; // 801E1628
  goto L_801E1640; // 801E162C
L_801E1630:;
  c->r[4]=R8(c->r[3]+0x00000524u); // 801E1630
  c->r[0]=0u-c->r[4]; // 801E1634
  c->r[0]=c->r[0]|c->r[4]; // 801E1638
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 801E163C
L_801E1640:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 801E1640
  c->r[6]=0u+0xCC010000u; // 801E1644
  c->r[4]=R32(c->r[3]+0x00000018u); // 801E1648
  c->r[0]=0u+0x00000010u; // 801E164C
  c->r[7]=rotl(c->r[5],19)&0x0000000Fu; // 801E1650
  c->r[5]=0u+0x00001008u; // 801E1654
  c->r[7]=cntlz(c->r[7]); // 801E1658
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801E165C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E1660
  c->r[7]=addc(c,~c->r[7],0x00000021u,1); // 801E1664
  c->r[0]=cntlz(c->r[4]); // 801E1668
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801E166C
  c->r[0]=addc(c,~c->r[0],0x00000021u,1); // 801E1670
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 801E1674
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF0u; // 801E1678
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801E167C
  c->r[5]=c->r[0]|c->r[7]; // 801E1680
  c->r[4]=c->r[5]|c->r[4]; // 801E1684
  c->r[0]=0u+0x00000001u; // 801E1688
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 801E168C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E1690
  return; // 801E1694
}

// __GXCalculateVLim
void f_801E1698(Ctx* __restrict c) {
  trace_call(0x801E1698u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1698
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E169C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E16A0
  c->r[0]=R16(c->r[3]+0x00000004u); // 801E16A4
  cmps(c,0,(int32_t)c->r[0],0); // 801E16A8
  if (crb(c,2)) { goto L_801E17B8; } // 801E16AC
  c->r[9]=R32(c->r[3]+0x00000014u); // 801E16B0
  c->r[7]=c->r[13]+0xFFFF8528u; // 801E16B4
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801E16B8
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 801E16BC
  c->r[4]=rotl(c->r[9],31)&0x00000001u; // 801E16C0
  c->r[0]=c->r[0]+c->r[4]; // 801E16C4
  c->r[8]=rotl(c->r[5],23)&0x00000001u; // 801E16C8
  c->r[4]=rotl(c->r[9],30)&0x00000001u; // 801E16CC
  c->r[5]=rotl(c->r[9],21)&0x00000003u; // 801E16D0
  c->r[0]=c->r[0]+c->r[4]; // 801E16D4
  cmps(c,0,(int32_t)c->r[8],1); // 801E16D8
  c->r[4]=rotl(c->r[9],29)&0x00000001u; // 801E16DC
  c->r[6]=rotl(c->r[9],26)&0x00000001u; // 801E16E0
  c->r[0]=c->r[0]+c->r[4]; // 801E16E4
  c->r[8]=rotl(c->r[9],24)&0x00000001u; // 801E16E8
  c->r[4]=rotl(c->r[9],28)&0x00000001u; // 801E16EC
  c->r[31]=R32(c->r[3]+0x00000018u); // 801E16F0
  c->r[0]=c->r[0]+c->r[4]; // 801E16F4
  c->r[5]=R8(c->r[7]+c->r[5]); // 801E16F8
  c->r[4]=rotl(c->r[9],27)&0x00000001u; // 801E16FC
  c->r[0]=c->r[0]+c->r[4]; // 801E1700
  c->r[0]=c->r[0]+c->r[6]; // 801E1704
  c->r[6]=rotl(c->r[9],25)&0x00000001u; // 801E1708
  c->r[0]=c->r[0]+c->r[6]; // 801E170C
  c->r[4]=rotl(c->r[9],23)&0x00000003u; // 801E1710
  c->r[6]=R8(c->r[7]+c->r[4]); // 801E1714
  c->r[0]=c->r[0]+c->r[8]; // 801E1718
  c->r[4]=0u+0x00000001u; // 801E171C
  c->r[0]=c->r[0]+c->r[6]; // 801E1720
  if (!crb(c,2)) { goto L_801E172C; } // 801E1724
  c->r[4]=0u+0x00000003u; // 801E1728
L_801E172C:;
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801E172C
  c->r[7]=c->r[13]+0xFFFF8520u; // 801E1730
  c->r[4]=rotl(c->r[9],19)&0x00000003u; // 801E1734
  c->r[5]=rotl(c->r[9],17)&0x00000003u; // 801E1738
  c->r[6]=R8(c->r[7]+c->r[4]); // 801E173C
  c->r[5]=R8(c->r[7]+c->r[5]); // 801E1740
  c->r[0]=c->r[0]+c->r[8]; // 801E1744
  c->r[12]=c->r[13]+0xFFFF8524u; // 801E1748
  c->r[0]=c->r[0]+c->r[6]; // 801E174C
  c->r[4]=rotl(c->r[31],0)&0x00000003u; // 801E1750
  c->r[10]=rotl(c->r[31],30)&0x00000003u; // 801E1754
  c->r[11]=R8(c->r[12]+c->r[4]); // 801E1758
  c->r[0]=c->r[0]+c->r[5]; // 801E175C
  c->r[9]=rotl(c->r[31],28)&0x00000003u; // 801E1760
  c->r[8]=rotl(c->r[31],26)&0x00000003u; // 801E1764
  c->r[7]=rotl(c->r[31],24)&0x00000003u; // 801E1768
  c->r[6]=rotl(c->r[31],22)&0x00000003u; // 801E176C
  c->r[5]=rotl(c->r[31],20)&0x00000003u; // 801E1770
  c->r[4]=rotl(c->r[31],18)&0x00000003u; // 801E1774
  c->r[10]=R8(c->r[12]+c->r[10]); // 801E1778
  c->r[0]=c->r[0]+c->r[11]; // 801E177C
  c->r[9]=R8(c->r[12]+c->r[9]); // 801E1780
  c->r[0]=c->r[0]+c->r[10]; // 801E1784
  c->r[8]=R8(c->r[12]+c->r[8]); // 801E1788
  c->r[0]=c->r[0]+c->r[9]; // 801E178C
  c->r[7]=R8(c->r[12]+c->r[7]); // 801E1790
  c->r[0]=c->r[0]+c->r[8]; // 801E1794
  c->r[6]=R8(c->r[12]+c->r[6]); // 801E1798
  c->r[0]=c->r[0]+c->r[7]; // 801E179C
  c->r[5]=R8(c->r[12]+c->r[5]); // 801E17A0
  c->r[0]=c->r[0]+c->r[6]; // 801E17A4
  c->r[4]=R8(c->r[12]+c->r[4]); // 801E17A8
  c->r[0]=c->r[0]+c->r[5]; // 801E17AC
  c->r[0]=c->r[0]+c->r[4]; // 801E17B0
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E17B4
L_801E17B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E17B8
  c->r[1]=c->r[1]+0x00000010u; // 801E17BC
  return; // 801E17C0
}

// GXClearVtxDesc
void f_801E17C4(Ctx* __restrict c) {
  trace_call(0x801E17C4u);
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E17C4
  c->r[0]=0u+0x00000001u; // 801E17C8
  c->r[3]=0u+0x00000000u; // 801E17CC
  c->r[4]=0u+0x00000000u; // 801E17D0
  c->r[3]=(rotl(c->r[0],9)&0x00000600u)|(c->r[3]&~0x00000600u); // 801E17D4
  W32(c->r[5]+0x00000014u,c->r[3]); // 801E17D8
  W32(c->r[5]+0x00000018u,c->r[4]); // 801E17DC
  W8(c->r[5]+0x00000524u,c->r[4]); // 801E17E0
  W8(c->r[5]+0x00000525u,c->r[4]); // 801E17E4
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E17E8
  c->r[0]=c->r[0]|0x00000008u; // 801E17EC
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E17F0
  return; // 801E17F4
}

// GXSetVtxAttrFmt
void f_801E17F8(Ctx* __restrict c) {
  trace_call(0x801E17F8u);
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 801E17F8
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E17FC
  cmpu(c,0,c->r[0],0x00000010u); // 801E1800
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E1804
  c->r[8]=c->r[8]+c->r[4]; // 801E1808
  if (crb(c,1)) { goto L_801E1968; } // 801E180C
  c->r[4]=0u+0x804B0000u; // 801E1810
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E1814
  c->r[4]=c->r[4]+0x00007A78u; // 801E1818
  c->r[4]=R32(c->r[4]+c->r[0]); // 801E181C
  c->ctr=c->r[4]; // 801E1820
  if (true) { switch (c->ctr) { case 0x801E1828u: goto L_801E1828; case 0x801E1840u: goto L_801E1840; case 0x801E187Cu: goto L_801E187C; case 0x801E1890u: goto L_801E1890; case 0x801E18A4u: goto L_801E18A4; case 0x801E18BCu: goto L_801E18BC; case 0x801E18D4u: goto L_801E18D4; case 0x801E18ECu: goto L_801E18EC; case 0x801E1904u: goto L_801E1904; case 0x801E1924u: goto L_801E1924; case 0x801E193Cu: goto L_801E193C; case 0x801E1954u: goto L_801E1954; case 0x801E1968u: goto L_801E1968; default: break; } dispatch(c,c->ctr); return; } // 801E1824
L_801E1828:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1828
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E182C
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801E1830
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801E1834
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1838
  goto L_801E1968; // 801E183C
L_801E1840:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1840
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 801E1844
  cmps(c,0,(int32_t)c->r[5],2); // 801E1848
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E184C
  if (!crb(c,2)) { goto L_801E1868; } // 801E1850
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1854
  c->r[0]=c->r[0]|0x00000200u; // 801E1858
  c->r[0]=c->r[0]|0x80000000u; // 801E185C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1860
  goto L_801E1968; // 801E1864
L_801E1868:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1868
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E186C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801E1870
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1874
  goto L_801E1968; // 801E1878
L_801E187C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E187C
  c->r[0]=(rotl(c->r[5],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 801E1880
  c->r[0]=(rotl(c->r[6],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 801E1884
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1888
  goto L_801E1968; // 801E188C
L_801E1890:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1890
  c->r[0]=(rotl(c->r[5],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 801E1894
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 801E1898
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E189C
  goto L_801E1968; // 801E18A0
L_801E18A4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E18A4
  c->r[0]=(rotl(c->r[5],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 801E18A8
  c->r[0]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 801E18AC
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 801E18B0
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E18B4
  goto L_801E1968; // 801E18B8
L_801E18BC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E18BC
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E18C0
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801E18C4
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801E18C8
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E18CC
  goto L_801E1968; // 801E18D0
L_801E18D4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E18D4
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E18D8
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 801E18DC
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 801E18E0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E18E4
  goto L_801E1968; // 801E18E8
L_801E18EC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E18EC
  c->r[0]=(rotl(c->r[5],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 801E18F0
  c->r[0]=(rotl(c->r[6],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 801E18F4
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 801E18F8
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E18FC
  goto L_801E1968; // 801E1900
L_801E1904:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E1904
  c->r[0]=(rotl(c->r[5],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 801E1908
  c->r[0]=(rotl(c->r[6],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 801E190C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E1910
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1914
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 801E1918
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E191C
  goto L_801E1968; // 801E1920
L_801E1924:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1924
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 801E1928
  c->r[0]=(rotl(c->r[6],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 801E192C
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 801E1930
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1934
  goto L_801E1968; // 801E1938
L_801E193C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E193C
  c->r[0]=(rotl(c->r[5],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 801E1940
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801E1944
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 801E1948
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E194C
  goto L_801E1968; // 801E1950
L_801E1954:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1954
  c->r[0]=(rotl(c->r[5],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 801E1958
  c->r[0]=(rotl(c->r[6],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 801E195C
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 801E1960
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1964
L_801E1968:;
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E1968
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E196C
  c->r[3]=0u+0x00000001u; // 801E1970
  c->r[4]=R32(c->r[5]+0x000005FCu); // 801E1974
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E1978
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E197C
  c->r[3]=c->r[4]|0x00000010u; // 801E1980
  W32(c->r[5]+0x000005FCu,c->r[3]); // 801E1984
  c->r[3]=R8(c->r[5]+0x000005FBu); // 801E1988
  c->r[0]=c->r[3]|c->r[0]; // 801E198C
  W8(c->r[5]+0x000005FBu,c->r[0]); // 801E1990
  return; // 801E1994
}

// GXSetVtxAttrFmtv
void f_801E1998(Ctx* __restrict c) {
  trace_call(0x801E1998u);
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E1998
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E199C
  c->r[5]=0u+0x804B0000u; // 801E19A0
  c->r[8]=c->r[6]+c->r[0]; // 801E19A4
  goto L_801E1B20; // 801E19A8
L_801E19AC:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 801E19AC
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 801E19B0
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 801E19B4
  c->r[10]=R32(c->r[4]+0x00000008u); // 801E19B8
  cmpu(c,0,c->r[0],0x00000010u); // 801E19BC
  c->r[9]=R32(c->r[4]+0x00000004u); // 801E19C0
  if (crb(c,1)) { goto L_801E1B1C; } // 801E19C4
  c->r[6]=c->r[5]+0x00007ABCu; // 801E19C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E19CC
  c->r[6]=R32(c->r[6]+c->r[0]); // 801E19D0
  c->ctr=c->r[6]; // 801E19D4
  if (true) { switch (c->ctr) { case 0x801E19DCu: goto L_801E19DC; case 0x801E19F4u: goto L_801E19F4; case 0x801E1A30u: goto L_801E1A30; case 0x801E1A44u: goto L_801E1A44; case 0x801E1A58u: goto L_801E1A58; case 0x801E1A70u: goto L_801E1A70; case 0x801E1A88u: goto L_801E1A88; case 0x801E1AA0u: goto L_801E1AA0; case 0x801E1AB8u: goto L_801E1AB8; case 0x801E1AD8u: goto L_801E1AD8; case 0x801E1AF0u: goto L_801E1AF0; case 0x801E1B08u: goto L_801E1B08; case 0x801E1B1Cu: goto L_801E1B1C; default: break; } dispatch(c,c->ctr); return; } // 801E19D8
L_801E19DC:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E19DC
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E19E0
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801E19E4
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801E19E8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E19EC
  goto L_801E1B1C; // 801E19F0
L_801E19F4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E19F4
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 801E19F8
  cmps(c,0,(int32_t)c->r[9],2); // 801E19FC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A00
  if (!crb(c,2)) { goto L_801E1A1C; } // 801E1A04
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1A08
  c->r[0]=c->r[0]|0x00000200u; // 801E1A0C
  c->r[0]=c->r[0]|0x80000000u; // 801E1A10
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A14
  goto L_801E1B1C; // 801E1A18
L_801E1A1C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1A1C
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E1A20
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801E1A24
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A28
  goto L_801E1B1C; // 801E1A2C
L_801E1A30:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1A30
  c->r[0]=(rotl(c->r[9],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 801E1A34
  c->r[0]=(rotl(c->r[10],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 801E1A38
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A3C
  goto L_801E1B1C; // 801E1A40
L_801E1A44:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1A44
  c->r[0]=(rotl(c->r[9],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 801E1A48
  c->r[0]=(rotl(c->r[10],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 801E1A4C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A50
  goto L_801E1B1C; // 801E1A54
L_801E1A58:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 801E1A58
  c->r[0]=(rotl(c->r[9],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 801E1A5C
  c->r[0]=(rotl(c->r[10],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 801E1A60
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 801E1A64
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 801E1A68
  goto L_801E1B1C; // 801E1A6C
L_801E1A70:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E1A70
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E1A74
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801E1A78
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801E1A7C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E1A80
  goto L_801E1B1C; // 801E1A84
L_801E1A88:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E1A88
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E1A8C
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 801E1A90
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 801E1A94
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E1A98
  goto L_801E1B1C; // 801E1A9C
L_801E1AA0:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E1AA0
  c->r[0]=(rotl(c->r[9],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 801E1AA4
  c->r[0]=(rotl(c->r[10],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 801E1AA8
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 801E1AAC
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E1AB0
  goto L_801E1B1C; // 801E1AB4
L_801E1AB8:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 801E1AB8
  c->r[0]=(rotl(c->r[9],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 801E1ABC
  c->r[0]=(rotl(c->r[10],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 801E1AC0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 801E1AC4
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1AC8
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 801E1ACC
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1AD0
  goto L_801E1B1C; // 801E1AD4
L_801E1AD8:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1AD8
  c->r[0]=(rotl(c->r[9],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 801E1ADC
  c->r[0]=(rotl(c->r[10],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 801E1AE0
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 801E1AE4
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1AE8
  goto L_801E1B1C; // 801E1AEC
L_801E1AF0:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1AF0
  c->r[0]=(rotl(c->r[9],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 801E1AF4
  c->r[0]=(rotl(c->r[10],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801E1AF8
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 801E1AFC
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1B00
  goto L_801E1B1C; // 801E1B04
L_801E1B08:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 801E1B08
  c->r[0]=(rotl(c->r[9],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 801E1B0C
  c->r[0]=(rotl(c->r[10],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 801E1B10
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 801E1B14
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 801E1B18
L_801E1B1C:;
  c->r[4]=c->r[4]+0x00000010u; // 801E1B1C
L_801E1B20:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E1B20
  cmps(c,0,(int32_t)c->r[0],255); // 801E1B24
  if (!crb(c,2)) { IRQCHK(c); goto L_801E19AC; } // 801E1B28
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E1B2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E1B30
  c->r[3]=0u+0x00000001u; // 801E1B34
  c->r[4]=R32(c->r[5]+0x000005FCu); // 801E1B38
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E1B3C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E1B40
  c->r[3]=c->r[4]|0x00000010u; // 801E1B44
  W32(c->r[5]+0x000005FCu,c->r[3]); // 801E1B48
  c->r[3]=R8(c->r[5]+0x000005FBu); // 801E1B4C
  c->r[0]=c->r[3]|c->r[0]; // 801E1B50
  W8(c->r[5]+0x000005FBu,c->r[0]); // 801E1B54
  return; // 801E1B58
}

// __GXSetVAT
void f_801E1B5C(Ctx* __restrict c) {
  trace_call(0x801E1B5Cu);
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E1B5C
  c->r[9]=0u+0x00000000u; // 801E1B60
  c->r[6]=0u+0x00000008u; // 801E1B64
  c->r[5]=0u+0xCC010000u; // 801E1B68
  c->r[10]=R8(c->r[8]+0x000005FBu); // 801E1B6C
  c->r[7]=c->r[8]|c->r[8]; // 801E1B70
L_801E1B74:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 801E1B74
  if (crb(c,2)) { goto L_801E1BB8; } // 801E1B78
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E1B7C
  c->r[4]=c->r[9]|0x00000070u; // 801E1B80
  c->r[3]=c->r[9]|0x00000080u; // 801E1B84
  c->r[0]=c->r[9]|0x00000090u; // 801E1B88
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 801E1B8C
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 801E1B90
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E1B94
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E1B98
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 801E1B9C
  c->r[3]=R32(c->r[7]+0x0000003Cu); // 801E1BA0
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801E1BA4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E1BA8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E1BAC
  c->r[0]=R32(c->r[7]+0x0000005Cu); // 801E1BB0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E1BB4
L_801E1BB8:;
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; cr0(c,c->r[10]); // 801E1BB8
  c->r[9]=c->r[9]+0x00000001u; // 801E1BBC
  c->r[7]=c->r[7]+0x00000004u; // 801E1BC0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1B74; } // 801E1BC4
  c->r[0]=0u+0x00000000u; // 801E1BC8
  c->r[3]=0u+0xCC010000u; // 801E1BCC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1BD0
  W8(c->r[8]+0x000005FBu,c->r[0]); // 801E1BD4
  return; // 801E1BD8
}

// GXSetArray
void f_801E1BDC(Ctx* __restrict c) {
  trace_call(0x801E1BDCu);
  cmps(c,0,(int32_t)c->r[3],25); // 801E1BDC
  if (!crb(c,2)) { goto L_801E1BE8; } // 801E1BE0
  c->r[3]=0u+0x0000000Au; // 801E1BE4
L_801E1BE8:;
  c->r[6]=0u+0xCC010000u; // 801E1BE8
  c->r[7]=0u+0x00000008u; // 801E1BEC
  c->r[8]=c->r[3]+0xFFFFFFF7u; // 801E1BF0
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E1BF4
  c->r[0]=c->r[8]|0x000000A0u; // 801E1BF8
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E1BFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E1C00
  c->r[0]=c->r[8]|0x000000B0u; // 801E1C04
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E1C08
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E1C0C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E1C10
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801E1C14
  return; // 801E1C18
}

// GXInvalidateVtxCache
void f_801E1C1C(Ctx* __restrict c) {
  trace_call(0x801E1C1Cu);
  c->r[0]=0u+0x00000048u; // 801E1C1C
  c->r[3]=0u+0xCC010000u; // 801E1C20
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1C24
  return; // 801E1C28
}

// GXSetTexCoordGen2
void f_801E1C2C(Ctx* __restrict c) {
  trace_call(0x801E1C2Cu);
  cmpu(c,0,c->r[5],0x00000014u); // 801E1C2C
  c->r[11]=0u+0x00000000u; // 801E1C30
  c->r[12]=0u+0x00000000u; // 801E1C34
  c->r[10]=0u+0x00000005u; // 801E1C38
  if (crb(c,1)) { goto L_801E1CD4; } // 801E1C3C
  c->r[9]=0u+0x804B0000u; // 801E1C40
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E1C44
  c->r[9]=c->r[9]+0x00007B1Cu; // 801E1C48
  c->r[9]=R32(c->r[9]+c->r[0]); // 801E1C4C
  c->ctr=c->r[9]; // 801E1C50
  if (true) { switch (c->ctr) { case 0x801E1C58u: goto L_801E1C58; case 0x801E1C64u: goto L_801E1C64; case 0x801E1C70u: goto L_801E1C70; case 0x801E1C7Cu: goto L_801E1C7C; case 0x801E1C88u: goto L_801E1C88; case 0x801E1C90u: goto L_801E1C90; case 0x801E1C98u: goto L_801E1C98; case 0x801E1CA0u: goto L_801E1CA0; case 0x801E1CA8u: goto L_801E1CA8; case 0x801E1CB0u: goto L_801E1CB0; case 0x801E1CB8u: goto L_801E1CB8; case 0x801E1CC0u: goto L_801E1CC0; case 0x801E1CC8u: goto L_801E1CC8; case 0x801E1CD0u: goto L_801E1CD0; case 0x801E1CD4u: goto L_801E1CD4; case 0x801E1DC8u: goto L_801E1DC8; case 0x801E1DD8u: goto L_801E1DD8; case 0x801E1DE8u: goto L_801E1DE8; case 0x801E1DF8u: goto L_801E1DF8; case 0x801E1E08u: goto L_801E1E08; case 0x801E1E18u: goto L_801E1E18; case 0x801E1E28u: goto L_801E1E28; default: break; } dispatch(c,c->ctr); return; } // 801E1C54
L_801E1C58:;
  c->r[10]=0u+0x00000000u; // 801E1C58
  c->r[12]=0u+0x00000001u; // 801E1C5C
  goto L_801E1CD4; // 801E1C60
L_801E1C64:;
  c->r[10]=0u+0x00000001u; // 801E1C64
  c->r[12]=0u+0x00000001u; // 801E1C68
  goto L_801E1CD4; // 801E1C6C
L_801E1C70:;
  c->r[10]=0u+0x00000003u; // 801E1C70
  c->r[12]=0u+0x00000001u; // 801E1C74
  goto L_801E1CD4; // 801E1C78
L_801E1C7C:;
  c->r[10]=0u+0x00000004u; // 801E1C7C
  c->r[12]=0u+0x00000001u; // 801E1C80
  goto L_801E1CD4; // 801E1C84
L_801E1C88:;
  c->r[10]=0u+0x00000002u; // 801E1C88
  goto L_801E1CD4; // 801E1C8C
L_801E1C90:;
  c->r[10]=0u+0x00000002u; // 801E1C90
  goto L_801E1CD4; // 801E1C94
L_801E1C98:;
  c->r[10]=0u+0x00000005u; // 801E1C98
  goto L_801E1CD4; // 801E1C9C
L_801E1CA0:;
  c->r[10]=0u+0x00000006u; // 801E1CA0
  goto L_801E1CD4; // 801E1CA4
L_801E1CA8:;
  c->r[10]=0u+0x00000007u; // 801E1CA8
  goto L_801E1CD4; // 801E1CAC
L_801E1CB0:;
  c->r[10]=0u+0x00000008u; // 801E1CB0
  goto L_801E1CD4; // 801E1CB4
L_801E1CB8:;
  c->r[10]=0u+0x00000009u; // 801E1CB8
  goto L_801E1CD4; // 801E1CBC
L_801E1CC0:;
  c->r[10]=0u+0x0000000Au; // 801E1CC0
  goto L_801E1CD4; // 801E1CC4
L_801E1CC8:;
  c->r[10]=0u+0x0000000Bu; // 801E1CC8
  goto L_801E1CD4; // 801E1CCC
L_801E1CD0:;
  c->r[10]=0u+0x0000000Cu; // 801E1CD0
L_801E1CD4:;
  cmps(c,0,(int32_t)c->r[4],1); // 801E1CD4
  if (crb(c,2)) { goto L_801E1CFC; } // 801E1CD8
  if (!crb(c,0)) { goto L_801E1CEC; } // 801E1CDC
  cmps(c,0,(int32_t)c->r[4],0); // 801E1CE0
  if (!crb(c,0)) { goto L_801E1D0C; } // 801E1CE4
  goto L_801E1D74; // 801E1CE8
L_801E1CEC:;
  cmps(c,0,(int32_t)c->r[4],10); // 801E1CEC
  if (crb(c,2)) { goto L_801E1D48; } // 801E1CF0
  if (!crb(c,0)) { goto L_801E1D74; } // 801E1CF4
  goto L_801E1D20; // 801E1CF8
L_801E1CFC:;
  c->r[11]=0u+0x00000000u; // 801E1CFC
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801E1D00
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801E1D04
  goto L_801E1D74; // 801E1D08
L_801E1D0C:;
  c->r[0]=0u+0x00000000u; // 801E1D0C
  c->r[11]=c->r[0]|0x00000002u; // 801E1D10
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801E1D14
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801E1D18
  goto L_801E1D74; // 801E1D1C
L_801E1D20:;
  c->r[9]=0u+0x00000001u; // 801E1D20
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 801E1D24
  c->r[11]=0u+0x00000000u; // 801E1D28
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801E1D2C
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801E1D30
  c->r[11]=(rotl(c->r[9],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 801E1D34
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801E1D38
  c->r[11]=(rotl(c->r[5],12)&0x00007000u)|(c->r[11]&~0x00007000u); // 801E1D3C
  c->r[11]=(rotl(c->r[0],15)&0x00038000u)|(c->r[11]&~0x00038000u); // 801E1D40
  goto L_801E1D74; // 801E1D44
L_801E1D48:;
  cmps(c,0,(int32_t)c->r[5],19); // 801E1D48
  c->r[11]=0u+0x00000000u; // 801E1D4C
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 801E1D50
  if (!crb(c,2)) { goto L_801E1D64; } // 801E1D54
  c->r[0]=0u+0x00000002u; // 801E1D58
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 801E1D5C
  goto L_801E1D6C; // 801E1D60
L_801E1D64:;
  c->r[0]=0u+0x00000003u; // 801E1D64
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 801E1D68
L_801E1D6C:;
  c->r[0]=0u+0x00000002u; // 801E1D6C
  c->r[11]=(rotl(c->r[0],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 801E1D70
L_801E1D74:;
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E1D74
  c->r[9]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E1D78
  c->r[0]=c->r[8]+0xFFFFFFC0u; // 801E1D7C
  c->r[4]=0u+0x00000000u; // 801E1D80
  c->r[8]=c->r[10]+c->r[9]; // 801E1D84
  c->r[5]=0u+0x00010000u; // 801E1D88
  W32(c->r[8]+0x000000C8u,c->r[11]); // 801E1D8C
  c->r[4]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[4]&~0x0000003Fu); // 801E1D90
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 801E1D94
  cmpu(c,0,c->r[3],0x00000006u); // 801E1D98
  c->r[5]=R32(c->r[10]+0x000005FCu); // 801E1D9C
  c->r[4]=(rotl(c->r[7],8)&0x00000100u)|(c->r[4]&~0x00000100u); // 801E1DA0
  c->r[0]=c->r[5]|c->r[0]; // 801E1DA4
  W32(c->r[10]+0x000005FCu,c->r[0]); // 801E1DA8
  W32(c->r[8]+0x000000E8u,c->r[4]); // 801E1DAC
  if (crb(c,1)) { goto L_801E1E38; } // 801E1DB0
  c->r[3]=0u+0x804B0000u; // 801E1DB4
  c->r[3]=c->r[3]+0x00007B00u; // 801E1DB8
  c->r[3]=R32(c->r[3]+c->r[9]); // 801E1DBC
  c->ctr=c->r[3]; // 801E1DC0
  if (true) { switch (c->ctr) { case 0x801E1C58u: goto L_801E1C58; case 0x801E1C64u: goto L_801E1C64; case 0x801E1C70u: goto L_801E1C70; case 0x801E1C7Cu: goto L_801E1C7C; case 0x801E1C88u: goto L_801E1C88; case 0x801E1C90u: goto L_801E1C90; case 0x801E1C98u: goto L_801E1C98; case 0x801E1CA0u: goto L_801E1CA0; case 0x801E1CA8u: goto L_801E1CA8; case 0x801E1CB0u: goto L_801E1CB0; case 0x801E1CB8u: goto L_801E1CB8; case 0x801E1CC0u: goto L_801E1CC0; case 0x801E1CC8u: goto L_801E1CC8; case 0x801E1CD0u: goto L_801E1CD0; case 0x801E1CD4u: goto L_801E1CD4; case 0x801E1DC8u: goto L_801E1DC8; case 0x801E1DD8u: goto L_801E1DD8; case 0x801E1DE8u: goto L_801E1DE8; case 0x801E1DF8u: goto L_801E1DF8; case 0x801E1E08u: goto L_801E1E08; case 0x801E1E18u: goto L_801E1E18; case 0x801E1E28u: goto L_801E1E28; default: break; } dispatch(c,c->ctr); return; } // 801E1DC4
L_801E1DC8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801E1DC8
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 801E1DCC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801E1DD0
  goto L_801E1E44; // 801E1DD4
L_801E1DD8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801E1DD8
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 801E1DDC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801E1DE0
  goto L_801E1E44; // 801E1DE4
L_801E1DE8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801E1DE8
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 801E1DEC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801E1DF0
  goto L_801E1E44; // 801E1DF4
L_801E1DF8:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 801E1DF8
  c->r[0]=(rotl(c->r[6],24)&0x3F000000u)|(c->r[0]&~0x3F000000u); // 801E1DFC
  W32(c->r[10]+0x00000080u,c->r[0]); // 801E1E00
  goto L_801E1E44; // 801E1E04
L_801E1E08:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801E1E08
  c->r[0]=(rotl(c->r[6],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 801E1E0C
  W32(c->r[10]+0x00000084u,c->r[0]); // 801E1E10
  goto L_801E1E44; // 801E1E14
L_801E1E18:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801E1E18
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 801E1E1C
  W32(c->r[10]+0x00000084u,c->r[0]); // 801E1E20
  goto L_801E1E44; // 801E1E24
L_801E1E28:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801E1E28
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 801E1E2C
  W32(c->r[10]+0x00000084u,c->r[0]); // 801E1E30
  goto L_801E1E44; // 801E1E34
L_801E1E38:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 801E1E38
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 801E1E3C
  W32(c->r[10]+0x00000084u,c->r[0]); // 801E1E40
L_801E1E44:;
  c->r[0]=R32(c->r[10]+0x000005FCu); // 801E1E44
  c->r[0]=c->r[0]|0x04000000u; // 801E1E48
  W32(c->r[10]+0x000005FCu,c->r[0]); // 801E1E4C
  return; // 801E1E50
}

// GXSetNumTexGens
void f_801E1E54(Ctx* __restrict c) {
  trace_call(0x801E1E54u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E1E54
  c->r[0]=R32(c->r[4]+0x00000254u); // 801E1E58
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 801E1E5C
  W32(c->r[4]+0x00000254u,c->r[0]); // 801E1E60
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E1E64
  c->r[0]=c->r[0]|0x02000000u; // 801E1E68
  c->r[0]=c->r[0]|0x00000004u; // 801E1E6C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E1E70
  return; // 801E1E74
}

// GXSetMisc
void f_801E1E78(Ctx* __restrict c) {
  trace_call(0x801E1E78u);
  cmps(c,0,(int32_t)c->r[3],2); // 801E1E78
  if (crb(c,2)) { goto L_801E1ED4; } // 801E1E7C
  if (!crb(c,0)) { goto L_801E1E94; } // 801E1E80
  cmps(c,0,(int32_t)c->r[3],0); // 801E1E84
  if (crb(c,2)) return; // 801E1E88
  if (!crb(c,0)) { goto L_801E1EA0; } // 801E1E8C
  return; // 801E1E90
L_801E1E94:;
  cmps(c,0,(int32_t)c->r[3],4); // 801E1E94
  if (!crb(c,0)) return; // 801E1E98
  goto L_801E1EEC; // 801E1E9C
L_801E1EA0:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801E1EA0
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E1EA4
  W16(c->r[5]+0x00000004u,c->r[4]); // 801E1EA8
  c->r[3]=cntlz(c->r[0]); // 801E1EAC
  c->r[0]=0u+0x00000001u; // 801E1EB0
  c->r[3]=rotl(c->r[3],27)&0x0000FFFFu; // 801E1EB4
  W16(c->r[5]+0x00000000u,c->r[3]); // 801E1EB8
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E1EBC
  if (crb(c,2)) return; // 801E1EC0
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E1EC4
  c->r[0]=c->r[0]|0x00000008u; // 801E1EC8
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E1ECC
  return; // 801E1ED0
L_801E1ED4:;
  c->r[0]=0u-c->r[4]; // 801E1ED4
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1ED8
  c->r[0]=c->r[0]|c->r[4]; // 801E1EDC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E1EE0
  W8(c->r[3]+0x000005F9u,c->r[0]); // 801E1EE4
  return; // 801E1EE8
L_801E1EEC:;
  c->r[0]=0u-c->r[4]; // 801E1EEC
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1EF0
  c->r[0]=c->r[0]|c->r[4]; // 801E1EF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E1EF8
  W8(c->r[3]+0x000005FAu,c->r[0]); // 801E1EFC
  return; // 801E1F00
}

// fn_801E1F04
void f_801E1F04(Ctx* __restrict c) {
  trace_call(0x801E1F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F04
  c->r[0]=c->lr; // 801E1F08
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1F10
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801E1F14
  cmps(c,0,(int32_t)c->r[0],0); // 801E1F18
  if (crb(c,2)) { goto L_801E1F24; } // 801E1F1C
  c->lr=0x801E1F24u; f_801E267C(c); // 801E1F20
L_801E1F24:;
  c->r[0]=0u+0x00000000u; // 801E1F24
  c->r[3]=0u+0xCC010000u; // 801E1F28
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F2C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F30
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F34
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F38
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F3C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F40
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F44
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E1F48
  c->lr=0x801E1F50u; f_801B81D4(c); // 801E1F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1F50
  c->lr=c->r[0]; // 801E1F54
  c->r[1]=c->r[1]+0x00000010u; // 801E1F58
  return; // 801E1F5C
}

// __GXAbort
void f_801E1F60(Ctx* __restrict c) {
  trace_call(0x801E1F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F60
  c->r[0]=c->lr; // 801E1F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1F68
  c->r[11]=c->r[1]+0x00000020u; // 801E1F6C
  c->lr=0x801E1F74u; f_801E795C(c); // 801E1F70
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E1F74
  c->r[0]=R8(c->r[3]+0x000005FAu); // 801E1F78
  cmps(c,0,(int32_t)c->r[0],0); // 801E1F7C
  if (crb(c,2)) { goto L_801E2020; } // 801E1F80
  c->lr=0x801E1F88u; f_801E111C(c); // 801E1F84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E1F88
  if (crb(c,2)) { goto L_801E2020; } // 801E1F8C
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801E1F90
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801E1F94
L_801E1F98:;
  c->r[3]=c->r[0]|c->r[0]; // 801E1F98
  c->r[4]=R16(c->r[5]+0x00000050u); // 801E1F9C
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801E1FA0
  cmpu(c,0,c->r[0],c->r[3]); // 801E1FA4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1F98; } // 801E1FA8
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 801E1FAC
  c->r[0]=0u+0x00000000u; // 801E1FB0
  c->r[27]=c->r[3]|c->r[4]; // 801E1FB4
  c->r[29]=0u+0x00000008u; // 801E1FB8
  c->r[28]=c->r[0]^0x80000000u; // 801E1FBC
L_801E1FC0:;
  c->lr=0x801E1FC4u; f_801C257C(c); // 801E1FC0
  c->r[31]=c->r[4]|c->r[4]; // 801E1FC4
  c->r[30]=c->r[3]|c->r[3]; // 801E1FC8
L_801E1FCC:;
  c->lr=0x801E1FD0u; f_801C257C(c); // 801E1FCC
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 801E1FD0
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 801E1FD4
  c->r[3]=c->r[0]^0x80000000u; // 801E1FD8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801E1FDC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 801E1FE0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 801E1FE4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E1FE8
  if (crb(c,2)) { IRQCHK(c); goto L_801E1FCC; } // 801E1FEC
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801E1FF0
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801E1FF4
L_801E1FF8:;
  c->r[3]=c->r[0]|c->r[0]; // 801E1FF8
  c->r[4]=R16(c->r[5]+0x00000050u); // 801E1FFC
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 801E2000
  cmpu(c,0,c->r[0],c->r[3]); // 801E2004
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1FF8; } // 801E2008
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E200C
  c->r[0]=c->r[0]|c->r[4]; // 801E2010
  cmpu(c,0,c->r[0],c->r[27]); // 801E2014
  c->r[27]=c->r[0]|c->r[0]; // 801E2018
  if (!crb(c,2)) { IRQCHK(c); goto L_801E1FC0; } // 801E201C
L_801E2020:;
  c->r[0]=0u+0x00000001u; // 801E2020
  c->r[3]=0u+0xCC000000u; // 801E2024
  W32(c->r[3]+0x00003018u,c->r[0]); // 801E2028
  c->lr=0x801E2030u; f_801C257C(c); // 801E202C
  c->r[0]=0u+0x00000000u; // 801E2030
  c->r[31]=c->r[4]|c->r[4]; // 801E2034
  c->r[30]=c->r[3]|c->r[3]; // 801E2038
  c->r[29]=0u+0x00000032u; // 801E203C
  c->r[28]=c->r[0]^0x80000000u; // 801E2040
L_801E2044:;
  c->lr=0x801E2048u; f_801C257C(c); // 801E2044
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 801E2048
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 801E204C
  c->r[3]=c->r[0]^0x80000000u; // 801E2050
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801E2054
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 801E2058
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 801E205C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E2060
  if (crb(c,2)) { IRQCHK(c); goto L_801E2044; } // 801E2064
  c->r[30]=0u+0x00000000u; // 801E2068
  c->r[3]=0u+0xCC000000u; // 801E206C
  W32(c->r[3]+0x00003018u,c->r[30]); // 801E2070
  c->lr=0x801E2078u; f_801C257C(c); // 801E2074
  c->r[31]=c->r[30]^0x80000000u; // 801E2078
  c->r[28]=c->r[4]|c->r[4]; // 801E207C
  c->r[29]=c->r[3]|c->r[3]; // 801E2080
  c->r[30]=0u+0x00000005u; // 801E2084
L_801E2088:;
  c->lr=0x801E208Cu; f_801C257C(c); // 801E2088
  c->r[4]=addc(c,~c->r[28],c->r[4],1); // 801E208C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 801E2090
  c->r[3]=c->r[0]^0x80000000u; // 801E2094
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 801E2098
  c->r[3]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 801E209C
  c->r[3]=addc(c,~c->r[31],c->r[31],c->xer_ca); // 801E20A0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E20A4
  if (crb(c,2)) { IRQCHK(c); goto L_801E2088; } // 801E20A8
  c->r[11]=c->r[1]+0x00000020u; // 801E20AC
  c->lr=0x801E20B4u; f_801E79A8(c); // 801E20B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E20B4
  c->lr=c->r[0]; // 801E20B8
  c->r[1]=c->r[1]+0x00000020u; // 801E20BC
  return; // 801E20C0
}

// GXAbortFrame
void f_801E20C4(Ctx* __restrict c) {
  trace_call(0x801E20C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E20C4
  c->r[0]=c->lr; // 801E20C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E20CC
  c->r[11]=c->r[1]+0x00000020u; // 801E20D0
  c->lr=0x801E20D8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E20D4
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801E20D8
  c->r[0]=R8(c->r[31]+0x000005FAu); // 801E20DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E20E0
  if (crb(c,2)) { goto L_801E2184; } // 801E20E4
  c->lr=0x801E20ECu; f_801E111C(c); // 801E20E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E20EC
  if (crb(c,2)) { goto L_801E2184; } // 801E20F0
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801E20F4
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801E20F8
L_801E20FC:;
  c->r[0]=c->r[3]|c->r[3]; // 801E20FC
  c->r[4]=R16(c->r[5]+0x00000050u); // 801E2100
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 801E2104
  cmpu(c,0,c->r[3],c->r[0]); // 801E2108
  if (!crb(c,2)) { IRQCHK(c); goto L_801E20FC; } // 801E210C
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801E2110
  c->r[0]=0u+0x00000000u; // 801E2114
  c->r[26]=c->r[3]|c->r[4]; // 801E2118
  c->r[28]=0u+0x00000008u; // 801E211C
  c->r[27]=c->r[0]^0x80000000u; // 801E2120
L_801E2124:;
  c->lr=0x801E2128u; f_801C257C(c); // 801E2124
  c->r[30]=c->r[4]|c->r[4]; // 801E2128
  c->r[29]=c->r[3]|c->r[3]; // 801E212C
L_801E2130:;
  c->lr=0x801E2134u; f_801C257C(c); // 801E2130
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 801E2134
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 801E2138
  c->r[3]=c->r[0]^0x80000000u; // 801E213C
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 801E2140
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 801E2144
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 801E2148
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E214C
  if (crb(c,2)) { IRQCHK(c); goto L_801E2130; } // 801E2150
  c->r[5]=R32(c->r[13]+0xFFFFA124u); // 801E2154
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 801E2158
L_801E215C:;
  c->r[0]=c->r[4]|c->r[4]; // 801E215C
  c->r[3]=R16(c->r[5]+0x00000050u); // 801E2160
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 801E2164
  cmpu(c,0,c->r[4],c->r[0]); // 801E2168
  if (!crb(c,2)) { IRQCHK(c); goto L_801E215C; } // 801E216C
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 801E2170
  c->r[0]=c->r[0]|c->r[3]; // 801E2174
  cmpu(c,0,c->r[0],c->r[26]); // 801E2178
  c->r[26]=c->r[0]|c->r[0]; // 801E217C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2124; } // 801E2180
L_801E2184:;
  c->r[0]=0u+0x00000001u; // 801E2184
  c->r[3]=0u+0xCC000000u; // 801E2188
  W32(c->r[3]+0x00003018u,c->r[0]); // 801E218C
  c->lr=0x801E2194u; f_801C257C(c); // 801E2190
  c->r[0]=0u+0x00000000u; // 801E2194
  c->r[30]=c->r[4]|c->r[4]; // 801E2198
  c->r[29]=c->r[3]|c->r[3]; // 801E219C
  c->r[28]=0u+0x00000032u; // 801E21A0
  c->r[27]=c->r[0]^0x80000000u; // 801E21A4
L_801E21A8:;
  c->lr=0x801E21ACu; f_801C257C(c); // 801E21A8
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 801E21AC
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 801E21B0
  c->r[3]=c->r[0]^0x80000000u; // 801E21B4
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 801E21B8
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 801E21BC
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 801E21C0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E21C4
  if (crb(c,2)) { IRQCHK(c); goto L_801E21A8; } // 801E21C8
  c->r[29]=0u+0x00000000u; // 801E21CC
  c->r[3]=0u+0xCC000000u; // 801E21D0
  W32(c->r[3]+0x00003018u,c->r[29]); // 801E21D4
  c->lr=0x801E21DCu; f_801C257C(c); // 801E21D8
  c->r[30]=c->r[29]^0x80000000u; // 801E21DC
  c->r[27]=c->r[4]|c->r[4]; // 801E21E0
  c->r[28]=c->r[3]|c->r[3]; // 801E21E4
  c->r[29]=0u+0x00000005u; // 801E21E8
L_801E21EC:;
  c->lr=0x801E21F0u; f_801C257C(c); // 801E21EC
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801E21F0
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801E21F4
  c->r[3]=c->r[0]^0x80000000u; // 801E21F8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 801E21FC
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 801E2200
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 801E2204
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 801E2208
  if (crb(c,2)) { IRQCHK(c); goto L_801E21EC; } // 801E220C
  c->lr=0x801E2214u; f_801E111C(c); // 801E2210
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801E2214
  if (crb(c,2)) { goto L_801E2260; } // 801E2218
  c->lr=0x801E2220u; f_801E11E4(c); // 801E221C
  c->lr=0x801E2224u; f_801DFA84(c); // 801E2220
  c->r[0]=0u+0x00000000u; // 801E2224
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801E2228
  goto L_801E2234; // 801E222C
  c->lr=0x801E2234u; f_801E267C(c); // 801E2230
L_801E2234:;
  c->r[0]=0u+0x00000000u; // 801E2234
  c->r[3]=0u+0xCC010000u; // 801E2238
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E223C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2240
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2244
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2248
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E224C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2250
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2254
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2258
  c->lr=0x801E2260u; f_801B81D4(c); // 801E225C
L_801E2260:;
  c->r[11]=c->r[1]+0x00000020u; // 801E2260
  c->lr=0x801E2268u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E2264
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2268
  c->lr=c->r[0]; // 801E226C
  c->r[1]=c->r[1]+0x00000020u; // 801E2270
  return; // 801E2274
}

// GXDrawDone
void f_801E2278(Ctx* __restrict c) {
  trace_call(0x801E2278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2278
  c->r[0]=c->lr; // 801E227C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2284
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2288
  c->lr=0x801E2290u; f_801BE74C(c); // 801E228C
  c->r[5]=0u+0xCC010000u; // 801E2290
  c->r[0]=0u+0x00000061u; // 801E2294
  c->r[4]=0u+0x45000000u; // 801E2298
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E229C
  c->r[0]=c->r[4]+0x00000002u; // 801E22A0
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E22A4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E22A8
  c->r[30]=c->r[3]|c->r[3]; // 801E22AC
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E22B0
  cmps(c,0,(int32_t)c->r[0],0); // 801E22B4
  if (crb(c,2)) { goto L_801E22C0; } // 801E22B8
  c->lr=0x801E22C0u; f_801E267C(c); // 801E22BC
L_801E22C0:;
  c->r[31]=0u+0x00000000u; // 801E22C0
  c->r[3]=0u+0xCC010000u; // 801E22C4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22C8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22CC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22D0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22D4
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22D8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22DC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22E0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E22E4
  c->lr=0x801E22ECu; f_801B81D4(c); // 801E22E8
  W8(c->r[13]+0xFFFFA168u,c->r[31]); // 801E22EC
  c->r[3]=c->r[30]|c->r[30]; // 801E22F0
  c->lr=0x801E22F8u; f_801BE774(c); // 801E22F4
  c->lr=0x801E22FCu; f_801BE74C(c); // 801E22F8
  c->r[30]=c->r[3]|c->r[3]; // 801E22FC
  goto L_801E230C; // 801E2300
L_801E2304:;
  c->r[3]=c->r[13]+0xFFFFA160u; // 801E2304
  c->lr=0x801E230Cu; f_801C21D0(c); // 801E2308
L_801E230C:;
  c->r[0]=R8(c->r[13]+0xFFFFA168u); // 801E230C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2310
  if (crb(c,2)) { IRQCHK(c); goto L_801E2304; } // 801E2314
  c->r[3]=c->r[30]|c->r[30]; // 801E2318
  c->lr=0x801E2320u; f_801BE774(c); // 801E231C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2320
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2324
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2328
  c->lr=c->r[0]; // 801E232C
  c->r[1]=c->r[1]+0x00000010u; // 801E2330
  return; // 801E2334
}

// fn_801E2338
void f_801E2338(Ctx* __restrict c) {
  trace_call(0x801E2338u);
  c->r[4]=0u+0xCC010000u; // 801E2338
  c->r[0]=0u+0x00000061u; // 801E233C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E2340
  c->r[0]=0u+0x00000000u; // 801E2344
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E2348
  c->r[3]=R32(c->r[5]+0x0000022Cu); // 801E234C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E2350
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E2354
  return; // 801E2358
}

// GXPokeAlphaMode
void f_801E235C(Ctx* __restrict c) {
  trace_call(0x801E235Cu);
  c->r[5]=R32(c->r[13]+0xFFFFA120u); // 801E235C
  c->r[4]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[4]&~0xFFFFFF00u); // 801E2360
  W16(c->r[5]+0x00000006u,c->r[4]); // 801E2364
  return; // 801E2368
}

// GXPokeAlphaRead
void f_801E236C(Ctx* __restrict c) {
  trace_call(0x801E236Cu);
  c->r[0]=0u+0x00000000u; // 801E236C
  c->r[4]=R32(c->r[13]+0xFFFFA120u); // 801E2370
  c->r[0]=(rotl(c->r[3],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801E2374
  c->r[0]=c->r[0]|0x00000004u; // 801E2378
  W16(c->r[4]+0x00000008u,c->r[0]); // 801E237C
  return; // 801E2380
}

// GXPokeAlphaUpdate
void f_801E2384(Ctx* __restrict c) {
  trace_call(0x801E2384u);
  c->r[4]=R32(c->r[13]+0xFFFFA120u); // 801E2384
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E2388
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801E238C
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E2390
  return; // 801E2394
}

// GXPokeBlendMode
void f_801E2398(Ctx* __restrict c) {
  trace_call(0x801E2398u);
  c->r[7]=R32(c->r[13]+0xFFFFA120u); // 801E2398
  cmps(c,0,(int32_t)c->r[3],1); // 801E239C
  c->r[0]=0u+0x00000000u; // 801E23A0
  c->r[9]=R16(c->r[7]+0x00000002u); // 801E23A4
  if (crb(c,2)) { goto L_801E23B4; } // 801E23A8
  cmps(c,0,(int32_t)c->r[3],3); // 801E23AC
  if (!crb(c,2)) { goto L_801E23B8; } // 801E23B0
L_801E23B4:;
  c->r[0]=0u+0x00000001u; // 801E23B4
L_801E23B8:;
  c->r[7]=c->r[3]+0xFFFFFFFDu; // 801E23B8
  c->r[9]=(rotl(c->r[0],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 801E23BC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E23C0
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 801E23C4
  c->r[8]=cntlz(c->r[7]); // 801E23C8
  c->r[7]=cntlz(c->r[0]); // 801E23CC
  c->r[0]=0u+0x00000041u; // 801E23D0
  c->r[9]=(rotl(c->r[8],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 801E23D4
  c->r[9]=(rotl(c->r[7],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 801E23D8
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 801E23DC
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 801E23E0
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 801E23E4
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 801E23E8
  W16(c->r[3]+0x00000002u,c->r[9]); // 801E23EC
  return; // 801E23F0
}

// GXPokeColorUpdate
void f_801E23F4(Ctx* __restrict c) {
  trace_call(0x801E23F4u);
  c->r[4]=R32(c->r[13]+0xFFFFA120u); // 801E23F4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E23F8
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 801E23FC
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E2400
  return; // 801E2404
}

// GXPokeDstAlpha
void f_801E2408(Ctx* __restrict c) {
  trace_call(0x801E2408u);
  c->r[5]=R32(c->r[13]+0xFFFFA120u); // 801E2408
  c->r[0]=0u+0x00000000u; // 801E240C
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801E2410
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 801E2414
  W16(c->r[5]+0x00000004u,c->r[0]); // 801E2418
  return; // 801E241C
}

// GXPokeDither
void f_801E2420(Ctx* __restrict c) {
  trace_call(0x801E2420u);
  c->r[4]=R32(c->r[13]+0xFFFFA120u); // 801E2420
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E2424
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 801E2428
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E242C
  return; // 801E2430
}

// GXPokeZMode
void f_801E2434(Ctx* __restrict c) {
  trace_call(0x801E2434u);
  c->r[6]=R32(c->r[13]+0xFFFFA120u); // 801E2434
  c->r[0]=0u+0x00000000u; // 801E2438
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E243C
  c->r[0]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 801E2440
  c->r[0]=(rotl(c->r[5],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 801E2444
  W16(c->r[6]+0x00000000u,c->r[0]); // 801E2448
  return; // 801E244C
}

// fn_801E2450
void f_801E2450(Ctx* __restrict c) {
  trace_call(0x801E2450u);
  c->r[0]=0u+0x00000001u; // 801E2450
  c->r[6]=0u+0xC8000000u; // 801E2454
  c->r[6]=(rotl(c->r[3],2)&0x00000FFCu)|(c->r[6]&~0x00000FFCu); // 801E2458
  c->r[6]=(rotl(c->r[4],12)&0x003FF000u)|(c->r[6]&~0x003FF000u); // 801E245C
  c->r[6]=(rotl(c->r[0],22)&0x00C00000u)|(c->r[6]&~0x00C00000u); // 801E2460
  c->r[0]=R32(c->r[6]+0x00000000u); // 801E2464
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E2468
  return; // 801E246C
}

// fn_801E2470
void f_801E2470(Ctx* __restrict c) {
  trace_call(0x801E2470u);
  c->r[0]=0u+0x00000001u; // 801E2470
  c->r[6]=0u+0xC8000000u; // 801E2474
  c->r[6]=(rotl(c->r[3],2)&0x00000FFCu)|(c->r[6]&~0x00000FFCu); // 801E2478
  c->r[6]=(rotl(c->r[4],12)&0x003FF000u)|(c->r[6]&~0x003FF000u); // 801E247C
  c->r[6]=(rotl(c->r[0],22)&0x00C00000u)|(c->r[6]&~0x00C00000u); // 801E2480
  W32(c->r[6]+0x00000000u,c->r[5]); // 801E2484
  return; // 801E2488
}

// GXSetDrawSyncCallback
void f_801E248C(Ctx* __restrict c) {
  trace_call(0x801E248Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E248C
  c->r[0]=c->lr; // 801E2490
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2498
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E249C
  c->r[30]=c->r[3]|c->r[3]; // 801E24A0
  c->r[31]=R32(c->r[13]+0xFFFFA170u); // 801E24A4
  c->lr=0x801E24ACu; f_801BE74C(c); // 801E24A8
  W32(c->r[13]+0xFFFFA170u,c->r[30]); // 801E24AC
  c->lr=0x801E24B4u; f_801BE774(c); // 801E24B0
  c->r[3]=c->r[31]|c->r[31]; // 801E24B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E24B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E24BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E24C0
  c->lr=c->r[0]; // 801E24C4
  c->r[1]=c->r[1]+0x00000010u; // 801E24C8
  return; // 801E24CC
}

// GXTokenInterruptHandler
void f_801E24D0(Ctx* __restrict c) {
  trace_call(0x801E24D0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E24D0
  c->r[0]=c->lr; // 801E24D4
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801E24D8
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801E24DC
  W32(c->r[1]+0x000002D8u,c->r[30]); // 801E24E0
  c->r[30]=c->r[4]|c->r[4]; // 801E24E4
  c->r[0]=R32(c->r[13]+0xFFFFA170u); // 801E24E8
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 801E24EC
  cmps(c,0,(int32_t)c->r[0],0); // 801E24F0
  c->r[31]=R16(c->r[3]+0x0000000Eu); // 801E24F4
  if (crb(c,2)) { goto L_801E252C; } // 801E24F8
  c->r[3]=c->r[1]+0x00000008u; // 801E24FC
  c->lr=0x801E2504u; f_801BAFF0(c); // 801E2500
  c->r[3]=c->r[1]+0x00000008u; // 801E2504
  c->lr=0x801E250Cu; f_801BADC8(c); // 801E2508
  c->r[12]=R32(c->r[13]+0xFFFFA170u); // 801E250C
  c->r[3]=c->r[31]|c->r[31]; // 801E2510
  c->ctr=c->r[12]; // 801E2514
  if (true) { c->lr=0x801E251Cu; dispatch(c,c->ctr); } // 801E2518
  c->r[3]=c->r[1]+0x00000008u; // 801E251C
  c->lr=0x801E2524u; f_801BAFF0(c); // 801E2520
  c->r[3]=c->r[30]|c->r[30]; // 801E2524
  c->lr=0x801E252Cu; f_801BADC8(c); // 801E2528
L_801E252C:;
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 801E252C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801E2530
  c->r[0]=c->r[0]|0x00000004u; // 801E2534
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801E2538
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801E253C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801E2540
  c->r[30]=R32(c->r[1]+0x000002D8u); // 801E2544
  c->lr=c->r[0]; // 801E2548
  c->r[1]=c->r[1]+0x000002E0u; // 801E254C
  return; // 801E2550
}

// GXSetDrawDoneCallback
void f_801E2554(Ctx* __restrict c) {
  trace_call(0x801E2554u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2554
  c->r[0]=c->lr; // 801E2558
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E255C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2560
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2564
  c->r[30]=c->r[3]|c->r[3]; // 801E2568
  c->r[31]=R32(c->r[13]+0xFFFFA16Cu); // 801E256C
  c->lr=0x801E2574u; f_801BE74C(c); // 801E2570
  W32(c->r[13]+0xFFFFA16Cu,c->r[30]); // 801E2574
  c->lr=0x801E257Cu; f_801BE774(c); // 801E2578
  c->r[3]=c->r[31]|c->r[31]; // 801E257C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2580
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2584
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2588
  c->lr=c->r[0]; // 801E258C
  c->r[1]=c->r[1]+0x00000010u; // 801E2590
  return; // 801E2594
}

// GXFinishInterruptHandler
void f_801E2598(Ctx* __restrict c) {
  trace_call(0x801E2598u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2598
  c->r[0]=c->lr; // 801E259C
  c->r[3]=0u+0x00000001u; // 801E25A0
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801E25A4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801E25A8
  c->r[31]=c->r[4]|c->r[4]; // 801E25AC
  c->r[5]=R32(c->r[13]+0xFFFFA120u); // 801E25B0
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801E25B4
  c->r[0]=c->r[0]|0x00000008u; // 801E25B8
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801E25BC
  c->r[0]=R32(c->r[13]+0xFFFFA16Cu); // 801E25C0
  W8(c->r[13]+0xFFFFA168u,c->r[3]); // 801E25C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E25C8
  if (crb(c,2)) { goto L_801E25FC; } // 801E25CC
  c->r[3]=c->r[1]+0x00000008u; // 801E25D0
  c->lr=0x801E25D8u; f_801BAFF0(c); // 801E25D4
  c->r[3]=c->r[1]+0x00000008u; // 801E25D8
  c->lr=0x801E25E0u; f_801BADC8(c); // 801E25DC
  c->r[12]=R32(c->r[13]+0xFFFFA16Cu); // 801E25E0
  c->ctr=c->r[12]; // 801E25E4
  if (true) { c->lr=0x801E25ECu; dispatch(c,c->ctr); } // 801E25E8
  c->r[3]=c->r[1]+0x00000008u; // 801E25EC
  c->lr=0x801E25F4u; f_801BAFF0(c); // 801E25F0
  c->r[3]=c->r[31]|c->r[31]; // 801E25F4
  c->lr=0x801E25FCu; f_801BADC8(c); // 801E25F8
L_801E25FC:;
  c->r[3]=c->r[13]+0xFFFFA160u; // 801E25FC
  c->lr=0x801E2604u; f_801C22BC(c); // 801E2600
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801E2604
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801E2608
  c->lr=c->r[0]; // 801E260C
  c->r[1]=c->r[1]+0x000002E0u; // 801E2610
  return; // 801E2614
}

// __GXPEInit
void f_801E2618(Ctx* __restrict c) {
  trace_call(0x801E2618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2618
  c->r[0]=c->lr; // 801E261C
  c->r[4]=0u+0x801E0000u; // 801E2620
  c->r[3]=0u+0x00000012u; // 801E2624
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2628
  c->r[4]=c->r[4]+0x000024D0u; // 801E262C
  c->lr=0x801E2634u; f_801BE798(c); // 801E2630
  c->r[4]=0u+0x801E0000u; // 801E2634
  c->r[3]=0u+0x00000013u; // 801E2638
  c->r[4]=c->r[4]+0x00002598u; // 801E263C
  c->lr=0x801E2644u; f_801BE798(c); // 801E2640
  c->r[3]=c->r[13]+0xFFFFA160u; // 801E2644
  c->lr=0x801E264Cu; f_801C1194(c); // 801E2648
  c->r[3]=0u+0x00002000u; // 801E264C
  c->lr=0x801E2654u; f_801BEB5C(c); // 801E2650
  c->r[3]=0u+0x00001000u; // 801E2654
  c->lr=0x801E265Cu; f_801BEB5C(c); // 801E2658
  c->r[3]=R32(c->r[13]+0xFFFFA120u); // 801E265C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801E2660
  c->r[0]=c->r[0]|0x0000000Fu; // 801E2664
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801E2668
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E266C
  c->lr=c->r[0]; // 801E2670
  c->r[1]=c->r[1]+0x00000010u; // 801E2674
  return; // 801E2678
}

// __GXSetDirtyState
void f_801E267C(Ctx* __restrict c) {
  trace_call(0x801E267Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E267C
  c->r[0]=c->lr; // 801E2680
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2688
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801E268C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2690
  c->r[30]=R32(c->r[31]+0x000005FCu); // 801E2694
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801E2698
  if (crb(c,2)) { goto L_801E26A4; } // 801E269C
  c->lr=0x801E26A4u; f_801E49B0(c); // 801E26A0
L_801E26A4:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 801E26A4
  if (crb(c,2)) { goto L_801E26B0; } // 801E26A8
  c->lr=0x801E26B0u; f_801E5260(c); // 801E26AC
L_801E26B0:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 801E26B0
  if (crb(c,2)) { goto L_801E26D8; } // 801E26B4
  c->r[4]=0u+0xCC010000u; // 801E26B8
  c->r[0]=0u+0x00000061u; // 801E26BC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E26C0
  c->r[0]=0u+0x00000000u; // 801E26C4
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E26C8
  c->r[3]=R32(c->r[5]+0x00000254u); // 801E26CC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E26D0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E26D4
L_801E26D8:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 801E26D8
  if (crb(c,2)) { goto L_801E26E4; } // 801E26DC
  c->lr=0x801E26E4u; f_801E15E8(c); // 801E26E0
L_801E26E4:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 801E26E4
  if (crb(c,2)) { goto L_801E26F0; } // 801E26E8
  c->lr=0x801E26F0u; f_801E1B5C(c); // 801E26EC
L_801E26F0:;
  c->r[0]=rotl(c->r[30],0)&0x00000018u; cr0(c,c->r[0]); // 801E26F0
  if (crb(c,2)) { goto L_801E26FC; } // 801E26F4
  c->lr=0x801E26FCu; f_801E1698(c); // 801E26F8
L_801E26FC:;
  c->r[30]=rotl(c->r[30],0)&0xFFFFFF00u; cr0(c,c->r[30]); // 801E26FC
  if (crb(c,2)) { goto L_801E28D4; } // 801E2700
  c->r[4]=rotl(c->r[30],0)&0x00000F00u; cr0(c,c->r[4]); // 801E2704
  if (crb(c,2)) { goto L_801E279C; } // 801E2708
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 801E270C
  if (crb(c,2)) { goto L_801E2730; } // 801E2710
  c->r[3]=0u+0xCC010000u; // 801E2714
  c->r[0]=0u+0x00000010u; // 801E2718
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E271C
  c->r[0]=0u+0x0000100Au; // 801E2720
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2724
  c->r[0]=R32(c->r[31]+0x000000A8u); // 801E2728
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E272C
L_801E2730:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 801E2730
  if (crb(c,2)) { goto L_801E2754; } // 801E2734
  c->r[3]=0u+0xCC010000u; // 801E2738
  c->r[0]=0u+0x00000010u; // 801E273C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2740
  c->r[0]=0u+0x0000100Bu; // 801E2744
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2748
  c->r[0]=R32(c->r[31]+0x000000ACu); // 801E274C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2750
L_801E2754:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801E2754
  if (crb(c,2)) { goto L_801E2778; } // 801E2758
  c->r[3]=0u+0xCC010000u; // 801E275C
  c->r[0]=0u+0x00000010u; // 801E2760
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2764
  c->r[0]=0u+0x0000100Cu; // 801E2768
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E276C
  c->r[0]=R32(c->r[31]+0x000000B0u); // 801E2770
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2774
L_801E2778:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 801E2778
  if (crb(c,2)) { goto L_801E279C; } // 801E277C
  c->r[3]=0u+0xCC010000u; // 801E2780
  c->r[0]=0u+0x00000010u; // 801E2784
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2788
  c->r[0]=0u+0x0000100Du; // 801E278C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2790
  c->r[0]=R32(c->r[31]+0x000000B4u); // 801E2794
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2798
L_801E279C:;
  c->r[7]=rotl(c->r[30],0)&0x01000000u; // 801E279C
  c->r[7]=(rotl(c->r[30],0)&0x0000F000u)|(c->r[7]&~0x0000F000u); cr0(c,c->r[7]); // 801E27A0
  if (crb(c,2)) { goto L_801E2814; } // 801E27A4
  c->r[0]=rotl(c->r[7],0)&0x01000000u; cr0(c,c->r[0]); // 801E27A8
  c->r[6]=0u+0x0000100Eu; // 801E27AC
  if (crb(c,2)) { goto L_801E27D4; } // 801E27B0
  c->r[5]=R32(c->r[31]+0x00000254u); // 801E27B4
  c->r[3]=0u+0xCC010000u; // 801E27B8
  c->r[4]=0u+0x00000010u; // 801E27BC
  c->r[0]=0u+0x00001009u; // 801E27C0
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E27C4
  c->r[4]=rotl(c->r[5],28)&0x00000007u; // 801E27C8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E27CC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E27D0
L_801E27D4:;
  c->r[5]=c->r[31]|c->r[31]; // 801E27D4
  c->r[7]=rotl(c->r[7],20)&0x0000000Fu; // 801E27D8
  c->r[4]=0u+0x00000010u; // 801E27DC
  c->r[3]=0u+0xCC010000u; // 801E27E0
  goto L_801E280C; // 801E27E4
L_801E27E8:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 801E27E8
  if (crb(c,2)) { goto L_801E2800; } // 801E27EC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E27F0
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 801E27F4
  c->r[0]=R32(c->r[5]+0x000000B8u); // 801E27F8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E27FC
L_801E2800:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 801E2800
  c->r[5]=c->r[5]+0x00000004u; // 801E2804
  c->r[6]=c->r[6]+0x00000001u; // 801E2808
L_801E280C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E280C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E27E8; } // 801E2810
L_801E2814:;
  c->r[8]=c->r[30]&0x02FF0000u; cr0(c,c->r[8]); // 801E2814
  if (crb(c,2)) { goto L_801E289C; } // 801E2818
  c->r[0]=rotl(c->r[8],0)&0x02000000u; cr0(c,c->r[0]); // 801E281C
  c->r[6]=0u+0x00001040u; // 801E2820
  if (crb(c,2)) { goto L_801E2848; } // 801E2824
  c->r[5]=R32(c->r[31]+0x00000254u); // 801E2828
  c->r[3]=0u+0xCC010000u; // 801E282C
  c->r[4]=0u+0x00000010u; // 801E2830
  c->r[0]=0u+0x0000103Fu; // 801E2834
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2838
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 801E283C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2840
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2844
L_801E2848:;
  c->r[7]=c->r[31]|c->r[31]; // 801E2848
  c->r[8]=rotl(c->r[8],16)&0x000000FFu; // 801E284C
  c->r[4]=0u+0x00000010u; // 801E2850
  c->r[3]=0u+0xCC010000u; // 801E2854
  goto L_801E2894; // 801E2858
L_801E285C:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 801E285C
  c->r[5]=c->r[6]+0x00000010u; // 801E2860
  if (crb(c,2)) { goto L_801E2888; } // 801E2864
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2868
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 801E286C
  c->r[0]=R32(c->r[7]+0x000000C8u); // 801E2870
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2874
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2878
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E287C
  c->r[0]=R32(c->r[7]+0x000000E8u); // 801E2880
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2884
L_801E2888:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 801E2888
  c->r[6]=c->r[6]+0x00000001u; // 801E288C
  c->r[7]=c->r[7]+0x00000004u; // 801E2890
L_801E2894:;
  cmps(c,0,(int32_t)c->r[8],0); // 801E2894
  if (!crb(c,2)) { IRQCHK(c); goto L_801E285C; } // 801E2898
L_801E289C:;
  c->r[0]=rotl(c->r[30],0)&0x04000000u; cr0(c,c->r[0]); // 801E289C
  if (crb(c,2)) { goto L_801E28B4; } // 801E28A0
  c->r[3]=0u+0x00000000u; // 801E28A4
  c->lr=0x801E28ACu; f_801E6594(c); // 801E28A8
  c->r[3]=0u+0x00000005u; // 801E28AC
  c->lr=0x801E28B4u; f_801E6594(c); // 801E28B0
L_801E28B4:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 801E28B4
  if (crb(c,2)) { goto L_801E28C0; } // 801E28B8
  c->lr=0x801E28C0u; f_801E6380(c); // 801E28BC
L_801E28C0:;
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 801E28C0
  if (crb(c,2)) { goto L_801E28CC; } // 801E28C4
  c->lr=0x801E28CCu; f_801E6110(c); // 801E28C8
L_801E28CC:;
  c->r[0]=0u+0x00000001u; // 801E28CC
  W16(c->r[31]+0x00000002u,c->r[0]); // 801E28D0
L_801E28D4:;
  c->r[0]=0u+0x00000000u; // 801E28D4
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801E28D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E28DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E28E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E28E4
  c->lr=c->r[0]; // 801E28E8
  c->r[1]=c->r[1]+0x00000010u; // 801E28EC
  return; // 801E28F0
}

// GXBegin
void f_801E28F4(Ctx* __restrict c) {
  trace_call(0x801E28F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E28F4
  c->r[0]=c->lr; // 801E28F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E28FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2900
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801E2904
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2908
  c->r[30]=c->r[5]|c->r[5]; // 801E290C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2910
  c->r[29]=c->r[4]|c->r[4]; // 801E2914
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2918
  c->r[28]=c->r[3]|c->r[3]; // 801E291C
  c->r[0]=R32(c->r[31]+0x000005FCu); // 801E2920
  cmps(c,0,(int32_t)c->r[0],0); // 801E2924
  if (crb(c,2)) { goto L_801E2930; } // 801E2928
  c->lr=0x801E2930u; f_801E267C(c); // 801E292C
L_801E2930:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E2930
  cmps(c,0,(int32_t)c->r[0],0); // 801E2934
  if (!crb(c,2)) { goto L_801E2A10; } // 801E2938
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E293C
  c->r[3]=0u+0xCC010000u; // 801E2940
  c->r[0]=0u+0x00000098u; // 801E2944
  c->r[6]=0u+0x00000000u; // 801E2948
  c->r[5]=R16(c->r[7]+0x00000004u); // 801E294C
  c->r[4]=R16(c->r[7]+0x00000006u); // 801E2950
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2954
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[5]); // 801E2958
  c->r[0]=R16(c->r[7]+0x00000004u); // 801E295C
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2960
  if (crb(c,2)) { goto L_801E2A08; } // 801E2964
  c->r[3]=c->r[5]+0x00000003u; // 801E2968
  c->r[7]=c->r[5]+0xFFFFFFE0u; // 801E296C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801E2970
  cmpu(c,0,c->r[0],0x00000008u); // 801E2974
  if (!crb(c,1)) { goto L_801E29E0; } // 801E2978
  cmpu(c,0,c->r[3],0x00000003u); // 801E297C
  c->r[0]=0u+0x00000000u; // 801E2980
  if (crb(c,0)) { goto L_801E2994; } // 801E2984
  cmpu(c,0,c->r[5],c->r[3]); // 801E2988
  if (crb(c,1)) { goto L_801E2994; } // 801E298C
  c->r[0]=0u+0x00000001u; // 801E2990
L_801E2994:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E2994
  if (crb(c,2)) { goto L_801E29E0; } // 801E2998
  c->r[0]=c->r[7]+0x0000001Fu; // 801E299C
  c->r[4]=0u+0x00000000u; // 801E29A0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E29A4
  c->r[3]=0u+0xCC010000u; // 801E29A8
  c->ctr=c->r[0]; // 801E29AC
  cmpu(c,0,c->r[7],0x00000000u); // 801E29B0
  if (!crb(c,1)) { goto L_801E29E0; } // 801E29B4
L_801E29B8:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29B8
  c->r[6]=c->r[6]+0x00000020u; // 801E29BC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29C0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29C4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29C8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29CC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29D0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29D4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E29D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E29B8; } // 801E29DC
L_801E29E0:;
  c->r[0]=c->r[5]+0x00000003u; // 801E29E0
  c->r[4]=0u+0x00000000u; // 801E29E4
  c->r[0]=c->r[0]-c->r[6]; // 801E29E8
  c->r[3]=0u+0xCC010000u; // 801E29EC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801E29F0
  c->ctr=c->r[0]; // 801E29F4
  cmpu(c,0,c->r[6],c->r[5]); // 801E29F8
  if (!crb(c,0)) { goto L_801E2A08; } // 801E29FC
L_801E2A00:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2A00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E2A00; } // 801E2A04
L_801E2A08:;
  c->r[0]=0u+0x00000001u; // 801E2A08
  W16(c->r[31]+0x00000002u,c->r[0]); // 801E2A0C
L_801E2A10:;
  c->r[3]=0u+0xCC010000u; // 801E2A10
  c->r[0]=c->r[29]|c->r[28]; // 801E2A14
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2A18
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 801E2A1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2A20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2A24
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2A28
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2A2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2A30
  c->lr=c->r[0]; // 801E2A34
  c->r[1]=c->r[1]+0x00000020u; // 801E2A38
  return; // 801E2A3C
}

// __GXSendFlushPrim
void f_801E2A40(Ctx* __restrict c) {
  trace_call(0x801E2A40u);
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E2A40
  c->r[3]=0u+0xCC010000u; // 801E2A44
  c->r[0]=0u+0x00000098u; // 801E2A48
  c->r[7]=0u+0x00000000u; // 801E2A4C
  c->r[5]=R16(c->r[6]+0x00000004u); // 801E2A50
  c->r[4]=R16(c->r[6]+0x00000006u); // 801E2A54
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2A58
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[8]); // 801E2A5C
  c->r[0]=R16(c->r[6]+0x00000004u); // 801E2A60
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 801E2A64
  if (crb(c,2)) { goto L_801E2B0C; } // 801E2A68
  c->r[3]=c->r[8]+0x00000003u; // 801E2A6C
  c->r[5]=c->r[8]+0xFFFFFFE0u; // 801E2A70
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801E2A74
  cmpu(c,0,c->r[0],0x00000008u); // 801E2A78
  if (!crb(c,1)) { goto L_801E2AE4; } // 801E2A7C
  cmpu(c,0,c->r[3],0x00000003u); // 801E2A80
  c->r[0]=0u+0x00000000u; // 801E2A84
  if (crb(c,0)) { goto L_801E2A98; } // 801E2A88
  cmpu(c,0,c->r[8],c->r[3]); // 801E2A8C
  if (crb(c,1)) { goto L_801E2A98; } // 801E2A90
  c->r[0]=0u+0x00000001u; // 801E2A94
L_801E2A98:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E2A98
  if (crb(c,2)) { goto L_801E2AE4; } // 801E2A9C
  c->r[0]=c->r[5]+0x0000001Fu; // 801E2AA0
  c->r[4]=0u+0x00000000u; // 801E2AA4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E2AA8
  c->r[3]=0u+0xCC010000u; // 801E2AAC
  c->ctr=c->r[0]; // 801E2AB0
  cmpu(c,0,c->r[5],0x00000000u); // 801E2AB4
  if (!crb(c,1)) { goto L_801E2AE4; } // 801E2AB8
L_801E2ABC:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2ABC
  c->r[7]=c->r[7]+0x00000020u; // 801E2AC0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2AC4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2AC8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2ACC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2AD0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2AD4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2AD8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2ADC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E2ABC; } // 801E2AE0
L_801E2AE4:;
  c->r[0]=c->r[8]+0x00000003u; // 801E2AE4
  c->r[4]=0u+0x00000000u; // 801E2AE8
  c->r[0]=c->r[0]-c->r[7]; // 801E2AEC
  c->r[3]=0u+0xCC010000u; // 801E2AF0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801E2AF4
  c->ctr=c->r[0]; // 801E2AF8
  cmpu(c,0,c->r[7],c->r[8]); // 801E2AFC
  if (!crb(c,0)) { goto L_801E2B0C; } // 801E2B00
L_801E2B04:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E2B04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E2B04; } // 801E2B08
L_801E2B0C:;
  c->r[0]=0u+0x00000001u; // 801E2B0C
  W16(c->r[6]+0x00000002u,c->r[0]); // 801E2B10
  return; // 801E2B14
}

// GXSetLineWidth
void f_801E2B18(Ctx* __restrict c) {
  trace_call(0x801E2B18u);
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E2B18
  c->r[5]=0u+0xCC010000u; // 801E2B1C
  c->r[6]=0u+0x00000061u; // 801E2B20
  c->r[0]=0u+0x00000000u; // 801E2B24
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 801E2B28
  c->r[7]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E2B2C
  c->r[7]=(rotl(c->r[4],16)&0x00070000u)|(c->r[7]&~0x00070000u); // 801E2B30
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 801E2B34
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E2B38
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 801E2B3C
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801E2B40
  W16(c->r[8]+0x00000002u,c->r[0]); // 801E2B44
  return; // 801E2B48
}

// GXSetPointSize
void f_801E2B4C(Ctx* __restrict c) {
  trace_call(0x801E2B4Cu);
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E2B4C
  c->r[5]=0u+0xCC010000u; // 801E2B50
  c->r[6]=0u+0x00000061u; // 801E2B54
  c->r[0]=0u+0x00000000u; // 801E2B58
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 801E2B5C
  c->r[7]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801E2B60
  c->r[7]=(rotl(c->r[4],19)&0x00380000u)|(c->r[7]&~0x00380000u); // 801E2B64
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 801E2B68
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E2B6C
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 801E2B70
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801E2B74
  W16(c->r[8]+0x00000002u,c->r[0]); // 801E2B78
  return; // 801E2B7C
}

// GXEnableTexOffsets
void f_801E2B80(Ctx* __restrict c) {
  trace_call(0x801E2B80u);
  c->r[9]=R32(c->r[2]+0xFFFFC330u); // 801E2B80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E2B84
  c->r[6]=0u+0xCC010000u; // 801E2B88
  c->r[3]=0u+0x00000061u; // 801E2B8C
  c->r[8]=c->r[9]+c->r[0]; // 801E2B90
  c->r[0]=0u+0x00000000u; // 801E2B94
  c->r[7]=R32(c->r[8]+0x00000108u); // 801E2B98
  c->r[7]=(rotl(c->r[4],18)&0x00040000u)|(c->r[7]&~0x00040000u); // 801E2B9C
  c->r[7]=(rotl(c->r[5],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 801E2BA0
  W32(c->r[8]+0x00000108u,c->r[7]); // 801E2BA4
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 801E2BA8
  c->r[3]=R32(c->r[8]+0x00000108u); // 801E2BAC
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E2BB0
  W16(c->r[9]+0x00000002u,c->r[0]); // 801E2BB4
  return; // 801E2BB8
}

// GXSetCullMode
void f_801E2BBC(Ctx* __restrict c) {
  trace_call(0x801E2BBCu);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E2BBC
  c->r[5]=rotl(c->r[3],31)&0x00000001u; // 801E2BC0
  c->r[5]=(rotl(c->r[3],1)&0x00000002u)|(c->r[5]&~0x00000002u); // 801E2BC4
  c->r[0]=R32(c->r[4]+0x00000254u); // 801E2BC8
  c->r[0]=(rotl(c->r[5],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 801E2BCC
  W32(c->r[4]+0x00000254u,c->r[0]); // 801E2BD0
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E2BD4
  c->r[0]=c->r[0]|0x00000004u; // 801E2BD8
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E2BDC
  return; // 801E2BE0
}

// GXSetCoPlanar
void f_801E2BE4(Ctx* __restrict c) {
  trace_call(0x801E2BE4u);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E2BE4
  c->r[4]=0u+0xCC010000u; // 801E2BE8
  c->r[5]=0u+0x00000061u; // 801E2BEC
  c->r[0]=0u+0xFE080000u; // 801E2BF0
  c->r[6]=R32(c->r[7]+0x00000254u); // 801E2BF4
  c->r[6]=(rotl(c->r[3],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 801E2BF8
  W32(c->r[7]+0x00000254u,c->r[6]); // 801E2BFC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E2C00
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E2C04
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E2C08
  c->r[0]=R32(c->r[7]+0x00000254u); // 801E2C0C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E2C10
  return; // 801E2C14
}

// fn_801E2C18
void f_801E2C18(Ctx* __restrict c) {
  trace_call(0x801E2C18u);
  cmpu(c,0,c->r[3],c->r[4]); // 801E2C18
  c->r[0]=rotl(c->r[5],1)&0x0000FFFEu; // 801E2C1C
  c->r[7]=rotl(c->r[6],1)&0x0000FFFEu; // 801E2C20
  if (crb(c,2)) { goto L_801E2CA0; } // 801E2C24
  c->r[9]=R32(c->r[3]+0x00000000u); // 801E2C28
  c->r[8]=R32(c->r[3]+0x00000004u); // 801E2C2C
  W32(c->r[4]+0x00000000u,c->r[9]); // 801E2C30
  W32(c->r[4]+0x00000004u,c->r[8]); // 801E2C34
  c->r[9]=R32(c->r[3]+0x00000008u); // 801E2C38
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 801E2C3C
  W32(c->r[4]+0x00000008u,c->r[9]); // 801E2C40
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801E2C44
  c->r[9]=R32(c->r[3]+0x00000010u); // 801E2C48
  c->r[8]=R32(c->r[3]+0x00000014u); // 801E2C4C
  W32(c->r[4]+0x00000010u,c->r[9]); // 801E2C50
  W32(c->r[4]+0x00000014u,c->r[8]); // 801E2C54
  c->r[9]=R32(c->r[3]+0x00000018u); // 801E2C58
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801E2C5C
  W32(c->r[4]+0x00000018u,c->r[9]); // 801E2C60
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 801E2C64
  c->r[9]=R32(c->r[3]+0x00000020u); // 801E2C68
  c->r[8]=R32(c->r[3]+0x00000024u); // 801E2C6C
  W32(c->r[4]+0x00000020u,c->r[9]); // 801E2C70
  W32(c->r[4]+0x00000024u,c->r[8]); // 801E2C74
  c->r[9]=R32(c->r[3]+0x00000028u); // 801E2C78
  c->r[8]=R32(c->r[3]+0x0000002Cu); // 801E2C7C
  W32(c->r[4]+0x00000028u,c->r[9]); // 801E2C80
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 801E2C84
  c->r[9]=R32(c->r[3]+0x00000030u); // 801E2C88
  c->r[8]=R32(c->r[3]+0x00000034u); // 801E2C8C
  W32(c->r[4]+0x00000030u,c->r[9]); // 801E2C90
  W32(c->r[4]+0x00000034u,c->r[8]); // 801E2C94
  c->r[8]=R32(c->r[3]+0x00000038u); // 801E2C98
  W32(c->r[4]+0x00000038u,c->r[8]); // 801E2C9C
L_801E2CA0:;
  c->r[8]=R16(c->r[3]+0x00000004u); // 801E2CA0
  c->r[9]=R32(c->r[3]+0x00000000u); // 801E2CA4
  c->r[8]=c->r[8]-c->r[0]; // 801E2CA8
  W16(c->r[4]+0x00000004u,c->r[8]); // 801E2CAC
  c->r[11]=rotl(c->r[9],0)&0x00000003u; // 801E2CB0
  c->r[10]=R16(c->r[3]+0x00000006u); // 801E2CB4
  c->r[8]=R16(c->r[3]+0x00000008u); // 801E2CB8
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[10]); // 801E2CBC
  c->r[8]=divwu(c->r[9],c->r[8]); // 801E2CC0
  c->r[8]=c->r[10]-c->r[8]; // 801E2CC4
  W16(c->r[4]+0x00000006u,c->r[8]); // 801E2CC8
  c->r[8]=R32(c->r[3]+0x00000014u); // 801E2CCC
  cmps(c,0,(int32_t)c->r[8],0); // 801E2CD0
  if (!crb(c,2)) { goto L_801E2CF4; } // 801E2CD4
  cmps(c,0,(int32_t)c->r[11],0); // 801E2CD8
  if (!crb(c,2)) { goto L_801E2CF4; } // 801E2CDC
  c->r[8]=R16(c->r[3]+0x00000008u); // 801E2CE0
  c->r[9]=rotl(c->r[7],31)&0x00007FFFu; // 801E2CE4
  c->r[8]=c->r[8]-c->r[9]; // 801E2CE8
  W16(c->r[4]+0x00000008u,c->r[8]); // 801E2CEC
  goto L_801E2D00; // 801E2CF0
L_801E2CF4:;
  c->r[8]=R16(c->r[3]+0x00000008u); // 801E2CF4
  c->r[8]=c->r[8]-c->r[7]; // 801E2CF8
  W16(c->r[4]+0x00000008u,c->r[8]); // 801E2CFC
L_801E2D00:;
  c->r[8]=R16(c->r[3]+0x0000000Eu); // 801E2D00
  cmpu(c,0,c->r[11],0x00000001u); // 801E2D04
  c->r[0]=c->r[8]-c->r[0]; // 801E2D08
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801E2D0C
  if (!crb(c,2)) { goto L_801E2D28; } // 801E2D10
  c->r[0]=R16(c->r[3]+0x00000010u); // 801E2D14
  c->r[7]=rotl(c->r[7],1)&0x0001FFFEu; // 801E2D18
  c->r[0]=c->r[0]-c->r[7]; // 801E2D1C
  W16(c->r[4]+0x00000010u,c->r[0]); // 801E2D20
  goto L_801E2D34; // 801E2D24
L_801E2D28:;
  c->r[0]=R16(c->r[3]+0x00000010u); // 801E2D28
  c->r[0]=c->r[0]-c->r[7]; // 801E2D2C
  W16(c->r[4]+0x00000010u,c->r[0]); // 801E2D30
L_801E2D34:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801E2D34
  c->r[0]=c->r[0]+c->r[5]; // 801E2D38
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801E2D3C
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801E2D40
  c->r[0]=c->r[0]+c->r[6]; // 801E2D44
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801E2D48
  return; // 801E2D4C
}

// fn_801E2D50
void f_801E2D50(Ctx* __restrict c) {
  trace_call(0x801E2D50u);
  c->r[7]=0u+0x00000000u; // 801E2D50
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801E2D54
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801E2D58
  c->r[3]=0u+0x00000000u; // 801E2D5C
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 801E2D60
  c->r[4]=0u+0x00000049u; // 801E2D64
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801E2D68
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801E2D6C
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801E2D70
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E2D74
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E2D78
  c->r[0]=0u+0x0000004Au; // 801E2D7C
  W32(c->r[5]+0x00000230u,c->r[7]); // 801E2D80
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E2D84
  W32(c->r[5]+0x00000234u,c->r[3]); // 801E2D88
  return; // 801E2D8C
}

// fn_801E2D90
void f_801E2D90(Ctx* __restrict c) {
  trace_call(0x801E2D90u);
  c->r[7]=0u+0x00000000u; // 801E2D90
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801E2D94
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 801E2D98
  c->r[3]=0u+0x00000000u; // 801E2D9C
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 801E2DA0
  c->r[4]=0u+0x00000049u; // 801E2DA4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801E2DA8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801E2DAC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801E2DB0
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E2DB4
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E2DB8
  c->r[0]=0u+0x0000004Au; // 801E2DBC
  W32(c->r[5]+0x00000240u,c->r[7]); // 801E2DC0
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E2DC4
  W32(c->r[5]+0x00000244u,c->r[3]); // 801E2DC8
  return; // 801E2DCC
}

// GXSetDispCopyDst
void f_801E2DD0(Ctx* __restrict c) {
  trace_call(0x801E2DD0u);
  c->r[0]=rotl(c->r[3],1)&0x0000FFFEu; // 801E2DD0
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E2DD4
  c->r[0]=sraw(c,c->r[0],5); // 801E2DD8
  c->r[3]=0u+0x00000000u; // 801E2DDC
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801E2DE0
  c->r[0]=0u+0x0000004Du; // 801E2DE4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E2DE8
  W32(c->r[4]+0x00000238u,c->r[3]); // 801E2DEC
  return; // 801E2DF0
}

// GXSetTexCopyDst
void f_801E2DF4(Ctx* __restrict c) {
  trace_call(0x801E2DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2DF4
  c->r[0]=c->lr; // 801E2DF8
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E2DFC
  cmps(c,0,(int32_t)c->r[5],19); // 801E2E00
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E2E04
  c->r[0]=0u+0x00000000u; // 801E2E08
  c->r[9]=c->r[3]|c->r[3]; // 801E2E0C
  c->r[8]=c->r[4]|c->r[4]; // 801E2E10
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E2E14
  c->r[31]=rotl(c->r[5],0)&0x0000000Fu; // 801E2E18
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E2E1C
  c->r[30]=c->r[6]|c->r[6]; // 801E2E20
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E2E24
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E2E28
  W8(c->r[7]+0x00000250u,c->r[0]); // 801E2E2C
  if (!crb(c,2)) { goto L_801E2E38; } // 801E2E30
  c->r[31]=0u+0x0000000Bu; // 801E2E34
L_801E2E38:;
  cmps(c,0,(int32_t)c->r[5],38); // 801E2E38
  if (crb(c,2)) { goto L_801E2E58; } // 801E2E3C
  if (!crb(c,0)) { goto L_801E2E70; } // 801E2E40
  cmps(c,0,(int32_t)c->r[5],4); // 801E2E44
  if (!crb(c,0)) { goto L_801E2E70; } // 801E2E48
  cmps(c,0,(int32_t)c->r[5],0); // 801E2E4C
  if (!crb(c,0)) { goto L_801E2E58; } // 801E2E50
  goto L_801E2E70; // 801E2E54
L_801E2E58:;
  c->r[0]=0u+0x00000003u; // 801E2E58
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801E2E5C
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801E2E60
  c->r[29]=c->r[7]+0x0000024Cu; // 801E2E64
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801E2E68
  goto L_801E2E84; // 801E2E6C
L_801E2E70:;
  c->r[0]=0u+0x00000002u; // 801E2E70
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 801E2E74
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 801E2E78
  c->r[29]=c->r[7]+0x0000024Cu; // 801E2E7C
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 801E2E80
L_801E2E84:;
  c->r[0]=rotl(c->r[5],28)&0x00000001u; // 801E2E84
  c->r[3]=c->r[5]|c->r[5]; // 801E2E88
  W8(c->r[7]+0x00000250u,c->r[0]); // 801E2E8C
  c->r[5]=c->r[8]|c->r[8]; // 801E2E90
  c->r[28]=R32(c->r[2]+0xFFFFC330u); // 801E2E94
  c->r[4]=c->r[9]|c->r[9]; // 801E2E98
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E2E9C
  c->r[0]=(rotl(c->r[31],0)&0x00000008u)|(c->r[0]&~0x00000008u); // 801E2EA0
  c->r[6]=c->r[1]+0x00000010u; // 801E2EA4
  c->r[7]=c->r[1]+0x0000000Cu; // 801E2EA8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E2EAC
  c->r[8]=c->r[1]+0x00000008u; // 801E2EB0
  c->lr=0x801E2EB8u; f_801E3F60(c); // 801E2EB4
  c->r[0]=0u+0x00000000u; // 801E2EB8
  c->r[3]=0u+0x00000000u; // 801E2EBC
  W32(c->r[28]+0x00000248u,c->r[0]); // 801E2EC0
  c->r[0]=0u+0x0000004Du; // 801E2EC4
  c->r[5]=R32(c->r[1]+0x00000010u); // 801E2EC8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E2ECC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801E2ED0
  c->r[3]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801E2ED4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E2ED8
  W32(c->r[28]+0x00000248u,c->r[3]); // 801E2EDC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E2EE0
  c->r[0]=(rotl(c->r[30],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E2EE4
  c->r[0]=(rotl(c->r[31],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 801E2EE8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E2EEC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E2EF0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E2EF4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E2EF8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E2EFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E2F00
  c->lr=c->r[0]; // 801E2F04
  c->r[1]=c->r[1]+0x00000030u; // 801E2F08
  return; // 801E2F0C
}

// GXSetDispCopyFrame2Field
void f_801E2F10(Ctx* __restrict c) {
  trace_call(0x801E2F10u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E2F10
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 801E2F14
  c->r[0]=(rotl(c->r[3],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 801E2F18
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 801E2F1C
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 801E2F20
  c->r[0]=rotl(c->r[0],0)&0xFFFFCFFFu; // 801E2F24
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 801E2F28
  return; // 801E2F2C
}

// GXSetCopyClamp
void f_801E2F30(Ctx* __restrict c) {
  trace_call(0x801E2F30u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E2F30
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 801E2F34
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E2F38
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 801E2F3C
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 801E2F40
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 801E2F44
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 801E2F48
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 801E2F4C
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 801E2F50
  return; // 801E2F54
}

// GXGetYScaleFactor
void f_801E2F58(Ctx* __restrict c) {
  trace_call(0x801E2F58u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2F58
  c->r[0]=c->lr; // 801E2F5C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E2F60
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801E2F64
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801E2F68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801E2F6C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801E2F70
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801E2F74
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801E2F78
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801E2F7C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801E2F80
  c->r[0]=0u+0x43300000u; // 801E2F84
  {uint32_t ea=c->r[2]+0xFFFFC360u; c->f[3]=RF64(ea);} // 801E2F88
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E2F8C
  {uint32_t ea=c->r[2]+0xFFFFC358u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E2F90
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E2F94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E2F98
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E2F9C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801E2FA0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801E2FA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2FA8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E2FAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801E2FB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E2FB4
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 801E2FB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E2FBC
  c->r[29]=c->r[4]|c->r[4]; // 801E2FC0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E2FC4
  c->r[28]=c->r[3]|c->r[3]; // 801E2FC8
  c->r[30]=c->r[29]|c->r[29]; // 801E2FCC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 801E2FD0
  c->lr=0x801E2FD8u; f_801E7834(c); // 801E2FD4
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801E2FD8
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 801E2FDC
  c->r[31]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E2FE0
  c->r[3]=divwu(c->r[31],c->r[4]); // 801E2FE4
  cmpu(c,0,c->r[4],0x00000080u); // 801E2FE8
  c->r[3]=c->r[3]+0x00000001u; // 801E2FEC
  if (!crb(c,1)) { goto L_801E3020; } // 801E2FF0
  cmpu(c,0,c->r[4],0x00000100u); // 801E2FF4
  if (!crb(c,0)) { goto L_801E3020; } // 801E2FF8
  goto L_801E3004; // 801E2FFC
L_801E3000:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E3000
L_801E3004:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801E3004
  if (crb(c,2)) { IRQCHK(c); goto L_801E3000; } // 801E3008
  c->r[0]=divwu(c->r[28],c->r[4]); // 801E300C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E3010
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 801E3014
  if (!crb(c,2)) { goto L_801E3020; } // 801E3018
  c->r[3]=c->r[3]+0x00000001u; // 801E301C
L_801E3020:;
  cmpu(c,0,c->r[3],0x00000400u); // 801E3020
  if (!crb(c,1)) { goto L_801E302C; } // 801E3024
  c->r[3]=0u+0x00000400u; // 801E3028
L_801E302C:;
  {uint32_t ea=c->r[2]+0xFFFFC360u; c->f[31]=RF64(ea);} // 801E302C
  {uint32_t ea=c->r[2]+0xFFFFC358u; c->f[30]=c->ps1[30]=RF32(ea);} // 801E3030
  goto L_801E30AC; // 801E3034
L_801E3038:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801E3038
  W32(c->r[1]+0x00000014u,c->r[28]); // 801E303C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801E3040
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E3044
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E3048
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801E304C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801E3050
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 801E3054
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[28]); // 801E3058
  c->lr=0x801E3060u; f_801E7834(c); // 801E305C
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 801E3060
  c->r[3]=divwu(c->r[31],c->r[4]); // 801E3064
  cmpu(c,0,c->r[4],0x00000080u); // 801E3068
  c->r[3]=c->r[3]+0x00000001u; // 801E306C
  if (!crb(c,1)) { goto L_801E30A0; } // 801E3070
  cmpu(c,0,c->r[4],0x00000100u); // 801E3074
  if (!crb(c,0)) { goto L_801E30A0; } // 801E3078
  goto L_801E3084; // 801E307C
L_801E3080:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E3080
L_801E3084:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801E3084
  if (crb(c,2)) { IRQCHK(c); goto L_801E3080; } // 801E3088
  c->r[0]=divwu(c->r[28],c->r[4]); // 801E308C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E3090
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 801E3094
  if (!crb(c,2)) { goto L_801E30A0; } // 801E3098
  c->r[3]=c->r[3]+0x00000001u; // 801E309C
L_801E30A0:;
  cmpu(c,0,c->r[3],0x00000400u); // 801E30A0
  if (!crb(c,1)) { goto L_801E30AC; } // 801E30A4
  c->r[3]=0u+0x00000400u; // 801E30A8
L_801E30AC:;
  cmpu(c,0,c->r[3],c->r[29]); // 801E30AC
  if (crb(c,1)) { IRQCHK(c); goto L_801E3038; } // 801E30B0
  c->f[29]=c->f[28]; // 801E30B4
  {uint32_t ea=c->r[2]+0xFFFFC360u; c->f[30]=RF64(ea);} // 801E30B8
  {uint32_t ea=c->r[2]+0xFFFFC358u; c->f[31]=c->ps1[31]=RF32(ea);} // 801E30BC
  goto L_801E313C; // 801E30C0
L_801E30C4:;
  c->r[30]=c->r[30]+0x00000001u; // 801E30C4
  W32(c->r[1]+0x00000014u,c->r[28]); // 801E30C8
  c->f[29]=c->f[28]; // 801E30CC
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801E30D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E30D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E30D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801E30DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801E30E0
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 801E30E4
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[28]); // 801E30E8
  c->lr=0x801E30F0u; f_801E7834(c); // 801E30EC
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 801E30F0
  c->r[3]=divwu(c->r[31],c->r[4]); // 801E30F4
  cmpu(c,0,c->r[4],0x00000080u); // 801E30F8
  c->r[3]=c->r[3]+0x00000001u; // 801E30FC
  if (!crb(c,1)) { goto L_801E3130; } // 801E3100
  cmpu(c,0,c->r[4],0x00000100u); // 801E3104
  if (!crb(c,0)) { goto L_801E3130; } // 801E3108
  goto L_801E3114; // 801E310C
L_801E3110:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801E3110
L_801E3114:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801E3114
  if (crb(c,2)) { IRQCHK(c); goto L_801E3110; } // 801E3118
  c->r[0]=divwu(c->r[28],c->r[4]); // 801E311C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E3120
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 801E3124
  if (!crb(c,2)) { goto L_801E3130; } // 801E3128
  c->r[3]=c->r[3]+0x00000001u; // 801E312C
L_801E3130:;
  cmpu(c,0,c->r[3],0x00000400u); // 801E3130
  if (!crb(c,1)) { goto L_801E313C; } // 801E3134
  c->r[3]=0u+0x00000400u; // 801E3138
L_801E313C:;
  cmpu(c,0,c->r[3],c->r[29]); // 801E313C
  if (crb(c,0)) { IRQCHK(c); goto L_801E30C4; } // 801E3140
  c->f[1]=c->f[29]; // 801E3144
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801E3148
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801E314C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801E3150
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801E3154
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801E3158
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801E315C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801E3160
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801E3164
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E3168
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E316C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E3170
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E3174
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E3178
  c->lr=c->r[0]; // 801E317C
  c->r[1]=c->r[1]+0x00000070u; // 801E3180
  return; // 801E3184
}

// GXSetDispCopyYScale
void f_801E3188(Ctx* __restrict c) {
  trace_call(0x801E3188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3188
  c->r[0]=c->lr; // 801E318C
  {uint32_t ea=c->r[2]+0xFFFFC358u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3190
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3194
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801E3198
  c->lr=0x801E31A0u; f_801E7834(c); // 801E319C
  c->r[4]=0u+0xCC010000u; // 801E31A0
  c->r[0]=0u+0x00000061u; // 801E31A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E31A8
  c->r[0]=0u+0x0000004Eu; // 801E31AC
  c->r[5]=0u+0x00000000u; // 801E31B0
  c->r[7]=rotl(c->r[3],0)&0x000001FFu; // 801E31B4
  c->r[5]=(rotl(c->r[3],0)&0x000001FFu)|(c->r[5]&~0x000001FFu); // 801E31B8
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E31BC
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801E31C0
  c->r[0]=0u+0x00000000u; // 801E31C4
  W32(c->r[4]+0xFFFF8000u,c->r[5]); // 801E31C8
  c->r[3]=addc(c,~c->r[7],0x00000100u,1); // 801E31CC
  cmpu(c,0,c->r[7],0x00000080u); // 801E31D0
  W16(c->r[6]+0x00000002u,c->r[0]); // 801E31D4
  c->r[0]=c->r[7]+0xFFFFFF00u; // 801E31D8
  c->r[3]=c->r[3]|c->r[0]; // 801E31DC
  c->r[0]=R32(c->r[6]+0x0000023Cu); // 801E31E0
  c->r[0]=(rotl(c->r[3],11)&0x00000400u)|(c->r[0]&~0x00000400u); // 801E31E4
  W32(c->r[6]+0x0000023Cu,c->r[0]); // 801E31E8
  c->r[0]=R32(c->r[6]+0x00000234u); // 801E31EC
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 801E31F0
  c->r[4]=c->r[3]+0x00000001u; // 801E31F4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E31F8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E31FC
  c->r[3]=divwu(c->r[0],c->r[7]); // 801E3200
  c->r[3]=c->r[3]+0x00000001u; // 801E3204
  if (!crb(c,1)) { goto L_801E3238; } // 801E3208
  cmpu(c,0,c->r[7],0x00000100u); // 801E320C
  if (!crb(c,0)) { goto L_801E3238; } // 801E3210
  goto L_801E321C; // 801E3214
L_801E3218:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 801E3218
L_801E321C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 801E321C
  if (crb(c,2)) { IRQCHK(c); goto L_801E3218; } // 801E3220
  c->r[0]=divwu(c->r[4],c->r[7]); // 801E3224
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 801E3228
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 801E322C
  if (!crb(c,2)) { goto L_801E3238; } // 801E3230
  c->r[3]=c->r[3]+0x00000001u; // 801E3234
L_801E3238:;
  cmpu(c,0,c->r[3],0x00000400u); // 801E3238
  if (!crb(c,1)) { goto L_801E3244; } // 801E323C
  c->r[3]=0u+0x00000400u; // 801E3240
L_801E3244:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3244
  c->lr=c->r[0]; // 801E3248
  c->r[1]=c->r[1]+0x00000010u; // 801E324C
  return; // 801E3250
}

// GXSetCopyClear
void f_801E3254(Ctx* __restrict c) {
  trace_call(0x801E3254u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 801E3254
  c->r[7]=0u+0xCC010000u; // 801E3258
  c->r[8]=0u+0x00000061u; // 801E325C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801E3260
  c->r[10]=0u+0x00000000u; // 801E3264
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E3268
  c->r[10]=(rotl(c->r[6],0)&0x000000FFu)|(c->r[10]&~0x000000FFu); // 801E326C
  c->r[9]=0u+0x0000004Fu; // 801E3270
  c->r[10]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[10]&~0x0000FF00u); // 801E3274
  c->r[0]=R8(c->r[3]+0x00000002u); // 801E3278
  c->r[10]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 801E327C
  c->r[6]=0u+0x00000000u; // 801E3280
  W32(c->r[7]+0xFFFF8000u,c->r[10]); // 801E3284
  c->r[6]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801E3288
  c->r[3]=R8(c->r[3]+0x00000001u); // 801E328C
  c->r[0]=0u+0x00000050u; // 801E3290
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E3294
  c->r[5]=0u+0x00000000u; // 801E3298
  c->r[6]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801E329C
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E32A0
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E32A4
  c->r[0]=0u+0x00000051u; // 801E32A8
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801E32AC
  c->r[5]=(rotl(c->r[4],0)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 801E32B0
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801E32B4
  c->r[0]=0u+0x00000000u; // 801E32B8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E32BC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 801E32C0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E32C4
  return; // 801E32C8
}

// GXSetCopyFilter
void f_801E32CC(Ctx* __restrict c) {
  trace_call(0x801E32CCu);
  cmps(c,0,(int32_t)c->r[3],0); // 801E32CC
  if (crb(c,2)) { goto L_801E33C8; } // 801E32D0
  c->r[8]=R8(c->r[4]+0x00000000u); // 801E32D4
  c->r[0]=0u+0x00000000u; // 801E32D8
  c->r[10]=R8(c->r[4]+0x00000001u); // 801E32DC
  c->r[3]=0u+0x00000000u; // 801E32E0
  c->r[0]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 801E32E4
  c->r[7]=R8(c->r[4]+0x00000006u); // 801E32E8
  c->r[0]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 801E32EC
  c->r[8]=R8(c->r[4]+0x0000000Cu); // 801E32F0
  c->r[3]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[3]&~0x0000000Fu); // 801E32F4
  c->r[7]=0u+0x00000000u; // 801E32F8
  c->r[7]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 801E32FC
  c->r[10]=R8(c->r[4]+0x0000000Du); // 801E3300
  c->r[11]=R8(c->r[4]+0x00000007u); // 801E3304
  c->r[8]=0u+0x00000000u; // 801E3308
  c->r[7]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 801E330C
  c->r[10]=R8(c->r[4]+0x00000002u); // 801E3310
  c->r[9]=R8(c->r[4]+0x00000012u); // 801E3314
  c->r[3]=(rotl(c->r[11],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 801E3318
  c->r[0]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[0]&~0x00000F00u); // 801E331C
  c->r[10]=R8(c->r[4]+0x0000000Eu); // 801E3320
  c->r[8]=(rotl(c->r[9],0)&0x0000000Fu)|(c->r[8]&~0x0000000Fu); // 801E3324
  c->r[9]=R8(c->r[4]+0x00000013u); // 801E3328
  c->r[7]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 801E332C
  c->r[10]=R8(c->r[4]+0x00000003u); // 801E3330
  c->r[8]=(rotl(c->r[9],4)&0x000000F0u)|(c->r[8]&~0x000000F0u); // 801E3334
  c->r[9]=R8(c->r[4]+0x00000014u); // 801E3338
  c->r[0]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 801E333C
  c->r[10]=R8(c->r[4]+0x0000000Fu); // 801E3340
  c->r[8]=(rotl(c->r[9],8)&0x00000F00u)|(c->r[8]&~0x00000F00u); // 801E3344
  c->r[9]=R8(c->r[4]+0x00000015u); // 801E3348
  c->r[7]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 801E334C
  c->r[10]=R8(c->r[4]+0x00000004u); // 801E3350
  c->r[11]=R8(c->r[4]+0x00000008u); // 801E3354
  c->r[8]=(rotl(c->r[9],12)&0x0000F000u)|(c->r[8]&~0x0000F000u); // 801E3358
  c->r[0]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[0]&~0x000F0000u); // 801E335C
  c->r[10]=R8(c->r[4]+0x00000010u); // 801E3360
  c->r[9]=R8(c->r[4]+0x00000016u); // 801E3364
  c->r[3]=(rotl(c->r[11],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 801E3368
  c->r[11]=R8(c->r[4]+0x00000009u); // 801E336C
  c->r[7]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[7]&~0x000F0000u); // 801E3370
  c->r[10]=R8(c->r[4]+0x00000005u); // 801E3374
  c->r[8]=(rotl(c->r[9],16)&0x000F0000u)|(c->r[8]&~0x000F0000u); // 801E3378
  c->r[9]=R8(c->r[4]+0x00000011u); // 801E337C
  c->r[3]=(rotl(c->r[11],12)&0x0000F000u)|(c->r[3]&~0x0000F000u); // 801E3380
  c->r[11]=R8(c->r[4]+0x0000000Au); // 801E3384
  c->r[0]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 801E3388
  c->r[10]=R8(c->r[4]+0x0000000Bu); // 801E338C
  c->r[7]=(rotl(c->r[9],20)&0x00F00000u)|(c->r[7]&~0x00F00000u); // 801E3390
  c->r[4]=R8(c->r[4]+0x00000017u); // 801E3394
  c->r[9]=0u+0x00000001u; // 801E3398
  c->r[3]=(rotl(c->r[11],16)&0x000F0000u)|(c->r[3]&~0x000F0000u); // 801E339C
  c->r[3]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 801E33A0
  c->r[8]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 801E33A4
  c->r[0]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801E33A8
  c->r[10]=0u+0x00000002u; // 801E33AC
  c->r[9]=0u+0x00000003u; // 801E33B0
  c->r[4]=0u+0x00000004u; // 801E33B4
  c->r[3]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E33B8
  c->r[7]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E33BC
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E33C0
  goto L_801E33E8; // 801E33C4
L_801E33C8:;
  c->r[8]=0u+0x01660000u; // 801E33C8
  c->r[3]=0u+0x02660000u; // 801E33CC
  c->r[7]=0u+0x03660000u; // 801E33D0
  c->r[4]=0u+0x04660000u; // 801E33D4
  c->r[0]=c->r[8]+0x00006666u; // 801E33D8
  c->r[3]=c->r[3]+0x00006666u; // 801E33DC
  c->r[7]=c->r[7]+0x00006666u; // 801E33E0
  c->r[8]=c->r[4]+0x00006666u; // 801E33E4
L_801E33E8:;
  c->r[9]=0u+0xCC010000u; // 801E33E8
  c->r[10]=0u+0x00000061u; // 801E33EC
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 801E33F0
  cmps(c,0,(int32_t)c->r[5],0); // 801E33F4
  c->r[4]=0u+0x00000053u; // 801E33F8
  c->r[11]=0u+0x00000000u; // 801E33FC
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 801E3400
  c->r[0]=0u+0x00000054u; // 801E3404
  c->r[12]=0u+0x00000000u; // 801E3408
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 801E340C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 801E3410
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 801E3414
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 801E3418
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 801E341C
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 801E3420
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 801E3424
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 801E3428
  if (crb(c,2)) { goto L_801E346C; } // 801E342C
  c->r[4]=R8(c->r[6]+0x00000000u); // 801E3430
  c->r[0]=R8(c->r[6]+0x00000004u); // 801E3434
  c->r[11]=(rotl(c->r[4],0)&0x0000003Fu)|(c->r[11]&~0x0000003Fu); // 801E3438
  c->r[3]=R8(c->r[6]+0x00000001u); // 801E343C
  c->r[12]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 801E3440
  c->r[5]=R8(c->r[6]+0x00000002u); // 801E3444
  c->r[11]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[11]&~0x00000FC0u); // 801E3448
  c->r[3]=R8(c->r[6]+0x00000005u); // 801E344C
  c->r[4]=R8(c->r[6]+0x00000003u); // 801E3450
  c->r[11]=(rotl(c->r[5],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801E3454
  c->r[0]=R8(c->r[6]+0x00000006u); // 801E3458
  c->r[12]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[12]&~0x00000FC0u); // 801E345C
  c->r[11]=(rotl(c->r[4],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801E3460
  c->r[12]=(rotl(c->r[0],12)&0x0003F000u)|(c->r[12]&~0x0003F000u); // 801E3464
  goto L_801E3488; // 801E3468
L_801E346C:;
  c->r[3]=0u+0x00000015u; // 801E346C
  c->r[11]=rotl(c->r[11],0)&0xFFFFF000u; // 801E3470
  c->r[12]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 801E3474
  c->r[0]=0u+0x00000016u; // 801E3478
  c->r[11]=(rotl(c->r[3],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 801E347C
  c->r[11]=(rotl(c->r[0],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 801E3480
  c->r[12]=rotl(c->r[12],0)&0xFFFC003Fu; // 801E3484
L_801E3488:;
  c->r[4]=0u+0xCC010000u; // 801E3488
  c->r[5]=0u+0x00000061u; // 801E348C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E3490
  c->r[0]=0u+0x00000000u; // 801E3494
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3498
  W32(c->r[4]+0xFFFF8000u,c->r[11]); // 801E349C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E34A0
  W32(c->r[4]+0xFFFF8000u,c->r[12]); // 801E34A4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E34A8
  return; // 801E34AC
}

// GXSetDispCopyGamma
void f_801E34B0(Ctx* __restrict c) {
  trace_call(0x801E34B0u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E34B0
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 801E34B4
  c->r[0]=(rotl(c->r[3],7)&0x00000180u)|(c->r[0]&~0x00000180u); // 801E34B8
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 801E34BC
  return; // 801E34C0
}

// GXCopyDisp
void f_801E34C4(Ctx* __restrict c) {
  trace_call(0x801E34C4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801E34C4
  if (crb(c,2)) { goto L_801E34F8; } // 801E34C8
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E34CC
  c->r[5]=0u+0xCC010000u; // 801E34D0
  c->r[0]=0u+0x00000061u; // 801E34D4
  c->r[6]=R32(c->r[7]+0x00000228u); // 801E34D8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E34DC
  c->r[6]=c->r[6]|0x0000000Fu; // 801E34E0
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801E34E4
  c->r[6]=R32(c->r[7]+0x00000220u); // 801E34E8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E34EC
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 801E34F0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E34F4
L_801E34F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E34F8
  c->r[12]=0u+0x00000000u; // 801E34FC
  if (!crb(c,2)) { goto L_801E351C; } // 801E3500
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E3504
  c->r[0]=R32(c->r[5]+0x0000022Cu); // 801E3508
  c->r[10]=c->r[5]+0x0000022Cu; // 801E350C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801E3510
  cmpu(c,0,c->r[0],0x00000003u); // 801E3514
  if (!crb(c,2)) { goto L_801E354C; } // 801E3518
L_801E351C:;
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E351C
  c->r[7]=R32(c->r[5]+0x0000022Cu); // 801E3520
  c->r[10]=c->r[5]+0x0000022Cu; // 801E3524
  c->r[0]=rotl(c->r[7],26)&0x00000001u; // 801E3528
  cmpu(c,0,c->r[0],0x00000001u); // 801E352C
  if (!crb(c,2)) { goto L_801E354C; } // 801E3530
  c->r[6]=0u+0xCC010000u; // 801E3534
  c->r[0]=0u+0x00000061u; // 801E3538
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E353C
  c->r[0]=rotl(c->r[7],0)&0xFFFFFFBFu; // 801E3540
  c->r[12]=0u+0x00000001u; // 801E3544
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E3548
L_801E354C:;
  c->r[8]=0u+0xCC010000u; // 801E354C
  c->r[9]=0u+0x00000061u; // 801E3550
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E3554
  c->r[6]=0u+0x00000000u; // 801E3558
  c->r[11]=R32(c->r[2]+0xFFFFC330u); // 801E355C
  c->r[6]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 801E3560
  c->r[3]=0u+0x0000004Bu; // 801E3564
  c->r[0]=0u+0x00000052u; // 801E3568
  c->r[7]=R32(c->r[11]+0x00000230u); // 801E356C
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E3570
  cmps(c,0,(int32_t)c->r[4],0); // 801E3574
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 801E3578
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E357C
  c->r[3]=R32(c->r[11]+0x00000234u); // 801E3580
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 801E3584
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E3588
  c->r[3]=R32(c->r[11]+0x00000238u); // 801E358C
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 801E3590
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E3594
  W32(c->r[8]+0xFFFF8000u,c->r[6]); // 801E3598
  c->r[3]=R32(c->r[11]+0x0000023Cu); // 801E359C
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 801E35A0
  c->r[3]=c->r[3]|0x00004000u; // 801E35A4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E35A8
  W32(c->r[11]+0x0000023Cu,c->r[3]); // 801E35AC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E35B0
  c->r[0]=R32(c->r[11]+0x0000023Cu); // 801E35B4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801E35B8
  if (crb(c,2)) { goto L_801E35D8; } // 801E35BC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E35C0
  c->r[0]=R32(c->r[11]+0x00000228u); // 801E35C4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801E35C8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E35CC
  c->r[0]=R32(c->r[11]+0x00000220u); // 801E35D0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 801E35D4
L_801E35D8:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E35D8
  if (crb(c,2)) { goto L_801E35F4; } // 801E35DC
  c->r[3]=0u+0xCC010000u; // 801E35E0
  c->r[0]=0u+0x00000061u; // 801E35E4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E35E8
  c->r[0]=R32(c->r[10]+0x00000000u); // 801E35EC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E35F0
L_801E35F4:;
  c->r[0]=0u+0x00000000u; // 801E35F4
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E35F8
  return; // 801E35FC
}

// GXCopyTex
void f_801E3600(Ctx* __restrict c) {
  trace_call(0x801E3600u);
  cmps(c,0,(int32_t)c->r[4],0); // 801E3600
  if (crb(c,2)) { goto L_801E3634; } // 801E3604
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E3608
  c->r[5]=0u+0xCC010000u; // 801E360C
  c->r[0]=0u+0x00000061u; // 801E3610
  c->r[6]=R32(c->r[7]+0x00000228u); // 801E3614
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E3618
  c->r[6]=c->r[6]|0x0000000Fu; // 801E361C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801E3620
  c->r[6]=R32(c->r[7]+0x00000220u); // 801E3624
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E3628
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 801E362C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E3630
L_801E3634:;
  c->r[9]=R32(c->r[2]+0xFFFFC330u); // 801E3634
  c->r[11]=0u+0x00000000u; // 801E3638
  c->r[0]=R8(c->r[9]+0x00000250u); // 801E363C
  c->r[6]=R32(c->r[9]+0x0000022Cu); // 801E3640
  cmps(c,0,(int32_t)c->r[0],0); // 801E3644
  if (crb(c,2)) { goto L_801E3664; } // 801E3648
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 801E364C
  cmpu(c,0,c->r[0],0x00000003u); // 801E3650
  if (crb(c,2)) { goto L_801E3664; } // 801E3654
  c->r[0]=0u+0x00000003u; // 801E3658
  c->r[11]=0u+0x00000001u; // 801E365C
  c->r[6]=(rotl(c->r[0],0)&0x00000007u)|(c->r[6]&~0x00000007u); // 801E3660
L_801E3664:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E3664
  if (!crb(c,2)) { goto L_801E3678; } // 801E3668
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 801E366C
  cmpu(c,0,c->r[0],0x00000003u); // 801E3670
  if (!crb(c,2)) { goto L_801E368C; } // 801E3674
L_801E3678:;
  c->r[0]=rotl(c->r[6],26)&0x00000001u; // 801E3678
  cmpu(c,0,c->r[0],0x00000001u); // 801E367C
  if (!crb(c,2)) { goto L_801E368C; } // 801E3680
  c->r[11]=0u+0x00000001u; // 801E3684
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFBFu; // 801E3688
L_801E368C:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E368C
  if (crb(c,2)) { goto L_801E36A4; } // 801E3690
  c->r[5]=0u+0xCC010000u; // 801E3694
  c->r[0]=0u+0x00000061u; // 801E3698
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E369C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801E36A0
L_801E36A4:;
  c->r[7]=0u+0xCC010000u; // 801E36A4
  c->r[8]=0u+0x00000061u; // 801E36A8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E36AC
  c->r[5]=0u+0x00000000u; // 801E36B0
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E36B4
  c->r[5]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 801E36B8
  c->r[3]=0u+0x0000004Bu; // 801E36BC
  c->r[0]=0u+0x00000052u; // 801E36C0
  c->r[6]=R32(c->r[10]+0x00000240u); // 801E36C4
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801E36C8
  cmps(c,0,(int32_t)c->r[4],0); // 801E36CC
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801E36D0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E36D4
  c->r[3]=R32(c->r[10]+0x00000244u); // 801E36D8
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801E36DC
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E36E0
  c->r[3]=R32(c->r[10]+0x00000248u); // 801E36E4
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801E36E8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E36EC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 801E36F0
  c->r[3]=R32(c->r[10]+0x0000024Cu); // 801E36F4
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 801E36F8
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 801E36FC
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801E3700
  W32(c->r[10]+0x0000024Cu,c->r[3]); // 801E3704
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E3708
  c->r[0]=R32(c->r[10]+0x0000024Cu); // 801E370C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801E3710
  if (crb(c,2)) { goto L_801E3730; } // 801E3714
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E3718
  c->r[0]=R32(c->r[10]+0x00000228u); // 801E371C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801E3720
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 801E3724
  c->r[0]=R32(c->r[10]+0x00000220u); // 801E3728
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801E372C
L_801E3730:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E3730
  if (crb(c,2)) { goto L_801E374C; } // 801E3734
  c->r[3]=0u+0xCC010000u; // 801E3738
  c->r[0]=0u+0x00000061u; // 801E373C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E3740
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 801E3744
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E3748
L_801E374C:;
  c->r[0]=0u+0x00000000u; // 801E374C
  W16(c->r[9]+0x00000002u,c->r[0]); // 801E3750
  return; // 801E3754
}

// GXClearBoundingBox
void f_801E3758(Ctx* __restrict c) {
  trace_call(0x801E3758u);
  c->r[5]=0u+0xCC010000u; // 801E3758
  c->r[6]=0u+0x00000061u; // 801E375C
  c->r[3]=0u+0x55000000u; // 801E3760
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E3764
  c->r[0]=c->r[3]+0x000003FFu; // 801E3768
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E376C
  c->r[3]=0u+0x56000000u; // 801E3770
  c->r[4]=c->r[3]+0x000003FFu; // 801E3774
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3778
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E377C
  c->r[0]=0u+0x00000000u; // 801E3780
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E3784
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E3788
  return; // 801E378C
}

// GXInitLightAttn
void f_801E3790(Ctx* __restrict c) {
  trace_call(0x801E3790u);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801E3790
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 801E3794
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 801E3798
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 801E379C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 801E37A0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[6]);} // 801E37A4
  return; // 801E37A8
}

// GXInitLightSpot
void f_801E37AC(Ctx* __restrict c) {
  trace_call(0x801E37ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E37AC
  c->r[0]=c->lr; // 801E37B0
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E37B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E37B8
  fcmp(c,0,c->f[1],c->f[0]); // 801E37BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E37C0
  c->r[31]=c->r[4]|c->r[4]; // 801E37C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E37C8
  c->r[30]=c->r[3]|c->r[3]; // 801E37CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801E37D0
  if (crb(c,2)) { goto L_801E37E4; } // 801E37D4
  {uint32_t ea=c->r[2]+0xFFFFC36Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E37D8
  fcmp(c,0,c->f[1],c->f[0]); // 801E37DC
  if (!crb(c,1)) { goto L_801E37E8; } // 801E37E0
L_801E37E4:;
  c->r[31]=0u+0x00000000u; // 801E37E4
L_801E37E8:;
  {uint32_t ea=c->r[2]+0xFFFFC370u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E37E8
  {uint32_t ea=c->r[2]+0xFFFFC374u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E37EC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801E37F0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E37F4
  c->lr=0x801E37FCu; f_801F6E10(c); // 801E37F8
  cmpu(c,0,c->r[31],0x00000006u); // 801E37FC
  c->f[5]=c->ps1[5]=S(c->f[1]); // 801E3800
  if (crb(c,1)) { goto L_801E3904; } // 801E3804
  c->r[3]=0u+0x804B0000u; // 801E3808
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801E380C
  c->r[3]=c->r[3]+0x00007D18u; // 801E3810
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E3814
  c->ctr=c->r[3]; // 801E3818
  if (true) { switch (c->ctr) { case 0x801E3820u: goto L_801E3820; case 0x801E3834u: goto L_801E3834; case 0x801E3850u: goto L_801E3850; case 0x801E386Cu: goto L_801E386C; case 0x801E3898u: goto L_801E3898; case 0x801E38C8u: goto L_801E38C8; case 0x801E3904u: goto L_801E3904; default: break; } dispatch(c,c->ctr); return; } // 801E381C
L_801E3820:;
  {uint32_t ea=c->r[2]+0xFFFFC378u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3820
  {uint32_t ea=c->r[2]+0xFFFFC37Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3824
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[5]); // 801E3828
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E382C
  goto L_801E3910; // 801E3830
L_801E3834:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E3834
  c->f[0]=-c->f[5]; // 801E3838
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E383C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 801E3840
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801E3844
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 801E3848
  goto L_801E3910; // 801E384C
L_801E3850:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E3850
  c->f[0]=-c->f[5]; // 801E3854
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E3858
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 801E385C
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[1]); // 801E3860
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 801E3864
  goto L_801E3910; // 801E3868
L_801E386C:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E386C
  {uint32_t ea=c->r[2]+0xFFFFC384u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3870
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[5]); // 801E3874
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[1]); // 801E3878
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801E387C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801E3880
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801E3884
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 801E3888
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801E388C
  c->f[6]=-c->f[2]; // 801E3890
  goto L_801E3910; // 801E3894
L_801E3898:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E3898
  {uint32_t ea=c->r[2]+0xFFFFC38Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E389C
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 801E38A0
  {uint32_t ea=c->r[2]+0xFFFFC388u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E38A4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 801E38A8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801E38AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E38B0
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[3]); // 801E38B4
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[1]); // 801E38B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801E38BC
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[5]); // 801E38C0
  goto L_801E3910; // 801E38C4
L_801E38C8:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E38C8
  {uint32_t ea=c->r[2]+0xFFFFC384u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E38CC
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[5]); // 801E38D0
  {uint32_t ea=c->r[2]+0xFFFFC38Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E38D4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 801E38D8
  {uint32_t ea=c->r[2]+0xFFFFC390u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E38DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[5]); // 801E38E0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801E38E4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 801E38E8
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 801E38EC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801E38F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801E38F4
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[3]); // 801E38F8
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[2]); // 801E38FC
  goto L_801E3910; // 801E3900
L_801E3904:;
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E3904
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E3908
  c->f[6]=c->f[1]; // 801E390C
L_801E3910:;
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 801E3910
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 801E3914
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 801E3918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E391C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E3920
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3924
  c->lr=c->r[0]; // 801E3928
  c->r[1]=c->r[1]+0x00000010u; // 801E392C
  return; // 801E3930
}

// GXInitLightDistAttn
void f_801E3934(Ctx* __restrict c) {
  trace_call(0x801E3934u);
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3934
  fcmp(c,0,c->f[1],c->f[0]); // 801E3938
  if (!crb(c,0)) { goto L_801E3944; } // 801E393C
  c->r[4]=0u+0x00000000u; // 801E3940
L_801E3944:;
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3944
  fcmp(c,0,c->f[2],c->f[0]); // 801E3948
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801E394C
  if (crb(c,2)) { goto L_801E3964; } // 801E3950
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3954
  fcmp(c,0,c->f[2],c->f[0]); // 801E3958
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801E395C
  if (!crb(c,2)) { goto L_801E3968; } // 801E3960
L_801E3964:;
  c->r[4]=0u+0x00000000u; // 801E3964
L_801E3968:;
  cmps(c,0,(int32_t)c->r[4],2); // 801E3968
  if (crb(c,2)) { goto L_801E39A8; } // 801E396C
  if (!crb(c,0)) { goto L_801E3984; } // 801E3970
  cmps(c,0,(int32_t)c->r[4],0); // 801E3974
  if (crb(c,2)) { goto L_801E39E8; } // 801E3978
  if (!crb(c,0)) { goto L_801E3990; } // 801E397C
  goto L_801E39E8; // 801E3980
L_801E3984:;
  cmps(c,0,(int32_t)c->r[4],4); // 801E3984
  if (!crb(c,0)) { goto L_801E39E8; } // 801E3988
  goto L_801E39CC; // 801E398C
L_801E3990:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E3990
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 801E3994
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E3998
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[2]); // 801E399C
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 801E39A0
  goto L_801E39F4; // 801E39A4
L_801E39A8:;
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E39A8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801E39AC
  {uint32_t ea=c->r[2]+0xFFFFC394u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E39B0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 801E39B4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[3]); // 801E39B8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 801E39BC
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[3]); // 801E39C0
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 801E39C4
  goto L_801E39F4; // 801E39C8
L_801E39CC:;
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 801E39CC
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E39D0
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E39D4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 801E39D8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801E39DC
  c->f[4]=c->ps1[4]=S(c->f[2]/c->f[0]); // 801E39E0
  goto L_801E39F4; // 801E39E4
L_801E39E8:;
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E39E8
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E39EC
  c->f[4]=c->f[3]; // 801E39F0
L_801E39F4:;
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 801E39F4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 801E39F8
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 801E39FC
  return; // 801E3A00
}

// fn_801E3A04
void f_801E3A04(Ctx* __restrict c) {
  trace_call(0x801E3A04u);
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801E3A04
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 801E3A08
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 801E3A0C
  return; // 801E3A10
}

// GXInitLightDir
void f_801E3A14(Ctx* __restrict c) {
  trace_call(0x801E3A14u);
  c->f[4]=-c->f[1]; // 801E3A14
  c->f[1]=-c->f[2]; // 801E3A18
  c->f[0]=-c->f[3]; // 801E3A1C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[4]);} // 801E3A20
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 801E3A24
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E3A28
  return; // 801E3A2C
}

// GXInitSpecularDir
void f_801E3A30(Ctx* __restrict c) {
  trace_call(0x801E3A30u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3A30
  c->r[0]=c->lr; // 801E3A34
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E3A38
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801E3A3C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801E3A40
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801E3A44
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801E3A48
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801E3A4C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801E3A50
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801E3A54
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801E3A58
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 801E3A5C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 801E3A60
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[26]);} // 801E3A64
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,26,ea,0,0);} // 801E3A68
  c->f[31]=-c->f[1]; // 801E3A6C
  c->f[30]=-c->f[2]; // 801E3A70
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E3A74
  c->f[6]=-c->f[3]; // 801E3A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3A7C
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[31]); // 801E3A80
  c->f[26]=c->f[1]; // 801E3A84
  c->f[29]=c->ps1[29]=S(c->f[4]+c->f[6]); // 801E3A88
  {uint32_t ea=c->r[2]+0xFFFFC368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3A8C
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[30]); // 801E3A90
  c->r[31]=c->r[3]|c->r[3]; // 801E3A94
  c->f[27]=c->f[2]; // 801E3A98
  c->f[6]=c->ps1[6]=S(c->f[29]*c->f[29]); // 801E3A9C
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[4]); // 801E3AA0
  c->f[28]=c->f[3]; // 801E3AA4
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 801E3AA8
  fcmp(c,0,c->f[0],c->f[1]); // 801E3AAC
  if (crb(c,2)) { goto L_801E3AC4; } // 801E3AB0
  c->lr=0x801E3AB8u; f_801F75D8(c); // 801E3AB4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801E3AB8
  {uint32_t ea=c->r[2]+0xFFFFC380u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3ABC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 801E3AC0
L_801E3AC4:;
  {uint32_t ea=c->r[2]+0xFFFFC398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E3AC4
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[1]); // 801E3AC8
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[1]); // 801E3ACC
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[1]); // 801E3AD0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[26]); // 801E3AD4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[5]);} // 801E3AD8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[27]); // 801E3ADC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 801E3AE0
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[4]);} // 801E3AE4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 801E3AE8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 801E3AEC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 801E3AF0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801E3AF4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801E3AF8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801E3AFC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801E3B00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801E3B04
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801E3B08
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801E3B0C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801E3B10
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801E3B14
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 801E3B18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 801E3B1C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,26,ea,0,0);} // 801E3B20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[26]=RF64(ea);} // 801E3B24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3B28
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E3B2C
  c->lr=c->r[0]; // 801E3B30
  c->r[1]=c->r[1]+0x00000070u; // 801E3B34
  return; // 801E3B38
}

// fn_801E3B3C
void f_801E3B3C(Ctx* __restrict c) {
  trace_call(0x801E3B3Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E3B3C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E3B40
  return; // 801E3B44
}

// GXLoadLightObjImm
void f_801E3B48(Ctx* __restrict c) {
  trace_call(0x801E3B48u);
  c->r[0]=cntlz(c->r[4]); // 801E3B48
  c->r[4]=0u+0xCC010000u; // 801E3B4C
  c->r[5]=addc(c,~c->r[0],0x0000001Fu,1); // 801E3B50
  c->r[0]=0u+0x00000010u; // 801E3B54
  c->r[5]=rotl(c->r[5],4)&0x00000070u; // 801E3B58
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E3B5C
  c->r[0]=c->r[5]+0x00000600u; // 801E3B60
  c->r[0]=c->r[0]|0x000F0000u; // 801E3B64
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E3B68
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E3B6C
  c->r[6]=c->r[6]^c->r[6]; // 801E3B70
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,5,ea,0,0);} // 801E3B74
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,4,ea,0,0);} // 801E3B78
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,3,ea,0,0);} // 801E3B7C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,2,ea,0,0);} // 801E3B80
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,1,ea,0,0);} // 801E3B84
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,0,ea,0,0);} // 801E3B88
  {uint32_t ea=c->r[4]+0xFFFF8000u; W32(ea,c->r[6]); c->r[4]=ea;} // 801E3B8C
  W32(c->r[4]+0x00000000u,c->r[6]); // 801E3B90
  W32(c->r[4]+0x00000000u,c->r[6]); // 801E3B94
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E3B98
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801E3B9C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 801E3BA0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801E3BA4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E3BA8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E3BAC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801E3BB0
  c->r[0]=0u+0x00000001u; // 801E3BB4
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3BB8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E3BBC
  return; // 801E3BC0
}

// GXSetChanAmbColor
void f_801E3BC4(Ctx* __restrict c) {
  trace_call(0x801E3BC4u);
  cmps(c,0,(int32_t)c->r[3],3); // 801E3BC4
  if (crb(c,2)) { goto L_801E3C40; } // 801E3BC8
  if (!crb(c,0)) { goto L_801E3BE8; } // 801E3BCC
  cmps(c,0,(int32_t)c->r[3],1); // 801E3BD0
  if (crb(c,2)) { goto L_801E3C10; } // 801E3BD4
  if (!crb(c,0)) { goto L_801E3C28; } // 801E3BD8
  cmps(c,0,(int32_t)c->r[3],0); // 801E3BDC
  if (!crb(c,0)) { goto L_801E3BF8; } // 801E3BE0
  return; // 801E3BE4
L_801E3BE8:;
  cmps(c,0,(int32_t)c->r[3],5); // 801E3BE8
  if (crb(c,2)) { goto L_801E3C64; } // 801E3BEC
  if (!crb(c,0)) return; // 801E3BF0
  goto L_801E3C58; // 801E3BF4
L_801E3BF8:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3BF8
  c->r[8]=0u+0x00000000u; // 801E3BFC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E3C00
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801E3C04
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801E3C08
  goto L_801E3C74; // 801E3C0C
L_801E3C10:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3C10
  c->r[8]=0u+0x00000001u; // 801E3C14
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E3C18
  c->r[7]=R32(c->r[3]+0x000000ACu); // 801E3C1C
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801E3C20
  goto L_801E3C74; // 801E3C24
L_801E3C28:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3C28
  c->r[8]=0u+0x00000000u; // 801E3C2C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3C30
  c->r[7]=R32(c->r[3]+0x000000A8u); // 801E3C34
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E3C38
  goto L_801E3C74; // 801E3C3C
L_801E3C40:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3C40
  c->r[8]=0u+0x00000001u; // 801E3C44
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3C48
  c->r[7]=R32(c->r[3]+0x000000ACu); // 801E3C4C
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E3C50
  goto L_801E3C74; // 801E3C54
L_801E3C58:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801E3C58
  c->r[8]=0u+0x00000000u; // 801E3C5C
  goto L_801E3C74; // 801E3C60
L_801E3C64:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801E3C64
  c->r[8]=0u+0x00000001u; // 801E3C68
  goto L_801E3C74; // 801E3C6C
  return; // 801E3C70
L_801E3C74:;
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E3C74
  c->r[3]=0u+0x00000100u; // 801E3C78
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801E3C7C
  c->r[5]=R32(c->r[6]+0x000005FCu); // 801E3C80
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 801E3C84
  c->r[3]=c->r[6]+c->r[0]; // 801E3C88
  c->r[0]=c->r[5]|c->r[4]; // 801E3C8C
  W32(c->r[6]+0x000005FCu,c->r[0]); // 801E3C90
  W32(c->r[3]+0x000000A8u,c->r[7]); // 801E3C94
  return; // 801E3C98
}

// GXSetChanMatColor
void f_801E3C9C(Ctx* __restrict c) {
  trace_call(0x801E3C9Cu);
  cmps(c,0,(int32_t)c->r[3],3); // 801E3C9C
  if (crb(c,2)) { goto L_801E3D18; } // 801E3CA0
  if (!crb(c,0)) { goto L_801E3CC0; } // 801E3CA4
  cmps(c,0,(int32_t)c->r[3],1); // 801E3CA8
  if (crb(c,2)) { goto L_801E3CE8; } // 801E3CAC
  if (!crb(c,0)) { goto L_801E3D00; } // 801E3CB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E3CB4
  if (!crb(c,0)) { goto L_801E3CD0; } // 801E3CB8
  return; // 801E3CBC
L_801E3CC0:;
  cmps(c,0,(int32_t)c->r[3],5); // 801E3CC0
  if (crb(c,2)) { goto L_801E3D3C; } // 801E3CC4
  if (!crb(c,0)) return; // 801E3CC8
  goto L_801E3D30; // 801E3CCC
L_801E3CD0:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3CD0
  c->r[8]=0u+0x00000000u; // 801E3CD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E3CD8
  c->r[7]=R32(c->r[3]+0x000000B0u); // 801E3CDC
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801E3CE0
  goto L_801E3D4C; // 801E3CE4
L_801E3CE8:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3CE8
  c->r[8]=0u+0x00000001u; // 801E3CEC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E3CF0
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801E3CF4
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 801E3CF8
  goto L_801E3D4C; // 801E3CFC
L_801E3D00:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3D00
  c->r[8]=0u+0x00000000u; // 801E3D04
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3D08
  c->r[7]=R32(c->r[3]+0x000000B0u); // 801E3D0C
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E3D10
  goto L_801E3D4C; // 801E3D14
L_801E3D18:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E3D18
  c->r[8]=0u+0x00000001u; // 801E3D1C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3D20
  c->r[7]=R32(c->r[3]+0x000000B4u); // 801E3D24
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E3D28
  goto L_801E3D4C; // 801E3D2C
L_801E3D30:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801E3D30
  c->r[8]=0u+0x00000000u; // 801E3D34
  goto L_801E3D4C; // 801E3D38
L_801E3D3C:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 801E3D3C
  c->r[8]=0u+0x00000001u; // 801E3D40
  goto L_801E3D4C; // 801E3D44
  return; // 801E3D48
L_801E3D4C:;
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E3D4C
  c->r[3]=0u+0x00000400u; // 801E3D50
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801E3D54
  c->r[5]=R32(c->r[6]+0x000005FCu); // 801E3D58
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 801E3D5C
  c->r[3]=c->r[6]+c->r[0]; // 801E3D60
  c->r[0]=c->r[5]|c->r[4]; // 801E3D64
  W32(c->r[6]+0x000005FCu,c->r[0]); // 801E3D68
  W32(c->r[3]+0x000000B0u,c->r[7]); // 801E3D6C
  return; // 801E3D70
}

// GXSetNumChans
void f_801E3D74(Ctx* __restrict c) {
  trace_call(0x801E3D74u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E3D74
  c->r[0]=R32(c->r[4]+0x00000254u); // 801E3D78
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 801E3D7C
  W32(c->r[4]+0x00000254u,c->r[0]); // 801E3D80
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E3D84
  c->r[0]=c->r[0]|0x01000000u; // 801E3D88
  c->r[0]=c->r[0]|0x00000004u; // 801E3D8C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E3D90
  return; // 801E3D94
}

// GXSetChanCtrl
void f_801E3D98(Ctx* __restrict c) {
  trace_call(0x801E3D98u);
  cmps(c,0,(int32_t)c->r[9],0); // 801E3D98
  c->r[10]=0u+0x00000000u; // 801E3D9C
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 801E3DA0
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 801E3DA4
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 801E3DA8
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 801E3DAC
  if (!crb(c,2)) { goto L_801E3DB8; } // 801E3DB0
  c->r[8]=0u+0x00000000u; // 801E3DB4
L_801E3DB8:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 801E3DB8
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 801E3DBC
  c->r[0]=0u-c->r[9]; // 801E3DC0
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 801E3DC4
  c->r[4]=c->r[5]|c->r[4]; // 801E3DC8
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E3DCC
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 801E3DD0
  c->r[0]=c->r[0]|c->r[9]; // 801E3DD4
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 801E3DD8
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801E3DDC
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 801E3DE0
  c->r[0]=0u+0x00001000u; // 801E3DE4
  c->r[4]=c->r[5]+c->r[4]; // 801E3DE8
  cmps(c,0,(int32_t)c->r[3],4); // 801E3DEC
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 801E3DF0
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 801E3DF4
  W32(c->r[4]+0x000000B8u,c->r[10]); // 801E3DF8
  c->r[4]=R32(c->r[5]+0x000005FCu); // 801E3DFC
  c->r[0]=c->r[4]|c->r[0]; // 801E3E00
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E3E04
  if (!crb(c,2)) { goto L_801E3E20; } // 801E3E08
  W32(c->r[5]+0x000000C0u,c->r[10]); // 801E3E0C
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E3E10
  c->r[0]=c->r[0]|0x00005000u; // 801E3E14
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E3E18
  return; // 801E3E1C
L_801E3E20:;
  cmps(c,0,(int32_t)c->r[3],5); // 801E3E20
  if (!crb(c,2)) return; // 801E3E24
  W32(c->r[5]+0x000000C4u,c->r[10]); // 801E3E28
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E3E2C
  c->r[0]=c->r[0]|0x0000A000u; // 801E3E30
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E3E34
  return; // 801E3E38
}

// GXGetTexBufferSize
void f_801E3E3C(Ctx* __restrict c) {
  trace_call(0x801E3E3Cu);
  cmpu(c,0,c->r[5],0x0000003Cu); // 801E3E3C
  if (crb(c,1)) { goto L_801E3E80; } // 801E3E40
  c->r[8]=0u+0x804B0000u; // 801E3E44
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E3E48
  c->r[8]=c->r[8]+0x00007D38u; // 801E3E4C
  c->r[8]=R32(c->r[8]+c->r[0]); // 801E3E50
  c->ctr=c->r[8]; // 801E3E54
  if (true) { switch (c->ctr) { case 0x801E3E5Cu: goto L_801E3E5C; case 0x801E3E68u: goto L_801E3E68; case 0x801E3E74u: goto L_801E3E74; case 0x801E3E80u: goto L_801E3E80; default: break; } dispatch(c,c->ctr); return; } // 801E3E58
L_801E3E5C:;
  c->r[10]=0u+0x00000003u; // 801E3E5C
  c->r[0]=0u+0x00000003u; // 801E3E60
  goto L_801E3E88; // 801E3E64
L_801E3E68:;
  c->r[10]=0u+0x00000003u; // 801E3E68
  c->r[0]=0u+0x00000002u; // 801E3E6C
  goto L_801E3E88; // 801E3E70
L_801E3E74:;
  c->r[10]=0u+0x00000002u; // 801E3E74
  c->r[0]=0u+0x00000002u; // 801E3E78
  goto L_801E3E88; // 801E3E7C
L_801E3E80:;
  c->r[0]=0u+0x00000000u; // 801E3E80
  c->r[10]=0u+0x00000000u; // 801E3E84
L_801E3E88:;
  cmpu(c,0,c->r[5],0x00000006u); // 801E3E88
  if (crb(c,2)) { goto L_801E3E98; } // 801E3E8C
  cmpu(c,0,c->r[5],0x00000016u); // 801E3E90
  if (!crb(c,2)) { goto L_801E3EA0; } // 801E3E94
L_801E3E98:;
  c->r[11]=0u+0x00000040u; // 801E3E98
  goto L_801E3EA4; // 801E3E9C
L_801E3EA0:;
  c->r[11]=0u+0x00000020u; // 801E3EA0
L_801E3EA4:;
  cmpu(c,0,c->r[6],0x00000001u); // 801E3EA4
  if (!crb(c,2)) { goto L_801E3F2C; } // 801E3EA8
  c->r[5]=0u+0x00000001u; // 801E3EAC
  c->r[12]=0u+0x00000000u; // 801E3EB0
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 801E3EB4
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801E3EB8
  c->ctr=c->r[7]; // 801E3EBC
  cmpu(c,0,c->r[7],0x00000000u); // 801E3EC0
  if (!crb(c,1)) { goto L_801E3F58; } // 801E3EC4
L_801E3EC8:;
  c->r[6]=c->r[3]+c->r[8]; // 801E3EC8
  c->r[5]=c->r[4]+c->r[9]; // 801E3ECC
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801E3ED0
  cmpu(c,0,c->r[3],0x00000001u); // 801E3ED4
  c->r[6]=sraw(c,c->r[6],(c->r[10])&63); // 801E3ED8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801E3EDC
  c->r[6]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 801E3EE0
  c->r[5]=sraw(c,c->r[5],(c->r[0])&63); // 801E3EE4
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 801E3EE8
  c->r[12]=c->r[12]+c->r[5]; // 801E3EEC
  if (!crb(c,2)) { goto L_801E3EFC; } // 801E3EF0
  cmpu(c,0,c->r[4],0x00000001u); // 801E3EF4
  if (crb(c,2)) { goto L_801E3F58; } // 801E3EF8
L_801E3EFC:;
  cmpu(c,0,c->r[3],0x00000001u); // 801E3EFC
  c->r[5]=0u+0x00000001u; // 801E3F00
  if (!crb(c,1)) { goto L_801E3F0C; } // 801E3F04
  c->r[5]=rotl(c->r[3],31)&0x00007FFFu; // 801E3F08
L_801E3F0C:;
  cmpu(c,0,c->r[4],0x00000001u); // 801E3F0C
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801E3F10
  c->r[5]=0u+0x00000001u; // 801E3F14
  if (!crb(c,1)) { goto L_801E3F20; } // 801E3F18
  c->r[5]=rotl(c->r[4],31)&0x00007FFFu; // 801E3F1C
L_801E3F20:;
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; // 801E3F20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3EC8; } // 801E3F24
  goto L_801E3F58; // 801E3F28
L_801E3F2C:;
  c->r[6]=0u+0x00000001u; // 801E3F2C
  c->r[5]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 801E3F30
  c->r[5]=c->r[3]+c->r[5]; // 801E3F34
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E3F38
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801E3F3C
  c->r[5]=sraw(c,c->r[5],(c->r[10])&63); // 801E3F40
  c->r[3]=c->r[4]+c->r[3]; // 801E3F44
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 801E3F48
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E3F4C
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 801E3F50
  c->r[12]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801E3F54
L_801E3F58:;
  c->r[3]=c->r[12]|c->r[12]; // 801E3F58
  return; // 801E3F5C
}

// __GetImageTileCount
void f_801E3F60(Ctx* __restrict c) {
  trace_call(0x801E3F60u);
  cmpu(c,0,c->r[3],0x0000003Cu); // 801E3F60
  if (crb(c,1)) { goto L_801E3FA4; } // 801E3F64
  c->r[9]=0u+0x804B0000u; // 801E3F68
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E3F6C
  c->r[9]=c->r[9]+0x00007E2Cu; // 801E3F70
  c->r[9]=R32(c->r[9]+c->r[0]); // 801E3F74
  c->ctr=c->r[9]; // 801E3F78
  if (true) { switch (c->ctr) { case 0x801E3F80u: goto L_801E3F80; case 0x801E3F8Cu: goto L_801E3F8C; case 0x801E3F98u: goto L_801E3F98; case 0x801E3FA4u: goto L_801E3FA4; default: break; } dispatch(c,c->ctr); return; } // 801E3F7C
L_801E3F80:;
  c->r[11]=0u+0x00000003u; // 801E3F80
  c->r[12]=0u+0x00000003u; // 801E3F84
  goto L_801E3FAC; // 801E3F88
L_801E3F8C:;
  c->r[11]=0u+0x00000003u; // 801E3F8C
  c->r[12]=0u+0x00000002u; // 801E3F90
  goto L_801E3FAC; // 801E3F94
L_801E3F98:;
  c->r[11]=0u+0x00000002u; // 801E3F98
  c->r[12]=0u+0x00000002u; // 801E3F9C
  goto L_801E3FAC; // 801E3FA0
L_801E3FA4:;
  c->r[12]=0u+0x00000000u; // 801E3FA4
  c->r[11]=0u+0x00000000u; // 801E3FA8
L_801E3FAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E3FAC
  if (!crb(c,2)) { goto L_801E3FB8; } // 801E3FB0
  c->r[4]=0u+0x00000001u; // 801E3FB4
L_801E3FB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E3FB8
  if (!crb(c,2)) { goto L_801E3FC4; } // 801E3FBC
  c->r[5]=0u+0x00000001u; // 801E3FC0
L_801E3FC4:;
  c->r[10]=0u+0x00000001u; // 801E3FC4
  cmps(c,0,(int32_t)c->r[3],6); // 801E3FC8
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 801E3FCC
  c->r[9]=0u+0x00000000u; // 801E3FD0
  c->r[4]=c->r[4]+c->r[0]; // 801E3FD4
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 801E3FD8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E3FDC
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 801E3FE0
  c->r[4]=c->r[5]+c->r[0]; // 801E3FE4
  W32(c->r[6]+0x00000000u,c->r[10]); // 801E3FE8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E3FEC
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 801E3FF0
  W32(c->r[7]+0x00000000u,c->r[0]); // 801E3FF4
  if (crb(c,2)) { goto L_801E4004; } // 801E3FF8
  cmps(c,0,(int32_t)c->r[3],22); // 801E3FFC
  if (!crb(c,2)) { goto L_801E4008; } // 801E4000
L_801E4004:;
  c->r[9]=0u+0x00000001u; // 801E4004
L_801E4008:;
  c->r[0]=0u-c->r[9]; // 801E4008
  c->r[0]=c->r[0]|c->r[9]; // 801E400C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E4010
  c->r[0]=c->r[3]+0x00000001u; // 801E4014
  W32(c->r[8]+0x00000000u,c->r[0]); // 801E4018
  return; // 801E401C
}

// GXInitTexObj
void f_801E4020(Ctx* __restrict c) {
  trace_call(0x801E4020u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4020
  c->r[0]=c->lr; // 801E4024
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E4028
  c->r[11]=c->r[1]+0x00000040u; // 801E402C
  c->lr=0x801E4034u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4030
  c->r[27]=c->r[4]|c->r[4]; // 801E4034
  c->r[28]=c->r[5]|c->r[5]; // 801E4038
  c->r[31]=c->r[3]|c->r[3]; // 801E403C
  c->r[29]=c->r[6]|c->r[6]; // 801E4040
  c->r[30]=c->r[7]|c->r[7]; // 801E4044
  c->r[24]=c->r[8]|c->r[8]; // 801E4048
  c->r[25]=c->r[9]|c->r[9]; // 801E404C
  c->r[26]=c->r[10]|c->r[10]; // 801E4050
  c->r[4]=0u+0x00000000u; // 801E4054
  c->r[5]=0u+0x00000020u; // 801E4058
  c->lr=0x801E4060u; f_8000443C(c); // 801E405C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E4060
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801E4064
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 801E4068
  cmps(c,0,(int32_t)c->r[26],0); // 801E406C
  c->r[4]=c->r[0]|0x00000010u; // 801E4070
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E4074
  if (crb(c,2)) { goto L_801E4108; } // 801E4078
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 801E407C
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 801E4080
  cmpu(c,0,c->r[0],0x00000002u); // 801E4084
  c->r[0]=c->r[3]|0x00000001u; // 801E4088
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 801E408C
  if (crb(c,1)) { goto L_801E40A4; } // 801E4090
  c->r[0]=0u+0x00000005u; // 801E4094
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 801E4098
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E409C
  goto L_801E40B0; // 801E40A0
L_801E40A4:;
  c->r[0]=0u+0x00000006u; // 801E40A4
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 801E40A8
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E40AC
L_801E40B0:;
  cmpu(c,0,c->r[28],c->r[29]); // 801E40B0
  if (!crb(c,1)) { goto L_801E40C4; } // 801E40B4
  c->r[0]=cntlz(c->r[28]); // 801E40B8
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 801E40BC
  goto L_801E40CC; // 801E40C0
L_801E40C4:;
  c->r[0]=cntlz(c->r[29]); // 801E40C4
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 801E40C8
L_801E40CC:;
  c->r[0]=0u+0x43300000u; // 801E40CC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801E40D0
  {uint32_t ea=c->r[2]+0xFFFFC3A8u; c->f[2]=RF64(ea);} // 801E40D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E40D8
  {uint32_t ea=c->r[2]+0xFFFFC3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E40DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E40E0
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E40E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E40E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E40EC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E40F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801E40F4
  c->r[3]=R32(c->r[1]+0x00000014u); // 801E40F8
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801E40FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E4100
  goto L_801E4114; // 801E4104
L_801E4108:;
  c->r[0]=0u+0x00000004u; // 801E4108
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 801E410C
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E4110
L_801E4114:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 801E4114
  c->r[3]=R32(c->r[31]+0x00000008u); // 801E4118
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 801E411C
  c->r[4]=rotl(c->r[30],0)&0x0000000Fu; // 801E4120
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 801E4124
  W32(c->r[31]+0x00000014u,c->r[30]); // 801E4128
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 801E412C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E4130
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 801E4134
  cmpu(c,0,c->r[4],0x0000000Eu); // 801E4138
  c->r[3]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 801E413C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E4140
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E4144
  if (crb(c,1)) { goto L_801E41C8; } // 801E4148
  c->r[3]=0u+0x804B0000u; // 801E414C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E4150
  c->r[3]=c->r[3]+0x00007F20u; // 801E4154
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E4158
  c->ctr=c->r[3]; // 801E415C
  if (true) { switch (c->ctr) { case 0x801E4164u: goto L_801E4164; case 0x801E4178u: goto L_801E4178; case 0x801E418Cu: goto L_801E418C; case 0x801E41A0u: goto L_801E41A0; case 0x801E41B4u: goto L_801E41B4; case 0x801E41C8u: goto L_801E41C8; default: break; } dispatch(c,c->ctr); return; } // 801E4160
L_801E4164:;
  c->r[0]=0u+0x00000001u; // 801E4164
  c->r[6]=0u+0x00000003u; // 801E4168
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E416C
  c->r[7]=0u+0x00000003u; // 801E4170
  goto L_801E41D8; // 801E4174
L_801E4178:;
  c->r[0]=0u+0x00000002u; // 801E4178
  c->r[6]=0u+0x00000003u; // 801E417C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E4180
  c->r[7]=0u+0x00000002u; // 801E4184
  goto L_801E41D8; // 801E4188
L_801E418C:;
  c->r[0]=0u+0x00000002u; // 801E418C
  c->r[6]=0u+0x00000002u; // 801E4190
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E4194
  c->r[7]=0u+0x00000002u; // 801E4198
  goto L_801E41D8; // 801E419C
L_801E41A0:;
  c->r[0]=0u+0x00000003u; // 801E41A0
  c->r[6]=0u+0x00000002u; // 801E41A4
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E41A8
  c->r[7]=0u+0x00000002u; // 801E41AC
  goto L_801E41D8; // 801E41B0
L_801E41B4:;
  c->r[0]=0u+0x00000000u; // 801E41B4
  c->r[6]=0u+0x00000003u; // 801E41B8
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E41BC
  c->r[7]=0u+0x00000003u; // 801E41C0
  goto L_801E41D8; // 801E41C4
L_801E41C8:;
  c->r[0]=0u+0x00000002u; // 801E41C8
  c->r[6]=0u+0x00000002u; // 801E41CC
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801E41D0
  c->r[7]=0u+0x00000002u; // 801E41D4
L_801E41D8:;
  c->r[5]=0u+0x00000001u; // 801E41D8
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 801E41DC
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 801E41E0
  c->r[11]=c->r[1]+0x00000040u; // 801E41E4
  c->r[4]=c->r[28]+c->r[3]; // 801E41E8
  c->r[0]=c->r[0]|0x00000002u; // 801E41EC
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801E41F0
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 801E41F4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E41F8
  c->r[3]=c->r[29]+c->r[3]; // 801E41FC
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 801E4200
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E4204
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 801E4208
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801E420C
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801E4210
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 801E4214
  c->lr=0x801E421Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4218
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E421C
  c->lr=c->r[0]; // 801E4220
  c->r[1]=c->r[1]+0x00000040u; // 801E4224
  return; // 801E4228
}

// GXInitTexObjCI
void f_801E422C(Ctx* __restrict c) {
  trace_call(0x801E422Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E422C
  c->r[0]=c->lr; // 801E4230
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4238
  c->r[31]=R32(c->r[1]+0x00000018u); // 801E423C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4240
  c->r[30]=c->r[3]|c->r[3]; // 801E4244
  c->lr=0x801E424Cu; f_801E4020(c); // 801E4248
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 801E424C
  W32(c->r[30]+0x00000018u,c->r[31]); // 801E4250
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E4254
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 801E4258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E425C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4260
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4264
  c->lr=c->r[0]; // 801E4268
  c->r[1]=c->r[1]+0x00000010u; // 801E426C
  return; // 801E4270
}

// GXInitTexObjLOD
void f_801E4274(Ctx* __restrict c) {
  trace_call(0x801E4274u);
  {uint32_t ea=c->r[2]+0xFFFFC3B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4274
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4278
  fcmp(c,0,c->f[3],c->f[0]); // 801E427C
  if (!crb(c,0)) { goto L_801E428C; } // 801E4280
  c->f[3]=c->f[0]; // 801E4284
  goto L_801E42A0; // 801E4288
L_801E428C:;
  {uint32_t ea=c->r[2]+0xFFFFC3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E428C
  fcmp(c,0,c->f[3],c->f[0]); // 801E4290
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801E4294
  if (!crb(c,2)) { goto L_801E42A0; } // 801E4298
  {uint32_t ea=c->r[2]+0xFFFFC3B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E429C
L_801E42A0:;
  {uint32_t ea=c->r[2]+0xFFFFC3BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801E42A0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801E42A4
  c->r[9]=cntlz(c->r[0]); // 801E42A8
  {uint32_t ea=c->r[2]+0xFFFFC3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E42AC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801E42B0
  c->r[0]=cntlz(c->r[7]); // 801E42B4
  c->r[10]=R32(c->r[3]+0x00000000u); // 801E42B8
  c->r[5]=c->r[13]+0xFFFF8568u; // 801E42BC
  fcmp(c,0,c->f[1],c->f[0]); // 801E42C0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801E42C4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 801E42C8
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801E42CC
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 801E42D0
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 801E42D4
  W32(c->r[3]+0x00000000u,c->r[10]); // 801E42D8
  c->r[4]=R8(c->r[5]+c->r[4]); // 801E42DC
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 801E42E0
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 801E42E4
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 801E42E8
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 801E42EC
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 801E42F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E42F4
  if (!crb(c,0)) { goto L_801E4304; } // 801E42F8
  c->f[1]=c->f[0]; // 801E42FC
  goto L_801E4314; // 801E4300
L_801E4304:;
  {uint32_t ea=c->r[2]+0xFFFFC3C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4304
  fcmp(c,0,c->f[1],c->f[0]); // 801E4308
  if (!crb(c,1)) { goto L_801E4314; } // 801E430C
  c->f[1]=c->f[0]; // 801E4310
L_801E4314:;
  {uint32_t ea=c->r[2]+0xFFFFC3A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E4314
  {uint32_t ea=c->r[2]+0xFFFFC3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4318
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E431C
  fcmp(c,0,c->f[2],c->f[0]); // 801E4320
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E4324
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E4328
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E432C
  if (!crb(c,0)) { goto L_801E433C; } // 801E4330
  c->f[2]=c->f[0]; // 801E4334
  goto L_801E434C; // 801E4338
L_801E433C:;
  {uint32_t ea=c->r[2]+0xFFFFC3C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E433C
  fcmp(c,0,c->f[2],c->f[0]); // 801E4340
  if (!crb(c,1)) { goto L_801E434C; } // 801E4344
  c->f[2]=c->f[0]; // 801E4348
L_801E434C:;
  {uint32_t ea=c->r[2]+0xFFFFC3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E434C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E4350
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801E4354
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801E4358
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E435C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801E4360
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E4364
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 801E4368
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E436C
  c->r[1]=c->r[1]+0x00000010u; // 801E4370
  return; // 801E4374
}

// GXInitTexObjWrapMode
void f_801E4378(Ctx* __restrict c) {
  trace_call(0x801E4378u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E4378
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 801E437C
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 801E4380
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4384
  return; // 801E4388
}

// fn_801E438C
void f_801E438C(Ctx* __restrict c) {
  trace_call(0x801E438Cu);
  W32(c->r[3]+0x00000018u,c->r[4]); // 801E438C
  return; // 801E4390
}

// GXInitTexObjFilter
void f_801E4394(Ctx* __restrict c) {
  trace_call(0x801E4394u);
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801E4394
  c->r[6]=R32(c->r[3]+0x00000000u); // 801E4398
  c->r[0]=cntlz(c->r[0]); // 801E439C
  c->r[5]=c->r[13]+0xFFFF8568u; // 801E43A0
  c->r[6]=(rotl(c->r[0],31)&0x00000010u)|(c->r[6]&~0x00000010u); // 801E43A4
  W32(c->r[3]+0x00000000u,c->r[6]); // 801E43A8
  c->r[0]=R8(c->r[5]+c->r[4]); // 801E43AC
  c->r[6]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[6]&~0x000000E0u); // 801E43B0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801E43B4
  return; // 801E43B8
}

// fn_801E43BC
void f_801E43BC(Ctx* __restrict c) {
  trace_call(0x801E43BCu);
  W32(c->r[3]+0x00000010u,c->r[4]); // 801E43BC
  return; // 801E43C0
}

// fn_801E43C4
void f_801E43C4(Ctx* __restrict c) {
  trace_call(0x801E43C4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801E43C4
  return; // 801E43C8
}

// fn_801E43CC
void f_801E43CC(Ctx* __restrict c) {
  trace_call(0x801E43CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E43CC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E43D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E43D4
  c->r[31]=R32(c->r[3]+0x00000008u); // 801E43D8
  c->r[0]=rotl(c->r[0],5)&0x1FFFFFE0u; // 801E43DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E43E0
  c->r[12]=rotl(c->r[31],0)&0x000003FFu; // 801E43E4
  c->r[4]=rotl(c->r[31],22)&0x000003FFu; // 801E43E8
  c->r[0]=c->r[12]+0x00000001u; // 801E43EC
  c->r[11]=R32(c->r[3]+0x00000000u); // 801E43F0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801E43F4
  c->r[4]=c->r[4]+0x00000001u; // 801E43F8
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801E43FC
  c->r[5]=rotl(c->r[11],0)&0x00000003u; // 801E4400
  W16(c->r[6]+0x00000000u,c->r[4]); // 801E4404
  c->r[4]=rotl(c->r[11],30)&0x00000003u; // 801E4408
  c->r[3]=R32(c->r[3]+0x00000014u); // 801E440C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E4410
  W32(c->r[7]+0x00000000u,c->r[3]); // 801E4414
  W32(c->r[8]+0x00000000u,c->r[5]); // 801E4418
  W32(c->r[9]+0x00000000u,c->r[4]); // 801E441C
  W8(c->r[10]+0x00000000u,c->r[0]); // 801E4420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4424
  c->r[1]=c->r[1]+0x00000010u; // 801E4428
  return; // 801E442C
}

// GXGetTexObjWidth
void f_801E4430(Ctx* __restrict c) {
  trace_call(0x801E4430u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E4430
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 801E4434
  c->r[0]=c->r[3]+0x00000001u; // 801E4438
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E443C
  return; // 801E4440
}

// GXGetTexObjHeight
void f_801E4444(Ctx* __restrict c) {
  trace_call(0x801E4444u);
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E4444
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 801E4448
  c->r[0]=c->r[3]+0x00000001u; // 801E444C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801E4450
  return; // 801E4454
}

// GXGetTexObjFmt
void f_801E4458(Ctx* __restrict c) {
  trace_call(0x801E4458u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 801E4458
  return; // 801E445C
}

// GXGetTexObjWrapS
void f_801E4460(Ctx* __restrict c) {
  trace_call(0x801E4460u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E4460
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 801E4464
  return; // 801E4468
}

// GXGetTexObjWrapT
void f_801E446C(Ctx* __restrict c) {
  trace_call(0x801E446Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E446C
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 801E4470
  return; // 801E4474
}

// GXGetTexObjMipMap
void f_801E4478(Ctx* __restrict c) {
  trace_call(0x801E4478u);
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801E4478
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801E447C
  return; // 801E4480
}

// GXGetTexObjLODAll
void f_801E4484(Ctx* __restrict c) {
  trace_call(0x801E4484u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4484
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E4488
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E448C
  c->r[31]=0u+0x43300000u; // 801E4490
  c->r[11]=rotl(c->r[0],0)&0x000000FFu; // 801E4494
  {uint32_t ea=c->r[2]+0xFFFFC3A8u; c->f[5]=RF64(ea);} // 801E4498
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E449C
  {uint32_t ea=c->r[2]+0xFFFFC3C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E44A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E44A4
  c->r[29]=c->r[13]+0xFFFF8570u; // 801E44A8
  {uint32_t ea=c->r[2]+0xFFFFC3D0u; c->f[2]=RF64(ea);} // 801E44AC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E44B0
  c->r[28]=R32(c->r[3]+0x00000000u); // 801E44B4
  c->r[3]=rotl(c->r[0],24)&0x000000FFu; // 801E44B8
  W32(c->r[1]+0x0000000Cu,c->r[11]); // 801E44BC
  c->r[0]=rotl(c->r[28],23)&0x000000FFu; // 801E44C0
  c->r[11]=rotl(c->r[28],27)&0x00000007u; // 801E44C4
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E44C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E44CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E44D0
  c->r[29]=R8(c->r[29]+c->r[11]); // 801E44D4
  c->r[12]=c->r[0]^0x80000000u; // 801E44D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E44DC
  W32(c->r[1]+0x00000014u,c->r[3]); // 801E44E0
  c->r[0]=rotl(c->r[28],24)&0x00000001u; // 801E44E4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 801E44E8
  c->r[0]=cntlz(c->r[0]); // 801E44EC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801E44F0
  c->r[30]=rotl(c->r[28],28)&0x00000001u; // 801E44F4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801E44F8
  c->r[11]=rotl(c->r[28],11)&0x00000001u; // 801E44FC
  W32(c->r[4]+0x00000000u,c->r[29]); // 801E4500
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[3]); // 801E4504
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E4508
  c->r[0]=rotl(c->r[28],13)&0x00000003u; // 801E450C
  W32(c->r[5]+0x00000000u,c->r[30]); // 801E4510
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[5]); // 801E4514
  {uint32_t ea=c->r[2]+0xFFFFC3CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4518
  W32(c->r[1]+0x0000001Cu,c->r[12]); // 801E451C
  c->r[4]=R32(c->r[1]+0x00000038u); // 801E4520
  W32(c->r[1]+0x00000018u,c->r[31]); // 801E4524
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 801E4528
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801E452C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[4]);} // 801E4530
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801E4534
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[3]);} // 801E4538
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801E453C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 801E4540
  W8(c->r[9]+0x00000000u,c->r[11]); // 801E4544
  W8(c->r[10]+0x00000000u,c->r[3]); // 801E4548
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E454C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E4550
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E4554
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E4558
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E455C
  c->r[1]=c->r[1]+0x00000030u; // 801E4560
  return; // 801E4564
}

// GXLoadTexObjPreLoaded
void f_801E4568(Ctx* __restrict c) {
  trace_call(0x801E4568u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4568
  c->r[0]=c->lr; // 801E456C
  c->r[11]=c->r[13]+0xFFFF8530u; // 801E4570
  c->r[10]=c->r[13]+0xFFFF8538u; // 801E4574
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4578
  c->r[9]=c->r[13]+0xFFFF8540u; // 801E457C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4580
  c->r[8]=c->r[13]+0xFFFF8548u; // 801E4584
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4588
  c->r[7]=c->r[13]+0xFFFF8550u; // 801E458C
  c->r[6]=c->r[13]+0xFFFF8558u; // 801E4590
  c->r[31]=c->r[5]|c->r[5]; // 801E4594
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4598
  c->r[30]=c->r[3]|c->r[3]; // 801E459C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E45A0
  c->r[29]=0u+0xCC010000u; // 801E45A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E45A8
  c->r[28]=0u+0x00000061u; // 801E45AC
  c->r[0]=R8(c->r[11]+c->r[5]); // 801E45B0
  c->r[11]=R32(c->r[3]+0x00000004u); // 801E45B4
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 801E45B8
  c->r[0]=R8(c->r[10]+c->r[5]); // 801E45BC
  c->r[10]=R8(c->r[9]+c->r[5]); // 801E45C0
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 801E45C4
  c->r[0]=R8(c->r[7]+c->r[5]); // 801E45C8
  c->r[8]=R8(c->r[8]+c->r[5]); // 801E45CC
  c->r[5]=R8(c->r[6]+c->r[5]); // 801E45D0
  c->r[9]=R32(c->r[3]+0x00000008u); // 801E45D4
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 801E45D8
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E45DC
  c->r[7]=R32(c->r[4]+0x00000000u); // 801E45E0
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E45E4
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 801E45E8
  c->r[6]=R32(c->r[4]+0x00000004u); // 801E45EC
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E45F0
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E45F4
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 801E45F8
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 801E45FC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E4600
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E4604
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E4608
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801E460C
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 801E4610
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E4614
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 801E4618
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E461C
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 801E4620
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E4624
  W32(c->r[3]+0x00000000u,c->r[12]); // 801E4628
  W32(c->r[3]+0x00000004u,c->r[11]); // 801E462C
  W32(c->r[3]+0x00000008u,c->r[9]); // 801E4630
  W32(c->r[4]+0x00000000u,c->r[7]); // 801E4634
  W32(c->r[4]+0x00000004u,c->r[6]); // 801E4638
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E463C
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 801E4640
  if (!crb(c,2)) { goto L_801E467C; } // 801E4644
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E4648
  c->r[3]=R32(c->r[3]+0x00000018u); // 801E464C
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 801E4650
  c->ctr=c->r[12]; // 801E4654
  if (true) { c->lr=0x801E465Cu; dispatch(c,c->ctr); } // 801E4658
  c->r[4]=c->r[13]+0xFFFF8560u; // 801E465C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E4660
  c->r[4]=R8(c->r[4]+c->r[31]); // 801E4664
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801E4668
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E466C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 801E4670
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E4674
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 801E4678
L_801E467C:;
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E467C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801E4680
  c->r[5]=R32(c->r[30]+0x00000008u); // 801E4684
  c->r[0]=0u+0x00000000u; // 801E4688
  c->r[4]=c->r[6]+c->r[3]; // 801E468C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E4690
  W32(c->r[4]+0x00000564u,c->r[5]); // 801E4694
  W32(c->r[4]+0x00000584u,c->r[3]); // 801E4698
  c->r[3]=R32(c->r[6]+0x000005FCu); // 801E469C
  c->r[3]=c->r[3]|0x00000001u; // 801E46A0
  W32(c->r[6]+0x000005FCu,c->r[3]); // 801E46A4
  W16(c->r[6]+0x00000002u,c->r[0]); // 801E46A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E46AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E46B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E46B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E46B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E46BC
  c->lr=c->r[0]; // 801E46C0
  c->r[1]=c->r[1]+0x00000020u; // 801E46C4
  return; // 801E46C8
}

// GXLoadTexObj
void f_801E46CC(Ctx* __restrict c) {
  trace_call(0x801E46CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E46CC
  c->r[0]=c->lr; // 801E46D0
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E46D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E46D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E46DC
  c->r[31]=c->r[4]|c->r[4]; // 801E46E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E46E4
  c->r[30]=c->r[3]|c->r[3]; // 801E46E8
  c->r[12]=R32(c->r[5]+0x00000518u); // 801E46EC
  c->ctr=c->r[12]; // 801E46F0
  if (true) { c->lr=0x801E46F8u; dispatch(c,c->ctr); } // 801E46F4
  c->r[4]=c->r[3]|c->r[3]; // 801E46F8
  c->r[3]=c->r[30]|c->r[30]; // 801E46FC
  c->r[5]=c->r[31]|c->r[31]; // 801E4700
  c->lr=0x801E4708u; f_801E4568(c); // 801E4704
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E470C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4710
  c->lr=c->r[0]; // 801E4714
  c->r[1]=c->r[1]+0x00000010u; // 801E4718
  return; // 801E471C
}

// GXInitTlutObj
void f_801E4720(Ctx* __restrict c) {
  trace_call(0x801E4720u);
  c->r[7]=R32(c->r[3]+0x00000004u); // 801E4720
  c->r[0]=0u+0x00000064u; // 801E4724
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 801E4728
  c->r[4]=0u+0x00000000u; // 801E472C
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 801E4730
  W16(c->r[3]+0x00000008u,c->r[6]); // 801E4734
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E4738
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E473C
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E4740
  return; // 801E4744
}

// GXLoadTlut
void f_801E4748(Ctx* __restrict c) {
  trace_call(0x801E4748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4748
  c->r[0]=c->lr; // 801E474C
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E4750
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4754
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4758
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E475C
  c->r[30]=c->r[3]|c->r[3]; // 801E4760
  c->r[3]=c->r[4]|c->r[4]; // 801E4764
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 801E4768
  c->ctr=c->r[12]; // 801E476C
  if (true) { c->lr=0x801E4774u; dispatch(c,c->ctr); } // 801E4770
  c->r[31]=c->r[3]|c->r[3]; // 801E4774
  c->lr=0x801E477Cu; f_801E5294(c); // 801E4778
  c->r[3]=0u+0xCC010000u; // 801E477C
  c->r[4]=0u+0x00000061u; // 801E4780
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4784
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E4788
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E478C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4790
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E4794
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4798
  c->lr=0x801E47A0u; f_801E5294(c); // 801E479C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E47A0
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E47A4
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 801E47A8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801E47AC
  W32(c->r[31]+0x00000004u,c->r[4]); // 801E47B0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E47B4
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E47B8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E47BC
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E47C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E47C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E47C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E47CC
  c->lr=c->r[0]; // 801E47D0
  c->r[1]=c->r[1]+0x00000010u; // 801E47D4
  return; // 801E47D8
}

// GXInitTexCacheRegion
void f_801E47DC(Ctx* __restrict c) {
  trace_call(0x801E47DCu);
  cmps(c,0,(int32_t)c->r[6],1); // 801E47DC
  if (crb(c,2)) { goto L_801E4808; } // 801E47E0
  if (!crb(c,0)) { goto L_801E47F4; } // 801E47E4
  cmps(c,0,(int32_t)c->r[6],0); // 801E47E8
  if (!crb(c,0)) { goto L_801E4800; } // 801E47EC
  goto L_801E4814; // 801E47F0
L_801E47F4:;
  cmps(c,0,(int32_t)c->r[6],3); // 801E47F4
  if (!crb(c,0)) { goto L_801E4814; } // 801E47F8
  goto L_801E4810; // 801E47FC
L_801E4800:;
  c->r[6]=0u+0x00000003u; // 801E4800
  goto L_801E4814; // 801E4804
L_801E4808:;
  c->r[6]=0u+0x00000004u; // 801E4808
  goto L_801E4814; // 801E480C
L_801E4810:;
  c->r[6]=0u+0x00000005u; // 801E4810
L_801E4814:;
  c->r[0]=0u+0x00000000u; // 801E4814
  cmps(c,0,(int32_t)c->r[8],2); // 801E4818
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 801E481C
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801E4820
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 801E4824
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4828
  if (crb(c,2)) { goto L_801E4860; } // 801E482C
  if (!crb(c,0)) { goto L_801E4844; } // 801E4830
  cmps(c,0,(int32_t)c->r[8],0); // 801E4834
  if (crb(c,2)) { goto L_801E4850; } // 801E4838
  if (!crb(c,0)) { goto L_801E4858; } // 801E483C
  goto L_801E486C; // 801E4840
L_801E4844:;
  cmps(c,0,(int32_t)c->r[8],4); // 801E4844
  if (!crb(c,0)) { goto L_801E486C; } // 801E4848
  goto L_801E4868; // 801E484C
L_801E4850:;
  c->r[6]=0u+0x00000003u; // 801E4850
  goto L_801E486C; // 801E4854
L_801E4858:;
  c->r[6]=0u+0x00000004u; // 801E4858
  goto L_801E486C; // 801E485C
L_801E4860:;
  c->r[6]=0u+0x00000005u; // 801E4860
  goto L_801E486C; // 801E4864
L_801E4868:;
  c->r[6]=0u+0x00000000u; // 801E4868
L_801E486C:;
  c->r[5]=0u+0x00000000u; // 801E486C
  c->r[0]=0u+0x00000001u; // 801E4870
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 801E4874
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801E4878
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 801E487C
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 801E4880
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801E4884
  W32(c->r[3]+0x00000004u,c->r[5]); // 801E4888
  return; // 801E488C
}

// GXInitTlutRegion
void f_801E4890(Ctx* __restrict c) {
  trace_call(0x801E4890u);
  c->r[0]=c->r[4]+0xFFF80000u; // 801E4890
  c->r[4]=0u+0x00000000u; // 801E4894
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 801E4898
  c->r[0]=0u+0x00000065u; // 801E489C
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 801E48A0
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801E48A4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E48A8
  return; // 801E48AC
}

// GXInvalidateTexAll
void f_801E48B0(Ctx* __restrict c) {
  trace_call(0x801E48B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E48B0
  c->r[0]=c->lr; // 801E48B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E48B8
  c->lr=0x801E48C0u; f_801E5294(c); // 801E48BC
  c->r[4]=0u+0xCC010000u; // 801E48C0
  c->r[5]=0u+0x00000061u; // 801E48C4
  c->r[3]=0u+0x66000000u; // 801E48C8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E48CC
  c->r[0]=c->r[3]+0x00001000u; // 801E48D0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E48D4
  c->r[0]=c->r[3]+0x00001100u; // 801E48D8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E48DC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E48E0
  c->lr=0x801E48E8u; f_801E5294(c); // 801E48E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E48E8
  c->lr=c->r[0]; // 801E48EC
  c->r[1]=c->r[1]+0x00000010u; // 801E48F0
  return; // 801E48F4
}

// fn_801E48F8
void f_801E48F8(Ctx* __restrict c) {
  trace_call(0x801E48F8u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E48F8
  c->r[0]=c->r[3]|c->r[3]; // 801E48FC
  c->r[3]=R32(c->r[4]+0x00000518u); // 801E4900
  W32(c->r[4]+0x00000518u,c->r[0]); // 801E4904
  return; // 801E4908
}

// fn_801E490C
void f_801E490C(Ctx* __restrict c) {
  trace_call(0x801E490Cu);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E490C
  c->r[0]=c->r[3]|c->r[3]; // 801E4910
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 801E4914
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 801E4918
  return; // 801E491C
}

// __SetSURegs
void f_801E4920(Ctx* __restrict c) {
  trace_call(0x801E4920u);
  c->r[11]=R32(c->r[2]+0xFFFFC330u); // 801E4920
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E4924
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E4928
  c->r[5]=0u+0xCC010000u; // 801E492C
  c->r[10]=c->r[11]+c->r[0]; // 801E4930
  c->r[9]=c->r[11]+c->r[6]; // 801E4934
  c->r[3]=R32(c->r[10]+0x00000564u); // 801E4938
  c->r[4]=0u+0x00000061u; // 801E493C
  c->r[8]=R32(c->r[9]+0x00000108u); // 801E4940
  c->r[0]=0u+0x00000000u; // 801E4944
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 801E4948
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 801E494C
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 801E4950
  W32(c->r[9]+0x00000108u,c->r[8]); // 801E4954
  c->r[7]=R32(c->r[9]+0x00000128u); // 801E4958
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 801E495C
  W32(c->r[9]+0x00000128u,c->r[7]); // 801E4960
  c->r[3]=R32(c->r[10]+0x00000584u); // 801E4964
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 801E4968
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 801E496C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801E4970
  c->r[6]=cntlz(c->r[6]); // 801E4974
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E4978
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 801E497C
  c->r[3]=cntlz(c->r[3]); // 801E4980
  W32(c->r[9]+0x00000108u,c->r[8]); // 801E4984
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 801E4988
  W32(c->r[9]+0x00000128u,c->r[7]); // 801E498C
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 801E4990
  c->r[3]=R32(c->r[9]+0x00000108u); // 801E4994
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801E4998
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 801E499C
  c->r[3]=R32(c->r[9]+0x00000128u); // 801E49A0
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 801E49A4
  W16(c->r[11]+0x00000002u,c->r[0]); // 801E49A8
  return; // 801E49AC
}

// __GXSetSUTexRegs
void f_801E49B0(Ctx* __restrict c) {
  trace_call(0x801E49B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E49B0
  c->r[0]=c->lr; // 801E49B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E49B8
  c->r[11]=c->r[1]+0x00000030u; // 801E49BC
  c->lr=0x801E49C4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E49C0
  c->r[29]=R32(c->r[2]+0xFFFFC330u); // 801E49C4
  c->r[0]=R32(c->r[29]+0x000005E4u); // 801E49C8
  cmpu(c,0,c->r[0],0x000000FFu); // 801E49CC
  if (crb(c,2)) { goto L_801E4B00; } // 801E49D0
  c->r[0]=R32(c->r[29]+0x00000254u); // 801E49D4
  c->r[28]=0u+0x00000000u; // 801E49D8
  c->r[23]=0u+0x00000001u; // 801E49DC
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 801E49E0
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 801E49E4
  c->r[26]=c->r[3]+0x00000001u; // 801E49E8
  goto L_801E4A74; // 801E49EC
L_801E49F0:;
  cmps(c,0,(int32_t)c->r[28],2); // 801E49F0
  if (crb(c,2)) { goto L_801E4A38; } // 801E49F4
  if (!crb(c,0)) { goto L_801E4A0C; } // 801E49F8
  cmps(c,0,(int32_t)c->r[28],0); // 801E49FC
  if (crb(c,2)) { goto L_801E4A18; } // 801E4A00
  if (!crb(c,0)) { goto L_801E4A28; } // 801E4A04
  goto L_801E4A54; // 801E4A08
L_801E4A0C:;
  cmps(c,0,(int32_t)c->r[28],4); // 801E4A0C
  if (!crb(c,0)) { goto L_801E4A54; } // 801E4A10
  goto L_801E4A48; // 801E4A14
L_801E4A18:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 801E4A18
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 801E4A1C
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 801E4A20
  goto L_801E4A54; // 801E4A24
L_801E4A28:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 801E4A28
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 801E4A2C
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 801E4A30
  goto L_801E4A54; // 801E4A34
L_801E4A38:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 801E4A38
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 801E4A3C
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 801E4A40
  goto L_801E4A54; // 801E4A44
L_801E4A48:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 801E4A48
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 801E4A4C
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 801E4A50
L_801E4A54:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 801E4A54
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 801E4A58
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801E4A5C
  if (!crb(c,2)) { goto L_801E4A70; } // 801E4A60
  c->r[3]=c->r[25]|c->r[25]; // 801E4A64
  c->r[4]=c->r[24]|c->r[24]; // 801E4A68
  c->lr=0x801E4A70u; f_801E4920(c); // 801E4A6C
L_801E4A70:;
  c->r[28]=c->r[28]+0x00000001u; // 801E4A70
L_801E4A74:;
  cmpu(c,0,c->r[28],c->r[27]); // 801E4A74
  if (crb(c,0)) { IRQCHK(c); goto L_801E49F0; } // 801E4A78
  c->r[28]=R32(c->r[2]+0xFFFFC330u); // 801E4A7C
  c->r[27]=0u+0x00000000u; // 801E4A80
  c->r[23]=0u+0x00000001u; // 801E4A84
  c->r[31]=c->r[28]|c->r[28]; // 801E4A88
  c->r[30]=c->r[28]+0x00000150u; // 801E4A8C
  goto L_801E4AF8; // 801E4A90
L_801E4A94:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 801E4A94
  c->r[0]=R32(c->r[31]+0x000005A4u); // 801E4A98
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 801E4A9C
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 801E4AA0
  if (crb(c,2)) { goto L_801E4AB4; } // 801E4AA4
  c->r[0]=R32(c->r[30]+c->r[3]); // 801E4AA8
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 801E4AAC
  goto L_801E4ABC; // 801E4AB0
L_801E4AB4:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 801E4AB4
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 801E4AB8
L_801E4ABC:;
  cmpu(c,0,c->r[25],0x000000FFu); // 801E4ABC
  if (crb(c,2)) { goto L_801E4AF0; } // 801E4AC0
  c->r[3]=R32(c->r[29]+0x000005E4u); // 801E4AC4
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 801E4AC8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801E4ACC
  if (!crb(c,2)) { goto L_801E4AF0; } // 801E4AD0
  c->r[3]=R32(c->r[28]+0x000005E8u); // 801E4AD4
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 801E4AD8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801E4ADC
  if (crb(c,2)) { goto L_801E4AF0; } // 801E4AE0
  c->r[3]=c->r[25]|c->r[25]; // 801E4AE4
  c->r[4]=c->r[24]|c->r[24]; // 801E4AE8
  c->lr=0x801E4AF0u; f_801E4920(c); // 801E4AEC
L_801E4AF0:;
  c->r[31]=c->r[31]+0x00000004u; // 801E4AF0
  c->r[27]=c->r[27]+0x00000001u; // 801E4AF4
L_801E4AF8:;
  cmpu(c,0,c->r[27],c->r[26]); // 801E4AF8
  if (crb(c,0)) { IRQCHK(c); goto L_801E4A94; } // 801E4AFC
L_801E4B00:;
  c->r[11]=c->r[1]+0x00000030u; // 801E4B00
  c->lr=0x801E4B08u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4B04
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E4B08
  c->lr=c->r[0]; // 801E4B0C
  c->r[1]=c->r[1]+0x00000030u; // 801E4B10
  return; // 801E4B14
}

// __GXSetTmemConfig
void f_801E4B18(Ctx* __restrict c) {
  trace_call(0x801E4B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4B18
  cmps(c,0,(int32_t)c->r[3],1); // 801E4B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4B20
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4B24
  if (crb(c,2)) { goto L_801E4C48; } // 801E4B28
  if (!crb(c,0)) { goto L_801E4B34; } // 801E4B2C
  goto L_801E4D54; // 801E4B30
L_801E4B34:;
  cmps(c,0,(int32_t)c->r[3],3); // 801E4B34
  if (!crb(c,0)) { goto L_801E4D54; } // 801E4B38
  c->r[3]=0u+0xCC010000u; // 801E4B3C
  c->r[0]=0u+0x00000061u; // 801E4B40
  c->r[4]=0u+0x8C0E0000u; // 801E4B44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4B48
  c->r[4]=c->r[4]+0xFFFF8000u; // 801E4B4C
  c->r[5]=0u+0x900E0000u; // 801E4B50
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4B54
  c->r[4]=0u+0x8D0E0000u; // 801E4B58
  c->r[31]=0u+0x910E0000u; // 801E4B5C
  c->r[30]=0u+0x8E0E0000u; // 801E4B60
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4B64
  c->r[5]=c->r[5]+0xFFFFC000u; // 801E4B68
  c->r[12]=0u+0x920E0000u; // 801E4B6C
  c->r[11]=0u+0x8F0E0000u; // 801E4B70
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4B74
  c->r[10]=0u+0x930E0000u; // 801E4B78
  c->r[9]=0u+0xAC0E0000u; // 801E4B7C
  c->r[8]=0u+0xB00E0000u; // 801E4B80
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4B84
  c->r[4]=c->r[4]+0xFFFF8800u; // 801E4B88
  c->r[7]=0u+0xAD0E0000u; // 801E4B8C
  c->r[6]=0u+0xB10E0000u; // 801E4B90
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4B94
  c->r[5]=0u+0xAE0E0000u; // 801E4B98
  c->r[4]=0u+0xB20E0000u; // 801E4B9C
  c->r[31]=c->r[31]+0xFFFFC800u; // 801E4BA0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BA4
  c->r[30]=c->r[30]+0xFFFF9000u; // 801E4BA8
  c->r[12]=c->r[12]+0xFFFFD000u; // 801E4BAC
  c->r[11]=c->r[11]+0xFFFF9800u; // 801E4BB0
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E4BB4
  c->r[10]=c->r[10]+0xFFFFD800u; // 801E4BB8
  c->r[9]=c->r[9]+0xFFFFA000u; // 801E4BBC
  c->r[8]=c->r[8]+0xFFFFC400u; // 801E4BC0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BC4
  c->r[7]=c->r[7]+0xFFFFA800u; // 801E4BC8
  c->r[6]=c->r[6]+0xFFFFCC00u; // 801E4BCC
  c->r[5]=c->r[5]+0xFFFFB000u; // 801E4BD0
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 801E4BD4
  c->r[4]=c->r[4]+0xFFFFD400u; // 801E4BD8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BDC
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 801E4BE0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BE4
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801E4BE8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BEC
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 801E4BF0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BF4
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801E4BF8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4BFC
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 801E4C00
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C04
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 801E4C08
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C0C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 801E4C10
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C14
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4C18
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C1C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4C20
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C24
  c->r[5]=0u+0xAF0E0000u; // 801E4C28
  c->r[4]=0u+0xB30E0000u; // 801E4C2C
  c->r[5]=c->r[5]+0xFFFFB800u; // 801E4C30
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4C34
  c->r[4]=c->r[4]+0xFFFFDC00u; // 801E4C38
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C3C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4C40
  goto L_801E4E5C; // 801E4C44
L_801E4C48:;
  c->r[3]=0u+0xCC010000u; // 801E4C48
  c->r[0]=0u+0x00000061u; // 801E4C4C
  c->r[4]=0u+0x8C0E0000u; // 801E4C50
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C54
  c->r[4]=c->r[4]+0xFFFF8000u; // 801E4C58
  c->r[5]=0u+0x900E0000u; // 801E4C5C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4C60
  c->r[4]=0u+0x8D0E0000u; // 801E4C64
  c->r[31]=0u+0x910E0000u; // 801E4C68
  c->r[30]=0u+0x8E0E0000u; // 801E4C6C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C70
  c->r[5]=c->r[5]+0xFFFFC000u; // 801E4C74
  c->r[12]=0u+0x920E0000u; // 801E4C78
  c->r[11]=0u+0x8F0E0000u; // 801E4C7C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4C80
  c->r[10]=0u+0x930E0000u; // 801E4C84
  c->r[9]=0u+0xAC0E0000u; // 801E4C88
  c->r[8]=0u+0xB00E0000u; // 801E4C8C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4C90
  c->r[4]=c->r[4]+0xFFFF8800u; // 801E4C94
  c->r[7]=0u+0xAD0E0000u; // 801E4C98
  c->r[6]=0u+0xB10E0000u; // 801E4C9C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4CA0
  c->r[5]=0u+0xAE0E0000u; // 801E4CA4
  c->r[4]=0u+0xB20E0000u; // 801E4CA8
  c->r[31]=c->r[31]+0xFFFFC800u; // 801E4CAC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4CB0
  c->r[30]=c->r[30]+0xFFFF9000u; // 801E4CB4
  c->r[12]=c->r[12]+0xFFFFD000u; // 801E4CB8
  c->r[11]=c->r[11]+0xFFFF9800u; // 801E4CBC
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E4CC0
  c->r[10]=c->r[10]+0xFFFFD800u; // 801E4CC4
  c->r[9]=c->r[9]+0xFFFFA000u; // 801E4CC8
  c->r[8]=c->r[8]+0xFFFFE000u; // 801E4CCC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4CD0
  c->r[7]=c->r[7]+0xFFFFA800u; // 801E4CD4
  c->r[6]=c->r[6]+0xFFFFE800u; // 801E4CD8
  c->r[5]=c->r[5]+0xFFFFB000u; // 801E4CDC
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 801E4CE0
  c->r[4]=c->r[4]+0xFFFFF000u; // 801E4CE4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4CE8
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 801E4CEC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4CF0
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801E4CF4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4CF8
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 801E4CFC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D00
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801E4D04
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D08
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 801E4D0C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D10
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 801E4D14
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D18
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 801E4D1C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D20
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4D24
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D28
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4D2C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D30
  c->r[5]=0u+0xAF0E0000u; // 801E4D34
  c->r[4]=0u+0xB30E0000u; // 801E4D38
  c->r[5]=c->r[5]+0xFFFFB800u; // 801E4D3C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4D40
  c->r[4]=c->r[4]+0xFFFFF800u; // 801E4D44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D48
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4D4C
  goto L_801E4E5C; // 801E4D50
L_801E4D54:;
  c->r[3]=0u+0xCC010000u; // 801E4D54
  c->r[0]=0u+0x00000061u; // 801E4D58
  c->r[4]=0u+0x8C0E0000u; // 801E4D5C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D60
  c->r[4]=c->r[4]+0xFFFF8000u; // 801E4D64
  c->r[5]=0u+0x900E0000u; // 801E4D68
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4D6C
  c->r[4]=0u+0x8D0E0000u; // 801E4D70
  c->r[30]=0u+0x910E0000u; // 801E4D74
  c->r[31]=0u+0x8E0E0000u; // 801E4D78
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D7C
  c->r[5]=c->r[5]+0xFFFFC000u; // 801E4D80
  c->r[12]=0u+0x920E0000u; // 801E4D84
  c->r[11]=0u+0x8F0E0000u; // 801E4D88
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4D8C
  c->r[10]=0u+0x930E0000u; // 801E4D90
  c->r[9]=0u+0xAC0E0000u; // 801E4D94
  c->r[8]=0u+0xB00E0000u; // 801E4D98
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4D9C
  c->r[4]=c->r[4]+0xFFFF8400u; // 801E4DA0
  c->r[7]=0u+0xAD0E0000u; // 801E4DA4
  c->r[6]=0u+0xB10E0000u; // 801E4DA8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4DAC
  c->r[5]=0u+0xAE0E0000u; // 801E4DB0
  c->r[4]=0u+0xB20E0000u; // 801E4DB4
  c->r[30]=c->r[30]+0xFFFFC400u; // 801E4DB8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4DBC
  c->r[31]=c->r[31]+0xFFFF8800u; // 801E4DC0
  c->r[12]=c->r[12]+0xFFFFC800u; // 801E4DC4
  c->r[11]=c->r[11]+0xFFFF8C00u; // 801E4DC8
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 801E4DCC
  c->r[10]=c->r[10]+0xFFFFCC00u; // 801E4DD0
  c->r[9]=c->r[9]+0xFFFF9000u; // 801E4DD4
  c->r[8]=c->r[8]+0xFFFFD000u; // 801E4DD8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4DDC
  c->r[7]=c->r[7]+0xFFFF9400u; // 801E4DE0
  c->r[6]=c->r[6]+0xFFFFD400u; // 801E4DE4
  c->r[5]=c->r[5]+0xFFFF9800u; // 801E4DE8
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 801E4DEC
  c->r[4]=c->r[4]+0xFFFFD800u; // 801E4DF0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4DF4
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 801E4DF8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4DFC
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801E4E00
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E04
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 801E4E08
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E0C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801E4E10
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E14
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 801E4E18
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E1C
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 801E4E20
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E24
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 801E4E28
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E2C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4E30
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E34
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4E38
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E3C
  c->r[5]=0u+0xAF0E0000u; // 801E4E40
  c->r[4]=0u+0xB30E0000u; // 801E4E44
  c->r[5]=c->r[5]+0xFFFF9C00u; // 801E4E48
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 801E4E4C
  c->r[4]=c->r[4]+0xFFFFDC00u; // 801E4E50
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E4E54
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 801E4E58
L_801E4E5C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4E5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4E60
  c->r[1]=c->r[1]+0x00000010u; // 801E4E64
  return; // 801E4E68
}

// GXSetTevIndirect
void f_801E4E6C(Ctx* __restrict c) {
  trace_call(0x801E4E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4E6C
  c->r[12]=0u+0x00000000u; // 801E4E70
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 801E4E74
  c->r[4]=c->r[3]+0x00000010u; // 801E4E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4E7C
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 801E4E80
  c->r[11]=0u+0xCC010000u; // 801E4E84
  c->r[0]=0u+0x00000061u; // 801E4E88
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 801E4E8C
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 801E4E90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4E94
  c->r[0]=0u+0x00000000u; // 801E4E98
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 801E4E9C
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 801E4EA0
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E4EA4
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 801E4EA8
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 801E4EAC
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 801E4EB0
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 801E4EB4
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 801E4EB8
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 801E4EBC
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 801E4EC0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E4EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4EC8
  c->r[1]=c->r[1]+0x00000010u; // 801E4ECC
  return; // 801E4ED0
}

// GXSetIndTexMtx
void f_801E4ED4(Ctx* __restrict c) {
  trace_call(0x801E4ED4u);
  cmps(c,0,(int32_t)c->r[3],8); // 801E4ED4
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4ED8
  if (crb(c,2)) { goto L_801E4F20; } // 801E4EDC
  if (!crb(c,0)) { goto L_801E4EFC; } // 801E4EE0
  cmps(c,0,(int32_t)c->r[3],4); // 801E4EE4
  if (crb(c,2)) { goto L_801E4F20; } // 801E4EE8
  if (!crb(c,0)) { goto L_801E4F10; } // 801E4EEC
  cmps(c,0,(int32_t)c->r[3],1); // 801E4EF0
  if (!crb(c,0)) { goto L_801E4F08; } // 801E4EF4
  goto L_801E4F20; // 801E4EF8
L_801E4EFC:;
  cmps(c,0,(int32_t)c->r[3],12); // 801E4EFC
  if (!crb(c,0)) { goto L_801E4F20; } // 801E4F00
  goto L_801E4F18; // 801E4F04
L_801E4F08:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E4F08
  goto L_801E4F24; // 801E4F0C
L_801E4F10:;
  c->r[3]=c->r[3]+0xFFFFFFFBu; // 801E4F10
  goto L_801E4F24; // 801E4F14
L_801E4F18:;
  c->r[3]=c->r[3]+0xFFFFFFF7u; // 801E4F18
  goto L_801E4F24; // 801E4F1C
L_801E4F20:;
  c->r[3]=0u+0x00000000u; // 801E4F20
L_801E4F24:;
  {uint32_t ea=c->r[2]+0xFFFFC3D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E4F24
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E4F28
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4F2C
  c->r[9]=c->r[0]-c->r[3]; // 801E4F30
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4F34
  c->r[8]=c->r[5]+0x00000011u; // 801E4F38
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801E4F3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E4F40
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801E4F44
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E4F48
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 801E4F4C
  c->r[6]=0u+0xCC010000u; // 801E4F50
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E4F54
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E4F58
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E4F5C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E4F60
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 801E4F64
  c->r[7]=0u+0x00000061u; // 801E4F68
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 801E4F6C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801E4F70
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801E4F74
  c->r[5]=0u+0x00000000u; // 801E4F78
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E4F7C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E4F80
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801E4F84
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E4F88
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 801E4F8C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801E4F90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E4F94
  c->r[3]=c->r[9]+0x00000006u; // 801E4F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4F9C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 801E4FA0
  c->r[4]=0u+0x00000000u; // 801E4FA4
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 801E4FA8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801E4FAC
  c->r[5]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 801E4FB0
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801E4FB4
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E4FB8
  c->r[4]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 801E4FBC
  c->r[3]=c->r[9]+0x00000007u; // 801E4FC0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801E4FC4
  c->r[5]=0u+0x00000000u; // 801E4FC8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 801E4FCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4FD0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801E4FD4
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 801E4FD8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801E4FDC
  c->r[4]=(rotl(c->r[8],20)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 801E4FE0
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801E4FE4
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E4FE8
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 801E4FEC
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E4FF0
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 801E4FF4
  c->r[4]=c->r[9]+0x00000008u; // 801E4FF8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801E4FFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E5000
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E5004
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 801E5008
  c->r[0]=0u+0x00000000u; // 801E500C
  c->r[5]=(rotl(c->r[8],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 801E5010
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801E5014
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801E5018
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E501C
  c->r[1]=c->r[1]+0x00000040u; // 801E5020
  return; // 801E5024
}

// GXSetIndTexCoordScale
void f_801E5028(Ctx* __restrict c) {
  trace_call(0x801E5028u);
  cmps(c,0,(int32_t)c->r[3],2); // 801E5028
  if (crb(c,2)) { goto L_801E50B8; } // 801E502C
  if (!crb(c,0)) { goto L_801E5044; } // 801E5030
  cmps(c,0,(int32_t)c->r[3],0); // 801E5034
  if (crb(c,2)) { goto L_801E5050; } // 801E5038
  if (!crb(c,0)) { goto L_801E5084; } // 801E503C
  goto L_801E511C; // 801E5040
L_801E5044:;
  cmps(c,0,(int32_t)c->r[3],4); // 801E5044
  if (!crb(c,0)) { goto L_801E511C; } // 801E5048
  goto L_801E50EC; // 801E504C
L_801E5050:;
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E5050
  c->r[6]=0u+0x00000025u; // 801E5054
  c->r[3]=0u+0xCC010000u; // 801E5058
  c->r[0]=0u+0x00000061u; // 801E505C
  c->r[7]=R32(c->r[8]+0x00000178u); // 801E5060
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 801E5064
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 801E5068
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E506C
  W32(c->r[8]+0x00000178u,c->r[7]); // 801E5070
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5074
  c->r[0]=R32(c->r[8]+0x00000178u); // 801E5078
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E507C
  goto L_801E511C; // 801E5080
L_801E5084:;
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E5084
  c->r[6]=0u+0x00000025u; // 801E5088
  c->r[3]=0u+0xCC010000u; // 801E508C
  c->r[0]=0u+0x00000061u; // 801E5090
  c->r[7]=R32(c->r[8]+0x00000178u); // 801E5094
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 801E5098
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 801E509C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E50A0
  W32(c->r[8]+0x00000178u,c->r[7]); // 801E50A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E50A8
  c->r[0]=R32(c->r[8]+0x00000178u); // 801E50AC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E50B0
  goto L_801E511C; // 801E50B4
L_801E50B8:;
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E50B8
  c->r[6]=0u+0x00000026u; // 801E50BC
  c->r[3]=0u+0xCC010000u; // 801E50C0
  c->r[0]=0u+0x00000061u; // 801E50C4
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 801E50C8
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 801E50CC
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 801E50D0
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E50D4
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 801E50D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E50DC
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 801E50E0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E50E4
  goto L_801E511C; // 801E50E8
L_801E50EC:;
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E50EC
  c->r[6]=0u+0x00000026u; // 801E50F0
  c->r[3]=0u+0xCC010000u; // 801E50F4
  c->r[0]=0u+0x00000061u; // 801E50F8
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 801E50FC
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 801E5100
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 801E5104
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E5108
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 801E510C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5110
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 801E5114
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5118
L_801E511C:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E511C
  c->r[0]=0u+0x00000000u; // 801E5120
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E5124
  return; // 801E5128
}

// GXSetIndTexOrder
void f_801E512C(Ctx* __restrict c) {
  trace_call(0x801E512Cu);
  cmps(c,0,(int32_t)c->r[5],255); // 801E512C
  if (!crb(c,2)) { goto L_801E5138; } // 801E5130
  c->r[5]=0u+0x00000000u; // 801E5134
L_801E5138:;
  cmps(c,0,(int32_t)c->r[4],255); // 801E5138
  if (!crb(c,2)) { goto L_801E5144; } // 801E513C
  c->r[4]=0u+0x00000000u; // 801E5140
L_801E5144:;
  cmps(c,0,(int32_t)c->r[3],2); // 801E5144
  if (crb(c,2)) { goto L_801E519C; } // 801E5148
  if (!crb(c,0)) { goto L_801E5160; } // 801E514C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5150
  if (crb(c,2)) { goto L_801E516C; } // 801E5154
  if (!crb(c,0)) { goto L_801E5184; } // 801E5158
  goto L_801E51C8; // 801E515C
L_801E5160:;
  cmps(c,0,(int32_t)c->r[3],4); // 801E5160
  if (!crb(c,0)) { goto L_801E51C8; } // 801E5164
  goto L_801E51B4; // 801E5168
L_801E516C:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E516C
  c->r[0]=R32(c->r[3]+0x00000170u); // 801E5170
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 801E5174
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 801E5178
  W32(c->r[3]+0x00000170u,c->r[0]); // 801E517C
  goto L_801E51C8; // 801E5180
L_801E5184:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E5184
  c->r[0]=R32(c->r[3]+0x00000170u); // 801E5188
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 801E518C
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 801E5190
  W32(c->r[3]+0x00000170u,c->r[0]); // 801E5194
  goto L_801E51C8; // 801E5198
L_801E519C:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E519C
  c->r[0]=R32(c->r[3]+0x00000170u); // 801E51A0
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 801E51A4
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 801E51A8
  W32(c->r[3]+0x00000170u,c->r[0]); // 801E51AC
  goto L_801E51C8; // 801E51B0
L_801E51B4:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E51B4
  c->r[0]=R32(c->r[3]+0x00000170u); // 801E51B8
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 801E51BC
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 801E51C0
  W32(c->r[3]+0x00000170u,c->r[0]); // 801E51C4
L_801E51C8:;
  c->r[4]=0u+0xCC010000u; // 801E51C8
  c->r[0]=0u+0x00000061u; // 801E51CC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E51D0
  c->r[0]=0u+0x00000000u; // 801E51D4
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E51D8
  c->r[3]=R32(c->r[5]+0x00000170u); // 801E51DC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E51E0
  c->r[3]=R32(c->r[5]+0x000005FCu); // 801E51E4
  c->r[3]=c->r[3]|0x00000003u; // 801E51E8
  W32(c->r[5]+0x000005FCu,c->r[3]); // 801E51EC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E51F0
  return; // 801E51F4
}

// GXSetNumIndStages
void f_801E51F8(Ctx* __restrict c) {
  trace_call(0x801E51F8u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E51F8
  c->r[0]=R32(c->r[4]+0x00000254u); // 801E51FC
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 801E5200
  W32(c->r[4]+0x00000254u,c->r[0]); // 801E5204
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E5208
  c->r[0]=c->r[0]|0x00000006u; // 801E520C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E5210
  return; // 801E5214
}

// GXSetTevDirect
void f_801E5218(Ctx* __restrict c) {
  trace_call(0x801E5218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5218
  c->r[0]=c->lr; // 801E521C
  c->r[4]=0u+0x00000000u; // 801E5220
  c->r[5]=0u+0x00000000u; // 801E5224
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5228
  c->r[0]=0u+0x00000000u; // 801E522C
  c->r[6]=0u+0x00000000u; // 801E5230
  c->r[7]=0u+0x00000000u; // 801E5234
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E5238
  c->r[8]=0u+0x00000000u; // 801E523C
  c->r[9]=0u+0x00000000u; // 801E5240
  c->r[10]=0u+0x00000000u; // 801E5244
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E5248
  c->lr=0x801E5250u; f_801E4E6C(c); // 801E524C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5250
  c->lr=c->r[0]; // 801E5254
  c->r[1]=c->r[1]+0x00000010u; // 801E5258
  return; // 801E525C
}

// fn_801E5260
void f_801E5260(Ctx* __restrict c) {
  trace_call(0x801E5260u);
  return; // 801E5260
}

// __GXSetIndirectMask
void f_801E5264(Ctx* __restrict c) {
  trace_call(0x801E5264u);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E5264
  c->r[4]=0u+0xCC010000u; // 801E5268
  c->r[5]=0u+0x00000061u; // 801E526C
  c->r[0]=0u+0x00000000u; // 801E5270
  c->r[6]=R32(c->r[7]+0x00000174u); // 801E5274
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801E5278
  W32(c->r[7]+0x00000174u,c->r[6]); // 801E527C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5280
  c->r[3]=R32(c->r[7]+0x00000174u); // 801E5284
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E5288
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E528C
  return; // 801E5290
}

// __GXFlushTextureState
void f_801E5294(Ctx* __restrict c) {
  trace_call(0x801E5294u);
  c->r[4]=0u+0xCC010000u; // 801E5294
  c->r[0]=0u+0x00000061u; // 801E5298
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E529C
  c->r[0]=0u+0x00000000u; // 801E52A0
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E52A4
  c->r[3]=R32(c->r[5]+0x00000174u); // 801E52A8
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E52AC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E52B0
  return; // 801E52B4
}

// GXSetTevOp
void f_801E52B8(Ctx* __restrict c) {
  trace_call(0x801E52B8u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E52B8
  c->r[5]=0u+0x804B0000u; // 801E52BC
  c->r[5]=c->r[5]+0x00007F60u; // 801E52C0
  if (!crb(c,2)) { goto L_801E52E0; } // 801E52C4
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E52C8
  c->r[4]=c->r[5]+0x00000000u; // 801E52CC
  c->r[0]=c->r[5]+0x00000028u; // 801E52D0
  c->r[8]=c->r[4]+c->r[6]; // 801E52D4
  c->r[9]=c->r[0]+c->r[6]; // 801E52D8
  goto L_801E52F4; // 801E52DC
L_801E52E0:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E52E0
  c->r[4]=c->r[5]+0x00000014u; // 801E52E4
  c->r[0]=c->r[5]+0x0000003Cu; // 801E52E8
  c->r[8]=c->r[4]+c->r[6]; // 801E52EC
  c->r[9]=c->r[0]+c->r[6]; // 801E52F0
L_801E52F4:;
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E52F4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E52F8
  c->r[3]=R32(c->r[8]+0x00000000u); // 801E52FC
  c->r[4]=0u+0xCC010000u; // 801E5300
  c->r[6]=c->r[7]+c->r[0]; // 801E5304
  c->r[5]=0u+0x00000061u; // 801E5308
  c->r[8]=R32(c->r[6]+0x00000180u); // 801E530C
  c->r[0]=0u+0x00000000u; // 801E5310
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5314
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 801E5318
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 801E531C
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 801E5320
  W32(c->r[6]+0x00000180u,c->r[8]); // 801E5324
  c->r[8]=R32(c->r[6]+0x000001C0u); // 801E5328
  c->r[3]=R32(c->r[9]+0x00000000u); // 801E532C
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 801E5330
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5334
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 801E5338
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 801E533C
  W32(c->r[6]+0x000001C0u,c->r[8]); // 801E5340
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E5344
  return; // 801E5348
}

// GXSetTevColorIn
void f_801E534C(Ctx* __restrict c) {
  trace_call(0x801E534Cu);
  c->r[11]=R32(c->r[2]+0xFFFFC330u); // 801E534C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E5350
  c->r[3]=0u+0xCC010000u; // 801E5354
  c->r[8]=0u+0x00000061u; // 801E5358
  c->r[10]=c->r[11]+c->r[0]; // 801E535C
  c->r[0]=0u+0x00000000u; // 801E5360
  c->r[9]=R32(c->r[10]+0x00000180u); // 801E5364
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 801E5368
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 801E536C
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 801E5370
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 801E5374
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 801E5378
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801E537C
  W32(c->r[10]+0x00000180u,c->r[9]); // 801E5380
  W16(c->r[11]+0x00000002u,c->r[0]); // 801E5384
  return; // 801E5388
}

// GXSetTevAlphaIn
void f_801E538C(Ctx* __restrict c) {
  trace_call(0x801E538Cu);
  c->r[11]=R32(c->r[2]+0xFFFFC330u); // 801E538C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E5390
  c->r[3]=0u+0xCC010000u; // 801E5394
  c->r[8]=0u+0x00000061u; // 801E5398
  c->r[10]=c->r[11]+c->r[0]; // 801E539C
  c->r[0]=0u+0x00000000u; // 801E53A0
  c->r[9]=R32(c->r[10]+0x000001C0u); // 801E53A4
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 801E53A8
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 801E53AC
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 801E53B0
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 801E53B4
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 801E53B8
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 801E53BC
  W32(c->r[10]+0x000001C0u,c->r[9]); // 801E53C0
  W16(c->r[11]+0x00000002u,c->r[0]); // 801E53C4
  return; // 801E53C8
}

// GXSetTevColorOp
void f_801E53CC(Ctx* __restrict c) {
  trace_call(0x801E53CCu);
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E53CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E53D0
  cmps(c,0,(int32_t)c->r[4],1); // 801E53D4
  c->r[9]=c->r[10]+c->r[0]; // 801E53D8
  c->r[11]=R32(c->r[9]+0x00000180u); // 801E53DC
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 801E53E0
  if (crb(c,1)) { goto L_801E53F4; } // 801E53E4
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 801E53E8
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 801E53EC
  goto L_801E53FC; // 801E53F0
L_801E53F4:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 801E53F4
  c->r[11]=c->r[11]|0x00030000u; // 801E53F8
L_801E53FC:;
  c->r[3]=0u+0xCC010000u; // 801E53FC
  c->r[0]=0u+0x00000061u; // 801E5400
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5404
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 801E5408
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 801E540C
  c->r[0]=0u+0x00000000u; // 801E5410
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801E5414
  W32(c->r[9]+0x00000180u,c->r[11]); // 801E5418
  W16(c->r[10]+0x00000002u,c->r[0]); // 801E541C
  return; // 801E5420
}

// GXSetTevAlphaOp
void f_801E5424(Ctx* __restrict c) {
  trace_call(0x801E5424u);
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E5424
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E5428
  cmps(c,0,(int32_t)c->r[4],1); // 801E542C
  c->r[9]=c->r[10]+c->r[0]; // 801E5430
  c->r[11]=R32(c->r[9]+0x000001C0u); // 801E5434
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 801E5438
  if (crb(c,1)) { goto L_801E544C; } // 801E543C
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 801E5440
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 801E5444
  goto L_801E5454; // 801E5448
L_801E544C:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 801E544C
  c->r[11]=c->r[11]|0x00030000u; // 801E5450
L_801E5454:;
  c->r[3]=0u+0xCC010000u; // 801E5454
  c->r[0]=0u+0x00000061u; // 801E5458
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E545C
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 801E5460
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 801E5464
  c->r[0]=0u+0x00000000u; // 801E5468
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 801E546C
  W32(c->r[9]+0x000001C0u,c->r[11]); // 801E5470
  W16(c->r[10]+0x00000002u,c->r[0]); // 801E5474
  return; // 801E5478
}

// GXSetTevColor
void f_801E547C(Ctx* __restrict c) {
  trace_call(0x801E547Cu);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E547C
  c->r[8]=R32(c->r[4]+0x00000000u); // 801E5480
  c->r[0]=c->r[3]+0x000000E0u; // 801E5484
  c->r[4]=0u+0xCC010000u; // 801E5488
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 801E548C
  c->r[5]=0u+0x00000061u; // 801E5490
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E5494
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5498
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 801E549C
  c->r[0]=c->r[3]+0x000000E1u; // 801E54A0
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 801E54A4
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 801E54A8
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801E54AC
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E54B0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E54B4
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 801E54B8
  c->r[0]=0u+0x00000000u; // 801E54BC
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E54C0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E54C4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E54C8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E54CC
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E54D0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E54D4
  return; // 801E54D8
}

// GXSetTevColorS10
void f_801E54DC(Ctx* __restrict c) {
  trace_call(0x801E54DCu);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E54DC
  c->r[8]=R32(c->r[4]+0x00000000u); // 801E54E0
  c->r[0]=c->r[3]+0x000000E0u; // 801E54E4
  c->r[5]=0u+0xCC010000u; // 801E54E8
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 801E54EC
  c->r[6]=0u+0x00000061u; // 801E54F0
  c->r[9]=R32(c->r[4]+0x00000004u); // 801E54F4
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 801E54F8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E54FC
  c->r[0]=c->r[3]+0x000000E1u; // 801E5500
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 801E5504
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E5508
  c->r[4]=rotl(c->r[0],24)&0xFF000000u; // 801E550C
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 801E5510
  c->r[4]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 801E5514
  c->r[0]=0u+0x00000000u; // 801E5518
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E551C
  c->r[4]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[4]&~0x007FF000u); // 801E5520
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E5524
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E5528
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E552C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E5530
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E5534
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E5538
  return; // 801E553C
}

// GXSetTevKColor
void f_801E5540(Ctx* __restrict c) {
  trace_call(0x801E5540u);
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E5540
  c->r[9]=R32(c->r[4]+0x00000000u); // 801E5544
  c->r[3]=c->r[6]+0x000000E0u; // 801E5548
  c->r[4]=0u+0xCC010000u; // 801E554C
  c->r[8]=rotl(c->r[3],24)&0xFF000000u; // 801E5550
  c->r[5]=0u+0x00000061u; // 801E5554
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 801E5558
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E555C
  c->r[7]=0u+0x00000008u; // 801E5560
  c->r[0]=c->r[6]+0x000000E1u; // 801E5564
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 801E5568
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E556C
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 801E5570
  c->r[0]=0u+0x00000000u; // 801E5574
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 801E5578
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 801E557C
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 801E5580
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 801E5584
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5588
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 801E558C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5590
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E5594
  return; // 801E5598
}

// GXSetTevKColorSel
void f_801E559C(Ctx* __restrict c) {
  trace_call(0x801E559Cu);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E559C
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E55A0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 801E55A4
  c->r[3]=c->r[5]+c->r[0]; // 801E55A8
  if (crb(c,2)) { goto L_801E55C0; } // 801E55AC
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E55B0
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 801E55B4
  W32(c->r[3]+0x00000200u,c->r[0]); // 801E55B8
  goto L_801E55CC; // 801E55BC
L_801E55C0:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E55C0
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 801E55C4
  W32(c->r[3]+0x00000200u,c->r[0]); // 801E55C8
L_801E55CC:;
  c->r[4]=0u+0xCC010000u; // 801E55CC
  c->r[0]=0u+0x00000061u; // 801E55D0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E55D4
  c->r[0]=0u+0x00000000u; // 801E55D8
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E55DC
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E55E0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E55E4
  return; // 801E55E8
}

// GXSetTevKAlphaSel
void f_801E55EC(Ctx* __restrict c) {
  trace_call(0x801E55ECu);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E55EC
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E55F0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 801E55F4
  c->r[3]=c->r[5]+c->r[0]; // 801E55F8
  if (crb(c,2)) { goto L_801E5610; } // 801E55FC
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E5600
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 801E5604
  W32(c->r[3]+0x00000200u,c->r[0]); // 801E5608
  goto L_801E561C; // 801E560C
L_801E5610:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E5610
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 801E5614
  W32(c->r[3]+0x00000200u,c->r[0]); // 801E5618
L_801E561C:;
  c->r[4]=0u+0xCC010000u; // 801E561C
  c->r[0]=0u+0x00000061u; // 801E5620
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E5624
  c->r[0]=0u+0x00000000u; // 801E5628
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E562C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E5630
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E5634
  return; // 801E5638
}

// GXSetTevSwapMode
void f_801E563C(Ctx* __restrict c) {
  trace_call(0x801E563Cu);
  c->r[9]=R32(c->r[2]+0xFFFFC330u); // 801E563C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E5640
  c->r[6]=0u+0xCC010000u; // 801E5644
  c->r[3]=0u+0x00000061u; // 801E5648
  c->r[8]=c->r[9]+c->r[0]; // 801E564C
  c->r[0]=0u+0x00000000u; // 801E5650
  c->r[7]=R32(c->r[8]+0x000001C0u); // 801E5654
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 801E5658
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 801E565C
  W32(c->r[8]+0x000001C0u,c->r[7]); // 801E5660
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 801E5664
  c->r[3]=R32(c->r[8]+0x000001C0u); // 801E5668
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E566C
  W16(c->r[9]+0x00000002u,c->r[0]); // 801E5670
  return; // 801E5674
}

// GXSetTevSwapModeTable
void f_801E5678(Ctx* __restrict c) {
  trace_call(0x801E5678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5678
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E567C
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E5680
  c->r[8]=0u+0xCC010000u; // 801E5684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5688
  c->r[9]=0u+0x00000061u; // 801E568C
  c->r[3]=c->r[12]+0x00000001u; // 801E5690
  c->r[0]=0u+0x00000000u; // 801E5694
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5698
  c->r[30]=R32(c->r[2]+0xFFFFC330u); // 801E569C
  c->r[31]=c->r[30]+0x00000200u; // 801E56A0
  c->r[10]=R32(c->r[31]+c->r[11]); // 801E56A4
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 801E56A8
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 801E56AC
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E56B0
  W32(c->r[31]+c->r[11],c->r[10]); // 801E56B4
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E56B8
  c->r[3]=R32(c->r[31]+c->r[11]); // 801E56BC
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 801E56C0
  c->r[3]=R32(c->r[31]+c->r[4]); // 801E56C4
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 801E56C8
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 801E56CC
  W32(c->r[31]+c->r[4],c->r[3]); // 801E56D0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 801E56D4
  c->r[3]=R32(c->r[31]+c->r[4]); // 801E56D8
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 801E56DC
  W16(c->r[30]+0x00000002u,c->r[0]); // 801E56E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E56E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E56E8
  c->r[1]=c->r[1]+0x00000010u; // 801E56EC
  return; // 801E56F0
}

// GXSetAlphaCompare
void f_801E56F4(Ctx* __restrict c) {
  trace_call(0x801E56F4u);
  c->r[8]=0u+0xCC010000u; // 801E56F4
  c->r[0]=0u+0x00000061u; // 801E56F8
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 801E56FC
  c->r[9]=0u+0xF3000000u; // 801E5700
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 801E5704
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E5708
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 801E570C
  c->r[0]=0u+0x00000000u; // 801E5710
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 801E5714
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 801E5718
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 801E571C
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 801E5720
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E5724
  return; // 801E5728
}

// GXSetZTexture
void f_801E572C(Ctx* __restrict c) {
  trace_call(0x801E572Cu);
  cmps(c,0,(int32_t)c->r[4],19); // 801E572C
  c->r[7]=0u+0x00000000u; // 801E5730
  c->r[0]=0u+0x000000F4u; // 801E5734
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 801E5738
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E573C
  if (crb(c,2)) { goto L_801E5768; } // 801E5740
  if (!crb(c,0)) { goto L_801E5754; } // 801E5744
  cmps(c,0,(int32_t)c->r[4],17); // 801E5748
  if (crb(c,2)) { goto L_801E5760; } // 801E574C
  goto L_801E5778; // 801E5750
L_801E5754:;
  cmps(c,0,(int32_t)c->r[4],22); // 801E5754
  if (crb(c,2)) { goto L_801E5770; } // 801E5758
  goto L_801E5778; // 801E575C
L_801E5760:;
  c->r[5]=0u+0x00000000u; // 801E5760
  goto L_801E577C; // 801E5764
L_801E5768:;
  c->r[5]=0u+0x00000001u; // 801E5768
  goto L_801E577C; // 801E576C
L_801E5770:;
  c->r[5]=0u+0x00000002u; // 801E5770
  goto L_801E577C; // 801E5774
L_801E5778:;
  c->r[5]=0u+0x00000002u; // 801E5778
L_801E577C:;
  c->r[4]=0u+0xCC010000u; // 801E577C
  c->r[0]=0u+0x00000061u; // 801E5780
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E5784
  c->r[6]=0u+0x00000000u; // 801E5788
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 801E578C
  c->r[5]=0u+0x000000F5u; // 801E5790
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 801E5794
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 801E5798
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E579C
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E57A0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E57A4
  c->r[0]=0u+0x00000000u; // 801E57A8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E57AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E57B0
  return; // 801E57B4
}

// GXSetTevOrder
void f_801E57B8(Ctx* __restrict c) {
  trace_call(0x801E57B8u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 801E57B8
  c->r[7]=0u+0x00000008u; // 801E57BC
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 801E57C0
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E57C4
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 801E57C8
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E57CC
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 801E57D0
  c->r[9]=c->r[9]+c->r[3]; // 801E57D4
  c->r[7]=c->r[10]+c->r[8]; // 801E57D8
  cmps(c,0,(int32_t)c->r[4],8); // 801E57DC
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 801E57E0
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 801E57E4
  W32(c->r[7]+0x000005A4u,c->r[5]); // 801E57E8
  c->r[7]=c->r[10]+c->r[8]; // 801E57EC
  c->r[9]=c->r[11]&~c->r[0]; // 801E57F0
  if (crb(c,0)) { goto L_801E5814; } // 801E57F4
  c->r[0]=0u+0x00000001u; // 801E57F8
  c->r[8]=R32(c->r[10]+0x000005E8u); // 801E57FC
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 801E5800
  c->r[4]=0u+0x00000000u; // 801E5804
  c->r[0]=c->r[8]&~c->r[0]; // 801E5808
  W32(c->r[10]+0x000005E8u,c->r[0]); // 801E580C
  goto L_801E5828; // 801E5810
L_801E5814:;
  c->r[0]=0u+0x00000001u; // 801E5814
  c->r[8]=R32(c->r[10]+0x000005E8u); // 801E5818
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 801E581C
  c->r[0]=c->r[8]|c->r[0]; // 801E5820
  W32(c->r[10]+0x000005E8u,c->r[0]); // 801E5824
L_801E5828:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E5828
  if (crb(c,2)) { goto L_801E588C; } // 801E582C
  c->r[8]=R32(c->r[7]+0x00000150u); // 801E5830
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 801E5834
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 801E5838
  cmps(c,0,(int32_t)c->r[6],255); // 801E583C
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E5840
  if (!crb(c,2)) { goto L_801E5850; } // 801E5844
  c->r[0]=0u+0x00000007u; // 801E5848
  goto L_801E5860; // 801E584C
L_801E5850:;
  c->r[3]=0u+0x804B0000u; // 801E5850
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801E5854
  c->r[3]=c->r[3]+0x00007FB0u; // 801E5858
  c->r[0]=R32(c->r[3]+c->r[0]); // 801E585C
L_801E5860:;
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 801E5860
  cmps(c,0,(int32_t)c->r[5],255); // 801E5864
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E5868
  c->r[3]=0u+0x00000000u; // 801E586C
  if (crb(c,2)) { goto L_801E5880; } // 801E5870
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 801E5874
  if (!crb(c,2)) { goto L_801E5880; } // 801E5878
  c->r[3]=0u+0x00000001u; // 801E587C
L_801E5880:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 801E5880
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E5884
  goto L_801E58E4; // 801E5888
L_801E588C:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 801E588C
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 801E5890
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 801E5894
  cmps(c,0,(int32_t)c->r[6],255); // 801E5898
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E589C
  if (!crb(c,2)) { goto L_801E58AC; } // 801E58A0
  c->r[0]=0u+0x00000007u; // 801E58A4
  goto L_801E58BC; // 801E58A8
L_801E58AC:;
  c->r[3]=0u+0x804B0000u; // 801E58AC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801E58B0
  c->r[3]=c->r[3]+0x00007FB0u; // 801E58B4
  c->r[0]=R32(c->r[3]+c->r[0]); // 801E58B8
L_801E58BC:;
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 801E58BC
  cmps(c,0,(int32_t)c->r[5],255); // 801E58C0
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E58C4
  c->r[3]=0u+0x00000000u; // 801E58C8
  if (crb(c,2)) { goto L_801E58DC; } // 801E58CC
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 801E58D0
  if (!crb(c,2)) { goto L_801E58DC; } // 801E58D4
  c->r[3]=0u+0x00000001u; // 801E58D8
L_801E58DC:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 801E58DC
  W32(c->r[7]+0x00000150u,c->r[8]); // 801E58E0
L_801E58E4:;
  c->r[4]=0u+0xCC010000u; // 801E58E4
  c->r[0]=0u+0x00000061u; // 801E58E8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E58EC
  c->r[0]=0u+0x00000000u; // 801E58F0
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E58F4
  c->r[3]=R32(c->r[7]+0x00000150u); // 801E58F8
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E58FC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E5900
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E5904
  c->r[0]=c->r[0]|0x00000001u; // 801E5908
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E590C
  return; // 801E5910
}

// GXSetNumTevStages
void f_801E5914(Ctx* __restrict c) {
  trace_call(0x801E5914u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E5914
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E5918
  c->r[3]=R32(c->r[4]+0x00000254u); // 801E591C
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 801E5920
  W32(c->r[4]+0x00000254u,c->r[3]); // 801E5924
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E5928
  c->r[0]=c->r[0]|0x00000004u; // 801E592C
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E5930
  return; // 801E5934
}

// GXSetFog
void f_801E5938(Ctx* __restrict c) {
  trace_call(0x801E5938u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5938
  c->r[0]=c->lr; // 801E593C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E5940
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801E5944
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801E5948
  c->r[8]=0u+0x00000000u; // 801E594C
  c->r[9]=0u+0x00000000u; // 801E5950
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E5954
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 801E5958
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E595C
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 801E5960
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E5964
  c->r[29]=c->r[4]|c->r[4]; // 801E5968
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E596C
  if (crb(c,2)) { goto L_801E59BC; } // 801E5970
  fcmp(c,0,c->f[4],c->f[3]); // 801E5974
  if (crb(c,2)) { goto L_801E5984; } // 801E5978
  fcmp(c,0,c->f[2],c->f[1]); // 801E597C
  if (!crb(c,2)) { goto L_801E5994; } // 801E5980
L_801E5984:;
  {uint32_t ea=c->r[2]+0xFFFFC3E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5984
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E5988
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801E598C
  goto L_801E5AAC; // 801E5990
L_801E5994:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 801E5994
  {uint32_t ea=c->r[2]+0xFFFFC3E4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801E5998
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 801E599C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 801E59A0
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 801E59A4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 801E59A8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801E59AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801E59B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801E59B4
  goto L_801E5AAC; // 801E59B8
L_801E59BC:;
  fcmp(c,0,c->f[4],c->f[3]); // 801E59BC
  if (crb(c,2)) { goto L_801E59CC; } // 801E59C0
  fcmp(c,0,c->f[2],c->f[1]); // 801E59C4
  if (!crb(c,2)) { goto L_801E59DC; } // 801E59C8
L_801E59CC:;
  {uint32_t ea=c->r[2]+0xFFFFC3E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E59CC
  {uint32_t ea=c->r[2]+0xFFFFC3E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E59D0
  c->f[31]=c->f[3]; // 801E59D4
  goto L_801E59F8; // 801E59D8
L_801E59DC:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 801E59DC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 801E59E0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801E59E4
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 801E59E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801E59EC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 801E59F0
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 801E59F4
L_801E59F8:;
  {uint32_t ea=c->r[2]+0xFFFFC3E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E59F8
  c->r[28]=0u+0x00000000u; // 801E59FC
  {uint32_t ea=c->r[2]+0xFFFFC3F0u; c->f[0]=RF64(ea);} // 801E5A00
  goto L_801E5A10; // 801E5A04
L_801E5A08:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 801E5A08
  c->r[28]=c->r[28]+0x00000001u; // 801E5A0C
L_801E5A10:;
  fcmp(c,0,c->f[4],c->f[0]); // 801E5A10
  if (crb(c,1)) { IRQCHK(c); goto L_801E5A08; } // 801E5A14
  {uint32_t ea=c->r[2]+0xFFFFC400u; c->f[0]=RF64(ea);} // 801E5A18
  {uint32_t ea=c->r[2]+0xFFFFC3F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E5A1C
  {uint32_t ea=c->r[2]+0xFFFFC3E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E5A20
  goto L_801E5A30; // 801E5A24
L_801E5A28:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 801E5A28
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801E5A2C
L_801E5A30:;
  fcmp(c,0,c->f[4],c->f[1]); // 801E5A30
  c->r[0]=c->cr; // 801E5A34
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801E5A38
  if (crb(c,2)) { goto L_801E5A48; } // 801E5A3C
  fcmp(c,0,c->f[4],c->f[0]); // 801E5A40
  if (crb(c,0)) { IRQCHK(c); goto L_801E5A28; } // 801E5A44
L_801E5A48:;
  c->r[0]=c->r[28]+0x00000001u; // 801E5A48
  c->r[3]=0u+0x00000001u; // 801E5A4C
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E5A50
  {uint32_t ea=c->r[2]+0xFFFFC408u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5A54
  c->r[0]=0u+0x43300000u; // 801E5A58
  {uint32_t ea=c->r[2]+0xFFFFC410u; c->f[2]=RF64(ea);} // 801E5A5C
  c->r[3]=c->r[3]^0x80000000u; // 801E5A60
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E5A64
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801E5A68
  W32(c->r[1]+0x00000014u,c->r[3]); // 801E5A6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E5A70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801E5A74
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 801E5A78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E5A7C
  c->lr=0x801E5A84u; f_801E7834(c); // 801E5A80
  c->r[0]=c->r[28]+0x00000001u; // 801E5A84
  c->r[8]=0u+0x00000000u; // 801E5A88
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 801E5A8C
  c->r[9]=0u+0x00000000u; // 801E5A90
  c->r[9]=(rotl(c->r[0],0)&0x0000001Fu)|(c->r[9]&~0x0000001Fu); // 801E5A94
  c->r[3]=0u+0x000000EFu; // 801E5A98
  c->r[0]=0u+0x000000F0u; // 801E5A9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 801E5AA0
  c->r[8]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5AA4
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 801E5AA8
L_801E5AAC:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5AAC
  c->r[4]=0u+0xCC010000u; // 801E5AB0
  c->r[5]=0u+0x00000061u; // 801E5AB4
  c->r[0]=0u+0x000000EEu; // 801E5AB8
  c->r[6]=0u+0x00000000u; // 801E5ABC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5AC0
  c->r[6]=(rotl(c->r[3],20)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 801E5AC4
  c->r[10]=R32(c->r[1]+0x00000008u); // 801E5AC8
  c->r[6]=(rotl(c->r[3],20)&0x0007F800u)|(c->r[6]&~0x0007F800u); // 801E5ACC
  c->r[7]=0u+0x00000000u; // 801E5AD0
  c->r[6]=(rotl(c->r[3],20)&0x00080000u)|(c->r[6]&~0x00080000u); // 801E5AD4
  c->r[3]=0u+0x000000F1u; // 801E5AD8
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E5ADC
  c->r[7]=(rotl(c->r[10],20)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 801E5AE0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5AE4
  c->r[7]=(rotl(c->r[10],20)&0x0007F800u)|(c->r[7]&~0x0007F800u); // 801E5AE8
  c->r[7]=(rotl(c->r[10],20)&0x00080000u)|(c->r[7]&~0x00080000u); // 801E5AEC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E5AF0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5AF4
  c->r[7]=(rotl(c->r[30],20)&0x00100000u)|(c->r[7]&~0x00100000u); // 801E5AF8
  c->r[7]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[7]&~0x00E00000u); // 801E5AFC
  c->r[6]=0u+0x00000000u; // 801E5B00
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 801E5B04
  c->r[7]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 801E5B08
  c->r[6]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 801E5B0C
  c->r[0]=0u+0x000000F2u; // 801E5B10
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5B14
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E5B18
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E5B1C
  c->r[0]=0u+0x00000000u; // 801E5B20
  W32(c->r[4]+0xFFFF8000u,c->r[9]); // 801E5B24
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5B28
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 801E5B2C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5B30
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5B34
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E5B38
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801E5B3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801E5B40
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E5B44
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E5B48
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E5B4C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E5B50
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E5B54
  c->lr=c->r[0]; // 801E5B58
  c->r[1]=c->r[1]+0x00000040u; // 801E5B5C
  return; // 801E5B60
}

// GXInitFogAdjTable
void f_801E5B64(Ctx* __restrict c) {
  trace_call(0x801E5B64u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5B64
  c->r[0]=c->lr; // 801E5B68
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E5B6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801E5B70
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801E5B74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801E5B78
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801E5B7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801E5B80
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801E5B84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801E5B88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801E5B8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801E5B90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801E5B94
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 801E5B98
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 801E5B9C
  {uint32_t ea=c->r[2]+0xFFFFC418u; c->f[1]=RF64(ea);} // 801E5BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5BA4
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5BA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5BAC
  fcmp(c,0,c->f[1],c->f[0]); // 801E5BB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5BB4
  if (!crb(c,2)) { goto L_801E5BDC; } // 801E5BB8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E5BBC
  {uint32_t ea=c->r[2]+0xFFFFC3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5BC0
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E5BC4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801E5BC8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5BCC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801E5BD0
  c->f[26]=c->ps1[26]=S(c->f[1]/c->f[0]); // 801E5BD4
  goto L_801E5BF0; // 801E5BD8
L_801E5BDC:;
  {uint32_t ea=c->r[2]+0xFFFFC3E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E5BDC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E5BE0
  {uint32_t ea=c->r[2]+0xFFFFC420u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5BE4
  c->f[26]=c->ps1[26]=S(c->f[2]/c->f[1]); // 801E5BE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 801E5BEC
L_801E5BF0:;
  c->r[31]=0u+0x43300000u; // 801E5BF0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E5BF4
  {uint32_t ea=c->r[2]+0xFFFFC428u; c->f[28]=RF64(ea);} // 801E5BF8
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[1]); // 801E5BFC
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E5C00
  c->r[30]=c->r[3]|c->r[3]; // 801E5C04
  {uint32_t ea=c->r[2]+0xFFFFC3F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E5C08
  c->r[29]=0u+0x00000000u; // 801E5C0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E5C10
  {uint32_t ea=c->r[2]+0xFFFFC3E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801E5C14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801E5C18
  {uint32_t ea=c->r[2]+0xFFFFC424u; c->f[31]=c->ps1[31]=RF32(ea);} // 801E5C1C
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[1]); // 801E5C20
L_801E5C24:;
  c->r[0]=c->r[29]+0x00000001u; // 801E5C24
  W32(c->r[1]+0x00000008u,c->r[31]); // 801E5C28
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801E5C2C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E5C30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E5C34
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801E5C38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[27]); // 801E5C3C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[26]); // 801E5C40
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801E5C44
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 801E5C48
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 801E5C4C
  c->lr=0x801E5C54u; f_801F75D8(c); // 801E5C50
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801E5C54
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801E5C58
  c->lr=0x801E5C60u; f_801E7834(c); // 801E5C5C
  c->r[29]=c->r[29]+0x00000001u; // 801E5C60
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; // 801E5C64
  cmpu(c,0,c->r[29],0x0000000Au); // 801E5C68
  W16(c->r[30]+0x00000000u,c->r[0]); // 801E5C6C
  c->r[30]=c->r[30]+0x00000002u; // 801E5C70
  if (crb(c,0)) { IRQCHK(c); goto L_801E5C24; } // 801E5C74
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801E5C78
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801E5C7C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801E5C80
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801E5C84
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801E5C88
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801E5C8C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801E5C90
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801E5C94
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801E5C98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801E5C9C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 801E5CA0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 801E5CA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5CA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5CAC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801E5CB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5CB4
  c->lr=c->r[0]; // 801E5CB8
  c->r[1]=c->r[1]+0x00000080u; // 801E5CBC
  return; // 801E5CC0
}

// GXSetFogRangeAdj
void f_801E5CC4(Ctx* __restrict c) {
  trace_call(0x801E5CC4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E5CC4
  if (crb(c,2)) { goto L_801E5DB0; } // 801E5CC8
  c->r[12]=R16(c->r[5]+0x00000000u); // 801E5CCC
  c->r[11]=0u+0x00000000u; // 801E5CD0
  c->r[10]=R16(c->r[5]+0x00000002u); // 801E5CD4
  c->r[6]=0u+0xCC010000u; // 801E5CD8
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801E5CDC
  c->r[0]=0u+0x00000061u; // 801E5CE0
  c->r[9]=c->r[11]|c->r[11]; // 801E5CE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E5CE8
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801E5CEC
  c->r[7]=0u+0x000000E9u; // 801E5CF0
  c->r[8]=c->r[9]|c->r[9]; // 801E5CF4
  c->r[12]=R16(c->r[5]+0x00000004u); // 801E5CF8
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5CFC
  c->r[11]=0u+0x00000000u; // 801E5D00
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801E5D04
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5D08
  c->r[9]=c->r[11]|c->r[11]; // 801E5D0C
  c->r[10]=R16(c->r[5]+0x00000006u); // 801E5D10
  c->r[7]=0u+0x000000EAu; // 801E5D14
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E5D18
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801E5D1C
  c->r[12]=R16(c->r[5]+0x00000008u); // 801E5D20
  c->r[8]=c->r[9]|c->r[9]; // 801E5D24
  c->r[11]=0u+0x00000000u; // 801E5D28
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5D2C
  c->r[10]=R16(c->r[5]+0x0000000Au); // 801E5D30
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801E5D34
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5D38
  c->r[9]=c->r[11]|c->r[11]; // 801E5D3C
  c->r[7]=0u+0x000000EBu; // 801E5D40
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801E5D44
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E5D48
  c->r[8]=c->r[9]|c->r[9]; // 801E5D4C
  c->r[12]=R16(c->r[5]+0x0000000Cu); // 801E5D50
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5D54
  c->r[11]=0u+0x00000000u; // 801E5D58
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801E5D5C
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5D60
  c->r[9]=c->r[11]|c->r[11]; // 801E5D64
  c->r[10]=R16(c->r[5]+0x0000000Eu); // 801E5D68
  c->r[7]=0u+0x000000ECu; // 801E5D6C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E5D70
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801E5D74
  c->r[12]=R16(c->r[5]+0x00000010u); // 801E5D78
  c->r[8]=c->r[9]|c->r[9]; // 801E5D7C
  c->r[11]=0u+0x00000000u; // 801E5D80
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5D84
  c->r[10]=R16(c->r[5]+0x00000012u); // 801E5D88
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5D8C
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 801E5D90
  c->r[9]=c->r[11]|c->r[11]; // 801E5D94
  c->r[7]=0u+0x000000EDu; // 801E5D98
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 801E5D9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E5DA0
  c->r[8]=c->r[9]|c->r[9]; // 801E5DA4
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 801E5DA8
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5DAC
L_801E5DB0:;
  c->r[0]=c->r[4]+0x00000156u; // 801E5DB0
  c->r[6]=0u+0x00000000u; // 801E5DB4
  c->r[6]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 801E5DB8
  c->r[4]=0u+0xCC010000u; // 801E5DBC
  c->r[0]=0u+0x00000061u; // 801E5DC0
  c->r[5]=0u+0x000000E8u; // 801E5DC4
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 801E5DC8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E5DCC
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E5DD0
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E5DD4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5DD8
  c->r[0]=0u+0x00000000u; // 801E5DDC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E5DE0
  return; // 801E5DE4
}

// GXSetBlendMode
void f_801E5DE8(Ctx* __restrict c) {
  trace_call(0x801E5DE8u);
  c->r[10]=R32(c->r[2]+0xFFFFC330u); // 801E5DE8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801E5DEC
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 801E5DF0
  c->r[7]=0u+0xCC010000u; // 801E5DF4
  c->r[0]=cntlz(c->r[0]); // 801E5DF8
  c->r[9]=R32(c->r[10]+0x00000220u); // 801E5DFC
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 801E5E00
  c->r[8]=cntlz(c->r[8]); // 801E5E04
  c->r[0]=0u+0x00000061u; // 801E5E08
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 801E5E0C
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 801E5E10
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 801E5E14
  c->r[0]=0u+0x00000000u; // 801E5E18
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 801E5E1C
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 801E5E20
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 801E5E24
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 801E5E28
  W32(c->r[10]+0x00000220u,c->r[9]); // 801E5E2C
  W16(c->r[10]+0x00000002u,c->r[0]); // 801E5E30
  return; // 801E5E34
}

// GXSetColorUpdate
void f_801E5E38(Ctx* __restrict c) {
  trace_call(0x801E5E38u);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E5E38
  c->r[4]=0u+0xCC010000u; // 801E5E3C
  c->r[5]=0u+0x00000061u; // 801E5E40
  c->r[0]=0u+0x00000000u; // 801E5E44
  c->r[6]=R32(c->r[7]+0x00000220u); // 801E5E48
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 801E5E4C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5E50
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5E54
  W32(c->r[7]+0x00000220u,c->r[6]); // 801E5E58
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E5E5C
  return; // 801E5E60
}

// GXSetAlphaUpdate
void f_801E5E64(Ctx* __restrict c) {
  trace_call(0x801E5E64u);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E5E64
  c->r[4]=0u+0xCC010000u; // 801E5E68
  c->r[5]=0u+0x00000061u; // 801E5E6C
  c->r[0]=0u+0x00000000u; // 801E5E70
  c->r[6]=R32(c->r[7]+0x00000220u); // 801E5E74
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 801E5E78
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5E7C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5E80
  W32(c->r[7]+0x00000220u,c->r[6]); // 801E5E84
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E5E88
  return; // 801E5E8C
}

// GXSetZMode
void f_801E5E90(Ctx* __restrict c) {
  trace_call(0x801E5E90u);
  c->r[9]=R32(c->r[2]+0xFFFFC330u); // 801E5E90
  c->r[6]=0u+0xCC010000u; // 801E5E94
  c->r[7]=0u+0x00000061u; // 801E5E98
  c->r[0]=0u+0x00000000u; // 801E5E9C
  c->r[8]=R32(c->r[9]+0x00000228u); // 801E5EA0
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 801E5EA4
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 801E5EA8
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E5EAC
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 801E5EB0
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 801E5EB4
  W32(c->r[9]+0x00000228u,c->r[8]); // 801E5EB8
  W16(c->r[9]+0x00000002u,c->r[0]); // 801E5EBC
  return; // 801E5EC0
}

// GXSetZCompLoc
void f_801E5EC4(Ctx* __restrict c) {
  trace_call(0x801E5EC4u);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E5EC4
  c->r[4]=0u+0xCC010000u; // 801E5EC8
  c->r[5]=0u+0x00000061u; // 801E5ECC
  c->r[0]=0u+0x00000000u; // 801E5ED0
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 801E5ED4
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 801E5ED8
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 801E5EDC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5EE0
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 801E5EE4
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 801E5EE8
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E5EEC
  return; // 801E5EF0
}

// GXSetPixelFmt
void f_801E5EF4(Ctx* __restrict c) {
  trace_call(0x801E5EF4u);
  c->r[9]=R32(c->r[2]+0xFFFFC330u); // 801E5EF4
  c->r[6]=0u+0x804B0000u; // 801E5EF8
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E5EFC
  c->r[6]=c->r[6]+0x00007FD8u; // 801E5F00
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 801E5F04
  c->r[0]=R32(c->r[6]+c->r[7]); // 801E5F08
  c->r[5]=c->r[8]|c->r[8]; // 801E5F0C
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 801E5F10
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 801E5F14
  cmpu(c,0,c->r[8],c->r[5]); // 801E5F18
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 801E5F1C
  if (crb(c,2)) { goto L_801E5F58; } // 801E5F20
  c->r[5]=0u+0xCC010000u; // 801E5F24
  c->r[0]=0u+0x00000061u; // 801E5F28
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E5F2C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E5F30
  c->r[4]=cntlz(c->r[0]); // 801E5F34
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 801E5F38
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E5F3C
  c->r[0]=R32(c->r[9]+0x00000254u); // 801E5F40
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 801E5F44
  W32(c->r[9]+0x00000254u,c->r[0]); // 801E5F48
  c->r[0]=R32(c->r[9]+0x000005FCu); // 801E5F4C
  c->r[0]=c->r[0]|0x00000004u; // 801E5F50
  W32(c->r[9]+0x000005FCu,c->r[0]); // 801E5F54
L_801E5F58:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 801E5F58
  cmpu(c,0,c->r[0],0x00000004u); // 801E5F5C
  if (!crb(c,2)) { goto L_801E5F90; } // 801E5F60
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801E5F64
  c->r[4]=R32(c->r[9]+0x00000224u); // 801E5F68
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 801E5F6C
  c->r[3]=0u+0xCC010000u; // 801E5F70
  c->r[0]=0u+0x00000042u; // 801E5F74
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801E5F78
  W32(c->r[9]+0x00000224u,c->r[4]); // 801E5F7C
  c->r[0]=0u+0x00000061u; // 801E5F80
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5F84
  c->r[0]=R32(c->r[9]+0x00000224u); // 801E5F88
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E5F8C
L_801E5F90:;
  c->r[0]=0u+0x00000000u; // 801E5F90
  W16(c->r[9]+0x00000002u,c->r[0]); // 801E5F94
  return; // 801E5F98
}

// GXSetDither
void f_801E5F9C(Ctx* __restrict c) {
  trace_call(0x801E5F9Cu);
  c->r[7]=R32(c->r[2]+0xFFFFC330u); // 801E5F9C
  c->r[4]=0u+0xCC010000u; // 801E5FA0
  c->r[5]=0u+0x00000061u; // 801E5FA4
  c->r[0]=0u+0x00000000u; // 801E5FA8
  c->r[6]=R32(c->r[7]+0x00000220u); // 801E5FAC
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 801E5FB0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E5FB4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 801E5FB8
  W32(c->r[7]+0x00000220u,c->r[6]); // 801E5FBC
  W16(c->r[7]+0x00000002u,c->r[0]); // 801E5FC0
  return; // 801E5FC4
}

// GXSetDstAlpha
void f_801E5FC8(Ctx* __restrict c) {
  trace_call(0x801E5FC8u);
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E5FC8
  c->r[5]=0u+0xCC010000u; // 801E5FCC
  c->r[6]=0u+0x00000061u; // 801E5FD0
  c->r[0]=0u+0x00000000u; // 801E5FD4
  c->r[7]=R32(c->r[8]+0x00000224u); // 801E5FD8
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 801E5FDC
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 801E5FE0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 801E5FE4
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 801E5FE8
  W32(c->r[8]+0x00000224u,c->r[7]); // 801E5FEC
  W16(c->r[8]+0x00000002u,c->r[0]); // 801E5FF0
  return; // 801E5FF4
}

// GXSetFieldMask
void f_801E5FF8(Ctx* __restrict c) {
  trace_call(0x801E5FF8u);
  c->r[5]=0u+0xCC010000u; // 801E5FF8
  c->r[0]=0u+0x00000061u; // 801E5FFC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6000
  c->r[0]=0u+0x00000044u; // 801E6004
  c->r[6]=0u+0x00000000u; // 801E6008
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 801E600C
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 801E6010
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E6014
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E6018
  c->r[0]=0u+0x00000000u; // 801E601C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801E6020
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E6024
  return; // 801E6028
}

// GXSetFieldMode
void f_801E602C(Ctx* __restrict c) {
  trace_call(0x801E602Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E602C
  c->r[0]=c->lr; // 801E6030
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E6034
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6038
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E603C
  c->r[31]=0u+0xCC010000u; // 801E6040
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6044
  c->r[30]=0u+0x00000061u; // 801E6048
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E604C
  c->r[29]=c->r[3]|c->r[3]; // 801E6050
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801E6054
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 801E6058
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 801E605C
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801E6060
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 801E6064
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801E6068
  c->lr=0x801E6070u; f_801E5294(c); // 801E606C
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 801E6070
  c->r[0]=c->r[29]|0x68000000u; // 801E6074
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 801E6078
  c->lr=0x801E6080u; f_801E5294(c); // 801E607C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6080
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6084
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6088
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E608C
  c->lr=c->r[0]; // 801E6090
  c->r[1]=c->r[1]+0x00000020u; // 801E6094
  return; // 801E6098
}

// GXCallDisplayList
void f_801E609C(Ctx* __restrict c) {
  trace_call(0x801E609Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E609C
  c->r[0]=c->lr; // 801E60A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E60A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E60A8
  c->r[31]=R32(c->r[2]+0xFFFFC330u); // 801E60AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E60B0
  c->r[30]=c->r[4]|c->r[4]; // 801E60B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E60B8
  c->r[29]=c->r[3]|c->r[3]; // 801E60BC
  c->r[0]=R32(c->r[31]+0x000005FCu); // 801E60C0
  cmps(c,0,(int32_t)c->r[0],0); // 801E60C4
  if (crb(c,2)) { goto L_801E60D0; } // 801E60C8
  c->lr=0x801E60D0u; f_801E267C(c); // 801E60CC
L_801E60D0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E60D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E60D4
  if (!crb(c,2)) { goto L_801E60E0; } // 801E60D8
  c->lr=0x801E60E0u; f_801E2A40(c); // 801E60DC
L_801E60E0:;
  c->r[3]=0u+0xCC010000u; // 801E60E0
  c->r[0]=0u+0x00000040u; // 801E60E4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E60E8
  W32(c->r[3]+0xFFFF8000u,c->r[29]); // 801E60EC
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 801E60F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E60F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E60F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E60FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6100
  c->lr=c->r[0]; // 801E6104
  c->r[1]=c->r[1]+0x00000020u; // 801E6108
  return; // 801E610C
}

// __GXSetProjection
void f_801E6110(Ctx* __restrict c) {
  trace_call(0x801E6110u);
  c->r[4]=0u+0xCC010000u; // 801E6110
  c->r[0]=0u+0x00000010u; // 801E6114
  c->r[3]=0u+0x00060000u; // 801E6118
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E611C
  c->r[0]=c->r[3]+0x00001020u; // 801E6120
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E6124
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6128
  c->r[5]=c->r[4]+0xFFFF8000u; // 801E612C
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 801E6130
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 801E6134
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 801E6138
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E613C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E6140
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 801E6144
  c->r[0]=R32(c->r[3]+0x00000528u); // 801E6148
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E614C
  return; // 801E6150
}

// GXSetProjection
void f_801E6154(Ctx* __restrict c) {
  trace_call(0x801E6154u);
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E6154
  cmps(c,0,(int32_t)c->r[4],1); // 801E6158
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E615C
  W32(c->r[5]+0x00000528u,c->r[4]); // 801E6160
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E6164
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 801E6168
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E616C
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 801E6170
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E6174
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 801E6178
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 801E617C
  if (!crb(c,2)) { goto L_801E6198; } // 801E6180
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E6184
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E6188
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 801E618C
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 801E6190
  goto L_801E61A8; // 801E6194
L_801E6198:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E6198
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E619C
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 801E61A0
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 801E61A4
L_801E61A8:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 801E61A8
  c->r[0]=c->r[0]|0x08000000u; // 801E61AC
  W32(c->r[5]+0x000005FCu,c->r[0]); // 801E61B0
  return; // 801E61B4
}

// GXSetProjectionv
void f_801E61B8(Ctx* __restrict c) {
  trace_call(0x801E61B8u);
  {uint32_t ea=c->r[2]+0xFFFFC430u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E61B8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E61BC
  fcmp(c,0,c->f[1],c->f[0]); // 801E61C0
  if (!crb(c,2)) { goto L_801E61D0; } // 801E61C4
  c->r[0]=0u+0x00000000u; // 801E61C8
  goto L_801E61D4; // 801E61CC
L_801E61D0:;
  c->r[0]=0u+0x00000001u; // 801E61D0
L_801E61D4:;
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E61D4
  W32(c->r[4]+0x00000528u,c->r[0]); // 801E61D8
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 801E61DC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 801E61E0
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 801E61E4
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 801E61E8
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 801E61EC
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 801E61F0
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E61F4
  c->r[0]=c->r[0]|0x08000000u; // 801E61F8
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E61FC
  return; // 801E6200
}

// GXLoadPosMtxImm
void f_801E6204(Ctx* __restrict c) {
  trace_call(0x801E6204u);
  c->r[5]=0u+0xCC010000u; // 801E6204
  c->r[0]=0u+0x00000010u; // 801E6208
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E620C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6210
  c->r[0]=c->r[4]|0x000B0000u; // 801E6214
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6218
  c->r[4]=c->r[5]+0xFFFF8000u; // 801E621C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 801E6220
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 801E6224
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 801E6228
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 801E622C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801E6230
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 801E6234
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801E6238
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 801E623C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801E6240
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E6244
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E6248
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801E624C
  return; // 801E6250
}

// GXLoadNrmMtxImm
void f_801E6254(Ctx* __restrict c) {
  trace_call(0x801E6254u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E6254
  c->r[5]=0u+0xCC010000u; // 801E6258
  c->r[4]=c->r[0]-c->r[4]; // 801E625C
  c->r[0]=0u+0x00000010u; // 801E6260
  c->r[4]=c->r[4]+0x00000400u; // 801E6264
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6268
  c->r[0]=c->r[4]|0x00080000u; // 801E626C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6270
  c->r[4]=c->r[5]+0xFFFF8000u; // 801E6274
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 801E6278
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E627C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 801E6280
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E6284
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801E6288
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E628C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801E6290
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 801E6294
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801E6298
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801E629C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E62A0
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801E62A4
  return; // 801E62A8
}

// GXSetCurrentMtx
void f_801E62AC(Ctx* __restrict c) {
  trace_call(0x801E62ACu);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E62AC
  c->r[0]=R32(c->r[4]+0x00000080u); // 801E62B0
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 801E62B4
  W32(c->r[4]+0x00000080u,c->r[0]); // 801E62B8
  c->r[0]=R32(c->r[4]+0x000005FCu); // 801E62BC
  c->r[0]=c->r[0]|0x04000000u; // 801E62C0
  W32(c->r[4]+0x000005FCu,c->r[0]); // 801E62C4
  return; // 801E62C8
}

// GXLoadTexMtxImm
void f_801E62CC(Ctx* __restrict c) {
  trace_call(0x801E62CCu);
  cmpu(c,0,c->r[4],0x00000040u); // 801E62CC
  if (crb(c,0)) { goto L_801E62E4; } // 801E62D0
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801E62D4
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E62D8
  c->r[7]=c->r[4]+0x00000500u; // 801E62DC
  goto L_801E62E8; // 801E62E0
L_801E62E4:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E62E4
L_801E62E8:;
  cmps(c,0,(int32_t)c->r[5],1); // 801E62E8
  if (!crb(c,2)) { goto L_801E62F8; } // 801E62EC
  c->r[4]=0u+0x00000008u; // 801E62F0
  goto L_801E62FC; // 801E62F4
L_801E62F8:;
  c->r[4]=0u+0x0000000Cu; // 801E62F8
L_801E62FC:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 801E62FC
  c->r[4]=0u+0xCC010000u; // 801E6300
  c->r[0]=0u+0x00000010u; // 801E6304
  cmps(c,0,(int32_t)c->r[5],0); // 801E6308
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 801E630C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6310
  c->r[0]=c->r[7]|c->r[5]; // 801E6314
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6318
  if (!crb(c,2)) { goto L_801E6358; } // 801E631C
  c->r[4]=c->r[4]+0xFFFF8000u; // 801E6320
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 801E6324
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 801E6328
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 801E632C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 801E6330
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 801E6334
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 801E6338
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 801E633C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 801E6340
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801E6344
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E6348
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E634C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801E6350
  return; // 801E6354
L_801E6358:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 801E6358
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 801E635C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 801E6360
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 801E6364
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 801E6368
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 801E636C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E6370
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 801E6374
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801E6378
  return; // 801E637C
}

// __GXSetViewport
void f_801E6380(Ctx* __restrict c) {
  trace_call(0x801E6380u);
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E6380
  c->r[3]=0u+0x00050000u; // 801E6384
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[6]=c->ps1[6]=RF32(ea);} // 801E6388
  c->r[4]=0u+0xCC010000u; // 801E638C
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E6390
  c->r[5]=0u+0x00000010u; // 801E6394
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801E6398
  c->r[0]=c->r[3]+0x0000101Au; // 801E639C
  c->f[1]=-c->f[2]; // 801E63A0
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E63A4
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 801E63A8
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 801E63AC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 801E63B0
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E63B4
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 801E63B8
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E63BC
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E63C0
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 801E63C4
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E63C8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 801E63CC
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 801E63D0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 801E63D4
  {uint32_t ea=c->r[2]+0xFFFFC43Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801E63D8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 801E63DC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E63E0
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 801E63E4
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 801E63E8
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 801E63EC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801E63F0
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 801E63F4
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 801E63F8
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 801E63FC
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 801E6400
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801E6404
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801E6408
  return; // 801E640C
}

// GXSetViewportJitter
void f_801E6410(Ctx* __restrict c) {
  trace_call(0x801E6410u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E6410
  if (!crb(c,2)) { goto L_801E6420; } // 801E6414
  {uint32_t ea=c->r[2]+0xFFFFC438u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E6418
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801E641C
L_801E6420:;
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E6420
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 801E6424
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 801E6428
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 801E642C
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 801E6430
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 801E6434
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 801E6438
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801E643C
  c->r[0]=c->r[0]|0x10000000u; // 801E6440
  W32(c->r[3]+0x000005FCu,c->r[0]); // 801E6444
  return; // 801E6448
}

// GXSetViewport
void f_801E644C(Ctx* __restrict c) {
  trace_call(0x801E644Cu);
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E644C
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 801E6450
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 801E6454
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 801E6458
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 801E645C
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 801E6460
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 801E6464
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801E6468
  c->r[0]=c->r[0]|0x10000000u; // 801E646C
  W32(c->r[3]+0x000005FCu,c->r[0]); // 801E6470
  return; // 801E6474
}

// GXGetViewportv
void f_801E6478(Ctx* __restrict c) {
  trace_call(0x801E6478u);
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E6478
  {uint32_t ea=c->r[4]+0x00000544u; psq_load(c,2,ea,0,0);} // 801E647C
  {uint32_t ea=c->r[4]+0x0000054Cu; psq_load(c,1,ea,0,0);} // 801E6480
  {uint32_t ea=c->r[4]+0x00000554u; psq_load(c,0,ea,0,0);} // 801E6484
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 801E6488
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 801E648C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 801E6490
  return; // 801E6494
}

// fn_801E6498
void f_801E6498(Ctx* __restrict c) {
  trace_call(0x801E6498u);
  {uint32_t ea=c->r[2]+0xFFFFC440u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E6498
  {uint32_t ea=c->r[2]+0xFFFFC434u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E649C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801E64A0
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E64A4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801E64A8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801E64AC
  {uint32_t ea=c->r[3]+0x0000055Cu; WF32(ea,c->f[2]);} // 801E64B0
  {uint32_t ea=c->r[3]+0x00000560u; WF32(ea,c->f[0]);} // 801E64B4
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801E64B8
  c->r[0]=c->r[0]|0x10000000u; // 801E64BC
  W32(c->r[3]+0x000005FCu,c->r[0]); // 801E64C0
  return; // 801E64C4
}

// GXSetScissor
void f_801E64C8(Ctx* __restrict c) {
  trace_call(0x801E64C8u);
  c->r[8]=R32(c->r[2]+0xFFFFC330u); // 801E64C8
  c->r[4]=c->r[4]+0x00000156u; // 801E64CC
  c->r[9]=c->r[3]+0x00000156u; // 801E64D0
  c->r[7]=0u+0xCC010000u; // 801E64D4
  c->r[0]=R32(c->r[8]+0x00000148u); // 801E64D8
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 801E64DC
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 801E64E0
  c->r[6]=c->r[4]+c->r[6]; // 801E64E4
  W32(c->r[8]+0x00000148u,c->r[0]); // 801E64E8
  c->r[3]=c->r[9]+c->r[5]; // 801E64EC
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 801E64F0
  c->r[4]=0u+0x00000061u; // 801E64F4
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 801E64F8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E64FC
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 801E6500
  c->r[0]=0u+0x00000000u; // 801E6504
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 801E6508
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 801E650C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801E6510
  c->r[3]=R32(c->r[8]+0x00000148u); // 801E6514
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801E6518
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801E651C
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 801E6520
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 801E6524
  W16(c->r[8]+0x00000002u,c->r[0]); // 801E6528
  return; // 801E652C
}

// GXSetScissorBoxOffset
void f_801E6530(Ctx* __restrict c) {
  trace_call(0x801E6530u);
  c->r[0]=c->r[3]+0x00000156u; // 801E6530
  c->r[6]=0u+0x00000000u; // 801E6534
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 801E6538
  c->r[5]=0u+0xCC010000u; // 801E653C
  c->r[0]=0u+0x00000061u; // 801E6540
  c->r[3]=c->r[4]+0x00000156u; // 801E6544
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6548
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 801E654C
  c->r[0]=0u+0x00000059u; // 801E6550
  c->r[3]=R32(c->r[2]+0xFFFFC330u); // 801E6554
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 801E6558
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 801E655C
  c->r[0]=0u+0x00000000u; // 801E6560
  W16(c->r[3]+0x00000002u,c->r[0]); // 801E6564
  return; // 801E6568
}

// GXSetClipMode
void f_801E656C(Ctx* __restrict c) {
  trace_call(0x801E656Cu);
  c->r[6]=0u+0xCC010000u; // 801E656C
  c->r[0]=0u+0x00000010u; // 801E6570
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6574
  c->r[5]=0u+0x00001005u; // 801E6578
  c->r[4]=R32(c->r[2]+0xFFFFC330u); // 801E657C
  c->r[0]=0u+0x00000001u; // 801E6580
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 801E6584
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E6588
  W16(c->r[4]+0x00000002u,c->r[0]); // 801E658C
  return; // 801E6590
}

// __GXSetMatrixIndex
void f_801E6594(Ctx* __restrict c) {
  trace_call(0x801E6594u);
  cmps(c,0,(int32_t)c->r[3],5); // 801E6594
  if (!crb(c,0)) { goto L_801E65D8; } // 801E6598
  c->r[5]=0u+0xCC010000u; // 801E659C
  c->r[0]=0u+0x00000008u; // 801E65A0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65A4
  c->r[0]=0u+0x00000030u; // 801E65A8
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E65AC
  c->r[3]=0u+0x00000010u; // 801E65B0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65B4
  c->r[0]=0u+0x00001018u; // 801E65B8
  c->r[4]=R32(c->r[6]+0x00000080u); // 801E65BC
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E65C0
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 801E65C4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65C8
  c->r[0]=R32(c->r[6]+0x00000080u); // 801E65CC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65D0
  goto L_801E6610; // 801E65D4
L_801E65D8:;
  c->r[5]=0u+0xCC010000u; // 801E65D8
  c->r[0]=0u+0x00000008u; // 801E65DC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65E0
  c->r[0]=0u+0x00000040u; // 801E65E4
  c->r[6]=R32(c->r[2]+0xFFFFC330u); // 801E65E8
  c->r[3]=0u+0x00000010u; // 801E65EC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 801E65F0
  c->r[0]=0u+0x00001019u; // 801E65F4
  c->r[4]=R32(c->r[6]+0x00000084u); // 801E65F8
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 801E65FC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 801E6600
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E6604
  c->r[0]=R32(c->r[6]+0x00000084u); // 801E6608
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 801E660C
L_801E6610:;
  c->r[0]=0u+0x00000001u; // 801E6610
  W16(c->r[6]+0x00000002u,c->r[0]); // 801E6614
  return; // 801E6618
}

// GXSetGPMetric
void f_801E661C(Ctx* __restrict c) {
  trace_call(0x801E661Cu);
  c->r[5]=R32(c->r[2]+0xFFFFC330u); // 801E661C
  c->r[0]=R32(c->r[5]+0x000005ECu); // 801E6620
  cmps(c,0,(int32_t)c->r[0],34); // 801E6624
  if (crb(c,2)) { goto L_801E6654; } // 801E6628
  if (!crb(c,0)) { goto L_801E66A0; } // 801E662C
  cmps(c,0,(int32_t)c->r[0],11); // 801E6630
  if (!crb(c,0)) { goto L_801E6644; } // 801E6634
  cmps(c,0,(int32_t)c->r[0],0); // 801E6638
  if (!crb(c,0)) { goto L_801E6654; } // 801E663C
  goto L_801E66A0; // 801E6640
L_801E6644:;
  cmps(c,0,(int32_t)c->r[0],27); // 801E6644
  if (!crb(c,0)) { goto L_801E668C; } // 801E6648
  goto L_801E6674; // 801E664C
  goto L_801E66A0; // 801E6650
L_801E6654:;
  c->r[7]=0u+0xCC010000u; // 801E6654
  c->r[0]=0u+0x00000010u; // 801E6658
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 801E665C
  c->r[6]=0u+0x00001006u; // 801E6660
  c->r[0]=0u+0x00000000u; // 801E6664
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 801E6668
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 801E666C
  goto L_801E66A0; // 801E6670
L_801E6674:;
  c->r[6]=0u+0xCC010000u; // 801E6674
  c->r[0]=0u+0x00000061u; // 801E6678
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E667C
  c->r[0]=0u+0x23000000u; // 801E6680
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6684
  goto L_801E66A0; // 801E6688
L_801E668C:;
  c->r[6]=0u+0xCC010000u; // 801E668C
  c->r[0]=0u+0x00000061u; // 801E6690
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6694
  c->r[0]=0u+0x24000000u; // 801E6698
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E669C
L_801E66A0:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 801E66A0
  cmps(c,0,(int32_t)c->r[0],21); // 801E66A4
  if (crb(c,2)) { goto L_801E66D4; } // 801E66A8
  if (!crb(c,0)) { goto L_801E6724; } // 801E66AC
  cmps(c,0,(int32_t)c->r[0],9); // 801E66B0
  if (!crb(c,0)) { goto L_801E66C4; } // 801E66B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E66B8
  if (!crb(c,0)) { goto L_801E66D4; } // 801E66BC
  goto L_801E6724; // 801E66C0
L_801E66C4:;
  cmps(c,0,(int32_t)c->r[0],17); // 801E66C4
  if (!crb(c,0)) { goto L_801E6718; } // 801E66C8
  goto L_801E66EC; // 801E66CC
  goto L_801E6724; // 801E66D0
L_801E66D4:;
  c->r[6]=0u+0xCC010000u; // 801E66D4
  c->r[0]=0u+0x00000061u; // 801E66D8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E66DC
  c->r[0]=0u+0x67000000u; // 801E66E0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E66E4
  goto L_801E6724; // 801E66E8
L_801E66EC:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 801E66EC
  c->r[6]=0u+0xCC010000u; // 801E66F0
  c->r[7]=0u+0x00000008u; // 801E66F4
  c->r[0]=0u+0x00000020u; // 801E66F8
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 801E66FC
  W32(c->r[5]+0x000005F4u,c->r[8]); // 801E6700
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 801E6704
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6708
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E670C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6710
  goto L_801E6724; // 801E6714
L_801E6718:;
  c->r[6]=R32(c->r[13]+0xFFFFA11Cu); // 801E6718
  c->r[0]=0u+0x00000000u; // 801E671C
  W16(c->r[6]+0x00000006u,c->r[0]); // 801E6720
L_801E6724:;
  cmpu(c,0,c->r[3],0x00000023u); // 801E6724
  W32(c->r[5]+0x000005ECu,c->r[3]); // 801E6728
  if (crb(c,1)) { goto L_801E6B48; } // 801E672C
  c->r[6]=0u+0x804C0000u; // 801E6730
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E6734
  c->r[6]=c->r[6]+0xFFFF8054u; // 801E6738
  c->r[6]=R32(c->r[6]+c->r[0]); // 801E673C
  c->ctr=c->r[6]; // 801E6740
  if (true) { switch (c->ctr) { case 0x801E6748u: goto L_801E6748; case 0x801E6768u: goto L_801E6768; case 0x801E6788u: goto L_801E6788; case 0x801E67A8u: goto L_801E67A8; case 0x801E67C8u: goto L_801E67C8; case 0x801E67E8u: goto L_801E67E8; case 0x801E6808u: goto L_801E6808; case 0x801E6828u: goto L_801E6828; case 0x801E6848u: goto L_801E6848; case 0x801E6868u: goto L_801E6868; case 0x801E6888u: goto L_801E6888; case 0x801E68A8u: goto L_801E68A8; case 0x801E68C8u: goto L_801E68C8; case 0x801E68E4u: goto L_801E68E4; case 0x801E6900u: goto L_801E6900; case 0x801E691Cu: goto L_801E691C; case 0x801E6938u: goto L_801E6938; case 0x801E6954u: goto L_801E6954; case 0x801E6970u: goto L_801E6970; case 0x801E698Cu: goto L_801E698C; case 0x801E69A8u: goto L_801E69A8; case 0x801E69C4u: goto L_801E69C4; case 0x801E69E0u: goto L_801E69E0; case 0x801E69FCu: goto L_801E69FC; case 0x801E6A18u: goto L_801E6A18; case 0x801E6A34u: goto L_801E6A34; case 0x801E6A50u: goto L_801E6A50; case 0x801E6A6Cu: goto L_801E6A6C; case 0x801E6A88u: goto L_801E6A88; case 0x801E6AA4u: goto L_801E6AA4; case 0x801E6AC0u: goto L_801E6AC0; case 0x801E6ADCu: goto L_801E6ADC; case 0x801E6AF8u: goto L_801E6AF8; case 0x801E6B14u: goto L_801E6B14; case 0x801E6B30u: goto L_801E6B30; case 0x801E6B48u: goto L_801E6B48; case 0x801E6B6Cu: goto L_801E6B6C; case 0x801E6B88u: goto L_801E6B88; case 0x801E6BA4u: goto L_801E6BA4; case 0x801E6BC0u: goto L_801E6BC0; case 0x801E6BDCu: goto L_801E6BDC; case 0x801E6BF8u: goto L_801E6BF8; case 0x801E6C14u: goto L_801E6C14; case 0x801E6C30u: goto L_801E6C30; case 0x801E6C4Cu: goto L_801E6C4C; case 0x801E6C68u: goto L_801E6C68; case 0x801E6C84u: goto L_801E6C84; case 0x801E6CB4u: goto L_801E6CB4; case 0x801E6CE4u: goto L_801E6CE4; case 0x801E6D14u: goto L_801E6D14; case 0x801E6D44u: goto L_801E6D44; case 0x801E6D74u: goto L_801E6D74; case 0x801E6DA4u: goto L_801E6DA4; case 0x801E6DD4u: goto L_801E6DD4; case 0x801E6E00u: goto L_801E6E00; case 0x801E6E10u: goto L_801E6E10; case 0x801E6E20u: goto L_801E6E20; case 0x801E6E30u: goto L_801E6E30; case 0x801E6E3Cu: goto L_801E6E3C; default: break; } dispatch(c,c->ctr); return; } // 801E6744
L_801E6748:;
  c->r[6]=0u+0xCC010000u; // 801E6748
  c->r[0]=0u+0x00000010u; // 801E674C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6750
  c->r[3]=0u+0x00001006u; // 801E6754
  c->r[0]=0u+0x00000273u; // 801E6758
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E675C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6760
  goto L_801E6B48; // 801E6764
L_801E6768:;
  c->r[6]=0u+0xCC010000u; // 801E6768
  c->r[0]=0u+0x00000010u; // 801E676C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6770
  c->r[3]=0u+0x00001006u; // 801E6774
  c->r[0]=0u+0x0000014Au; // 801E6778
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E677C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6780
  goto L_801E6B48; // 801E6784
L_801E6788:;
  c->r[6]=0u+0xCC010000u; // 801E6788
  c->r[0]=0u+0x00000010u; // 801E678C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6790
  c->r[3]=0u+0x00001006u; // 801E6794
  c->r[0]=0u+0x0000016Bu; // 801E6798
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E679C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67A0
  goto L_801E6B48; // 801E67A4
L_801E67A8:;
  c->r[6]=0u+0xCC010000u; // 801E67A8
  c->r[0]=0u+0x00000010u; // 801E67AC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67B0
  c->r[3]=0u+0x00001006u; // 801E67B4
  c->r[0]=0u+0x00000084u; // 801E67B8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E67BC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67C0
  goto L_801E6B48; // 801E67C4
L_801E67C8:;
  c->r[6]=0u+0xCC010000u; // 801E67C8
  c->r[0]=0u+0x00000010u; // 801E67CC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67D0
  c->r[3]=0u+0x00001006u; // 801E67D4
  c->r[0]=0u+0x000000C6u; // 801E67D8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E67DC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67E0
  goto L_801E6B48; // 801E67E4
L_801E67E8:;
  c->r[6]=0u+0xCC010000u; // 801E67E8
  c->r[0]=0u+0x00000010u; // 801E67EC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E67F0
  c->r[3]=0u+0x00001006u; // 801E67F4
  c->r[0]=0u+0x00000210u; // 801E67F8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E67FC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6800
  goto L_801E6B48; // 801E6804
L_801E6808:;
  c->r[6]=0u+0xCC010000u; // 801E6808
  c->r[0]=0u+0x00000010u; // 801E680C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6810
  c->r[3]=0u+0x00001006u; // 801E6814
  c->r[0]=0u+0x00000252u; // 801E6818
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E681C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6820
  goto L_801E6B48; // 801E6824
L_801E6828:;
  c->r[6]=0u+0xCC010000u; // 801E6828
  c->r[0]=0u+0x00000010u; // 801E682C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6830
  c->r[3]=0u+0x00001006u; // 801E6834
  c->r[0]=0u+0x00000231u; // 801E6838
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E683C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6840
  goto L_801E6B48; // 801E6844
L_801E6848:;
  c->r[6]=0u+0xCC010000u; // 801E6848
  c->r[0]=0u+0x00000010u; // 801E684C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6850
  c->r[3]=0u+0x00001006u; // 801E6854
  c->r[0]=0u+0x000001ADu; // 801E6858
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E685C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6860
  goto L_801E6B48; // 801E6864
L_801E6868:;
  c->r[6]=0u+0xCC010000u; // 801E6868
  c->r[0]=0u+0x00000010u; // 801E686C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6870
  c->r[3]=0u+0x00001006u; // 801E6874
  c->r[0]=0u+0x000001CEu; // 801E6878
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E687C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6880
  goto L_801E6B48; // 801E6884
L_801E6888:;
  c->r[6]=0u+0xCC010000u; // 801E6888
  c->r[0]=0u+0x00000010u; // 801E688C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6890
  c->r[3]=0u+0x00001006u; // 801E6894
  c->r[0]=0u+0x00000021u; // 801E6898
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E689C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68A0
  goto L_801E6B48; // 801E68A4
L_801E68A8:;
  c->r[6]=0u+0xCC010000u; // 801E68A8
  c->r[0]=0u+0x00000010u; // 801E68AC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68B0
  c->r[3]=0u+0x00001006u; // 801E68B4
  c->r[0]=0u+0x00000153u; // 801E68B8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 801E68BC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68C0
  goto L_801E6B48; // 801E68C4
L_801E68C8:;
  c->r[6]=0u+0xCC010000u; // 801E68C8
  c->r[0]=0u+0x00000061u; // 801E68CC
  c->r[3]=0u+0x23010000u; // 801E68D0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68D4
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 801E68D8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68DC
  goto L_801E6B48; // 801E68E0
L_801E68E4:;
  c->r[6]=0u+0xCC010000u; // 801E68E4
  c->r[0]=0u+0x00000061u; // 801E68E8
  c->r[3]=0u+0x23010000u; // 801E68EC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68F0
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 801E68F4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E68F8
  goto L_801E6B48; // 801E68FC
L_801E6900:;
  c->r[6]=0u+0xCC010000u; // 801E6900
  c->r[0]=0u+0x00000061u; // 801E6904
  c->r[3]=0u+0x23010000u; // 801E6908
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E690C
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 801E6910
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6914
  goto L_801E6B48; // 801E6918
L_801E691C:;
  c->r[6]=0u+0xCC010000u; // 801E691C
  c->r[0]=0u+0x00000061u; // 801E6920
  c->r[3]=0u+0x23000000u; // 801E6924
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6928
  c->r[0]=c->r[3]+0x00001E7Fu; // 801E692C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6930
  goto L_801E6B48; // 801E6934
L_801E6938:;
  c->r[6]=0u+0xCC010000u; // 801E6938
  c->r[0]=0u+0x00000061u; // 801E693C
  c->r[3]=0u+0x23010000u; // 801E6940
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6944
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 801E6948
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E694C
  goto L_801E6B48; // 801E6950
L_801E6954:;
  c->r[6]=0u+0xCC010000u; // 801E6954
  c->r[0]=0u+0x00000061u; // 801E6958
  c->r[3]=0u+0x23010000u; // 801E695C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6960
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 801E6964
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6968
  goto L_801E6B48; // 801E696C
L_801E6970:;
  c->r[6]=0u+0xCC010000u; // 801E6970
  c->r[0]=0u+0x00000061u; // 801E6974
  c->r[3]=0u+0x23010000u; // 801E6978
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E697C
  c->r[0]=c->r[3]+0xFFFFACBFu; // 801E6980
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6984
  goto L_801E6B48; // 801E6988
L_801E698C:;
  c->r[6]=0u+0xCC010000u; // 801E698C
  c->r[0]=0u+0x00000061u; // 801E6990
  c->r[3]=0u+0x23010000u; // 801E6994
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6998
  c->r[0]=c->r[3]+0xFFFFACFFu; // 801E699C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69A0
  goto L_801E6B48; // 801E69A4
L_801E69A8:;
  c->r[6]=0u+0xCC010000u; // 801E69A8
  c->r[0]=0u+0x00000061u; // 801E69AC
  c->r[3]=0u+0x23010000u; // 801E69B0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69B4
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 801E69B8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69BC
  goto L_801E6B48; // 801E69C0
L_801E69C4:;
  c->r[6]=0u+0xCC010000u; // 801E69C4
  c->r[0]=0u+0x00000061u; // 801E69C8
  c->r[3]=0u+0x23010000u; // 801E69CC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69D0
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 801E69D4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69D8
  goto L_801E6B48; // 801E69DC
L_801E69E0:;
  c->r[6]=0u+0xCC010000u; // 801E69E0
  c->r[0]=0u+0x00000061u; // 801E69E4
  c->r[3]=0u+0x23010000u; // 801E69E8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69EC
  c->r[0]=c->r[3]+0xFFFFADBFu; // 801E69F0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E69F4
  goto L_801E6B48; // 801E69F8
L_801E69FC:;
  c->r[6]=0u+0xCC010000u; // 801E69FC
  c->r[0]=0u+0x00000061u; // 801E6A00
  c->r[3]=0u+0x23010000u; // 801E6A04
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A08
  c->r[0]=c->r[3]+0xFFFFADFFu; // 801E6A0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A10
  goto L_801E6B48; // 801E6A14
L_801E6A18:;
  c->r[6]=0u+0xCC010000u; // 801E6A18
  c->r[0]=0u+0x00000061u; // 801E6A1C
  c->r[3]=0u+0x23010000u; // 801E6A20
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A24
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 801E6A28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A2C
  goto L_801E6B48; // 801E6A30
L_801E6A34:;
  c->r[6]=0u+0xCC010000u; // 801E6A34
  c->r[0]=0u+0x00000061u; // 801E6A38
  c->r[3]=0u+0x23010000u; // 801E6A3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A40
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 801E6A44
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A48
  goto L_801E6B48; // 801E6A4C
L_801E6A50:;
  c->r[6]=0u+0xCC010000u; // 801E6A50
  c->r[0]=0u+0x00000061u; // 801E6A54
  c->r[3]=0u+0x23010000u; // 801E6A58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A5C
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 801E6A60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A64
  goto L_801E6B48; // 801E6A68
L_801E6A6C:;
  c->r[6]=0u+0xCC010000u; // 801E6A6C
  c->r[0]=0u+0x00000061u; // 801E6A70
  c->r[3]=0u+0x23010000u; // 801E6A74
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A78
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 801E6A7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A80
  goto L_801E6B48; // 801E6A84
L_801E6A88:;
  c->r[6]=0u+0xCC010000u; // 801E6A88
  c->r[0]=0u+0x00000061u; // 801E6A8C
  c->r[3]=0u+0x24030000u; // 801E6A90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A94
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 801E6A98
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6A9C
  goto L_801E6B48; // 801E6AA0
L_801E6AA4:;
  c->r[6]=0u+0xCC010000u; // 801E6AA4
  c->r[0]=0u+0x00000061u; // 801E6AA8
  c->r[3]=0u+0x24030000u; // 801E6AAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6AB0
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 801E6AB4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6AB8
  goto L_801E6B48; // 801E6ABC
L_801E6AC0:;
  c->r[6]=0u+0xCC010000u; // 801E6AC0
  c->r[0]=0u+0x00000061u; // 801E6AC4
  c->r[3]=0u+0x24030000u; // 801E6AC8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6ACC
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 801E6AD0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6AD4
  goto L_801E6B48; // 801E6AD8
L_801E6ADC:;
  c->r[6]=0u+0xCC010000u; // 801E6ADC
  c->r[0]=0u+0x00000061u; // 801E6AE0
  c->r[3]=0u+0x24030000u; // 801E6AE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6AE8
  c->r[0]=c->r[3]+0xFFFFC108u; // 801E6AEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6AF0
  goto L_801E6B48; // 801E6AF4
L_801E6AF8:;
  c->r[6]=0u+0xCC010000u; // 801E6AF8
  c->r[0]=0u+0x00000061u; // 801E6AFC
  c->r[3]=0u+0x24030000u; // 801E6B00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B04
  c->r[0]=c->r[3]+0xFFFFC129u; // 801E6B08
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B0C
  goto L_801E6B48; // 801E6B10
L_801E6B14:;
  c->r[6]=0u+0xCC010000u; // 801E6B14
  c->r[0]=0u+0x00000061u; // 801E6B18
  c->r[3]=0u+0x24030000u; // 801E6B1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B20
  c->r[0]=c->r[3]+0xFFFFC14Au; // 801E6B24
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B28
  goto L_801E6B48; // 801E6B2C
L_801E6B30:;
  c->r[6]=0u+0xCC010000u; // 801E6B30
  c->r[0]=0u+0x00000061u; // 801E6B34
  c->r[3]=0u+0x24030000u; // 801E6B38
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B3C
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 801E6B40
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 801E6B44
L_801E6B48:;
  cmpu(c,0,c->r[4],0x00000016u); // 801E6B48
  W32(c->r[5]+0x000005F0u,c->r[4]); // 801E6B4C
  if (crb(c,1)) { goto L_801E6E3C; } // 801E6B50
  c->r[3]=0u+0x804B0000u; // 801E6B54
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E6B58
  c->r[3]=c->r[3]+0x00007FF8u; // 801E6B5C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E6B60
  c->ctr=c->r[3]; // 801E6B64
  if (true) { switch (c->ctr) { case 0x801E6748u: goto L_801E6748; case 0x801E6768u: goto L_801E6768; case 0x801E6788u: goto L_801E6788; case 0x801E67A8u: goto L_801E67A8; case 0x801E67C8u: goto L_801E67C8; case 0x801E67E8u: goto L_801E67E8; case 0x801E6808u: goto L_801E6808; case 0x801E6828u: goto L_801E6828; case 0x801E6848u: goto L_801E6848; case 0x801E6868u: goto L_801E6868; case 0x801E6888u: goto L_801E6888; case 0x801E68A8u: goto L_801E68A8; case 0x801E68C8u: goto L_801E68C8; case 0x801E68E4u: goto L_801E68E4; case 0x801E6900u: goto L_801E6900; case 0x801E691Cu: goto L_801E691C; case 0x801E6938u: goto L_801E6938; case 0x801E6954u: goto L_801E6954; case 0x801E6970u: goto L_801E6970; case 0x801E698Cu: goto L_801E698C; case 0x801E69A8u: goto L_801E69A8; case 0x801E69C4u: goto L_801E69C4; case 0x801E69E0u: goto L_801E69E0; case 0x801E69FCu: goto L_801E69FC; case 0x801E6A18u: goto L_801E6A18; case 0x801E6A34u: goto L_801E6A34; case 0x801E6A50u: goto L_801E6A50; case 0x801E6A6Cu: goto L_801E6A6C; case 0x801E6A88u: goto L_801E6A88; case 0x801E6AA4u: goto L_801E6AA4; case 0x801E6AC0u: goto L_801E6AC0; case 0x801E6ADCu: goto L_801E6ADC; case 0x801E6AF8u: goto L_801E6AF8; case 0x801E6B14u: goto L_801E6B14; case 0x801E6B30u: goto L_801E6B30; case 0x801E6B48u: goto L_801E6B48; case 0x801E6B6Cu: goto L_801E6B6C; case 0x801E6B88u: goto L_801E6B88; case 0x801E6BA4u: goto L_801E6BA4; case 0x801E6BC0u: goto L_801E6BC0; case 0x801E6BDCu: goto L_801E6BDC; case 0x801E6BF8u: goto L_801E6BF8; case 0x801E6C14u: goto L_801E6C14; case 0x801E6C30u: goto L_801E6C30; case 0x801E6C4Cu: goto L_801E6C4C; case 0x801E6C68u: goto L_801E6C68; case 0x801E6C84u: goto L_801E6C84; case 0x801E6CB4u: goto L_801E6CB4; case 0x801E6CE4u: goto L_801E6CE4; case 0x801E6D14u: goto L_801E6D14; case 0x801E6D44u: goto L_801E6D44; case 0x801E6D74u: goto L_801E6D74; case 0x801E6DA4u: goto L_801E6DA4; case 0x801E6DD4u: goto L_801E6DD4; case 0x801E6E00u: goto L_801E6E00; case 0x801E6E10u: goto L_801E6E10; case 0x801E6E20u: goto L_801E6E20; case 0x801E6E30u: goto L_801E6E30; case 0x801E6E3Cu: goto L_801E6E3C; default: break; } dispatch(c,c->ctr); return; } // 801E6B68
L_801E6B6C:;
  c->r[4]=0u+0xCC010000u; // 801E6B6C
  c->r[0]=0u+0x00000061u; // 801E6B70
  c->r[3]=0u+0x67000000u; // 801E6B74
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6B78
  c->r[0]=c->r[3]+0x00000042u; // 801E6B7C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6B80
  goto L_801E6E3C; // 801E6B84
L_801E6B88:;
  c->r[4]=0u+0xCC010000u; // 801E6B88
  c->r[0]=0u+0x00000061u; // 801E6B8C
  c->r[3]=0u+0x67000000u; // 801E6B90
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6B94
  c->r[0]=c->r[3]+0x00000084u; // 801E6B98
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6B9C
  goto L_801E6E3C; // 801E6BA0
L_801E6BA4:;
  c->r[4]=0u+0xCC010000u; // 801E6BA4
  c->r[0]=0u+0x00000061u; // 801E6BA8
  c->r[3]=0u+0x67000000u; // 801E6BAC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BB0
  c->r[0]=c->r[3]+0x00000063u; // 801E6BB4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BB8
  goto L_801E6E3C; // 801E6BBC
L_801E6BC0:;
  c->r[4]=0u+0xCC010000u; // 801E6BC0
  c->r[0]=0u+0x00000061u; // 801E6BC4
  c->r[3]=0u+0x67000000u; // 801E6BC8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BCC
  c->r[0]=c->r[3]+0x00000129u; // 801E6BD0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BD4
  goto L_801E6E3C; // 801E6BD8
L_801E6BDC:;
  c->r[4]=0u+0xCC010000u; // 801E6BDC
  c->r[0]=0u+0x00000061u; // 801E6BE0
  c->r[3]=0u+0x67000000u; // 801E6BE4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BE8
  c->r[0]=c->r[3]+0x00000252u; // 801E6BEC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6BF0
  goto L_801E6E3C; // 801E6BF4
L_801E6BF8:;
  c->r[4]=0u+0xCC010000u; // 801E6BF8
  c->r[0]=0u+0x00000061u; // 801E6BFC
  c->r[3]=0u+0x67000000u; // 801E6C00
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C04
  c->r[0]=c->r[3]+0x00000021u; // 801E6C08
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C0C
  goto L_801E6E3C; // 801E6C10
L_801E6C14:;
  c->r[4]=0u+0xCC010000u; // 801E6C14
  c->r[0]=0u+0x00000061u; // 801E6C18
  c->r[3]=0u+0x67000000u; // 801E6C1C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C20
  c->r[0]=c->r[3]+0x0000014Bu; // 801E6C24
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C28
  goto L_801E6E3C; // 801E6C2C
L_801E6C30:;
  c->r[4]=0u+0xCC010000u; // 801E6C30
  c->r[0]=0u+0x00000061u; // 801E6C34
  c->r[3]=0u+0x67000000u; // 801E6C38
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C3C
  c->r[0]=c->r[3]+0x0000018Du; // 801E6C40
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C44
  goto L_801E6E3C; // 801E6C48
L_801E6C4C:;
  c->r[4]=0u+0xCC010000u; // 801E6C4C
  c->r[0]=0u+0x00000061u; // 801E6C50
  c->r[3]=0u+0x67000000u; // 801E6C54
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C58
  c->r[0]=c->r[3]+0x000001CFu; // 801E6C5C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C60
  goto L_801E6E3C; // 801E6C64
L_801E6C68:;
  c->r[4]=0u+0xCC010000u; // 801E6C68
  c->r[0]=0u+0x00000061u; // 801E6C6C
  c->r[3]=0u+0x67000000u; // 801E6C70
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C74
  c->r[0]=c->r[3]+0x00000211u; // 801E6C78
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 801E6C7C
  goto L_801E6E3C; // 801E6C80
L_801E6C84:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6C84
  c->r[0]=0u+0x00000002u; // 801E6C88
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6C8C
  c->r[3]=0u+0xCC010000u; // 801E6C90
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6C94
  c->r[4]=0u+0x00000008u; // 801E6C98
  c->r[0]=0u+0x00000020u; // 801E6C9C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6CA0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6CA4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6CA8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6CAC
  goto L_801E6E3C; // 801E6CB0
L_801E6CB4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6CB4
  c->r[0]=0u+0x00000003u; // 801E6CB8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6CBC
  c->r[3]=0u+0xCC010000u; // 801E6CC0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6CC4
  c->r[4]=0u+0x00000008u; // 801E6CC8
  c->r[0]=0u+0x00000020u; // 801E6CCC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6CD0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6CD4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6CD8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6CDC
  goto L_801E6E3C; // 801E6CE0
L_801E6CE4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6CE4
  c->r[0]=0u+0x00000004u; // 801E6CE8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6CEC
  c->r[3]=0u+0xCC010000u; // 801E6CF0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6CF4
  c->r[4]=0u+0x00000008u; // 801E6CF8
  c->r[0]=0u+0x00000020u; // 801E6CFC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6D00
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D04
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6D08
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D0C
  goto L_801E6E3C; // 801E6D10
L_801E6D14:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6D14
  c->r[0]=0u+0x00000005u; // 801E6D18
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6D1C
  c->r[3]=0u+0xCC010000u; // 801E6D20
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6D24
  c->r[4]=0u+0x00000008u; // 801E6D28
  c->r[0]=0u+0x00000020u; // 801E6D2C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6D30
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D34
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6D38
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D3C
  goto L_801E6E3C; // 801E6D40
L_801E6D44:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6D44
  c->r[0]=0u+0x00000006u; // 801E6D48
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6D4C
  c->r[3]=0u+0xCC010000u; // 801E6D50
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6D54
  c->r[4]=0u+0x00000008u; // 801E6D58
  c->r[0]=0u+0x00000020u; // 801E6D5C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6D60
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D64
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6D68
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D6C
  goto L_801E6E3C; // 801E6D70
L_801E6D74:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6D74
  c->r[0]=0u+0x00000007u; // 801E6D78
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6D7C
  c->r[3]=0u+0xCC010000u; // 801E6D80
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6D84
  c->r[4]=0u+0x00000008u; // 801E6D88
  c->r[0]=0u+0x00000020u; // 801E6D8C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6D90
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D94
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6D98
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6D9C
  goto L_801E6E3C; // 801E6DA0
L_801E6DA4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 801E6DA4
  c->r[0]=0u+0x00000009u; // 801E6DA8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 801E6DAC
  c->r[3]=0u+0xCC010000u; // 801E6DB0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 801E6DB4
  c->r[4]=0u+0x00000008u; // 801E6DB8
  c->r[0]=0u+0x00000020u; // 801E6DBC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6DC0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6DC4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6DC8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6DCC
  goto L_801E6E3C; // 801E6DD0
L_801E6DD4:;
  c->r[4]=0u+0x00000008u; // 801E6DD4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6DD8
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 801E6DDC
  c->r[3]=0u+0xCC010000u; // 801E6DE0
  W32(c->r[5]+0x000005F4u,c->r[0]); // 801E6DE4
  c->r[0]=0u+0x00000020u; // 801E6DE8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 801E6DEC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6DF0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 801E6DF4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 801E6DF8
  goto L_801E6E3C; // 801E6DFC
L_801E6E00:;
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E6E00
  c->r[0]=0u+0x00000002u; // 801E6E04
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E6E08
  goto L_801E6E3C; // 801E6E0C
L_801E6E10:;
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E6E10
  c->r[0]=0u+0x00000003u; // 801E6E14
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E6E18
  goto L_801E6E3C; // 801E6E1C
L_801E6E20:;
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E6E20
  c->r[0]=0u+0x00000004u; // 801E6E24
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E6E28
  goto L_801E6E3C; // 801E6E2C
L_801E6E30:;
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E6E30
  c->r[0]=0u+0x00000005u; // 801E6E34
  W16(c->r[3]+0x00000006u,c->r[0]); // 801E6E38
L_801E6E3C:;
  c->r[0]=0u+0x00000000u; // 801E6E3C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801E6E40
  return; // 801E6E44
}

// GXClearGPMetric
void f_801E6E48(Ctx* __restrict c) {
  trace_call(0x801E6E48u);
  c->r[3]=R32(c->r[13]+0xFFFFA11Cu); // 801E6E48
  c->r[0]=0u+0x00000004u; // 801E6E4C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801E6E50
  return; // 801E6E54
}

// strlen
void f_801E6E58(Ctx* __restrict c) {
  trace_call(0x801E6E58u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801E6E58
  c->r[3]=0u+0xFFFFFFFFu; // 801E6E5C
L_801E6E60:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801E6E60
  c->r[3]=c->r[3]+0x00000001u; // 801E6E64
  cmps(c,0,(int32_t)c->r[0],0); // 801E6E68
  if (!crb(c,2)) { IRQCHK(c); goto L_801E6E60; } // 801E6E6C
  return; // 801E6E70
}

// __va_arg
void f_801E6E74(Ctx* __restrict c) {
  trace_call(0x801E6E74u);
  c->r[7]=R8(c->r[3]+0x00000000u); // 801E6E74
  cmps(c,0,(int32_t)c->r[4],3); // 801E6E78
  c->r[6]=c->r[3]|c->r[3]; // 801E6E7C
  c->r[0]=0u+0x00000008u; // 801E6E80
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801E6E84
  c->r[8]=0u+0x00000004u; // 801E6E88
  c->r[9]=0u+0x00000001u; // 801E6E8C
  c->r[5]=0u+0x00000000u; // 801E6E90
  c->r[10]=0u+0x00000000u; // 801E6E94
  c->r[11]=0u+0x00000004u; // 801E6E98
  if (!crb(c,2)) { goto L_801E6EB8; } // 801E6E9C
  c->r[7]=R8(c->r[3]+0x00000001u); // 801E6EA0
  c->r[6]=c->r[3]+0x00000001u; // 801E6EA4
  c->r[8]=0u+0x00000008u; // 801E6EA8
  c->r[10]=0u+0x00000020u; // 801E6EAC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801E6EB0
  c->r[11]=0u+0x00000008u; // 801E6EB4
L_801E6EB8:;
  cmps(c,0,(int32_t)c->r[4],2); // 801E6EB8
  if (!crb(c,2)) { goto L_801E6ED8; } // 801E6EBC
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 801E6EC0
  c->r[8]=0u+0x00000008u; // 801E6EC4
  c->r[0]=0u+0x00000007u; // 801E6EC8
  if (crb(c,2)) { goto L_801E6ED4; } // 801E6ECC
  c->r[5]=0u+0x00000001u; // 801E6ED0
L_801E6ED4:;
  c->r[9]=0u+0x00000002u; // 801E6ED4
L_801E6ED8:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E6ED8
  if (!crb(c,0)) { goto L_801E6F00; } // 801E6EDC
  c->r[7]=c->r[7]+c->r[5]; // 801E6EE0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E6EE4
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[11]); // 801E6EE8
  c->r[0]=c->r[7]+c->r[9]; // 801E6EEC
  c->r[3]=c->r[3]+c->r[10]; // 801E6EF0
  W8(c->r[6]+0x00000000u,c->r[0]); // 801E6EF4
  c->r[5]=c->r[5]+c->r[3]; // 801E6EF8
  goto L_801E6F28; // 801E6EFC
L_801E6F00:;
  c->r[5]=0u+0x00000008u; // 801E6F00
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801E6F04
  W8(c->r[6]+0x00000000u,c->r[5]); // 801E6F08
  c->r[6]=~(c->r[0]|c->r[0]); // 801E6F0C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6F10
  c->r[5]=c->r[8]+c->r[0]; // 801E6F14
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801E6F18
  c->r[5]=c->r[6]&c->r[0]; // 801E6F1C
  c->r[0]=c->r[5]+c->r[8]; // 801E6F20
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6F24
L_801E6F28:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E6F28
  if (!crb(c,2)) { goto L_801E6F34; } // 801E6F2C
  c->r[5]=R32(c->r[5]+0x00000000u); // 801E6F30
L_801E6F34:;
  c->r[3]=c->r[5]|c->r[5]; // 801E6F34
  return; // 801E6F38
}

// __register_global_object
void f_801E6F3C(Ctx* __restrict c) {
  trace_call(0x801E6F3Cu);
  c->r[0]=R32(c->r[13]+0xFFFFA178u); // 801E6F3C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E6F40
  W32(c->r[5]+0x00000004u,c->r[4]); // 801E6F44
  W32(c->r[5]+0x00000008u,c->r[3]); // 801E6F48
  W32(c->r[13]+0xFFFFA178u,c->r[5]); // 801E6F4C
  return; // 801E6F50
}

// __destroy_global_chain
void f_801E6F54(Ctx* __restrict c) {
  trace_call(0x801E6F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6F54
  c->r[0]=c->lr; // 801E6F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6F5C
  goto L_801E6F80; // 801E6F60
L_801E6F64:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6F64
  c->r[4]=0u+0xFFFFFFFFu; // 801E6F68
  W32(c->r[13]+0xFFFFA178u,c->r[0]); // 801E6F6C
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E6F70
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E6F74
  c->ctr=c->r[12]; // 801E6F78
  if (true) { c->lr=0x801E6F80u; dispatch(c,c->ctr); } // 801E6F7C
L_801E6F80:;
  c->r[3]=R32(c->r[13]+0xFFFFA178u); // 801E6F80
  cmps(c,0,(int32_t)c->r[3],0); // 801E6F84
  if (!crb(c,2)) { IRQCHK(c); goto L_801E6F64; } // 801E6F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6F8C
  c->lr=c->r[0]; // 801E6F90
  c->r[1]=c->r[1]+0x00000010u; // 801E6F94
  return; // 801E6F98
}

// fn_801E6F9C
void f_801E6F9C(Ctx* __restrict c) {
  trace_call(0x801E6F9Cu);
  f_801F31CC(c); return; // 801E6F9C
}

// fn_801E6FA0
void f_801E6FA0(Ctx* __restrict c) {
  trace_call(0x801E6FA0u);
  f_801E6FA4(c); return; // 801E6FA0
}

// fn_801E6FA4
void f_801E6FA4(Ctx* __restrict c) {
  trace_call(0x801E6FA4u);
  c->r[12]=R32(c->r[13]+0xFFFF8580u); // 801E6FA4
  c->ctr=c->r[12]; // 801E6FA8
  if (true) { dispatch(c,c->ctr); return; } // 801E6FAC
}

// fn_801E6FB0
void f_801E6FB0(Ctx* __restrict c) {
  trace_call(0x801E6FB0u);
  c->r[12]=R32(c->r[13]+0xFFFF8584u); // 801E6FB0
  c->ctr=c->r[12]; // 801E6FB4
  if (true) { dispatch(c,c->ctr); return; } // 801E6FB8
}

// fn_801E6FBC
void f_801E6FBC(Ctx* __restrict c) {
  trace_call(0x801E6FBCu);
  c->r[0]=0u+0x00000000u; // 801E6FBC
  cmps(c,0,(int32_t)c->r[4],0); // 801E6FC0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E6FC4
  c->r[7]=c->r[4]|c->r[4]; // 801E6FC8
  if (!crb(c,2)) { goto L_801E6FD8; } // 801E6FCC
  c->r[3]=0u+0x00000001u; // 801E6FD0
  return; // 801E6FD4
L_801E6FD8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E6FD8
  c->r[6]=c->r[3]|c->r[3]; // 801E6FDC
  cmps(c,0,(int32_t)c->r[0],80); // 801E6FE0
  if (!crb(c,2)) { goto L_801E703C; } // 801E6FE4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E6FE8
  c->r[7]=c->r[4]+0x00000001u; // 801E6FEC
  cmps(c,0,(int32_t)c->r[0],67); // 801E6FF0
  if (!crb(c,2)) { goto L_801E6FFC; } // 801E6FF4
  c->r[7]=c->r[7]+0x00000001u; // 801E6FF8
L_801E6FFC:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E6FFC
  cmps(c,0,(int32_t)c->r[0],86); // 801E7000
  if (!crb(c,2)) { goto L_801E700C; } // 801E7004
  c->r[7]=c->r[7]+0x00000001u; // 801E7008
L_801E700C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E700C
  cmps(c,0,(int32_t)c->r[0],118); // 801E7010
  if (!crb(c,2)) { goto L_801E7038; } // 801E7014
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E7018
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E701C
  cmps(c,0,(int32_t)c->r[0],80); // 801E7020
  if (crb(c,2)) { goto L_801E7030; } // 801E7024
  cmps(c,0,(int32_t)c->r[0],42); // 801E7028
  if (!crb(c,2)) { goto L_801E7038; } // 801E702C
L_801E7030:;
  c->r[3]=0u+0x00000001u; // 801E7030
  return; // 801E7034
L_801E7038:;
  c->r[7]=c->r[4]|c->r[4]; // 801E7038
L_801E703C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E703C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E7040
  cmps(c,0,(int32_t)c->r[0],42); // 801E7044
  if (crb(c,2)) { goto L_801E705C; } // 801E7048
  if (!crb(c,0)) { goto L_801E7190; } // 801E704C
  cmps(c,0,(int32_t)c->r[0],33); // 801E7050
  if (crb(c,2)) { goto L_801E705C; } // 801E7054
  goto L_801E7190; // 801E7058
L_801E705C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E705C
  c->r[6]=c->r[3]+0x00000001u; // 801E7060
  c->r[3]=R8(c->r[3]+0x00000000u); // 801E7064
  c->r[7]=c->r[7]+0x00000001u; // 801E7068
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E706C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801E7070
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E7074
  if (crb(c,2)) { goto L_801E7084; } // 801E7078
  c->r[3]=0u+0x00000000u; // 801E707C
  return; // 801E7080
L_801E7084:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E7084
  c->r[7]=c->r[7]+0x00000001u; // 801E7088
  c->r[3]=R8(c->r[6]+0x00000000u); // 801E708C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E7090
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801E7094
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E7098
  if (!crb(c,2)) { goto L_801E70E4; } // 801E709C
  cmps(c,0,(int32_t)c->r[3],33); // 801E70A0
  c->r[6]=c->r[6]+0x00000001u; // 801E70A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E7084; } // 801E70A8
  c->r[4]=0u+0x00000000u; // 801E70AC
  goto L_801E70CC; // 801E70B0
L_801E70B4:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801E70B4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801E70B8
  c->r[6]=c->r[6]+0x00000001u; // 801E70BC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801E70C0
  c->r[4]=c->r[3]+c->r[0]; // 801E70C4
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 801E70C8
L_801E70CC:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E70CC
  cmps(c,0,(int32_t)c->r[0],33); // 801E70D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E70B4; } // 801E70D4
  W32(c->r[5]+0x00000000u,c->r[4]); // 801E70D8
  c->r[3]=0u+0x00000001u; // 801E70DC
  return; // 801E70E0
L_801E70E4:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E70E4
  c->r[6]=c->r[6]+0x00000001u; // 801E70E8
  cmps(c,0,(int32_t)c->r[0],33); // 801E70EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E70E4; } // 801E70F0
L_801E70F4:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E70F4
  c->r[6]=c->r[6]+0x00000001u; // 801E70F8
  cmps(c,0,(int32_t)c->r[0],33); // 801E70FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E70F4; } // 801E7100
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E7104
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E7108
  if (!crb(c,2)) { goto L_801E7118; } // 801E710C
  c->r[3]=0u+0x00000000u; // 801E7110
  return; // 801E7114
L_801E7118:;
  c->r[7]=c->r[4]+0x00000001u; // 801E7118
  IRQCHK(c); goto L_801E7084; // 801E711C
  goto L_801E7190; // 801E7120
L_801E7124:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801E7124
  c->r[6]=c->r[6]+0x00000001u; // 801E7128
  cmps(c,0,(int32_t)c->r[0],67); // 801E712C
  if (!crb(c,2)) { goto L_801E7148; } // 801E7130
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E7134
  cmps(c,0,(int32_t)c->r[0],67); // 801E7138
  if (!crb(c,2)) { goto L_801E7144; } // 801E713C
  c->r[6]=c->r[6]+0x00000001u; // 801E7140
L_801E7144:;
  c->r[7]=c->r[7]+0x00000001u; // 801E7144
L_801E7148:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E7148
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E714C
  cmps(c,0,(int32_t)c->r[3],67); // 801E7150
  if (!crb(c,2)) { goto L_801E7160; } // 801E7154
  c->r[3]=0u+0x00000000u; // 801E7158
  return; // 801E715C
L_801E7160:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E7160
  cmps(c,0,(int32_t)c->r[0],86); // 801E7164
  if (!crb(c,2)) { goto L_801E717C; } // 801E7168
  cmps(c,0,(int32_t)c->r[3],86); // 801E716C
  if (!crb(c,2)) { goto L_801E7178; } // 801E7170
  c->r[6]=c->r[6]+0x00000001u; // 801E7174
L_801E7178:;
  c->r[7]=c->r[7]+0x00000001u; // 801E7178
L_801E717C:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E717C
  cmps(c,0,(int32_t)c->r[0],86); // 801E7180
  if (!crb(c,2)) { goto L_801E7190; } // 801E7184
  c->r[3]=0u+0x00000000u; // 801E7188
  return; // 801E718C
L_801E7190:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801E7190
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801E7194
  cmps(c,0,(int32_t)c->r[0],80); // 801E7198
  if (crb(c,2)) { goto L_801E71A8; } // 801E719C
  cmps(c,0,(int32_t)c->r[0],82); // 801E71A0
  if (!crb(c,2)) { goto L_801E71D8; } // 801E71A4
L_801E71A8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E71A8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801E71AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E71B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E71B4
  if (crb(c,2)) { IRQCHK(c); goto L_801E7124; } // 801E71B8
  goto L_801E71D8; // 801E71BC
L_801E71C0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801E71C0
  if (!crb(c,2)) { goto L_801E71D0; } // 801E71C4
  c->r[3]=0u+0x00000001u; // 801E71C8
  return; // 801E71CC
L_801E71D0:;
  c->r[6]=c->r[6]+0x00000001u; // 801E71D0
  c->r[7]=c->r[7]+0x00000001u; // 801E71D4
L_801E71D8:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 801E71D8
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E71DC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801E71E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E71E4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E71E8
  if (crb(c,2)) { IRQCHK(c); goto L_801E71C0; } // 801E71EC
  c->r[3]=0u+0x00000000u; // 801E71F0
  return; // 801E71F4
}

// __construct_new_array
void f_801E71F8(Ctx* __restrict c) {
  trace_call(0x801E71F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E71F8
  c->r[0]=c->lr; // 801E71FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E7200
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E7204
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E7208
  c->r[30]=c->r[3]|c->r[3]; // 801E720C
  c->r[27]=c->r[4]|c->r[4]; // 801E7210
  c->r[28]=c->r[6]|c->r[6]; // 801E7214
  c->r[29]=c->r[7]|c->r[7]; // 801E7218
  if (crb(c,2)) { goto L_801E72E4; } // 801E721C
  cmps(c,0,(int32_t)c->r[4],0); // 801E7220
  W32(c->r[3]+0x00000000u,c->r[6]); // 801E7224
  c->r[30]=c->r[3]+0x00000010u; // 801E7228
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E722C
  if (crb(c,2)) { goto L_801E72E4; } // 801E7230
  c->r[0]=0u+0x00000000u; // 801E7234
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7238
  c->r[31]=c->r[30]|c->r[30]; // 801E723C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801E7240
  W32(c->r[1]+0x00000010u,c->r[7]); // 801E7244
  W32(c->r[1]+0x00000014u,c->r[5]); // 801E7248
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E724C
  goto L_801E7278; // 801E7250
L_801E7254:;
  c->r[12]=c->r[27]|c->r[27]; // 801E7254
  c->r[3]=c->r[31]|c->r[31]; // 801E7258
  c->r[4]=0u+0x00000001u; // 801E725C
  c->ctr=c->r[12]; // 801E7260
  if (true) { c->lr=0x801E7268u; dispatch(c,c->ctr); } // 801E7264
  c->r[3]=R32(c->r[1]+0x00000018u); // 801E7268
  c->r[31]=c->r[31]+c->r[28]; // 801E726C
  c->r[0]=c->r[3]+0x00000001u; // 801E7270
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E7274
L_801E7278:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801E7278
  cmpu(c,0,c->r[4],c->r[29]); // 801E727C
  if (crb(c,0)) { IRQCHK(c); goto L_801E7254; } // 801E7280
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E7284
  cmpu(c,0,c->r[4],c->r[0]); // 801E7288
  if (!crb(c,0)) { goto L_801E72E4; } // 801E728C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7290
  cmps(c,0,(int32_t)c->r[0],0); // 801E7294
  if (crb(c,2)) { goto L_801E72E4; } // 801E7298
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E729C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E72A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E72A4
  c->r[31]=c->r[3]+c->r[0]; // 801E72A8
  goto L_801E72D8; // 801E72AC
L_801E72B0:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E72B0
  c->r[4]=0u+0xFFFFFFFFu; // 801E72B4
  c->r[12]=R32(c->r[1]+0x00000014u); // 801E72B8
  c->r[31]=c->r[31]-c->r[0]; // 801E72BC
  c->r[3]=c->r[31]|c->r[31]; // 801E72C0
  c->ctr=c->r[12]; // 801E72C4
  if (true) { c->lr=0x801E72CCu; dispatch(c,c->ctr); } // 801E72C8
  c->r[3]=R32(c->r[1]+0x00000018u); // 801E72CC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E72D0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E72D4
L_801E72D8:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801E72D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E72DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E72B0; } // 801E72E0
L_801E72E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E72E4
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E72E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E72EC
  c->lr=c->r[0]; // 801E72F0
  c->r[1]=c->r[1]+0x00000040u; // 801E72F4
  return; // 801E72F8
}

// __dt__26__partial_array_destructorFv
void f_801E72FC(Ctx* __restrict c) {
  trace_call(0x801E72FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E72FC
  c->r[0]=c->lr; // 801E7300
  cmps(c,0,(int32_t)c->r[3],0); // 801E7304
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E730C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7310
  c->r[30]=c->r[4]|c->r[4]; // 801E7314
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7318
  c->r[29]=c->r[3]|c->r[3]; // 801E731C
  if (crb(c,2)) { goto L_801E7398; } // 801E7320
  c->r[4]=R32(c->r[3]+0x00000010u); // 801E7324
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E7328
  cmpu(c,0,c->r[4],c->r[0]); // 801E732C
  if (!crb(c,0)) { goto L_801E7388; } // 801E7330
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E7334
  cmps(c,0,(int32_t)c->r[0],0); // 801E7338
  if (crb(c,2)) { goto L_801E7388; } // 801E733C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E7340
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E7344
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E7348
  c->r[31]=c->r[3]+c->r[0]; // 801E734C
  goto L_801E737C; // 801E7350
L_801E7354:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E7354
  c->r[4]=0u+0xFFFFFFFFu; // 801E7358
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 801E735C
  c->r[31]=c->r[31]-c->r[0]; // 801E7360
  c->r[3]=c->r[31]|c->r[31]; // 801E7364
  c->ctr=c->r[12]; // 801E7368
  if (true) { c->lr=0x801E7370u; dispatch(c,c->ctr); } // 801E736C
  c->r[3]=R32(c->r[29]+0x00000010u); // 801E7370
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E7374
  W32(c->r[29]+0x00000010u,c->r[0]); // 801E7378
L_801E737C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801E737C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7380
  if (!crb(c,2)) { IRQCHK(c); goto L_801E7354; } // 801E7384
L_801E7388:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E7388
  if (!crb(c,1)) { goto L_801E7398; } // 801E738C
  c->r[3]=c->r[29]|c->r[29]; // 801E7390
  c->lr=0x801E7398u; f_8001AAC0(c); // 801E7394
L_801E7398:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7398
  c->r[3]=c->r[29]|c->r[29]; // 801E739C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E73A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E73A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E73A8
  c->lr=c->r[0]; // 801E73AC
  c->r[1]=c->r[1]+0x00000020u; // 801E73B0
  return; // 801E73B4
}

// __construct_array
void f_801E73B8(Ctx* __restrict c) {
  trace_call(0x801E73B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E73B8
  c->r[0]=c->lr; // 801E73BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E73C0
  c->r[0]=0u+0x00000000u; // 801E73C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E73C8
  c->r[31]=c->r[3]|c->r[3]; // 801E73CC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E73D0
  c->r[30]=c->r[7]|c->r[7]; // 801E73D4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E73D8
  c->r[29]=c->r[6]|c->r[6]; // 801E73DC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E73E0
  c->r[28]=c->r[4]|c->r[4]; // 801E73E4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E73E8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801E73EC
  W32(c->r[1]+0x00000010u,c->r[7]); // 801E73F0
  W32(c->r[1]+0x00000014u,c->r[5]); // 801E73F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E73F8
  goto L_801E7424; // 801E73FC
L_801E7400:;
  c->r[12]=c->r[28]|c->r[28]; // 801E7400
  c->r[3]=c->r[31]|c->r[31]; // 801E7404
  c->r[4]=0u+0x00000001u; // 801E7408
  c->ctr=c->r[12]; // 801E740C
  if (true) { c->lr=0x801E7414u; dispatch(c,c->ctr); } // 801E7410
  c->r[3]=R32(c->r[1]+0x00000018u); // 801E7414
  c->r[31]=c->r[31]+c->r[29]; // 801E7418
  c->r[0]=c->r[3]+0x00000001u; // 801E741C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E7420
L_801E7424:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801E7424
  cmpu(c,0,c->r[4],c->r[30]); // 801E7428
  if (crb(c,0)) { IRQCHK(c); goto L_801E7400; } // 801E742C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E7430
  cmpu(c,0,c->r[4],c->r[0]); // 801E7434
  if (!crb(c,0)) { goto L_801E7490; } // 801E7438
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E743C
  cmps(c,0,(int32_t)c->r[0],0); // 801E7440
  if (crb(c,2)) { goto L_801E7490; } // 801E7444
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E7448
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E744C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801E7450
  c->r[31]=c->r[3]+c->r[0]; // 801E7454
  goto L_801E7484; // 801E7458
L_801E745C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E745C
  c->r[4]=0u+0xFFFFFFFFu; // 801E7460
  c->r[12]=R32(c->r[1]+0x00000014u); // 801E7464
  c->r[31]=c->r[31]-c->r[0]; // 801E7468
  c->r[3]=c->r[31]|c->r[31]; // 801E746C
  c->ctr=c->r[12]; // 801E7470
  if (true) { c->lr=0x801E7478u; dispatch(c,c->ctr); } // 801E7474
  c->r[3]=R32(c->r[1]+0x00000018u); // 801E7478
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E747C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E7480
L_801E7484:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801E7484
  cmps(c,0,(int32_t)c->r[0],0); // 801E7488
  if (!crb(c,2)) { IRQCHK(c); goto L_801E745C; } // 801E748C
L_801E7490:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E7490
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E7494
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E7498
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E749C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E74A0
  c->lr=c->r[0]; // 801E74A4
  c->r[1]=c->r[1]+0x00000030u; // 801E74A8
  return; // 801E74AC
}

// __destroy_arr
void f_801E74B0(Ctx* __restrict c) {
  trace_call(0x801E74B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E74B0
  c->r[0]=c->lr; // 801E74B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E74B8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801E74BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E74C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E74C4
  c->r[30]=c->r[6]|c->r[6]; // 801E74C8
  c->r[31]=c->r[3]+c->r[0]; // 801E74CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E74D0
  c->r[29]=c->r[5]|c->r[5]; // 801E74D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E74D8
  c->r[28]=c->r[4]|c->r[4]; // 801E74DC
  goto L_801E7500; // 801E74E0
L_801E74E4:;
  c->r[31]=c->r[31]-c->r[29]; // 801E74E4
  c->r[12]=c->r[28]|c->r[28]; // 801E74E8
  c->r[3]=c->r[31]|c->r[31]; // 801E74EC
  c->r[4]=0u+0xFFFFFFFFu; // 801E74F0
  c->ctr=c->r[12]; // 801E74F4
  if (true) { c->lr=0x801E74FCu; dispatch(c,c->ctr); } // 801E74F8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801E74FC
L_801E7500:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E7500
  if (!crb(c,2)) { IRQCHK(c); goto L_801E74E4; } // 801E7504
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7508
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E750C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7510
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E7514
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E7518
  c->lr=c->r[0]; // 801E751C
  c->r[1]=c->r[1]+0x00000020u; // 801E7520
  return; // 801E7524
}

// __ptmf_cmpr
void f_801E7528(Ctx* __restrict c) {
  trace_call(0x801E7528u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801E7528
  c->r[6]=R32(c->r[4]+0x00000000u); // 801E752C
  c->r[7]=R32(c->r[3]+0x00000004u); // 801E7530
  c->r[8]=R32(c->r[4]+0x00000004u); // 801E7534
  c->r[9]=R32(c->r[3]+0x00000008u); // 801E7538
  c->r[10]=R32(c->r[4]+0x00000008u); // 801E753C
  c->r[3]=0u+0x00000001u; // 801E7540
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801E7544
  cmps(c,6,(int32_t)c->r[7],(int32_t)c->r[8]); // 801E7548
  cmps(c,7,(int32_t)c->r[9],(int32_t)c->r[10]); // 801E754C
  if (!crb(c,2)) return; // 801E7550
  if (!crb(c,26)) return; // 801E7554
  if (!crb(c,30)) return; // 801E7558
  c->r[3]=0u+0x00000000u; // 801E755C
  return; // 801E7560
}

// __ptmf_scall
void f_801E7564(Ctx* __restrict c) {
  trace_call(0x801E7564u);
  c->r[0]=R32(c->r[12]+0x00000000u); // 801E7564
  c->r[11]=R32(c->r[12]+0x00000004u); // 801E7568
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E756C
  c->r[3]=c->r[3]+c->r[0]; // 801E7570
  cmps(c,0,(int32_t)c->r[11],0); // 801E7574
  if (crb(c,0)) { goto L_801E7584; } // 801E7578
  c->r[12]=R32(c->r[3]+c->r[12]); // 801E757C
  c->r[12]=R32(c->r[12]+c->r[11]); // 801E7580
L_801E7584:;
  c->ctr=c->r[12]; // 801E7584
  if (true) { dispatch(c,c->ctr); return; } // 801E7588
}

// fn_801E758C
void f_801E758C(Ctx* __restrict c) {
  trace_call(0x801E758Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E758C
  c->r[0]=c->lr; // 801E7590
  cmps(c,0,(int32_t)c->r[3],0); // 801E7594
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7598
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E759C
  if (!crb(c,2)) { goto L_801E75AC; } // 801E75A0
  c->r[3]=0u+0x00000000u; // 801E75A4
  goto L_801E77D4; // 801E75A8
L_801E75AC:;
  c->r[4]=R32(c->r[3]+c->r[4]); // 801E75AC
  c->r[11]=R32(c->r[4]+0x00000000u); // 801E75B0
  cmps(c,0,(int32_t)c->r[11],0); // 801E75B4
  if (crb(c,2)) { goto L_801E77A0; } // 801E75B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E75BC
  cmps(c,0,(int32_t)c->r[5],0); // 801E75C0
  c->r[3]=c->r[3]+c->r[0]; // 801E75C4
  if (crb(c,2)) { goto L_801E77D4; } // 801E75C8
  c->r[4]=R32(c->r[5]+0x00000000u); // 801E75CC
  c->r[9]=R32(c->r[11]+0x00000000u); // 801E75D0
  c->r[10]=c->r[4]|c->r[4]; // 801E75D4
  goto L_801E75F4; // 801E75D8
L_801E75DC:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[12]; cr0(c,c->r[5]); // 801E75DC
  if (!crb(c,2)) { goto L_801E75EC; } // 801E75E0
  c->r[5]=0u+0x00000000u; // 801E75E4
  goto L_801E7618; // 801E75E8
L_801E75EC:;
  c->r[9]=c->r[9]+0x00000001u; // 801E75EC
  c->r[10]=c->r[10]+0x00000001u; // 801E75F0
L_801E75F4:;
  c->r[12]=R8(c->r[9]+0x00000000u); // 801E75F4
  c->r[5]=R8(c->r[10]+0x00000000u); // 801E75F8
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801E75FC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801E7600
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801E7604
  if (crb(c,2)) { IRQCHK(c); goto L_801E75DC; } // 801E7608
  c->r[8]=R8(c->r[10]+0x00000000u); // 801E760C
  c->r[5]=R8(c->r[9]+0x00000000u); // 801E7610
  c->r[5]=c->r[5]-c->r[8]; // 801E7614
L_801E7618:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7618
  if (!crb(c,2)) { goto L_801E7624; } // 801E761C
  goto L_801E77D4; // 801E7620
L_801E7624:;
  c->r[5]=R32(c->r[11]+0x00000004u); // 801E7624
  cmps(c,0,(int32_t)c->r[5],0); // 801E7628
  if (crb(c,2)) { goto L_801E77A0; } // 801E762C
  goto L_801E7794; // 801E7630
L_801E7634:;
  c->r[12]=R32(c->r[5]+0x00000004u); // 801E7634
  c->r[8]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[8]); // 801E7638
  if (crb(c,2)) { goto L_801E7738; } // 801E763C
  c->r[8]=rotl(c->r[12],0)&0x7FFFFFFFu; // 801E7640
  c->r[31]=R32(c->r[5]+0x00000008u); // 801E7644
  c->r[8]=c->r[0]+c->r[8]; cr0(c,c->r[8]); // 801E7648
  if (!crb(c,2)) { goto L_801E7724; } // 801E764C
  c->r[10]=R32(c->r[9]+0x00000000u); // 801E7650
  c->r[11]=c->r[4]|c->r[4]; // 801E7654
  goto L_801E7674; // 801E7658
L_801E765C:;
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[12]; cr0(c,c->r[8]); // 801E765C
  if (!crb(c,2)) { goto L_801E766C; } // 801E7660
  c->r[8]=0u+0x00000000u; // 801E7664
  goto L_801E7698; // 801E7668
L_801E766C:;
  c->r[10]=c->r[10]+0x00000001u; // 801E766C
  c->r[11]=c->r[11]+0x00000001u; // 801E7670
L_801E7674:;
  c->r[12]=R8(c->r[10]+0x00000000u); // 801E7674
  c->r[8]=R8(c->r[11]+0x00000000u); // 801E7678
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801E767C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801E7680
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 801E7684
  if (crb(c,2)) { IRQCHK(c); goto L_801E765C; } // 801E7688
  c->r[9]=R8(c->r[11]+0x00000000u); // 801E768C
  c->r[8]=R8(c->r[10]+0x00000000u); // 801E7690
  c->r[8]=c->r[8]-c->r[9]; // 801E7694
L_801E7698:;
  cmps(c,0,(int32_t)c->r[8],0); // 801E7698
  if (!crb(c,2)) { goto L_801E7724; } // 801E769C
  c->r[12]=c->r[5]+0x0000000Cu; // 801E76A0
  c->ctr=c->r[31]; // 801E76A4
  cmps(c,0,(int32_t)c->r[31],0); // 801E76A8
  if (!crb(c,1)) { goto L_801E77A0; } // 801E76AC
L_801E76B0:;
  c->r[11]=R32(c->r[12]+0x00000004u); // 801E76B0
  c->r[4]=c->r[0]+c->r[11]; cr0(c,c->r[4]); // 801E76B4
  if (!crb(c,2)) { goto L_801E7718; } // 801E76B8
  c->r[4]=R32(c->r[12]+0x00000000u); // 801E76BC
  c->r[9]=R32(c->r[6]+0x00000000u); // 801E76C0
  c->r[8]=R32(c->r[4]+0x00000000u); // 801E76C4
  goto L_801E76E4; // 801E76C8
L_801E76CC:;
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[4]); // 801E76CC
  if (!crb(c,2)) { goto L_801E76DC; } // 801E76D0
  c->r[4]=0u+0x00000000u; // 801E76D4
  goto L_801E7708; // 801E76D8
L_801E76DC:;
  c->r[8]=c->r[8]+0x00000001u; // 801E76DC
  c->r[9]=c->r[9]+0x00000001u; // 801E76E0
L_801E76E4:;
  c->r[10]=R8(c->r[8]+0x00000000u); // 801E76E4
  c->r[4]=R8(c->r[9]+0x00000000u); // 801E76E8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801E76EC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801E76F0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801E76F4
  if (crb(c,2)) { IRQCHK(c); goto L_801E76CC; } // 801E76F8
  c->r[5]=R8(c->r[9]+0x00000000u); // 801E76FC
  c->r[4]=R8(c->r[8]+0x00000000u); // 801E7700
  c->r[4]=c->r[4]-c->r[5]; // 801E7704
L_801E7708:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E7708
  if (!crb(c,2)) { goto L_801E7718; } // 801E770C
  c->r[3]=c->r[3]+c->r[11]; // 801E7710
  goto L_801E77D4; // 801E7714
L_801E7718:;
  c->r[12]=c->r[12]+0x00000008u; // 801E7718
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E76B0; } // 801E771C
  goto L_801E77A0; // 801E7720
L_801E7724:;
  c->r[8]=c->r[31]+0xFFFFFFFFu; // 801E7724
  c->r[5]=c->r[5]+0x0000000Cu; // 801E7728
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801E772C
  c->r[5]=c->r[5]+c->r[8]; // 801E7730
  goto L_801E7790; // 801E7734
L_801E7738:;
  c->r[10]=R32(c->r[9]+0x00000000u); // 801E7738
  c->r[11]=c->r[4]|c->r[4]; // 801E773C
  goto L_801E775C; // 801E7740
L_801E7744:;
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[31]; cr0(c,c->r[8]); // 801E7744
  if (!crb(c,2)) { goto L_801E7754; } // 801E7748
  c->r[8]=0u+0x00000000u; // 801E774C
  goto L_801E7780; // 801E7750
L_801E7754:;
  c->r[10]=c->r[10]+0x00000001u; // 801E7754
  c->r[11]=c->r[11]+0x00000001u; // 801E7758
L_801E775C:;
  c->r[31]=R8(c->r[10]+0x00000000u); // 801E775C
  c->r[8]=R8(c->r[11]+0x00000000u); // 801E7760
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801E7764
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801E7768
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 801E776C
  if (crb(c,2)) { IRQCHK(c); goto L_801E7744; } // 801E7770
  c->r[9]=R8(c->r[11]+0x00000000u); // 801E7774
  c->r[8]=R8(c->r[10]+0x00000000u); // 801E7778
  c->r[8]=c->r[8]-c->r[9]; // 801E777C
L_801E7780:;
  cmps(c,0,(int32_t)c->r[8],0); // 801E7780
  if (!crb(c,2)) { goto L_801E7790; } // 801E7784
  c->r[3]=c->r[3]+c->r[12]; // 801E7788
  goto L_801E77D4; // 801E778C
L_801E7790:;
  c->r[5]=c->r[5]+0x00000008u; // 801E7790
L_801E7794:;
  c->r[9]=R32(c->r[5]+0x00000000u); // 801E7794
  cmps(c,0,(int32_t)c->r[9],0); // 801E7798
  if (!crb(c,2)) { IRQCHK(c); goto L_801E7634; } // 801E779C
L_801E77A0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E77A0
  if (crb(c,2)) { goto L_801E77D0; } // 801E77A4
  c->r[4]=0u+0x804C0000u; // 801E77A8
  c->r[3]=0u+0x803D0000u; // 801E77AC
  c->r[4]=c->r[4]+0xFFFF80E8u; // 801E77B0
  c->r[5]=0u+0x801E0000u; // 801E77B4
  c->r[3]=c->r[3]+0xFFFF8DD8u; // 801E77B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E77BC
  c->r[3]=c->r[3]+0x00000027u; // 801E77C0
  c->r[4]=c->r[1]+0x00000008u; // 801E77C4
  c->r[5]=c->r[5]+0x000077E8u; // 801E77C8
  c->lr=0x801E77D0u; f_801E96FC(c); // 801E77CC
L_801E77D0:;
  c->r[3]=0u+0x00000000u; // 801E77D0
L_801E77D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E77D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E77D8
  c->lr=c->r[0]; // 801E77DC
  c->r[1]=c->r[1]+0x00000020u; // 801E77E0
  return; // 801E77E4
}

// fn_801E77E8
void f_801E77E8(Ctx* __restrict c) {
  trace_call(0x801E77E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E77E8
  c->r[0]=c->lr; // 801E77EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E77F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E77F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E77F8
  c->r[31]=c->r[3]|c->r[3]; // 801E77FC
  if (crb(c,2)) { goto L_801E7810; } // 801E7800
  cmps(c,0,(int32_t)c->r[4],0); // 801E7804
  if (!crb(c,1)) { goto L_801E7810; } // 801E7808
  c->lr=0x801E7810u; f_8001AAC0(c); // 801E780C
L_801E7810:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7814
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7818
  c->lr=c->r[0]; // 801E781C
  c->r[1]=c->r[1]+0x00000010u; // 801E7820
  return; // 801E7824
}

// fn_801E7828
void f_801E7828(Ctx* __restrict c) {
  trace_call(0x801E7828u);
  c->r[3]=0u+0x804C0000u; // 801E7828
  c->r[3]=c->r[3]+0xFFFF8104u; // 801E782C
  return; // 801E7830
}

// fn_801E7834
void f_801E7834(Ctx* __restrict c) {
  trace_call(0x801E7834u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7834
  c->r[4]=0u+0x803D0000u; // 801E7838
  c->r[4]=c->r[4]+0xFFFF8E20u; // 801E783C
  c->r[3]=0u+0x00000000u; // 801E7840
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801E7844
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=RF64(ea);} // 801E7848
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=RF64(ea);} // 801E784C
  fcmp(c,0,c->f[1],c->f[0]); // 801E7850
  fcmp(c,6,c->f[1],c->f[3]); // 801E7854
  if (crb(c,0)) { goto L_801E7888; } // 801E7858
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801E785C
  if (!crb(c,24)) { goto L_801E7888; } // 801E7860
  fcmp(c,7,c->f[1],c->f[4]); // 801E7864
  c->f[2]=c->f[1]; // 801E7868
  if (crb(c,28)) { goto L_801E7874; } // 801E786C
  c->f[2]=c->f[1]-c->f[4]; // 801E7870
L_801E7874:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E7874
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 801E7878
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E787C
  if (crb(c,28)) { goto L_801E7888; } // 801E7880
  c->r[3]=c->r[3]+0x80000000u; // 801E7884
L_801E7888:;
  c->r[1]=c->r[1]+0x00000010u; // 801E7888
  return; // 801E788C
  {uint32_t ea=c->r[11]+0xFFFFFF70u; WF64(ea,c->f[14]);} // 801E7890
  {uint32_t ea=c->r[11]+0xFFFFFF78u; WF64(ea,c->f[15]);} // 801E7894
  {uint32_t ea=c->r[11]+0xFFFFFF80u; WF64(ea,c->f[16]);} // 801E7898
  {uint32_t ea=c->r[11]+0xFFFFFF88u; WF64(ea,c->f[17]);} // 801E789C
  {uint32_t ea=c->r[11]+0xFFFFFF90u; WF64(ea,c->f[18]);} // 801E78A0
  {uint32_t ea=c->r[11]+0xFFFFFF98u; WF64(ea,c->f[19]);} // 801E78A4
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; WF64(ea,c->f[20]);} // 801E78A8
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; WF64(ea,c->f[21]);} // 801E78AC
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; WF64(ea,c->f[22]);} // 801E78B0
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} // 801E78B4
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} // 801E78B8
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} // 801E78BC
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} // 801E78C0
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} // 801E78C4
  f_801E78C8(c);
}

// fn_801E78C8
void f_801E78C8(Ctx* __restrict c) {
  trace_call(0x801E78C8u);
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} // 801E78C8
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} // 801E78CC
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} // 801E78D0
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} // 801E78D4
  return; // 801E78D8
  {uint32_t ea=c->r[11]+0xFFFFFF70u; c->f[14]=RF64(ea);} // 801E78DC
  {uint32_t ea=c->r[11]+0xFFFFFF78u; c->f[15]=RF64(ea);} // 801E78E0
  {uint32_t ea=c->r[11]+0xFFFFFF80u; c->f[16]=RF64(ea);} // 801E78E4
  {uint32_t ea=c->r[11]+0xFFFFFF88u; c->f[17]=RF64(ea);} // 801E78E8
  {uint32_t ea=c->r[11]+0xFFFFFF90u; c->f[18]=RF64(ea);} // 801E78EC
  {uint32_t ea=c->r[11]+0xFFFFFF98u; c->f[19]=RF64(ea);} // 801E78F0
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; c->f[20]=RF64(ea);} // 801E78F4
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; c->f[21]=RF64(ea);} // 801E78F8
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; c->f[22]=RF64(ea);} // 801E78FC
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} // 801E7900
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} // 801E7904
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} // 801E7908
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} // 801E790C
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} // 801E7910
  f_801E7914(c);
}

// fn_801E7914
void f_801E7914(Ctx* __restrict c) {
  trace_call(0x801E7914u);
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} // 801E7914
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} // 801E7918
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} // 801E791C
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} // 801E7920
  return; // 801E7924
  W32(c->r[11]+0xFFFFFFB8u,c->r[14]); // 801E7928
  W32(c->r[11]+0xFFFFFFBCu,c->r[15]); // 801E792C
  W32(c->r[11]+0xFFFFFFC0u,c->r[16]); // 801E7930
  W32(c->r[11]+0xFFFFFFC4u,c->r[17]); // 801E7934
  W32(c->r[11]+0xFFFFFFC8u,c->r[18]); // 801E7938
  W32(c->r[11]+0xFFFFFFCCu,c->r[19]); // 801E793C
  W32(c->r[11]+0xFFFFFFD0u,c->r[20]); // 801E7940
  W32(c->r[11]+0xFFFFFFD4u,c->r[21]); // 801E7944
  W32(c->r[11]+0xFFFFFFD8u,c->r[22]); // 801E7948
  W32(c->r[11]+0xFFFFFFDCu,c->r[23]); // 801E794C
  W32(c->r[11]+0xFFFFFFE0u,c->r[24]); // 801E7950
  W32(c->r[11]+0xFFFFFFE4u,c->r[25]); // 801E7954
  W32(c->r[11]+0xFFFFFFE8u,c->r[26]); // 801E7958
  f_801E795C(c);
}

// fn_801E795C
void f_801E795C(Ctx* __restrict c) {
  trace_call(0x801E795Cu);
  W32(c->r[11]+0xFFFFFFECu,c->r[27]); // 801E795C
  W32(c->r[11]+0xFFFFFFF0u,c->r[28]); // 801E7960
  W32(c->r[11]+0xFFFFFFF4u,c->r[29]); // 801E7964
  W32(c->r[11]+0xFFFFFFF8u,c->r[30]); // 801E7968
  W32(c->r[11]+0xFFFFFFFCu,c->r[31]); // 801E796C
  return; // 801E7970
  c->r[14]=R32(c->r[11]+0xFFFFFFB8u); // 801E7974
  c->r[15]=R32(c->r[11]+0xFFFFFFBCu); // 801E7978
  c->r[16]=R32(c->r[11]+0xFFFFFFC0u); // 801E797C
  c->r[17]=R32(c->r[11]+0xFFFFFFC4u); // 801E7980
  c->r[18]=R32(c->r[11]+0xFFFFFFC8u); // 801E7984
  c->r[19]=R32(c->r[11]+0xFFFFFFCCu); // 801E7988
  c->r[20]=R32(c->r[11]+0xFFFFFFD0u); // 801E798C
  c->r[21]=R32(c->r[11]+0xFFFFFFD4u); // 801E7990
  c->r[22]=R32(c->r[11]+0xFFFFFFD8u); // 801E7994
  c->r[23]=R32(c->r[11]+0xFFFFFFDCu); // 801E7998
  c->r[24]=R32(c->r[11]+0xFFFFFFE0u); // 801E799C
  c->r[25]=R32(c->r[11]+0xFFFFFFE4u); // 801E79A0
  c->r[26]=R32(c->r[11]+0xFFFFFFE8u); // 801E79A4
  f_801E79A8(c);
}

// fn_801E79A8
void f_801E79A8(Ctx* __restrict c) {
  trace_call(0x801E79A8u);
  c->r[27]=R32(c->r[11]+0xFFFFFFECu); // 801E79A8
  c->r[28]=R32(c->r[11]+0xFFFFFFF0u); // 801E79AC
  c->r[29]=R32(c->r[11]+0xFFFFFFF4u); // 801E79B0
  c->r[30]=R32(c->r[11]+0xFFFFFFF8u); // 801E79B4
  c->r[31]=R32(c->r[11]+0xFFFFFFFCu); // 801E79B8
  return; // 801E79BC
}

// __div2u
void f_801E79C0(Ctx* __restrict c) {
  trace_call(0x801E79C0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E79C0
  c->r[0]=cntlz(c->r[3]); // 801E79C4
  c->r[9]=cntlz(c->r[4]); // 801E79C8
  if (!crb(c,2)) { goto L_801E79D4; } // 801E79CC
  c->r[0]=c->r[9]+0x00000020u; // 801E79D0
L_801E79D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E79D4
  c->r[9]=cntlz(c->r[5]); // 801E79D8
  c->r[10]=cntlz(c->r[6]); // 801E79DC
  if (!crb(c,2)) { goto L_801E79E8; } // 801E79E0
  c->r[9]=c->r[10]+0x00000020u; // 801E79E4
L_801E79E8:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801E79E8
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801E79EC
  if (crb(c,1)) { goto L_801E7AA0; } // 801E79F0
  c->r[9]=c->r[9]+0x00000001u; // 801E79F4
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801E79F8
  c->r[0]=c->r[0]+c->r[9]; // 801E79FC
  c->r[9]=c->r[10]-c->r[9]; // 801E7A00
  c->ctr=c->r[9]; // 801E7A04
  cmps(c,0,(int32_t)c->r[9],32); // 801E7A08
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801E7A0C
  if (crb(c,0)) { goto L_801E7A20; } // 801E7A10
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801E7A14
  c->r[7]=0u+0x00000000u; // 801E7A18
  goto L_801E7A34; // 801E7A1C
L_801E7A20:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7A20
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801E7A24
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7A28
  c->r[8]=c->r[8]|c->r[7]; // 801E7A2C
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E7A30
L_801E7A34:;
  cmps(c,0,(int32_t)c->r[0],32); // 801E7A34
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801E7A38
  if (crb(c,0)) { goto L_801E7A4C; } // 801E7A3C
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7A40
  c->r[4]=0u+0x00000000u; // 801E7A44
  goto L_801E7A60; // 801E7A48
L_801E7A4C:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E7A4C
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801E7A50
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7A54
  c->r[3]=c->r[3]|c->r[9]; // 801E7A58
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801E7A5C
L_801E7A60:;
  c->r[10]=0u+0xFFFFFFFFu; // 801E7A60
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801E7A64
L_801E7A68:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7A68
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7A6C
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801E7A70
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801E7A74
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801E7A78
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801E7A7C
  if (crb(c,0)) { goto L_801E7A90; } // 801E7A80
  c->r[8]=c->r[0]|c->r[0]; // 801E7A84
  c->r[7]=c->r[9]|c->r[9]; // 801E7A88
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801E7A8C
L_801E7A90:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7A68; } // 801E7A90
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7A94
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7A98
  return; // 801E7A9C
L_801E7AA0:;
  c->r[4]=0u+0x00000000u; // 801E7AA0
  c->r[3]=0u+0x00000000u; // 801E7AA4
  return; // 801E7AA8
}

// __div2i
void f_801E7AAC(Ctx* __restrict c) {
  trace_call(0x801E7AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7AAC
  c->r[9]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[9]); // 801E7AB0
  if (crb(c,2)) { goto L_801E7AC0; } // 801E7AB4
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E7AB8
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E7ABC
L_801E7AC0:;
  W32(c->r[1]+0x00000008u,c->r[9]); // 801E7AC0
  c->r[10]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[10]); // 801E7AC4
  if (crb(c,2)) { goto L_801E7AD4; } // 801E7AC8
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 801E7ACC
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 801E7AD0
L_801E7AD4:;
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801E7AD4
  cmps(c,0,(int32_t)c->r[3],0); // 801E7AD8
  c->r[0]=cntlz(c->r[3]); // 801E7ADC
  c->r[9]=cntlz(c->r[4]); // 801E7AE0
  if (!crb(c,2)) { goto L_801E7AEC; } // 801E7AE4
  c->r[0]=c->r[9]+0x00000020u; // 801E7AE8
L_801E7AEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7AEC
  c->r[9]=cntlz(c->r[5]); // 801E7AF0
  c->r[10]=cntlz(c->r[6]); // 801E7AF4
  if (!crb(c,2)) { goto L_801E7B00; } // 801E7AF8
  c->r[9]=c->r[10]+0x00000020u; // 801E7AFC
L_801E7B00:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801E7B00
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801E7B04
  if (crb(c,1)) { goto L_801E7BD4; } // 801E7B08
  c->r[9]=c->r[9]+0x00000001u; // 801E7B0C
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801E7B10
  c->r[0]=c->r[0]+c->r[9]; // 801E7B14
  c->r[9]=c->r[10]-c->r[9]; // 801E7B18
  c->ctr=c->r[9]; // 801E7B1C
  cmps(c,0,(int32_t)c->r[9],32); // 801E7B20
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801E7B24
  if (crb(c,0)) { goto L_801E7B38; } // 801E7B28
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801E7B2C
  c->r[7]=0u+0x00000000u; // 801E7B30
  goto L_801E7B4C; // 801E7B34
L_801E7B38:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7B38
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801E7B3C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7B40
  c->r[8]=c->r[8]|c->r[7]; // 801E7B44
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E7B48
L_801E7B4C:;
  cmps(c,0,(int32_t)c->r[0],32); // 801E7B4C
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801E7B50
  if (crb(c,0)) { goto L_801E7B64; } // 801E7B54
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7B58
  c->r[4]=0u+0x00000000u; // 801E7B5C
  goto L_801E7B78; // 801E7B60
L_801E7B64:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E7B64
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801E7B68
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7B6C
  c->r[3]=c->r[3]|c->r[9]; // 801E7B70
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801E7B74
L_801E7B78:;
  c->r[10]=0u+0xFFFFFFFFu; // 801E7B78
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801E7B7C
L_801E7B80:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7B80
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7B84
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801E7B88
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801E7B8C
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801E7B90
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801E7B94
  if (crb(c,0)) { goto L_801E7BA8; } // 801E7B98
  c->r[8]=c->r[0]|c->r[0]; // 801E7B9C
  c->r[7]=c->r[9]|c->r[9]; // 801E7BA0
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801E7BA4
L_801E7BA8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7B80; } // 801E7BA8
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7BAC
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7BB0
  c->r[9]=R32(c->r[1]+0x00000008u); // 801E7BB4
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 801E7BB8
  c->r[7]=c->r[9]^c->r[10]; cr0(c,c->r[7]); // 801E7BBC
  if (crb(c,2)) { goto L_801E7BD0; } // 801E7BC0
  cmps(c,0,(int32_t)c->r[9],0); // 801E7BC4
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E7BC8
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E7BCC
L_801E7BD0:;
  goto L_801E7BDC; // 801E7BD0
L_801E7BD4:;
  c->r[4]=0u+0x00000000u; // 801E7BD4
  c->r[3]=0u+0x00000000u; // 801E7BD8
L_801E7BDC:;
  c->r[1]=c->r[1]+0x00000010u; // 801E7BDC
  return; // 801E7BE0
}

// __mod2u
void f_801E7BE4(Ctx* __restrict c) {
  trace_call(0x801E7BE4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E7BE4
  c->r[0]=cntlz(c->r[3]); // 801E7BE8
  c->r[9]=cntlz(c->r[4]); // 801E7BEC
  if (!crb(c,2)) { goto L_801E7BF8; } // 801E7BF0
  c->r[0]=c->r[9]+0x00000020u; // 801E7BF4
L_801E7BF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7BF8
  c->r[9]=cntlz(c->r[5]); // 801E7BFC
  c->r[10]=cntlz(c->r[6]); // 801E7C00
  if (!crb(c,2)) { goto L_801E7C0C; } // 801E7C04
  c->r[9]=c->r[10]+0x00000020u; // 801E7C08
L_801E7C0C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801E7C0C
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801E7C10
  if (crb(c,1)) { goto L_801E7CC4; } // 801E7C14
  c->r[9]=c->r[9]+0x00000001u; // 801E7C18
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801E7C1C
  c->r[0]=c->r[0]+c->r[9]; // 801E7C20
  c->r[9]=c->r[10]-c->r[9]; // 801E7C24
  c->ctr=c->r[9]; // 801E7C28
  cmps(c,0,(int32_t)c->r[9],32); // 801E7C2C
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801E7C30
  if (crb(c,0)) { goto L_801E7C44; } // 801E7C34
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801E7C38
  c->r[7]=0u+0x00000000u; // 801E7C3C
  goto L_801E7C58; // 801E7C40
L_801E7C44:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7C44
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801E7C48
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7C4C
  c->r[8]=c->r[8]|c->r[7]; // 801E7C50
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E7C54
L_801E7C58:;
  cmps(c,0,(int32_t)c->r[0],32); // 801E7C58
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801E7C5C
  if (crb(c,0)) { goto L_801E7C70; } // 801E7C60
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7C64
  c->r[4]=0u+0x00000000u; // 801E7C68
  goto L_801E7C84; // 801E7C6C
L_801E7C70:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E7C70
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801E7C74
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7C78
  c->r[3]=c->r[3]|c->r[9]; // 801E7C7C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801E7C80
L_801E7C84:;
  c->r[10]=0u+0xFFFFFFFFu; // 801E7C84
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801E7C88
L_801E7C8C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7C8C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7C90
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801E7C94
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801E7C98
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801E7C9C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801E7CA0
  if (crb(c,0)) { goto L_801E7CB4; } // 801E7CA4
  c->r[8]=c->r[0]|c->r[0]; // 801E7CA8
  c->r[7]=c->r[9]|c->r[9]; // 801E7CAC
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801E7CB0
L_801E7CB4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7C8C; } // 801E7CB4
  c->r[4]=c->r[8]|c->r[8]; // 801E7CB8
  c->r[3]=c->r[7]|c->r[7]; // 801E7CBC
  return; // 801E7CC0
L_801E7CC4:;
  return; // 801E7CC4
}

// __mod2i
void f_801E7CC8(Ctx* __restrict c) {
  trace_call(0x801E7CC8u);
  cmps(c,7,(int32_t)c->r[3],0); // 801E7CC8
  if (!crb(c,28)) { goto L_801E7CD8; } // 801E7CCC
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E7CD0
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E7CD4
L_801E7CD8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7CD8
  if (!crb(c,0)) { goto L_801E7CE8; } // 801E7CDC
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 801E7CE0
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 801E7CE4
L_801E7CE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E7CE8
  c->r[0]=cntlz(c->r[3]); // 801E7CEC
  c->r[9]=cntlz(c->r[4]); // 801E7CF0
  if (!crb(c,2)) { goto L_801E7CFC; } // 801E7CF4
  c->r[0]=c->r[9]+0x00000020u; // 801E7CF8
L_801E7CFC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E7CFC
  c->r[9]=cntlz(c->r[5]); // 801E7D00
  c->r[10]=cntlz(c->r[6]); // 801E7D04
  if (!crb(c,2)) { goto L_801E7D10; } // 801E7D08
  c->r[9]=c->r[10]+0x00000020u; // 801E7D0C
L_801E7D10:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801E7D10
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801E7D14
  if (crb(c,1)) { goto L_801E7DC4; } // 801E7D18
  c->r[9]=c->r[9]+0x00000001u; // 801E7D1C
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801E7D20
  c->r[0]=c->r[0]+c->r[9]; // 801E7D24
  c->r[9]=c->r[10]-c->r[9]; // 801E7D28
  c->ctr=c->r[9]; // 801E7D2C
  cmps(c,0,(int32_t)c->r[9],32); // 801E7D30
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801E7D34
  if (crb(c,0)) { goto L_801E7D48; } // 801E7D38
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801E7D3C
  c->r[7]=0u+0x00000000u; // 801E7D40
  goto L_801E7D5C; // 801E7D44
L_801E7D48:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7D48
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801E7D4C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7D50
  c->r[8]=c->r[8]|c->r[7]; // 801E7D54
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E7D58
L_801E7D5C:;
  cmps(c,0,(int32_t)c->r[0],32); // 801E7D5C
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801E7D60
  if (crb(c,0)) { goto L_801E7D74; } // 801E7D64
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7D68
  c->r[4]=0u+0x00000000u; // 801E7D6C
  goto L_801E7D88; // 801E7D70
L_801E7D74:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E7D74
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801E7D78
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801E7D7C
  c->r[3]=c->r[3]|c->r[9]; // 801E7D80
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801E7D84
L_801E7D88:;
  c->r[10]=0u+0xFFFFFFFFu; // 801E7D88
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801E7D8C
L_801E7D90:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801E7D90
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801E7D94
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801E7D98
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801E7D9C
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801E7DA0
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801E7DA4
  if (crb(c,0)) { goto L_801E7DB8; } // 801E7DA8
  c->r[8]=c->r[0]|c->r[0]; // 801E7DAC
  c->r[7]=c->r[9]|c->r[9]; // 801E7DB0
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801E7DB4
L_801E7DB8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E7D90; } // 801E7DB8
  c->r[4]=c->r[8]|c->r[8]; // 801E7DBC
  c->r[3]=c->r[7]|c->r[7]; // 801E7DC0
L_801E7DC4:;
  if (!crb(c,28)) { goto L_801E7DD0; } // 801E7DC4
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E7DC8
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E7DCC
L_801E7DD0:;
  return; // 801E7DD0
}

// __shl2i
void f_801E7DD4(Ctx* __restrict c) {
  trace_call(0x801E7DD4u);
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801E7DD4
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801E7DD8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 801E7DDC
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801E7DE0
  c->r[3]=c->r[3]|c->r[10]; // 801E7DE4
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7DE8
  c->r[3]=c->r[3]|c->r[10]; // 801E7DEC
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801E7DF0
  return; // 801E7DF4
}

// fn_801E7DF8
void f_801E7DF8(Ctx* __restrict c) {
  trace_call(0x801E7DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7DF8
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 801E7DFC
  if (crb(c,2)) { goto L_801E7E0C; } // 801E7E00
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E7E04
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E7E08
L_801E7E0C:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 801E7E0C
  c->r[6]=0u+0x00000000u; // 801E7E10
  if (crb(c,2)) { goto L_801E7E94; } // 801E7E14
  c->r[7]=cntlz(c->r[3]); // 801E7E18
  c->r[8]=cntlz(c->r[4]); // 801E7E1C
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 801E7E20
  c->r[9]=sraw(c,c->r[9],31); // 801E7E24
  c->r[9]=c->r[9]&c->r[8]; // 801E7E28
  c->r[7]=c->r[7]+c->r[9]; // 801E7E2C
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 801E7E30
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 801E7E34
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7E38
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801E7E3C
  c->r[3]=c->r[3]|c->r[10]; // 801E7E40
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7E44
  c->r[3]=c->r[3]|c->r[10]; // 801E7E48
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 801E7E4C
  c->r[6]=c->r[6]-c->r[7]; // 801E7E50
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 801E7E54
  cmps(c,0,(int32_t)c->r[7],1024); // 801E7E58
  c->r[6]=c->r[6]+0x0000043Eu; // 801E7E5C
  if (crb(c,0)) { goto L_801E7E7C; } // 801E7E60
  if (crb(c,1)) { goto L_801E7E70; } // 801E7E64
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 801E7E68
  if (crb(c,2)) { goto L_801E7E7C; } // 801E7E6C
L_801E7E70:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 801E7E70
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801E7E74
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 801E7E78
L_801E7E7C:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 801E7E7C
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 801E7E80
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 801E7E84
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 801E7E88
  c->r[3]=c->r[6]|c->r[3]; // 801E7E8C
  c->r[3]=c->r[5]|c->r[3]; // 801E7E90
L_801E7E94:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E7E94
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E7E98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E7E9C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801E7EA0
  c->r[1]=c->r[1]+0x00000010u; // 801E7EA4
  return; // 801E7EA8
}

// fn_801E7EAC
void f_801E7EAC(Ctx* __restrict c) {
  trace_call(0x801E7EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7EAC
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 801E7EB0
  c->r[6]=0u+0x00000000u; // 801E7EB4
  if (crb(c,2)) { goto L_801E7F34; } // 801E7EB8
  c->r[7]=cntlz(c->r[3]); // 801E7EBC
  c->r[8]=cntlz(c->r[4]); // 801E7EC0
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 801E7EC4
  c->r[9]=sraw(c,c->r[9],31); // 801E7EC8
  c->r[9]=c->r[9]&c->r[8]; // 801E7ECC
  c->r[7]=c->r[7]+c->r[9]; // 801E7ED0
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 801E7ED4
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 801E7ED8
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801E7EDC
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801E7EE0
  c->r[3]=c->r[3]|c->r[10]; // 801E7EE4
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7EE8
  c->r[3]=c->r[3]|c->r[10]; // 801E7EEC
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 801E7EF0
  c->r[6]=c->r[6]-c->r[7]; // 801E7EF4
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 801E7EF8
  cmps(c,0,(int32_t)c->r[7],1024); // 801E7EFC
  c->r[6]=c->r[6]+0x0000043Eu; // 801E7F00
  if (crb(c,0)) { goto L_801E7F20; } // 801E7F04
  if (crb(c,1)) { goto L_801E7F14; } // 801E7F08
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 801E7F0C
  if (crb(c,2)) { goto L_801E7F20; } // 801E7F10
L_801E7F14:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 801E7F14
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801E7F18
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 801E7F1C
L_801E7F20:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 801E7F20
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 801E7F24
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 801E7F28
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 801E7F2C
  c->r[3]=c->r[6]|c->r[3]; // 801E7F30
L_801E7F34:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E7F34
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E7F38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E7F3C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801E7F40
  c->r[1]=c->r[1]+0x00000010u; // 801E7F44
  return; // 801E7F48
}

// fn_801E7F4C
void f_801E7F4C(Ctx* __restrict c) {
  trace_call(0x801E7F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7F4C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E7F50
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E7F54
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E7F58
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 801E7F5C
  cmpu(c,0,c->r[5],0x000003FFu); // 801E7F60
  if (!crb(c,0)) { goto L_801E7F74; } // 801E7F64
  c->r[3]=0u+0x00000000u; // 801E7F68
  c->r[4]=0u+0x00000000u; // 801E7F6C
  goto L_801E8010; // 801E7F70
L_801E7F74:;
  c->r[6]=c->r[3]|c->r[3]; // 801E7F74
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 801E7F78
  c->r[3]=c->r[3]|0x00100000u; // 801E7F7C
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 801E7F80
  cmps(c,0,(int32_t)c->r[5],0); // 801E7F84
  if (!crb(c,0)) { goto L_801E7FB4; } // 801E7F88
  c->r[5]=0u-c->r[5]; // 801E7F8C
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801E7F90
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801E7F94
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 801E7F98
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 801E7F9C
  c->r[4]=c->r[4]|c->r[10]; // 801E7FA0
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E7FA4
  c->r[4]=c->r[4]|c->r[10]; // 801E7FA8
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 801E7FAC
  goto L_801E8000; // 801E7FB0
L_801E7FB4:;
  cmps(c,0,(int32_t)c->r[5],10); // 801E7FB4
  if (!crb(c,1)) { goto L_801E7FE0; } // 801E7FB8
  c->r[6]=rotl(c->r[6],0)&0x80000000u; cr0(c,c->r[6]); // 801E7FBC
  if (crb(c,2)) { goto L_801E7FD0; } // 801E7FC0
  c->r[3]=0u+0x80000000u; // 801E7FC4
  c->r[4]=0u+0x00000000u; // 801E7FC8
  goto L_801E8010; // 801E7FCC
L_801E7FD0:;
  c->r[3]=0u+0x7FFF0000u; // 801E7FD0
  c->r[3]=c->r[3]|0x0000FFFFu; // 801E7FD4
  c->r[4]=0u+0xFFFFFFFFu; // 801E7FD8
  goto L_801E8010; // 801E7FDC
L_801E7FE0:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801E7FE0
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801E7FE4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 801E7FE8
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801E7FEC
  c->r[3]=c->r[3]|c->r[10]; // 801E7FF0
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E7FF4
  c->r[3]=c->r[3]|c->r[10]; // 801E7FF8
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801E7FFC
L_801E8000:;
  c->r[6]=rotl(c->r[6],0)&0x80000000u; cr0(c,c->r[6]); // 801E8000
  if (crb(c,2)) { goto L_801E8010; } // 801E8004
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801E8008
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801E800C
L_801E8010:;
  c->r[1]=c->r[1]+0x00000010u; // 801E8010
  return; // 801E8014
}

// __cvt_dbl_ull
void f_801E8018(Ctx* __restrict c) {
  trace_call(0x801E8018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8018
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E801C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E8020
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E8024
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 801E8028
  cmpu(c,0,c->r[5],0x000003FFu); // 801E802C
  if (!crb(c,0)) { goto L_801E8040; } // 801E8030
L_801E8034:;
  c->r[3]=0u+0x00000000u; // 801E8034
  c->r[4]=0u+0x00000000u; // 801E8038
  goto L_801E80B8; // 801E803C
L_801E8040:;
  c->r[6]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[6]); // 801E8040
  if (!crb(c,2)) { IRQCHK(c); goto L_801E8034; } // 801E8044
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 801E8048
  c->r[3]=c->r[3]|0x00100000u; // 801E804C
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 801E8050
  cmps(c,0,(int32_t)c->r[5],0); // 801E8054
  if (!crb(c,0)) { goto L_801E8084; } // 801E8058
  c->r[5]=0u-c->r[5]; // 801E805C
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801E8060
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801E8064
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 801E8068
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 801E806C
  c->r[4]=c->r[4]|c->r[10]; // 801E8070
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801E8074
  c->r[4]=c->r[4]|c->r[10]; // 801E8078
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 801E807C
  goto L_801E80B8; // 801E8080
L_801E8084:;
  cmps(c,0,(int32_t)c->r[5],11); // 801E8084
  if (!crb(c,1)) { goto L_801E8098; } // 801E8088
  c->r[3]=0u+0xFFFFFFFFu; // 801E808C
  c->r[4]=0u+0xFFFFFFFFu; // 801E8090
  goto L_801E80B8; // 801E8094
L_801E8098:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801E8098
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801E809C
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 801E80A0
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801E80A4
  c->r[3]=c->r[3]|c->r[10]; // 801E80A8
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801E80AC
  c->r[3]=c->r[3]|c->r[10]; // 801E80B0
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801E80B4
L_801E80B8:;
  c->r[1]=c->r[1]+0x00000010u; // 801E80B8
  return; // 801E80BC
}

// __init_cpp_exceptions
void f_801E80C0(Ctx* __restrict c) {
  trace_call(0x801E80C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E80C0
  c->r[0]=c->lr; // 801E80C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E80C8
  c->r[0]=R32(c->r[13]+0xFFFF8590u); // 801E80CC
  cmps(c,0,(int32_t)c->r[0],-2); // 801E80D0
  if (!crb(c,2)) { goto L_801E80EC; } // 801E80D4
  c->r[3]=0u+0x80010000u; // 801E80D8
  c->r[4]=c->r[2]|c->r[2]; // 801E80DC
  c->r[3]=c->r[3]+0x00007AECu; // 801E80E0
  c->lr=0x801E80E8u; f_801E8130(c); // 801E80E4
  W32(c->r[13]+0xFFFF8590u,c->r[3]); // 801E80E8
L_801E80EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E80EC
  c->lr=c->r[0]; // 801E80F0
  c->r[1]=c->r[1]+0x00000010u; // 801E80F4
  return; // 801E80F8
}

// fn_801E80FC
void f_801E80FC(Ctx* __restrict c) {
  trace_call(0x801E80FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E80FC
  c->r[0]=c->lr; // 801E8100
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8104
  c->r[3]=R32(c->r[13]+0xFFFF8590u); // 801E8108
  cmps(c,0,(int32_t)c->r[3],-2); // 801E810C
  if (crb(c,2)) { goto L_801E8120; } // 801E8110
  c->lr=0x801E8118u; f_801E8164(c); // 801E8114
  c->r[0]=0u+0xFFFFFFFEu; // 801E8118
  W32(c->r[13]+0xFFFF8590u,c->r[0]); // 801E811C
L_801E8120:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8120
  c->lr=c->r[0]; // 801E8124
  c->r[1]=c->r[1]+0x00000010u; // 801E8128
  return; // 801E812C
}

// __register_fragment
void f_801E8130(Ctx* __restrict c) {
  trace_call(0x801E8130u);
  c->r[5]=0u+0x80580000u; // 801E8130
  c->r[5]=c->r[5]+0x00005568u; // 801E8134
  c->r[0]=R32(c->r[5]+0x00000008u); // 801E8138
  cmps(c,0,(int32_t)c->r[0],0); // 801E813C
  if (!crb(c,2)) { goto L_801E815C; } // 801E8140
  W32(c->r[5]+0x00000000u,c->r[3]); // 801E8144
  c->r[0]=0u+0x00000001u; // 801E8148
  c->r[3]=0u+0x00000000u; // 801E814C
  W32(c->r[5]+0x00000004u,c->r[4]); // 801E8150
  W32(c->r[5]+0x00000008u,c->r[0]); // 801E8154
  return; // 801E8158
L_801E815C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801E815C
  return; // 801E8160
}

// __unregister_fragment
void f_801E8164(Ctx* __restrict c) {
  trace_call(0x801E8164u);
  cmps(c,0,(int32_t)c->r[3],0); // 801E8164
  if (crb(c,0)) return; // 801E8168
  cmps(c,0,(int32_t)c->r[3],1); // 801E816C
  if (!crb(c,0)) return; // 801E8170
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801E8174
  c->r[3]=0u+0x80580000u; // 801E8178
  c->r[0]=0u+0x00000000u; // 801E817C
  c->r[3]=c->r[3]+0x00005568u; // 801E8180
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 801E8184
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E8188
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E818C
  return; // 801E8190
}

// fn_801E8194
void f_801E8194(Ctx* __restrict c) {
  trace_call(0x801E8194u);
  c->r[6]=0u+0x80580000u; // 801E8194
  c->r[6]=c->r[6]+0x00005568u; // 801E8198
  c->r[0]=R32(c->r[6]+0x00000008u); // 801E819C
  cmps(c,0,(int32_t)c->r[0],0); // 801E81A0
  if (crb(c,2)) { goto L_801E8214; } // 801E81A4
  c->r[7]=R32(c->r[6]+0x00000000u); // 801E81A8
L_801E81AC:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801E81AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E81B0
  if (crb(c,2)) { goto L_801E8214; } // 801E81B4
  c->r[5]=R32(c->r[7]+0x00000008u); // 801E81B8
  cmpu(c,0,c->r[3],c->r[5]); // 801E81BC
  if (crb(c,0)) { goto L_801E820C; } // 801E81C0
  c->r[0]=c->r[5]+c->r[0]; // 801E81C4
  cmpu(c,0,c->r[3],c->r[0]); // 801E81C8
  if (!crb(c,0)) { goto L_801E820C; } // 801E81CC
  c->r[5]=R32(c->r[7]+0x00000000u); // 801E81D0
  c->r[0]=0u+0x00000000u; // 801E81D4
  c->r[3]=0u+0x00000001u; // 801E81D8
  W32(c->r[4]+0x00000000u,c->r[5]); // 801E81DC
  c->r[5]=R32(c->r[7]+0x00000004u); // 801E81E0
  W32(c->r[4]+0x00000004u,c->r[5]); // 801E81E4
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E81E8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E81EC
  W32(c->r[4]+0x00000010u,c->r[0]); // 801E81F0
  W32(c->r[4]+0x00000014u,c->r[0]); // 801E81F4
  c->r[0]=R32(c->r[6]+0x00000004u); // 801E81F8
  W32(c->r[4]+0x00000018u,c->r[0]); // 801E81FC
  c->r[0]=R32(c->r[6]+0x00000008u); // 801E8200
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801E8204
  return; // 801E8208
L_801E820C:;
  c->r[7]=c->r[7]+0x00000010u; // 801E820C
  IRQCHK(c); goto L_801E81AC; // 801E8210
L_801E8214:;
  c->r[3]=0u+0x00000000u; // 801E8214
  return; // 801E8218
}

// fn_801E821C
void f_801E821C(Ctx* __restrict c) {
  trace_call(0x801E821Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E821C
  c->r[0]=c->lr; // 801E8220
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8224
  c->r[0]=0u+0x00000000u; // 801E8228
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E822C
  c->r[31]=c->r[4]|c->r[4]; // 801E8230
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E8234
  c->r[30]=c->r[3]|c->r[3]; // 801E8238
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E823C
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E8240
  c->r[4]=c->r[1]+0x00000008u; // 801E8244
  c->lr=0x801E824Cu; f_801E8194(c); // 801E8248
  cmps(c,0,(int32_t)c->r[3],0); // 801E824C
  if (crb(c,2)) { goto L_801E83B4; } // 801E8250
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E8254
  c->r[3]=0u+0x2AAB0000u; // 801E8258
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801E825C
  c->r[7]=0u+0x00000000u; // 801E8260
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E8264
  c->r[0]=R32(c->r[1]+0x00000018u); // 801E8268
  W32(c->r[31]+0x00000010u,c->r[0]); // 801E826C
  c->r[0]=R32(c->r[1]+0x00000020u); // 801E8270
  W32(c->r[31]+0x00000014u,c->r[0]); // 801E8274
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E8278
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E827C
  c->r[4]=R32(c->r[1]+0x00000010u); // 801E8280
  c->r[0]=c->r[0]-c->r[5]; // 801E8284
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801E8288
  c->r[0]=c->r[30]-c->r[4]; // 801E828C
  c->r[3]=sraw(c,c->r[3],1); // 801E8290
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801E8294
  c->r[9]=c->r[3]+c->r[4]; // 801E8298
L_801E829C:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 801E829C
  if (crb(c,1)) { goto L_801E83B4; } // 801E82A0
  c->r[4]=c->r[7]+c->r[9]; // 801E82A4
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801E82A8
  c->r[3]=c->r[3]+c->r[4]; // 801E82AC
  c->r[8]=sraw(c,c->r[3],1); // 801E82B0
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 801E82B4
  c->r[4]=R32(c->r[5]+c->r[3]); // 801E82B8
  c->r[6]=c->r[5]+c->r[3]; // 801E82BC
  cmpu(c,0,c->r[0],c->r[4]); // 801E82C0
  if (!crb(c,0)) { goto L_801E82D0; } // 801E82C4
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 801E82C8
  IRQCHK(c); goto L_801E829C; // 801E82CC
L_801E82D0:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 801E82D0
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801E82D4
  c->r[3]=c->r[4]+c->r[3]; // 801E82D8
  cmpu(c,0,c->r[0],c->r[3]); // 801E82DC
  if (!crb(c,1)) { goto L_801E82EC; } // 801E82E0
  c->r[7]=c->r[8]+0x00000001u; // 801E82E4
  IRQCHK(c); goto L_801E829C; // 801E82E8
L_801E82EC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E82EC
  c->r[3]=c->r[3]+c->r[4]; // 801E82F0
  W32(c->r[31]+0x00000004u,c->r[3]); // 801E82F4
  c->r[3]=R32(c->r[6]+0x00000004u); // 801E82F8
  c->r[3]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[3]); // 801E82FC
  if (crb(c,2)) { goto L_801E830C; } // 801E8300
  c->r[5]=c->r[6]+0x00000008u; // 801E8304
  goto L_801E8318; // 801E8308
L_801E830C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801E830C
  c->r[3]=R32(c->r[6]+0x00000008u); // 801E8310
  c->r[5]=c->r[4]+c->r[3]; // 801E8314
L_801E8318:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801E8318
  c->r[3]=R16(c->r[5]+0x00000000u); // 801E831C
  c->r[4]=R32(c->r[6]+0x00000000u); // 801E8320
  c->r[3]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[3]); // 801E8324
  c->r[0]=c->r[0]-c->r[4]; // 801E8328
  if (crb(c,2)) { goto L_801E8378; } // 801E832C
  c->r[6]=c->r[5]+0x00000004u; // 801E8330
  goto L_801E8368; // 801E8334
L_801E8338:;
  c->r[3]=R16(c->r[6]+0x00000004u); // 801E8338
  cmpu(c,0,c->r[4],c->r[0]); // 801E833C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E8340
  c->r[3]=c->r[4]+c->r[3]; // 801E8344
  if (crb(c,1)) { goto L_801E8364; } // 801E8348
  cmpu(c,0,c->r[3],c->r[0]); // 801E834C
  if (crb(c,0)) { goto L_801E8364; } // 801E8350
  c->r[0]=R16(c->r[6]+0x00000006u); // 801E8354
  c->r[0]=c->r[5]+c->r[0]; // 801E8358
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E835C
  goto L_801E83B4; // 801E8360
L_801E8364:;
  c->r[6]=c->r[6]+0x00000008u; // 801E8364
L_801E8368:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801E8368
  cmps(c,0,(int32_t)c->r[4],0); // 801E836C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E8338; } // 801E8370
  goto L_801E83B4; // 801E8374
L_801E8378:;
  c->r[4]=c->r[5]+0x00000002u; // 801E8378
  goto L_801E83A8; // 801E837C
L_801E8380:;
  cmpu(c,0,c->r[3],c->r[0]); // 801E8380
  if (crb(c,1)) { goto L_801E83A4; } // 801E8384
  c->r[3]=R16(c->r[4]+0x00000002u); // 801E8388
  cmpu(c,0,c->r[3],c->r[0]); // 801E838C
  if (crb(c,0)) { goto L_801E83A4; } // 801E8390
  c->r[0]=R16(c->r[4]+0x00000004u); // 801E8394
  c->r[0]=c->r[5]+c->r[0]; // 801E8398
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E839C
  goto L_801E83B4; // 801E83A0
L_801E83A4:;
  c->r[4]=c->r[4]+0x00000006u; // 801E83A4
L_801E83A8:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 801E83A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E83AC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E8380; } // 801E83B0
L_801E83B4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E83B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E83B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E83BC
  c->lr=c->r[0]; // 801E83C0
  c->r[1]=c->r[1]+0x00000030u; // 801E83C4
  return; // 801E83C8
}

// fn_801E83CC
void f_801E83CC(Ctx* __restrict c) {
  trace_call(0x801E83CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E83CC
  c->r[0]=c->lr; // 801E83D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E83D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E83D8
  c->r[31]=c->r[3]|c->r[3]; // 801E83DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E83E0
L_801E83E4:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801E83E4
  cmps(c,0,(int32_t)c->r[4],0); // 801E83E8
  if (crb(c,2)) { goto L_801E83FC; } // 801E83EC
  c->r[5]=R8(c->r[4]+0x00000000u); // 801E83F0
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801E83F4
  if (crb(c,2)) { goto L_801E846C; } // 801E83F8
L_801E83FC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E83FC
  c->r[4]=R32(c->r[31]+0x00000018u); // 801E8400
  c->r[3]=R16(c->r[3]+0x00000000u); // 801E8404
  c->r[30]=R32(c->r[4]+0x00000000u); // 801E8408
  c->r[0]=sraw(c,c->r[3],11); cr0(c,c->r[0]); // 801E840C
  if (crb(c,2)) { goto L_801E8424; } // 801E8410
  c->r[0]=rotl(c->r[3],29)&0x000000F8u; // 801E8414
  c->r[3]=c->r[30]-c->r[0]; // 801E8418
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 801E841C
  W32(c->r[31]+0x00000020u,c->r[0]); // 801E8420
L_801E8424:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801E8424
  c->r[4]=c->r[31]|c->r[31]; // 801E8428
  c->lr=0x801E8430u; f_801E821C(c); // 801E842C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E8430
  cmps(c,0,(int32_t)c->r[0],0); // 801E8434
  if (!crb(c,2)) { goto L_801E8440; } // 801E8438
  c->lr=0x801E8440u; f_801E6FA4(c); // 801E843C
L_801E8440:;
  W32(c->r[31]+0x00000018u,c->r[30]); // 801E8440
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E8444
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E8448
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801E844C
  if (crb(c,2)) { goto L_801E8458; } // 801E8450
  c->r[30]=R32(c->r[31]+0x00000020u); // 801E8454
L_801E8458:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E8458
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 801E845C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8460
  if (!crb(c,2)) { goto L_801E8538; } // 801E8464
  IRQCHK(c); goto L_801E83E4; // 801E8468
L_801E846C:;
  cmpu(c,0,c->r[5],0x00000010u); // 801E846C
  if (crb(c,1)) { goto L_801E8534; } // 801E8470
  c->r[3]=0u+0x804C0000u; // 801E8474
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E8478
  c->r[3]=c->r[3]+0xFFFF8110u; // 801E847C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8480
  c->ctr=c->r[3]; // 801E8484
  if (true) { switch (c->ctr) { case 0x801E848Cu: goto L_801E848C; case 0x801E8498u: goto L_801E8498; case 0x801E84A4u: goto L_801E84A4; case 0x801E84B0u: goto L_801E84B0; case 0x801E84BCu: goto L_801E84BC; case 0x801E84C8u: goto L_801E84C8; case 0x801E84D4u: goto L_801E84D4; case 0x801E84E0u: goto L_801E84E0; case 0x801E84ECu: goto L_801E84EC; case 0x801E84F8u: goto L_801E84F8; case 0x801E8504u: goto L_801E8504; case 0x801E8510u: goto L_801E8510; case 0x801E851Cu: goto L_801E851C; case 0x801E8534u: goto L_801E8534; default: break; } dispatch(c,c->ctr); return; } // 801E8488
L_801E848C:;
  c->r[0]=c->r[4]+0x00000008u; // 801E848C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E8490
  goto L_801E8538; // 801E8494
L_801E8498:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801E8498
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E849C
  goto L_801E8538; // 801E84A0
L_801E84A4:;
  c->r[0]=c->r[4]+0x00000008u; // 801E84A4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84A8
  goto L_801E8538; // 801E84AC
L_801E84B0:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801E84B0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84B4
  goto L_801E8538; // 801E84B8
L_801E84BC:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801E84BC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84C0
  goto L_801E8538; // 801E84C4
L_801E84C8:;
  c->r[0]=c->r[4]+0x00000010u; // 801E84C8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84CC
  goto L_801E8538; // 801E84D0
L_801E84D4:;
  c->r[0]=c->r[4]+0x00000014u; // 801E84D4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84D8
  goto L_801E8538; // 801E84DC
L_801E84E0:;
  c->r[0]=c->r[4]+0x00000008u; // 801E84E0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84E4
  goto L_801E8538; // 801E84E8
L_801E84EC:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801E84EC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84F0
  goto L_801E8538; // 801E84F4
L_801E84F8:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801E84F8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E84FC
  goto L_801E8538; // 801E8500
L_801E8504:;
  c->r[0]=c->r[4]+0x00000010u; // 801E8504
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E8508
  goto L_801E8538; // 801E850C
L_801E8510:;
  c->r[0]=c->r[4]+0x00000004u; // 801E8510
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E8514
  goto L_801E8538; // 801E8518
L_801E851C:;
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E851C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8520
  c->r[3]=c->r[0]+c->r[4]; // 801E8524
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8528
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E852C
  goto L_801E8538; // 801E8530
L_801E8534:;
  c->lr=0x801E8538u; f_801E6FA4(c); // 801E8534
L_801E8538:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801E8538
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E853C
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801E8540
  cmpu(c,0,c->r[3],0x00000001u); // 801E8544
  if (!crb(c,2)) { goto L_801E8564; } // 801E8548
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E854C
  c->r[0]=R16(c->r[4]+0x00000002u); // 801E8550
  c->r[3]=c->r[3]+c->r[0]; // 801E8554
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E8558
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E855C
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801E8560
L_801E8564:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8568
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E856C
  c->lr=c->r[0]; // 801E8570
  c->r[1]=c->r[1]+0x00000010u; // 801E8574
  return; // 801E8578
}

// fn_801E857C
void f_801E857C(Ctx* __restrict c) {
  trace_call(0x801E857Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E857C
  c->r[0]=c->lr; // 801E8580
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8584
  c->r[11]=c->r[1]+0x00000020u; // 801E8588
  c->lr=0x801E8590u; f_801E795C(c); // 801E858C
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E8590
  c->r[6]=R32(c->r[3]+0x00000284u); // 801E8594
  c->r[0]=R16(c->r[5]+0x00000000u); // 801E8598
  c->r[7]=R32(c->r[6]+0x00000000u); // 801E859C
  c->r[6]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[6]); // 801E85A0
  c->r[0]=rotl(c->r[0],26)&0x0000001Fu; // 801E85A4
  if (crb(c,2)) { goto L_801E85B8; } // 801E85A8
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801E85AC
  c->r[8]=c->r[7]-c->r[5]; // 801E85B0
  goto L_801E85C0; // 801E85B4
L_801E85B8:;
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E85B8
  c->r[8]=c->r[7]-c->r[5]; // 801E85BC
L_801E85C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E85C0
  if (crb(c,2)) { goto L_801E87E8; } // 801E85C4
  c->r[5]=addc(c,~c->r[0],0x00000020u,1); // 801E85C8
  c->r[6]=0u+0x00000000u; // 801E85CC
  cmps(c,1,(int32_t)c->r[5],32); // 801E85D0
  c->r[9]=0u+0x00000000u; // 801E85D4
  if (!crb(c,4)) { goto L_801E8954; } // 801E85D8
  cmps(c,0,(int32_t)c->r[0],8); // 801E85DC
  if (!crb(c,1)) { goto L_801E87A0; } // 801E85E0
  c->r[11]=0u+0x00000000u; // 801E85E4
  c->r[12]=0u+0x00000000u; // 801E85E8
  c->r[29]=0u+0x00000000u; // 801E85EC
  if (crb(c,5)) { goto L_801E8608; } // 801E85F0
  c->r[10]=0u+0x80000000u; // 801E85F4
  c->r[10]=c->r[10]+0xFFFFFFFEu; // 801E85F8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[10]); // 801E85FC
  if (crb(c,1)) { goto L_801E8608; } // 801E8600
  c->r[29]=0u+0x00000001u; // 801E8604
L_801E8608:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E8608
  if (crb(c,2)) { goto L_801E8620; } // 801E860C
  c->r[10]=c->r[5]+0x80000000u; // 801E8610
  cmpu(c,0,c->r[10],0x00000000u); // 801E8614
  if (crb(c,2)) { goto L_801E8620; } // 801E8618
  c->r[12]=0u+0x00000001u; // 801E861C
L_801E8620:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E8620
  if (crb(c,2)) { goto L_801E8650; } // 801E8624
  c->r[10]=0u-c->r[5]; // 801E8628
  c->r[12]=0u+0x00000001u; // 801E862C
  c->r[10]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[10]); // 801E8630
  if (!crb(c,2)) { goto L_801E8644; } // 801E8634
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E8638
  if (crb(c,2)) { goto L_801E8644; } // 801E863C
  c->r[12]=0u+0x00000000u; // 801E8640
L_801E8644:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E8644
  if (crb(c,2)) { goto L_801E8650; } // 801E8648
  c->r[11]=0u+0x00000001u; // 801E864C
L_801E8650:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E8650
  if (crb(c,2)) { goto L_801E87A0; } // 801E8654
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801E8658
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801E865C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E8660
  c->r[28]=c->r[3]+c->r[10]; // 801E8664
  c->ctr=c->r[0]; // 801E8668
  cmps(c,0,(int32_t)c->r[5],24); // 801E866C
  if (!crb(c,0)) { goto L_801E87A0; } // 801E8670
L_801E8674:;
  c->r[27]=c->r[8]+c->r[9]; // 801E8674
  c->r[0]=c->r[6]+0x00000001u; // 801E8678
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E867C
  c->r[31]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801E8680
  c->r[10]=c->r[6]+0x00000002u; // 801E8684
  c->r[0]=c->r[6]+0x00000003u; // 801E8688
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 801E868C
  c->r[30]=rotl(c->r[10],4)&0xFFFFFFF0u; // 801E8690
  c->r[29]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801E8694
  c->r[0]=c->r[6]+0x00000004u; // 801E8698
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E869C
  c->r[12]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801E86A0
  c->r[11]=c->r[6]+0x00000005u; // 801E86A4
  c->r[10]=c->r[6]+0x00000006u; // 801E86A8
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E86AC
  c->r[0]=c->r[6]+0x00000007u; // 801E86B0
  c->r[11]=rotl(c->r[11],4)&0xFFFFFFF0u; // 801E86B4
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 801E86B8
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 801E86BC
  c->r[27]=c->r[8]+c->r[31]; // 801E86C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801E86C4
  c->r[30]=c->r[8]+c->r[30]; // 801E86C8
  {uint32_t ea=c->r[28]+0x00000000u; WF64(ea,c->f[0]);} // 801E86CC
  c->r[29]=c->r[8]+c->r[29]; // 801E86D0
  c->r[12]=c->r[8]+c->r[12]; // 801E86D4
  c->r[11]=c->r[8]+c->r[11]; // 801E86D8
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E86DC
  c->r[10]=c->r[8]+c->r[10]; // 801E86E0
  c->r[31]=c->r[8]+c->r[0]; // 801E86E4
  c->r[6]=c->r[6]+0x00000008u; // 801E86E8
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 801E86EC
  c->r[9]=c->r[9]+0x00000080u; // 801E86F0
  c->r[5]=c->r[5]+0x00000008u; // 801E86F4
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E86F8
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 801E86FC
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=RF64(ea);} // 801E8700
  {uint32_t ea=c->r[28]+0x00000010u; WF64(ea,c->f[0]);} // 801E8704
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8708
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 801E870C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8710
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E8714
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=RF64(ea);} // 801E8718
  {uint32_t ea=c->r[28]+0x00000020u; WF64(ea,c->f[0]);} // 801E871C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8720
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 801E8724
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8728
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 801E872C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=RF64(ea);} // 801E8730
  {uint32_t ea=c->r[28]+0x00000030u; WF64(ea,c->f[0]);} // 801E8734
  {uint32_t ea=c->r[12]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8738
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[0]);} // 801E873C
  {uint32_t ea=c->r[12]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8740
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E8744
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=RF64(ea);} // 801E8748
  {uint32_t ea=c->r[28]+0x00000040u; WF64(ea,c->f[0]);} // 801E874C
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8750
  {uint32_t ea=c->r[28]+0x00000058u; WF32(ea,c->f[0]);} // 801E8754
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8758
  {uint32_t ea=c->r[28]+0x0000005Cu; WF32(ea,c->f[0]);} // 801E875C
  {uint32_t ea=c->r[11]+0x00000000u; c->f[0]=RF64(ea);} // 801E8760
  {uint32_t ea=c->r[28]+0x00000050u; WF64(ea,c->f[0]);} // 801E8764
  {uint32_t ea=c->r[10]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8768
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[0]);} // 801E876C
  {uint32_t ea=c->r[10]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8770
  {uint32_t ea=c->r[28]+0x0000006Cu; WF32(ea,c->f[0]);} // 801E8774
  {uint32_t ea=c->r[10]+0x00000000u; c->f[0]=RF64(ea);} // 801E8778
  {uint32_t ea=c->r[28]+0x00000060u; WF64(ea,c->f[0]);} // 801E877C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8780
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[0]);} // 801E8784
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8788
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 801E878C
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801E8790
  {uint32_t ea=c->r[28]+0x00000070u; WF64(ea,c->f[0]);} // 801E8794
  c->r[28]=c->r[28]+0x00000080u; // 801E8798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8674; } // 801E879C
L_801E87A0:;
  c->r[9]=rotl(c->r[6],4)&0xFFFFFFF0u; // 801E87A0
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801E87A4
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801E87A8
  c->r[9]=c->r[8]+c->r[9]; // 801E87AC
  c->r[6]=c->r[3]+c->r[6]; // 801E87B0
  c->ctr=c->r[0]; // 801E87B4
  cmps(c,0,(int32_t)c->r[5],32); // 801E87B8
  if (!crb(c,0)) { goto L_801E8954; } // 801E87BC
L_801E87C0:;
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E87C0
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801E87C4
  {uint32_t ea=c->r[9]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E87C8
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 801E87CC
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 801E87D0
  c->r[9]=c->r[9]+0x00000010u; // 801E87D4
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 801E87D8
  c->r[6]=c->r[6]+0x00000010u; // 801E87DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E87C0; } // 801E87E0
  goto L_801E8954; // 801E87E4
L_801E87E8:;
  c->r[5]=addc(c,~c->r[0],0x00000020u,1); // 801E87E8
  c->r[6]=0u+0x00000000u; // 801E87EC
  cmps(c,1,(int32_t)c->r[5],32); // 801E87F0
  c->r[9]=0u+0x00000000u; // 801E87F4
  if (!crb(c,4)) { goto L_801E8954; } // 801E87F8
  cmps(c,0,(int32_t)c->r[0],8); // 801E87FC
  if (!crb(c,1)) { goto L_801E8920; } // 801E8800
  c->r[11]=0u+0x00000000u; // 801E8804
  c->r[12]=0u+0x00000000u; // 801E8808
  c->r[29]=0u+0x00000000u; // 801E880C
  if (crb(c,5)) { goto L_801E8828; } // 801E8810
  c->r[10]=0u+0x80000000u; // 801E8814
  c->r[10]=c->r[10]+0xFFFFFFFEu; // 801E8818
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[10]); // 801E881C
  if (crb(c,1)) { goto L_801E8828; } // 801E8820
  c->r[29]=0u+0x00000001u; // 801E8824
L_801E8828:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E8828
  if (crb(c,2)) { goto L_801E8840; } // 801E882C
  c->r[10]=c->r[5]+0x80000000u; // 801E8830
  cmpu(c,0,c->r[10],0x00000000u); // 801E8834
  if (crb(c,2)) { goto L_801E8840; } // 801E8838
  c->r[12]=0u+0x00000001u; // 801E883C
L_801E8840:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E8840
  if (crb(c,2)) { goto L_801E8870; } // 801E8844
  c->r[10]=0u-c->r[5]; // 801E8848
  c->r[12]=0u+0x00000001u; // 801E884C
  c->r[10]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[10]); // 801E8850
  if (!crb(c,2)) { goto L_801E8864; } // 801E8854
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E8858
  if (crb(c,2)) { goto L_801E8864; } // 801E885C
  c->r[12]=0u+0x00000000u; // 801E8860
L_801E8864:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E8864
  if (crb(c,2)) { goto L_801E8870; } // 801E8868
  c->r[11]=0u+0x00000001u; // 801E886C
L_801E8870:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E8870
  if (crb(c,2)) { goto L_801E8920; } // 801E8874
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801E8878
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801E887C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E8880
  c->r[31]=c->r[3]+c->r[10]; // 801E8884
  c->ctr=c->r[0]; // 801E8888
  cmps(c,0,(int32_t)c->r[5],24); // 801E888C
  if (!crb(c,0)) { goto L_801E8920; } // 801E8890
L_801E8894:;
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 801E8894
  c->r[0]=c->r[6]+0x00000001u; // 801E8898
  c->r[30]=c->r[6]+0x00000002u; // 801E889C
  c->r[29]=c->r[6]+0x00000003u; // 801E88A0
  {uint32_t ea=c->r[31]+0x00000000u; WF64(ea,c->f[0]);} // 801E88A4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E88A8
  c->r[12]=c->r[6]+0x00000004u; // 801E88AC
  c->r[11]=c->r[6]+0x00000005u; // 801E88B0
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801E88B4
  c->r[10]=c->r[6]+0x00000006u; // 801E88B8
  c->r[0]=c->r[6]+0x00000007u; // 801E88BC
  c->r[30]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801E88C0
  {uint32_t ea=c->r[31]+0x00000010u; WF64(ea,c->f[0]);} // 801E88C4
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801E88C8
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 801E88CC
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E88D0
  {uint32_t ea=c->r[8]+c->r[30]; c->f[0]=RF64(ea);} // 801E88D4
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801E88D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E88DC
  c->r[6]=c->r[6]+0x00000008u; // 801E88E0
  {uint32_t ea=c->r[31]+0x00000020u; WF64(ea,c->f[0]);} // 801E88E4
  c->r[9]=c->r[9]+0x00000040u; // 801E88E8
  c->r[5]=c->r[5]+0x00000008u; // 801E88EC
  {uint32_t ea=c->r[8]+c->r[29]; c->f[0]=RF64(ea);} // 801E88F0
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[0]);} // 801E88F4
  {uint32_t ea=c->r[8]+c->r[12]; c->f[0]=RF64(ea);} // 801E88F8
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[0]);} // 801E88FC
  {uint32_t ea=c->r[8]+c->r[11]; c->f[0]=RF64(ea);} // 801E8900
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[0]);} // 801E8904
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 801E8908
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[0]);} // 801E890C
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801E8910
  {uint32_t ea=c->r[31]+0x00000070u; WF64(ea,c->f[0]);} // 801E8914
  c->r[31]=c->r[31]+0x00000080u; // 801E8918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8894; } // 801E891C
L_801E8920:;
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801E8920
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801E8924
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801E8928
  c->r[9]=c->r[8]+c->r[9]; // 801E892C
  c->r[6]=c->r[3]+c->r[6]; // 801E8930
  c->ctr=c->r[0]; // 801E8934
  cmps(c,0,(int32_t)c->r[5],32); // 801E8938
  if (!crb(c,0)) { goto L_801E8954; } // 801E893C
L_801E8940:;
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 801E8940
  c->r[9]=c->r[9]+0x00000008u; // 801E8944
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 801E8948
  c->r[6]=c->r[6]+0x00000010u; // 801E894C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8940; } // 801E8950
L_801E8954:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801E8954
  c->r[6]=0u+0x00000000u; // 801E8958
  c->r[9]=0u+0x00000000u; // 801E895C
  c->r[0]=R16(c->r[4]+0x00000000u); // 801E8960
  c->r[27]=sraw(c,c->r[0],11); // 801E8964
  c->r[5]=addc(c,~c->r[27],0x00000020u,1); // 801E8968
  cmps(c,1,(int32_t)c->r[5],32); // 801E896C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801E8970
  c->r[8]=c->r[8]-c->r[0]; // 801E8974
  if (!crb(c,4)) { goto L_801E8AD4; } // 801E8978
  cmps(c,0,(int32_t)c->r[27],8); // 801E897C
  if (!crb(c,1)) { goto L_801E8AA0; } // 801E8980
  c->r[10]=0u+0x00000000u; // 801E8984
  c->r[11]=0u+0x00000000u; // 801E8988
  c->r[12]=0u+0x00000000u; // 801E898C
  if (crb(c,5)) { goto L_801E89A8; } // 801E8990
  c->r[4]=0u+0x80000000u; // 801E8994
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801E8998
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E899C
  if (crb(c,1)) { goto L_801E89A8; } // 801E89A0
  c->r[12]=0u+0x00000001u; // 801E89A4
L_801E89A8:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E89A8
  if (crb(c,2)) { goto L_801E89C0; } // 801E89AC
  c->r[0]=c->r[5]+0x80000000u; // 801E89B0
  cmpu(c,0,c->r[0],0x00000000u); // 801E89B4
  if (crb(c,2)) { goto L_801E89C0; } // 801E89B8
  c->r[11]=0u+0x00000001u; // 801E89BC
L_801E89C0:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E89C0
  if (crb(c,2)) { goto L_801E89F0; } // 801E89C4
  c->r[0]=0u-c->r[5]; // 801E89C8
  c->r[4]=0u+0x00000001u; // 801E89CC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E89D0
  if (!crb(c,2)) { goto L_801E89E4; } // 801E89D4
  c->r[0]=rotl(c->r[27],0)&0x80000000u; cr0(c,c->r[0]); // 801E89D8
  if (crb(c,2)) { goto L_801E89E4; } // 801E89DC
  c->r[4]=0u+0x00000000u; // 801E89E0
L_801E89E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E89E4
  if (crb(c,2)) { goto L_801E89F0; } // 801E89E8
  c->r[10]=0u+0x00000001u; // 801E89EC
L_801E89F0:;
  cmps(c,0,(int32_t)c->r[10],0); // 801E89F0
  if (crb(c,2)) { goto L_801E8AA0; } // 801E89F4
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801E89F8
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E89FC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E8A00
  c->r[4]=c->r[3]+c->r[4]; // 801E8A04
  c->ctr=c->r[0]; // 801E8A08
  cmps(c,0,(int32_t)c->r[5],24); // 801E8A0C
  if (!crb(c,0)) { goto L_801E8AA0; } // 801E8A10
L_801E8A14:;
  c->r[10]=R32(c->r[8]+c->r[9]); // 801E8A14
  c->r[0]=c->r[6]+0x00000001u; // 801E8A18
  c->r[30]=c->r[6]+0x00000002u; // 801E8A1C
  c->r[31]=c->r[6]+0x00000003u; // 801E8A20
  W32(c->r[4]+0x00000200u,c->r[10]); // 801E8A24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8A28
  c->r[12]=c->r[6]+0x00000004u; // 801E8A2C
  c->r[11]=c->r[6]+0x00000005u; // 801E8A30
  c->r[29]=R32(c->r[8]+c->r[0]); // 801E8A34
  c->r[10]=c->r[6]+0x00000006u; // 801E8A38
  c->r[0]=c->r[6]+0x00000007u; // 801E8A3C
  c->r[30]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801E8A40
  W32(c->r[4]+0x00000204u,c->r[29]); // 801E8A44
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801E8A48
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801E8A4C
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801E8A50
  c->r[30]=R32(c->r[8]+c->r[30]); // 801E8A54
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801E8A58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8A5C
  c->r[6]=c->r[6]+0x00000008u; // 801E8A60
  W32(c->r[4]+0x00000208u,c->r[30]); // 801E8A64
  c->r[9]=c->r[9]+0x00000020u; // 801E8A68
  c->r[5]=c->r[5]+0x00000008u; // 801E8A6C
  c->r[31]=R32(c->r[8]+c->r[31]); // 801E8A70
  W32(c->r[4]+0x0000020Cu,c->r[31]); // 801E8A74
  c->r[12]=R32(c->r[8]+c->r[12]); // 801E8A78
  W32(c->r[4]+0x00000210u,c->r[12]); // 801E8A7C
  c->r[11]=R32(c->r[8]+c->r[11]); // 801E8A80
  W32(c->r[4]+0x00000214u,c->r[11]); // 801E8A84
  c->r[10]=R32(c->r[8]+c->r[10]); // 801E8A88
  W32(c->r[4]+0x00000218u,c->r[10]); // 801E8A8C
  c->r[0]=R32(c->r[8]+c->r[0]); // 801E8A90
  W32(c->r[4]+0x0000021Cu,c->r[0]); // 801E8A94
  c->r[4]=c->r[4]+0x00000020u; // 801E8A98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8A14; } // 801E8A9C
L_801E8AA0:;
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801E8AA0
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E8AA4
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801E8AA8
  c->r[6]=c->r[8]+c->r[6]; // 801E8AAC
  c->r[4]=c->r[3]+c->r[4]; // 801E8AB0
  c->ctr=c->r[0]; // 801E8AB4
  cmps(c,0,(int32_t)c->r[5],32); // 801E8AB8
  if (!crb(c,0)) { goto L_801E8AD4; } // 801E8ABC
L_801E8AC0:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801E8AC0
  c->r[6]=c->r[6]+0x00000004u; // 801E8AC4
  W32(c->r[4]+0x00000200u,c->r[0]); // 801E8AC8
  c->r[4]=c->r[4]+0x00000004u; // 801E8ACC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E8AC0; } // 801E8AD0
L_801E8AD4:;
  W32(c->r[3]+0x00000284u,c->r[7]); // 801E8AD4
  c->r[11]=c->r[1]+0x00000020u; // 801E8AD8
  c->r[3]=R32(c->r[7]+0x00000004u); // 801E8ADC
  c->lr=0x801E8AE4u; f_801E79A8(c); // 801E8AE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8AE4
  c->lr=c->r[0]; // 801E8AE8
  c->r[1]=c->r[1]+0x00000020u; // 801E8AEC
  return; // 801E8AF0
}

// fn_801E8AF4
void f_801E8AF4(Ctx* __restrict c) {
  trace_call(0x801E8AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8AF4
  c->r[0]=c->lr; // 801E8AF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8AFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E8B00
  c->r[31]=0u+0x00000000u; // 801E8B04
  c->r[25]=c->r[3]|c->r[3]; // 801E8B08
  c->r[26]=c->r[4]|c->r[4]; // 801E8B0C
  c->r[27]=c->r[5]|c->r[5]; // 801E8B10
  c->r[30]=0u+0x804C0000u; // 801E8B14
L_801E8B18:;
  c->r[29]=R32(c->r[26]+0x00000008u); // 801E8B18
  cmps(c,0,(int32_t)c->r[29],0); // 801E8B1C
  if (!crb(c,2)) { goto L_801E8B6C; } // 801E8B20
  c->r[3]=c->r[25]|c->r[25]; // 801E8B24
  c->r[4]=c->r[26]|c->r[26]; // 801E8B28
  c->lr=0x801E8B30u; f_801E857C(c); // 801E8B2C
  c->r[4]=c->r[26]|c->r[26]; // 801E8B30
  c->lr=0x801E8B38u; f_801E821C(c); // 801E8B34
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E8B38
  cmps(c,0,(int32_t)c->r[0],0); // 801E8B3C
  if (!crb(c,2)) { goto L_801E8B48; } // 801E8B40
  c->lr=0x801E8B48u; f_801E6FA4(c); // 801E8B44
L_801E8B48:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801E8B48
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E8B4C
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801E8B50
  if (crb(c,2)) { goto L_801E8B60; } // 801E8B54
  c->r[0]=R32(c->r[25]+0x0000027Cu); // 801E8B58
  goto L_801E8B64; // 801E8B5C
L_801E8B60:;
  c->r[0]=R32(c->r[25]+0x00000284u); // 801E8B60
L_801E8B64:;
  W32(c->r[25]+0x00000288u,c->r[0]); // 801E8B64
  IRQCHK(c); goto L_801E8B18; // 801E8B68
L_801E8B6C:;
  c->r[28]=R8(c->r[29]+0x00000000u); // 801E8B6C
  c->r[0]=rotl(c->r[28],0)&0x0000007Fu; // 801E8B70
  cmpu(c,0,c->r[0],0x00000010u); // 801E8B74
  if (crb(c,1)) { goto L_801E8FD8; } // 801E8B78
  c->r[3]=c->r[30]+0xFFFF8154u; // 801E8B7C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8B80
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8B84
  c->ctr=c->r[3]; // 801E8B88
  if (true) { switch (c->ctr) { case 0x801E8B90u: goto L_801E8B90; case 0x801E8BA4u: goto L_801E8BA4; case 0x801E8BD0u: goto L_801E8BD0; case 0x801E8C34u: goto L_801E8C34; case 0x801E8C80u: goto L_801E8C80; case 0x801E8CD4u: goto L_801E8CD4; case 0x801E8D28u: goto L_801E8D28; case 0x801E8D7Cu: goto L_801E8D7C; case 0x801E8E04u: goto L_801E8E04; case 0x801E8E80u: goto L_801E8E80; case 0x801E8EC8u: goto L_801E8EC8; case 0x801E8F44u: goto L_801E8F44; case 0x801E8F58u: goto L_801E8F58; case 0x801E8F6Cu: goto L_801E8F6C; case 0x801E8FB8u: goto L_801E8FB8; case 0x801E8FD8u: goto L_801E8FD8; default: break; } dispatch(c,c->ctr); return; } // 801E8B8C
L_801E8B90:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801E8B90
  c->r[0]=R16(c->r[29]+0x00000002u); // 801E8B94
  c->r[0]=c->r[3]+c->r[0]; // 801E8B98
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8B9C
  goto L_801E8FDC; // 801E8BA0
L_801E8BA4:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8BA4
  c->r[4]=0u+0xFFFFFFFFu; // 801E8BA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8BAC
  c->r[12]=R32(c->r[29]+0x00000004u); // 801E8BB0
  c->r[3]=c->r[3]+c->r[0]; // 801E8BB4
  c->ctr=c->r[12]; // 801E8BB8
  if (true) { c->lr=0x801E8BC0u; dispatch(c,c->ctr); } // 801E8BBC
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8BC0
  c->r[0]=c->r[3]+0x00000008u; // 801E8BC4
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8BC8
  goto L_801E8FDC; // 801E8BCC
L_801E8BD0:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8BD0
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8BD4
  if (crb(c,2)) { goto L_801E8BF4; } // 801E8BD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8BDC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8BE0
  c->r[3]=c->r[25]+c->r[0]; // 801E8BE4
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E8BE8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E8BEC
  goto L_801E8C00; // 801E8BF0
L_801E8BF4:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8BF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8BF8
  c->r[0]=R8(c->r[3]+c->r[0]); // 801E8BFC
L_801E8C00:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E8C00
  if (crb(c,2)) { goto L_801E8C24; } // 801E8C04
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8C08
  c->r[4]=0u+0xFFFFFFFFu; // 801E8C0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 801E8C10
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E8C14
  c->r[3]=c->r[3]+c->r[0]; // 801E8C18
  c->ctr=c->r[12]; // 801E8C1C
  if (true) { c->lr=0x801E8C24u; dispatch(c,c->ctr); } // 801E8C20
L_801E8C24:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8C24
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8C28
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8C2C
  goto L_801E8FDC; // 801E8C30
L_801E8C34:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8C34
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8C38
  if (crb(c,2)) { goto L_801E8C54; } // 801E8C3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8C40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8C44
  c->r[3]=c->r[25]+c->r[0]; // 801E8C48
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E8C4C
  goto L_801E8C60; // 801E8C50
L_801E8C54:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8C54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8C58
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8C5C
L_801E8C60:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 801E8C60
  c->r[4]=0u+0xFFFFFFFFu; // 801E8C64
  c->ctr=c->r[12]; // 801E8C68
  if (true) { c->lr=0x801E8C70u; dispatch(c,c->ctr); } // 801E8C6C
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8C70
  c->r[0]=c->r[3]+0x00000008u; // 801E8C74
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8C78
  goto L_801E8FDC; // 801E8C7C
L_801E8C80:;
  c->r[23]=R16(c->r[29]+0x00000004u); // 801E8C80
  c->r[24]=R16(c->r[29]+0x00000006u); // 801E8C84
  c->r[4]=R32(c->r[25]+0x00000288u); // 801E8C88
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[23]); // 801E8C8C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8C90
  c->r[22]=c->r[4]+c->r[3]; // 801E8C94
  c->r[22]=c->r[22]+c->r[0]; // 801E8C98
  goto L_801E8CBC; // 801E8C9C
L_801E8CA0:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E8CA0
  c->r[22]=c->r[22]-c->r[24]; // 801E8CA4
  c->r[3]=c->r[22]|c->r[22]; // 801E8CA8
  c->r[4]=0u+0xFFFFFFFFu; // 801E8CAC
  c->ctr=c->r[12]; // 801E8CB0
  if (true) { c->lr=0x801E8CB8u; dispatch(c,c->ctr); } // 801E8CB4
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801E8CB8
L_801E8CBC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E8CBC
  if (crb(c,1)) { IRQCHK(c); goto L_801E8CA0; } // 801E8CC0
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8CC4
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8CC8
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8CCC
  goto L_801E8FDC; // 801E8CD0
L_801E8CD4:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8CD4
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8CD8
  if (crb(c,2)) { goto L_801E8CF4; } // 801E8CDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8CE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8CE4
  c->r[3]=c->r[25]+c->r[0]; // 801E8CE8
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E8CEC
  goto L_801E8D00; // 801E8CF0
L_801E8CF4:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8CF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8CF8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8CFC
L_801E8D00:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E8D00
  c->r[4]=0u+0x00000000u; // 801E8D04
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E8D08
  c->r[3]=c->r[3]+c->r[0]; // 801E8D0C
  c->ctr=c->r[12]; // 801E8D10
  if (true) { c->lr=0x801E8D18u; dispatch(c,c->ctr); } // 801E8D14
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8D18
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8D1C
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8D20
  goto L_801E8FDC; // 801E8D24
L_801E8D28:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8D28
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8D2C
  if (crb(c,2)) { goto L_801E8D48; } // 801E8D30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8D34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8D38
  c->r[3]=c->r[25]+c->r[0]; // 801E8D3C
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E8D40
  goto L_801E8D54; // 801E8D44
L_801E8D48:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8D48
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8D4C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8D50
L_801E8D54:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E8D54
  c->r[4]=0u+0xFFFFFFFFu; // 801E8D58
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E8D5C
  c->r[3]=c->r[3]+c->r[0]; // 801E8D60
  c->ctr=c->r[12]; // 801E8D64
  if (true) { c->lr=0x801E8D6Cu; dispatch(c,c->ctr); } // 801E8D68
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8D6C
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8D70
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8D74
  goto L_801E8FDC; // 801E8D78
L_801E8D7C:;
  c->r[4]=R8(c->r[29]+0x00000001u); // 801E8D7C
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 801E8D80
  if (crb(c,2)) { goto L_801E8D9C; } // 801E8D84
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 801E8D88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8D8C
  c->r[3]=c->r[25]+c->r[0]; // 801E8D90
  c->r[5]=R32(c->r[3]+0x00000200u); // 801E8D94
  goto L_801E8DA8; // 801E8D98
L_801E8D9C:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8D9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 801E8DA0
  c->r[5]=R32(c->r[3]+c->r[0]); // 801E8DA4
L_801E8DA8:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 801E8DA8
  if (crb(c,2)) { goto L_801E8DC8; } // 801E8DAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8DB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8DB4
  c->r[3]=c->r[25]+c->r[0]; // 801E8DB8
  c->r[0]=R32(c->r[3]+0x00000200u); // 801E8DBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E8DC0
  goto L_801E8DD4; // 801E8DC4
L_801E8DC8:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8DC8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8DCC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[0]); // 801E8DD0
L_801E8DD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E8DD4
  if (crb(c,2)) { goto L_801E8DF4; } // 801E8DD8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E8DDC
  c->r[4]=0u+0x00000000u; // 801E8DE0
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 801E8DE4
  c->r[3]=c->r[5]+c->r[0]; // 801E8DE8
  c->ctr=c->r[12]; // 801E8DEC
  if (true) { c->lr=0x801E8DF4u; dispatch(c,c->ctr); } // 801E8DF0
L_801E8DF4:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8DF4
  c->r[0]=c->r[3]+0x00000010u; // 801E8DF8
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8DFC
  goto L_801E8FDC; // 801E8E00
L_801E8E04:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8E04
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8E08
  if (crb(c,2)) { goto L_801E8E24; } // 801E8E0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8E10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8E14
  c->r[3]=c->r[25]+c->r[0]; // 801E8E18
  c->r[24]=R32(c->r[3]+0x00000200u); // 801E8E1C
  goto L_801E8E30; // 801E8E20
L_801E8E24:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8E24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8E28
  c->r[24]=R32(c->r[3]+c->r[0]); // 801E8E2C
L_801E8E30:;
  c->r[23]=R32(c->r[29]+0x00000008u); // 801E8E30
  c->r[22]=R32(c->r[29]+0x0000000Cu); // 801E8E34
  c->r[3]=R32(c->r[29]+0x00000004u); // 801E8E38
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 801E8E3C
  c->r[24]=c->r[24]+c->r[3]; // 801E8E40
  c->r[24]=c->r[24]+c->r[0]; // 801E8E44
  goto L_801E8E68; // 801E8E48
L_801E8E4C:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 801E8E4C
  c->r[24]=c->r[24]-c->r[22]; // 801E8E50
  c->r[3]=c->r[24]|c->r[24]; // 801E8E54
  c->r[4]=0u+0xFFFFFFFFu; // 801E8E58
  c->ctr=c->r[12]; // 801E8E5C
  if (true) { c->lr=0x801E8E64u; dispatch(c,c->ctr); } // 801E8E60
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801E8E64
L_801E8E68:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E8E68
  if (crb(c,1)) { IRQCHK(c); goto L_801E8E4C; } // 801E8E6C
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8E70
  c->r[0]=c->r[3]+0x00000014u; // 801E8E74
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8E78
  goto L_801E8FDC; // 801E8E7C
L_801E8E80:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801E8E80
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801E8E84
  if (crb(c,2)) { goto L_801E8EA0; } // 801E8E88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8E8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8E90
  c->r[3]=c->r[25]+c->r[0]; // 801E8E94
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E8E98
  goto L_801E8EAC; // 801E8E9C
L_801E8EA0:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8EA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8EA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8EA8
L_801E8EAC:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 801E8EAC
  c->ctr=c->r[12]; // 801E8EB0
  if (true) { c->lr=0x801E8EB8u; dispatch(c,c->ctr); } // 801E8EB4
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8EB8
  c->r[0]=c->r[3]+0x00000008u; // 801E8EBC
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8EC0
  goto L_801E8FDC; // 801E8EC4
L_801E8EC8:;
  c->r[4]=R8(c->r[29]+0x00000001u); // 801E8EC8
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 801E8ECC
  if (crb(c,2)) { goto L_801E8EE8; } // 801E8ED0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 801E8ED4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8ED8
  c->r[3]=c->r[25]+c->r[0]; // 801E8EDC
  c->r[3]=R32(c->r[3]+0x00000200u); // 801E8EE0
  goto L_801E8EF4; // 801E8EE4
L_801E8EE8:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8EE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 801E8EEC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E8EF0
L_801E8EF4:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 801E8EF4
  if (crb(c,2)) { goto L_801E8F14; } // 801E8EF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8EFC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8F00
  c->r[4]=c->r[25]+c->r[0]; // 801E8F04
  c->r[0]=R32(c->r[4]+0x00000200u); // 801E8F08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E8F0C
  goto L_801E8F20; // 801E8F10
L_801E8F14:;
  c->r[4]=R32(c->r[25]+0x00000288u); // 801E8F14
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8F18
  c->r[0]=R8(c->r[4]+c->r[0]); // 801E8F1C
L_801E8F20:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E8F20
  if (crb(c,2)) { goto L_801E8F34; } // 801E8F24
  c->r[12]=R32(c->r[29]+0x00000008u); // 801E8F28
  c->ctr=c->r[12]; // 801E8F2C
  if (true) { c->lr=0x801E8F34u; dispatch(c,c->ctr); } // 801E8F30
L_801E8F34:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8F34
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8F38
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8F3C
  goto L_801E8FDC; // 801E8F40
L_801E8F44:;
  cmpu(c,0,c->r[27],c->r[29]); // 801E8F44
  if (crb(c,2)) { goto L_801E8FEC; } // 801E8F48
  c->r[0]=c->r[29]+0x0000000Cu; // 801E8F4C
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8F50
  goto L_801E8FDC; // 801E8F54
L_801E8F58:;
  cmpu(c,0,c->r[27],c->r[29]); // 801E8F58
  if (crb(c,2)) { goto L_801E8FEC; } // 801E8F5C
  c->r[0]=c->r[29]+0x00000010u; // 801E8F60
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8F64
  goto L_801E8FDC; // 801E8F68
L_801E8F6C:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 801E8F6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 801E8F70
  c->r[3]=c->r[3]+c->r[0]; // 801E8F74
  c->r[12]=R32(c->r[3]+0x00000008u); // 801E8F78
  cmps(c,0,(int32_t)c->r[12],0); // 801E8F7C
  if (crb(c,2)) { goto L_801E8FA8; } // 801E8F80
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E8F84
  c->r[0]=R32(c->r[25]+0x00000298u); // 801E8F88
  cmpu(c,0,c->r[0],c->r[3]); // 801E8F8C
  if (!crb(c,2)) { goto L_801E8F9C; } // 801E8F90
  W32(c->r[25]+0x0000029Cu,c->r[12]); // 801E8F94
  goto L_801E8FA8; // 801E8F98
L_801E8F9C:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E8F9C
  c->ctr=c->r[12]; // 801E8FA0
  if (true) { c->lr=0x801E8FA8u; dispatch(c,c->ctr); } // 801E8FA4
L_801E8FA8:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E8FA8
  c->r[0]=c->r[3]+0x00000004u; // 801E8FAC
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8FB0
  goto L_801E8FDC; // 801E8FB4
L_801E8FB8:;
  cmpu(c,0,c->r[27],c->r[29]); // 801E8FB8
  if (crb(c,2)) { goto L_801E8FEC; } // 801E8FBC
  c->r[0]=R16(c->r[29]+0x00000002u); // 801E8FC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E8FC4
  c->r[3]=c->r[0]+c->r[29]; // 801E8FC8
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8FCC
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E8FD0
  goto L_801E8FDC; // 801E8FD4
L_801E8FD8:;
  c->lr=0x801E8FDCu; f_801E6FA4(c); // 801E8FD8
L_801E8FDC:;
  c->r[0]=rotl(c->r[28],0)&0x00000080u; cr0(c,c->r[0]); // 801E8FDC
  if (crb(c,2)) { IRQCHK(c); goto L_801E8B18; } // 801E8FE0
  W32(c->r[26]+0x00000008u,c->r[31]); // 801E8FE4
  IRQCHK(c); goto L_801E8B18; // 801E8FE8
L_801E8FEC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E8FEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E8FF0
  c->lr=c->r[0]; // 801E8FF4
  c->r[1]=c->r[1]+0x00000030u; // 801E8FF8
  return; // 801E8FFC
}

// fn_801E9000
void f_801E9000(Ctx* __restrict c) {
  trace_call(0x801E9000u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9000
  c->r[0]=c->lr; // 801E9004
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E9008
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E900C
  c->r[31]=c->r[1]|c->r[1]; // 801E9010
  c->r[30]=R32(c->r[3]+0x00000014u); // 801E9014
  W32(c->r[1]+0x00000034u,c->r[1]); // 801E9018
  c->lr=0x801E9020u; f_801E6FB0(c); // 801E901C
  goto L_801E9198; // 801E9020
  c->r[29]=R32(c->r[31]+0x00000024u); // 801E9024
  c->r[27]=c->r[30]|c->r[30]; // 801E9028
  c->r[28]=0u+0x00000000u; // 801E902C
  goto L_801E905C; // 801E9030
L_801E9034:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801E9034
  c->r[3]=c->r[29]|c->r[29]; // 801E9038
  c->r[5]=c->r[31]+0x00000010u; // 801E903C
  c->lr=0x801E9044u; f_801E6FBC(c); // 801E9040
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E9044
  if (crb(c,2)) { goto L_801E9054; } // 801E9048
  c->r[0]=0u+0x00000001u; // 801E904C
  goto L_801E906C; // 801E9050
L_801E9054:;
  c->r[27]=c->r[27]+0x00000004u; // 801E9054
  c->r[28]=c->r[28]+0x00000001u; // 801E9058
L_801E905C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801E905C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E9060
  if (crb(c,0)) { IRQCHK(c); goto L_801E9034; } // 801E9064
  c->r[0]=0u+0x00000000u; // 801E9068
L_801E906C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E906C
  if (crb(c,2)) { goto L_801E9084; } // 801E9070
  c->r[3]=0u+0x00000000u; // 801E9074
  c->r[4]=0u+0x00000000u; // 801E9078
  c->r[5]=0u+0x00000000u; // 801E907C
  c->lr=0x801E9084u; f_801E96FC(c); // 801E9080
L_801E9084:;
  c->r[28]=0u+0x803D0000u; // 801E9084
  c->r[27]=c->r[30]|c->r[30]; // 801E9088
  c->r[28]=c->r[28]+0xFFFF8E4Cu; // 801E908C
  c->r[29]=0u+0x00000000u; // 801E9090
  goto L_801E90C0; // 801E9094
L_801E9098:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801E9098
  c->r[3]=c->r[28]|c->r[28]; // 801E909C
  c->r[5]=c->r[31]+0x0000000Cu; // 801E90A0
  c->lr=0x801E90A8u; f_801E6FBC(c); // 801E90A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E90A8
  if (crb(c,2)) { goto L_801E90B8; } // 801E90AC
  c->r[0]=0u+0x00000001u; // 801E90B0
  goto L_801E90D0; // 801E90B4
L_801E90B8:;
  c->r[27]=c->r[27]+0x00000004u; // 801E90B8
  c->r[29]=c->r[29]+0x00000001u; // 801E90BC
L_801E90C0:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801E90C0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801E90C4
  if (crb(c,0)) { IRQCHK(c); goto L_801E9098; } // 801E90C8
  c->r[0]=0u+0x00000000u; // 801E90CC
L_801E90D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E90D0
  if (crb(c,2)) { goto L_801E9100; } // 801E90D4
  c->r[4]=0u+0x804C0000u; // 801E90D8
  c->r[3]=0u+0x803D0000u; // 801E90DC
  c->r[4]=c->r[4]+0xFFFF81E0u; // 801E90E0
  c->r[5]=0u+0x801F0000u; // 801E90E4
  c->r[3]=c->r[3]+0xFFFF8E4Cu; // 801E90E8
  W32(c->r[31]+0x00000018u,c->r[4]); // 801E90EC
  c->r[3]=c->r[3]+0x00000011u; // 801E90F0
  c->r[4]=c->r[31]+0x00000018u; // 801E90F4
  c->r[5]=c->r[5]+0xFFFF91B8u; // 801E90F8
  c->lr=0x801E9100u; f_801E96FC(c); // 801E90FC
L_801E9100:;
  c->r[3]=0u+0x803D0000u; // 801E9100
  c->r[27]=c->r[30]|c->r[30]; // 801E9104
  c->r[3]=c->r[3]+0xFFFF8E4Cu; // 801E9108
  c->r[29]=0u+0x00000000u; // 801E910C
  c->r[28]=c->r[3]+0x00000037u; // 801E9110
  goto L_801E9140; // 801E9114
L_801E9118:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801E9118
  c->r[3]=c->r[28]|c->r[28]; // 801E911C
  c->r[5]=c->r[31]+0x00000008u; // 801E9120
  c->lr=0x801E9128u; f_801E6FBC(c); // 801E9124
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E9128
  if (crb(c,2)) { goto L_801E9138; } // 801E912C
  c->r[0]=0u+0x00000001u; // 801E9130
  goto L_801E9150; // 801E9134
L_801E9138:;
  c->r[27]=c->r[27]+0x00000004u; // 801E9138
  c->r[29]=c->r[29]+0x00000001u; // 801E913C
L_801E9140:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801E9140
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801E9144
  if (crb(c,0)) { IRQCHK(c); goto L_801E9118; } // 801E9148
  c->r[0]=0u+0x00000000u; // 801E914C
L_801E9150:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E9150
  if (crb(c,2)) { goto L_801E9180; } // 801E9154
  c->r[4]=0u+0x804C0000u; // 801E9158
  c->r[3]=0u+0x803D0000u; // 801E915C
  c->r[4]=c->r[4]+0xFFFF81E0u; // 801E9160
  c->r[5]=0u+0x801F0000u; // 801E9164
  c->r[3]=c->r[3]+0xFFFF8E4Cu; // 801E9168
  W32(c->r[31]+0x00000014u,c->r[4]); // 801E916C
  c->r[3]=c->r[3]+0x00000011u; // 801E9170
  c->r[4]=c->r[31]+0x00000014u; // 801E9174
  c->r[5]=c->r[5]+0xFFFF91B8u; // 801E9178
  c->lr=0x801E9180u; f_801E96FC(c); // 801E917C
L_801E9180:;
  c->r[3]=c->r[31]+0x00000020u; // 801E9180
  c->lr=0x801E9188u; f_801E9840(c); // 801E9184
  c->r[0]=c->r[0]|0x00000000u; // 801E9188
  c->r[0]=R32(c->r[1]+0x00000000u); // 801E918C
  c->r[1]=R32(c->r[31]+0x00000034u); // 801E9190
  W32(c->r[1]+0x00000000u,c->r[0]); // 801E9194
L_801E9198:;
  c->lr=0x801E919Cu; f_801E6FA4(c); // 801E9198
  c->r[10]=c->r[31]|c->r[31]; // 801E919C
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E91A0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E91A4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E91A8
  c->r[1]=c->r[10]|c->r[10]; // 801E91AC
  c->lr=c->r[0]; // 801E91B0
  return; // 801E91B4
}

// fn_801E91B8
void f_801E91B8(Ctx* __restrict c) {
  trace_call(0x801E91B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E91B8
  c->r[0]=c->lr; // 801E91BC
  cmps(c,0,(int32_t)c->r[3],0); // 801E91C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E91C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E91C8
  c->r[31]=c->r[3]|c->r[3]; // 801E91CC
  if (crb(c,2)) { goto L_801E91E0; } // 801E91D0
  cmps(c,0,(int32_t)c->r[4],0); // 801E91D4
  if (!crb(c,1)) { goto L_801E91E0; } // 801E91D8
  c->lr=0x801E91E0u; f_8001AAC0(c); // 801E91DC
L_801E91E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E91E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E91E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E91E8
  c->lr=c->r[0]; // 801E91EC
  c->r[1]=c->r[1]+0x00000010u; // 801E91F0
  return; // 801E91F4
}

// fn_801E91F8
void f_801E91F8(Ctx* __restrict c) {
  trace_call(0x801E91F8u);
  c->r[8]=c->r[5]|c->r[5]; // 801E91F8
  c->r[2]=c->r[4]|c->r[4]; // 801E91FC
  c->r[0]=R32(c->r[3]+0x00000280u); // 801E9200
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[0]&0xFFFFFFFFu); // 801E9204
  {uint32_t ea=c->r[3]+0x00000234u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E9208
  c->r[7]=c->r[3]+0x000000E8u; // 801E920C
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 801E9210
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[14]=RF64(ea);} // 801E9214
  c->r[7]=c->r[3]+0x000000F8u; // 801E9218
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 801E921C
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[15]=RF64(ea);} // 801E9220
  c->r[7]=c->r[3]+0x00000108u; // 801E9224
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 801E9228
  {uint32_t ea=c->r[3]+0x00000100u; c->f[16]=RF64(ea);} // 801E922C
  c->r[7]=c->r[3]+0x00000118u; // 801E9230
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 801E9234
  {uint32_t ea=c->r[3]+0x00000110u; c->f[17]=RF64(ea);} // 801E9238
  c->r[7]=c->r[3]+0x00000128u; // 801E923C
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 801E9240
  {uint32_t ea=c->r[3]+0x00000120u; c->f[18]=RF64(ea);} // 801E9244
  c->r[7]=c->r[3]+0x00000138u; // 801E9248
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 801E924C
  {uint32_t ea=c->r[3]+0x00000130u; c->f[19]=RF64(ea);} // 801E9250
  c->r[7]=c->r[3]+0x00000148u; // 801E9254
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 801E9258
  {uint32_t ea=c->r[3]+0x00000140u; c->f[20]=RF64(ea);} // 801E925C
  c->r[7]=c->r[3]+0x00000158u; // 801E9260
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 801E9264
  {uint32_t ea=c->r[3]+0x00000150u; c->f[21]=RF64(ea);} // 801E9268
  c->r[7]=c->r[3]+0x00000168u; // 801E926C
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 801E9270
  {uint32_t ea=c->r[3]+0x00000160u; c->f[22]=RF64(ea);} // 801E9274
  c->r[7]=c->r[3]+0x00000178u; // 801E9278
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 801E927C
  {uint32_t ea=c->r[3]+0x00000170u; c->f[23]=RF64(ea);} // 801E9280
  c->r[7]=c->r[3]+0x00000188u; // 801E9284
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 801E9288
  {uint32_t ea=c->r[3]+0x00000180u; c->f[24]=RF64(ea);} // 801E928C
  c->r[7]=c->r[3]+0x00000198u; // 801E9290
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 801E9294
  {uint32_t ea=c->r[3]+0x00000190u; c->f[25]=RF64(ea);} // 801E9298
  c->r[7]=c->r[3]+0x000001A8u; // 801E929C
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 801E92A0
  {uint32_t ea=c->r[3]+0x000001A0u; c->f[26]=RF64(ea);} // 801E92A4
  c->r[7]=c->r[3]+0x000001B8u; // 801E92A8
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 801E92AC
  {uint32_t ea=c->r[3]+0x000001B0u; c->f[27]=RF64(ea);} // 801E92B0
  c->r[7]=c->r[3]+0x000001C8u; // 801E92B4
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 801E92B8
  {uint32_t ea=c->r[3]+0x000001C0u; c->f[28]=RF64(ea);} // 801E92BC
  c->r[7]=c->r[3]+0x000001D8u; // 801E92C0
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 801E92C4
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[29]=RF64(ea);} // 801E92C8
  c->r[7]=c->r[3]+0x000001E8u; // 801E92CC
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 801E92D0
  {uint32_t ea=c->r[3]+0x000001E0u; c->f[30]=RF64(ea);} // 801E92D4
  c->r[7]=c->r[3]+0x000001F8u; // 801E92D8
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 801E92DC
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[31]=RF64(ea);} // 801E92E0
  c->lr=c->r[8]; // 801E92E4
  c->r[1]=R32(c->r[3]+0x0000028Cu); // 801E92E8
  c->r[3]=R32(c->r[3]+0x00000284u); // 801E92EC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E92F0
  W32(c->r[1]+0x00000000u,c->r[3]); // 801E92F4
  return; // 801E92F8
}

// fn_801E92FC
void f_801E92FC(Ctx* __restrict c) {
  trace_call(0x801E92FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E92FC
  c->r[0]=c->lr; // 801E9300
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E9304
  c->r[4]=c->r[1]+0x00000010u; // 801E9308
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E930C
  c->r[30]=c->r[3]|c->r[3]; // 801E9310
  c->r[3]=R32(c->r[3]+0x00000290u); // 801E9314
  c->lr=0x801E931Cu; f_801E821C(c); // 801E9318
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E931C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9320
  if (!crb(c,2)) { goto L_801E932C; } // 801E9324
  c->lr=0x801E932Cu; f_801E6FA4(c); // 801E9328
L_801E932C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E932C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801E9330
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801E9334
  if (crb(c,2)) { goto L_801E9344; } // 801E9338
  c->r[3]=R32(c->r[30]+0x0000027Cu); // 801E933C
  goto L_801E9348; // 801E9340
L_801E9344:;
  c->r[3]=R32(c->r[30]+0x00000284u); // 801E9344
L_801E9348:;
  c->r[0]=R32(c->r[30]+0x00000294u); // 801E9348
  W32(c->r[30]+0x00000288u,c->r[3]); // 801E934C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9350
  if (!crb(c,2)) { goto L_801E9434; } // 801E9354
  c->r[5]=R32(c->r[1]+0x00000018u); // 801E9358
  c->r[7]=R32(c->r[1]+0x00000010u); // 801E935C
  c->r[6]=R32(c->r[1]+0x00000014u); // 801E9360
  cmps(c,0,(int32_t)c->r[5],0); // 801E9364
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801E9368
  c->r[3]=R32(c->r[1]+0x00000020u); // 801E936C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9370
  W32(c->r[1]+0x00000028u,c->r[7]); // 801E9374
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801E9378
  W32(c->r[1]+0x00000030u,c->r[5]); // 801E937C
  W32(c->r[1]+0x00000034u,c->r[4]); // 801E9380
  W32(c->r[1]+0x00000038u,c->r[3]); // 801E9384
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801E9388
  c->r[0]=R32(c->r[30]+0x00000284u); // 801E938C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801E9390
  c->r[0]=R32(c->r[30]+0x00000288u); // 801E9394
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E9398
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 801E939C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801E93A0
  if (!crb(c,2)) { goto L_801E93B0; } // 801E93A4
  c->r[3]=0u+0x00000000u; // 801E93A8
  goto L_801E93B8; // 801E93AC
L_801E93B0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801E93B0
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801E93B4
L_801E93B8:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E93B8
  cmps(c,0,(int32_t)c->r[0],13); // 801E93BC
  if (crb(c,2)) { goto L_801E9404; } // 801E93C0
  if (!crb(c,0)) { goto L_801E93E0; } // 801E93C4
  cmps(c,0,(int32_t)c->r[0],1); // 801E93C8
  if (crb(c,2)) { goto L_801E93F0; } // 801E93CC
  if (!crb(c,0)) { goto L_801E93F8; } // 801E93D0
  cmps(c,0,(int32_t)c->r[0],0); // 801E93D4
  if (!crb(c,0)) { goto L_801E93F8; } // 801E93D8
  goto L_801E93F0; // 801E93DC
L_801E93E0:;
  cmps(c,0,(int32_t)c->r[0],17); // 801E93E0
  if (!crb(c,0)) { goto L_801E93F0; } // 801E93E4
  cmps(c,0,(int32_t)c->r[0],15); // 801E93E8
  if (!crb(c,0)) { goto L_801E93F8; } // 801E93EC
L_801E93F0:;
  c->lr=0x801E93F4u; f_801E6FA4(c); // 801E93F0
  goto L_801E9404; // 801E93F4
L_801E93F8:;
  c->r[3]=c->r[1]+0x00000028u; // 801E93F8
  c->lr=0x801E9400u; f_801E83CC(c); // 801E93FC
  IRQCHK(c); goto L_801E93B8; // 801E9400
L_801E9404:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 801E9404
  c->r[0]=0u+0x00000000u; // 801E9408
  c->r[4]=R32(c->r[1]+0x00000044u); // 801E940C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801E9410
  c->r[4]=c->r[4]+c->r[3]; // 801E9414
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E9418
  W32(c->r[30]+0x00000294u,c->r[3]); // 801E941C
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9420
  W32(c->r[30]+0x00000298u,c->r[3]); // 801E9424
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 801E9428
  W32(c->r[30]+0x000002A0u,c->r[4]); // 801E942C
  goto L_801E943C; // 801E9430
L_801E9434:;
  c->r[0]=0u+0x00000000u; // 801E9434
  W32(c->r[30]+0x000002A0u,c->r[0]); // 801E9438
L_801E943C:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 801E943C
  c->r[7]=R32(c->r[1]+0x00000010u); // 801E9440
  c->r[6]=R32(c->r[1]+0x00000014u); // 801E9444
  cmps(c,0,(int32_t)c->r[5],0); // 801E9448
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801E944C
  c->r[3]=R32(c->r[1]+0x00000020u); // 801E9450
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9454
  W32(c->r[1]+0x00000028u,c->r[7]); // 801E9458
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801E945C
  W32(c->r[1]+0x00000030u,c->r[5]); // 801E9460
  W32(c->r[1]+0x00000034u,c->r[4]); // 801E9464
  W32(c->r[1]+0x00000038u,c->r[3]); // 801E9468
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801E946C
  c->r[0]=R32(c->r[30]+0x00000284u); // 801E9470
  W32(c->r[1]+0x00000040u,c->r[0]); // 801E9474
  c->r[0]=R32(c->r[30]+0x00000288u); // 801E9478
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E947C
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 801E9480
  W32(c->r[1]+0x00000048u,c->r[0]); // 801E9484
  if (!crb(c,2)) { goto L_801E9494; } // 801E9488
  c->r[26]=0u+0x00000000u; // 801E948C
  goto L_801E949C; // 801E9490
L_801E9494:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801E9494
  c->r[26]=rotl(c->r[0],0)&0x0000007Fu; // 801E9498
L_801E949C:;
  c->r[31]=0u+0x804C0000u; // 801E949C
L_801E94A0:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801E94A0
  cmpu(c,0,c->r[0],0x00000010u); // 801E94A4
  if (crb(c,1)) { goto L_801E95A8; } // 801E94A8
  c->r[3]=c->r[31]+0xFFFF8198u; // 801E94AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E94B0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E94B4
  c->ctr=c->r[3]; // 801E94B8
  if (true) { switch (c->ctr) { case 0x801E94C0u: goto L_801E94C0; case 0x801E94E0u: goto L_801E94E0; case 0x801E9500u: goto L_801E9500; case 0x801E95A8u: goto L_801E95A8; case 0x801E95B0u: goto L_801E95B0; default: break; } dispatch(c,c->ctr); return; } // 801E94BC
L_801E94C0:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 801E94C0
  c->r[5]=c->r[1]+0x0000000Cu; // 801E94C4
  c->r[3]=R32(c->r[30]+0x00000294u); // 801E94C8
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E94CC
  c->lr=0x801E94D4u; f_801E6FBC(c); // 801E94D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E94D4
  if (!crb(c,2)) { goto L_801E95C0; } // 801E94D8
  goto L_801E95B0; // 801E94DC
L_801E94E0:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 801E94E0
  c->r[5]=c->r[1]+0x0000000Cu; // 801E94E4
  c->r[3]=R32(c->r[30]+0x00000294u); // 801E94E8
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E94EC
  c->lr=0x801E94F4u; f_801E6FBC(c); // 801E94F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E94F4
  if (!crb(c,2)) { goto L_801E95C0; } // 801E94F8
  goto L_801E95B0; // 801E94FC
L_801E9500:;
  c->r[28]=R32(c->r[1]+0x00000030u); // 801E9500
  c->r[27]=0u+0x00000000u; // 801E9504
  c->r[29]=R32(c->r[30]+0x00000294u); // 801E9508
  c->r[26]=c->r[28]|c->r[28]; // 801E950C
  goto L_801E953C; // 801E9510
L_801E9514:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801E9514
  c->r[3]=c->r[29]|c->r[29]; // 801E9518
  c->r[5]=c->r[1]+0x00000008u; // 801E951C
  c->lr=0x801E9524u; f_801E6FBC(c); // 801E9520
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801E9524
  if (crb(c,2)) { goto L_801E9534; } // 801E9528
  c->r[0]=0u+0x00000001u; // 801E952C
  goto L_801E954C; // 801E9530
L_801E9534:;
  c->r[26]=c->r[26]+0x00000004u; // 801E9534
  c->r[27]=c->r[27]+0x00000001u; // 801E9538
L_801E953C:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801E953C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801E9540
  if (crb(c,0)) { IRQCHK(c); goto L_801E9514; } // 801E9544
  c->r[0]=0u+0x00000000u; // 801E9548
L_801E954C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E954C
  if (!crb(c,2)) { goto L_801E95B0; } // 801E9550
  c->r[27]=R32(c->r[1]+0x00000030u); // 801E9554
  c->r[3]=c->r[30]|c->r[30]; // 801E9558
  c->r[4]=c->r[1]+0x00000010u; // 801E955C
  c->r[5]=c->r[27]|c->r[27]; // 801E9560
  c->lr=0x801E9568u; f_801E8AF4(c); // 801E9564
  c->r[5]=R32(c->r[30]+0x00000288u); // 801E9568
  c->r[3]=c->r[30]|c->r[30]; // 801E956C
  c->r[4]=R32(c->r[27]+0x00000008u); // 801E9570
  c->r[0]=R32(c->r[30]+0x00000298u); // 801E9574
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[0]); c->r[4]=ea;} // 801E9578
  c->r[0]=R32(c->r[30]+0x00000294u); // 801E957C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E9580
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801E9584
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E9588
  W32(c->r[4]+0x00000014u,c->r[27]); // 801E958C
  c->r[5]=R32(c->r[1]+0x00000014u); // 801E9590
  c->r[0]=R32(c->r[27]+0x00000004u); // 801E9594
  c->r[4]=R32(c->r[1]+0x00000024u); // 801E9598
  c->r[5]=c->r[5]+c->r[0]; // 801E959C
  c->lr=0x801E95A4u; f_801E91F8(c); // 801E95A0
  goto L_801E95B0; // 801E95A4
L_801E95A8:;
  c->lr=0x801E95ACu; f_801E6FA4(c); // 801E95A8
  goto L_801E95C0; // 801E95AC
L_801E95B0:;
  c->r[3]=c->r[1]+0x00000028u; // 801E95B0
  c->lr=0x801E95B8u; f_801E83CC(c); // 801E95B4
  c->r[26]=c->r[3]|c->r[3]; // 801E95B8
  IRQCHK(c); goto L_801E94A0; // 801E95BC
L_801E95C0:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801E95C0
  cmpu(c,0,c->r[0],0x00000010u); // 801E95C4
  if (!crb(c,2)) { goto L_801E965C; } // 801E95C8
  c->r[31]=R32(c->r[1]+0x00000030u); // 801E95CC
  c->r[3]=c->r[30]|c->r[30]; // 801E95D0
  c->r[4]=c->r[1]+0x00000010u; // 801E95D4
  c->r[5]=c->r[31]|c->r[31]; // 801E95D8
  c->lr=0x801E95E0u; f_801E8AF4(c); // 801E95DC
  c->r[4]=R32(c->r[30]+0x00000288u); // 801E95E0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801E95E4
  c->r[0]=R32(c->r[30]+0x00000298u); // 801E95E8
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 801E95EC
  c->r[0]=R32(c->r[30]+0x00000294u); // 801E95F0
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E95F4
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801E95F8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E95FC
  c->r[3]=R32(c->r[30]+0x00000294u); // 801E9600
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E9604
  cmps(c,0,(int32_t)c->r[0],42); // 801E9608
  if (!crb(c,2)) { goto L_801E9630; } // 801E960C
  c->r[0]=c->r[4]+0x00000010u; // 801E9610
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E9614
  c->r[3]=R32(c->r[30]+0x00000298u); // 801E9618
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E961C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E9620
  c->r[0]=c->r[3]+c->r[0]; // 801E9624
  W32(c->r[4]+0x00000010u,c->r[0]); // 801E9628
  goto L_801E9640; // 801E962C
L_801E9630:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 801E9630
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E9634
  c->r[0]=c->r[3]+c->r[0]; // 801E9638
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E963C
L_801E9640:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 801E9640
  c->r[3]=c->r[30]|c->r[30]; // 801E9644
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E9648
  c->r[4]=R32(c->r[1]+0x00000024u); // 801E964C
  c->r[5]=c->r[5]+c->r[0]; // 801E9650
  c->lr=0x801E9658u; f_801E91F8(c); // 801E9654
  goto L_801E96E8; // 801E9658
L_801E965C:;
  c->r[31]=R32(c->r[1]+0x00000030u); // 801E965C
  c->r[3]=c->r[30]|c->r[30]; // 801E9660
  c->r[4]=c->r[1]+0x00000010u; // 801E9664
  c->r[5]=c->r[31]|c->r[31]; // 801E9668
  c->lr=0x801E9670u; f_801E8AF4(c); // 801E966C
  c->r[4]=R32(c->r[30]+0x00000288u); // 801E9670
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 801E9674
  c->r[0]=R32(c->r[30]+0x00000298u); // 801E9678
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 801E967C
  c->r[0]=R32(c->r[30]+0x00000294u); // 801E9680
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E9684
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801E9688
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E968C
  c->r[3]=R32(c->r[30]+0x00000294u); // 801E9690
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E9694
  cmps(c,0,(int32_t)c->r[0],42); // 801E9698
  if (!crb(c,2)) { goto L_801E96C0; } // 801E969C
  c->r[0]=c->r[4]+0x00000010u; // 801E96A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E96A4
  c->r[3]=R32(c->r[30]+0x00000298u); // 801E96A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E96AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E96B0
  c->r[0]=c->r[3]+c->r[0]; // 801E96B4
  W32(c->r[4]+0x00000010u,c->r[0]); // 801E96B8
  goto L_801E96D0; // 801E96BC
L_801E96C0:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 801E96C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E96C4
  c->r[0]=c->r[3]+c->r[0]; // 801E96C8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E96CC
L_801E96D0:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 801E96D0
  c->r[3]=c->r[30]|c->r[30]; // 801E96D4
  c->r[0]=R16(c->r[31]+0x00000008u); // 801E96D8
  c->r[4]=R32(c->r[1]+0x00000024u); // 801E96DC
  c->r[5]=c->r[5]+c->r[0]; // 801E96E0
  c->lr=0x801E96E8u; f_801E91F8(c); // 801E96E4
L_801E96E8:;
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E96E8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E96EC
  c->lr=c->r[0]; // 801E96F0
  c->r[1]=c->r[1]+0x00000070u; // 801E96F4
  return; // 801E96F8
}

// fn_801E96FC
void f_801E96FC(Ctx* __restrict c) {
  trace_call(0x801E96FCu);
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E96FC
  c->r[0]=c->lr; // 801E9700
  W32(c->r[1]+0x000002C4u,c->r[0]); // 801E9704
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E9708
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801E970C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801E9710
  {uint32_t ea=c->r[1]+0x0000024Cu; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E9714
  {uint32_t ea=c->r[1]+0x000000F8u; WF64(ea,c->f[14]);} // 801E9718
  c->r[3]=c->r[1]+0x00000100u; // 801E971C
  {uint32_t ea=0u+c->r[3]; psq_store(c,14,ea,0,0);} // 801E9720
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[15]);} // 801E9724
  c->r[3]=c->r[1]+0x00000110u; // 801E9728
  {uint32_t ea=0u+c->r[3]; psq_store(c,15,ea,0,0);} // 801E972C
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[16]);} // 801E9730
  c->r[3]=c->r[1]+0x00000120u; // 801E9734
  {uint32_t ea=0u+c->r[3]; psq_store(c,16,ea,0,0);} // 801E9738
  {uint32_t ea=c->r[1]+0x00000128u; WF64(ea,c->f[17]);} // 801E973C
  c->r[3]=c->r[1]+0x00000130u; // 801E9740
  {uint32_t ea=0u+c->r[3]; psq_store(c,17,ea,0,0);} // 801E9744
  {uint32_t ea=c->r[1]+0x00000138u; WF64(ea,c->f[18]);} // 801E9748
  c->r[3]=c->r[1]+0x00000140u; // 801E974C
  {uint32_t ea=0u+c->r[3]; psq_store(c,18,ea,0,0);} // 801E9750
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[19]);} // 801E9754
  c->r[3]=c->r[1]+0x00000150u; // 801E9758
  {uint32_t ea=0u+c->r[3]; psq_store(c,19,ea,0,0);} // 801E975C
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[20]);} // 801E9760
  c->r[3]=c->r[1]+0x00000160u; // 801E9764
  {uint32_t ea=0u+c->r[3]; psq_store(c,20,ea,0,0);} // 801E9768
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[21]);} // 801E976C
  c->r[3]=c->r[1]+0x00000170u; // 801E9770
  {uint32_t ea=0u+c->r[3]; psq_store(c,21,ea,0,0);} // 801E9774
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[22]);} // 801E9778
  c->r[3]=c->r[1]+0x00000180u; // 801E977C
  {uint32_t ea=0u+c->r[3]; psq_store(c,22,ea,0,0);} // 801E9780
  {uint32_t ea=c->r[1]+0x00000188u; WF64(ea,c->f[23]);} // 801E9784
  c->r[3]=c->r[1]+0x00000190u; // 801E9788
  {uint32_t ea=0u+c->r[3]; psq_store(c,23,ea,0,0);} // 801E978C
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[24]);} // 801E9790
  c->r[3]=c->r[1]+0x000001A0u; // 801E9794
  {uint32_t ea=0u+c->r[3]; psq_store(c,24,ea,0,0);} // 801E9798
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[25]);} // 801E979C
  c->r[3]=c->r[1]+0x000001B0u; // 801E97A0
  {uint32_t ea=0u+c->r[3]; psq_store(c,25,ea,0,0);} // 801E97A4
  {uint32_t ea=c->r[1]+0x000001B8u; WF64(ea,c->f[26]);} // 801E97A8
  c->r[3]=c->r[1]+0x000001C0u; // 801E97AC
  {uint32_t ea=0u+c->r[3]; psq_store(c,26,ea,0,0);} // 801E97B0
  {uint32_t ea=c->r[1]+0x000001C8u; WF64(ea,c->f[27]);} // 801E97B4
  c->r[3]=c->r[1]+0x000001D0u; // 801E97B8
  {uint32_t ea=0u+c->r[3]; psq_store(c,27,ea,0,0);} // 801E97BC
  {uint32_t ea=c->r[1]+0x000001D8u; WF64(ea,c->f[28]);} // 801E97C0
  c->r[3]=c->r[1]+0x000001E0u; // 801E97C4
  {uint32_t ea=0u+c->r[3]; psq_store(c,28,ea,0,0);} // 801E97C8
  {uint32_t ea=c->r[1]+0x000001E8u; WF64(ea,c->f[29]);} // 801E97CC
  c->r[3]=c->r[1]+0x000001F0u; // 801E97D0
  {uint32_t ea=0u+c->r[3]; psq_store(c,29,ea,0,0);} // 801E97D4
  {uint32_t ea=c->r[1]+0x000001F8u; WF64(ea,c->f[30]);} // 801E97D8
  c->r[3]=c->r[1]+0x00000200u; // 801E97DC
  {uint32_t ea=0u+c->r[3]; psq_store(c,30,ea,0,0);} // 801E97E0
  {uint32_t ea=c->r[1]+0x00000208u; WF64(ea,c->f[31]);} // 801E97E4
  c->r[3]=c->r[1]+0x00000210u; // 801E97E8
  {uint32_t ea=0u+c->r[3]; psq_store(c,31,ea,0,0);} // 801E97EC
  c->r[3]=c->cr; // 801E97F0
  W32(c->r[1]+0x00000298u,c->r[3]); // 801E97F4
  c->r[3]=R32(c->r[1]+0x00000000u); // 801E97F8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801E97FC
  W32(c->r[1]+0x0000029Cu,c->r[3]); // 801E9800
  W32(c->r[1]+0x000002A4u,c->r[3]); // 801E9804
  W32(c->r[1]+0x000002A8u,c->r[4]); // 801E9808
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E980C
  W32(c->r[1]+0x000002ACu,c->r[3]); // 801E9810
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E9814
  W32(c->r[1]+0x000002B0u,c->r[3]); // 801E9818
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E981C
  W32(c->r[1]+0x000002B4u,c->r[3]); // 801E9820
  c->r[3]=c->r[1]+0x00000018u; // 801E9824
  c->lr=0x801E982Cu; f_801E92FC(c); // 801E9828
  c->r[0]=c->r[0]|0x00000000u; // 801E982C
  c->r[0]=R32(c->r[1]+0x000002C4u); // 801E9830
  c->lr=c->r[0]; // 801E9834
  c->r[1]=c->r[1]+0x000002C0u; // 801E9838
  return; // 801E983C
}

// fn_801E9840
void f_801E9840(Ctx* __restrict c) {
  trace_call(0x801E9840u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E9840
  cmps(c,0,(int32_t)c->r[0],0); // 801E9844
  if (crb(c,2)) return; // 801E9848
  c->r[12]=R32(c->r[3]+0x00000008u); // 801E984C
  cmps(c,0,(int32_t)c->r[12],0); // 801E9850
  if (crb(c,2)) return; // 801E9854
  c->r[3]=c->r[0]|c->r[0]; // 801E9858
  c->r[4]=0u+0xFFFFFFFFu; // 801E985C
  c->ctr=c->r[12]; // 801E9860
  if (true) { dispatch(c,c->ctr); return; } // 801E9864
  return; // 801E9868
}

// fn_801E986C
void f_801E986C(Ctx* __restrict c) {
  trace_call(0x801E986Cu);
  c->r[3]=0u+0x804C0000u; // 801E986C
  c->r[3]=c->r[3]+0xFFFF81FCu; // 801E9870
  return; // 801E9874
}

// __sys_free
void f_801E9878(Ctx* __restrict c) {
  trace_call(0x801E9878u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9878
  c->r[0]=c->lr; // 801E987C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9880
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9884
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9888
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E988C
  c->r[29]=c->r[3]|c->r[3]; // 801E9890
  c->r[0]=R32(c->r[13]+0xFFFF8400u); // 801E9894
  cmps(c,0,(int32_t)c->r[0],-1); // 801E9898
  if (!crb(c,2)) { goto L_801E9908; } // 801E989C
  c->r[31]=0u+0x803D0000u; // 801E98A0
  c->r[3]=c->r[31]+0xFFFF8EA0u; // 801E98A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E98A8
  c->lr=0x801E98B0u; f_801BB3FC(c); // 801E98AC
  c->r[3]=c->r[31]+0xFFFF8EA0u; // 801E98B0
  c->r[3]=c->r[3]+0x00000036u; // 801E98B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E98B8
  c->lr=0x801E98C0u; f_801BB3FC(c); // 801E98BC
  c->lr=0x801E98C4u; f_801BA230(c); // 801E98C0
  c->r[30]=c->r[3]|c->r[3]; // 801E98C4
  c->lr=0x801E98CCu; f_801BA218(c); // 801E98C8
  c->r[31]=c->r[3]|c->r[3]; // 801E98CC
  c->r[3]=c->r[30]|c->r[30]; // 801E98D0
  c->r[4]=c->r[31]|c->r[31]; // 801E98D4
  c->r[5]=0u+0x00000001u; // 801E98D8
  c->lr=0x801E98E0u; f_801BA12C(c); // 801E98DC
  c->r[30]=c->r[3]|c->r[3]; // 801E98E0
  c->lr=0x801E98E8u; f_801BA260(c); // 801E98E4
  c->r[0]=c->r[30]+0x0000001Fu; // 801E98E8
  c->r[30]=rotl(c->r[31],0)&0xFFFFFFE0u; // 801E98EC
  c->r[4]=c->r[30]|c->r[30]; // 801E98F0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801E98F4
  c->lr=0x801E98FCu; f_801BA19C(c); // 801E98F8
  c->lr=0x801E9900u; f_801BA11C(c); // 801E98FC
  c->r[3]=c->r[30]|c->r[30]; // 801E9900
  c->lr=0x801E9908u; f_801BA260(c); // 801E9904
L_801E9908:;
  c->r[3]=R32(c->r[13]+0xFFFF8400u); // 801E9908
  c->r[4]=c->r[29]|c->r[29]; // 801E990C
  c->lr=0x801E9914u; f_801BA0A4(c); // 801E9910
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9918
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E991C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9920
  c->lr=c->r[0]; // 801E9924
  c->r[1]=c->r[1]+0x00000020u; // 801E9928
  return; // 801E992C
}

// Block_link
void f_801E9930(Ctx* __restrict c) {
  trace_call(0x801E9930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9930
  c->r[0]=c->lr; // 801E9934
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E993C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9940
  c->r[30]=c->r[3]|c->r[3]; // 801E9944
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E9948
  c->r[0]=rotl(c->r[5],0)&0xFFFFFFFDu; // 801E994C
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFF8u; // 801E9950
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E9954
  c->r[5]=c->r[4]+c->r[6]; // 801E9958
  c->r[0]=R32(c->r[4]+c->r[6]); // 801E995C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801E9960
  W32(c->r[4]+c->r[6],c->r[0]); // 801E9964
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 801E9968
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E996C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E9970
  c->r[31]=c->r[3]+c->r[0]; // 801E9974
  {uint32_t ea=c->r[31]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[31]=ea;} // 801E9978
  cmps(c,0,(int32_t)c->r[3],0); // 801E997C
  if (crb(c,2)) { goto L_801E9A40; } // 801E9980
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E9984
  c->r[3]=c->r[4]|c->r[4]; // 801E9988
  W32(c->r[4]+0x00000008u,c->r[5]); // 801E998C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801E9990
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E9994
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801E9998
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E999C
  W32(c->r[5]+0x00000008u,c->r[4]); // 801E99A0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E99A4
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E99A8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801E99AC
  if (!crb(c,2)) { goto L_801E9A30; } // 801E99B0
  c->r[6]=R32(c->r[4]+0xFFFFFFFCu); // 801E99B4
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 801E99B8
  if (crb(c,2)) { goto L_801E99C4; } // 801E99BC
  goto L_801E9A30; // 801E99C0
L_801E99C4:;
  c->r[3]=c->r[4]-c->r[6]; // 801E99C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E99C8
  c->r[5]=rotl(c->r[0],0)&0x00000007u; // 801E99CC
  W32(c->r[3]+0x00000000u,c->r[5]); // 801E99D0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E99D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E99D8
  c->r[0]=c->r[6]+c->r[0]; // 801E99DC
  c->r[5]=(rotl(c->r[0],0)&0xFFFFFFF8u)|(c->r[5]&~0xFFFFFFF8u); // 801E99E0
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801E99E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 801E99E8
  if (!crb(c,2)) { goto L_801E9A04; } // 801E99EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E99F0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E99F4
  c->r[0]=c->r[6]+c->r[0]; // 801E99F8
  c->r[5]=c->r[3]+c->r[0]; // 801E99FC
  W32(c->r[5]+0xFFFFFFFCu,c->r[0]); // 801E9A00
L_801E9A04:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E9A04
  cmpu(c,0,c->r[5],c->r[4]); // 801E9A08
  if (!crb(c,2)) { goto L_801E9A18; } // 801E9A0C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E9A10
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E9A14
L_801E9A18:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E9A18
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801E9A1C
  W32(c->r[5]+0x00000008u,c->r[0]); // 801E9A20
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801E9A24
  c->r[4]=R32(c->r[5]+0x00000008u); // 801E9A28
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 801E9A2C
L_801E9A30:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 801E9A30
  c->r[4]=c->r[31]|c->r[31]; // 801E9A34
  c->lr=0x801E9A3Cu; f_801E9A80(c); // 801E9A38
  goto L_801E9A4C; // 801E9A3C
L_801E9A40:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E9A40
  W32(c->r[4]+0x00000008u,c->r[4]); // 801E9A44
  W32(c->r[4]+0x0000000Cu,c->r[4]); // 801E9A48
L_801E9A4C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E9A4C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E9A50
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E9A54
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 801E9A58
  cmpu(c,0,c->r[0],c->r[3]); // 801E9A5C
  if (!crb(c,0)) { goto L_801E9A68; } // 801E9A60
  W32(c->r[30]+0x00000008u,c->r[3]); // 801E9A64
L_801E9A68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9A68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9A6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9A70
  c->lr=c->r[0]; // 801E9A74
  c->r[1]=c->r[1]+0x00000010u; // 801E9A78
  return; // 801E9A7C
}

// SubBlock_merge_next
void f_801E9A80(Ctx* __restrict c) {
  trace_call(0x801E9A80u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801E9A80
  c->r[7]=rotl(c->r[5],0)&0xFFFFFFF8u; // 801E9A84
  c->r[6]=R32(c->r[3]+c->r[7]); // 801E9A88
  c->r[8]=c->r[3]+c->r[7]; // 801E9A8C
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 801E9A90
  if (!crb(c,2)) return; // 801E9A94
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFF8u; // 801E9A98
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 801E9A9C
  c->r[6]=c->r[7]+c->r[0]; // 801E9AA0
  c->r[5]=(rotl(c->r[6],0)&0xFFFFFFF8u)|(c->r[5]&~0xFFFFFFF8u); // 801E9AA4
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801E9AA8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801E9AAC
  if (!crb(c,2)) { goto L_801E9ABC; } // 801E9AB0
  c->r[5]=c->r[3]+c->r[6]; // 801E9AB4
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 801E9AB8
L_801E9ABC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E9ABC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E9AC0
  if (!crb(c,2)) { goto L_801E9AD8; } // 801E9AC4
  c->r[0]=R32(c->r[3]+c->r[6]); // 801E9AC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801E9ACC
  W32(c->r[3]+c->r[6],c->r[0]); // 801E9AD0
  goto L_801E9AE4; // 801E9AD4
L_801E9AD8:;
  c->r[0]=R32(c->r[3]+c->r[6]); // 801E9AD8
  c->r[0]=c->r[0]|0x00000004u; // 801E9ADC
  W32(c->r[3]+c->r[6],c->r[0]); // 801E9AE0
L_801E9AE4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9AE4
  cmpu(c,0,c->r[3],c->r[8]); // 801E9AE8
  if (!crb(c,2)) { goto L_801E9AF8; } // 801E9AEC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E9AF0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E9AF4
L_801E9AF8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E9AF8
  cmpu(c,0,c->r[0],c->r[8]); // 801E9AFC
  if (!crb(c,2)) { goto L_801E9B0C; } // 801E9B00
  c->r[0]=0u+0x00000000u; // 801E9B04
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E9B08
L_801E9B0C:;
  c->r[0]=R32(c->r[8]+0x00000008u); // 801E9B0C
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 801E9B10
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E9B14
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801E9B18
  c->r[3]=R32(c->r[8]+0x00000008u); // 801E9B1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E9B20
  return; // 801E9B24
}

// deallocate_from_fixed_pools
void f_801E9B28(Ctx* __restrict c) {
  trace_call(0x801E9B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9B28
  c->r[0]=c->lr; // 801E9B2C
  c->r[6]=0u+0x803D0000u; // 801E9B30
  c->r[7]=0u+0x00000000u; // 801E9B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9B38
  c->r[6]=c->r[6]+0xFFFF8F10u; // 801E9B3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9B40
  c->r[31]=c->r[3]|c->r[3]; // 801E9B44
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9B48
  goto L_801E9B58; // 801E9B4C
L_801E9B50:;
  c->r[6]=c->r[6]+0x00000004u; // 801E9B50
  c->r[7]=c->r[7]+0x00000001u; // 801E9B54
L_801E9B58:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801E9B58
  cmpu(c,0,c->r[5],c->r[0]); // 801E9B5C
  if (crb(c,1)) { IRQCHK(c); goto L_801E9B50; } // 801E9B60
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 801E9B64
  c->r[4]=R32(c->r[4]+0xFFFFFFFCu); // 801E9B68
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801E9B6C
  c->r[3]=c->r[3]+c->r[0]; // 801E9B70
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9B74
  cmps(c,0,(int32_t)c->r[0],0); // 801E9B78
  if (!crb(c,2)) { goto L_801E9BE8; } // 801E9B7C
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E9B80
  cmpu(c,0,c->r[5],c->r[4]); // 801E9B84
  if (crb(c,2)) { goto L_801E9BE8; } // 801E9B88
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E9B8C
  cmpu(c,0,c->r[0],c->r[4]); // 801E9B90
  if (!crb(c,2)) { goto L_801E9BB0; } // 801E9B94
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E9B98
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E9B9C
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E9BA0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E9BA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E9BA8
  goto L_801E9BE8; // 801E9BAC
L_801E9BB0:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9BB0
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E9BB4
  W32(c->r[5]+0x00000004u,c->r[0]); // 801E9BB8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E9BBC
  c->r[5]=R32(c->r[4]+0x00000004u); // 801E9BC0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E9BC4
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E9BC8
  W32(c->r[4]+0x00000004u,c->r[5]); // 801E9BCC
  c->r[5]=R32(c->r[5]+0x00000000u); // 801E9BD0
  W32(c->r[4]+0x00000000u,c->r[5]); // 801E9BD4
  W32(c->r[5]+0x00000004u,c->r[4]); // 801E9BD8
  c->r[5]=R32(c->r[4]+0x00000004u); // 801E9BDC
  W32(c->r[5]+0x00000000u,c->r[4]); // 801E9BE0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E9BE4
L_801E9BE8:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9BE8
  W32(c->r[6]+0x00000004u,c->r[0]); // 801E9BEC
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 801E9BF0
  c->r[0]=R32(c->r[4]+0x00000010u); // 801E9BF4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E9BF8
  W32(c->r[4]+0x00000010u,c->r[0]); // 801E9BFC
  if (!crb(c,2)) { goto L_801E9CFC; } // 801E9C00
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E9C04
  cmpu(c,0,c->r[0],c->r[4]); // 801E9C08
  if (!crb(c,2)) { goto L_801E9C18; } // 801E9C0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9C10
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E9C14
L_801E9C18:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E9C18
  cmpu(c,0,c->r[0],c->r[4]); // 801E9C1C
  if (!crb(c,2)) { goto L_801E9C2C; } // 801E9C20
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E9C24
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E9C28
L_801E9C2C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9C2C
  c->r[5]=R32(c->r[4]+0x00000000u); // 801E9C30
  W32(c->r[5]+0x00000004u,c->r[0]); // 801E9C34
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E9C38
  c->r[5]=R32(c->r[4]+0x00000004u); // 801E9C3C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E9C40
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E9C44
  cmpu(c,0,c->r[0],c->r[4]); // 801E9C48
  if (!crb(c,2)) { goto L_801E9C58; } // 801E9C4C
  c->r[0]=0u+0x00000000u; // 801E9C50
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E9C54
L_801E9C58:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E9C58
  cmpu(c,0,c->r[0],c->r[4]); // 801E9C5C
  if (!crb(c,2)) { goto L_801E9C6C; } // 801E9C60
  c->r[0]=0u+0x00000000u; // 801E9C64
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E9C68
L_801E9C6C:;
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801E9C6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9C70
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801E9C74
  c->r[3]=c->r[30]|c->r[30]; // 801E9C78
  c->lr=0x801E9C80u; f_801E9930(c); // 801E9C7C
  c->r[3]=R32(c->r[30]+0x00000010u); // 801E9C80
  c->r[5]=0u+0x00000000u; // 801E9C84
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E9C88
  if (!crb(c,2)) { goto L_801E9CAC; } // 801E9C8C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E9C90
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 801E9C94
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E9C98
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 801E9C9C
  cmpu(c,0,c->r[4],c->r[0]); // 801E9CA0
  if (!crb(c,2)) { goto L_801E9CAC; } // 801E9CA4
  c->r[5]=0u+0x00000001u; // 801E9CA8
L_801E9CAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E9CAC
  if (crb(c,2)) { goto L_801E9CFC; } // 801E9CB0
  c->r[4]=R32(c->r[30]+0x00000004u); // 801E9CB4
  cmpu(c,0,c->r[4],c->r[30]); // 801E9CB8
  if (!crb(c,2)) { goto L_801E9CC4; } // 801E9CBC
  c->r[4]=0u+0x00000000u; // 801E9CC0
L_801E9CC4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E9CC4
  cmpu(c,0,c->r[0],c->r[30]); // 801E9CC8
  if (!crb(c,2)) { goto L_801E9CD4; } // 801E9CCC
  W32(c->r[31]+0x00000000u,c->r[4]); // 801E9CD0
L_801E9CD4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E9CD4
  if (crb(c,2)) { goto L_801E9CE8; } // 801E9CD8
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E9CDC
  W32(c->r[4]+0x00000000u,c->r[3]); // 801E9CE0
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E9CE4
L_801E9CE8:;
  c->r[0]=0u+0x00000000u; // 801E9CE8
  c->r[3]=c->r[30]|c->r[30]; // 801E9CEC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E9CF0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E9CF4
  c->lr=0x801E9CFCu; f_801E9878(c); // 801E9CF8
L_801E9CFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9D00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9D04
  c->lr=c->r[0]; // 801E9D08
  c->r[1]=c->r[1]+0x00000010u; // 801E9D0C
  return; // 801E9D10
}

// free
void f_801E9D14(Ctx* __restrict c) {
  trace_call(0x801E9D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9D14
  c->r[0]=c->lr; // 801E9D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9D1C
  c->r[0]=R8(c->r[13]+0xFFFFA180u); // 801E9D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9D24
  c->r[31]=c->r[3]|c->r[3]; // 801E9D28
  cmps(c,0,(int32_t)c->r[0],0); // 801E9D2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9D30
  if (!crb(c,2)) { goto L_801E9D54; } // 801E9D34
  c->r[3]=0u+0x80580000u; // 801E9D38
  c->r[4]=0u+0x00000000u; // 801E9D3C
  c->r[3]=c->r[3]+0x00005578u; // 801E9D40
  c->r[5]=0u+0x00000034u; // 801E9D44
  c->lr=0x801E9D4Cu; f_8000443C(c); // 801E9D48
  c->r[0]=0u+0x00000001u; // 801E9D4C
  W8(c->r[13]+0xFFFFA180u,c->r[0]); // 801E9D50
L_801E9D54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E9D54
  c->r[30]=0u+0x80580000u; // 801E9D58
  c->r[30]=c->r[30]+0x00005578u; // 801E9D5C
  if (crb(c,2)) { goto L_801E9E2C; } // 801E9D60
  c->r[3]=R32(c->r[31]+0xFFFFFFFCu); // 801E9D64
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801E9D68
  if (!crb(c,2)) { goto L_801E9D78; } // 801E9D6C
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E9D70
  goto L_801E9D84; // 801E9D74
L_801E9D78:;
  c->r[0]=R32(c->r[31]+0xFFFFFFF8u); // 801E9D78
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E9D7C
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 801E9D80
L_801E9D84:;
  cmpu(c,0,c->r[5],0x00000044u); // 801E9D84
  if (crb(c,1)) { goto L_801E9D9C; } // 801E9D88
  c->r[3]=c->r[30]|c->r[30]; // 801E9D8C
  c->r[4]=c->r[31]|c->r[31]; // 801E9D90
  c->lr=0x801E9D98u; f_801E9B28(c); // 801E9D94
  goto L_801E9E2C; // 801E9D98
L_801E9D9C:;
  c->r[0]=R32(c->r[31]+0xFFFFFFFCu); // 801E9D9C
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 801E9DA0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801E9DA4
  c->r[3]=c->r[31]|c->r[31]; // 801E9DA8
  c->lr=0x801E9DB0u; f_801E9930(c); // 801E9DAC
  c->r[3]=R32(c->r[31]+0x00000010u); // 801E9DB0
  c->r[5]=0u+0x00000000u; // 801E9DB4
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801E9DB8
  if (!crb(c,2)) { goto L_801E9DDC; } // 801E9DBC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801E9DC0
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 801E9DC4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801E9DC8
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 801E9DCC
  cmpu(c,0,c->r[4],c->r[0]); // 801E9DD0
  if (!crb(c,2)) { goto L_801E9DDC; } // 801E9DD4
  c->r[5]=0u+0x00000001u; // 801E9DD8
L_801E9DDC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E9DDC
  if (crb(c,2)) { goto L_801E9E2C; } // 801E9DE0
  c->r[4]=R32(c->r[31]+0x00000004u); // 801E9DE4
  cmpu(c,0,c->r[4],c->r[31]); // 801E9DE8
  if (!crb(c,2)) { goto L_801E9DF4; } // 801E9DEC
  c->r[4]=0u+0x00000000u; // 801E9DF0
L_801E9DF4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E9DF4
  cmpu(c,0,c->r[0],c->r[31]); // 801E9DF8
  if (!crb(c,2)) { goto L_801E9E04; } // 801E9DFC
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E9E00
L_801E9E04:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E9E04
  if (crb(c,2)) { goto L_801E9E18; } // 801E9E08
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E9E0C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801E9E10
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E9E14
L_801E9E18:;
  c->r[0]=0u+0x00000000u; // 801E9E18
  c->r[3]=c->r[31]|c->r[31]; // 801E9E1C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E9E20
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E9E24
  c->lr=0x801E9E2Cu; f_801E9878(c); // 801E9E28
L_801E9E2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9E2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9E30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9E34
  c->lr=c->r[0]; // 801E9E38
  c->r[1]=c->r[1]+0x00000010u; // 801E9E3C
  return; // 801E9E40
}

// __close_all
void f_801E9E44(Ctx* __restrict c) {
  trace_call(0x801E9E44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9E44
  c->r[0]=c->lr; // 801E9E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9E50
  c->r[31]=0u+0x00000000u; // 801E9E54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9E58
  c->r[30]=0u+0x00000003u; // 801E9E5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9E60
  c->r[29]=0u+0x804C0000u; // 801E9E64
  c->r[29]=c->r[29]+0xFFFF8210u; // 801E9E68
  goto L_801E9EC4; // 801E9E6C
L_801E9E70:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801E9E70
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801E9E74
  if (crb(c,2)) { goto L_801E9E84; } // 801E9E78
  c->r[3]=c->r[29]|c->r[29]; // 801E9E7C
  c->lr=0x801E9E84u; f_801EC180(c); // 801E9E80
L_801E9E84:;
  c->r[3]=c->r[29]|c->r[29]; // 801E9E84
  c->r[29]=R32(c->r[29]+0x0000004Cu); // 801E9E88
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801E9E8C
  cmps(c,0,(int32_t)c->r[0],0); // 801E9E90
  if (crb(c,2)) { goto L_801E9EA0; } // 801E9E94
  c->lr=0x801E9E9Cu; f_801E9D14(c); // 801E9E98
  goto L_801E9EC4; // 801E9E9C
L_801E9EA0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E9EA0
  c->r[0]=(rotl(c->r[30],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 801E9EA4
  cmps(c,0,(int32_t)c->r[29],0); // 801E9EA8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E9EAC
  if (crb(c,2)) { goto L_801E9EC4; } // 801E9EB0
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801E9EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801E9EB8
  if (crb(c,2)) { goto L_801E9EC4; } // 801E9EBC
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 801E9EC0
L_801E9EC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E9EC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9E70; } // 801E9EC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9ECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9ED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E9ED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9ED8
  c->lr=c->r[0]; // 801E9EDC
  c->r[1]=c->r[1]+0x00000020u; // 801E9EE0
  return; // 801E9EE4
}

// fn_801E9EE8
void f_801E9EE8(Ctx* __restrict c) {
  trace_call(0x801E9EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9EE8
  c->r[0]=c->lr; // 801E9EEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9EF4
  c->r[31]=0u+0x00000000u; // 801E9EF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9EFC
  c->r[30]=0u+0x804C0000u; // 801E9F00
  c->r[30]=c->r[30]+0xFFFF8210u; // 801E9F04
  goto L_801E9F48; // 801E9F08
L_801E9F0C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801E9F0C
  c->r[0]=rotl(c->r[3],10)&0x00000007u; cr0(c,c->r[0]); // 801E9F10
  if (crb(c,2)) { goto L_801E9F44; } // 801E9F14
  c->r[0]=rotl(c->r[3],7)&0x00000001u; cr0(c,c->r[0]); // 801E9F18
  if (crb(c,2)) { goto L_801E9F44; } // 801E9F1C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E9F20
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 801E9F24
  cmpu(c,0,c->r[0],0x00000001u); // 801E9F28
  if (!crb(c,2)) { goto L_801E9F44; } // 801E9F2C
  c->r[3]=c->r[30]|c->r[30]; // 801E9F30
  c->lr=0x801E9F38u; f_801EC23C(c); // 801E9F34
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F38
  if (crb(c,2)) { goto L_801E9F44; } // 801E9F3C
  c->r[31]=0u+0xFFFFFFFFu; // 801E9F40
L_801E9F44:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 801E9F44
L_801E9F48:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E9F48
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9F0C; } // 801E9F4C
  c->r[3]=c->r[31]|c->r[31]; // 801E9F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9F54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9F58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9F5C
  c->lr=c->r[0]; // 801E9F60
  c->r[1]=c->r[1]+0x00000010u; // 801E9F64
  return; // 801E9F68
}

// __flush_all
void f_801E9F6C(Ctx* __restrict c) {
  trace_call(0x801E9F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9F6C
  c->r[0]=c->lr; // 801E9F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9F78
  c->r[31]=0u+0x00000000u; // 801E9F7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9F80
  c->r[30]=0u+0x804C0000u; // 801E9F84
  c->r[30]=c->r[30]+0xFFFF8210u; // 801E9F88
  goto L_801E9FB4; // 801E9F8C
L_801E9F90:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E9F90
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801E9F94
  if (crb(c,2)) { goto L_801E9FB0; } // 801E9F98
  c->r[3]=c->r[30]|c->r[30]; // 801E9F9C
  c->lr=0x801E9FA4u; f_801EC23C(c); // 801E9FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801E9FA4
  if (crb(c,2)) { goto L_801E9FB0; } // 801E9FA8
  c->r[31]=0u+0xFFFFFFFFu; // 801E9FAC
L_801E9FB0:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 801E9FB0
L_801E9FB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E9FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801E9F90; } // 801E9FB8
  c->r[3]=c->r[31]|c->r[31]; // 801E9FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9FC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9FC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9FC8
  c->lr=c->r[0]; // 801E9FCC
  c->r[1]=c->r[1]+0x00000010u; // 801E9FD0
  return; // 801E9FD4
}

// __ull2dec
void f_801E9FD8(Ctx* __restrict c) {
  trace_call(0x801E9FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9FD8
  c->r[0]=c->lr; // 801E9FDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9FE0
  c->r[0]=0u+0x00000000u; // 801E9FE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E9FE8
  c->r[31]=c->r[5]|c->r[5]; // 801E9FEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E9FF0
  c->r[30]=c->r[6]|c->r[6]; // 801E9FF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E9FF8
  c->r[29]=c->r[3]|c->r[3]; // 801E9FFC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801EA000
  W8(c->r[3]+0x00000004u,c->r[0]); // 801EA004
  goto L_801EA050; // 801EA008
L_801EA00C:;
  c->r[3]=c->r[31]|c->r[31]; // 801EA00C
  c->r[4]=c->r[30]|c->r[30]; // 801EA010
  c->r[6]=0u+0x0000000Au; // 801EA014
  c->r[5]=0u+0x00000000u; // 801EA018
  c->lr=0x801EA020u; f_801E7BE4(c); // 801EA01C
  c->r[8]=R8(c->r[29]+0x00000004u); // 801EA020
  c->r[3]=c->r[31]|c->r[31]; // 801EA024
  c->r[6]=0u+0x0000000Au; // 801EA028
  c->r[5]=0u+0x00000000u; // 801EA02C
  c->r[7]=c->r[29]+c->r[8]; // 801EA030
  c->r[0]=c->r[8]+0x00000001u; // 801EA034
  W8(c->r[7]+0x00000005u,c->r[4]); // 801EA038
  c->r[4]=c->r[30]|c->r[30]; // 801EA03C
  W8(c->r[29]+0x00000004u,c->r[0]); // 801EA040
  c->lr=0x801EA048u; f_801E79C0(c); // 801EA044
  c->r[30]=c->r[4]|c->r[4]; // 801EA048
  c->r[31]=c->r[3]|c->r[3]; // 801EA04C
L_801EA050:;
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 801EA050
  if (!crb(c,2)) { IRQCHK(c); goto L_801EA00C; } // 801EA054
  c->r[0]=R8(c->r[29]+0x00000004u); // 801EA058
  c->r[4]=c->r[29]+0x00000005u; // 801EA05C
  c->r[3]=c->r[29]+c->r[0]; // 801EA060
  c->r[3]=c->r[3]+0x00000005u; // 801EA064
  goto L_801EA080; // 801EA068
L_801EA06C:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 801EA06C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EA070
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EA074
  c->r[4]=c->r[4]+0x00000001u; // 801EA078
  W8(c->r[3]+0x00000000u,c->r[5]); // 801EA07C
L_801EA080:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EA080
  cmpu(c,0,c->r[4],c->r[3]); // 801EA084
  if (crb(c,0)) { IRQCHK(c); goto L_801EA06C; } // 801EA088
  c->r[3]=R8(c->r[29]+0x00000004u); // 801EA08C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801EA090
  W16(c->r[29]+0x00000002u,c->r[0]); // 801EA094
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EA098
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EA09C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EA0A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA0A4
  c->lr=c->r[0]; // 801EA0A8
  c->r[1]=c->r[1]+0x00000020u; // 801EA0AC
  return; // 801EA0B0
}

// __timesdec
void f_801EA0B4(Ctx* __restrict c) {
  trace_call(0x801EA0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA0B4
  c->r[6]=0u+0xCCCD0000u; // 801EA0B8
  c->r[8]=R8(c->r[4]+0x00000004u); // 801EA0BC
  c->r[11]=0u+0x00000000u; // 801EA0C0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801EA0C4
  c->r[0]=c->r[1]+0x00000008u; // 801EA0C8
  c->r[7]=R8(c->r[5]+0x00000004u); // 801EA0CC
  c->r[9]=c->r[6]+0xFFFFCCCDu; // 801EA0D0
  W32(c->r[1]+0x00000058u,c->r[30]); // 801EA0D4
  c->r[12]=c->r[8]+c->r[7]; // 801EA0D8
  W32(c->r[1]+0x00000054u,c->r[29]); // 801EA0DC
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801EA0E0
  c->r[6]=c->r[0]+c->r[12]; // 801EA0E4
  c->r[6]=c->r[6]+0x00000001u; // 801EA0E8
  W8(c->r[3]+0x00000000u,c->r[11]); // 801EA0EC
  c->r[0]=c->r[6]|c->r[6]; // 801EA0F0
  goto L_801EA224; // 801EA0F4
L_801EA0F8:;
  c->r[7]=R8(c->r[5]+0x00000004u); // 801EA0F8
  c->r[31]=c->r[7]+0xFFFFFFFFu; // 801EA0FC
  c->r[7]=c->r[12]-c->r[31]; // 801EA100
  c->r[30]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801EA104
  if (!crb(c,0)) { goto L_801EA114; } // 801EA108
  c->r[30]=0u+0x00000000u; // 801EA10C
  c->r[31]=c->r[12]+0xFFFFFFFFu; // 801EA110
L_801EA114:;
  c->r[7]=R8(c->r[4]+0x00000004u); // 801EA114
  c->r[8]=c->r[5]+c->r[31]; // 801EA118
  c->r[31]=c->r[31]+0x00000001u; // 801EA11C
  c->r[10]=c->r[4]+c->r[30]; // 801EA120
  c->r[7]=c->r[7]-c->r[30]; // 801EA124
  c->r[29]=c->r[8]+0x00000005u; // 801EA128
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 801EA12C
  c->r[30]=c->r[10]+0x00000005u; // 801EA130
  if (!crb(c,1)) { goto L_801EA13C; } // 801EA134
  c->r[31]=c->r[7]|c->r[7]; // 801EA138
L_801EA13C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EA13C
  if (!crb(c,1)) { goto L_801EA204; } // 801EA140
  c->r[7]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 801EA144
  c->ctr=c->r[7]; // 801EA148
  if (crb(c,2)) { goto L_801EA1E4; } // 801EA14C
L_801EA150:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 801EA150
  c->r[8]=R8(c->r[29]+0x00000000u); // 801EA154
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA158
  c->r[10]=R8(c->r[30]+0x00000001u); // 801EA15C
  c->r[8]=R8(c->r[29]+0xFFFFFFFFu); // 801EA160
  c->r[11]=c->r[11]+c->r[7]; // 801EA164
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA168
  c->r[10]=R8(c->r[30]+0x00000002u); // 801EA16C
  c->r[8]=R8(c->r[29]+0xFFFFFFFEu); // 801EA170
  c->r[11]=c->r[11]+c->r[7]; // 801EA174
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA178
  c->r[10]=R8(c->r[30]+0x00000003u); // 801EA17C
  c->r[8]=R8(c->r[29]+0xFFFFFFFDu); // 801EA180
  c->r[11]=c->r[11]+c->r[7]; // 801EA184
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA188
  c->r[10]=R8(c->r[30]+0x00000004u); // 801EA18C
  c->r[8]=R8(c->r[29]+0xFFFFFFFCu); // 801EA190
  c->r[11]=c->r[11]+c->r[7]; // 801EA194
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA198
  c->r[10]=R8(c->r[30]+0x00000005u); // 801EA19C
  c->r[8]=R8(c->r[29]+0xFFFFFFFBu); // 801EA1A0
  c->r[11]=c->r[11]+c->r[7]; // 801EA1A4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA1A8
  c->r[10]=R8(c->r[30]+0x00000006u); // 801EA1AC
  c->r[8]=R8(c->r[29]+0xFFFFFFFAu); // 801EA1B0
  c->r[11]=c->r[11]+c->r[7]; // 801EA1B4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA1B8
  c->r[10]=R8(c->r[30]+0x00000007u); // 801EA1BC
  c->r[8]=R8(c->r[29]+0xFFFFFFF9u); // 801EA1C0
  c->r[30]=c->r[30]+0x00000008u; // 801EA1C4
  c->r[29]=c->r[29]+0xFFFFFFF8u; // 801EA1C8
  c->r[11]=c->r[11]+c->r[7]; // 801EA1CC
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA1D0
  c->r[11]=c->r[11]+c->r[7]; // 801EA1D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA150; } // 801EA1D8
  c->r[31]=c->r[31]&0x00000007u; cr0(c,c->r[31]); // 801EA1DC
  if (crb(c,2)) { goto L_801EA204; } // 801EA1E0
L_801EA1E4:;
  c->ctr=c->r[31]; // 801EA1E4
L_801EA1E8:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 801EA1E8
  c->r[30]=c->r[30]+0x00000001u; // 801EA1EC
  c->r[8]=R8(c->r[29]+0x00000000u); // 801EA1F0
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801EA1F4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801EA1F8
  c->r[11]=c->r[11]+c->r[7]; // 801EA1FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA1E8; } // 801EA200
L_801EA204:;
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[11])>>32); // 801EA204
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801EA208
  c->r[7]=c->r[8]|c->r[8]; // 801EA20C
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 801EA210
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 801EA214
  c->r[8]=c->r[11]-c->r[8]; // 801EA218
  c->r[11]=rotl(c->r[7],29)&0x1FFFFFFFu; // 801EA21C
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[8]); c->r[6]=ea;} // 801EA220
L_801EA224:;
  cmps(c,0,(int32_t)c->r[12],0); // 801EA224
  if (crb(c,1)) { IRQCHK(c); goto L_801EA0F8; } // 801EA228
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801EA22C
  cmps(c,0,(int32_t)c->r[11],0); // 801EA230
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 801EA234
  c->r[4]=c->r[7]+c->r[4]; // 801EA238
  W16(c->r[3]+0x00000002u,c->r[4]); // 801EA23C
  if (crb(c,2)) { goto L_801EA254; } // 801EA240
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[11]); c->r[6]=ea;} // 801EA244
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EA248
  c->r[4]=c->r[4]+0x00000001u; // 801EA24C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801EA250
L_801EA254:;
  c->r[7]=0u+0x00000000u; // 801EA254
  goto L_801EA270; // 801EA258
L_801EA25C:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801EA25C
  c->r[4]=c->r[3]+c->r[7]; // 801EA260
  c->r[7]=c->r[7]+0x00000001u; // 801EA264
  c->r[6]=c->r[6]+0x00000001u; // 801EA268
  W8(c->r[4]+0x00000005u,c->r[5]); // 801EA26C
L_801EA270:;
  cmps(c,0,(int32_t)c->r[7],36); // 801EA270
  if (!crb(c,0)) { goto L_801EA280; } // 801EA274
  cmpu(c,0,c->r[6],c->r[0]); // 801EA278
  if (crb(c,0)) { IRQCHK(c); goto L_801EA25C; } // 801EA27C
L_801EA280:;
  cmpu(c,0,c->r[6],c->r[0]); // 801EA280
  W8(c->r[3]+0x00000004u,c->r[7]); // 801EA284
  if (!crb(c,0)) { goto L_801EA328; } // 801EA288
  c->r[4]=R8(c->r[6]+0x00000000u); // 801EA28C
  cmpu(c,0,c->r[4],0x00000005u); // 801EA290
  if (crb(c,0)) { goto L_801EA328; } // 801EA294
  if (!crb(c,2)) { goto L_801EA2D0; } // 801EA298
  c->r[5]=c->r[6]+0x00000001u; // 801EA29C
  c->r[4]=c->r[0]-c->r[5]; // 801EA2A0
  c->ctr=c->r[4]; // 801EA2A4
  cmpu(c,0,c->r[5],c->r[0]); // 801EA2A8
  if (!crb(c,0)) { goto L_801EA2C4; } // 801EA2AC
L_801EA2B0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801EA2B0
  cmps(c,0,(int32_t)c->r[0],0); // 801EA2B4
  if (!crb(c,2)) { goto L_801EA2D0; } // 801EA2B8
  c->r[5]=c->r[5]+0x00000001u; // 801EA2BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA2B0; } // 801EA2C0
L_801EA2C4:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 801EA2C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EA2C8
  if (crb(c,2)) { goto L_801EA328; } // 801EA2CC
L_801EA2D0:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801EA2D0
  c->r[6]=c->r[3]+0x00000005u; // 801EA2D4
  c->r[0]=0u+0x00000000u; // 801EA2D8
  c->r[5]=c->r[6]+c->r[4]; // 801EA2DC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EA2E0
L_801EA2E4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801EA2E4
  cmpu(c,0,c->r[4],0x00000009u); // 801EA2E8
  if (!crb(c,0)) { goto L_801EA2FC; } // 801EA2EC
  c->r[0]=c->r[4]+0x00000001u; // 801EA2F0
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA2F4
  goto L_801EA328; // 801EA2F8
L_801EA2FC:;
  cmpu(c,0,c->r[5],c->r[6]); // 801EA2FC
  if (!crb(c,2)) { goto L_801EA31C; } // 801EA300
  c->r[0]=0u+0x00000001u; // 801EA304
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA308
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EA30C
  c->r[0]=c->r[4]+0x00000001u; // 801EA310
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EA314
  goto L_801EA328; // 801EA318
L_801EA31C:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA31C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EA320
  IRQCHK(c); goto L_801EA2E4; // 801EA324
L_801EA328:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801EA328
  c->r[30]=R32(c->r[1]+0x00000058u); // 801EA32C
  c->r[29]=R32(c->r[1]+0x00000054u); // 801EA330
  c->r[1]=c->r[1]+0x00000060u; // 801EA334
  return; // 801EA338
}

// __str2dec
void f_801EA33C(Ctx* __restrict c) {
  trace_call(0x801EA33Cu);
  c->r[0]=0u+0x00000000u; // 801EA33C
  W16(c->r[3]+0x00000002u,c->r[5]); // 801EA340
  c->r[7]=0u+0x00000000u; // 801EA344
  W8(c->r[3]+0x00000000u,c->r[0]); // 801EA348
  goto L_801EA368; // 801EA34C
L_801EA350:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 801EA350
  c->r[5]=c->r[3]+c->r[7]; // 801EA354
  c->r[4]=c->r[4]+0x00000001u; // 801EA358
  c->r[7]=c->r[7]+0x00000001u; // 801EA35C
  c->r[0]=c->r[6]+0xFFFFFFD0u; // 801EA360
  W8(c->r[5]+0x00000005u,c->r[0]); // 801EA364
L_801EA368:;
  cmps(c,0,(int32_t)c->r[7],36); // 801EA368
  if (!crb(c,0)) { goto L_801EA37C; } // 801EA36C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EA370
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EA374
  if (!crb(c,2)) { IRQCHK(c); goto L_801EA350; } // 801EA378
L_801EA37C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801EA37C
  W8(c->r[3]+0x00000004u,c->r[7]); // 801EA380
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EA384
  if (crb(c,2)) return; // 801EA388
  cmps(c,0,(int32_t)c->r[0],5); // 801EA38C
  if (crb(c,0)) return; // 801EA390
  if (crb(c,1)) { goto L_801EA3CC; } // 801EA394
  c->r[5]=c->r[4]+0x00000001u; // 801EA398
  goto L_801EA3B0; // 801EA39C
L_801EA3A0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801EA3A0
  cmps(c,0,(int32_t)c->r[0],48); // 801EA3A4
  if (!crb(c,2)) { goto L_801EA3CC; } // 801EA3A8
  c->r[5]=c->r[5]+0x00000001u; // 801EA3AC
L_801EA3B0:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801EA3B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801EA3B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801EA3A0; } // 801EA3B8
  c->r[4]=c->r[7]+c->r[3]; // 801EA3BC
  c->r[0]=R8(c->r[4]+0x00000004u); // 801EA3C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EA3C4
  if (crb(c,2)) return; // 801EA3C8
L_801EA3CC:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801EA3CC
  c->r[6]=c->r[3]+0x00000005u; // 801EA3D0
  c->r[0]=0u+0x00000000u; // 801EA3D4
  c->r[5]=c->r[6]+c->r[4]; // 801EA3D8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EA3DC
L_801EA3E0:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801EA3E0
  cmpu(c,0,c->r[4],0x00000009u); // 801EA3E4
  if (!crb(c,0)) { goto L_801EA3F8; } // 801EA3E8
  c->r[0]=c->r[4]+0x00000001u; // 801EA3EC
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA3F0
  return; // 801EA3F4
L_801EA3F8:;
  cmpu(c,0,c->r[5],c->r[6]); // 801EA3F8
  if (!crb(c,2)) { goto L_801EA418; } // 801EA3FC
  c->r[0]=0u+0x00000001u; // 801EA400
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA404
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EA408
  c->r[0]=c->r[4]+0x00000001u; // 801EA40C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EA410
  return; // 801EA414
L_801EA418:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EA418
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EA41C
  IRQCHK(c); goto L_801EA3E0; // 801EA420
  return; // 801EA424
}

// __two_exp
void f_801EA428(Ctx* __restrict c) {
  trace_call(0x801EA428u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA428
  c->r[0]=c->lr; // 801EA42C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801EA430
  c->r[0]=c->r[4]+0x00000040u; // 801EA434
  cmpu(c,0,c->r[0],0x00000048u); // 801EA438
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801EA43C
  c->r[31]=c->r[3]|c->r[3]; // 801EA440
  W32(c->r[1]+0x00000068u,c->r[30]); // 801EA444
  c->r[30]=c->r[4]|c->r[4]; // 801EA448
  if (crb(c,1)) { goto L_801EA65C; } // 801EA44C
  c->r[5]=0u+0x804C0000u; // 801EA450
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EA454
  c->r[5]=c->r[5]+0xFFFF8350u; // 801EA458
  c->r[5]=R32(c->r[5]+c->r[0]); // 801EA45C
  c->ctr=c->r[5]; // 801EA460
  if (true) { switch (c->ctr) { case 0x801EA468u: goto L_801EA468; case 0x801EA47Cu: goto L_801EA47C; case 0x801EA494u: goto L_801EA494; case 0x801EA4ACu: goto L_801EA4AC; case 0x801EA4C4u: goto L_801EA4C4; case 0x801EA4DCu: goto L_801EA4DC; case 0x801EA4F4u: goto L_801EA4F4; case 0x801EA50Cu: goto L_801EA50C; case 0x801EA524u: goto L_801EA524; case 0x801EA53Cu: goto L_801EA53C; case 0x801EA554u: goto L_801EA554; case 0x801EA56Cu: goto L_801EA56C; case 0x801EA584u: goto L_801EA584; case 0x801EA59Cu: goto L_801EA59C; case 0x801EA5B4u: goto L_801EA5B4; case 0x801EA5CCu: goto L_801EA5CC; case 0x801EA5E4u: goto L_801EA5E4; case 0x801EA5FCu: goto L_801EA5FC; case 0x801EA614u: goto L_801EA614; case 0x801EA62Cu: goto L_801EA62C; case 0x801EA644u: goto L_801EA644; case 0x801EA65Cu: goto L_801EA65C; default: break; } dispatch(c,c->ctr); return; } // 801EA464
L_801EA468:;
  c->r[4]=0u+0x803D0000u; // 801EA468
  c->r[5]=0u+0xFFFFFFECu; // 801EA46C
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA470
  c->lr=0x801EA478u; f_801EA33C(c); // 801EA474
  goto L_801EA77C; // 801EA478
L_801EA47C:;
  c->r[4]=0u+0x803D0000u; // 801EA47C
  c->r[5]=0u+0xFFFFFFF0u; // 801EA480
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA484
  c->r[4]=c->r[4]+0x0000002Eu; // 801EA488
  c->lr=0x801EA490u; f_801EA33C(c); // 801EA48C
  goto L_801EA77C; // 801EA490
L_801EA494:;
  c->r[4]=0u+0x803D0000u; // 801EA494
  c->r[5]=0u+0xFFFFFFF6u; // 801EA498
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA49C
  c->r[4]=c->r[4]+0x00000055u; // 801EA4A0
  c->lr=0x801EA4A8u; f_801EA33C(c); // 801EA4A4
  goto L_801EA77C; // 801EA4A8
L_801EA4AC:;
  c->r[4]=0u+0x803D0000u; // 801EA4AC
  c->r[5]=0u+0xFFFFFFFBu; // 801EA4B0
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA4B4
  c->r[4]=c->r[4]+0x0000006Du; // 801EA4B8
  c->lr=0x801EA4C0u; f_801EA33C(c); // 801EA4BC
  goto L_801EA77C; // 801EA4C0
L_801EA4C4:;
  c->r[4]=0u+0x803D0000u; // 801EA4C4
  c->r[5]=0u+0xFFFFFFFDu; // 801EA4C8
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA4CC
  c->r[4]=c->r[4]+0x0000007Au; // 801EA4D0
  c->lr=0x801EA4D8u; f_801EA33C(c); // 801EA4D4
  goto L_801EA77C; // 801EA4D8
L_801EA4DC:;
  c->r[4]=0u+0x803D0000u; // 801EA4DC
  c->r[5]=0u+0xFFFFFFFDu; // 801EA4E0
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA4E4
  c->r[4]=c->r[4]+0x00000081u; // 801EA4E8
  c->lr=0x801EA4F0u; f_801EA33C(c); // 801EA4EC
  goto L_801EA77C; // 801EA4F0
L_801EA4F4:;
  c->r[4]=0u+0x803D0000u; // 801EA4F4
  c->r[5]=0u+0xFFFFFFFEu; // 801EA4F8
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA4FC
  c->r[4]=c->r[4]+0x00000087u; // 801EA500
  c->lr=0x801EA508u; f_801EA33C(c); // 801EA504
  goto L_801EA77C; // 801EA508
L_801EA50C:;
  c->r[4]=0u+0x803D0000u; // 801EA50C
  c->r[5]=0u+0xFFFFFFFEu; // 801EA510
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA514
  c->r[4]=c->r[4]+0x0000008Du; // 801EA518
  c->lr=0x801EA520u; f_801EA33C(c); // 801EA51C
  goto L_801EA77C; // 801EA520
L_801EA524:;
  c->r[4]=0u+0x803D0000u; // 801EA524
  c->r[5]=0u+0xFFFFFFFEu; // 801EA528
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA52C
  c->r[4]=c->r[4]+0x00000092u; // 801EA530
  c->lr=0x801EA538u; f_801EA33C(c); // 801EA534
  goto L_801EA77C; // 801EA538
L_801EA53C:;
  c->r[4]=0u+0x803D0000u; // 801EA53C
  c->r[5]=0u+0xFFFFFFFFu; // 801EA540
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA544
  c->r[4]=c->r[4]+0x00000096u; // 801EA548
  c->lr=0x801EA550u; f_801EA33C(c); // 801EA54C
  goto L_801EA77C; // 801EA550
L_801EA554:;
  c->r[4]=0u+0x803D0000u; // 801EA554
  c->r[5]=0u+0xFFFFFFFFu; // 801EA558
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA55C
  c->r[4]=c->r[4]+0x0000009Au; // 801EA560
  c->lr=0x801EA568u; f_801EA33C(c); // 801EA564
  goto L_801EA77C; // 801EA568
L_801EA56C:;
  c->r[4]=0u+0x803D0000u; // 801EA56C
  c->r[5]=0u+0xFFFFFFFFu; // 801EA570
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA574
  c->r[4]=c->r[4]+0x0000009Du; // 801EA578
  c->lr=0x801EA580u; f_801EA33C(c); // 801EA57C
  goto L_801EA77C; // 801EA580
L_801EA584:;
  c->r[4]=0u+0x803D0000u; // 801EA584
  c->r[5]=0u+0x00000000u; // 801EA588
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA58C
  c->r[4]=c->r[4]+0x0000009Fu; // 801EA590
  c->lr=0x801EA598u; f_801EA33C(c); // 801EA594
  goto L_801EA77C; // 801EA598
L_801EA59C:;
  c->r[4]=0u+0x803D0000u; // 801EA59C
  c->r[5]=0u+0x00000000u; // 801EA5A0
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA5A4
  c->r[4]=c->r[4]+0x000000A1u; // 801EA5A8
  c->lr=0x801EA5B0u; f_801EA33C(c); // 801EA5AC
  goto L_801EA77C; // 801EA5B0
L_801EA5B4:;
  c->r[4]=0u+0x803D0000u; // 801EA5B4
  c->r[5]=0u+0x00000000u; // 801EA5B8
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA5BC
  c->r[4]=c->r[4]+0x000000A3u; // 801EA5C0
  c->lr=0x801EA5C8u; f_801EA33C(c); // 801EA5C4
  goto L_801EA77C; // 801EA5C8
L_801EA5CC:;
  c->r[4]=0u+0x803D0000u; // 801EA5CC
  c->r[5]=0u+0x00000000u; // 801EA5D0
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA5D4
  c->r[4]=c->r[4]+0x000000A5u; // 801EA5D8
  c->lr=0x801EA5E0u; f_801EA33C(c); // 801EA5DC
  goto L_801EA77C; // 801EA5E0
L_801EA5E4:;
  c->r[4]=0u+0x803D0000u; // 801EA5E4
  c->r[5]=0u+0x00000001u; // 801EA5E8
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA5EC
  c->r[4]=c->r[4]+0x000000A7u; // 801EA5F0
  c->lr=0x801EA5F8u; f_801EA33C(c); // 801EA5F4
  goto L_801EA77C; // 801EA5F8
L_801EA5FC:;
  c->r[4]=0u+0x803D0000u; // 801EA5FC
  c->r[5]=0u+0x00000001u; // 801EA600
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA604
  c->r[4]=c->r[4]+0x000000AAu; // 801EA608
  c->lr=0x801EA610u; f_801EA33C(c); // 801EA60C
  goto L_801EA77C; // 801EA610
L_801EA614:;
  c->r[4]=0u+0x803D0000u; // 801EA614
  c->r[5]=0u+0x00000001u; // 801EA618
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA61C
  c->r[4]=c->r[4]+0x000000ADu; // 801EA620
  c->lr=0x801EA628u; f_801EA33C(c); // 801EA624
  goto L_801EA77C; // 801EA628
L_801EA62C:;
  c->r[4]=0u+0x803D0000u; // 801EA62C
  c->r[5]=0u+0x00000002u; // 801EA630
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA634
  c->r[4]=c->r[4]+0x000000B0u; // 801EA638
  c->lr=0x801EA640u; f_801EA33C(c); // 801EA63C
  goto L_801EA77C; // 801EA640
L_801EA644:;
  c->r[4]=0u+0x803D0000u; // 801EA644
  c->r[5]=0u+0x00000002u; // 801EA648
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA64C
  c->r[4]=c->r[4]+0x000000B4u; // 801EA650
  c->lr=0x801EA658u; f_801EA33C(c); // 801EA654
  goto L_801EA77C; // 801EA658
L_801EA65C:;
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801EA65C
  c->r[3]=c->r[1]+0x00000034u; // 801EA660
  c->r[0]=c->r[0]+c->r[4]; // 801EA664
  c->r[4]=sraw(c,c->r[0],1); // 801EA668
  c->lr=0x801EA670u; f_801EA428(c); // 801EA66C
  c->r[4]=c->r[1]+0x00000034u; // 801EA670
  c->r[3]=c->r[31]|c->r[31]; // 801EA674
  c->r[5]=c->r[4]|c->r[4]; // 801EA678
  c->lr=0x801EA680u; f_801EA0B4(c); // 801EA67C
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801EA680
  if (crb(c,2)) { goto L_801EA77C; } // 801EA684
  c->r[3]=R16(c->r[31]+0x00000000u); // 801EA688
  cmps(c,0,(int32_t)c->r[30],0); // 801EA68C
  c->r[0]=R16(c->r[31]+0x00000002u); // 801EA690
  W16(c->r[1]+0x00000008u,c->r[3]); // 801EA694
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801EA698
  c->r[3]=R16(c->r[31]+0x00000004u); // 801EA69C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801EA6A0
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 801EA6A4
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801EA6A8
  c->r[3]=R16(c->r[31]+0x00000008u); // 801EA6AC
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801EA6B0
  W16(c->r[1]+0x00000010u,c->r[3]); // 801EA6B4
  W16(c->r[1]+0x00000012u,c->r[0]); // 801EA6B8
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 801EA6BC
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801EA6C0
  W16(c->r[1]+0x00000014u,c->r[3]); // 801EA6C4
  W16(c->r[1]+0x00000016u,c->r[0]); // 801EA6C8
  c->r[3]=R16(c->r[31]+0x00000010u); // 801EA6CC
  c->r[0]=R16(c->r[31]+0x00000012u); // 801EA6D0
  W16(c->r[1]+0x00000018u,c->r[3]); // 801EA6D4
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801EA6D8
  c->r[3]=R16(c->r[31]+0x00000014u); // 801EA6DC
  c->r[0]=R16(c->r[31]+0x00000016u); // 801EA6E0
  W16(c->r[1]+0x0000001Cu,c->r[3]); // 801EA6E4
  W16(c->r[1]+0x0000001Eu,c->r[0]); // 801EA6E8
  c->r[3]=R16(c->r[31]+0x00000018u); // 801EA6EC
  c->r[0]=R16(c->r[31]+0x0000001Au); // 801EA6F0
  W16(c->r[1]+0x00000020u,c->r[3]); // 801EA6F4
  W16(c->r[1]+0x00000022u,c->r[0]); // 801EA6F8
  c->r[3]=R16(c->r[31]+0x0000001Cu); // 801EA6FC
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 801EA700
  W16(c->r[1]+0x00000024u,c->r[3]); // 801EA704
  W16(c->r[1]+0x00000026u,c->r[0]); // 801EA708
  c->r[3]=R16(c->r[31]+0x00000020u); // 801EA70C
  c->r[0]=R16(c->r[31]+0x00000022u); // 801EA710
  W16(c->r[1]+0x00000028u,c->r[3]); // 801EA714
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801EA718
  c->r[3]=R16(c->r[31]+0x00000024u); // 801EA71C
  c->r[0]=R16(c->r[31]+0x00000026u); // 801EA720
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801EA724
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801EA728
  c->r[0]=R16(c->r[31]+0x00000028u); // 801EA72C
  W16(c->r[1]+0x00000030u,c->r[0]); // 801EA730
  if (!crb(c,1)) { goto L_801EA754; } // 801EA734
  c->r[4]=0u+0x803D0000u; // 801EA738
  c->r[3]=c->r[1]+0x00000034u; // 801EA73C
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA740
  c->r[5]=0u+0x00000000u; // 801EA744
  c->r[4]=c->r[4]+0x000000A1u; // 801EA748
  c->lr=0x801EA750u; f_801EA33C(c); // 801EA74C
  goto L_801EA76C; // 801EA750
L_801EA754:;
  c->r[4]=0u+0x803D0000u; // 801EA754
  c->r[3]=c->r[1]+0x00000034u; // 801EA758
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EA75C
  c->r[5]=0u+0xFFFFFFFFu; // 801EA760
  c->r[4]=c->r[4]+0x0000009Du; // 801EA764
  c->lr=0x801EA76Cu; f_801EA33C(c); // 801EA768
L_801EA76C:;
  c->r[3]=c->r[31]|c->r[31]; // 801EA76C
  c->r[4]=c->r[1]+0x00000008u; // 801EA770
  c->r[5]=c->r[1]+0x00000034u; // 801EA774
  c->lr=0x801EA77Cu; f_801EA0B4(c); // 801EA778
L_801EA77C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801EA77C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801EA780
  c->r[30]=R32(c->r[1]+0x00000068u); // 801EA784
  c->lr=c->r[0]; // 801EA788
  c->r[1]=c->r[1]+0x00000070u; // 801EA78C
  return; // 801EA790
}

// __equals_dec
void f_801EA794(Ctx* __restrict c) {
  trace_call(0x801EA794u);
  c->r[5]=R8(c->r[3]+0x00000005u); // 801EA794
  cmps(c,0,(int32_t)c->r[5],0); // 801EA798
  if (!crb(c,2)) { goto L_801EA7B0; } // 801EA79C
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EA7A0
  c->r[0]=cntlz(c->r[0]); // 801EA7A4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EA7A8
  return; // 801EA7AC
L_801EA7B0:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EA7B0
  cmps(c,0,(int32_t)c->r[0],0); // 801EA7B4
  if (!crb(c,2)) { goto L_801EA7C8; } // 801EA7B8
  c->r[0]=cntlz(c->r[5]); // 801EA7BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EA7C0
  return; // 801EA7C4
L_801EA7C8:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EA7C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801EA7CC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801EA7D0
  if (!crb(c,2)) { goto L_801EA870; } // 801EA7D4
  c->r[7]=R8(c->r[3]+0x00000004u); // 801EA7D8
  c->r[0]=R8(c->r[4]+0x00000004u); // 801EA7DC
  c->r[9]=c->r[7]|c->r[7]; // 801EA7E0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801EA7E4
  if (!crb(c,1)) { goto L_801EA7F0; } // 801EA7E8
  c->r[9]=c->r[0]|c->r[0]; // 801EA7EC
L_801EA7F0:;
  c->r[8]=0u+0x00000000u; // 801EA7F0
  c->ctr=c->r[9]; // 801EA7F4
  cmps(c,0,(int32_t)c->r[9],0); // 801EA7F8
  if (!crb(c,1)) { goto L_801EA828; } // 801EA7FC
L_801EA800:;
  c->r[6]=c->r[3]+c->r[8]; // 801EA800
  c->r[5]=c->r[4]+c->r[8]; // 801EA804
  c->r[6]=R8(c->r[6]+0x00000005u); // 801EA808
  c->r[0]=R8(c->r[5]+0x00000005u); // 801EA80C
  cmpu(c,0,c->r[6],c->r[0]); // 801EA810
  if (crb(c,2)) { goto L_801EA820; } // 801EA814
  c->r[3]=0u+0x00000000u; // 801EA818
  return; // 801EA81C
L_801EA820:;
  c->r[8]=c->r[8]+0x00000001u; // 801EA820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA800; } // 801EA824
L_801EA828:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801EA828
  if (!crb(c,2)) { goto L_801EA834; } // 801EA82C
  c->r[3]=c->r[4]|c->r[4]; // 801EA830
L_801EA834:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801EA834
  c->r[0]=c->r[4]-c->r[8]; // 801EA838
  c->ctr=c->r[0]; // 801EA83C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 801EA840
  if (!crb(c,0)) { goto L_801EA868; } // 801EA844
L_801EA848:;
  c->r[4]=c->r[3]+c->r[8]; // 801EA848
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EA84C
  cmps(c,0,(int32_t)c->r[0],0); // 801EA850
  if (crb(c,2)) { goto L_801EA860; } // 801EA854
  c->r[3]=0u+0x00000000u; // 801EA858
  return; // 801EA85C
L_801EA860:;
  c->r[8]=c->r[8]+0x00000001u; // 801EA860
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA848; } // 801EA864
L_801EA868:;
  c->r[3]=0u+0x00000001u; // 801EA868
  return; // 801EA86C
L_801EA870:;
  c->r[3]=0u+0x00000000u; // 801EA870
  return; // 801EA874
}

// __less_dec
void f_801EA878(Ctx* __restrict c) {
  trace_call(0x801EA878u);
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EA878
  cmps(c,0,(int32_t)c->r[0],0); // 801EA87C
  if (!crb(c,2)) { goto L_801EA898; } // 801EA880
  c->r[3]=R8(c->r[4]+0x00000005u); // 801EA884
  c->r[0]=0u-c->r[3]; // 801EA888
  c->r[0]=c->r[0]|c->r[3]; // 801EA88C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EA890
  return; // 801EA894
L_801EA898:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 801EA898
  cmps(c,0,(int32_t)c->r[0],0); // 801EA89C
  if (!crb(c,2)) { goto L_801EA8AC; } // 801EA8A0
  c->r[3]=0u+0x00000000u; // 801EA8A4
  return; // 801EA8A8
L_801EA8AC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801EA8AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EA8B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801EA8B4
  if (!crb(c,2)) { goto L_801EA960; } // 801EA8B8
  c->r[7]=R8(c->r[3]+0x00000004u); // 801EA8BC
  c->r[0]=R8(c->r[4]+0x00000004u); // 801EA8C0
  c->r[9]=c->r[7]|c->r[7]; // 801EA8C4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801EA8C8
  if (!crb(c,1)) { goto L_801EA8D4; } // 801EA8CC
  c->r[9]=c->r[0]|c->r[0]; // 801EA8D0
L_801EA8D4:;
  c->r[8]=0u+0x00000000u; // 801EA8D4
  c->ctr=c->r[9]; // 801EA8D8
  cmps(c,0,(int32_t)c->r[9],0); // 801EA8DC
  if (!crb(c,1)) { goto L_801EA91C; } // 801EA8E0
L_801EA8E4:;
  c->r[6]=c->r[4]+c->r[8]; // 801EA8E4
  c->r[5]=c->r[3]+c->r[8]; // 801EA8E8
  c->r[6]=R8(c->r[6]+0x00000005u); // 801EA8EC
  c->r[0]=R8(c->r[5]+0x00000005u); // 801EA8F0
  cmpu(c,0,c->r[0],c->r[6]); // 801EA8F4
  if (!crb(c,0)) { goto L_801EA904; } // 801EA8F8
  c->r[3]=0u+0x00000001u; // 801EA8FC
  return; // 801EA900
L_801EA904:;
  cmpu(c,0,c->r[6],c->r[0]); // 801EA904
  if (!crb(c,0)) { goto L_801EA914; } // 801EA908
  c->r[3]=0u+0x00000000u; // 801EA90C
  return; // 801EA910
L_801EA914:;
  c->r[8]=c->r[8]+0x00000001u; // 801EA914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA8E4; } // 801EA918
L_801EA91C:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801EA91C
  if (!crb(c,2)) { goto L_801EA958; } // 801EA920
  c->r[3]=R8(c->r[4]+0x00000004u); // 801EA924
  c->r[0]=c->r[3]-c->r[8]; // 801EA928
  c->ctr=c->r[0]; // 801EA92C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 801EA930
  if (!crb(c,0)) { goto L_801EA958; } // 801EA934
L_801EA938:;
  c->r[3]=c->r[4]+c->r[8]; // 801EA938
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EA93C
  cmps(c,0,(int32_t)c->r[0],0); // 801EA940
  if (crb(c,2)) { goto L_801EA950; } // 801EA944
  c->r[3]=0u+0x00000001u; // 801EA948
  return; // 801EA94C
L_801EA950:;
  c->r[8]=c->r[8]+0x00000001u; // 801EA950
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA938; } // 801EA954
L_801EA958:;
  c->r[3]=0u+0x00000000u; // 801EA958
  return; // 801EA95C
L_801EA960:;
  c->r[0]=c->r[5]^c->r[0]; // 801EA960
  c->r[3]=sraw(c,c->r[0],1); // 801EA964
  c->r[0]=c->r[0]&c->r[5]; // 801EA968
  c->r[0]=c->r[3]-c->r[0]; // 801EA96C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EA970
  return; // 801EA974
}

// __minus_dec
void f_801EA978(Ctx* __restrict c) {
  trace_call(0x801EA978u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA978
  c->r[12]=R16(c->r[4]+0x0000001Au); // 801EA97C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EA980
  c->r[19]=R16(c->r[4]+0x00000000u); // 801EA984
  c->r[20]=R16(c->r[4]+0x00000002u); // 801EA988
  c->r[21]=R16(c->r[4]+0x00000004u); // 801EA98C
  c->r[22]=R16(c->r[4]+0x00000006u); // 801EA990
  c->r[23]=R16(c->r[4]+0x00000008u); // 801EA994
  c->r[24]=R16(c->r[4]+0x0000000Au); // 801EA998
  c->r[25]=R16(c->r[4]+0x0000000Cu); // 801EA99C
  c->r[26]=R16(c->r[4]+0x0000000Eu); // 801EA9A0
  c->r[27]=R16(c->r[4]+0x00000010u); // 801EA9A4
  c->r[28]=R16(c->r[4]+0x00000012u); // 801EA9A8
  c->r[29]=R16(c->r[4]+0x00000014u); // 801EA9AC
  c->r[30]=R16(c->r[4]+0x00000016u); // 801EA9B0
  c->r[31]=R16(c->r[4]+0x00000018u); // 801EA9B4
  c->r[11]=R16(c->r[4]+0x0000001Cu); // 801EA9B8
  c->r[10]=R16(c->r[4]+0x0000001Eu); // 801EA9BC
  c->r[9]=R16(c->r[4]+0x00000020u); // 801EA9C0
  c->r[8]=R16(c->r[4]+0x00000022u); // 801EA9C4
  c->r[7]=R16(c->r[4]+0x00000024u); // 801EA9C8
  c->r[6]=R16(c->r[4]+0x00000026u); // 801EA9CC
  c->r[0]=R16(c->r[4]+0x00000028u); // 801EA9D0
  W16(c->r[3]+0x00000000u,c->r[19]); // 801EA9D4
  W16(c->r[3]+0x00000002u,c->r[20]); // 801EA9D8
  W16(c->r[3]+0x00000004u,c->r[21]); // 801EA9DC
  W16(c->r[3]+0x00000006u,c->r[22]); // 801EA9E0
  W16(c->r[3]+0x00000008u,c->r[23]); // 801EA9E4
  W16(c->r[3]+0x0000000Au,c->r[24]); // 801EA9E8
  W16(c->r[3]+0x0000000Cu,c->r[25]); // 801EA9EC
  W16(c->r[3]+0x0000000Eu,c->r[26]); // 801EA9F0
  W16(c->r[3]+0x00000010u,c->r[27]); // 801EA9F4
  W16(c->r[3]+0x00000012u,c->r[28]); // 801EA9F8
  W16(c->r[3]+0x00000014u,c->r[29]); // 801EA9FC
  W16(c->r[3]+0x00000016u,c->r[30]); // 801EAA00
  W16(c->r[3]+0x00000018u,c->r[31]); // 801EAA04
  W16(c->r[3]+0x0000001Au,c->r[12]); // 801EAA08
  W16(c->r[3]+0x0000001Cu,c->r[11]); // 801EAA0C
  W16(c->r[3]+0x0000001Eu,c->r[10]); // 801EAA10
  W16(c->r[3]+0x00000020u,c->r[9]); // 801EAA14
  W16(c->r[3]+0x00000022u,c->r[8]); // 801EAA18
  W16(c->r[3]+0x00000024u,c->r[7]); // 801EAA1C
  W16(c->r[3]+0x00000026u,c->r[6]); // 801EAA20
  W16(c->r[3]+0x00000028u,c->r[0]); // 801EAA24
  c->r[0]=R8(c->r[5]+0x00000005u); // 801EAA28
  cmps(c,0,(int32_t)c->r[0],0); // 801EAA2C
  if (crb(c,2)) { goto L_801EAE88; } // 801EAA30
  c->r[8]=R8(c->r[3]+0x00000004u); // 801EAA34
  c->r[0]=R8(c->r[5]+0x00000004u); // 801EAA38
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801EAA3C
  if (!crb(c,0)) { goto L_801EAA48; } // 801EAA40
  c->r[8]=c->r[0]|c->r[0]; // 801EAA44
L_801EAA48:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 801EAA48
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EAA4C
  c->r[0]=c->r[0]-c->r[4]; // 801EAA50
  c->r[8]=c->r[8]+c->r[0]; // 801EAA54
  cmps(c,0,(int32_t)c->r[8],36); // 801EAA58
  if (!crb(c,1)) { goto L_801EAA64; } // 801EAA5C
  c->r[8]=0u+0x00000024u; // 801EAA60
L_801EAA64:;
  c->r[7]=0u+0x00000000u; // 801EAA64
  goto L_801EAA80; // 801EAA68
L_801EAA6C:;
  c->r[6]=R8(c->r[3]+0x00000004u); // 801EAA6C
  c->r[4]=c->r[3]+c->r[6]; // 801EAA70
  c->r[6]=c->r[6]+0x00000001u; // 801EAA74
  W8(c->r[4]+0x00000005u,c->r[7]); // 801EAA78
  W8(c->r[3]+0x00000004u,c->r[6]); // 801EAA7C
L_801EAA80:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801EAA80
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 801EAA84
  if (crb(c,0)) { IRQCHK(c); goto L_801EAA6C; } // 801EAA88
  c->r[7]=R8(c->r[5]+0x00000004u); // 801EAA8C
  c->r[4]=c->r[3]+0x00000005u; // 801EAA90
  c->r[6]=c->r[4]+c->r[8]; // 801EAA94
  c->r[7]=c->r[7]+c->r[0]; // 801EAA98
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 801EAA9C
  if (!crb(c,0)) { goto L_801EAAA8; } // 801EAAA0
  c->r[6]=c->r[4]+c->r[7]; // 801EAAA4
L_801EAAA8:;
  c->r[7]=c->r[6]-c->r[4]; // 801EAAA8
  c->r[9]=c->r[5]+0x00000005u; // 801EAAAC
  c->r[7]=c->r[7]-c->r[0]; // 801EAAB0
  c->r[10]=c->r[9]+c->r[7]; // 801EAAB4
  c->r[11]=c->r[10]|c->r[10]; // 801EAAB8
  goto L_801EABE0; // 801EAABC
L_801EAAC0:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[8]=R8(ea); c->r[6]=ea;} // 801EAAC0
  {uint32_t ea=c->r[10]+0xFFFFFFFFu; c->r[7]=R8(ea); c->r[10]=ea;} // 801EAAC4
  cmpu(c,0,c->r[8],c->r[7]); // 801EAAC8
  if (!crb(c,0)) { goto L_801EABD0; } // 801EAACC
  c->r[12]=c->r[6]+0xFFFFFFFFu; // 801EAAD0
  goto L_801EAADC; // 801EAAD4
L_801EAAD8:;
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801EAAD8
L_801EAADC:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 801EAADC
  cmps(c,0,(int32_t)c->r[7],0); // 801EAAE0
  if (crb(c,2)) { IRQCHK(c); goto L_801EAAD8; } // 801EAAE4
  cmpu(c,0,c->r[12],c->r[6]); // 801EAAE8
  c->r[8]=c->r[6]-c->r[12]; // 801EAAEC
  if (crb(c,2)) { goto L_801EABD0; } // 801EAAF0
  c->r[7]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 801EAAF4
  c->ctr=c->r[7]; // 801EAAF8
  if (crb(c,2)) { goto L_801EABB0; } // 801EAAFC
L_801EAB00:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 801EAB00
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB04
  W8(c->r[12]+0x00000000u,c->r[7]); // 801EAB08
  c->r[7]=R8(c->r[12]+0x00000001u); // 801EAB0C
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB10
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB14
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB18
  W8(c->r[12]+0x00000001u,c->r[7]); // 801EAB1C
  c->r[7]=R8(c->r[12]+0x00000002u); // 801EAB20
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB24
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB28
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB2C
  W8(c->r[12]+0x00000002u,c->r[7]); // 801EAB30
  c->r[7]=R8(c->r[12]+0x00000003u); // 801EAB34
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB38
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB3C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB40
  W8(c->r[12]+0x00000003u,c->r[7]); // 801EAB44
  c->r[7]=R8(c->r[12]+0x00000004u); // 801EAB48
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB4C
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB50
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB54
  W8(c->r[12]+0x00000004u,c->r[7]); // 801EAB58
  c->r[7]=R8(c->r[12]+0x00000005u); // 801EAB5C
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB60
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB64
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB68
  W8(c->r[12]+0x00000005u,c->r[7]); // 801EAB6C
  c->r[7]=R8(c->r[12]+0x00000006u); // 801EAB70
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB74
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB78
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB7C
  W8(c->r[12]+0x00000006u,c->r[7]); // 801EAB80
  c->r[7]=R8(c->r[12]+0x00000007u); // 801EAB84
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB88
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801EAB8C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EAB90
  W8(c->r[12]+0x00000007u,c->r[7]); // 801EAB94
  c->r[7]=R8(c->r[12]+0x00000008u); // 801EAB98
  c->r[7]=c->r[7]+0x0000000Au; // 801EAB9C
  {uint32_t ea=c->r[12]+0x00000008u; W8(ea,c->r[7]); c->r[12]=ea;} // 801EABA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAB00; } // 801EABA4
  c->r[8]=c->r[8]&0x00000007u; cr0(c,c->r[8]); // 801EABA8
  if (crb(c,2)) { goto L_801EABD0; } // 801EABAC
L_801EABB0:;
  c->ctr=c->r[8]; // 801EABB0
L_801EABB4:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 801EABB4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801EABB8
  W8(c->r[12]+0x00000000u,c->r[7]); // 801EABBC
  c->r[7]=R8(c->r[12]+0x00000001u); // 801EABC0
  c->r[7]=c->r[7]+0x0000000Au; // 801EABC4
  {uint32_t ea=c->r[12]+0x00000001u; W8(ea,c->r[7]); c->r[12]=ea;} // 801EABC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EABB4; } // 801EABCC
L_801EABD0:;
  c->r[8]=R8(c->r[10]+0x00000000u); // 801EABD0
  c->r[7]=R8(c->r[6]+0x00000000u); // 801EABD4
  c->r[7]=c->r[7]-c->r[8]; // 801EABD8
  W8(c->r[6]+0x00000000u,c->r[7]); // 801EABDC
L_801EABE0:;
  cmpu(c,0,c->r[6],c->r[4]); // 801EABE0
  if (!crb(c,1)) { goto L_801EABF0; } // 801EABE4
  cmpu(c,0,c->r[10],c->r[9]); // 801EABE8
  if (crb(c,1)) { IRQCHK(c); goto L_801EAAC0; } // 801EABEC
L_801EABF0:;
  c->r[8]=R8(c->r[5]+0x00000004u); // 801EABF0
  c->r[9]=c->r[11]-c->r[9]; // 801EABF4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 801EABF8
  if (!crb(c,0)) { goto L_801EAD84; } // 801EABFC
  c->r[7]=R8(c->r[11]+0x00000000u); // 801EAC00
  c->r[10]=0u+0x00000000u; // 801EAC04
  cmpu(c,0,c->r[7],0x00000005u); // 801EAC08
  if (!crb(c,0)) { goto L_801EAC18; } // 801EAC0C
  c->r[10]=0u+0x00000001u; // 801EAC10
  goto L_801EAC64; // 801EAC14
L_801EAC18:;
  if (!crb(c,2)) { goto L_801EAC64; } // 801EAC18
  c->r[5]=c->r[5]+c->r[8]; // 801EAC1C
  c->r[6]=c->r[11]+0x00000001u; // 801EAC20
  c->r[7]=c->r[5]+0x00000005u; // 801EAC24
  c->r[5]=c->r[7]-c->r[6]; // 801EAC28
  c->ctr=c->r[5]; // 801EAC2C
  cmpu(c,0,c->r[6],c->r[7]); // 801EAC30
  if (!crb(c,0)) { goto L_801EAC4C; } // 801EAC34
L_801EAC38:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801EAC38
  cmps(c,0,(int32_t)c->r[5],0); // 801EAC3C
  if (!crb(c,2)) { goto L_801EAD84; } // 801EAC40
  c->r[6]=c->r[6]+0x00000001u; // 801EAC44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAC38; } // 801EAC48
L_801EAC4C:;
  c->r[5]=c->r[4]+c->r[9]; // 801EAC4C
  c->r[6]=c->r[0]+c->r[5]; // 801EAC50
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801EAC54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EAC58
  if (crb(c,2)) { goto L_801EAC64; } // 801EAC5C
  c->r[10]=0u+0x00000001u; // 801EAC60
L_801EAC64:;
  cmps(c,0,(int32_t)c->r[10],0); // 801EAC64
  if (crb(c,2)) { goto L_801EAD84; } // 801EAC68
  c->r[0]=R8(c->r[6]+0x00000000u); // 801EAC6C
  cmpu(c,0,c->r[0],0x00000001u); // 801EAC70
  if (!crb(c,0)) { goto L_801EAD78; } // 801EAC74
  c->r[8]=c->r[6]+0xFFFFFFFFu; // 801EAC78
  goto L_801EAC84; // 801EAC7C
L_801EAC80:;
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 801EAC80
L_801EAC84:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801EAC84
  cmps(c,0,(int32_t)c->r[0],0); // 801EAC88
  if (crb(c,2)) { IRQCHK(c); goto L_801EAC80; } // 801EAC8C
  cmpu(c,0,c->r[8],c->r[6]); // 801EAC90
  c->r[5]=c->r[6]-c->r[8]; // 801EAC94
  if (crb(c,2)) { goto L_801EAD78; } // 801EAC98
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801EAC9C
  c->ctr=c->r[0]; // 801EACA0
  if (crb(c,2)) { goto L_801EAD58; } // 801EACA4
L_801EACA8:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 801EACA8
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EACAC
  W8(c->r[8]+0x00000000u,c->r[0]); // 801EACB0
  c->r[7]=R8(c->r[8]+0x00000001u); // 801EACB4
  c->r[0]=c->r[7]+0x0000000Au; // 801EACB8
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EACBC
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EACC0
  W8(c->r[8]+0x00000001u,c->r[0]); // 801EACC4
  c->r[7]=R8(c->r[8]+0x00000002u); // 801EACC8
  c->r[0]=c->r[7]+0x0000000Au; // 801EACCC
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EACD0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EACD4
  W8(c->r[8]+0x00000002u,c->r[0]); // 801EACD8
  c->r[7]=R8(c->r[8]+0x00000003u); // 801EACDC
  c->r[0]=c->r[7]+0x0000000Au; // 801EACE0
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EACE4
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EACE8
  W8(c->r[8]+0x00000003u,c->r[0]); // 801EACEC
  c->r[7]=R8(c->r[8]+0x00000004u); // 801EACF0
  c->r[0]=c->r[7]+0x0000000Au; // 801EACF4
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EACF8
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EACFC
  W8(c->r[8]+0x00000004u,c->r[0]); // 801EAD00
  c->r[7]=R8(c->r[8]+0x00000005u); // 801EAD04
  c->r[0]=c->r[7]+0x0000000Au; // 801EAD08
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EAD0C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EAD10
  W8(c->r[8]+0x00000005u,c->r[0]); // 801EAD14
  c->r[7]=R8(c->r[8]+0x00000006u); // 801EAD18
  c->r[0]=c->r[7]+0x0000000Au; // 801EAD1C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EAD20
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EAD24
  W8(c->r[8]+0x00000006u,c->r[0]); // 801EAD28
  c->r[7]=R8(c->r[8]+0x00000007u); // 801EAD2C
  c->r[0]=c->r[7]+0x0000000Au; // 801EAD30
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801EAD34
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EAD38
  W8(c->r[8]+0x00000007u,c->r[0]); // 801EAD3C
  c->r[7]=R8(c->r[8]+0x00000008u); // 801EAD40
  c->r[0]=c->r[7]+0x0000000Au; // 801EAD44
  {uint32_t ea=c->r[8]+0x00000008u; W8(ea,c->r[0]); c->r[8]=ea;} // 801EAD48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EACA8; } // 801EAD4C
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801EAD50
  if (crb(c,2)) { goto L_801EAD78; } // 801EAD54
L_801EAD58:;
  c->ctr=c->r[5]; // 801EAD58
L_801EAD5C:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 801EAD5C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801EAD60
  W8(c->r[8]+0x00000000u,c->r[0]); // 801EAD64
  c->r[7]=R8(c->r[8]+0x00000001u); // 801EAD68
  c->r[0]=c->r[7]+0x0000000Au; // 801EAD6C
  {uint32_t ea=c->r[8]+0x00000001u; W8(ea,c->r[0]); c->r[8]=ea;} // 801EAD70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAD5C; } // 801EAD74
L_801EAD78:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801EAD78
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801EAD7C
  W8(c->r[6]+0x00000000u,c->r[0]); // 801EAD80
L_801EAD84:;
  c->r[7]=c->r[4]|c->r[4]; // 801EAD84
  goto L_801EAD90; // 801EAD88
L_801EAD8C:;
  c->r[7]=c->r[7]+0x00000001u; // 801EAD8C
L_801EAD90:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801EAD90
  cmps(c,0,(int32_t)c->r[0],0); // 801EAD94
  if (crb(c,2)) { IRQCHK(c); goto L_801EAD8C; } // 801EAD98
  cmpu(c,0,c->r[7],c->r[4]); // 801EAD9C
  if (!crb(c,1)) { goto L_801EAE50; } // 801EADA0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EADA4
  c->r[6]=c->r[7]-c->r[4]; // 801EADA8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EADAC
  c->r[8]=rotl(c->r[6],0)&0x000000FFu; // 801EADB0
  c->r[6]=c->r[4]+c->r[0]; // 801EADB4
  c->r[0]=c->r[5]-c->r[8]; // 801EADB8
  cmpu(c,0,c->r[7],c->r[6]); // 801EADBC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801EADC0
  c->r[5]=c->r[6]-c->r[7]; // 801EADC4
  if (!crb(c,0)) { goto L_801EAE44; } // 801EADC8
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801EADCC
  c->ctr=c->r[0]; // 801EADD0
  if (crb(c,2)) { goto L_801EAE2C; } // 801EADD4
L_801EADD8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801EADD8
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EADDC
  c->r[0]=R8(c->r[7]+0x00000001u); // 801EADE0
  W8(c->r[4]+0x00000001u,c->r[0]); // 801EADE4
  c->r[0]=R8(c->r[7]+0x00000002u); // 801EADE8
  W8(c->r[4]+0x00000002u,c->r[0]); // 801EADEC
  c->r[0]=R8(c->r[7]+0x00000003u); // 801EADF0
  W8(c->r[4]+0x00000003u,c->r[0]); // 801EADF4
  c->r[0]=R8(c->r[7]+0x00000004u); // 801EADF8
  W8(c->r[4]+0x00000004u,c->r[0]); // 801EADFC
  c->r[0]=R8(c->r[7]+0x00000005u); // 801EAE00
  W8(c->r[4]+0x00000005u,c->r[0]); // 801EAE04
  c->r[0]=R8(c->r[7]+0x00000006u); // 801EAE08
  W8(c->r[4]+0x00000006u,c->r[0]); // 801EAE0C
  c->r[0]=R8(c->r[7]+0x00000007u); // 801EAE10
  c->r[7]=c->r[7]+0x00000008u; // 801EAE14
  W8(c->r[4]+0x00000007u,c->r[0]); // 801EAE18
  c->r[4]=c->r[4]+0x00000008u; // 801EAE1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EADD8; } // 801EAE20
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801EAE24
  if (crb(c,2)) { goto L_801EAE44; } // 801EAE28
L_801EAE2C:;
  c->ctr=c->r[5]; // 801EAE2C
L_801EAE30:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801EAE30
  c->r[7]=c->r[7]+0x00000001u; // 801EAE34
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EAE38
  c->r[4]=c->r[4]+0x00000001u; // 801EAE3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAE30; } // 801EAE40
L_801EAE44:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EAE44
  c->r[0]=c->r[0]-c->r[8]; // 801EAE48
  W8(c->r[3]+0x00000004u,c->r[0]); // 801EAE4C
L_801EAE50:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EAE50
  c->r[4]=c->r[3]+0x00000005u; // 801EAE54
  c->r[5]=c->r[4]+c->r[0]; // 801EAE58
  c->r[0]=c->r[5]-c->r[4]; // 801EAE5C
  c->ctr=c->r[0]; // 801EAE60
  cmpu(c,0,c->r[5],c->r[4]); // 801EAE64
  if (!crb(c,1)) { goto L_801EAE7C; } // 801EAE68
L_801EAE6C:;
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 801EAE6C
  cmps(c,0,(int32_t)c->r[0],0); // 801EAE70
  if (!crb(c,2)) { goto L_801EAE7C; } // 801EAE74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAE6C; } // 801EAE78
L_801EAE7C:;
  c->r[4]=c->r[5]-c->r[4]; // 801EAE7C
  c->r[0]=c->r[4]+0x00000001u; // 801EAE80
  W8(c->r[3]+0x00000004u,c->r[0]); // 801EAE84
L_801EAE88:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EAE88
  c->r[1]=c->r[1]+0x00000040u; // 801EAE8C
  return; // 801EAE90
}

// __num2dec_internal
void f_801EAE94(Ctx* __restrict c) {
  trace_call(0x801EAE94u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAE94
  c->r[0]=c->lr; // 801EAE98
  W32(c->r[1]+0x00000094u,c->r[0]); // 801EAE9C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[31]);} // 801EAEA0
  c->f[31]=c->f[1]; // 801EAEA4
  W32(c->r[1]+0x00000084u,c->r[31]); // 801EAEA8
  W32(c->r[1]+0x00000080u,c->r[30]); // 801EAEAC
  c->r[30]=c->r[3]|c->r[3]; // 801EAEB0
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 801EAEB4
  c->lr=0x801EAEBCu; f_801ECDB8(c); // 801EAEB8
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[0]=RF64(ea);} // 801EAEBC
  c->r[0]=0u-c->r[3]; // 801EAEC0
  c->r[0]=c->r[0]|c->r[3]; // 801EAEC4
  fcmp(c,0,c->f[0],c->f[31]); // 801EAEC8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801EAECC
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801EAED0
  if (!crb(c,2)) { goto L_801EAEF4; } // 801EAED4
  c->r[3]=0u+0x00000000u; // 801EAED8
  c->r[0]=0u+0x00000001u; // 801EAEDC
  W8(c->r[30]+0x00000000u,c->r[31]); // 801EAEE0
  W16(c->r[30]+0x00000002u,c->r[3]); // 801EAEE4
  W8(c->r[30]+0x00000004u,c->r[0]); // 801EAEE8
  W8(c->r[30]+0x00000005u,c->r[3]); // 801EAEEC
  goto L_801EAFD8; // 801EAEF0
L_801EAEF4:;
  c->f[1]=c->f[31]; // 801EAEF4
  c->lr=0x801EAEFCu; f_801ECDD0(c); // 801EAEF8
  cmps(c,0,(int32_t)c->r[3],2); // 801EAEFC
  if (crb(c,1)) { goto L_801EAF38; } // 801EAF00
  c->r[3]=0u+0x00000000u; // 801EAF04
  c->r[0]=0u+0x00000001u; // 801EAF08
  c->f[1]=c->f[31]; // 801EAF0C
  W8(c->r[30]+0x00000000u,c->r[31]); // 801EAF10
  W16(c->r[30]+0x00000002u,c->r[3]); // 801EAF14
  W8(c->r[30]+0x00000004u,c->r[0]); // 801EAF18
  c->lr=0x801EAF20u; f_801ECDD0(c); // 801EAF1C
  cmps(c,0,(int32_t)c->r[3],1); // 801EAF20
  c->r[0]=0u+0x00000049u; // 801EAF24
  if (!crb(c,2)) { goto L_801EAF30; } // 801EAF28
  c->r[0]=0u+0x0000004Eu; // 801EAF2C
L_801EAF30:;
  W8(c->r[30]+0x00000005u,c->r[0]); // 801EAF30
  goto L_801EAFD8; // 801EAF34
L_801EAF38:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EAF38
  if (crb(c,2)) { goto L_801EAF44; } // 801EAF3C
  c->f[31]=-c->f[31]; // 801EAF40
L_801EAF44:;
  c->f[1]=c->f[31]; // 801EAF44
  c->r[3]=c->r[1]+0x00000008u; // 801EAF48
  c->lr=0x801EAF50u; f_801F7028(c); // 801EAF4C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 801EAF50
  c->f[31]=c->f[1]; // 801EAF54
  c->r[4]=R32(c->r[1]+0x00000014u); // 801EAF58
  c->r[3]=R32(c->r[1]+0x00000010u); // 801EAF5C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801EAF60
  cmps(c,0,(int32_t)c->r[4],0); // 801EAF64
  c->r[0]=c->r[0]&~c->r[4]; // 801EAF68
  c->r[3]=c->r[3]|0x00100000u; // 801EAF6C
  c->r[0]=cntlz(c->r[0]); // 801EAF70
  c->r[4]=addc(c,~c->r[0],0x00000020u,1); // 801EAF74
  if (!crb(c,2)) { goto L_801EAF90; } // 801EAF78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801EAF7C
  c->r[0]=c->r[0]&~c->r[3]; // 801EAF80
  c->r[0]=cntlz(c->r[0]); // 801EAF84
  c->r[3]=addc(c,~c->r[0],0x00000020u,1); // 801EAF88
  c->r[4]=c->r[3]+0x00000020u; // 801EAF8C
L_801EAF90:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801EAF90
  c->r[29]=addc(c,~c->r[4],0x00000035u,1); // 801EAF94
  c->r[3]=c->r[1]+0x00000018u; // 801EAF98
  c->r[4]=c->r[0]-c->r[29]; // 801EAF9C
  c->lr=0x801EAFA4u; f_801EA428(c); // 801EAFA0
  c->f[1]=c->f[31]; // 801EAFA4
  c->r[3]=c->r[29]|c->r[29]; // 801EAFA8
  c->lr=0x801EAFB0u; f_801F70B0(c); // 801EAFAC
  c->lr=0x801EAFB4u; f_801E8018(c); // 801EAFB0
  c->r[5]=c->r[3]|c->r[3]; // 801EAFB4
  c->r[6]=c->r[4]|c->r[4]; // 801EAFB8
  c->r[3]=c->r[1]+0x00000044u; // 801EAFBC
  c->lr=0x801EAFC4u; f_801E9FD8(c); // 801EAFC0
  c->r[3]=c->r[30]|c->r[30]; // 801EAFC4
  c->r[4]=c->r[1]+0x00000044u; // 801EAFC8
  c->r[5]=c->r[1]+0x00000018u; // 801EAFCC
  c->lr=0x801EAFD4u; f_801EA0B4(c); // 801EAFD0
  W8(c->r[30]+0x00000000u,c->r[31]); // 801EAFD4
L_801EAFD8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801EAFD8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[31]=RF64(ea);} // 801EAFDC
  c->r[31]=R32(c->r[1]+0x00000084u); // 801EAFE0
  c->r[30]=R32(c->r[1]+0x00000080u); // 801EAFE4
  c->r[29]=R32(c->r[1]+0x0000007Cu); // 801EAFE8
  c->lr=c->r[0]; // 801EAFEC
  c->r[1]=c->r[1]+0x00000090u; // 801EAFF0
  return; // 801EAFF4
}

// __num2dec
void f_801EAFF8(Ctx* __restrict c) {
  trace_call(0x801EAFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAFF8
  c->r[0]=c->lr; // 801EAFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB004
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801EB008
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB00C
  c->r[30]=c->r[4]|c->r[4]; // 801EB010
  c->r[3]=c->r[30]|c->r[30]; // 801EB014
  c->lr=0x801EB01Cu; f_801EAE94(c); // 801EB018
  c->r[0]=R8(c->r[30]+0x00000005u); // 801EB01C
  cmpu(c,0,c->r[0],0x00000009u); // 801EB020
  if (crb(c,1)) { goto L_801EB180; } // 801EB024
  cmps(c,0,(int32_t)c->r[31],36); // 801EB028
  if (!crb(c,1)) { goto L_801EB034; } // 801EB02C
  c->r[31]=0u+0x00000024u; // 801EB030
L_801EB034:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB034
  if (!crb(c,1)) { goto L_801EB120; } // 801EB038
  c->r[0]=R8(c->r[30]+0x00000004u); // 801EB03C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801EB040
  if (!crb(c,0)) { goto L_801EB120; } // 801EB044
  c->r[4]=c->r[30]+0x00000005u; // 801EB048
  c->r[0]=R8(c->r[4]+c->r[31]); // 801EB04C
  c->r[3]=c->r[4]+c->r[31]; // 801EB050
  cmpu(c,0,c->r[0],0x00000005u); // 801EB054
  if (!crb(c,1)) { goto L_801EB064; } // 801EB058
  c->r[4]=0u+0x00000001u; // 801EB05C
  goto L_801EB0C0; // 801EB060
L_801EB064:;
  if (!crb(c,0)) { goto L_801EB070; } // 801EB064
  c->r[4]=0u+0xFFFFFFFFu; // 801EB068
  goto L_801EB0C0; // 801EB06C
L_801EB070:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801EB070
  c->r[3]=c->r[3]+0x00000001u; // 801EB074
  c->r[4]=c->r[4]+c->r[0]; // 801EB078
  c->r[0]=c->r[4]-c->r[3]; // 801EB07C
  c->ctr=c->r[0]; // 801EB080
  cmpu(c,0,c->r[3],c->r[4]); // 801EB084
  if (!crb(c,0)) { goto L_801EB0A8; } // 801EB088
L_801EB08C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EB08C
  cmps(c,0,(int32_t)c->r[0],0); // 801EB090
  if (crb(c,2)) { goto L_801EB0A0; } // 801EB094
  c->r[4]=0u+0x00000001u; // 801EB098
  goto L_801EB0C0; // 801EB09C
L_801EB0A0:;
  c->r[3]=c->r[3]+0x00000001u; // 801EB0A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB08C; } // 801EB0A4
L_801EB0A8:;
  c->r[3]=c->r[31]+c->r[30]; // 801EB0A8
  c->r[4]=0u+0xFFFFFFFFu; // 801EB0AC
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EB0B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EB0B4
  if (crb(c,2)) { goto L_801EB0C0; } // 801EB0B8
  c->r[4]=0u+0x00000001u; // 801EB0BC
L_801EB0C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EB0C0
  W8(c->r[30]+0x00000004u,c->r[31]); // 801EB0C4
  if (crb(c,0)) { goto L_801EB120; } // 801EB0C8
  c->r[4]=c->r[30]+0x00000005u; // 801EB0CC
  c->r[0]=0u+0x00000000u; // 801EB0D0
  c->r[5]=c->r[4]+c->r[31]; // 801EB0D4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EB0D8
L_801EB0DC:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 801EB0DC
  cmpu(c,0,c->r[3],0x00000009u); // 801EB0E0
  if (!crb(c,0)) { goto L_801EB0F4; } // 801EB0E4
  c->r[0]=c->r[3]+0x00000001u; // 801EB0E8
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EB0EC
  goto L_801EB120; // 801EB0F0
L_801EB0F4:;
  cmpu(c,0,c->r[5],c->r[4]); // 801EB0F4
  if (!crb(c,2)) { goto L_801EB114; } // 801EB0F8
  c->r[0]=0u+0x00000001u; // 801EB0FC
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EB100
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801EB104
  c->r[0]=c->r[3]+0x00000001u; // 801EB108
  W16(c->r[30]+0x00000002u,c->r[0]); // 801EB10C
  goto L_801EB120; // 801EB110
L_801EB114:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801EB114
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801EB118
  IRQCHK(c); goto L_801EB0DC; // 801EB11C
L_801EB120:;
  c->r[5]=0u+0x00000000u; // 801EB120
  goto L_801EB13C; // 801EB124
L_801EB128:;
  c->r[4]=R8(c->r[30]+0x00000004u); // 801EB128
  c->r[3]=c->r[30]+c->r[4]; // 801EB12C
  c->r[0]=c->r[4]+0x00000001u; // 801EB130
  W8(c->r[3]+0x00000005u,c->r[5]); // 801EB134
  W8(c->r[30]+0x00000004u,c->r[0]); // 801EB138
L_801EB13C:;
  c->r[3]=R8(c->r[30]+0x00000004u); // 801EB13C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 801EB140
  if (crb(c,0)) { IRQCHK(c); goto L_801EB128; } // 801EB144
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801EB148
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801EB14C
  c->r[5]=0u+0x00000000u; // 801EB150
  c->r[0]=c->r[0]-c->r[3]; // 801EB154
  W16(c->r[30]+0x00000002u,c->r[0]); // 801EB158
  goto L_801EB174; // 801EB15C
L_801EB160:;
  c->r[4]=c->r[30]+c->r[5]; // 801EB160
  c->r[5]=c->r[5]+0x00000001u; // 801EB164
  c->r[3]=R8(c->r[4]+0x00000005u); // 801EB168
  c->r[0]=c->r[3]+0x00000030u; // 801EB16C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801EB170
L_801EB174:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801EB174
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801EB178
  if (crb(c,0)) { IRQCHK(c); goto L_801EB160; } // 801EB17C
L_801EB180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB184
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB188
  c->lr=c->r[0]; // 801EB18C
  c->r[1]=c->r[1]+0x00000010u; // 801EB190
  return; // 801EB194
}

// __dec2num
void f_801EB198(Ctx* __restrict c) {
  trace_call(0x801EB198u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB198
  c->r[0]=c->lr; // 801EB19C
  W32(c->r[1]+0x00000184u,c->r[0]); // 801EB1A0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 801EB1A4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 801EB1A8
  c->r[11]=c->r[1]+0x00000170u; // 801EB1AC
  c->lr=0x801EB1B4u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB1B0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801EB1B4
  c->r[4]=0u+0x43300000u; // 801EB1B8
  W32(c->r[1]+0x00000128u,c->r[4]); // 801EB1BC
  c->r[27]=c->r[3]|c->r[3]; // 801EB1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801EB1C4
  W32(c->r[1]+0x00000130u,c->r[4]); // 801EB1C8
  if (!crb(c,2)) { goto L_801EB1F4; } // 801EB1CC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EB1D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB1D4
  if (!crb(c,2)) { goto L_801EB1E4; } // 801EB1D8
  {uint32_t ea=c->r[2]+0xFFFFC450u; c->f[2]=RF64(ea);} // 801EB1DC
  goto L_801EB1E8; // 801EB1E0
L_801EB1E4:;
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[2]=RF64(ea);} // 801EB1E4
L_801EB1E8:;
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=RF64(ea);} // 801EB1E8
  c->lr=0x801EB1F0u; f_801F6DE4(c); // 801EB1EC
  goto L_801EB928; // 801EB1F0
L_801EB1F4:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 801EB1F4
  cmps(c,0,(int32_t)c->r[0],73); // 801EB1F8
  if (crb(c,2)) { goto L_801EB240; } // 801EB1FC
  if (!crb(c,0)) { goto L_801EB210; } // 801EB200
  cmps(c,0,(int32_t)c->r[0],48); // 801EB204
  if (crb(c,2)) { goto L_801EB21C; } // 801EB208
  goto L_801EB2AC; // 801EB20C
L_801EB210:;
  cmps(c,0,(int32_t)c->r[0],78); // 801EB210
  if (crb(c,2)) { goto L_801EB268; } // 801EB214
  goto L_801EB2AC; // 801EB218
L_801EB21C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EB21C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB220
  if (!crb(c,2)) { goto L_801EB230; } // 801EB224
  {uint32_t ea=c->r[2]+0xFFFFC450u; c->f[2]=RF64(ea);} // 801EB228
  goto L_801EB234; // 801EB22C
L_801EB230:;
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[2]=RF64(ea);} // 801EB230
L_801EB234:;
  {uint32_t ea=c->r[2]+0xFFFFC448u; c->f[1]=RF64(ea);} // 801EB234
  c->lr=0x801EB23Cu; f_801F6DE4(c); // 801EB238
  goto L_801EB928; // 801EB23C
L_801EB240:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EB240
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB244
  if (!crb(c,2)) { goto L_801EB254; } // 801EB248
  {uint32_t ea=c->r[2]+0xFFFFC450u; c->f[2]=RF64(ea);} // 801EB24C
  goto L_801EB258; // 801EB250
L_801EB254:;
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[2]=RF64(ea);} // 801EB254
L_801EB258:;
  c->r[3]=0u+0x806D0000u; // 801EB258
  {uint32_t ea=c->r[3]+0x00002B3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB25C
  c->lr=0x801EB264u; f_801F6DE4(c); // 801EB260
  goto L_801EB928; // 801EB264
L_801EB268:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EB268
  c->r[4]=0u+0x00000000u; // 801EB26C
  c->r[3]=0u+0x7FF00000u; // 801EB270
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 801EB274
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB278
  W32(c->r[1]+0x00000018u,c->r[3]); // 801EB27C
  if (crb(c,2)) { goto L_801EB298; } // 801EB280
  c->r[0]=0u+0x80000000u; // 801EB284
  c->r[3]=0u+0x00000000u; // 801EB288
  c->r[0]=c->r[0]|0x7FF00000u; // 801EB28C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801EB290
  W32(c->r[1]+0x00000018u,c->r[0]); // 801EB294
L_801EB298:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801EB298
  c->r[0]=c->r[0]|0x00080000u; // 801EB29C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801EB2A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801EB2A4
  goto L_801EB928; // 801EB2A8
L_801EB2AC:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 801EB2AC
  c->r[4]=c->r[1]+0x00000101u; // 801EB2B0
  c->r[19]=R16(c->r[3]+0x00000000u); // 801EB2B4
  W16(c->r[1]+0x00000100u,c->r[0]); // 801EB2B8
  c->r[20]=R16(c->r[3]+0x00000002u); // 801EB2BC
  c->r[0]=R8(c->r[1]+0x00000100u); // 801EB2C0
  c->r[31]=R16(c->r[3]+0x00000006u); // 801EB2C4
  c->r[28]=c->r[4]+c->r[0]; // 801EB2C8
  c->r[30]=R16(c->r[3]+0x00000008u); // 801EB2CC
  c->r[29]=R16(c->r[3]+0x0000000Au); // 801EB2D0
  cmpu(c,1,c->r[4],c->r[28]); // 801EB2D4
  c->r[26]=R16(c->r[3]+0x0000000Cu); // 801EB2D8
  c->r[25]=R16(c->r[3]+0x0000000Eu); // 801EB2DC
  c->r[24]=R16(c->r[3]+0x00000010u); // 801EB2E0
  c->r[23]=R16(c->r[3]+0x00000012u); // 801EB2E4
  c->r[22]=R16(c->r[3]+0x00000014u); // 801EB2E8
  c->r[21]=R16(c->r[3]+0x00000016u); // 801EB2EC
  c->r[12]=R16(c->r[3]+0x00000018u); // 801EB2F0
  c->r[11]=R16(c->r[3]+0x0000001Au); // 801EB2F4
  c->r[10]=R16(c->r[3]+0x0000001Cu); // 801EB2F8
  c->r[9]=R16(c->r[3]+0x0000001Eu); // 801EB2FC
  c->r[8]=R16(c->r[3]+0x00000020u); // 801EB300
  c->r[7]=R16(c->r[3]+0x00000022u); // 801EB304
  c->r[6]=R16(c->r[3]+0x00000024u); // 801EB308
  c->r[5]=R16(c->r[3]+0x00000026u); // 801EB30C
  c->r[0]=R16(c->r[3]+0x00000028u); // 801EB310
  W16(c->r[1]+0x000000FCu,c->r[19]); // 801EB314
  W16(c->r[1]+0x000000FEu,c->r[20]); // 801EB318
  W16(c->r[1]+0x00000102u,c->r[31]); // 801EB31C
  W16(c->r[1]+0x00000104u,c->r[30]); // 801EB320
  W16(c->r[1]+0x00000106u,c->r[29]); // 801EB324
  W16(c->r[1]+0x00000108u,c->r[26]); // 801EB328
  W16(c->r[1]+0x0000010Au,c->r[25]); // 801EB32C
  W16(c->r[1]+0x0000010Cu,c->r[24]); // 801EB330
  W16(c->r[1]+0x0000010Eu,c->r[23]); // 801EB334
  W16(c->r[1]+0x00000110u,c->r[22]); // 801EB338
  W16(c->r[1]+0x00000112u,c->r[21]); // 801EB33C
  W16(c->r[1]+0x00000114u,c->r[12]); // 801EB340
  W16(c->r[1]+0x00000116u,c->r[11]); // 801EB344
  W16(c->r[1]+0x00000118u,c->r[10]); // 801EB348
  W16(c->r[1]+0x0000011Au,c->r[9]); // 801EB34C
  W16(c->r[1]+0x0000011Cu,c->r[8]); // 801EB350
  W16(c->r[1]+0x0000011Eu,c->r[7]); // 801EB354
  W16(c->r[1]+0x00000120u,c->r[6]); // 801EB358
  W16(c->r[1]+0x00000122u,c->r[5]); // 801EB35C
  W16(c->r[1]+0x00000124u,c->r[0]); // 801EB360
  if (!crb(c,4)) { goto L_801EB420; } // 801EB364
  c->r[0]=c->r[28]-c->r[4]; // 801EB368
  c->r[3]=c->r[28]+0xFFFFFFF8u; // 801EB36C
  cmps(c,0,(int32_t)c->r[0],8); // 801EB370
  if (!crb(c,1)) { goto L_801EB3FC; } // 801EB374
  if (crb(c,5)) { goto L_801EB3FC; } // 801EB378
  c->r[0]=c->r[3]+0x00000007u; // 801EB37C
  c->r[0]=c->r[0]-c->r[4]; // 801EB380
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801EB384
  c->ctr=c->r[0]; // 801EB388
  cmpu(c,0,c->r[4],c->r[3]); // 801EB38C
  if (!crb(c,0)) { goto L_801EB3FC; } // 801EB390
L_801EB394:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 801EB394
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB398
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EB39C
  c->r[3]=R8(c->r[4]+0x00000001u); // 801EB3A0
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3A4
  W8(c->r[4]+0x00000001u,c->r[0]); // 801EB3A8
  c->r[3]=R8(c->r[4]+0x00000002u); // 801EB3AC
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3B0
  W8(c->r[4]+0x00000002u,c->r[0]); // 801EB3B4
  c->r[3]=R8(c->r[4]+0x00000003u); // 801EB3B8
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3BC
  W8(c->r[4]+0x00000003u,c->r[0]); // 801EB3C0
  c->r[3]=R8(c->r[4]+0x00000004u); // 801EB3C4
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3C8
  W8(c->r[4]+0x00000004u,c->r[0]); // 801EB3CC
  c->r[3]=R8(c->r[4]+0x00000005u); // 801EB3D0
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3D4
  W8(c->r[4]+0x00000005u,c->r[0]); // 801EB3D8
  c->r[3]=R8(c->r[4]+0x00000006u); // 801EB3DC
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3E0
  W8(c->r[4]+0x00000006u,c->r[0]); // 801EB3E4
  c->r[3]=R8(c->r[4]+0x00000007u); // 801EB3E8
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB3EC
  W8(c->r[4]+0x00000007u,c->r[0]); // 801EB3F0
  c->r[4]=c->r[4]+0x00000008u; // 801EB3F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB394; } // 801EB3F8
L_801EB3FC:;
  c->r[0]=c->r[28]-c->r[4]; // 801EB3FC
  c->ctr=c->r[0]; // 801EB400
  cmpu(c,0,c->r[4],c->r[28]); // 801EB404
  if (!crb(c,0)) { goto L_801EB420; } // 801EB408
L_801EB40C:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 801EB40C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801EB410
  W8(c->r[4]+0x00000000u,c->r[0]); // 801EB414
  c->r[4]=c->r[4]+0x00000001u; // 801EB418
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB40C; } // 801EB41C
L_801EB420:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x000000FEu); // 801EB420
  c->r[4]=0u+0x803D0000u; // 801EB424
  c->r[0]=R8(c->r[1]+0x00000100u); // 801EB428
  c->r[4]=c->r[4]+0xFFFF8F28u; // 801EB42C
  c->r[3]=c->r[1]+0x000000D0u; // 801EB430
  c->r[5]=c->r[0]+c->r[5]; // 801EB434
  c->r[4]=c->r[4]+0x000000B8u; // 801EB438
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801EB43C
  W16(c->r[1]+0x000000FEu,c->r[0]); // 801EB440
  c->r[5]=0u+0x00000134u; // 801EB444
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801EB448
  c->lr=0x801EB450u; f_801EA33C(c); // 801EB44C
  c->r[3]=c->r[1]+0x000000D0u; // 801EB450
  c->r[4]=c->r[1]+0x000000FCu; // 801EB454
  c->lr=0x801EB45Cu; f_801EA878(c); // 801EB458
  cmps(c,0,(int32_t)c->r[3],0); // 801EB45C
  if (crb(c,2)) { goto L_801EB48C; } // 801EB460
  c->r[0]=R8(c->r[27]+0x00000000u); // 801EB464
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB468
  if (!crb(c,2)) { goto L_801EB478; } // 801EB46C
  {uint32_t ea=c->r[2]+0xFFFFC450u; c->f[2]=RF64(ea);} // 801EB470
  goto L_801EB47C; // 801EB474
L_801EB478:;
  {uint32_t ea=c->r[2]+0xFFFFC458u; c->f[2]=RF64(ea);} // 801EB478
L_801EB47C:;
  c->r[3]=0u+0x806D0000u; // 801EB47C
  {uint32_t ea=c->r[3]+0x00002B3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB480
  c->lr=0x801EB488u; f_801F6DE4(c); // 801EB484
  goto L_801EB928; // 801EB488
L_801EB48C:;
  c->r[0]=R8(c->r[1]+0x00000101u); // 801EB48C
  c->r[7]=0u+0x804C0000u; // 801EB490
  {uint32_t ea=c->r[2]+0xFFFFC470u; c->f[2]=RF64(ea);} // 801EB494
  c->r[4]=c->r[1]+0x00000102u; // 801EB498
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 801EB49C
  c->r[7]=c->r[7]+0xFFFF8478u; // 801EB4A0
  c->r[3]=0u+0x80000000u; // 801EB4A4
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 801EB4A8
  c->f[31]=c->f[0]-c->f[2]; // 801EB4AC
  goto L_801EB5F0; // 801EB4B0
L_801EB4B4:;
  c->r[5]=c->r[28]-c->r[4]; // 801EB4B4
  c->r[10]=0u+0x00000000u; // 801EB4B8
  c->r[0]=rotl(c->r[5],29)&0xE0000000u; // 801EB4BC
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 801EB4C0
  c->r[0]=c->r[0]-c->r[5]; // 801EB4C4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 801EB4C8
  c->r[6]=c->r[0]+c->r[5]; cr0(c,c->r[6]); // 801EB4CC
  if (!crb(c,2)) { goto L_801EB4D8; } // 801EB4D0
  c->r[6]=0u+0x00000008u; // 801EB4D4
L_801EB4D8:;
  cmps(c,1,(int32_t)c->r[6],0); // 801EB4D8
  c->r[5]=0u+0x00000000u; // 801EB4DC
  if (!crb(c,5)) { goto L_801EB5B8; } // 801EB4E0
  cmps(c,0,(int32_t)c->r[6],8); // 801EB4E4
  c->r[8]=c->r[6]+0xFFFFFFF8u; // 801EB4E8
  if (!crb(c,1)) { goto L_801EB590; } // 801EB4EC
  c->r[9]=0u+0x00000000u; // 801EB4F0
  if (crb(c,4)) { goto L_801EB508; } // 801EB4F4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801EB4F8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801EB4FC
  if (crb(c,1)) { goto L_801EB508; } // 801EB500
  c->r[9]=0u+0x00000001u; // 801EB504
L_801EB508:;
  cmps(c,0,(int32_t)c->r[9],0); // 801EB508
  if (crb(c,2)) { goto L_801EB590; } // 801EB50C
  c->r[0]=c->r[8]+0x00000007u; // 801EB510
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801EB514
  c->ctr=c->r[0]; // 801EB518
  cmps(c,0,(int32_t)c->r[8],0); // 801EB51C
  if (!crb(c,1)) { goto L_801EB590; } // 801EB520
L_801EB524:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 801EB524
  c->r[9]=R8(c->r[4]+0x00000000u); // 801EB528
  c->r[8]=R8(c->r[4]+0x00000001u); // 801EB52C
  c->r[5]=c->r[5]+0x00000008u; // 801EB530
  c->r[21]=R8(c->r[4]+0x00000002u); // 801EB534
  c->r[0]=c->r[9]+c->r[0]; // 801EB538
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB53C
  c->r[12]=R8(c->r[4]+0x00000003u); // 801EB540
  c->r[11]=R8(c->r[4]+0x00000004u); // 801EB544
  c->r[10]=R8(c->r[4]+0x00000005u); // 801EB548
  c->r[0]=c->r[8]+c->r[0]; // 801EB54C
  c->r[9]=R8(c->r[4]+0x00000006u); // 801EB550
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB554
  c->r[8]=R8(c->r[4]+0x00000007u); // 801EB558
  c->r[4]=c->r[4]+0x00000008u; // 801EB55C
  c->r[0]=c->r[21]+c->r[0]; // 801EB560
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB564
  c->r[0]=c->r[12]+c->r[0]; // 801EB568
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB56C
  c->r[0]=c->r[11]+c->r[0]; // 801EB570
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB574
  c->r[0]=c->r[10]+c->r[0]; // 801EB578
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB57C
  c->r[0]=c->r[9]+c->r[0]; // 801EB580
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801EB584
  c->r[10]=c->r[8]+c->r[0]; // 801EB588
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB524; } // 801EB58C
L_801EB590:;
  c->r[0]=c->r[6]-c->r[5]; // 801EB590
  c->ctr=c->r[0]; // 801EB594
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801EB598
  if (!crb(c,0)) { goto L_801EB5B8; } // 801EB59C
L_801EB5A0:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 801EB5A0
  c->r[8]=R8(c->r[4]+0x00000000u); // 801EB5A4
  c->r[5]=c->r[5]+0x00000001u; // 801EB5A8
  c->r[4]=c->r[4]+0x00000001u; // 801EB5AC
  c->r[10]=c->r[8]+c->r[0]; // 801EB5B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB5A0; } // 801EB5B4
L_801EB5B8:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801EB5B8
  W32(c->r[1]+0x00000134u,c->r[10]); // 801EB5BC
  c->r[5]=c->r[7]+c->r[0]; // 801EB5C0
  cmps(c,0,(int32_t)c->r[10],0); // 801EB5C4
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=RF64(ea);} // 801EB5C8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 801EB5CC
  c->f[1]=c->f[31]*c->f[1]; // 801EB5D0
  c->f[0]=c->f[0]-c->f[2]; // 801EB5D4
  c->f[0]=c->f[1]+c->f[0]; // 801EB5D8
  if (crb(c,2)) { goto L_801EB5E8; } // 801EB5DC
  fcmp(c,0,c->f[1],c->f[0]); // 801EB5E0
  if (crb(c,2)) { goto L_801EB5F8; } // 801EB5E4
L_801EB5E8:;
  c->f[31]=c->f[0]; // 801EB5E8
  c->r[29]=c->r[29]-c->r[6]; // 801EB5EC
L_801EB5F0:;
  cmpu(c,0,c->r[4],c->r[28]); // 801EB5F0
  if (crb(c,0)) { IRQCHK(c); goto L_801EB4B4; } // 801EB5F4
L_801EB5F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EB5F8
  if (!crb(c,0)) { goto L_801EB628; } // 801EB5FC
  c->r[0]=0u-c->r[29]; // 801EB600
  {uint32_t ea=c->r[2]+0xFFFFC478u; c->f[2]=RF64(ea);} // 801EB604
  c->r[0]=c->r[0]^0x80000000u; // 801EB608
  {uint32_t ea=c->r[2]+0xFFFFC460u; c->f[1]=RF64(ea);} // 801EB60C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 801EB610
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 801EB614
  c->f[2]=c->f[0]-c->f[2]; // 801EB618
  c->lr=0x801EB620u; f_801F7388(c); // 801EB61C
  c->f[31]=c->f[31]/c->f[1]; // 801EB620
  goto L_801EB648; // 801EB624
L_801EB628:;
  c->r[0]=c->r[29]^0x80000000u; // 801EB628
  {uint32_t ea=c->r[2]+0xFFFFC478u; c->f[2]=RF64(ea);} // 801EB62C
  W32(c->r[1]+0x00000134u,c->r[0]); // 801EB630
  {uint32_t ea=c->r[2]+0xFFFFC460u; c->f[1]=RF64(ea);} // 801EB634
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 801EB638
  c->f[2]=c->f[0]-c->f[2]; // 801EB63C
  c->lr=0x801EB644u; f_801F7388(c); // 801EB640
  c->f[31]=c->f[31]*c->f[1]; // 801EB644
L_801EB648:;
  c->f[1]=c->f[31]; // 801EB648
  c->r[3]=c->r[29]|c->r[29]; // 801EB64C
  c->lr=0x801EB654u; f_801F70B0(c); // 801EB650
  c->f[31]=c->f[1]; // 801EB654
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 801EB658
  c->lr=0x801EB660u; f_801ECDD0(c); // 801EB65C
  cmps(c,0,(int32_t)c->r[3],2); // 801EB660
  if (!crb(c,2)) { goto L_801EB670; } // 801EB664
  {uint32_t ea=c->r[2]+0xFFFFC468u; c->f[31]=RF64(ea);} // 801EB668
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB66C
L_801EB670:;
  c->f[1]=c->f[31]; // 801EB670
  c->r[3]=c->r[1]+0x000000A4u; // 801EB674
  c->r[27]=0u+0x00000000u; // 801EB678
  c->lr=0x801EB680u; f_801EAE94(c); // 801EB67C
  c->r[3]=c->r[1]+0x000000A4u; // 801EB680
  c->r[4]=c->r[1]+0x000000FCu; // 801EB684
  c->lr=0x801EB68Cu; f_801EA794(c); // 801EB688
  cmps(c,0,(int32_t)c->r[3],0); // 801EB68C
  if (!crb(c,2)) { goto L_801EB910; } // 801EB690
  c->r[3]=c->r[1]+0x000000A4u; // 801EB694
  c->r[4]=c->r[1]+0x000000FCu; // 801EB698
  c->lr=0x801EB6A0u; f_801EA878(c); // 801EB69C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB6A0
  if (crb(c,2)) { goto L_801EB6AC; } // 801EB6A4
  c->r[27]=0u+0x00000001u; // 801EB6A8
L_801EB6AC:;
  c->r[0]=cntlz(c->r[27]); // 801EB6AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801EB6B0
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EB6B4
  c->r[29]=0u+0x00000001u; // 801EB6B8
  c->r[30]=0u+0x00000000u; // 801EB6BC
  c->r[31]=0u+0xFFFFFFFFu; // 801EB6C0
L_801EB6C4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EB6C4
  if (!crb(c,2)) { goto L_801EB6F8; } // 801EB6C8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801EB6CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801EB6D0
  c->r[3]=addc(c,c->r[3],c->r[29],0); // 801EB6D4
  c->r[0]=addc(c,c->r[0],c->r[30],c->xer_ca); // 801EB6D8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801EB6DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EB6E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801EB6E4
  c->lr=0x801EB6ECu; f_801ECDD0(c); // 801EB6E8
  cmps(c,0,(int32_t)c->r[3],2); // 801EB6EC
  if (crb(c,2)) { goto L_801EB910; } // 801EB6F0
  goto L_801EB710; // 801EB6F4
L_801EB6F8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801EB6F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801EB6FC
  c->r[3]=addc(c,c->r[3],c->r[31],0); // 801EB700
  c->r[0]=addc(c,c->r[0],c->r[31],c->xer_ca); // 801EB704
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801EB708
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EB70C
L_801EB710:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801EB710
  c->r[3]=c->r[1]+0x00000078u; // 801EB714
  c->lr=0x801EB71Cu; f_801EAE94(c); // 801EB718
  cmps(c,0,(int32_t)c->r[27],0); // 801EB71C
  if (crb(c,2)) { goto L_801EB738; } // 801EB720
  c->r[3]=c->r[1]+0x00000078u; // 801EB724
  c->r[4]=c->r[1]+0x000000FCu; // 801EB728
  c->lr=0x801EB730u; f_801EA878(c); // 801EB72C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB730
  if (crb(c,2)) { goto L_801EB8A8; } // 801EB734
L_801EB738:;
  cmps(c,0,(int32_t)c->r[27],0); // 801EB738
  if (!crb(c,2)) { goto L_801EB844; } // 801EB73C
  c->r[3]=c->r[1]+0x000000FCu; // 801EB740
  c->r[4]=c->r[1]+0x00000078u; // 801EB744
  c->lr=0x801EB74Cu; f_801EA878(c); // 801EB748
  cmps(c,0,(int32_t)c->r[3],0); // 801EB74C
  if (!crb(c,2)) { goto L_801EB844; } // 801EB750
  c->f[0]=c->f[31]; // 801EB754
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801EB758
  c->r[21]=R32(c->r[1]+0x000000A4u); // 801EB75C
  c->r[12]=R32(c->r[1]+0x00000078u); // 801EB760
  c->r[22]=R32(c->r[1]+0x000000A8u); // 801EB764
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 801EB768
  c->r[23]=R32(c->r[1]+0x000000ACu); // 801EB76C
  c->r[10]=R32(c->r[1]+0x00000080u); // 801EB770
  c->r[24]=R32(c->r[1]+0x000000B0u); // 801EB774
  c->r[9]=R32(c->r[1]+0x00000084u); // 801EB778
  c->r[25]=R32(c->r[1]+0x000000B4u); // 801EB77C
  c->r[8]=R32(c->r[1]+0x00000088u); // 801EB780
  c->r[26]=R32(c->r[1]+0x000000B8u); // 801EB784
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 801EB788
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801EB78C
  c->r[6]=R32(c->r[1]+0x00000090u); // 801EB790
  c->r[30]=R32(c->r[1]+0x000000C0u); // 801EB794
  c->r[5]=R32(c->r[1]+0x00000094u); // 801EB798
  c->r[29]=R32(c->r[1]+0x000000C4u); // 801EB79C
  c->r[4]=R32(c->r[1]+0x00000098u); // 801EB7A0
  c->r[28]=R32(c->r[1]+0x000000C8u); // 801EB7A4
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 801EB7A8
  c->r[27]=R16(c->r[1]+0x000000CCu); // 801EB7AC
  c->r[0]=R16(c->r[1]+0x000000A0u); // 801EB7B0
  W32(c->r[1]+0x0000004Cu,c->r[21]); // 801EB7B4
  W32(c->r[1]+0x00000050u,c->r[22]); // 801EB7B8
  W32(c->r[1]+0x00000054u,c->r[23]); // 801EB7BC
  W32(c->r[1]+0x00000058u,c->r[24]); // 801EB7C0
  W32(c->r[1]+0x0000005Cu,c->r[25]); // 801EB7C4
  W32(c->r[1]+0x00000060u,c->r[26]); // 801EB7C8
  W32(c->r[1]+0x00000064u,c->r[31]); // 801EB7CC
  W32(c->r[1]+0x00000068u,c->r[30]); // 801EB7D0
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 801EB7D4
  W32(c->r[1]+0x00000070u,c->r[28]); // 801EB7D8
  W16(c->r[1]+0x00000074u,c->r[27]); // 801EB7DC
  W32(c->r[1]+0x000000A4u,c->r[12]); // 801EB7E0
  W32(c->r[1]+0x000000A8u,c->r[11]); // 801EB7E4
  W32(c->r[1]+0x000000ACu,c->r[10]); // 801EB7E8
  W32(c->r[1]+0x000000B0u,c->r[9]); // 801EB7EC
  W32(c->r[1]+0x000000B4u,c->r[8]); // 801EB7F0
  W32(c->r[1]+0x000000B8u,c->r[7]); // 801EB7F4
  W32(c->r[1]+0x000000BCu,c->r[6]); // 801EB7F8
  W32(c->r[1]+0x000000C0u,c->r[5]); // 801EB7FC
  W32(c->r[1]+0x000000C4u,c->r[4]); // 801EB800
  W32(c->r[1]+0x000000C8u,c->r[3]); // 801EB804
  W16(c->r[1]+0x000000CCu,c->r[0]); // 801EB808
  W32(c->r[1]+0x00000078u,c->r[21]); // 801EB80C
  W32(c->r[1]+0x0000007Cu,c->r[22]); // 801EB810
  W32(c->r[1]+0x00000080u,c->r[23]); // 801EB814
  W32(c->r[1]+0x00000084u,c->r[24]); // 801EB818
  W32(c->r[1]+0x00000088u,c->r[25]); // 801EB81C
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 801EB820
  W32(c->r[1]+0x00000090u,c->r[31]); // 801EB824
  W32(c->r[1]+0x00000094u,c->r[30]); // 801EB828
  W32(c->r[1]+0x00000098u,c->r[29]); // 801EB82C
  W32(c->r[1]+0x0000009Cu,c->r[28]); // 801EB830
  W16(c->r[1]+0x000000A0u,c->r[27]); // 801EB834
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB838
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801EB83C
  goto L_801EB8A8; // 801EB840
L_801EB844:;
  c->r[12]=R32(c->r[1]+0x00000078u); // 801EB844
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 801EB848
  c->r[10]=R32(c->r[1]+0x00000080u); // 801EB84C
  c->r[9]=R32(c->r[1]+0x00000084u); // 801EB850
  c->r[8]=R32(c->r[1]+0x00000088u); // 801EB854
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 801EB858
  c->r[6]=R32(c->r[1]+0x00000090u); // 801EB85C
  c->r[5]=R32(c->r[1]+0x00000094u); // 801EB860
  c->r[4]=R32(c->r[1]+0x00000098u); // 801EB864
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 801EB868
  c->r[0]=R16(c->r[1]+0x000000A0u); // 801EB86C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801EB870
  W32(c->r[1]+0x000000A4u,c->r[12]); // 801EB874
  W32(c->r[1]+0x000000A8u,c->r[11]); // 801EB878
  W32(c->r[1]+0x000000ACu,c->r[10]); // 801EB87C
  W32(c->r[1]+0x000000B0u,c->r[9]); // 801EB880
  W32(c->r[1]+0x000000B4u,c->r[8]); // 801EB884
  W32(c->r[1]+0x000000B8u,c->r[7]); // 801EB888
  W32(c->r[1]+0x000000BCu,c->r[6]); // 801EB88C
  W32(c->r[1]+0x000000C0u,c->r[5]); // 801EB890
  W32(c->r[1]+0x000000C4u,c->r[4]); // 801EB894
  W32(c->r[1]+0x000000C8u,c->r[3]); // 801EB898
  W16(c->r[1]+0x000000CCu,c->r[0]); // 801EB89C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB8A0
  IRQCHK(c); goto L_801EB6C4; // 801EB8A4
L_801EB8A8:;
  c->r[3]=c->r[1]+0x0000004Cu; // 801EB8A8
  c->r[4]=c->r[1]+0x000000FCu; // 801EB8AC
  c->r[5]=c->r[1]+0x000000A4u; // 801EB8B0
  c->lr=0x801EB8B8u; f_801EA978(c); // 801EB8B4
  c->r[3]=c->r[1]+0x00000020u; // 801EB8B8
  c->r[4]=c->r[1]+0x00000078u; // 801EB8BC
  c->r[5]=c->r[1]+0x000000FCu; // 801EB8C0
  c->lr=0x801EB8C8u; f_801EA978(c); // 801EB8C4
  c->r[3]=c->r[1]+0x0000004Cu; // 801EB8C8
  c->r[4]=c->r[1]+0x00000020u; // 801EB8CC
  c->lr=0x801EB8D4u; f_801EA794(c); // 801EB8D0
  cmps(c,0,(int32_t)c->r[3],0); // 801EB8D4
  if (crb(c,2)) { goto L_801EB8F4; } // 801EB8D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB8DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EB8E0
  if (crb(c,2)) { goto L_801EB910; } // 801EB8E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801EB8E8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB8EC
  goto L_801EB910; // 801EB8F0
L_801EB8F4:;
  c->r[3]=c->r[1]+0x0000004Cu; // 801EB8F4
  c->r[4]=c->r[1]+0x00000020u; // 801EB8F8
  c->lr=0x801EB900u; f_801EA878(c); // 801EB8FC
  cmps(c,0,(int32_t)c->r[3],0); // 801EB900
  if (!crb(c,2)) { goto L_801EB910; } // 801EB904
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801EB908
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB90C
L_801EB910:;
  c->r[0]=R8(c->r[1]+0x000000FCu); // 801EB910
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB914
  if (crb(c,2)) { goto L_801EB924; } // 801EB918
  c->f[31]=-c->f[31]; // 801EB91C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801EB920
L_801EB924:;
  c->f[1]=c->f[31]; // 801EB924
L_801EB928:;
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 801EB928
  c->r[11]=c->r[1]+0x00000170u; // 801EB92C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 801EB930
  c->lr=0x801EB938u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB934
  c->r[0]=R32(c->r[1]+0x00000184u); // 801EB938
  c->lr=c->r[0]; // 801EB93C
  c->r[1]=c->r[1]+0x00000180u; // 801EB940
  return; // 801EB944
}

// abs
void f_801EB948(Ctx* __restrict c) {
  trace_call(0x801EB948u);
  c->r[4]=sraw(c,c->r[3],31); // 801EB948
  c->r[0]=c->r[4]^c->r[3]; // 801EB94C
  c->r[3]=c->r[0]-c->r[4]; // 801EB950
  return; // 801EB954
}

// __prep_buffer
void f_801EB958(Ctx* __restrict c) {
  trace_call(0x801EB958u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 801EB958
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801EB95C
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 801EB960
  c->r[5]=R32(c->r[3]+0x00000020u); // 801EB964
  c->r[0]=c->r[4]&c->r[0]; // 801EB968
  W32(c->r[3]+0x00000024u,c->r[6]); // 801EB96C
  c->r[0]=c->r[5]-c->r[0]; // 801EB970
  W32(c->r[3]+0x00000028u,c->r[0]); // 801EB974
  W32(c->r[3]+0x00000034u,c->r[4]); // 801EB978
  return; // 801EB97C
}

