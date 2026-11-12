#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8028E9E0
void f_8028E9E0(Ctx* __restrict c) {
  trace_call(0x8028E9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028E9E0
  c->r[0]=0u+0x00000000u; // 8028E9E4
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 8028E9E8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8028E9EC
  c->r[25]=R32(c->r[4]+0x00000000u); // 8028E9F0
  c->r[26]=R32(c->r[4]+0x00000004u); // 8028E9F4
  c->r[27]=R32(c->r[4]+0x00000008u); // 8028E9F8
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 8028E9FC
  c->r[29]=R32(c->r[4]+0x00000010u); // 8028EA00
  c->r[30]=R32(c->r[4]+0x00000014u); // 8028EA04
  c->r[31]=R32(c->r[4]+0x00000018u); // 8028EA08
  c->r[11]=R32(c->r[5]+0x00000000u); // 8028EA0C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8028EA10
  c->r[10]=R32(c->r[5]+0x00000004u); // 8028EA14
  c->r[9]=R32(c->r[5]+0x00000008u); // 8028EA18
  c->r[8]=R32(c->r[5]+0x0000000Cu); // 8028EA1C
  c->r[7]=R32(c->r[5]+0x00000010u); // 8028EA20
  c->r[6]=R32(c->r[5]+0x00000014u); // 8028EA24
  c->r[4]=R32(c->r[5]+0x00000018u); // 8028EA28
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 8028EA2C
  W32(c->r[3]+0x000000B8u,c->r[25]); // 8028EA30
  W32(c->r[3]+0x000000BCu,c->r[26]); // 8028EA34
  W32(c->r[3]+0x000000C0u,c->r[27]); // 8028EA38
  W32(c->r[3]+0x000000C4u,c->r[28]); // 8028EA3C
  W32(c->r[3]+0x000000C8u,c->r[29]); // 8028EA40
  W32(c->r[3]+0x000000CCu,c->r[30]); // 8028EA44
  W32(c->r[3]+0x000000D0u,c->r[31]); // 8028EA48
  W32(c->r[3]+0x000000D4u,c->r[12]); // 8028EA4C
  W32(c->r[3]+0x000000D8u,c->r[11]); // 8028EA50
  W32(c->r[3]+0x000000DCu,c->r[10]); // 8028EA54
  W32(c->r[3]+0x000000E0u,c->r[9]); // 8028EA58
  W32(c->r[3]+0x000000E4u,c->r[8]); // 8028EA5C
  W32(c->r[3]+0x000000E8u,c->r[7]); // 8028EA60
  W32(c->r[3]+0x000000ECu,c->r[6]); // 8028EA64
  W32(c->r[3]+0x000000F0u,c->r[4]); // 8028EA68
  W32(c->r[3]+0x000000F4u,c->r[0]); // 8028EA6C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8028EA70
  c->r[1]=c->r[1]+0x00000030u; // 8028EA74
  return; // 8028EA78
}

// fn_8028EA7C
void f_8028EA7C(Ctx* __restrict c) {
  trace_call(0x8028EA7Cu);
  c->r[0]=0u+0x00000000u; // 8028EA7C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028EA80
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EA84
  c->r[3]=c->r[3]+c->r[4]; // 8028EA88
  {uint32_t ea=c->r[2]+0xFFFFCD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028EA8C
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[1]);} // 8028EA90
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[0]);} // 8028EA94
  return; // 8028EA98
}

// fn_8028EA9C
void f_8028EA9C(Ctx* __restrict c) {
  trace_call(0x8028EA9Cu);
  c->r[0]=0u+0x00000000u; // 8028EA9C
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8028EAA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EAA4
  c->r[3]=c->r[3]+c->r[4]; // 8028EAA8
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[1]);} // 8028EAAC
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[2]);} // 8028EAB0
  return; // 8028EAB4
}

// fn_8028EAB8
void f_8028EAB8(Ctx* __restrict c) {
  trace_call(0x8028EAB8u);
  c->r[0]=0u+0x00000000u; // 8028EAB8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EABC
  {uint32_t ea=c->r[3]+0x0000016Cu; WF32(ea,c->f[1]);} // 8028EAC0
  {uint32_t ea=c->r[3]+0x00000170u; WF32(ea,c->f[2]);} // 8028EAC4
  return; // 8028EAC8
}

// fn_8028EACC
void f_8028EACC(Ctx* __restrict c) {
  trace_call(0x8028EACCu);
  c->r[0]=0u+0x00000000u; // 8028EACC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EAD0
  {uint32_t ea=c->r[3]+0x00000174u; WF32(ea,c->f[1]);} // 8028EAD4
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[2]);} // 8028EAD8
  return; // 8028EADC
}

// fn_8028EAE0
void f_8028EAE0(Ctx* __restrict c) {
  trace_call(0x8028EAE0u);
  c->r[0]=0u+0x00000000u; // 8028EAE0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EAE4
  {uint32_t ea=c->r[3]+0x00000164u; WF32(ea,c->f[1]);} // 8028EAE8
  {uint32_t ea=c->r[3]+0x00000168u; WF32(ea,c->f[2]);} // 8028EAEC
  return; // 8028EAF0
}

// fn_8028EAF4
void f_8028EAF4(Ctx* __restrict c) {
  trace_call(0x8028EAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EAF4
  c->r[0]=c->lr; // 8028EAF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028EAFC
  c->r[0]=0u+0x00000000u; // 8028EB00
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8028EB04
  c->f[31]=c->f[1]; // 8028EB08
  W32(c->r[1]+0x00000014u,c->r[31]); // 8028EB0C
  W32(c->r[1]+0x00000010u,c->r[30]); // 8028EB10
  c->r[30]=c->r[5]|c->r[5]; // 8028EB14
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8028EB18
  c->r[29]=c->r[4]|c->r[4]; // 8028EB1C
  W32(c->r[1]+0x00000008u,c->r[28]); // 8028EB20
  c->r[28]=c->r[3]|c->r[3]; // 8028EB24
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EB28
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EB2C
  cmps(c,0,(int32_t)c->r[0],0); // 8028EB30
  if (!crb(c,2)) { goto L_8028EB54; } // 8028EB34
  c->r[0]=0u+0xFFFFFFFFu; // 8028EB38
  c->r[3]=0u+0x803D0000u; // 8028EB3C
  c->r[3]=c->r[3]+0x00002B50u; // 8028EB40
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EB44
  c->r[3]=c->r[3]+0x000001C3u; // 8028EB48
  c->lr=0x8028EB50u; f_8029D4B0(c); // 8028EB4C
  goto L_8028EBC4; // 8028EB50
L_8028EB54:;
  c->r[3]=R32(c->r[3]+0x0000037Cu); // 8028EB54
  c->r[31]=0u+0x00000000u; // 8028EB58
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028EB5C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8028EB60
  c->ctr=c->r[12]; // 8028EB64
  if (true) { c->lr=0x8028EB6Cu; dispatch(c,c->ctr); } // 8028EB68
  cmps(c,0,(int32_t)c->r[3],1); // 8028EB6C
  if (!crb(c,2)) { goto L_8028EB78; } // 8028EB70
  c->r[31]=0u+0x00000001u; // 8028EB74
L_8028EB78:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8028EB78
  c->f[1]=c->f[31]; // 8028EB7C
  c->r[4]=c->r[29]|c->r[29]; // 8028EB80
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8028EB84
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028EB88
  c->ctr=c->r[12]; // 8028EB8C
  if (true) { c->lr=0x8028EB94u; dispatch(c,c->ctr); } // 8028EB90
  cmps(c,0,(int32_t)c->r[3],1); // 8028EB94
  if (!crb(c,2)) { goto L_8028EBA0; } // 8028EB98
  c->r[31]=0u+0x00000001u; // 8028EB9C
L_8028EBA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8028EBA0
  if (!crb(c,2)) { goto L_8028EBC4; } // 8028EBA4
  c->r[0]=0u+0xFFFFFFFFu; // 8028EBA8
  c->r[3]=0u+0x803D0000u; // 8028EBAC
  c->r[3]=c->r[3]+0x00002B50u; // 8028EBB0
  W32(c->r[30]+0x00000000u,c->r[0]); // 8028EBB4
  c->r[4]=c->r[29]|c->r[29]; // 8028EBB8
  c->r[3]=c->r[3]+0x000001DDu; // 8028EBBC
  c->lr=0x8028EBC4u; f_8029D500(c); // 8028EBC0
L_8028EBC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028EBC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8028EBC8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8028EBCC
  c->r[30]=R32(c->r[1]+0x00000010u); // 8028EBD0
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8028EBD4
  c->r[28]=R32(c->r[1]+0x00000008u); // 8028EBD8
  c->lr=c->r[0]; // 8028EBDC
  c->r[1]=c->r[1]+0x00000020u; // 8028EBE0
  return; // 8028EBE4
}

// fn_8028EBE8
void f_8028EBE8(Ctx* __restrict c) {
  trace_call(0x8028EBE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EBE8
  c->r[0]=c->lr; // 8028EBEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8028EBF0
  c->r[0]=0u+0x00000000u; // 8028EBF4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8028EBF8
  c->f[31]=c->f[2]; // 8028EBFC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8028EC00
  c->f[30]=c->f[1]; // 8028EC04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028EC08
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028EC0C
  c->r[30]=c->r[5]|c->r[5]; // 8028EC10
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028EC14
  c->r[29]=c->r[4]|c->r[4]; // 8028EC18
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028EC1C
  c->r[28]=c->r[3]|c->r[3]; // 8028EC20
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EC24
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EC28
  cmps(c,0,(int32_t)c->r[0],0); // 8028EC2C
  if (!crb(c,2)) { goto L_8028EC50; } // 8028EC30
  c->r[0]=0u+0xFFFFFFFFu; // 8028EC34
  c->r[3]=0u+0x803D0000u; // 8028EC38
  c->r[3]=c->r[3]+0x00002B50u; // 8028EC3C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EC40
  c->r[3]=c->r[3]+0x00000204u; // 8028EC44
  c->lr=0x8028EC4Cu; f_8029D4B0(c); // 8028EC48
  goto L_8028ECC4; // 8028EC4C
L_8028EC50:;
  c->r[3]=R32(c->r[3]+0x0000037Cu); // 8028EC50
  c->r[31]=0u+0x00000000u; // 8028EC54
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028EC58
  c->r[12]=R32(c->r[12]+0x00000020u); // 8028EC5C
  c->ctr=c->r[12]; // 8028EC60
  if (true) { c->lr=0x8028EC68u; dispatch(c,c->ctr); } // 8028EC64
  cmps(c,0,(int32_t)c->r[3],1); // 8028EC68
  if (!crb(c,2)) { goto L_8028EC74; } // 8028EC6C
  c->r[31]=0u+0x00000001u; // 8028EC70
L_8028EC74:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8028EC74
  c->f[1]=c->f[30]; // 8028EC78
  c->f[2]=c->f[31]; // 8028EC7C
  c->r[4]=c->r[29]|c->r[29]; // 8028EC80
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8028EC84
  c->r[12]=R32(c->r[12]+0x00000018u); // 8028EC88
  c->ctr=c->r[12]; // 8028EC8C
  if (true) { c->lr=0x8028EC94u; dispatch(c,c->ctr); } // 8028EC90
  cmps(c,0,(int32_t)c->r[3],1); // 8028EC94
  if (!crb(c,2)) { goto L_8028ECA0; } // 8028EC98
  c->r[31]=0u+0x00000001u; // 8028EC9C
L_8028ECA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8028ECA0
  if (!crb(c,2)) { goto L_8028ECC4; } // 8028ECA4
  c->r[0]=0u+0xFFFFFFFFu; // 8028ECA8
  c->r[3]=0u+0x803D0000u; // 8028ECAC
  c->r[3]=c->r[3]+0x00002B50u; // 8028ECB0
  W32(c->r[30]+0x00000000u,c->r[0]); // 8028ECB4
  c->r[4]=c->r[29]|c->r[29]; // 8028ECB8
  c->r[3]=c->r[3]+0x0000021Eu; // 8028ECBC
  c->lr=0x8028ECC4u; f_8029D500(c); // 8028ECC0
L_8028ECC4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8028ECC4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8028ECC8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8028ECCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028ECD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028ECD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028ECD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028ECDC
  c->lr=c->r[0]; // 8028ECE0
  c->r[1]=c->r[1]+0x00000030u; // 8028ECE4
  return; // 8028ECE8
}

// fn_8028ECEC
void f_8028ECEC(Ctx* __restrict c) {
  trace_call(0x8028ECECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028ECEC
  c->r[0]=c->lr; // 8028ECF0
  cmpu(c,0,c->r[5],0x00000008u); // 8028ECF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028ECF8
  c->r[0]=0u+0x00000000u; // 8028ECFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8028ED00
  c->r[26]=c->r[3]|c->r[3]; // 8028ED04
  c->r[27]=c->r[4]|c->r[4]; // 8028ED08
  c->r[28]=c->r[5]|c->r[5]; // 8028ED0C
  c->r[29]=c->r[6]|c->r[6]; // 8028ED10
  W32(c->r[6]+0x00000000u,c->r[0]); // 8028ED14
  if (!crb(c,1)) { goto L_8028ED38; } // 8028ED18
  c->r[0]=0u+0xFFFFFFFFu; // 8028ED1C
  c->r[3]=0u+0x803D0000u; // 8028ED20
  c->r[3]=c->r[3]+0x00002B50u; // 8028ED24
  W32(c->r[6]+0x00000000u,c->r[0]); // 8028ED28
  c->r[3]=c->r[3]+0x00000245u; // 8028ED2C
  c->lr=0x8028ED34u; f_8029D4B0(c); // 8028ED30
  goto L_8028EDF4; // 8028ED34
L_8028ED38:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 8028ED38
  c->lr=0x8028ED40u; f_8028CD50(c); // 8028ED3C
  c->r[31]=c->r[3]|c->r[3]; // 8028ED40
  c->r[30]=0u+0x00000000u; // 8028ED44
  goto L_8028EDC8; // 8028ED48
L_8028ED4C:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 8028ED4C
  c->r[4]=c->r[30]|c->r[30]; // 8028ED50
  c->r[5]=c->r[29]|c->r[29]; // 8028ED54
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028ED58
  c->r[12]=R32(c->r[12]+0x00000014u); // 8028ED5C
  c->ctr=c->r[12]; // 8028ED60
  if (true) { c->lr=0x8028ED68u; dispatch(c,c->ctr); } // 8028ED64
  cmps(c,0,(int32_t)c->r[3],0); // 8028ED68
  if (crb(c,2)) { goto L_8028EDD0; } // 8028ED6C
  c->r[4]=c->r[27]|c->r[27]; // 8028ED70
  c->lr=0x8028ED78u; f_8028AE68(c); // 8028ED74
  cmps(c,0,(int32_t)c->r[3],0); // 8028ED78
  c->r[4]=c->r[3]|c->r[3]; // 8028ED7C
  if (crb(c,2)) { goto L_8028EDC4; } // 8028ED80
  c->r[3]=R32(c->r[26]+0x0000037Cu); // 8028ED84
  c->r[5]=c->r[28]|c->r[28]; // 8028ED88
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028ED8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028ED90
  c->ctr=c->r[12]; // 8028ED94
  if (true) { c->lr=0x8028ED9Cu; dispatch(c,c->ctr); } // 8028ED98
  cmps(c,0,(int32_t)c->r[3],0); // 8028ED9C
  if (!crb(c,2)) { goto L_8028EDD0; } // 8028EDA0
  c->r[0]=0u+0xFFFFFFFFu; // 8028EDA4
  c->r[3]=0u+0x803D0000u; // 8028EDA8
  c->r[3]=c->r[3]+0x00002B50u; // 8028EDAC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8028EDB0
  c->r[4]=c->r[27]|c->r[27]; // 8028EDB4
  c->r[3]=c->r[3]+0x0000026Du; // 8028EDB8
  c->lr=0x8028EDC0u; f_8029D500(c); // 8028EDBC
  goto L_8028EDF4; // 8028EDC0
L_8028EDC4:;
  c->r[30]=c->r[30]+0x00000001u; // 8028EDC4
L_8028EDC8:;
  cmpu(c,0,c->r[30],c->r[31]); // 8028EDC8
  if (crb(c,0)) { IRQCHK(c); goto L_8028ED4C; } // 8028EDCC
L_8028EDD0:;
  cmpu(c,0,c->r[30],c->r[31]); // 8028EDD0
  if (!crb(c,2)) { goto L_8028EDF4; } // 8028EDD4
  c->r[0]=0u+0xFFFFFFFFu; // 8028EDD8
  c->r[3]=0u+0x803D0000u; // 8028EDDC
  c->r[3]=c->r[3]+0x00002B50u; // 8028EDE0
  W32(c->r[29]+0x00000000u,c->r[0]); // 8028EDE4
  c->r[4]=c->r[27]|c->r[27]; // 8028EDE8
  c->r[3]=c->r[3]+0x00000293u; // 8028EDEC
  c->lr=0x8028EDF4u; f_8029D500(c); // 8028EDF0
L_8028EDF4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8028EDF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028EDF8
  c->lr=c->r[0]; // 8028EDFC
  c->r[1]=c->r[1]+0x00000020u; // 8028EE00
  return; // 8028EE04
}

// fn_8028EE08
void f_8028EE08(Ctx* __restrict c) {
  trace_call(0x8028EE08u);
  c->r[0]=0u+0x00000000u; // 8028EE08
  cmpu(c,0,c->r[4],0x00000008u); // 8028EE0C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EE10
  if (!crb(c,1)) { goto L_8028EE30; } // 8028EE14
  c->r[0]=0u+0xFFFFFFFFu; // 8028EE18
  c->r[3]=0u+0x803D0000u; // 8028EE1C
  c->r[3]=c->r[3]+0x00002B50u; // 8028EE20
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028EE24
  c->r[3]=c->r[3]+0x000002B1u; // 8028EE28
  f_8029D4B0(c); return; // 8028EE2C
L_8028EE30:;
  c->r[3]=R32(c->r[3]+0x0000037Cu); // 8028EE30
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028EE34
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028EE38
  c->ctr=c->r[12]; // 8028EE3C
  if (true) { dispatch(c,c->ctr); return; } // 8028EE40
}

// fn_8028EE44
void f_8028EE44(Ctx* __restrict c) {
  trace_call(0x8028EE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EE44
  c->r[0]=c->lr; // 8028EE48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028EE4C
  c->r[0]=0u+0x00000000u; // 8028EE50
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EE54
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EE58
  cmps(c,0,(int32_t)c->r[0],0); // 8028EE5C
  if (!crb(c,2)) { goto L_8028EE84; } // 8028EE60
  c->r[0]=0u+0xFFFFFFFFu; // 8028EE64
  c->r[3]=0u+0x803D0000u; // 8028EE68
  c->r[3]=c->r[3]+0x00002B50u; // 8028EE6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EE70
  c->r[3]=c->r[3]+0x000002D9u; // 8028EE74
  c->lr=0x8028EE7Cu; f_8029D4B0(c); // 8028EE78
  c->r[3]=0u+0x00000000u; // 8028EE7C
  goto L_8028EE88; // 8028EE80
L_8028EE84:;
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 8028EE84
L_8028EE88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EE88
  c->lr=c->r[0]; // 8028EE8C
  c->r[1]=c->r[1]+0x00000010u; // 8028EE90
  return; // 8028EE94
}

// fn_8028EE98
void f_8028EE98(Ctx* __restrict c) {
  trace_call(0x8028EE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EE98
  c->r[0]=c->lr; // 8028EE9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028EEA0
  c->r[0]=0u+0x00000000u; // 8028EEA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EEA8
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EEAC
  cmps(c,0,(int32_t)c->r[0],0); // 8028EEB0
  if (!crb(c,2)) { goto L_8028EED8; } // 8028EEB4
  c->r[0]=0u+0xFFFFFFFFu; // 8028EEB8
  c->r[3]=0u+0x803D0000u; // 8028EEBC
  c->r[3]=c->r[3]+0x00002B50u; // 8028EEC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EEC4
  c->r[3]=c->r[3]+0x000002F3u; // 8028EEC8
  c->lr=0x8028EED0u; f_8029D4B0(c); // 8028EECC
  c->r[3]=0u+0x00000000u; // 8028EED0
  goto L_8028EEDC; // 8028EED4
L_8028EED8:;
  c->r[3]=R32(c->r[3]+0x00000364u); // 8028EED8
L_8028EEDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EEDC
  c->lr=c->r[0]; // 8028EEE0
  c->r[1]=c->r[1]+0x00000010u; // 8028EEE4
  return; // 8028EEE8
}

// fn_8028EEEC
void f_8028EEEC(Ctx* __restrict c) {
  trace_call(0x8028EEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EEEC
  c->r[0]=c->lr; // 8028EEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028EEF4
  c->r[0]=0u+0x00000000u; // 8028EEF8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EEFC
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EF00
  cmps(c,0,(int32_t)c->r[0],0); // 8028EF04
  if (!crb(c,2)) { goto L_8028EF2C; } // 8028EF08
  c->r[0]=0u+0xFFFFFFFFu; // 8028EF0C
  c->r[3]=0u+0x803D0000u; // 8028EF10
  c->r[3]=c->r[3]+0x00002B50u; // 8028EF14
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EF18
  c->r[3]=c->r[3]+0x0000030Du; // 8028EF1C
  c->lr=0x8028EF24u; f_8029D4B0(c); // 8028EF20
  c->r[3]=0u+0x00000000u; // 8028EF24
  goto L_8028EF30; // 8028EF28
L_8028EF2C:;
  c->r[3]=R32(c->r[3]+0x00000360u); // 8028EF2C
L_8028EF30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EF30
  c->lr=c->r[0]; // 8028EF34
  c->r[1]=c->r[1]+0x00000010u; // 8028EF38
  return; // 8028EF3C
}

// fn_8028EF40
void f_8028EF40(Ctx* __restrict c) {
  trace_call(0x8028EF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EF40
  c->r[0]=c->lr; // 8028EF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028EF48
  c->r[0]=0u+0x00000000u; // 8028EF4C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EF50
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EF54
  cmps(c,0,(int32_t)c->r[0],0); // 8028EF58
  if (!crb(c,2)) { goto L_8028EF80; } // 8028EF5C
  c->r[0]=0u+0xFFFFFFFFu; // 8028EF60
  c->r[3]=0u+0x803D0000u; // 8028EF64
  c->r[3]=c->r[3]+0x00002B50u; // 8028EF68
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028EF6C
  c->r[3]=c->r[3]+0x00000327u; // 8028EF70
  c->lr=0x8028EF78u; f_8029D4B0(c); // 8028EF74
  c->r[3]=0u+0x00000000u; // 8028EF78
  goto L_8028EF84; // 8028EF7C
L_8028EF80:;
  c->r[3]=R32(c->r[3]+0x00000368u); // 8028EF80
L_8028EF84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028EF84
  c->lr=c->r[0]; // 8028EF88
  c->r[1]=c->r[1]+0x00000010u; // 8028EF8C
  return; // 8028EF90
}

// fn_8028EF94
void f_8028EF94(Ctx* __restrict c) {
  trace_call(0x8028EF94u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028EF94
  c->r[0]=c->lr; // 8028EF98
  W32(c->r[1]+0x00000174u,c->r[0]); // 8028EF9C
  c->r[0]=0u+0x00000000u; // 8028EFA0
  W32(c->r[1]+0x0000016Cu,c->r[31]); // 8028EFA4
  c->r[31]=c->r[6]|c->r[6]; // 8028EFA8
  W32(c->r[1]+0x00000168u,c->r[30]); // 8028EFAC
  c->r[30]=c->r[5]|c->r[5]; // 8028EFB0
  W32(c->r[1]+0x00000164u,c->r[29]); // 8028EFB4
  c->r[29]=c->r[4]|c->r[4]; // 8028EFB8
  W32(c->r[1]+0x00000160u,c->r[28]); // 8028EFBC
  c->r[28]=c->r[3]|c->r[3]; // 8028EFC0
  W32(c->r[6]+0x00000000u,c->r[0]); // 8028EFC4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8028EFC8
  cmps(c,0,(int32_t)c->r[0],0); // 8028EFCC
  if (crb(c,2)) { goto L_8028EFF4; } // 8028EFD0
  c->r[3]=R32(c->r[4]+0x00000008u); // 8028EFD4
  c->r[4]=R32(c->r[28]+0x00000364u); // 8028EFD8
  c->lr=0x8028EFE0u; f_801F0C20(c); // 8028EFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8028EFE0
  if (!crb(c,2)) { goto L_8028EFF4; } // 8028EFE4
  c->r[0]=R32(c->r[28]+0x0000036Cu); // 8028EFE8
  cmpu(c,0,c->r[0],c->r[30]); // 8028EFEC
  if (crb(c,2)) { goto L_8028F150; } // 8028EFF0
L_8028EFF4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8028EFF4
  c->r[3]=c->r[28]|c->r[28]; // 8028EFF8
  c->r[4]=c->r[31]|c->r[31]; // 8028EFFC
  c->r[12]=R32(c->r[12]+0x00000028u); // 8028F000
  c->ctr=c->r[12]; // 8028F004
  if (true) { c->lr=0x8028F00Cu; dispatch(c,c->ctr); } // 8028F008
  c->r[3]=R32(c->r[13]+0xFFFFA400u); // 8028F00C
  c->r[3]=c->r[3]+0x00000001u; // 8028F010
  c->r[0]=c->r[3]+0x00010000u; // 8028F014
  W32(c->r[13]+0xFFFFA400u,c->r[3]); // 8028F018
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8028F01C
  if (!crb(c,2)) { goto L_8028F02C; } // 8028F020
  c->r[3]=c->r[3]+0x00000001u; // 8028F024
  W32(c->r[13]+0xFFFFA400u,c->r[3]); // 8028F028
L_8028F02C:;
  W32(c->r[28]+0x00000378u,c->r[3]); // 8028F02C
  c->r[3]=c->r[30]|c->r[30]; // 8028F030
  {uint32_t ea=c->r[2]+0xFFFFCD60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F034
  c->r[5]=c->r[1]+0x00000008u; // 8028F038
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8028F03C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8028F040
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8028F044
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8028F048
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8028F04C
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8028F050
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8028F054
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8028F058
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8028F05C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8028F060
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8028F064
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8028F068
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8028F06C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8028F070
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8028F074
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 8028F078
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8028F07C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8028F080
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8028F084
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8028F088
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 8028F08C
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8028F090
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8028F094
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8028F098
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8028F09C
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8028F0A0
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8028F0A4
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8028F0A8
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8028F0AC
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8028F0B0
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8028F0B4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 8028F0B8
  c->r[4]=R32(c->r[29]+0x00000008u); // 8028F0BC
  c->lr=0x8028F0C4u; f_80289EFC(c); // 8028F0C0
  cmps(c,0,(int32_t)c->r[3],0); // 8028F0C4
  if (!crb(c,2)) { goto L_8028F0EC; } // 8028F0C8
  c->r[3]=0u+0x803D0000u; // 8028F0CC
  c->r[4]=R32(c->r[29]+0x00000008u); // 8028F0D0
  c->r[3]=c->r[3]+0x00002B50u; // 8028F0D4
  c->r[3]=c->r[3]+0x00000341u; // 8028F0D8
  c->lr=0x8028F0E0u; f_8029D500(c); // 8028F0DC
  c->r[0]=0u+0xFFFFFFFFu; // 8028F0E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028F0E4
  goto L_8028F150; // 8028F0E8
L_8028F0EC:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8028F0EC
  c->r[4]=c->r[30]|c->r[30]; // 8028F0F0
  c->r[6]=R32(c->r[28]+0x00000374u); // 8028F0F4
  c->r[5]=c->r[1]+0x00000008u; // 8028F0F8
  c->r[7]=R32(c->r[28]+0x00000378u); // 8028F0FC
  c->lr=0x8028F104u; f_8028F47C(c); // 8028F100
  cmps(c,0,(int32_t)c->r[3],0); // 8028F104
  W32(c->r[28]+0x00000014u,c->r[3]); // 8028F108
  if (!crb(c,2)) { goto L_8028F12C; } // 8028F10C
  c->r[0]=0u+0xFFFFFFFFu; // 8028F110
  c->r[3]=0u+0x803D0000u; // 8028F114
  c->r[3]=c->r[3]+0x00002B50u; // 8028F118
  W32(c->r[31]+0x00000000u,c->r[0]); // 8028F11C
  c->r[3]=c->r[3]+0x00000367u; // 8028F120
  c->lr=0x8028F128u; f_8029D4B0(c); // 8028F124
  goto L_8028F150; // 8028F128
L_8028F12C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8028F12C
  W32(c->r[28]+0x0000035Cu,c->r[0]); // 8028F130
  c->r[0]=R32(c->r[29]+0x00000004u); // 8028F134
  W32(c->r[28]+0x00000360u,c->r[0]); // 8028F138
  c->r[0]=R32(c->r[29]+0x00000008u); // 8028F13C
  W32(c->r[28]+0x00000364u,c->r[0]); // 8028F140
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8028F144
  W32(c->r[28]+0x00000368u,c->r[0]); // 8028F148
  W32(c->r[28]+0x0000036Cu,c->r[30]); // 8028F14C
L_8028F150:;
  c->r[0]=R32(c->r[1]+0x00000174u); // 8028F150
  c->r[31]=R32(c->r[1]+0x0000016Cu); // 8028F154
  c->r[30]=R32(c->r[1]+0x00000168u); // 8028F158
  c->r[29]=R32(c->r[1]+0x00000164u); // 8028F15C
  c->r[28]=R32(c->r[1]+0x00000160u); // 8028F160
  c->lr=c->r[0]; // 8028F164
  c->r[1]=c->r[1]+0x00000170u; // 8028F168
  return; // 8028F16C
}

// fn_8028F170
void f_8028F170(Ctx* __restrict c) {
  trace_call(0x8028F170u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028F170
  c->r[0]=c->lr; // 8028F174
  c->r[5]=0u+0x000001A0u; // 8028F178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028F17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028F180
  c->r[31]=0u+0x00000000u; // 8028F184
  W32(c->r[1]+0x00000008u,c->r[30]); // 8028F188
  c->r[30]=c->r[3]|c->r[3]; // 8028F18C
  c->r[3]=c->r[3]+0x00000018u; // 8028F190
  W32(c->r[4]+0x00000000u,c->r[31]); // 8028F194
  c->r[4]=0u+0x00000000u; // 8028F198
  c->lr=0x8028F1A0u; f_8000443C(c); // 8028F19C
  {uint32_t ea=c->r[2]+0xFFFFCD64u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F1A0
  c->r[3]=0u+0x00000002u; // 8028F1A4
  {uint32_t ea=c->r[2]+0xFFFFCD60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F1A8
  c->r[0]=0u+0x00000005u; // 8028F1AC
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 8028F1B0
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8028F1B4
  W32(c->r[30]+0x000000A4u,c->r[31]); // 8028F1B8
  {uint32_t ea=c->r[30]+0x000000D8u; WF32(ea,c->f[1]);} // 8028F1BC
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[1]);} // 8028F1C0
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[1]);} // 8028F1C4
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[1]);} // 8028F1C8
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8028F1CC
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 8028F1D0
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8028F1D4
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8028F1D8
  {uint32_t ea=c->r[30]+0x00000120u; WF32(ea,c->f[1]);} // 8028F1DC
  {uint32_t ea=c->r[30]+0x00000124u; WF32(ea,c->f[1]);} // 8028F1E0
  {uint32_t ea=c->r[30]+0x00000128u; WF32(ea,c->f[1]);} // 8028F1E4
  {uint32_t ea=c->r[30]+0x0000012Cu; WF32(ea,c->f[1]);} // 8028F1E8
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 8028F1EC
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 8028F1F0
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 8028F1F4
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028F1F8
  {uint32_t ea=c->r[30]+0x00000168u; WF32(ea,c->f[1]);} // 8028F1FC
  {uint32_t ea=c->r[30]+0x00000164u; WF32(ea,c->f[0]);} // 8028F200
  {uint32_t ea=c->r[30]+0x00000170u; WF32(ea,c->f[1]);} // 8028F204
  {uint32_t ea=c->r[30]+0x0000016Cu; WF32(ea,c->f[0]);} // 8028F208
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[1]);} // 8028F20C
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 8028F210
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 8028F214
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 8028F218
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 8028F21C
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[1]);} // 8028F220
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[0]);} // 8028F224
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 8028F228
  W8(c->r[30]+0x00000078u,c->r[3]); // 8028F22C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8028F230
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8028F234
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 8028F238
  {uint32_t ea=c->r[30]+0x00000088u; WF32(ea,c->f[1]);} // 8028F23C
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 8028F240
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 8028F244
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 8028F248
  W8(c->r[30]+0x00000098u,c->r[3]); // 8028F24C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028F250
  c->r[30]=R32(c->r[1]+0x00000008u); // 8028F254
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028F258
  c->lr=c->r[0]; // 8028F25C
  c->r[1]=c->r[1]+0x00000010u; // 8028F260
  return; // 8028F264
}

// fn_8028F268
void f_8028F268(Ctx* __restrict c) {
  trace_call(0x8028F268u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028F268
  c->r[0]=c->lr; // 8028F26C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028F270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028F274
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028F278
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028F27C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028F280
  c->r[28]=c->r[3]|c->r[3]; // 8028F284
  c->r[4]=R32(c->r[3]+0x00000010u); // 8028F288
  c->r[3]=R32(c->r[4]+0x00000038u); // 8028F28C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028F290
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8028F294
  c->ctr=c->r[12]; // 8028F298
  if (true) { c->lr=0x8028F2A0u; dispatch(c,c->ctr); } // 8028F29C
  c->r[3]=R32(c->r[28]+0x00000358u); // 8028F2A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8028F2A4
  cmpu(c,0,c->r[0],0x00000001u); // 8028F2A8
  if (crb(c,1)) { goto L_8028F338; } // 8028F2AC
  c->r[3]=R32(c->r[28]+0x00000370u); // 8028F2B0
  c->r[29]=0u+0x00000000u; // 8028F2B4
  c->r[31]=R32(c->r[28]+0x00000374u); // 8028F2B8
  c->r[30]=R32(c->r[3]+0x00000004u); // 8028F2BC
L_8028F2C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028F2C0
  if (crb(c,2)) { goto L_8028F308; } // 8028F2C4
  c->r[3]=c->r[30]|c->r[30]; // 8028F2C8
  c->r[4]=c->r[31]|c->r[31]; // 8028F2CC
  c->r[5]=0u+0xFFFFFFFFu; // 8028F2D0
  c->r[6]=0u+0xFFFFFFFFu; // 8028F2D4
  c->lr=0x8028F2DCu; f_80297FA8(c); // 8028F2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8028F2DC
  if (crb(c,2)) { goto L_8028F300; } // 8028F2E0
  c->r[3]=c->r[30]|c->r[30]; // 8028F2E4
  c->lr=0x8028F2ECu; f_80297F90(c); // 8028F2E8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8028F2EC
  cmpu(c,0,c->r[0],0x00000001u); // 8028F2F0
  if (crb(c,1)) { goto L_8028F300; } // 8028F2F4
  c->r[29]=0u+0x00000001u; // 8028F2F8
  goto L_8028F308; // 8028F2FC
L_8028F300:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8028F300
  IRQCHK(c); goto L_8028F2C0; // 8028F304
L_8028F308:;
  cmps(c,0,(int32_t)c->r[29],0); // 8028F308
  if (crb(c,2)) { goto L_8028F314; } // 8028F30C
  goto L_8028F338; // 8028F310
L_8028F314:;
  c->r[0]=R32(c->r[28]+0x00000380u); // 8028F314
  cmps(c,0,(int32_t)c->r[0],1); // 8028F318
  if (!crb(c,2)) { goto L_8028F330; } // 8028F31C
  c->r[0]=0u+0x00000000u; // 8028F320
  W32(c->r[28]+0x00000358u,c->r[0]); // 8028F324
  W32(c->r[28]+0x00000380u,c->r[0]); // 8028F328
  goto L_8028F338; // 8028F32C
L_8028F330:;
  c->r[0]=0u+0x00000003u; // 8028F330
  W32(c->r[28]+0x00000358u,c->r[0]); // 8028F334
L_8028F338:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8028F338
  c->r[3]=R32(c->r[3]+0x00000038u); // 8028F33C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8028F340
  c->r[12]=R32(c->r[12]+0x00000010u); // 8028F344
  c->ctr=c->r[12]; // 8028F348
  if (true) { c->lr=0x8028F350u; dispatch(c,c->ctr); } // 8028F34C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028F350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028F354
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028F358
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028F35C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028F360
  c->lr=c->r[0]; // 8028F364
  c->r[1]=c->r[1]+0x00000020u; // 8028F368
  return; // 8028F36C
}

// fn_8028F370
void f_8028F370(Ctx* __restrict c) {
  trace_call(0x8028F370u);
  c->r[0]=0u+0x00000000u; // 8028F370
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028F374
  return; // 8028F378
}

// fn_8028F37C
void f_8028F37C(Ctx* __restrict c) {
  trace_call(0x8028F37Cu);
  c->r[0]=0u+0x00000000u; // 8028F37C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028F380
  return; // 8028F384
}

// fn_8028F388
void f_8028F388(Ctx* __restrict c) {
  trace_call(0x8028F388u);
  c->r[0]=0u+0x00000000u; // 8028F388
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F38C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028F390
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F394
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8028F398
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8028F39C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8028F3A0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 8028F3A4
  return; // 8028F3A8
}

// fn_8028F3AC
void f_8028F3AC(Ctx* __restrict c) {
  trace_call(0x8028F3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028F3AC
  c->r[0]=c->lr; // 8028F3B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028F3B4
  c->r[0]=0u+0x00000000u; // 8028F3B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8028F3BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8028F3C0
  c->r[30]=0u+0x00000000u; // 8028F3C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8028F3C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8028F3CC
  c->r[28]=0u+0x00000000u; // 8028F3D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028F3D4
  c->r[4]=R32(c->r[3]+0x00000370u); // 8028F3D8
  c->r[31]=R32(c->r[3]+0x00000374u); // 8028F3DC
  c->r[29]=R32(c->r[4]+0x00000008u); // 8028F3E0
  goto L_8028F41C; // 8028F3E4
L_8028F3E8:;
  c->r[3]=c->r[29]|c->r[29]; // 8028F3E8
  c->r[4]=c->r[31]|c->r[31]; // 8028F3EC
  c->r[5]=0u+0xFFFFFFFFu; // 8028F3F0
  c->r[6]=0u+0xFFFFFFFFu; // 8028F3F4
  c->lr=0x8028F3FCu; f_80297FA8(c); // 8028F3F8
  cmps(c,0,(int32_t)c->r[3],0); // 8028F3FC
  if (crb(c,2)) { goto L_8028F418; } // 8028F400
  cmps(c,0,(int32_t)c->r[28],0); // 8028F404
  if (!crb(c,2)) { goto L_8028F414; } // 8028F408
  c->r[30]=c->r[29]|c->r[29]; // 8028F40C
  goto L_8028F424; // 8028F410
L_8028F414:;
  c->r[28]=c->r[28]+0x00000001u; // 8028F414
L_8028F418:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 8028F418
L_8028F41C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8028F41C
  if (!crb(c,2)) { IRQCHK(c); goto L_8028F3E8; } // 8028F420
L_8028F424:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028F424
  if (crb(c,2)) { goto L_8028F438; } // 8028F428
  c->r[3]=c->r[30]|c->r[30]; // 8028F42C
  c->lr=0x8028F434u; f_8029804C(c); // 8028F430
  goto L_8028F43C; // 8028F434
L_8028F438:;
  {uint32_t ea=c->r[2]+0xFFFFCD60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F438
L_8028F43C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8028F43C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8028F440
  c->r[30]=R32(c->r[1]+0x00000018u); // 8028F444
  c->r[29]=R32(c->r[1]+0x00000014u); // 8028F448
  c->r[28]=R32(c->r[1]+0x00000010u); // 8028F44C
  c->lr=c->r[0]; // 8028F450
  c->r[1]=c->r[1]+0x00000020u; // 8028F454
  return; // 8028F458
}

// fn_8028F45C
void f_8028F45C(Ctx* __restrict c) {
  trace_call(0x8028F45Cu);
  c->r[0]=0u+0x00000000u; // 8028F45C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8028F460
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 8028F464
  return; // 8028F468
}

// fn_8028F46C
void f_8028F46C(Ctx* __restrict c) {
  trace_call(0x8028F46Cu);
  c->r[0]=0u+0x00000000u; // 8028F46C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8028F470
  c->r[3]=R32(c->r[3]+0x0000017Cu); // 8028F474
  return; // 8028F478
}

// fn_8028F47C
void f_8028F47C(Ctx* __restrict c) {
  trace_call(0x8028F47Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028F47C
  c->r[0]=c->lr; // 8028F480
  W32(c->r[1]+0x00000064u,c->r[0]); // 8028F484
  c->r[11]=c->r[1]+0x00000060u; // 8028F488
  c->lr=0x8028F490u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028F48C
  c->r[31]=c->r[1]|c->r[1]; // 8028F490
  c->r[0]=R32(c->r[5]+0x00000004u); // 8028F494
  c->r[24]=c->r[3]|c->r[3]; // 8028F498
  c->r[26]=c->r[4]|c->r[4]; // 8028F49C
  c->r[27]=c->r[5]|c->r[5]; // 8028F4A0
  cmps(c,0,(int32_t)c->r[0],1); // 8028F4A4
  c->r[28]=c->r[6]|c->r[6]; // 8028F4A8
  c->r[29]=c->r[7]|c->r[7]; // 8028F4AC
  if (crb(c,2)) { goto L_8028F87C; } // 8028F4B0
  if (!crb(c,0)) { goto L_8028FC4C; } // 8028F4B4
  cmps(c,0,(int32_t)c->r[0],0); // 8028F4B8
  if (!crb(c,0)) { goto L_8028F4C4; } // 8028F4BC
  goto L_8028FC4C; // 8028F4C0
L_8028F4C4:;
  c->r[5]=0u+0x803D0000u; // 8028F4C4
  c->r[4]=R32(c->r[24]+0x00000004u); // 8028F4C8
  c->r[5]=c->r[5]+0x00002F14u; // 8028F4CC
  c->r[3]=0u+0x00000360u; // 8028F4D0
  c->r[6]=0u+0x00000004u; // 8028F4D4
  c->lr=0x8028F4DCu; f_8029C154(c); // 8028F4D8
  cmps(c,0,(int32_t)c->r[3],0); // 8028F4DC
  c->r[30]=c->r[3]|c->r[3]; // 8028F4E0
  if (crb(c,2)) { goto L_8028F804; } // 8028F4E4
  c->r[25]=0u+0x00000000u; // 8028F4E8
  c->r[6]=0u+0x804C0000u; // 8028F4EC
  W32(c->r[3]+0x00000000u,c->r[25]); // 8028F4F0
  c->r[6]=c->r[6]+0xFFFFD138u; // 8028F4F4
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F4F8
  c->r[4]=0u+0x00000000u; // 8028F4FC
  W32(c->r[3]+0x00000004u,c->r[25]); // 8028F500
  c->r[5]=0u+0x00000188u; // 8028F504
  W32(c->r[3]+0x00000008u,c->r[25]); // 8028F508
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8028F50C
  W32(c->r[3]+0x00000010u,c->r[24]); // 8028F510
  c->r[0]=R32(c->r[24]+0x00000030u); // 8028F514
  W32(c->r[31]+0x00000034u,c->r[1]); // 8028F518
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028F51C
  c->r[0]=R32(c->r[27]+0x00000000u); // 8028F520
  W32(c->r[3]+0x00000018u,c->r[0]); // 8028F524
  W32(c->r[3]+0x0000001Cu,c->r[25]); // 8028F528
  W32(c->r[3]+0x00000020u,c->r[25]); // 8028F52C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8028F530
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 8028F534
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 8028F538
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 8028F53C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8028F540
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8028F544
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8028F548
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8028F54C
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8028F550
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 8028F554
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8028F558
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8028F55C
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 8028F560
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 8028F564
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 8028F568
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 8028F56C
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[0]);} // 8028F570
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8028F574
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 8028F578
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[0]);} // 8028F57C
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[0]);} // 8028F580
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 8028F584
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 8028F588
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 8028F58C
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[0]);} // 8028F590
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[0]);} // 8028F594
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[0]);} // 8028F598
  {uint32_t ea=c->r[3]+0x0000013Cu; WF32(ea,c->f[0]);} // 8028F59C
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 8028F5A0
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[0]);} // 8028F5A4
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[0]);} // 8028F5A8
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[0]);} // 8028F5AC
  c->r[3]=c->r[3]+0x00000028u; // 8028F5B0
  c->lr=0x8028F5B8u; f_8000443C(c); // 8028F5B4
  c->r[3]=c->r[30]+0x00000028u; // 8028F5B8
  c->r[4]=0u+0x00000000u; // 8028F5BC
  c->r[5]=0u+0x000001A0u; // 8028F5C0
  c->lr=0x8028F5C8u; f_8000443C(c); // 8028F5C4
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F5C8
  c->r[24]=0u+0x00000002u; // 8028F5CC
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F5D0
  c->r[23]=0u+0x00000005u; // 8028F5D4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 8028F5D8
  c->r[3]=c->r[30]+0x00000028u; // 8028F5DC
  c->r[4]=0u+0x00000000u; // 8028F5E0
  c->r[5]=0u+0x000001A0u; // 8028F5E4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028F5E8
  W32(c->r[30]+0x000000B4u,c->r[25]); // 8028F5EC
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8028F5F0
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 8028F5F4
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8028F5F8
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8028F5FC
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[1]);} // 8028F600
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[1]);} // 8028F604
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[1]);} // 8028F608
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[1]);} // 8028F60C
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 8028F610
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 8028F614
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 8028F618
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028F61C
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[1]);} // 8028F620
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[1]);} // 8028F624
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[1]);} // 8028F628
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028F62C
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[1]);} // 8028F630
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 8028F634
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[1]);} // 8028F638
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028F63C
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[1]);} // 8028F640
  {uint32_t ea=c->r[30]+0x00000184u; WF32(ea,c->f[0]);} // 8028F644
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 8028F648
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 8028F64C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8028F650
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028F654
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8028F658
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 8028F65C
  W8(c->r[30]+0x00000088u,c->r[24]); // 8028F660
  W32(c->r[30]+0x0000006Cu,c->r[23]); // 8028F664
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 8028F668
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 8028F66C
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[1]);} // 8028F670
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028F674
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 8028F678
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 8028F67C
  W8(c->r[30]+0x000000A8u,c->r[24]); // 8028F680
  c->lr=0x8028F688u; f_8000443C(c); // 8028F684
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F688
  c->r[3]=c->r[30]+0x000001C8u; // 8028F68C
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F690
  c->r[4]=0u+0x00000000u; // 8028F694
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 8028F698
  c->r[5]=0u+0x00000188u; // 8028F69C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028F6A0
  W32(c->r[30]+0x000000B4u,c->r[25]); // 8028F6A4
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8028F6A8
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 8028F6AC
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8028F6B0
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8028F6B4
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[1]);} // 8028F6B8
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[1]);} // 8028F6BC
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[1]);} // 8028F6C0
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[1]);} // 8028F6C4
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 8028F6C8
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 8028F6CC
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 8028F6D0
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028F6D4
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[1]);} // 8028F6D8
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[1]);} // 8028F6DC
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[1]);} // 8028F6E0
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028F6E4
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[1]);} // 8028F6E8
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 8028F6EC
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[1]);} // 8028F6F0
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028F6F4
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[1]);} // 8028F6F8
  {uint32_t ea=c->r[30]+0x00000184u; WF32(ea,c->f[0]);} // 8028F6FC
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 8028F700
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 8028F704
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8028F708
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028F70C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8028F710
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 8028F714
  W8(c->r[30]+0x00000088u,c->r[24]); // 8028F718
  W32(c->r[30]+0x0000006Cu,c->r[23]); // 8028F71C
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 8028F720
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 8028F724
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[1]);} // 8028F728
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028F72C
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 8028F730
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 8028F734
  W8(c->r[30]+0x000000A8u,c->r[24]); // 8028F738
  {uint32_t ea=c->r[30]+0x00000268u; WF32(ea,c->f[0]);} // 8028F73C
  {uint32_t ea=c->r[30]+0x0000026Cu; WF32(ea,c->f[0]);} // 8028F740
  {uint32_t ea=c->r[30]+0x00000270u; WF32(ea,c->f[0]);} // 8028F744
  {uint32_t ea=c->r[30]+0x00000274u; WF32(ea,c->f[0]);} // 8028F748
  {uint32_t ea=c->r[30]+0x00000278u; WF32(ea,c->f[0]);} // 8028F74C
  {uint32_t ea=c->r[30]+0x0000027Cu; WF32(ea,c->f[0]);} // 8028F750
  {uint32_t ea=c->r[30]+0x00000280u; WF32(ea,c->f[0]);} // 8028F754
  {uint32_t ea=c->r[30]+0x00000284u; WF32(ea,c->f[0]);} // 8028F758
  {uint32_t ea=c->r[30]+0x00000288u; WF32(ea,c->f[0]);} // 8028F75C
  {uint32_t ea=c->r[30]+0x0000028Cu; WF32(ea,c->f[0]);} // 8028F760
  {uint32_t ea=c->r[30]+0x00000290u; WF32(ea,c->f[0]);} // 8028F764
  {uint32_t ea=c->r[30]+0x00000294u; WF32(ea,c->f[0]);} // 8028F768
  {uint32_t ea=c->r[30]+0x00000298u; WF32(ea,c->f[0]);} // 8028F76C
  {uint32_t ea=c->r[30]+0x0000029Cu; WF32(ea,c->f[0]);} // 8028F770
  {uint32_t ea=c->r[30]+0x000002A0u; WF32(ea,c->f[0]);} // 8028F774
  {uint32_t ea=c->r[30]+0x000002A4u; WF32(ea,c->f[0]);} // 8028F778
  {uint32_t ea=c->r[30]+0x000002B0u; WF32(ea,c->f[0]);} // 8028F77C
  {uint32_t ea=c->r[30]+0x000002B4u; WF32(ea,c->f[0]);} // 8028F780
  {uint32_t ea=c->r[30]+0x000002B8u; WF32(ea,c->f[0]);} // 8028F784
  {uint32_t ea=c->r[30]+0x000002BCu; WF32(ea,c->f[0]);} // 8028F788
  {uint32_t ea=c->r[30]+0x000002C0u; WF32(ea,c->f[0]);} // 8028F78C
  {uint32_t ea=c->r[30]+0x000002C4u; WF32(ea,c->f[0]);} // 8028F790
  {uint32_t ea=c->r[30]+0x000002C8u; WF32(ea,c->f[0]);} // 8028F794
  {uint32_t ea=c->r[30]+0x000002CCu; WF32(ea,c->f[0]);} // 8028F798
  {uint32_t ea=c->r[30]+0x000002D0u; WF32(ea,c->f[0]);} // 8028F79C
  {uint32_t ea=c->r[30]+0x000002D4u; WF32(ea,c->f[0]);} // 8028F7A0
  {uint32_t ea=c->r[30]+0x000002D8u; WF32(ea,c->f[0]);} // 8028F7A4
  {uint32_t ea=c->r[30]+0x000002DCu; WF32(ea,c->f[0]);} // 8028F7A8
  {uint32_t ea=c->r[30]+0x000002E0u; WF32(ea,c->f[0]);} // 8028F7AC
  {uint32_t ea=c->r[30]+0x000002E4u; WF32(ea,c->f[0]);} // 8028F7B0
  {uint32_t ea=c->r[30]+0x000002E8u; WF32(ea,c->f[0]);} // 8028F7B4
  {uint32_t ea=c->r[30]+0x000002ECu; WF32(ea,c->f[0]);} // 8028F7B8
  c->lr=0x8028F7C0u; f_8000443C(c); // 8028F7BC
  c->r[3]=R32(c->r[13]+0xFFFFA3F8u); // 8028F7C0
  W32(c->r[30]+0x00000350u,c->r[29]); // 8028F7C4
  c->r[3]=c->r[3]+0x00000001u; // 8028F7C8
  c->r[0]=c->r[3]+0x00010000u; // 8028F7CC
  W32(c->r[30]+0x00000354u,c->r[28]); // 8028F7D0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8028F7D4
  W32(c->r[13]+0xFFFFA3F8u,c->r[3]); // 8028F7D8
  if (!crb(c,2)) { goto L_8028F7E8; } // 8028F7DC
  c->r[0]=c->r[3]+0x00000001u; // 8028F7E0
  W32(c->r[13]+0xFFFFA3F8u,c->r[0]); // 8028F7E4
L_8028F7E8:;
  c->r[4]=R32(c->r[13]+0xFFFFA3F8u); // 8028F7E8
  c->r[3]=0u+0x804C0000u; // 8028F7EC
  c->r[0]=0u+0x00000000u; // 8028F7F0
  W32(c->r[30]+0x00000358u,c->r[4]); // 8028F7F4
  c->r[3]=c->r[3]+0xFFFFD0E8u; // 8028F7F8
  W32(c->r[30]+0x0000035Cu,c->r[0]); // 8028F7FC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8028F800
L_8028F804:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028F804
  if (!crb(c,2)) { goto L_8028F828; } // 8028F808
  c->r[3]=0u+0x803D0000u; // 8028F80C
  c->r[4]=0u+0xFFFFFFFDu; // 8028F810
  c->r[3]=c->r[3]+0x00002F14u; // 8028F814
  c->r[3]=c->r[3]+0x0000000Cu; // 8028F818
  c->lr=0x8028F820u; f_8029D638(c); // 8028F81C
  c->r[30]=0u+0x00000000u; // 8028F820
  goto L_8028F874; // 8028F824
L_8028F828:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8028F828
  c->r[3]=c->r[30]|c->r[30]; // 8028F82C
  c->r[4]=c->r[27]|c->r[27]; // 8028F830
  c->r[5]=c->r[26]|c->r[26]; // 8028F834
  c->r[12]=R32(c->r[12]+0x00000028u); // 8028F838
  c->ctr=c->r[12]; // 8028F83C
  if (true) { c->lr=0x8028F844u; dispatch(c,c->ctr); } // 8028F840
  cmps(c,0,(int32_t)c->r[3],0); // 8028F844
  if (!crb(c,2)) { goto L_8028F874; } // 8028F848
  cmps(c,0,(int32_t)c->r[30],0); // 8028F84C
  if (crb(c,2)) { goto L_8028F870; } // 8028F850
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8028F854
  c->r[0]=0u+0x00000001u; // 8028F858
  c->r[3]=c->r[30]|c->r[30]; // 8028F85C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028F860
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8028F864
  c->ctr=c->r[12]; // 8028F868
  if (true) { c->lr=0x8028F870u; dispatch(c,c->ctr); } // 8028F86C
L_8028F870:;
  c->r[30]=0u+0x00000000u; // 8028F870
L_8028F874:;
  c->r[3]=c->r[30]|c->r[30]; // 8028F874
  goto L_8028FC60; // 8028F878
L_8028F87C:;
  c->r[5]=0u+0x803D0000u; // 8028F87C
  c->r[4]=R32(c->r[24]+0x00000004u); // 8028F880
  c->r[5]=c->r[5]+0x00002F14u; // 8028F884
  c->r[3]=0u+0x00000378u; // 8028F888
  c->r[5]=c->r[5]+0x00000016u; // 8028F88C
  c->r[6]=0u+0x00000004u; // 8028F890
  c->lr=0x8028F898u; f_8029C154(c); // 8028F894
  cmps(c,0,(int32_t)c->r[3],0); // 8028F898
  c->r[30]=c->r[3]|c->r[3]; // 8028F89C
  if (crb(c,2)) { goto L_8028FBD4; } // 8028F8A0
  c->r[23]=0u+0x00000000u; // 8028F8A4
  c->r[6]=0u+0x804C0000u; // 8028F8A8
  W32(c->r[3]+0x00000000u,c->r[23]); // 8028F8AC
  c->r[6]=c->r[6]+0xFFFFD138u; // 8028F8B0
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F8B4
  c->r[4]=0u+0x00000000u; // 8028F8B8
  W32(c->r[3]+0x00000004u,c->r[23]); // 8028F8BC
  c->r[5]=0u+0x00000188u; // 8028F8C0
  W32(c->r[3]+0x00000008u,c->r[23]); // 8028F8C4
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8028F8C8
  W32(c->r[3]+0x00000010u,c->r[24]); // 8028F8CC
  c->r[0]=R32(c->r[24]+0x00000030u); // 8028F8D0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8028F8D4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028F8D8
  c->r[0]=R32(c->r[27]+0x00000000u); // 8028F8DC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8028F8E0
  W32(c->r[3]+0x0000001Cu,c->r[23]); // 8028F8E4
  W32(c->r[3]+0x00000020u,c->r[23]); // 8028F8E8
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8028F8EC
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 8028F8F0
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 8028F8F4
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 8028F8F8
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8028F8FC
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8028F900
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8028F904
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8028F908
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8028F90C
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 8028F910
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8028F914
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8028F918
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 8028F91C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 8028F920
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 8028F924
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 8028F928
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[0]);} // 8028F92C
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8028F930
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 8028F934
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[0]);} // 8028F938
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[0]);} // 8028F93C
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 8028F940
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 8028F944
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 8028F948
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[0]);} // 8028F94C
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[0]);} // 8028F950
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[0]);} // 8028F954
  {uint32_t ea=c->r[3]+0x0000013Cu; WF32(ea,c->f[0]);} // 8028F958
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 8028F95C
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[0]);} // 8028F960
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[0]);} // 8028F964
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[0]);} // 8028F968
  c->r[3]=c->r[3]+0x00000028u; // 8028F96C
  c->lr=0x8028F974u; f_8000443C(c); // 8028F970
  c->r[3]=c->r[30]+0x00000028u; // 8028F974
  c->r[4]=0u+0x00000000u; // 8028F978
  c->r[5]=0u+0x000001A0u; // 8028F97C
  c->lr=0x8028F984u; f_8000443C(c); // 8028F980
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028F984
  c->r[24]=0u+0x00000002u; // 8028F988
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028F98C
  c->r[25]=0u+0x00000005u; // 8028F990
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 8028F994
  c->r[3]=c->r[30]+0x00000028u; // 8028F998
  c->r[4]=0u+0x00000000u; // 8028F99C
  c->r[5]=0u+0x000001A0u; // 8028F9A0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028F9A4
  W32(c->r[30]+0x000000B4u,c->r[23]); // 8028F9A8
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8028F9AC
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 8028F9B0
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8028F9B4
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8028F9B8
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[1]);} // 8028F9BC
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[1]);} // 8028F9C0
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[1]);} // 8028F9C4
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[1]);} // 8028F9C8
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 8028F9CC
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 8028F9D0
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 8028F9D4
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028F9D8
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[1]);} // 8028F9DC
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[1]);} // 8028F9E0
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[1]);} // 8028F9E4
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028F9E8
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[1]);} // 8028F9EC
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 8028F9F0
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[1]);} // 8028F9F4
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028F9F8
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[1]);} // 8028F9FC
  {uint32_t ea=c->r[30]+0x00000184u; WF32(ea,c->f[0]);} // 8028FA00
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 8028FA04
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 8028FA08
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8028FA0C
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028FA10
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8028FA14
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 8028FA18
  W8(c->r[30]+0x00000088u,c->r[24]); // 8028FA1C
  W32(c->r[30]+0x0000006Cu,c->r[25]); // 8028FA20
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 8028FA24
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 8028FA28
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[1]);} // 8028FA2C
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028FA30
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 8028FA34
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 8028FA38
  W8(c->r[30]+0x000000A8u,c->r[24]); // 8028FA3C
  c->lr=0x8028FA44u; f_8000443C(c); // 8028FA40
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028FA44
  c->r[3]=c->r[30]+0x000001C8u; // 8028FA48
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028FA4C
  c->r[4]=0u+0x00000000u; // 8028FA50
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 8028FA54
  c->r[5]=0u+0x00000188u; // 8028FA58
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028FA5C
  W32(c->r[30]+0x000000B4u,c->r[23]); // 8028FA60
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8028FA64
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 8028FA68
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[1]);} // 8028FA6C
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[1]);} // 8028FA70
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[1]);} // 8028FA74
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[1]);} // 8028FA78
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[1]);} // 8028FA7C
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[1]);} // 8028FA80
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[1]);} // 8028FA84
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[1]);} // 8028FA88
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 8028FA8C
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028FA90
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[1]);} // 8028FA94
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[1]);} // 8028FA98
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[1]);} // 8028FA9C
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028FAA0
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[1]);} // 8028FAA4
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 8028FAA8
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[1]);} // 8028FAAC
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028FAB0
  {uint32_t ea=c->r[30]+0x00000188u; WF32(ea,c->f[1]);} // 8028FAB4
  {uint32_t ea=c->r[30]+0x00000184u; WF32(ea,c->f[0]);} // 8028FAB8
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 8028FABC
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[1]);} // 8028FAC0
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8028FAC4
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028FAC8
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8028FACC
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 8028FAD0
  W8(c->r[30]+0x00000088u,c->r[24]); // 8028FAD4
  W32(c->r[30]+0x0000006Cu,c->r[25]); // 8028FAD8
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 8028FADC
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[1]);} // 8028FAE0
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[1]);} // 8028FAE4
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028FAE8
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 8028FAEC
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[1]);} // 8028FAF0
  W8(c->r[30]+0x000000A8u,c->r[24]); // 8028FAF4
  {uint32_t ea=c->r[30]+0x00000268u; WF32(ea,c->f[0]);} // 8028FAF8
  {uint32_t ea=c->r[30]+0x0000026Cu; WF32(ea,c->f[0]);} // 8028FAFC
  {uint32_t ea=c->r[30]+0x00000270u; WF32(ea,c->f[0]);} // 8028FB00
  {uint32_t ea=c->r[30]+0x00000274u; WF32(ea,c->f[0]);} // 8028FB04
  {uint32_t ea=c->r[30]+0x00000278u; WF32(ea,c->f[0]);} // 8028FB08
  {uint32_t ea=c->r[30]+0x0000027Cu; WF32(ea,c->f[0]);} // 8028FB0C
  {uint32_t ea=c->r[30]+0x00000280u; WF32(ea,c->f[0]);} // 8028FB10
  {uint32_t ea=c->r[30]+0x00000284u; WF32(ea,c->f[0]);} // 8028FB14
  {uint32_t ea=c->r[30]+0x00000288u; WF32(ea,c->f[0]);} // 8028FB18
  {uint32_t ea=c->r[30]+0x0000028Cu; WF32(ea,c->f[0]);} // 8028FB1C
  {uint32_t ea=c->r[30]+0x00000290u; WF32(ea,c->f[0]);} // 8028FB20
  {uint32_t ea=c->r[30]+0x00000294u; WF32(ea,c->f[0]);} // 8028FB24
  {uint32_t ea=c->r[30]+0x00000298u; WF32(ea,c->f[0]);} // 8028FB28
  {uint32_t ea=c->r[30]+0x0000029Cu; WF32(ea,c->f[0]);} // 8028FB2C
  {uint32_t ea=c->r[30]+0x000002A0u; WF32(ea,c->f[0]);} // 8028FB30
  {uint32_t ea=c->r[30]+0x000002A4u; WF32(ea,c->f[0]);} // 8028FB34
  {uint32_t ea=c->r[30]+0x000002B0u; WF32(ea,c->f[0]);} // 8028FB38
  {uint32_t ea=c->r[30]+0x000002B4u; WF32(ea,c->f[0]);} // 8028FB3C
  {uint32_t ea=c->r[30]+0x000002B8u; WF32(ea,c->f[0]);} // 8028FB40
  {uint32_t ea=c->r[30]+0x000002BCu; WF32(ea,c->f[0]);} // 8028FB44
  {uint32_t ea=c->r[30]+0x000002C0u; WF32(ea,c->f[0]);} // 8028FB48
  {uint32_t ea=c->r[30]+0x000002C4u; WF32(ea,c->f[0]);} // 8028FB4C
  {uint32_t ea=c->r[30]+0x000002C8u; WF32(ea,c->f[0]);} // 8028FB50
  {uint32_t ea=c->r[30]+0x000002CCu; WF32(ea,c->f[0]);} // 8028FB54
  {uint32_t ea=c->r[30]+0x000002D0u; WF32(ea,c->f[0]);} // 8028FB58
  {uint32_t ea=c->r[30]+0x000002D4u; WF32(ea,c->f[0]);} // 8028FB5C
  {uint32_t ea=c->r[30]+0x000002D8u; WF32(ea,c->f[0]);} // 8028FB60
  {uint32_t ea=c->r[30]+0x000002DCu; WF32(ea,c->f[0]);} // 8028FB64
  {uint32_t ea=c->r[30]+0x000002E0u; WF32(ea,c->f[0]);} // 8028FB68
  {uint32_t ea=c->r[30]+0x000002E4u; WF32(ea,c->f[0]);} // 8028FB6C
  {uint32_t ea=c->r[30]+0x000002E8u; WF32(ea,c->f[0]);} // 8028FB70
  {uint32_t ea=c->r[30]+0x000002ECu; WF32(ea,c->f[0]);} // 8028FB74
  c->lr=0x8028FB7Cu; f_8000443C(c); // 8028FB78
  c->r[3]=R32(c->r[13]+0xFFFFA3F8u); // 8028FB7C
  W32(c->r[30]+0x00000350u,c->r[29]); // 8028FB80
  c->r[3]=c->r[3]+0x00000001u; // 8028FB84
  c->r[0]=c->r[3]+0x00010000u; // 8028FB88
  W32(c->r[30]+0x00000354u,c->r[28]); // 8028FB8C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8028FB90
  W32(c->r[13]+0xFFFFA3F8u,c->r[3]); // 8028FB94
  if (!crb(c,2)) { goto L_8028FBA4; } // 8028FB98
  c->r[0]=c->r[3]+0x00000001u; // 8028FB9C
  W32(c->r[13]+0xFFFFA3F8u,c->r[0]); // 8028FBA0
L_8028FBA4:;
  c->r[4]=R32(c->r[13]+0xFFFFA3F8u); // 8028FBA4
  c->r[3]=0u+0x804C0000u; // 8028FBA8
  c->r[0]=0u+0x00000000u; // 8028FBAC
  W32(c->r[30]+0x00000358u,c->r[4]); // 8028FBB0
  c->r[3]=c->r[3]+0xFFFFD098u; // 8028FBB4
  W32(c->r[30]+0x0000035Cu,c->r[0]); // 8028FBB8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8028FBBC
  W32(c->r[30]+0x00000360u,c->r[0]); // 8028FBC0
  W32(c->r[30]+0x00000364u,c->r[0]); // 8028FBC4
  W32(c->r[30]+0x00000368u,c->r[0]); // 8028FBC8
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 8028FBCC
  W16(c->r[30]+0x00000370u,c->r[0]); // 8028FBD0
L_8028FBD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8028FBD4
  if (!crb(c,2)) { goto L_8028FBF8; } // 8028FBD8
  c->r[3]=0u+0x803D0000u; // 8028FBDC
  c->r[4]=0u+0xFFFFFFFDu; // 8028FBE0
  c->r[3]=c->r[3]+0x00002F14u; // 8028FBE4
  c->r[3]=c->r[3]+0x00000025u; // 8028FBE8
  c->lr=0x8028FBF0u; f_8029D638(c); // 8028FBEC
  c->r[30]=0u+0x00000000u; // 8028FBF0
  goto L_8028FC44; // 8028FBF4
L_8028FBF8:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8028FBF8
  c->r[3]=c->r[30]|c->r[30]; // 8028FBFC
  c->r[4]=c->r[27]|c->r[27]; // 8028FC00
  c->r[5]=c->r[26]|c->r[26]; // 8028FC04
  c->r[12]=R32(c->r[12]+0x00000028u); // 8028FC08
  c->ctr=c->r[12]; // 8028FC0C
  if (true) { c->lr=0x8028FC14u; dispatch(c,c->ctr); } // 8028FC10
  cmps(c,0,(int32_t)c->r[3],0); // 8028FC14
  if (!crb(c,2)) { goto L_8028FC44; } // 8028FC18
  cmps(c,0,(int32_t)c->r[30],0); // 8028FC1C
  if (crb(c,2)) { goto L_8028FC40; } // 8028FC20
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8028FC24
  c->r[0]=0u+0x00000001u; // 8028FC28
  c->r[3]=c->r[30]|c->r[30]; // 8028FC2C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028FC30
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8028FC34
  c->ctr=c->r[12]; // 8028FC38
  if (true) { c->lr=0x8028FC40u; dispatch(c,c->ctr); } // 8028FC3C
L_8028FC40:;
  c->r[30]=0u+0x00000000u; // 8028FC40
L_8028FC44:;
  c->r[3]=c->r[30]|c->r[30]; // 8028FC44
  goto L_8028FC60; // 8028FC48
L_8028FC4C:;
  c->r[3]=0u+0x803D0000u; // 8028FC4C
  c->r[3]=c->r[3]+0x00002F14u; // 8028FC50
  c->r[3]=c->r[3]+0x0000002Fu; // 8028FC54
  c->lr=0x8028FC5Cu; f_8029D4B0(c); // 8028FC58
  c->r[3]=0u+0x00000000u; // 8028FC5C
L_8028FC60:;
  c->r[10]=c->r[31]|c->r[31]; // 8028FC60
  c->r[11]=c->r[10]+0x00000060u; // 8028FC64
  c->lr=0x8028FC6Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8028FC68
  c->r[10]=R32(c->r[1]+0x00000000u); // 8028FC6C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8028FC70
  c->r[1]=c->r[10]|c->r[10]; // 8028FC74
  c->lr=c->r[0]; // 8028FC78
  return; // 8028FC7C
}

// fn_8028FC80
void f_8028FC80(Ctx* __restrict c) {
  trace_call(0x8028FC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028FC80
  c->r[0]=c->lr; // 8028FC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8028FC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8028FC8C
  c->r[31]=c->r[3]|c->r[3]; // 8028FC90
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8028FC94
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8028FC98
  c->ctr=c->r[12]; // 8028FC9C
  if (true) { c->lr=0x8028FCA4u; dispatch(c,c->ctr); } // 8028FCA0
  cmps(c,0,(int32_t)c->r[31],0); // 8028FCA4
  if (crb(c,2)) { goto L_8028FCC4; } // 8028FCA8
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 8028FCAC
  c->r[3]=c->r[31]|c->r[31]; // 8028FCB0
  c->r[4]=0u+0x00000001u; // 8028FCB4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8028FCB8
  c->ctr=c->r[12]; // 8028FCBC
  if (true) { c->lr=0x8028FCC4u; dispatch(c,c->ctr); } // 8028FCC0
L_8028FCC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8028FCC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8028FCC8
  c->lr=c->r[0]; // 8028FCCC
  c->r[1]=c->r[1]+0x00000010u; // 8028FCD0
  return; // 8028FCD4
}

// fn_8028FCD8
void f_8028FCD8(Ctx* __restrict c) {
  trace_call(0x8028FCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8028FCD8
  c->r[0]=c->lr; // 8028FCDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8028FCE0
  c->r[11]=c->r[1]+0x00000020u; // 8028FCE4
  c->lr=0x8028FCECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8028FCE8
  c->r[8]=0u+0x804C0000u; // 8028FCEC
  c->r[29]=0u+0x00000000u; // 8028FCF0
  c->r[8]=c->r[8]+0xFFFFD138u; // 8028FCF4
  W32(c->r[3]+0x00000000u,c->r[29]); // 8028FCF8
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028FCFC
  c->r[26]=c->r[3]|c->r[3]; // 8028FD00
  W32(c->r[3]+0x00000004u,c->r[29]); // 8028FD04
  c->r[27]=c->r[6]|c->r[6]; // 8028FD08
  c->r[28]=c->r[7]|c->r[7]; // 8028FD0C
  W32(c->r[3]+0x00000008u,c->r[29]); // 8028FD10
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8028FD14
  W32(c->r[3]+0x00000010u,c->r[4]); // 8028FD18
  c->r[0]=R32(c->r[4]+0x00000030u); // 8028FD1C
  c->r[4]=0u+0x00000000u; // 8028FD20
  W32(c->r[3]+0x00000014u,c->r[0]); // 8028FD24
  c->r[0]=R32(c->r[5]+0x00000000u); // 8028FD28
  c->r[5]=0u+0x00000188u; // 8028FD2C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8028FD30
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 8028FD34
  W32(c->r[3]+0x00000020u,c->r[29]); // 8028FD38
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8028FD3C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 8028FD40
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 8028FD44
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 8028FD48
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8028FD4C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8028FD50
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8028FD54
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8028FD58
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8028FD5C
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 8028FD60
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8028FD64
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8028FD68
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 8028FD6C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 8028FD70
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 8028FD74
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 8028FD78
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[0]);} // 8028FD7C
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8028FD80
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 8028FD84
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[0]);} // 8028FD88
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[0]);} // 8028FD8C
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 8028FD90
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 8028FD94
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 8028FD98
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[0]);} // 8028FD9C
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[0]);} // 8028FDA0
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[0]);} // 8028FDA4
  {uint32_t ea=c->r[3]+0x0000013Cu; WF32(ea,c->f[0]);} // 8028FDA8
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 8028FDAC
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[0]);} // 8028FDB0
  {uint32_t ea=c->r[3]+0x00000148u; WF32(ea,c->f[0]);} // 8028FDB4
  {uint32_t ea=c->r[3]+0x0000014Cu; WF32(ea,c->f[0]);} // 8028FDB8
  c->r[3]=c->r[3]+0x00000028u; // 8028FDBC
  c->lr=0x8028FDC4u; f_8000443C(c); // 8028FDC0
  c->r[3]=c->r[26]+0x00000028u; // 8028FDC4
  c->r[4]=0u+0x00000000u; // 8028FDC8
  c->r[5]=0u+0x000001A0u; // 8028FDCC
  c->lr=0x8028FDD4u; f_8000443C(c); // 8028FDD0
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028FDD4
  c->r[30]=0u+0x00000002u; // 8028FDD8
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028FDDC
  c->r[31]=0u+0x00000005u; // 8028FDE0
  {uint32_t ea=c->r[26]+0x00000048u; WF32(ea,c->f[1]);} // 8028FDE4
  c->r[3]=c->r[26]+0x00000028u; // 8028FDE8
  c->r[4]=0u+0x00000000u; // 8028FDEC
  c->r[5]=0u+0x000001A0u; // 8028FDF0
  {uint32_t ea=c->r[26]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028FDF4
  W32(c->r[26]+0x000000B4u,c->r[29]); // 8028FDF8
  {uint32_t ea=c->r[26]+0x000000E8u; WF32(ea,c->f[1]);} // 8028FDFC
  {uint32_t ea=c->r[26]+0x000000ECu; WF32(ea,c->f[1]);} // 8028FE00
  {uint32_t ea=c->r[26]+0x000000F0u; WF32(ea,c->f[1]);} // 8028FE04
  {uint32_t ea=c->r[26]+0x000000F4u; WF32(ea,c->f[1]);} // 8028FE08
  {uint32_t ea=c->r[26]+0x000000F8u; WF32(ea,c->f[1]);} // 8028FE0C
  {uint32_t ea=c->r[26]+0x000000FCu; WF32(ea,c->f[1]);} // 8028FE10
  {uint32_t ea=c->r[26]+0x00000100u; WF32(ea,c->f[1]);} // 8028FE14
  {uint32_t ea=c->r[26]+0x00000104u; WF32(ea,c->f[1]);} // 8028FE18
  {uint32_t ea=c->r[26]+0x00000130u; WF32(ea,c->f[1]);} // 8028FE1C
  {uint32_t ea=c->r[26]+0x00000134u; WF32(ea,c->f[1]);} // 8028FE20
  {uint32_t ea=c->r[26]+0x00000138u; WF32(ea,c->f[1]);} // 8028FE24
  {uint32_t ea=c->r[26]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028FE28
  {uint32_t ea=c->r[26]+0x00000140u; WF32(ea,c->f[1]);} // 8028FE2C
  {uint32_t ea=c->r[26]+0x00000144u; WF32(ea,c->f[1]);} // 8028FE30
  {uint32_t ea=c->r[26]+0x00000148u; WF32(ea,c->f[1]);} // 8028FE34
  {uint32_t ea=c->r[26]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028FE38
  {uint32_t ea=c->r[26]+0x00000178u; WF32(ea,c->f[1]);} // 8028FE3C
  {uint32_t ea=c->r[26]+0x00000174u; WF32(ea,c->f[0]);} // 8028FE40
  {uint32_t ea=c->r[26]+0x00000180u; WF32(ea,c->f[1]);} // 8028FE44
  {uint32_t ea=c->r[26]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028FE48
  {uint32_t ea=c->r[26]+0x00000188u; WF32(ea,c->f[1]);} // 8028FE4C
  {uint32_t ea=c->r[26]+0x00000184u; WF32(ea,c->f[0]);} // 8028FE50
  {uint32_t ea=c->r[26]+0x00000070u; WF32(ea,c->f[1]);} // 8028FE54
  {uint32_t ea=c->r[26]+0x00000074u; WF32(ea,c->f[1]);} // 8028FE58
  {uint32_t ea=c->r[26]+0x00000078u; WF32(ea,c->f[1]);} // 8028FE5C
  {uint32_t ea=c->r[26]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028FE60
  {uint32_t ea=c->r[26]+0x00000080u; WF32(ea,c->f[0]);} // 8028FE64
  {uint32_t ea=c->r[26]+0x00000084u; WF32(ea,c->f[1]);} // 8028FE68
  W8(c->r[26]+0x00000088u,c->r[30]); // 8028FE6C
  W32(c->r[26]+0x0000006Cu,c->r[31]); // 8028FE70
  {uint32_t ea=c->r[26]+0x00000090u; WF32(ea,c->f[0]);} // 8028FE74
  {uint32_t ea=c->r[26]+0x00000094u; WF32(ea,c->f[1]);} // 8028FE78
  {uint32_t ea=c->r[26]+0x00000098u; WF32(ea,c->f[1]);} // 8028FE7C
  {uint32_t ea=c->r[26]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028FE80
  {uint32_t ea=c->r[26]+0x000000A0u; WF32(ea,c->f[0]);} // 8028FE84
  {uint32_t ea=c->r[26]+0x000000A4u; WF32(ea,c->f[1]);} // 8028FE88
  W8(c->r[26]+0x000000A8u,c->r[30]); // 8028FE8C
  c->lr=0x8028FE94u; f_8000443C(c); // 8028FE90
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 8028FE94
  c->r[3]=c->r[26]+0x000001C8u; // 8028FE98
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8028FE9C
  c->r[4]=0u+0x00000000u; // 8028FEA0
  {uint32_t ea=c->r[26]+0x0000004Cu; WF32(ea,c->f[0]);} // 8028FEA4
  c->r[5]=0u+0x00000188u; // 8028FEA8
  {uint32_t ea=c->r[26]+0x00000048u; WF32(ea,c->f[1]);} // 8028FEAC
  W32(c->r[26]+0x000000B4u,c->r[29]); // 8028FEB0
  {uint32_t ea=c->r[26]+0x000000E8u; WF32(ea,c->f[1]);} // 8028FEB4
  {uint32_t ea=c->r[26]+0x000000ECu; WF32(ea,c->f[1]);} // 8028FEB8
  {uint32_t ea=c->r[26]+0x000000F0u; WF32(ea,c->f[1]);} // 8028FEBC
  {uint32_t ea=c->r[26]+0x000000F4u; WF32(ea,c->f[1]);} // 8028FEC0
  {uint32_t ea=c->r[26]+0x000000F8u; WF32(ea,c->f[1]);} // 8028FEC4
  {uint32_t ea=c->r[26]+0x000000FCu; WF32(ea,c->f[1]);} // 8028FEC8
  {uint32_t ea=c->r[26]+0x00000100u; WF32(ea,c->f[1]);} // 8028FECC
  {uint32_t ea=c->r[26]+0x00000104u; WF32(ea,c->f[1]);} // 8028FED0
  {uint32_t ea=c->r[26]+0x00000130u; WF32(ea,c->f[1]);} // 8028FED4
  {uint32_t ea=c->r[26]+0x00000134u; WF32(ea,c->f[1]);} // 8028FED8
  {uint32_t ea=c->r[26]+0x00000138u; WF32(ea,c->f[1]);} // 8028FEDC
  {uint32_t ea=c->r[26]+0x0000013Cu; WF32(ea,c->f[1]);} // 8028FEE0
  {uint32_t ea=c->r[26]+0x00000140u; WF32(ea,c->f[1]);} // 8028FEE4
  {uint32_t ea=c->r[26]+0x00000144u; WF32(ea,c->f[1]);} // 8028FEE8
  {uint32_t ea=c->r[26]+0x00000148u; WF32(ea,c->f[1]);} // 8028FEEC
  {uint32_t ea=c->r[26]+0x0000014Cu; WF32(ea,c->f[1]);} // 8028FEF0
  {uint32_t ea=c->r[26]+0x00000178u; WF32(ea,c->f[1]);} // 8028FEF4
  {uint32_t ea=c->r[26]+0x00000174u; WF32(ea,c->f[0]);} // 8028FEF8
  {uint32_t ea=c->r[26]+0x00000180u; WF32(ea,c->f[1]);} // 8028FEFC
  {uint32_t ea=c->r[26]+0x0000017Cu; WF32(ea,c->f[0]);} // 8028FF00
  {uint32_t ea=c->r[26]+0x00000188u; WF32(ea,c->f[1]);} // 8028FF04
  {uint32_t ea=c->r[26]+0x00000184u; WF32(ea,c->f[0]);} // 8028FF08
  {uint32_t ea=c->r[26]+0x00000070u; WF32(ea,c->f[1]);} // 8028FF0C
  {uint32_t ea=c->r[26]+0x00000074u; WF32(ea,c->f[1]);} // 8028FF10
  {uint32_t ea=c->r[26]+0x00000078u; WF32(ea,c->f[1]);} // 8028FF14
  {uint32_t ea=c->r[26]+0x0000007Cu; WF32(ea,c->f[1]);} // 8028FF18
  {uint32_t ea=c->r[26]+0x00000080u; WF32(ea,c->f[0]);} // 8028FF1C
  {uint32_t ea=c->r[26]+0x00000084u; WF32(ea,c->f[1]);} // 8028FF20
  W8(c->r[26]+0x00000088u,c->r[30]); // 8028FF24
  W32(c->r[26]+0x0000006Cu,c->r[31]); // 8028FF28
  {uint32_t ea=c->r[26]+0x00000090u; WF32(ea,c->f[0]);} // 8028FF2C
  {uint32_t ea=c->r[26]+0x00000094u; WF32(ea,c->f[1]);} // 8028FF30
  {uint32_t ea=c->r[26]+0x00000098u; WF32(ea,c->f[1]);} // 8028FF34
  {uint32_t ea=c->r[26]+0x0000009Cu; WF32(ea,c->f[1]);} // 8028FF38
  {uint32_t ea=c->r[26]+0x000000A0u; WF32(ea,c->f[0]);} // 8028FF3C
  {uint32_t ea=c->r[26]+0x000000A4u; WF32(ea,c->f[1]);} // 8028FF40
  W8(c->r[26]+0x000000A8u,c->r[30]); // 8028FF44
  {uint32_t ea=c->r[26]+0x00000268u; WF32(ea,c->f[0]);} // 8028FF48
  {uint32_t ea=c->r[26]+0x0000026Cu; WF32(ea,c->f[0]);} // 8028FF4C
  {uint32_t ea=c->r[26]+0x00000270u; WF32(ea,c->f[0]);} // 8028FF50
  {uint32_t ea=c->r[26]+0x00000274u; WF32(ea,c->f[0]);} // 8028FF54
  {uint32_t ea=c->r[26]+0x00000278u; WF32(ea,c->f[0]);} // 8028FF58
  {uint32_t ea=c->r[26]+0x0000027Cu; WF32(ea,c->f[0]);} // 8028FF5C
  {uint32_t ea=c->r[26]+0x00000280u; WF32(ea,c->f[0]);} // 8028FF60
  {uint32_t ea=c->r[26]+0x00000284u; WF32(ea,c->f[0]);} // 8028FF64
  {uint32_t ea=c->r[26]+0x00000288u; WF32(ea,c->f[0]);} // 8028FF68
  {uint32_t ea=c->r[26]+0x0000028Cu; WF32(ea,c->f[0]);} // 8028FF6C
  {uint32_t ea=c->r[26]+0x00000290u; WF32(ea,c->f[0]);} // 8028FF70
  {uint32_t ea=c->r[26]+0x00000294u; WF32(ea,c->f[0]);} // 8028FF74
  {uint32_t ea=c->r[26]+0x00000298u; WF32(ea,c->f[0]);} // 8028FF78
  {uint32_t ea=c->r[26]+0x0000029Cu; WF32(ea,c->f[0]);} // 8028FF7C
  {uint32_t ea=c->r[26]+0x000002A0u; WF32(ea,c->f[0]);} // 8028FF80
  {uint32_t ea=c->r[26]+0x000002A4u; WF32(ea,c->f[0]);} // 8028FF84
  {uint32_t ea=c->r[26]+0x000002B0u; WF32(ea,c->f[0]);} // 8028FF88
  {uint32_t ea=c->r[26]+0x000002B4u; WF32(ea,c->f[0]);} // 8028FF8C
  {uint32_t ea=c->r[26]+0x000002B8u; WF32(ea,c->f[0]);} // 8028FF90
  {uint32_t ea=c->r[26]+0x000002BCu; WF32(ea,c->f[0]);} // 8028FF94
  {uint32_t ea=c->r[26]+0x000002C0u; WF32(ea,c->f[0]);} // 8028FF98
  {uint32_t ea=c->r[26]+0x000002C4u; WF32(ea,c->f[0]);} // 8028FF9C
  {uint32_t ea=c->r[26]+0x000002C8u; WF32(ea,c->f[0]);} // 8028FFA0
  {uint32_t ea=c->r[26]+0x000002CCu; WF32(ea,c->f[0]);} // 8028FFA4
  {uint32_t ea=c->r[26]+0x000002D0u; WF32(ea,c->f[0]);} // 8028FFA8
  {uint32_t ea=c->r[26]+0x000002D4u; WF32(ea,c->f[0]);} // 8028FFAC
  {uint32_t ea=c->r[26]+0x000002D8u; WF32(ea,c->f[0]);} // 8028FFB0
  {uint32_t ea=c->r[26]+0x000002DCu; WF32(ea,c->f[0]);} // 8028FFB4
  {uint32_t ea=c->r[26]+0x000002E0u; WF32(ea,c->f[0]);} // 8028FFB8
  {uint32_t ea=c->r[26]+0x000002E4u; WF32(ea,c->f[0]);} // 8028FFBC
  {uint32_t ea=c->r[26]+0x000002E8u; WF32(ea,c->f[0]);} // 8028FFC0
  {uint32_t ea=c->r[26]+0x000002ECu; WF32(ea,c->f[0]);} // 8028FFC4
  c->lr=0x8028FFCCu; f_8000443C(c); // 8028FFC8
  c->r[3]=R32(c->r[13]+0xFFFFA3F8u); // 8028FFCC
  W32(c->r[26]+0x00000350u,c->r[28]); // 8028FFD0
  c->r[3]=c->r[3]+0x00000001u; // 8028FFD4
  c->r[0]=c->r[3]+0x00010000u; // 8028FFD8
  W32(c->r[26]+0x00000354u,c->r[27]); // 8028FFDC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8028FFE0
  W32(c->r[13]+0xFFFFA3F8u,c->r[3]); // 8028FFE4
  if (!crb(c,2)) { goto L_8028FFF4; } // 8028FFE8
  c->r[3]=c->r[3]+0x00000001u; // 8028FFEC
  W32(c->r[13]+0xFFFFA3F8u,c->r[3]); // 8028FFF0
L_8028FFF4:;
  c->r[0]=0u+0x00000000u; // 8028FFF4
  W32(c->r[26]+0x00000358u,c->r[3]); // 8028FFF8
  c->r[11]=c->r[1]+0x00000020u; // 8028FFFC
  c->r[3]=c->r[26]|c->r[26]; // 80290000
  W32(c->r[26]+0x0000035Cu,c->r[0]); // 80290004
  c->lr=0x8029000Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80290008
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029000C
  c->lr=c->r[0]; // 80290010
  c->r[1]=c->r[1]+0x00000020u; // 80290014
  return; // 80290018
}

// fn_8029001C
void f_8029001C(Ctx* __restrict c) {
  trace_call(0x8029001Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029001C
  c->r[0]=c->lr; // 80290020
  cmps(c,0,(int32_t)c->r[3],0); // 80290024
  W32(c->r[1]+0x00000014u,c->r[0]); // 80290028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029002C
  c->r[31]=c->r[3]|c->r[3]; // 80290030
  if (crb(c,2)) { goto L_80290048; } // 80290034
  cmps(c,0,(int32_t)c->r[4],0); // 80290038
  if (!crb(c,1)) { goto L_80290048; } // 8029003C
  c->r[4]=0u+0x00000360u; // 80290040
  c->lr=0x80290048u; f_8029C224(c); // 80290044
L_80290048:;
  c->r[3]=c->r[31]|c->r[31]; // 80290048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029004C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80290050
  c->lr=c->r[0]; // 80290054
  c->r[1]=c->r[1]+0x00000010u; // 80290058
  return; // 8029005C
}

// fn_80290060
void f_80290060(Ctx* __restrict c) {
  trace_call(0x80290060u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290060
  c->r[0]=c->lr; // 80290064
  W32(c->r[1]+0x000001A4u,c->r[0]); // 80290068
  c->r[11]=c->r[1]+0x000001A0u; // 8029006C
  c->lr=0x80290074u; f_801E795C(c); // 80290070
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290074
  c->r[31]=c->r[5]|c->r[5]; // 80290078
  c->r[29]=c->r[3]|c->r[3]; // 8029007C
  c->r[30]=c->r[4]|c->r[4]; // 80290080
  {uint32_t ea=c->r[3]+0x000001E8u; WF32(ea,c->f[0]);} // 80290084
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290088
  {uint32_t ea=c->r[3]+0x000001ECu; WF32(ea,c->f[0]);} // 8029008C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290090
  {uint32_t ea=c->r[3]+0x000001F0u; WF32(ea,c->f[0]);} // 80290094
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290098
  {uint32_t ea=c->r[3]+0x000001F4u; WF32(ea,c->f[0]);} // 8029009C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802900A0
  {uint32_t ea=c->r[3]+0x000001F8u; WF32(ea,c->f[0]);} // 802900A4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802900A8
  {uint32_t ea=c->r[3]+0x000001FCu; WF32(ea,c->f[0]);} // 802900AC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802900B0
  {uint32_t ea=c->r[3]+0x00000200u; WF32(ea,c->f[0]);} // 802900B4
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802900B8
  {uint32_t ea=c->r[3]+0x00000204u; WF32(ea,c->f[0]);} // 802900BC
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802900C0
  {uint32_t ea=c->r[3]+0x00000208u; WF32(ea,c->f[0]);} // 802900C4
  c->r[0]=R32(c->r[4]+0x00000090u); // 802900C8
  W32(c->r[3]+0x00000264u,c->r[0]); // 802900CC
  c->r[0]=R32(c->r[4]+0x000000D4u); // 802900D0
  W32(c->r[3]+0x000002A8u,c->r[0]); // 802900D4
  c->r[0]=R32(c->r[4]+0x000000D8u); // 802900D8
  W32(c->r[3]+0x000002ACu,c->r[0]); // 802900DC
  c->r[5]=R32(c->r[4]+0x00000094u); // 802900E0
  c->r[0]=R32(c->r[4]+0x00000098u); // 802900E4
  W32(c->r[3]+0x00000268u,c->r[5]); // 802900E8
  W32(c->r[3]+0x0000026Cu,c->r[0]); // 802900EC
  c->r[5]=R32(c->r[4]+0x0000009Cu); // 802900F0
  c->r[0]=R32(c->r[4]+0x000000A0u); // 802900F4
  W32(c->r[3]+0x00000270u,c->r[5]); // 802900F8
  W32(c->r[3]+0x00000274u,c->r[0]); // 802900FC
  c->r[5]=R32(c->r[4]+0x000000A4u); // 80290100
  c->r[0]=R32(c->r[4]+0x000000A8u); // 80290104
  W32(c->r[3]+0x00000278u,c->r[5]); // 80290108
  W32(c->r[3]+0x0000027Cu,c->r[0]); // 8029010C
  c->r[5]=R32(c->r[4]+0x000000ACu); // 80290110
  c->r[0]=R32(c->r[4]+0x000000B0u); // 80290114
  W32(c->r[3]+0x00000280u,c->r[5]); // 80290118
  W32(c->r[3]+0x00000284u,c->r[0]); // 8029011C
  c->r[5]=R32(c->r[4]+0x000000B4u); // 80290120
  c->r[0]=R32(c->r[4]+0x000000B8u); // 80290124
  W32(c->r[3]+0x00000288u,c->r[5]); // 80290128
  W32(c->r[3]+0x0000028Cu,c->r[0]); // 8029012C
  c->r[5]=R32(c->r[4]+0x000000BCu); // 80290130
  c->r[0]=R32(c->r[4]+0x000000C0u); // 80290134
  W32(c->r[3]+0x00000290u,c->r[5]); // 80290138
  W32(c->r[3]+0x00000294u,c->r[0]); // 8029013C
  c->r[5]=R32(c->r[4]+0x000000C4u); // 80290140
  c->r[0]=R32(c->r[4]+0x000000C8u); // 80290144
  W32(c->r[3]+0x00000298u,c->r[5]); // 80290148
  W32(c->r[3]+0x0000029Cu,c->r[0]); // 8029014C
  c->r[5]=R32(c->r[4]+0x000000CCu); // 80290150
  c->r[0]=R32(c->r[4]+0x000000D0u); // 80290154
  W32(c->r[3]+0x000002A0u,c->r[5]); // 80290158
  W32(c->r[3]+0x000002A4u,c->r[0]); // 8029015C
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 80290160
  W32(c->r[3]+0x000002F0u,c->r[0]); // 80290164
  c->r[5]=R32(c->r[4]+0x000000DCu); // 80290168
  c->r[0]=R32(c->r[4]+0x000000E0u); // 8029016C
  W32(c->r[3]+0x000002B0u,c->r[5]); // 80290170
  W32(c->r[3]+0x000002B4u,c->r[0]); // 80290174
  c->r[5]=R32(c->r[4]+0x000000E4u); // 80290178
  c->r[0]=R32(c->r[4]+0x000000E8u); // 8029017C
  W32(c->r[3]+0x000002B8u,c->r[5]); // 80290180
  W32(c->r[3]+0x000002BCu,c->r[0]); // 80290184
  c->r[5]=R32(c->r[4]+0x000000ECu); // 80290188
  c->r[0]=R32(c->r[4]+0x000000F0u); // 8029018C
  W32(c->r[3]+0x000002C0u,c->r[5]); // 80290190
  W32(c->r[3]+0x000002C4u,c->r[0]); // 80290194
  c->r[5]=R32(c->r[4]+0x000000F4u); // 80290198
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8029019C
  W32(c->r[3]+0x000002C8u,c->r[5]); // 802901A0
  W32(c->r[3]+0x000002CCu,c->r[0]); // 802901A4
  c->r[5]=R32(c->r[4]+0x000000FCu); // 802901A8
  c->r[0]=R32(c->r[4]+0x00000100u); // 802901AC
  W32(c->r[3]+0x000002D0u,c->r[5]); // 802901B0
  W32(c->r[3]+0x000002D4u,c->r[0]); // 802901B4
  c->r[5]=R32(c->r[4]+0x00000104u); // 802901B8
  c->r[0]=R32(c->r[4]+0x00000108u); // 802901BC
  W32(c->r[3]+0x000002D8u,c->r[5]); // 802901C0
  W32(c->r[3]+0x000002DCu,c->r[0]); // 802901C4
  c->r[5]=R32(c->r[4]+0x0000010Cu); // 802901C8
  c->r[0]=R32(c->r[4]+0x00000110u); // 802901CC
  W32(c->r[3]+0x000002E0u,c->r[5]); // 802901D0
  W32(c->r[3]+0x000002E4u,c->r[0]); // 802901D4
  c->r[5]=R32(c->r[4]+0x00000114u); // 802901D8
  c->r[0]=R32(c->r[4]+0x00000118u); // 802901DC
  W32(c->r[3]+0x000002E8u,c->r[5]); // 802901E0
  W32(c->r[3]+0x000002ECu,c->r[0]); // 802901E4
  c->r[0]=R32(c->r[4]+0x00000120u); // 802901E8
  W32(c->r[3]+0x000002F4u,c->r[0]); // 802901EC
  c->r[0]=R32(c->r[4]+0x00000124u); // 802901F0
  W32(c->r[3]+0x000002F8u,c->r[0]); // 802901F4
  c->r[0]=R32(c->r[4]+0x00000128u); // 802901F8
  W32(c->r[3]+0x000002FCu,c->r[0]); // 802901FC
  c->r[0]=R32(c->r[4]+0x0000012Cu); // 80290200
  W32(c->r[3]+0x00000300u,c->r[0]); // 80290204
  c->r[0]=R32(c->r[4]+0x00000130u); // 80290208
  W32(c->r[3]+0x00000304u,c->r[0]); // 8029020C
  c->r[0]=R32(c->r[4]+0x00000134u); // 80290210
  W32(c->r[3]+0x00000308u,c->r[0]); // 80290214
  c->r[0]=R32(c->r[4]+0x00000138u); // 80290218
  W32(c->r[3]+0x0000030Cu,c->r[0]); // 8029021C
  c->r[0]=R32(c->r[4]+0x0000013Cu); // 80290220
  W32(c->r[3]+0x00000310u,c->r[0]); // 80290224
  c->r[0]=R32(c->r[4]+0x00000038u); // 80290228
  W32(c->r[3]+0x0000020Cu,c->r[0]); // 8029022C
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290230
  {uint32_t ea=c->r[3]+0x00000210u; WF32(ea,c->f[0]);} // 80290234
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290238
  {uint32_t ea=c->r[3]+0x00000214u; WF32(ea,c->f[0]);} // 8029023C
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290240
  {uint32_t ea=c->r[3]+0x00000218u; WF32(ea,c->f[0]);} // 80290244
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290248
  {uint32_t ea=c->r[3]+0x0000021Cu; WF32(ea,c->f[0]);} // 8029024C
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290250
  {uint32_t ea=c->r[3]+0x00000220u; WF32(ea,c->f[0]);} // 80290254
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290258
  {uint32_t ea=c->r[3]+0x00000224u; WF32(ea,c->f[0]);} // 8029025C
  c->r[0]=R8(c->r[4]+0x00000054u); // 80290260
  W8(c->r[3]+0x00000228u,c->r[0]); // 80290264
  c->r[0]=R32(c->r[4]+0x00000058u); // 80290268
  W32(c->r[3]+0x0000022Cu,c->r[0]); // 8029026C
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290270
  {uint32_t ea=c->r[3]+0x00000230u; WF32(ea,c->f[0]);} // 80290274
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290278
  {uint32_t ea=c->r[3]+0x00000234u; WF32(ea,c->f[0]);} // 8029027C
  {uint32_t ea=c->r[4]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290280
  {uint32_t ea=c->r[3]+0x00000238u; WF32(ea,c->f[0]);} // 80290284
  {uint32_t ea=c->r[4]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290288
  {uint32_t ea=c->r[3]+0x0000023Cu; WF32(ea,c->f[0]);} // 8029028C
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290290
  {uint32_t ea=c->r[3]+0x00000240u; WF32(ea,c->f[0]);} // 80290294
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290298
  {uint32_t ea=c->r[3]+0x00000244u; WF32(ea,c->f[0]);} // 8029029C
  c->r[0]=R8(c->r[4]+0x00000074u); // 802902A0
  W8(c->r[3]+0x00000248u,c->r[0]); // 802902A4
  c->r[0]=R32(c->r[4]+0x00000078u); // 802902A8
  W32(c->r[3]+0x0000024Cu,c->r[0]); // 802902AC
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 802902B0
  W32(c->r[3]+0x00000250u,c->r[0]); // 802902B4
  c->r[0]=R32(c->r[4]+0x00000080u); // 802902B8
  W32(c->r[3]+0x00000254u,c->r[0]); // 802902BC
  {uint32_t ea=c->r[4]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802902C0
  {uint32_t ea=c->r[3]+0x00000258u; WF32(ea,c->f[0]);} // 802902C4
  c->r[0]=R8(c->r[4]+0x00000088u); // 802902C8
  W8(c->r[3]+0x0000025Cu,c->r[0]); // 802902CC
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 802902D0
  W32(c->r[3]+0x00000260u,c->r[0]); // 802902D4
  c->r[3]=c->r[31]|c->r[31]; // 802902D8
  c->r[4]=R32(c->r[4]+0x0000007Cu); // 802902DC
  c->lr=0x802902E4u; f_8028AEFC(c); // 802902E0
  W32(c->r[29]+0x00000260u,c->r[3]); // 802902E4
  c->r[4]=0u+0x00000008u; // 802902E8
  c->r[3]=R32(c->r[29]+0x00000010u); // 802902EC
  {uint32_t ea=c->r[30]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 802902F0
  {uint32_t ea=c->r[29]+0x00000314u; WF32(ea,c->f[0]);} // 802902F4
  {uint32_t ea=c->r[30]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 802902F8
  {uint32_t ea=c->r[29]+0x00000318u; WF32(ea,c->f[0]);} // 802902FC
  {uint32_t ea=c->r[30]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290300
  {uint32_t ea=c->r[29]+0x0000031Cu; WF32(ea,c->f[0]);} // 80290304
  {uint32_t ea=c->r[30]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80290308
  {uint32_t ea=c->r[29]+0x00000320u; WF32(ea,c->f[0]);} // 8029030C
  {uint32_t ea=c->r[30]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290310
  {uint32_t ea=c->r[29]+0x00000324u; WF32(ea,c->f[0]);} // 80290314
  {uint32_t ea=c->r[30]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290318
  {uint32_t ea=c->r[29]+0x00000328u; WF32(ea,c->f[0]);} // 8029031C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80290320
  c->lr=0x80290328u; f_8028742C(c); // 80290324
  cmps(c,0,(int32_t)c->r[3],0); // 80290328
  W32(c->r[29]+0x0000035Cu,c->r[3]); // 8029032C
  if (!crb(c,2)) { goto L_80290360; } // 80290330
  c->r[3]=0u+0x803D0000u; // 80290334
  c->r[3]=c->r[3]+0x00002F14u; // 80290338
  c->r[3]=c->r[3]+0x0000005Au; // 8029033C
  c->lr=0x80290344u; f_8029D4B0(c); // 80290340
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80290344
  c->r[3]=c->r[29]|c->r[29]; // 80290348
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8029034C
  c->ctr=c->r[12]; // 80290350
  if (true) { c->lr=0x80290358u; dispatch(c,c->ctr); } // 80290354
  c->r[3]=0u+0x00000000u; // 80290358
  goto L_80290478; // 8029035C
L_80290360:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80290360
  c->lr=0x80290368u; f_80286BA8(c); // 80290364
  cmpu(c,0,c->r[3],0x00000008u); // 80290368
  c->r[28]=c->r[3]|c->r[3]; // 8029036C
  if (!crb(c,1)) { goto L_802903A8; } // 80290370
  c->r[3]=0u+0x803D0000u; // 80290374
  c->r[5]=c->r[28]|c->r[28]; // 80290378
  c->r[3]=c->r[3]+0x00002F14u; // 8029037C
  c->r[4]=0u+0x00000008u; // 80290380
  c->r[3]=c->r[3]+0x00000084u; // 80290384
  c->lr=0x8029038Cu; f_8029D55C(c); // 80290388
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 8029038C
  c->r[3]=c->r[29]|c->r[29]; // 80290390
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80290394
  c->ctr=c->r[12]; // 80290398
  if (true) { c->lr=0x802903A0u; dispatch(c,c->ctr); } // 8029039C
  c->r[3]=0u+0x00000000u; // 802903A0
  goto L_80290478; // 802903A4
L_802903A8:;
  c->r[27]=0u+0x00000000u; // 802903A8
  goto L_8029046C; // 802903AC
L_802903B0:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 802903B0
  c->r[4]=c->r[27]|c->r[27]; // 802903B4
  c->r[5]=c->r[1]+0x00000108u; // 802903B8
  c->lr=0x802903C0u; f_80286C34(c); // 802903BC
  c->r[3]=c->r[1]+0x00000108u; // 802903C0
  c->r[4]=c->r[1]+0x00000088u; // 802903C4
  c->r[5]=c->r[1]+0x00000008u; // 802903C8
  c->lr=0x802903D0u; f_80286AAC(c); // 802903CC
  c->r[3]=c->r[31]|c->r[31]; // 802903D0
  c->r[4]=c->r[1]+0x00000008u; // 802903D4
  c->lr=0x802903DCu; f_8028AE68(c); // 802903D8
  cmps(c,0,(int32_t)c->r[3],0); // 802903DC
  c->r[4]=c->r[3]|c->r[3]; // 802903E0
  if (!crb(c,2)) { goto L_80290418; } // 802903E4
  c->r[3]=0u+0x803D0000u; // 802903E8
  c->r[4]=c->r[1]+0x00000108u; // 802903EC
  c->r[3]=c->r[3]+0x00002F14u; // 802903F0
  c->r[3]=c->r[3]+0x000000BEu; // 802903F4
  c->lr=0x802903FCu; f_8029D500(c); // 802903F8
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 802903FC
  c->r[3]=c->r[29]|c->r[29]; // 80290400
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80290404
  c->ctr=c->r[12]; // 80290408
  if (true) { c->lr=0x80290410u; dispatch(c,c->ctr); } // 8029040C
  c->r[3]=0u+0x00000000u; // 80290410
  goto L_80290478; // 80290414
L_80290418:;
  c->r[3]=R32(c->r[29]+0x0000035Cu); // 80290418
  c->r[5]=c->r[27]|c->r[27]; // 8029041C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80290420
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80290424
  c->ctr=c->r[12]; // 80290428
  if (true) { c->lr=0x80290430u; dispatch(c,c->ctr); } // 8029042C
  cmps(c,0,(int32_t)c->r[3],0); // 80290430
  if (!crb(c,2)) { goto L_80290468; } // 80290434
  c->r[3]=0u+0x803D0000u; // 80290438
  c->r[4]=c->r[1]+0x00000108u; // 8029043C
  c->r[3]=c->r[3]+0x00002F14u; // 80290440
  c->r[3]=c->r[3]+0x000000DDu; // 80290444
  c->lr=0x8029044Cu; f_8029D500(c); // 80290448
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 8029044C
  c->r[3]=c->r[29]|c->r[29]; // 80290450
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80290454
  c->ctr=c->r[12]; // 80290458
  if (true) { c->lr=0x80290460u; dispatch(c,c->ctr); } // 8029045C
  c->r[3]=0u+0x00000000u; // 80290460
  goto L_80290478; // 80290464
L_80290468:;
  c->r[27]=c->r[27]+0x00000001u; // 80290468
L_8029046C:;
  cmpu(c,0,c->r[27],c->r[28]); // 8029046C
  if (crb(c,0)) { IRQCHK(c); goto L_802903B0; } // 80290470
  c->r[3]=0u+0x00000001u; // 80290474
L_80290478:;
  c->r[11]=c->r[1]+0x000001A0u; // 80290478
  c->lr=0x80290480u; f_801E79A8(c); // 8029047C
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80290480
  c->lr=c->r[0]; // 80290484
  c->r[1]=c->r[1]+0x000001A0u; // 80290488
  return; // 8029048C
}

// fn_80290490
void f_80290490(Ctx* __restrict c) {
  trace_call(0x80290490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290490
  c->r[0]=c->lr; // 80290494
  W32(c->r[1]+0x00000014u,c->r[0]); // 80290498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029049C
  c->r[31]=c->r[3]|c->r[3]; // 802904A0
  c->r[0]=R32(c->r[3]+0x0000035Cu); // 802904A4
  cmps(c,0,(int32_t)c->r[0],0); // 802904A8
  if (crb(c,2)) { goto L_802904CC; } // 802904AC
  c->r[3]=c->r[0]|c->r[0]; // 802904B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802904B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802904B8
  c->ctr=c->r[12]; // 802904BC
  if (true) { c->lr=0x802904C4u; dispatch(c,c->ctr); } // 802904C0
  c->r[0]=0u+0x00000000u; // 802904C4
  W32(c->r[31]+0x0000035Cu,c->r[0]); // 802904C8
L_802904CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802904CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802904D0
  c->lr=c->r[0]; // 802904D4
  c->r[1]=c->r[1]+0x00000010u; // 802904D8
  return; // 802904DC
}

// fn_802904E0
void f_802904E0(Ctx* __restrict c) {
  trace_call(0x802904E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802904E0
  c->r[0]=c->lr; // 802904E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802904E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802904EC
  c->r[5]=R32(c->r[4]+0x00000000u); // 802904F0
  c->r[31]=c->r[3]|c->r[3]; // 802904F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802904F8
  W32(c->r[3]+0x00000028u,c->r[5]); // 802904FC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80290500
  c->r[5]=R32(c->r[4]+0x00000008u); // 80290504
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80290508
  W32(c->r[3]+0x00000030u,c->r[5]); // 8029050C
  W32(c->r[3]+0x00000034u,c->r[0]); // 80290510
  c->r[5]=R32(c->r[4]+0x00000010u); // 80290514
  c->r[0]=R32(c->r[4]+0x00000014u); // 80290518
  W32(c->r[3]+0x00000038u,c->r[5]); // 8029051C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80290520
  c->r[5]=R32(c->r[4]+0x00000018u); // 80290524
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80290528
  W32(c->r[3]+0x00000040u,c->r[5]); // 8029052C
  W32(c->r[3]+0x00000044u,c->r[0]); // 80290530
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290534
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80290538
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029053C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80290540
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290544
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80290548
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 8029054C
  c->r[0]=R32(c->r[4]+0x00000030u); // 80290550
  W32(c->r[3]+0x00000054u,c->r[5]); // 80290554
  W32(c->r[3]+0x00000058u,c->r[0]); // 80290558
  c->r[5]=R32(c->r[4]+0x00000034u); // 8029055C
  c->r[0]=R32(c->r[4]+0x00000038u); // 80290560
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 80290564
  W32(c->r[3]+0x00000060u,c->r[0]); // 80290568
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 8029056C
  c->r[0]=R32(c->r[4]+0x00000040u); // 80290570
  W32(c->r[3]+0x00000064u,c->r[5]); // 80290574
  W32(c->r[3]+0x00000068u,c->r[0]); // 80290578
  c->r[5]=R32(c->r[4]+0x00000044u); // 8029057C
  c->r[0]=R32(c->r[4]+0x00000048u); // 80290580
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 80290584
  W32(c->r[3]+0x00000070u,c->r[0]); // 80290588
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 8029058C
  c->r[0]=R32(c->r[4]+0x00000050u); // 80290590
  W32(c->r[3]+0x00000074u,c->r[5]); // 80290594
  W32(c->r[3]+0x00000078u,c->r[0]); // 80290598
  c->r[5]=R32(c->r[4]+0x00000054u); // 8029059C
  c->r[0]=R32(c->r[4]+0x00000058u); // 802905A0
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 802905A4
  W32(c->r[3]+0x00000080u,c->r[0]); // 802905A8
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 802905AC
  c->r[0]=R32(c->r[4]+0x00000060u); // 802905B0
  W32(c->r[3]+0x00000084u,c->r[5]); // 802905B4
  W32(c->r[3]+0x00000088u,c->r[0]); // 802905B8
  c->r[5]=R32(c->r[4]+0x00000064u); // 802905BC
  c->r[0]=R32(c->r[4]+0x00000068u); // 802905C0
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 802905C4
  W32(c->r[3]+0x00000090u,c->r[0]); // 802905C8
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 802905CC
  c->r[0]=R32(c->r[4]+0x00000070u); // 802905D0
  W32(c->r[3]+0x00000094u,c->r[5]); // 802905D4
  W32(c->r[3]+0x00000098u,c->r[0]); // 802905D8
  c->r[5]=R32(c->r[4]+0x00000074u); // 802905DC
  c->r[0]=R32(c->r[4]+0x00000078u); // 802905E0
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 802905E4
  W32(c->r[3]+0x000000A0u,c->r[0]); // 802905E8
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 802905EC
  c->r[0]=R32(c->r[4]+0x00000080u); // 802905F0
  W32(c->r[3]+0x000000A4u,c->r[5]); // 802905F4
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802905F8
  c->r[5]=R32(c->r[4]+0x00000084u); // 802905FC
  c->r[0]=R32(c->r[4]+0x00000088u); // 80290600
  W32(c->r[3]+0x000000ACu,c->r[5]); // 80290604
  W32(c->r[3]+0x000000B0u,c->r[0]); // 80290608
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 8029060C
  c->r[0]=R32(c->r[4]+0x00000090u); // 80290610
  W32(c->r[3]+0x000000B4u,c->r[5]); // 80290614
  W32(c->r[3]+0x000000B8u,c->r[0]); // 80290618
  c->r[5]=R32(c->r[4]+0x00000094u); // 8029061C
  c->r[0]=R32(c->r[4]+0x00000098u); // 80290620
  W32(c->r[3]+0x000000BCu,c->r[5]); // 80290624
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80290628
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 8029062C
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80290630
  c->r[5]=R32(c->r[4]+0x000000A0u); // 80290634
  c->r[0]=R32(c->r[4]+0x000000A4u); // 80290638
  W32(c->r[3]+0x000000C8u,c->r[5]); // 8029063C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80290640
  c->r[5]=R32(c->r[4]+0x000000A8u); // 80290644
  c->r[0]=R32(c->r[4]+0x000000ACu); // 80290648
  W32(c->r[3]+0x000000D0u,c->r[5]); // 8029064C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 80290650
  c->r[5]=R32(c->r[4]+0x000000B0u); // 80290654
  c->r[0]=R32(c->r[4]+0x000000B4u); // 80290658
  W32(c->r[3]+0x000000D8u,c->r[5]); // 8029065C
  W32(c->r[3]+0x000000DCu,c->r[0]); // 80290660
  c->r[5]=R32(c->r[4]+0x000000B8u); // 80290664
  c->r[0]=R32(c->r[4]+0x000000BCu); // 80290668
  W32(c->r[3]+0x000000E0u,c->r[5]); // 8029066C
  W32(c->r[3]+0x000000E4u,c->r[0]); // 80290670
  c->r[5]=R32(c->r[4]+0x000000C0u); // 80290674
  c->r[0]=R32(c->r[4]+0x000000C4u); // 80290678
  W32(c->r[3]+0x000000E8u,c->r[5]); // 8029067C
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80290680
  c->r[5]=R32(c->r[4]+0x000000C8u); // 80290684
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80290688
  W32(c->r[3]+0x000000F0u,c->r[5]); // 8029068C
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80290690
  c->r[5]=R32(c->r[4]+0x000000D0u); // 80290694
  c->r[0]=R32(c->r[4]+0x000000D4u); // 80290698
  W32(c->r[3]+0x000000F8u,c->r[5]); // 8029069C
  W32(c->r[3]+0x000000FCu,c->r[0]); // 802906A0
  c->r[5]=R32(c->r[4]+0x000000D8u); // 802906A4
  c->r[0]=R32(c->r[4]+0x000000DCu); // 802906A8
  W32(c->r[3]+0x00000100u,c->r[5]); // 802906AC
  W32(c->r[3]+0x00000104u,c->r[0]); // 802906B0
  c->r[0]=R32(c->r[4]+0x000000E0u); // 802906B4
  W32(c->r[3]+0x00000108u,c->r[0]); // 802906B8
  c->r[0]=R32(c->r[4]+0x000000E4u); // 802906BC
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 802906C0
  c->r[5]=R32(c->r[4]+0x000000E8u); // 802906C4
  c->r[0]=R32(c->r[4]+0x000000ECu); // 802906C8
  W32(c->r[3]+0x00000110u,c->r[5]); // 802906CC
  W32(c->r[3]+0x00000114u,c->r[0]); // 802906D0
  c->r[5]=R32(c->r[4]+0x000000F0u); // 802906D4
  c->r[0]=R32(c->r[4]+0x000000F4u); // 802906D8
  W32(c->r[3]+0x00000118u,c->r[5]); // 802906DC
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 802906E0
  c->r[5]=R32(c->r[4]+0x000000F8u); // 802906E4
  c->r[0]=R32(c->r[4]+0x000000FCu); // 802906E8
  W32(c->r[3]+0x00000120u,c->r[5]); // 802906EC
  W32(c->r[3]+0x00000124u,c->r[0]); // 802906F0
  c->r[5]=R32(c->r[4]+0x00000100u); // 802906F4
  c->r[0]=R32(c->r[4]+0x00000104u); // 802906F8
  W32(c->r[3]+0x00000128u,c->r[5]); // 802906FC
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80290700
  c->r[5]=R32(c->r[4]+0x00000108u); // 80290704
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80290708
  W32(c->r[3]+0x00000130u,c->r[5]); // 8029070C
  W32(c->r[3]+0x00000134u,c->r[0]); // 80290710
  c->r[5]=R32(c->r[4]+0x00000110u); // 80290714
  c->r[0]=R32(c->r[4]+0x00000114u); // 80290718
  W32(c->r[3]+0x00000138u,c->r[5]); // 8029071C
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80290720
  c->r[5]=R32(c->r[4]+0x00000118u); // 80290724
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 80290728
  W32(c->r[3]+0x00000140u,c->r[5]); // 8029072C
  W32(c->r[3]+0x00000144u,c->r[0]); // 80290730
  c->r[5]=R32(c->r[4]+0x00000120u); // 80290734
  c->r[0]=R32(c->r[4]+0x00000124u); // 80290738
  W32(c->r[3]+0x00000148u,c->r[5]); // 8029073C
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 80290740
  c->r[0]=R32(c->r[4]+0x00000128u); // 80290744
  W32(c->r[3]+0x00000150u,c->r[0]); // 80290748
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 8029074C
  c->r[0]=R32(c->r[4]+0x00000130u); // 80290750
  W32(c->r[3]+0x00000154u,c->r[5]); // 80290754
  W32(c->r[3]+0x00000158u,c->r[0]); // 80290758
  c->r[5]=R32(c->r[4]+0x00000134u); // 8029075C
  c->r[0]=R32(c->r[4]+0x00000138u); // 80290760
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 80290764
  W32(c->r[3]+0x00000160u,c->r[0]); // 80290768
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 8029076C
  c->r[0]=R32(c->r[4]+0x00000140u); // 80290770
  W32(c->r[3]+0x00000164u,c->r[5]); // 80290774
  W32(c->r[3]+0x00000168u,c->r[0]); // 80290778
  c->r[5]=R32(c->r[4]+0x00000144u); // 8029077C
  c->r[0]=R32(c->r[4]+0x00000148u); // 80290780
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 80290784
  W32(c->r[3]+0x00000170u,c->r[0]); // 80290788
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 8029078C
  c->r[0]=R32(c->r[4]+0x00000150u); // 80290790
  W32(c->r[3]+0x00000174u,c->r[5]); // 80290794
  W32(c->r[3]+0x00000178u,c->r[0]); // 80290798
  c->r[5]=R32(c->r[4]+0x00000154u); // 8029079C
  c->r[0]=R32(c->r[4]+0x00000158u); // 802907A0
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 802907A4
  W32(c->r[3]+0x00000180u,c->r[0]); // 802907A8
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 802907AC
  c->r[0]=R32(c->r[4]+0x00000160u); // 802907B0
  W32(c->r[3]+0x00000184u,c->r[5]); // 802907B4
  W32(c->r[3]+0x00000188u,c->r[0]); // 802907B8
  c->r[0]=R32(c->r[4]+0x00000164u); // 802907BC
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 802907C0
  c->r[0]=R32(c->r[4]+0x00000168u); // 802907C4
  W32(c->r[3]+0x00000190u,c->r[0]); // 802907C8
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 802907CC
  W32(c->r[3]+0x00000194u,c->r[0]); // 802907D0
  c->r[5]=R32(c->r[4]+0x00000170u); // 802907D4
  c->r[0]=R32(c->r[4]+0x00000174u); // 802907D8
  W32(c->r[3]+0x00000198u,c->r[5]); // 802907DC
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 802907E0
  c->r[5]=R32(c->r[4]+0x00000178u); // 802907E4
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 802907E8
  W32(c->r[3]+0x000001A0u,c->r[5]); // 802907EC
  W32(c->r[3]+0x000001A4u,c->r[0]); // 802907F0
  c->r[5]=R32(c->r[4]+0x00000180u); // 802907F4
  c->r[0]=R32(c->r[4]+0x00000184u); // 802907F8
  W32(c->r[3]+0x000001A8u,c->r[5]); // 802907FC
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80290800
  c->r[0]=R32(c->r[4]+0x00000188u); // 80290804
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80290808
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 8029080C
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80290810
  c->r[0]=R32(c->r[4]+0x00000190u); // 80290814
  W32(c->r[3]+0x000001B8u,c->r[0]); // 80290818
  c->r[0]=R32(c->r[4]+0x00000194u); // 8029081C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80290820
  c->r[5]=R8(c->r[4]+0x00000195u); // 80290824
  c->r[0]=R8(c->r[4]+0x00000196u); // 80290828
  W8(c->r[3]+0x000001BDu,c->r[5]); // 8029082C
  W8(c->r[3]+0x000001BEu,c->r[0]); // 80290830
  c->r[5]=R8(c->r[4]+0x00000197u); // 80290834
  c->r[0]=R8(c->r[4]+0x00000198u); // 80290838
  W8(c->r[3]+0x000001BFu,c->r[5]); // 8029083C
  W8(c->r[3]+0x000001C0u,c->r[0]); // 80290840
  c->r[5]=R8(c->r[4]+0x00000199u); // 80290844
  c->r[0]=R8(c->r[4]+0x0000019Au); // 80290848
  W8(c->r[3]+0x000001C1u,c->r[5]); // 8029084C
  W8(c->r[3]+0x000001C2u,c->r[0]); // 80290850
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 80290854
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 80290858
  W8(c->r[3]+0x000001C3u,c->r[5]); // 8029085C
  W8(c->r[3]+0x000001C4u,c->r[0]); // 80290860
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80290864
  c->r[4]=c->r[31]+0x00000028u; // 80290868
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029086C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80290870
  c->ctr=c->r[12]; // 80290874
  if (true) { c->lr=0x8029087Cu; dispatch(c,c->ctr); } // 80290878
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 8029087C
  c->r[3]=c->r[31]|c->r[31]; // 80290880
  c->r[12]=R32(c->r[12]+0x00000030u); // 80290884
  c->ctr=c->r[12]; // 80290888
  if (true) { c->lr=0x80290890u; dispatch(c,c->ctr); } // 8029088C
  c->r[0]=0u+0x00000001u; // 80290890
  W32(c->r[31]+0x00000020u,c->r[0]); // 80290894
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80290898
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029089C
  c->lr=c->r[0]; // 802908A0
  c->r[1]=c->r[1]+0x00000010u; // 802908A4
  return; // 802908A8
}

// fn_802908AC
void f_802908AC(Ctx* __restrict c) {
  trace_call(0x802908ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802908AC
  c->r[0]=c->lr; // 802908B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802908B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802908B8
  c->r[5]=R32(c->r[4]+0x00000000u); // 802908BC
  c->r[31]=c->r[3]|c->r[3]; // 802908C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802908C4
  W32(c->r[3]+0x00000028u,c->r[5]); // 802908C8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802908CC
  c->r[5]=R32(c->r[4]+0x00000008u); // 802908D0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802908D4
  W32(c->r[3]+0x00000030u,c->r[5]); // 802908D8
  W32(c->r[3]+0x00000034u,c->r[0]); // 802908DC
  c->r[5]=R32(c->r[4]+0x00000010u); // 802908E0
  c->r[0]=R32(c->r[4]+0x00000014u); // 802908E4
  W32(c->r[3]+0x00000038u,c->r[5]); // 802908E8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 802908EC
  c->r[5]=R32(c->r[4]+0x00000018u); // 802908F0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802908F4
  W32(c->r[3]+0x00000040u,c->r[5]); // 802908F8
  W32(c->r[3]+0x00000044u,c->r[0]); // 802908FC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290900
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80290904
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290908
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8029090C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290910
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80290914
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 80290918
  c->r[0]=R32(c->r[4]+0x00000030u); // 8029091C
  W32(c->r[3]+0x00000054u,c->r[5]); // 80290920
  W32(c->r[3]+0x00000058u,c->r[0]); // 80290924
  c->r[5]=R32(c->r[4]+0x00000034u); // 80290928
  c->r[0]=R32(c->r[4]+0x00000038u); // 8029092C
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 80290930
  W32(c->r[3]+0x00000060u,c->r[0]); // 80290934
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 80290938
  c->r[0]=R32(c->r[4]+0x00000040u); // 8029093C
  W32(c->r[3]+0x00000064u,c->r[5]); // 80290940
  W32(c->r[3]+0x00000068u,c->r[0]); // 80290944
  c->r[5]=R32(c->r[4]+0x00000044u); // 80290948
  c->r[0]=R32(c->r[4]+0x00000048u); // 8029094C
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 80290950
  W32(c->r[3]+0x00000070u,c->r[0]); // 80290954
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 80290958
  c->r[0]=R32(c->r[4]+0x00000050u); // 8029095C
  W32(c->r[3]+0x00000074u,c->r[5]); // 80290960
  W32(c->r[3]+0x00000078u,c->r[0]); // 80290964
  c->r[5]=R32(c->r[4]+0x00000054u); // 80290968
  c->r[0]=R32(c->r[4]+0x00000058u); // 8029096C
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80290970
  W32(c->r[3]+0x00000080u,c->r[0]); // 80290974
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 80290978
  c->r[0]=R32(c->r[4]+0x00000060u); // 8029097C
  W32(c->r[3]+0x00000084u,c->r[5]); // 80290980
  W32(c->r[3]+0x00000088u,c->r[0]); // 80290984
  c->r[5]=R32(c->r[4]+0x00000064u); // 80290988
  c->r[0]=R32(c->r[4]+0x00000068u); // 8029098C
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 80290990
  W32(c->r[3]+0x00000090u,c->r[0]); // 80290994
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 80290998
  c->r[0]=R32(c->r[4]+0x00000070u); // 8029099C
  W32(c->r[3]+0x00000094u,c->r[5]); // 802909A0
  W32(c->r[3]+0x00000098u,c->r[0]); // 802909A4
  c->r[5]=R32(c->r[4]+0x00000074u); // 802909A8
  c->r[0]=R32(c->r[4]+0x00000078u); // 802909AC
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 802909B0
  W32(c->r[3]+0x000000A0u,c->r[0]); // 802909B4
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 802909B8
  c->r[0]=R32(c->r[4]+0x00000080u); // 802909BC
  W32(c->r[3]+0x000000A4u,c->r[5]); // 802909C0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802909C4
  c->r[5]=R32(c->r[4]+0x00000084u); // 802909C8
  c->r[0]=R32(c->r[4]+0x00000088u); // 802909CC
  W32(c->r[3]+0x000000ACu,c->r[5]); // 802909D0
  W32(c->r[3]+0x000000B0u,c->r[0]); // 802909D4
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 802909D8
  c->r[0]=R32(c->r[4]+0x00000090u); // 802909DC
  W32(c->r[3]+0x000000B4u,c->r[5]); // 802909E0
  W32(c->r[3]+0x000000B8u,c->r[0]); // 802909E4
  c->r[5]=R32(c->r[4]+0x00000094u); // 802909E8
  c->r[0]=R32(c->r[4]+0x00000098u); // 802909EC
  W32(c->r[3]+0x000000BCu,c->r[5]); // 802909F0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 802909F4
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 802909F8
  W32(c->r[3]+0x000000C4u,c->r[0]); // 802909FC
  c->r[5]=R32(c->r[4]+0x000000A0u); // 80290A00
  c->r[0]=R32(c->r[4]+0x000000A4u); // 80290A04
  W32(c->r[3]+0x000000C8u,c->r[5]); // 80290A08
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80290A0C
  c->r[5]=R32(c->r[4]+0x000000A8u); // 80290A10
  c->r[0]=R32(c->r[4]+0x000000ACu); // 80290A14
  W32(c->r[3]+0x000000D0u,c->r[5]); // 80290A18
  W32(c->r[3]+0x000000D4u,c->r[0]); // 80290A1C
  c->r[5]=R32(c->r[4]+0x000000B0u); // 80290A20
  c->r[0]=R32(c->r[4]+0x000000B4u); // 80290A24
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80290A28
  W32(c->r[3]+0x000000DCu,c->r[0]); // 80290A2C
  c->r[5]=R32(c->r[4]+0x000000B8u); // 80290A30
  c->r[0]=R32(c->r[4]+0x000000BCu); // 80290A34
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80290A38
  W32(c->r[3]+0x000000E4u,c->r[0]); // 80290A3C
  c->r[5]=R32(c->r[4]+0x000000C0u); // 80290A40
  c->r[0]=R32(c->r[4]+0x000000C4u); // 80290A44
  W32(c->r[3]+0x000000E8u,c->r[5]); // 80290A48
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80290A4C
  c->r[5]=R32(c->r[4]+0x000000C8u); // 80290A50
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80290A54
  W32(c->r[3]+0x000000F0u,c->r[5]); // 80290A58
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80290A5C
  c->r[5]=R32(c->r[4]+0x000000D0u); // 80290A60
  c->r[0]=R32(c->r[4]+0x000000D4u); // 80290A64
  W32(c->r[3]+0x000000F8u,c->r[5]); // 80290A68
  W32(c->r[3]+0x000000FCu,c->r[0]); // 80290A6C
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80290A70
  c->r[0]=R32(c->r[4]+0x000000DCu); // 80290A74
  W32(c->r[3]+0x00000100u,c->r[5]); // 80290A78
  W32(c->r[3]+0x00000104u,c->r[0]); // 80290A7C
  c->r[0]=R32(c->r[4]+0x000000E0u); // 80290A80
  W32(c->r[3]+0x00000108u,c->r[0]); // 80290A84
  c->r[0]=R32(c->r[4]+0x000000E4u); // 80290A88
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 80290A8C
  c->r[5]=R32(c->r[4]+0x000000E8u); // 80290A90
  c->r[0]=R32(c->r[4]+0x000000ECu); // 80290A94
  W32(c->r[3]+0x00000110u,c->r[5]); // 80290A98
  W32(c->r[3]+0x00000114u,c->r[0]); // 80290A9C
  c->r[5]=R32(c->r[4]+0x000000F0u); // 80290AA0
  c->r[0]=R32(c->r[4]+0x000000F4u); // 80290AA4
  W32(c->r[3]+0x00000118u,c->r[5]); // 80290AA8
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80290AAC
  c->r[5]=R32(c->r[4]+0x000000F8u); // 80290AB0
  c->r[0]=R32(c->r[4]+0x000000FCu); // 80290AB4
  W32(c->r[3]+0x00000120u,c->r[5]); // 80290AB8
  W32(c->r[3]+0x00000124u,c->r[0]); // 80290ABC
  c->r[5]=R32(c->r[4]+0x00000100u); // 80290AC0
  c->r[0]=R32(c->r[4]+0x00000104u); // 80290AC4
  W32(c->r[3]+0x00000128u,c->r[5]); // 80290AC8
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80290ACC
  c->r[5]=R32(c->r[4]+0x00000108u); // 80290AD0
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80290AD4
  W32(c->r[3]+0x00000130u,c->r[5]); // 80290AD8
  W32(c->r[3]+0x00000134u,c->r[0]); // 80290ADC
  c->r[5]=R32(c->r[4]+0x00000110u); // 80290AE0
  c->r[0]=R32(c->r[4]+0x00000114u); // 80290AE4
  W32(c->r[3]+0x00000138u,c->r[5]); // 80290AE8
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80290AEC
  c->r[5]=R32(c->r[4]+0x00000118u); // 80290AF0
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 80290AF4
  W32(c->r[3]+0x00000140u,c->r[5]); // 80290AF8
  W32(c->r[3]+0x00000144u,c->r[0]); // 80290AFC
  c->r[5]=R32(c->r[4]+0x00000120u); // 80290B00
  c->r[0]=R32(c->r[4]+0x00000124u); // 80290B04
  W32(c->r[3]+0x00000148u,c->r[5]); // 80290B08
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 80290B0C
  c->r[0]=R32(c->r[4]+0x00000128u); // 80290B10
  W32(c->r[3]+0x00000150u,c->r[0]); // 80290B14
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 80290B18
  c->r[0]=R32(c->r[4]+0x00000130u); // 80290B1C
  W32(c->r[3]+0x00000154u,c->r[5]); // 80290B20
  W32(c->r[3]+0x00000158u,c->r[0]); // 80290B24
  c->r[5]=R32(c->r[4]+0x00000134u); // 80290B28
  c->r[0]=R32(c->r[4]+0x00000138u); // 80290B2C
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 80290B30
  W32(c->r[3]+0x00000160u,c->r[0]); // 80290B34
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 80290B38
  c->r[0]=R32(c->r[4]+0x00000140u); // 80290B3C
  W32(c->r[3]+0x00000164u,c->r[5]); // 80290B40
  W32(c->r[3]+0x00000168u,c->r[0]); // 80290B44
  c->r[5]=R32(c->r[4]+0x00000144u); // 80290B48
  c->r[0]=R32(c->r[4]+0x00000148u); // 80290B4C
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 80290B50
  W32(c->r[3]+0x00000170u,c->r[0]); // 80290B54
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 80290B58
  c->r[0]=R32(c->r[4]+0x00000150u); // 80290B5C
  W32(c->r[3]+0x00000174u,c->r[5]); // 80290B60
  W32(c->r[3]+0x00000178u,c->r[0]); // 80290B64
  c->r[5]=R32(c->r[4]+0x00000154u); // 80290B68
  c->r[0]=R32(c->r[4]+0x00000158u); // 80290B6C
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 80290B70
  W32(c->r[3]+0x00000180u,c->r[0]); // 80290B74
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 80290B78
  c->r[0]=R32(c->r[4]+0x00000160u); // 80290B7C
  W32(c->r[3]+0x00000184u,c->r[5]); // 80290B80
  W32(c->r[3]+0x00000188u,c->r[0]); // 80290B84
  c->r[0]=R32(c->r[4]+0x00000164u); // 80290B88
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 80290B8C
  c->r[0]=R32(c->r[4]+0x00000168u); // 80290B90
  W32(c->r[3]+0x00000190u,c->r[0]); // 80290B94
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 80290B98
  W32(c->r[3]+0x00000194u,c->r[0]); // 80290B9C
  c->r[5]=R32(c->r[4]+0x00000170u); // 80290BA0
  c->r[0]=R32(c->r[4]+0x00000174u); // 80290BA4
  W32(c->r[3]+0x00000198u,c->r[5]); // 80290BA8
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80290BAC
  c->r[5]=R32(c->r[4]+0x00000178u); // 80290BB0
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 80290BB4
  W32(c->r[3]+0x000001A0u,c->r[5]); // 80290BB8
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80290BBC
  c->r[5]=R32(c->r[4]+0x00000180u); // 80290BC0
  c->r[0]=R32(c->r[4]+0x00000184u); // 80290BC4
  W32(c->r[3]+0x000001A8u,c->r[5]); // 80290BC8
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80290BCC
  c->r[0]=R32(c->r[4]+0x00000188u); // 80290BD0
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80290BD4
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 80290BD8
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80290BDC
  c->r[0]=R32(c->r[4]+0x00000190u); // 80290BE0
  W32(c->r[3]+0x000001B8u,c->r[0]); // 80290BE4
  c->r[0]=R32(c->r[4]+0x00000194u); // 80290BE8
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80290BEC
  c->r[5]=R8(c->r[4]+0x00000195u); // 80290BF0
  c->r[0]=R8(c->r[4]+0x00000196u); // 80290BF4
  W8(c->r[3]+0x000001BDu,c->r[5]); // 80290BF8
  W8(c->r[3]+0x000001BEu,c->r[0]); // 80290BFC
  c->r[5]=R8(c->r[4]+0x00000197u); // 80290C00
  c->r[0]=R8(c->r[4]+0x00000198u); // 80290C04
  W8(c->r[3]+0x000001BFu,c->r[5]); // 80290C08
  W8(c->r[3]+0x000001C0u,c->r[0]); // 80290C0C
  c->r[5]=R8(c->r[4]+0x00000199u); // 80290C10
  c->r[0]=R8(c->r[4]+0x0000019Au); // 80290C14
  W8(c->r[3]+0x000001C1u,c->r[5]); // 80290C18
  W8(c->r[3]+0x000001C2u,c->r[0]); // 80290C1C
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 80290C20
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 80290C24
  W8(c->r[3]+0x000001C3u,c->r[5]); // 80290C28
  W8(c->r[3]+0x000001C4u,c->r[0]); // 80290C2C
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80290C30
  c->r[4]=c->r[31]+0x00000028u; // 80290C34
  c->r[12]=R32(c->r[3]+0x00000000u); // 80290C38
  c->r[12]=R32(c->r[12]+0x00000018u); // 80290C3C
  c->ctr=c->r[12]; // 80290C40
  if (true) { c->lr=0x80290C48u; dispatch(c,c->ctr); } // 80290C44
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80290C48
  c->r[3]=c->r[31]|c->r[31]; // 80290C4C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80290C50
  c->ctr=c->r[12]; // 80290C54
  if (true) { c->lr=0x80290C5Cu; dispatch(c,c->ctr); } // 80290C58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80290C5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80290C60
  c->lr=c->r[0]; // 80290C64
  c->r[1]=c->r[1]+0x00000010u; // 80290C68
  return; // 80290C6C
}

// fn_80290C70
void f_80290C70(Ctx* __restrict c) {
  trace_call(0x80290C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290C70
  c->r[0]=c->lr; // 80290C74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80290C78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80290C7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80290C80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80290C84
  W32(c->r[1]+0x00000010u,c->r[28]); // 80290C88
  c->r[4]=R32(c->r[3]+0x00000014u); // 80290C8C
  c->r[30]=R32(c->r[3]+0x00000350u); // 80290C90
  c->r[31]=R32(c->r[3]+0x00000354u); // 80290C94
  c->r[28]=R32(c->r[4]+0x00000004u); // 80290C98
L_80290C9C:;
  cmps(c,0,(int32_t)c->r[28],0); // 80290C9C
  if (crb(c,2)) { goto L_80290CD4; } // 80290CA0
  c->r[29]=R32(c->r[28]+0x00000004u); // 80290CA4
  c->r[3]=c->r[28]|c->r[28]; // 80290CA8
  c->r[4]=c->r[31]|c->r[31]; // 80290CAC
  c->r[5]=c->r[30]|c->r[30]; // 80290CB0
  c->r[6]=0u+0xFFFFFFFFu; // 80290CB4
  c->lr=0x80290CBCu; f_80297FA8(c); // 80290CB8
  cmps(c,0,(int32_t)c->r[3],0); // 80290CBC
  if (crb(c,2)) { goto L_80290CCC; } // 80290CC0
  c->r[3]=c->r[28]|c->r[28]; // 80290CC4
  c->lr=0x80290CCCu; f_80297D48(c); // 80290CC8
L_80290CCC:;
  c->r[28]=c->r[29]|c->r[29]; // 80290CCC
  IRQCHK(c); goto L_80290C9C; // 80290CD0
L_80290CD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80290CD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80290CD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80290CDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80290CE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 80290CE4
  c->lr=c->r[0]; // 80290CE8
  c->r[1]=c->r[1]+0x00000020u; // 80290CEC
  return; // 80290CF0
}

// fn_80290CF4
void f_80290CF4(Ctx* __restrict c) {
  trace_call(0x80290CF4u);
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80290CF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80290CF8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80290CFC
  c->ctr=c->r[12]; // 80290D00
  if (true) { dispatch(c,c->ctr); return; } // 80290D04
}

// fn_80290D08
void f_80290D08(Ctx* __restrict c) {
  trace_call(0x80290D08u);
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80290D08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80290D0C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80290D10
  c->ctr=c->r[12]; // 80290D14
  if (true) { dispatch(c,c->ctr); return; } // 80290D18
}

// fn_80290D1C
void f_80290D1C(Ctx* __restrict c) {
  trace_call(0x80290D1Cu);
  return; // 80290D1C
}

// fn_80290D20
void f_80290D20(Ctx* __restrict c) {
  trace_call(0x80290D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290D20
  c->r[0]=c->lr; // 80290D24
  cmps(c,0,(int32_t)c->r[3],0); // 80290D28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80290D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80290D30
  c->r[31]=c->r[3]|c->r[3]; // 80290D34
  if (crb(c,2)) { goto L_80290D4C; } // 80290D38
  cmps(c,0,(int32_t)c->r[4],0); // 80290D3C
  if (!crb(c,1)) { goto L_80290D4C; } // 80290D40
  c->r[4]=0u+0x00000360u; // 80290D44
  c->lr=0x80290D4Cu; f_8029C224(c); // 80290D48
L_80290D4C:;
  c->r[3]=c->r[31]|c->r[31]; // 80290D4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80290D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80290D54
  c->lr=c->r[0]; // 80290D58
  c->r[1]=c->r[1]+0x00000010u; // 80290D5C
  return; // 80290D60
}

// fn_80290D64
void f_80290D64(Ctx* __restrict c) {
  trace_call(0x80290D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290D64
  c->r[0]=c->lr; // 80290D68
  W32(c->r[1]+0x00000044u,c->r[0]); // 80290D6C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80290D70
  W32(c->r[1]+0x00000038u,c->r[30]); // 80290D74
  c->r[30]=c->r[5]|c->r[5]; // 80290D78
  W32(c->r[1]+0x00000034u,c->r[29]); // 80290D7C
  c->r[29]=c->r[4]|c->r[4]; // 80290D80
  W32(c->r[1]+0x00000030u,c->r[28]); // 80290D84
  c->r[28]=c->r[3]|c->r[3]; // 80290D88
  c->lr=0x80290D90u; f_80290060(c); // 80290D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80290D90
  if (!crb(c,2)) { goto L_80290DB4; } // 80290D94
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80290D98
  c->r[3]=c->r[28]|c->r[28]; // 80290D9C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80290DA0
  c->ctr=c->r[12]; // 80290DA4
  if (true) { c->lr=0x80290DACu; dispatch(c,c->ctr); } // 80290DA8
  c->r[3]=0u+0x00000000u; // 80290DAC
  goto L_80290E94; // 80290DB0
L_80290DB4:;
  c->r[31]=0u+0x00000000u; // 80290DB4
  c->r[3]=c->r[30]|c->r[30]; // 80290DB8
  W32(c->r[28]+0x0000001Cu,c->r[31]); // 80290DBC
  c->r[5]=c->r[1]+0x00000008u; // 80290DC0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80290DC4
  c->lr=0x80290DCCu; f_80289DD4(c); // 80290DC8
  cmps(c,0,(int32_t)c->r[3],0); // 80290DCC
  if (!crb(c,2)) { goto L_80290E04; } // 80290DD0
  c->r[3]=0u+0x803D0000u; // 80290DD4
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80290DD8
  c->r[3]=c->r[3]+0x00002F14u; // 80290DDC
  c->r[3]=c->r[3]+0x00000106u; // 80290DE0
  c->lr=0x80290DE8u; f_8029D500(c); // 80290DE4
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80290DE8
  c->r[3]=c->r[28]|c->r[28]; // 80290DEC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80290DF0
  c->ctr=c->r[12]; // 80290DF4
  if (true) { c->lr=0x80290DFCu; dispatch(c,c->ctr); } // 80290DF8
  c->r[3]=0u+0x00000000u; // 80290DFC
  goto L_80290E94; // 80290E00
L_80290E04:;
  c->r[0]=R8(c->r[1]+0x0000001Du); // 80290E04
  cmpu(c,0,c->r[0],0x00000001u); // 80290E08
  if (!crb(c,2)) { goto L_80290E24; } // 80290E0C
  c->r[0]=0u+0x00000001u; // 80290E10
  W32(c->r[28]+0x000001C8u,c->r[0]); // 80290E14
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80290E18
  W32(c->r[28]+0x000001DCu,c->r[0]); // 80290E1C
  goto L_80290E40; // 80290E20
L_80290E24:;
  W32(c->r[28]+0x000001C8u,c->r[31]); // 80290E24
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80290E28
  W32(c->r[28]+0x000001DCu,c->r[0]); // 80290E2C
  W32(c->r[28]+0x000001D4u,c->r[31]); // 80290E30
  W32(c->r[28]+0x000001D0u,c->r[31]); // 80290E34
  c->r[0]=R32(c->r[1]+0x00000010u); // 80290E38
  W32(c->r[28]+0x000001D8u,c->r[0]); // 80290E3C
L_80290E40:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 80290E40
  c->r[0]=0u+0x43300000u; // 80290E44
  W32(c->r[1]+0x00000020u,c->r[0]); // 80290E48
  {uint32_t ea=c->r[2]+0xFFFFCD78u; c->f[1]=RF64(ea);} // 80290E4C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80290E50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 80290E54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80290E58
  {uint32_t ea=c->r[28]+0x000001E4u; WF32(ea,c->f[0]);} // 80290E5C
  c->r[0]=R8(c->r[1]+0x0000001Cu); // 80290E60
  W8(c->r[28]+0x000001E0u,c->r[0]); // 80290E64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80290E68
  cmps(c,0,(int32_t)c->r[0],3); // 80290E6C
  if (!crb(c,2)) { goto L_80290E80; } // 80290E70
  c->r[0]=0u+0x00000002u; // 80290E74
  W32(c->r[28]+0x000001CCu,c->r[0]); // 80290E78
  goto L_80290E90; // 80290E7C
L_80290E80:;
  cmps(c,0,(int32_t)c->r[0],4); // 80290E80
  if (!crb(c,2)) { goto L_80290E90; } // 80290E84
  c->r[0]=0u+0x00000003u; // 80290E88
  W32(c->r[28]+0x000001CCu,c->r[0]); // 80290E8C
L_80290E90:;
  c->r[3]=0u+0x00000001u; // 80290E90
L_80290E94:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80290E94
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80290E98
  c->r[30]=R32(c->r[1]+0x00000038u); // 80290E9C
  c->r[29]=R32(c->r[1]+0x00000034u); // 80290EA0
  c->r[28]=R32(c->r[1]+0x00000030u); // 80290EA4
  c->lr=c->r[0]; // 80290EA8
  c->r[1]=c->r[1]+0x00000040u; // 80290EAC
  return; // 80290EB0
}

// fn_80290EB4
void f_80290EB4(Ctx* __restrict c) {
  trace_call(0x80290EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290EB4
  c->r[0]=c->lr; // 80290EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80290EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80290EC0
  c->r[31]=c->r[3]|c->r[3]; // 80290EC4
  c->r[0]=R32(c->r[3]+0x0000035Cu); // 80290EC8
  cmps(c,0,(int32_t)c->r[0],0); // 80290ECC
  if (crb(c,2)) { goto L_80290EF0; } // 80290ED0
  c->r[3]=c->r[0]|c->r[0]; // 80290ED4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80290ED8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80290EDC
  c->ctr=c->r[12]; // 80290EE0
  if (true) { c->lr=0x80290EE8u; dispatch(c,c->ctr); } // 80290EE4
  c->r[0]=0u+0x00000000u; // 80290EE8
  W32(c->r[31]+0x0000035Cu,c->r[0]); // 80290EEC
L_80290EF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80290EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80290EF4
  c->lr=c->r[0]; // 80290EF8
  c->r[1]=c->r[1]+0x00000010u; // 80290EFC
  return; // 80290F00
}

// fn_80290F04
void f_80290F04(Ctx* __restrict c) {
  trace_call(0x80290F04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80290F04
  c->r[0]=c->lr; // 80290F08
  W32(c->r[1]+0x00000034u,c->r[0]); // 80290F0C
  c->r[11]=c->r[1]+0x00000030u; // 80290F10
  c->lr=0x80290F18u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80290F14
  c->r[5]=R32(c->r[4]+0x00000000u); // 80290F18
  c->r[31]=c->r[3]|c->r[3]; // 80290F1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80290F20
  W32(c->r[3]+0x00000028u,c->r[5]); // 80290F24
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80290F28
  c->r[5]=R32(c->r[4]+0x00000008u); // 80290F2C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80290F30
  W32(c->r[3]+0x00000030u,c->r[5]); // 80290F34
  W32(c->r[3]+0x00000034u,c->r[0]); // 80290F38
  c->r[5]=R32(c->r[4]+0x00000010u); // 80290F3C
  c->r[0]=R32(c->r[4]+0x00000014u); // 80290F40
  W32(c->r[3]+0x00000038u,c->r[5]); // 80290F44
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80290F48
  c->r[5]=R32(c->r[4]+0x00000018u); // 80290F4C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80290F50
  W32(c->r[3]+0x00000040u,c->r[5]); // 80290F54
  W32(c->r[3]+0x00000044u,c->r[0]); // 80290F58
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290F5C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80290F60
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290F64
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80290F68
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80290F6C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80290F70
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 80290F74
  c->r[0]=R32(c->r[4]+0x00000030u); // 80290F78
  W32(c->r[3]+0x00000054u,c->r[5]); // 80290F7C
  W32(c->r[3]+0x00000058u,c->r[0]); // 80290F80
  c->r[5]=R32(c->r[4]+0x00000034u); // 80290F84
  c->r[0]=R32(c->r[4]+0x00000038u); // 80290F88
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 80290F8C
  W32(c->r[3]+0x00000060u,c->r[0]); // 80290F90
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 80290F94
  c->r[0]=R32(c->r[4]+0x00000040u); // 80290F98
  W32(c->r[3]+0x00000064u,c->r[5]); // 80290F9C
  W32(c->r[3]+0x00000068u,c->r[0]); // 80290FA0
  c->r[5]=R32(c->r[4]+0x00000044u); // 80290FA4
  c->r[0]=R32(c->r[4]+0x00000048u); // 80290FA8
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 80290FAC
  W32(c->r[3]+0x00000070u,c->r[0]); // 80290FB0
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 80290FB4
  c->r[0]=R32(c->r[4]+0x00000050u); // 80290FB8
  W32(c->r[3]+0x00000074u,c->r[5]); // 80290FBC
  W32(c->r[3]+0x00000078u,c->r[0]); // 80290FC0
  c->r[5]=R32(c->r[4]+0x00000054u); // 80290FC4
  c->r[0]=R32(c->r[4]+0x00000058u); // 80290FC8
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80290FCC
  W32(c->r[3]+0x00000080u,c->r[0]); // 80290FD0
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 80290FD4
  c->r[0]=R32(c->r[4]+0x00000060u); // 80290FD8
  W32(c->r[3]+0x00000084u,c->r[5]); // 80290FDC
  W32(c->r[3]+0x00000088u,c->r[0]); // 80290FE0
  c->r[5]=R32(c->r[4]+0x00000064u); // 80290FE4
  c->r[0]=R32(c->r[4]+0x00000068u); // 80290FE8
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 80290FEC
  W32(c->r[3]+0x00000090u,c->r[0]); // 80290FF0
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 80290FF4
  c->r[0]=R32(c->r[4]+0x00000070u); // 80290FF8
  W32(c->r[3]+0x00000094u,c->r[5]); // 80290FFC
  W32(c->r[3]+0x00000098u,c->r[0]); // 80291000
  c->r[5]=R32(c->r[4]+0x00000074u); // 80291004
  c->r[0]=R32(c->r[4]+0x00000078u); // 80291008
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 8029100C
  W32(c->r[3]+0x000000A0u,c->r[0]); // 80291010
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 80291014
  c->r[0]=R32(c->r[4]+0x00000080u); // 80291018
  W32(c->r[3]+0x000000A4u,c->r[5]); // 8029101C
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80291020
  c->r[5]=R32(c->r[4]+0x00000084u); // 80291024
  c->r[0]=R32(c->r[4]+0x00000088u); // 80291028
  W32(c->r[3]+0x000000ACu,c->r[5]); // 8029102C
  W32(c->r[3]+0x000000B0u,c->r[0]); // 80291030
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 80291034
  c->r[0]=R32(c->r[4]+0x00000090u); // 80291038
  W32(c->r[3]+0x000000B4u,c->r[5]); // 8029103C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 80291040
  c->r[5]=R32(c->r[4]+0x00000094u); // 80291044
  c->r[0]=R32(c->r[4]+0x00000098u); // 80291048
  W32(c->r[3]+0x000000BCu,c->r[5]); // 8029104C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80291050
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 80291054
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80291058
  c->r[5]=R32(c->r[4]+0x000000A0u); // 8029105C
  c->r[0]=R32(c->r[4]+0x000000A4u); // 80291060
  W32(c->r[3]+0x000000C8u,c->r[5]); // 80291064
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80291068
  c->r[5]=R32(c->r[4]+0x000000A8u); // 8029106C
  c->r[0]=R32(c->r[4]+0x000000ACu); // 80291070
  W32(c->r[3]+0x000000D0u,c->r[5]); // 80291074
  W32(c->r[3]+0x000000D4u,c->r[0]); // 80291078
  c->r[5]=R32(c->r[4]+0x000000B0u); // 8029107C
  c->r[0]=R32(c->r[4]+0x000000B4u); // 80291080
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80291084
  W32(c->r[3]+0x000000DCu,c->r[0]); // 80291088
  c->r[5]=R32(c->r[4]+0x000000B8u); // 8029108C
  c->r[0]=R32(c->r[4]+0x000000BCu); // 80291090
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80291094
  W32(c->r[3]+0x000000E4u,c->r[0]); // 80291098
  c->r[5]=R32(c->r[4]+0x000000C0u); // 8029109C
  c->r[0]=R32(c->r[4]+0x000000C4u); // 802910A0
  W32(c->r[3]+0x000000E8u,c->r[5]); // 802910A4
  W32(c->r[3]+0x000000ECu,c->r[0]); // 802910A8
  c->r[5]=R32(c->r[4]+0x000000C8u); // 802910AC
  c->r[0]=R32(c->r[4]+0x000000CCu); // 802910B0
  W32(c->r[3]+0x000000F0u,c->r[5]); // 802910B4
  W32(c->r[3]+0x000000F4u,c->r[0]); // 802910B8
  c->r[5]=R32(c->r[4]+0x000000D0u); // 802910BC
  c->r[0]=R32(c->r[4]+0x000000D4u); // 802910C0
  W32(c->r[3]+0x000000F8u,c->r[5]); // 802910C4
  W32(c->r[3]+0x000000FCu,c->r[0]); // 802910C8
  c->r[5]=R32(c->r[4]+0x000000D8u); // 802910CC
  c->r[0]=R32(c->r[4]+0x000000DCu); // 802910D0
  W32(c->r[3]+0x00000100u,c->r[5]); // 802910D4
  W32(c->r[3]+0x00000104u,c->r[0]); // 802910D8
  c->r[0]=R32(c->r[4]+0x000000E0u); // 802910DC
  W32(c->r[3]+0x00000108u,c->r[0]); // 802910E0
  c->r[0]=R32(c->r[4]+0x000000E4u); // 802910E4
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 802910E8
  c->r[5]=R32(c->r[4]+0x000000E8u); // 802910EC
  c->r[0]=R32(c->r[4]+0x000000ECu); // 802910F0
  W32(c->r[3]+0x00000110u,c->r[5]); // 802910F4
  W32(c->r[3]+0x00000114u,c->r[0]); // 802910F8
  c->r[5]=R32(c->r[4]+0x000000F0u); // 802910FC
  c->r[0]=R32(c->r[4]+0x000000F4u); // 80291100
  W32(c->r[3]+0x00000118u,c->r[5]); // 80291104
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80291108
  c->r[5]=R32(c->r[4]+0x000000F8u); // 8029110C
  c->r[0]=R32(c->r[4]+0x000000FCu); // 80291110
  W32(c->r[3]+0x00000120u,c->r[5]); // 80291114
  W32(c->r[3]+0x00000124u,c->r[0]); // 80291118
  c->r[5]=R32(c->r[4]+0x00000100u); // 8029111C
  c->r[0]=R32(c->r[4]+0x00000104u); // 80291120
  W32(c->r[3]+0x00000128u,c->r[5]); // 80291124
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80291128
  c->r[5]=R32(c->r[4]+0x00000108u); // 8029112C
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80291130
  W32(c->r[3]+0x00000130u,c->r[5]); // 80291134
  W32(c->r[3]+0x00000134u,c->r[0]); // 80291138
  c->r[5]=R32(c->r[4]+0x00000110u); // 8029113C
  c->r[0]=R32(c->r[4]+0x00000114u); // 80291140
  W32(c->r[3]+0x00000138u,c->r[5]); // 80291144
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80291148
  c->r[5]=R32(c->r[4]+0x00000118u); // 8029114C
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 80291150
  W32(c->r[3]+0x00000140u,c->r[5]); // 80291154
  W32(c->r[3]+0x00000144u,c->r[0]); // 80291158
  c->r[5]=R32(c->r[4]+0x00000120u); // 8029115C
  c->r[0]=R32(c->r[4]+0x00000124u); // 80291160
  W32(c->r[3]+0x00000148u,c->r[5]); // 80291164
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 80291168
  c->r[0]=R32(c->r[4]+0x00000128u); // 8029116C
  W32(c->r[3]+0x00000150u,c->r[0]); // 80291170
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 80291174
  c->r[0]=R32(c->r[4]+0x00000130u); // 80291178
  W32(c->r[3]+0x00000154u,c->r[5]); // 8029117C
  W32(c->r[3]+0x00000158u,c->r[0]); // 80291180
  c->r[5]=R32(c->r[4]+0x00000134u); // 80291184
  c->r[0]=R32(c->r[4]+0x00000138u); // 80291188
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 8029118C
  W32(c->r[3]+0x00000160u,c->r[0]); // 80291190
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 80291194
  c->r[0]=R32(c->r[4]+0x00000140u); // 80291198
  W32(c->r[3]+0x00000164u,c->r[5]); // 8029119C
  W32(c->r[3]+0x00000168u,c->r[0]); // 802911A0
  c->r[5]=R32(c->r[4]+0x00000144u); // 802911A4
  c->r[0]=R32(c->r[4]+0x00000148u); // 802911A8
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 802911AC
  W32(c->r[3]+0x00000170u,c->r[0]); // 802911B0
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 802911B4
  c->r[0]=R32(c->r[4]+0x00000150u); // 802911B8
  W32(c->r[3]+0x00000174u,c->r[5]); // 802911BC
  W32(c->r[3]+0x00000178u,c->r[0]); // 802911C0
  c->r[5]=R32(c->r[4]+0x00000154u); // 802911C4
  c->r[0]=R32(c->r[4]+0x00000158u); // 802911C8
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 802911CC
  W32(c->r[3]+0x00000180u,c->r[0]); // 802911D0
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 802911D4
  c->r[0]=R32(c->r[4]+0x00000160u); // 802911D8
  W32(c->r[3]+0x00000184u,c->r[5]); // 802911DC
  W32(c->r[3]+0x00000188u,c->r[0]); // 802911E0
  c->r[0]=R32(c->r[4]+0x00000164u); // 802911E4
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 802911E8
  c->r[0]=R32(c->r[4]+0x00000168u); // 802911EC
  W32(c->r[3]+0x00000190u,c->r[0]); // 802911F0
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 802911F4
  W32(c->r[3]+0x00000194u,c->r[0]); // 802911F8
  c->r[5]=R32(c->r[4]+0x00000170u); // 802911FC
  c->r[0]=R32(c->r[4]+0x00000174u); // 80291200
  W32(c->r[3]+0x00000198u,c->r[5]); // 80291204
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80291208
  c->r[5]=R32(c->r[4]+0x00000178u); // 8029120C
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 80291210
  W32(c->r[3]+0x000001A0u,c->r[5]); // 80291214
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80291218
  c->r[5]=R32(c->r[4]+0x00000180u); // 8029121C
  c->r[0]=R32(c->r[4]+0x00000184u); // 80291220
  W32(c->r[3]+0x000001A8u,c->r[5]); // 80291224
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80291228
  c->r[0]=R32(c->r[4]+0x00000188u); // 8029122C
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80291230
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 80291234
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80291238
  c->r[0]=R32(c->r[4]+0x00000190u); // 8029123C
  W32(c->r[3]+0x000001B8u,c->r[0]); // 80291240
  c->r[0]=R32(c->r[4]+0x00000194u); // 80291244
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291248
  c->r[5]=R8(c->r[4]+0x00000195u); // 8029124C
  c->r[0]=R8(c->r[4]+0x00000196u); // 80291250
  W8(c->r[3]+0x000001BDu,c->r[5]); // 80291254
  W8(c->r[3]+0x000001BEu,c->r[0]); // 80291258
  c->r[5]=R8(c->r[4]+0x00000197u); // 8029125C
  c->r[0]=R8(c->r[4]+0x00000198u); // 80291260
  W8(c->r[3]+0x000001BFu,c->r[5]); // 80291264
  W8(c->r[3]+0x000001C0u,c->r[0]); // 80291268
  c->r[5]=R8(c->r[4]+0x00000199u); // 8029126C
  c->r[0]=R8(c->r[4]+0x0000019Au); // 80291270
  W8(c->r[3]+0x000001C1u,c->r[5]); // 80291274
  W8(c->r[3]+0x000001C2u,c->r[0]); // 80291278
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 8029127C
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 80291280
  W8(c->r[3]+0x000001C3u,c->r[5]); // 80291284
  W8(c->r[3]+0x000001C4u,c->r[0]); // 80291288
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 8029128C
  c->r[4]=c->r[31]+0x00000028u; // 80291290
  c->r[12]=R32(c->r[3]+0x00000000u); // 80291294
  c->r[12]=R32(c->r[12]+0x00000014u); // 80291298
  c->ctr=c->r[12]; // 8029129C
  if (true) { c->lr=0x802912A4u; dispatch(c,c->ctr); } // 802912A0
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 802912A4
  c->r[3]=c->r[31]|c->r[31]; // 802912A8
  c->r[12]=R32(c->r[12]+0x00000030u); // 802912AC
  c->ctr=c->r[12]; // 802912B0
  if (true) { c->lr=0x802912B8u; dispatch(c,c->ctr); } // 802912B4
  c->r[0]=R32(c->r[31]+0x000000B0u); // 802912B8
  c->r[3]=0u+0x00000001u; // 802912BC
  W32(c->r[31]+0x00000020u,c->r[3]); // 802912C0
  c->r[24]=0u+0x00000000u; // 802912C4
  cmps(c,0,(int32_t)c->r[0],0); // 802912C8
  c->r[26]=R32(c->r[31]+0x00000358u); // 802912CC
  c->r[27]=R32(c->r[31]+0x00000350u); // 802912D0
  c->r[28]=R32(c->r[31]+0x00000354u); // 802912D4
  c->r[29]=R32(c->r[31]+0x00000014u); // 802912D8
  if (!crb(c,2)) { goto L_802912E8; } // 802912DC
  c->r[24]=0u+0x00000000u; // 802912E0
  goto L_8029135C; // 802912E4
L_802912E8:;
  c->r[23]=R32(c->r[29]+0x00000008u); // 802912E8
  c->r[25]=0u+0x00000000u; // 802912EC
L_802912F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 802912F0
  if (crb(c,2)) { goto L_8029135C; } // 802912F4
  c->r[3]=c->r[23]|c->r[23]; // 802912F8
  c->lr=0x80291300u; f_80297FA0(c); // 802912FC
  c->r[4]=R32(c->r[31]+0x000000B0u); // 80291300
  c->lr=0x80291308u; f_801F0C20(c); // 80291304
  cmps(c,0,(int32_t)c->r[3],0); // 80291308
  if (!crb(c,2)) { goto L_80291354; } // 8029130C
  c->r[3]=c->r[23]|c->r[23]; // 80291310
  c->lr=0x80291318u; f_80297F90(c); // 80291314
  cmps(c,0,(int32_t)c->r[3],1); // 80291318
  if (!crb(c,2)) { goto L_80291354; } // 8029131C
  cmps(c,0,(int32_t)c->r[24],0); // 80291320
  if (!crb(c,2)) { goto L_80291330; } // 80291324
  c->r[24]=c->r[23]|c->r[23]; // 80291328
  goto L_80291350; // 8029132C
L_80291330:;
  c->r[3]=c->r[24]|c->r[24]; // 80291330
  c->lr=0x80291338u; f_80297F98(c); // 80291334
  c->r[30]=c->r[3]|c->r[3]; // 80291338
  c->r[3]=c->r[23]|c->r[23]; // 8029133C
  c->lr=0x80291344u; f_80297F98(c); // 80291340
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 80291344
  if (!crb(c,0)) { goto L_80291350; } // 80291348
  c->r[24]=c->r[23]|c->r[23]; // 8029134C
L_80291350:;
  c->r[25]=c->r[25]+0x00000001u; // 80291350
L_80291354:;
  c->r[23]=R32(c->r[23]+0x00000000u); // 80291354
  IRQCHK(c); goto L_802912F0; // 80291358
L_8029135C:;
  cmps(c,0,(int32_t)c->r[24],0); // 8029135C
  if (!crb(c,2)) { goto L_8029136C; } // 80291360
  c->r[0]=0u+0x00000001u; // 80291364
  goto L_802913D4; // 80291368
L_8029136C:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8029136C
  cmpu(c,0,c->r[25],c->r[0]); // 80291370
  if (!crb(c,2)) { goto L_802913D0; } // 80291374
  c->r[23]=R32(c->r[31]+0x000000B4u); // 80291378
  c->r[3]=c->r[24]|c->r[24]; // 8029137C
  c->lr=0x80291384u; f_80297F98(c); // 80291380
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 80291384
  if (!crb(c,1)) { goto L_80291394; } // 80291388
  c->r[0]=0u+0x00000000u; // 8029138C
  goto L_802913D4; // 80291390
L_80291394:;
  c->r[23]=R32(c->r[31]+0x000000B4u); // 80291394
  c->r[3]=c->r[24]|c->r[24]; // 80291398
  c->lr=0x802913A0u; f_80297F98(c); // 8029139C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 802913A0
  if (!crb(c,2)) { goto L_802913C8; } // 802913A4
  c->r[0]=R32(c->r[31]+0x000000ACu); // 802913A8
  cmps(c,0,(int32_t)c->r[0],0); // 802913AC
  if (!crb(c,2)) { goto L_802913C0; } // 802913B0
  c->r[3]=c->r[24]|c->r[24]; // 802913B4
  c->lr=0x802913BCu; f_80297D48(c); // 802913B8
  goto L_802913D0; // 802913BC
L_802913C0:;
  c->r[0]=0u+0x00000000u; // 802913C0
  goto L_802913D4; // 802913C4
L_802913C8:;
  c->r[3]=c->r[24]|c->r[24]; // 802913C8
  c->lr=0x802913D0u; f_80297D48(c); // 802913CC
L_802913D0:;
  c->r[0]=0u+0x00000001u; // 802913D0
L_802913D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802913D4
  if (crb(c,2)) { goto L_80291478; } // 802913D8
  c->r[3]=R32(c->r[29]+0x00000000u); // 802913DC
  c->r[6]=c->r[28]|c->r[28]; // 802913E0
  c->r[7]=c->r[27]|c->r[27]; // 802913E4
  c->r[8]=c->r[26]|c->r[26]; // 802913E8
  c->r[5]=c->r[31]+0x00000028u; // 802913EC
  c->r[4]=c->r[13]+0xFFFF8880u; // 802913F0
  c->lr=0x802913F8u; f_80296AA4(c); // 802913F4
  cmps(c,0,(int32_t)c->r[3],0); // 802913F8
  c->r[23]=c->r[3]|c->r[3]; // 802913FC
  if (crb(c,2)) { goto L_80291478; } // 80291400
  c->lr=0x80291408u; f_80297C78(c); // 80291404
  c->r[3]=R32(c->r[29]+0x00000004u); // 80291408
  cmps(c,0,(int32_t)c->r[3],0); // 8029140C
  if (crb(c,2)) { goto L_80291454; } // 80291410
  c->r[0]=R32(c->r[23]+0x00000000u); // 80291414
  cmps(c,0,(int32_t)c->r[0],0); // 80291418
  if (!crb(c,2)) { goto L_8029142C; } // 8029141C
  c->r[0]=R32(c->r[23]+0x00000004u); // 80291420
  cmps(c,0,(int32_t)c->r[0],0); // 80291424
  if (crb(c,2)) { goto L_8029143C; } // 80291428
L_8029142C:;
  c->r[3]=0u+0x804C0000u; // 8029142C
  c->r[3]=c->r[3]+0xFFFFCFB8u; // 80291430
  c->lr=0x80291438u; f_8029D4B0(c); // 80291434
L_80291438:;
  IRQCHK(c); goto L_80291438; // 80291438
L_8029143C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8029143C
  W32(c->r[23]+0x00000000u,c->r[0]); // 80291440
  W32(c->r[23]+0x00000004u,c->r[3]); // 80291444
  W32(c->r[3]+0x00000000u,c->r[23]); // 80291448
  W32(c->r[29]+0x00000004u,c->r[23]); // 8029144C
  goto L_80291478; // 80291450
L_80291454:;
  W32(c->r[29]+0x00000004u,c->r[23]); // 80291454
  c->r[0]=R32(c->r[29]+0x00000008u); // 80291458
  cmps(c,0,(int32_t)c->r[0],0); // 8029145C
  if (crb(c,2)) { goto L_80291474; } // 80291460
  c->r[3]=0u+0x804C0000u; // 80291464
  c->r[3]=c->r[3]+0xFFFFCF80u; // 80291468
  c->lr=0x80291470u; f_8029D4B0(c); // 8029146C
L_80291470:;
  IRQCHK(c); goto L_80291470; // 80291470
L_80291474:;
  W32(c->r[29]+0x00000008u,c->r[23]); // 80291474
L_80291478:;
  c->r[11]=c->r[1]+0x00000030u; // 80291478
  c->lr=0x80291480u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8029147C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80291480
  c->lr=c->r[0]; // 80291484
  c->r[1]=c->r[1]+0x00000030u; // 80291488
  return; // 8029148C
}

// fn_80291490
void f_80291490(Ctx* __restrict c) {
  trace_call(0x80291490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80291490
  c->r[0]=c->lr; // 80291494
  W32(c->r[1]+0x00000024u,c->r[0]); // 80291498
  c->r[11]=c->r[1]+0x00000020u; // 8029149C
  c->lr=0x802914A4u; f_801E795C(c); // 802914A0
  c->r[5]=R32(c->r[4]+0x00000000u); // 802914A4
  c->r[31]=c->r[3]|c->r[3]; // 802914A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 802914AC
  W32(c->r[3]+0x00000028u,c->r[5]); // 802914B0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802914B4
  c->r[5]=R32(c->r[4]+0x00000008u); // 802914B8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802914BC
  W32(c->r[3]+0x00000030u,c->r[5]); // 802914C0
  W32(c->r[3]+0x00000034u,c->r[0]); // 802914C4
  c->r[5]=R32(c->r[4]+0x00000010u); // 802914C8
  c->r[0]=R32(c->r[4]+0x00000014u); // 802914CC
  W32(c->r[3]+0x00000038u,c->r[5]); // 802914D0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 802914D4
  c->r[5]=R32(c->r[4]+0x00000018u); // 802914D8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802914DC
  W32(c->r[3]+0x00000040u,c->r[5]); // 802914E0
  W32(c->r[3]+0x00000044u,c->r[0]); // 802914E4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802914E8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 802914EC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802914F0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 802914F4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802914F8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 802914FC
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 80291500
  c->r[0]=R32(c->r[4]+0x00000030u); // 80291504
  W32(c->r[3]+0x00000054u,c->r[5]); // 80291508
  W32(c->r[3]+0x00000058u,c->r[0]); // 8029150C
  c->r[5]=R32(c->r[4]+0x00000034u); // 80291510
  c->r[0]=R32(c->r[4]+0x00000038u); // 80291514
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 80291518
  W32(c->r[3]+0x00000060u,c->r[0]); // 8029151C
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 80291520
  c->r[0]=R32(c->r[4]+0x00000040u); // 80291524
  W32(c->r[3]+0x00000064u,c->r[5]); // 80291528
  W32(c->r[3]+0x00000068u,c->r[0]); // 8029152C
  c->r[5]=R32(c->r[4]+0x00000044u); // 80291530
  c->r[0]=R32(c->r[4]+0x00000048u); // 80291534
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 80291538
  W32(c->r[3]+0x00000070u,c->r[0]); // 8029153C
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 80291540
  c->r[0]=R32(c->r[4]+0x00000050u); // 80291544
  W32(c->r[3]+0x00000074u,c->r[5]); // 80291548
  W32(c->r[3]+0x00000078u,c->r[0]); // 8029154C
  c->r[5]=R32(c->r[4]+0x00000054u); // 80291550
  c->r[0]=R32(c->r[4]+0x00000058u); // 80291554
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80291558
  W32(c->r[3]+0x00000080u,c->r[0]); // 8029155C
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 80291560
  c->r[0]=R32(c->r[4]+0x00000060u); // 80291564
  W32(c->r[3]+0x00000084u,c->r[5]); // 80291568
  W32(c->r[3]+0x00000088u,c->r[0]); // 8029156C
  c->r[5]=R32(c->r[4]+0x00000064u); // 80291570
  c->r[0]=R32(c->r[4]+0x00000068u); // 80291574
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 80291578
  W32(c->r[3]+0x00000090u,c->r[0]); // 8029157C
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 80291580
  c->r[0]=R32(c->r[4]+0x00000070u); // 80291584
  W32(c->r[3]+0x00000094u,c->r[5]); // 80291588
  W32(c->r[3]+0x00000098u,c->r[0]); // 8029158C
  c->r[5]=R32(c->r[4]+0x00000074u); // 80291590
  c->r[0]=R32(c->r[4]+0x00000078u); // 80291594
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 80291598
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8029159C
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 802915A0
  c->r[0]=R32(c->r[4]+0x00000080u); // 802915A4
  W32(c->r[3]+0x000000A4u,c->r[5]); // 802915A8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802915AC
  c->r[5]=R32(c->r[4]+0x00000084u); // 802915B0
  c->r[0]=R32(c->r[4]+0x00000088u); // 802915B4
  W32(c->r[3]+0x000000ACu,c->r[5]); // 802915B8
  W32(c->r[3]+0x000000B0u,c->r[0]); // 802915BC
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 802915C0
  c->r[0]=R32(c->r[4]+0x00000090u); // 802915C4
  W32(c->r[3]+0x000000B4u,c->r[5]); // 802915C8
  W32(c->r[3]+0x000000B8u,c->r[0]); // 802915CC
  c->r[5]=R32(c->r[4]+0x00000094u); // 802915D0
  c->r[0]=R32(c->r[4]+0x00000098u); // 802915D4
  W32(c->r[3]+0x000000BCu,c->r[5]); // 802915D8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 802915DC
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 802915E0
  W32(c->r[3]+0x000000C4u,c->r[0]); // 802915E4
  c->r[5]=R32(c->r[4]+0x000000A0u); // 802915E8
  c->r[0]=R32(c->r[4]+0x000000A4u); // 802915EC
  W32(c->r[3]+0x000000C8u,c->r[5]); // 802915F0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802915F4
  c->r[5]=R32(c->r[4]+0x000000A8u); // 802915F8
  c->r[0]=R32(c->r[4]+0x000000ACu); // 802915FC
  W32(c->r[3]+0x000000D0u,c->r[5]); // 80291600
  W32(c->r[3]+0x000000D4u,c->r[0]); // 80291604
  c->r[5]=R32(c->r[4]+0x000000B0u); // 80291608
  c->r[0]=R32(c->r[4]+0x000000B4u); // 8029160C
  W32(c->r[3]+0x000000D8u,c->r[5]); // 80291610
  W32(c->r[3]+0x000000DCu,c->r[0]); // 80291614
  c->r[5]=R32(c->r[4]+0x000000B8u); // 80291618
  c->r[0]=R32(c->r[4]+0x000000BCu); // 8029161C
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80291620
  W32(c->r[3]+0x000000E4u,c->r[0]); // 80291624
  c->r[5]=R32(c->r[4]+0x000000C0u); // 80291628
  c->r[0]=R32(c->r[4]+0x000000C4u); // 8029162C
  W32(c->r[3]+0x000000E8u,c->r[5]); // 80291630
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80291634
  c->r[5]=R32(c->r[4]+0x000000C8u); // 80291638
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8029163C
  W32(c->r[3]+0x000000F0u,c->r[5]); // 80291640
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80291644
  c->r[5]=R32(c->r[4]+0x000000D0u); // 80291648
  c->r[0]=R32(c->r[4]+0x000000D4u); // 8029164C
  W32(c->r[3]+0x000000F8u,c->r[5]); // 80291650
  W32(c->r[3]+0x000000FCu,c->r[0]); // 80291654
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80291658
  c->r[0]=R32(c->r[4]+0x000000DCu); // 8029165C
  W32(c->r[3]+0x00000100u,c->r[5]); // 80291660
  W32(c->r[3]+0x00000104u,c->r[0]); // 80291664
  c->r[0]=R32(c->r[4]+0x000000E0u); // 80291668
  W32(c->r[3]+0x00000108u,c->r[0]); // 8029166C
  c->r[0]=R32(c->r[4]+0x000000E4u); // 80291670
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 80291674
  c->r[5]=R32(c->r[4]+0x000000E8u); // 80291678
  c->r[0]=R32(c->r[4]+0x000000ECu); // 8029167C
  W32(c->r[3]+0x00000110u,c->r[5]); // 80291680
  W32(c->r[3]+0x00000114u,c->r[0]); // 80291684
  c->r[5]=R32(c->r[4]+0x000000F0u); // 80291688
  c->r[0]=R32(c->r[4]+0x000000F4u); // 8029168C
  W32(c->r[3]+0x00000118u,c->r[5]); // 80291690
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80291694
  c->r[5]=R32(c->r[4]+0x000000F8u); // 80291698
  c->r[0]=R32(c->r[4]+0x000000FCu); // 8029169C
  W32(c->r[3]+0x00000120u,c->r[5]); // 802916A0
  W32(c->r[3]+0x00000124u,c->r[0]); // 802916A4
  c->r[5]=R32(c->r[4]+0x00000100u); // 802916A8
  c->r[0]=R32(c->r[4]+0x00000104u); // 802916AC
  W32(c->r[3]+0x00000128u,c->r[5]); // 802916B0
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 802916B4
  c->r[5]=R32(c->r[4]+0x00000108u); // 802916B8
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 802916BC
  W32(c->r[3]+0x00000130u,c->r[5]); // 802916C0
  W32(c->r[3]+0x00000134u,c->r[0]); // 802916C4
  c->r[5]=R32(c->r[4]+0x00000110u); // 802916C8
  c->r[0]=R32(c->r[4]+0x00000114u); // 802916CC
  W32(c->r[3]+0x00000138u,c->r[5]); // 802916D0
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 802916D4
  c->r[5]=R32(c->r[4]+0x00000118u); // 802916D8
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 802916DC
  W32(c->r[3]+0x00000140u,c->r[5]); // 802916E0
  W32(c->r[3]+0x00000144u,c->r[0]); // 802916E4
  c->r[5]=R32(c->r[4]+0x00000120u); // 802916E8
  c->r[0]=R32(c->r[4]+0x00000124u); // 802916EC
  W32(c->r[3]+0x00000148u,c->r[5]); // 802916F0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 802916F4
  c->r[0]=R32(c->r[4]+0x00000128u); // 802916F8
  W32(c->r[3]+0x00000150u,c->r[0]); // 802916FC
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 80291700
  c->r[0]=R32(c->r[4]+0x00000130u); // 80291704
  W32(c->r[3]+0x00000154u,c->r[5]); // 80291708
  W32(c->r[3]+0x00000158u,c->r[0]); // 8029170C
  c->r[5]=R32(c->r[4]+0x00000134u); // 80291710
  c->r[0]=R32(c->r[4]+0x00000138u); // 80291714
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 80291718
  W32(c->r[3]+0x00000160u,c->r[0]); // 8029171C
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 80291720
  c->r[0]=R32(c->r[4]+0x00000140u); // 80291724
  W32(c->r[3]+0x00000164u,c->r[5]); // 80291728
  W32(c->r[3]+0x00000168u,c->r[0]); // 8029172C
  c->r[5]=R32(c->r[4]+0x00000144u); // 80291730
  c->r[0]=R32(c->r[4]+0x00000148u); // 80291734
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 80291738
  W32(c->r[3]+0x00000170u,c->r[0]); // 8029173C
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 80291740
  c->r[0]=R32(c->r[4]+0x00000150u); // 80291744
  W32(c->r[3]+0x00000174u,c->r[5]); // 80291748
  W32(c->r[3]+0x00000178u,c->r[0]); // 8029174C
  c->r[5]=R32(c->r[4]+0x00000154u); // 80291750
  c->r[0]=R32(c->r[4]+0x00000158u); // 80291754
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 80291758
  W32(c->r[3]+0x00000180u,c->r[0]); // 8029175C
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 80291760
  c->r[0]=R32(c->r[4]+0x00000160u); // 80291764
  W32(c->r[3]+0x00000184u,c->r[5]); // 80291768
  W32(c->r[3]+0x00000188u,c->r[0]); // 8029176C
  c->r[0]=R32(c->r[4]+0x00000164u); // 80291770
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 80291774
  c->r[0]=R32(c->r[4]+0x00000168u); // 80291778
  W32(c->r[3]+0x00000190u,c->r[0]); // 8029177C
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 80291780
  W32(c->r[3]+0x00000194u,c->r[0]); // 80291784
  c->r[5]=R32(c->r[4]+0x00000170u); // 80291788
  c->r[0]=R32(c->r[4]+0x00000174u); // 8029178C
  W32(c->r[3]+0x00000198u,c->r[5]); // 80291790
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80291794
  c->r[5]=R32(c->r[4]+0x00000178u); // 80291798
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 8029179C
  W32(c->r[3]+0x000001A0u,c->r[5]); // 802917A0
  W32(c->r[3]+0x000001A4u,c->r[0]); // 802917A4
  c->r[5]=R32(c->r[4]+0x00000180u); // 802917A8
  c->r[0]=R32(c->r[4]+0x00000184u); // 802917AC
  W32(c->r[3]+0x000001A8u,c->r[5]); // 802917B0
  W32(c->r[3]+0x000001ACu,c->r[0]); // 802917B4
  c->r[0]=R32(c->r[4]+0x00000188u); // 802917B8
  W32(c->r[3]+0x000001B0u,c->r[0]); // 802917BC
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 802917C0
  W32(c->r[3]+0x000001B4u,c->r[0]); // 802917C4
  c->r[0]=R32(c->r[4]+0x00000190u); // 802917C8
  W32(c->r[3]+0x000001B8u,c->r[0]); // 802917CC
  c->r[0]=R32(c->r[4]+0x00000194u); // 802917D0
  W32(c->r[3]+0x000001BCu,c->r[0]); // 802917D4
  c->r[5]=R8(c->r[4]+0x00000195u); // 802917D8
  c->r[0]=R8(c->r[4]+0x00000196u); // 802917DC
  W8(c->r[3]+0x000001BDu,c->r[5]); // 802917E0
  W8(c->r[3]+0x000001BEu,c->r[0]); // 802917E4
  c->r[5]=R8(c->r[4]+0x00000197u); // 802917E8
  c->r[0]=R8(c->r[4]+0x00000198u); // 802917EC
  W8(c->r[3]+0x000001BFu,c->r[5]); // 802917F0
  W8(c->r[3]+0x000001C0u,c->r[0]); // 802917F4
  c->r[5]=R8(c->r[4]+0x00000199u); // 802917F8
  c->r[0]=R8(c->r[4]+0x0000019Au); // 802917FC
  W8(c->r[3]+0x000001C1u,c->r[5]); // 80291800
  W8(c->r[3]+0x000001C2u,c->r[0]); // 80291804
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 80291808
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 8029180C
  W8(c->r[3]+0x000001C3u,c->r[5]); // 80291810
  W8(c->r[3]+0x000001C4u,c->r[0]); // 80291814
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80291818
  c->r[4]=c->r[31]+0x00000028u; // 8029181C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80291820
  c->r[12]=R32(c->r[12]+0x00000018u); // 80291824
  c->ctr=c->r[12]; // 80291828
  if (true) { c->lr=0x80291830u; dispatch(c,c->ctr); } // 8029182C
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80291830
  c->r[3]=c->r[31]|c->r[31]; // 80291834
  c->r[12]=R32(c->r[12]+0x00000030u); // 80291838
  c->ctr=c->r[12]; // 8029183C
  if (true) { c->lr=0x80291844u; dispatch(c,c->ctr); } // 80291840
  c->r[3]=R32(c->r[31]+0x00000014u); // 80291844
  c->r[28]=R32(c->r[31]+0x00000358u); // 80291848
  c->r[29]=R32(c->r[31]+0x00000350u); // 8029184C
  c->r[30]=R32(c->r[31]+0x00000354u); // 80291850
  c->r[27]=R32(c->r[3]+0x00000004u); // 80291854
  goto L_80291894; // 80291858
L_8029185C:;
  c->r[3]=c->r[27]|c->r[27]; // 8029185C
  c->r[4]=c->r[30]|c->r[30]; // 80291860
  c->r[5]=c->r[29]|c->r[29]; // 80291864
  c->r[6]=c->r[28]|c->r[28]; // 80291868
  c->lr=0x80291870u; f_80297FA8(c); // 8029186C
  cmps(c,0,(int32_t)c->r[3],0); // 80291870
  if (crb(c,2)) { goto L_80291890; } // 80291874
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 80291878
  c->r[3]=c->r[27]|c->r[27]; // 8029187C
  c->r[4]=c->r[31]+0x00000028u; // 80291880
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80291884
  c->ctr=c->r[12]; // 80291888
  if (true) { c->lr=0x80291890u; dispatch(c,c->ctr); } // 8029188C
L_80291890:;
  c->r[27]=R32(c->r[27]+0x00000004u); // 80291890
L_80291894:;
  cmps(c,0,(int32_t)c->r[27],0); // 80291894
  if (!crb(c,2)) { IRQCHK(c); goto L_8029185C; } // 80291898
  c->r[11]=c->r[1]+0x00000020u; // 8029189C
  c->lr=0x802918A4u; f_801E79A8(c); // 802918A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802918A4
  c->lr=c->r[0]; // 802918A8
  c->r[1]=c->r[1]+0x00000020u; // 802918AC
  return; // 802918B0
}

// fn_802918B4
void f_802918B4(Ctx* __restrict c) {
  trace_call(0x802918B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802918B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802918B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802918BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802918C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802918C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 802918C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 802918CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[28]);} // 802918D0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,28,ea,0,0);} // 802918D4
  {uint32_t ea=c->r[3]+0x000001E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802918D8
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802918DC
  {uint32_t ea=c->r[3]+0x000001ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 802918E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 802918E4
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802918E8
  c->r[4]=R32(c->r[3]+0x000001B0u); // 802918EC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 802918F0
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802918F4
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802918F8
  c->r[0]=sraw(c,c->r[4],31); cr0(c,c->r[0]); // 802918FC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[2]);} // 80291900
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 80291904
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 80291908
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 8029190C
  if (!crb(c,2)) { goto L_8029195C; } // 80291910
  c->r[0]=c->r[4]|0x80000000u; // 80291914
  c->r[10]=R32(c->r[3]+0x000001C8u); // 80291918
  c->r[9]=R32(c->r[3]+0x000001CCu); // 8029191C
  c->r[7]=R32(c->r[3]+0x000001D0u); // 80291920
  c->r[8]=R32(c->r[3]+0x000001D4u); // 80291924
  c->r[6]=R32(c->r[3]+0x000001D8u); // 80291928
  c->r[5]=R32(c->r[3]+0x000001DCu); // 8029192C
  c->r[4]=R8(c->r[3]+0x000001E0u); // 80291930
  {uint32_t ea=c->r[3]+0x000001E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291934
  W32(c->r[3]+0x00000028u,c->r[10]); // 80291938
  W32(c->r[3]+0x0000002Cu,c->r[9]); // 8029193C
  W32(c->r[3]+0x00000034u,c->r[8]); // 80291940
  W32(c->r[3]+0x00000030u,c->r[7]); // 80291944
  W32(c->r[3]+0x00000038u,c->r[6]); // 80291948
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 8029194C
  W8(c->r[3]+0x00000040u,c->r[4]); // 80291950
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80291954
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80291958
L_8029195C:;
  c->r[4]=R32(c->r[3]+0x000001B0u); // 8029195C
  c->r[0]=rotl(c->r[4],1)&0xC0000000u; // 80291960
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291964
  if (!crb(c,2)) { goto L_802919A4; } // 80291968
  {uint32_t ea=c->r[3]+0x000001F4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8029196C
  c->r[0]=c->r[4]|0x40000000u; // 80291970
  {uint32_t ea=c->r[3]+0x000001F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80291974
  {uint32_t ea=c->r[3]+0x000001FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80291978
  {uint32_t ea=c->r[3]+0x00000200u; c->f[2]=c->ps1[2]=RF32(ea);} // 8029197C
  {uint32_t ea=c->r[3]+0x00000204u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291980
  {uint32_t ea=c->r[3]+0x00000208u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291984
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[5]);} // 80291988
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[4]);} // 8029198C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[3]);} // 80291990
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 80291994
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 80291998
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8029199C
  W32(c->r[3]+0x000001B0u,c->r[0]); // 802919A0
L_802919A4:;
  {uint32_t ea=c->r[3]+0x00000238u; c->f[0]=c->ps1[0]=RF32(ea);} // 802919A4
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[3]=c->ps1[3]=RF32(ea);} // 802919A8
  {uint32_t ea=c->r[3]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 802919AC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 802919B0
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802919B4
  c->r[0]=R32(c->r[3]+0x000001B4u); // 802919B8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 802919BC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[4]); // 802919C0
  {uint32_t ea=c->r[3]+0x00000094u; c->f[6]=c->ps1[6]=RF32(ea);} // 802919C4
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[4]); // 802919C8
  {uint32_t ea=c->r[3]+0x00000230u; c->f[5]=c->ps1[5]=RF32(ea);} // 802919CC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 802919D0
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[6]); // 802919D4
  {uint32_t ea=c->r[3]+0x00000090u; c->f[4]=c->ps1[4]=RF32(ea);} // 802919D8
  cmps(c,0,(int32_t)c->r[0],0); // 802919DC
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[1]); // 802919E0
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[2]);} // 802919E4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[6],c->f[5],c->f[4])); // 802919E8
  c->r[4]=R32(c->r[3]+0x0000024Cu); // 802919EC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 802919F0
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 802919F4
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 802919F8
  if (!crb(c,2)) { goto L_80291A0C; } // 802919FC
  c->r[0]=0u+0x00000001u; // 80291A00
  W32(c->r[3]+0x000000ACu,c->r[4]); // 80291A04
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80291A08
L_80291A0C:;
  c->r[4]=R32(c->r[3]+0x000001BCu); // 80291A0C
  {uint32_t ea=c->r[3]+0x00000258u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291A10
  c->r[0]=sraw(c,c->r[4],31); cr0(c,c->r[0]); // 80291A14
  if (!crb(c,2)) { goto L_80291A28; } // 80291A18
  c->r[0]=c->r[4]|0x80000000u; // 80291A1C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 80291A20
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291A24
L_80291A28:;
  c->r[4]=R32(c->r[3]+0x000001BCu); // 80291A28
  c->r[5]=R8(c->r[3]+0x0000025Cu); // 80291A2C
  c->r[0]=rotl(c->r[4],1)&0xC0000000u; // 80291A30
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291A34
  if (!crb(c,2)) { goto L_80291A48; } // 80291A38
  c->r[0]=c->r[4]|0x40000000u; // 80291A3C
  W8(c->r[3]+0x000000BCu,c->r[5]); // 80291A40
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291A44
L_80291A48:;
  c->r[4]=R32(c->r[3]+0x000001B0u); // 80291A48
  c->r[5]=R32(c->r[3]+0x00000264u); // 80291A4C
  c->r[0]=rotl(c->r[4],2)&0xC0000000u; // 80291A50
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291A54
  if (!crb(c,2)) { goto L_80291A68; } // 80291A58
  c->r[0]=c->r[4]|0x20000000u; // 80291A5C
  W32(c->r[3]+0x000000C4u,c->r[5]); // 80291A60
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80291A64
L_80291A68:;
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80291A68
  {uint32_t ea=c->r[3]+0x00000288u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291A6C
  {uint32_t ea=c->r[3]+0x00000268u; c->f[2]=c->ps1[2]=RF32(ea);} // 80291A70
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[0]); // 80291A74
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291A78
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[6]=c->ps1[6]=RF32(ea);} // 80291A7C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[3],c->f[2],c->f[1])); // 80291A80
  {uint32_t ea=c->r[3]+0x0000028Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80291A84
  {uint32_t ea=c->r[3]+0x0000026Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80291A88
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[0]); // 80291A8C
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80291A90
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291A94
  c->f[3]=c->ps1[3]=S(std::fma(c->f[6],c->f[3],c->f[1])); // 80291A98
  {uint32_t ea=c->r[3]+0x00000290u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291A9C
  {uint32_t ea=c->r[3]+0x00000270u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291AA0
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291AA4
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 80291AA8
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[9]=c->ps1[9]=RF32(ea);} // 80291AAC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[7],c->f[1])); // 80291AB0
  {uint32_t ea=c->r[3]+0x00000294u; c->f[6]=c->ps1[6]=RF32(ea);} // 80291AB4
  {uint32_t ea=c->r[3]+0x00000274u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291AB8
  c->f[29]=c->ps1[29]=S(c->f[9]*c->f[6]); // 80291ABC
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291AC0
  c->r[4]=R32(c->r[3]+0x000001BCu); // 80291AC4
  c->f[28]=c->ps1[28]=S(std::fma(c->f[9],c->f[8],c->f[7])); // 80291AC8
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[10]=c->ps1[10]=RF32(ea);} // 80291ACC
  {uint32_t ea=c->r[3]+0x00000298u; c->f[6]=c->ps1[6]=RF32(ea);} // 80291AD0
  c->r[0]=rotl(c->r[4],4)&0xC0000000u; // 80291AD4
  {uint32_t ea=c->r[3]+0x00000278u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291AD8
  c->f[31]=c->ps1[31]=S(c->f[10]*c->f[6]); // 80291ADC
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291AE0
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291AE4
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[9]=c->ps1[9]=RF32(ea);} // 80291AE8
  c->f[30]=c->ps1[30]=S(std::fma(c->f[10],c->f[8],c->f[7])); // 80291AEC
  {uint32_t ea=c->r[3]+0x0000029Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80291AF0
  {uint32_t ea=c->r[3]+0x0000027Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80291AF4
  c->f[12]=c->ps1[12]=S(c->f[9]*c->f[6]); // 80291AF8
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[7]=c->ps1[7]=RF32(ea);} // 80291AFC
  {uint32_t ea=c->r[3]+0x00000100u; c->f[11]=c->ps1[11]=RF32(ea);} // 80291B00
  c->f[13]=c->ps1[13]=S(std::fma(c->f[9],c->f[8],c->f[7])); // 80291B04
  {uint32_t ea=c->r[3]+0x000002A0u; c->f[6]=c->ps1[6]=RF32(ea);} // 80291B08
  {uint32_t ea=c->r[3]+0x00000280u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291B0C
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[6]); // 80291B10
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291B14
  {uint32_t ea=c->r[3]+0x00000104u; c->f[9]=c->ps1[9]=RF32(ea);} // 80291B18
  c->f[11]=c->ps1[11]=S(std::fma(c->f[11],c->f[8],c->f[7])); // 80291B1C
  {uint32_t ea=c->r[3]+0x000002A4u; c->f[6]=c->ps1[6]=RF32(ea);} // 80291B20
  {uint32_t ea=c->r[3]+0x00000284u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291B24
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[6]); // 80291B28
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291B2C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[5]);} // 80291B30
  c->f[5]=c->ps1[5]=S(std::fma(c->f[9],c->f[8],c->f[7])); // 80291B34
  c->r[5]=R32(c->r[3]+0x000002A8u); // 80291B38
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[4]);} // 80291B3C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 80291B40
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[2]);} // 80291B44
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 80291B48
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 80291B4C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[28]);} // 80291B50
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[29]);} // 80291B54
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[30]);} // 80291B58
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[31]);} // 80291B5C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[13]);} // 80291B60
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[12]);} // 80291B64
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[11]);} // 80291B68
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[10]);} // 80291B6C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[5]);} // 80291B70
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[6]);} // 80291B74
  if (!crb(c,2)) { goto L_80291B88; } // 80291B78
  c->r[0]=c->r[4]|0x08000000u; // 80291B7C
  W32(c->r[3]+0x00000108u,c->r[5]); // 80291B80
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291B84
L_80291B88:;
  c->r[4]=R32(c->r[3]+0x000001BCu); // 80291B88
  c->r[5]=R32(c->r[3]+0x000002ACu); // 80291B8C
  c->r[0]=rotl(c->r[4],5)&0xC0000000u; // 80291B90
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291B94
  if (!crb(c,2)) { goto L_80291BA8; } // 80291B98
  c->r[0]=c->r[4]|0x04000000u; // 80291B9C
  W32(c->r[3]+0x0000010Cu,c->r[5]); // 80291BA0
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291BA4
L_80291BA8:;
  c->r[4]=R32(c->r[3]+0x000001BCu); // 80291BA8
  c->r[5]=R32(c->r[3]+0x000002F0u); // 80291BAC
  c->r[0]=rotl(c->r[4],6)&0xC0000000u; // 80291BB0
  c->r[0]=sraw(c,c->r[0],31); cr0(c,c->r[0]); // 80291BB4
  if (!crb(c,2)) { goto L_80291BC8; } // 80291BB8
  c->r[0]=c->r[4]|0x02000000u; // 80291BBC
  W32(c->r[3]+0x00000150u,c->r[5]); // 80291BC0
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80291BC4
L_80291BC8:;
  c->r[0]=0u+0x00000004u; // 80291BC8
  c->r[6]=c->r[3]|c->r[3]; // 80291BCC
  c->r[8]=0u+0x00000000u; // 80291BD0
  c->r[4]=0u+0x00000001u; // 80291BD4
  c->ctr=c->r[0]; // 80291BD8
L_80291BDC:;
  {uint32_t ea=c->r[6]+0x000002B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80291BDC
  c->r[7]=c->r[3]+c->r[8]; // 80291BE0
  {uint32_t ea=c->r[6]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291BE4
  {uint32_t ea=c->r[6]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291BE8
  {uint32_t ea=c->r[6]+0x000002D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80291BEC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80291BF0
  {uint32_t ea=c->r[6]+0x00000110u; WF32(ea,c->f[0]);} // 80291BF4
  {uint32_t ea=c->r[6]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291BF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80291BFC
  {uint32_t ea=c->r[6]+0x00000130u; WF32(ea,c->f[0]);} // 80291C00
  c->r[0]=R8(c->r[7]+0x000001BDu); // 80291C04
  c->r[5]=R32(c->r[6]+0x000002F4u); // 80291C08
  cmps(c,0,(int32_t)c->r[0],0); // 80291C0C
  if (!crb(c,2)) { goto L_80291C1C; } // 80291C10
  W32(c->r[6]+0x00000154u,c->r[5]); // 80291C14
  W8(c->r[7]+0x000001BDu,c->r[4]); // 80291C18
L_80291C1C:;
  {uint32_t ea=c->r[6]+0x000002B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80291C1C
  c->r[8]=c->r[8]+0x00000001u; // 80291C20
  {uint32_t ea=c->r[6]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291C24
  c->r[7]=c->r[3]+c->r[8]; // 80291C28
  {uint32_t ea=c->r[6]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291C2C
  {uint32_t ea=c->r[6]+0x000002D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80291C30
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80291C34
  {uint32_t ea=c->r[6]+0x00000114u; WF32(ea,c->f[0]);} // 80291C38
  {uint32_t ea=c->r[6]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291C3C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80291C40
  {uint32_t ea=c->r[6]+0x00000134u; WF32(ea,c->f[0]);} // 80291C44
  c->r[0]=R8(c->r[7]+0x000001BDu); // 80291C48
  c->r[5]=R32(c->r[6]+0x000002F8u); // 80291C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80291C50
  if (!crb(c,2)) { goto L_80291C60; } // 80291C54
  W32(c->r[6]+0x00000158u,c->r[5]); // 80291C58
  W8(c->r[7]+0x000001BDu,c->r[4]); // 80291C5C
L_80291C60:;
  c->r[6]=c->r[6]+0x00000008u; // 80291C60
  c->r[8]=c->r[8]+0x00000001u; // 80291C64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80291BDC; } // 80291C68
  {uint32_t ea=c->r[3]+0x00000320u; c->f[3]=c->ps1[3]=RF32(ea);} // 80291C6C
  c->r[4]=0u+0x00000001u; // 80291C70
  {uint32_t ea=c->r[3]+0x00000180u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291C74
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80291C78
  {uint32_t ea=c->r[3]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80291C7C
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 80291C80
  {uint32_t ea=c->r[3]+0x00000324u; c->f[4]=c->ps1[4]=RF32(ea);} // 80291C84
  c->f[6]=c->ps1[6]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80291C88
  {uint32_t ea=c->r[3]+0x00000328u; c->f[2]=c->ps1[2]=RF32(ea);} // 80291C8C
  {uint32_t ea=c->r[3]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291C90
  {uint32_t ea=c->r[3]+0x00000184u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291C94
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 80291C98
  c->r[5]=R32(c->r[3]+0x00000250u); // 80291C9C
  c->f[4]=c->ps1[4]=S(std::fma(c->f[1],c->f[4],c->f[0])); // 80291CA0
  c->r[0]=R32(c->r[3]+0x00000260u); // 80291CA4
  {uint32_t ea=c->r[3]+0x00000318u; c->f[8]=c->ps1[8]=RF32(ea);} // 80291CA8
  {uint32_t ea=c->r[3]+0x00000178u; c->f[2]=c->ps1[2]=RF32(ea);} // 80291CAC
  {uint32_t ea=c->r[3]+0x00000314u; c->f[7]=c->ps1[7]=RF32(ea);} // 80291CB0
  {uint32_t ea=c->r[3]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 80291CB4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 80291CB8
  c->r[7]=R32(c->r[3]+0x000000B4u); // 80291CBC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[7],c->f[1])); // 80291CC0
  c->r[6]=R32(c->r[3]+0x00000254u); // 80291CC4
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[6]);} // 80291CC8
  c->r[6]=c->r[7]+c->r[6]; // 80291CCC
  {uint32_t ea=c->r[3]+0x00000180u; WF32(ea,c->f[5]);} // 80291CD0
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[4]);} // 80291CD4
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[3]);} // 80291CD8
  {uint32_t ea=c->r[3]+0x00000174u; WF32(ea,c->f[1]);} // 80291CDC
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[0]);} // 80291CE0
  W32(c->r[3]+0x000000B4u,c->r[6]); // 80291CE4
  W32(c->r[3]+0x000000B0u,c->r[5]); // 80291CE8
  W32(c->r[3]+0x000001B8u,c->r[4]); // 80291CEC
  W32(c->r[3]+0x000000C0u,c->r[0]); // 80291CF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80291CF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80291CF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80291CFC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80291D00
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80291D04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80291D08
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,28,ea,0,0);} // 80291D0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[28]=RF64(ea);} // 80291D10
  c->r[1]=c->r[1]+0x00000050u; // 80291D14
  return; // 80291D18
}

// fn_80291D1C
void f_80291D1C(Ctx* __restrict c) {
  trace_call(0x80291D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80291D1C
  c->r[0]=c->lr; // 80291D20
  cmps(c,0,(int32_t)c->r[3],0); // 80291D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80291D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80291D2C
  c->r[31]=c->r[3]|c->r[3]; // 80291D30
  if (crb(c,2)) { goto L_80291D48; } // 80291D34
  cmps(c,0,(int32_t)c->r[4],0); // 80291D38
  if (!crb(c,1)) { goto L_80291D48; } // 80291D3C
  c->r[4]=0u+0x00000378u; // 80291D40
  c->lr=0x80291D48u; f_8029C224(c); // 80291D44
L_80291D48:;
  c->r[3]=c->r[31]|c->r[31]; // 80291D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80291D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80291D50
  c->lr=c->r[0]; // 80291D54
  c->r[1]=c->r[1]+0x00000010u; // 80291D58
  return; // 80291D5C
}

// fn_80291D60
void f_80291D60(Ctx* __restrict c) {
  trace_call(0x80291D60u);
  {uint32_t ea=c->r[1]+0xFFFFFDC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80291D60
  c->r[0]=c->lr; // 80291D64
  W32(c->r[1]+0x00000244u,c->r[0]); // 80291D68
  c->r[11]=c->r[1]+0x00000240u; // 80291D6C
  c->lr=0x80291D74u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80291D70
  c->r[31]=c->r[1]|c->r[1]; // 80291D74
  c->r[25]=c->r[3]|c->r[3]; // 80291D78
  c->r[26]=c->r[4]|c->r[4]; // 80291D7C
  c->r[27]=c->r[5]|c->r[5]; // 80291D80
  c->lr=0x80291D88u; f_80290060(c); // 80291D84
  cmps(c,0,(int32_t)c->r[3],0); // 80291D88
  if (!crb(c,2)) { goto L_80291DAC; } // 80291D8C
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80291D90
  c->r[3]=c->r[25]|c->r[25]; // 80291D94
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80291D98
  c->ctr=c->r[12]; // 80291D9C
  if (true) { c->lr=0x80291DA4u; dispatch(c,c->ctr); } // 80291DA0
  c->r[3]=0u+0x00000000u; // 80291DA4
  goto L_80292250; // 80291DA8
L_80291DAC:;
  c->r[0]=0u+0x00000001u; // 80291DAC
  c->r[30]=0u+0x00000000u; // 80291DB0
  W32(c->r[25]+0x0000001Cu,c->r[0]); // 80291DB4
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80291DB8
  goto L_80291DD4; // 80291DBC
L_80291DC0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80291DC0
  cmps(c,0,(int32_t)c->r[0],10); // 80291DC4
  if (!crb(c,2)) { goto L_80291DD0; } // 80291DC8
  c->r[30]=c->r[30]+0x00000001u; // 80291DCC
L_80291DD0:;
  c->r[3]=c->r[3]+0x00000001u; // 80291DD0
L_80291DD4:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 80291DD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 80291DD8
  if (!crb(c,2)) { IRQCHK(c); goto L_80291DC0; } // 80291DDC
  c->r[28]=0u+0x00000000u; // 80291DE0
  goto L_802921C0; // 80291DE4
L_80291DE8:;
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80291DE8
  c->r[4]=0u+0x00000000u; // 80291DEC
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[0]);} // 80291DF0
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[0]);} // 80291DF4
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[0]);} // 80291DF8
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[0]);} // 80291DFC
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[0]);} // 80291E00
  {uint32_t ea=c->r[31]+0x00000168u; WF32(ea,c->f[0]);} // 80291E04
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[0]);} // 80291E08
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[0]);} // 80291E0C
  {uint32_t ea=c->r[31]+0x00000174u; WF32(ea,c->f[0]);} // 80291E10
  {uint32_t ea=c->r[31]+0x00000178u; WF32(ea,c->f[0]);} // 80291E14
  {uint32_t ea=c->r[31]+0x0000017Cu; WF32(ea,c->f[0]);} // 80291E18
  {uint32_t ea=c->r[31]+0x00000180u; WF32(ea,c->f[0]);} // 80291E1C
  {uint32_t ea=c->r[31]+0x00000184u; WF32(ea,c->f[0]);} // 80291E20
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[0]);} // 80291E24
  {uint32_t ea=c->r[31]+0x0000018Cu; WF32(ea,c->f[0]);} // 80291E28
  {uint32_t ea=c->r[31]+0x00000190u; WF32(ea,c->f[0]);} // 80291E2C
  {uint32_t ea=c->r[31]+0x0000019Cu; WF32(ea,c->f[0]);} // 80291E30
  {uint32_t ea=c->r[31]+0x000001A0u; WF32(ea,c->f[0]);} // 80291E34
  {uint32_t ea=c->r[31]+0x000001A4u; WF32(ea,c->f[0]);} // 80291E38
  {uint32_t ea=c->r[31]+0x000001A8u; WF32(ea,c->f[0]);} // 80291E3C
  {uint32_t ea=c->r[31]+0x000001ACu; WF32(ea,c->f[0]);} // 80291E40
  {uint32_t ea=c->r[31]+0x000001B0u; WF32(ea,c->f[0]);} // 80291E44
  {uint32_t ea=c->r[31]+0x000001B4u; WF32(ea,c->f[0]);} // 80291E48
  {uint32_t ea=c->r[31]+0x000001B8u; WF32(ea,c->f[0]);} // 80291E4C
  {uint32_t ea=c->r[31]+0x000001BCu; WF32(ea,c->f[0]);} // 80291E50
  {uint32_t ea=c->r[31]+0x000001C0u; WF32(ea,c->f[0]);} // 80291E54
  {uint32_t ea=c->r[31]+0x000001C4u; WF32(ea,c->f[0]);} // 80291E58
  {uint32_t ea=c->r[31]+0x000001C8u; WF32(ea,c->f[0]);} // 80291E5C
  {uint32_t ea=c->r[31]+0x000001CCu; WF32(ea,c->f[0]);} // 80291E60
  {uint32_t ea=c->r[31]+0x000001D0u; WF32(ea,c->f[0]);} // 80291E64
  {uint32_t ea=c->r[31]+0x000001D4u; WF32(ea,c->f[0]);} // 80291E68
  {uint32_t ea=c->r[31]+0x000001D8u; WF32(ea,c->f[0]);} // 80291E6C
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80291E70
  goto L_80291E94; // 80291E74
L_80291E78:;
  cmpu(c,0,c->r[4],c->r[28]); // 80291E78
  if (crb(c,2)) { goto L_80291EA0; } // 80291E7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80291E80
  cmps(c,0,(int32_t)c->r[0],10); // 80291E84
  if (!crb(c,2)) { goto L_80291E90; } // 80291E88
  c->r[4]=c->r[4]+0x00000001u; // 80291E8C
L_80291E90:;
  c->r[3]=c->r[3]+0x00000001u; // 80291E90
L_80291E94:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80291E94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80291E98
  if (!crb(c,2)) { IRQCHK(c); goto L_80291E78; } // 80291E9C
L_80291EA0:;
  cmpu(c,0,c->r[4],c->r[28]); // 80291EA0
  if (crb(c,0)) { goto L_80291EB0; } // 80291EA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80291EA8
  if (!crb(c,2)) { goto L_80291EBC; } // 80291EAC
L_80291EB0:;
  c->r[0]=0u+0x00000000u; // 80291EB0
  W8(c->r[31]+0x00000038u,c->r[0]); // 80291EB4
  goto L_80291F00; // 80291EB8
L_80291EBC:;
  c->r[5]=c->r[31]+0x00000038u; // 80291EBC
  c->r[4]=0u+0x00000000u; // 80291EC0
  goto L_80291EEC; // 80291EC4
L_80291EC8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80291EC8
  W8(c->r[5]+0x00000000u,c->r[0]); // 80291ECC
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 80291ED0
  cmps(c,0,(int32_t)c->r[0],10); // 80291ED4
  if (!crb(c,2)) { goto L_80291EE4; } // 80291ED8
  c->r[4]=c->r[4]+0x00000001u; // 80291EDC
  goto L_80291EF4; // 80291EE0
L_80291EE4:;
  c->r[5]=c->r[5]+0x00000001u; // 80291EE4
  c->r[4]=c->r[4]+0x00000001u; // 80291EE8
L_80291EEC:;
  cmpu(c,0,c->r[4],0x00000080u); // 80291EEC
  if (crb(c,0)) { IRQCHK(c); goto L_80291EC8; } // 80291EF0
L_80291EF4:;
  c->r[3]=c->r[31]+0x00000038u; // 80291EF4
  c->r[0]=0u+0x00000000u; // 80291EF8
  W8(c->r[3]+c->r[4],c->r[0]); // 80291EFC
L_80291F00:;
  c->r[3]=c->r[27]|c->r[27]; // 80291F00
  c->r[4]=c->r[31]+0x00000038u; // 80291F04
  c->r[5]=c->r[31]+0x000000C0u; // 80291F08
  c->lr=0x80291F10u; f_80289EFC(c); // 80291F0C
  cmps(c,0,(int32_t)c->r[3],0); // 80291F10
  if (!crb(c,2)) { goto L_80291F48; } // 80291F14
  c->r[3]=0u+0x803D0000u; // 80291F18
  c->r[4]=c->r[31]+0x00000038u; // 80291F1C
  c->r[3]=c->r[3]+0x00002F14u; // 80291F20
  c->r[3]=c->r[3]+0x00000130u; // 80291F24
  c->lr=0x80291F2Cu; f_8029D500(c); // 80291F28
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80291F2C
  c->r[3]=c->r[25]|c->r[25]; // 80291F30
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80291F34
  c->ctr=c->r[12]; // 80291F38
  if (true) { c->lr=0x80291F40u; dispatch(c,c->ctr); } // 80291F3C
  c->r[3]=0u+0x00000000u; // 80291F40
  goto L_80292250; // 80291F44
L_80291F48:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80291F48
  c->r[22]=R32(c->r[25]+0x00000350u); // 80291F4C
  cmps(c,0,(int32_t)c->r[0],1); // 80291F50
  c->r[23]=R32(c->r[25]+0x00000354u); // 80291F54
  c->r[24]=R32(c->r[25]+0x00000010u); // 80291F58
  if (crb(c,2)) { goto L_8029202C; } // 80291F5C
  if (!crb(c,0)) { goto L_80292104; } // 80291F60
  cmps(c,0,(int32_t)c->r[0],0); // 80291F64
  if (!crb(c,0)) { goto L_80291F70; } // 80291F68
  goto L_80292104; // 80291F6C
L_80291F70:;
  c->r[5]=0u+0x803D0000u; // 80291F70
  c->r[4]=R32(c->r[24]+0x00000004u); // 80291F74
  c->r[5]=c->r[5]+0x00002F14u; // 80291F78
  c->r[3]=0u+0x00000360u; // 80291F7C
  c->r[6]=0u+0x00000004u; // 80291F80
  c->lr=0x80291F88u; f_8029C154(c); // 80291F84
  cmps(c,0,(int32_t)c->r[3],0); // 80291F88
  c->r[29]=c->r[3]|c->r[3]; // 80291F8C
  if (crb(c,2)) { goto L_80291FB8; } // 80291F90
  W32(c->r[31]+0x00000034u,c->r[1]); // 80291F94
  c->r[4]=c->r[24]|c->r[24]; // 80291F98
  c->r[6]=c->r[23]|c->r[23]; // 80291F9C
  c->r[7]=c->r[22]|c->r[22]; // 80291FA0
  c->r[5]=c->r[31]+0x000000C0u; // 80291FA4
  c->lr=0x80291FACu; f_8028FCD8(c); // 80291FA8
  c->r[3]=0u+0x804C0000u; // 80291FAC
  c->r[3]=c->r[3]+0xFFFFD0E8u; // 80291FB0
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80291FB4
L_80291FB8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80291FB8
  if (!crb(c,2)) { goto L_80291FDC; } // 80291FBC
  c->r[3]=0u+0x803D0000u; // 80291FC0
  c->r[4]=0u+0xFFFFFFFDu; // 80291FC4
  c->r[3]=c->r[3]+0x00002F14u; // 80291FC8
  c->r[3]=c->r[3]+0x0000000Cu; // 80291FCC
  c->lr=0x80291FD4u; f_8029D638(c); // 80291FD0
  c->r[29]=0u+0x00000000u; // 80291FD4
  goto L_80292118; // 80291FD8
L_80291FDC:;
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80291FDC
  c->r[3]=c->r[29]|c->r[29]; // 80291FE0
  c->r[5]=c->r[27]|c->r[27]; // 80291FE4
  c->r[4]=c->r[31]+0x000000C0u; // 80291FE8
  c->r[12]=R32(c->r[12]+0x00000028u); // 80291FEC
  c->ctr=c->r[12]; // 80291FF0
  if (true) { c->lr=0x80291FF8u; dispatch(c,c->ctr); } // 80291FF4
  cmps(c,0,(int32_t)c->r[3],0); // 80291FF8
  if (!crb(c,2)) { goto L_80292118; } // 80291FFC
  cmps(c,0,(int32_t)c->r[29],0); // 80292000
  if (crb(c,2)) { goto L_80292024; } // 80292004
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80292008
  c->r[0]=0u+0x00000001u; // 8029200C
  c->r[3]=c->r[29]|c->r[29]; // 80292010
  c->r[12]=R32(c->r[12]+0x00000024u); // 80292014
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80292018
  c->ctr=c->r[12]; // 8029201C
  if (true) { c->lr=0x80292024u; dispatch(c,c->ctr); } // 80292020
L_80292024:;
  c->r[29]=0u+0x00000000u; // 80292024
  goto L_80292118; // 80292028
L_8029202C:;
  c->r[5]=0u+0x803D0000u; // 8029202C
  c->r[4]=R32(c->r[24]+0x00000004u); // 80292030
  c->r[5]=c->r[5]+0x00002F14u; // 80292034
  c->r[3]=0u+0x00000378u; // 80292038
  c->r[5]=c->r[5]+0x00000016u; // 8029203C
  c->r[6]=0u+0x00000004u; // 80292040
  c->lr=0x80292048u; f_8029C154(c); // 80292044
  cmps(c,0,(int32_t)c->r[3],0); // 80292048
  c->r[29]=c->r[3]|c->r[3]; // 8029204C
  if (crb(c,2)) { goto L_80292090; } // 80292050
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80292054
  c->r[4]=c->r[24]|c->r[24]; // 80292058
  c->r[6]=c->r[23]|c->r[23]; // 8029205C
  c->r[7]=c->r[22]|c->r[22]; // 80292060
  c->r[5]=c->r[31]+0x000000C0u; // 80292064
  c->lr=0x8029206Cu; f_8028FCD8(c); // 80292068
  c->r[3]=0u+0x804C0000u; // 8029206C
  c->r[0]=0u+0x00000000u; // 80292070
  c->r[3]=c->r[3]+0xFFFFD098u; // 80292074
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80292078
  W32(c->r[29]+0x00000360u,c->r[0]); // 8029207C
  W32(c->r[29]+0x00000364u,c->r[0]); // 80292080
  W32(c->r[29]+0x00000368u,c->r[0]); // 80292084
  W32(c->r[29]+0x0000036Cu,c->r[0]); // 80292088
  W16(c->r[29]+0x00000370u,c->r[0]); // 8029208C
L_80292090:;
  cmps(c,0,(int32_t)c->r[29],0); // 80292090
  if (!crb(c,2)) { goto L_802920B4; } // 80292094
  c->r[3]=0u+0x803D0000u; // 80292098
  c->r[4]=0u+0xFFFFFFFDu; // 8029209C
  c->r[3]=c->r[3]+0x00002F14u; // 802920A0
  c->r[3]=c->r[3]+0x00000025u; // 802920A4
  c->lr=0x802920ACu; f_8029D638(c); // 802920A8
  c->r[29]=0u+0x00000000u; // 802920AC
  goto L_80292118; // 802920B0
L_802920B4:;
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 802920B4
  c->r[3]=c->r[29]|c->r[29]; // 802920B8
  c->r[5]=c->r[27]|c->r[27]; // 802920BC
  c->r[4]=c->r[31]+0x000000C0u; // 802920C0
  c->r[12]=R32(c->r[12]+0x00000028u); // 802920C4
  c->ctr=c->r[12]; // 802920C8
  if (true) { c->lr=0x802920D0u; dispatch(c,c->ctr); } // 802920CC
  cmps(c,0,(int32_t)c->r[3],0); // 802920D0
  if (!crb(c,2)) { goto L_80292118; } // 802920D4
  cmps(c,0,(int32_t)c->r[29],0); // 802920D8
  if (crb(c,2)) { goto L_802920FC; } // 802920DC
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 802920E0
  c->r[0]=0u+0x00000001u; // 802920E4
  c->r[3]=c->r[29]|c->r[29]; // 802920E8
  c->r[12]=R32(c->r[12]+0x00000024u); // 802920EC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802920F0
  c->ctr=c->r[12]; // 802920F4
  if (true) { c->lr=0x802920FCu; dispatch(c,c->ctr); } // 802920F8
L_802920FC:;
  c->r[29]=0u+0x00000000u; // 802920FC
  goto L_80292118; // 80292100
L_80292104:;
  c->r[3]=0u+0x803D0000u; // 80292104
  c->r[3]=c->r[3]+0x00002F14u; // 80292108
  c->r[3]=c->r[3]+0x0000002Fu; // 8029210C
  c->lr=0x80292114u; f_8029D4B0(c); // 80292110
  c->r[29]=0u+0x00000000u; // 80292114
L_80292118:;
  cmps(c,0,(int32_t)c->r[29],0); // 80292118
  if (!crb(c,2)) { goto L_8029214C; } // 8029211C
  c->r[3]=0u+0x803D0000u; // 80292120
  c->r[3]=c->r[3]+0x00002F14u; // 80292124
  c->r[3]=c->r[3]+0x0000015Cu; // 80292128
  c->lr=0x80292130u; f_8029D4B0(c); // 8029212C
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80292130
  c->r[3]=c->r[25]|c->r[25]; // 80292134
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80292138
  c->ctr=c->r[12]; // 8029213C
  if (true) { c->lr=0x80292144u; dispatch(c,c->ctr); } // 80292140
  c->r[3]=0u+0x00000000u; // 80292144
  goto L_80292250; // 80292148
L_8029214C:;
  c->r[3]=R32(c->r[25]+0x0000036Cu); // 8029214C
  cmps(c,0,(int32_t)c->r[3],0); // 80292150
  if (crb(c,2)) { goto L_80292198; } // 80292154
  c->r[0]=R32(c->r[29]+0x00000000u); // 80292158
  cmps(c,0,(int32_t)c->r[0],0); // 8029215C
  if (!crb(c,2)) { goto L_80292170; } // 80292160
  c->r[0]=R32(c->r[29]+0x00000004u); // 80292164
  cmps(c,0,(int32_t)c->r[0],0); // 80292168
  if (crb(c,2)) { goto L_80292180; } // 8029216C
L_80292170:;
  c->r[3]=0u+0x804C0000u; // 80292170
  c->r[3]=c->r[3]+0xFFFFD19Cu; // 80292174
  c->lr=0x8029217Cu; f_8029D4B0(c); // 80292178
L_8029217C:;
  IRQCHK(c); goto L_8029217C; // 8029217C
L_80292180:;
  W32(c->r[29]+0x00000000u,c->r[3]); // 80292180
  c->r[0]=R32(c->r[3]+0x00000004u); // 80292184
  W32(c->r[29]+0x00000004u,c->r[0]); // 80292188
  W32(c->r[3]+0x00000004u,c->r[29]); // 8029218C
  W32(c->r[25]+0x0000036Cu,c->r[29]); // 80292190
  goto L_802921BC; // 80292194
L_80292198:;
  c->r[0]=R32(c->r[25]+0x00000368u); // 80292198
  W32(c->r[25]+0x0000036Cu,c->r[29]); // 8029219C
  cmps(c,0,(int32_t)c->r[0],0); // 802921A0
  if (crb(c,2)) { goto L_802921B8; } // 802921A4
  c->r[3]=0u+0x804C0000u; // 802921A8
  c->r[3]=c->r[3]+0xFFFFD180u; // 802921AC
  c->lr=0x802921B4u; f_8029D4B0(c); // 802921B0
L_802921B4:;
  IRQCHK(c); goto L_802921B4; // 802921B4
L_802921B8:;
  W32(c->r[25]+0x00000368u,c->r[29]); // 802921B8
L_802921BC:;
  c->r[28]=c->r[28]+0x00000001u; // 802921BC
L_802921C0:;
  cmpu(c,0,c->r[28],c->r[30]); // 802921C0
  if (crb(c,0)) { IRQCHK(c); goto L_80291DE8; } // 802921C4
  W32(c->r[25]+0x00000364u,c->r[30]); // 802921C8
  c->r[0]=R32(c->r[26]+0x00000008u); // 802921CC
  cmps(c,0,(int32_t)c->r[0],1); // 802921D0
  if (crb(c,2)) { goto L_80292200; } // 802921D4
  if (!crb(c,0)) { goto L_802921E8; } // 802921D8
  cmps(c,0,(int32_t)c->r[0],0); // 802921DC
  if (!crb(c,0)) { goto L_802921F4; } // 802921E0
  goto L_80292218; // 802921E4
L_802921E8:;
  cmps(c,0,(int32_t)c->r[0],3); // 802921E8
  if (!crb(c,0)) { goto L_80292218; } // 802921EC
  goto L_8029220C; // 802921F0
L_802921F4:;
  c->r[0]=0u+0x00000000u; // 802921F4
  W32(c->r[25]+0x00000360u,c->r[0]); // 802921F8
  goto L_80292244; // 802921FC
L_80292200:;
  c->r[0]=0u+0x00000001u; // 80292200
  W32(c->r[25]+0x00000360u,c->r[0]); // 80292204
  goto L_80292244; // 80292208
L_8029220C:;
  c->r[0]=0u+0x00000002u; // 8029220C
  W32(c->r[25]+0x00000360u,c->r[0]); // 80292210
  goto L_80292244; // 80292214
L_80292218:;
  c->r[3]=0u+0x803D0000u; // 80292218
  c->r[3]=c->r[3]+0x00002F14u; // 8029221C
  c->r[3]=c->r[3]+0x00000185u; // 80292220
  c->lr=0x80292228u; f_8029D4B0(c); // 80292224
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80292228
  c->r[3]=c->r[25]|c->r[25]; // 8029222C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80292230
  c->ctr=c->r[12]; // 80292234
  if (true) { c->lr=0x8029223Cu; dispatch(c,c->ctr); } // 80292238
  c->r[3]=0u+0x00000000u; // 8029223C
  goto L_80292250; // 80292240
L_80292244:;
  c->r[0]=0u+0x00000000u; // 80292244
  c->r[3]=0u+0x00000001u; // 80292248
  W16(c->r[25]+0x00000370u,c->r[0]); // 8029224C
L_80292250:;
  c->r[10]=c->r[31]|c->r[31]; // 80292250
  c->r[11]=c->r[10]+0x00000240u; // 80292254
  c->lr=0x8029225Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80292258
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029225C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80292260
  c->r[1]=c->r[10]|c->r[10]; // 80292264
  c->lr=c->r[0]; // 80292268
  return; // 8029226C
}

// fn_80292270
void f_80292270(Ctx* __restrict c) {
  trace_call(0x80292270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292270
  c->r[0]=c->lr; // 80292274
  W32(c->r[1]+0x00000014u,c->r[0]); // 80292278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029227C
  c->r[31]=0u+0x00000000u; // 80292280
  W32(c->r[1]+0x00000008u,c->r[30]); // 80292284
  c->r[30]=c->r[3]|c->r[3]; // 80292288
L_8029228C:;
  c->r[3]=R32(c->r[30]+0x00000368u); // 8029228C
  cmps(c,0,(int32_t)c->r[3],0); // 80292290
  if (crb(c,2)) { goto L_80292314; } // 80292294
  if (!crb(c,2)) { goto L_802922AC; } // 80292298
  c->r[3]=0u+0x804C0000u; // 8029229C
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 802922A0
  c->lr=0x802922A8u; f_8029D4B0(c); // 802922A4
L_802922A8:;
  IRQCHK(c); goto L_802922A8; // 802922A8
L_802922AC:;
  cmpu(c,0,c->r[3],c->r[3]); // 802922AC
  if (!crb(c,2)) { goto L_802922BC; } // 802922B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802922B4
  W32(c->r[30]+0x00000368u,c->r[0]); // 802922B8
L_802922BC:;
  c->r[0]=R32(c->r[30]+0x0000036Cu); // 802922BC
  cmpu(c,0,c->r[0],c->r[3]); // 802922C0
  if (!crb(c,2)) { goto L_802922D0; } // 802922C4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802922C8
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 802922CC
L_802922D0:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 802922D0
  cmps(c,0,(int32_t)c->r[4],0); // 802922D4
  if (crb(c,2)) { goto L_802922E4; } // 802922D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802922DC
  W32(c->r[4]+0x00000004u,c->r[0]); // 802922E0
L_802922E4:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 802922E4
  cmps(c,0,(int32_t)c->r[4],0); // 802922E8
  if (crb(c,2)) { goto L_802922F8; } // 802922EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802922F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802922F4
L_802922F8:;
  W32(c->r[3]+0x00000004u,c->r[31]); // 802922F8
  W32(c->r[3]+0x00000000u,c->r[31]); // 802922FC
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80292300
  c->r[12]=R32(c->r[12]+0x00000008u); // 80292304
  c->ctr=c->r[12]; // 80292308
  if (true) { c->lr=0x80292310u; dispatch(c,c->ctr); } // 8029230C
  IRQCHK(c); goto L_8029228C; // 80292310
L_80292314:;
  c->r[3]=R32(c->r[30]+0x0000035Cu); // 80292314
  cmps(c,0,(int32_t)c->r[3],0); // 80292318
  if (crb(c,2)) { goto L_80292338; } // 8029231C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80292320
  c->r[12]=R32(c->r[12]+0x00000008u); // 80292324
  c->ctr=c->r[12]; // 80292328
  if (true) { c->lr=0x80292330u; dispatch(c,c->ctr); } // 8029232C
  c->r[0]=0u+0x00000000u; // 80292330
  W32(c->r[30]+0x0000035Cu,c->r[0]); // 80292334
L_80292338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80292338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029233C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80292340
  c->lr=c->r[0]; // 80292344
  c->r[1]=c->r[1]+0x00000010u; // 80292348
  return; // 8029234C
}

// fn_80292350
void f_80292350(Ctx* __restrict c) {
  trace_call(0x80292350u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292350
  c->r[0]=c->lr; // 80292354
  W32(c->r[1]+0x00000014u,c->r[0]); // 80292358
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029235C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80292360
  c->r[5]=R32(c->r[4]+0x00000000u); // 80292364
  c->r[31]=c->r[3]|c->r[3]; // 80292368
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029236C
  W32(c->r[3]+0x00000028u,c->r[5]); // 80292370
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80292374
  c->r[5]=R32(c->r[4]+0x00000008u); // 80292378
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8029237C
  W32(c->r[3]+0x00000030u,c->r[5]); // 80292380
  W32(c->r[3]+0x00000034u,c->r[0]); // 80292384
  c->r[5]=R32(c->r[4]+0x00000010u); // 80292388
  c->r[0]=R32(c->r[4]+0x00000014u); // 8029238C
  W32(c->r[3]+0x00000038u,c->r[5]); // 80292390
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80292394
  c->r[5]=R32(c->r[4]+0x00000018u); // 80292398
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8029239C
  W32(c->r[3]+0x00000040u,c->r[5]); // 802923A0
  W32(c->r[3]+0x00000044u,c->r[0]); // 802923A4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802923A8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 802923AC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802923B0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 802923B4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802923B8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 802923BC
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 802923C0
  c->r[0]=R32(c->r[4]+0x00000030u); // 802923C4
  W32(c->r[3]+0x00000054u,c->r[5]); // 802923C8
  W32(c->r[3]+0x00000058u,c->r[0]); // 802923CC
  c->r[5]=R32(c->r[4]+0x00000034u); // 802923D0
  c->r[0]=R32(c->r[4]+0x00000038u); // 802923D4
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 802923D8
  W32(c->r[3]+0x00000060u,c->r[0]); // 802923DC
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 802923E0
  c->r[0]=R32(c->r[4]+0x00000040u); // 802923E4
  W32(c->r[3]+0x00000064u,c->r[5]); // 802923E8
  W32(c->r[3]+0x00000068u,c->r[0]); // 802923EC
  c->r[5]=R32(c->r[4]+0x00000044u); // 802923F0
  c->r[0]=R32(c->r[4]+0x00000048u); // 802923F4
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 802923F8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802923FC
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 80292400
  c->r[0]=R32(c->r[4]+0x00000050u); // 80292404
  W32(c->r[3]+0x00000074u,c->r[5]); // 80292408
  W32(c->r[3]+0x00000078u,c->r[0]); // 8029240C
  c->r[5]=R32(c->r[4]+0x00000054u); // 80292410
  c->r[0]=R32(c->r[4]+0x00000058u); // 80292414
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80292418
  W32(c->r[3]+0x00000080u,c->r[0]); // 8029241C
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 80292420
  c->r[0]=R32(c->r[4]+0x00000060u); // 80292424
  W32(c->r[3]+0x00000084u,c->r[5]); // 80292428
  W32(c->r[3]+0x00000088u,c->r[0]); // 8029242C
  c->r[5]=R32(c->r[4]+0x00000064u); // 80292430
  c->r[0]=R32(c->r[4]+0x00000068u); // 80292434
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 80292438
  W32(c->r[3]+0x00000090u,c->r[0]); // 8029243C
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 80292440
  c->r[0]=R32(c->r[4]+0x00000070u); // 80292444
  W32(c->r[3]+0x00000094u,c->r[5]); // 80292448
  W32(c->r[3]+0x00000098u,c->r[0]); // 8029244C
  c->r[5]=R32(c->r[4]+0x00000074u); // 80292450
  c->r[0]=R32(c->r[4]+0x00000078u); // 80292454
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 80292458
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8029245C
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 80292460
  c->r[0]=R32(c->r[4]+0x00000080u); // 80292464
  W32(c->r[3]+0x000000A4u,c->r[5]); // 80292468
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8029246C
  c->r[5]=R32(c->r[4]+0x00000084u); // 80292470
  c->r[0]=R32(c->r[4]+0x00000088u); // 80292474
  W32(c->r[3]+0x000000ACu,c->r[5]); // 80292478
  W32(c->r[3]+0x000000B0u,c->r[0]); // 8029247C
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 80292480
  c->r[0]=R32(c->r[4]+0x00000090u); // 80292484
  W32(c->r[3]+0x000000B4u,c->r[5]); // 80292488
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8029248C
  c->r[5]=R32(c->r[4]+0x00000094u); // 80292490
  c->r[0]=R32(c->r[4]+0x00000098u); // 80292494
  W32(c->r[3]+0x000000BCu,c->r[5]); // 80292498
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8029249C
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 802924A0
  W32(c->r[3]+0x000000C4u,c->r[0]); // 802924A4
  c->r[5]=R32(c->r[4]+0x000000A0u); // 802924A8
  c->r[0]=R32(c->r[4]+0x000000A4u); // 802924AC
  W32(c->r[3]+0x000000C8u,c->r[5]); // 802924B0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802924B4
  c->r[5]=R32(c->r[4]+0x000000A8u); // 802924B8
  c->r[0]=R32(c->r[4]+0x000000ACu); // 802924BC
  W32(c->r[3]+0x000000D0u,c->r[5]); // 802924C0
  W32(c->r[3]+0x000000D4u,c->r[0]); // 802924C4
  c->r[5]=R32(c->r[4]+0x000000B0u); // 802924C8
  c->r[0]=R32(c->r[4]+0x000000B4u); // 802924CC
  W32(c->r[3]+0x000000D8u,c->r[5]); // 802924D0
  W32(c->r[3]+0x000000DCu,c->r[0]); // 802924D4
  c->r[5]=R32(c->r[4]+0x000000B8u); // 802924D8
  c->r[0]=R32(c->r[4]+0x000000BCu); // 802924DC
  W32(c->r[3]+0x000000E0u,c->r[5]); // 802924E0
  W32(c->r[3]+0x000000E4u,c->r[0]); // 802924E4
  c->r[5]=R32(c->r[4]+0x000000C0u); // 802924E8
  c->r[0]=R32(c->r[4]+0x000000C4u); // 802924EC
  W32(c->r[3]+0x000000E8u,c->r[5]); // 802924F0
  W32(c->r[3]+0x000000ECu,c->r[0]); // 802924F4
  c->r[5]=R32(c->r[4]+0x000000C8u); // 802924F8
  c->r[0]=R32(c->r[4]+0x000000CCu); // 802924FC
  W32(c->r[3]+0x000000F0u,c->r[5]); // 80292500
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80292504
  c->r[5]=R32(c->r[4]+0x000000D0u); // 80292508
  c->r[0]=R32(c->r[4]+0x000000D4u); // 8029250C
  W32(c->r[3]+0x000000F8u,c->r[5]); // 80292510
  W32(c->r[3]+0x000000FCu,c->r[0]); // 80292514
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80292518
  c->r[0]=R32(c->r[4]+0x000000DCu); // 8029251C
  W32(c->r[3]+0x00000100u,c->r[5]); // 80292520
  W32(c->r[3]+0x00000104u,c->r[0]); // 80292524
  c->r[0]=R32(c->r[4]+0x000000E0u); // 80292528
  W32(c->r[3]+0x00000108u,c->r[0]); // 8029252C
  c->r[0]=R32(c->r[4]+0x000000E4u); // 80292530
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 80292534
  c->r[5]=R32(c->r[4]+0x000000E8u); // 80292538
  c->r[0]=R32(c->r[4]+0x000000ECu); // 8029253C
  W32(c->r[3]+0x00000110u,c->r[5]); // 80292540
  W32(c->r[3]+0x00000114u,c->r[0]); // 80292544
  c->r[5]=R32(c->r[4]+0x000000F0u); // 80292548
  c->r[0]=R32(c->r[4]+0x000000F4u); // 8029254C
  W32(c->r[3]+0x00000118u,c->r[5]); // 80292550
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80292554
  c->r[5]=R32(c->r[4]+0x000000F8u); // 80292558
  c->r[0]=R32(c->r[4]+0x000000FCu); // 8029255C
  W32(c->r[3]+0x00000120u,c->r[5]); // 80292560
  W32(c->r[3]+0x00000124u,c->r[0]); // 80292564
  c->r[5]=R32(c->r[4]+0x00000100u); // 80292568
  c->r[0]=R32(c->r[4]+0x00000104u); // 8029256C
  W32(c->r[3]+0x00000128u,c->r[5]); // 80292570
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80292574
  c->r[5]=R32(c->r[4]+0x00000108u); // 80292578
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 8029257C
  W32(c->r[3]+0x00000130u,c->r[5]); // 80292580
  W32(c->r[3]+0x00000134u,c->r[0]); // 80292584
  c->r[5]=R32(c->r[4]+0x00000110u); // 80292588
  c->r[0]=R32(c->r[4]+0x00000114u); // 8029258C
  W32(c->r[3]+0x00000138u,c->r[5]); // 80292590
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80292594
  c->r[5]=R32(c->r[4]+0x00000118u); // 80292598
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 8029259C
  W32(c->r[3]+0x00000140u,c->r[5]); // 802925A0
  W32(c->r[3]+0x00000144u,c->r[0]); // 802925A4
  c->r[5]=R32(c->r[4]+0x00000120u); // 802925A8
  c->r[0]=R32(c->r[4]+0x00000124u); // 802925AC
  W32(c->r[3]+0x00000148u,c->r[5]); // 802925B0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 802925B4
  c->r[0]=R32(c->r[4]+0x00000128u); // 802925B8
  W32(c->r[3]+0x00000150u,c->r[0]); // 802925BC
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 802925C0
  c->r[0]=R32(c->r[4]+0x00000130u); // 802925C4
  W32(c->r[3]+0x00000154u,c->r[5]); // 802925C8
  W32(c->r[3]+0x00000158u,c->r[0]); // 802925CC
  c->r[5]=R32(c->r[4]+0x00000134u); // 802925D0
  c->r[0]=R32(c->r[4]+0x00000138u); // 802925D4
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 802925D8
  W32(c->r[3]+0x00000160u,c->r[0]); // 802925DC
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 802925E0
  c->r[0]=R32(c->r[4]+0x00000140u); // 802925E4
  W32(c->r[3]+0x00000164u,c->r[5]); // 802925E8
  W32(c->r[3]+0x00000168u,c->r[0]); // 802925EC
  c->r[5]=R32(c->r[4]+0x00000144u); // 802925F0
  c->r[0]=R32(c->r[4]+0x00000148u); // 802925F4
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 802925F8
  W32(c->r[3]+0x00000170u,c->r[0]); // 802925FC
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 80292600
  c->r[0]=R32(c->r[4]+0x00000150u); // 80292604
  W32(c->r[3]+0x00000174u,c->r[5]); // 80292608
  W32(c->r[3]+0x00000178u,c->r[0]); // 8029260C
  c->r[5]=R32(c->r[4]+0x00000154u); // 80292610
  c->r[0]=R32(c->r[4]+0x00000158u); // 80292614
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 80292618
  W32(c->r[3]+0x00000180u,c->r[0]); // 8029261C
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 80292620
  c->r[0]=R32(c->r[4]+0x00000160u); // 80292624
  W32(c->r[3]+0x00000184u,c->r[5]); // 80292628
  W32(c->r[3]+0x00000188u,c->r[0]); // 8029262C
  c->r[0]=R32(c->r[4]+0x00000164u); // 80292630
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 80292634
  c->r[0]=R32(c->r[4]+0x00000168u); // 80292638
  W32(c->r[3]+0x00000190u,c->r[0]); // 8029263C
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 80292640
  W32(c->r[3]+0x00000194u,c->r[0]); // 80292644
  c->r[5]=R32(c->r[4]+0x00000170u); // 80292648
  c->r[0]=R32(c->r[4]+0x00000174u); // 8029264C
  W32(c->r[3]+0x00000198u,c->r[5]); // 80292650
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80292654
  c->r[5]=R32(c->r[4]+0x00000178u); // 80292658
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 8029265C
  W32(c->r[3]+0x000001A0u,c->r[5]); // 80292660
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80292664
  c->r[5]=R32(c->r[4]+0x00000180u); // 80292668
  c->r[0]=R32(c->r[4]+0x00000184u); // 8029266C
  W32(c->r[3]+0x000001A8u,c->r[5]); // 80292670
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80292674
  c->r[0]=R32(c->r[4]+0x00000188u); // 80292678
  W32(c->r[3]+0x000001B0u,c->r[0]); // 8029267C
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 80292680
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80292684
  c->r[0]=R32(c->r[4]+0x00000190u); // 80292688
  W32(c->r[3]+0x000001B8u,c->r[0]); // 8029268C
  c->r[0]=R32(c->r[4]+0x00000194u); // 80292690
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80292694
  c->r[5]=R8(c->r[4]+0x00000195u); // 80292698
  c->r[0]=R8(c->r[4]+0x00000196u); // 8029269C
  W8(c->r[3]+0x000001BDu,c->r[5]); // 802926A0
  W8(c->r[3]+0x000001BEu,c->r[0]); // 802926A4
  c->r[5]=R8(c->r[4]+0x00000197u); // 802926A8
  c->r[0]=R8(c->r[4]+0x00000198u); // 802926AC
  W8(c->r[3]+0x000001BFu,c->r[5]); // 802926B0
  W8(c->r[3]+0x000001C0u,c->r[0]); // 802926B4
  c->r[5]=R8(c->r[4]+0x00000199u); // 802926B8
  c->r[0]=R8(c->r[4]+0x0000019Au); // 802926BC
  W8(c->r[3]+0x000001C1u,c->r[5]); // 802926C0
  W8(c->r[3]+0x000001C2u,c->r[0]); // 802926C4
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 802926C8
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 802926CC
  W8(c->r[3]+0x000001C3u,c->r[5]); // 802926D0
  W8(c->r[3]+0x000001C4u,c->r[0]); // 802926D4
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 802926D8
  c->r[4]=c->r[31]+0x00000028u; // 802926DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802926E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802926E4
  c->ctr=c->r[12]; // 802926E8
  if (true) { c->lr=0x802926F0u; dispatch(c,c->ctr); } // 802926EC
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 802926F0
  c->r[3]=c->r[31]|c->r[31]; // 802926F4
  c->r[12]=R32(c->r[12]+0x00000030u); // 802926F8
  c->ctr=c->r[12]; // 802926FC
  if (true) { c->lr=0x80292704u; dispatch(c,c->ctr); } // 80292700
  c->r[30]=R32(c->r[31]+0x00000368u); // 80292704
  c->r[0]=0u+0x00000001u; // 80292708
  W32(c->r[31]+0x00000020u,c->r[0]); // 8029270C
  cmps(c,0,(int32_t)c->r[30],0); // 80292710
  if (crb(c,2)) { goto L_80292838; } // 80292714
  c->r[0]=R32(c->r[31]+0x00000360u); // 80292718
  cmps(c,0,(int32_t)c->r[0],1); // 8029271C
  if (crb(c,2)) { goto L_8029276C; } // 80292720
  if (!crb(c,0)) { goto L_80292734; } // 80292724
  cmps(c,0,(int32_t)c->r[0],0); // 80292728
  if (!crb(c,0)) { goto L_80292760; } // 8029272C
  goto L_80292838; // 80292730
L_80292734:;
  cmps(c,0,(int32_t)c->r[0],3); // 80292734
  if (!crb(c,0)) { goto L_80292838; } // 80292738
  goto L_802927D4; // 8029273C
  goto L_80292760; // 80292740
L_80292744:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80292744
  c->r[3]=c->r[30]|c->r[30]; // 80292748
  c->r[4]=c->r[31]+0x00000028u; // 8029274C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80292750
  c->ctr=c->r[12]; // 80292754
  if (true) { c->lr=0x8029275Cu; dispatch(c,c->ctr); } // 80292758
  c->r[30]=R32(c->r[30]+0x00000004u); // 8029275C
L_80292760:;
  cmps(c,0,(int32_t)c->r[30],0); // 80292760
  if (!crb(c,2)) { IRQCHK(c); goto L_80292744; } // 80292764
  goto L_80292838; // 80292768
L_8029276C:;
  c->r[0]=R32(c->r[31]+0x00000364u); // 8029276C
  cmps(c,0,(int32_t)c->r[0],0); // 80292770
  if (!crb(c,2)) { goto L_80292780; } // 80292774
  c->r[0]=0u+0x00000000u; // 80292778
  goto L_80292794; // 8029277C
L_80292780:;
  c->lr=0x80292784u; f_801EF460(c); // 80292780
  c->r[4]=R32(c->r[31]+0x00000364u); // 80292784
  c->r[0]=divwu(c->r[3],c->r[4]); // 80292788
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8029278C
  c->r[0]=c->r[3]-c->r[0]; // 80292790
L_80292794:;
  c->r[3]=0u+0x00000000u; // 80292794
  goto L_802927C8; // 80292798
L_8029279C:;
  cmpu(c,0,c->r[3],c->r[0]); // 8029279C
  if (!crb(c,2)) { goto L_802927C0; } // 802927A0
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 802927A4
  c->r[3]=c->r[30]|c->r[30]; // 802927A8
  c->r[4]=c->r[31]+0x00000028u; // 802927AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802927B0
  c->ctr=c->r[12]; // 802927B4
  if (true) { c->lr=0x802927BCu; dispatch(c,c->ctr); } // 802927B8
  goto L_80292838; // 802927BC
L_802927C0:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 802927C0
  c->r[3]=c->r[3]+0x00000001u; // 802927C4
L_802927C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802927C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8029279C; } // 802927CC
  goto L_80292838; // 802927D0
L_802927D4:;
  c->r[3]=0u+0x00000000u; // 802927D4
  goto L_80292830; // 802927D8
L_802927DC:;
  c->r[0]=R16(c->r[31]+0x00000370u); // 802927DC
  cmpu(c,0,c->r[3],c->r[0]); // 802927E0
  if (!crb(c,2)) { goto L_80292828; } // 802927E4
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 802927E8
  c->r[3]=c->r[30]|c->r[30]; // 802927EC
  c->r[4]=c->r[31]+0x00000028u; // 802927F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802927F4
  c->ctr=c->r[12]; // 802927F8
  if (true) { c->lr=0x80292800u; dispatch(c,c->ctr); } // 802927FC
  c->r[3]=R16(c->r[31]+0x00000370u); // 80292800
  c->r[0]=R32(c->r[31]+0x00000364u); // 80292804
  c->r[4]=c->r[3]+0x00000001u; // 80292808
  c->r[3]=rotl(c->r[4],0)&0x0000FFFFu; // 8029280C
  W16(c->r[31]+0x00000370u,c->r[4]); // 80292810
  cmpu(c,0,c->r[3],c->r[0]); // 80292814
  if (!crb(c,2)) { goto L_80292838; } // 80292818
  c->r[0]=0u+0x00000000u; // 8029281C
  W16(c->r[31]+0x00000370u,c->r[0]); // 80292820
  goto L_80292838; // 80292824
L_80292828:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 80292828
  c->r[3]=c->r[3]+0x00000001u; // 8029282C
L_80292830:;
  cmps(c,0,(int32_t)c->r[30],0); // 80292830
  if (!crb(c,2)) { IRQCHK(c); goto L_802927DC; } // 80292834
L_80292838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80292838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029283C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80292840
  c->lr=c->r[0]; // 80292844
  c->r[1]=c->r[1]+0x00000010u; // 80292848
  return; // 8029284C
}

// fn_80292850
void f_80292850(Ctx* __restrict c) {
  trace_call(0x80292850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292850
  c->r[0]=c->lr; // 80292854
  W32(c->r[1]+0x00000014u,c->r[0]); // 80292858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029285C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80292860
  c->r[5]=R32(c->r[4]+0x00000000u); // 80292864
  c->r[31]=c->r[3]|c->r[3]; // 80292868
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029286C
  W32(c->r[3]+0x00000028u,c->r[5]); // 80292870
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80292874
  c->r[5]=R32(c->r[4]+0x00000008u); // 80292878
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8029287C
  W32(c->r[3]+0x00000030u,c->r[5]); // 80292880
  W32(c->r[3]+0x00000034u,c->r[0]); // 80292884
  c->r[5]=R32(c->r[4]+0x00000010u); // 80292888
  c->r[0]=R32(c->r[4]+0x00000014u); // 8029288C
  W32(c->r[3]+0x00000038u,c->r[5]); // 80292890
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80292894
  c->r[5]=R32(c->r[4]+0x00000018u); // 80292898
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8029289C
  W32(c->r[3]+0x00000040u,c->r[5]); // 802928A0
  W32(c->r[3]+0x00000044u,c->r[0]); // 802928A4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802928A8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 802928AC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802928B0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 802928B4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802928B8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 802928BC
  c->r[5]=R32(c->r[4]+0x0000002Cu); // 802928C0
  c->r[0]=R32(c->r[4]+0x00000030u); // 802928C4
  W32(c->r[3]+0x00000054u,c->r[5]); // 802928C8
  W32(c->r[3]+0x00000058u,c->r[0]); // 802928CC
  c->r[5]=R32(c->r[4]+0x00000034u); // 802928D0
  c->r[0]=R32(c->r[4]+0x00000038u); // 802928D4
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 802928D8
  W32(c->r[3]+0x00000060u,c->r[0]); // 802928DC
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 802928E0
  c->r[0]=R32(c->r[4]+0x00000040u); // 802928E4
  W32(c->r[3]+0x00000064u,c->r[5]); // 802928E8
  W32(c->r[3]+0x00000068u,c->r[0]); // 802928EC
  c->r[5]=R32(c->r[4]+0x00000044u); // 802928F0
  c->r[0]=R32(c->r[4]+0x00000048u); // 802928F4
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 802928F8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802928FC
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 80292900
  c->r[0]=R32(c->r[4]+0x00000050u); // 80292904
  W32(c->r[3]+0x00000074u,c->r[5]); // 80292908
  W32(c->r[3]+0x00000078u,c->r[0]); // 8029290C
  c->r[5]=R32(c->r[4]+0x00000054u); // 80292910
  c->r[0]=R32(c->r[4]+0x00000058u); // 80292914
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 80292918
  W32(c->r[3]+0x00000080u,c->r[0]); // 8029291C
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 80292920
  c->r[0]=R32(c->r[4]+0x00000060u); // 80292924
  W32(c->r[3]+0x00000084u,c->r[5]); // 80292928
  W32(c->r[3]+0x00000088u,c->r[0]); // 8029292C
  c->r[5]=R32(c->r[4]+0x00000064u); // 80292930
  c->r[0]=R32(c->r[4]+0x00000068u); // 80292934
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 80292938
  W32(c->r[3]+0x00000090u,c->r[0]); // 8029293C
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 80292940
  c->r[0]=R32(c->r[4]+0x00000070u); // 80292944
  W32(c->r[3]+0x00000094u,c->r[5]); // 80292948
  W32(c->r[3]+0x00000098u,c->r[0]); // 8029294C
  c->r[5]=R32(c->r[4]+0x00000074u); // 80292950
  c->r[0]=R32(c->r[4]+0x00000078u); // 80292954
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 80292958
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8029295C
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 80292960
  c->r[0]=R32(c->r[4]+0x00000080u); // 80292964
  W32(c->r[3]+0x000000A4u,c->r[5]); // 80292968
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8029296C
  c->r[5]=R32(c->r[4]+0x00000084u); // 80292970
  c->r[0]=R32(c->r[4]+0x00000088u); // 80292974
  W32(c->r[3]+0x000000ACu,c->r[5]); // 80292978
  W32(c->r[3]+0x000000B0u,c->r[0]); // 8029297C
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 80292980
  c->r[0]=R32(c->r[4]+0x00000090u); // 80292984
  W32(c->r[3]+0x000000B4u,c->r[5]); // 80292988
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8029298C
  c->r[5]=R32(c->r[4]+0x00000094u); // 80292990
  c->r[0]=R32(c->r[4]+0x00000098u); // 80292994
  W32(c->r[3]+0x000000BCu,c->r[5]); // 80292998
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8029299C
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 802929A0
  W32(c->r[3]+0x000000C4u,c->r[0]); // 802929A4
  c->r[5]=R32(c->r[4]+0x000000A0u); // 802929A8
  c->r[0]=R32(c->r[4]+0x000000A4u); // 802929AC
  W32(c->r[3]+0x000000C8u,c->r[5]); // 802929B0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802929B4
  c->r[5]=R32(c->r[4]+0x000000A8u); // 802929B8
  c->r[0]=R32(c->r[4]+0x000000ACu); // 802929BC
  W32(c->r[3]+0x000000D0u,c->r[5]); // 802929C0
  W32(c->r[3]+0x000000D4u,c->r[0]); // 802929C4
  c->r[5]=R32(c->r[4]+0x000000B0u); // 802929C8
  c->r[0]=R32(c->r[4]+0x000000B4u); // 802929CC
  W32(c->r[3]+0x000000D8u,c->r[5]); // 802929D0
  W32(c->r[3]+0x000000DCu,c->r[0]); // 802929D4
  c->r[5]=R32(c->r[4]+0x000000B8u); // 802929D8
  c->r[0]=R32(c->r[4]+0x000000BCu); // 802929DC
  W32(c->r[3]+0x000000E0u,c->r[5]); // 802929E0
  W32(c->r[3]+0x000000E4u,c->r[0]); // 802929E4
  c->r[5]=R32(c->r[4]+0x000000C0u); // 802929E8
  c->r[0]=R32(c->r[4]+0x000000C4u); // 802929EC
  W32(c->r[3]+0x000000E8u,c->r[5]); // 802929F0
  W32(c->r[3]+0x000000ECu,c->r[0]); // 802929F4
  c->r[5]=R32(c->r[4]+0x000000C8u); // 802929F8
  c->r[0]=R32(c->r[4]+0x000000CCu); // 802929FC
  W32(c->r[3]+0x000000F0u,c->r[5]); // 80292A00
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80292A04
  c->r[5]=R32(c->r[4]+0x000000D0u); // 80292A08
  c->r[0]=R32(c->r[4]+0x000000D4u); // 80292A0C
  W32(c->r[3]+0x000000F8u,c->r[5]); // 80292A10
  W32(c->r[3]+0x000000FCu,c->r[0]); // 80292A14
  c->r[5]=R32(c->r[4]+0x000000D8u); // 80292A18
  c->r[0]=R32(c->r[4]+0x000000DCu); // 80292A1C
  W32(c->r[3]+0x00000100u,c->r[5]); // 80292A20
  W32(c->r[3]+0x00000104u,c->r[0]); // 80292A24
  c->r[0]=R32(c->r[4]+0x000000E0u); // 80292A28
  W32(c->r[3]+0x00000108u,c->r[0]); // 80292A2C
  c->r[0]=R32(c->r[4]+0x000000E4u); // 80292A30
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 80292A34
  c->r[5]=R32(c->r[4]+0x000000E8u); // 80292A38
  c->r[0]=R32(c->r[4]+0x000000ECu); // 80292A3C
  W32(c->r[3]+0x00000110u,c->r[5]); // 80292A40
  W32(c->r[3]+0x00000114u,c->r[0]); // 80292A44
  c->r[5]=R32(c->r[4]+0x000000F0u); // 80292A48
  c->r[0]=R32(c->r[4]+0x000000F4u); // 80292A4C
  W32(c->r[3]+0x00000118u,c->r[5]); // 80292A50
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80292A54
  c->r[5]=R32(c->r[4]+0x000000F8u); // 80292A58
  c->r[0]=R32(c->r[4]+0x000000FCu); // 80292A5C
  W32(c->r[3]+0x00000120u,c->r[5]); // 80292A60
  W32(c->r[3]+0x00000124u,c->r[0]); // 80292A64
  c->r[5]=R32(c->r[4]+0x00000100u); // 80292A68
  c->r[0]=R32(c->r[4]+0x00000104u); // 80292A6C
  W32(c->r[3]+0x00000128u,c->r[5]); // 80292A70
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 80292A74
  c->r[5]=R32(c->r[4]+0x00000108u); // 80292A78
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 80292A7C
  W32(c->r[3]+0x00000130u,c->r[5]); // 80292A80
  W32(c->r[3]+0x00000134u,c->r[0]); // 80292A84
  c->r[5]=R32(c->r[4]+0x00000110u); // 80292A88
  c->r[0]=R32(c->r[4]+0x00000114u); // 80292A8C
  W32(c->r[3]+0x00000138u,c->r[5]); // 80292A90
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80292A94
  c->r[5]=R32(c->r[4]+0x00000118u); // 80292A98
  c->r[0]=R32(c->r[4]+0x0000011Cu); // 80292A9C
  W32(c->r[3]+0x00000140u,c->r[5]); // 80292AA0
  W32(c->r[3]+0x00000144u,c->r[0]); // 80292AA4
  c->r[5]=R32(c->r[4]+0x00000120u); // 80292AA8
  c->r[0]=R32(c->r[4]+0x00000124u); // 80292AAC
  W32(c->r[3]+0x00000148u,c->r[5]); // 80292AB0
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 80292AB4
  c->r[0]=R32(c->r[4]+0x00000128u); // 80292AB8
  W32(c->r[3]+0x00000150u,c->r[0]); // 80292ABC
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 80292AC0
  c->r[0]=R32(c->r[4]+0x00000130u); // 80292AC4
  W32(c->r[3]+0x00000154u,c->r[5]); // 80292AC8
  W32(c->r[3]+0x00000158u,c->r[0]); // 80292ACC
  c->r[5]=R32(c->r[4]+0x00000134u); // 80292AD0
  c->r[0]=R32(c->r[4]+0x00000138u); // 80292AD4
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 80292AD8
  W32(c->r[3]+0x00000160u,c->r[0]); // 80292ADC
  c->r[5]=R32(c->r[4]+0x0000013Cu); // 80292AE0
  c->r[0]=R32(c->r[4]+0x00000140u); // 80292AE4
  W32(c->r[3]+0x00000164u,c->r[5]); // 80292AE8
  W32(c->r[3]+0x00000168u,c->r[0]); // 80292AEC
  c->r[5]=R32(c->r[4]+0x00000144u); // 80292AF0
  c->r[0]=R32(c->r[4]+0x00000148u); // 80292AF4
  W32(c->r[3]+0x0000016Cu,c->r[5]); // 80292AF8
  W32(c->r[3]+0x00000170u,c->r[0]); // 80292AFC
  c->r[5]=R32(c->r[4]+0x0000014Cu); // 80292B00
  c->r[0]=R32(c->r[4]+0x00000150u); // 80292B04
  W32(c->r[3]+0x00000174u,c->r[5]); // 80292B08
  W32(c->r[3]+0x00000178u,c->r[0]); // 80292B0C
  c->r[5]=R32(c->r[4]+0x00000154u); // 80292B10
  c->r[0]=R32(c->r[4]+0x00000158u); // 80292B14
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 80292B18
  W32(c->r[3]+0x00000180u,c->r[0]); // 80292B1C
  c->r[5]=R32(c->r[4]+0x0000015Cu); // 80292B20
  c->r[0]=R32(c->r[4]+0x00000160u); // 80292B24
  W32(c->r[3]+0x00000184u,c->r[5]); // 80292B28
  W32(c->r[3]+0x00000188u,c->r[0]); // 80292B2C
  c->r[0]=R32(c->r[4]+0x00000164u); // 80292B30
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 80292B34
  c->r[0]=R32(c->r[4]+0x00000168u); // 80292B38
  W32(c->r[3]+0x00000190u,c->r[0]); // 80292B3C
  c->r[0]=R32(c->r[4]+0x0000016Cu); // 80292B40
  W32(c->r[3]+0x00000194u,c->r[0]); // 80292B44
  c->r[5]=R32(c->r[4]+0x00000170u); // 80292B48
  c->r[0]=R32(c->r[4]+0x00000174u); // 80292B4C
  W32(c->r[3]+0x00000198u,c->r[5]); // 80292B50
  W32(c->r[3]+0x0000019Cu,c->r[0]); // 80292B54
  c->r[5]=R32(c->r[4]+0x00000178u); // 80292B58
  c->r[0]=R32(c->r[4]+0x0000017Cu); // 80292B5C
  W32(c->r[3]+0x000001A0u,c->r[5]); // 80292B60
  W32(c->r[3]+0x000001A4u,c->r[0]); // 80292B64
  c->r[5]=R32(c->r[4]+0x00000180u); // 80292B68
  c->r[0]=R32(c->r[4]+0x00000184u); // 80292B6C
  W32(c->r[3]+0x000001A8u,c->r[5]); // 80292B70
  W32(c->r[3]+0x000001ACu,c->r[0]); // 80292B74
  c->r[0]=R32(c->r[4]+0x00000188u); // 80292B78
  W32(c->r[3]+0x000001B0u,c->r[0]); // 80292B7C
  c->r[0]=R32(c->r[4]+0x0000018Cu); // 80292B80
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80292B84
  c->r[0]=R32(c->r[4]+0x00000190u); // 80292B88
  W32(c->r[3]+0x000001B8u,c->r[0]); // 80292B8C
  c->r[0]=R32(c->r[4]+0x00000194u); // 80292B90
  W32(c->r[3]+0x000001BCu,c->r[0]); // 80292B94
  c->r[5]=R8(c->r[4]+0x00000195u); // 80292B98
  c->r[0]=R8(c->r[4]+0x00000196u); // 80292B9C
  W8(c->r[3]+0x000001BDu,c->r[5]); // 80292BA0
  W8(c->r[3]+0x000001BEu,c->r[0]); // 80292BA4
  c->r[5]=R8(c->r[4]+0x00000197u); // 80292BA8
  c->r[0]=R8(c->r[4]+0x00000198u); // 80292BAC
  W8(c->r[3]+0x000001BFu,c->r[5]); // 80292BB0
  W8(c->r[3]+0x000001C0u,c->r[0]); // 80292BB4
  c->r[5]=R8(c->r[4]+0x00000199u); // 80292BB8
  c->r[0]=R8(c->r[4]+0x0000019Au); // 80292BBC
  W8(c->r[3]+0x000001C1u,c->r[5]); // 80292BC0
  W8(c->r[3]+0x000001C2u,c->r[0]); // 80292BC4
  c->r[5]=R8(c->r[4]+0x0000019Bu); // 80292BC8
  c->r[0]=R8(c->r[4]+0x0000019Cu); // 80292BCC
  W8(c->r[3]+0x000001C3u,c->r[5]); // 80292BD0
  W8(c->r[3]+0x000001C4u,c->r[0]); // 80292BD4
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80292BD8
  c->r[4]=c->r[31]+0x00000028u; // 80292BDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80292BE0
  c->r[12]=R32(c->r[12]+0x00000018u); // 80292BE4
  c->ctr=c->r[12]; // 80292BE8
  if (true) { c->lr=0x80292BF0u; dispatch(c,c->ctr); } // 80292BEC
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80292BF0
  c->r[3]=c->r[31]|c->r[31]; // 80292BF4
  c->r[12]=R32(c->r[12]+0x00000030u); // 80292BF8
  c->ctr=c->r[12]; // 80292BFC
  if (true) { c->lr=0x80292C04u; dispatch(c,c->ctr); } // 80292C00
  c->r[30]=R32(c->r[31]+0x00000368u); // 80292C04
  goto L_80292C28; // 80292C08
L_80292C0C:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80292C0C
  c->r[3]=c->r[30]|c->r[30]; // 80292C10
  c->r[4]=c->r[31]+0x00000028u; // 80292C14
  c->r[12]=R32(c->r[12]+0x00000010u); // 80292C18
  c->ctr=c->r[12]; // 80292C1C
  if (true) { c->lr=0x80292C24u; dispatch(c,c->ctr); } // 80292C20
  c->r[30]=R32(c->r[30]+0x00000004u); // 80292C24
L_80292C28:;
  cmps(c,0,(int32_t)c->r[30],0); // 80292C28
  if (!crb(c,2)) { IRQCHK(c); goto L_80292C0C; } // 80292C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80292C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80292C34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80292C38
  c->lr=c->r[0]; // 80292C3C
  c->r[1]=c->r[1]+0x00000010u; // 80292C40
  return; // 80292C44
}

// fn_80292C48
void f_80292C48(Ctx* __restrict c) {
  trace_call(0x80292C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292C48
  c->r[0]=c->lr; // 80292C4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80292C50
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80292C54
  c->f[31]=c->f[1]; // 80292C58
  W32(c->r[1]+0x00000014u,c->r[31]); // 80292C5C
  W32(c->r[1]+0x00000010u,c->r[30]); // 80292C60
  c->r[30]=c->r[3]|c->r[3]; // 80292C64
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80292C68
  c->r[29]=c->r[4]|c->r[4]; // 80292C6C
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80292C70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80292C74
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80292C78
  c->ctr=c->r[12]; // 80292C7C
  if (true) { c->lr=0x80292C84u; dispatch(c,c->ctr); } // 80292C80
  c->r[30]=R32(c->r[30]+0x00000368u); // 80292C84
  c->r[31]=c->r[3]|c->r[3]; // 80292C88
  goto L_80292CBC; // 80292C8C
L_80292C90:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80292C90
  c->f[1]=c->f[31]; // 80292C94
  c->r[3]=c->r[30]|c->r[30]; // 80292C98
  c->r[4]=c->r[29]|c->r[29]; // 80292C9C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80292CA0
  c->ctr=c->r[12]; // 80292CA4
  if (true) { c->lr=0x80292CACu; dispatch(c,c->ctr); } // 80292CA8
  cmps(c,0,(int32_t)c->r[3],1); // 80292CAC
  if (!crb(c,2)) { goto L_80292CB8; } // 80292CB0
  c->r[31]=0u+0x00000001u; // 80292CB4
L_80292CB8:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 80292CB8
L_80292CBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80292CBC
  if (!crb(c,2)) { IRQCHK(c); goto L_80292C90; } // 80292CC0
  c->r[3]=c->r[31]|c->r[31]; // 80292CC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80292CC8
  c->r[31]=R32(c->r[1]+0x00000014u); // 80292CCC
  c->r[30]=R32(c->r[1]+0x00000010u); // 80292CD0
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 80292CD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80292CD8
  c->lr=c->r[0]; // 80292CDC
  c->r[1]=c->r[1]+0x00000020u; // 80292CE0
  return; // 80292CE4
}

// fn_80292CE8
void f_80292CE8(Ctx* __restrict c) {
  trace_call(0x80292CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292CE8
  c->r[0]=c->lr; // 80292CEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80292CF0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 80292CF4
  c->f[31]=c->f[2]; // 80292CF8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80292CFC
  c->f[30]=c->f[1]; // 80292D00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80292D04
  W32(c->r[1]+0x00000018u,c->r[30]); // 80292D08
  c->r[30]=c->r[3]|c->r[3]; // 80292D0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80292D10
  c->r[29]=c->r[4]|c->r[4]; // 80292D14
  c->r[3]=R32(c->r[3]+0x0000035Cu); // 80292D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 80292D1C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80292D20
  c->ctr=c->r[12]; // 80292D24
  if (true) { c->lr=0x80292D2Cu; dispatch(c,c->ctr); } // 80292D28
  c->r[30]=R32(c->r[30]+0x00000368u); // 80292D2C
  c->r[31]=c->r[3]|c->r[3]; // 80292D30
  goto L_80292D68; // 80292D34
L_80292D38:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80292D38
  c->f[1]=c->f[30]; // 80292D3C
  c->f[2]=c->f[31]; // 80292D40
  c->r[3]=c->r[30]|c->r[30]; // 80292D44
  c->r[12]=R32(c->r[12]+0x00000018u); // 80292D48
  c->r[4]=c->r[29]|c->r[29]; // 80292D4C
  c->ctr=c->r[12]; // 80292D50
  if (true) { c->lr=0x80292D58u; dispatch(c,c->ctr); } // 80292D54
  cmps(c,0,(int32_t)c->r[3],1); // 80292D58
  if (!crb(c,2)) { goto L_80292D64; } // 80292D5C
  c->r[31]=0u+0x00000001u; // 80292D60
L_80292D64:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 80292D64
L_80292D68:;
  cmps(c,0,(int32_t)c->r[30],0); // 80292D68
  if (!crb(c,2)) { IRQCHK(c); goto L_80292D38; } // 80292D6C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 80292D70
  c->r[3]=c->r[31]|c->r[31]; // 80292D74
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80292D78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80292D7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80292D80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80292D84
  c->r[0]=R32(c->r[1]+0x00000034u); // 80292D88
  c->lr=c->r[0]; // 80292D8C
  c->r[1]=c->r[1]+0x00000030u; // 80292D90
  return; // 80292D94
}

// fn_80292D98
void f_80292D98(Ctx* __restrict c) {
  trace_call(0x80292D98u);
  {uint32_t ea=c->r[3]+0x000001E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80292D98
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80292D9C
  {uint32_t ea=c->r[3]+0x000001ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 80292DA0
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[2]); // 80292DA4
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80292DA8
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80292DAC
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[3]); // 80292DB0
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80292DB4
  {uint32_t ea=c->r[3]+0x00000320u; c->f[1]=c->ps1[1]=RF32(ea);} // 80292DB8
  c->f[7]=c->ps1[7]=S(c->f[0]+c->f[4]); // 80292DBC
  {uint32_t ea=c->r[3]+0x00000180u; c->f[2]=c->ps1[2]=RF32(ea);} // 80292DC0
  {uint32_t ea=c->r[3]+0x0000031Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80292DC4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[1]); // 80292DC8
  {uint32_t ea=c->r[3]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80292DCC
  {uint32_t ea=c->r[3]+0x00000328u; c->f[10]=c->ps1[10]=RF32(ea);} // 80292DD0
  c->f[6]=c->ps1[6]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80292DD4
  {uint32_t ea=c->r[3]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 80292DD8
  {uint32_t ea=c->r[3]+0x00000324u; c->f[4]=c->ps1[4]=RF32(ea);} // 80292DDC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 80292DE0
  {uint32_t ea=c->r[3]+0x00000184u; c->f[0]=c->ps1[0]=RF32(ea);} // 80292DE4
  {uint32_t ea=c->r[3]+0x00000318u; c->f[11]=c->ps1[11]=RF32(ea);} // 80292DE8
  c->f[4]=c->ps1[4]=S(std::fma(c->f[1],c->f[4],c->f[0])); // 80292DEC
  {uint32_t ea=c->r[3]+0x00000178u; c->f[2]=c->ps1[2]=RF32(ea);} // 80292DF0
  {uint32_t ea=c->r[3]+0x00000314u; c->f[10]=c->ps1[10]=RF32(ea);} // 80292DF4
  {uint32_t ea=c->r[3]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 80292DF8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[11]); // 80292DFC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[9]);} // 80292E00
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[10],c->f[1])); // 80292E04
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[8]);} // 80292E08
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[7]);} // 80292E0C
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[6]);} // 80292E10
  {uint32_t ea=c->r[3]+0x00000180u; WF32(ea,c->f[5]);} // 80292E14
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[4]);} // 80292E18
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[3]);} // 80292E1C
  {uint32_t ea=c->r[3]+0x00000174u; WF32(ea,c->f[1]);} // 80292E20
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[0]);} // 80292E24
  return; // 80292E28
}

// fn_80292E2C
void f_80292E2C(Ctx* __restrict c) {
  trace_call(0x80292E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292E2C
  c->r[0]=c->lr; // 80292E30
  c->r[5]=0u+0x803D0000u; // 80292E34
  c->r[4]=c->r[3]|c->r[3]; // 80292E38
  W32(c->r[1]+0x00000034u,c->r[0]); // 80292E3C
  c->r[5]=c->r[5]+0x000030E0u; // 80292E40
  c->r[3]=0u+0x00000014u; // 80292E44
  c->r[6]=0u+0x00000004u; // 80292E48
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80292E4C
  c->r[31]=c->r[1]|c->r[1]; // 80292E50
  c->lr=0x80292E58u; f_8029C154(c); // 80292E54
  cmps(c,0,(int32_t)c->r[3],0); // 80292E58
  if (crb(c,2)) { goto L_80292E84; } // 80292E5C
  c->r[0]=0u+0x00000000u; // 80292E60
  c->r[4]=0u+0x804C0000u; // 80292E64
  W32(c->r[3]+0x00000000u,c->r[0]); // 80292E68
  c->r[4]=c->r[4]+0xFFFFD1D8u; // 80292E6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80292E70
  W32(c->r[3]+0x00000008u,c->r[0]); // 80292E74
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80292E78
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80292E7C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80292E80
L_80292E84:;
  cmps(c,0,(int32_t)c->r[3],0); // 80292E84
  if (!crb(c,2)) { goto L_80292EA4; } // 80292E88
  c->r[3]=0u+0x803D0000u; // 80292E8C
  c->r[4]=0u+0xFFFFFFFDu; // 80292E90
  c->r[3]=c->r[3]+0x000030E0u; // 80292E94
  c->r[3]=c->r[3]+0x0000000Bu; // 80292E98
  c->lr=0x80292EA0u; f_8029D638(c); // 80292E9C
  c->r[3]=0u+0x00000000u; // 80292EA0
L_80292EA4:;
  c->r[10]=c->r[31]|c->r[31]; // 80292EA4
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80292EA8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80292EAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80292EB0
  c->r[1]=c->r[10]|c->r[10]; // 80292EB4
  c->lr=c->r[0]; // 80292EB8
  return; // 80292EBC
}

// fn_80292EC0
void f_80292EC0(Ctx* __restrict c) {
  trace_call(0x80292EC0u);
  cmps(c,0,(int32_t)c->r[3],0); // 80292EC0
  if (crb(c,2)) return; // 80292EC4
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80292EC8
  c->r[4]=0u+0x00000001u; // 80292ECC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80292ED0
  c->ctr=c->r[12]; // 80292ED4
  if (true) { dispatch(c,c->ctr); return; } // 80292ED8
  return; // 80292EDC
}

// fn_80292EE0
void f_80292EE0(Ctx* __restrict c) {
  trace_call(0x80292EE0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80292EE0
  return; // 80292EE4
}

// fn_80292EE8
void f_80292EE8(Ctx* __restrict c) {
  trace_call(0x80292EE8u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 80292EE8
  c->r[0]=c->r[0]+c->r[4]; // 80292EEC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80292EF0
  c->r[3]=c->r[0]|c->r[0]; // 80292EF4
  return; // 80292EF8
}

// fn_80292EFC
void f_80292EFC(Ctx* __restrict c) {
  trace_call(0x80292EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292EFC
  c->r[0]=c->lr; // 80292F00
  cmps(c,0,(int32_t)c->r[3],0); // 80292F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80292F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80292F0C
  c->r[31]=c->r[3]|c->r[3]; // 80292F10
  if (crb(c,2)) { goto L_80292F28; } // 80292F14
  cmps(c,0,(int32_t)c->r[4],0); // 80292F18
  if (!crb(c,1)) { goto L_80292F28; } // 80292F1C
  c->r[4]=0u+0x00000014u; // 80292F20
  c->lr=0x80292F28u; f_8029C224(c); // 80292F24
L_80292F28:;
  c->r[3]=c->r[31]|c->r[31]; // 80292F28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80292F2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80292F30
  c->lr=c->r[0]; // 80292F34
  c->r[1]=c->r[1]+0x00000010u; // 80292F38
  return; // 80292F3C
}

// fn_80292F40
void f_80292F40(Ctx* __restrict c) {
  trace_call(0x80292F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80292F40
  c->r[0]=c->lr; // 80292F44
  c->r[5]=0u+0x803D0000u; // 80292F48
  c->r[4]=c->r[3]|c->r[3]; // 80292F4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80292F50
  c->r[5]=c->r[5]+0x000030E0u; // 80292F54
  c->r[3]=0u+0x00000014u; // 80292F58
  c->r[6]=0u+0x00000004u; // 80292F5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80292F60
  c->r[31]=c->r[1]|c->r[1]; // 80292F64
  c->r[5]=c->r[5]+0x00000016u; // 80292F68
  c->lr=0x80292F70u; f_8029C154(c); // 80292F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80292F70
  if (crb(c,2)) { goto L_80292F94; } // 80292F74
  c->r[4]=0u+0x804C0000u; // 80292F78
  c->r[0]=0u+0x00000000u; // 80292F7C
  c->r[4]=c->r[4]+0xFFFFD1B8u; // 80292F80
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80292F84
  W32(c->r[3]+0x00000000u,c->r[4]); // 80292F88
  W32(c->r[3]+0x00000004u,c->r[0]); // 80292F8C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80292F90
L_80292F94:;
  cmps(c,0,(int32_t)c->r[3],0); // 80292F94
  if (!crb(c,2)) { goto L_80292FB4; } // 80292F98
  c->r[3]=0u+0x803D0000u; // 80292F9C
  c->r[4]=0u+0xFFFFFFFDu; // 80292FA0
  c->r[3]=c->r[3]+0x000030E0u; // 80292FA4
  c->r[3]=c->r[3]+0x00000028u; // 80292FA8
  c->lr=0x80292FB0u; f_8029D638(c); // 80292FAC
  c->r[3]=0u+0x00000000u; // 80292FB0
L_80292FB4:;
  c->r[10]=c->r[31]|c->r[31]; // 80292FB4
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80292FB8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80292FBC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80292FC0
  c->r[1]=c->r[10]|c->r[10]; // 80292FC4
  c->lr=c->r[0]; // 80292FC8
  return; // 80292FCC
}

// fn_80292FD0
void f_80292FD0(Ctx* __restrict c) {
  trace_call(0x80292FD0u);
  cmps(c,0,(int32_t)c->r[3],0); // 80292FD0
  if (crb(c,2)) return; // 80292FD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80292FD8
  c->r[4]=0u+0x00000001u; // 80292FDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80292FE0
  c->ctr=c->r[12]; // 80292FE4
  if (true) { dispatch(c,c->ctr); return; } // 80292FE8
  return; // 80292FEC
}

// fn_80292FF0
void f_80292FF0(Ctx* __restrict c) {
  trace_call(0x80292FF0u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 80292FF0
L_80292FF4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80292FF4
  if (crb(c,2)) { goto L_80293014; } // 80292FF8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80292FFC
  c->r[6]=R32(c->r[5]+0x00000004u); // 80293000
  c->r[0]=c->r[0]-c->r[4]; // 80293004
  W32(c->r[5]+0x00000010u,c->r[0]); // 80293008
  c->r[5]=c->r[6]|c->r[6]; // 8029300C
  IRQCHK(c); goto L_80292FF4; // 80293010
L_80293014:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80293014
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 80293018
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8029301C
  if (!crb(c,2)) return; // 80293020
  c->r[4]=R32(c->r[3]+0x00000010u); // 80293024
  c->r[0]=c->r[4]+0x00000001u; // 80293028
  W32(c->r[3]+0x00000010u,c->r[0]); // 8029302C
  return; // 80293030
}

// fn_80293034
void f_80293034(Ctx* __restrict c) {
  trace_call(0x80293034u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293034
  c->r[0]=c->lr; // 80293038
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029303C
  c->r[5]=R32(c->r[3]+0x00000008u); // 80293040
  cmps(c,0,(int32_t)c->r[5],0); // 80293044
  if (crb(c,2)) { goto L_8029308C; } // 80293048
  c->r[0]=R32(c->r[4]+0x00000000u); // 8029304C
  cmps(c,0,(int32_t)c->r[0],0); // 80293050
  if (!crb(c,2)) { goto L_80293064; } // 80293054
  c->r[0]=R32(c->r[4]+0x00000004u); // 80293058
  cmps(c,0,(int32_t)c->r[0],0); // 8029305C
  if (crb(c,2)) { goto L_80293074; } // 80293060
L_80293064:;
  c->r[3]=0u+0x804C0000u; // 80293064
  c->r[3]=c->r[3]+0xFFFFD19Cu; // 80293068
  c->lr=0x80293070u; f_8029D4B0(c); // 8029306C
L_80293070:;
  IRQCHK(c); goto L_80293070; // 80293070
L_80293074:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 80293074
  c->r[0]=R32(c->r[5]+0x00000004u); // 80293078
  W32(c->r[4]+0x00000004u,c->r[0]); // 8029307C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80293080
  W32(c->r[3]+0x00000008u,c->r[4]); // 80293084
  goto L_802930B0; // 80293088
L_8029308C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029308C
  W32(c->r[3]+0x00000008u,c->r[4]); // 80293090
  cmps(c,0,(int32_t)c->r[0],0); // 80293094
  if (crb(c,2)) { goto L_802930AC; } // 80293098
  c->r[3]=0u+0x804C0000u; // 8029309C
  c->r[3]=c->r[3]+0xFFFFD180u; // 802930A0
  c->lr=0x802930A8u; f_8029D4B0(c); // 802930A4
L_802930A8:;
  IRQCHK(c); goto L_802930A8; // 802930A8
L_802930AC:;
  W32(c->r[3]+0x00000004u,c->r[4]); // 802930AC
L_802930B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802930B0
  c->lr=c->r[0]; // 802930B4
  c->r[1]=c->r[1]+0x00000010u; // 802930B8
  return; // 802930BC
}

// fn_802930C0
void f_802930C0(Ctx* __restrict c) {
  trace_call(0x802930C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802930C0
  c->r[0]=c->lr; // 802930C4
  cmps(c,0,(int32_t)c->r[4],0); // 802930C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802930CC
  if (!crb(c,2)) { goto L_802930E4; } // 802930D0
  c->r[3]=0u+0x804C0000u; // 802930D4
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 802930D8
  c->lr=0x802930E0u; f_8029D4B0(c); // 802930DC
L_802930E0:;
  IRQCHK(c); goto L_802930E0; // 802930E0
L_802930E4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802930E4
  cmpu(c,0,c->r[0],c->r[4]); // 802930E8
  if (!crb(c,2)) { goto L_802930F8; } // 802930EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 802930F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802930F4
L_802930F8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802930F8
  cmpu(c,0,c->r[0],c->r[4]); // 802930FC
  if (!crb(c,2)) { goto L_8029310C; } // 80293100
  c->r[0]=R32(c->r[4]+0x00000000u); // 80293104
  W32(c->r[3]+0x00000008u,c->r[0]); // 80293108
L_8029310C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8029310C
  cmps(c,0,(int32_t)c->r[3],0); // 80293110
  if (crb(c,2)) { goto L_80293120; } // 80293114
  c->r[0]=R32(c->r[4]+0x00000004u); // 80293118
  W32(c->r[3]+0x00000004u,c->r[0]); // 8029311C
L_80293120:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80293120
  cmps(c,0,(int32_t)c->r[3],0); // 80293124
  if (crb(c,2)) { goto L_80293134; } // 80293128
  c->r[0]=R32(c->r[4]+0x00000000u); // 8029312C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80293130
L_80293134:;
  c->r[0]=0u+0x00000000u; // 80293134
  W32(c->r[4]+0x00000004u,c->r[0]); // 80293138
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029313C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293140
  c->lr=c->r[0]; // 80293144
  c->r[1]=c->r[1]+0x00000010u; // 80293148
  return; // 8029314C
}

// fn_80293150
void f_80293150(Ctx* __restrict c) {
  trace_call(0x80293150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293150
  c->r[0]=c->lr; // 80293154
  cmps(c,0,(int32_t)c->r[3],0); // 80293158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029315C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80293160
  c->r[31]=c->r[3]|c->r[3]; // 80293164
  if (crb(c,2)) { goto L_8029317C; } // 80293168
  cmps(c,0,(int32_t)c->r[4],0); // 8029316C
  if (!crb(c,1)) { goto L_8029317C; } // 80293170
  c->r[4]=0u+0x00000014u; // 80293174
  c->lr=0x8029317Cu; f_8029C224(c); // 80293178
L_8029317C:;
  c->r[3]=c->r[31]|c->r[31]; // 8029317C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80293180
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293184
  c->lr=c->r[0]; // 80293188
  c->r[1]=c->r[1]+0x00000010u; // 8029318C
  return; // 80293190
}

// fn_80293194
void f_80293194(Ctx* __restrict c) {
  trace_call(0x80293194u);
  c->r[5]=c->r[4]|c->r[4]; // 80293194
  c->r[4]=c->r[3]|c->r[3]; // 80293198
  c->r[6]=0u+0x00000060u; // 8029319C
  f_802931E8(c); return; // 802931A0
}

// fn_802931A4
void f_802931A4(Ctx* __restrict c) {
  trace_call(0x802931A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802931A4
  c->r[0]=c->lr; // 802931A8
  cmps(c,0,(int32_t)c->r[3],0); // 802931AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802931B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802931B4
  c->r[31]=c->r[3]|c->r[3]; // 802931B8
  if (crb(c,2)) { goto L_802931D0; } // 802931BC
  cmps(c,0,(int32_t)c->r[4],0); // 802931C0
  if (!crb(c,1)) { goto L_802931D0; } // 802931C4
  c->r[4]=0u+0x00002D40u; // 802931C8
  c->lr=0x802931D0u; f_8029C224(c); // 802931CC
L_802931D0:;
  c->r[3]=c->r[31]|c->r[31]; // 802931D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802931D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802931D8
  c->lr=c->r[0]; // 802931DC
  c->r[1]=c->r[1]+0x00000010u; // 802931E0
  return; // 802931E4
}

// fn_802931E8
void f_802931E8(Ctx* __restrict c) {
  trace_call(0x802931E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802931E8
  c->r[0]=c->lr; // 802931EC
  c->r[6]=0u+0x00000004u; // 802931F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 802931F4
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802931F8
  c->r[30]=0u+0x00000000u; // 802931FC
  c->r[26]=c->r[3]|c->r[3]; // 80293200
  c->r[27]=c->r[4]|c->r[4]; // 80293204
  c->r[3]=0u+0x803D0000u; // 80293208
  c->r[31]=c->r[1]|c->r[1]; // 8029320C
  c->r[28]=c->r[5]|c->r[5]; // 80293210
  c->r[4]=c->r[26]|c->r[26]; // 80293214
  W32(c->r[5]+0x00000000u,c->r[30]); // 80293218
  c->r[5]=c->r[3]+0x00003180u; // 8029321C
  c->r[3]=0u+0x00002D40u; // 80293220
  c->lr=0x80293228u; f_8029C154(c); // 80293224
  cmps(c,0,(int32_t)c->r[3],0); // 80293228
  c->r[29]=c->r[3]|c->r[3]; // 8029322C
  if (crb(c,2)) { goto L_80293258; } // 80293230
  c->r[4]=0u+0x804C0000u; // 80293234
  c->r[0]=0u+0x00000060u; // 80293238
  c->r[4]=c->r[4]+0xFFFFD24Cu; // 8029323C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80293240
  W32(c->r[3]+0x00000000u,c->r[4]); // 80293244
  W32(c->r[3]+0x00000004u,c->r[30]); // 80293248
  W32(c->r[3]+0x00000008u,c->r[30]); // 8029324C
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80293250
  W32(c->r[3]+0x00000010u,c->r[0]); // 80293254
L_80293258:;
  cmps(c,0,(int32_t)c->r[3],0); // 80293258
  if (!crb(c,2)) { goto L_80293280; } // 8029325C
  c->r[4]=0u+0xFFFFFFFDu; // 80293260
  c->r[3]=0u+0x803D0000u; // 80293264
  c->r[3]=c->r[3]+0x00003180u; // 80293268
  W32(c->r[28]+0x00000000u,c->r[4]); // 8029326C
  c->r[3]=c->r[3]+0x0000000Eu; // 80293270
  c->lr=0x80293278u; f_8029D638(c); // 80293274
  c->r[3]=0u+0x00000000u; // 80293278
  goto L_802932E4; // 8029327C
L_80293280:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80293280
  c->r[3]=c->r[29]|c->r[29]; // 80293284
  c->r[4]=c->r[26]|c->r[26]; // 80293288
  c->r[5]=c->r[27]|c->r[27]; // 8029328C
  c->r[12]=R32(c->r[12]+0x00000044u); // 80293290
  c->r[6]=c->r[28]|c->r[28]; // 80293294
  c->ctr=c->r[12]; // 80293298
  if (true) { c->lr=0x802932A0u; dispatch(c,c->ctr); } // 8029329C
  cmps(c,0,(int32_t)c->r[3],0); // 802932A0
  if (!crb(c,2)) { goto L_802932D4; } // 802932A4
  cmps(c,0,(int32_t)c->r[29],0); // 802932A8
  if (crb(c,2)) { goto L_802932CC; } // 802932AC
  c->r[12]=R32(c->r[29]+0x00000000u); // 802932B0
  c->r[0]=0u+0x00000001u; // 802932B4
  c->r[3]=c->r[29]|c->r[29]; // 802932B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802932BC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802932C0
  c->ctr=c->r[12]; // 802932C4
  if (true) { c->lr=0x802932CCu; dispatch(c,c->ctr); } // 802932C8
L_802932CC:;
  c->r[3]=0u+0x00000000u; // 802932CC
  goto L_802932E4; // 802932D0
L_802932D4:;
  c->r[0]=0u+0x00000000u; // 802932D4
  c->r[3]=c->r[29]|c->r[29]; // 802932D8
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 802932DC
  W32(c->r[29]+0x00000A10u,c->r[0]); // 802932E0
L_802932E4:;
  c->r[10]=c->r[31]|c->r[31]; // 802932E4
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802932E8
  c->r[10]=R32(c->r[1]+0x00000000u); // 802932EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 802932F0
  c->r[1]=c->r[10]|c->r[10]; // 802932F4
  c->lr=c->r[0]; // 802932F8
  return; // 802932FC
}

// fn_80293300
void f_80293300(Ctx* __restrict c) {
  trace_call(0x80293300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293300
  c->r[0]=c->lr; // 80293304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80293308
  c->r[0]=0u+0x00000000u; // 8029330C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80293310
  c->r[31]=c->r[3]|c->r[3]; // 80293314
  W32(c->r[4]+0x00000000u,c->r[0]); // 80293318
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029331C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80293320
  c->ctr=c->r[12]; // 80293324
  if (true) { c->lr=0x8029332Cu; dispatch(c,c->ctr); } // 80293328
  cmps(c,0,(int32_t)c->r[31],0); // 8029332C
  if (crb(c,2)) { goto L_8029334C; } // 80293330
  c->r[12]=R32(c->r[31]+0x00000000u); // 80293334
  c->r[3]=c->r[31]|c->r[31]; // 80293338
  c->r[4]=0u+0x00000001u; // 8029333C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80293340
  c->ctr=c->r[12]; // 80293344
  if (true) { c->lr=0x8029334Cu; dispatch(c,c->ctr); } // 80293348
L_8029334C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029334C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80293350
  c->lr=c->r[0]; // 80293354
  c->r[1]=c->r[1]+0x00000010u; // 80293358
  return; // 8029335C
}

// fn_80293360
void f_80293360(Ctx* __restrict c) {
  trace_call(0x80293360u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293360
  c->r[0]=c->lr; // 80293364
  W32(c->r[1]+0x00000084u,c->r[0]); // 80293368
  c->r[11]=c->r[1]+0x00000080u; // 8029336C
  c->lr=0x80293374u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80293370
  c->r[31]=c->r[1]|c->r[1]; // 80293374
  c->r[26]=0u+0x00000000u; // 80293378
  c->r[7]=0u+0x803D0000u; // 8029337C
  W32(c->r[6]+0x00000000u,c->r[26]); // 80293380
  c->r[7]=c->r[7]+0x00003180u; // 80293384
  c->r[30]=c->r[6]|c->r[6]; // 80293388
  c->r[6]=0u+0x804C0000u; // 8029338C
  c->r[24]=R32(c->r[3]+0x00000010u); // 80293390
  c->r[27]=c->r[3]|c->r[3]; // 80293394
  c->r[29]=c->r[5]|c->r[5]; // 80293398
  c->r[5]=c->r[6]+0xFFFFD318u; // 8029339C
  c->r[28]=c->r[4]|c->r[4]; // 802933A0
  c->r[25]=c->r[7]+0x0000001Au; // 802933A4
  c->r[3]=0u+0x00000018u; // 802933A8
  c->r[6]=0u+0x00000004u; // 802933AC
  c->lr=0x802933B4u; f_8029C154(c); // 802933B0
  cmps(c,0,(int32_t)c->r[3],0); // 802933B4
  c->r[23]=c->r[3]|c->r[3]; // 802933B8
  if (crb(c,2)) { goto L_802933E4; } // 802933BC
  c->r[4]=0u+0x804C0000u; // 802933C0
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 802933C4
  c->r[4]=c->r[4]+0xFFFFD220u; // 802933C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802933CC
  W32(c->r[3]+0x00000004u,c->r[28]); // 802933D0
  W32(c->r[3]+0x00000008u,c->r[25]); // 802933D4
  W32(c->r[3]+0x0000000Cu,c->r[26]); // 802933D8
  W32(c->r[3]+0x00000010u,c->r[26]); // 802933DC
  W32(c->r[3]+0x00000014u,c->r[26]); // 802933E0
L_802933E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802933E4
  if (!crb(c,2)) { goto L_80293404; } // 802933E8
  c->r[3]=0u+0x804C0000u; // 802933EC
  c->r[4]=0u+0xFFFFFFFDu; // 802933F0
  c->r[3]=c->r[3]+0xFFFFD30Cu; // 802933F4
  c->lr=0x802933FCu; f_8029D638(c); // 802933F8
  c->r[23]=0u+0x00000000u; // 802933FC
  goto L_80293494; // 80293400
L_80293404:;
  c->r[3]=c->r[28]|c->r[28]; // 80293404
  c->lr=0x8029340Cu; f_8029C310(c); // 80293408
  cmps(c,0,(int32_t)c->r[3],0); // 8029340C
  W32(c->r[23]+0x0000000Cu,c->r[3]); // 80293410
  if (!crb(c,2)) { goto L_80293434; } // 80293414
  c->r[12]=R32(c->r[23]+0x00000000u); // 80293418
  c->r[3]=c->r[23]|c->r[23]; // 8029341C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293420
  c->ctr=c->r[12]; // 80293424
  if (true) { c->lr=0x8029342Cu; dispatch(c,c->ctr); } // 80293428
  c->r[23]=0u+0x00000000u; // 8029342C
  goto L_80293494; // 80293430
L_80293434:;
  c->r[3]=c->r[28]|c->r[28]; // 80293434
  c->lr=0x8029343Cu; f_8029C310(c); // 80293438
  cmps(c,0,(int32_t)c->r[3],0); // 8029343C
  W32(c->r[23]+0x00000010u,c->r[3]); // 80293440
  if (!crb(c,2)) { goto L_80293464; } // 80293444
  c->r[12]=R32(c->r[23]+0x00000000u); // 80293448
  c->r[3]=c->r[23]|c->r[23]; // 8029344C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293450
  c->ctr=c->r[12]; // 80293454
  if (true) { c->lr=0x8029345Cu; dispatch(c,c->ctr); } // 80293458
  c->r[23]=0u+0x00000000u; // 8029345C
  goto L_80293494; // 80293460
L_80293464:;
  c->r[3]=c->r[28]|c->r[28]; // 80293464
  c->r[4]=c->r[24]|c->r[24]; // 80293468
  c->lr=0x80293470u; f_80299E9C(c); // 8029346C
  cmps(c,0,(int32_t)c->r[3],0); // 80293470
  W32(c->r[23]+0x00000014u,c->r[3]); // 80293474
  if (!crb(c,2)) { goto L_80293494; } // 80293478
  c->r[12]=R32(c->r[23]+0x00000000u); // 8029347C
  c->r[3]=c->r[23]|c->r[23]; // 80293480
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293484
  c->ctr=c->r[12]; // 80293488
  if (true) { c->lr=0x80293490u; dispatch(c,c->ctr); } // 8029348C
  c->r[23]=0u+0x00000000u; // 80293490
L_80293494:;
  cmps(c,0,(int32_t)c->r[23],0); // 80293494
  W32(c->r[27]+0x00000004u,c->r[23]); // 80293498
  if (!crb(c,2)) { goto L_802934D4; } // 8029349C
  c->r[4]=0u+0xFFFFFFFDu; // 802934A0
  c->r[3]=0u+0x803D0000u; // 802934A4
  c->r[3]=c->r[3]+0x00003180u; // 802934A8
  W32(c->r[30]+0x00000000u,c->r[4]); // 802934AC
  c->r[3]=c->r[3]+0x00000030u; // 802934B0
  c->lr=0x802934B8u; f_8029D638(c); // 802934B4
  c->r[12]=R32(c->r[27]+0x00000000u); // 802934B8
  c->r[3]=c->r[27]|c->r[27]; // 802934BC
  c->r[12]=R32(c->r[12]+0x00000048u); // 802934C0
  c->ctr=c->r[12]; // 802934C4
  if (true) { c->lr=0x802934CCu; dispatch(c,c->ctr); } // 802934C8
  c->r[3]=0u+0x00000000u; // 802934CC
  goto L_8029381C; // 802934D0
L_802934D4:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 802934D4
  c->lr=0x802934DCu; f_8029A4F0(c); // 802934D8
  c->r[6]=0u+0x803D0000u; // 802934DC
  c->r[5]=0u+0x804C0000u; // 802934E0
  c->r[6]=c->r[6]+0x00003180u; // 802934E4
  c->r[24]=R32(c->r[27]+0x00000010u); // 802934E8
  c->r[25]=c->r[3]|c->r[3]; // 802934EC
  c->r[4]=c->r[29]|c->r[29]; // 802934F0
  c->r[23]=c->r[6]+0x0000003Cu; // 802934F4
  c->r[5]=c->r[5]+0xFFFFD300u; // 802934F8
  c->r[3]=0u+0x0000002Cu; // 802934FC
  c->r[6]=0u+0x00000004u; // 80293500
  c->lr=0x80293508u; f_8029C154(c); // 80293504
  cmps(c,0,(int32_t)c->r[3],0); // 80293508
  c->r[22]=c->r[3]|c->r[3]; // 8029350C
  if (crb(c,2)) { goto L_80293548; } // 80293510
  c->r[4]=0u+0x804C0000u; // 80293514
  {uint32_t ea=c->r[2]+0xFFFFCD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293518
  c->r[4]=c->r[4]+0xFFFFD200u; // 8029351C
  c->r[0]=0u+0x00000000u; // 80293520
  W32(c->r[3]+0x00000000u,c->r[4]); // 80293524
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80293528
  W32(c->r[3]+0x00000010u,c->r[23]); // 8029352C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80293530
  W32(c->r[3]+0x00000018u,c->r[0]); // 80293534
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80293538
  W32(c->r[3]+0x00000024u,c->r[0]); // 8029353C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80293540
  W32(c->r[3]+0x00000028u,c->r[0]); // 80293544
L_80293548:;
  cmps(c,0,(int32_t)c->r[3],0); // 80293548
  if (!crb(c,2)) { goto L_80293568; } // 8029354C
  c->r[3]=0u+0x804C0000u; // 80293550
  c->r[4]=0u+0xFFFFFFFDu; // 80293554
  c->r[3]=c->r[3]+0xFFFFD2F4u; // 80293558
  c->lr=0x80293560u; f_8029D638(c); // 8029355C
  c->r[22]=0u+0x00000000u; // 80293560
  goto L_8029371C; // 80293564
L_80293568:;
  {uint32_t ea=c->r[2]+0xFFFFCD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293568
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8029356C
  c->r[3]=c->r[29]|c->r[29]; // 80293570
  c->lr=0x80293578u; f_8029C310(c); // 80293574
  cmps(c,0,(int32_t)c->r[3],0); // 80293578
  W32(c->r[22]+0x00000018u,c->r[3]); // 8029357C
  if (!crb(c,2)) { goto L_802935A0; } // 80293580
  c->r[12]=R32(c->r[22]+0x00000000u); // 80293584
  c->r[3]=c->r[22]|c->r[22]; // 80293588
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029358C
  c->ctr=c->r[12]; // 80293590
  if (true) { c->lr=0x80293598u; dispatch(c,c->ctr); } // 80293594
  c->r[22]=0u+0x00000000u; // 80293598
  goto L_8029371C; // 8029359C
L_802935A0:;
  c->r[26]=0u+0x00010000u; // 802935A0
  c->r[5]=0u+0x804C0000u; // 802935A4
  c->r[3]=c->r[29]|c->r[29]; // 802935A8
  c->r[6]=0u+0x00000004u; // 802935AC
  c->r[4]=c->r[26]+0xFFFF8000u; // 802935B0
  c->r[5]=c->r[5]+0xFFFFD2E4u; // 802935B4
  c->lr=0x802935BCu; f_8029D740(c); // 802935B8
  cmps(c,0,(int32_t)c->r[3],0); // 802935BC
  W32(c->r[22]+0x00000024u,c->r[3]); // 802935C0
  if (!crb(c,2)) { goto L_802935E4; } // 802935C4
  c->r[12]=R32(c->r[22]+0x00000000u); // 802935C8
  c->r[3]=c->r[22]|c->r[22]; // 802935CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802935D0
  c->ctr=c->r[12]; // 802935D4
  if (true) { c->lr=0x802935DCu; dispatch(c,c->ctr); } // 802935D8
  c->r[22]=0u+0x00000000u; // 802935DC
  goto L_8029371C; // 802935E0
L_802935E4:;
  c->r[4]=c->r[26]+0xFFFF8000u; // 802935E4
  c->lr=0x802935ECu; f_8029D7EC(c); // 802935E8
  cmps(c,0,(int32_t)c->r[3],0); // 802935EC
  W32(c->r[22]+0x00000028u,c->r[3]); // 802935F0
  if (!crb(c,2)) { goto L_80293614; } // 802935F4
  c->r[12]=R32(c->r[22]+0x00000000u); // 802935F8
  c->r[3]=c->r[22]|c->r[22]; // 802935FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293600
  c->ctr=c->r[12]; // 80293604
  if (true) { c->lr=0x8029360Cu; dispatch(c,c->ctr); } // 80293608
  c->r[22]=0u+0x00000000u; // 8029360C
  goto L_8029371C; // 80293610
L_80293614:;
  c->r[3]=c->r[29]|c->r[29]; // 80293614
  c->r[4]=c->r[22]|c->r[22]; // 80293618
  c->r[5]=c->r[24]|c->r[24]; // 8029361C
  c->r[6]=c->r[25]|c->r[25]; // 80293620
  c->lr=0x80293628u; f_8029B668(c); // 80293624
  cmps(c,0,(int32_t)c->r[3],0); // 80293628
  W32(c->r[22]+0x0000001Cu,c->r[3]); // 8029362C
  if (!crb(c,2)) { goto L_80293650; } // 80293630
  c->r[12]=R32(c->r[22]+0x00000000u); // 80293634
  c->r[3]=c->r[22]|c->r[22]; // 80293638
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029363C
  c->ctr=c->r[12]; // 80293640
  if (true) { c->lr=0x80293648u; dispatch(c,c->ctr); } // 80293644
  c->r[22]=0u+0x00000000u; // 80293648
  goto L_8029371C; // 8029364C
L_80293650:;
  c->r[5]=0u+0x804C0000u; // 80293650
  c->r[4]=c->r[29]|c->r[29]; // 80293654
  c->r[5]=c->r[5]+0xFFFFD330u; // 80293658
  c->r[3]=0u+0x0000000Cu; // 8029365C
  c->r[6]=0u+0x00000004u; // 80293660
  c->lr=0x80293668u; f_8029C154(c); // 80293664
  cmps(c,0,(int32_t)c->r[3],0); // 80293668
  if (crb(c,2)) { goto L_80293680; } // 8029366C
  c->r[0]=0u+0x00000000u; // 80293670
  W32(c->r[31]+0x00000034u,c->r[1]); // 80293674
  W32(c->r[3]+0x00000004u,c->r[0]); // 80293678
  W32(c->r[3]+0x00000008u,c->r[0]); // 8029367C
L_80293680:;
  cmps(c,0,(int32_t)c->r[3],0); // 80293680
  if (!crb(c,2)) { goto L_802936A0; } // 80293684
  c->r[3]=0u+0x804C0000u; // 80293688
  c->r[4]=0u+0xFFFFFFFDu; // 8029368C
  c->r[3]=c->r[3]+0xFFFFD324u; // 80293690
  c->lr=0x80293698u; f_8029D638(c); // 80293694
  c->r[3]=0u+0x00000000u; // 80293698
  goto L_802936A4; // 8029369C
L_802936A0:;
  W32(c->r[3]+0x00000000u,c->r[29]); // 802936A0
L_802936A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802936A4
  W32(c->r[22]+0x00000020u,c->r[3]); // 802936A8
  if (!crb(c,2)) { goto L_802936CC; } // 802936AC
  c->r[12]=R32(c->r[22]+0x00000000u); // 802936B0
  c->r[3]=c->r[22]|c->r[22]; // 802936B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802936B8
  c->ctr=c->r[12]; // 802936BC
  if (true) { c->lr=0x802936C4u; dispatch(c,c->ctr); } // 802936C0
  c->r[22]=0u+0x00000000u; // 802936C4
  goto L_8029371C; // 802936C8
L_802936CC:;
  c->r[4]=0u+0x00000100u; // 802936CC
  c->r[5]=0u+0x804C0000u; // 802936D0
  W32(c->r[22]+0x00000008u,c->r[4]); // 802936D4
  c->r[3]=c->r[29]|c->r[29]; // 802936D8
  c->r[5]=c->r[5]+0xFFFFD2D4u; // 802936DC
  c->r[6]=0u+0x00000020u; // 802936E0
  c->lr=0x802936E8u; f_8029D740(c); // 802936E4
  cmps(c,0,(int32_t)c->r[3],0); // 802936E8
  W32(c->r[22]+0x00000004u,c->r[3]); // 802936EC
  if (!crb(c,2)) { goto L_80293710; } // 802936F0
  c->r[12]=R32(c->r[22]+0x00000000u); // 802936F4
  c->r[3]=c->r[22]|c->r[22]; // 802936F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802936FC
  c->ctr=c->r[12]; // 80293700
  if (true) { c->lr=0x80293708u; dispatch(c,c->ctr); } // 80293704
  c->r[22]=0u+0x00000000u; // 80293708
  goto L_8029371C; // 8029370C
L_80293710:;
  c->r[5]=R32(c->r[22]+0x00000008u); // 80293710
  c->r[4]=0u+0x00000000u; // 80293714
  c->lr=0x8029371Cu; f_8000443C(c); // 80293718
L_8029371C:;
  cmps(c,0,(int32_t)c->r[22],0); // 8029371C
  W32(c->r[27]+0x00000008u,c->r[22]); // 80293720
  if (!crb(c,2)) { goto L_8029375C; } // 80293724
  c->r[4]=0u+0xFFFFFFFDu; // 80293728
  c->r[3]=0u+0x803D0000u; // 8029372C
  c->r[3]=c->r[3]+0x00003180u; // 80293730
  W32(c->r[30]+0x00000000u,c->r[4]); // 80293734
  c->r[3]=c->r[3]+0x00000051u; // 80293738
  c->lr=0x80293740u; f_8029D638(c); // 8029373C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80293740
  c->r[3]=c->r[27]|c->r[27]; // 80293744
  c->r[12]=R32(c->r[12]+0x00000048u); // 80293748
  c->ctr=c->r[12]; // 8029374C
  if (true) { c->lr=0x80293754u; dispatch(c,c->ctr); } // 80293750
  c->r[3]=0u+0x00000000u; // 80293754
  goto L_8029381C; // 80293758
L_8029375C:;
  c->r[3]=c->r[28]|c->r[28]; // 8029375C
  c->lr=0x80293764u; f_8029668C(c); // 80293760
  cmps(c,0,(int32_t)c->r[3],0); // 80293764
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 80293768
  if (!crb(c,2)) { goto L_802937A4; } // 8029376C
  c->r[4]=0u+0xFFFFFFFDu; // 80293770
  c->r[3]=0u+0x803D0000u; // 80293774
  c->r[3]=c->r[3]+0x00003180u; // 80293778
  W32(c->r[30]+0x00000000u,c->r[4]); // 8029377C
  c->r[3]=c->r[3]+0x0000005Du; // 80293780
  c->lr=0x80293788u; f_8029D638(c); // 80293784
  c->r[12]=R32(c->r[27]+0x00000000u); // 80293788
  c->r[3]=c->r[27]|c->r[27]; // 8029378C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80293790
  c->ctr=c->r[12]; // 80293794
  if (true) { c->lr=0x8029379Cu; dispatch(c,c->ctr); } // 80293798
  c->r[3]=0u+0x00000000u; // 8029379C
  goto L_8029381C; // 802937A0
L_802937A4:;
  c->r[4]=0u+0x80290000u; // 802937A4
  c->r[5]=c->r[27]|c->r[27]; // 802937A8
  c->r[3]=c->r[27]+0x00000A18u; // 802937AC
  c->r[6]=c->r[27]+0x00002D3Cu; // 802937B0
  c->r[4]=c->r[4]+0x00003C10u; // 802937B4
  c->r[7]=0u+0x00002000u; // 802937B8
  c->r[8]=0u+0x0000000Cu; // 802937BC
  c->r[9]=0u+0x00000000u; // 802937C0
  c->lr=0x802937C8u; f_801C173C(c); // 802937C4
  cmps(c,0,(int32_t)c->r[3],1); // 802937C8
  W32(c->r[27]+0x00000D30u,c->r[3]); // 802937CC
  if (crb(c,2)) { goto L_80293808; } // 802937D0
  c->r[3]=0u+0x803D0000u; // 802937D4
  c->r[3]=c->r[3]+0x00003180u; // 802937D8
  c->r[3]=c->r[3]+0x00000068u; // 802937DC
  c->lr=0x802937E4u; f_8029D4B0(c); // 802937E0
  c->r[0]=0u+0xFFFFFFFFu; // 802937E4
  c->r[3]=c->r[27]|c->r[27]; // 802937E8
  W32(c->r[30]+0x00000000u,c->r[0]); // 802937EC
  c->r[12]=R32(c->r[27]+0x00000000u); // 802937F0
  c->r[12]=R32(c->r[12]+0x00000048u); // 802937F4
  c->ctr=c->r[12]; // 802937F8
  if (true) { c->lr=0x80293800u; dispatch(c,c->ctr); } // 802937FC
  c->r[3]=0u+0x00000000u; // 80293800
  goto L_8029381C; // 80293804
L_80293808:;
  c->r[3]=0u+0x00000001u; // 80293808
  c->r[0]=0u+0x00000000u; // 8029380C
  W32(c->r[27]+0x00000D34u,c->r[3]); // 80293810
  c->r[3]=0u+0x00000001u; // 80293814
  W32(c->r[27]+0x00000D38u,c->r[0]); // 80293818
L_8029381C:;
  c->r[10]=c->r[31]|c->r[31]; // 8029381C
  c->r[11]=c->r[10]+0x00000080u; // 80293820
  c->lr=0x80293828u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80293824
  c->r[10]=R32(c->r[1]+0x00000000u); // 80293828
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029382C
  c->r[1]=c->r[10]|c->r[10]; // 80293830
  c->lr=c->r[0]; // 80293834
  return; // 80293838
}

// fn_8029383C
void f_8029383C(Ctx* __restrict c) {
  trace_call(0x8029383Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029383C
  c->r[0]=c->lr; // 80293840
  W32(c->r[1]+0x00000014u,c->r[0]); // 80293844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80293848
  c->r[31]=c->r[3]|c->r[3]; // 8029384C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80293850
  cmps(c,0,(int32_t)c->r[0],0); // 80293854
  if (crb(c,2)) { goto L_80293878; } // 80293858
  c->r[3]=c->r[0]|c->r[0]; // 8029385C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293860
  c->r[12]=R32(c->r[12]+0x00000018u); // 80293864
  c->ctr=c->r[12]; // 80293868
  if (true) { c->lr=0x80293870u; dispatch(c,c->ctr); } // 8029386C
  c->r[0]=0u+0x00000000u; // 80293870
  W32(c->r[31]+0x00000014u,c->r[0]); // 80293874
L_80293878:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80293878
  cmps(c,0,(int32_t)c->r[3],0); // 8029387C
  if (crb(c,2)) { goto L_80293890; } // 80293880
  c->lr=0x80293888u; f_8029C37C(c); // 80293884
  c->r[0]=0u+0x00000000u; // 80293888
  W32(c->r[31]+0x00000010u,c->r[0]); // 8029388C
L_80293890:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80293890
  cmps(c,0,(int32_t)c->r[3],0); // 80293894
  if (crb(c,2)) { goto L_802938A8; } // 80293898
  c->lr=0x802938A0u; f_8029C37C(c); // 8029389C
  c->r[0]=0u+0x00000000u; // 802938A0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802938A4
L_802938A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802938A8
  if (crb(c,2)) { goto L_802938C8; } // 802938AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 802938B0
  c->r[3]=c->r[31]|c->r[31]; // 802938B4
  c->r[4]=0u+0x00000001u; // 802938B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802938BC
  c->ctr=c->r[12]; // 802938C0
  if (true) { c->lr=0x802938C8u; dispatch(c,c->ctr); } // 802938C4
L_802938C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802938C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802938CC
  c->lr=c->r[0]; // 802938D0
  c->r[1]=c->r[1]+0x00000010u; // 802938D4
  return; // 802938D8
}

// fn_802938DC
void f_802938DC(Ctx* __restrict c) {
  trace_call(0x802938DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802938DC
  c->r[0]=c->lr; // 802938E0
  cmps(c,0,(int32_t)c->r[3],0); // 802938E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802938E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802938EC
  c->r[31]=c->r[3]|c->r[3]; // 802938F0
  if (crb(c,2)) { goto L_80293908; } // 802938F4
  cmps(c,0,(int32_t)c->r[4],0); // 802938F8
  if (!crb(c,1)) { goto L_80293908; } // 802938FC
  c->r[4]=0u+0x00000018u; // 80293900
  c->lr=0x80293908u; f_8029C224(c); // 80293904
L_80293908:;
  c->r[3]=c->r[31]|c->r[31]; // 80293908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029390C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293910
  c->lr=c->r[0]; // 80293914
  c->r[1]=c->r[1]+0x00000010u; // 80293918
  return; // 8029391C
}

// fn_80293920
void f_80293920(Ctx* __restrict c) {
  trace_call(0x80293920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293920
  c->r[0]=c->lr; // 80293924
  W32(c->r[1]+0x00000014u,c->r[0]); // 80293928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029392C
  c->r[31]=c->r[3]|c->r[3]; // 80293930
  c->r[6]=R32(c->r[3]+0x00000020u); // 80293934
  cmps(c,0,(int32_t)c->r[6],0); // 80293938
  if (crb(c,2)) { goto L_802939D8; } // 8029393C
  c->r[5]=R32(c->r[6]+0x00000004u); // 80293940
  c->r[0]=0u+0x00000000u; // 80293944
L_80293948:;
  cmps(c,0,(int32_t)c->r[5],0); // 80293948
  if (crb(c,2)) { goto L_802939C4; } // 8029394C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80293950
  if (!crb(c,2)) { goto L_80293968; } // 80293954
  c->r[3]=0u+0x804C0000u; // 80293958
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 8029395C
  c->lr=0x80293964u; f_8029D4B0(c); // 80293960
L_80293964:;
  IRQCHK(c); goto L_80293964; // 80293964
L_80293968:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 80293968
  cmpu(c,0,c->r[3],c->r[5]); // 8029396C
  if (!crb(c,2)) { goto L_80293978; } // 80293970
  W32(c->r[6]+0x00000004u,c->r[4]); // 80293974
L_80293978:;
  c->r[3]=R32(c->r[6]+0x00000008u); // 80293978
  cmpu(c,0,c->r[3],c->r[5]); // 8029397C
  if (!crb(c,2)) { goto L_8029398C; } // 80293980
  c->r[3]=R32(c->r[5]+0x00000000u); // 80293984
  W32(c->r[6]+0x00000008u,c->r[3]); // 80293988
L_8029398C:;
  c->r[7]=R32(c->r[5]+0x00000000u); // 8029398C
  cmps(c,0,(int32_t)c->r[7],0); // 80293990
  if (crb(c,2)) { goto L_802939A0; } // 80293994
  c->r[3]=R32(c->r[5]+0x00000004u); // 80293998
  W32(c->r[7]+0x00000004u,c->r[3]); // 8029399C
L_802939A0:;
  c->r[7]=R32(c->r[5]+0x00000004u); // 802939A0
  cmps(c,0,(int32_t)c->r[7],0); // 802939A4
  if (crb(c,2)) { goto L_802939B4; } // 802939A8
  c->r[3]=R32(c->r[5]+0x00000000u); // 802939AC
  W32(c->r[7]+0x00000000u,c->r[3]); // 802939B0
L_802939B4:;
  W32(c->r[5]+0x00000004u,c->r[0]); // 802939B4
  W32(c->r[5]+0x00000000u,c->r[0]); // 802939B8
  c->r[5]=c->r[4]|c->r[4]; // 802939BC
  IRQCHK(c); goto L_80293948; // 802939C0
L_802939C4:;
  c->r[3]=c->r[6]|c->r[6]; // 802939C4
  c->r[4]=0u+0x0000000Cu; // 802939C8
  c->lr=0x802939D0u; f_8029C224(c); // 802939CC
  c->r[0]=0u+0x00000000u; // 802939D0
  W32(c->r[31]+0x00000020u,c->r[0]); // 802939D4
L_802939D8:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 802939D8
  cmps(c,0,(int32_t)c->r[4],0); // 802939DC
  if (crb(c,2)) { goto L_802939F4; } // 802939E0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802939E4
  c->lr=0x802939ECu; f_8029D794(c); // 802939E8
  c->r[0]=0u+0x00000000u; // 802939EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 802939F0
L_802939F4:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802939F4
  cmps(c,0,(int32_t)c->r[3],0); // 802939F8
  if (crb(c,2)) { goto L_80293A18; } // 802939FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293A00
  c->r[12]=R32(c->r[12]+0x00000018u); // 80293A04
  c->ctr=c->r[12]; // 80293A08
  if (true) { c->lr=0x80293A10u; dispatch(c,c->ctr); } // 80293A0C
  c->r[0]=0u+0x00000000u; // 80293A10
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80293A14
L_80293A18:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 80293A18
  cmps(c,0,(int32_t)c->r[3],0); // 80293A1C
  if (crb(c,2)) { goto L_80293A30; } // 80293A20
  c->lr=0x80293A28u; f_8029D8C0(c); // 80293A24
  c->r[0]=0u+0x00000000u; // 80293A28
  W32(c->r[31]+0x00000028u,c->r[0]); // 80293A2C
L_80293A30:;
  c->r[4]=R32(c->r[31]+0x00000024u); // 80293A30
  cmps(c,0,(int32_t)c->r[4],0); // 80293A34
  if (crb(c,2)) { goto L_80293A4C; } // 80293A38
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80293A3C
  c->lr=0x80293A44u; f_8029D794(c); // 80293A40
  c->r[0]=0u+0x00000000u; // 80293A44
  W32(c->r[31]+0x00000024u,c->r[0]); // 80293A48
L_80293A4C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 80293A4C
  cmps(c,0,(int32_t)c->r[3],0); // 80293A50
  if (crb(c,2)) { goto L_80293A64; } // 80293A54
  c->lr=0x80293A5Cu; f_8029C37C(c); // 80293A58
  c->r[0]=0u+0x00000000u; // 80293A5C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80293A60
L_80293A64:;
  cmps(c,0,(int32_t)c->r[31],0); // 80293A64
  if (crb(c,2)) { goto L_80293A84; } // 80293A68
  c->r[12]=R32(c->r[31]+0x00000000u); // 80293A6C
  c->r[3]=c->r[31]|c->r[31]; // 80293A70
  c->r[4]=0u+0x00000001u; // 80293A74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80293A78
  c->ctr=c->r[12]; // 80293A7C
  if (true) { c->lr=0x80293A84u; dispatch(c,c->ctr); } // 80293A80
L_80293A84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293A84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80293A88
  c->lr=c->r[0]; // 80293A8C
  c->r[1]=c->r[1]+0x00000010u; // 80293A90
  return; // 80293A94
}

// fn_80293A98
void f_80293A98(Ctx* __restrict c) {
  trace_call(0x80293A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293A98
  c->r[0]=c->lr; // 80293A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80293AA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80293AA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80293AA8
  c->r[31]=c->r[3]|c->r[3]; // 80293AAC
  if (crb(c,2)) { goto L_80293AC4; } // 80293AB0
  cmps(c,0,(int32_t)c->r[4],0); // 80293AB4
  if (!crb(c,1)) { goto L_80293AC4; } // 80293AB8
  c->r[4]=0u+0x0000002Cu; // 80293ABC
  c->lr=0x80293AC4u; f_8029C224(c); // 80293AC0
L_80293AC4:;
  c->r[3]=c->r[31]|c->r[31]; // 80293AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80293AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293ACC
  c->lr=c->r[0]; // 80293AD0
  c->r[1]=c->r[1]+0x00000010u; // 80293AD4
  return; // 80293AD8
}

// fn_80293ADC
void f_80293ADC(Ctx* __restrict c) {
  trace_call(0x80293ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293ADC
  c->r[0]=c->lr; // 80293AE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80293AE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80293AE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80293AEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80293AF0
  c->r[29]=c->r[3]|c->r[3]; // 80293AF4
  c->r[0]=R32(c->r[3]+0x00000D30u); // 80293AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80293AFC
  if (crb(c,2)) { goto L_80293B78; } // 80293B00
  c->r[3]=R32(c->r[3]+0x00000004u); // 80293B04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293B08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80293B0C
  c->ctr=c->r[12]; // 80293B10
  if (true) { c->lr=0x80293B18u; dispatch(c,c->ctr); } // 80293B14
  c->r[0]=0u+0x00000000u; // 80293B18
  c->r[3]=R32(c->r[29]+0x00000004u); // 80293B1C
  W32(c->r[29]+0x00000D34u,c->r[0]); // 80293B20
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293B24
  c->r[12]=R32(c->r[12]+0x00000010u); // 80293B28
  c->ctr=c->r[12]; // 80293B2C
  if (true) { c->lr=0x80293B34u; dispatch(c,c->ctr); } // 80293B30
  c->r[3]=0u+0x10620000u; // 80293B34
  c->r[31]=0u+0x80000000u; // 80293B38
  c->r[30]=c->r[3]+0x00004DD3u; // 80293B3C
  goto L_80293B64; // 80293B40
L_80293B44:;
  c->r[3]=c->r[29]+0x00000A18u; // 80293B44
  c->lr=0x80293B4Cu; f_801C1DA4(c); // 80293B48
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80293B4C
  c->r[3]=0u+0x00000000u; // 80293B50
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80293B54
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80293B58
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 80293B5C
  c->lr=0x80293B64u; f_801C24C8(c); // 80293B60
L_80293B64:;
  c->r[0]=R32(c->r[29]+0x00000D38u); // 80293B64
  cmps(c,0,(int32_t)c->r[0],0); // 80293B68
  if (crb(c,2)) { IRQCHK(c); goto L_80293B44; } // 80293B6C
  c->r[0]=0u+0x00000000u; // 80293B70
  W32(c->r[29]+0x00000D30u,c->r[0]); // 80293B74
L_80293B78:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80293B78
  cmps(c,0,(int32_t)c->r[3],0); // 80293B7C
  if (crb(c,2)) { goto L_80293B9C; } // 80293B80
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293B84
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293B88
  c->ctr=c->r[12]; // 80293B8C
  if (true) { c->lr=0x80293B94u; dispatch(c,c->ctr); } // 80293B90
  c->r[0]=0u+0x00000000u; // 80293B94
  W32(c->r[29]+0x00000004u,c->r[0]); // 80293B98
L_80293B9C:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80293B9C
  cmps(c,0,(int32_t)c->r[3],0); // 80293BA0
  if (crb(c,2)) { goto L_80293BC0; } // 80293BA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293BA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293BAC
  c->ctr=c->r[12]; // 80293BB0
  if (true) { c->lr=0x80293BB8u; dispatch(c,c->ctr); } // 80293BB4
  c->r[0]=0u+0x00000000u; // 80293BB8
  W32(c->r[29]+0x00000008u,c->r[0]); // 80293BBC
L_80293BC0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80293BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80293BC4
  if (crb(c,2)) { goto L_80293BE4; } // 80293BC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293BCC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80293BD0
  c->ctr=c->r[12]; // 80293BD4
  if (true) { c->lr=0x80293BDCu; dispatch(c,c->ctr); } // 80293BD8
  c->r[0]=0u+0x00000000u; // 80293BDC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80293BE0
L_80293BE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80293BE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80293BE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80293BEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80293BF0
  c->lr=c->r[0]; // 80293BF4
  c->r[1]=c->r[1]+0x00000020u; // 80293BF8
  return; // 80293BFC
}

// fn_80293C00
void f_80293C00(Ctx* __restrict c) {
  trace_call(0x80293C00u);
  c->r[0]=0u+0x00000000u; // 80293C00
  c->r[3]=c->r[3]+0x00000A18u; // 80293C04
  W32(c->r[4]+0x00000000u,c->r[0]); // 80293C08
  f_801C1DA4(c); return; // 80293C0C
}

// fn_80293C10
void f_80293C10(Ctx* __restrict c) {
  trace_call(0x80293C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293C10
  c->r[0]=c->lr; // 80293C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80293C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80293C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80293C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80293C24
  c->r[29]=c->r[3]|c->r[3]; // 80293C28
L_80293C2C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80293C2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293C30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80293C34
  c->ctr=c->r[12]; // 80293C38
  if (true) { c->lr=0x80293C40u; dispatch(c,c->ctr); } // 80293C3C
  c->r[0]=R32(c->r[29]+0x00000D34u); // 80293C40
  cmps(c,0,(int32_t)c->r[0],0); // 80293C44
  if (crb(c,2)) { goto L_80293CBC; } // 80293C48
  c->r[3]=R32(c->r[29]+0x00000008u); // 80293C4C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80293C50
  c->lr=0x80293C58u; f_8029B940(c); // 80293C54
  c->r[3]=R32(c->r[29]+0x00000008u); // 80293C58
  c->r[3]=R32(c->r[3]+0x00000020u); // 80293C5C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80293C60
L_80293C64:;
  cmps(c,0,(int32_t)c->r[30],0); // 80293C64
  if (crb(c,2)) { goto L_80293C90; } // 80293C68
  c->r[31]=R32(c->r[30]+0x00000004u); // 80293C6C
  c->r[3]=c->r[30]|c->r[30]; // 80293C70
  c->lr=0x80293C78u; f_80296138(c); // 80293C74
  cmps(c,0,(int32_t)c->r[3],0); // 80293C78
  if (crb(c,2)) { goto L_80293C88; } // 80293C7C
  c->r[3]=c->r[30]|c->r[30]; // 80293C80
  c->lr=0x80293C88u; f_80294D60(c); // 80293C84
L_80293C88:;
  c->r[30]=c->r[31]|c->r[31]; // 80293C88
  IRQCHK(c); goto L_80293C64; // 80293C8C
L_80293C90:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80293C90
  c->r[4]=0u+0x00000090u; // 80293C94
  c->lr=0x80293C9Cu; f_80296820(c); // 80293C98
  c->r[3]=R32(c->r[29]+0x00000004u); // 80293C9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80293CA0
  c->r[12]=R32(c->r[12]+0x00000010u); // 80293CA4
  c->ctr=c->r[12]; // 80293CA8
  if (true) { c->lr=0x80293CB0u; dispatch(c,c->ctr); } // 80293CAC
  c->r[3]=c->r[29]+0x00000A18u; // 80293CB0
  c->lr=0x80293CB8u; f_801C203C(c); // 80293CB4
  IRQCHK(c); goto L_80293C2C; // 80293CB8
L_80293CBC:;
  c->r[0]=0u+0x00000001u; // 80293CBC
  W32(c->r[29]+0x00000D38u,c->r[0]); // 80293CC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80293CC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80293CC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80293CCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80293CD0
  c->lr=c->r[0]; // 80293CD4
  c->r[1]=c->r[1]+0x00000020u; // 80293CD8
  return; // 80293CDC
}

// fn_80293CE0
void f_80293CE0(Ctx* __restrict c) {
  trace_call(0x80293CE0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80293CE0
  return; // 80293CE4
}

// fn_80293CE8
void f_80293CE8(Ctx* __restrict c) {
  trace_call(0x80293CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293CE8
  c->r[0]=c->lr; // 80293CEC
  cmps(c,0,(int32_t)c->r[4],0); // 80293CF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80293CF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80293CF8
  c->r[31]=c->r[4]|c->r[4]; // 80293CFC
  if (crb(c,2)) { goto L_80293D14; } // 80293D00
  if (crb(c,0)) { goto L_80293D38; } // 80293D04
  cmps(c,0,(int32_t)c->r[4],4); // 80293D08
  if (!crb(c,0)) { goto L_80293D38; } // 80293D0C
  goto L_80293D28; // 80293D10
L_80293D14:;
  c->r[3]=c->r[31]|c->r[31]; // 80293D14
  c->lr=0x80293D1Cu; f_801D58DC(c); // 80293D18
  c->r[3]=c->r[31]|c->r[31]; // 80293D1C
  c->lr=0x80293D24u; f_801DB844(c); // 80293D20
  goto L_80293D38; // 80293D24
L_80293D28:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80293D28
  c->lr=0x80293D30u; f_801D58DC(c); // 80293D2C
  c->r[3]=c->r[31]|c->r[31]; // 80293D30
  c->lr=0x80293D38u; f_801DB844(c); // 80293D34
L_80293D38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80293D38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80293D3C
  c->lr=c->r[0]; // 80293D40
  c->r[1]=c->r[1]+0x00000010u; // 80293D44
  return; // 80293D48
}

// fn_80293D4C
void f_80293D4C(Ctx* __restrict c) {
  trace_call(0x80293D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293D4C
  c->r[0]=c->lr; // 80293D50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80293D54
  c->r[0]=0u+0x00000000u; // 80293D58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80293D5C
  c->r[31]=c->r[5]|c->r[5]; // 80293D60
  W32(c->r[1]+0x00000018u,c->r[30]); // 80293D64
  c->r[30]=c->r[4]|c->r[4]; // 80293D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80293D6C
  c->r[29]=c->r[3]|c->r[3]; // 80293D70
  W32(c->r[5]+0x00000000u,c->r[0]); // 80293D74
  c->r[0]=R32(c->r[3]+0x00000A0Cu); // 80293D78
  cmps(c,0,(int32_t)c->r[0],0); // 80293D7C
  if (crb(c,2)) { goto L_80293DF4; } // 80293D80
  cmps(c,0,(int32_t)c->r[0],3); // 80293D84
  if (crb(c,2)) { goto L_80293DE0; } // 80293D88
  if (!crb(c,0)) { goto L_80293DA0; } // 80293D8C
  cmps(c,0,(int32_t)c->r[0],1); // 80293D90
  if (crb(c,2)) { goto L_80293DB0; } // 80293D94
  if (!crb(c,0)) { goto L_80293DBC; } // 80293D98
  goto L_80293DE8; // 80293D9C
L_80293DA0:;
  cmps(c,0,(int32_t)c->r[0],5); // 80293DA0
  if (crb(c,2)) { goto L_80293DD4; } // 80293DA4
  if (!crb(c,0)) { goto L_80293DE8; } // 80293DA8
  goto L_80293DC8; // 80293DAC
L_80293DB0:;
  c->r[3]=c->r[3]+0x00000014u; // 80293DB0
  c->lr=0x80293DB8u; f_801DA088(c); // 80293DB4
  goto L_80293DE8; // 80293DB8
L_80293DBC:;
  c->r[3]=c->r[3]+0x0000020Cu; // 80293DBC
  c->lr=0x80293DC4u; f_801D7D6C(c); // 80293DC0
  goto L_80293DE8; // 80293DC4
L_80293DC8:;
  c->r[3]=c->r[3]+0x000004CCu; // 80293DC8
  c->lr=0x80293DD0u; f_801DAC68(c); // 80293DCC
  goto L_80293DE8; // 80293DD0
L_80293DD4:;
  c->r[3]=c->r[3]+0x00000624u; // 80293DD4
  c->lr=0x80293DDCu; f_801D9CD8(c); // 80293DD8
  goto L_80293DE8; // 80293DDC
L_80293DE0:;
  c->r[3]=c->r[3]+0x000006ECu; // 80293DE0
  c->lr=0x80293DE8u; f_801D7E38(c); // 80293DE4
L_80293DE8:;
  c->r[3]=0u+0x00000000u; // 80293DE8
  c->r[4]=0u+0x00000000u; // 80293DEC
  c->lr=0x80293DF4u; f_801D4D3C(c); // 80293DF0
L_80293DF4:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293DF4
  c->r[3]=c->r[29]+0x00000014u; // 80293DF8
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[0]);} // 80293DFC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293E00
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[0]);} // 80293E04
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80293E08
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[0]);} // 80293E0C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293E10
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 80293E14
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293E18
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 80293E1C
  c->lr=0x80293E24u; f_801DA02C(c); // 80293E20
  cmps(c,0,(int32_t)c->r[3],1); // 80293E24
  if (!crb(c,2)) { goto L_80293E48; } // 80293E28
  c->r[3]=0u+0x801E0000u; // 80293E2C
  c->r[4]=c->r[29]+0x00000014u; // 80293E30
  c->r[3]=c->r[3]+0xFFFFA0ACu; // 80293E34
  c->lr=0x80293E3Cu; f_801D4D3C(c); // 80293E38
  c->r[0]=0u+0x00000001u; // 80293E3C
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 80293E40
  goto L_80293E50; // 80293E44
L_80293E48:;
  c->r[0]=0u+0xFFFFFFFFu; // 80293E48
  W32(c->r[31]+0x00000000u,c->r[0]); // 80293E4C
L_80293E50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80293E50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80293E54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80293E58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80293E5C
  c->lr=c->r[0]; // 80293E60
  c->r[1]=c->r[1]+0x00000020u; // 80293E64
  return; // 80293E68
}

// fn_80293E6C
void f_80293E6C(Ctx* __restrict c) {
  trace_call(0x80293E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293E6C
  c->r[0]=c->lr; // 80293E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80293E74
  c->r[0]=0u+0x00000000u; // 80293E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80293E7C
  c->r[31]=c->r[5]|c->r[5]; // 80293E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 80293E84
  c->r[30]=c->r[4]|c->r[4]; // 80293E88
  W32(c->r[1]+0x00000014u,c->r[29]); // 80293E8C
  c->r[29]=c->r[3]|c->r[3]; // 80293E90
  W32(c->r[5]+0x00000000u,c->r[0]); // 80293E94
  c->r[0]=R32(c->r[3]+0x00000A0Cu); // 80293E98
  cmps(c,0,(int32_t)c->r[0],0); // 80293E9C
  if (crb(c,2)) { goto L_80293F14; } // 80293EA0
  cmps(c,0,(int32_t)c->r[0],3); // 80293EA4
  if (crb(c,2)) { goto L_80293F00; } // 80293EA8
  if (!crb(c,0)) { goto L_80293EC0; } // 80293EAC
  cmps(c,0,(int32_t)c->r[0],1); // 80293EB0
  if (crb(c,2)) { goto L_80293ED0; } // 80293EB4
  if (!crb(c,0)) { goto L_80293EDC; } // 80293EB8
  goto L_80293F08; // 80293EBC
L_80293EC0:;
  cmps(c,0,(int32_t)c->r[0],5); // 80293EC0
  if (crb(c,2)) { goto L_80293EF4; } // 80293EC4
  if (!crb(c,0)) { goto L_80293F08; } // 80293EC8
  goto L_80293EE8; // 80293ECC
L_80293ED0:;
  c->r[3]=c->r[3]+0x00000014u; // 80293ED0
  c->lr=0x80293ED8u; f_801DA088(c); // 80293ED4
  goto L_80293F08; // 80293ED8
L_80293EDC:;
  c->r[3]=c->r[3]+0x0000020Cu; // 80293EDC
  c->lr=0x80293EE4u; f_801D7D6C(c); // 80293EE0
  goto L_80293F08; // 80293EE4
L_80293EE8:;
  c->r[3]=c->r[3]+0x000004CCu; // 80293EE8
  c->lr=0x80293EF0u; f_801DAC68(c); // 80293EEC
  goto L_80293F08; // 80293EF0
L_80293EF4:;
  c->r[3]=c->r[3]+0x00000624u; // 80293EF4
  c->lr=0x80293EFCu; f_801D9CD8(c); // 80293EF8
  goto L_80293F08; // 80293EFC
L_80293F00:;
  c->r[3]=c->r[3]+0x000006ECu; // 80293F00
  c->lr=0x80293F08u; f_801D7E38(c); // 80293F04
L_80293F08:;
  c->r[3]=0u+0x00000000u; // 80293F08
  c->r[4]=0u+0x00000000u; // 80293F0C
  c->lr=0x80293F14u; f_801D4D3C(c); // 80293F10
L_80293F14:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F14
  c->r[3]=c->r[29]+0x0000020Cu; // 80293F18
  {uint32_t ea=c->r[29]+0x0000035Cu; WF32(ea,c->f[0]);} // 80293F1C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F20
  {uint32_t ea=c->r[29]+0x00000364u; WF32(ea,c->f[0]);} // 80293F24
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F28
  {uint32_t ea=c->r[29]+0x00000360u; WF32(ea,c->f[0]);} // 80293F2C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F30
  {uint32_t ea=c->r[29]+0x00000354u; WF32(ea,c->f[0]);} // 80293F34
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F38
  {uint32_t ea=c->r[29]+0x00000358u; WF32(ea,c->f[0]);} // 80293F3C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80293F40
  {uint32_t ea=c->r[29]+0x00000368u; WF32(ea,c->f[0]);} // 80293F44
  c->lr=0x80293F4Cu; f_801D7D08(c); // 80293F48
  cmps(c,0,(int32_t)c->r[3],1); // 80293F4C
  if (!crb(c,2)) { goto L_80293F70; } // 80293F50
  c->r[3]=0u+0x801D0000u; // 80293F54
  c->r[4]=c->r[29]+0x0000020Cu; // 80293F58
  c->r[3]=c->r[3]+0x00007D90u; // 80293F5C
  c->lr=0x80293F64u; f_801D4D3C(c); // 80293F60
  c->r[0]=0u+0x00000002u; // 80293F64
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 80293F68
  goto L_80293F78; // 80293F6C
L_80293F70:;
  c->r[0]=0u+0xFFFFFFFFu; // 80293F70
  W32(c->r[31]+0x00000000u,c->r[0]); // 80293F74
L_80293F78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80293F78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80293F7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80293F80
  c->r[29]=R32(c->r[1]+0x00000014u); // 80293F84
  c->lr=c->r[0]; // 80293F88
  c->r[1]=c->r[1]+0x00000020u; // 80293F8C
  return; // 80293F90
}

// fn_80293F94
void f_80293F94(Ctx* __restrict c) {
  trace_call(0x80293F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80293F94
  c->r[0]=c->lr; // 80293F98
  W32(c->r[1]+0x00000024u,c->r[0]); // 80293F9C
  c->r[0]=0u+0x00000000u; // 80293FA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80293FA4
  c->r[31]=c->r[5]|c->r[5]; // 80293FA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80293FAC
  c->r[30]=c->r[4]|c->r[4]; // 80293FB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80293FB4
  c->r[29]=c->r[3]|c->r[3]; // 80293FB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80293FBC
  c->r[0]=R32(c->r[3]+0x00000A0Cu); // 80293FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80293FC4
  if (crb(c,2)) { goto L_8029403C; } // 80293FC8
  cmps(c,0,(int32_t)c->r[0],3); // 80293FCC
  if (crb(c,2)) { goto L_80294028; } // 80293FD0
  if (!crb(c,0)) { goto L_80293FE8; } // 80293FD4
  cmps(c,0,(int32_t)c->r[0],1); // 80293FD8
  if (crb(c,2)) { goto L_80293FF8; } // 80293FDC
  if (!crb(c,0)) { goto L_80294004; } // 80293FE0
  goto L_80294030; // 80293FE4
L_80293FE8:;
  cmps(c,0,(int32_t)c->r[0],5); // 80293FE8
  if (crb(c,2)) { goto L_8029401C; } // 80293FEC
  if (!crb(c,0)) { goto L_80294030; } // 80293FF0
  goto L_80294010; // 80293FF4
L_80293FF8:;
  c->r[3]=c->r[3]+0x00000014u; // 80293FF8
  c->lr=0x80294000u; f_801DA088(c); // 80293FFC
  goto L_80294030; // 80294000
L_80294004:;
  c->r[3]=c->r[3]+0x0000020Cu; // 80294004
  c->lr=0x8029400Cu; f_801D7D6C(c); // 80294008
  goto L_80294030; // 8029400C
L_80294010:;
  c->r[3]=c->r[3]+0x000004CCu; // 80294010
  c->lr=0x80294018u; f_801DAC68(c); // 80294014
  goto L_80294030; // 80294018
L_8029401C:;
  c->r[3]=c->r[3]+0x00000624u; // 8029401C
  c->lr=0x80294024u; f_801D9CD8(c); // 80294020
  goto L_80294030; // 80294024
L_80294028:;
  c->r[3]=c->r[3]+0x000006ECu; // 80294028
  c->lr=0x80294030u; f_801D7E38(c); // 8029402C
L_80294030:;
  c->r[3]=0u+0x00000000u; // 80294030
  c->r[4]=0u+0x00000000u; // 80294034
  c->lr=0x8029403Cu; f_801D4D3C(c); // 80294038
L_8029403C:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029403C
  c->r[3]=c->r[29]+0x000006ECu; // 80294040
  {uint32_t ea=c->r[29]+0x0000086Cu; WF32(ea,c->f[0]);} // 80294044
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294048
  {uint32_t ea=c->r[29]+0x00000874u; WF32(ea,c->f[0]);} // 8029404C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80294050
  {uint32_t ea=c->r[29]+0x00000870u; WF32(ea,c->f[0]);} // 80294054
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294058
  {uint32_t ea=c->r[29]+0x00000864u; WF32(ea,c->f[0]);} // 8029405C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294060
  {uint32_t ea=c->r[29]+0x00000868u; WF32(ea,c->f[0]);} // 80294064
  c->lr=0x8029406Cu; f_801D7D94(c); // 80294068
  cmps(c,0,(int32_t)c->r[3],1); // 8029406C
  if (!crb(c,2)) { goto L_80294090; } // 80294070
  c->r[3]=0u+0x801D0000u; // 80294074
  c->r[4]=c->r[29]+0x000006ECu; // 80294078
  c->r[3]=c->r[3]+0x00007E5Cu; // 8029407C
  c->lr=0x80294084u; f_801D4D3C(c); // 80294080
  c->r[0]=0u+0x00000003u; // 80294084
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 80294088
  goto L_80294098; // 8029408C
L_80294090:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294090
  W32(c->r[31]+0x00000000u,c->r[0]); // 80294094
L_80294098:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029409C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802940A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802940A4
  c->lr=c->r[0]; // 802940A8
  c->r[1]=c->r[1]+0x00000020u; // 802940AC
  return; // 802940B0
}

// fn_802940B4
void f_802940B4(Ctx* __restrict c) {
  trace_call(0x802940B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802940B4
  c->r[0]=c->lr; // 802940B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802940BC
  c->r[0]=0u+0x00000000u; // 802940C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802940C4
  c->r[31]=c->r[5]|c->r[5]; // 802940C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802940CC
  c->r[30]=c->r[4]|c->r[4]; // 802940D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802940D4
  c->r[29]=c->r[3]|c->r[3]; // 802940D8
  W32(c->r[5]+0x00000000u,c->r[0]); // 802940DC
  c->r[0]=R32(c->r[3]+0x00000A0Cu); // 802940E0
  cmps(c,0,(int32_t)c->r[0],0); // 802940E4
  if (crb(c,2)) { goto L_8029415C; } // 802940E8
  cmps(c,0,(int32_t)c->r[0],3); // 802940EC
  if (crb(c,2)) { goto L_80294148; } // 802940F0
  if (!crb(c,0)) { goto L_80294108; } // 802940F4
  cmps(c,0,(int32_t)c->r[0],1); // 802940F8
  if (crb(c,2)) { goto L_80294118; } // 802940FC
  if (!crb(c,0)) { goto L_80294124; } // 80294100
  goto L_80294150; // 80294104
L_80294108:;
  cmps(c,0,(int32_t)c->r[0],5); // 80294108
  if (crb(c,2)) { goto L_8029413C; } // 8029410C
  if (!crb(c,0)) { goto L_80294150; } // 80294110
  goto L_80294130; // 80294114
L_80294118:;
  c->r[3]=c->r[3]+0x00000014u; // 80294118
  c->lr=0x80294120u; f_801DA088(c); // 8029411C
  goto L_80294150; // 80294120
L_80294124:;
  c->r[3]=c->r[3]+0x0000020Cu; // 80294124
  c->lr=0x8029412Cu; f_801D7D6C(c); // 80294128
  goto L_80294150; // 8029412C
L_80294130:;
  c->r[3]=c->r[3]+0x000004CCu; // 80294130
  c->lr=0x80294138u; f_801DAC68(c); // 80294134
  goto L_80294150; // 80294138
L_8029413C:;
  c->r[3]=c->r[3]+0x00000624u; // 8029413C
  c->lr=0x80294144u; f_801D9CD8(c); // 80294140
  goto L_80294150; // 80294144
L_80294148:;
  c->r[3]=c->r[3]+0x000006ECu; // 80294148
  c->lr=0x80294150u; f_801D7E38(c); // 8029414C
L_80294150:;
  c->r[3]=0u+0x00000000u; // 80294150
  c->r[4]=0u+0x00000000u; // 80294154
  c->lr=0x8029415Cu; f_801D4D3C(c); // 80294158
L_8029415C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8029415C
  c->r[3]=c->r[29]+0x000004CCu; // 80294160
  W32(c->r[29]+0x0000056Cu,c->r[0]); // 80294164
  c->r[0]=R32(c->r[30]+0x00000004u); // 80294168
  W32(c->r[29]+0x00000570u,c->r[0]); // 8029416C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80294170
  W32(c->r[29]+0x00000574u,c->r[0]); // 80294174
  c->lr=0x8029417Cu; f_801DABCC(c); // 80294178
  cmps(c,0,(int32_t)c->r[3],1); // 8029417C
  if (!crb(c,2)) { goto L_802941A0; } // 80294180
  c->r[3]=0u+0x801E0000u; // 80294184
  c->r[4]=c->r[29]+0x000004CCu; // 80294188
  c->r[3]=c->r[3]+0xFFFFAC8Cu; // 8029418C
  c->lr=0x80294194u; f_801D4D3C(c); // 80294190
  c->r[0]=0u+0x00000004u; // 80294194
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 80294198
  goto L_802941A8; // 8029419C
L_802941A0:;
  c->r[0]=0u+0xFFFFFFFFu; // 802941A0
  W32(c->r[31]+0x00000000u,c->r[0]); // 802941A4
L_802941A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802941A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802941AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802941B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802941B4
  c->lr=c->r[0]; // 802941B8
  c->r[1]=c->r[1]+0x00000020u; // 802941BC
  return; // 802941C0
}

// fn_802941C4
void f_802941C4(Ctx* __restrict c) {
  trace_call(0x802941C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802941C4
  c->r[0]=c->lr; // 802941C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802941CC
  c->r[0]=0u+0x00000000u; // 802941D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802941D4
  c->r[31]=c->r[5]|c->r[5]; // 802941D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802941DC
  c->r[30]=c->r[4]|c->r[4]; // 802941E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802941E4
  c->r[29]=c->r[3]|c->r[3]; // 802941E8
  W32(c->r[5]+0x00000000u,c->r[0]); // 802941EC
  c->r[0]=R32(c->r[3]+0x00000A0Cu); // 802941F0
  cmps(c,0,(int32_t)c->r[0],0); // 802941F4
  if (crb(c,2)) { goto L_8029426C; } // 802941F8
  cmps(c,0,(int32_t)c->r[0],3); // 802941FC
  if (crb(c,2)) { goto L_80294258; } // 80294200
  if (!crb(c,0)) { goto L_80294218; } // 80294204
  cmps(c,0,(int32_t)c->r[0],1); // 80294208
  if (crb(c,2)) { goto L_80294228; } // 8029420C
  if (!crb(c,0)) { goto L_80294234; } // 80294210
  goto L_80294260; // 80294214
L_80294218:;
  cmps(c,0,(int32_t)c->r[0],5); // 80294218
  if (crb(c,2)) { goto L_8029424C; } // 8029421C
  if (!crb(c,0)) { goto L_80294260; } // 80294220
  goto L_80294240; // 80294224
L_80294228:;
  c->r[3]=c->r[3]+0x00000014u; // 80294228
  c->lr=0x80294230u; f_801DA088(c); // 8029422C
  goto L_80294260; // 80294230
L_80294234:;
  c->r[3]=c->r[3]+0x0000020Cu; // 80294234
  c->lr=0x8029423Cu; f_801D7D6C(c); // 80294238
  goto L_80294260; // 8029423C
L_80294240:;
  c->r[3]=c->r[3]+0x000004CCu; // 80294240
  c->lr=0x80294248u; f_801DAC68(c); // 80294244
  goto L_80294260; // 80294248
L_8029424C:;
  c->r[3]=c->r[3]+0x00000624u; // 8029424C
  c->lr=0x80294254u; f_801D9CD8(c); // 80294250
  goto L_80294260; // 80294254
L_80294258:;
  c->r[3]=c->r[3]+0x000006ECu; // 80294258
  c->lr=0x80294260u; f_801D7E38(c); // 8029425C
L_80294260:;
  c->r[3]=0u+0x00000000u; // 80294260
  c->r[4]=0u+0x00000000u; // 80294264
  c->lr=0x8029426Cu; f_801D4D3C(c); // 80294268
L_8029426C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8029426C
  c->r[3]=c->r[29]+0x00000624u; // 80294270
  W32(c->r[29]+0x00000664u,c->r[0]); // 80294274
  c->r[0]=R32(c->r[30]+0x00000004u); // 80294278
  W32(c->r[29]+0x00000668u,c->r[0]); // 8029427C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80294280
  W32(c->r[29]+0x0000066Cu,c->r[0]); // 80294284
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80294288
  W32(c->r[29]+0x00000670u,c->r[0]); // 8029428C
  c->r[0]=R32(c->r[30]+0x00000010u); // 80294290
  W32(c->r[29]+0x00000674u,c->r[0]); // 80294294
  c->r[0]=R32(c->r[30]+0x00000014u); // 80294298
  W32(c->r[29]+0x00000678u,c->r[0]); // 8029429C
  c->r[0]=R32(c->r[30]+0x00000018u); // 802942A0
  W32(c->r[29]+0x0000067Cu,c->r[0]); // 802942A4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802942A8
  W32(c->r[29]+0x00000680u,c->r[0]); // 802942AC
  c->r[0]=R32(c->r[30]+0x00000020u); // 802942B0
  W32(c->r[29]+0x00000684u,c->r[0]); // 802942B4
  c->lr=0x802942BCu; f_801D9AD8(c); // 802942B8
  cmps(c,0,(int32_t)c->r[3],1); // 802942BC
  if (!crb(c,2)) { goto L_802942E0; } // 802942C0
  c->r[3]=0u+0x801E0000u; // 802942C4
  c->r[4]=c->r[29]+0x00000624u; // 802942C8
  c->r[3]=c->r[3]+0xFFFF9D68u; // 802942CC
  c->lr=0x802942D4u; f_801D4D3C(c); // 802942D0
  c->r[0]=0u+0x00000005u; // 802942D4
  W32(c->r[29]+0x00000A0Cu,c->r[0]); // 802942D8
  goto L_802942E8; // 802942DC
L_802942E0:;
  c->r[0]=0u+0xFFFFFFFFu; // 802942E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 802942E4
L_802942E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802942E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802942EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802942F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802942F4
  c->lr=c->r[0]; // 802942F8
  c->r[1]=c->r[1]+0x00000020u; // 802942FC
  return; // 80294300
}

// fn_80294304
void f_80294304(Ctx* __restrict c) {
  trace_call(0x80294304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80294304
  c->r[0]=c->lr; // 80294308
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029430C
  c->r[0]=0u+0x00000000u; // 80294310
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80294314
  c->r[31]=c->r[5]|c->r[5]; // 80294318
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029431C
  c->r[30]=c->r[4]|c->r[4]; // 80294320
  W32(c->r[1]+0x00000014u,c->r[29]); // 80294324
  c->r[29]=c->r[3]|c->r[3]; // 80294328
  W32(c->r[5]+0x00000000u,c->r[0]); // 8029432C
  c->r[0]=R32(c->r[3]+0x00000A10u); // 80294330
  cmps(c,0,(int32_t)c->r[0],0); // 80294334
  if (crb(c,2)) { goto L_802943AC; } // 80294338
  cmps(c,0,(int32_t)c->r[0],3); // 8029433C
  if (crb(c,2)) { goto L_80294398; } // 80294340
  if (!crb(c,0)) { goto L_80294358; } // 80294344
  cmps(c,0,(int32_t)c->r[0],1); // 80294348
  if (crb(c,2)) { goto L_80294368; } // 8029434C
  if (!crb(c,0)) { goto L_80294374; } // 80294350
  goto L_802943A0; // 80294354
L_80294358:;
  cmps(c,0,(int32_t)c->r[0],5); // 80294358
  if (crb(c,2)) { goto L_8029438C; } // 8029435C
  if (!crb(c,0)) { goto L_802943A0; } // 80294360
  goto L_80294380; // 80294364
L_80294368:;
  c->r[3]=c->r[3]+0x00000110u; // 80294368
  c->lr=0x80294370u; f_801DA088(c); // 8029436C
  goto L_802943A0; // 80294370
L_80294374:;
  c->r[3]=c->r[3]+0x0000036Cu; // 80294374
  c->lr=0x8029437Cu; f_801D7D6C(c); // 80294378
  goto L_802943A0; // 8029437C
L_80294380:;
  c->r[3]=c->r[3]+0x00000578u; // 80294380
  c->lr=0x80294388u; f_801DAC68(c); // 80294384
  goto L_802943A0; // 80294388
L_8029438C:;
  c->r[3]=c->r[3]+0x00000688u; // 8029438C
  c->lr=0x80294394u; f_801D9CD8(c); // 80294390
  goto L_802943A0; // 80294394
L_80294398:;
  c->r[3]=c->r[3]+0x0000087Cu; // 80294398
  c->lr=0x802943A0u; f_801D7E38(c); // 8029439C
L_802943A0:;
  c->r[3]=0u+0x00000000u; // 802943A0
  c->r[4]=0u+0x00000000u; // 802943A4
  c->lr=0x802943ACu; f_801D4DA0(c); // 802943A8
L_802943AC:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802943AC
  c->r[3]=c->r[29]+0x00000110u; // 802943B0
  {uint32_t ea=c->r[29]+0x00000200u; WF32(ea,c->f[0]);} // 802943B4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802943B8
  {uint32_t ea=c->r[29]+0x00000208u; WF32(ea,c->f[0]);} // 802943BC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802943C0
  {uint32_t ea=c->r[29]+0x00000204u; WF32(ea,c->f[0]);} // 802943C4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802943C8
  {uint32_t ea=c->r[29]+0x000001F8u; WF32(ea,c->f[0]);} // 802943CC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802943D0
  {uint32_t ea=c->r[29]+0x000001FCu; WF32(ea,c->f[0]);} // 802943D4
  c->lr=0x802943DCu; f_801DA02C(c); // 802943D8
  cmps(c,0,(int32_t)c->r[3],1); // 802943DC
  if (!crb(c,2)) { goto L_80294400; } // 802943E0
  c->r[3]=0u+0x801E0000u; // 802943E4
  c->r[4]=c->r[29]+0x00000110u; // 802943E8
  c->r[3]=c->r[3]+0xFFFFA0ACu; // 802943EC
  c->lr=0x802943F4u; f_801D4DA0(c); // 802943F0
  c->r[0]=0u+0x00000001u; // 802943F4
  W32(c->r[29]+0x00000A10u,c->r[0]); // 802943F8
  goto L_80294408; // 802943FC
L_80294400:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294400
  W32(c->r[31]+0x00000000u,c->r[0]); // 80294404
L_80294408:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294408
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029440C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80294410
  c->r[29]=R32(c->r[1]+0x00000014u); // 80294414
  c->lr=c->r[0]; // 80294418
  c->r[1]=c->r[1]+0x00000020u; // 8029441C
  return; // 80294420
}

// fn_80294424
void f_80294424(Ctx* __restrict c) {
  trace_call(0x80294424u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80294424
  c->r[0]=c->lr; // 80294428
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029442C
  c->r[0]=0u+0x00000000u; // 80294430
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80294434
  c->r[31]=c->r[5]|c->r[5]; // 80294438
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029443C
  c->r[30]=c->r[4]|c->r[4]; // 80294440
  W32(c->r[1]+0x00000014u,c->r[29]); // 80294444
  c->r[29]=c->r[3]|c->r[3]; // 80294448
  W32(c->r[5]+0x00000000u,c->r[0]); // 8029444C
  c->r[0]=R32(c->r[3]+0x00000A10u); // 80294450
  cmps(c,0,(int32_t)c->r[0],0); // 80294454
  if (crb(c,2)) { goto L_802944CC; } // 80294458
  cmps(c,0,(int32_t)c->r[0],3); // 8029445C
  if (crb(c,2)) { goto L_802944B8; } // 80294460
  if (!crb(c,0)) { goto L_80294478; } // 80294464
  cmps(c,0,(int32_t)c->r[0],1); // 80294468
  if (crb(c,2)) { goto L_80294488; } // 8029446C
  if (!crb(c,0)) { goto L_80294494; } // 80294470
  goto L_802944C0; // 80294474
L_80294478:;
  cmps(c,0,(int32_t)c->r[0],5); // 80294478
  if (crb(c,2)) { goto L_802944AC; } // 8029447C
  if (!crb(c,0)) { goto L_802944C0; } // 80294480
  goto L_802944A0; // 80294484
L_80294488:;
  c->r[3]=c->r[3]+0x00000110u; // 80294488
  c->lr=0x80294490u; f_801DA088(c); // 8029448C
  goto L_802944C0; // 80294490
L_80294494:;
  c->r[3]=c->r[3]+0x0000036Cu; // 80294494
  c->lr=0x8029449Cu; f_801D7D6C(c); // 80294498
  goto L_802944C0; // 8029449C
L_802944A0:;
  c->r[3]=c->r[3]+0x00000578u; // 802944A0
  c->lr=0x802944A8u; f_801DAC68(c); // 802944A4
  goto L_802944C0; // 802944A8
L_802944AC:;
  c->r[3]=c->r[3]+0x00000688u; // 802944AC
  c->lr=0x802944B4u; f_801D9CD8(c); // 802944B0
  goto L_802944C0; // 802944B4
L_802944B8:;
  c->r[3]=c->r[3]+0x0000087Cu; // 802944B8
  c->lr=0x802944C0u; f_801D7E38(c); // 802944BC
L_802944C0:;
  c->r[3]=0u+0x00000000u; // 802944C0
  c->r[4]=0u+0x00000000u; // 802944C4
  c->lr=0x802944CCu; f_801D4DA0(c); // 802944C8
L_802944CC:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802944CC
  c->r[3]=c->r[29]+0x0000036Cu; // 802944D0
  {uint32_t ea=c->r[29]+0x000004BCu; WF32(ea,c->f[0]);} // 802944D4
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802944D8
  {uint32_t ea=c->r[29]+0x000004C4u; WF32(ea,c->f[0]);} // 802944DC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802944E0
  {uint32_t ea=c->r[29]+0x000004C0u; WF32(ea,c->f[0]);} // 802944E4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802944E8
  {uint32_t ea=c->r[29]+0x000004B4u; WF32(ea,c->f[0]);} // 802944EC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802944F0
  {uint32_t ea=c->r[29]+0x000004B8u; WF32(ea,c->f[0]);} // 802944F4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802944F8
  {uint32_t ea=c->r[29]+0x000004C8u; WF32(ea,c->f[0]);} // 802944FC
  c->lr=0x80294504u; f_801D7D08(c); // 80294500
  cmps(c,0,(int32_t)c->r[3],1); // 80294504
  if (!crb(c,2)) { goto L_80294528; } // 80294508
  c->r[3]=0u+0x801D0000u; // 8029450C
  c->r[4]=c->r[29]+0x0000036Cu; // 80294510
  c->r[3]=c->r[3]+0x00007D90u; // 80294514
  c->lr=0x8029451Cu; f_801D4DA0(c); // 80294518
  c->r[0]=0u+0x00000002u; // 8029451C
  W32(c->r[29]+0x00000A10u,c->r[0]); // 80294520
  goto L_80294530; // 80294524
L_80294528:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294528
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029452C
L_80294530:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294530
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80294534
  c->r[30]=R32(c->r[1]+0x00000018u); // 80294538
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029453C
  c->lr=c->r[0]; // 80294540
  c->r[1]=c->r[1]+0x00000020u; // 80294544
  return; // 80294548
}

// fn_8029454C
void f_8029454C(Ctx* __restrict c) {
  trace_call(0x8029454Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029454C
  c->r[0]=c->lr; // 80294550
  W32(c->r[1]+0x00000024u,c->r[0]); // 80294554
  c->r[0]=0u+0x00000000u; // 80294558
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029455C
  c->r[31]=c->r[5]|c->r[5]; // 80294560
  W32(c->r[1]+0x00000018u,c->r[30]); // 80294564
  c->r[30]=c->r[4]|c->r[4]; // 80294568
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029456C
  c->r[29]=c->r[3]|c->r[3]; // 80294570
  W32(c->r[5]+0x00000000u,c->r[0]); // 80294574
  c->r[0]=R32(c->r[3]+0x00000A10u); // 80294578
  cmps(c,0,(int32_t)c->r[0],0); // 8029457C
  if (crb(c,2)) { goto L_802945F4; } // 80294580
  cmps(c,0,(int32_t)c->r[0],3); // 80294584
  if (crb(c,2)) { goto L_802945E0; } // 80294588
  if (!crb(c,0)) { goto L_802945A0; } // 8029458C
  cmps(c,0,(int32_t)c->r[0],1); // 80294590
  if (crb(c,2)) { goto L_802945B0; } // 80294594
  if (!crb(c,0)) { goto L_802945BC; } // 80294598
  goto L_802945E8; // 8029459C
L_802945A0:;
  cmps(c,0,(int32_t)c->r[0],5); // 802945A0
  if (crb(c,2)) { goto L_802945D4; } // 802945A4
  if (!crb(c,0)) { goto L_802945E8; } // 802945A8
  goto L_802945C8; // 802945AC
L_802945B0:;
  c->r[3]=c->r[3]+0x00000110u; // 802945B0
  c->lr=0x802945B8u; f_801DA088(c); // 802945B4
  goto L_802945E8; // 802945B8
L_802945BC:;
  c->r[3]=c->r[3]+0x0000036Cu; // 802945BC
  c->lr=0x802945C4u; f_801D7D6C(c); // 802945C0
  goto L_802945E8; // 802945C4
L_802945C8:;
  c->r[3]=c->r[3]+0x00000578u; // 802945C8
  c->lr=0x802945D0u; f_801DAC68(c); // 802945CC
  goto L_802945E8; // 802945D0
L_802945D4:;
  c->r[3]=c->r[3]+0x00000688u; // 802945D4
  c->lr=0x802945DCu; f_801D9CD8(c); // 802945D8
  goto L_802945E8; // 802945DC
L_802945E0:;
  c->r[3]=c->r[3]+0x0000087Cu; // 802945E0
  c->lr=0x802945E8u; f_801D7E38(c); // 802945E4
L_802945E8:;
  c->r[3]=0u+0x00000000u; // 802945E8
  c->r[4]=0u+0x00000000u; // 802945EC
  c->lr=0x802945F4u; f_801D4DA0(c); // 802945F0
L_802945F4:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802945F4
  c->r[3]=c->r[29]+0x0000087Cu; // 802945F8
  {uint32_t ea=c->r[29]+0x000009FCu; WF32(ea,c->f[0]);} // 802945FC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294600
  {uint32_t ea=c->r[29]+0x00000A04u; WF32(ea,c->f[0]);} // 80294604
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80294608
  {uint32_t ea=c->r[29]+0x00000A00u; WF32(ea,c->f[0]);} // 8029460C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294610
  {uint32_t ea=c->r[29]+0x000009F4u; WF32(ea,c->f[0]);} // 80294614
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80294618
  {uint32_t ea=c->r[29]+0x000009F8u; WF32(ea,c->f[0]);} // 8029461C
  c->lr=0x80294624u; f_801D7D94(c); // 80294620
  cmps(c,0,(int32_t)c->r[3],1); // 80294624
  if (!crb(c,2)) { goto L_80294648; } // 80294628
  c->r[3]=0u+0x801D0000u; // 8029462C
  c->r[4]=c->r[29]+0x0000087Cu; // 80294630
  c->r[3]=c->r[3]+0x00007E5Cu; // 80294634
  c->lr=0x8029463Cu; f_801D4DA0(c); // 80294638
  c->r[0]=0u+0x00000003u; // 8029463C
  W32(c->r[29]+0x00000A10u,c->r[0]); // 80294640
  goto L_80294650; // 80294644
L_80294648:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294648
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029464C
L_80294650:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294650
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80294654
  c->r[30]=R32(c->r[1]+0x00000018u); // 80294658
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029465C
  c->lr=c->r[0]; // 80294660
  c->r[1]=c->r[1]+0x00000020u; // 80294664
  return; // 80294668
}

// fn_8029466C
void f_8029466C(Ctx* __restrict c) {
  trace_call(0x8029466Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029466C
  c->r[0]=c->lr; // 80294670
  W32(c->r[1]+0x00000024u,c->r[0]); // 80294674
  c->r[0]=0u+0x00000000u; // 80294678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029467C
  c->r[31]=c->r[5]|c->r[5]; // 80294680
  W32(c->r[1]+0x00000018u,c->r[30]); // 80294684
  c->r[30]=c->r[4]|c->r[4]; // 80294688
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029468C
  c->r[29]=c->r[3]|c->r[3]; // 80294690
  W32(c->r[5]+0x00000000u,c->r[0]); // 80294694
  c->r[0]=R32(c->r[3]+0x00000A10u); // 80294698
  cmps(c,0,(int32_t)c->r[0],0); // 8029469C
  if (crb(c,2)) { goto L_80294714; } // 802946A0
  cmps(c,0,(int32_t)c->r[0],3); // 802946A4
  if (crb(c,2)) { goto L_80294700; } // 802946A8
  if (!crb(c,0)) { goto L_802946C0; } // 802946AC
  cmps(c,0,(int32_t)c->r[0],1); // 802946B0
  if (crb(c,2)) { goto L_802946D0; } // 802946B4
  if (!crb(c,0)) { goto L_802946DC; } // 802946B8
  goto L_80294708; // 802946BC
L_802946C0:;
  cmps(c,0,(int32_t)c->r[0],5); // 802946C0
  if (crb(c,2)) { goto L_802946F4; } // 802946C4
  if (!crb(c,0)) { goto L_80294708; } // 802946C8
  goto L_802946E8; // 802946CC
L_802946D0:;
  c->r[3]=c->r[3]+0x00000110u; // 802946D0
  c->lr=0x802946D8u; f_801DA088(c); // 802946D4
  goto L_80294708; // 802946D8
L_802946DC:;
  c->r[3]=c->r[3]+0x0000036Cu; // 802946DC
  c->lr=0x802946E4u; f_801D7D6C(c); // 802946E0
  goto L_80294708; // 802946E4
L_802946E8:;
  c->r[3]=c->r[3]+0x00000578u; // 802946E8
  c->lr=0x802946F0u; f_801DAC68(c); // 802946EC
  goto L_80294708; // 802946F0
L_802946F4:;
  c->r[3]=c->r[3]+0x00000688u; // 802946F4
  c->lr=0x802946FCu; f_801D9CD8(c); // 802946F8
  goto L_80294708; // 802946FC
L_80294700:;
  c->r[3]=c->r[3]+0x0000087Cu; // 80294700
  c->lr=0x80294708u; f_801D7E38(c); // 80294704
L_80294708:;
  c->r[3]=0u+0x00000000u; // 80294708
  c->r[4]=0u+0x00000000u; // 8029470C
  c->lr=0x80294714u; f_801D4DA0(c); // 80294710
L_80294714:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80294714
  c->r[3]=c->r[29]+0x00000578u; // 80294718
  W32(c->r[29]+0x00000618u,c->r[0]); // 8029471C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80294720
  W32(c->r[29]+0x0000061Cu,c->r[0]); // 80294724
  c->r[0]=R32(c->r[30]+0x00000008u); // 80294728
  W32(c->r[29]+0x00000620u,c->r[0]); // 8029472C
  c->lr=0x80294734u; f_801DABCC(c); // 80294730
  cmps(c,0,(int32_t)c->r[3],1); // 80294734
  if (!crb(c,2)) { goto L_80294758; } // 80294738
  c->r[3]=0u+0x801E0000u; // 8029473C
  c->r[4]=c->r[29]+0x00000578u; // 80294740
  c->r[3]=c->r[3]+0xFFFFAC8Cu; // 80294744
  c->lr=0x8029474Cu; f_801D4DA0(c); // 80294748
  c->r[0]=0u+0x00000004u; // 8029474C
  W32(c->r[29]+0x00000A10u,c->r[0]); // 80294750
  goto L_80294760; // 80294754
L_80294758:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294758
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029475C
L_80294760:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80294764
  c->r[30]=R32(c->r[1]+0x00000018u); // 80294768
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029476C
  c->lr=c->r[0]; // 80294770
  c->r[1]=c->r[1]+0x00000020u; // 80294774
  return; // 80294778
}

// fn_8029477C
void f_8029477C(Ctx* __restrict c) {
  trace_call(0x8029477Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029477C
  c->r[0]=c->lr; // 80294780
  W32(c->r[1]+0x00000024u,c->r[0]); // 80294784
  c->r[0]=0u+0x00000000u; // 80294788
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029478C
  c->r[31]=c->r[5]|c->r[5]; // 80294790
  W32(c->r[1]+0x00000018u,c->r[30]); // 80294794
  c->r[30]=c->r[4]|c->r[4]; // 80294798
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029479C
  c->r[29]=c->r[3]|c->r[3]; // 802947A0
  W32(c->r[5]+0x00000000u,c->r[0]); // 802947A4
  c->r[0]=R32(c->r[3]+0x00000A10u); // 802947A8
  cmps(c,0,(int32_t)c->r[0],0); // 802947AC
  if (crb(c,2)) { goto L_80294824; } // 802947B0
  cmps(c,0,(int32_t)c->r[0],3); // 802947B4
  if (crb(c,2)) { goto L_80294810; } // 802947B8
  if (!crb(c,0)) { goto L_802947D0; } // 802947BC
  cmps(c,0,(int32_t)c->r[0],1); // 802947C0
  if (crb(c,2)) { goto L_802947E0; } // 802947C4
  if (!crb(c,0)) { goto L_802947EC; } // 802947C8
  goto L_80294818; // 802947CC
L_802947D0:;
  cmps(c,0,(int32_t)c->r[0],5); // 802947D0
  if (crb(c,2)) { goto L_80294804; } // 802947D4
  if (!crb(c,0)) { goto L_80294818; } // 802947D8
  goto L_802947F8; // 802947DC
L_802947E0:;
  c->r[3]=c->r[3]+0x00000110u; // 802947E0
  c->lr=0x802947E8u; f_801DA088(c); // 802947E4
  goto L_80294818; // 802947E8
L_802947EC:;
  c->r[3]=c->r[3]+0x0000036Cu; // 802947EC
  c->lr=0x802947F4u; f_801D7D6C(c); // 802947F0
  goto L_80294818; // 802947F4
L_802947F8:;
  c->r[3]=c->r[3]+0x00000578u; // 802947F8
  c->lr=0x80294800u; f_801DAC68(c); // 802947FC
  goto L_80294818; // 80294800
L_80294804:;
  c->r[3]=c->r[3]+0x00000688u; // 80294804
  c->lr=0x8029480Cu; f_801D9CD8(c); // 80294808
  goto L_80294818; // 8029480C
L_80294810:;
  c->r[3]=c->r[3]+0x0000087Cu; // 80294810
  c->lr=0x80294818u; f_801D7E38(c); // 80294814
L_80294818:;
  c->r[3]=0u+0x00000000u; // 80294818
  c->r[4]=0u+0x00000000u; // 8029481C
  c->lr=0x80294824u; f_801D4DA0(c); // 80294820
L_80294824:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80294824
  c->r[3]=c->r[29]+0x00000688u; // 80294828
  W32(c->r[29]+0x000006C8u,c->r[0]); // 8029482C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80294830
  W32(c->r[29]+0x000006CCu,c->r[0]); // 80294834
  c->r[0]=R32(c->r[30]+0x00000008u); // 80294838
  W32(c->r[29]+0x000006D0u,c->r[0]); // 8029483C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80294840
  W32(c->r[29]+0x000006D4u,c->r[0]); // 80294844
  c->r[0]=R32(c->r[30]+0x00000010u); // 80294848
  W32(c->r[29]+0x000006D8u,c->r[0]); // 8029484C
  c->r[0]=R32(c->r[30]+0x00000014u); // 80294850
  W32(c->r[29]+0x000006DCu,c->r[0]); // 80294854
  c->r[0]=R32(c->r[30]+0x00000018u); // 80294858
  W32(c->r[29]+0x000006E0u,c->r[0]); // 8029485C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80294860
  W32(c->r[29]+0x000006E4u,c->r[0]); // 80294864
  c->r[0]=R32(c->r[30]+0x00000020u); // 80294868
  W32(c->r[29]+0x000006E8u,c->r[0]); // 8029486C
  c->lr=0x80294874u; f_801D9AD8(c); // 80294870
  cmps(c,0,(int32_t)c->r[3],1); // 80294874
  if (!crb(c,2)) { goto L_80294898; } // 80294878
  c->r[3]=0u+0x801E0000u; // 8029487C
  c->r[4]=c->r[29]+0x00000688u; // 80294880
  c->r[3]=c->r[3]+0xFFFF9D68u; // 80294884
  c->lr=0x8029488Cu; f_801D4DA0(c); // 80294888
  c->r[0]=0u+0x00000005u; // 8029488C
  W32(c->r[29]+0x00000A10u,c->r[0]); // 80294890
  goto L_802948A0; // 80294894
L_80294898:;
  c->r[0]=0u+0xFFFFFFFFu; // 80294898
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029489C
L_802948A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802948A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802948A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802948A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802948AC
  c->lr=c->r[0]; // 802948B0
  c->r[1]=c->r[1]+0x00000020u; // 802948B4
  return; // 802948B8
}

// fn_802948BC
void f_802948BC(Ctx* __restrict c) {
  trace_call(0x802948BCu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802948BC
  f_8029C3A4(c); return; // 802948C0
}

// fn_802948C4
void f_802948C4(Ctx* __restrict c) {
  trace_call(0x802948C4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802948C4
  f_8029C390(c); return; // 802948C8
}

// fn_802948CC
void f_802948CC(Ctx* __restrict c) {
  trace_call(0x802948CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802948CC
  c->r[0]=c->lr; // 802948D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802948D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802948D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802948DC
  c->r[30]=R32(c->r[3]+0x00000014u); // 802948E0
  c->lr=0x802948E8u; f_801DCF14(c); // 802948E4
  c->r[3]=c->r[30]+0x00000018u; // 802948E8
  c->lr=0x802948F0u; f_801C4FA8(c); // 802948EC
  c->r[31]=0u+0x00000000u; // 802948F0
  W32(c->r[30]+0x00000010u,c->r[31]); // 802948F4
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 802948F8
  cmpu(c,0,c->r[0],0x00000002u); // 802948FC
  if (!crb(c,2)) { goto L_80294920; } // 80294900
  c->r[3]=R32(c->r[30]+0x00000014u); // 80294904
  c->lr=0x8029490Cu; f_801DCF14(c); // 80294908
  c->r[3]=c->r[30]+0x0000002Cu; // 8029490C
  c->lr=0x80294914u; f_801C4FA8(c); // 80294910
  c->r[3]=R32(c->r[30]+0x00000014u); // 80294914
  c->lr=0x8029491Cu; f_801D43E0(c); // 80294918
  W32(c->r[30]+0x00000014u,c->r[31]); // 8029491C
L_80294920:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80294920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80294924
  c->r[30]=R32(c->r[1]+0x00000008u); // 80294928
  c->lr=c->r[0]; // 8029492C
  c->r[1]=c->r[1]+0x00000010u; // 80294930
  return; // 80294934
}

// fn_80294938
void f_80294938(Ctx* __restrict c) {
  trace_call(0x80294938u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80294938
  c->r[0]=c->lr; // 8029493C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80294940
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 80294944
  c->f[31]=c->f[1]; // 80294948
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029494C
  c->r[25]=c->r[3]|c->r[3]; // 80294950
  c->r[29]=c->r[6]|c->r[6]; // 80294954
  c->r[3]=0u+0x803D0000u; // 80294958
  c->r[23]=c->r[5]|c->r[5]; // 8029495C
  c->r[31]=c->r[1]|c->r[1]; // 80294960
  c->r[5]=c->r[3]+0x00003220u; // 80294964
  c->r[26]=c->r[7]|c->r[7]; // 80294968
  c->r[24]=c->r[8]|c->r[8]; // 8029496C
  c->r[27]=c->r[9]|c->r[9]; // 80294970
  c->r[28]=c->r[10]|c->r[10]; // 80294974
  c->r[3]=0u+0x000001FCu; // 80294978
  c->r[6]=0u+0x00000004u; // 8029497C
  c->lr=0x80294984u; f_8029C154(c); // 80294980
  cmps(c,0,(int32_t)c->r[3],0); // 80294984
  c->r[30]=c->r[3]|c->r[3]; // 80294988
  if (crb(c,2)) { goto L_802949EC; } // 8029498C
  c->r[0]=0u+0x00000000u; // 80294990
  c->r[4]=0u+0x804C0000u; // 80294994
  W32(c->r[3]+0x00000000u,c->r[0]); // 80294998
  c->r[4]=c->r[4]+0xFFFFD340u; // 8029499C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802949A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 802949A4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 802949A8
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 802949AC
  W32(c->r[3]+0x000001BCu,c->r[0]); // 802949B0
  W32(c->r[3]+0x000001C0u,c->r[0]); // 802949B4
  W32(c->r[3]+0x000001C4u,c->r[29]); // 802949B8
  W32(c->r[3]+0x000001E8u,c->r[0]); // 802949BC
  W32(c->r[3]+0x000001ECu,c->r[0]); // 802949C0
  W32(c->r[3]+0x000001F8u,c->r[24]); // 802949C4
  W32(c->r[3]+0x000001C8u,c->r[0]); // 802949C8
  W32(c->r[3]+0x000001CCu,c->r[0]); // 802949CC
  W32(c->r[3]+0x000001D0u,c->r[0]); // 802949D0
  W32(c->r[3]+0x000001D4u,c->r[0]); // 802949D4
  W32(c->r[3]+0x000001D8u,c->r[0]); // 802949D8
  W32(c->r[3]+0x000001DCu,c->r[0]); // 802949DC
  W32(c->r[3]+0x000001E0u,c->r[0]); // 802949E0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 802949E4
  W32(c->r[3]+0x000001E4u,c->r[0]); // 802949E8
L_802949EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802949EC
  if (!crb(c,2)) { goto L_80294A10; } // 802949F0
  c->r[3]=0u+0x803D0000u; // 802949F4
  c->r[4]=0u+0xFFFFFFFDu; // 802949F8
  c->r[3]=c->r[3]+0x00003220u; // 802949FC
  c->r[3]=c->r[3]+0x0000000Eu; // 80294A00
  c->lr=0x80294A08u; f_8029D638(c); // 80294A04
  c->r[3]=0u+0x00000000u; // 80294A08
  goto L_80294BA8; // 80294A0C
L_80294A10:;
  W8(c->r[3]+0x0000019Fu,c->r[23]); // 80294A10
  cmps(c,0,(int32_t)c->r[28],0); // 80294A14
  c->r[24]=0u+0x0000001Eu; // 80294A18
  W32(c->r[3]+0x000001B0u,c->r[28]); // 80294A1C
  if (crb(c,2)) { goto L_80294A28; } // 80294A20
  c->r[24]=0u+0x0000001Fu; // 80294A24
L_80294A28:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80294A28
  c->r[28]=0u+0x80290000u; // 80294A2C
  c->r[5]=c->r[30]|c->r[30]; // 80294A30
  W32(c->r[3]+0x00000198u,c->r[0]); // 80294A34
  c->r[3]=c->r[24]|c->r[24]; // 80294A38
  c->r[4]=c->r[28]+0x000048CCu; // 80294A3C
  c->lr=0x80294A44u; f_801D445C(c); // 80294A40
  W32(c->r[30]+0x00000010u,c->r[3]); // 80294A44
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80294A48
  cmpu(c,0,c->r[0],0x00000002u); // 80294A4C
  if (!crb(c,2)) { goto L_80294A68; } // 80294A50
  c->r[3]=c->r[24]|c->r[24]; // 80294A54
  c->r[5]=c->r[30]|c->r[30]; // 80294A58
  c->r[4]=c->r[28]+0x000048CCu; // 80294A5C
  c->lr=0x80294A64u; f_801D445C(c); // 80294A60
  W32(c->r[30]+0x00000014u,c->r[3]); // 80294A64
L_80294A68:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 80294A68
  cmps(c,0,(int32_t)c->r[0],0); // 80294A6C
  if (crb(c,2)) { goto L_80294BA4; } // 80294A70
  c->r[28]=0u+0x00000000u; // 80294A74
  goto L_80294B44; // 80294A78
L_80294A7C:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 80294A7C
  c->r[3]=rotl(c->r[28],2)&0x000003FCu; // 80294A80
  c->f[1]=c->f[31]; // 80294A84
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80294A88
  c->r[24]=c->r[30]+c->r[3]; // 80294A8C
  c->lr=0x80294A94u; f_801E7834(c); // 80294A90
  c->r[6]=c->r[30]+c->r[29]; // 80294A94
  c->r[4]=R32(c->r[24]+0x00000010u); // 80294A98
  c->r[5]=c->r[3]|c->r[3]; // 80294A9C
  c->r[3]=c->r[6]+0x00000018u; // 80294AA0
  c->lr=0x80294AA8u; f_801C4B74(c); // 80294AA4
  c->r[0]=0u+0x00000000u; // 80294AA8
  W32(c->r[24]+0x0000010Cu,c->r[0]); // 80294AAC
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80294AB0
  cmpu(c,0,c->r[0],0x00000001u); // 80294AB4
  if (!crb(c,2)) { goto L_80294AC4; } // 80294AB8
  c->r[3]=c->r[30]+0x00000040u; // 80294ABC
  c->lr=0x80294AC4u; f_801C5020(c); // 80294AC0
L_80294AC4:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 80294AC4
  c->r[24]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80294AC8
  c->r[3]=c->r[30]+c->r[24]; // 80294ACC
  c->r[3]=c->r[3]+0x0000006Cu; // 80294AD0
  c->lr=0x80294AD8u; f_801C50AC(c); // 80294AD4
  c->r[3]=c->r[30]+c->r[24]; // 80294AD8
  c->r[3]=c->r[3]+0x00000084u; // 80294ADC
  c->lr=0x80294AE4u; f_801C50C0(c); // 80294AE0
  c->r[3]=c->r[30]+c->r[24]; // 80294AE4
  c->r[3]=c->r[3]+0x000000B4u; // 80294AE8
  c->lr=0x80294AF0u; f_801C50D4(c); // 80294AEC
  c->r[3]=c->r[30]+c->r[24]; // 80294AF0
  c->r[3]=c->r[3]+0x000000CCu; // 80294AF4
  c->lr=0x80294AFCu; f_801C50E8(c); // 80294AF8
  c->r[3]=c->r[30]+c->r[29]; // 80294AFC
  c->r[3]=c->r[3]+0x000000E4u; // 80294B00
  c->lr=0x80294B08u; f_801C50FC(c); // 80294B04
  c->r[3]=c->r[30]+c->r[24]; // 80294B08
  c->r[3]=c->r[3]+0x0000009Cu; // 80294B0C
  c->lr=0x80294B14u; f_801C5090(c); // 80294B10
  c->r[3]=c->r[30]+c->r[24]; // 80294B14
  c->r[3]=c->r[3]+0x00000114u; // 80294B18
  c->lr=0x80294B20u; f_801C5118(c); // 80294B1C
  c->r[3]=c->r[30]+c->r[24]; // 80294B20
  c->r[3]=c->r[3]+0x0000012Cu; // 80294B24
  c->lr=0x80294B2Cu; f_801C512C(c); // 80294B28
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 80294B2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 80294B30
  c->r[3]=c->r[30]+c->r[0]; // 80294B34
  c->r[3]=c->r[3]+0x00000144u; // 80294B38
  c->lr=0x80294B40u; f_801C5140(c); // 80294B3C
  c->r[28]=c->r[28]+0x00000001u; // 80294B40
L_80294B44:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80294B44
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80294B48
  cmpu(c,0,c->r[3],c->r[0]); // 80294B4C
  if (crb(c,0)) { IRQCHK(c); goto L_80294A7C; } // 80294B50
  cmps(c,0,(int32_t)c->r[27],0); // 80294B54
  if (!crb(c,2)) { goto L_80294B9C; } // 80294B58
  c->r[3]=c->r[30]|c->r[30]; // 80294B5C
  c->r[4]=c->r[25]|c->r[25]; // 80294B60
  c->r[5]=c->r[26]|c->r[26]; // 80294B64
  c->lr=0x80294B6Cu; f_802962C4(c); // 80294B68
  cmps(c,0,(int32_t)c->r[3],0); // 80294B6C
  if (!crb(c,2)) { goto L_80294B90; } // 80294B70
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80294B74
  c->r[3]=c->r[30]|c->r[30]; // 80294B78
  c->r[12]=R32(c->r[12]+0x00000008u); // 80294B7C
  c->ctr=c->r[12]; // 80294B80
  if (true) { c->lr=0x80294B88u; dispatch(c,c->ctr); } // 80294B84
  c->r[3]=0u+0x00000000u; // 80294B88
  goto L_80294BA8; // 80294B8C
L_80294B90:;
  c->r[0]=0u+0x00000004u; // 80294B90
  W32(c->r[30]+0x000001F0u,c->r[0]); // 80294B94
  goto L_80294BA4; // 80294B98
L_80294B9C:;
  c->r[0]=0u+0x00000001u; // 80294B9C
  W32(c->r[30]+0x000001F0u,c->r[0]); // 80294BA0
L_80294BA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80294BA4
L_80294BA8:;
  c->r[10]=c->r[31]|c->r[31]; // 80294BA8
  {uint32_t ea=c->r[31]+0x00000048u; c->f[31]=RF64(ea);} // 80294BAC
  {uint32_t ea=c->r[10]+0x00000024u; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80294BB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 80294BB4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80294BB8
  c->r[1]=c->r[10]|c->r[10]; // 80294BBC
  c->lr=c->r[0]; // 80294BC0
  return; // 80294BC4
}

// fn_80294BC8
void f_80294BC8(Ctx* __restrict c) {
  trace_call(0x80294BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80294BC8
  c->r[0]=c->lr; // 80294BCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80294BD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80294BD4
  c->r[31]=c->r[3]|c->r[3]; // 80294BD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80294BDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80294BE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80294BE4
  c->r[0]=R32(c->r[3]+0x000001B8u); // 80294BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80294BEC
  if (!crb(c,2)) { goto L_80294CBC; } // 80294BF0
  c->r[4]=R32(c->r[3]+0x000001ECu); // 80294BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80294BF8
  c->r[4]=R32(c->r[4]+0x00000020u); // 80294BFC
  if (!crb(c,2)) { goto L_80294C14; } // 80294C00
  c->r[3]=0u+0x804C0000u; // 80294C04
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 80294C08
  c->lr=0x80294C10u; f_8029D4B0(c); // 80294C0C
L_80294C10:;
  IRQCHK(c); goto L_80294C10; // 80294C10
L_80294C14:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80294C14
  cmpu(c,0,c->r[0],c->r[3]); // 80294C18
  if (!crb(c,2)) { goto L_80294C28; } // 80294C1C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80294C20
  W32(c->r[4]+0x00000004u,c->r[0]); // 80294C24
L_80294C28:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 80294C28
  cmpu(c,0,c->r[0],c->r[3]); // 80294C2C
  if (!crb(c,2)) { goto L_80294C3C; } // 80294C30
  c->r[0]=R32(c->r[3]+0x00000000u); // 80294C34
  W32(c->r[4]+0x00000008u,c->r[0]); // 80294C38
L_80294C3C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80294C3C
  cmps(c,0,(int32_t)c->r[4],0); // 80294C40
  if (crb(c,2)) { goto L_80294C50; } // 80294C44
  c->r[0]=R32(c->r[3]+0x00000004u); // 80294C48
  W32(c->r[4]+0x00000004u,c->r[0]); // 80294C4C
L_80294C50:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80294C50
  cmps(c,0,(int32_t)c->r[4],0); // 80294C54
  if (crb(c,2)) { goto L_80294C64; } // 80294C58
  c->r[0]=R32(c->r[3]+0x00000000u); // 80294C5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80294C60
L_80294C64:;
  c->r[0]=R32(c->r[3]+0x000001E8u); // 80294C64
  c->r[30]=0u+0x00000000u; // 80294C68
  W32(c->r[3]+0x00000004u,c->r[30]); // 80294C6C
  cmps(c,0,(int32_t)c->r[0],0); // 80294C70
  W32(c->r[3]+0x00000000u,c->r[30]); // 80294C74
  if (crb(c,2)) { goto L_80294C8C; } // 80294C78
  c->r[3]=c->r[0]|c->r[0]; // 80294C7C
  c->r[4]=0u+0x00000134u; // 80294C80
  c->lr=0x80294C88u; f_8029C224(c); // 80294C84
  W32(c->r[31]+0x000001E8u,c->r[30]); // 80294C88
L_80294C8C:;
  c->r[28]=c->r[31]|c->r[31]; // 80294C8C
  c->r[29]=0u+0x00000000u; // 80294C90
  c->r[30]=0u+0x00000000u; // 80294C94
L_80294C98:;
  c->r[3]=R32(c->r[28]+0x000001C8u); // 80294C98
  cmps(c,0,(int32_t)c->r[3],0); // 80294C9C
  if (crb(c,2)) { goto L_80294CAC; } // 80294CA0
  c->lr=0x80294CA8u; f_8029E23C(c); // 80294CA4
  W32(c->r[28]+0x000001C8u,c->r[30]); // 80294CA8
L_80294CAC:;
  c->r[29]=c->r[29]+0x00000001u; // 80294CAC
  c->r[28]=c->r[28]+0x00000004u; // 80294CB0
  cmpu(c,0,c->r[29],0x00000008u); // 80294CB4
  if (crb(c,0)) { IRQCHK(c); goto L_80294C98; } // 80294CB8
L_80294CBC:;
  c->r[29]=0u+0x00000000u; // 80294CBC
  c->r[30]=0u+0x00000000u; // 80294CC0
  goto L_80294D10; // 80294CC4
L_80294CC8:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 80294CC8
  c->r[28]=c->r[31]+c->r[0]; // 80294CCC
  c->r[3]=R32(c->r[28]+0x00000010u); // 80294CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80294CD4
  if (crb(c,2)) { goto L_80294D0C; } // 80294CD8
  c->lr=0x80294CE0u; f_801DCF14(c); // 80294CDC
  c->r[0]=R32(c->r[28]+0x0000010Cu); // 80294CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80294CE4
  if (crb(c,2)) { goto L_80294D00; } // 80294CE8
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80294CEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80294CF0
  c->r[3]=c->r[31]+c->r[0]; // 80294CF4
  c->r[3]=c->r[3]+0x00000018u; // 80294CF8
  c->lr=0x80294D00u; f_801C4FA8(c); // 80294CFC
L_80294D00:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80294D00
  c->lr=0x80294D08u; f_801D43E0(c); // 80294D04
  W32(c->r[28]+0x00000010u,c->r[30]); // 80294D08
L_80294D0C:;
  c->r[29]=c->r[29]+0x00000001u; // 80294D0C
L_80294D10:;
  c->r[0]=R8(c->r[31]+0x0000019Fu); // 80294D10
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80294D14
  cmpu(c,0,c->r[3],c->r[0]); // 80294D18
  if (crb(c,0)) { IRQCHK(c); goto L_80294CC8; } // 80294D1C
  cmps(c,0,(int32_t)c->r[31],0); // 80294D20
  if (crb(c,2)) { goto L_80294D40; } // 80294D24
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80294D28
  c->r[3]=c->r[31]|c->r[31]; // 80294D2C
  c->r[4]=0u+0x00000001u; // 80294D30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80294D34
  c->ctr=c->r[12]; // 80294D38
  if (true) { c->lr=0x80294D40u; dispatch(c,c->ctr); } // 80294D3C
L_80294D40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80294D40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80294D44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80294D48
  c->r[29]=R32(c->r[1]+0x00000014u); // 80294D4C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80294D50
  c->lr=c->r[0]; // 80294D54
  c->r[1]=c->r[1]+0x00000020u; // 80294D58
  return; // 80294D5C
}

// fn_80294D60
void f_80294D60(Ctx* __restrict c) {
  trace_call(0x80294D60u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80294D60
  c->r[0]=c->lr; // 80294D64
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80294D68
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80294D6C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80294D70
  c->r[11]=c->r[1]+0x000000D0u; // 80294D74
  c->lr=0x80294D7Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80294D78
  c->r[12]=R32(c->r[3]+0x000001BCu); // 80294D7C
  c->r[29]=c->r[3]|c->r[3]; // 80294D80
  cmps(c,0,(int32_t)c->r[12],0); // 80294D84
  if (crb(c,2)) { goto L_80294DA0; } // 80294D88
  c->r[3]=R32(c->r[3]+0x000001C0u); // 80294D8C
  c->r[4]=0u+0x00000001u; // 80294D90
  c->r[5]=0u+0x00000080u; // 80294D94
  c->ctr=c->r[12]; // 80294D98
  if (true) { c->lr=0x80294DA0u; dispatch(c,c->ctr); } // 80294D9C
L_80294DA0:;
  c->r[31]=R32(c->r[29]+0x000001E8u); // 80294DA0
  c->r[0]=R32(c->r[31]+0x00000000u); // 80294DA4
  cmps(c,0,(int32_t)c->r[0],0); // 80294DA8
  if (crb(c,2)) { goto L_802950B0; } // 80294DAC
  {uint32_t ea=c->r[2]+0xFFFFCD90u; c->f[31]=RF64(ea);} // 80294DB0
  c->r[26]=0u+0x00000000u; // 80294DB4
  c->r[27]=0u+0x43300000u; // 80294DB8
  c->r[28]=0u+0x00000001u; // 80294DBC
  c->r[30]=0u+0x00000000u; // 80294DC0
L_80294DC4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 80294DC4
  cmps(c,0,(int32_t)c->r[0],0); // 80294DC8
  if (!crb(c,2)) { goto L_80294DD4; } // 80294DCC
  W32(c->r[31]+0x00000034u,c->r[26]); // 80294DD0
L_80294DD4:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 80294DD4
  cmps(c,0,(int32_t)c->r[0],1); // 80294DD8
  if (!crb(c,2)) { goto L_8029509C; } // 80294DDC
  c->r[0]=R32(c->r[31]+0x00000130u); // 80294DE0
  cmps(c,0,(int32_t)c->r[0],0); // 80294DE4
  if (!crb(c,2)) { goto L_80294EBC; } // 80294DE8
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294DEC
  c->r[4]=c->r[1]+0x00000010u; // 80294DF0
  c->lr=0x80294DF8u; f_8029E3E0(c); // 80294DF4
  c->r[3]=R32(c->r[1]+0x00000010u); // 80294DF8
  c->r[5]=c->r[31]+0x000000BCu; // 80294DFC
  c->r[4]=R32(c->r[1]+0x00000014u); // 80294E00
  c->lr=0x80294E08u; f_80285708(c); // 80294E04
  cmps(c,0,(int32_t)c->r[3],0); // 80294E08
  c->r[25]=c->r[3]|c->r[3]; // 80294E0C
  if (crb(c,2)) { goto L_80294EAC; } // 80294E10
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80294E14
  W32(c->r[1]+0x00000090u,c->r[27]); // 80294E18
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 80294E1C
  c->r[0]=R8(c->r[31]+0x000000C1u); // 80294E20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80294E24
  W32(c->r[31]+0x00000028u,c->r[0]); // 80294E28
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80294E2C
  c->r[0]=c->r[0]^0x80000000u; // 80294E30
  W32(c->r[1]+0x00000094u,c->r[0]); // 80294E34
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 80294E38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80294E3C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80294E40
  W32(c->r[31]+0x00000130u,c->r[28]); // 80294E44
  W32(c->r[31]+0x00000040u,c->r[26]); // 80294E48
  c->r[3]=R32(c->r[31]+0x000000B8u); // 80294E4C
  c->lr=0x80294E54u; f_8028558C(c); // 80294E50
  c->r[4]=R8(c->r[31]+0x000000C1u); // 80294E54
  c->r[3]=R32(c->r[31]+0x000000B8u); // 80294E58
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80294E5C
  c->lr=0x80294E64u; f_80285598(c); // 80294E60
  c->r[3]=R32(c->r[31]+0x000000B8u); // 80294E64
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000D0u); // 80294E68
  c->r[5]=R32(c->r[31]+0x000000C4u); // 80294E6C
  c->lr=0x80294E74u; f_80285608(c); // 80294E70
  c->r[23]=c->r[31]|c->r[31]; // 80294E74
  c->r[24]=0u+0x00000000u; // 80294E78
  goto L_80294E9C; // 80294E7C
L_80294E80:;
  c->r[3]=R32(c->r[31]+0x000000B8u); // 80294E80
  c->r[4]=c->r[24]|c->r[24]; // 80294E84
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000D2u); // 80294E88
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[23]+0x000000E2u); // 80294E8C
  c->lr=0x80294E94u; f_802855A0(c); // 80294E90
  c->r[23]=c->r[23]+0x00000002u; // 80294E94
  c->r[24]=c->r[24]+0x00000001u; // 80294E98
L_80294E9C:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 80294E9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80294EA0
  cmpu(c,0,c->r[24],c->r[0]); // 80294EA4
  if (crb(c,0)) { IRQCHK(c); goto L_80294E80; } // 80294EA8
L_80294EAC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294EAC
  c->r[5]=c->r[25]|c->r[25]; // 80294EB0
  c->r[4]=c->r[1]+0x00000010u; // 80294EB4
  c->lr=0x80294EBCu; f_8029E3FC(c); // 80294EB8
L_80294EBC:;
  c->r[0]=R32(c->r[31]+0x00000130u); // 80294EBC
  cmps(c,0,(int32_t)c->r[0],1); // 80294EC0
  if (!crb(c,2)) { goto L_80295074; } // 80294EC4
  W32(c->r[1]+0x00000008u,c->r[26]); // 80294EC8
  c->r[4]=c->r[1]+0x00000018u; // 80294ECC
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294ED0
  c->lr=0x80294ED8u; f_8029E3E0(c); // 80294ED4
  c->r[3]=R32(c->r[1]+0x00000018u); // 80294ED8
  c->r[5]=c->r[1]+0x0000000Cu; // 80294EDC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80294EE0
  c->lr=0x80294EE8u; f_80285E38(c); // 80294EE4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80294EE8
  cmps(c,0,(int32_t)c->r[5],0); // 80294EEC
  if (crb(c,2)) { goto L_80294F08; } // 80294EF0
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294EF4
  c->r[4]=c->r[1]+0x00000018u; // 80294EF8
  c->lr=0x80294F00u; f_8029E3FC(c); // 80294EFC
  W32(c->r[31]+0x00000130u,c->r[26]); // 80294F00
  IRQCHK(c); goto L_80294DC4; // 80294F04
L_80294F08:;
  c->r[25]=c->r[31]|c->r[31]; // 80294F08
  c->r[24]=c->r[1]+0x00000050u; // 80294F0C
  c->r[26]=c->r[1]+0x00000030u; // 80294F10
  c->r[23]=0u+0x00000000u; // 80294F14
  goto L_80294F6C; // 80294F18
L_80294F1C:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80294F1C
  c->r[4]=c->r[24]|c->r[24]; // 80294F20
  c->lr=0x80294F28u; f_8029E2F4(c); // 80294F24
  c->r[3]=R32(c->r[24]+0x00000000u); // 80294F28
  cmps(c,0,(int32_t)c->r[3],0); // 80294F2C
  if (crb(c,2)) { goto L_80294F40; } // 80294F30
  c->r[0]=R32(c->r[24]+0x00000004u); // 80294F34
  cmps(c,0,(int32_t)c->r[0],0); // 80294F38
  if (!crb(c,2)) { goto L_80294F54; } // 80294F3C
L_80294F40:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294F40
  c->r[4]=c->r[1]+0x00000018u; // 80294F44
  c->r[5]=0u+0x00000000u; // 80294F48
  c->lr=0x80294F50u; f_8029E3FC(c); // 80294F4C
  goto L_802950B0; // 80294F50
L_80294F54:;
  W32(c->r[26]+0x00000000u,c->r[3]); // 80294F54
  c->r[30]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80294F58
  c->r[24]=c->r[24]+0x00000008u; // 80294F5C
  c->r[25]=c->r[25]+0x00000004u; // 80294F60
  c->r[26]=c->r[26]+0x00000004u; // 80294F64
  c->r[23]=c->r[23]+0x00000001u; // 80294F68
L_80294F6C:;
  c->r[8]=R32(c->r[31]+0x00000028u); // 80294F6C
  cmpu(c,0,c->r[23],c->r[8]); // 80294F70
  if (crb(c,0)) { IRQCHK(c); goto L_80294F1C; } // 80294F74
  c->r[4]=R32(c->r[31]+0x00000040u); // 80294F78
  c->r[10]=c->r[30]|c->r[30]; // 80294F7C
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 80294F80
  c->r[7]=c->r[1]+0x00000008u; // 80294F84
  c->r[3]=R32(c->r[31]+0x000000B8u); // 80294F88
  c->r[9]=c->r[1]+0x00000030u; // 80294F8C
  c->r[26]=c->r[0]-c->r[4]; // 80294F90
  c->r[5]=R32(c->r[1]+0x00000018u); // 80294F94
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 80294F98
  c->r[4]=c->r[26]|c->r[26]; // 80294F9C
  c->lr=0x80294FA4u; f_80285394(c); // 80294FA0
  cmpu(c,0,c->r[3],c->r[26]); // 80294FA4
  c->r[27]=c->r[3]|c->r[3]; // 80294FA8
  if (!crb(c,1)) { goto L_80294FB4; } // 80294FAC
  c->r[27]=c->r[26]|c->r[26]; // 80294FB0
L_80294FB4:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 80294FB4
  c->r[4]=c->r[1]+0x00000018u; // 80294FB8
  c->r[0]=c->r[0]+c->r[27]; // 80294FBC
  W32(c->r[31]+0x00000040u,c->r[0]); // 80294FC0
  c->r[0]=R32(c->r[31]+0x00000044u); // 80294FC4
  c->r[0]=c->r[0]+c->r[27]; // 80294FC8
  W32(c->r[31]+0x00000044u,c->r[0]); // 80294FCC
  c->r[3]=R32(c->r[31]+0x00000000u); // 80294FD0
  c->r[5]=R32(c->r[1]+0x00000008u); // 80294FD4
  c->lr=0x80294FDCu; f_8029E3FC(c); // 80294FD8
  c->r[25]=c->r[31]|c->r[31]; // 80294FDC
  c->r[24]=c->r[1]+0x00000050u; // 80294FE0
  c->r[28]=rotl(c->r[27],1)&0xFFFFFFFEu; // 80294FE4
  c->r[30]=0u+0x00000000u; // 80294FE8
  goto L_80295058; // 80294FEC
L_80294FF0:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80294FF0
  c->r[4]=c->r[24]|c->r[24]; // 80294FF4
  c->r[5]=c->r[28]|c->r[28]; // 80294FF8
  c->lr=0x80295000u; f_8029E310(c); // 80294FFC
  c->r[3]=R32(c->r[24]+0x00000000u); // 80295000
  c->r[4]=c->r[28]|c->r[28]; // 80295004
  c->lr=0x8029500Cu; f_801BA790(c); // 80295008
  c->r[3]=R32(c->r[31]+0x00000044u); // 8029500C
  c->r[7]=R32(c->r[31]+0x00000048u); // 80295010
  c->r[0]=c->r[3]-c->r[27]; // 80295014
  c->r[5]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80295018
  c->r[6]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8029501C
  c->r[3]=divwu(c->r[6],c->r[7]); // 80295020
  c->r[0]=divwu(c->r[5],c->r[7]); // 80295024
  cmpu(c,0,c->r[3],c->r[0]); // 80295028
  if (crb(c,2)) { goto L_8029504C; } // 8029502C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[7]); // 80295030
  c->r[3]=R32(c->r[24]+0x00000000u); // 80295034
  c->r[4]=c->r[6]-c->r[4]; // 80295038
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 8029503C
  c->r[3]=c->r[3]-c->r[4]; // 80295040
  c->r[4]=c->r[5]-c->r[0]; // 80295044
  c->lr=0x8029504Cu; f_801BA790(c); // 80295048
L_8029504C:;
  c->r[24]=c->r[24]+0x00000008u; // 8029504C
  c->r[25]=c->r[25]+0x00000004u; // 80295050
  c->r[30]=c->r[30]+0x00000001u; // 80295054
L_80295058:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 80295058
  cmpu(c,0,c->r[30],c->r[0]); // 8029505C
  if (crb(c,0)) { IRQCHK(c); goto L_80294FF0; } // 80295060
  cmps(c,0,(int32_t)c->r[26],0); // 80295064
  if (!crb(c,0)) { goto L_80295074; } // 80295068
  c->r[0]=0u+0x00000002u; // 8029506C
  W32(c->r[31]+0x00000034u,c->r[0]); // 80295070
L_80295074:;
  c->r[0]=R8(c->r[31]+0x0000003Du); // 80295074
  cmpu(c,0,c->r[0],0x00000001u); // 80295078
  if (!crb(c,2)) { goto L_802950B0; } // 8029507C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80295080
  c->lr=0x80295088u; f_8029E3CC(c); // 80295084
  cmps(c,0,(int32_t)c->r[3],0); // 80295088
  if (!crb(c,2)) { goto L_802950B0; } // 8029508C
  c->r[0]=0u+0x00000002u; // 80295090
  W32(c->r[31]+0x00000034u,c->r[0]); // 80295094
  goto L_802950B0; // 80295098
L_8029509C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8029509C
  cmps(c,0,(int32_t)c->r[0],0); // 802950A0
  if (!crb(c,2)) { goto L_802950B0; } // 802950A4
  c->r[0]=0u+0x00000000u; // 802950A8
  W32(c->r[31]+0x00000034u,c->r[0]); // 802950AC
L_802950B0:;
  c->r[3]=R32(c->r[29]+0x000001C8u); // 802950B0
  c->r[6]=c->r[1]+0x00000020u; // 802950B4
  c->r[4]=0u+0x00000001u; // 802950B8
  c->r[5]=0u+0xFFFFFFFFu; // 802950BC
  c->lr=0x802950C4u; f_8029E25C(c); // 802950C0
  c->r[3]=R32(c->r[29]+0x000001C8u); // 802950C4
  c->r[5]=c->r[1]+0x00000020u; // 802950C8
  c->r[4]=0u+0x00000001u; // 802950CC
  c->lr=0x802950D4u; f_8029E26C(c); // 802950D0
  c->r[0]=R32(c->r[29]+0x0000017Cu); // 802950D4
  cmps(c,0,(int32_t)c->r[0],3); // 802950D8
  if (!crb(c,2)) { goto L_80295218; } // 802950DC
  c->r[3]=R32(c->r[29]+0x00000010u); // 802950E0
  c->r[4]=c->r[29]+0x80000000u; // 802950E4
  c->r[4]=c->r[4]+0x00000180u; // 802950E8
  c->r[5]=R32(c->r[29]+0x000001F4u); // 802950EC
  c->r[0]=R32(c->r[3]+0x000000A2u); // 802950F0
  c->r[3]=rotl(c->r[4],31)&0x7FFFFFFFu; // 802950F4
  c->r[6]=c->r[0]-c->r[3]; // 802950F8
  cmpu(c,0,c->r[6],c->r[5]); // 802950FC
  if (crb(c,0)) { goto L_80295110; } // 80295100
  c->r[0]=c->r[6]-c->r[5]; // 80295104
  c->r[30]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80295108
  goto L_80295124; // 8029510C
L_80295110:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 80295110
  c->r[3]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80295114
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFFEu; // 80295118
  c->r[0]=c->r[0]-c->r[3]; // 8029511C
  c->r[30]=c->r[4]+c->r[0]; // 80295120
L_80295124:;
  W32(c->r[29]+0x000001F4u,c->r[6]); // 80295124
  c->r[25]=c->r[29]|c->r[29]; // 80295128
  c->r[24]=c->r[1]+0x00000020u; // 8029512C
  c->r[23]=0u+0x00000000u; // 80295130
L_80295134:;
  c->r[3]=R32(c->r[25]+0x000001C8u); // 80295134
  c->r[5]=c->r[30]|c->r[30]; // 80295138
  c->r[6]=c->r[24]|c->r[24]; // 8029513C
  c->r[4]=0u+0x00000001u; // 80295140
  c->lr=0x80295148u; f_8029E25C(c); // 80295144
  c->r[23]=c->r[23]+0x00000001u; // 80295148
  c->r[25]=c->r[25]+0x00000004u; // 8029514C
  cmpu(c,0,c->r[23],0x00000002u); // 80295150
  c->r[24]=c->r[24]+0x00000008u; // 80295154
  if (crb(c,0)) { IRQCHK(c); goto L_80295134; } // 80295158
  cmps(c,0,(int32_t)c->r[30],0); // 8029515C
  if (crb(c,2)) { goto L_802951B4; } // 80295160
  c->r[0]=R32(c->r[1]+0x00000024u); // 80295164
  cmps(c,0,(int32_t)c->r[0],0); // 80295168
  if (!crb(c,2)) { goto L_802951B4; } // 8029516C
  c->r[3]=R32(c->r[29]+0x000001E8u); // 80295170
  c->r[0]=0u+0x00000000u; // 80295174
  c->r[24]=0u+0x00000000u; // 80295178
  W32(c->r[3]+0x00000038u,c->r[0]); // 8029517C
  goto L_8029519C; // 80295180
L_80295184:;
  c->r[0]=rotl(c->r[24],2)&0x000003FCu; // 80295184
  c->r[4]=0u+0x00000000u; // 80295188
  c->r[3]=c->r[29]+c->r[0]; // 8029518C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80295190
  c->lr=0x80295198u; f_801D7210(c); // 80295194
  c->r[24]=c->r[24]+0x00000001u; // 80295198
L_8029519C:;
  c->r[0]=R8(c->r[29]+0x0000019Fu); // 8029519C
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 802951A0
  cmpu(c,0,c->r[3],c->r[0]); // 802951A4
  if (crb(c,0)) { IRQCHK(c); goto L_80295184; } // 802951A8
  c->r[0]=0u+0x00000000u; // 802951AC
  W32(c->r[29]+0x000001F0u,c->r[0]); // 802951B0
L_802951B4:;
  c->r[27]=R32(c->r[1]+0x00000024u); // 802951B4
  c->r[25]=c->r[29]|c->r[29]; // 802951B8
  c->r[24]=c->r[1]+0x00000020u; // 802951BC
  c->r[23]=0u+0x00000000u; // 802951C0
  c->r[26]=c->r[30]-c->r[27]; // 802951C4
L_802951C8:;
  c->r[3]=R32(c->r[25]+0x000001C8u); // 802951C8
  c->r[5]=c->r[24]|c->r[24]; // 802951CC
  c->r[4]=0u+0x00000000u; // 802951D0
  c->lr=0x802951D8u; f_8029E27C(c); // 802951D4
  cmpu(c,0,c->r[27],c->r[30]); // 802951D8
  if (!crb(c,0)) { goto L_80295204; } // 802951DC
  c->r[3]=R32(c->r[25]+0x000001C8u); // 802951E0
  c->r[5]=c->r[26]|c->r[26]; // 802951E4
  c->r[6]=c->r[24]|c->r[24]; // 802951E8
  c->r[4]=0u+0x00000001u; // 802951EC
  c->lr=0x802951F4u; f_8029E25C(c); // 802951F0
  c->r[3]=R32(c->r[25]+0x000001C8u); // 802951F4
  c->r[5]=c->r[24]|c->r[24]; // 802951F8
  c->r[4]=0u+0x00000000u; // 802951FC
  c->lr=0x80295204u; f_8029E27C(c); // 80295200
L_80295204:;
  c->r[23]=c->r[23]+0x00000001u; // 80295204
  c->r[25]=c->r[25]+0x00000004u; // 80295208
  cmpu(c,0,c->r[23],0x00000002u); // 8029520C
  c->r[24]=c->r[24]+0x00000008u; // 80295210
  if (crb(c,0)) { IRQCHK(c); goto L_802951C8; } // 80295214
L_80295218:;
  c->r[0]=R32(c->r[29]+0x000001F0u); // 80295218
  cmps(c,0,(int32_t)c->r[0],4); // 8029521C
  if (!crb(c,2)) { goto L_80295274; } // 80295220
  c->r[0]=R32(c->r[29]+0x00000188u); // 80295224
  c->r[3]=0u+0x43300000u; // 80295228
  c->r[4]=R32(c->r[1]+0x00000024u); // 8029522C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80295230
  {uint32_t ea=c->r[2]+0xFFFFCD98u; c->f[3]=RF64(ea);} // 80295234
  W32(c->r[1]+0x00000098u,c->r[3]); // 80295238
  {uint32_t ea=c->r[2]+0xFFFFCD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029523C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=RF64(ea);} // 80295240
  W32(c->r[1]+0x00000094u,c->r[4]); // 80295244
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 80295248
  W32(c->r[1]+0x00000090u,c->r[3]); // 8029524C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 80295250
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80295254
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 80295258
  fcmp(c,0,c->f[1],c->f[0]); // 8029525C
  if (!crb(c,1)) { goto L_80295274; } // 80295260
  c->r[3]=0u+0x00000001u; // 80295264
  c->r[0]=0u+0x00000000u; // 80295268
  W32(c->r[29]+0x000001F0u,c->r[3]); // 8029526C
  W32(c->r[29]+0x000001F4u,c->r[0]); // 80295270
L_80295274:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80295274
  c->r[11]=c->r[1]+0x000000D0u; // 80295278
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 8029527C
  c->lr=0x80295284u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80295280
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80295284
  c->lr=c->r[0]; // 80295288
  c->r[1]=c->r[1]+0x000000E0u; // 8029528C
  return; // 80295290
}

// fn_80295294
void f_80295294(Ctx* __restrict c) {
  trace_call(0x80295294u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295294
  c->r[0]=c->lr; // 80295298
  W32(c->r[1]+0x00000124u,c->r[0]); // 8029529C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 802952A0
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 802952A4
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 802952A8
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 802952AC
  c->r[11]=c->r[1]+0x00000100u; // 802952B0
  c->lr=0x802952B8u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802952B4
  c->r[0]=R32(c->r[3]+0x000001B8u); // 802952B8
  c->r[24]=c->r[3]|c->r[3]; // 802952BC
  cmps(c,0,(int32_t)c->r[0],0); // 802952C0
  if (!crb(c,2)) { goto L_80295318; } // 802952C4
  c->r[0]=R32(c->r[3]+0x0000017Cu); // 802952C8
  cmps(c,0,(int32_t)c->r[0],0); // 802952CC
  if (!crb(c,2)) { goto L_80295318; } // 802952D0
  c->r[5]=R32(c->r[3]+0x000001E8u); // 802952D4
  c->r[0]=R32(c->r[5]+0x00000034u); // 802952D8
  cmps(c,0,(int32_t)c->r[0],0); // 802952DC
  if (crb(c,2)) { goto L_802952EC; } // 802952E0
  cmps(c,0,(int32_t)c->r[0],2); // 802952E4
  if (!crb(c,2)) { goto L_80295308; } // 802952E8
L_802952EC:;
  c->r[4]=0u+0x00000001u; // 802952EC
  c->r[0]=0u+0x00000000u; // 802952F0
  W32(c->r[5]+0x00000038u,c->r[4]); // 802952F4
  W32(c->r[5]+0x00000034u,c->r[4]); // 802952F8
  W8(c->r[5]+0x0000003Du,c->r[0]); // 802952FC
  W32(c->r[5]+0x00000040u,c->r[0]); // 80295300
  W32(c->r[5]+0x00000044u,c->r[0]); // 80295304
L_80295308:;
  c->r[0]=0u+0x00000001u; // 80295308
  c->r[4]=R32(c->r[3]+0x000001F8u); // 8029530C
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 80295310
  W32(c->r[4]+0x00000000u,c->r[0]); // 80295314
L_80295318:;
  c->r[4]=R32(c->r[3]+0x00000174u); // 80295318
  cmps(c,0,(int32_t)c->r[4],0); // 8029531C
  if (!crb(c,1)) { goto L_80295340; } // 80295320
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 80295324
  c->r[0]=0u+0x00000002u; // 80295328
  W32(c->r[3]+0x00000174u,c->r[4]); // 8029532C
  c->r[4]=R32(c->r[3]+0x000001F8u); // 80295330
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 80295334
  W32(c->r[4]+0x00000000u,c->r[0]); // 80295338
  goto L_80295AE8; // 8029533C
L_80295340:;
  c->r[0]=R32(c->r[3]+0x000001F0u); // 80295340
  cmps(c,0,(int32_t)c->r[0],1); // 80295344
  if (!crb(c,2)) { goto L_80295AE8; } // 80295348
  c->r[21]=c->r[1]+0x00000010u; // 8029534C
  c->r[30]=c->r[1]+0x00000020u; // 80295350
  c->r[19]=c->r[1]+0x00000018u; // 80295354
  c->r[22]=c->r[1]+0x00000008u; // 80295358
  c->r[25]=0u+0x00000000u; // 8029535C
  c->r[18]=0u+0x00000000u; // 80295360
  c->r[20]=0u+0x00000001u; // 80295364
  c->r[16]=0u+0x0000000Au; // 80295368
  c->r[17]=0u+0x00000800u; // 8029536C
  c->r[23]=0u+0x00000002u; // 80295370
  goto L_80295710; // 80295374
L_80295378:;
  c->r[0]=R32(c->r[24]+0x000001A0u); // 80295378
  cmps(c,0,(int32_t)c->r[0],0); // 8029537C
  if (!crb(c,2)) { goto L_80295420; } // 80295380
  c->r[27]=rotl(c->r[25],2)&0x000003FCu; // 80295384
  c->r[0]=R32(c->r[24]+0x00000188u); // 80295388
  c->r[29]=c->r[24]+c->r[27]; // 8029538C
  c->r[3]=R32(c->r[29]+0x00000180u); // 80295390
  c->r[31]=c->r[29]+0x00000180u; // 80295394
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80295398
  c->lr=0x802953A0u; f_801BA790(c); // 8029539C
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 802953A0
  c->r[28]=c->r[1]+0x00000068u; // 802953A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 802953A8
  c->r[4]=rotl(c->r[25],4)&0x00000FF0u; // 802953AC
  c->r[3]=c->r[28]|c->r[28]; // 802953B0
  c->r[26]=c->r[1]+0x00000048u; // 802953B4
  c->r[28]=c->r[28]+c->r[0]; // 802953B8
  c->r[7]=0u+0x00000002u; // 802953BC
  W16(c->r[28]+0x00000020u,c->r[17]); // 802953C0
  c->r[26]=c->r[26]+c->r[4]; // 802953C4
  c->r[3]=c->r[3]+c->r[0]; // 802953C8
  W16(c->r[28]+0x00000000u,c->r[18]); // 802953CC
  W16(c->r[28]+0x00000002u,c->r[18]); // 802953D0
  W16(c->r[28]+0x00000004u,c->r[18]); // 802953D4
  W16(c->r[28]+0x00000006u,c->r[18]); // 802953D8
  W16(c->r[28]+0x00000008u,c->r[18]); // 802953DC
  W16(c->r[28]+0x0000000Au,c->r[18]); // 802953E0
  W16(c->r[28]+0x0000000Cu,c->r[18]); // 802953E4
  W16(c->r[28]+0x0000000Eu,c->r[18]); // 802953E8
  W16(c->r[28]+0x00000010u,c->r[18]); // 802953EC
  W16(c->r[28]+0x00000012u,c->r[18]); // 802953F0
  W16(c->r[28]+0x00000014u,c->r[18]); // 802953F4
  W16(c->r[28]+0x00000016u,c->r[18]); // 802953F8
  W16(c->r[28]+0x00000018u,c->r[18]); // 802953FC
  W16(c->r[28]+0x0000001Au,c->r[18]); // 80295400
  W16(c->r[28]+0x0000001Cu,c->r[18]); // 80295404
  W16(c->r[28]+0x0000001Eu,c->r[18]); // 80295408
  W16(c->r[3]+0x00000022u,c->r[18]); // 8029540C
  W16(c->r[3]+0x00000024u,c->r[18]); // 80295410
  W16(c->r[26]+0x00000002u,c->r[16]); // 80295414
  W16(c->r[3]+0x00000026u,c->r[18]); // 80295418
  goto L_8029558C; // 8029541C
L_80295420:;
  c->r[27]=rotl(c->r[25],2)&0x000003FCu; // 80295420
  c->r[29]=c->r[24]+c->r[27]; // 80295424
  c->r[4]=R32(c->r[29]+0x000001A0u); // 80295428
  c->r[31]=c->r[29]+0x00000180u; // 8029542C
  c->r[3]=R32(c->r[29]+0x00000180u); // 80295430
  c->r[0]=R32(c->r[4]+0x00000004u); // 80295434
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80295438
  c->lr=0x80295440u; f_801BA790(c); // 8029543C
  c->r[0]=rotl(c->r[25],4)&0x00000FF0u; // 80295440
  c->r[26]=c->r[1]+0x00000048u; // 80295444
  c->r[26]=c->r[26]+c->r[0]; // 80295448
  c->r[28]=c->r[1]+0x00000068u; // 8029544C
  W16(c->r[26]+0x00000002u,c->r[18]); // 80295450
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 80295454
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 80295458
  c->r[7]=0u+0x00000004u; // 8029545C
  c->r[3]=R32(c->r[29]+0x000001A0u); // 80295460
  c->r[6]=0u+0x00000000u; // 80295464
  c->r[0]=R16(c->r[3]+0x0000003Cu); // 80295468
  c->r[28]=c->r[28]+c->r[5]; // 8029546C
  W16(c->r[28]+0x00000020u,c->r[0]); // 80295470
  c->ctr=c->r[23]; // 80295474
L_80295478:;
  c->r[8]=R32(c->r[29]+0x000001A0u); // 80295478
  c->r[0]=rotl(c->r[6],2)&0x000003FCu; // 8029547C
  c->r[3]=rotl(c->r[6],1)&0x000001FEu; // 80295480
  c->r[6]=c->r[6]+0x00000001u; // 80295484
  c->r[8]=c->r[8]+c->r[0]; // 80295488
  c->r[4]=c->r[28]+c->r[0]; // 8029548C
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 80295490
  c->r[10]=c->r[3]+0x00000001u; // 80295494
  c->r[9]=rotl(c->r[10],1)&0xFFFFFFFEu; // 80295498
  c->r[3]=rotl(c->r[6],1)&0x000001FEu; // 8029549C
  W16(c->r[28]+c->r[0],c->r[8]); // 802954A0
  c->r[0]=rotl(c->r[6],2)&0x000003FCu; // 802954A4
  c->r[10]=c->r[3]+0x00000001u; // 802954A8
  c->r[6]=c->r[6]+0x00000001u; // 802954AC
  c->r[8]=R32(c->r[29]+0x000001A0u); // 802954B0
  c->r[3]=rotl(c->r[6],1)&0x000001FEu; // 802954B4
  c->r[8]=c->r[8]+c->r[9]; // 802954B8
  c->r[9]=rotl(c->r[10],1)&0xFFFFFFFEu; // 802954BC
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 802954C0
  c->r[10]=c->r[3]+0x00000001u; // 802954C4
  W16(c->r[4]+0x00000002u,c->r[8]); // 802954C8
  c->r[4]=c->r[28]+c->r[0]; // 802954CC
  c->r[8]=R32(c->r[29]+0x000001A0u); // 802954D0
  c->r[8]=c->r[8]+c->r[0]; // 802954D4
  c->r[0]=rotl(c->r[6],2)&0x000003FCu; // 802954D8
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 802954DC
  c->r[6]=c->r[6]+0x00000001u; // 802954E0
  c->r[3]=rotl(c->r[6],1)&0x000001FEu; // 802954E4
  W16(c->r[4]+0x00000000u,c->r[8]); // 802954E8
  c->r[8]=R32(c->r[29]+0x000001A0u); // 802954EC
  c->r[8]=c->r[8]+c->r[9]; // 802954F0
  c->r[9]=rotl(c->r[10],1)&0xFFFFFFFEu; // 802954F4
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 802954F8
  c->r[10]=c->r[3]+0x00000001u; // 802954FC
  W16(c->r[4]+0x00000002u,c->r[8]); // 80295500
  c->r[4]=c->r[28]+c->r[0]; // 80295504
  c->r[8]=R32(c->r[29]+0x000001A0u); // 80295508
  c->r[8]=c->r[8]+c->r[0]; // 8029550C
  c->r[0]=rotl(c->r[6],2)&0x000003FCu; // 80295510
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 80295514
  c->r[6]=c->r[6]+0x00000001u; // 80295518
  W16(c->r[4]+0x00000000u,c->r[8]); // 8029551C
  c->r[8]=R32(c->r[29]+0x000001A0u); // 80295520
  c->r[8]=c->r[8]+c->r[9]; // 80295524
  c->r[9]=rotl(c->r[10],1)&0xFFFFFFFEu; // 80295528
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 8029552C
  W16(c->r[4]+0x00000002u,c->r[8]); // 80295530
  c->r[4]=c->r[28]+c->r[0]; // 80295534
  c->r[8]=R32(c->r[29]+0x000001A0u); // 80295538
  c->r[8]=c->r[8]+c->r[0]; // 8029553C
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 80295540
  W16(c->r[28]+c->r[0],c->r[8]); // 80295544
  c->r[8]=R32(c->r[29]+0x000001A0u); // 80295548
  c->r[8]=c->r[8]+c->r[9]; // 8029554C
  c->r[8]=R16(c->r[8]+0x0000001Cu); // 80295550
  W16(c->r[4]+0x00000002u,c->r[8]); // 80295554
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80295478; } // 80295558
  c->r[4]=c->r[24]+c->r[27]; // 8029555C
  c->r[6]=c->r[1]+0x00000068u; // 80295560
  c->r[3]=R32(c->r[4]+0x000001A0u); // 80295564
  c->r[6]=c->r[6]+c->r[5]; // 80295568
  c->r[0]=R16(c->r[3]+0x0000003Eu); // 8029556C
  W16(c->r[6]+0x00000022u,c->r[0]); // 80295570
  c->r[3]=R32(c->r[4]+0x000001A0u); // 80295574
  c->r[0]=R16(c->r[3]+0x00000040u); // 80295578
  W16(c->r[6]+0x00000024u,c->r[0]); // 8029557C
  c->r[3]=R32(c->r[4]+0x000001A0u); // 80295580
  c->r[0]=R16(c->r[3]+0x00000042u); // 80295584
  W16(c->r[6]+0x00000026u,c->r[0]); // 80295588
L_8029558C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8029558C
  cmpu(c,0,c->r[7],0x00000004u); // 80295590
  c->r[0]=c->r[3]+0x80000000u; // 80295594
  W32(c->r[30]+c->r[27],c->r[0]); // 80295598
  if (crb(c,2)) { goto L_802955B4; } // 8029559C
  c->r[0]=R32(c->r[30]+c->r[27]); // 802955A0
  c->r[31]=divwu(c->r[0],c->r[7]); // 802955A4
  W32(c->r[30]+c->r[27],c->r[31]); // 802955A8
  W32(c->r[19]+c->r[27],c->r[31]); // 802955AC
  goto L_802955CC; // 802955B0
L_802955B4:;
  c->r[3]=R32(c->r[29]+0x000001A0u); // 802955B4
  c->r[31]=R32(c->r[30]+c->r[27]); // 802955B8
  c->r[3]=R32(c->r[3]+0x00000018u); // 802955BC
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 802955C0
  c->r[0]=c->r[3]+c->r[0]; // 802955C4
  W32(c->r[19]+c->r[27],c->r[0]); // 802955C8
L_802955CC:;
  cmpu(c,0,c->r[7],0x00000004u); // 802955CC
  if (crb(c,2)) { goto L_80295638; } // 802955D0
  c->r[0]=R32(c->r[24]+0x0000018Cu); // 802955D4
  cmps(c,0,(int32_t)c->r[0],0); // 802955D8
  if (crb(c,2)) { goto L_80295618; } // 802955DC
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 802955E0
  W16(c->r[26]+0x00000000u,c->r[20]); // 802955E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 802955E8
  c->r[4]=c->r[1]+0x00000038u; // 802955EC
  c->r[3]=R32(c->r[24]+0x00000190u); // 802955F0
  c->r[4]=c->r[4]+c->r[0]; // 802955F4
  W16(c->r[4]+0x00000000u,c->r[18]); // 802955F8
  c->r[0]=c->r[3]+c->r[31]; // 802955FC
  W16(c->r[4]+0x00000002u,c->r[18]); // 80295600
  W16(c->r[4]+0x00000004u,c->r[18]); // 80295604
  W32(c->r[21]+c->r[27],c->r[0]); // 80295608
  c->r[3]=R32(c->r[29]+0x00000010u); // 8029560C
  c->lr=0x80295614u; f_801D78A8(c); // 80295610
  goto L_80295628; // 80295614
L_80295618:;
  W16(c->r[26]+0x00000000u,c->r[18]); // 80295618
  c->r[0]=R32(c->r[24]+0x00000198u); // 8029561C
  c->r[0]=divwu(c->r[0],c->r[7]); // 80295620
  W32(c->r[21]+c->r[27],c->r[0]); // 80295624
L_80295628:;
  c->r[0]=R32(c->r[24]+0x00000194u); // 80295628
  c->r[0]=c->r[0]+c->r[31]; // 8029562C
  W32(c->r[22]+c->r[27],c->r[0]); // 80295630
  goto L_802956C0; // 80295634
L_80295638:;
  c->r[3]=R32(c->r[29]+0x000001A0u); // 80295638
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 8029563C
  cmps(c,0,(int32_t)c->r[0],0); // 80295640
  if (crb(c,2)) { goto L_80295694; } // 80295644
  W16(c->r[26]+0x00000000u,c->r[20]); // 80295648
  c->r[7]=c->r[24]+c->r[27]; // 8029564C
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 80295650
  c->r[3]=c->r[1]+0x00000038u; // 80295654
  c->r[8]=R32(c->r[7]+0x000001A0u); // 80295658
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 8029565C
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80295660
  c->r[6]=R32(c->r[8]+0x00000010u); // 80295664
  c->r[0]=R16(c->r[8]+0x00000044u); // 80295668
  c->r[5]=c->r[6]+c->r[5]; // 8029566C
  {uint32_t ea=c->r[3]+c->r[4]; W16(ea,c->r[0]); c->r[3]=ea;} // 80295670
  c->r[4]=R32(c->r[7]+0x000001A0u); // 80295674
  W32(c->r[21]+c->r[27],c->r[5]); // 80295678
  c->r[0]=R16(c->r[4]+0x00000046u); // 8029567C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80295680
  c->r[4]=R32(c->r[7]+0x000001A0u); // 80295684
  c->r[0]=R16(c->r[4]+0x00000048u); // 80295688
  W16(c->r[3]+0x00000004u,c->r[0]); // 8029568C
  goto L_802956AC; // 80295690
L_80295694:;
  W16(c->r[26]+0x00000000u,c->r[18]); // 80295694
  c->r[3]=R32(c->r[24]+0x00000198u); // 80295698
  c->r[0]=c->r[3]+0x80000000u; // 8029569C
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802956A0
  c->r[0]=c->r[3]+0x00000002u; // 802956A4
  W32(c->r[21]+c->r[27],c->r[0]); // 802956A8
L_802956AC:;
  c->r[3]=R32(c->r[29]+0x000001A0u); // 802956AC
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 802956B0
  c->r[3]=R32(c->r[3]+0x00000014u); // 802956B4
  c->r[0]=c->r[3]+c->r[0]; // 802956B8
  W32(c->r[22]+c->r[27],c->r[0]); // 802956BC
L_802956C0:;
  c->r[5]=R32(c->r[21]+c->r[27]); // 802956C0
  c->r[29]=c->r[24]+c->r[27]; // 802956C4
  c->r[6]=R32(c->r[22]+c->r[27]); // 802956C8
  c->r[4]=c->r[26]|c->r[26]; // 802956CC
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 802956D0
  c->r[7]=R32(c->r[19]+c->r[27]); // 802956D4
  W16(c->r[26]+0x00000004u,c->r[0]); // 802956D8
  c->r[3]=rotl(c->r[6],16)&0x0000FFFFu; // 802956DC
  c->r[0]=rotl(c->r[7],16)&0x0000FFFFu; // 802956E0
  W16(c->r[26]+0x00000006u,c->r[5]); // 802956E4
  W16(c->r[26]+0x00000008u,c->r[3]); // 802956E8
  W16(c->r[26]+0x0000000Au,c->r[6]); // 802956EC
  W16(c->r[26]+0x0000000Cu,c->r[0]); // 802956F0
  W16(c->r[26]+0x0000000Eu,c->r[7]); // 802956F4
  c->r[3]=R32(c->r[29]+0x00000010u); // 802956F8
  c->lr=0x80295700u; f_801D761C(c); // 802956FC
  c->r[3]=R32(c->r[29]+0x00000010u); // 80295700
  c->r[4]=c->r[28]|c->r[28]; // 80295704
  c->lr=0x8029570Cu; f_801D7714(c); // 80295708
  c->r[25]=c->r[25]+0x00000001u; // 8029570C
L_80295710:;
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 80295710
  c->r[3]=rotl(c->r[25],0)&0x000000FFu; // 80295714
  cmpu(c,0,c->r[3],c->r[0]); // 80295718
  if (crb(c,0)) { IRQCHK(c); goto L_80295378; } // 8029571C
  c->r[3]=0u+0x00010000u; // 80295720
  c->r[0]=0u+0x00000000u; // 80295724
  c->r[3]=c->r[3]+0xFFFF8000u; // 80295728
  c->r[4]=0u+0x00000001u; // 8029572C
  W16(c->r[1]+0x00000028u,c->r[4]); // 80295730
  c->r[17]=0u+0x00000000u; // 80295734
  W16(c->r[1]+0x0000002Au,c->r[3]); // 80295738
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 8029573C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 80295740
  W16(c->r[1]+0x00000030u,c->r[0]); // 80295744
  W16(c->r[1]+0x00000032u,c->r[0]); // 80295748
  W16(c->r[1]+0x00000034u,c->r[0]); // 8029574C
  goto L_80295778; // 80295750
L_80295754:;
  c->r[0]=rotl(c->r[17],2)&0x000003FCu; // 80295754
  c->r[4]=0u+0x00000001u; // 80295758
  c->r[16]=c->r[24]+c->r[0]; // 8029575C
  c->r[3]=R32(c->r[16]+0x00000010u); // 80295760
  c->lr=0x80295768u; f_801D7150(c); // 80295764
  c->r[3]=R32(c->r[16]+0x00000010u); // 80295768
  c->r[4]=c->r[1]+0x00000028u; // 8029576C
  c->lr=0x80295774u; f_801D77AC(c); // 80295770
  c->r[17]=c->r[17]+0x00000001u; // 80295774
L_80295778:;
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 80295778
  c->r[3]=rotl(c->r[17],0)&0x000000FFu; // 8029577C
  cmpu(c,0,c->r[3],c->r[0]); // 80295780
  if (crb(c,0)) { IRQCHK(c); goto L_80295754; } // 80295784
  c->r[3]=R32(c->r[24]+0x000001A8u); // 80295788
  c->r[0]=R32(c->r[3]+0x00000000u); // 8029578C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80295790
  if (!crb(c,2)) { goto L_802957A0; } // 80295794
  c->r[0]=0u+0xFFFFFC40u; // 80295798
  goto L_802957D4; // 8029579C
L_802957A0:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802957A0
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[0]=RF64(ea);} // 802957A4
  fcmp(c,0,c->f[1],c->f[0]); // 802957A8
  if (!crb(c,1)) { goto L_802957D0; } // 802957AC
  c->lr=0x802957B4u; f_801F7384(c); // 802957B0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802957B4
  {uint32_t ea=c->r[2]+0xFFFFCDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802957B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802957BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802957C0
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 802957C4
  c->r[0]=R32(c->r[1]+0x000000BCu); // 802957C8
  goto L_802957D4; // 802957CC
L_802957D0:;
  c->r[0]=0u+0xFFFFFC40u; // 802957D0
L_802957D4:;
  c->r[4]=rotl(c->r[0],16)&0xFFFF0000u; // 802957D4
  c->r[5]=0u+0x00000000u; // 802957D8
  goto L_802957F4; // 802957DC
L_802957E0:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 802957E0
  c->r[5]=c->r[5]+0x00000001u; // 802957E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802957E8
  c->r[3]=c->r[24]+c->r[0]; // 802957EC
  W32(c->r[3]+0x0000011Cu,c->r[4]); // 802957F0
L_802957F4:;
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 802957F4
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 802957F8
  cmpu(c,0,c->r[3],c->r[0]); // 802957FC
  if (crb(c,0)) { IRQCHK(c); goto L_802957E0; } // 80295800
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[30]=RF64(ea);} // 80295804
  c->r[20]=0u+0x00000000u; // 80295808
  {uint32_t ea=c->r[2]+0xFFFFCDA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8029580C
  c->r[26]=0u+0xFC400000u; // 80295810
  c->r[23]=0u+0x00000000u; // 80295814
  c->r[25]=0u+0x00000001u; // 80295818
  goto L_80295A94; // 8029581C
L_80295820:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 80295820
  c->r[19]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80295824
  c->r[16]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295828
  c->r[3]=c->r[24]+c->r[19]; // 8029582C
  c->r[17]=c->r[3]+0x00000018u; // 80295830
  c->r[4]=c->r[24]+c->r[16]; // 80295834
  c->r[3]=c->r[17]|c->r[17]; // 80295838
  c->r[4]=c->r[4]+0x0000006Cu; // 8029583C
  c->lr=0x80295844u; f_801C5598(c); // 80295840
  c->r[4]=c->r[24]+c->r[16]; // 80295844
  c->r[3]=c->r[17]|c->r[17]; // 80295848
  c->r[4]=c->r[4]+0x00000084u; // 8029584C
  c->lr=0x80295854u; f_801C5598(c); // 80295850
  c->r[4]=c->r[24]+c->r[16]; // 80295854
  c->r[3]=c->r[17]|c->r[17]; // 80295858
  c->r[4]=c->r[4]+0x000000B4u; // 8029585C
  c->lr=0x80295864u; f_801C5598(c); // 80295860
  c->r[4]=c->r[24]+c->r[16]; // 80295864
  c->r[3]=c->r[17]|c->r[17]; // 80295868
  c->r[4]=c->r[4]+0x000000CCu; // 8029586C
  c->lr=0x80295874u; f_801C5598(c); // 80295870
  c->r[4]=c->r[24]+c->r[19]; // 80295874
  c->r[3]=c->r[17]|c->r[17]; // 80295878
  c->r[4]=c->r[4]+0x000000E4u; // 8029587C
  c->lr=0x80295884u; f_801C5598(c); // 80295880
  c->r[4]=c->r[24]+c->r[16]; // 80295884
  c->r[3]=c->r[17]|c->r[17]; // 80295888
  c->r[4]=c->r[4]+0x00000114u; // 8029588C
  c->lr=0x80295894u; f_801C5598(c); // 80295890
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 80295894
  cmpu(c,0,c->r[0],0x00000001u); // 80295898
  if (!crb(c,2)) { goto L_802958D0; } // 8029589C
  c->r[0]=R8(c->r[24]+0x0000019Cu); // 802958A0
  cmps(c,0,(int32_t)c->r[0],0); // 802958A4
  if (crb(c,2)) { goto L_802958C0; } // 802958A8
  c->r[4]=c->r[24]+c->r[16]; // 802958AC
  c->r[3]=c->r[17]|c->r[17]; // 802958B0
  c->r[4]=c->r[4]+0x0000009Cu; // 802958B4
  c->lr=0x802958BCu; f_801C5598(c); // 802958B8
  goto L_802958E0; // 802958BC
L_802958C0:;
  c->r[3]=c->r[17]|c->r[17]; // 802958C0
  c->r[4]=c->r[24]+0x00000040u; // 802958C4
  c->lr=0x802958CCu; f_801C5598(c); // 802958C8
  goto L_802958E0; // 802958CC
L_802958D0:;
  c->r[4]=c->r[24]+c->r[16]; // 802958D0
  c->r[3]=c->r[17]|c->r[17]; // 802958D4
  c->r[4]=c->r[4]+0x0000009Cu; // 802958D8
  c->lr=0x802958E0u; f_801C5598(c); // 802958DC
L_802958E0:;
  c->r[0]=rotl(c->r[20],0)&0x000000FFu; // 802958E0
  c->r[21]=0u+0x00000000u; // 802958E4
  c->r[17]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 802958E8
  c->r[18]=c->r[24]+c->r[17]; // 802958EC
  W32(c->r[18]+0x0000014Cu,c->r[26]); // 802958F0
  W32(c->r[18]+0x00000150u,c->r[26]); // 802958F4
  W32(c->r[18]+0x00000154u,c->r[26]); // 802958F8
  W32(c->r[18]+0x00000158u,c->r[26]); // 802958FC
  c->r[3]=R32(c->r[24]+0x000001A8u); // 80295900
  c->r[0]=R32(c->r[3]+0x00000000u); // 80295904
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80295908
  if (crb(c,2)) { goto L_80295948; } // 8029590C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80295910
  c->r[21]=0u+0x00000001u; // 80295914
  fcmp(c,0,c->f[1],c->f[30]); // 80295918
  if (!crb(c,1)) { goto L_8029593C; } // 8029591C
  c->lr=0x80295924u; f_801F7384(c); // 80295920
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80295924
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80295928
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8029592C
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 80295930
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80295934
  goto L_80295940; // 80295938
L_8029593C:;
  c->r[0]=0u+0xFFFFFC40u; // 8029593C
L_80295940:;
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 80295940
  W32(c->r[18]+0x0000014Cu,c->r[0]); // 80295944
L_80295948:;
  c->r[3]=R32(c->r[24]+0x000001A8u); // 80295948
  c->r[0]=R32(c->r[3]+0x00000000u); // 8029594C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 80295950
  if (crb(c,2)) { goto L_80295990; } // 80295954
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80295958
  c->r[21]=0u+0x00000001u; // 8029595C
  fcmp(c,0,c->f[1],c->f[30]); // 80295960
  if (!crb(c,1)) { goto L_80295984; } // 80295964
  c->lr=0x8029596Cu; f_801F7384(c); // 80295968
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8029596C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80295970
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80295974
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 80295978
  c->r[0]=R32(c->r[1]+0x000000BCu); // 8029597C
  goto L_80295988; // 80295980
L_80295984:;
  c->r[0]=0u+0xFFFFFC40u; // 80295984
L_80295988:;
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 80295988
  W32(c->r[18]+0x00000150u,c->r[0]); // 8029598C
L_80295990:;
  c->r[3]=R32(c->r[24]+0x000001A8u); // 80295990
  c->r[0]=R32(c->r[3]+0x00000000u); // 80295994
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 80295998
  if (crb(c,2)) { goto L_802959D8; } // 8029599C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802959A0
  c->r[21]=0u+0x00000001u; // 802959A4
  fcmp(c,0,c->f[1],c->f[30]); // 802959A8
  if (!crb(c,1)) { goto L_802959CC; } // 802959AC
  c->lr=0x802959B4u; f_801F7384(c); // 802959B0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802959B4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 802959B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802959BC
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 802959C0
  c->r[0]=R32(c->r[1]+0x000000BCu); // 802959C4
  goto L_802959D0; // 802959C8
L_802959CC:;
  c->r[0]=0u+0xFFFFFC40u; // 802959CC
L_802959D0:;
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 802959D0
  W32(c->r[18]+0x00000154u,c->r[0]); // 802959D4
L_802959D8:;
  c->r[3]=R32(c->r[24]+0x000001A8u); // 802959D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 802959DC
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 802959E0
  if (crb(c,2)) { goto L_80295A20; } // 802959E4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802959E8
  c->r[21]=0u+0x00000001u; // 802959EC
  fcmp(c,0,c->f[1],c->f[30]); // 802959F0
  if (!crb(c,1)) { goto L_80295A14; } // 802959F4
  c->lr=0x802959FCu; f_801F7384(c); // 802959F8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802959FC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80295A00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80295A04
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 80295A08
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80295A0C
  goto L_80295A18; // 80295A10
L_80295A14:;
  c->r[0]=0u+0xFFFFFC40u; // 80295A14
L_80295A18:;
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 80295A18
  W32(c->r[18]+0x00000158u,c->r[0]); // 80295A1C
L_80295A20:;
  cmps(c,0,(int32_t)c->r[21],0); // 80295A20
  if (crb(c,2)) { goto L_80295A34; } // 80295A24
  c->r[3]=c->r[24]+c->r[16]; // 80295A28
  W16(c->r[3]+0x00000134u,c->r[25]); // 80295A2C
  goto L_80295A3C; // 80295A30
L_80295A34:;
  c->r[3]=c->r[24]+c->r[16]; // 80295A34
  W16(c->r[3]+0x00000134u,c->r[23]); // 80295A38
L_80295A3C:;
  c->r[3]=c->r[24]+c->r[19]; // 80295A3C
  c->r[4]=c->r[24]+c->r[16]; // 80295A40
  c->r[16]=c->r[3]+0x00000018u; // 80295A44
  c->r[3]=c->r[16]|c->r[16]; // 80295A48
  c->r[4]=c->r[4]+0x0000012Cu; // 80295A4C
  c->lr=0x80295A54u; f_801C5598(c); // 80295A50
  c->r[4]=c->r[24]+c->r[17]; // 80295A54
  c->r[3]=c->r[16]|c->r[16]; // 80295A58
  c->r[4]=c->r[4]+0x00000144u; // 80295A5C
  c->lr=0x80295A64u; f_801C5598(c); // 80295A60
  c->r[3]=c->r[16]|c->r[16]; // 80295A64
  c->lr=0x80295A6Cu; f_801C4BA8(c); // 80295A68
  c->r[0]=rotl(c->r[20],2)&0x000003FCu; // 80295A6C
  c->r[16]=c->r[24]+c->r[0]; // 80295A70
  W32(c->r[16]+0x0000010Cu,c->r[25]); // 80295A74
  c->r[3]=R32(c->r[16]+0x00000010u); // 80295A78
  c->lr=0x80295A80u; f_801DCF50(c); // 80295A7C
  c->r[3]=R32(c->r[16]+0x00000010u); // 80295A80
  c->lr=0x80295A88u; f_801DCF98(c); // 80295A84
  c->r[3]=R32(c->r[16]+0x00000010u); // 80295A88
  c->lr=0x80295A90u; f_801DCFE0(c); // 80295A8C
  c->r[20]=c->r[20]+0x00000001u; // 80295A90
L_80295A94:;
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 80295A94
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 80295A98
  cmpu(c,0,c->r[3],c->r[0]); // 80295A9C
  if (crb(c,0)) { IRQCHK(c); goto L_80295820; } // 80295AA0
  c->r[17]=0u+0x00000000u; // 80295AA4
  c->r[16]=0u+0x00000003u; // 80295AA8
  goto L_80295AD8; // 80295AAC
L_80295AB0:;
  c->r[0]=rotl(c->r[17],2)&0x000003FCu; // 80295AB0
  c->r[4]=0u+0x00000001u; // 80295AB4
  c->r[3]=c->r[24]+c->r[0]; // 80295AB8
  c->r[3]=R32(c->r[3]+0x00000010u); // 80295ABC
  c->lr=0x80295AC4u; f_801D7210(c); // 80295AC0
  W32(c->r[24]+0x0000017Cu,c->r[16]); // 80295AC4
  c->r[17]=c->r[17]+0x00000001u; // 80295AC8
  c->r[3]=R32(c->r[24]+0x000001F8u); // 80295ACC
  W32(c->r[24]+0x000001F0u,c->r[16]); // 80295AD0
  W32(c->r[3]+0x00000000u,c->r[16]); // 80295AD4
L_80295AD8:;
  c->r[0]=R8(c->r[24]+0x0000019Fu); // 80295AD8
  c->r[3]=rotl(c->r[17],0)&0x000000FFu; // 80295ADC
  cmpu(c,0,c->r[3],c->r[0]); // 80295AE0
  if (crb(c,0)) { IRQCHK(c); goto L_80295AB0; } // 80295AE4
L_80295AE8:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80295AE8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 80295AEC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 80295AF0
  c->r[11]=c->r[1]+0x00000100u; // 80295AF4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 80295AF8
  c->lr=0x80295B00u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80295AFC
  c->r[0]=R32(c->r[1]+0x00000124u); // 80295B00
  c->lr=c->r[0]; // 80295B04
  c->r[1]=c->r[1]+0x00000120u; // 80295B08
  return; // 80295B0C
}

// fn_80295B10
void f_80295B10(Ctx* __restrict c) {
  trace_call(0x80295B10u);
  c->r[0]=R32(c->r[3]+0x000001F0u); // 80295B10
  cmps(c,0,(int32_t)c->r[0],3); // 80295B14
  if (!crb(c,2)) { goto L_80295B78; } // 80295B18
  c->r[6]=0u+0x00000000u; // 80295B1C
  c->r[5]=0u+0xFC400000u; // 80295B20
  goto L_80295B64; // 80295B24
L_80295B28:;
  c->r[0]=R32(c->r[3]+0x00000178u); // 80295B28
  cmps(c,0,(int32_t)c->r[0],0); // 80295B2C
  if (crb(c,2)) { goto L_80295B4C; } // 80295B30
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 80295B34
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 80295B38
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80295B3C
  c->r[4]=c->r[3]+c->r[4]; // 80295B40
  W32(c->r[4]+0x000000ECu,c->r[0]); // 80295B44
  goto L_80295B5C; // 80295B48
L_80295B4C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 80295B4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80295B50
  c->r[4]=c->r[3]+c->r[0]; // 80295B54
  W32(c->r[4]+0x000000ECu,c->r[5]); // 80295B58
L_80295B5C:;
  W32(c->r[4]+0x000000F0u,c->r[5]); // 80295B5C
  c->r[6]=c->r[6]+0x00000001u; // 80295B60
L_80295B64:;
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295B64
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 80295B68
  cmpu(c,0,c->r[4],c->r[0]); // 80295B6C
  if (crb(c,0)) { IRQCHK(c); goto L_80295B28; } // 80295B70
  return; // 80295B74
L_80295B78:;
  c->r[0]=0u+0x00000000u; // 80295B78
  W32(c->r[3]+0x000001F0u,c->r[0]); // 80295B7C
  return; // 80295B80
}

// fn_80295B84
void f_80295B84(Ctx* __restrict c) {
  trace_call(0x80295B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295B84
  c->r[0]=c->lr; // 80295B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80295B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80295B90
  c->r[31]=0u+0x00000000u; // 80295B94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80295B98
  c->r[30]=c->r[3]|c->r[3]; // 80295B9C
  goto L_80295BBC; // 80295BA0
L_80295BA4:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 80295BA4
  c->r[4]=0u+0x00000000u; // 80295BA8
  c->r[3]=c->r[30]+c->r[0]; // 80295BAC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80295BB0
  c->lr=0x80295BB8u; f_801D7210(c); // 80295BB4
  c->r[31]=c->r[31]+0x00000001u; // 80295BB8
L_80295BBC:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80295BBC
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 80295BC0
  cmpu(c,0,c->r[3],c->r[0]); // 80295BC4
  if (crb(c,0)) { IRQCHK(c); goto L_80295BA4; } // 80295BC8
  c->r[0]=0u+0x00000000u; // 80295BCC
  W32(c->r[30]+0x000001F0u,c->r[0]); // 80295BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80295BD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80295BD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80295BDC
  c->lr=c->r[0]; // 80295BE0
  c->r[1]=c->r[1]+0x00000010u; // 80295BE4
  return; // 80295BE8
}

// fn_80295BEC
void f_80295BEC(Ctx* __restrict c) {
  trace_call(0x80295BECu);
  W32(c->r[3]+0x000001ACu,c->r[4]); // 80295BEC
  c->r[7]=0u+0x00000000u; // 80295BF0
  c->r[6]=0u+0xD5D00000u; // 80295BF4
  goto L_80295C34; // 80295BF8
L_80295BFC:;
  c->r[0]=R32(c->r[3]+0x000001ACu); // 80295BFC
  cmps(c,0,(int32_t)c->r[0],0); // 80295C00
  if (crb(c,2)) { goto L_80295C1C; } // 80295C04
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 80295C08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295C0C
  c->r[4]=c->r[3]+c->r[0]; // 80295C10
  W32(c->r[4]+0x00000074u,c->r[6]); // 80295C14
  goto L_80295C30; // 80295C18
L_80295C1C:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 80295C1C
  c->r[5]=R32(c->r[3]+0x000001B4u); // 80295C20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295C24
  c->r[4]=c->r[3]+c->r[0]; // 80295C28
  W32(c->r[4]+0x00000074u,c->r[5]); // 80295C2C
L_80295C30:;
  c->r[7]=c->r[7]+0x00000001u; // 80295C30
L_80295C34:;
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295C34
  c->r[4]=rotl(c->r[7],0)&0x000000FFu; // 80295C38
  cmpu(c,0,c->r[4],c->r[0]); // 80295C3C
  if (crb(c,0)) { IRQCHK(c); goto L_80295BFC; } // 80295C40
  return; // 80295C44
}

// fn_80295C48
void f_80295C48(Ctx* __restrict c) {
  trace_call(0x80295C48u);
  c->r[3]=R32(c->r[3]+0x000001ACu); // 80295C48
  return; // 80295C4C
}

// fn_80295C50
void f_80295C50(Ctx* __restrict c) {
  trace_call(0x80295C50u);
  W32(c->r[3]+0x000001BCu,c->r[4]); // 80295C50
  W32(c->r[3]+0x000001C0u,c->r[5]); // 80295C54
  return; // 80295C58
}

// fn_80295C5C
void f_80295C5C(Ctx* __restrict c) {
  trace_call(0x80295C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295C5C
  c->r[0]=c->lr; // 80295C60
  W32(c->r[1]+0x00000054u,c->r[0]); // 80295C64
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80295C68
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80295C6C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80295C70
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80295C74
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 80295C78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80295C7C
  c->f[29]=c->f[1]; // 80295C80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80295C84
  W32(c->r[1]+0x00000018u,c->r[30]); // 80295C88
  c->r[30]=c->r[3]|c->r[3]; // 80295C8C
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295C90
  cmpu(c,0,c->r[0],0x00000002u); // 80295C94
  if (!crb(c,2)) { goto L_80295CA8; } // 80295C98
  {uint32_t ea=c->r[2]+0xFFFFCDB0u; c->f[0]=RF64(ea);} // 80295C9C
  c->f[29]=c->f[1]*c->f[0]; // 80295CA0
  c->f[29]=c->ps1[29]=S(c->f[29]); // 80295CA4
L_80295CA8:;
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[30]=RF64(ea);} // 80295CA8
  c->r[31]=0u+0x00000000u; // 80295CAC
  {uint32_t ea=c->r[2]+0xFFFFCDA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80295CB0
  goto L_80295CFC; // 80295CB4
L_80295CB8:;
  fcmp(c,0,c->f[29],c->f[30]); // 80295CB8
  if (!crb(c,1)) { goto L_80295CE0; } // 80295CBC
  c->f[1]=c->f[29]; // 80295CC0
  c->lr=0x80295CC8u; f_801F7384(c); // 80295CC4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80295CC8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80295CCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80295CD0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80295CD4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80295CD8
  goto L_80295CE4; // 80295CDC
L_80295CE0:;
  c->r[3]=0u+0xFFFFFC40u; // 80295CE0
L_80295CE4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80295CE4
  c->r[4]=rotl(c->r[3],16)&0xFFFF0000u; // 80295CE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295CEC
  c->r[31]=c->r[31]+0x00000001u; // 80295CF0
  c->r[3]=c->r[30]+c->r[0]; // 80295CF4
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80295CF8
L_80295CFC:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80295CFC
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 80295D00
  cmpu(c,0,c->r[3],c->r[0]); // 80295D04
  if (crb(c,0)) { IRQCHK(c); goto L_80295CB8; } // 80295D08
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80295D0C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80295D10
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80295D14
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80295D18
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 80295D1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 80295D20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80295D24
  c->r[0]=R32(c->r[1]+0x00000054u); // 80295D28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80295D2C
  c->lr=c->r[0]; // 80295D30
  c->r[1]=c->r[1]+0x00000050u; // 80295D34
  return; // 80295D38
}

// fn_80295D3C
void f_80295D3C(Ctx* __restrict c) {
  trace_call(0x80295D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295D3C
  c->r[0]=R32(c->r[3]+0x000001ACu); // 80295D40
  cmps(c,0,(int32_t)c->r[0],0); // 80295D44
  if (crb(c,2)) { goto L_80295D64; } // 80295D48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80295D4C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80295D50
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80295D54
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 80295D58
  W32(c->r[3]+0x000001B4u,c->r[0]); // 80295D5C
  goto L_80295DA4; // 80295D60
L_80295D64:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80295D64
  c->r[6]=0u+0x00000000u; // 80295D68
  goto L_80295D94; // 80295D6C
L_80295D70:;
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80295D70
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 80295D74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295D78
  c->r[6]=c->r[6]+0x00000001u; // 80295D7C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80295D80
  c->r[5]=rotl(c->r[4],16)&0xFFFF0000u; // 80295D84
  W32(c->r[3]+0x000001B4u,c->r[5]); // 80295D88
  c->r[4]=c->r[3]+c->r[0]; // 80295D8C
  W32(c->r[4]+0x00000074u,c->r[5]); // 80295D90
L_80295D94:;
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295D94
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 80295D98
  cmpu(c,0,c->r[4],c->r[0]); // 80295D9C
  if (crb(c,0)) { IRQCHK(c); goto L_80295D70; } // 80295DA0
L_80295DA4:;
  c->r[1]=c->r[1]+0x00000010u; // 80295DA4
  return; // 80295DA8
}

// fn_80295DAC
void f_80295DAC(Ctx* __restrict c) {
  trace_call(0x80295DACu);
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295DAC
  cmpu(c,0,c->r[0],0x00000001u); // 80295DB0
  if (!crb(c,2)) { goto L_80295DC4; } // 80295DB4
  W8(c->r[3]+0x000000A4u,c->r[4]); // 80295DB8
  W8(c->r[3]+0x000000A5u,c->r[5]); // 80295DBC
  return; // 80295DC0
L_80295DC4:;
  c->r[4]=0u+0x00000000u; // 80295DC4
  c->r[0]=0u+0x0000007Fu; // 80295DC8
  W8(c->r[3]+0x000000A4u,c->r[4]); // 80295DCC
  W8(c->r[3]+0x000000A5u,c->r[5]); // 80295DD0
  W8(c->r[3]+0x000000B0u,c->r[0]); // 80295DD4
  W8(c->r[3]+0x000000B1u,c->r[5]); // 80295DD8
  return; // 80295DDC
}

// fn_80295DE0
void f_80295DE0(Ctx* __restrict c) {
  trace_call(0x80295DE0u);
  W8(c->r[3]+0x0000019Cu,c->r[4]); // 80295DE0
  return; // 80295DE4
}

// fn_80295DE8
void f_80295DE8(Ctx* __restrict c) {
  trace_call(0x80295DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295DE8
  c->r[0]=c->lr; // 80295DEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80295DF0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80295DF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80295DF8
  c->f[31]=c->f[2]; // 80295DFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80295E00
  c->r[31]=c->r[3]|c->r[3]; // 80295E04
  c->r[0]=R8(c->r[3]+0x0000019Cu); // 80295E08
  cmps(c,0,(int32_t)c->r[0],0); // 80295E0C
  if (!crb(c,2)) { goto L_80295EA4; } // 80295E10
  c->f[2]=std::fabs(c->f[1]); // 80295E14
  {uint32_t ea=c->r[2]+0xFFFFCDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80295E18
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80295E1C
  fcmp(c,0,c->f[2],c->f[0]); // 80295E20
  if (!crb(c,1)) { goto L_80295E7C; } // 80295E24
  c->lr=0x80295E2Cu; f_801E7834(c); // 80295E28
  c->r[4]=0u+0x6C170000u; // 80295E2C
  c->r[0]=0u+0x43300000u; // 80295E30
  c->r[4]=c->r[4]+0xFFFFC16Du; // 80295E34
  W32(c->r[1]+0x00000008u,c->r[0]); // 80295E38
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 80295E3C
  {uint32_t ea=c->r[2]+0xFFFFCD98u; c->f[2]=RF64(ea);} // 80295E40
  {uint32_t ea=c->r[2]+0xFFFFCDBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80295E44
  c->r[0]=c->r[3]-c->r[4]; // 80295E48
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80295E4C
  c->r[0]=c->r[0]+c->r[4]; // 80295E50
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; // 80295E54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)360); // 80295E58
  c->r[0]=c->r[3]-c->r[0]; // 80295E5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80295E60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80295E64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80295E68
  fcmp(c,0,c->f[1],c->f[0]); // 80295E6C
  if (!crb(c,0)) { goto L_80295E7C; } // 80295E70
  {uint32_t ea=c->r[2]+0xFFFFCDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80295E74
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80295E78
L_80295E7C:;
  {uint32_t ea=c->r[2]+0xFFFFCDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80295E7C
  c->r[0]=0u+0x00000001u; // 80295E80
  {uint32_t ea=c->r[2]+0xFFFFCDC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80295E84
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80295E88
  {uint32_t ea=c->r[2]+0xFFFFCDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80295E8C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[31]);} // 80295E90
  W32(c->r[31]+0x00000058u,c->r[0]); // 80295E94
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80295E98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80295E9C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 80295EA0
L_80295EA4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80295EA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80295EA8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80295EAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80295EB0
  c->lr=c->r[0]; // 80295EB4
  c->r[1]=c->r[1]+0x00000030u; // 80295EB8
  return; // 80295EBC
}

// fn_80295EC0
void f_80295EC0(Ctx* __restrict c) {
  trace_call(0x80295EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295EC0
  c->r[0]=c->lr; // 80295EC4
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[0]=RF64(ea);} // 80295EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80295ECC
  fcmp(c,0,c->f[1],c->f[0]); // 80295ED0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80295ED4
  c->r[31]=c->r[4]|c->r[4]; // 80295ED8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80295EDC
  c->r[30]=c->r[3]|c->r[3]; // 80295EE0
  if (!crb(c,1)) { goto L_80295F08; } // 80295EE4
  c->lr=0x80295EECu; f_801F7384(c); // 80295EE8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80295EEC
  {uint32_t ea=c->r[2]+0xFFFFCDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80295EF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80295EF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80295EF8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80295EFC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80295F00
  goto L_80295F0C; // 80295F04
L_80295F08:;
  c->r[0]=0u+0xFFFFFC40u; // 80295F08
L_80295F0C:;
  cmps(c,0,(int32_t)c->r[31],1); // 80295F0C
  c->r[4]=rotl(c->r[0],16)&0xFFFF0000u; // 80295F10
  if (crb(c,2)) { goto L_80295F58; } // 80295F14
  if (!crb(c,0)) { goto L_80295F84; } // 80295F18
  cmps(c,0,(int32_t)c->r[31],0); // 80295F1C
  if (!crb(c,0)) { goto L_80295F28; } // 80295F20
  goto L_80295F84; // 80295F24
L_80295F28:;
  c->r[5]=0u+0x00000000u; // 80295F28
  goto L_80295F44; // 80295F2C
L_80295F30:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 80295F30
  c->r[5]=c->r[5]+0x00000001u; // 80295F34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295F38
  c->r[3]=c->r[30]+c->r[0]; // 80295F3C
  W32(c->r[3]+0x000000BCu,c->r[4]); // 80295F40
L_80295F44:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80295F44
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80295F48
  cmpu(c,0,c->r[3],c->r[0]); // 80295F4C
  if (crb(c,0)) { IRQCHK(c); goto L_80295F30; } // 80295F50
  goto L_80295F84; // 80295F54
L_80295F58:;
  c->r[5]=0u+0x00000000u; // 80295F58
  goto L_80295F74; // 80295F5C
L_80295F60:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 80295F60
  c->r[5]=c->r[5]+0x00000001u; // 80295F64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80295F68
  c->r[3]=c->r[30]+c->r[0]; // 80295F6C
  W32(c->r[3]+0x000000D4u,c->r[4]); // 80295F70
L_80295F74:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 80295F74
  c->r[3]=rotl(c->r[5],0)&0x000000FFu; // 80295F78
  cmpu(c,0,c->r[3],c->r[0]); // 80295F7C
  if (crb(c,0)) { IRQCHK(c); goto L_80295F60; } // 80295F80
L_80295F84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80295F84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80295F88
  c->r[30]=R32(c->r[1]+0x00000018u); // 80295F8C
  c->lr=c->r[0]; // 80295F90
  c->r[1]=c->r[1]+0x00000020u; // 80295F94
  return; // 80295F98
}

// fn_80295F9C
void f_80295F9C(Ctx* __restrict c) {
  trace_call(0x80295F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295F9C
  c->r[0]=R32(c->r[3]+0x0000017Cu); // 80295FA0
  cmps(c,0,(int32_t)c->r[0],2); // 80295FA4
  if (crb(c,2)) { goto L_80295FC4; } // 80295FA8
  cmps(c,0,(int32_t)c->r[0],3); // 80295FAC
  if (crb(c,2)) { goto L_80295FC4; } // 80295FB0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80295FB4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80295FB8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80295FBC
  W32(c->r[3]+0x00000174u,c->r[0]); // 80295FC0
L_80295FC4:;
  c->r[1]=c->r[1]+0x00000010u; // 80295FC4
  return; // 80295FC8
}

// fn_80295FCC
void f_80295FCC(Ctx* __restrict c) {
  trace_call(0x80295FCCu);
  W32(c->r[3]+0x000001B8u,c->r[4]); // 80295FCC
  return; // 80295FD0
}

// fn_80295FD4
void f_80295FD4(Ctx* __restrict c) {
  trace_call(0x80295FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80295FD4
  c->r[0]=c->lr; // 80295FD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80295FDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80295FE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80295FE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80295FE8
  c->r[29]=c->r[3]|c->r[3]; // 80295FEC
  c->r[6]=R32(c->r[3]+0x000001B8u); // 80295FF0
  cmps(c,0,(int32_t)c->r[6],0); // 80295FF4
  if (crb(c,2)) { goto L_80296050; } // 80295FF8
  c->r[0]=R8(c->r[3]+0x0000019Fu); // 80295FFC
  W32(c->r[3]+0x00000180u,c->r[4]); // 80296000
  cmpu(c,0,c->r[0],0x00000002u); // 80296004
  W32(c->r[3]+0x00000188u,c->r[5]); // 80296008
  if (!crb(c,2)) { goto L_802960A8; } // 8029600C
  cmps(c,0,(int32_t)c->r[6],3); // 80296010
  if (!crb(c,2)) { goto L_80296040; } // 80296014
  c->r[4]=R32(c->r[3]+0x000001A0u); // 80296018
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029601C
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFF8u; cr0(c,c->r[4]); // 80296020
  c->r[5]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80296024
  if (crb(c,2)) { goto L_80296030; } // 80296028
  c->r[5]=c->r[4]+0x00000008u; // 8029602C
L_80296030:;
  c->r[0]=R32(c->r[3]+0x00000180u); // 80296030
  c->r[0]=c->r[0]+c->r[5]; // 80296034
  W32(c->r[3]+0x00000184u,c->r[0]); // 80296038
  goto L_802960A8; // 8029603C
L_80296040:;
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80296040
  c->r[0]=c->r[4]+c->r[0]; // 80296044
  W32(c->r[3]+0x00000184u,c->r[0]); // 80296048
  goto L_802960A8; // 8029604C
L_80296050:;
  c->r[30]=0u+0x00000000u; // 80296050
  goto L_80296098; // 80296054
L_80296058:;
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 80296058
  c->r[6]=c->r[1]+0x00000008u; // 8029605C
  c->r[31]=c->r[29]+c->r[0]; // 80296060
  c->r[4]=0u+0x00000000u; // 80296064
  c->r[3]=R32(c->r[31]+0x000001C8u); // 80296068
  c->r[5]=0u+0xFFFFFFFFu; // 8029606C
  c->lr=0x80296074u; f_8029E25C(c); // 80296070
  c->r[0]=R32(c->r[1]+0x00000008u); // 80296074
  c->r[5]=c->r[1]+0x00000008u; // 80296078
  c->r[4]=0u+0x00000000u; // 8029607C
  W32(c->r[31]+0x00000180u,c->r[0]); // 80296080
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80296084
  W32(c->r[29]+0x00000188u,c->r[0]); // 80296088
  c->r[3]=R32(c->r[31]+0x000001C8u); // 8029608C
  c->lr=0x80296094u; f_8029E26C(c); // 80296090
  c->r[30]=c->r[30]+0x00000001u; // 80296094
L_80296098:;
  c->r[0]=R8(c->r[29]+0x0000019Fu); // 80296098
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8029609C
  cmpu(c,0,c->r[3],c->r[0]); // 802960A0
  if (crb(c,0)) { IRQCHK(c); goto L_80296058; } // 802960A4
L_802960A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802960A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802960AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802960B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802960B4
  c->lr=c->r[0]; // 802960B8
  c->r[1]=c->r[1]+0x00000020u; // 802960BC
  return; // 802960C0
}

// fn_802960C4
void f_802960C4(Ctx* __restrict c) {
  trace_call(0x802960C4u);
  c->r[0]=R32(c->r[3]+0x000001B8u); // 802960C4
  cmps(c,0,(int32_t)c->r[0],0); // 802960C8
  if (crb(c,2)) { goto L_80296100; } // 802960CC
  cmps(c,0,(int32_t)c->r[4],0); // 802960D0
  if (crb(c,2)) { goto L_802960E8; } // 802960D4
  W32(c->r[3]+0x0000018Cu,c->r[4]); // 802960D8
  W32(c->r[3]+0x00000190u,c->r[5]); // 802960DC
  W32(c->r[3]+0x00000194u,c->r[6]); // 802960E0
  return; // 802960E4
L_802960E8:;
  c->r[6]=R32(c->r[3]+0x00000188u); // 802960E8
  W32(c->r[3]+0x0000018Cu,c->r[4]); // 802960EC
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802960F0
  W32(c->r[3]+0x00000190u,c->r[5]); // 802960F4
  W32(c->r[3]+0x00000194u,c->r[0]); // 802960F8
  return; // 802960FC
L_80296100:;
  c->r[0]=R32(c->r[3]+0x00000188u); // 80296100
  c->r[4]=0u+0x00000001u; // 80296104
  W32(c->r[3]+0x0000018Cu,c->r[4]); // 80296108
  c->r[5]=0u+0x00000000u; // 8029610C
  c->r[4]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80296110
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80296114
  W32(c->r[3]+0x00000190u,c->r[5]); // 80296118
  W32(c->r[3]+0x00000194u,c->r[0]); // 8029611C
  return; // 80296120
}

// fn_80296124
void f_80296124(Ctx* __restrict c) {
  trace_call(0x80296124u);
  W32(c->r[3]+0x000001A0u,c->r[4]); // 80296124
  W32(c->r[3]+0x000001A4u,c->r[5]); // 80296128
  return; // 8029612C
}

// fn_80296130
void f_80296130(Ctx* __restrict c) {
  trace_call(0x80296130u);
  W32(c->r[3]+0x000001A8u,c->r[4]); // 80296130
  return; // 80296134
}

// fn_80296138
void f_80296138(Ctx* __restrict c) {
  trace_call(0x80296138u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296138
  c->r[0]=c->lr; // 8029613C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80296140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80296144
  W32(c->r[1]+0x00000008u,c->r[30]); // 80296148
  c->r[30]=c->r[3]|c->r[3]; // 8029614C
  c->r[0]=R32(c->r[3]+0x0000017Cu); // 80296150
  cmps(c,0,(int32_t)c->r[0],2); // 80296154
  if (!crb(c,2)) { goto L_80296170; } // 80296158
  c->r[4]=R32(c->r[3]+0x000001F8u); // 8029615C
  c->r[0]=0u+0x00000002u; // 80296160
  c->r[3]=0u+0x00000002u; // 80296164
  W32(c->r[4]+0x00000000u,c->r[0]); // 80296168
  goto L_80296268; // 8029616C
L_80296170:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 80296170
  cmps(c,0,(int32_t)c->r[4],0); // 80296174
  if (crb(c,2)) { goto L_80296258; } // 80296178
  c->r[0]=R16(c->r[4]+0x00000038u); // 8029617C
  cmpu(c,0,c->r[0],0x00000001u); // 80296180
  if (!crb(c,2)) { goto L_802961E8; } // 80296184
  c->r[3]=R32(c->r[3]+0x000000F4u); // 80296188
  c->r[0]=c->r[3]+0x03C00000u; // 8029618C
  cmpu(c,0,c->r[0],0x00000000u); // 80296190
  if (!crb(c,2)) { goto L_802961E0; } // 80296194
  c->r[31]=0u+0x00000000u; // 80296198
  goto L_802961B8; // 8029619C
L_802961A0:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 802961A0
  c->r[4]=0u+0x00000000u; // 802961A4
  c->r[3]=c->r[30]+c->r[0]; // 802961A8
  c->r[3]=R32(c->r[3]+0x00000010u); // 802961AC
  c->lr=0x802961B4u; f_801D7210(c); // 802961B0
  c->r[31]=c->r[31]+0x00000001u; // 802961B4
L_802961B8:;
  c->r[0]=R8(c->r[30]+0x0000019Fu); // 802961B8
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 802961BC
  cmpu(c,0,c->r[3],c->r[0]); // 802961C0
  if (crb(c,0)) { IRQCHK(c); goto L_802961A0; } // 802961C4
  c->r[0]=0u+0x00000000u; // 802961C8
  c->r[4]=R32(c->r[30]+0x000001F8u); // 802961CC
  W32(c->r[30]+0x000001F0u,c->r[0]); // 802961D0
  c->r[3]=0u+0x00000000u; // 802961D4
  W32(c->r[4]+0x00000000u,c->r[0]); // 802961D8
  goto L_80296268; // 802961DC
L_802961E0:;
  c->r[3]=0u+0x00000003u; // 802961E0
  goto L_80296268; // 802961E4
L_802961E8:;
  c->r[0]=R32(c->r[3]+0x000001B8u); // 802961E8
  cmps(c,0,(int32_t)c->r[0],0); // 802961EC
  if (!crb(c,2)) { goto L_80296244; } // 802961F0
  c->r[0]=R32(c->r[3]+0x000001F0u); // 802961F4
  cmps(c,0,(int32_t)c->r[0],3); // 802961F8
  if (!crb(c,2)) { goto L_80296214; } // 802961FC
  c->r[4]=R32(c->r[3]+0x000001F8u); // 80296200
  c->r[0]=0u+0x00000000u; // 80296204
  c->r[3]=0u+0x00000000u; // 80296208
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029620C
  goto L_80296268; // 80296210
L_80296214:;
  cmps(c,0,(int32_t)c->r[0],0); // 80296214
  if (!crb(c,2)) { goto L_80296230; } // 80296218
  c->r[4]=R32(c->r[3]+0x000001F8u); // 8029621C
  c->r[0]=0u+0x00000000u; // 80296220
  c->r[3]=0u+0x00000000u; // 80296224
  W32(c->r[4]+0x00000000u,c->r[0]); // 80296228
  goto L_80296268; // 8029622C
L_80296230:;
  c->r[4]=R32(c->r[3]+0x000001F8u); // 80296230
  c->r[0]=0u+0x00000001u; // 80296234
  c->r[3]=0u+0x00000001u; // 80296238
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029623C
  goto L_80296268; // 80296240
L_80296244:;
  c->r[4]=R32(c->r[3]+0x000001F8u); // 80296244
  c->r[0]=0u+0x00000000u; // 80296248
  c->r[3]=0u+0x00000000u; // 8029624C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80296250
  goto L_80296268; // 80296254
L_80296258:;
  c->r[4]=R32(c->r[3]+0x000001F8u); // 80296258
  c->r[0]=0u+0x00000000u; // 8029625C
  c->r[3]=0u+0x00000000u; // 80296260
  W32(c->r[4]+0x00000000u,c->r[0]); // 80296264
L_80296268:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80296268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029626C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80296270
  c->lr=c->r[0]; // 80296274
  c->r[1]=c->r[1]+0x00000010u; // 80296278
  return; // 8029627C
}

// fn_80296280
void f_80296280(Ctx* __restrict c) {
  trace_call(0x80296280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296280
  c->r[0]=c->lr; // 80296284
  cmps(c,0,(int32_t)c->r[3],0); // 80296288
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029628C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80296290
  c->r[31]=c->r[3]|c->r[3]; // 80296294
  if (crb(c,2)) { goto L_802962AC; } // 80296298
  cmps(c,0,(int32_t)c->r[4],0); // 8029629C
  if (!crb(c,1)) { goto L_802962AC; } // 802962A0
  c->r[4]=0u+0x000001FCu; // 802962A4
  c->lr=0x802962ACu; f_8029C224(c); // 802962A8
L_802962AC:;
  c->r[3]=c->r[31]|c->r[31]; // 802962AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802962B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802962B4
  c->lr=c->r[0]; // 802962B8
  c->r[1]=c->r[1]+0x00000010u; // 802962BC
  return; // 802962C0
}

// fn_802962C4
void f_802962C4(Ctx* __restrict c) {
  trace_call(0x802962C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802962C4
  c->r[0]=c->lr; // 802962C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802962CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802962D0
  c->r[31]=c->r[3]|c->r[3]; // 802962D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802962D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802962DC
  W32(c->r[1]+0x00000010u,c->r[28]); // 802962E0
  c->r[28]=c->r[4]|c->r[4]; // 802962E4
  W32(c->r[3]+0x000001ECu,c->r[4]); // 802962E8
  c->r[4]=R32(c->r[4]+0x00000020u); // 802962EC
  c->r[5]=R32(c->r[4]+0x00000004u); // 802962F0
  cmps(c,0,(int32_t)c->r[5],0); // 802962F4
  if (crb(c,2)) { goto L_8029633C; } // 802962F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 802962FC
  cmps(c,0,(int32_t)c->r[0],0); // 80296300
  if (!crb(c,2)) { goto L_80296314; } // 80296304
  c->r[0]=R32(c->r[3]+0x00000004u); // 80296308
  cmps(c,0,(int32_t)c->r[0],0); // 8029630C
  if (crb(c,2)) { goto L_80296324; } // 80296310
L_80296314:;
  c->r[3]=0u+0x804C0000u; // 80296314
  c->r[3]=c->r[3]+0xFFFFCFB8u; // 80296318
  c->lr=0x80296320u; f_8029D4B0(c); // 8029631C
L_80296320:;
  IRQCHK(c); goto L_80296320; // 80296320
L_80296324:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80296324
  W32(c->r[3]+0x00000000u,c->r[0]); // 80296328
  W32(c->r[3]+0x00000004u,c->r[5]); // 8029632C
  W32(c->r[5]+0x00000000u,c->r[3]); // 80296330
  W32(c->r[4]+0x00000004u,c->r[3]); // 80296334
  goto L_80296360; // 80296338
L_8029633C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 8029633C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80296340
  cmps(c,0,(int32_t)c->r[0],0); // 80296344
  if (crb(c,2)) { goto L_8029635C; } // 80296348
  c->r[3]=0u+0x804C0000u; // 8029634C
  c->r[3]=c->r[3]+0xFFFFCF80u; // 80296350
  c->lr=0x80296358u; f_8029D4B0(c); // 80296354
L_80296358:;
  IRQCHK(c); goto L_80296358; // 80296358
L_8029635C:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8029635C
L_80296360:;
  c->r[29]=c->r[31]|c->r[31]; // 80296360
  c->r[30]=0u+0x00000000u; // 80296364
L_80296368:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80296368
  c->r[4]=0u+0x00000B40u; // 8029636C
  c->r[5]=0u+0x00000100u; // 80296370
  c->r[6]=0u+0x00000004u; // 80296374
  c->lr=0x8029637Cu; f_8029E5A0(c); // 80296378
  cmps(c,0,(int32_t)c->r[3],0); // 8029637C
  W32(c->r[29]+0x000001C8u,c->r[3]); // 80296380
  if (!crb(c,2)) { goto L_80296450; } // 80296384
  c->r[3]=R32(c->r[31]+0x000001ECu); // 80296388
  cmps(c,0,(int32_t)c->r[31],0); // 8029638C
  c->r[3]=R32(c->r[3]+0x00000020u); // 80296390
  if (!crb(c,2)) { goto L_802963A8; } // 80296394
  c->r[3]=0u+0x804C0000u; // 80296398
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 8029639C
  c->lr=0x802963A4u; f_8029D4B0(c); // 802963A0
L_802963A4:;
  IRQCHK(c); goto L_802963A4; // 802963A4
L_802963A8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802963A8
  cmpu(c,0,c->r[0],c->r[31]); // 802963AC
  if (!crb(c,2)) { goto L_802963BC; } // 802963B0
  c->r[0]=R32(c->r[31]+0x00000004u); // 802963B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802963B8
L_802963BC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802963BC
  cmpu(c,0,c->r[0],c->r[31]); // 802963C0
  if (!crb(c,2)) { goto L_802963D0; } // 802963C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 802963C8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802963CC
L_802963D0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802963D0
  cmps(c,0,(int32_t)c->r[3],0); // 802963D4
  if (crb(c,2)) { goto L_802963E4; } // 802963D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 802963DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 802963E0
L_802963E4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 802963E4
  cmps(c,0,(int32_t)c->r[3],0); // 802963E8
  if (crb(c,2)) { goto L_802963F8; } // 802963EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 802963F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 802963F4
L_802963F8:;
  c->r[3]=R32(c->r[31]+0x000001E8u); // 802963F8
  c->r[30]=0u+0x00000000u; // 802963FC
  W32(c->r[31]+0x00000004u,c->r[30]); // 80296400
  cmps(c,0,(int32_t)c->r[3],0); // 80296404
  W32(c->r[31]+0x00000000u,c->r[30]); // 80296408
  if (crb(c,2)) { goto L_8029641C; } // 8029640C
  c->r[4]=0u+0x00000134u; // 80296410
  c->lr=0x80296418u; f_8029C224(c); // 80296414
  W32(c->r[31]+0x000001E8u,c->r[30]); // 80296418
L_8029641C:;
  c->r[29]=0u+0x00000000u; // 8029641C
  c->r[30]=0u+0x00000000u; // 80296420
L_80296424:;
  c->r[3]=R32(c->r[31]+0x000001C8u); // 80296424
  cmps(c,0,(int32_t)c->r[3],0); // 80296428
  if (crb(c,2)) { goto L_80296438; } // 8029642C
  c->lr=0x80296434u; f_8029E23C(c); // 80296430
  W32(c->r[31]+0x000001C8u,c->r[30]); // 80296434
L_80296438:;
  c->r[29]=c->r[29]+0x00000001u; // 80296438
  c->r[31]=c->r[31]+0x00000004u; // 8029643C
  cmpu(c,0,c->r[29],0x00000008u); // 80296440
  if (crb(c,0)) { IRQCHK(c); goto L_80296424; } // 80296444
  c->r[3]=0u+0x00000000u; // 80296448
  goto L_80296608; // 8029644C
L_80296450:;
  c->r[30]=c->r[30]+0x00000001u; // 80296450
  c->r[29]=c->r[29]+0x00000004u; // 80296454
  cmpu(c,0,c->r[30],0x00000002u); // 80296458
  if (crb(c,0)) { IRQCHK(c); goto L_80296368; } // 8029645C
  c->r[5]=0u+0x804C0000u; // 80296460
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80296464
  c->r[5]=c->r[5]+0xFFFFD370u; // 80296468
  c->r[3]=0u+0x00000134u; // 8029646C
  c->r[6]=0u+0x00000004u; // 80296470
  c->lr=0x80296478u; f_8029C154(c); // 80296474
  cmps(c,0,(int32_t)c->r[3],0); // 80296478
  if (!crb(c,2)) { goto L_80296498; } // 8029647C
  c->r[3]=0u+0x804C0000u; // 80296480
  c->r[4]=0u+0xFFFFFFFDu; // 80296484
  c->r[3]=c->r[3]+0xFFFFD364u; // 80296488
  c->lr=0x80296490u; f_8029D638(c); // 8029648C
  c->r[5]=0u+0x00000000u; // 80296490
  goto L_802964A4; // 80296494
L_80296498:;
  c->r[0]=c->r[3]+0x0000004Cu; // 80296498
  c->r[5]=c->r[3]|c->r[3]; // 8029649C
  W32(c->r[3]+0x000000B8u,c->r[0]); // 802964A0
L_802964A4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802964A4
  W32(c->r[31]+0x000001E8u,c->r[5]); // 802964A8
  if (!crb(c,2)) { goto L_80296578; } // 802964AC
  c->r[3]=R32(c->r[31]+0x000001ECu); // 802964B0
  cmps(c,0,(int32_t)c->r[31],0); // 802964B4
  c->r[3]=R32(c->r[3]+0x00000020u); // 802964B8
  if (!crb(c,2)) { goto L_802964D0; } // 802964BC
  c->r[3]=0u+0x804C0000u; // 802964C0
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 802964C4
  c->lr=0x802964CCu; f_8029D4B0(c); // 802964C8
L_802964CC:;
  IRQCHK(c); goto L_802964CC; // 802964CC
L_802964D0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802964D0
  cmpu(c,0,c->r[0],c->r[31]); // 802964D4
  if (!crb(c,2)) { goto L_802964E4; } // 802964D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 802964DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 802964E0
L_802964E4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802964E4
  cmpu(c,0,c->r[0],c->r[31]); // 802964E8
  if (!crb(c,2)) { goto L_802964F8; } // 802964EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 802964F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 802964F4
L_802964F8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802964F8
  cmps(c,0,(int32_t)c->r[3],0); // 802964FC
  if (crb(c,2)) { goto L_8029650C; } // 80296500
  c->r[0]=R32(c->r[31]+0x00000004u); // 80296504
  W32(c->r[3]+0x00000004u,c->r[0]); // 80296508
L_8029650C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8029650C
  cmps(c,0,(int32_t)c->r[3],0); // 80296510
  if (crb(c,2)) { goto L_80296520; } // 80296514
  c->r[0]=R32(c->r[31]+0x00000000u); // 80296518
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029651C
L_80296520:;
  c->r[3]=R32(c->r[31]+0x000001E8u); // 80296520
  c->r[30]=0u+0x00000000u; // 80296524
  W32(c->r[31]+0x00000004u,c->r[30]); // 80296528
  cmps(c,0,(int32_t)c->r[3],0); // 8029652C
  W32(c->r[31]+0x00000000u,c->r[30]); // 80296530
  if (crb(c,2)) { goto L_80296544; } // 80296534
  c->r[4]=0u+0x00000134u; // 80296538
  c->lr=0x80296540u; f_8029C224(c); // 8029653C
  W32(c->r[31]+0x000001E8u,c->r[30]); // 80296540
L_80296544:;
  c->r[29]=0u+0x00000000u; // 80296544
  c->r[30]=0u+0x00000000u; // 80296548
L_8029654C:;
  c->r[3]=R32(c->r[31]+0x000001C8u); // 8029654C
  cmps(c,0,(int32_t)c->r[3],0); // 80296550
  if (crb(c,2)) { goto L_80296560; } // 80296554
  c->lr=0x8029655Cu; f_8029E23C(c); // 80296558
  W32(c->r[31]+0x000001C8u,c->r[30]); // 8029655C
L_80296560:;
  c->r[29]=c->r[29]+0x00000001u; // 80296560
  c->r[31]=c->r[31]+0x00000004u; // 80296564
  cmpu(c,0,c->r[29],0x00000008u); // 80296568
  if (crb(c,0)) { IRQCHK(c); goto L_8029654C; } // 8029656C
  c->r[3]=0u+0x00000000u; // 80296570
  goto L_80296608; // 80296574
L_80296578:;
  c->r[0]=R32(c->r[31]+0x000001C4u); // 80296578
  c->r[4]=0u+0x00000B40u; // 8029657C
  c->r[3]=0u+0x00000001u; // 80296580
  W32(c->r[5]+0x00000000u,c->r[0]); // 80296584
  c->r[5]=R32(c->r[31]+0x000001E8u); // 80296588
  c->r[0]=R32(c->r[31]+0x000001C8u); // 8029658C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80296590
  W32(c->r[5]+0x00000048u,c->r[4]); // 80296594
  c->r[5]=R32(c->r[31]+0x000001E8u); // 80296598
  c->r[0]=R32(c->r[31]+0x000001CCu); // 8029659C
  W32(c->r[5]+0x00000008u,c->r[0]); // 802965A0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965A4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965A8
  c->r[0]=R32(c->r[31]+0x000001D0u); // 802965AC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 802965B0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965B4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965B8
  c->r[0]=R32(c->r[31]+0x000001D4u); // 802965BC
  W32(c->r[5]+0x00000010u,c->r[0]); // 802965C0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965C4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965C8
  c->r[0]=R32(c->r[31]+0x000001D8u); // 802965CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 802965D0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965D4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965D8
  c->r[0]=R32(c->r[31]+0x000001DCu); // 802965DC
  W32(c->r[5]+0x00000018u,c->r[0]); // 802965E0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965E4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965E8
  c->r[0]=R32(c->r[31]+0x000001E0u); // 802965EC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802965F0
  W32(c->r[5]+0x00000048u,c->r[4]); // 802965F4
  c->r[5]=R32(c->r[31]+0x000001E8u); // 802965F8
  c->r[0]=R32(c->r[31]+0x000001E4u); // 802965FC
  W32(c->r[5]+0x00000020u,c->r[0]); // 80296600
  W32(c->r[5]+0x00000048u,c->r[4]); // 80296604
L_80296608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80296608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029660C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80296610
  c->r[29]=R32(c->r[1]+0x00000014u); // 80296614
  c->r[28]=R32(c->r[1]+0x00000010u); // 80296618
  c->lr=c->r[0]; // 8029661C
  c->r[1]=c->r[1]+0x00000020u; // 80296620
  return; // 80296624
}

// fn_80296628
void f_80296628(Ctx* __restrict c) {
  trace_call(0x80296628u);
  cmps(c,0,(int32_t)c->r[3],0); // 80296628
  if (crb(c,2)) return; // 8029662C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80296630
  c->r[4]=0u+0x00000001u; // 80296634
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80296638
  c->ctr=c->r[12]; // 8029663C
  if (true) { dispatch(c,c->ctr); return; } // 80296640
  return; // 80296644
}

// fn_80296648
void f_80296648(Ctx* __restrict c) {
  trace_call(0x80296648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296648
  c->r[0]=c->lr; // 8029664C
  cmps(c,0,(int32_t)c->r[3],0); // 80296650
  W32(c->r[1]+0x00000014u,c->r[0]); // 80296654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80296658
  c->r[31]=c->r[3]|c->r[3]; // 8029665C
  if (crb(c,2)) { goto L_80296674; } // 80296660
  cmps(c,0,(int32_t)c->r[4],0); // 80296664
  if (!crb(c,1)) { goto L_80296674; } // 80296668
  c->r[4]=0u+0x00000014u; // 8029666C
  c->lr=0x80296674u; f_8029C224(c); // 80296670
L_80296674:;
  c->r[3]=c->r[31]|c->r[31]; // 80296674
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80296678
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029667C
  c->lr=c->r[0]; // 80296680
  c->r[1]=c->r[1]+0x00000010u; // 80296684
  return; // 80296688
}

// fn_8029668C
void f_8029668C(Ctx* __restrict c) {
  trace_call(0x8029668Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029668C
  c->r[0]=c->lr; // 80296690
  c->r[5]=0u+0x803D0000u; // 80296694
  c->r[6]=0u+0x00000004u; // 80296698
  W32(c->r[1]+0x00000034u,c->r[0]); // 8029669C
  c->r[5]=c->r[5]+0x00003260u; // 802966A0
  c->r[5]=c->r[5]+0x00000016u; // 802966A4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802966A8
  c->r[31]=c->r[1]|c->r[1]; // 802966AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 802966B0
  c->r[30]=c->r[3]|c->r[3]; // 802966B4
  c->r[3]=0u+0x00000010u; // 802966B8
  c->r[4]=c->r[30]|c->r[30]; // 802966BC
  c->lr=0x802966C4u; f_8029C154(c); // 802966C0
  cmps(c,0,(int32_t)c->r[3],0); // 802966C4
  if (crb(c,2)) { goto L_802966E8; } // 802966C8
  c->r[4]=0u+0x804C0000u; // 802966CC
  c->r[0]=0u+0x00000000u; // 802966D0
  c->r[4]=c->r[4]+0xFFFFD380u; // 802966D4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 802966D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802966DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 802966E0
  W32(c->r[3]+0x00000008u,c->r[0]); // 802966E4
L_802966E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802966E8
  if (!crb(c,2)) { goto L_8029670C; } // 802966EC
  c->r[3]=0u+0x803D0000u; // 802966F0
  c->r[4]=0u+0xFFFFFFFDu; // 802966F4
  c->r[3]=c->r[3]+0x00003260u; // 802966F8
  c->r[3]=c->r[3]+0x00000028u; // 802966FC
  c->lr=0x80296704u; f_8029D638(c); // 80296700
  c->r[3]=0u+0x00000000u; // 80296704
  goto L_80296710; // 80296708
L_8029670C:;
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8029670C
L_80296710:;
  c->r[10]=c->r[31]|c->r[31]; // 80296710
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80296714
  c->r[30]=R32(c->r[10]+0x00000028u); // 80296718
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029671C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80296720
  c->r[1]=c->r[10]|c->r[10]; // 80296724
  c->lr=c->r[0]; // 80296728
  return; // 8029672C
}

// fn_80296730
void f_80296730(Ctx* __restrict c) {
  trace_call(0x80296730u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296730
  c->r[0]=c->lr; // 80296734
  W32(c->r[1]+0x00000024u,c->r[0]); // 80296738
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029673C
  c->r[31]=0u+0x00000000u; // 80296740
  W32(c->r[1]+0x00000018u,c->r[30]); // 80296744
  W32(c->r[1]+0x00000014u,c->r[29]); // 80296748
  c->r[29]=c->r[3]|c->r[3]; // 8029674C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80296750
L_80296754:;
  cmps(c,0,(int32_t)c->r[4],0); // 80296754
  if (crb(c,2)) { goto L_802967E4; } // 80296758
  c->r[30]=R32(c->r[4]+0x00000004u); // 8029675C
  if (!crb(c,2)) { goto L_80296774; } // 80296760
  c->r[3]=0u+0x804C0000u; // 80296764
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 80296768
  c->lr=0x80296770u; f_8029D4B0(c); // 8029676C
L_80296770:;
  IRQCHK(c); goto L_80296770; // 80296770
L_80296774:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80296774
  cmpu(c,0,c->r[0],c->r[4]); // 80296778
  if (!crb(c,2)) { goto L_80296784; } // 8029677C
  W32(c->r[29]+0x00000004u,c->r[30]); // 80296780
L_80296784:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80296784
  cmpu(c,0,c->r[0],c->r[4]); // 80296788
  if (!crb(c,2)) { goto L_80296798; } // 8029678C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80296790
  W32(c->r[29]+0x00000008u,c->r[0]); // 80296794
L_80296798:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80296798
  cmps(c,0,(int32_t)c->r[3],0); // 8029679C
  if (crb(c,2)) { goto L_802967AC; } // 802967A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802967A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802967A8
L_802967AC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802967AC
  cmps(c,0,(int32_t)c->r[3],0); // 802967B0
  if (crb(c,2)) { goto L_802967C0; } // 802967B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802967B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802967BC
L_802967C0:;
  W32(c->r[4]+0x00000004u,c->r[31]); // 802967C0
  c->r[3]=c->r[4]|c->r[4]; // 802967C4
  W32(c->r[4]+0x00000000u,c->r[31]); // 802967C8
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 802967CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802967D0
  c->ctr=c->r[12]; // 802967D4
  if (true) { c->lr=0x802967DCu; dispatch(c,c->ctr); } // 802967D8
  c->r[4]=c->r[30]|c->r[30]; // 802967DC
  IRQCHK(c); goto L_80296754; // 802967E0
L_802967E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802967E4
  if (crb(c,2)) { goto L_80296804; } // 802967E8
  c->r[12]=R32(c->r[29]+0x00000000u); // 802967EC
  c->r[3]=c->r[29]|c->r[29]; // 802967F0
  c->r[4]=0u+0x00000001u; // 802967F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802967F8
  c->ctr=c->r[12]; // 802967FC
  if (true) { c->lr=0x80296804u; dispatch(c,c->ctr); } // 80296800
L_80296804:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80296804
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80296808
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029680C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80296810
  c->lr=c->r[0]; // 80296814
  c->r[1]=c->r[1]+0x00000020u; // 80296818
  return; // 8029681C
}

// fn_80296820
void f_80296820(Ctx* __restrict c) {
  trace_call(0x80296820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296820
  c->r[0]=c->lr; // 80296824
  W32(c->r[1]+0x00000014u,c->r[0]); // 80296828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029682C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80296830
  c->r[30]=c->r[4]|c->r[4]; // 80296834
  c->r[31]=R32(c->r[3]+0x00000004u); // 80296838
L_8029683C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8029683C
  if (crb(c,2)) { goto L_8029685C; } // 80296840
  c->r[3]=R32(c->r[31]+0x00000010u); // 80296844
  c->r[4]=c->r[30]|c->r[30]; // 80296848
  c->r[31]=R32(c->r[31]+0x00000004u); // 8029684C
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80296850
  c->lr=0x80296858u; f_80292FF0(c); // 80296854
  IRQCHK(c); goto L_8029683C; // 80296858
L_8029685C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029685C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80296860
  c->r[30]=R32(c->r[1]+0x00000008u); // 80296864
  c->lr=c->r[0]; // 80296868
  c->r[1]=c->r[1]+0x00000010u; // 8029686C
  return; // 80296870
}

// fn_80296874
void f_80296874(Ctx* __restrict c) {
  trace_call(0x80296874u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296874
  c->r[0]=c->lr; // 80296878
  c->r[5]=0u+0x803D0000u; // 8029687C
  c->r[6]=0u+0x00000004u; // 80296880
  W32(c->r[1]+0x00000034u,c->r[0]); // 80296884
  c->r[5]=c->r[5]+0x00003260u; // 80296888
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8029688C
  c->r[31]=c->r[1]|c->r[1]; // 80296890
  W32(c->r[1]+0x00000028u,c->r[30]); // 80296894
  c->r[30]=c->r[4]|c->r[4]; // 80296898
  W32(c->r[1]+0x00000024u,c->r[29]); // 8029689C
  c->r[29]=c->r[3]|c->r[3]; // 802968A0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 802968A4
  c->r[3]=0u+0x00000014u; // 802968A8
  c->lr=0x802968B0u; f_8029C154(c); // 802968AC
  cmps(c,0,(int32_t)c->r[3],0); // 802968B0
  if (crb(c,2)) { goto L_802968DC; } // 802968B4
  c->r[0]=0u+0x00000000u; // 802968B8
  c->r[4]=0u+0x804C0000u; // 802968BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 802968C0
  c->r[4]=c->r[4]+0xFFFFD3A0u; // 802968C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802968C8
  W32(c->r[3]+0x00000008u,c->r[0]); // 802968CC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 802968D0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 802968D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 802968D8
L_802968DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802968DC
  if (!crb(c,2)) { goto L_802968FC; } // 802968E0
  c->r[3]=0u+0x803D0000u; // 802968E4
  c->r[4]=0u+0xFFFFFFFDu; // 802968E8
  c->r[3]=c->r[3]+0x00003260u; // 802968EC
  c->r[3]=c->r[3]+0x0000000Bu; // 802968F0
  c->lr=0x802968F8u; f_8029D638(c); // 802968F4
  c->r[3]=0u+0x00000000u; // 802968F8
L_802968FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802968FC
  if (crb(c,2)) { goto L_80296978; } // 80296900
  W32(c->r[3]+0x00000010u,c->r[30]); // 80296904
  c->r[4]=R32(c->r[29]+0x00000008u); // 80296908
  cmps(c,0,(int32_t)c->r[4],0); // 8029690C
  if (crb(c,2)) { goto L_80296954; } // 80296910
  c->r[0]=R32(c->r[3]+0x00000000u); // 80296914
  cmps(c,0,(int32_t)c->r[0],0); // 80296918
  if (!crb(c,2)) { goto L_8029692C; } // 8029691C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80296920
  cmps(c,0,(int32_t)c->r[0],0); // 80296924
  if (crb(c,2)) { goto L_8029693C; } // 80296928
L_8029692C:;
  c->r[3]=0u+0x804C0000u; // 8029692C
  c->r[3]=c->r[3]+0xFFFFD19Cu; // 80296930
  c->lr=0x80296938u; f_8029D4B0(c); // 80296934
L_80296938:;
  IRQCHK(c); goto L_80296938; // 80296938
L_8029693C:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029693C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80296940
  W32(c->r[3]+0x00000004u,c->r[0]); // 80296944
  W32(c->r[4]+0x00000004u,c->r[3]); // 80296948
  W32(c->r[29]+0x00000008u,c->r[3]); // 8029694C
  goto L_80296978; // 80296950
L_80296954:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80296954
  W32(c->r[29]+0x00000008u,c->r[3]); // 80296958
  cmps(c,0,(int32_t)c->r[0],0); // 8029695C
  if (crb(c,2)) { goto L_80296974; } // 80296960
  c->r[3]=0u+0x804C0000u; // 80296964
  c->r[3]=c->r[3]+0xFFFFD180u; // 80296968
  c->lr=0x80296970u; f_8029D4B0(c); // 8029696C
L_80296970:;
  IRQCHK(c); goto L_80296970; // 80296970
L_80296974:;
  W32(c->r[29]+0x00000004u,c->r[3]); // 80296974
L_80296978:;
  c->r[10]=c->r[31]|c->r[31]; // 80296978
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8029697C
  c->r[30]=R32(c->r[10]+0x00000028u); // 80296980
  c->r[29]=R32(c->r[10]+0x00000024u); // 80296984
  c->r[10]=R32(c->r[1]+0x00000000u); // 80296988
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029698C
  c->r[1]=c->r[10]|c->r[10]; // 80296990
  c->lr=c->r[0]; // 80296994
  return; // 80296998
}

// fn_8029699C
void f_8029699C(Ctx* __restrict c) {
  trace_call(0x8029699Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029699C
  c->r[0]=c->lr; // 802969A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802969A4
  c->r[5]=R32(c->r[3]+0x00000004u); // 802969A8
  c->r[6]=c->r[5]|c->r[5]; // 802969AC
L_802969B0:;
  cmps(c,1,(int32_t)c->r[6],0); // 802969B0
  if (crb(c,6)) { goto L_80296A50; } // 802969B4
  c->r[0]=R32(c->r[6]+0x00000010u); // 802969B8
  c->r[7]=R32(c->r[6]+0x00000004u); // 802969BC
  cmpu(c,0,c->r[0],c->r[4]); // 802969C0
  if (!crb(c,2)) { goto L_80296A48; } // 802969C4
  if (!crb(c,6)) { goto L_802969DC; } // 802969C8
  c->r[3]=0u+0x804C0000u; // 802969CC
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 802969D0
  c->lr=0x802969D8u; f_8029D4B0(c); // 802969D4
L_802969D8:;
  IRQCHK(c); goto L_802969D8; // 802969D8
L_802969DC:;
  cmpu(c,0,c->r[5],c->r[6]); // 802969DC
  if (!crb(c,2)) { goto L_802969E8; } // 802969E0
  W32(c->r[3]+0x00000004u,c->r[7]); // 802969E4
L_802969E8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802969E8
  cmpu(c,0,c->r[0],c->r[6]); // 802969EC
  if (!crb(c,2)) { goto L_802969FC; } // 802969F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 802969F4
  W32(c->r[3]+0x00000008u,c->r[0]); // 802969F8
L_802969FC:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 802969FC
  cmps(c,0,(int32_t)c->r[3],0); // 80296A00
  if (crb(c,2)) { goto L_80296A10; } // 80296A04
  c->r[0]=R32(c->r[6]+0x00000004u); // 80296A08
  W32(c->r[3]+0x00000004u,c->r[0]); // 80296A0C
L_80296A10:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 80296A10
  cmps(c,0,(int32_t)c->r[3],0); // 80296A14
  if (crb(c,2)) { goto L_80296A24; } // 80296A18
  c->r[0]=R32(c->r[6]+0x00000000u); // 80296A1C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80296A20
L_80296A24:;
  c->r[0]=0u+0x00000000u; // 80296A24
  c->r[3]=c->r[6]|c->r[6]; // 80296A28
  W32(c->r[6]+0x00000004u,c->r[0]); // 80296A2C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80296A30
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 80296A34
  c->r[12]=R32(c->r[12]+0x00000008u); // 80296A38
  c->ctr=c->r[12]; // 80296A3C
  if (true) { c->lr=0x80296A44u; dispatch(c,c->ctr); } // 80296A40
  goto L_80296A50; // 80296A44
L_80296A48:;
  c->r[6]=c->r[7]|c->r[7]; // 80296A48
  IRQCHK(c); goto L_802969B0; // 80296A4C
L_80296A50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80296A50
  c->lr=c->r[0]; // 80296A54
  c->r[1]=c->r[1]+0x00000010u; // 80296A58
  return; // 80296A5C
}

// fn_80296A60
void f_80296A60(Ctx* __restrict c) {
  trace_call(0x80296A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296A60
  c->r[0]=c->lr; // 80296A64
  cmps(c,0,(int32_t)c->r[3],0); // 80296A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80296A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80296A70
  c->r[31]=c->r[3]|c->r[3]; // 80296A74
  if (crb(c,2)) { goto L_80296A8C; } // 80296A78
  cmps(c,0,(int32_t)c->r[4],0); // 80296A7C
  if (!crb(c,1)) { goto L_80296A8C; } // 80296A80
  c->r[4]=0u+0x00000010u; // 80296A84
  c->lr=0x80296A8Cu; f_8029C224(c); // 80296A88
L_80296A8C:;
  c->r[3]=c->r[31]|c->r[31]; // 80296A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80296A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80296A94
  c->lr=c->r[0]; // 80296A98
  c->r[1]=c->r[1]+0x00000010u; // 80296A9C
  return; // 80296AA0
}

// fn_80296AA4
void f_80296AA4(Ctx* __restrict c) {
  trace_call(0x80296AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296AA4
  c->r[0]=c->lr; // 80296AA8
  cmps(c,0,(int32_t)c->r[3],0); // 80296AAC
  W32(c->r[1]+0x00000054u,c->r[0]); // 80296AB0
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80296AB4
  c->r[31]=c->r[1]|c->r[1]; // 80296AB8
  c->r[22]=c->r[3]|c->r[3]; // 80296ABC
  c->r[23]=c->r[4]|c->r[4]; // 80296AC0
  c->r[24]=c->r[5]|c->r[5]; // 80296AC4
  c->r[25]=c->r[6]|c->r[6]; // 80296AC8
  c->r[26]=c->r[7]|c->r[7]; // 80296ACC
  c->r[27]=c->r[8]|c->r[8]; // 80296AD0
  if (!crb(c,2)) { goto L_80296AE0; } // 80296AD4
  c->r[3]=0u+0x00000000u; // 80296AD8
  goto L_80296BD4; // 80296ADC
L_80296AE0:;
  c->r[28]=R32(c->r[3]+0x00000004u); // 80296AE0
  c->r[29]=0u+0x803D0000u; // 80296AE4
  c->r[29]=c->r[29]+0x000032B4u; // 80296AE8
  c->r[3]=0u+0x000000B8u; // 80296AEC
  c->r[4]=c->r[28]|c->r[28]; // 80296AF0
  c->r[6]=0u+0x00000004u; // 80296AF4
  c->r[5]=c->r[29]|c->r[29]; // 80296AF8
  c->lr=0x80296B00u; f_8029C154(c); // 80296AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80296B00
  c->r[30]=c->r[3]|c->r[3]; // 80296B04
  if (crb(c,2)) { goto L_80296B60; } // 80296B08
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80296B0C
  c->r[4]=c->r[22]|c->r[22]; // 80296B10
  c->r[5]=c->r[23]|c->r[23]; // 80296B14
  c->r[6]=c->r[24]|c->r[24]; // 80296B18
  c->r[7]=c->r[25]|c->r[25]; // 80296B1C
  c->r[8]=c->r[26]|c->r[26]; // 80296B20
  c->r[9]=c->r[27]|c->r[27]; // 80296B24
  c->lr=0x80296B2Cu; f_802972E0(c); // 80296B28
  c->r[3]=0u+0x804C0000u; // 80296B2C
  c->r[3]=c->r[3]+0xFFFFD3C8u; // 80296B30
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80296B34
  goto L_80296B60; // 80296B38
  c->r[3]=c->r[30]|c->r[30]; // 80296B3C
  c->r[4]=c->r[28]|c->r[28]; // 80296B40
  c->r[5]=c->r[29]|c->r[29]; // 80296B44
  c->r[6]=0u+0x00000004u; // 80296B48
  c->lr=0x80296B50u; f_8029C1D4(c); // 80296B4C
  c->r[3]=0u+0x00000000u; // 80296B50
  c->r[4]=0u+0x00000000u; // 80296B54
  c->r[5]=0u+0x00000000u; // 80296B58
  c->lr=0x80296B60u; f_801E96FC(c); // 80296B5C
L_80296B60:;
  cmps(c,0,(int32_t)c->r[30],0); // 80296B60
  if (!crb(c,2)) { goto L_80296B84; } // 80296B64
  c->r[3]=0u+0x803D0000u; // 80296B68
  c->r[4]=0u+0xFFFFFFFDu; // 80296B6C
  c->r[3]=c->r[3]+0x000032B4u; // 80296B70
  c->r[3]=c->r[3]+0x00000008u; // 80296B74
  c->lr=0x80296B7Cu; f_8029D638(c); // 80296B78
  c->r[3]=0u+0x00000000u; // 80296B7C
  goto L_80296BD4; // 80296B80
L_80296B84:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80296B84
  c->r[3]=c->r[30]|c->r[30]; // 80296B88
  c->r[4]=c->r[24]|c->r[24]; // 80296B8C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80296B90
  c->ctr=c->r[12]; // 80296B94
  if (true) { c->lr=0x80296B9Cu; dispatch(c,c->ctr); } // 80296B98
  cmps(c,0,(int32_t)c->r[3],0); // 80296B9C
  if (!crb(c,2)) { goto L_80296BD0; } // 80296BA0
  cmps(c,0,(int32_t)c->r[30],0); // 80296BA4
  if (crb(c,2)) { goto L_80296BC8; } // 80296BA8
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80296BAC
  c->r[0]=0u+0x00000001u; // 80296BB0
  c->r[3]=c->r[30]|c->r[30]; // 80296BB4
  c->r[12]=R32(c->r[12]+0x00000010u); // 80296BB8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80296BBC
  c->ctr=c->r[12]; // 80296BC0
  if (true) { c->lr=0x80296BC8u; dispatch(c,c->ctr); } // 80296BC4
L_80296BC8:;
  c->r[3]=0u+0x00000000u; // 80296BC8
  goto L_80296BD4; // 80296BCC
L_80296BD0:;
  c->r[3]=c->r[30]|c->r[30]; // 80296BD0
L_80296BD4:;
  c->r[10]=c->r[31]|c->r[31]; // 80296BD4
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80296BD8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80296BDC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80296BE0
  c->r[1]=c->r[10]|c->r[10]; // 80296BE4
  c->lr=c->r[0]; // 80296BE8
  return; // 80296BEC
}

// fn_80296BF0
void f_80296BF0(Ctx* __restrict c) {
  trace_call(0x80296BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296BF0
  c->r[0]=c->lr; // 80296BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80296BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80296BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80296C00
  c->r[31]=c->r[4]|c->r[4]; // 80296C04
  W32(c->r[1]+0x00000008u,c->r[30]); // 80296C08
  c->r[30]=c->r[3]|c->r[3]; // 80296C0C
  if (crb(c,2)) { goto L_80296C30; } // 80296C10
  c->r[4]=0u+0x00000000u; // 80296C14
  c->lr=0x80296C1Cu; f_80297334(c); // 80296C18
  cmps(c,0,(int32_t)c->r[31],0); // 80296C1C
  if (!crb(c,1)) { goto L_80296C30; } // 80296C20
  c->r[3]=c->r[30]|c->r[30]; // 80296C24
  c->r[4]=0u+0x000000B8u; // 80296C28
  c->lr=0x80296C30u; f_8029C224(c); // 80296C2C
L_80296C30:;
  c->r[3]=c->r[30]|c->r[30]; // 80296C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80296C34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80296C38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80296C3C
  c->lr=c->r[0]; // 80296C40
  c->r[1]=c->r[1]+0x00000010u; // 80296C44
  return; // 80296C48
}

// fn_80296C4C
void f_80296C4C(Ctx* __restrict c) {
  trace_call(0x80296C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296C4C
  c->r[0]=c->lr; // 80296C50
  W32(c->r[1]+0x00000124u,c->r[0]); // 80296C54
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 80296C58
  W32(c->r[1]+0x00000118u,c->r[30]); // 80296C5C
  c->r[30]=c->r[4]|c->r[4]; // 80296C60
  W32(c->r[1]+0x00000114u,c->r[29]); // 80296C64
  c->r[29]=c->r[3]|c->r[3]; // 80296C68
  c->r[5]=R32(c->r[3]+0x00000010u); // 80296C6C
  c->r[3]=R32(c->r[5]+0x00000038u); // 80296C70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80296C74
  c->r[12]=R32(c->r[12]+0x00000014u); // 80296C78
  c->ctr=c->r[12]; // 80296C7C
  if (true) { c->lr=0x80296C84u; dispatch(c,c->ctr); } // 80296C80
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296C84
  {uint32_t ea=c->r[30]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296C88
  c->lr=0x80296C90u; f_8029830C(c); // 80296C8C
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296C90
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296C94
  c->lr=0x80296C9Cu; f_80298314(c); // 80296C98
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296C9C
  {uint32_t ea=c->r[30]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296CA0
  c->lr=0x80296CA8u; f_8029833C(c); // 80296CA4
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296CA8
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80296CAC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80296CB0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80296CB4
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 80296CB8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80296CBC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 80296CC0
  c->lr=0x80296CC8u; f_8029831C(c); // 80296CC4
  {uint32_t ea=c->r[2]+0xFFFFCDC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80296CC8
  c->r[4]=0u+0x00000000u; // 80296CCC
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296CD0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80296CD4
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296CD8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80296CDC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80296CE0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80296CE4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80296CE8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80296CEC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 80296CF0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 80296CF4
  c->lr=0x80296CFCu; f_8029832C(c); // 80296CF8
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296CFC
  c->r[4]=0u+0x00000001u; // 80296D00
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D04
  c->lr=0x80296D0Cu; f_8029832C(c); // 80296D08
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D0C
  c->r[4]=0u+0x00000002u; // 80296D10
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D14
  c->lr=0x80296D1Cu; f_8029832C(c); // 80296D18
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D1C
  c->r[4]=0u+0x00000003u; // 80296D20
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D24
  c->lr=0x80296D2Cu; f_8029832C(c); // 80296D28
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D2C
  c->r[4]=0u+0x00000004u; // 80296D30
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D34
  c->lr=0x80296D3Cu; f_8029832C(c); // 80296D38
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D3C
  {uint32_t ea=c->r[30]+0x00000154u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D40
  {uint32_t ea=c->r[30]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80296D44
  c->lr=0x80296D4Cu; f_8029874C(c); // 80296D48
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D4C
  c->r[4]=0u+0x00000000u; // 80296D50
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D54
  c->lr=0x80296D5Cu; f_80298334(c); // 80296D58
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D5C
  c->r[4]=0u+0x00000001u; // 80296D60
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D64
  c->lr=0x80296D6Cu; f_80298334(c); // 80296D68
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D6C
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80296D70
  {uint32_t ea=c->r[30]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80296D74
  c->lr=0x80296D7Cu; f_80298324(c); // 80296D78
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80296D7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80296D80
  cmpu(c,0,c->r[0],0x00000001u); // 80296D84
  if (crb(c,1)) { goto L_80296D94; } // 80296D88
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296D8C
  c->lr=0x80296D94u; f_80298454(c); // 80296D90
L_80296D94:;
  c->r[31]=R32(c->r[30]+0x00000088u); // 80296D94
  cmps(c,0,(int32_t)c->r[31],0); // 80296D98
  if (crb(c,2)) { goto L_80296DDC; } // 80296D9C
  c->r[3]=c->r[31]|c->r[31]; // 80296DA0
  c->lr=0x80296DA8u; f_801E6E58(c); // 80296DA4
  cmpu(c,0,c->r[3],0x00000080u); // 80296DA8
  if (crb(c,0)) { goto L_80296DCC; } // 80296DAC
  c->r[3]=0u+0x803D0000u; // 80296DB0
  c->r[4]=c->r[31]|c->r[31]; // 80296DB4
  c->r[3]=c->r[3]+0x000032B4u; // 80296DB8
  c->r[3]=c->r[3]+0x00000012u; // 80296DBC
  c->lr=0x80296DC4u; f_8029D500(c); // 80296DC0
  c->r[0]=0u+0x00000000u; // 80296DC4
  W8(c->r[29]+0x00000038u,c->r[0]); // 80296DC8
L_80296DCC:;
  c->r[4]=R32(c->r[30]+0x00000088u); // 80296DCC
  c->r[3]=c->r[29]+0x00000038u; // 80296DD0
  c->lr=0x80296DD8u; f_801F0AA4(c); // 80296DD4
  goto L_80296DE4; // 80296DD8
L_80296DDC:;
  c->r[0]=0u+0x00000000u; // 80296DDC
  W8(c->r[29]+0x00000038u,c->r[0]); // 80296DE0
L_80296DE4:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 80296DE4
  c->r[4]=c->r[30]+0x00000170u; // 80296DE8
  c->lr=0x80296DF0u; f_8029875C(c); // 80296DEC
  c->r[3]=R32(c->r[29]+0x00000010u); // 80296DF0
  c->r[3]=R32(c->r[3]+0x00000038u); // 80296DF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80296DF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 80296DFC
  c->ctr=c->r[12]; // 80296E00
  if (true) { c->lr=0x80296E08u; dispatch(c,c->ctr); } // 80296E04
  c->r[0]=R32(c->r[1]+0x00000124u); // 80296E08
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80296E0C
  c->r[30]=R32(c->r[1]+0x00000118u); // 80296E10
  c->r[29]=R32(c->r[1]+0x00000114u); // 80296E14
  c->lr=c->r[0]; // 80296E18
  c->r[1]=c->r[1]+0x00000120u; // 80296E1C
  return; // 80296E20
}

// fn_80296E24
void f_80296E24(Ctx* __restrict c) {
  trace_call(0x80296E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80296E24
  c->r[0]=c->lr; // 80296E28
  W32(c->r[1]+0x00000064u,c->r[0]); // 80296E2C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80296E30
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80296E34
  c->r[11]=c->r[1]+0x00000050u; // 80296E38
  c->lr=0x80296E40u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80296E3C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80296E40
  c->r[27]=c->r[3]|c->r[3]; // 80296E44
  c->r[28]=c->r[4]|c->r[4]; // 80296E48
  cmps(c,0,(int32_t)c->r[0],0); // 80296E4C
  if (!crb(c,2)) { goto L_80297170; } // 80296E50
  c->r[5]=R32(c->r[4]+0x00000004u); // 80296E54
  c->r[30]=0u+0x00000000u; // 80296E58
  c->r[24]=R32(c->r[4]+0x00000014u); // 80296E5C
  c->r[29]=0u+0x00000000u; // 80296E60
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80296E64
  cmps(c,0,(int32_t)c->r[5],2); // 80296E68
  c->r[31]=R32(c->r[4]+0x00000010u); // 80296E6C
  c->r[23]=c->r[24]+c->r[0]; // 80296E70
  if (!crb(c,2)) { goto L_80297044; } // 80296E74
  c->r[4]=R32(c->r[3]+0x00000010u); // 80296E78
  c->r[3]=0u+0x0000002Cu; // 80296E7C
  c->r[26]=R32(c->r[4]+0x00000004u); // 80296E80
  c->r[4]=c->r[26]|c->r[26]; // 80296E84
  c->lr=0x80296E8Cu; f_8029C0C8(c); // 80296E88
  cmps(c,0,(int32_t)c->r[3],0); // 80296E8C
  c->r[25]=c->r[3]|c->r[3]; // 80296E90
  if (!crb(c,2)) { goto L_80296EB0; } // 80296E94
  c->r[3]=0u+0x804C0000u; // 80296E98
  c->r[4]=0u+0xFFFFFFFDu; // 80296E9C
  c->r[3]=c->r[3]+0xFFFFD428u; // 80296EA0
  c->lr=0x80296EA8u; f_8029D638(c); // 80296EA4
  c->r[25]=0u+0x00000000u; // 80296EA8
  goto L_80296FFC; // 80296EAC
L_80296EB0:;
  c->r[3]=c->r[26]|c->r[26]; // 80296EB0
  c->r[4]=c->r[24]|c->r[24]; // 80296EB4
  c->r[5]=c->r[31]|c->r[31]; // 80296EB8
  c->lr=0x80296EC0u; f_8029F93C(c); // 80296EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80296EC0
  W32(c->r[25]+0x00000000u,c->r[3]); // 80296EC4
  if (!crb(c,2)) { goto L_80296F08; } // 80296EC8
  c->r[3]=0u+0x804C0000u; // 80296ECC
  c->r[4]=0u+0xFFFFFFFFu; // 80296ED0
  c->r[3]=c->r[3]+0xFFFFD41Cu; // 80296ED4
  c->lr=0x80296EDCu; f_8029D638(c); // 80296ED8
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80296EE0
  if (crb(c,2)) { goto L_80296EF4; } // 80296EE4
  c->lr=0x80296EECu; f_8029FBA0(c); // 80296EE8
  c->r[0]=0u+0x00000000u; // 80296EEC
  W32(c->r[25]+0x00000000u,c->r[0]); // 80296EF0
L_80296EF4:;
  c->r[3]=c->r[25]|c->r[25]; // 80296EF4
  c->r[4]=0u+0x0000002Cu; // 80296EF8
  c->lr=0x80296F00u; f_8029C224(c); // 80296EFC
  c->r[25]=0u+0x00000000u; // 80296F00
  goto L_80296FFC; // 80296F04
L_80296F08:;
  c->lr=0x80296F0Cu; f_8029FC08(c); // 80296F08
  cmpu(c,0,c->r[3],0x00000002u); // 80296F0C
  W32(c->r[25]+0x00000004u,c->r[3]); // 80296F10
  if (!crb(c,1)) { goto L_80296F20; } // 80296F14
  c->r[0]=0u+0x00000002u; // 80296F18
  W32(c->r[25]+0x00000004u,c->r[0]); // 80296F1C
L_80296F20:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296F20
  c->r[4]=0u+0x00000000u; // 80296F24
  c->r[5]=0u+0x00000000u; // 80296F28
  c->lr=0x80296F30u; f_802A0168(c); // 80296F2C
  W32(c->r[25]+0x00000008u,c->r[3]); // 80296F30
  c->r[4]=0u+0x00000000u; // 80296F34
  c->r[5]=0u+0x00000002u; // 80296F38
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296F3C
  c->lr=0x80296F44u; f_8029FEF0(c); // 80296F40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80296F44
  c->r[4]=0u+0x00000000u; // 80296F48
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80296F4C
  c->r[5]=0u+0x00000004u; // 80296F50
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296F54
  c->lr=0x80296F5Cu; f_802A0168(c); // 80296F58
  W32(c->r[25]+0x00000010u,c->r[3]); // 80296F5C
  c->r[4]=0u+0x00000000u; // 80296F60
  c->r[5]=0u+0x00000005u; // 80296F64
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296F68
  c->lr=0x80296F70u; f_802A0168(c); // 80296F6C
  W32(c->r[25]+0x00000014u,c->r[3]); // 80296F70
  c->r[24]=c->r[25]|c->r[25]; // 80296F74
  c->r[26]=0u+0x00000000u; // 80296F78
  c->r[31]=0u+0x00000000u; // 80296F7C
  goto L_80296FD4; // 80296F80
L_80296F84:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296F84
  c->r[4]=c->r[31]|c->r[31]; // 80296F88
  c->r[5]=0u+0x00000001u; // 80296F8C
  c->lr=0x80296F94u; f_802A0168(c); // 80296F90
  W32(c->r[24]+0x00000018u,c->r[3]); // 80296F94
  c->r[4]=c->r[31]|c->r[31]; // 80296F98
  c->r[6]=c->r[1]+0x00000010u; // 80296F9C
  c->r[5]=0u+0x00000006u; // 80296FA0
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296FA4
  c->lr=0x80296FACu; f_8029FC10(c); // 80296FA8
  c->r[0]=R32(c->r[1]+0x00000018u); // 80296FAC
  c->r[4]=c->r[31]|c->r[31]; // 80296FB0
  c->r[5]=0u+0x00000003u; // 80296FB4
  W32(c->r[24]+0x00000020u,c->r[0]); // 80296FB8
  c->r[3]=R32(c->r[25]+0x00000000u); // 80296FBC
  c->lr=0x80296FC4u; f_8029FEF0(c); // 80296FC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80296FC4
  c->r[31]=c->r[31]+0x00000001u; // 80296FC8
  c->r[26]=c->r[26]+c->r[0]; // 80296FCC
  c->r[24]=c->r[24]+0x00000004u; // 80296FD0
L_80296FD4:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80296FD4
  cmpu(c,0,c->r[31],c->r[0]); // 80296FD8
  if (crb(c,0)) { IRQCHK(c); goto L_80296F84; } // 80296FDC
  cmps(c,0,(int32_t)c->r[26],0); // 80296FE0
  if (crb(c,2)) { goto L_80296FF4; } // 80296FE4
  c->r[0]=0u+0x00000001u; // 80296FE8
  W8(c->r[25]+0x00000028u,c->r[0]); // 80296FEC
  goto L_80296FFC; // 80296FF0
L_80296FF4:;
  c->r[0]=0u+0x00000000u; // 80296FF4
  W8(c->r[25]+0x00000028u,c->r[0]); // 80296FF8
L_80296FFC:;
  cmps(c,0,(int32_t)c->r[25],0); // 80296FFC
  if (!crb(c,2)) { goto L_8029700C; } // 80297000
  c->r[3]=0u+0x00000000u; // 80297004
  goto L_80297268; // 80297008
L_8029700C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8029700C
  c->r[24]=R32(c->r[25]+0x0000000Cu); // 80297010
  cmps(c,0,(int32_t)c->r[3],0); // 80297014
  c->r[26]=R32(c->r[25]+0x00000008u); // 80297018
  c->r[31]=R32(c->r[25]+0x00000018u); // 8029701C
  c->r[23]=R32(c->r[25]+0x00000020u); // 80297020
  if (crb(c,2)) { goto L_80297034; } // 80297024
  c->lr=0x8029702Cu; f_8029FBA0(c); // 80297028
  c->r[0]=0u+0x00000000u; // 8029702C
  W32(c->r[25]+0x00000000u,c->r[0]); // 80297030
L_80297034:;
  c->r[3]=c->r[25]|c->r[25]; // 80297034
  c->r[4]=0u+0x0000002Cu; // 80297038
  c->lr=0x80297040u; f_8029C224(c); // 8029703C
  goto L_802970D4; // 80297040
L_80297044:;
  cmps(c,0,(int32_t)c->r[5],3); // 80297044
  if (!crb(c,2)) { goto L_802970C4; } // 80297048
  c->r[3]=R32(c->r[3]+0x00000010u); // 8029704C
  c->r[4]=c->r[24]|c->r[24]; // 80297050
  c->r[5]=c->r[31]|c->r[31]; // 80297054
  c->r[3]=R32(c->r[3]+0x00000004u); // 80297058
  c->lr=0x80297060u; f_80285E8C(c); // 8029705C
  cmps(c,0,(int32_t)c->r[3],0); // 80297060
  c->r[25]=c->r[3]|c->r[3]; // 80297064
  if (!crb(c,2)) { goto L_80297074; } // 80297068
  c->r[3]=0u+0x00000000u; // 8029706C
  goto L_80297268; // 80297070
L_80297074:;
  c->lr=0x80297078u; f_80286078(c); // 80297074
  c->r[24]=c->r[3]|c->r[3]; // 80297078
  c->r[3]=c->r[25]|c->r[25]; // 8029707C
  c->lr=0x80297084u; f_80286070(c); // 80297080
  c->r[26]=c->r[3]|c->r[3]; // 80297084
  c->r[3]=c->r[25]|c->r[25]; // 80297088
  c->lr=0x80297090u; f_80286080(c); // 8029708C
  c->r[31]=c->r[3]|c->r[3]; // 80297090
  c->r[3]=c->r[25]|c->r[25]; // 80297094
  c->lr=0x8029709Cu; f_80286088(c); // 80297098
  c->r[23]=c->r[3]|c->r[3]; // 8029709C
  c->r[3]=c->r[25]|c->r[25]; // 802970A0
  c->lr=0x802970A8u; f_80286090(c); // 802970A4
  cmpu(c,0,c->r[24],0x00000002u); // 802970A8
  c->r[30]=c->r[3]|c->r[3]; // 802970AC
  if (!crb(c,2)) { goto L_802970B8; } // 802970B0
  c->r[29]=c->r[3]+0x00000060u; // 802970B4
L_802970B8:;
  c->r[3]=c->r[25]|c->r[25]; // 802970B8
  c->lr=0x802970C0u; f_80286020(c); // 802970BC
  goto L_802970D4; // 802970C0
L_802970C4:;
  c->r[24]=R8(c->r[4]+0x00000018u); // 802970C4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802970C8
  c->lr=0x802970D0u; f_801E7834(c); // 802970CC
  c->r[26]=c->r[3]|c->r[3]; // 802970D0
L_802970D4:;
  c->r[0]=0u+0x43300000u; // 802970D4
  c->r[3]=R32(c->r[27]+0x00000010u); // 802970D8
  W32(c->r[1]+0x00000024u,c->r[26]); // 802970DC
  c->r[5]=c->r[24]|c->r[24]; // 802970E0
  {uint32_t ea=c->r[2]+0xFFFFCDD8u; c->f[1]=RF64(ea);} // 802970E4
  c->r[8]=c->r[23]|c->r[23]; // 802970E8
  W32(c->r[1]+0x00000020u,c->r[0]); // 802970EC
  c->r[9]=c->r[31]|c->r[31]; // 802970F0
  c->r[3]=R32(c->r[3]+0x00000038u); // 802970F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 802970F8
  c->r[4]=R32(c->r[27]+0x00000014u); // 802970FC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80297100
  c->r[6]=R32(c->r[28]+0x0000008Cu); // 80297104
  c->r[7]=R32(c->r[28]+0x00000004u); // 80297108
  c->lr=0x80297110u; f_80298764(c); // 8029710C
  cmps(c,0,(int32_t)c->r[3],0); // 80297110
  c->r[24]=c->r[3]|c->r[3]; // 80297114
  if (!crb(c,2)) { goto L_80297124; } // 80297118
  c->r[3]=0u+0x00000000u; // 8029711C
  goto L_80297268; // 80297120
L_80297124:;
  c->r[4]=c->r[23]|c->r[23]; // 80297124
  c->r[5]=c->r[31]|c->r[31]; // 80297128
  c->lr=0x80297130u; f_80298734(c); // 8029712C
  c->r[3]=c->r[24]|c->r[24]; // 80297130
  c->r[4]=0u+0x00000000u; // 80297134
  c->r[5]=0u+0x00000000u; // 80297138
  c->r[6]=0u+0x00000000u; // 8029713C
  c->lr=0x80297144u; f_8029873C(c); // 80297140
  c->r[3]=c->r[24]|c->r[24]; // 80297144
  c->r[4]=c->r[30]|c->r[30]; // 80297148
  c->r[5]=c->r[29]|c->r[29]; // 8029714C
  c->lr=0x80297154u; f_80298754(c); // 80297150
  c->r[4]=R32(c->r[28]+0x00000004u); // 80297154
  c->r[3]=c->r[24]|c->r[24]; // 80297158
  c->lr=0x80297160u; f_80298744(c); // 8029715C
  c->r[3]=c->r[24]|c->r[24]; // 80297160
  c->r[4]=0u+0x00000000u; // 80297164
  c->lr=0x8029716Cu; f_8029872C(c); // 80297168
  goto L_80297264; // 8029716C
L_80297170:;
  cmps(c,0,(int32_t)c->r[0],1); // 80297170
  if (!crb(c,2)) { goto L_8029725C; } // 80297174
  c->r[3]=R32(c->r[4]+0x0000016Cu); // 80297178
  c->r[5]=c->r[1]+0x00000008u; // 8029717C
  c->r[23]=R8(c->r[4]+0x00000018u); // 80297180
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297184
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80297188
  c->r[4]=c->r[1]+0x0000000Cu; // 8029718C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80297190
  c->ctr=c->r[12]; // 80297194
  if (true) { c->lr=0x8029719Cu; dispatch(c,c->ctr); } // 80297198
  c->r[0]=0u+0x43300000u; // 8029719C
  c->r[8]=c->r[3]|c->r[3]; // 802971A0
  W32(c->r[1]+0x00000024u,c->r[23]); // 802971A4
  c->f[1]=c->f[31]; // 802971A8
  c->r[3]=R32(c->r[27]+0x00000010u); // 802971AC
  c->r[5]=c->r[23]|c->r[23]; // 802971B0
  W32(c->r[1]+0x00000020u,c->r[0]); // 802971B4
  {uint32_t ea=c->r[2]+0xFFFFCDD8u; c->f[2]=RF64(ea);} // 802971B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 802971BC
  {uint32_t ea=c->r[2]+0xFFFFCDD0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802971C0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[2]); // 802971C4
  {uint32_t ea=c->r[2]+0xFFFFCDD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802971C8
  {uint32_t ea=c->r[2]+0xFFFFCDCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802971CC
  c->r[3]=R32(c->r[3]+0x00000038u); // 802971D0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[31]); // 802971D4
  c->r[4]=R32(c->r[27]+0x00000014u); // 802971D8
  c->r[6]=R32(c->r[28]+0x0000008Cu); // 802971DC
  c->r[7]=R32(c->r[28]+0x00000004u); // 802971E0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 802971E4
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 802971E8
  c->r[10]=R32(c->r[28]+0x00000014u); // 802971EC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802971F0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 802971F4
  c->lr=0x802971FCu; f_80298AC4(c); // 802971F8
  cmps(c,0,(int32_t)c->r[3],0); // 802971FC
  c->r[24]=c->r[3]|c->r[3]; // 80297200
  if (!crb(c,2)) { goto L_80297210; } // 80297204
  c->r[3]=0u+0x00000000u; // 80297208
  goto L_80297268; // 8029720C
L_80297210:;
  c->r[4]=0u+0x00000000u; // 80297210
  c->r[5]=0u+0x00000000u; // 80297214
  c->lr=0x8029721Cu; f_80298734(c); // 80297218
  c->r[3]=c->r[24]|c->r[24]; // 8029721C
  c->r[4]=0u+0x00000000u; // 80297220
  c->r[5]=0u+0x00000000u; // 80297224
  c->r[6]=0u+0x00000000u; // 80297228
  c->lr=0x80297230u; f_8029873C(c); // 8029722C
  c->r[3]=c->r[24]|c->r[24]; // 80297230
  c->r[4]=0u+0x00000000u; // 80297234
  c->r[5]=0u+0x00000000u; // 80297238
  c->lr=0x80297240u; f_80298754(c); // 8029723C
  c->r[4]=R32(c->r[28]+0x00000004u); // 80297240
  c->r[3]=c->r[24]|c->r[24]; // 80297244
  c->lr=0x8029724Cu; f_80298744(c); // 80297248
  c->r[3]=c->r[24]|c->r[24]; // 8029724C
  c->r[4]=0u+0x00000001u; // 80297250
  c->lr=0x80297258u; f_8029872C(c); // 80297254
  goto L_80297264; // 80297258
L_8029725C:;
  c->r[3]=0u+0x00000000u; // 8029725C
  goto L_80297268; // 80297260
L_80297264:;
  c->r[3]=c->r[24]|c->r[24]; // 80297264
L_80297268:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80297268
  c->r[11]=c->r[1]+0x00000050u; // 8029726C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80297270
  c->lr=0x80297278u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80297274
  c->r[0]=R32(c->r[1]+0x00000064u); // 80297278
  c->lr=c->r[0]; // 8029727C
  c->r[1]=c->r[1]+0x00000060u; // 80297280
  return; // 80297284
}

// fn_80297288
void f_80297288(Ctx* __restrict c) {
  trace_call(0x80297288u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297288
  c->r[0]=c->lr; // 8029728C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297294
  c->r[31]=c->r[3]|c->r[3]; // 80297298
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8029729C
  c->r[12]=R32(c->r[12]+0x00000018u); // 802972A0
  c->ctr=c->r[12]; // 802972A4
  if (true) { c->lr=0x802972ACu; dispatch(c,c->ctr); } // 802972A8
  cmps(c,0,(int32_t)c->r[31],0); // 802972AC
  if (crb(c,2)) { goto L_802972CC; } // 802972B0
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 802972B4
  c->r[3]=c->r[31]|c->r[31]; // 802972B8
  c->r[4]=0u+0x00000001u; // 802972BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802972C0
  c->ctr=c->r[12]; // 802972C4
  if (true) { c->lr=0x802972CCu; dispatch(c,c->ctr); } // 802972C8
L_802972CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802972CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802972D0
  c->lr=c->r[0]; // 802972D4
  c->r[1]=c->r[1]+0x00000010u; // 802972D8
  return; // 802972DC
}

// fn_802972E0
void f_802972E0(Ctx* __restrict c) {
  trace_call(0x802972E0u);
  c->r[0]=R8(c->r[6]+0x00000094u); // 802972E0
  c->r[10]=0u+0x00000000u; // 802972E4
  c->r[6]=0u+0x804C0000u; // 802972E8
  W32(c->r[3]+0x00000000u,c->r[10]); // 802972EC
  c->r[6]=c->r[6]+0xFFFFD438u; // 802972F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802972F4
  W32(c->r[3]+0x00000004u,c->r[10]); // 802972F8
  W32(c->r[3]+0x00000008u,c->r[10]); // 802972FC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80297300
  W32(c->r[3]+0x00000010u,c->r[4]); // 80297304
  W32(c->r[3]+0x00000014u,c->r[5]); // 80297308
  W32(c->r[3]+0x00000018u,c->r[10]); // 8029730C
  W32(c->r[3]+0x0000001Cu,c->r[10]); // 80297310
  W32(c->r[3]+0x00000020u,c->r[10]); // 80297314
  W32(c->r[3]+0x00000024u,c->r[7]); // 80297318
  W32(c->r[3]+0x00000028u,c->r[8]); // 8029731C
  W32(c->r[3]+0x0000002Cu,c->r[9]); // 80297320
  W32(c->r[3]+0x00000030u,c->r[10]); // 80297324
  W32(c->r[3]+0x00000034u,c->r[0]); // 80297328
  W8(c->r[3]+0x00000038u,c->r[10]); // 8029732C
  return; // 80297330
}

// fn_80297334
void f_80297334(Ctx* __restrict c) {
  trace_call(0x80297334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297334
  c->r[0]=c->lr; // 80297338
  cmps(c,0,(int32_t)c->r[3],0); // 8029733C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297344
  c->r[31]=c->r[3]|c->r[3]; // 80297348
  if (crb(c,2)) { goto L_80297360; } // 8029734C
  cmps(c,0,(int32_t)c->r[4],0); // 80297350
  if (!crb(c,1)) { goto L_80297360; } // 80297354
  c->r[4]=0u+0x000000B8u; // 80297358
  c->lr=0x80297360u; f_8029C224(c); // 8029735C
L_80297360:;
  c->r[3]=c->r[31]|c->r[31]; // 80297360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297364
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297368
  c->lr=c->r[0]; // 8029736C
  c->r[1]=c->r[1]+0x00000010u; // 80297370
  return; // 80297374
}

// fn_80297378
void f_80297378(Ctx* __restrict c) {
  trace_call(0x80297378u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297378
  c->r[0]=c->lr; // 8029737C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80297380
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80297384
  c->r[31]=c->r[4]|c->r[4]; // 80297388
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029738C
  c->r[30]=c->r[3]|c->r[3]; // 80297390
  c->r[5]=R32(c->r[3]+0x00000010u); // 80297394
  cmps(c,0,(int32_t)c->r[5],0); // 80297398
  if (!crb(c,2)) { goto L_802973A8; } // 8029739C
  c->r[3]=0u+0x00000000u; // 802973A0
  goto L_80297548; // 802973A4
L_802973A8:;
  c->r[3]=R32(c->r[3]+0x00000034u); // 802973A8
  c->r[0]=0u+0x43300000u; // 802973AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802973B0
  c->r[0]=c->r[3]^0x80000000u; // 802973B4
  {uint32_t ea=c->r[2]+0xFFFFCDE8u; c->f[1]=RF64(ea);} // 802973B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802973BC
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802973C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802973C4
  c->r[3]=R32(c->r[5]+0x00000004u); // 802973C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802973CC
  fcmp(c,0,c->f[2],c->f[0]); // 802973D0
  if (crb(c,2)) { goto L_80297420; } // 802973D4
  c->lr=0x802973DCu; f_80292E2C(c); // 802973D8
  cmps(c,0,(int32_t)c->r[3],0); // 802973DC
  W32(c->r[30]+0x00000030u,c->r[3]); // 802973E0
  if (!crb(c,2)) { goto L_80297404; } // 802973E4
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 802973E8
  c->r[3]=c->r[30]|c->r[30]; // 802973EC
  c->r[12]=R32(c->r[12]+0x00000018u); // 802973F0
  c->ctr=c->r[12]; // 802973F4
  if (true) { c->lr=0x802973FCu; dispatch(c,c->ctr); } // 802973F8
  c->r[3]=0u+0x00000000u; // 802973FC
  goto L_80297548; // 80297400
L_80297404:;
  {uint32_t ea=c->r[2]+0xFFFFCDE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297404
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297408
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8029740C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80297410
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80297414
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80297418
  c->lr=0x80297420u; f_80292EE8(c); // 8029741C
L_80297420:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80297420
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297424
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297428
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029742C
  c->ctr=c->r[12]; // 80297430
  if (true) { c->lr=0x80297438u; dispatch(c,c->ctr); } // 80297434
  c->r[3]=R32(c->r[30]+0x00000010u); // 80297438
  c->r[3]=R32(c->r[3]+0x00000038u); // 8029743C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297440
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297444
  c->ctr=c->r[12]; // 80297448
  if (true) { c->lr=0x80297450u; dispatch(c,c->ctr); } // 8029744C
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80297450
  c->r[3]=c->r[30]|c->r[30]; // 80297454
  c->r[4]=c->r[31]|c->r[31]; // 80297458
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8029745C
  c->ctr=c->r[12]; // 80297460
  if (true) { c->lr=0x80297468u; dispatch(c,c->ctr); } // 80297464
  cmps(c,0,(int32_t)c->r[3],0); // 80297468
  W32(c->r[30]+0x00000018u,c->r[3]); // 8029746C
  if (crb(c,2)) { goto L_80297498; } // 80297470
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80297474
  c->r[3]=c->r[30]|c->r[30]; // 80297478
  c->r[4]=c->r[31]|c->r[31]; // 8029747C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80297480
  c->ctr=c->r[12]; // 80297484
  if (true) { c->lr=0x8029748Cu; dispatch(c,c->ctr); } // 80297488
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029748C
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 80297490
  c->lr=0x80297498u; f_80298344(c); // 80297494
L_80297498:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80297498
  c->r[3]=R32(c->r[3]+0x00000038u); // 8029749C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802974A0
  c->r[12]=R32(c->r[12]+0x00000018u); // 802974A4
  c->ctr=c->r[12]; // 802974A8
  if (true) { c->lr=0x802974B0u; dispatch(c,c->ctr); } // 802974AC
  c->r[4]=R32(c->r[30]+0x00000030u); // 802974B0
  cmps(c,0,(int32_t)c->r[4],0); // 802974B4
  if (crb(c,2)) { goto L_802974C8; } // 802974B8
  c->r[3]=R32(c->r[30]+0x00000010u); // 802974BC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 802974C0
  c->lr=0x802974C8u; f_80293034(c); // 802974C4
L_802974C8:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 802974C8
  c->r[3]=R32(c->r[3]+0x00000038u); // 802974CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802974D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 802974D4
  c->ctr=c->r[12]; // 802974D8
  if (true) { c->lr=0x802974E0u; dispatch(c,c->ctr); } // 802974DC
  c->r[3]=R32(c->r[30]+0x00000018u); // 802974E0
  cmps(c,0,(int32_t)c->r[3],0); // 802974E4
  if (!crb(c,2)) { goto L_80297508; } // 802974E8
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 802974EC
  c->r[3]=c->r[30]|c->r[30]; // 802974F0
  c->r[12]=R32(c->r[12]+0x00000018u); // 802974F4
  c->ctr=c->r[12]; // 802974F8
  if (true) { c->lr=0x80297500u; dispatch(c,c->ctr); } // 802974FC
  c->r[3]=0u+0x00000000u; // 80297500
  goto L_80297548; // 80297504
L_80297508:;
  c->lr=0x8029750Cu; f_8029824C(c); // 80297508
  cmps(c,0,(int32_t)c->r[3],0); // 8029750C
  if (!crb(c,2)) { goto L_80297530; } // 80297510
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80297514
  c->r[3]=c->r[30]|c->r[30]; // 80297518
  c->r[12]=R32(c->r[12]+0x00000018u); // 8029751C
  c->ctr=c->r[12]; // 80297520
  if (true) { c->lr=0x80297528u; dispatch(c,c->ctr); } // 80297524
  c->r[3]=0u+0x00000000u; // 80297528
  goto L_80297548; // 8029752C
L_80297530:;
  c->r[4]=R32(c->r[31]+0x00000164u); // 80297530
  cmps(c,0,(int32_t)c->r[4],1); // 80297534
  if (!crb(c,2)) { goto L_80297544; } // 80297538
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029753C
  c->lr=0x80297544u; f_80298720(c); // 80297540
L_80297544:;
  c->r[3]=0u+0x00000001u; // 80297544
L_80297548:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80297548
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029754C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80297550
  c->lr=c->r[0]; // 80297554
  c->r[1]=c->r[1]+0x00000020u; // 80297558
  return; // 8029755C
}

// fn_80297560
void f_80297560(Ctx* __restrict c) {
  trace_call(0x80297560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297560
  c->r[0]=c->lr; // 80297564
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029756C
  c->r[31]=c->r[3]|c->r[3]; // 80297570
  c->r[0]=R32(c->r[3]+0x00000018u); // 80297574
  cmps(c,0,(int32_t)c->r[0],0); // 80297578
  if (crb(c,2)) { goto L_80297588; } // 8029757C
  c->r[3]=c->r[0]|c->r[0]; // 80297580
  c->lr=0x80297588u; f_802982FC(c); // 80297584
L_80297588:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297588
  c->r[3]=R32(c->r[3]+0x00000038u); // 8029758C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297590
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80297594
  c->ctr=c->r[12]; // 80297598
  if (true) { c->lr=0x802975A0u; dispatch(c,c->ctr); } // 8029759C
  c->r[4]=R32(c->r[31]+0x00000030u); // 802975A0
  cmps(c,0,(int32_t)c->r[4],0); // 802975A4
  if (crb(c,2)) { goto L_802975B8; } // 802975A8
  c->r[3]=R32(c->r[31]+0x00000010u); // 802975AC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 802975B0
  c->lr=0x802975B8u; f_802930C0(c); // 802975B4
L_802975B8:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 802975B8
  c->r[3]=R32(c->r[3]+0x00000038u); // 802975BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802975C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802975C4
  c->ctr=c->r[12]; // 802975C8
  if (true) { c->lr=0x802975D0u; dispatch(c,c->ctr); } // 802975CC
  c->r[4]=R32(c->r[31]+0x00000018u); // 802975D0
  cmps(c,0,(int32_t)c->r[4],0); // 802975D4
  if (crb(c,2)) { goto L_802975F8; } // 802975D8
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 802975DC
  c->r[3]=c->r[31]|c->r[31]; // 802975E0
  c->r[12]=R32(c->r[12]+0x00000020u); // 802975E4
  c->ctr=c->r[12]; // 802975E8
  if (true) { c->lr=0x802975F0u; dispatch(c,c->ctr); } // 802975EC
  c->r[0]=0u+0x00000000u; // 802975F0
  W32(c->r[31]+0x00000018u,c->r[0]); // 802975F4
L_802975F8:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 802975F8
  c->r[3]=R32(c->r[3]+0x00000038u); // 802975FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297600
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297604
  c->ctr=c->r[12]; // 80297608
  if (true) { c->lr=0x80297610u; dispatch(c,c->ctr); } // 8029760C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297610
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297614
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297618
  c->r[12]=R32(c->r[12]+0x00000010u); // 8029761C
  c->ctr=c->r[12]; // 80297620
  if (true) { c->lr=0x80297628u; dispatch(c,c->ctr); } // 80297624
  c->r[3]=R32(c->r[31]+0x00000030u); // 80297628
  cmps(c,0,(int32_t)c->r[3],0); // 8029762C
  if (crb(c,2)) { goto L_8029764C; } // 80297630
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80297634
  c->r[12]=R32(c->r[12]+0x00000008u); // 80297638
  c->ctr=c->r[12]; // 8029763C
  if (true) { c->lr=0x80297644u; dispatch(c,c->ctr); } // 80297640
  c->r[0]=0u+0x00000000u; // 80297644
  W32(c->r[31]+0x00000030u,c->r[0]); // 80297648
L_8029764C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029764C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297650
  c->lr=c->r[0]; // 80297654
  c->r[1]=c->r[1]+0x00000010u; // 80297658
  return; // 8029765C
}

// fn_80297660
void f_80297660(Ctx* __restrict c) {
  trace_call(0x80297660u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297660
  c->r[0]=c->lr; // 80297664
  W32(c->r[1]+0x00000124u,c->r[0]); // 80297668
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 8029766C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 80297670
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 80297674
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 80297678
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 8029767C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 80297680
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[28]);} // 80297684
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,28,ea,0,0);} // 80297688
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[27]);} // 8029768C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,27,ea,0,0);} // 80297690
  c->r[11]=c->r[1]+0x000000D0u; // 80297694
  c->lr=0x8029769Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80297698
  c->r[5]=R32(c->r[3]+0x00000010u); // 8029769C
  c->r[30]=c->r[3]|c->r[3]; // 802976A0
  c->r[31]=c->r[4]|c->r[4]; // 802976A4
  c->r[3]=R32(c->r[5]+0x00000038u); // 802976A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802976AC
  c->r[12]=R32(c->r[12]+0x00000014u); // 802976B0
  c->ctr=c->r[12]; // 802976B4
  if (true) { c->lr=0x802976BCu; dispatch(c,c->ctr); } // 802976B8
  c->r[3]=R32(c->r[30]+0x00000018u); // 802976BC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802976C0
  c->lr=0x802976C8u; f_8029830C(c); // 802976C4
  c->r[3]=R32(c->r[30]+0x00000018u); // 802976C8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802976CC
  c->lr=0x802976D4u; f_80298314(c); // 802976D0
  c->r[3]=R32(c->r[30]+0x00000018u); // 802976D4
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802976D8
  c->lr=0x802976E0u; f_8029833C(c); // 802976DC
  c->r[3]=R32(c->r[30]+0x00000018u); // 802976E0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802976E4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802976E8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802976EC
  {uint32_t ea=c->r[31]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 802976F0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802976F4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 802976F8
  c->lr=0x80297700u; f_8029831C(c); // 802976FC
  c->r[4]=0u+0x00000004u; // 80297700
  c->r[0]=0u+0x43300000u; // 80297704
  W32(c->r[1]+0x000000B4u,c->r[4]); // 80297708
  c->r[3]=0u+0x00000001u; // 8029770C
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80297710
  W32(c->r[1]+0x000000B0u,c->r[0]); // 80297714
  {uint32_t ea=c->r[2]+0xFFFFCE30u; c->f[2]=RF64(ea);} // 80297718
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 8029771C
  {uint32_t ea=c->r[2]+0xFFFFCE00u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297720
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80297724
  {uint32_t ea=c->r[2]+0xFFFFCDF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80297728
  {uint32_t ea=c->r[2]+0xFFFFCDF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8029772C
  {uint32_t ea=c->r[2]+0xFFFFCDF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297730
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 80297734
  {uint32_t ea=c->r[2]+0xFFFFCDFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297738
  {uint32_t ea=c->r[31]+0x0000015Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8029773C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[5]);} // 80297740
  {uint32_t ea=c->r[31]+0x00000154u; c->f[28]=c->ps1[28]=RF32(ea);} // 80297744
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[5]);} // 80297748
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[5]);} // 8029774C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[5]);} // 80297750
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[5]);} // 80297754
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[5]);} // 80297758
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[5]);} // 8029775C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[5]);} // 80297760
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[5]);} // 80297764
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[5]);} // 80297768
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 8029776C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[5]);} // 80297770
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 80297774
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[5]);} // 80297778
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[5]);} // 8029777C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[5]);} // 80297780
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[5]);} // 80297784
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[5]);} // 80297788
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[5]);} // 8029778C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[5]);} // 80297790
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[4]);} // 80297794
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[3]);} // 80297798
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[2]);} // 8029779C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 802977A0
  W32(c->r[1]+0x00000088u,c->r[4]); // 802977A4
  W32(c->r[1]+0x000000ACu,c->r[3]); // 802977A8
  c->lr=0x802977B0u; f_801F75D8(c); // 802977AC
  {uint32_t ea=c->r[2]+0xFFFFCE00u; c->f[0]=c->ps1[0]=RF32(ea);} // 802977B0
  c->f[29]=c->ps1[29]=S(c->f[1]); // 802977B4
  fcmp(c,0,c->f[30],c->f[0]); // 802977B8
  if (!crb(c,1)) { goto L_802977C4; } // 802977BC
  c->f[30]=c->f[0]; // 802977C0
L_802977C4:;
  {uint32_t ea=c->r[2]+0xFFFFCE04u; c->f[0]=c->ps1[0]=RF32(ea);} // 802977C4
  fcmp(c,0,c->f[30],c->f[0]); // 802977C8
  if (!crb(c,0)) { goto L_802977D4; } // 802977CC
  c->f[30]=c->f[0]; // 802977D0
L_802977D4:;
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802977D4
  fcmp(c,0,c->f[30],c->f[0]); // 802977D8
  if (!crb(c,0)) { goto L_802977FC; } // 802977DC
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802977E0
  c->f[28]=c->ps1[28]=S(c->f[0]+c->f[28]); // 802977E4
  fcmp(c,0,c->f[28],c->f[0]); // 802977E8
  if (!crb(c,1)) { goto L_802977F8; } // 802977EC
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802977F0
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[0]); // 802977F4
L_802977F8:;
  c->f[30]=-c->f[30]; // 802977F8
L_802977FC:;
  {uint32_t ea=c->r[2]+0xFFFFCE00u; c->f[0]=c->ps1[0]=RF32(ea);} // 802977FC
  c->f[1]=c->f[28]; // 80297800
  {uint32_t ea=c->r[2]+0xFFFFCE10u; c->f[2]=RF64(ea);} // 80297804
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[30]); // 80297808
  c->lr=0x80297810u; f_801F737C(c); // 8029780C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80297810
  {uint32_t ea=c->r[2]+0xFFFFCE18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297814
  fcmp(c,0,c->f[28],c->f[0]); // 80297818
  if (!crb(c,0)) { goto L_80297828; } // 8029781C
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297820
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 80297824
L_80297828:;
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297828
  fcmp(c,0,c->f[28],c->f[0]); // 8029782C
  if (!crb(c,1)) { goto L_8029783C; } // 80297830
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297834
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[0]); // 80297838
L_8029783C:;
  c->r[26]=R32(c->r[1]+0x000000ACu); // 8029783C
  c->r[4]=c->r[1]+0x00000088u; // 80297840
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297844
  c->r[29]=c->r[26]+0x00000003u; // 80297848
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8029784C
  c->r[0]=c->r[29]-c->r[26]; // 80297850
  c->r[28]=c->r[26]|c->r[26]; // 80297854
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 80297858
  c->r[4]=c->r[4]+c->r[3]; // 8029785C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80297860
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80297864
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80297868
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8029786C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80297870
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80297874
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80297878
  c->ctr=c->r[0]; // 8029787C
  cmpu(c,0,c->r[26],c->r[29]); // 80297880
  if (!crb(c,0)) { goto L_80297958; } // 80297884
L_80297888:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297888
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029788C
  c->f[3]=c->ps1[3]=S(c->f[28]-c->f[1]); // 80297890
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80297894
  fcmp(c,0,c->f[3],c->f[2]); // 80297898
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029789C
  if (!crb(c,2)) { goto L_8029794C; } // 802978A0
  fcmp(c,0,c->f[3],c->f[4]); // 802978A4
  if (!crb(c,0)) { goto L_8029794C; } // 802978A8
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[2]=c->ps1[2]=RF32(ea);} // 802978AC
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802978B0
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[4],c->f[2],-c->f[3])); // 802978B4
  {uint32_t ea=c->r[2]+0xFFFFCE24u; c->f[0]=c->ps1[0]=RF32(ea);} // 802978B8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 802978BC
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 802978C0
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[2]); // 802978C4
  fcmp(c,0,c->f[27],c->f[0]); // 802978C8
  if (!crb(c,0)) { goto L_802978D4; } // 802978CC
  c->f[27]=c->f[0]; // 802978D0
L_802978D4:;
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802978D4
  fcmp(c,0,c->f[27],c->f[0]); // 802978D8
  if (!crb(c,1)) { goto L_802978E4; } // 802978DC
  c->f[27]=c->f[0]; // 802978E0
L_802978E4:;
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802978E4
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 802978E8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[27]); // 802978EC
  {uint32_t ea=c->r[2]+0xFFFFCE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 802978F0
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[0]=c->ps1[0]=RF32(ea);} // 802978F4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 802978F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802978FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80297900
  c->lr=0x80297908u; f_801F6E10(c); // 80297904
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297908
  c->f[4]=c->ps1[4]=S(c->f[1]); // 8029790C
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297910
  c->r[27]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80297914
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[27]); // 80297918
  c->r[3]=c->r[1]+0x00000028u; // 8029791C
  {uint32_t ea=c->r[2]+0xFFFFCE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297920
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297924
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80297928
  {uint32_t ea=c->r[3]+c->r[27]; WF32(ea,c->f[4]);} // 8029792C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80297930
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80297934
  c->lr=0x8029793Cu; f_801F721C(c); // 80297938
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8029793C
  c->r[3]=c->r[1]+0x0000002Cu; // 80297940
  {uint32_t ea=c->r[3]+c->r[27]; WF32(ea,c->f[0]);} // 80297944
  goto L_80297958; // 80297948
L_8029794C:;
  c->r[4]=c->r[4]+0x00000004u; // 8029794C
  c->r[28]=c->r[28]+0x00000001u; // 80297950
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80297888; } // 80297954
L_80297958:;
  cmpu(c,0,c->r[28],c->r[29]); // 80297958
  if (!crb(c,2)) { goto L_80297A38; } // 8029795C
  c->r[27]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80297960
  c->r[4]=c->r[1]+0x0000008Cu; // 80297964
  {uint32_t ea=c->r[4]+c->r[27]; c->f[1]=c->ps1[1]=RF32(ea);} // 80297968
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029796C
  c->f[5]=c->ps1[5]=S(c->f[28]-c->f[1]); // 80297970
  fcmp(c,0,c->f[5],c->f[0]); // 80297974
  if (!crb(c,0)) { goto L_80297984; } // 80297978
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029797C
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[0]); // 80297980
L_80297984:;
  c->r[28]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80297984
  c->r[3]=c->r[1]+0x0000008Cu; // 80297988
  {uint32_t ea=c->r[3]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 8029798C
  c->r[29]=c->r[1]+0x00000028u; // 80297990
  {uint32_t ea=c->r[4]+c->r[27]; c->f[0]=c->ps1[0]=RF32(ea);} // 80297994
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80297998
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8029799C
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[2]=c->ps1[2]=RF32(ea);} // 802979A0
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802979A4
  {uint32_t ea=c->r[2]+0xFFFFCE24u; c->f[0]=c->ps1[0]=RF32(ea);} // 802979A8
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[4]); // 802979AC
  c->f[3]=c->ps1[3]=S(-std::fma(c->f[4],c->f[2],-c->f[5])); // 802979B0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 802979B4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 802979B8
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[2]); // 802979BC
  fcmp(c,0,c->f[27],c->f[0]); // 802979C0
  if (!crb(c,0)) { goto L_802979CC; } // 802979C4
  c->f[27]=c->f[0]; // 802979C8
L_802979CC:;
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802979CC
  fcmp(c,0,c->f[27],c->f[0]); // 802979D0
  if (!crb(c,1)) { goto L_802979DC; } // 802979D4
  c->f[27]=c->f[0]; // 802979D8
L_802979DC:;
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802979DC
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 802979E0
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[27]); // 802979E4
  {uint32_t ea=c->r[2]+0xFFFFCE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 802979E8
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[0]=c->ps1[0]=RF32(ea);} // 802979EC
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 802979F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802979F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802979F8
  c->lr=0x80297A00u; f_801F6E10(c); // 802979FC
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A00
  c->f[4]=c->ps1[4]=S(c->f[1]); // 80297A04
  c->r[3]=c->r[1]+0x00000028u; // 80297A08
  {uint32_t ea=c->r[2]+0xFFFFCE08u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297A0C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[27]); // 80297A10
  {uint32_t ea=c->r[2]+0xFFFFCE28u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297A14
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A18
  {uint32_t ea=c->r[3]+c->r[27]; WF32(ea,c->f[4]);} // 80297A1C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80297A20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80297A24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80297A28
  c->lr=0x80297A30u; f_801F721C(c); // 80297A2C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80297A30
  {uint32_t ea=c->r[29]+c->r[28]; WF32(ea,c->f[0]);} // 80297A34
L_80297A38:;
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[31]); // 80297A38
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[9]=c->ps1[9]=RF32(ea);} // 80297A3C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A40
  c->r[4]=0u+0x00000000u; // 80297A44
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297A48
  c->f[28]=c->ps1[28]=S(std::fma(c->f[0],c->f[30],c->f[2])); // 80297A4C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A50
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[30],c->f[2])); // 80297A54
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297A58
  c->f[13]=c->ps1[13]=S(std::fma(c->f[0],c->f[30],c->f[2])); // 80297A5C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A60
  c->f[12]=c->ps1[12]=S(std::fma(c->f[1],c->f[30],c->f[2])); // 80297A64
  {uint32_t ea=c->r[31]+0x0000014Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80297A68
  c->f[11]=c->ps1[11]=S(std::fma(c->f[0],c->f[30],c->f[2])); // 80297A6C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A70
  c->f[10]=c->ps1[10]=S(std::fma(c->f[0],c->f[30],c->f[2])); // 80297A74
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A78
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297A7C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[29],c->f[0])); // 80297A80
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80297A84
  c->f[7]=c->ps1[7]=S(std::fma(c->f[8],c->f[28],c->f[2])); // 80297A88
  c->f[6]=c->ps1[6]=S(std::fma(c->f[8],c->f[13],c->f[0])); // 80297A8C
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[5]=c->ps1[5]=RF32(ea);} // 80297A90
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80297A94
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80297A98
  c->f[5]=c->ps1[5]=S(std::fma(c->f[8],c->f[12],c->f[5])); // 80297A9C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297AA0
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80297AA4
  c->f[4]=c->ps1[4]=S(std::fma(c->f[8],c->f[9],c->f[4])); // 80297AA8
  c->f[3]=c->ps1[3]=S(std::fma(c->f[8],c->f[9],c->f[3])); // 80297AAC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[29]);} // 80297AB0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[8],c->f[11],c->f[2])); // 80297AB4
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297AB8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[10],c->f[0])); // 80297ABC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 80297AC0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[13]);} // 80297AC4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 80297AC8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[11]);} // 80297ACC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[10]);} // 80297AD0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[29]);} // 80297AD4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[28]);} // 80297AD8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[13]);} // 80297ADC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[12]);} // 80297AE0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[9]);} // 80297AE4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[9]);} // 80297AE8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[11]);} // 80297AEC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[10]);} // 80297AF0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80297AF4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[7]);} // 80297AF8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[6]);} // 80297AFC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[5]);} // 80297B00
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 80297B04
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 80297B08
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 80297B0C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80297B10
  c->lr=0x80297B18u; f_8029832C(c); // 80297B14
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B18
  c->r[4]=0u+0x00000001u; // 80297B1C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B20
  c->lr=0x80297B28u; f_8029832C(c); // 80297B24
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B28
  c->r[4]=0u+0x00000002u; // 80297B2C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B30
  c->lr=0x80297B38u; f_8029832C(c); // 80297B34
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B38
  c->r[4]=0u+0x00000003u; // 80297B3C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B40
  c->lr=0x80297B48u; f_8029832C(c); // 80297B44
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B48
  c->r[4]=0u+0x00000004u; // 80297B4C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B50
  c->lr=0x80297B58u; f_8029832C(c); // 80297B54
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B58
  c->r[4]=0u+0x00000005u; // 80297B5C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B60
  c->lr=0x80297B68u; f_8029832C(c); // 80297B64
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B68
  c->r[4]=0u+0x00000006u; // 80297B6C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B70
  c->lr=0x80297B78u; f_8029832C(c); // 80297B74
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B78
  c->r[4]=0u+0x00000007u; // 80297B7C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B80
  c->lr=0x80297B88u; f_8029832C(c); // 80297B84
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B88
  c->r[4]=0u+0x00000000u; // 80297B8C
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297B90
  c->lr=0x80297B98u; f_80298334(c); // 80297B94
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297B98
  c->r[4]=0u+0x00000001u; // 80297B9C
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 80297BA0
  c->lr=0x80297BA8u; f_80298334(c); // 80297BA4
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297BA8
  {uint32_t ea=c->r[31]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80297BAC
  {uint32_t ea=c->r[31]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80297BB0
  c->lr=0x80297BB8u; f_80298324(c); // 80297BB4
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80297BB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80297BBC
  cmpu(c,0,c->r[0],0x00000001u); // 80297BC0
  if (crb(c,1)) { goto L_80297BD0; } // 80297BC4
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297BC8
  c->lr=0x80297BD0u; f_80298454(c); // 80297BCC
L_80297BD0:;
  c->r[27]=R32(c->r[31]+0x00000088u); // 80297BD0
  cmps(c,0,(int32_t)c->r[27],0); // 80297BD4
  if (crb(c,2)) { goto L_80297C18; } // 80297BD8
  c->r[3]=c->r[27]|c->r[27]; // 80297BDC
  c->lr=0x80297BE4u; f_801E6E58(c); // 80297BE0
  cmpu(c,0,c->r[3],0x00000080u); // 80297BE4
  if (crb(c,0)) { goto L_80297C08; } // 80297BE8
  c->r[3]=0u+0x803D0000u; // 80297BEC
  c->r[4]=c->r[27]|c->r[27]; // 80297BF0
  c->r[3]=c->r[3]+0x000032F8u; // 80297BF4
  c->r[3]=c->r[3]+0x00000012u; // 80297BF8
  c->lr=0x80297C00u; f_8029D500(c); // 80297BFC
  c->r[0]=0u+0x00000000u; // 80297C00
  W8(c->r[30]+0x00000038u,c->r[0]); // 80297C04
L_80297C08:;
  c->r[4]=R32(c->r[31]+0x00000088u); // 80297C08
  c->r[3]=c->r[30]+0x00000038u; // 80297C0C
  c->lr=0x80297C14u; f_801F0AA4(c); // 80297C10
  goto L_80297C20; // 80297C14
L_80297C18:;
  c->r[0]=0u+0x00000000u; // 80297C18
  W8(c->r[30]+0x00000038u,c->r[0]); // 80297C1C
L_80297C20:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80297C20
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297C24
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297C28
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297C2C
  c->ctr=c->r[12]; // 80297C30
  if (true) { c->lr=0x80297C38u; dispatch(c,c->ctr); } // 80297C34
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80297C38
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 80297C3C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 80297C40
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 80297C44
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,29,ea,0,0);} // 80297C48
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 80297C4C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,28,ea,0,0);} // 80297C50
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[28]=RF64(ea);} // 80297C54
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,27,ea,0,0);} // 80297C58
  c->r[11]=c->r[1]+0x000000D0u; // 80297C5C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[27]=RF64(ea);} // 80297C60
  c->lr=0x80297C68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80297C64
  c->r[0]=R32(c->r[1]+0x00000124u); // 80297C68
  c->lr=c->r[0]; // 80297C6C
  c->r[1]=c->r[1]+0x00000120u; // 80297C70
  return; // 80297C74
}

// fn_80297C78
void f_80297C78(Ctx* __restrict c) {
  trace_call(0x80297C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297C78
  c->r[0]=c->lr; // 80297C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297C80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297C84
  c->r[31]=c->r[3]|c->r[3]; // 80297C88
  c->r[4]=R32(c->r[3]+0x00000010u); // 80297C8C
  c->r[3]=R32(c->r[4]+0x00000038u); // 80297C90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297C94
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297C98
  c->ctr=c->r[12]; // 80297C9C
  if (true) { c->lr=0x80297CA4u; dispatch(c,c->ctr); } // 80297CA0
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297CA4
  c->lr=0x80297CACu; f_80298354(c); // 80297CA8
  c->r[0]=0u+0x00000001u; // 80297CAC
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297CB0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297CB4
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297CB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297CBC
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297CC0
  c->ctr=c->r[12]; // 80297CC4
  if (true) { c->lr=0x80297CCCu; dispatch(c,c->ctr); } // 80297CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297CD0
  c->lr=c->r[0]; // 80297CD4
  c->r[1]=c->r[1]+0x00000010u; // 80297CD8
  return; // 80297CDC
}

// fn_80297CE0
void f_80297CE0(Ctx* __restrict c) {
  trace_call(0x80297CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297CE0
  c->r[0]=c->lr; // 80297CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297CE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297CEC
  c->r[31]=c->r[3]|c->r[3]; // 80297CF0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80297CF4
  c->r[3]=R32(c->r[4]+0x00000038u); // 80297CF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297CFC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297D00
  c->ctr=c->r[12]; // 80297D04
  if (true) { c->lr=0x80297D0Cu; dispatch(c,c->ctr); } // 80297D08
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297D0C
  c->lr=0x80297D14u; f_802983E4(c); // 80297D10
  c->r[0]=0u+0x00000002u; // 80297D14
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297D18
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297D1C
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297D20
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297D24
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297D28
  c->ctr=c->r[12]; // 80297D2C
  if (true) { c->lr=0x80297D34u; dispatch(c,c->ctr); } // 80297D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297D34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297D38
  c->lr=c->r[0]; // 80297D3C
  c->r[1]=c->r[1]+0x00000010u; // 80297D40
  return; // 80297D44
}

// fn_80297D48
void f_80297D48(Ctx* __restrict c) {
  trace_call(0x80297D48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297D48
  c->r[0]=c->lr; // 80297D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297D50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297D54
  c->r[31]=c->r[3]|c->r[3]; // 80297D58
  c->r[4]=R32(c->r[3]+0x00000010u); // 80297D5C
  c->r[3]=R32(c->r[4]+0x00000038u); // 80297D60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297D64
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297D68
  c->ctr=c->r[12]; // 80297D6C
  if (true) { c->lr=0x80297D74u; dispatch(c,c->ctr); } // 80297D70
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297D74
  c->lr=0x80297D7Cu; f_8029841C(c); // 80297D78
  c->r[0]=0u+0x00000002u; // 80297D7C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297D80
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297D84
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297D88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297D8C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297D90
  c->ctr=c->r[12]; // 80297D94
  if (true) { c->lr=0x80297D9Cu; dispatch(c,c->ctr); } // 80297D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297D9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297DA0
  c->lr=c->r[0]; // 80297DA4
  c->r[1]=c->r[1]+0x00000010u; // 80297DA8
  return; // 80297DAC
}

// fn_80297DB0
void f_80297DB0(Ctx* __restrict c) {
  trace_call(0x80297DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297DB0
  c->r[0]=c->lr; // 80297DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297DBC
  c->r[31]=c->r[4]|c->r[4]; // 80297DC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80297DC4
  c->r[30]=c->r[3]|c->r[3]; // 80297DC8
  c->r[5]=R32(c->r[3]+0x00000010u); // 80297DCC
  c->r[3]=R32(c->r[5]+0x00000038u); // 80297DD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297DD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297DD8
  c->ctr=c->r[12]; // 80297DDC
  if (true) { c->lr=0x80297DE4u; dispatch(c,c->ctr); } // 80297DE0
  c->r[3]=R32(c->r[30]+0x00000018u); // 80297DE4
  c->r[4]=c->r[31]|c->r[31]; // 80297DE8
  c->lr=0x80297DF0u; f_8029845C(c); // 80297DEC
  W32(c->r[30]+0x00000020u,c->r[31]); // 80297DF0
  c->r[3]=R32(c->r[30]+0x00000010u); // 80297DF4
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297DF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297DFC
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297E00
  c->ctr=c->r[12]; // 80297E04
  if (true) { c->lr=0x80297E0Cu; dispatch(c,c->ctr); } // 80297E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297E0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297E10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80297E14
  c->lr=c->r[0]; // 80297E18
  c->r[1]=c->r[1]+0x00000010u; // 80297E1C
  return; // 80297E20
}

// fn_80297E24
void f_80297E24(Ctx* __restrict c) {
  trace_call(0x80297E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80297E24
  c->r[0]=c->lr; // 80297E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80297E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80297E30
  c->r[31]=c->r[3]|c->r[3]; // 80297E34
  c->r[4]=R32(c->r[3]+0x00000010u); // 80297E38
  c->r[3]=R32(c->r[4]+0x00000038u); // 80297E3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297E40
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80297E44
  c->ctr=c->r[12]; // 80297E48
  if (true) { c->lr=0x80297E50u; dispatch(c,c->ctr); } // 80297E4C
  c->r[3]=R32(c->r[31]+0x00000030u); // 80297E50
  cmps(c,0,(int32_t)c->r[3],0); // 80297E54
  if (crb(c,2)) { goto L_80297EE0; } // 80297E58
  c->lr=0x80297E60u; f_80292EE0(c); // 80297E5C
  cmps(c,0,(int32_t)c->r[3],0); // 80297E60
  if (!crb(c,0)) { goto L_80297EE0; } // 80297E64
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297E68
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297E6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297E70
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297E74
  c->ctr=c->r[12]; // 80297E78
  if (true) { c->lr=0x80297E80u; dispatch(c,c->ctr); } // 80297E7C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297E80
  c->lr=0x80297E88u; f_8029834C(c); // 80297E84
  c->r[0]=R32(c->r[31]+0x00000034u); // 80297E88
  c->r[4]=c->r[3]|c->r[3]; // 80297E8C
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297E90
  c->r[4]=c->r[0]+c->r[4]; // 80297E94
  c->lr=0x80297E9Cu; f_80298344(c); // 80297E98
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297E9C
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297EA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297EA4
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297EA8
  c->ctr=c->r[12]; // 80297EAC
  if (true) { c->lr=0x80297EB4u; dispatch(c,c->ctr); } // 80297EB0
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297EB4
  c->r[4]=R32(c->r[31]+0x00000030u); // 80297EB8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80297EBC
  c->lr=0x80297EC4u; f_802930C0(c); // 80297EC0
  c->r[3]=R32(c->r[31]+0x00000030u); // 80297EC4
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80297EC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80297ECC
  c->ctr=c->r[12]; // 80297ED0
  if (true) { c->lr=0x80297ED8u; dispatch(c,c->ctr); } // 80297ED4
  c->r[0]=0u+0x00000000u; // 80297ED8
  W32(c->r[31]+0x00000030u,c->r[0]); // 80297EDC
L_80297EE0:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297EE0
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297EE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297EE8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80297EEC
  c->ctr=c->r[12]; // 80297EF0
  if (true) { c->lr=0x80297EF8u; dispatch(c,c->ctr); } // 80297EF4
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297EF8
  c->lr=0x80297F00u; f_8029849C(c); // 80297EFC
  c->r[3]=R32(c->r[31]+0x00000018u); // 80297F00
  c->lr=0x80297F08u; f_80298604(c); // 80297F04
  cmps(c,0,(int32_t)c->r[3],2); // 80297F08
  if (crb(c,2)) { goto L_80297F2C; } // 80297F0C
  if (!crb(c,0)) { goto L_80297F20; } // 80297F10
  cmps(c,0,(int32_t)c->r[3],0); // 80297F14
  if (crb(c,2)) { goto L_80297F38; } // 80297F18
  goto L_80297F4C; // 80297F1C
L_80297F20:;
  cmps(c,0,(int32_t)c->r[3],4); // 80297F20
  if (!crb(c,0)) { goto L_80297F4C; } // 80297F24
  goto L_80297F44; // 80297F28
L_80297F2C:;
  c->r[0]=0u+0x00000003u; // 80297F2C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297F30
  goto L_80297F4C; // 80297F34
L_80297F38:;
  c->r[0]=0u+0x00000000u; // 80297F38
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297F3C
  goto L_80297F4C; // 80297F40
L_80297F44:;
  c->r[0]=0u+0x00000004u; // 80297F44
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80297F48
L_80297F4C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297F4C
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297F50
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297F54
  c->r[12]=R32(c->r[12]+0x00000018u); // 80297F58
  c->ctr=c->r[12]; // 80297F5C
  if (true) { c->lr=0x80297F64u; dispatch(c,c->ctr); } // 80297F60
  c->r[3]=R32(c->r[31]+0x00000010u); // 80297F64
  c->r[3]=R32(c->r[3]+0x00000038u); // 80297F68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80297F6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80297F70
  c->ctr=c->r[12]; // 80297F74
  if (true) { c->lr=0x80297F7Cu; dispatch(c,c->ctr); } // 80297F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80297F7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80297F80
  c->lr=c->r[0]; // 80297F84
  c->r[1]=c->r[1]+0x00000010u; // 80297F88
  return; // 80297F8C
}

// fn_80297F90
void f_80297F90(Ctx* __restrict c) {
  trace_call(0x80297F90u);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80297F90
  return; // 80297F94
}

// fn_80297F98
void f_80297F98(Ctx* __restrict c) {
  trace_call(0x80297F98u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80297F98
  f_8029834C(c); return; // 80297F9C
}

// fn_80297FA0
void f_80297FA0(Ctx* __restrict c) {
  trace_call(0x80297FA0u);
  c->r[3]=c->r[3]+0x00000038u; // 80297FA0
  return; // 80297FA4
}

// fn_80297FA8
void f_80297FA8(Ctx* __restrict c) {
  trace_call(0x80297FA8u);
  c->r[0]=c->r[4]+0x00010000u; // 80297FA8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80297FAC
  if (crb(c,2)) { goto L_80297FC0; } // 80297FB0
  c->r[0]=R32(c->r[3]+0x00000024u); // 80297FB4
  cmpu(c,0,c->r[0],c->r[4]); // 80297FB8
  if (!crb(c,2)) { goto L_80297FC8; } // 80297FBC
L_80297FC0:;
  c->r[4]=0u+0x00000001u; // 80297FC0
  goto L_80297FCC; // 80297FC4
L_80297FC8:;
  c->r[4]=0u+0x00000000u; // 80297FC8
L_80297FCC:;
  c->r[0]=0u-c->r[4]; // 80297FCC
  c->r[0]=c->r[0]|c->r[4]; // 80297FD0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80297FD4
  if (crb(c,2)) { goto L_8029800C; } // 80297FD8
  c->r[0]=c->r[5]+0x00010000u; // 80297FDC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80297FE0
  if (crb(c,2)) { goto L_80297FF4; } // 80297FE4
  c->r[0]=R32(c->r[3]+0x00000028u); // 80297FE8
  cmpu(c,0,c->r[0],c->r[5]); // 80297FEC
  if (!crb(c,2)) { goto L_80297FFC; } // 80297FF0
L_80297FF4:;
  c->r[4]=0u+0x00000001u; // 80297FF4
  goto L_80298000; // 80297FF8
L_80297FFC:;
  c->r[4]=0u+0x00000000u; // 80297FFC
L_80298000:;
  c->r[0]=0u-c->r[4]; // 80298000
  c->r[0]=c->r[0]|c->r[4]; // 80298004
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80298008
L_8029800C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8029800C
  if (crb(c,2)) { goto L_80298044; } // 80298010
  c->r[0]=c->r[6]+0x00010000u; // 80298014
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80298018
  if (crb(c,2)) { goto L_8029802C; } // 8029801C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80298020
  cmpu(c,0,c->r[0],c->r[6]); // 80298024
  if (!crb(c,2)) { goto L_80298034; } // 80298028
L_8029802C:;
  c->r[3]=0u+0x00000001u; // 8029802C
  goto L_80298038; // 80298030
L_80298034:;
  c->r[3]=0u+0x00000000u; // 80298034
L_80298038:;
  c->r[0]=0u-c->r[3]; // 80298038
  c->r[0]=c->r[0]|c->r[3]; // 8029803C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80298040
L_80298044:;
  c->r[3]=c->r[0]|c->r[0]; // 80298044
  return; // 80298048
}

// fn_8029804C
void f_8029804C(Ctx* __restrict c) {
  trace_call(0x8029804Cu);
  c->r[3]=R32(c->r[3]+0x00000018u); // 8029804C
  f_8029860C(c); return; // 80298050
}

// fn_80298054
void f_80298054(Ctx* __restrict c) {
  trace_call(0x80298054u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298054
  c->r[0]=c->lr; // 80298058
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029805C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80298060
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80298064
  c->r[0]=R32(c->r[4]+0x00000000u); // 80298068
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8029806C
  cmps(c,0,(int32_t)c->r[0],0); // 80298070
  W32(c->r[1]+0x00000028u,c->r[30]); // 80298074
  c->r[30]=c->r[4]|c->r[4]; // 80298078
  W32(c->r[1]+0x00000024u,c->r[29]); // 8029807C
  c->r[29]=c->r[3]|c->r[3]; // 80298080
  if (!crb(c,2)) { goto L_802980BC; } // 80298084
  c->r[3]=R32(c->r[3]+0x00000010u); // 80298088
  c->r[5]=R32(c->r[30]+0x00000014u); // 8029808C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80298090
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80298094
  c->r[8]=c->r[5]+c->r[0]; // 80298098
  c->r[3]=R32(c->r[3]+0x00000038u); // 8029809C
  c->r[4]=R32(c->r[29]+0x00000014u); // 802980A0
  c->r[5]=R8(c->r[30]+0x00000018u); // 802980A4
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 802980A8
  c->r[7]=R32(c->r[30]+0x00000004u); // 802980AC
  c->r[9]=R32(c->r[30]+0x00000010u); // 802980B0
  c->lr=0x802980B8u; f_80298764(c); // 802980B4
  goto L_80298150; // 802980B8
L_802980BC:;
  cmps(c,0,(int32_t)c->r[0],1); // 802980BC
  if (!crb(c,2)) { goto L_8029814C; } // 802980C0
  c->r[3]=R32(c->r[4]+0x0000016Cu); // 802980C4
  c->r[5]=c->r[1]+0x00000008u; // 802980C8
  c->r[31]=R8(c->r[4]+0x00000018u); // 802980CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802980D0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802980D4
  c->r[4]=c->r[1]+0x0000000Cu; // 802980D8
  c->r[12]=R32(c->r[12]+0x00000030u); // 802980DC
  c->ctr=c->r[12]; // 802980E0
  if (true) { c->lr=0x802980E8u; dispatch(c,c->ctr); } // 802980E4
  c->r[0]=0u+0x43300000u; // 802980E8
  c->r[8]=c->r[3]|c->r[3]; // 802980EC
  W32(c->r[1]+0x00000014u,c->r[31]); // 802980F0
  c->f[1]=c->f[31]; // 802980F4
  c->r[3]=R32(c->r[29]+0x00000010u); // 802980F8
  c->r[5]=c->r[31]|c->r[31]; // 802980FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80298100
  {uint32_t ea=c->r[2]+0xFFFFCE30u; c->f[2]=RF64(ea);} // 80298104
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80298108
  {uint32_t ea=c->r[2]+0xFFFFCE3Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8029810C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[2]); // 80298110
  {uint32_t ea=c->r[2]+0xFFFFCE40u; c->f[2]=c->ps1[2]=RF32(ea);} // 80298114
  {uint32_t ea=c->r[2]+0xFFFFCE38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80298118
  c->r[3]=R32(c->r[3]+0x00000038u); // 8029811C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[31]); // 80298120
  c->r[4]=R32(c->r[29]+0x00000014u); // 80298124
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 80298128
  c->r[7]=R32(c->r[30]+0x00000004u); // 8029812C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 80298130
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 80298134
  c->r[10]=R32(c->r[30]+0x00000014u); // 80298138
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8029813C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80298140
  c->lr=0x80298148u; f_80298AC4(c); // 80298144
  goto L_80298150; // 80298148
L_8029814C:;
  c->r[3]=0u+0x00000000u; // 8029814C
L_80298150:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80298150
  c->r[0]=R32(c->r[1]+0x00000044u); // 80298154
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80298158
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8029815C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80298160
  c->r[29]=R32(c->r[1]+0x00000024u); // 80298164
  c->lr=c->r[0]; // 80298168
  c->r[1]=c->r[1]+0x00000040u; // 8029816C
  return; // 80298170
}

// fn_80298174
void f_80298174(Ctx* __restrict c) {
  trace_call(0x80298174u);
  cmps(c,0,(int32_t)c->r[4],0); // 80298174
  if (crb(c,2)) return; // 80298178
  c->r[12]=R32(c->r[4]+0x00000000u); // 8029817C
  c->r[3]=c->r[4]|c->r[4]; // 80298180
  c->r[12]=R32(c->r[12]+0x00000008u); // 80298184
  c->ctr=c->r[12]; // 80298188
  if (true) { dispatch(c,c->ctr); return; } // 8029818C
  return; // 80298190
}

// fn_80298194
void f_80298194(Ctx* __restrict c) {
  trace_call(0x80298194u);
  c->r[5]=0u+0x805D0000u; // 80298194
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80298198
  c->r[4]=c->r[5]+0xFFFF99B0u; // 8029819C
  c->r[3]=0u+0x00000004u; // 802981A0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[4]);} // 802981A4
  c->r[0]=0u+0x00000001u; // 802981A8
  {uint32_t ea=c->r[2]+0xFFFFCDF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802981AC
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[4]);} // 802981B0
  {uint32_t ea=c->r[2]+0xFFFFCDF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802981B4
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[4]);} // 802981B8
  {uint32_t ea=c->r[2]+0xFFFFCDF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802981BC
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[4]);} // 802981C0
  {uint32_t ea=c->r[2]+0xFFFFCDFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802981C4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[4]);} // 802981C8
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[4]);} // 802981CC
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[4]);} // 802981D0
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[4]);} // 802981D4
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[3]);} // 802981D8
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[2]);} // 802981DC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 802981E0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 802981E4
  W32(c->r[5]+0xFFFF99B0u,c->r[3]); // 802981E8
  W32(c->r[4]+0x00000024u,c->r[0]); // 802981EC
  return; // 802981F0
}

// fn_802981F4
void f_802981F4(Ctx* __restrict c) {
  trace_call(0x802981F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802981F4
  c->r[0]=c->lr; // 802981F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802981FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298200
  c->r[31]=c->r[3]|c->r[3]; // 80298204
  c->r[12]=R32(c->r[3]+0x00000000u); // 80298208
  c->r[12]=R32(c->r[12]+0x00000014u); // 8029820C
  c->ctr=c->r[12]; // 80298210
  if (true) { c->lr=0x80298218u; dispatch(c,c->ctr); } // 80298214
  cmps(c,0,(int32_t)c->r[31],0); // 80298218
  if (crb(c,2)) { goto L_80298238; } // 8029821C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80298220
  c->r[3]=c->r[31]|c->r[31]; // 80298224
  c->r[4]=0u+0x00000001u; // 80298228
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029822C
  c->ctr=c->r[12]; // 80298230
  if (true) { c->lr=0x80298238u; dispatch(c,c->ctr); } // 80298234
L_80298238:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029823C
  c->lr=c->r[0]; // 80298240
  c->r[1]=c->r[1]+0x00000010u; // 80298244
  return; // 80298248
}

// fn_8029824C
void f_8029824C(Ctx* __restrict c) {
  trace_call(0x8029824Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029824C
  c->r[0]=c->lr; // 80298250
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298258
  W32(c->r[1]+0x00000008u,c->r[30]); // 8029825C
  c->r[30]=c->r[3]|c->r[3]; // 80298260
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80298264
  cmps(c,0,(int32_t)c->r[0],0); // 80298268
  if (!crb(c,2)) { goto L_80298294; } // 8029826C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80298270
  c->r[12]=R32(c->r[12]+0x00000020u); // 80298274
  c->ctr=c->r[12]; // 80298278
  if (true) { c->lr=0x80298280u; dispatch(c,c->ctr); } // 8029827C
  cmps(c,0,(int32_t)c->r[3],0); // 80298280
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 80298284
  if (!crb(c,2)) { goto L_80298294; } // 80298288
  c->r[3]=0u+0x00000000u; // 8029828C
  goto L_802982DC; // 80298290
L_80298294:;
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 80298294
  cmps(c,0,(int32_t)c->r[0],0); // 80298298
  if (!crb(c,2)) { goto L_802982D8; } // 8029829C
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 802982A0
  c->r[4]=R32(c->r[30]+0x00000018u); // 802982A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802982A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802982AC
  c->ctr=c->r[12]; // 802982B0
  if (true) { c->lr=0x802982B8u; dispatch(c,c->ctr); } // 802982B4
  c->r[31]=R32(c->r[30]+0x00000020u); // 802982B8
  c->r[30]=R32(c->r[30]+0x00000018u); // 802982BC
  c->r[0]=R32(c->r[31]+0x00000024u); // 802982C0
  cmps(c,0,(int32_t)c->r[0],0); // 802982C4
  if (crb(c,2)) { goto L_802982D4; } // 802982C8
  c->r[3]=c->r[31]|c->r[31]; // 802982CC
  c->lr=0x802982D4u; f_802999E4(c); // 802982D0
L_802982D4:;
  W32(c->r[31]+0x00000024u,c->r[30]); // 802982D4
L_802982D8:;
  c->r[3]=0u+0x00000001u; // 802982D8
L_802982DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802982DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802982E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802982E4
  c->lr=c->r[0]; // 802982E8
  c->r[1]=c->r[1]+0x00000010u; // 802982EC
  return; // 802982F0
}

// fn_802982F4
void f_802982F4(Ctx* __restrict c) {
  trace_call(0x802982F4u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 802982F4
  return; // 802982F8
}

// fn_802982FC
void f_802982FC(Ctx* __restrict c) {
  trace_call(0x802982FCu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 802982FC
  c->r[12]=R32(c->r[12]+0x00000024u); // 80298300
  c->ctr=c->r[12]; // 80298304
  if (true) { dispatch(c,c->ctr); return; } // 80298308
}

// fn_8029830C
void f_8029830C(Ctx* __restrict c) {
  trace_call(0x8029830Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029830C
  f_80299D70(c); return; // 80298310
}

// fn_80298314
void f_80298314(Ctx* __restrict c) {
  trace_call(0x80298314u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298314
  f_80299D7C(c); return; // 80298318
}

// fn_8029831C
void f_8029831C(Ctx* __restrict c) {
  trace_call(0x8029831Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029831C
  f_80299D94(c); return; // 80298320
}

// fn_80298324
void f_80298324(Ctx* __restrict c) {
  trace_call(0x80298324u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298324
  f_80299DF0(c); return; // 80298328
}

// fn_8029832C
void f_8029832C(Ctx* __restrict c) {
  trace_call(0x8029832Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029832C
  f_80299DC8(c); return; // 80298330
}

// fn_80298334
void f_80298334(Ctx* __restrict c) {
  trace_call(0x80298334u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298334
  f_80299DDC(c); return; // 80298338
}

// fn_8029833C
void f_8029833C(Ctx* __restrict c) {
  trace_call(0x8029833Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029833C
  f_80299D88(c); return; // 80298340
}

// fn_80298344
void f_80298344(Ctx* __restrict c) {
  trace_call(0x80298344u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298344
  f_80299E1C(c); return; // 80298348
}

// fn_8029834C
void f_8029834C(Ctx* __restrict c) {
  trace_call(0x8029834Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029834C
  f_80299E2C(c); return; // 80298350
}

// fn_80298354
void f_80298354(Ctx* __restrict c) {
  trace_call(0x80298354u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298354
  c->r[0]=c->lr; // 80298358
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029835C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298360
  c->r[31]=c->r[3]|c->r[3]; // 80298364
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80298368
  cmps(c,0,(int32_t)c->r[5],0); // 8029836C
  if (crb(c,2)) { goto L_802983A0; } // 80298370
  c->r[0]=R32(c->r[5]+0x00000028u); // 80298374
  cmps(c,0,(int32_t)c->r[0],0); // 80298378
  if (crb(c,2)) { goto L_80298388; } // 8029837C
  cmps(c,0,(int32_t)c->r[0],2); // 80298380
  if (!crb(c,2)) { goto L_802983A0; } // 80298384
L_80298388:;
  c->r[4]=0u+0x00000001u; // 80298388
  c->r[0]=0u+0x00000000u; // 8029838C
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 80298390
  W32(c->r[5]+0x00000028u,c->r[4]); // 80298394
  W8(c->r[5]+0x00000031u,c->r[0]); // 80298398
  W8(c->r[5]+0x00000032u,c->r[0]); // 8029839C
L_802983A0:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 802983A0
  c->lr=0x802983A8u; f_80299C2C(c); // 802983A4
  c->r[0]=R32(c->r[31]+0x00000028u); // 802983A8
  cmps(c,0,(int32_t)c->r[0],1); // 802983AC
  if (!crb(c,2)) { goto L_802983C0; } // 802983B0
  c->r[3]=R32(c->r[31]+0x00000020u); // 802983B4
  c->r[4]=0u+0x00000001u; // 802983B8
  c->lr=0x802983C0u; f_80299CDC(c); // 802983BC
L_802983C0:;
  c->r[3]=0u+0x00000001u; // 802983C0
  c->r[0]=0u+0x00000000u; // 802983C4
  W32(c->r[31]+0x00000014u,c->r[3]); // 802983C8
  W32(c->r[31]+0x00000024u,c->r[0]); // 802983CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802983D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802983D4
  c->lr=c->r[0]; // 802983D8
  c->r[1]=c->r[1]+0x00000010u; // 802983DC
  return; // 802983E0
}

// fn_802983E4
void f_802983E4(Ctx* __restrict c) {
  trace_call(0x802983E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802983E4
  c->r[0]=c->lr; // 802983E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802983EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802983F0
  c->r[31]=c->r[3]|c->r[3]; // 802983F4
  c->r[3]=R32(c->r[3]+0x00000020u); // 802983F8
  c->lr=0x80298400u; f_80299C60(c); // 802983FC
  c->r[0]=0u+0x00000001u; // 80298400
  W32(c->r[31]+0x00000024u,c->r[0]); // 80298404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298408
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029840C
  c->lr=c->r[0]; // 80298410
  c->r[1]=c->r[1]+0x00000010u; // 80298414
  return; // 80298418
}

// fn_8029841C
void f_8029841C(Ctx* __restrict c) {
  trace_call(0x8029841Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029841C
  c->r[0]=c->lr; // 80298420
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298428
  c->r[31]=c->r[3]|c->r[3]; // 8029842C
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298430
  c->lr=0x80298438u; f_80299C94(c); // 80298434
  c->r[0]=0u+0x00000001u; // 80298438
  W32(c->r[31]+0x00000024u,c->r[0]); // 8029843C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298440
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298444
  c->lr=c->r[0]; // 80298448
  c->r[1]=c->r[1]+0x00000010u; // 8029844C
  return; // 80298450
}

// fn_80298454
void f_80298454(Ctx* __restrict c) {
  trace_call(0x80298454u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298454
  f_80299CC8(c); return; // 80298458
}

// fn_8029845C
void f_8029845C(Ctx* __restrict c) {
  trace_call(0x8029845Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029845C
  c->r[0]=c->lr; // 80298460
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298468
  c->r[31]=c->r[4]|c->r[4]; // 8029846C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80298470
  c->r[30]=c->r[3]|c->r[3]; // 80298474
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298478
  c->lr=0x80298480u; f_80299CDC(c); // 8029847C
  W32(c->r[30]+0x00000028u,c->r[31]); // 80298480
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298484
  c->r[30]=R32(c->r[1]+0x00000008u); // 80298488
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029848C
  c->lr=c->r[0]; // 80298490
  c->r[1]=c->r[1]+0x00000010u; // 80298494
  return; // 80298498
}

// fn_8029849C
void f_8029849C(Ctx* __restrict c) {
  trace_call(0x8029849Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029849C
  c->r[0]=c->lr; // 802984A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802984A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802984A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802984AC
  c->r[30]=c->r[3]|c->r[3]; // 802984B0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802984B4
  cmps(c,0,(int32_t)c->r[0],1); // 802984B8
  if (!crb(c,2)) { goto L_802985EC; } // 802984BC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802984C0
  cmps(c,0,(int32_t)c->r[0],0); // 802984C4
  if (!crb(c,2)) { goto L_8029856C; } // 802984C8
  c->r[31]=0u+0x00000000u; // 802984CC
L_802984D0:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 802984D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802984D4
  c->r[12]=R32(c->r[12]+0x00000018u); // 802984D8
  c->ctr=c->r[12]; // 802984DC
  if (true) { c->lr=0x802984E4u; dispatch(c,c->ctr); } // 802984E0
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 802984E4
  c->r[0]=R32(c->r[3]+0x00000028u); // 802984E8
  cmps(c,0,(int32_t)c->r[0],3); // 802984EC
  if (!crb(c,2)) { goto L_80298500; } // 802984F0
  c->r[0]=0u+0x00000003u; // 802984F4
  W32(c->r[30]+0x00000014u,c->r[0]); // 802984F8
  goto L_802985EC; // 802984FC
L_80298500:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298500
  c->lr=0x80298508u; f_80299A68(c); // 80298504
  c->r[31]=c->r[31]+0x00000001u; // 80298508
  cmpu(c,0,c->r[31],0x00000003u); // 8029850C
  if (crb(c,0)) { IRQCHK(c); goto L_802984D0; } // 80298510
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80298514
  c->r[0]=R32(c->r[3]+0x00000028u); // 80298518
  cmps(c,0,(int32_t)c->r[0],2); // 8029851C
  if (!crb(c,2)) { goto L_8029856C; } // 80298520
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298524
  c->lr=0x8029852Cu; f_80299D2C(c); // 80298528
  cmps(c,0,(int32_t)c->r[3],0); // 8029852C
  if (!crb(c,2)) { goto L_8029856C; } // 80298530
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298534
  c->lr=0x8029853Cu; f_80299D38(c); // 80298538
  cmps(c,0,(int32_t)c->r[3],0); // 8029853C
  if (!crb(c,2)) { goto L_8029856C; } // 80298540
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80298544
  c->r[0]=0u+0x00000000u; // 80298548
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8029854C
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298550
  c->lr=0x80298558u; f_80299C94(c); // 80298554
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80298558
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029855C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80298560
  c->ctr=c->r[12]; // 80298564
  if (true) { c->lr=0x8029856Cu; dispatch(c,c->ctr); } // 80298568
L_8029856C:;
  c->r[0]=R32(c->r[30]+0x00000024u); // 8029856C
  cmps(c,0,(int32_t)c->r[0],1); // 80298570
  if (!crb(c,2)) { goto L_802985D4; } // 80298574
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298578
  c->lr=0x80298580u; f_80299C20(c); // 8029857C
  cmps(c,0,(int32_t)c->r[3],1); // 80298580
  if (crb(c,2)) { goto L_80298598; } // 80298584
  c->r[3]=R32(c->r[30]+0x00000020u); // 80298588
  c->lr=0x80298590u; f_80299C20(c); // 8029858C
  cmps(c,0,(int32_t)c->r[3],0); // 80298590
  if (!crb(c,2)) { goto L_802985EC; } // 80298594
L_80298598:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80298598
  cmps(c,0,(int32_t)c->r[3],0); // 8029859C
  if (crb(c,2)) { goto L_802985AC; } // 802985A0
  c->r[0]=0u+0x00000000u; // 802985A4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802985A8
L_802985AC:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 802985AC
  c->r[0]=0u+0x00000000u; // 802985B0
  W32(c->r[30]+0x00000014u,c->r[0]); // 802985B4
  cmps(c,0,(int32_t)c->r[3],0); // 802985B8
  if (crb(c,2)) { goto L_802985EC; } // 802985BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802985C0
  c->r[12]=R32(c->r[12]+0x00000018u); // 802985C4
  c->ctr=c->r[12]; // 802985C8
  if (true) { c->lr=0x802985D0u; dispatch(c,c->ctr); } // 802985CC
  goto L_802985EC; // 802985D0
L_802985D4:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 802985D4
  c->lr=0x802985DCu; f_80299C20(c); // 802985D8
  cmps(c,0,(int32_t)c->r[3],1); // 802985DC
  if (!crb(c,2)) { goto L_802985EC; } // 802985E0
  c->r[0]=0u+0x00000002u; // 802985E4
  W32(c->r[30]+0x00000014u,c->r[0]); // 802985E8
L_802985EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802985EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802985F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802985F4
  c->lr=c->r[0]; // 802985F8
  c->r[1]=c->r[1]+0x00000010u; // 802985FC
  return; // 80298600
}

// fn_80298604
void f_80298604(Ctx* __restrict c) {
  trace_call(0x80298604u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80298604
  return; // 80298608
}

// fn_8029860C
void f_8029860C(Ctx* __restrict c) {
  trace_call(0x8029860Cu);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8029860C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80298610
  c->r[12]=R32(c->r[12]+0x00000014u); // 80298614
  c->ctr=c->r[12]; // 80298618
  if (true) { dispatch(c,c->ctr); return; } // 8029861C
}

// fn_80298620
void f_80298620(Ctx* __restrict c) {
  trace_call(0x80298620u);
  {uint32_t ea=c->r[2]+0xFFFFCE48u; c->f[1]=c->ps1[1]=RF32(ea);} // 80298620
  return; // 80298624
}

// fn_80298628
void f_80298628(Ctx* __restrict c) {
  trace_call(0x80298628u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298628
  c->r[0]=c->lr; // 8029862C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298634
  c->r[31]=c->r[3]|c->r[3]; // 80298638
  c->r[4]=R32(c->r[3]+0x00000020u); // 8029863C
  cmps(c,0,(int32_t)c->r[4],0); // 80298640
  if (crb(c,2)) { goto L_80298664; } // 80298644
  c->r[3]=R32(c->r[3]+0x00000004u); // 80298648
  c->r[3]=R32(c->r[3]+0x00000014u); // 8029864C
  c->lr=0x80298654u; f_8029A31C(c); // 80298650
  c->r[3]=R32(c->r[31]+0x00000020u); // 80298654
  c->r[0]=0u+0x00000000u; // 80298658
  W32(c->r[3]+0x00000028u,c->r[0]); // 8029865C
  W32(c->r[31]+0x00000020u,c->r[0]); // 80298660
L_80298664:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80298664
  c->r[3]=c->r[31]|c->r[31]; // 80298668
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8029866C
  c->ctr=c->r[12]; // 80298670
  if (true) { c->lr=0x80298678u; dispatch(c,c->ctr); } // 80298674
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298678
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029867C
  c->lr=c->r[0]; // 80298680
  c->r[1]=c->r[1]+0x00000010u; // 80298684
  return; // 80298688
}

// fn_8029868C
void f_8029868C(Ctx* __restrict c) {
  trace_call(0x8029868Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029868C
  c->r[0]=c->lr; // 80298690
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298698
  c->r[31]=c->r[3]|c->r[3]; // 8029869C
  c->r[0]=R32(c->r[3]+0x00000018u); // 802986A0
  cmps(c,0,(int32_t)c->r[0],0); // 802986A4
  if (crb(c,2)) { goto L_802986BC; } // 802986A8
  c->r[3]=c->r[0]|c->r[0]; // 802986AC
  c->lr=0x802986B4u; f_8029E23C(c); // 802986B0
  c->r[0]=0u+0x00000000u; // 802986B4
  W32(c->r[31]+0x00000018u,c->r[0]); // 802986B8
L_802986BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802986BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802986C0
  c->lr=c->r[0]; // 802986C4
  c->r[1]=c->r[1]+0x00000010u; // 802986C8
  return; // 802986CC
}

// fn_802986D0
void f_802986D0(Ctx* __restrict c) {
  trace_call(0x802986D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802986D0
  c->r[0]=c->lr; // 802986D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802986D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802986DC
  c->r[31]=c->r[3]|c->r[3]; // 802986E0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802986E4
  cmps(c,0,(int32_t)c->r[0],0); // 802986E8
  if (crb(c,2)) { goto L_8029870C; } // 802986EC
  c->r[3]=c->r[0]|c->r[0]; // 802986F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802986F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802986F8
  c->ctr=c->r[12]; // 802986FC
  if (true) { c->lr=0x80298704u; dispatch(c,c->ctr); } // 80298700
  c->r[0]=0u+0x00000000u; // 80298704
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80298708
L_8029870C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029870C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298710
  c->lr=c->r[0]; // 80298714
  c->r[1]=c->r[1]+0x00000010u; // 80298718
  return; // 8029871C
}

// fn_80298720
void f_80298720(Ctx* __restrict c) {
  trace_call(0x80298720u);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80298720
  W32(c->r[3]+0x00000038u,c->r[4]); // 80298724
  return; // 80298728
}

// fn_8029872C
void f_8029872C(Ctx* __restrict c) {
  trace_call(0x8029872Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029872C
  f_80299E10(c); return; // 80298730
}

// fn_80298734
void f_80298734(Ctx* __restrict c) {
  trace_call(0x80298734u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298734
  f_80299E34(c); return; // 80298738
}

// fn_8029873C
void f_8029873C(Ctx* __restrict c) {
  trace_call(0x8029873Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029873C
  f_80299E48(c); return; // 80298740
}

// fn_80298744
void f_80298744(Ctx* __restrict c) {
  trace_call(0x80298744u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298744
  f_80299E04(c); return; // 80298748
}

// fn_8029874C
void f_8029874C(Ctx* __restrict c) {
  trace_call(0x8029874Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029874C
  f_80299E64(c); return; // 80298750
}

// fn_80298754
void f_80298754(Ctx* __restrict c) {
  trace_call(0x80298754u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80298754
  f_80299E78(c); return; // 80298758
}

// fn_8029875C
void f_8029875C(Ctx* __restrict c) {
  trace_call(0x8029875Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029875C
  f_80299E8C(c); return; // 80298760
}

// fn_80298764
void f_80298764(Ctx* __restrict c) {
  trace_call(0x80298764u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298764
  c->r[0]=c->lr; // 80298768
  W32(c->r[1]+0x00000054u,c->r[0]); // 8029876C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 80298770
  c->f[31]=c->f[1]; // 80298774
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80298778
  c->r[24]=c->r[4]|c->r[4]; // 8029877C
  c->r[26]=c->r[6]|c->r[6]; // 80298780
  c->r[23]=c->r[3]|c->r[3]; // 80298784
  c->r[31]=c->r[1]|c->r[1]; // 80298788
  c->r[25]=c->r[5]|c->r[5]; // 8029878C
  c->r[27]=c->r[7]|c->r[7]; // 80298790
  c->r[28]=c->r[8]|c->r[8]; // 80298794
  c->r[29]=c->r[9]|c->r[9]; // 80298798
  c->r[6]=0u+0x00000004u; // 8029879C
  c->r[4]=R32(c->r[3]+0x00000004u); // 802987A0
  c->r[3]=0u+0x803D0000u; // 802987A4
  c->r[5]=c->r[3]+0x000033F0u; // 802987A8
  c->r[3]=0u+0x00000038u; // 802987AC
  c->lr=0x802987B4u; f_8029C154(c); // 802987B0
  cmps(c,0,(int32_t)c->r[3],0); // 802987B4
  c->r[30]=c->r[3]|c->r[3]; // 802987B8
  if (crb(c,2)) { goto L_80298808; } // 802987BC
  W32(c->r[3]+0x00000004u,c->r[23]); // 802987C0
  c->r[4]=0u+0x804C0000u; // 802987C4
  c->r[0]=0u+0x00000000u; // 802987C8
  W32(c->r[3]+0x00000008u,c->r[24]); // 802987CC
  c->r[4]=c->r[4]+0xFFFFD4A0u; // 802987D0
  W32(c->r[3]+0x0000000Cu,c->r[25]); // 802987D4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[31]);} // 802987D8
  W32(c->r[3]+0x00000014u,c->r[0]); // 802987DC
  W32(c->r[3]+0x00000018u,c->r[0]); // 802987E0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802987E4
  W32(c->r[3]+0x00000020u,c->r[0]); // 802987E8
  W32(c->r[3]+0x00000024u,c->r[0]); // 802987EC
  W32(c->r[3]+0x00000028u,c->r[0]); // 802987F0
  W32(c->r[3]+0x0000002Cu,c->r[27]); // 802987F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802987F8
  W32(c->r[3]+0x00000030u,c->r[28]); // 802987FC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80298800
  W32(c->r[3]+0x00000034u,c->r[29]); // 80298804
L_80298808:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298808
  if (!crb(c,2)) { goto L_8029882C; } // 8029880C
  c->r[3]=0u+0x803D0000u; // 80298810
  c->r[4]=0u+0xFFFFFFFDu; // 80298814
  c->r[3]=c->r[3]+0x000033F0u; // 80298818
  c->r[3]=c->r[3]+0x00000009u; // 8029881C
  c->lr=0x80298824u; f_8029D638(c); // 80298820
  c->r[3]=0u+0x00000000u; // 80298824
  goto L_8029886C; // 80298828
L_8029882C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029882C
  c->r[3]=c->r[30]|c->r[30]; // 80298830
  c->r[4]=c->r[26]|c->r[26]; // 80298834
  c->r[12]=R32(c->r[12]+0x00000010u); // 80298838
  c->ctr=c->r[12]; // 8029883C
  if (true) { c->lr=0x80298844u; dispatch(c,c->ctr); } // 80298840
  cmps(c,0,(int32_t)c->r[3],0); // 80298844
  if (!crb(c,2)) { goto L_80298868; } // 80298848
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029884C
  c->r[3]=c->r[30]|c->r[30]; // 80298850
  c->r[12]=R32(c->r[12]+0x00000008u); // 80298854
  c->ctr=c->r[12]; // 80298858
  if (true) { c->lr=0x80298860u; dispatch(c,c->ctr); } // 8029885C
  c->r[3]=0u+0x00000000u; // 80298860
  goto L_8029886C; // 80298864
L_80298868:;
  c->r[3]=c->r[30]|c->r[30]; // 80298868
L_8029886C:;
  c->r[10]=c->r[31]|c->r[31]; // 8029886C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[31]=RF64(ea);} // 80298870
  {uint32_t ea=c->r[10]+0x00000024u; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80298874
  c->r[10]=R32(c->r[1]+0x00000000u); // 80298878
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029887C
  c->r[1]=c->r[10]|c->r[10]; // 80298880
  c->lr=c->r[0]; // 80298884
  return; // 80298888
}

// fn_8029888C
void f_8029888C(Ctx* __restrict c) {
  trace_call(0x8029888Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029888C
  c->r[0]=c->lr; // 80298890
  cmps(c,0,(int32_t)c->r[3],0); // 80298894
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029889C
  c->r[31]=c->r[3]|c->r[3]; // 802988A0
  if (crb(c,2)) { goto L_802988B8; } // 802988A4
  cmps(c,0,(int32_t)c->r[4],0); // 802988A8
  if (!crb(c,1)) { goto L_802988B8; } // 802988AC
  c->r[4]=0u+0x00000038u; // 802988B0
  c->lr=0x802988B8u; f_8029C224(c); // 802988B4
L_802988B8:;
  c->r[3]=c->r[31]|c->r[31]; // 802988B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802988BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802988C0
  c->lr=c->r[0]; // 802988C4
  c->r[1]=c->r[1]+0x00000010u; // 802988C8
  return; // 802988CC
}

// fn_802988D0
void f_802988D0(Ctx* __restrict c) {
  trace_call(0x802988D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802988D0
  c->r[0]=c->lr; // 802988D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802988D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802988DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802988E0
  c->r[30]=c->r[4]|c->r[4]; // 802988E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802988E8
  c->r[29]=c->r[3]|c->r[3]; // 802988EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802988F0
  c->r[12]=R32(c->r[12]+0x00000018u); // 802988F4
  c->ctr=c->r[12]; // 802988F8
  if (true) { c->lr=0x80298900u; dispatch(c,c->ctr); } // 802988FC
  cmps(c,0,(int32_t)c->r[3],0); // 80298900
  W32(c->r[29]+0x00000018u,c->r[3]); // 80298904
  if (!crb(c,2)) { goto L_80298928; } // 80298908
  c->r[12]=R32(c->r[29]+0x00000000u); // 8029890C
  c->r[3]=c->r[29]|c->r[29]; // 80298910
  c->r[12]=R32(c->r[12]+0x00000014u); // 80298914
  c->ctr=c->r[12]; // 80298918
  if (true) { c->lr=0x80298920u; dispatch(c,c->ctr); } // 8029891C
  c->r[0]=0u+0x00000000u; // 80298920
  goto L_80298990; // 80298924
L_80298928:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80298928
  c->r[31]=R32(c->r[3]+0x00000014u); // 8029892C
  c->r[3]=c->r[31]|c->r[31]; // 80298930
  c->lr=0x80298938u; f_8029A1B8(c); // 80298934
  cmps(c,0,(int32_t)c->r[3],0); // 80298938
  if (crb(c,2)) { goto L_80298944; } // 8029893C
  goto L_80298950; // 80298940
L_80298944:;
  c->r[3]=c->r[31]|c->r[31]; // 80298944
  c->r[4]=c->r[30]|c->r[30]; // 80298948
  c->lr=0x80298950u; f_8029A4A4(c); // 8029894C
L_80298950:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298950
  W32(c->r[29]+0x00000020u,c->r[3]); // 80298954
  if (!crb(c,2)) { goto L_80298978; } // 80298958
  c->r[12]=R32(c->r[29]+0x00000000u); // 8029895C
  c->r[3]=c->r[29]|c->r[29]; // 80298960
  c->r[12]=R32(c->r[12]+0x00000014u); // 80298964
  c->ctr=c->r[12]; // 80298968
  if (true) { c->lr=0x80298970u; dispatch(c,c->ctr); } // 8029896C
  c->r[0]=0u+0x00000000u; // 80298970
  goto L_80298990; // 80298974
L_80298978:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80298978
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029897C
  c->lr=0x80298984u; f_80299D5C(c); // 80298980
  c->r[3]=R32(c->r[29]+0x00000020u); // 80298984
  c->r[0]=0u+0x00000001u; // 80298988
  W32(c->r[3]+0x00000028u,c->r[29]); // 8029898C
L_80298990:;
  cmps(c,0,(int32_t)c->r[0],0); // 80298990
  if (!crb(c,2)) { goto L_802989A0; } // 80298994
  c->r[3]=0u+0x00000000u; // 80298998
  goto L_802989B0; // 8029899C
L_802989A0:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 802989A0
  c->r[4]=0u+0x00000000u; // 802989A4
  c->lr=0x802989ACu; f_80299E10(c); // 802989A8
  c->r[3]=0u+0x00000001u; // 802989AC
L_802989B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802989B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802989B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802989B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802989BC
  c->lr=c->r[0]; // 802989C0
  c->r[1]=c->r[1]+0x00000020u; // 802989C4
  return; // 802989C8
}

// fn_802989CC
void f_802989CC(Ctx* __restrict c) {
  trace_call(0x802989CCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 802989CC
  c->r[4]=0u+0x00000001u; // 802989D0
  c->r[5]=0u+0x00000006u; // 802989D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802989D8
  f_8029F56C(c); return; // 802989DC
}

// fn_802989E0
void f_802989E0(Ctx* __restrict c) {
  trace_call(0x802989E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802989E0
  c->r[0]=c->lr; // 802989E4
  c->r[5]=0u+0x804C0000u; // 802989E8
  c->r[6]=0u+0x00000004u; // 802989EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802989F0
  c->r[5]=c->r[5]+0xFFFFD5D8u; // 802989F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802989F8
  c->r[31]=c->r[1]|c->r[1]; // 802989FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80298A00
  W32(c->r[1]+0x00000024u,c->r[29]); // 80298A04
  c->r[29]=c->r[3]|c->r[3]; // 80298A08
  c->r[4]=R32(c->r[3]+0x00000004u); // 80298A0C
  c->r[3]=0u+0x000000BCu; // 80298A10
  c->r[30]=R32(c->r[4]+0x00000004u); // 80298A14
  c->r[4]=c->r[30]|c->r[30]; // 80298A18
  c->lr=0x80298A20u; f_8029C154(c); // 80298A1C
  cmps(c,0,(int32_t)c->r[3],0); // 80298A20
  if (crb(c,2)) { goto L_80298A5C; } // 80298A24
  c->r[0]=0u+0x00000000u; // 80298A28
  c->r[4]=0u+0x804C0000u; // 80298A2C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80298A30
  c->r[4]=c->r[4]+0xFFFFD528u; // 80298A34
  W32(c->r[3]+0x00000028u,c->r[0]); // 80298A38
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80298A3C
  W8(c->r[3]+0x00000030u,c->r[0]); // 80298A40
  W8(c->r[3]+0x00000031u,c->r[0]); // 80298A44
  W8(c->r[3]+0x00000032u,c->r[0]); // 80298A48
  W32(c->r[3]+0x00000034u,c->r[0]); // 80298A4C
  W32(c->r[3]+0x00000038u,c->r[0]); // 80298A50
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80298A54
  W32(c->r[3]+0x00000000u,c->r[4]); // 80298A58
L_80298A5C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298A5C
  if (!crb(c,2)) { goto L_80298A7C; } // 80298A60
  c->r[3]=0u+0x804C0000u; // 80298A64
  c->r[4]=0u+0xFFFFFFFDu; // 80298A68
  c->r[3]=c->r[3]+0xFFFFD5CCu; // 80298A6C
  c->lr=0x80298A74u; f_8029D638(c); // 80298A70
  c->r[3]=0u+0x00000000u; // 80298A74
  goto L_80298A80; // 80298A78
L_80298A7C:;
  W32(c->r[3]+0x0000003Cu,c->r[30]); // 80298A7C
L_80298A80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298A80
  if (!crb(c,2)) { goto L_80298A90; } // 80298A84
  c->r[3]=0u+0x00000000u; // 80298A88
  goto L_80298AA0; // 80298A8C
L_80298A90:;
  c->r[4]=R32(c->r[29]+0x00000034u); // 80298A90
  c->r[0]=R32(c->r[29]+0x00000030u); // 80298A94
  W32(c->r[3]+0x00000040u,c->r[0]); // 80298A98
  W32(c->r[3]+0x00000044u,c->r[4]); // 80298A9C
L_80298AA0:;
  c->r[10]=c->r[31]|c->r[31]; // 80298AA0
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80298AA4
  c->r[30]=R32(c->r[10]+0x00000028u); // 80298AA8
  c->r[29]=R32(c->r[10]+0x00000024u); // 80298AAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80298AB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80298AB4
  c->r[1]=c->r[10]|c->r[10]; // 80298AB8
  c->lr=c->r[0]; // 80298ABC
  return; // 80298AC0
}

// fn_80298AC4
void f_80298AC4(Ctx* __restrict c) {
  trace_call(0x80298AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298AC4
  c->r[0]=c->lr; // 80298AC8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80298ACC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 80298AD0
  c->f[31]=c->f[2]; // 80298AD4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80298AD8
  c->f[30]=c->f[1]; // 80298ADC
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80298AE0
  c->r[22]=c->r[3]|c->r[3]; // 80298AE4
  c->r[3]=0u+0x803D0000u; // 80298AE8
  c->r[23]=c->r[4]|c->r[4]; // 80298AEC
  c->r[25]=c->r[6]|c->r[6]; // 80298AF0
  c->r[31]=c->r[1]|c->r[1]; // 80298AF4
  c->r[3]=c->r[3]+0x000033F0u; // 80298AF8
  c->r[24]=c->r[5]|c->r[5]; // 80298AFC
  c->r[5]=c->r[3]+0x00000013u; // 80298B00
  c->r[26]=c->r[7]|c->r[7]; // 80298B04
  c->r[27]=c->r[8]|c->r[8]; // 80298B08
  c->r[28]=c->r[9]|c->r[9]; // 80298B0C
  c->r[29]=c->r[10]|c->r[10]; // 80298B10
  c->r[3]=0u+0x00000040u; // 80298B14
  c->r[6]=0u+0x00000004u; // 80298B18
  c->r[4]=R32(c->r[22]+0x00000004u); // 80298B1C
  c->lr=0x80298B24u; f_8029C154(c); // 80298B20
  cmps(c,0,(int32_t)c->r[3],0); // 80298B24
  c->r[30]=c->r[3]|c->r[3]; // 80298B28
  if (crb(c,2)) { goto L_80298B80; } // 80298B2C
  W32(c->r[3]+0x00000004u,c->r[22]); // 80298B30
  c->r[4]=0u+0x804C0000u; // 80298B34
  c->r[0]=0u+0x00000000u; // 80298B38
  W32(c->r[3]+0x00000008u,c->r[23]); // 80298B3C
  c->r[4]=c->r[4]+0xFFFFD460u; // 80298B40
  W32(c->r[3]+0x0000000Cu,c->r[24]); // 80298B44
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[30]);} // 80298B48
  W32(c->r[3]+0x00000014u,c->r[0]); // 80298B4C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80298B50
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80298B54
  W32(c->r[3]+0x00000020u,c->r[0]); // 80298B58
  W32(c->r[3]+0x00000024u,c->r[0]); // 80298B5C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80298B60
  W32(c->r[3]+0x0000002Cu,c->r[26]); // 80298B64
  W32(c->r[3]+0x00000000u,c->r[4]); // 80298B68
  W32(c->r[3]+0x00000030u,c->r[27]); // 80298B6C
  W32(c->r[3]+0x00000034u,c->r[28]); // 80298B70
  W32(c->r[3]+0x00000038u,c->r[29]); // 80298B74
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80298B78
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[31]);} // 80298B7C
L_80298B80:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298B80
  if (!crb(c,2)) { goto L_80298BA4; } // 80298B84
  c->r[3]=0u+0x803D0000u; // 80298B88
  c->r[4]=0u+0xFFFFFFFDu; // 80298B8C
  c->r[3]=c->r[3]+0x000033F0u; // 80298B90
  c->r[3]=c->r[3]+0x0000001Du; // 80298B94
  c->lr=0x80298B9Cu; f_8029D638(c); // 80298B98
  c->r[3]=0u+0x00000000u; // 80298B9C
  goto L_80298BE4; // 80298BA0
L_80298BA4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80298BA4
  c->r[3]=c->r[30]|c->r[30]; // 80298BA8
  c->r[4]=c->r[25]|c->r[25]; // 80298BAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80298BB0
  c->ctr=c->r[12]; // 80298BB4
  if (true) { c->lr=0x80298BBCu; dispatch(c,c->ctr); } // 80298BB8
  cmps(c,0,(int32_t)c->r[3],0); // 80298BBC
  if (!crb(c,2)) { goto L_80298BE0; } // 80298BC0
  c->r[12]=R32(c->r[30]+0x00000000u); // 80298BC4
  c->r[3]=c->r[30]|c->r[30]; // 80298BC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80298BCC
  c->ctr=c->r[12]; // 80298BD0
  if (true) { c->lr=0x80298BD8u; dispatch(c,c->ctr); } // 80298BD4
  c->r[3]=0u+0x00000000u; // 80298BD8
  goto L_80298BE4; // 80298BDC
L_80298BE0:;
  c->r[3]=c->r[30]|c->r[30]; // 80298BE0
L_80298BE4:;
  c->r[10]=c->r[31]|c->r[31]; // 80298BE4
  {uint32_t ea=c->r[31]+0x00000058u; c->f[31]=RF64(ea);} // 80298BE8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[30]=RF64(ea);} // 80298BEC
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80298BF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 80298BF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 80298BF8
  c->r[1]=c->r[10]|c->r[10]; // 80298BFC
  c->lr=c->r[0]; // 80298C00
  return; // 80298C04
}

// fn_80298C08
void f_80298C08(Ctx* __restrict c) {
  trace_call(0x80298C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298C08
  c->r[0]=c->lr; // 80298C0C
  cmps(c,0,(int32_t)c->r[3],0); // 80298C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298C14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298C18
  c->r[31]=c->r[3]|c->r[3]; // 80298C1C
  if (crb(c,2)) { goto L_80298C34; } // 80298C20
  cmps(c,0,(int32_t)c->r[4],0); // 80298C24
  if (!crb(c,1)) { goto L_80298C34; } // 80298C28
  c->r[4]=0u+0x00000040u; // 80298C2C
  c->lr=0x80298C34u; f_8029C224(c); // 80298C30
L_80298C34:;
  c->r[3]=c->r[31]|c->r[31]; // 80298C34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298C38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298C3C
  c->lr=c->r[0]; // 80298C40
  c->r[1]=c->r[1]+0x00000010u; // 80298C44
  return; // 80298C48
}

// fn_80298C4C
void f_80298C4C(Ctx* __restrict c) {
  trace_call(0x80298C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298C4C
  c->r[0]=c->lr; // 80298C50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80298C54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80298C58
  W32(c->r[1]+0x00000018u,c->r[30]); // 80298C5C
  c->r[30]=c->r[4]|c->r[4]; // 80298C60
  W32(c->r[1]+0x00000014u,c->r[29]); // 80298C64
  c->r[29]=c->r[3]|c->r[3]; // 80298C68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80298C6C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80298C70
  c->ctr=c->r[12]; // 80298C74
  if (true) { c->lr=0x80298C7Cu; dispatch(c,c->ctr); } // 80298C78
  cmps(c,0,(int32_t)c->r[3],0); // 80298C7C
  W32(c->r[29]+0x00000018u,c->r[3]); // 80298C80
  if (!crb(c,2)) { goto L_80298CA4; } // 80298C84
  c->r[12]=R32(c->r[29]+0x00000000u); // 80298C88
  c->r[3]=c->r[29]|c->r[29]; // 80298C8C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80298C90
  c->ctr=c->r[12]; // 80298C94
  if (true) { c->lr=0x80298C9Cu; dispatch(c,c->ctr); } // 80298C98
  c->r[0]=0u+0x00000000u; // 80298C9C
  goto L_80298D0C; // 80298CA0
L_80298CA4:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80298CA4
  c->r[31]=R32(c->r[3]+0x00000014u); // 80298CA8
  c->r[3]=c->r[31]|c->r[31]; // 80298CAC
  c->lr=0x80298CB4u; f_8029A1B8(c); // 80298CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80298CB4
  if (crb(c,2)) { goto L_80298CC0; } // 80298CB8
  goto L_80298CCC; // 80298CBC
L_80298CC0:;
  c->r[3]=c->r[31]|c->r[31]; // 80298CC0
  c->r[4]=c->r[30]|c->r[30]; // 80298CC4
  c->lr=0x80298CCCu; f_8029A4A4(c); // 80298CC8
L_80298CCC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298CCC
  W32(c->r[29]+0x00000020u,c->r[3]); // 80298CD0
  if (!crb(c,2)) { goto L_80298CF4; } // 80298CD4
  c->r[12]=R32(c->r[29]+0x00000000u); // 80298CD8
  c->r[3]=c->r[29]|c->r[29]; // 80298CDC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80298CE0
  c->ctr=c->r[12]; // 80298CE4
  if (true) { c->lr=0x80298CECu; dispatch(c,c->ctr); } // 80298CE8
  c->r[0]=0u+0x00000000u; // 80298CEC
  goto L_80298D0C; // 80298CF0
L_80298CF4:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80298CF4
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80298CF8
  c->lr=0x80298D00u; f_80299D5C(c); // 80298CFC
  c->r[3]=R32(c->r[29]+0x00000020u); // 80298D00
  c->r[0]=0u+0x00000001u; // 80298D04
  W32(c->r[3]+0x00000028u,c->r[29]); // 80298D08
L_80298D0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80298D0C
  if (!crb(c,2)) { goto L_80298D1C; } // 80298D10
  c->r[3]=0u+0x00000000u; // 80298D14
  goto L_80298D2C; // 80298D18
L_80298D1C:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 80298D1C
  c->r[4]=0u+0x00000001u; // 80298D20
  c->lr=0x80298D28u; f_80299E10(c); // 80298D24
  c->r[3]=0u+0x00000001u; // 80298D28
L_80298D2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80298D2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80298D30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80298D34
  c->r[29]=R32(c->r[1]+0x00000014u); // 80298D38
  c->lr=c->r[0]; // 80298D3C
  c->r[1]=c->r[1]+0x00000020u; // 80298D40
  return; // 80298D44
}

// fn_80298D48
void f_80298D48(Ctx* __restrict c) {
  trace_call(0x80298D48u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80298D48
  c->r[4]=0u+0x00004000u; // 80298D4C
  c->r[5]=0u+0x00000000u; // 80298D50
  c->r[6]=0u+0x00000004u; // 80298D54
  c->r[3]=R32(c->r[3]+0x00000004u); // 80298D58
  f_8029E5A0(c); return; // 80298D5C
}

// fn_80298D60
void f_80298D60(Ctx* __restrict c) {
  trace_call(0x80298D60u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298D60
  c->r[0]=c->lr; // 80298D64
  W32(c->r[1]+0x00000144u,c->r[0]); // 80298D68
  c->r[11]=c->r[1]+0x00000140u; // 80298D6C
  c->lr=0x80298D74u; f_801E795C(c); // 80298D70
  c->r[31]=c->r[1]|c->r[1]; // 80298D74
  c->r[4]=R32(c->r[3]+0x00000004u); // 80298D78
  c->r[5]=0u+0x804C0000u; // 80298D7C
  c->r[27]=c->r[3]|c->r[3]; // 80298D80
  c->r[3]=0u+0x000001C8u; // 80298D84
  c->r[30]=R32(c->r[4]+0x00000004u); // 80298D88
  c->r[5]=c->r[5]+0xFFFFD5BCu; // 80298D8C
  c->r[6]=0u+0x00000004u; // 80298D90
  c->r[4]=c->r[30]|c->r[30]; // 80298D94
  c->lr=0x80298D9Cu; f_8029C154(c); // 80298D98
  cmps(c,0,(int32_t)c->r[3],0); // 80298D9C
  c->r[29]=c->r[3]|c->r[3]; // 80298DA0
  if (crb(c,2)) { goto L_80298DDC; } // 80298DA4
  c->r[0]=0u+0x00000000u; // 80298DA8
  c->r[4]=0u+0x804C0000u; // 80298DAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80298DB0
  c->r[4]=c->r[4]+0xFFFFD4E8u; // 80298DB4
  W32(c->r[3]+0x00000028u,c->r[0]); // 80298DB8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80298DBC
  W8(c->r[3]+0x00000030u,c->r[0]); // 80298DC0
  W8(c->r[3]+0x00000031u,c->r[0]); // 80298DC4
  W8(c->r[3]+0x00000032u,c->r[0]); // 80298DC8
  W32(c->r[3]+0x00000034u,c->r[0]); // 80298DCC
  W32(c->r[3]+0x00000038u,c->r[0]); // 80298DD0
  W32(c->r[31]+0x00000024u,c->r[1]); // 80298DD4
  W32(c->r[3]+0x00000000u,c->r[4]); // 80298DD8
L_80298DDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80298DDC
  if (!crb(c,2)) { goto L_80298DFC; } // 80298DE0
  c->r[3]=0u+0x804C0000u; // 80298DE4
  c->r[4]=0u+0xFFFFFFFDu; // 80298DE8
  c->r[3]=c->r[3]+0xFFFFD5B0u; // 80298DEC
  c->lr=0x80298DF4u; f_8029D638(c); // 80298DF0
  c->r[29]=0u+0x00000000u; // 80298DF4
  goto L_80298E50; // 80298DF8
L_80298DFC:;
  W32(c->r[3]+0x0000003Cu,c->r[30]); // 80298DFC
  c->r[3]=c->r[30]|c->r[30]; // 80298E00
  c->lr=0x80298E08u; f_802A49E8(c); // 80298E04
  cmps(c,0,(int32_t)c->r[3],0); // 80298E08
  W32(c->r[29]+0x000000B4u,c->r[3]); // 80298E0C
  if (!crb(c,2)) { goto L_80298E3C; } // 80298E10
  c->r[3]=0u+0x804C0000u; // 80298E14
  c->r[3]=c->r[3]+0xFFFFD584u; // 80298E18
  c->lr=0x80298E20u; f_8029D4B0(c); // 80298E1C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80298E20
  c->r[3]=c->r[29]|c->r[29]; // 80298E24
  c->r[12]=R32(c->r[12]+0x00000008u); // 80298E28
  c->ctr=c->r[12]; // 80298E2C
  if (true) { c->lr=0x80298E34u; dispatch(c,c->ctr); } // 80298E30
  c->r[29]=0u+0x00000000u; // 80298E34
  goto L_80298E50; // 80298E38
L_80298E3C:;
  c->r[0]=0u+0x00000000u; // 80298E3C
  W32(c->r[29]+0x000000BCu,c->r[0]); // 80298E40
  W32(c->r[29]+0x000000B8u,c->r[0]); // 80298E44
  W8(c->r[29]+0x000000C4u,c->r[0]); // 80298E48
  W32(c->r[29]+0x000001C4u,c->r[0]); // 80298E4C
L_80298E50:;
  cmps(c,0,(int32_t)c->r[29],0); // 80298E50
  if (!crb(c,2)) { goto L_80298E60; } // 80298E54
  c->r[3]=0u+0x00000000u; // 80298E58
  goto L_80298F2C; // 80298E5C
L_80298E60:;
  c->r[28]=R32(c->r[27]+0x00000034u); // 80298E60
  c->r[3]=c->r[28]|c->r[28]; // 80298E64
  c->lr=0x80298E6Cu; f_801E6E58(c); // 80298E68
  c->r[30]=c->r[3]|c->r[3]; // 80298E6C
  c->r[3]=R32(c->r[27]+0x00000038u); // 80298E70
  c->lr=0x80298E78u; f_801E6E58(c); // 80298E74
  c->r[0]=c->r[30]+c->r[3]; // 80298E78
  cmps(c,0,(int32_t)c->r[0],255); // 80298E7C
  if (!crb(c,1)) { goto L_80298EB0; } // 80298E80
  c->r[3]=0u+0x803D0000u; // 80298E84
  c->r[3]=c->r[3]+0x000033F0u; // 80298E88
  c->r[3]=c->r[3]+0x00000027u; // 80298E8C
  c->lr=0x80298E94u; f_8029D4B0(c); // 80298E90
  c->r[12]=R32(c->r[29]+0x00000000u); // 80298E94
  c->r[3]=c->r[29]|c->r[29]; // 80298E98
  c->r[12]=R32(c->r[12]+0x00000008u); // 80298E9C
  c->ctr=c->r[12]; // 80298EA0
  if (true) { c->lr=0x80298EA8u; dispatch(c,c->ctr); } // 80298EA4
  c->r[3]=0u+0x00000000u; // 80298EA8
  goto L_80298F2C; // 80298EAC
L_80298EB0:;
  c->r[4]=c->r[28]|c->r[28]; // 80298EB0
  c->r[3]=c->r[31]+0x00000028u; // 80298EB4
  c->lr=0x80298EBCu; f_801F0AA4(c); // 80298EB8
  c->r[4]=R32(c->r[27]+0x00000038u); // 80298EBC
  c->r[3]=c->r[31]+0x00000028u; // 80298EC0
  c->lr=0x80298EC8u; f_801F0BA8(c); // 80298EC4
  c->r[30]=R32(c->r[27]+0x00000030u); // 80298EC8
  c->r[3]=c->r[29]+0x000000C4u; // 80298ECC
  c->r[4]=c->r[31]+0x00000028u; // 80298ED0
  c->r[5]=0u+0x00000100u; // 80298ED4
  W32(c->r[29]+0x000000C0u,c->r[30]); // 80298ED8
  c->lr=0x80298EE0u; f_801F0B64(c); // 80298EDC
  c->r[0]=0u+0x00000000u; // 80298EE0
  c->r[4]=c->r[30]|c->r[30]; // 80298EE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 80298EE8
  c->r[5]=c->r[31]+0x00000028u; // 80298EEC
  c->r[8]=0u+0x00000000u; // 80298EF0
  c->r[7]=0u+0x00000000u; // 80298EF4
  c->r[3]=R32(c->r[29]+0x000000B4u); // 80298EF8
  c->r[10]=0u+0x00000800u; // 80298EFC
  c->r[9]=0u+0x00000000u; // 80298F00
  c->lr=0x80298F08u; f_802A4E58(c); // 80298F04
  c->r[3]=R32(c->r[29]+0x000000B4u); // 80298F08
  c->lr=0x80298F10u; f_802A4F54(c); // 80298F0C
  c->r[12]=R32(c->r[29]+0x00000000u); // 80298F10
  c->r[3]=c->r[29]|c->r[29]; // 80298F14
  {uint32_t ea=c->r[27]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80298F18
  c->r[12]=R32(c->r[12]+0x00000010u); // 80298F1C
  c->ctr=c->r[12]; // 80298F20
  if (true) { c->lr=0x80298F28u; dispatch(c,c->ctr); } // 80298F24
  c->r[3]=c->r[29]|c->r[29]; // 80298F28
L_80298F2C:;
  c->r[10]=c->r[31]|c->r[31]; // 80298F2C
  c->r[11]=c->r[10]+0x00000140u; // 80298F30
  c->lr=0x80298F38u; f_801E79A8(c); // 80298F34
  c->r[10]=R32(c->r[1]+0x00000000u); // 80298F38
  c->r[0]=R32(c->r[10]+0x00000004u); // 80298F3C
  c->r[1]=c->r[10]|c->r[10]; // 80298F40
  c->lr=c->r[0]; // 80298F44
  return; // 80298F48
}

// fn_80298F4C
void f_80298F4C(Ctx* __restrict c) {
  trace_call(0x80298F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298F4C
  c->r[0]=c->lr; // 80298F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298F54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298F58
  c->r[31]=c->r[3]|c->r[3]; // 80298F5C
  c->r[0]=R32(c->r[3]+0x000000B4u); // 80298F60
  cmps(c,0,(int32_t)c->r[0],0); // 80298F64
  if (crb(c,2)) { goto L_80298F74; } // 80298F68
  c->r[3]=c->r[0]|c->r[0]; // 80298F6C
  c->lr=0x80298F74u; f_802A4CAC(c); // 80298F70
L_80298F74:;
  cmps(c,0,(int32_t)c->r[31],0); // 80298F74
  if (crb(c,2)) { goto L_80298F94; } // 80298F78
  c->r[12]=R32(c->r[31]+0x00000000u); // 80298F7C
  c->r[3]=c->r[31]|c->r[31]; // 80298F80
  c->r[4]=0u+0x00000001u; // 80298F84
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80298F88
  c->ctr=c->r[12]; // 80298F8C
  if (true) { c->lr=0x80298F94u; dispatch(c,c->ctr); } // 80298F90
L_80298F94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298F94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298F98
  c->lr=c->r[0]; // 80298F9C
  c->r[1]=c->r[1]+0x00000010u; // 80298FA0
  return; // 80298FA4
}

// fn_80298FA8
void f_80298FA8(Ctx* __restrict c) {
  trace_call(0x80298FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298FA8
  c->r[0]=c->lr; // 80298FAC
  cmps(c,0,(int32_t)c->r[3],0); // 80298FB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80298FB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80298FB8
  c->r[31]=c->r[3]|c->r[3]; // 80298FBC
  if (crb(c,2)) { goto L_80298FD4; } // 80298FC0
  cmps(c,0,(int32_t)c->r[4],0); // 80298FC4
  if (!crb(c,1)) { goto L_80298FD4; } // 80298FC8
  c->r[4]=0u+0x000001C8u; // 80298FCC
  c->lr=0x80298FD4u; f_8029C224(c); // 80298FD0
L_80298FD4:;
  c->r[3]=c->r[31]|c->r[31]; // 80298FD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80298FD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80298FDC
  c->lr=c->r[0]; // 80298FE0
  c->r[1]=c->r[1]+0x00000010u; // 80298FE4
  return; // 80298FE8
}

// fn_80298FEC
void f_80298FEC(Ctx* __restrict c) {
  trace_call(0x80298FECu);
  c->r[3]=R32(c->r[3]+0x000000B4u); // 80298FEC
  f_802A5250(c); return; // 80298FF0
}

// fn_80298FF4
void f_80298FF4(Ctx* __restrict c) {
  trace_call(0x80298FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80298FF4
  c->r[0]=c->lr; // 80298FF8
  W32(c->r[1]+0x00000044u,c->r[0]); // 80298FFC
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80299000
  c->r[31]=c->r[3]|c->r[3]; // 80299004
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299008
  cmps(c,0,(int32_t)c->r[0],0); // 8029900C
  if (crb(c,2)) { goto L_80299264; } // 80299010
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80299014
  cmps(c,0,(int32_t)c->r[0],0); // 80299018
  if (!crb(c,2)) { goto L_80299028; } // 8029901C
  c->r[0]=0u+0x00000000u; // 80299020
  W32(c->r[3]+0x00000028u,c->r[0]); // 80299024
L_80299028:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 80299028
  cmps(c,0,(int32_t)c->r[0],1); // 8029902C
  if (!crb(c,2)) { goto L_80299250; } // 80299030
  c->r[3]=R32(c->r[3]+0x000000B4u); // 80299034
  c->lr=0x8029903Cu; f_802A4F44(c); // 80299038
  cmps(c,0,(int32_t)c->r[3],3); // 8029903C
  if (!crb(c,2)) { goto L_8029904C; } // 80299040
  c->r[0]=0u+0x00000003u; // 80299044
  W32(c->r[31]+0x00000028u,c->r[0]); // 80299048
L_8029904C:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 8029904C
  cmps(c,0,(int32_t)c->r[0],0); // 80299050
  if (!crb(c,2)) { goto L_8029918C; } // 80299054
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299058
  c->r[4]=c->r[1]+0x00000010u; // 8029905C
  c->lr=0x80299064u; f_8029E3E0(c); // 80299060
  c->r[0]=R32(c->r[1]+0x00000014u); // 80299064
  cmps(c,0,(int32_t)c->r[0],0); // 80299068
  if (!crb(c,2)) { goto L_80299078; } // 8029906C
  c->r[3]=0u+0x00000000u; // 80299070
  goto L_8029917C; // 80299074
L_80299078:;
  c->r[5]=0u+0x80000000u; // 80299078
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8029907C
  c->r[4]=R32(c->r[1]+0x00000010u); // 80299080
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80299084
  c->lr=0x8029908Cu; f_8029F93C(c); // 80299088
  cmps(c,0,(int32_t)c->r[3],0); // 8029908C
  c->r[28]=c->r[3]|c->r[3]; // 80299090
  if (!crb(c,2)) { goto L_802990A0; } // 80299094
  c->r[3]=0u+0x00000000u; // 80299098
  goto L_8029917C; // 8029909C
L_802990A0:;
  c->lr=0x802990A4u; f_8029FC08(c); // 802990A0
  W32(c->r[31]+0x00000008u,c->r[3]); // 802990A4
  c->r[27]=c->r[31]|c->r[31]; // 802990A8
  c->r[29]=0u+0x00000000u; // 802990AC
  c->r[30]=0u+0x00000001u; // 802990B0
  goto L_80299114; // 802990B4
L_802990B8:;
  c->r[3]=c->r[28]|c->r[28]; // 802990B8
  c->r[4]=c->r[29]|c->r[29]; // 802990BC
  c->r[6]=c->r[1]+0x00000018u; // 802990C0
  c->r[5]=0u+0x00000000u; // 802990C4
  c->lr=0x802990CCu; f_8029FC10(c); // 802990C8
  c->r[7]=R32(c->r[1]+0x00000010u); // 802990CC
  c->r[3]=c->r[28]|c->r[28]; // 802990D0
  c->r[0]=R32(c->r[1]+0x00000020u); // 802990D4
  c->r[4]=c->r[29]|c->r[29]; // 802990D8
  c->r[6]=c->r[1]+0x00000018u; // 802990DC
  c->r[5]=0u+0x00000001u; // 802990E0
  c->r[0]=c->r[0]-c->r[7]; // 802990E4
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 802990E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802990EC
  W32(c->r[27]+0x00000010u,c->r[0]); // 802990F0
  c->lr=0x802990F8u; f_8029FC10(c); // 802990F4
  c->r[0]=R8(c->r[1]+0x00000020u); // 802990F8
  cmpu(c,0,c->r[0],0x00000001u); // 802990FC
  if (!crb(c,2)) { goto L_8029910C; } // 80299100
  W8(c->r[31]+0x00000024u,c->r[30]); // 80299104
  W16(c->r[31]+0x00000026u,c->r[29]); // 80299108
L_8029910C:;
  c->r[27]=c->r[27]+0x00000008u; // 8029910C
  c->r[29]=c->r[29]+0x00000001u; // 80299110
L_80299114:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80299114
  cmpu(c,0,c->r[29],c->r[0]); // 80299118
  if (crb(c,0)) { IRQCHK(c); goto L_802990B8; } // 8029911C
  c->r[0]=R32(c->r[31]+0x00000038u); // 80299120
  cmps(c,0,(int32_t)c->r[0],1); // 80299124
  if (!crb(c,2)) { goto L_80299140; } // 80299128
  c->r[3]=0u+0x00000001u; // 8029912C
  c->r[0]=0u+0x00000000u; // 80299130
  W32(c->r[31]+0x00000008u,c->r[3]); // 80299134
  W8(c->r[31]+0x00000024u,c->r[3]); // 80299138
  W16(c->r[31]+0x00000026u,c->r[0]); // 8029913C
L_80299140:;
  c->r[3]=c->r[28]|c->r[28]; // 80299140
  c->lr=0x80299148u; f_8029FBA0(c); // 80299144
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299148
  c->r[4]=c->r[1]+0x00000010u; // 8029914C
  c->r[5]=R32(c->r[1]+0x00000014u); // 80299150
  c->lr=0x80299158u; f_8029E3FC(c); // 80299154
  c->r[3]=R32(c->r[31]+0x000000B4u); // 80299158
  c->lr=0x80299160u; f_802A4F68(c); // 8029915C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299160
  c->lr=0x80299168u; f_8029E24C(c); // 80299164
  c->r[3]=R32(c->r[31]+0x000000B4u); // 80299168
  c->lr=0x80299170u; f_802A4F54(c); // 8029916C
  c->r[0]=0u+0x00000001u; // 80299170
  c->r[3]=0u+0x00000001u; // 80299174
  W32(c->r[31]+0x000001C4u,c->r[0]); // 80299178
L_8029917C:;
  cmps(c,0,(int32_t)c->r[3],1); // 8029917C
  if (!crb(c,2)) { goto L_8029918C; } // 80299180
  c->r[0]=0u+0x00000001u; // 80299184
  W32(c->r[31]+0x00000034u,c->r[0]); // 80299188
L_8029918C:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 8029918C
  cmps(c,0,(int32_t)c->r[0],1); // 80299190
  if (!crb(c,2)) { goto L_80299264; } // 80299194
  c->r[0]=R32(c->r[31]+0x000001C4u); // 80299198
  cmps(c,0,(int32_t)c->r[0],1); // 8029919C
  if (!crb(c,2)) { goto L_80299208; } // 802991A0
  c->r[3]=R8(c->r[31]+0x00000032u); // 802991A4
  c->r[0]=0u+0x00000000u; // 802991A8
  c->r[5]=c->r[31]+0x000000C4u; // 802991AC
  c->r[7]=0u+0x00000000u; // 802991B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802991B4
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 802991B8
  c->r[6]=c->r[31]+c->r[0]; // 802991BC
  c->r[9]=0u+0x00000000u; // 802991C0
  c->r[3]=R32(c->r[31]+0x000000B4u); // 802991C4
  c->r[4]=R32(c->r[31]+0x000000C0u); // 802991C8
  c->r[8]=R32(c->r[6]+0x0000000Cu); // 802991CC
  c->r[10]=R32(c->r[6]+0x00000010u); // 802991D0
  c->lr=0x802991D8u; f_802A4E58(c); // 802991D4
  c->r[0]=R8(c->r[31]+0x00000024u); // 802991D8
  cmps(c,0,(int32_t)c->r[0],0); // 802991DC
  if (crb(c,2)) { goto L_802991F4; } // 802991E0
  c->r[3]=R8(c->r[31]+0x00000032u); // 802991E4
  c->r[0]=R16(c->r[31]+0x00000026u); // 802991E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802991EC
  if (crb(c,2)) { goto L_80299200; } // 802991F0
L_802991F4:;
  c->r[3]=R8(c->r[31]+0x00000032u); // 802991F4
  c->r[0]=c->r[3]+0x00000001u; // 802991F8
  W8(c->r[31]+0x00000032u,c->r[0]); // 802991FC
L_80299200:;
  c->r[0]=0u+0x00000002u; // 80299200
  W32(c->r[31]+0x000001C4u,c->r[0]); // 80299204
L_80299208:;
  c->r[3]=R32(c->r[31]+0x000000B4u); // 80299208
  c->lr=0x80299210u; f_802A4F4C(c); // 8029920C
  c->r[4]=R8(c->r[31]+0x00000032u); // 80299210
  c->r[0]=R32(c->r[31]+0x00000008u); // 80299214
  cmpu(c,0,c->r[4],c->r[0]); // 80299218
  if (!crb(c,0)) { goto L_8029922C; } // 8029921C
  c->r[0]=0u+0x00000001u; // 80299220
  W32(c->r[31]+0x000001C4u,c->r[0]); // 80299224
  goto L_80299264; // 80299228
L_8029922C:;
  cmps(c,0,(int32_t)c->r[3],5); // 8029922C
  if (!crb(c,2)) { goto L_80299264; } // 80299230
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299234
  c->lr=0x8029923Cu; f_8029E3CC(c); // 80299238
  cmps(c,0,(int32_t)c->r[3],0); // 8029923C
  if (!crb(c,2)) { goto L_80299264; } // 80299240
  c->r[0]=0u+0x00000002u; // 80299244
  W32(c->r[31]+0x00000028u,c->r[0]); // 80299248
  goto L_80299264; // 8029924C
L_80299250:;
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80299250
  cmps(c,0,(int32_t)c->r[0],0); // 80299254
  if (!crb(c,2)) { goto L_80299264; } // 80299258
  c->r[0]=0u+0x00000000u; // 8029925C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80299260
L_80299264:;
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80299264
  c->r[0]=R32(c->r[1]+0x00000044u); // 80299268
  c->lr=c->r[0]; // 8029926C
  c->r[1]=c->r[1]+0x00000040u; // 80299270
  return; // 80299274
}

// fn_80299278
void f_80299278(Ctx* __restrict c) {
  trace_call(0x80299278u);
  c->r[3]=R32(c->r[3]+0x000000B4u); // 80299278
  f_802A525C(c); return; // 8029927C
}

// fn_80299280
void f_80299280(Ctx* __restrict c) {
  trace_call(0x80299280u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 80299280
  c->r[3]=R32(c->r[3]+0x000000B4u); // 80299284
  f_802A4E50(c); return; // 80299288
}

// fn_8029928C
void f_8029928C(Ctx* __restrict c) {
  trace_call(0x8029928Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029928C
  c->r[0]=c->lr; // 80299290
  cmps(c,0,(int32_t)c->r[3],0); // 80299294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80299298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029929C
  c->r[31]=c->r[3]|c->r[3]; // 802992A0
  if (crb(c,2)) { goto L_802992B8; } // 802992A4
  cmps(c,0,(int32_t)c->r[4],0); // 802992A8
  if (!crb(c,1)) { goto L_802992B8; } // 802992AC
  c->r[4]=0u+0x000000BCu; // 802992B0
  c->lr=0x802992B8u; f_8029C224(c); // 802992B4
L_802992B8:;
  c->r[3]=c->r[31]|c->r[31]; // 802992B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802992BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802992C0
  c->lr=c->r[0]; // 802992C4
  c->r[1]=c->r[1]+0x00000010u; // 802992C8
  return; // 802992CC
}

// fn_802992D0
void f_802992D0(Ctx* __restrict c) {
  trace_call(0x802992D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802992D0
  c->r[0]=c->lr; // 802992D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802992D8
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802992DC
  c->r[30]=c->r[3]|c->r[3]; // 802992E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802992E4
  cmps(c,0,(int32_t)c->r[0],0); // 802992E8
  if (crb(c,2)) { goto L_802995D0; } // 802992EC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802992F0
  cmps(c,0,(int32_t)c->r[0],0); // 802992F4
  if (!crb(c,2)) { goto L_80299304; } // 802992F8
  c->r[0]=0u+0x00000000u; // 802992FC
  W32(c->r[3]+0x00000028u,c->r[0]); // 80299300
L_80299304:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 80299304
  cmps(c,0,(int32_t)c->r[0],1); // 80299308
  if (!crb(c,2)) { goto L_802995BC; } // 8029930C
  c->r[0]=R32(c->r[3]+0x00000034u); // 80299310
  cmps(c,0,(int32_t)c->r[0],0); // 80299314
  if (!crb(c,2)) { goto L_802994BC; } // 80299318
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8029931C
  c->r[4]=R32(c->r[30]+0x00000040u); // 80299320
  c->r[5]=R32(c->r[30]+0x00000044u); // 80299324
  c->lr=0x8029932Cu; f_8029F93C(c); // 80299328
  cmps(c,0,(int32_t)c->r[3],0); // 8029932C
  c->r[28]=c->r[3]|c->r[3]; // 80299330
  if (!crb(c,2)) { goto L_80299340; } // 80299334
  c->r[0]=0u+0x00000000u; // 80299338
  goto L_80299414; // 8029933C
L_80299340:;
  c->lr=0x80299344u; f_8029FC08(c); // 80299340
  cmpu(c,0,c->r[3],0x00000003u); // 80299344
  W32(c->r[30]+0x00000008u,c->r[3]); // 80299348
  if (!crb(c,1)) { goto L_80299358; } // 8029934C
  c->r[0]=0u+0x00000003u; // 80299350
  W32(c->r[30]+0x00000008u,c->r[0]); // 80299354
L_80299358:;
  c->r[0]=0u+0x00000000u; // 80299358
  c->r[27]=c->r[30]|c->r[30]; // 8029935C
  W8(c->r[30]+0x00000024u,c->r[0]); // 80299360
  c->r[29]=0u+0x00000000u; // 80299364
  c->r[31]=0u+0x00000001u; // 80299368
  W16(c->r[30]+0x00000026u,c->r[0]); // 8029936C
  goto L_802993D0; // 80299370
L_80299374:;
  c->r[3]=c->r[28]|c->r[28]; // 80299374
  c->r[4]=c->r[29]|c->r[29]; // 80299378
  c->r[6]=c->r[1]+0x00000010u; // 8029937C
  c->r[5]=0u+0x00000000u; // 80299380
  c->lr=0x80299388u; f_8029FC10(c); // 80299384
  c->r[7]=R32(c->r[30]+0x00000040u); // 80299388
  c->r[3]=c->r[28]|c->r[28]; // 8029938C
  c->r[0]=R32(c->r[1]+0x00000018u); // 80299390
  c->r[4]=c->r[29]|c->r[29]; // 80299394
  c->r[6]=c->r[1]+0x00000010u; // 80299398
  c->r[5]=0u+0x00000001u; // 8029939C
  c->r[0]=c->r[0]-c->r[7]; // 802993A0
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 802993A4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802993A8
  W32(c->r[27]+0x00000010u,c->r[0]); // 802993AC
  c->lr=0x802993B4u; f_8029FC10(c); // 802993B0
  c->r[0]=R8(c->r[1]+0x00000018u); // 802993B4
  cmpu(c,0,c->r[0],0x00000001u); // 802993B8
  if (!crb(c,2)) { goto L_802993C8; } // 802993BC
  W8(c->r[30]+0x00000024u,c->r[31]); // 802993C0
  W16(c->r[30]+0x00000026u,c->r[29]); // 802993C4
L_802993C8:;
  c->r[27]=c->r[27]+0x00000008u; // 802993C8
  c->r[29]=c->r[29]+0x00000001u; // 802993CC
L_802993D0:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 802993D0
  cmpu(c,0,c->r[29],c->r[0]); // 802993D4
  if (crb(c,0)) { IRQCHK(c); goto L_80299374; } // 802993D8
  c->r[0]=R32(c->r[30]+0x00000038u); // 802993DC
  cmps(c,0,(int32_t)c->r[0],1); // 802993E0
  if (!crb(c,2)) { goto L_80299408; } // 802993E4
  c->r[0]=R8(c->r[30]+0x00000024u); // 802993E8
  cmps(c,0,(int32_t)c->r[0],0); // 802993EC
  if (!crb(c,2)) { goto L_80299408; } // 802993F0
  c->r[3]=0u+0x00000001u; // 802993F4
  c->r[0]=0u+0x00000000u; // 802993F8
  W32(c->r[30]+0x00000008u,c->r[3]); // 802993FC
  W8(c->r[30]+0x00000024u,c->r[3]); // 80299400
  W16(c->r[30]+0x00000026u,c->r[0]); // 80299404
L_80299408:;
  c->r[3]=c->r[28]|c->r[28]; // 80299408
  c->lr=0x80299410u; f_8029FBA0(c); // 8029940C
  c->r[0]=0u+0x00000001u; // 80299410
L_80299414:;
  cmps(c,0,(int32_t)c->r[0],1); // 80299414
  if (!crb(c,2)) { goto L_80299428; } // 80299418
  c->r[0]=0u+0x00000001u; // 8029941C
  W32(c->r[30]+0x00000034u,c->r[0]); // 80299420
  goto L_802994BC; // 80299424
L_80299428:;
  c->r[3]=R32(c->r[30]+0x00000040u); // 80299428
  c->r[5]=c->r[30]+0x00000048u; // 8029942C
  c->r[4]=R32(c->r[30]+0x00000044u); // 80299430
  c->lr=0x80299438u; f_80285708(c); // 80299434
  cmps(c,0,(int32_t)c->r[3],0); // 80299438
  if (crb(c,2)) { goto L_802994BC; } // 8029943C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000084u); // 80299440
  cmps(c,0,(int32_t)c->r[0],0); // 80299444
  if (!crb(c,2)) { goto L_80299470; } // 80299448
  c->r[0]=R32(c->r[30]+0x00000044u); // 8029944C
  c->r[3]=0u+0x00000000u; // 80299450
  c->r[4]=0u+0x00000001u; // 80299454
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80299458
  W32(c->r[30]+0x00000008u,c->r[4]); // 8029945C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80299460
  W8(c->r[30]+0x00000024u,c->r[3]); // 80299464
  W16(c->r[30]+0x00000026u,c->r[3]); // 80299468
  goto L_802994B4; // 8029946C
L_80299470:;
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 80299470
  c->r[0]=0u+0x00000001u; // 80299474
  c->r[5]=R32(c->r[30]+0x00000094u); // 80299478
  c->r[8]=0u+0x00000003u; // 8029947C
  c->r[3]=R32(c->r[30]+0x00000044u); // 80299480
  c->r[7]=0u+0x00000000u; // 80299484
  c->r[4]=c->r[5]-c->r[6]; // 80299488
  W32(c->r[30]+0x00000008u,c->r[8]); // 8029948C
  c->r[3]=c->r[3]-c->r[5]; // 80299490
  W32(c->r[30]+0x0000000Cu,c->r[7]); // 80299494
  W32(c->r[30]+0x00000010u,c->r[6]); // 80299498
  W32(c->r[30]+0x00000014u,c->r[6]); // 8029949C
  W32(c->r[30]+0x00000018u,c->r[4]); // 802994A0
  W32(c->r[30]+0x0000001Cu,c->r[5]); // 802994A4
  W32(c->r[30]+0x00000020u,c->r[3]); // 802994A8
  W8(c->r[30]+0x00000024u,c->r[0]); // 802994AC
  W16(c->r[30]+0x00000026u,c->r[0]); // 802994B0
L_802994B4:;
  c->r[0]=0u+0x00000001u; // 802994B4
  W32(c->r[30]+0x00000034u,c->r[0]); // 802994B8
L_802994BC:;
  c->r[0]=R32(c->r[30]+0x00000034u); // 802994BC
  cmps(c,0,(int32_t)c->r[0],1); // 802994C0
  if (!crb(c,2)) { goto L_80299594; } // 802994C4
L_802994C8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 802994C8
  c->r[6]=c->r[1]+0x00000008u; // 802994CC
  c->r[4]=0u+0x00000000u; // 802994D0
  c->r[5]=0u+0xFFFFFFFFu; // 802994D4
  c->lr=0x802994DCu; f_8029E25C(c); // 802994D8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802994DC
  cmps(c,0,(int32_t)c->r[0],0); // 802994E0
  if (!crb(c,2)) { IRQCHK(c); goto L_802994C8; } // 802994E4
  c->r[3]=R32(c->r[30]+0x00000004u); // 802994E8
  c->lr=0x802994F0u; f_8029EEC8(c); // 802994EC
  cmps(c,0,(int32_t)c->r[3],4); // 802994F0
  if (!crb(c,1)) { goto L_8029957C; } // 802994F4
  c->r[31]=0u+0x00000000u; // 802994F8
L_802994FC:;
  c->r[3]=R8(c->r[30]+0x00000032u); // 802994FC
  c->r[0]=R32(c->r[30]+0x00000008u); // 80299500
  cmpu(c,0,c->r[3],c->r[0]); // 80299504
  if (!crb(c,0)) { goto L_80299570; } // 80299508
  c->r[0]=rotl(c->r[3],3)&0x000007F8u; // 8029950C
  c->r[6]=R32(c->r[30]+0x00000040u); // 80299510
  c->r[3]=c->r[30]+c->r[0]; // 80299514
  c->r[5]=c->r[1]+0x00000008u; // 80299518
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8029951C
  c->r[4]=0u+0x00000001u; // 80299520
  c->r[0]=c->r[6]+c->r[0]; // 80299524
  W32(c->r[1]+0x00000008u,c->r[0]); // 80299528
  c->r[0]=R8(c->r[30]+0x00000032u); // 8029952C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80299530
  c->r[3]=c->r[30]+c->r[0]; // 80299534
  c->r[0]=R32(c->r[3]+0x00000010u); // 80299538
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8029953C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80299540
  c->lr=0x80299548u; f_8029E27C(c); // 80299544
  c->r[0]=R8(c->r[30]+0x00000024u); // 80299548
  cmps(c,0,(int32_t)c->r[0],0); // 8029954C
  if (crb(c,2)) { goto L_80299564; } // 80299550
  c->r[3]=R8(c->r[30]+0x00000032u); // 80299554
  c->r[0]=R16(c->r[30]+0x00000026u); // 80299558
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8029955C
  if (crb(c,2)) { goto L_80299570; } // 80299560
L_80299564:;
  c->r[3]=R8(c->r[30]+0x00000032u); // 80299564
  c->r[0]=c->r[3]+0x00000001u; // 80299568
  W8(c->r[30]+0x00000032u,c->r[0]); // 8029956C
L_80299570:;
  c->r[31]=c->r[31]+0x00000001u; // 80299570
  cmpu(c,0,c->r[31],0x00000002u); // 80299574
  if (crb(c,0)) { IRQCHK(c); goto L_802994FC; } // 80299578
L_8029957C:;
  c->r[3]=R8(c->r[30]+0x00000032u); // 8029957C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80299580
  cmpu(c,0,c->r[3],c->r[0]); // 80299584
  if (!crb(c,2)) { goto L_80299594; } // 80299588
  c->r[0]=0u+0x00000001u; // 8029958C
  W8(c->r[30]+0x00000031u,c->r[0]); // 80299590
L_80299594:;
  c->r[0]=R8(c->r[30]+0x00000031u); // 80299594
  cmpu(c,0,c->r[0],0x00000001u); // 80299598
  if (!crb(c,2)) { goto L_802995D0; } // 8029959C
  c->r[3]=R32(c->r[30]+0x00000004u); // 802995A0
  c->lr=0x802995A8u; f_8029E3CC(c); // 802995A4
  cmps(c,0,(int32_t)c->r[3],0); // 802995A8
  if (!crb(c,2)) { goto L_802995D0; } // 802995AC
  c->r[0]=0u+0x00000002u; // 802995B0
  W32(c->r[30]+0x00000028u,c->r[0]); // 802995B4
  goto L_802995D0; // 802995B8
L_802995BC:;
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802995BC
  cmps(c,0,(int32_t)c->r[0],0); // 802995C0
  if (!crb(c,2)) { goto L_802995D0; } // 802995C4
  c->r[0]=0u+0x00000000u; // 802995C8
  W32(c->r[3]+0x00000028u,c->r[0]); // 802995CC
L_802995D0:;
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802995D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802995D4
  c->lr=c->r[0]; // 802995D8
  c->r[1]=c->r[1]+0x00000040u; // 802995DC
  return; // 802995E0
}

// fn_802995E4
void f_802995E4(Ctx* __restrict c) {
  trace_call(0x802995E4u);
  return; // 802995E4
}

// fn_802995E8
void f_802995E8(Ctx* __restrict c) {
  trace_call(0x802995E8u);
  cmps(c,0,(int32_t)c->r[3],0); // 802995E8
  if (crb(c,2)) return; // 802995EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802995F0
  c->r[4]=0u+0x00000001u; // 802995F4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802995F8
  c->ctr=c->r[12]; // 802995FC
  if (true) { dispatch(c,c->ctr); return; } // 80299600
  return; // 80299604
}

// fn_80299608
void f_80299608(Ctx* __restrict c) {
  trace_call(0x80299608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299608
  c->r[0]=c->lr; // 8029960C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80299610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80299614
  c->r[31]=c->r[3]|c->r[3]; // 80299618
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029961C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80299620
  c->ctr=c->r[12]; // 80299624
  if (true) { c->lr=0x8029962Cu; dispatch(c,c->ctr); } // 80299628
  cmps(c,0,(int32_t)c->r[31],0); // 8029962C
  if (crb(c,2)) { goto L_8029964C; } // 80299630
  c->r[12]=R32(c->r[31]+0x00000000u); // 80299634
  c->r[3]=c->r[31]|c->r[31]; // 80299638
  c->r[4]=0u+0x00000001u; // 8029963C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80299640
  c->ctr=c->r[12]; // 80299644
  if (true) { c->lr=0x8029964Cu; dispatch(c,c->ctr); } // 80299648
L_8029964C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029964C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80299650
  c->lr=c->r[0]; // 80299654
  c->r[1]=c->r[1]+0x00000010u; // 80299658
  return; // 8029965C
}

// fn_80299660
void f_80299660(Ctx* __restrict c) {
  trace_call(0x80299660u);
  c->r[6]=0u+0x804C0000u; // 80299660
  c->r[0]=0u+0x00000000u; // 80299664
  c->r[6]=c->r[6]+0xFFFFD5F4u; // 80299668
  W32(c->r[3]+0x00000004u,c->r[4]); // 8029966C
  W32(c->r[3]+0x00000000u,c->r[6]); // 80299670
  W32(c->r[3]+0x00000008u,c->r[5]); // 80299674
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80299678
  W32(c->r[3]+0x00000010u,c->r[0]); // 8029967C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80299680
  return; // 80299684
}

// fn_80299688
void f_80299688(Ctx* __restrict c) {
  trace_call(0x80299688u);
  c->r[8]=0u+0x804C0000u; // 80299688
  c->r[0]=0u+0x00000000u; // 8029968C
  c->r[8]=c->r[8]+0xFFFFD5F4u; // 80299690
  W32(c->r[3]+0x00000004u,c->r[4]); // 80299694
  W32(c->r[3]+0x00000000u,c->r[8]); // 80299698
  W32(c->r[3]+0x00000008u,c->r[0]); // 8029969C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 802996A0
  W32(c->r[3]+0x00000010u,c->r[6]); // 802996A4
  W32(c->r[3]+0x00000014u,c->r[7]); // 802996A8
  return; // 802996AC
}

// fn_802996B0
void f_802996B0(Ctx* __restrict c) {
  trace_call(0x802996B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802996B0
  c->r[0]=c->lr; // 802996B4
  cmps(c,0,(int32_t)c->r[3],0); // 802996B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802996BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802996C0
  c->r[31]=c->r[3]|c->r[3]; // 802996C4
  if (crb(c,2)) { goto L_802996DC; } // 802996C8
  cmps(c,0,(int32_t)c->r[4],0); // 802996CC
  if (!crb(c,1)) { goto L_802996DC; } // 802996D0
  c->r[4]=0u+0x00000018u; // 802996D4
  c->lr=0x802996DCu; f_8029C224(c); // 802996D8
L_802996DC:;
  c->r[3]=c->r[31]|c->r[31]; // 802996DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802996E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802996E4
  c->lr=c->r[0]; // 802996E8
  c->r[1]=c->r[1]+0x00000010u; // 802996EC
  return; // 802996F0
}

// fn_802996F4
void f_802996F4(Ctx* __restrict c) {
  trace_call(0x802996F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802996F4
  c->r[0]=c->lr; // 802996F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802996FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80299700
  W32(c->r[1]+0x00000018u,c->r[30]); // 80299704
  W32(c->r[1]+0x00000014u,c->r[29]); // 80299708
  c->r[29]=c->r[3]|c->r[3]; // 8029970C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80299710
  cmps(c,0,(int32_t)c->r[0],1); // 80299714
  if (!crb(c,2)) { goto L_80299810; } // 80299718
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029971C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80299720
  c->ctr=c->r[12]; // 80299724
  if (true) { c->lr=0x8029972Cu; dispatch(c,c->ctr); } // 80299728
  c->r[31]=0u+0x803D0000u; // 8029972C
  c->r[30]=c->r[3]|c->r[3]; // 80299730
  c->r[31]=c->r[31]+0x00003478u; // 80299734
  c->r[3]=R32(c->r[29]+0x00000004u); // 80299738
  c->r[6]=c->r[30]|c->r[30]; // 8029973C
  c->r[4]=0u+0x00000060u; // 80299740
  c->r[5]=c->r[31]+0x00000011u; // 80299744
  c->lr=0x8029974Cu; f_8029D740(c); // 80299748
  cmps(c,0,(int32_t)c->r[3],0); // 8029974C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 80299750
  if (!crb(c,2)) { goto L_80299780; } // 80299754
  c->r[3]=c->r[31]+0x0000001Du; // 80299758
  c->r[4]=0u+0xFFFFFFFDu; // 8029975C
  c->lr=0x80299764u; f_8029D638(c); // 80299760
  c->r[12]=R32(c->r[29]+0x00000000u); // 80299764
  c->r[3]=c->r[29]|c->r[29]; // 80299768
  c->r[12]=R32(c->r[12]+0x00000014u); // 8029976C
  c->ctr=c->r[12]; // 80299770
  if (true) { c->lr=0x80299778u; dispatch(c,c->ctr); } // 80299774
  c->r[3]=0u+0x00000000u; // 80299778
  goto L_80299814; // 8029977C
L_80299780:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80299780
  c->r[6]=c->r[30]|c->r[30]; // 80299784
  c->r[5]=c->r[31]+0x00000027u; // 80299788
  c->r[4]=0u+0x000000E0u; // 8029978C
  c->lr=0x80299794u; f_8029D740(c); // 80299790
  cmps(c,0,(int32_t)c->r[3],0); // 80299794
  W32(c->r[29]+0x00000010u,c->r[3]); // 80299798
  if (!crb(c,2)) { goto L_802997C8; } // 8029979C
  c->r[3]=c->r[31]+0x00000032u; // 802997A0
  c->r[4]=0u+0xFFFFFFFDu; // 802997A4
  c->lr=0x802997ACu; f_8029D638(c); // 802997A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 802997AC
  c->r[3]=c->r[29]|c->r[29]; // 802997B0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802997B4
  c->ctr=c->r[12]; // 802997B8
  if (true) { c->lr=0x802997C0u; dispatch(c,c->ctr); } // 802997BC
  c->r[3]=0u+0x00000000u; // 802997C0
  goto L_80299814; // 802997C4
L_802997C8:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 802997C8
  c->r[6]=c->r[30]|c->r[30]; // 802997CC
  c->r[5]=c->r[31]+0x0000003Cu; // 802997D0
  c->r[4]=0u+0x00000300u; // 802997D4
  c->lr=0x802997DCu; f_8029D740(c); // 802997D8
  cmps(c,0,(int32_t)c->r[3],0); // 802997DC
  W32(c->r[29]+0x00000014u,c->r[3]); // 802997E0
  if (!crb(c,2)) { goto L_80299810; } // 802997E4
  c->r[3]=c->r[31]+0x00000043u; // 802997E8
  c->r[4]=0u+0xFFFFFFFDu; // 802997EC
  c->lr=0x802997F4u; f_8029D638(c); // 802997F0
  c->r[12]=R32(c->r[29]+0x00000000u); // 802997F4
  c->r[3]=c->r[29]|c->r[29]; // 802997F8
  c->r[12]=R32(c->r[12]+0x00000014u); // 802997FC
  c->ctr=c->r[12]; // 80299800
  if (true) { c->lr=0x80299808u; dispatch(c,c->ctr); } // 80299804
  c->r[3]=0u+0x00000000u; // 80299808
  goto L_80299814; // 8029980C
L_80299810:;
  c->r[3]=0u+0x00000001u; // 80299810
L_80299814:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80299814
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80299818
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029981C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80299820
  c->lr=c->r[0]; // 80299824
  c->r[1]=c->r[1]+0x00000020u; // 80299828
  return; // 8029982C
}

// fn_80299830
void f_80299830(Ctx* __restrict c) {
  trace_call(0x80299830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299830
  c->r[0]=c->lr; // 80299834
  W32(c->r[1]+0x00000014u,c->r[0]); // 80299838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029983C
  c->r[31]=c->r[3]|c->r[3]; // 80299840
  c->r[0]=R32(c->r[3]+0x00000008u); // 80299844
  cmps(c,0,(int32_t)c->r[0],1); // 80299848
  if (!crb(c,2)) { goto L_802998A4; } // 8029984C
  c->r[4]=R32(c->r[3]+0x00000014u); // 80299850
  cmps(c,0,(int32_t)c->r[4],0); // 80299854
  if (crb(c,2)) { goto L_8029986C; } // 80299858
  c->r[3]=R32(c->r[3]+0x00000004u); // 8029985C
  c->lr=0x80299864u; f_8029D794(c); // 80299860
  c->r[0]=0u+0x00000000u; // 80299864
  W32(c->r[31]+0x00000014u,c->r[0]); // 80299868
L_8029986C:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 8029986C
  cmps(c,0,(int32_t)c->r[4],0); // 80299870
  if (crb(c,2)) { goto L_80299888; } // 80299874
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299878
  c->lr=0x80299880u; f_8029D794(c); // 8029987C
  c->r[0]=0u+0x00000000u; // 80299880
  W32(c->r[31]+0x00000010u,c->r[0]); // 80299884
L_80299888:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80299888
  cmps(c,0,(int32_t)c->r[4],0); // 8029988C
  if (crb(c,2)) { goto L_802998A4; } // 80299890
  c->r[3]=R32(c->r[31]+0x00000004u); // 80299894
  c->lr=0x8029989Cu; f_8029D794(c); // 80299898
  c->r[0]=0u+0x00000000u; // 8029989C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802998A0
L_802998A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802998A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802998A8
  c->lr=c->r[0]; // 802998AC
  c->r[1]=c->r[1]+0x00000010u; // 802998B0
  return; // 802998B4
}

// fn_802998B8
void f_802998B8(Ctx* __restrict c) {
  trace_call(0x802998B8u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802998B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802998BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 802998C0
  W32(c->r[4]+0x00000004u,c->r[0]); // 802998C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802998C8
  W32(c->r[4]+0x00000008u,c->r[0]); // 802998CC
  return; // 802998D0
}

// fn_802998D4
void f_802998D4(Ctx* __restrict c) {
  trace_call(0x802998D4u);
  c->r[3]=0u+0x00000300u; // 802998D4
  return; // 802998D8
}

// fn_802998DC
void f_802998DC(Ctx* __restrict c) {
  trace_call(0x802998DCu);
  c->r[3]=0u+0x00000004u; // 802998DC
  return; // 802998E0
}

// fn_802998E4
void f_802998E4(Ctx* __restrict c) {
  trace_call(0x802998E4u);
  c->r[3]=0u+0x00000004u; // 802998E4
  return; // 802998E8
}

// fn_802998EC
void f_802998EC(Ctx* __restrict c) {
  trace_call(0x802998ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802998EC
  c->r[0]=c->lr; // 802998F0
  cmps(c,0,(int32_t)c->r[3],0); // 802998F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802998F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802998FC
  c->r[31]=c->r[4]|c->r[4]; // 80299900
  W32(c->r[1]+0x00000008u,c->r[30]); // 80299904
  c->r[30]=c->r[3]|c->r[3]; // 80299908
  if (crb(c,2)) { goto L_8029992C; } // 8029990C
  c->r[4]=0u+0x00000000u; // 80299910
  c->lr=0x80299918u; f_802996B0(c); // 80299914
  cmps(c,0,(int32_t)c->r[31],0); // 80299918
  if (!crb(c,1)) { goto L_8029992C; } // 8029991C
  c->r[3]=c->r[30]|c->r[30]; // 80299920
  c->r[4]=0u+0x00000038u; // 80299924
  c->lr=0x8029992Cu; f_8029C224(c); // 80299928
L_8029992C:;
  c->r[3]=c->r[30]|c->r[30]; // 8029992C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80299930
  c->r[30]=R32(c->r[1]+0x00000008u); // 80299934
  c->r[0]=R32(c->r[1]+0x00000014u); // 80299938
  c->lr=c->r[0]; // 8029993C
  c->r[1]=c->r[1]+0x00000010u; // 80299940
  return; // 80299944
}

// fn_80299948
void f_80299948(Ctx* __restrict c) {
  trace_call(0x80299948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299948
  c->r[0]=c->lr; // 8029994C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80299950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80299954
  c->r[31]=c->r[3]|c->r[3]; // 80299958
  c->lr=0x80299960u; f_802996F4(c); // 8029995C
  cmps(c,0,(int32_t)c->r[3],0); // 80299960
  if (!crb(c,2)) { goto L_80299970; } // 80299964
  c->r[3]=0u+0x00000000u; // 80299968
  goto L_802999D0; // 8029996C
L_80299970:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299970
  c->r[4]=0u+0x00000000u; // 80299974
  c->r[5]=0u+0x00000054u; // 80299978
  c->lr=0x80299980u; f_8000443C(c); // 8029997C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80299980
  c->r[4]=0u+0x00000000u; // 80299984
  c->r[5]=0u+0x000000D4u; // 80299988
  c->lr=0x80299990u; f_8000443C(c); // 8029998C
  c->r[5]=0u+0x00000000u; // 80299990
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80299994
  W32(c->r[31]+0x00000030u,c->r[5]); // 80299998
  c->r[0]=0u+0x00000001u; // 8029999C
  c->r[3]=0u+0x00000001u; // 802999A0
  W32(c->r[31]+0x00000034u,c->r[5]); // 802999A4
  W32(c->r[4]+0x00000000u,c->r[5]); // 802999A8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802999AC
  W32(c->r[4]+0x00000004u,c->r[5]); // 802999B0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802999B4
  W32(c->r[4]+0x00000048u,c->r[0]); // 802999B8
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802999BC
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 802999C0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 802999C4
  W32(c->r[4]+0x00000050u,c->r[5]); // 802999C8
  W32(c->r[31]+0x00000024u,c->r[5]); // 802999CC
L_802999D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802999D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802999D4
  c->lr=c->r[0]; // 802999D8
  c->r[1]=c->r[1]+0x00000010u; // 802999DC
  return; // 802999E0
}

// fn_802999E4
void f_802999E4(Ctx* __restrict c) {
  trace_call(0x802999E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802999E4
  c->r[0]=c->lr; // 802999E8
  c->r[4]=0u+0x00000000u; // 802999EC
  c->r[5]=0u+0x00000054u; // 802999F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802999F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802999F8
  c->r[31]=c->r[3]|c->r[3]; // 802999FC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299A00
  c->lr=0x80299A08u; f_8000443C(c); // 80299A04
  c->r[3]=R32(c->r[31]+0x00000010u); // 80299A08
  c->r[4]=0u+0x00000000u; // 80299A0C
  c->r[5]=0u+0x000000D4u; // 80299A10
  c->lr=0x80299A18u; f_8000443C(c); // 80299A14
  c->r[4]=0u+0x00000000u; // 80299A18
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299A1C
  W32(c->r[31]+0x00000030u,c->r[4]); // 80299A20
  c->r[0]=0u+0x00000001u; // 80299A24
  W32(c->r[31]+0x00000034u,c->r[4]); // 80299A28
  W32(c->r[3]+0x00000000u,c->r[4]); // 80299A2C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299A30
  W32(c->r[3]+0x00000004u,c->r[4]); // 80299A34
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299A38
  W32(c->r[3]+0x00000048u,c->r[0]); // 80299A3C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299A40
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80299A44
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80299A48
  W32(c->r[3]+0x00000050u,c->r[4]); // 80299A4C
  W32(c->r[31]+0x00000024u,c->r[4]); // 80299A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80299A54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80299A58
  c->lr=c->r[0]; // 80299A5C
  c->r[1]=c->r[1]+0x00000010u; // 80299A60
  return; // 80299A64
}

// fn_80299A68
void f_80299A68(Ctx* __restrict c) {
  trace_call(0x80299A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299A68
  c->r[0]=c->lr; // 80299A6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80299A70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80299A74
  c->r[31]=0u+0x00000000u; // 80299A78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80299A7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80299A80
  c->r[29]=c->r[3]|c->r[3]; // 80299A84
  W32(c->r[1]+0x00000010u,c->r[28]); // 80299A88
  c->r[28]=0u+0x00000000u; // 80299A8C
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80299A90
L_80299A94:;
  c->r[0]=R32(c->r[29]+0x00000034u); // 80299A94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80299A98
  c->r[3]=c->r[30]+c->r[0]; // 80299A9C
  c->r[0]=R32(c->r[3]+0x00000038u); // 80299AA0
  cmps(c,0,(int32_t)c->r[0],0); // 80299AA4
  if (crb(c,2)) { goto L_80299AF4; } // 80299AA8
  c->r[0]=R32(c->r[3]+0x00000028u); // 80299AAC
  c->r[4]=c->r[1]+0x00000008u; // 80299AB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80299AB4
  c->r[0]=R32(c->r[29]+0x00000034u); // 80299AB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80299ABC
  c->r[3]=c->r[30]+c->r[0]; // 80299AC0
  c->r[5]=R32(c->r[3]+0x00000038u); // 80299AC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80299AC8
  c->r[3]=R32(c->r[29]+0x00000024u); // 80299ACC
  c->lr=0x80299AD4u; f_8029E3FC(c); // 80299AD0
  c->r[0]=R32(c->r[29]+0x00000034u); // 80299AD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80299AD8
  c->r[3]=c->r[30]+c->r[0]; // 80299ADC
  W32(c->r[3]+0x00000028u,c->r[28]); // 80299AE0
  c->r[0]=R32(c->r[29]+0x00000034u); // 80299AE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80299AE8
  c->r[3]=c->r[30]+c->r[0]; // 80299AEC
  W32(c->r[3]+0x00000038u,c->r[28]); // 80299AF0
L_80299AF4:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 80299AF4
  c->r[4]=c->r[3]+0x00000001u; // 80299AF8
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 80299AFC
  c->r[3]=c->r[30]+c->r[0]; // 80299B00
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 80299B04
  c->r[0]=R32(c->r[3]+0x00000028u); // 80299B08
  cmps(c,0,(int32_t)c->r[0],0); // 80299B0C
  if (crb(c,2)) { goto L_80299B30; } // 80299B10
  W32(c->r[29]+0x00000034u,c->r[4]); // 80299B14
  c->r[31]=c->r[31]+0x00000001u; // 80299B18
  cmpu(c,0,c->r[31],0x00000004u); // 80299B1C
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 80299B20
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80299B24
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 80299B28
  if (crb(c,0)) { IRQCHK(c); goto L_80299A94; } // 80299B2C
L_80299B30:;
  c->r[31]=0u+0x00000000u; // 80299B30
L_80299B34:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 80299B34
  c->r[6]=c->r[1]+0x00000008u; // 80299B38
  c->r[4]=0u+0x00000001u; // 80299B3C
  c->r[5]=0u+0xFFFFFFFFu; // 80299B40
  c->lr=0x80299B48u; f_8029E25C(c); // 80299B44
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80299B48
  cmps(c,0,(int32_t)c->r[7],0); // 80299B4C
  if (crb(c,2)) { goto L_80299C00; } // 80299B50
  c->r[5]=R32(c->r[29]+0x00000030u); // 80299B54
  c->r[4]=R32(c->r[1]+0x00000008u); // 80299B58
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80299B5C
  c->r[6]=c->r[30]+c->r[0]; // 80299B60
  c->r[0]=R32(c->r[6]+0x00000008u); // 80299B64
  c->r[3]=R32(c->r[6]+0x00000018u); // 80299B68
  c->r[0]=c->r[0]+c->r[3]; // 80299B6C
  cmpu(c,0,c->r[4],c->r[0]); // 80299B70
  if (!crb(c,2)) { goto L_80299B84; } // 80299B74
  c->r[0]=c->r[3]+c->r[7]; // 80299B78
  W32(c->r[6]+0x00000018u,c->r[0]); // 80299B7C
  goto L_80299BF4; // 80299B80
L_80299B84:;
  c->r[0]=R32(c->r[30]+0x00000048u); // 80299B84
  cmpu(c,0,c->r[0],0x00000004u); // 80299B88
  if (!crb(c,0)) { goto L_80299BF4; } // 80299B8C
  c->r[4]=c->r[5]+0x00000001u; // 80299B90
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 80299B94
  c->r[3]=c->r[30]+c->r[0]; // 80299B98
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 80299B9C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80299BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80299BA4
  if (!crb(c,2)) { goto L_80299BE4; } // 80299BA8
  W32(c->r[29]+0x00000030u,c->r[4]); // 80299BAC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80299BB0
  c->r[3]=c->r[30]+c->r[0]; // 80299BB4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80299BB8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80299BBC
  c->r[0]=R32(c->r[29]+0x00000030u); // 80299BC0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80299BC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80299BC8
  c->r[3]=c->r[30]+c->r[0]; // 80299BCC
  W32(c->r[3]+0x00000018u,c->r[4]); // 80299BD0
  c->r[3]=R32(c->r[30]+0x00000048u); // 80299BD4
  c->r[0]=c->r[3]+0x00000001u; // 80299BD8
  W32(c->r[30]+0x00000048u,c->r[0]); // 80299BDC
  goto L_80299BF4; // 80299BE0
L_80299BE4:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 80299BE4
  c->r[5]=c->r[1]+0x00000008u; // 80299BE8
  c->r[4]=0u+0x00000001u; // 80299BEC
  c->lr=0x80299BF4u; f_8029E26C(c); // 80299BF0
L_80299BF4:;
  c->r[31]=c->r[31]+0x00000001u; // 80299BF4
  cmpu(c,0,c->r[31],0x00000004u); // 80299BF8
  if (crb(c,0)) { IRQCHK(c); goto L_80299B34; } // 80299BFC
L_80299C00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80299C00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80299C04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80299C08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80299C0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80299C10
  c->lr=c->r[0]; // 80299C14
  c->r[1]=c->r[1]+0x00000020u; // 80299C18
  return; // 80299C1C
}

// fn_80299C20
void f_80299C20(Ctx* __restrict c) {
  trace_call(0x80299C20u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299C20
  c->r[3]=R32(c->r[3]+0x00000000u); // 80299C24
  return; // 80299C28
}

// fn_80299C2C
void f_80299C2C(Ctx* __restrict c) {
  trace_call(0x80299C2Cu);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299C2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299C30
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80299C34
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299C38
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299C3C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299C40
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80299C44
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299C48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299C4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299C50
  c->r[0]=c->r[0]|0x00000001u; // 80299C54
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299C58
  return; // 80299C5C
}

// fn_80299C60
void f_80299C60(Ctx* __restrict c) {
  trace_call(0x80299C60u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299C60
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299C64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80299C68
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299C6C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299C70
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299C74
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80299C78
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299C7C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299C80
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299C84
  c->r[0]=c->r[0]|0x00000002u; // 80299C88
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299C8C
  return; // 80299C90
}

// fn_80299C94
void f_80299C94(Ctx* __restrict c) {
  trace_call(0x80299C94u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299C94
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299C98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80299C9C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299CA0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299CA4
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299CA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80299CAC
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299CB0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299CB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299CB8
  c->r[0]=c->r[0]|0x00000004u; // 80299CBC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299CC0
  return; // 80299CC4
}

// fn_80299CC8
void f_80299CC8(Ctx* __restrict c) {
  trace_call(0x80299CC8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299CC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299CCC
  c->r[0]=c->r[0]|0x00000020u; // 80299CD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299CD4
  return; // 80299CD8
}

// fn_80299CDC
void f_80299CDC(Ctx* __restrict c) {
  trace_call(0x80299CDCu);
  cmps(c,0,(int32_t)c->r[4],1); // 80299CDC
  if (!crb(c,2)) { goto L_80299D08; } // 80299CE0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299CE4
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299CE8
  c->r[0]=c->r[0]|0x00000008u; // 80299CEC
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299CF0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299CF4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299CF8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80299CFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299D00
  return; // 80299D04
L_80299D08:;
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80299D08
  c->r[0]=R32(c->r[4]+0x00000004u); // 80299D0C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80299D10
  W32(c->r[4]+0x00000004u,c->r[0]); // 80299D14
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299D18
  c->r[0]=R32(c->r[3]+0x00000004u); // 80299D1C
  c->r[0]=c->r[0]|0x00000010u; // 80299D20
  W32(c->r[3]+0x00000004u,c->r[0]); // 80299D24
  return; // 80299D28
}

// fn_80299D2C
void f_80299D2C(Ctx* __restrict c) {
  trace_call(0x80299D2Cu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80299D2C
  c->r[3]=R32(c->r[3]+0x00000050u); // 80299D30
  return; // 80299D34
}

// fn_80299D38
void f_80299D38(Ctx* __restrict c) {
  trace_call(0x80299D38u);
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80299D38
  c->r[4]=R32(c->r[5]+0x00000018u); // 80299D3C
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80299D40
  c->r[3]=R32(c->r[5]+0x00000020u); // 80299D44
  c->r[4]=c->r[4]+c->r[0]; // 80299D48
  c->r[0]=R32(c->r[5]+0x00000024u); // 80299D4C
  c->r[4]=c->r[4]+c->r[3]; // 80299D50
  c->r[3]=c->r[4]+c->r[0]; // 80299D54
  return; // 80299D58
}

// fn_80299D5C
void f_80299D5C(Ctx* __restrict c) {
  trace_call(0x80299D5Cu);
  c->r[5]=R32(c->r[3]+0x00000010u); // 80299D5C
  W32(c->r[5]+0x00000000u,c->r[4]); // 80299D60
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299D64
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80299D68
  return; // 80299D6C
}

// fn_80299D70
void f_80299D70(Ctx* __restrict c) {
  trace_call(0x80299D70u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299D70
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80299D74
  return; // 80299D78
}

// fn_80299D7C
void f_80299D7C(Ctx* __restrict c) {
  trace_call(0x80299D7Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299D7C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80299D80
  return; // 80299D84
}

// fn_80299D88
void f_80299D88(Ctx* __restrict c) {
  trace_call(0x80299D88u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299D88
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80299D8C
  return; // 80299D90
}

// fn_80299D94
void f_80299D94(Ctx* __restrict c) {
  trace_call(0x80299D94u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299D94
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 80299D98
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299D9C
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[2]);} // 80299DA0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299DA4
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[3]);} // 80299DA8
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299DAC
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[4]);} // 80299DB0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299DB4
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[5]);} // 80299DB8
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299DBC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[6]);} // 80299DC0
  return; // 80299DC4
}

// fn_80299DC8
void f_80299DC8(Ctx* __restrict c) {
  trace_call(0x80299DC8u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299DC8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80299DCC
  c->r[3]=c->r[3]+c->r[0]; // 80299DD0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 80299DD4
  return; // 80299DD8
}

// fn_80299DDC
void f_80299DDC(Ctx* __restrict c) {
  trace_call(0x80299DDCu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299DDC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80299DE0
  c->r[3]=c->r[3]+c->r[0]; // 80299DE4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 80299DE8
  return; // 80299DEC
}

// fn_80299DF0
void f_80299DF0(Ctx* __restrict c) {
  trace_call(0x80299DF0u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299DF0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 80299DF4
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299DF8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 80299DFC
  return; // 80299E00
}

// fn_80299E04
void f_80299E04(Ctx* __restrict c) {
  trace_call(0x80299E04u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E04
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80299E08
  return; // 80299E0C
}

// fn_80299E10
void f_80299E10(Ctx* __restrict c) {
  trace_call(0x80299E10u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E10
  W32(c->r[3]+0x00000090u,c->r[4]); // 80299E14
  return; // 80299E18
}

// fn_80299E1C
void f_80299E1C(Ctx* __restrict c) {
  trace_call(0x80299E1Cu);
  c->r[5]=R32(c->r[3]+0x00000010u); // 80299E1C
  W32(c->r[5]+0x00000094u,c->r[4]); // 80299E20
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80299E24
  return; // 80299E28
}

// fn_80299E2C
void f_80299E2C(Ctx* __restrict c) {
  trace_call(0x80299E2Cu);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80299E2C
  return; // 80299E30
}

// fn_80299E34
void f_80299E34(Ctx* __restrict c) {
  trace_call(0x80299E34u);
  c->r[6]=R32(c->r[3]+0x00000010u); // 80299E34
  W32(c->r[6]+0x000000A0u,c->r[4]); // 80299E38
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E3C
  W32(c->r[3]+0x000000A4u,c->r[5]); // 80299E40
  return; // 80299E44
}

// fn_80299E48
void f_80299E48(Ctx* __restrict c) {
  trace_call(0x80299E48u);
  c->r[7]=R32(c->r[3]+0x00000010u); // 80299E48
  W32(c->r[7]+0x000000A8u,c->r[4]); // 80299E4C
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299E50
  W32(c->r[4]+0x000000ACu,c->r[5]); // 80299E54
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E58
  W32(c->r[3]+0x000000B0u,c->r[6]); // 80299E5C
  return; // 80299E60
}

// fn_80299E64
void f_80299E64(Ctx* __restrict c) {
  trace_call(0x80299E64u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 80299E64
  {uint32_t ea=c->r[4]+0x00000098u; WF32(ea,c->f[1]);} // 80299E68
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E6C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[2]);} // 80299E70
  return; // 80299E74
}

// fn_80299E78
void f_80299E78(Ctx* __restrict c) {
  trace_call(0x80299E78u);
  c->r[6]=R32(c->r[3]+0x00000010u); // 80299E78
  W32(c->r[6]+0x000000B4u,c->r[4]); // 80299E7C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E80
  W32(c->r[3]+0x000000B8u,c->r[5]); // 80299E84
  return; // 80299E88
}

// fn_80299E8C
void f_80299E8C(Ctx* __restrict c) {
  trace_call(0x80299E8Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80299E8C
  c->r[5]=0u+0x00000018u; // 80299E90
  c->r[3]=c->r[3]+0x000000BCu; // 80299E94
  f_80004338(c); return; // 80299E98
}

// fn_80299E9C
void f_80299E9C(Ctx* __restrict c) {
  trace_call(0x80299E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299E9C
  c->r[0]=c->lr; // 80299EA0
  c->r[5]=0u+0x803D0000u; // 80299EA4
  c->r[6]=0u+0x00000004u; // 80299EA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80299EAC
  c->r[5]=c->r[5]+0x000034F8u; // 80299EB0
  c->r[5]=c->r[5]+0x0000001Eu; // 80299EB4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80299EB8
  c->r[31]=c->r[1]|c->r[1]; // 80299EBC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80299EC0
  W32(c->r[1]+0x00000024u,c->r[29]); // 80299EC4
  c->r[29]=c->r[4]|c->r[4]; // 80299EC8
  W32(c->r[1]+0x00000020u,c->r[28]); // 80299ECC
  c->r[28]=c->r[3]|c->r[3]; // 80299ED0
  c->r[4]=c->r[28]|c->r[28]; // 80299ED4
  c->r[3]=0u+0x00000024u; // 80299ED8
  c->lr=0x80299EE0u; f_8029C154(c); // 80299EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80299EE0
  c->r[30]=c->r[3]|c->r[3]; // 80299EE4
  if (crb(c,2)) { goto L_80299F1C; } // 80299EE8
  c->r[4]=0u+0x804C0000u; // 80299EEC
  W32(c->r[3]+0x00000004u,c->r[29]); // 80299EF0
  c->r[4]=c->r[4]+0xFFFFD620u; // 80299EF4
  c->r[0]=0u+0x00000000u; // 80299EF8
  W32(c->r[3]+0x00000000u,c->r[4]); // 80299EFC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80299F00
  W32(c->r[3]+0x00000010u,c->r[0]); // 80299F04
  W32(c->r[3]+0x00000014u,c->r[0]); // 80299F08
  W32(c->r[3]+0x00000018u,c->r[0]); // 80299F0C
  W32(c->r[3]+0x0000001Cu,c->r[28]); // 80299F10
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80299F14
  W32(c->r[3]+0x00000020u,c->r[0]); // 80299F18
L_80299F1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80299F1C
  if (!crb(c,2)) { goto L_80299F40; } // 80299F20
  c->r[3]=0u+0x803D0000u; // 80299F24
  c->r[4]=0u+0xFFFFFFFDu; // 80299F28
  c->r[3]=c->r[3]+0x000034F8u; // 80299F2C
  c->r[3]=c->r[3]+0x00000039u; // 80299F30
  c->lr=0x80299F38u; f_8029D638(c); // 80299F34
  c->r[3]=0u+0x00000000u; // 80299F38
  goto L_80299F7C; // 80299F3C
L_80299F40:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80299F40
  c->r[3]=c->r[30]|c->r[30]; // 80299F44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80299F48
  c->ctr=c->r[12]; // 80299F4C
  if (true) { c->lr=0x80299F54u; dispatch(c,c->ctr); } // 80299F50
  cmps(c,0,(int32_t)c->r[3],0); // 80299F54
  if (!crb(c,2)) { goto L_80299F78; } // 80299F58
  c->r[12]=R32(c->r[30]+0x00000000u); // 80299F5C
  c->r[3]=c->r[30]|c->r[30]; // 80299F60
  c->r[12]=R32(c->r[12]+0x00000018u); // 80299F64
  c->ctr=c->r[12]; // 80299F68
  if (true) { c->lr=0x80299F70u; dispatch(c,c->ctr); } // 80299F6C
  c->r[3]=0u+0x00000000u; // 80299F70
  goto L_80299F7C; // 80299F74
L_80299F78:;
  c->r[3]=c->r[30]|c->r[30]; // 80299F78
L_80299F7C:;
  c->r[10]=c->r[31]|c->r[31]; // 80299F7C
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80299F80
  c->r[30]=R32(c->r[10]+0x00000028u); // 80299F84
  c->r[29]=R32(c->r[10]+0x00000024u); // 80299F88
  c->r[28]=R32(c->r[10]+0x00000020u); // 80299F8C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80299F90
  c->r[0]=R32(c->r[10]+0x00000004u); // 80299F94
  c->r[1]=c->r[10]|c->r[10]; // 80299F98
  c->lr=c->r[0]; // 80299F9C
  return; // 80299FA0
}

// fn_80299FA4
void f_80299FA4(Ctx* __restrict c) {
  trace_call(0x80299FA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299FA4
  c->r[0]=c->lr; // 80299FA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80299FAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80299FB0
  c->r[31]=c->r[3]|c->r[3]; // 80299FB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80299FB8
  c->r[12]=R32(c->r[12]+0x00000020u); // 80299FBC
  c->ctr=c->r[12]; // 80299FC0
  if (true) { c->lr=0x80299FC8u; dispatch(c,c->ctr); } // 80299FC4
  cmps(c,0,(int32_t)c->r[31],0); // 80299FC8
  if (crb(c,2)) { goto L_80299FE8; } // 80299FCC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80299FD0
  c->r[3]=c->r[31]|c->r[31]; // 80299FD4
  c->r[4]=0u+0x00000001u; // 80299FD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80299FDC
  c->ctr=c->r[12]; // 80299FE0
  if (true) { c->lr=0x80299FE8u; dispatch(c,c->ctr); } // 80299FE4
L_80299FE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80299FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80299FEC
  c->lr=c->r[0]; // 80299FF0
  c->r[1]=c->r[1]+0x00000010u; // 80299FF4
  return; // 80299FF8
}

// fn_80299FFC
void f_80299FFC(Ctx* __restrict c) {
  trace_call(0x80299FFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80299FFC
  c->r[0]=c->lr; // 8029A000
  c->r[6]=0u+0x00000004u; // 8029A004
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A00C
  c->r[31]=0u+0x803D0000u; // 8029A010
  c->r[31]=c->r[31]+0x000034F8u; // 8029A014
  W32(c->r[1]+0x00000008u,c->r[30]); // 8029A018
  c->r[30]=c->r[3]|c->r[3]; // 8029A01C
  c->r[5]=c->r[31]+0x00000043u; // 8029A020
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029A024
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8029A028
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029A02C
  c->lr=0x8029A034u; f_8029D740(c); // 8029A030
  cmps(c,0,(int32_t)c->r[3],0); // 8029A034
  W32(c->r[30]+0x00000008u,c->r[3]); // 8029A038
  if (!crb(c,2)) { goto L_8029A054; } // 8029A03C
  c->r[3]=c->r[31]+0x00000058u; // 8029A040
  c->r[4]=0u+0xFFFFFFFDu; // 8029A044
  c->lr=0x8029A04Cu; f_8029D638(c); // 8029A048
  c->r[3]=0u+0x00000000u; // 8029A04C
  goto L_8029A0F4; // 8029A050
L_8029A054:;
  c->r[6]=0u+0x00000000u; // 8029A054
  c->r[5]=0u+0x00000000u; // 8029A058
  c->r[4]=0u+0x00000000u; // 8029A05C
  goto L_8029A074; // 8029A060
L_8029A064:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8029A064
  c->r[6]=c->r[6]+0x00000001u; // 8029A068
  W32(c->r[3]+c->r[5],c->r[4]); // 8029A06C
  c->r[5]=c->r[5]+0x00000004u; // 8029A070
L_8029A074:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8029A074
  cmpu(c,0,c->r[6],c->r[0]); // 8029A078
  if (crb(c,0)) { IRQCHK(c); goto L_8029A064; } // 8029A07C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029A080
  c->r[3]=c->r[30]|c->r[30]; // 8029A084
  c->r[12]=R32(c->r[12]+0x00000024u); // 8029A088
  c->ctr=c->r[12]; // 8029A08C
  if (true) { c->lr=0x8029A094u; dispatch(c,c->ctr); } // 8029A090
  cmps(c,0,(int32_t)c->r[3],0); // 8029A094
  if (!crb(c,2)) { goto L_8029A0B8; } // 8029A098
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029A09C
  c->r[3]=c->r[30]|c->r[30]; // 8029A0A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8029A0A4
  c->ctr=c->r[12]; // 8029A0A8
  if (true) { c->lr=0x8029A0B0u; dispatch(c,c->ctr); } // 8029A0AC
  c->r[3]=0u+0x00000000u; // 8029A0B0
  goto L_8029A0F4; // 8029A0B4
L_8029A0B8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029A0B8
  c->r[3]=c->r[30]|c->r[30]; // 8029A0BC
  c->r[12]=R32(c->r[12]+0x00000034u); // 8029A0C0
  c->ctr=c->r[12]; // 8029A0C4
  if (true) { c->lr=0x8029A0CCu; dispatch(c,c->ctr); } // 8029A0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8029A0CC
  if (!crb(c,2)) { goto L_8029A0F0; } // 8029A0D0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029A0D4
  c->r[3]=c->r[30]|c->r[30]; // 8029A0D8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8029A0DC
  c->ctr=c->r[12]; // 8029A0E0
  if (true) { c->lr=0x8029A0E8u; dispatch(c,c->ctr); } // 8029A0E4
  c->r[3]=0u+0x00000000u; // 8029A0E8
  goto L_8029A0F4; // 8029A0EC
L_8029A0F0:;
  c->r[3]=0u+0x00000001u; // 8029A0F0
L_8029A0F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A0F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8029A0FC
  c->lr=c->r[0]; // 8029A100
  c->r[1]=c->r[1]+0x00000010u; // 8029A104
  return; // 8029A108
}

// fn_8029A10C
void f_8029A10C(Ctx* __restrict c) {
  trace_call(0x8029A10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A10C
  c->r[0]=c->lr; // 8029A110
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A114
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A118
  c->r[31]=c->r[3]|c->r[3]; // 8029A11C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029A120
  c->r[12]=R32(c->r[12]+0x00000038u); // 8029A124
  c->ctr=c->r[12]; // 8029A128
  if (true) { c->lr=0x8029A130u; dispatch(c,c->ctr); } // 8029A12C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8029A130
  c->r[3]=c->r[31]|c->r[31]; // 8029A134
  c->r[12]=R32(c->r[12]+0x00000028u); // 8029A138
  c->ctr=c->r[12]; // 8029A13C
  if (true) { c->lr=0x8029A144u; dispatch(c,c->ctr); } // 8029A140
  c->r[4]=R32(c->r[31]+0x00000008u); // 8029A144
  cmps(c,0,(int32_t)c->r[4],0); // 8029A148
  if (crb(c,2)) { goto L_8029A160; } // 8029A14C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8029A150
  c->lr=0x8029A158u; f_8029D794(c); // 8029A154
  c->r[0]=0u+0x00000000u; // 8029A158
  W32(c->r[31]+0x00000008u,c->r[0]); // 8029A15C
L_8029A160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A164
  c->lr=c->r[0]; // 8029A168
  c->r[1]=c->r[1]+0x00000010u; // 8029A16C
  return; // 8029A170
}

// fn_8029A174
void f_8029A174(Ctx* __restrict c) {
  trace_call(0x8029A174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A174
  c->r[0]=c->lr; // 8029A178
  cmps(c,0,(int32_t)c->r[3],0); // 8029A17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A184
  c->r[31]=c->r[3]|c->r[3]; // 8029A188
  if (crb(c,2)) { goto L_8029A1A0; } // 8029A18C
  cmps(c,0,(int32_t)c->r[4],0); // 8029A190
  if (!crb(c,1)) { goto L_8029A1A0; } // 8029A194
  c->r[4]=0u+0x00000024u; // 8029A198
  c->lr=0x8029A1A0u; f_8029C224(c); // 8029A19C
L_8029A1A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8029A1A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A1A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A1A8
  c->lr=c->r[0]; // 8029A1AC
  c->r[1]=c->r[1]+0x00000010u; // 8029A1B0
  return; // 8029A1B4
}

// fn_8029A1B8
void f_8029A1B8(Ctx* __restrict c) {
  trace_call(0x8029A1B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A1B8
  c->r[0]=c->lr; // 8029A1BC
  c->r[5]=0u+0x00000000u; // 8029A1C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A1C4
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 8029A1C8
  c->r[4]=c->r[6]|c->r[6]; // 8029A1CC
  goto L_8029A1DC; // 8029A1D0
L_8029A1D4:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 8029A1D4
  c->r[5]=c->r[5]+0x00000001u; // 8029A1D8
L_8029A1DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8029A1DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8029A1D4; } // 8029A1E0
  cmps(c,0,(int32_t)c->r[5],0); // 8029A1E4
  if (!crb(c,2)) { goto L_8029A1F4; } // 8029A1E8
  c->r[3]=0u+0x00000000u; // 8029A1EC
  goto L_8029A30C; // 8029A1F0
L_8029A1F4:;
  cmps(c,0,(int32_t)c->r[6],0); // 8029A1F4
  c->r[7]=c->r[6]|c->r[6]; // 8029A1F8
  if (crb(c,2)) { goto L_8029A204; } // 8029A1FC
  c->r[7]=c->r[6]+0xFFFFFFE8u; // 8029A200
L_8029A204:;
  cmps(c,0,(int32_t)c->r[7],0); // 8029A204
  if (crb(c,2)) { goto L_8029A308; } // 8029A208
  c->r[4]=c->r[7]|c->r[7]; // 8029A20C
  if (crb(c,2)) { goto L_8029A218; } // 8029A210
  c->r[4]=c->r[7]+0x00000018u; // 8029A214
L_8029A218:;
  cmps(c,0,(int32_t)c->r[4],0); // 8029A218
  if (!crb(c,2)) { goto L_8029A230; } // 8029A21C
  c->r[3]=0u+0x804C0000u; // 8029A220
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 8029A224
  c->lr=0x8029A22Cu; f_8029D4B0(c); // 8029A228
L_8029A22C:;
  IRQCHK(c); goto L_8029A22C; // 8029A22C
L_8029A230:;
  cmpu(c,0,c->r[6],c->r[4]); // 8029A230
  if (!crb(c,2)) { goto L_8029A240; } // 8029A234
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029A238
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8029A23C
L_8029A240:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8029A240
  cmpu(c,0,c->r[0],c->r[4]); // 8029A244
  if (!crb(c,2)) { goto L_8029A254; } // 8029A248
  c->r[0]=R32(c->r[4]+0x00000000u); // 8029A24C
  W32(c->r[3]+0x00000010u,c->r[0]); // 8029A250
L_8029A254:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 8029A254
  cmps(c,0,(int32_t)c->r[5],0); // 8029A258
  if (crb(c,2)) { goto L_8029A268; } // 8029A25C
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029A260
  W32(c->r[5]+0x00000004u,c->r[0]); // 8029A264
L_8029A268:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 8029A268
  cmps(c,0,(int32_t)c->r[5],0); // 8029A26C
  if (crb(c,2)) { goto L_8029A27C; } // 8029A270
  c->r[0]=R32(c->r[4]+0x00000000u); // 8029A274
  W32(c->r[5]+0x00000000u,c->r[0]); // 8029A278
L_8029A27C:;
  c->r[0]=0u+0x00000000u; // 8029A27C
  cmps(c,0,(int32_t)c->r[7],0); // 8029A280
  W32(c->r[4]+0x00000004u,c->r[0]); // 8029A284
  c->r[5]=c->r[7]|c->r[7]; // 8029A288
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029A28C
  if (crb(c,2)) { goto L_8029A298; } // 8029A290
  c->r[5]=c->r[7]+0x00000018u; // 8029A294
L_8029A298:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 8029A298
  cmps(c,0,(int32_t)c->r[4],0); // 8029A29C
  if (crb(c,2)) { goto L_8029A2E4; } // 8029A2A0
  c->r[0]=R32(c->r[5]+0x00000000u); // 8029A2A4
  cmps(c,0,(int32_t)c->r[0],0); // 8029A2A8
  if (!crb(c,2)) { goto L_8029A2BC; } // 8029A2AC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8029A2B0
  cmps(c,0,(int32_t)c->r[0],0); // 8029A2B4
  if (crb(c,2)) { goto L_8029A2CC; } // 8029A2B8
L_8029A2BC:;
  c->r[3]=0u+0x804C0000u; // 8029A2BC
  c->r[3]=c->r[3]+0xFFFFD19Cu; // 8029A2C0
  c->lr=0x8029A2C8u; f_8029D4B0(c); // 8029A2C4
L_8029A2C8:;
  IRQCHK(c); goto L_8029A2C8; // 8029A2C8
L_8029A2CC:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 8029A2CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8029A2D0
  W32(c->r[5]+0x00000004u,c->r[0]); // 8029A2D4
  W32(c->r[4]+0x00000004u,c->r[5]); // 8029A2D8
  W32(c->r[3]+0x00000018u,c->r[5]); // 8029A2DC
  goto L_8029A308; // 8029A2E0
L_8029A2E4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8029A2E4
  W32(c->r[3]+0x00000018u,c->r[5]); // 8029A2E8
  cmps(c,0,(int32_t)c->r[0],0); // 8029A2EC
  if (crb(c,2)) { goto L_8029A304; } // 8029A2F0
  c->r[3]=0u+0x804C0000u; // 8029A2F4
  c->r[3]=c->r[3]+0xFFFFD180u; // 8029A2F8
  c->lr=0x8029A300u; f_8029D4B0(c); // 8029A2FC
L_8029A300:;
  IRQCHK(c); goto L_8029A300; // 8029A300
L_8029A304:;
  W32(c->r[3]+0x00000014u,c->r[5]); // 8029A304
L_8029A308:;
  c->r[3]=c->r[7]|c->r[7]; // 8029A308
L_8029A30C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A30C
  c->lr=c->r[0]; // 8029A310
  c->r[1]=c->r[1]+0x00000010u; // 8029A314
  return; // 8029A318
}

// fn_8029A31C
void f_8029A31C(Ctx* __restrict c) {
  trace_call(0x8029A31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A31C
  c->r[0]=c->lr; // 8029A320
  cmps(c,0,(int32_t)c->r[4],0); // 8029A324
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A32C
  c->r[31]=c->r[4]|c->r[4]; // 8029A330
  c->r[5]=c->r[31]|c->r[31]; // 8029A334
  if (crb(c,2)) { goto L_8029A340; } // 8029A338
  c->r[5]=c->r[4]+0x00000018u; // 8029A33C
L_8029A340:;
  cmps(c,0,(int32_t)c->r[5],0); // 8029A340
  if (!crb(c,2)) { goto L_8029A358; } // 8029A344
  c->r[3]=0u+0x804C0000u; // 8029A348
  c->r[3]=c->r[3]+0xFFFFCF9Cu; // 8029A34C
  c->lr=0x8029A354u; f_8029D4B0(c); // 8029A350
L_8029A354:;
  IRQCHK(c); goto L_8029A354; // 8029A354
L_8029A358:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8029A358
  cmpu(c,0,c->r[0],c->r[5]); // 8029A35C
  if (!crb(c,2)) { goto L_8029A36C; } // 8029A360
  c->r[0]=R32(c->r[5]+0x00000004u); // 8029A364
  W32(c->r[3]+0x00000014u,c->r[0]); // 8029A368
L_8029A36C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8029A36C
  cmpu(c,0,c->r[0],c->r[5]); // 8029A370
  if (!crb(c,2)) { goto L_8029A380; } // 8029A374
  c->r[0]=R32(c->r[5]+0x00000000u); // 8029A378
  W32(c->r[3]+0x00000018u,c->r[0]); // 8029A37C
L_8029A380:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 8029A380
  cmps(c,0,(int32_t)c->r[6],0); // 8029A384
  if (crb(c,2)) { goto L_8029A394; } // 8029A388
  c->r[0]=R32(c->r[5]+0x00000004u); // 8029A38C
  W32(c->r[6]+0x00000004u,c->r[0]); // 8029A390
L_8029A394:;
  c->r[6]=R32(c->r[5]+0x00000004u); // 8029A394
  cmps(c,0,(int32_t)c->r[6],0); // 8029A398
  if (crb(c,2)) { goto L_8029A3A8; } // 8029A39C
  c->r[0]=R32(c->r[5]+0x00000000u); // 8029A3A0
  W32(c->r[6]+0x00000000u,c->r[0]); // 8029A3A4
L_8029A3A8:;
  c->r[0]=0u+0x00000000u; // 8029A3A8
  cmps(c,0,(int32_t)c->r[4],0); // 8029A3AC
  W32(c->r[5]+0x00000004u,c->r[0]); // 8029A3B0
  c->r[6]=c->r[31]|c->r[31]; // 8029A3B4
  W32(c->r[5]+0x00000000u,c->r[0]); // 8029A3B8
  if (crb(c,2)) { goto L_8029A3C4; } // 8029A3BC
  c->r[6]=c->r[4]+0x00000018u; // 8029A3C0
L_8029A3C4:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 8029A3C4
  cmps(c,0,(int32_t)c->r[5],0); // 8029A3C8
  if (crb(c,2)) { goto L_8029A410; } // 8029A3CC
  c->r[0]=R32(c->r[6]+0x00000000u); // 8029A3D0
  cmps(c,0,(int32_t)c->r[0],0); // 8029A3D4
  if (!crb(c,2)) { goto L_8029A3E8; } // 8029A3D8
  c->r[0]=R32(c->r[6]+0x00000004u); // 8029A3DC
  cmps(c,0,(int32_t)c->r[0],0); // 8029A3E0
  if (crb(c,2)) { goto L_8029A3F8; } // 8029A3E4
L_8029A3E8:;
  c->r[3]=0u+0x804C0000u; // 8029A3E8
  c->r[3]=c->r[3]+0xFFFFD19Cu; // 8029A3EC
  c->lr=0x8029A3F4u; f_8029D4B0(c); // 8029A3F0
L_8029A3F4:;
  IRQCHK(c); goto L_8029A3F4; // 8029A3F4
L_8029A3F8:;
  W32(c->r[6]+0x00000000u,c->r[5]); // 8029A3F8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8029A3FC
  W32(c->r[6]+0x00000004u,c->r[0]); // 8029A400
  W32(c->r[5]+0x00000004u,c->r[6]); // 8029A404
  W32(c->r[3]+0x00000010u,c->r[6]); // 8029A408
  goto L_8029A434; // 8029A40C
L_8029A410:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8029A410
  W32(c->r[3]+0x00000010u,c->r[6]); // 8029A414
  cmps(c,0,(int32_t)c->r[0],0); // 8029A418
  if (crb(c,2)) { goto L_8029A430; } // 8029A41C
  c->r[3]=0u+0x804C0000u; // 8029A420
  c->r[3]=c->r[3]+0xFFFFD180u; // 8029A424
  c->lr=0x8029A42Cu; f_8029D4B0(c); // 8029A428
L_8029A42C:;
  IRQCHK(c); goto L_8029A42C; // 8029A42C
L_8029A430:;
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8029A430
L_8029A434:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8029A434
  c->r[4]=0u+0x00000000u; // 8029A438
  c->r[5]=0u+0x00000054u; // 8029A43C
  c->lr=0x8029A444u; f_8000443C(c); // 8029A440
  c->r[3]=R32(c->r[31]+0x00000010u); // 8029A444
  c->r[4]=0u+0x00000000u; // 8029A448
  c->r[5]=0u+0x000000D4u; // 8029A44C
  c->lr=0x8029A454u; f_8000443C(c); // 8029A450
  c->r[4]=0u+0x00000000u; // 8029A454
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029A458
  W32(c->r[31]+0x00000030u,c->r[4]); // 8029A45C
  c->r[0]=0u+0x00000001u; // 8029A460
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029A464
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029A468
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029A46C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8029A470
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029A474
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029A478
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029A47C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029A480
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029A484
  W32(c->r[3]+0x00000050u,c->r[4]); // 8029A488
  W32(c->r[31]+0x00000024u,c->r[4]); // 8029A48C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A490
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A494
  c->lr=c->r[0]; // 8029A498
  c->r[1]=c->r[1]+0x00000010u; // 8029A49C
  return; // 8029A4A0
}

// fn_8029A4A4
void f_8029A4A4(Ctx* __restrict c) {
  trace_call(0x8029A4A4u);
  c->r[4]=R32(c->r[3]+0x00000014u); // 8029A4A4
  cmps(c,0,(int32_t)c->r[4],0); // 8029A4A8
  if (crb(c,2)) { goto L_8029A4B4; } // 8029A4AC
  c->r[4]=c->r[4]+0xFFFFFFE8u; // 8029A4B0
L_8029A4B4:;
  c->r[5]=c->r[4]|c->r[4]; // 8029A4B4
L_8029A4B8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8029A4B8
  if (crb(c,2)) { goto L_8029A4E8; } // 8029A4BC
  c->r[3]=R32(c->r[4]+0x0000002Cu); // 8029A4C0
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 8029A4C4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8029A4C8
  if (!crb(c,0)) { goto L_8029A4D4; } // 8029A4CC
  c->r[5]=c->r[4]|c->r[4]; // 8029A4D0
L_8029A4D4:;
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 8029A4D4
  cmps(c,0,(int32_t)c->r[4],0); // 8029A4D8
  if (crb(c,2)) { IRQCHK(c); goto L_8029A4B8; } // 8029A4DC
  c->r[4]=c->r[4]+0xFFFFFFE8u; // 8029A4E0
  IRQCHK(c); goto L_8029A4B8; // 8029A4E4
L_8029A4E8:;
  c->r[3]=0u+0x00000000u; // 8029A4E8
  return; // 8029A4EC
}

// fn_8029A4F0
void f_8029A4F0(Ctx* __restrict c) {
  trace_call(0x8029A4F0u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8029A4F0
  return; // 8029A4F4
}

// fn_8029A4F8
void f_8029A4F8(Ctx* __restrict c) {
  trace_call(0x8029A4F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A4F8
  c->r[0]=c->lr; // 8029A4FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029A500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029A504
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029A508
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029A50C
  c->r[29]=c->r[3]|c->r[3]; // 8029A510
  c->r[0]=R32(c->r[3]+0x00000008u); // 8029A514
  cmps(c,0,(int32_t)c->r[0],0); // 8029A518
  if (!crb(c,2)) { goto L_8029A528; } // 8029A51C
  c->r[3]=0u+0x00000000u; // 8029A520
  goto L_8029A60C; // 8029A524
L_8029A528:;
  c->r[30]=0u+0x00000000u; // 8029A528
  c->r[31]=0u+0x00000000u; // 8029A52C
  goto L_8029A5FC; // 8029A530
L_8029A534:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8029A534
  c->r[3]=c->r[29]|c->r[29]; // 8029A538
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8029A53C
  c->ctr=c->r[12]; // 8029A540
  if (true) { c->lr=0x8029A548u; dispatch(c,c->ctr); } // 8029A544
  c->r[4]=R32(c->r[29]+0x00000008u); // 8029A548
  W32(c->r[4]+c->r[31],c->r[3]); // 8029A54C
  c->r[3]=R32(c->r[29]+0x00000008u); // 8029A550
  c->r[3]=R32(c->r[3]+c->r[31]); // 8029A554
  cmps(c,0,(int32_t)c->r[3],0); // 8029A558
  if (!crb(c,2)) { goto L_8029A57C; } // 8029A55C
  c->r[12]=R32(c->r[29]+0x00000000u); // 8029A560
  c->r[3]=c->r[29]|c->r[29]; // 8029A564
  c->r[12]=R32(c->r[12]+0x00000028u); // 8029A568
  c->ctr=c->r[12]; // 8029A56C
  if (true) { c->lr=0x8029A574u; dispatch(c,c->ctr); } // 8029A570
  c->r[3]=0u+0x00000000u; // 8029A574
  goto L_8029A60C; // 8029A578
L_8029A57C:;
  if (crb(c,2)) { goto L_8029A584; } // 8029A57C
  c->r[3]=c->r[3]+0x00000018u; // 8029A580
L_8029A584:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8029A584
  cmps(c,0,(int32_t)c->r[4],0); // 8029A588
  if (crb(c,2)) { goto L_8029A5D0; } // 8029A58C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8029A590
  cmps(c,0,(int32_t)c->r[0],0); // 8029A594
  if (!crb(c,2)) { goto L_8029A5A8; } // 8029A598
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029A59C
  cmps(c,0,(int32_t)c->r[0],0); // 8029A5A0
  if (crb(c,2)) { goto L_8029A5B8; } // 8029A5A4
L_8029A5A8:;
  c->r[3]=0u+0x804C0000u; // 8029A5A8
  c->r[3]=c->r[3]+0xFFFFCFB8u; // 8029A5AC
  c->lr=0x8029A5B4u; f_8029D4B0(c); // 8029A5B0
L_8029A5B4:;
  IRQCHK(c); goto L_8029A5B4; // 8029A5B4
L_8029A5B8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8029A5B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029A5BC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8029A5C0
  W32(c->r[4]+0x00000000u,c->r[3]); // 8029A5C4
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8029A5C8
  goto L_8029A5F4; // 8029A5CC
L_8029A5D0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8029A5D0
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8029A5D4
  cmps(c,0,(int32_t)c->r[0],0); // 8029A5D8
  if (crb(c,2)) { goto L_8029A5F0; } // 8029A5DC
  c->r[3]=0u+0x804C0000u; // 8029A5E0
  c->r[3]=c->r[3]+0xFFFFCF80u; // 8029A5E4
  c->lr=0x8029A5ECu; f_8029D4B0(c); // 8029A5E8
L_8029A5EC:;
  IRQCHK(c); goto L_8029A5EC; // 8029A5EC
L_8029A5F0:;
  W32(c->r[29]+0x00000010u,c->r[3]); // 8029A5F0
L_8029A5F4:;
  c->r[31]=c->r[31]+0x00000004u; // 8029A5F4
  c->r[30]=c->r[30]+0x00000001u; // 8029A5F8
L_8029A5FC:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 8029A5FC
  cmpu(c,0,c->r[30],c->r[0]); // 8029A600
  if (crb(c,0)) { IRQCHK(c); goto L_8029A534; } // 8029A604
  c->r[3]=0u+0x00000001u; // 8029A608
L_8029A60C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029A60C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029A610
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029A614
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029A618
  c->lr=c->r[0]; // 8029A61C
  c->r[1]=c->r[1]+0x00000020u; // 8029A620
  return; // 8029A624
}

// fn_8029A628
void f_8029A628(Ctx* __restrict c) {
  trace_call(0x8029A628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A628
  c->r[0]=c->lr; // 8029A62C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029A630
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029A634
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029A638
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029A63C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029A640
  c->r[28]=c->r[3]|c->r[3]; // 8029A644
  c->r[0]=R32(c->r[3]+0x00000008u); // 8029A648
  cmps(c,0,(int32_t)c->r[0],0); // 8029A64C
  if (crb(c,2)) { goto L_8029A6A4; } // 8029A650
  c->r[29]=0u+0x00000000u; // 8029A654
  c->r[30]=0u+0x00000000u; // 8029A658
  c->r[31]=0u+0x00000000u; // 8029A65C
  goto L_8029A698; // 8029A660
L_8029A664:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8029A664
  c->r[4]=R32(c->r[3]+c->r[30]); // 8029A668
  cmps(c,0,(int32_t)c->r[4],0); // 8029A66C
  if (crb(c,2)) { goto L_8029A690; } // 8029A670
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029A674
  c->r[3]=c->r[28]|c->r[28]; // 8029A678
  c->r[12]=R32(c->r[12]+0x00000030u); // 8029A67C
  c->ctr=c->r[12]; // 8029A680
  if (true) { c->lr=0x8029A688u; dispatch(c,c->ctr); } // 8029A684
  c->r[3]=R32(c->r[28]+0x00000008u); // 8029A688
  W32(c->r[3]+c->r[30],c->r[31]); // 8029A68C
L_8029A690:;
  c->r[30]=c->r[30]+0x00000004u; // 8029A690
  c->r[29]=c->r[29]+0x00000001u; // 8029A694
L_8029A698:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029A698
  cmpu(c,0,c->r[29],c->r[0]); // 8029A69C
  if (crb(c,0)) { IRQCHK(c); goto L_8029A664; } // 8029A6A0
L_8029A6A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029A6A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029A6A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029A6AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029A6B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029A6B4
  c->lr=c->r[0]; // 8029A6B8
  c->r[1]=c->r[1]+0x00000020u; // 8029A6BC
  return; // 8029A6C0
}

// fn_8029A6C4
void f_8029A6C4(Ctx* __restrict c) {
  trace_call(0x8029A6C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A6C4
  c->r[0]=c->lr; // 8029A6C8
  c->r[6]=0u+0x00000004u; // 8029A6CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8029A6D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8029A6D4
  c->r[31]=c->r[1]|c->r[1]; // 8029A6D8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8029A6DC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8029A6E0
  c->r[29]=0u+0x803D0000u; // 8029A6E4
  c->r[29]=c->r[29]+0x000034F8u; // 8029A6E8
  W32(c->r[1]+0x00000020u,c->r[28]); // 8029A6EC
  c->r[5]=c->r[29]|c->r[29]; // 8029A6F0
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 8029A6F4
  c->r[3]=0u+0x00000038u; // 8029A6F8
  c->r[4]=c->r[30]|c->r[30]; // 8029A6FC
  c->lr=0x8029A704u; f_8029C154(c); // 8029A700
  cmps(c,0,(int32_t)c->r[3],0); // 8029A704
  c->r[28]=c->r[3]|c->r[3]; // 8029A708
  if (crb(c,2)) { goto L_8029A778; } // 8029A70C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8029A710
  c->r[4]=c->r[30]|c->r[30]; // 8029A714
  c->r[5]=0u+0x00000001u; // 8029A718
  c->lr=0x8029A720u; f_80299660(c); // 8029A71C
  c->r[0]=0u+0x00000000u; // 8029A720
  c->r[3]=0u+0x804C0000u; // 8029A724
  W32(c->r[28]+0x00000018u,c->r[0]); // 8029A728
  c->r[3]=c->r[3]+0xFFFFD670u; // 8029A72C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8029A730
  W32(c->r[28]+0x00000020u,c->r[0]); // 8029A734
  W32(c->r[28]+0x00000000u,c->r[3]); // 8029A738
  W32(c->r[28]+0x00000024u,c->r[0]); // 8029A73C
  W32(c->r[28]+0x00000028u,c->r[0]); // 8029A740
  W32(c->r[28]+0x0000002Cu,c->r[0]); // 8029A744
  W32(c->r[28]+0x00000030u,c->r[0]); // 8029A748
  W32(c->r[28]+0x00000034u,c->r[0]); // 8029A74C
  goto L_8029A778; // 8029A750
  c->r[3]=c->r[28]|c->r[28]; // 8029A754
  c->r[4]=c->r[30]|c->r[30]; // 8029A758
  c->r[5]=c->r[29]|c->r[29]; // 8029A75C
  c->r[6]=0u+0x00000004u; // 8029A760
  c->lr=0x8029A768u; f_8029C1D4(c); // 8029A764
  c->r[3]=0u+0x00000000u; // 8029A768
  c->r[4]=0u+0x00000000u; // 8029A76C
  c->r[5]=0u+0x00000000u; // 8029A770
  c->lr=0x8029A778u; f_801E96FC(c); // 8029A774
L_8029A778:;
  cmps(c,0,(int32_t)c->r[28],0); // 8029A778
  if (!crb(c,2)) { goto L_8029A79C; } // 8029A77C
  c->r[3]=0u+0x803D0000u; // 8029A780
  c->r[4]=0u+0xFFFFFFFDu; // 8029A784
  c->r[3]=c->r[3]+0x000034F8u; // 8029A788
  c->r[3]=c->r[3]+0x00000014u; // 8029A78C
  c->lr=0x8029A794u; f_8029D638(c); // 8029A790
  c->r[28]=0u+0x00000000u; // 8029A794
  goto L_8029A7E0; // 8029A798
L_8029A79C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029A79C
  c->r[3]=c->r[28]|c->r[28]; // 8029A7A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8029A7A4
  c->ctr=c->r[12]; // 8029A7A8
  if (true) { c->lr=0x8029A7B0u; dispatch(c,c->ctr); } // 8029A7AC
  cmps(c,0,(int32_t)c->r[3],0); // 8029A7B0
  if (!crb(c,2)) { goto L_8029A7E0; } // 8029A7B4
  cmps(c,0,(int32_t)c->r[28],0); // 8029A7B8
  if (crb(c,2)) { goto L_8029A7DC; } // 8029A7BC
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029A7C0
  c->r[0]=0u+0x00000001u; // 8029A7C4
  c->r[3]=c->r[28]|c->r[28]; // 8029A7C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029A7CC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8029A7D0
  c->ctr=c->r[12]; // 8029A7D4
  if (true) { c->lr=0x8029A7DCu; dispatch(c,c->ctr); } // 8029A7D8
L_8029A7DC:;
  c->r[28]=0u+0x00000000u; // 8029A7DC
L_8029A7E0:;
  c->r[10]=c->r[31]|c->r[31]; // 8029A7E0
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8029A7E4
  c->r[30]=R32(c->r[10]+0x00000028u); // 8029A7E8
  c->r[3]=c->r[28]|c->r[28]; // 8029A7EC
  c->r[29]=R32(c->r[10]+0x00000024u); // 8029A7F0
  c->r[28]=R32(c->r[10]+0x00000020u); // 8029A7F4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029A7F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029A7FC
  c->r[1]=c->r[10]|c->r[10]; // 8029A800
  c->lr=c->r[0]; // 8029A804
  return; // 8029A808
}

// fn_8029A80C
void f_8029A80C(Ctx* __restrict c) {
  trace_call(0x8029A80Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8029A80C
  if (crb(c,2)) return; // 8029A810
  c->r[12]=R32(c->r[4]+0x00000000u); // 8029A814
  c->r[3]=c->r[4]|c->r[4]; // 8029A818
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029A81C
  c->ctr=c->r[12]; // 8029A820
  if (true) { dispatch(c,c->ctr); return; } // 8029A824
  return; // 8029A828
}

// fn_8029A82C
void f_8029A82C(Ctx* __restrict c) {
  trace_call(0x8029A82Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A82C
  c->r[0]=c->lr; // 8029A830
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029A834
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029A838
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029A83C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029A840
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029A844
  c->r[28]=c->r[3]|c->r[3]; // 8029A848
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029A84C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8029A850
  c->ctr=c->r[12]; // 8029A854
  if (true) { c->lr=0x8029A85Cu; dispatch(c,c->ctr); } // 8029A858
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029A85C
  c->r[31]=0u+0x803D0000u; // 8029A860
  c->r[6]=c->r[3]|c->r[3]; // 8029A864
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8029A868
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8029A86C
  c->r[31]=c->r[31]+0x000034F8u; // 8029A870
  c->r[5]=c->r[31]+0x00000062u; // 8029A874
  c->lr=0x8029A87Cu; f_8029D740(c); // 8029A878
  cmps(c,0,(int32_t)c->r[3],0); // 8029A87C
  W32(c->r[28]+0x00000020u,c->r[3]); // 8029A880
  if (!crb(c,2)) { goto L_8029A89C; } // 8029A884
  c->r[3]=c->r[31]+0x0000006Cu; // 8029A888
  c->r[4]=0u+0xFFFFFFFDu; // 8029A88C
  c->lr=0x8029A894u; f_8029D638(c); // 8029A890
  c->r[3]=0u+0x00000000u; // 8029A894
  goto L_8029A8DC; // 8029A898
L_8029A89C:;
  c->r[29]=0u+0x00000000u; // 8029A89C
  c->r[31]=0u+0x00000000u; // 8029A8A0
  c->r[30]=0u+0x00000000u; // 8029A8A4
  goto L_8029A8CC; // 8029A8A8
L_8029A8AC:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8029A8AC
  c->r[0]=R32(c->r[28]+0x00000020u); // 8029A8B0
  c->r[3]=R32(c->r[3]+c->r[30]); // 8029A8B4
  c->r[4]=c->r[0]+c->r[31]; // 8029A8B8
  c->lr=0x8029A8C0u; f_802998B8(c); // 8029A8BC
  c->r[31]=c->r[31]+0x0000000Cu; // 8029A8C0
  c->r[30]=c->r[30]+0x00000004u; // 8029A8C4
  c->r[29]=c->r[29]+0x00000001u; // 8029A8C8
L_8029A8CC:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029A8CC
  cmpu(c,0,c->r[29],c->r[0]); // 8029A8D0
  if (crb(c,0)) { IRQCHK(c); goto L_8029A8AC; } // 8029A8D4
  c->r[3]=0u+0x00000001u; // 8029A8D8
L_8029A8DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029A8DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029A8E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029A8E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029A8E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029A8EC
  c->lr=c->r[0]; // 8029A8F0
  c->r[1]=c->r[1]+0x00000020u; // 8029A8F4
  return; // 8029A8F8
}

// fn_8029A8FC
void f_8029A8FC(Ctx* __restrict c) {
  trace_call(0x8029A8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A8FC
  c->r[0]=c->lr; // 8029A900
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A908
  c->r[31]=c->r[3]|c->r[3]; // 8029A90C
  c->r[4]=R32(c->r[3]+0x00000020u); // 8029A910
  cmps(c,0,(int32_t)c->r[4],0); // 8029A914
  if (crb(c,2)) { goto L_8029A92C; } // 8029A918
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8029A91C
  c->lr=0x8029A924u; f_8029D794(c); // 8029A920
  c->r[0]=0u+0x00000000u; // 8029A924
  W32(c->r[31]+0x00000020u,c->r[0]); // 8029A928
L_8029A92C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A92C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A930
  c->lr=c->r[0]; // 8029A934
  c->r[1]=c->r[1]+0x00000010u; // 8029A938
  return; // 8029A93C
}

// fn_8029A940
void f_8029A940(Ctx* __restrict c) {
  trace_call(0x8029A940u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8029A940
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8029A944
  c->r[3]=R32(c->r[3]+c->r[0]); // 8029A948
  return; // 8029A94C
}

// fn_8029A950
void f_8029A950(Ctx* __restrict c) {
  trace_call(0x8029A950u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8029A950
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8029A954
  c->r[3]=R32(c->r[3]+c->r[0]); // 8029A958
  return; // 8029A95C
}

// fn_8029A960
void f_8029A960(Ctx* __restrict c) {
  trace_call(0x8029A960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A960
  c->r[0]=c->lr; // 8029A964
  cmps(c,0,(int32_t)c->r[3],0); // 8029A968
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A96C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A970
  c->r[31]=c->r[4]|c->r[4]; // 8029A974
  W32(c->r[1]+0x00000008u,c->r[30]); // 8029A978
  c->r[30]=c->r[3]|c->r[3]; // 8029A97C
  if (crb(c,2)) { goto L_8029A9A0; } // 8029A980
  c->r[4]=0u+0x00000000u; // 8029A984
  c->lr=0x8029A98Cu; f_802996B0(c); // 8029A988
  cmps(c,0,(int32_t)c->r[31],0); // 8029A98C
  if (!crb(c,1)) { goto L_8029A9A0; } // 8029A990
  c->r[3]=c->r[30]|c->r[30]; // 8029A994
  c->r[4]=0u+0x0000003Cu; // 8029A998
  c->lr=0x8029A9A0u; f_8029C224(c); // 8029A99C
L_8029A9A0:;
  c->r[3]=c->r[30]|c->r[30]; // 8029A9A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029A9A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8029A9A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029A9AC
  c->lr=c->r[0]; // 8029A9B0
  c->r[1]=c->r[1]+0x00000010u; // 8029A9B4
  return; // 8029A9B8
}

// fn_8029A9BC
void f_8029A9BC(Ctx* __restrict c) {
  trace_call(0x8029A9BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029A9BC
  c->r[0]=c->lr; // 8029A9C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029A9C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029A9C8
  c->r[31]=c->r[3]|c->r[3]; // 8029A9CC
  c->lr=0x8029A9D4u; f_802996F4(c); // 8029A9D0
  cmps(c,0,(int32_t)c->r[3],0); // 8029A9D4
  if (!crb(c,2)) { goto L_8029A9E4; } // 8029A9D8
  c->r[3]=0u+0x00000000u; // 8029A9DC
  goto L_8029AA3C; // 8029A9E0
L_8029A9E4:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8029A9E4
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 8029A9E8
  cmps(c,0,(int32_t)c->r[0],3); // 8029A9EC
  if (crb(c,2)) { goto L_8029AA18; } // 8029A9F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8029A9F4
  c->r[4]=0u+0x00000001u; // 8029A9F8
  c->r[5]=0u+0x00000004u; // 8029A9FC
  c->lr=0x8029AA04u; f_8029F56C(c); // 8029AA00
  cmps(c,0,(int32_t)c->r[3],0); // 8029AA04
  W32(c->r[31]+0x00000020u,c->r[3]); // 8029AA08
  if (!crb(c,2)) { goto L_8029AA18; } // 8029AA0C
  c->r[3]=0u+0x00000000u; // 8029AA10
  goto L_8029AA3C; // 8029AA14
L_8029AA18:;
  c->r[5]=0u+0x00000000u; // 8029AA18
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8029AA1C
  W32(c->r[31]+0x00000034u,c->r[5]); // 8029AA20
  c->r[0]=0u+0x00000001u; // 8029AA24
  c->r[3]=0u+0x00000001u; // 8029AA28
  W32(c->r[31]+0x00000038u,c->r[5]); // 8029AA2C
  W32(c->r[4]+0x00000048u,c->r[0]); // 8029AA30
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8029AA34
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 8029AA38
L_8029AA3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029AA3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029AA40
  c->lr=c->r[0]; // 8029AA44
  c->r[1]=c->r[1]+0x00000010u; // 8029AA48
  return; // 8029AA4C
}

// fn_8029AA50
void f_8029AA50(Ctx* __restrict c) {
  trace_call(0x8029AA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029AA50
  c->r[0]=c->lr; // 8029AA54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029AA58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029AA5C
  c->r[31]=c->r[3]|c->r[3]; // 8029AA60
  c->r[0]=R32(c->r[3]+0x00000020u); // 8029AA64
  cmps(c,0,(int32_t)c->r[0],0); // 8029AA68
  if (crb(c,2)) { goto L_8029AA80; } // 8029AA6C
  c->r[3]=c->r[0]|c->r[0]; // 8029AA70
  c->lr=0x8029AA78u; f_8029E23C(c); // 8029AA74
  c->r[0]=0u+0x00000000u; // 8029AA78
  W32(c->r[31]+0x00000020u,c->r[0]); // 8029AA7C
L_8029AA80:;
  c->r[3]=c->r[31]|c->r[31]; // 8029AA80
  c->lr=0x8029AA88u; f_80299830(c); // 8029AA84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029AA88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029AA8C
  c->lr=c->r[0]; // 8029AA90
  c->r[1]=c->r[1]+0x00000010u; // 8029AA94
  return; // 8029AA98
}

// fn_8029AA9C
void f_8029AA9C(Ctx* __restrict c) {
  trace_call(0x8029AA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029AA9C
  c->r[0]=c->lr; // 8029AAA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029AAA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029AAA8
  c->r[31]=c->r[3]|c->r[3]; // 8029AAAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029AAB0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8029AAB4
  c->r[4]=R32(c->r[4]+0x00000004u); // 8029AAB8
  c->r[0]=rotl(c->r[4],29)&0x00000001u; // 8029AABC
  cmps(c,0,(int32_t)c->r[0],1); // 8029AAC0
  if (!crb(c,2)) { goto L_8029AAE4; } // 8029AAC4
  c->r[3]=R32(c->r[3]+0x00000018u); // 8029AAC8
  cmps(c,0,(int32_t)c->r[3],0); // 8029AACC
  if (crb(c,2)) { goto L_8029AB08; } // 8029AAD0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AAD4
  c->r[4]=0u+0x00000001u; // 8029AAD8
  c->lr=0x8029AAE0u; f_80295BEC(c); // 8029AADC
  goto L_8029AB08; // 8029AAE0
L_8029AAE4:;
  c->r[0]=rotl(c->r[4],28)&0x00000001u; // 8029AAE4
  cmps(c,0,(int32_t)c->r[0],1); // 8029AAE8
  if (!crb(c,2)) { goto L_8029AB08; } // 8029AAEC
  c->r[3]=R32(c->r[3]+0x00000018u); // 8029AAF0
  cmps(c,0,(int32_t)c->r[3],0); // 8029AAF4
  if (crb(c,2)) { goto L_8029AB08; } // 8029AAF8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AAFC
  c->r[4]=0u+0x00000000u; // 8029AB00
  c->lr=0x8029AB08u; f_80295BEC(c); // 8029AB04
L_8029AB08:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AB08
  c->r[3]=R32(c->r[3]+0x00000004u); // 8029AB0C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8029AB10
  cmps(c,0,(int32_t)c->r[0],1); // 8029AB14
  if (!crb(c,2)) { goto L_8029AD74; } // 8029AB18
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AB1C
  cmps(c,0,(int32_t)c->r[3],0); // 8029AB20
  if (crb(c,2)) { goto L_8029AB94; } // 8029AB24
  if (crb(c,2)) { goto L_8029AB44; } // 8029AB28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029AB2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029AB30
  c->ctr=c->r[12]; // 8029AB34
  if (true) { c->lr=0x8029AB3Cu; dispatch(c,c->ctr); } // 8029AB38
  c->r[0]=0u+0x00000000u; // 8029AB3C
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029AB40
L_8029AB44:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029AB44
  cmps(c,0,(int32_t)c->r[3],0); // 8029AB48
  if (crb(c,2)) { goto L_8029AB5C; } // 8029AB4C
  c->lr=0x8029AB54u; f_8029D8C0(c); // 8029AB50
  c->r[0]=0u+0x00000000u; // 8029AB54
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029AB58
L_8029AB5C:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029AB5C
  cmps(c,0,(int32_t)c->r[3],0); // 8029AB60
  if (crb(c,2)) { goto L_8029AB6C; } // 8029AB64
  c->lr=0x8029AB6Cu; f_8029E24C(c); // 8029AB68
L_8029AB6C:;
  c->r[4]=0u+0x00000000u; // 8029AB6C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AB70
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029AB74
  c->r[0]=0u+0x00000001u; // 8029AB78
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029AB7C
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029AB80
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AB84
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029AB88
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AB8C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AB90
L_8029AB94:;
  c->r[30]=R32(c->r[31]+0x00000010u); // 8029AB94
  c->lr=0x8029AB9Cu; f_802998D4(c); // 8029AB98
  c->r[4]=c->r[3]|c->r[3]; // 8029AB9C
  c->r[3]=R32(c->r[31]+0x00000014u); // 8029ABA0
  c->lr=0x8029ABA8u; f_8029D7EC(c); // 8029ABA4
  cmps(c,0,(int32_t)c->r[3],0); // 8029ABA8
  W32(c->r[31]+0x00000028u,c->r[3]); // 8029ABAC
  c->r[5]=c->r[3]|c->r[3]; // 8029ABB0
  if (!crb(c,2)) { goto L_8029AC30; } // 8029ABB4
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029ABB8
  cmps(c,0,(int32_t)c->r[3],0); // 8029ABBC
  if (crb(c,2)) { goto L_8029ABDC; } // 8029ABC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029ABC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029ABC8
  c->ctr=c->r[12]; // 8029ABCC
  if (true) { c->lr=0x8029ABD4u; dispatch(c,c->ctr); } // 8029ABD0
  c->r[0]=0u+0x00000000u; // 8029ABD4
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029ABD8
L_8029ABDC:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029ABDC
  cmps(c,0,(int32_t)c->r[3],0); // 8029ABE0
  if (crb(c,2)) { goto L_8029ABF4; } // 8029ABE4
  c->lr=0x8029ABECu; f_8029D8C0(c); // 8029ABE8
  c->r[0]=0u+0x00000000u; // 8029ABEC
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029ABF0
L_8029ABF4:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029ABF4
  cmps(c,0,(int32_t)c->r[3],0); // 8029ABF8
  if (crb(c,2)) { goto L_8029AC04; } // 8029ABFC
  c->lr=0x8029AC04u; f_8029E24C(c); // 8029AC00
L_8029AC04:;
  c->r[4]=0u+0x00000000u; // 8029AC04
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AC08
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029AC0C
  c->r[0]=0u+0x00000001u; // 8029AC10
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029AC14
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029AC18
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AC1C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029AC20
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AC24
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AC28
  goto L_8029AED0; // 8029AC2C
L_8029AC30:;
  c->r[0]=R32(c->r[30]+0x00000090u); // 8029AC30
  c->r[3]=c->r[31]|c->r[31]; // 8029AC34
  c->r[9]=c->r[31]+0x0000002Cu; // 8029AC38
  W32(c->r[1]+0x00000008u,c->r[0]); // 8029AC3C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8029AC40
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8029AC44
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8029AC48
  c->r[6]=R32(c->r[31]+0x00000020u); // 8029AC4C
  c->r[7]=R32(c->r[30]+0x00000000u); // 8029AC50
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029AC54
  c->r[8]=R32(c->r[31]+0x00000024u); // 8029AC58
  c->r[10]=R32(c->r[30]+0x0000008Cu); // 8029AC5C
  c->ctr=c->r[12]; // 8029AC60
  if (true) { c->lr=0x8029AC68u; dispatch(c,c->ctr); } // 8029AC64
  cmps(c,0,(int32_t)c->r[3],0); // 8029AC68
  W32(c->r[31]+0x00000018u,c->r[3]); // 8029AC6C
  if (!crb(c,2)) { goto L_8029ACE4; } // 8029AC70
  if (crb(c,2)) { goto L_8029AC90; } // 8029AC74
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029AC78
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029AC7C
  c->ctr=c->r[12]; // 8029AC80
  if (true) { c->lr=0x8029AC88u; dispatch(c,c->ctr); } // 8029AC84
  c->r[0]=0u+0x00000000u; // 8029AC88
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029AC8C
L_8029AC90:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029AC90
  cmps(c,0,(int32_t)c->r[3],0); // 8029AC94
  if (crb(c,2)) { goto L_8029ACA8; } // 8029AC98
  c->lr=0x8029ACA0u; f_8029D8C0(c); // 8029AC9C
  c->r[0]=0u+0x00000000u; // 8029ACA0
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029ACA4
L_8029ACA8:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029ACA8
  cmps(c,0,(int32_t)c->r[3],0); // 8029ACAC
  if (crb(c,2)) { goto L_8029ACB8; } // 8029ACB0
  c->lr=0x8029ACB8u; f_8029E24C(c); // 8029ACB4
L_8029ACB8:;
  c->r[4]=0u+0x00000000u; // 8029ACB8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029ACBC
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029ACC0
  c->r[0]=0u+0x00000001u; // 8029ACC4
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029ACC8
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029ACCC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029ACD0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029ACD4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029ACD8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029ACDC
  goto L_8029AED0; // 8029ACE0
L_8029ACE4:;
  c->r[3]=c->r[31]|c->r[31]; // 8029ACE4
  c->lr=0x8029ACECu; f_8029B048(c); // 8029ACE8
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029ACEC
  cmps(c,0,(int32_t)c->r[3],0); // 8029ACF0
  if (crb(c,2)) { goto L_8029AD58; } // 8029ACF4
  c->r[30]=R32(c->r[31]+0x00000010u); // 8029ACF8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029ACFC
  c->r[4]=R32(c->r[30]+0x000000B4u); // 8029AD00
  c->r[5]=R32(c->r[30]+0x000000B8u); // 8029AD04
  c->lr=0x8029AD0Cu; f_80296124(c); // 8029AD08
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD0C
  c->r[4]=c->r[30]+0x000000BCu; // 8029AD10
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD14
  c->lr=0x8029AD1Cu; f_80296130(c); // 8029AD18
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD1C
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 8029AD20
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD24
  c->lr=0x8029AD2Cu; f_80295FCC(c); // 8029AD28
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD2C
  c->r[4]=R32(c->r[30]+0x000000A0u); // 8029AD30
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD34
  c->r[5]=R32(c->r[30]+0x000000A4u); // 8029AD38
  c->lr=0x8029AD40u; f_80295FD4(c); // 8029AD3C
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD40
  c->r[4]=R32(c->r[30]+0x000000A8u); // 8029AD44
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD48
  c->r[5]=R32(c->r[30]+0x000000ACu); // 8029AD4C
  c->r[6]=R32(c->r[30]+0x000000B0u); // 8029AD50
  c->lr=0x8029AD58u; f_802960C4(c); // 8029AD54
L_8029AD58:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD58
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD5C
  c->lr=0x8029AD64u; f_80295294(c); // 8029AD60
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AD64
  c->r[0]=0u+0x00000002u; // 8029AD68
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AD6C
  goto L_8029AED0; // 8029AD70
L_8029AD74:;
  c->r[0]=rotl(c->r[3],31)&0x00000001u; // 8029AD74
  cmps(c,0,(int32_t)c->r[0],1); // 8029AD78
  if (!crb(c,2)) { goto L_8029AE24; } // 8029AD7C
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD80
  cmps(c,0,(int32_t)c->r[3],0); // 8029AD84
  if (crb(c,2)) { goto L_8029AED0; } // 8029AD88
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AD8C
  c->lr=0x8029AD94u; f_80295C48(c); // 8029AD90
  cmps(c,0,(int32_t)c->r[3],1); // 8029AD94
  if (!crb(c,2)) { goto L_8029AE14; } // 8029AD98
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AD9C
  cmps(c,0,(int32_t)c->r[3],0); // 8029ADA0
  if (crb(c,2)) { goto L_8029ADC0; } // 8029ADA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029ADA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029ADAC
  c->ctr=c->r[12]; // 8029ADB0
  if (true) { c->lr=0x8029ADB8u; dispatch(c,c->ctr); } // 8029ADB4
  c->r[0]=0u+0x00000000u; // 8029ADB8
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029ADBC
L_8029ADC0:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029ADC0
  cmps(c,0,(int32_t)c->r[3],0); // 8029ADC4
  if (crb(c,2)) { goto L_8029ADD8; } // 8029ADC8
  c->lr=0x8029ADD0u; f_8029D8C0(c); // 8029ADCC
  c->r[0]=0u+0x00000000u; // 8029ADD0
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029ADD4
L_8029ADD8:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029ADD8
  cmps(c,0,(int32_t)c->r[3],0); // 8029ADDC
  if (crb(c,2)) { goto L_8029ADE8; } // 8029ADE0
  c->lr=0x8029ADE8u; f_8029E24C(c); // 8029ADE4
L_8029ADE8:;
  c->r[4]=0u+0x00000000u; // 8029ADE8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029ADEC
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029ADF0
  c->r[0]=0u+0x00000001u; // 8029ADF4
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029ADF8
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029ADFC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AE00
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029AE04
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AE08
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AE0C
  goto L_8029AED0; // 8029AE10
L_8029AE14:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AE14
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AE18
  c->lr=0x8029AE20u; f_80295B10(c); // 8029AE1C
  goto L_8029AED0; // 8029AE20
L_8029AE24:;
  c->r[0]=rotl(c->r[3],30)&0x00000001u; // 8029AE24
  cmps(c,0,(int32_t)c->r[0],1); // 8029AE28
  if (!crb(c,2)) { goto L_8029AED0; } // 8029AE2C
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AE30
  cmps(c,0,(int32_t)c->r[3],0); // 8029AE34
  if (crb(c,2)) { goto L_8029AED0; } // 8029AE38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AE3C
  c->lr=0x8029AE44u; f_80295C48(c); // 8029AE40
  cmps(c,0,(int32_t)c->r[3],1); // 8029AE44
  if (!crb(c,2)) { goto L_8029AEC4; } // 8029AE48
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AE4C
  cmps(c,0,(int32_t)c->r[3],0); // 8029AE50
  if (crb(c,2)) { goto L_8029AE70; } // 8029AE54
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029AE58
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029AE5C
  c->ctr=c->r[12]; // 8029AE60
  if (true) { c->lr=0x8029AE68u; dispatch(c,c->ctr); } // 8029AE64
  c->r[0]=0u+0x00000000u; // 8029AE68
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029AE6C
L_8029AE70:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029AE70
  cmps(c,0,(int32_t)c->r[3],0); // 8029AE74
  if (crb(c,2)) { goto L_8029AE88; } // 8029AE78
  c->lr=0x8029AE80u; f_8029D8C0(c); // 8029AE7C
  c->r[0]=0u+0x00000000u; // 8029AE80
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029AE84
L_8029AE88:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029AE88
  cmps(c,0,(int32_t)c->r[3],0); // 8029AE8C
  if (crb(c,2)) { goto L_8029AE98; } // 8029AE90
  c->lr=0x8029AE98u; f_8029E24C(c); // 8029AE94
L_8029AE98:;
  c->r[4]=0u+0x00000000u; // 8029AE98
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AE9C
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029AEA0
  c->r[0]=0u+0x00000001u; // 8029AEA4
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029AEA8
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029AEAC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AEB0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029AEB4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AEB8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AEBC
  goto L_8029AED0; // 8029AEC0
L_8029AEC4:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AEC4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AEC8
  c->lr=0x8029AED0u; f_80295B84(c); // 8029AECC
L_8029AED0:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AED0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029AED4
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8029AED8
  cmps(c,0,(int32_t)c->r[0],1); // 8029AEDC
  if (!crb(c,2)) { goto L_8029AEEC; } // 8029AEE0
  c->r[3]=c->r[31]|c->r[31]; // 8029AEE4
  c->lr=0x8029AEECu; f_8029B048(c); // 8029AEE8
L_8029AEEC:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AEEC
  cmps(c,0,(int32_t)c->r[3],0); // 8029AEF0
  if (crb(c,2)) { goto L_8029AF80; } // 8029AEF4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AEF8
  c->lr=0x8029AF00u; f_80296138(c); // 8029AEFC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8029AF00
  cmps(c,0,(int32_t)c->r[0],0); // 8029AF04
  if (!crb(c,2)) { goto L_8029AF80; } // 8029AF08
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AF0C
  cmps(c,0,(int32_t)c->r[3],0); // 8029AF10
  if (crb(c,2)) { goto L_8029AF30; } // 8029AF14
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029AF18
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029AF1C
  c->ctr=c->r[12]; // 8029AF20
  if (true) { c->lr=0x8029AF28u; dispatch(c,c->ctr); } // 8029AF24
  c->r[0]=0u+0x00000000u; // 8029AF28
  W32(c->r[31]+0x00000018u,c->r[0]); // 8029AF2C
L_8029AF30:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029AF30
  cmps(c,0,(int32_t)c->r[3],0); // 8029AF34
  if (crb(c,2)) { goto L_8029AF48; } // 8029AF38
  c->lr=0x8029AF40u; f_8029D8C0(c); // 8029AF3C
  c->r[0]=0u+0x00000000u; // 8029AF40
  W32(c->r[31]+0x00000028u,c->r[0]); // 8029AF44
L_8029AF48:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029AF48
  cmps(c,0,(int32_t)c->r[3],0); // 8029AF4C
  if (crb(c,2)) { goto L_8029AF58; } // 8029AF50
  c->lr=0x8029AF58u; f_8029E24C(c); // 8029AF54
L_8029AF58:;
  c->r[4]=0u+0x00000000u; // 8029AF58
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AF5C
  W32(c->r[31]+0x00000034u,c->r[4]); // 8029AF60
  c->r[0]=0u+0x00000001u; // 8029AF64
  W32(c->r[31]+0x00000038u,c->r[4]); // 8029AF68
  W32(c->r[3]+0x00000048u,c->r[0]); // 8029AF6C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AF70
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8029AF74
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8029AF78
  W32(c->r[3]+0x00000000u,c->r[0]); // 8029AF7C
L_8029AF80:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8029AF80
  cmps(c,0,(int32_t)c->r[4],0); // 8029AF84
  if (crb(c,2)) { goto L_8029AFB0; } // 8029AF88
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8029AF8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8029AF90
  cmpu(c,0,c->r[0],0x00000001u); // 8029AF94
  if (crb(c,1)) { goto L_8029AFB0; } // 8029AF98
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8029AF9C
  c->lr=0x8029AFA4u; f_80295294(c); // 8029AFA0
  c->r[3]=R32(c->r[31]+0x00000018u); // 8029AFA4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029AFA8
  c->lr=0x8029AFB0u; f_80296138(c); // 8029AFAC
L_8029AFB0:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8029AFB0
  c->r[0]=0u-c->r[3]; // 8029AFB4
  c->r[0]=c->r[0]|c->r[3]; // 8029AFB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8029AFBC
  cmps(c,0,(int32_t)c->r[0],1); // 8029AFC0
  if (!crb(c,2)) { goto L_8029B00C; } // 8029AFC4
  c->r[0]=R32(c->r[31]+0x00000030u); // 8029AFC8
  cmps(c,0,(int32_t)c->r[0],0); // 8029AFCC
  if (!crb(c,2)) { goto L_8029B00C; } // 8029AFD0
  c->r[30]=0u+0x00000000u; // 8029AFD4
L_8029AFD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8029AFD8
  c->lr=0x8029AFE0u; f_8029B454(c); // 8029AFDC
  c->r[3]=c->r[31]|c->r[31]; // 8029AFE0
  c->lr=0x8029AFE8u; f_8029B550(c); // 8029AFE4
  c->r[30]=c->r[30]+0x00000001u; // 8029AFE8
  cmpu(c,0,c->r[30],0x0000000Au); // 8029AFEC
  if (crb(c,0)) { IRQCHK(c); goto L_8029AFD8; } // 8029AFF0
  c->r[3]=R32(c->r[31]+0x00000020u); // 8029AFF4
  c->r[4]=0u+0x00000001u; // 8029AFF8
  c->lr=0x8029B000u; f_8029E28C(c); // 8029AFFC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8029B000
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8029B004
  W32(c->r[4]+0x00000050u,c->r[0]); // 8029B008
L_8029B00C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029B00C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029B010
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029B014
  c->lr=c->r[0]; // 8029B018
  c->r[1]=c->r[1]+0x00000020u; // 8029B01C
  return; // 8029B020
}

// fn_8029B024
void f_8029B024(Ctx* __restrict c) {
  trace_call(0x8029B024u);
  c->r[3]=c->r[4]|c->r[4]; // 8029B024
  c->r[4]=c->r[5]|c->r[5]; // 8029B028
  c->r[5]=c->r[6]|c->r[6]; // 8029B02C
  c->r[6]=c->r[7]|c->r[7]; // 8029B030
  c->r[7]=c->r[8]|c->r[8]; // 8029B034
  c->r[8]=c->r[9]|c->r[9]; // 8029B038
  c->r[9]=c->r[10]|c->r[10]; // 8029B03C
  c->r[10]=R32(c->r[1]+0x00000008u); // 8029B040
  f_8029BE88(c); return; // 8029B044
}

// fn_8029B048
void f_8029B048(Ctx* __restrict c) {
  trace_call(0x8029B048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B048
  c->r[0]=c->lr; // 8029B04C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029B050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029B054
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029B058
  c->r[30]=c->r[3]|c->r[3]; // 8029B05C
  c->r[4]=R32(c->r[3]+0x00000018u); // 8029B060
  cmps(c,0,(int32_t)c->r[4],0); // 8029B064
  if (crb(c,2)) { goto L_8029B43C; } // 8029B068
  c->r[31]=R32(c->r[3]+0x00000010u); // 8029B06C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8029B070
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B074
  c->lr=0x8029B07Cu; f_80295C5C(c); // 8029B078
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B07C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B080
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B084
  c->lr=0x8029B08Cu; f_80295D3C(c); // 8029B088
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B08C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B090
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B094
  c->lr=0x8029B09Cu; f_80295F9C(c); // 8029B098
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B09C
  c->r[3]=0u+0x55550000u; // 8029B0A0
  c->r[4]=c->r[3]+0x00005556u; // 8029B0A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8029B0A8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8029B0AC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8029B0B0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8029B0B4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 8029B0B8
  c->r[0]=c->r[3]+c->r[0]; cr0(c,c->r[0]); // 8029B0BC
  if (!crb(c,2)) { goto L_8029B0D8; } // 8029B0C0
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B0C4
  c->r[0]=0u+0xFFFFFC40u; // 8029B0C8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B0CC
  W32(c->r[3]+0x00000178u,c->r[0]); // 8029B0D0
  goto L_8029B108; // 8029B0D4
L_8029B0D8:;
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8029B0D8
  c->r[5]=0u+0x000003C0u; // 8029B0DC
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B0E0
  c->r[6]=0u+0xFFFFFC40u; // 8029B0E4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8029B0E8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B0EC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8029B0F0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8029B0F4
  c->r[0]=c->r[4]+c->r[0]; // 8029B0F8
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[0]); // 8029B0FC
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 8029B100
  W32(c->r[3]+0x00000178u,c->r[0]); // 8029B104
L_8029B108:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8029B108
  c->r[4]=0u+0x00000040u; // 8029B10C
  c->r[5]=0u+0x0000007Fu; // 8029B110
  cmpu(c,0,c->r[0],0x00000001u); // 8029B114
  if (!crb(c,2)) { goto L_8029B3DC; } // 8029B118
  {uint32_t ea=c->r[2]+0xFFFFCE50u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B11C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B120
  fcmp(c,0,c->f[1],c->f[0]); // 8029B124
  if (!crb(c,2)) { goto L_8029B15C; } // 8029B128
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B12C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B130
  if (!crb(c,2)) { goto L_8029B15C; } // 8029B134
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B138
  fcmp(c,0,c->f[1],c->f[0]); // 8029B13C
  if (!crb(c,2)) { goto L_8029B15C; } // 8029B140
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B144
  fcmp(c,0,c->f[1],c->f[0]); // 8029B148
  if (!crb(c,2)) { goto L_8029B15C; } // 8029B14C
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B150
  fcmp(c,0,c->f[1],c->f[0]); // 8029B154
  if (crb(c,2)) { goto L_8029B400; } // 8029B158
L_8029B15C:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B15C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B160
  fcmp(c,0,c->f[0],c->f[1]); // 8029B164
  if (!crb(c,2)) { goto L_8029B19C; } // 8029B168
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B16C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B170
  if (!crb(c,2)) { goto L_8029B19C; } // 8029B174
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B178
  fcmp(c,0,c->f[0],c->f[1]); // 8029B17C
  if (!crb(c,2)) { goto L_8029B19C; } // 8029B180
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B184
  fcmp(c,0,c->f[1],c->f[0]); // 8029B188
  if (!crb(c,2)) { goto L_8029B19C; } // 8029B18C
  c->r[4]=0u+0x00000040u; // 8029B190
  c->r[5]=0u+0x00000040u; // 8029B194
  goto L_8029B3BC; // 8029B198
L_8029B19C:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B19C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1A0
  fcmp(c,0,c->f[1],c->f[0]); // 8029B1A4
  if (!crb(c,2)) { goto L_8029B1E8; } // 8029B1A8
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1AC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B1B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B1B4
  if (!crb(c,2)) { goto L_8029B1E8; } // 8029B1B8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1BC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B1C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B1C4
  if (!crb(c,2)) { goto L_8029B1E8; } // 8029B1C8
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1CC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B1D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B1D4
  if (!crb(c,2)) { goto L_8029B1E8; } // 8029B1D8
  c->r[4]=0u+0x00000040u; // 8029B1DC
  c->r[5]=0u+0x0000007Fu; // 8029B1E0
  goto L_8029B3BC; // 8029B1E4
L_8029B1E8:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B1E8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1EC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B1F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B1F4
  if (!crb(c,2)) { goto L_8029B238; } // 8029B1F8
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B1FC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B200
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B204
  if (!crb(c,2)) { goto L_8029B238; } // 8029B208
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B20C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B210
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B214
  if (!crb(c,2)) { goto L_8029B238; } // 8029B218
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B21C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B220
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B224
  if (!crb(c,2)) { goto L_8029B238; } // 8029B228
  c->r[4]=0u+0x00000000u; // 8029B22C
  c->r[5]=0u+0x0000007Fu; // 8029B230
  goto L_8029B3BC; // 8029B234
L_8029B238:;
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B238
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B23C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B240
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B244
  if (!crb(c,2)) { goto L_8029B288; } // 8029B248
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B24C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B250
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B254
  if (!crb(c,2)) { goto L_8029B288; } // 8029B258
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B25C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B260
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B264
  if (!crb(c,2)) { goto L_8029B288; } // 8029B268
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B26C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B270
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B274
  if (!crb(c,2)) { goto L_8029B288; } // 8029B278
  c->r[4]=0u+0x00000040u; // 8029B27C
  c->r[5]=0u+0x0000007Fu; // 8029B280
  goto L_8029B3BC; // 8029B284
L_8029B288:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B288
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B28C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B290
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B294
  if (!crb(c,2)) { goto L_8029B2D8; } // 8029B298
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B29C
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B2A4
  if (!crb(c,2)) { goto L_8029B2D8; } // 8029B2A8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B2AC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B2B4
  if (!crb(c,2)) { goto L_8029B2D8; } // 8029B2B8
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B2BC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B2C4
  if (!crb(c,2)) { goto L_8029B2D8; } // 8029B2C8
  c->r[4]=0u+0x0000007Fu; // 8029B2CC
  c->r[5]=0u+0x0000007Fu; // 8029B2D0
  goto L_8029B3BC; // 8029B2D4
L_8029B2D8:;
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B2D8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B2DC
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2E0
  if (!crb(c,2)) { goto L_8029B324; } // 8029B2E4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B2E8
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B2F0
  if (!crb(c,2)) { goto L_8029B324; } // 8029B2F4
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B2F8
  fcmp(c,0,c->f[1],c->f[0]); // 8029B2FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B300
  if (!crb(c,2)) { goto L_8029B324; } // 8029B304
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B308
  fcmp(c,0,c->f[1],c->f[0]); // 8029B30C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B310
  if (!crb(c,2)) { goto L_8029B324; } // 8029B314
  c->r[4]=0u+0x00000040u; // 8029B318
  c->r[5]=0u+0x00000000u; // 8029B31C
  goto L_8029B3BC; // 8029B320
L_8029B324:;
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B324
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B328
  fcmp(c,0,c->f[1],c->f[0]); // 8029B32C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B330
  if (!crb(c,2)) { goto L_8029B374; } // 8029B334
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B338
  fcmp(c,0,c->f[1],c->f[0]); // 8029B33C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B340
  if (!crb(c,2)) { goto L_8029B374; } // 8029B344
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B348
  fcmp(c,0,c->f[1],c->f[0]); // 8029B34C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B350
  if (!crb(c,2)) { goto L_8029B374; } // 8029B354
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B358
  fcmp(c,0,c->f[1],c->f[0]); // 8029B35C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B360
  if (!crb(c,2)) { goto L_8029B374; } // 8029B364
  c->r[4]=0u+0x00000000u; // 8029B368
  c->r[5]=0u+0x00000000u; // 8029B36C
  goto L_8029B3BC; // 8029B370
L_8029B374:;
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B374
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B378
  fcmp(c,0,c->f[1],c->f[0]); // 8029B37C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B380
  if (!crb(c,2)) { goto L_8029B3BC; } // 8029B384
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B388
  fcmp(c,0,c->f[1],c->f[0]); // 8029B38C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B390
  if (!crb(c,2)) { goto L_8029B3BC; } // 8029B394
  fcmp(c,0,c->f[1],c->f[1]); // 8029B398
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B39C
  if (!crb(c,2)) { goto L_8029B3BC; } // 8029B3A0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8029B3A4
  fcmp(c,0,c->f[1],c->f[0]); // 8029B3A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8029B3AC
  if (!crb(c,2)) { goto L_8029B3BC; } // 8029B3B0
  c->r[4]=0u+0x0000007Fu; // 8029B3B4
  c->r[5]=0u+0x00000000u; // 8029B3B8
L_8029B3BC:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B3BC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B3C0
  c->lr=0x8029B3C8u; f_80295DAC(c); // 8029B3C4
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B3C8
  c->r[4]=0u+0x00000001u; // 8029B3CC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B3D0
  c->lr=0x8029B3D8u; f_80295DE0(c); // 8029B3D4
  goto L_8029B400; // 8029B3D8
L_8029B3DC:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B3DC
  c->r[4]=0u+0x00000040u; // 8029B3E0
  c->r[5]=0u+0x0000007Fu; // 8029B3E4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B3E8
  c->lr=0x8029B3F0u; f_80295DAC(c); // 8029B3EC
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B3F0
  c->r[4]=0u+0x00000001u; // 8029B3F4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B3F8
  c->lr=0x8029B400u; f_80295DE0(c); // 8029B3FC
L_8029B400:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B400
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B404
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B408
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8029B40C
  c->lr=0x8029B414u; f_80295DE8(c); // 8029B410
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B414
  c->r[4]=0u+0x00000000u; // 8029B418
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B41C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B420
  c->lr=0x8029B428u; f_80295EC0(c); // 8029B424
  c->r[3]=R32(c->r[30]+0x00000018u); // 8029B428
  c->r[4]=0u+0x00000001u; // 8029B42C
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8029B430
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029B434
  c->lr=0x8029B43Cu; f_80295EC0(c); // 8029B438
L_8029B43C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029B43C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029B440
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029B444
  c->lr=c->r[0]; // 8029B448
  c->r[1]=c->r[1]+0x00000020u; // 8029B44C
  return; // 8029B450
}

// fn_8029B454
void f_8029B454(Ctx* __restrict c) {
  trace_call(0x8029B454u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B454
  c->r[0]=c->lr; // 8029B458
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029B45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029B460
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029B464
  c->r[30]=0u+0x00000000u; // 8029B468
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029B46C
  c->r[29]=c->r[3]|c->r[3]; // 8029B470
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029B474
  c->r[28]=0u+0x00000000u; // 8029B478
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 8029B47C
L_8029B480:;
  c->r[0]=R32(c->r[29]+0x00000034u); // 8029B480
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B484
  c->r[3]=c->r[31]+c->r[0]; // 8029B488
  c->r[0]=R32(c->r[3]+0x00000018u); // 8029B48C
  cmps(c,0,(int32_t)c->r[0],0); // 8029B490
  if (crb(c,2)) { goto L_8029B4F4; } // 8029B494
  c->r[0]=R32(c->r[3]+0x00000008u); // 8029B498
  W32(c->r[1]+0x00000008u,c->r[0]); // 8029B49C
  c->r[0]=R32(c->r[29]+0x00000034u); // 8029B4A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B4A4
  c->r[3]=c->r[31]+c->r[0]; // 8029B4A8
  c->r[0]=R32(c->r[3]+0x00000018u); // 8029B4AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8029B4B0
  c->r[3]=R32(c->r[29]+0x00000020u); // 8029B4B4
  c->lr=0x8029B4BCu; f_8029EEC8(c); // 8029B4B8
  cmps(c,0,(int32_t)c->r[3],2); // 8029B4BC
  if (!crb(c,1)) { goto L_8029B530; } // 8029B4C0
  c->r[3]=R32(c->r[29]+0x00000020u); // 8029B4C4
  c->r[5]=c->r[1]+0x00000008u; // 8029B4C8
  c->r[4]=0u+0x00000001u; // 8029B4CC
  c->lr=0x8029B4D4u; f_8029E27C(c); // 8029B4D0
  c->r[0]=R32(c->r[29]+0x00000034u); // 8029B4D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B4D8
  c->r[3]=c->r[31]+c->r[0]; // 8029B4DC
  W32(c->r[3]+0x00000008u,c->r[28]); // 8029B4E0
  c->r[0]=R32(c->r[29]+0x00000034u); // 8029B4E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B4E8
  c->r[3]=c->r[31]+c->r[0]; // 8029B4EC
  W32(c->r[3]+0x00000018u,c->r[28]); // 8029B4F0
L_8029B4F4:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 8029B4F4
  c->r[4]=c->r[3]+0x00000001u; // 8029B4F8
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 8029B4FC
  c->r[3]=c->r[31]+c->r[0]; // 8029B500
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 8029B504
  c->r[0]=R32(c->r[3]+0x00000008u); // 8029B508
  cmps(c,0,(int32_t)c->r[0],0); // 8029B50C
  if (crb(c,2)) { goto L_8029B530; } // 8029B510
  W32(c->r[29]+0x00000034u,c->r[4]); // 8029B514
  c->r[30]=c->r[30]+0x00000001u; // 8029B518
  cmpu(c,0,c->r[30],0x00000004u); // 8029B51C
  c->r[3]=R32(c->r[31]+0x00000048u); // 8029B520
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8029B524
  W32(c->r[31]+0x00000048u,c->r[0]); // 8029B528
  if (crb(c,0)) { IRQCHK(c); goto L_8029B480; } // 8029B52C
L_8029B530:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029B530
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029B534
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029B538
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029B53C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029B540
  c->lr=c->r[0]; // 8029B544
  c->r[1]=c->r[1]+0x00000020u; // 8029B548
  return; // 8029B54C
}

// fn_8029B550
void f_8029B550(Ctx* __restrict c) {
  trace_call(0x8029B550u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B550
  c->r[0]=c->lr; // 8029B554
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029B558
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029B55C
  c->r[31]=0u+0x80000000u; // 8029B560
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029B564
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029B568
  c->r[29]=0u+0x00000000u; // 8029B56C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029B570
  c->r[28]=c->r[3]|c->r[3]; // 8029B574
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 8029B578
L_8029B57C:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 8029B57C
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 8029B580
  c->r[6]=c->r[1]+0x00000008u; // 8029B584
  c->r[4]=0u+0x00000000u; // 8029B588
  c->lr=0x8029B590u; f_8029E25C(c); // 8029B58C
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 8029B590
  cmps(c,0,(int32_t)c->r[7],0); // 8029B594
  if (crb(c,2)) { goto L_8029B648; } // 8029B598
  c->r[5]=R32(c->r[28]+0x00000038u); // 8029B59C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8029B5A0
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8029B5A4
  c->r[6]=c->r[30]+c->r[0]; // 8029B5A8
  c->r[0]=R32(c->r[6]+0x00000028u); // 8029B5AC
  c->r[3]=R32(c->r[6]+0x00000038u); // 8029B5B0
  c->r[0]=c->r[0]+c->r[3]; // 8029B5B4
  cmpu(c,0,c->r[4],c->r[0]); // 8029B5B8
  if (!crb(c,2)) { goto L_8029B5CC; } // 8029B5BC
  c->r[0]=c->r[3]+c->r[7]; // 8029B5C0
  W32(c->r[6]+0x00000038u,c->r[0]); // 8029B5C4
  goto L_8029B63C; // 8029B5C8
L_8029B5CC:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8029B5CC
  cmpu(c,0,c->r[0],0x00000004u); // 8029B5D0
  if (!crb(c,0)) { goto L_8029B63C; } // 8029B5D4
  c->r[4]=c->r[5]+0x00000001u; // 8029B5D8
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 8029B5DC
  c->r[3]=c->r[30]+c->r[0]; // 8029B5E0
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 8029B5E4
  c->r[0]=R32(c->r[3]+0x00000028u); // 8029B5E8
  cmps(c,0,(int32_t)c->r[0],0); // 8029B5EC
  if (!crb(c,2)) { goto L_8029B62C; } // 8029B5F0
  W32(c->r[28]+0x00000038u,c->r[4]); // 8029B5F4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8029B5F8
  c->r[3]=c->r[30]+c->r[0]; // 8029B5FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8029B600
  W32(c->r[3]+0x00000028u,c->r[0]); // 8029B604
  c->r[0]=R32(c->r[28]+0x00000038u); // 8029B608
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8029B60C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B610
  c->r[3]=c->r[30]+c->r[0]; // 8029B614
  W32(c->r[3]+0x00000038u,c->r[4]); // 8029B618
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 8029B61C
  c->r[0]=c->r[3]+0x00000001u; // 8029B620
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 8029B624
  goto L_8029B63C; // 8029B628
L_8029B62C:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 8029B62C
  c->r[5]=c->r[1]+0x00000008u; // 8029B630
  c->r[4]=0u+0x00000001u; // 8029B634
  c->lr=0x8029B63Cu; f_8029E26C(c); // 8029B638
L_8029B63C:;
  c->r[29]=c->r[29]+0x00000001u; // 8029B63C
  cmpu(c,0,c->r[29],0x00000004u); // 8029B640
  if (crb(c,0)) { IRQCHK(c); goto L_8029B57C; } // 8029B644
L_8029B648:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029B648
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029B64C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029B650
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029B654
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029B658
  c->lr=c->r[0]; // 8029B65C
  c->r[1]=c->r[1]+0x00000020u; // 8029B660
  return; // 8029B664
}

// fn_8029B668
void f_8029B668(Ctx* __restrict c) {
  trace_call(0x8029B668u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B668
  c->r[0]=c->lr; // 8029B66C
  c->r[7]=0u+0x803D0000u; // 8029B670
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029B674
  c->r[7]=c->r[7]+0x000035A0u; // 8029B678
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029B67C
  c->r[26]=c->r[3]|c->r[3]; // 8029B680
  c->r[27]=c->r[4]|c->r[4]; // 8029B684
  c->r[28]=c->r[5]|c->r[5]; // 8029B688
  c->r[29]=c->r[6]|c->r[6]; // 8029B68C
  c->r[31]=c->r[1]|c->r[1]; // 8029B690
  c->r[4]=c->r[26]|c->r[26]; // 8029B694
  c->r[5]=c->r[7]+0x0000001Du; // 8029B698
  c->r[3]=0u+0x00000010u; // 8029B69C
  c->r[6]=0u+0x00000004u; // 8029B6A0
  c->lr=0x8029B6A8u; f_8029C154(c); // 8029B6A4
  cmps(c,0,(int32_t)c->r[3],0); // 8029B6A8
  c->r[30]=c->r[3]|c->r[3]; // 8029B6AC
  if (crb(c,2)) { goto L_8029B6D4; } // 8029B6B0
  c->r[4]=0u+0x804C0000u; // 8029B6B4
  W32(c->r[3]+0x00000004u,c->r[28]); // 8029B6B8
  c->r[4]=c->r[4]+0xFFFFD6A8u; // 8029B6BC
  c->r[0]=0u+0x00000000u; // 8029B6C0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029B6C4
  W32(c->r[3]+0x00000008u,c->r[26]); // 8029B6C8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8029B6CC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8029B6D0
L_8029B6D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8029B6D4
  if (!crb(c,2)) { goto L_8029B6F8; } // 8029B6D8
  c->r[3]=0u+0x803D0000u; // 8029B6DC
  c->r[4]=0u+0xFFFFFFFDu; // 8029B6E0
  c->r[3]=c->r[3]+0x000035A0u; // 8029B6E4
  c->r[3]=c->r[3]+0x00000037u; // 8029B6E8
  c->lr=0x8029B6F0u; f_8029D638(c); // 8029B6EC
  c->r[3]=0u+0x00000000u; // 8029B6F0
  goto L_8029B73C; // 8029B6F4
L_8029B6F8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029B6F8
  c->r[3]=c->r[30]|c->r[30]; // 8029B6FC
  c->r[4]=c->r[27]|c->r[27]; // 8029B700
  c->r[5]=c->r[29]|c->r[29]; // 8029B704
  c->r[12]=R32(c->r[12]+0x00000034u); // 8029B708
  c->ctr=c->r[12]; // 8029B70C
  if (true) { c->lr=0x8029B714u; dispatch(c,c->ctr); } // 8029B710
  cmps(c,0,(int32_t)c->r[3],0); // 8029B714
  if (!crb(c,2)) { goto L_8029B738; } // 8029B718
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029B71C
  c->r[3]=c->r[30]|c->r[30]; // 8029B720
  c->r[12]=R32(c->r[12]+0x00000018u); // 8029B724
  c->ctr=c->r[12]; // 8029B728
  if (true) { c->lr=0x8029B730u; dispatch(c,c->ctr); } // 8029B72C
  c->r[3]=0u+0x00000000u; // 8029B730
  goto L_8029B73C; // 8029B734
L_8029B738:;
  c->r[3]=c->r[30]|c->r[30]; // 8029B738
L_8029B73C:;
  c->r[10]=c->r[31]|c->r[31]; // 8029B73C
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029B740
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029B744
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029B748
  c->r[1]=c->r[10]|c->r[10]; // 8029B74C
  c->lr=c->r[0]; // 8029B750
  return; // 8029B754
}

// fn_8029B758
void f_8029B758(Ctx* __restrict c) {
  trace_call(0x8029B758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B758
  c->r[0]=c->lr; // 8029B75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029B760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029B764
  c->r[31]=c->r[3]|c->r[3]; // 8029B768
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029B76C
  c->r[12]=R32(c->r[12]+0x00000038u); // 8029B770
  c->ctr=c->r[12]; // 8029B774
  if (true) { c->lr=0x8029B77Cu; dispatch(c,c->ctr); } // 8029B778
  cmps(c,0,(int32_t)c->r[31],0); // 8029B77C
  if (crb(c,2)) { goto L_8029B79C; } // 8029B780
  c->r[12]=R32(c->r[31]+0x00000000u); // 8029B784
  c->r[3]=c->r[31]|c->r[31]; // 8029B788
  c->r[4]=0u+0x00000001u; // 8029B78C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8029B790
  c->ctr=c->r[12]; // 8029B794
  if (true) { c->lr=0x8029B79Cu; dispatch(c,c->ctr); } // 8029B798
L_8029B79C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029B79C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029B7A0
  c->lr=c->r[0]; // 8029B7A4
  c->r[1]=c->r[1]+0x00000010u; // 8029B7A8
  return; // 8029B7AC
}

// fn_8029B7B0
void f_8029B7B0(Ctx* __restrict c) {
  trace_call(0x8029B7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B7B0
  c->r[0]=c->lr; // 8029B7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8029B7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029B7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029B7C0
  c->r[31]=c->r[3]|c->r[3]; // 8029B7C4
  if (crb(c,2)) { goto L_8029B7DC; } // 8029B7C8
  cmps(c,0,(int32_t)c->r[4],0); // 8029B7CC
  if (!crb(c,1)) { goto L_8029B7DC; } // 8029B7D0
  c->r[4]=0u+0x00000010u; // 8029B7D4
  c->lr=0x8029B7DCu; f_8029C224(c); // 8029B7D8
L_8029B7DC:;
  c->r[3]=c->r[31]|c->r[31]; // 8029B7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029B7E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029B7E4
  c->lr=c->r[0]; // 8029B7E8
  c->r[1]=c->r[1]+0x00000010u; // 8029B7EC
  return; // 8029B7F0
}

// fn_8029B7F4
void f_8029B7F4(Ctx* __restrict c) {
  trace_call(0x8029B7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B7F4
  c->r[0]=c->lr; // 8029B7F8
  c->r[6]=0u+0x00000004u; // 8029B7FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029B800
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029B804
  c->r[31]=0u+0x803D0000u; // 8029B808
  c->r[31]=c->r[31]+0x000035A0u; // 8029B80C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029B810
  c->r[30]=c->r[5]|c->r[5]; // 8029B814
  c->r[5]=c->r[31]+0x00000041u; // 8029B818
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029B81C
  c->r[29]=c->r[4]|c->r[4]; // 8029B820
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029B824
  c->r[28]=c->r[3]|c->r[3]; // 8029B828
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029B82C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8029B830
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8029B834
  c->lr=0x8029B83Cu; f_8029D740(c); // 8029B838
  cmps(c,0,(int32_t)c->r[3],0); // 8029B83C
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 8029B840
  if (!crb(c,2)) { goto L_8029B85C; } // 8029B844
  c->r[3]=c->r[31]+0x00000055u; // 8029B848
  c->r[4]=0u+0xFFFFFFFDu; // 8029B84C
  c->lr=0x8029B854u; f_8029D638(c); // 8029B850
  c->r[3]=0u+0x00000000u; // 8029B854
  goto L_8029B8CC; // 8029B858
L_8029B85C:;
  c->r[6]=0u+0x00000000u; // 8029B85C
  c->r[5]=0u+0x00000000u; // 8029B860
  c->r[4]=0u+0x00000000u; // 8029B864
  goto L_8029B87C; // 8029B868
L_8029B86C:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8029B86C
  c->r[6]=c->r[6]+0x00000001u; // 8029B870
  W32(c->r[3]+c->r[5],c->r[4]); // 8029B874
  c->r[5]=c->r[5]+0x00000004u; // 8029B878
L_8029B87C:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029B87C
  cmpu(c,0,c->r[6],c->r[0]); // 8029B880
  if (crb(c,0)) { IRQCHK(c); goto L_8029B86C; } // 8029B884
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029B888
  c->r[3]=c->r[28]|c->r[28]; // 8029B88C
  c->r[4]=c->r[29]|c->r[29]; // 8029B890
  c->r[5]=c->r[30]|c->r[30]; // 8029B894
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8029B898
  c->ctr=c->r[12]; // 8029B89C
  if (true) { c->lr=0x8029B8A4u; dispatch(c,c->ctr); } // 8029B8A0
  cmps(c,0,(int32_t)c->r[3],0); // 8029B8A4
  if (!crb(c,2)) { goto L_8029B8C8; } // 8029B8A8
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029B8AC
  c->r[3]=c->r[28]|c->r[28]; // 8029B8B0
  c->r[12]=R32(c->r[12]+0x00000038u); // 8029B8B4
  c->ctr=c->r[12]; // 8029B8B8
  if (true) { c->lr=0x8029B8C0u; dispatch(c,c->ctr); } // 8029B8BC
  c->r[3]=0u+0x00000000u; // 8029B8C0
  goto L_8029B8CC; // 8029B8C4
L_8029B8C8:;
  c->r[3]=0u+0x00000001u; // 8029B8C8
L_8029B8CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029B8CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029B8D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029B8D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029B8D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029B8DC
  c->lr=c->r[0]; // 8029B8E0
  c->r[1]=c->r[1]+0x00000020u; // 8029B8E4
  return; // 8029B8E8
}

// fn_8029B8EC
void f_8029B8EC(Ctx* __restrict c) {
  trace_call(0x8029B8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B8EC
  c->r[0]=c->lr; // 8029B8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029B8F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029B8F8
  c->r[31]=c->r[3]|c->r[3]; // 8029B8FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029B900
  c->r[12]=R32(c->r[12]+0x00000040u); // 8029B904
  c->ctr=c->r[12]; // 8029B908
  if (true) { c->lr=0x8029B910u; dispatch(c,c->ctr); } // 8029B90C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8029B910
  cmps(c,0,(int32_t)c->r[4],0); // 8029B914
  if (crb(c,2)) { goto L_8029B92C; } // 8029B918
  c->r[3]=R32(c->r[31]+0x00000008u); // 8029B91C
  c->lr=0x8029B924u; f_8029D794(c); // 8029B920
  c->r[0]=0u+0x00000000u; // 8029B924
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8029B928
L_8029B92C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029B92C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029B930
  c->lr=c->r[0]; // 8029B934
  c->r[1]=c->r[1]+0x00000010u; // 8029B938
  return; // 8029B93C
}

// fn_8029B940
void f_8029B940(Ctx* __restrict c) {
  trace_call(0x8029B940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029B940
  c->r[0]=c->lr; // 8029B944
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029B948
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029B94C
  c->r[28]=c->r[3]|c->r[3]; // 8029B950
  c->r[30]=0u+0x00000000u; // 8029B954
  c->r[31]=0u+0x00000000u; // 8029B958
  c->r[27]=0u+0x00000000u; // 8029B95C
  goto L_8029BAF4; // 8029B960
L_8029B964:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029B964
  c->r[3]=c->r[28]|c->r[28]; // 8029B968
  c->r[12]=R32(c->r[12]+0x00000048u); // 8029B96C
  c->ctr=c->r[12]; // 8029B970
  if (true) { c->lr=0x8029B978u; dispatch(c,c->ctr); } // 8029B974
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029B978
  c->r[3]=c->r[28]|c->r[28]; // 8029B97C
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 8029B980
  c->r[4]=c->r[30]|c->r[30]; // 8029B984
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8029B988
  c->r[29]=R32(c->r[5]+c->r[31]); // 8029B98C
  c->ctr=c->r[12]; // 8029B990
  if (true) { c->lr=0x8029B998u; dispatch(c,c->ctr); } // 8029B994
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8029B998
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029B99C
  c->r[3]=c->r[0]&0x00000061u; cr0(c,c->r[3]); // 8029B9A0
  c->r[0]=0u-c->r[3]; // 8029B9A4
  c->r[0]=c->r[0]|c->r[3]; // 8029B9A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8029B9AC
  cmps(c,0,(int32_t)c->r[0],1); // 8029B9B0
  if (!crb(c,2)) { goto L_8029B9D0; } // 8029B9B4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029B9B8
  c->r[3]=c->r[28]|c->r[28]; // 8029B9BC
  c->r[4]=c->r[30]|c->r[30]; // 8029B9C0
  c->r[12]=R32(c->r[12]+0x00000024u); // 8029B9C4
  c->ctr=c->r[12]; // 8029B9C8
  if (true) { c->lr=0x8029B9D0u; dispatch(c,c->ctr); } // 8029B9CC
L_8029B9D0:;
  c->r[3]=R32(c->r[29]+0x00000028u); // 8029B9D0
  c->r[0]=0u-c->r[3]; // 8029B9D4
  c->r[0]=c->r[0]|c->r[3]; // 8029B9D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8029B9DC
  cmps(c,0,(int32_t)c->r[0],1); // 8029B9E0
  if (!crb(c,2)) { goto L_8029BA1C; } // 8029B9E4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8029B9E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029B9EC
  cmps(c,0,(int32_t)c->r[0],0); // 8029B9F0
  if (crb(c,2)) { goto L_8029BA00; } // 8029B9F4
  c->r[0]=0u+0x00000001u; // 8029B9F8
  goto L_8029BA20; // 8029B9FC
L_8029BA00:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 8029BA00
  cmpu(c,0,c->r[0],0x00000002u); // 8029BA04
  if (crb(c,1)) { goto L_8029BA14; } // 8029BA08
  c->r[0]=0u+0x00000001u; // 8029BA0C
  goto L_8029BA20; // 8029BA10
L_8029BA14:;
  c->r[0]=0u+0x00000000u; // 8029BA14
  goto L_8029BA20; // 8029BA18
L_8029BA1C:;
  c->r[0]=0u+0x00000000u; // 8029BA1C
L_8029BA20:;
  cmps(c,0,(int32_t)c->r[0],1); // 8029BA20
  if (!crb(c,2)) { goto L_8029BA40; } // 8029BA24
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BA28
  c->r[3]=c->r[28]|c->r[28]; // 8029BA2C
  c->r[4]=c->r[30]|c->r[30]; // 8029BA30
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8029BA34
  c->ctr=c->r[12]; // 8029BA38
  if (true) { c->lr=0x8029BA40u; dispatch(c,c->ctr); } // 8029BA3C
L_8029BA40:;
  c->r[3]=c->r[29]|c->r[29]; // 8029BA40
  c->lr=0x8029BA48u; f_8029AA9C(c); // 8029BA44
  c->r[3]=R32(c->r[29]+0x00000028u); // 8029BA48
  c->r[0]=0u-c->r[3]; // 8029BA4C
  c->r[0]=c->r[0]|c->r[3]; // 8029BA50
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8029BA54
  cmps(c,0,(int32_t)c->r[0],1); // 8029BA58
  if (!crb(c,2)) { goto L_8029BA94; } // 8029BA5C
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8029BA60
  c->r[0]=R32(c->r[3]+0x00000004u); // 8029BA64
  cmps(c,0,(int32_t)c->r[0],0); // 8029BA68
  if (crb(c,2)) { goto L_8029BA78; } // 8029BA6C
  c->r[0]=0u+0x00000001u; // 8029BA70
  goto L_8029BA98; // 8029BA74
L_8029BA78:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 8029BA78
  cmpu(c,0,c->r[0],0x00000002u); // 8029BA7C
  if (crb(c,1)) { goto L_8029BA8C; } // 8029BA80
  c->r[0]=0u+0x00000001u; // 8029BA84
  goto L_8029BA98; // 8029BA88
L_8029BA8C:;
  c->r[0]=0u+0x00000000u; // 8029BA8C
  goto L_8029BA98; // 8029BA90
L_8029BA94:;
  c->r[0]=0u+0x00000000u; // 8029BA94
L_8029BA98:;
  cmps(c,0,(int32_t)c->r[0],1); // 8029BA98
  if (!crb(c,2)) { goto L_8029BAB8; } // 8029BA9C
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BAA0
  c->r[3]=c->r[28]|c->r[28]; // 8029BAA4
  c->r[4]=c->r[30]|c->r[30]; // 8029BAA8
  c->r[12]=R32(c->r[12]+0x00000030u); // 8029BAAC
  c->ctr=c->r[12]; // 8029BAB0
  if (true) { c->lr=0x8029BAB8u; dispatch(c,c->ctr); } // 8029BAB4
L_8029BAB8:;
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8029BAB8
  c->r[3]=c->r[28]|c->r[28]; // 8029BABC
  c->r[4]=c->r[30]|c->r[30]; // 8029BAC0
  W32(c->r[5]+0x00000004u,c->r[27]); // 8029BAC4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BAC8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8029BACC
  c->ctr=c->r[12]; // 8029BAD0
  if (true) { c->lr=0x8029BAD8u; dispatch(c,c->ctr); } // 8029BAD4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BAD8
  c->r[3]=c->r[28]|c->r[28]; // 8029BADC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8029BAE0
  c->ctr=c->r[12]; // 8029BAE4
  if (true) { c->lr=0x8029BAECu; dispatch(c,c->ctr); } // 8029BAE8
  c->r[31]=c->r[31]+0x00000004u; // 8029BAEC
  c->r[30]=c->r[30]+0x00000001u; // 8029BAF0
L_8029BAF4:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029BAF4
  cmpu(c,0,c->r[30],c->r[0]); // 8029BAF8
  if (crb(c,0)) { IRQCHK(c); goto L_8029B964; } // 8029BAFC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029BB00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029BB04
  c->lr=c->r[0]; // 8029BB08
  c->r[1]=c->r[1]+0x00000020u; // 8029BB0C
  return; // 8029BB10
}

// fn_8029BB14
void f_8029BB14(Ctx* __restrict c) {
  trace_call(0x8029BB14u);
  return; // 8029BB14
}

// fn_8029BB18
void f_8029BB18(Ctx* __restrict c) {
  trace_call(0x8029BB18u);
  return; // 8029BB18
}

// fn_8029BB1C
void f_8029BB1C(Ctx* __restrict c) {
  trace_call(0x8029BB1Cu);
  return; // 8029BB1C
}

// fn_8029BB20
void f_8029BB20(Ctx* __restrict c) {
  trace_call(0x8029BB20u);
  return; // 8029BB20
}

// fn_8029BB24
void f_8029BB24(Ctx* __restrict c) {
  trace_call(0x8029BB24u);
  return; // 8029BB24
}

// fn_8029BB28
void f_8029BB28(Ctx* __restrict c) {
  trace_call(0x8029BB28u);
  return; // 8029BB28
}

// fn_8029BB2C
void f_8029BB2C(Ctx* __restrict c) {
  trace_call(0x8029BB2Cu);
  return; // 8029BB2C
}

// fn_8029BB30
void f_8029BB30(Ctx* __restrict c) {
  trace_call(0x8029BB30u);
  return; // 8029BB30
}

// fn_8029BB34
void f_8029BB34(Ctx* __restrict c) {
  trace_call(0x8029BB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BB34
  c->r[0]=c->lr; // 8029BB38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029BB3C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029BB40
  c->r[27]=c->r[3]|c->r[3]; // 8029BB44
  c->r[28]=c->r[4]|c->r[4]; // 8029BB48
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8029BB4C
  cmps(c,0,(int32_t)c->r[0],0); // 8029BB50
  if (!crb(c,2)) { goto L_8029BB60; } // 8029BB54
  c->r[3]=0u+0x00000000u; // 8029BB58
  goto L_8029BBE0; // 8029BB5C
L_8029BB60:;
  c->r[31]=c->r[5]|c->r[5]; // 8029BB60
  c->r[29]=0u+0x00000000u; // 8029BB64
  c->r[30]=0u+0x00000000u; // 8029BB68
  goto L_8029BBD0; // 8029BB6C
L_8029BB70:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 8029BB70
  c->r[3]=c->r[27]|c->r[27]; // 8029BB74
  c->r[4]=c->r[28]|c->r[28]; // 8029BB78
  c->r[5]=c->r[29]|c->r[29]; // 8029BB7C
  c->r[12]=R32(c->r[12]+0x00000044u); // 8029BB80
  c->r[6]=c->r[31]|c->r[31]; // 8029BB84
  c->ctr=c->r[12]; // 8029BB88
  if (true) { c->lr=0x8029BB90u; dispatch(c,c->ctr); } // 8029BB8C
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 8029BB90
  W32(c->r[4]+c->r[30],c->r[3]); // 8029BB94
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 8029BB98
  c->r[0]=R32(c->r[3]+c->r[30]); // 8029BB9C
  cmps(c,0,(int32_t)c->r[0],0); // 8029BBA0
  if (!crb(c,2)) { goto L_8029BBC4; } // 8029BBA4
  c->r[12]=R32(c->r[27]+0x00000000u); // 8029BBA8
  c->r[3]=c->r[27]|c->r[27]; // 8029BBAC
  c->r[12]=R32(c->r[12]+0x00000040u); // 8029BBB0
  c->ctr=c->r[12]; // 8029BBB4
  if (true) { c->lr=0x8029BBBCu; dispatch(c,c->ctr); } // 8029BBB8
  c->r[3]=0u+0x00000000u; // 8029BBBC
  goto L_8029BBE0; // 8029BBC0
L_8029BBC4:;
  c->r[31]=c->r[31]+0x0000000Cu; // 8029BBC4
  c->r[30]=c->r[30]+0x00000004u; // 8029BBC8
  c->r[29]=c->r[29]+0x00000001u; // 8029BBCC
L_8029BBD0:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 8029BBD0
  cmpu(c,0,c->r[29],c->r[0]); // 8029BBD4
  if (crb(c,0)) { IRQCHK(c); goto L_8029BB70; } // 8029BBD8
  c->r[3]=0u+0x00000001u; // 8029BBDC
L_8029BBE0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029BBE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029BBE4
  c->lr=c->r[0]; // 8029BBE8
  c->r[1]=c->r[1]+0x00000020u; // 8029BBEC
  return; // 8029BBF0
}

// fn_8029BBF4
void f_8029BBF4(Ctx* __restrict c) {
  trace_call(0x8029BBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BBF4
  c->r[0]=c->lr; // 8029BBF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029BBFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029BC00
  c->r[31]=0u+0x00000000u; // 8029BC04
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029BC08
  c->r[30]=0u+0x00000000u; // 8029BC0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8029BC10
  c->r[29]=0u+0x00000000u; // 8029BC14
  W32(c->r[1]+0x00000010u,c->r[28]); // 8029BC18
  c->r[28]=c->r[3]|c->r[3]; // 8029BC1C
  goto L_8029BC54; // 8029BC20
L_8029BC24:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8029BC24
  c->r[3]=R32(c->r[3]+c->r[30]); // 8029BC28
  cmps(c,0,(int32_t)c->r[3],0); // 8029BC2C
  if (crb(c,2)) { goto L_8029BC4C; } // 8029BC30
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029BC34
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029BC38
  c->ctr=c->r[12]; // 8029BC3C
  if (true) { c->lr=0x8029BC44u; dispatch(c,c->ctr); } // 8029BC40
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8029BC44
  W32(c->r[3]+c->r[30],c->r[31]); // 8029BC48
L_8029BC4C:;
  c->r[30]=c->r[30]+0x00000004u; // 8029BC4C
  c->r[29]=c->r[29]+0x00000001u; // 8029BC50
L_8029BC54:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8029BC54
  cmpu(c,0,c->r[29],c->r[0]); // 8029BC58
  if (crb(c,0)) { IRQCHK(c); goto L_8029BC24; } // 8029BC5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029BC60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029BC64
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029BC68
  c->r[29]=R32(c->r[1]+0x00000014u); // 8029BC6C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8029BC70
  c->lr=c->r[0]; // 8029BC74
  c->r[1]=c->r[1]+0x00000020u; // 8029BC78
  return; // 8029BC7C
}

// fn_8029BC80
void f_8029BC80(Ctx* __restrict c) {
  trace_call(0x8029BC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BC80
  c->r[0]=c->lr; // 8029BC84
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029BC88
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029BC8C
  c->r[29]=0u+0x803D0000u; // 8029BC90
  c->r[27]=c->r[6]|c->r[6]; // 8029BC94
  c->r[31]=c->r[1]|c->r[1]; // 8029BC98
  c->r[29]=c->r[29]+0x000035A0u; // 8029BC9C
  c->r[26]=c->r[5]|c->r[5]; // 8029BCA0
  c->r[25]=c->r[4]|c->r[4]; // 8029BCA4
  c->r[6]=0u+0x00000004u; // 8029BCA8
  c->r[5]=c->r[29]|c->r[29]; // 8029BCAC
  c->r[30]=R32(c->r[3]+0x00000008u); // 8029BCB0
  c->r[3]=0u+0x0000003Cu; // 8029BCB4
  c->r[4]=c->r[30]|c->r[30]; // 8029BCB8
  c->lr=0x8029BCC0u; f_8029C154(c); // 8029BCBC
  cmps(c,0,(int32_t)c->r[3],0); // 8029BCC0
  c->r[28]=c->r[3]|c->r[3]; // 8029BCC4
  if (crb(c,2)) { goto L_8029BD3C; } // 8029BCC8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8029BCCC
  c->r[4]=c->r[30]|c->r[30]; // 8029BCD0
  c->r[5]=R32(c->r[27]+0x00000000u); // 8029BCD4
  c->r[6]=R32(c->r[27]+0x00000004u); // 8029BCD8
  c->r[7]=R32(c->r[27]+0x00000008u); // 8029BCDC
  c->lr=0x8029BCE4u; f_80299688(c); // 8029BCE0
  c->r[3]=0u+0x804C0000u; // 8029BCE4
  c->r[0]=0u+0x00000000u; // 8029BCE8
  c->r[3]=c->r[3]+0xFFFFD710u; // 8029BCEC
  W32(c->r[28]+0x00000000u,c->r[3]); // 8029BCF0
  W32(c->r[28]+0x00000018u,c->r[0]); // 8029BCF4
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 8029BCF8
  W32(c->r[28]+0x00000020u,c->r[0]); // 8029BCFC
  W32(c->r[28]+0x00000024u,c->r[26]); // 8029BD00
  W32(c->r[28]+0x00000028u,c->r[0]); // 8029BD04
  W32(c->r[28]+0x00000030u,c->r[0]); // 8029BD08
  W32(c->r[28]+0x00000034u,c->r[0]); // 8029BD0C
  W32(c->r[28]+0x00000038u,c->r[0]); // 8029BD10
  goto L_8029BD3C; // 8029BD14
  c->r[3]=c->r[28]|c->r[28]; // 8029BD18
  c->r[4]=c->r[30]|c->r[30]; // 8029BD1C
  c->r[5]=c->r[29]|c->r[29]; // 8029BD20
  c->r[6]=0u+0x00000004u; // 8029BD24
  c->lr=0x8029BD2Cu; f_8029C1D4(c); // 8029BD28
  c->r[3]=0u+0x00000000u; // 8029BD2C
  c->r[4]=0u+0x00000000u; // 8029BD30
  c->r[5]=0u+0x00000000u; // 8029BD34
  c->lr=0x8029BD3Cu; f_801E96FC(c); // 8029BD38
L_8029BD3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8029BD3C
  if (!crb(c,2)) { goto L_8029BD60; } // 8029BD40
  c->r[3]=0u+0x803D0000u; // 8029BD44
  c->r[4]=0u+0xFFFFFFFDu; // 8029BD48
  c->r[3]=c->r[3]+0x000035A0u; // 8029BD4C
  c->r[3]=c->r[3]+0x00000013u; // 8029BD50
  c->lr=0x8029BD58u; f_8029D638(c); // 8029BD54
  c->r[28]=0u+0x00000000u; // 8029BD58
  goto L_8029BDA4; // 8029BD5C
L_8029BD60:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BD60
  c->r[3]=c->r[28]|c->r[28]; // 8029BD64
  c->r[12]=R32(c->r[12]+0x00000010u); // 8029BD68
  c->ctr=c->r[12]; // 8029BD6C
  if (true) { c->lr=0x8029BD74u; dispatch(c,c->ctr); } // 8029BD70
  cmps(c,0,(int32_t)c->r[3],0); // 8029BD74
  if (!crb(c,2)) { goto L_8029BDA4; } // 8029BD78
  cmps(c,0,(int32_t)c->r[28],0); // 8029BD7C
  if (crb(c,2)) { goto L_8029BDA0; } // 8029BD80
  c->r[12]=R32(c->r[28]+0x00000000u); // 8029BD84
  c->r[0]=0u+0x00000001u; // 8029BD88
  c->r[3]=c->r[28]|c->r[28]; // 8029BD8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029BD90
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8029BD94
  c->ctr=c->r[12]; // 8029BD98
  if (true) { c->lr=0x8029BDA0u; dispatch(c,c->ctr); } // 8029BD9C
L_8029BDA0:;
  c->r[28]=0u+0x00000000u; // 8029BDA0
L_8029BDA4:;
  c->r[10]=c->r[31]|c->r[31]; // 8029BDA4
  c->r[3]=c->r[28]|c->r[28]; // 8029BDA8
  {uint32_t ea=c->r[10]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029BDAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029BDB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029BDB4
  c->r[1]=c->r[10]|c->r[10]; // 8029BDB8
  c->lr=c->r[0]; // 8029BDBC
  return; // 8029BDC0
}

// fn_8029BDC4
void f_8029BDC4(Ctx* __restrict c) {
  trace_call(0x8029BDC4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029BDC4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8029BDC8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8029BDCC
  return; // 8029BDD0
}

// fn_8029BDD4
void f_8029BDD4(Ctx* __restrict c) {
  trace_call(0x8029BDD4u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8029BDD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8029BDD8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8029BDDC
  return; // 8029BDE0
}

// fn_8029BDE4
void f_8029BDE4(Ctx* __restrict c) {
  trace_call(0x8029BDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BDE4
  c->r[0]=c->lr; // 8029BDE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029BDEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029BDF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029BDF4
  c->r[30]=c->r[3]|c->r[3]; // 8029BDF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8029BDFC
  c->lr=0x8029BE04u; f_8029EEC8(c); // 8029BE00
  cmps(c,0,(int32_t)c->r[3],0); // 8029BE04
  if (!crb(c,1)) { goto L_8029BE70; } // 8029BE08
  c->r[3]=R32(c->r[30]+0x00000004u); // 8029BE0C
  c->r[4]=c->r[1]+0x00000010u; // 8029BE10
  c->lr=0x8029BE18u; f_8029E3E0(c); // 8029BE14
  c->r[3]=R32(c->r[30]+0x00000008u); // 8029BE18
  c->r[4]=c->r[1]+0x00000008u; // 8029BE1C
  c->lr=0x8029BE24u; f_8029E2F4(c); // 8029BE20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029BE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029BE28
  cmpu(c,0,c->r[0],c->r[31]); // 8029BE2C
  if (!crb(c,0)) { goto L_8029BE38; } // 8029BE30
  c->r[31]=c->r[0]|c->r[0]; // 8029BE34
L_8029BE38:;
  cmps(c,0,(int32_t)c->r[31],0); // 8029BE38
  if (crb(c,2)) { goto L_8029BE50; } // 8029BE3C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8029BE40
  c->r[5]=c->r[31]|c->r[31]; // 8029BE44
  c->r[4]=R32(c->r[1]+0x00000010u); // 8029BE48
  c->lr=0x8029BE50u; f_80004338(c); // 8029BE4C
L_8029BE50:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8029BE50
  c->r[5]=c->r[31]|c->r[31]; // 8029BE54
  c->r[4]=c->r[1]+0x00000008u; // 8029BE58
  c->lr=0x8029BE60u; f_8029E310(c); // 8029BE5C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8029BE60
  c->r[5]=c->r[31]|c->r[31]; // 8029BE64
  c->r[4]=c->r[1]+0x00000010u; // 8029BE68
  c->lr=0x8029BE70u; f_8029E3FC(c); // 8029BE6C
L_8029BE70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029BE70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029BE74
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029BE78
  c->lr=c->r[0]; // 8029BE7C
  c->r[1]=c->r[1]+0x00000020u; // 8029BE80
  return; // 8029BE84
}

// fn_8029BE88
void f_8029BE88(Ctx* __restrict c) {
  trace_call(0x8029BE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BE88
  c->r[0]=c->lr; // 8029BE8C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8029BE90
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 8029BE94
  c->f[31]=c->f[1]; // 8029BE98
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029BE9C
  c->r[22]=c->r[3]|c->r[3]; // 8029BEA0
  c->r[25]=c->r[6]|c->r[6]; // 8029BEA4
  c->r[3]=0u+0x803D0000u; // 8029BEA8
  c->r[24]=c->r[5]|c->r[5]; // 8029BEAC
  c->r[31]=c->r[1]|c->r[1]; // 8029BEB0
  c->r[5]=c->r[3]+0x00003614u; // 8029BEB4
  c->r[23]=c->r[4]|c->r[4]; // 8029BEB8
  c->r[26]=c->r[7]|c->r[7]; // 8029BEBC
  c->r[27]=c->r[8]|c->r[8]; // 8029BEC0
  c->r[28]=c->r[9]|c->r[9]; // 8029BEC4
  c->r[29]=c->r[10]|c->r[10]; // 8029BEC8
  c->r[3]=0u+0x00000010u; // 8029BECC
  c->r[6]=0u+0x00000004u; // 8029BED0
  c->lr=0x8029BED8u; f_8029C154(c); // 8029BED4
  cmps(c,0,(int32_t)c->r[3],0); // 8029BED8
  c->r[30]=c->r[3]|c->r[3]; // 8029BEDC
  if (crb(c,2)) { goto L_8029BF04; } // 8029BEE0
  c->r[4]=0u+0x804C0000u; // 8029BEE4
  c->r[0]=0u+0x00000000u; // 8029BEE8
  c->r[4]=c->r[4]+0xFFFFD748u; // 8029BEEC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8029BEF0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029BEF4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8029BEF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8029BEFC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8029BF00
L_8029BF04:;
  cmps(c,0,(int32_t)c->r[3],0); // 8029BF04
  if (!crb(c,2)) { goto L_8029BF28; } // 8029BF08
  c->r[3]=0u+0x803D0000u; // 8029BF0C
  c->r[4]=0u+0xFFFFFFFDu; // 8029BF10
  c->r[3]=c->r[3]+0x00003614u; // 8029BF14
  c->r[3]=c->r[3]+0x00000011u; // 8029BF18
  c->lr=0x8029BF20u; f_8029D638(c); // 8029BF1C
  c->r[3]=0u+0x00000000u; // 8029BF20
  goto L_8029BFDC; // 8029BF24
L_8029BF28:;
  cmps(c,0,(int32_t)c->r[28],3); // 8029BF28
  if (crb(c,2)) { goto L_8029BF70; } // 8029BF2C
  W32(c->r[3]+0x00000004u,c->r[24]); // 8029BF30
  c->r[4]=0u+0x00000144u; // 8029BF34
  c->r[5]=0u+0x00000024u; // 8029BF38
  c->r[6]=0u+0x00000004u; // 8029BF3C
  c->r[3]=R32(c->r[22]+0x0000000Cu); // 8029BF40
  c->lr=0x8029BF48u; f_8029E5A0(c); // 8029BF44
  cmps(c,0,(int32_t)c->r[3],0); // 8029BF48
  W32(c->r[30]+0x00000008u,c->r[3]); // 8029BF4C
  if (!crb(c,2)) { goto L_8029BF70; } // 8029BF50
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029BF54
  c->r[3]=c->r[30]|c->r[30]; // 8029BF58
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029BF5C
  c->ctr=c->r[12]; // 8029BF60
  if (true) { c->lr=0x8029BF68u; dispatch(c,c->ctr); } // 8029BF64
  c->r[3]=0u+0x00000000u; // 8029BF68
  goto L_8029BFDC; // 8029BF6C
L_8029BF70:;
  c->f[1]=c->f[31]; // 8029BF70
  c->r[6]=R32(c->r[30]+0x00000008u); // 8029BF74
  c->r[3]=c->r[22]|c->r[22]; // 8029BF78
  c->r[4]=c->r[23]|c->r[23]; // 8029BF7C
  c->r[5]=c->r[25]|c->r[25]; // 8029BF80
  c->r[7]=c->r[26]|c->r[26]; // 8029BF84
  c->r[8]=c->r[27]|c->r[27]; // 8029BF88
  c->r[9]=c->r[28]|c->r[28]; // 8029BF8C
  c->r[10]=c->r[29]|c->r[29]; // 8029BF90
  c->lr=0x8029BF98u; f_80294938(c); // 8029BF94
  cmps(c,0,(int32_t)c->r[3],0); // 8029BF98
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8029BF9C
  if (!crb(c,2)) { goto L_8029BFC0; } // 8029BFA0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8029BFA4
  c->r[3]=c->r[30]|c->r[30]; // 8029BFA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029BFAC
  c->ctr=c->r[12]; // 8029BFB0
  if (true) { c->lr=0x8029BFB8u; dispatch(c,c->ctr); } // 8029BFB4
  c->r[3]=0u+0x00000000u; // 8029BFB8
  goto L_8029BFDC; // 8029BFBC
L_8029BFC0:;
  cmps(c,0,(int32_t)c->r[28],3); // 8029BFC0
  if (crb(c,2)) { goto L_8029BFD8; } // 8029BFC4
  c->r[4]=0u+0x802A0000u; // 8029BFC8
  c->r[5]=c->r[30]|c->r[30]; // 8029BFCC
  c->r[4]=c->r[4]+0xFFFFBDE4u; // 8029BFD0
  c->lr=0x8029BFD8u; f_80295C50(c); // 8029BFD4
L_8029BFD8:;
  c->r[3]=c->r[30]|c->r[30]; // 8029BFD8
L_8029BFDC:;
  c->r[10]=c->r[31]|c->r[31]; // 8029BFDC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[31]=RF64(ea);} // 8029BFE0
  {uint32_t ea=c->r[10]+0x00000020u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029BFE4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029BFE8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029BFEC
  c->r[1]=c->r[10]|c->r[10]; // 8029BFF0
  c->lr=c->r[0]; // 8029BFF4
  return; // 8029BFF8
}

// fn_8029BFFC
void f_8029BFFC(Ctx* __restrict c) {
  trace_call(0x8029BFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029BFFC
  c->r[0]=c->lr; // 8029C000
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029C004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029C008
  c->r[31]=c->r[3]|c->r[3]; // 8029C00C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8029C010
  cmps(c,0,(int32_t)c->r[0],0); // 8029C014
  if (crb(c,2)) { goto L_8029C038; } // 8029C018
  c->r[3]=c->r[0]|c->r[0]; // 8029C01C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8029C020
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029C024
  c->ctr=c->r[12]; // 8029C028
  if (true) { c->lr=0x8029C030u; dispatch(c,c->ctr); } // 8029C02C
  c->r[0]=0u+0x00000000u; // 8029C030
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8029C034
L_8029C038:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8029C038
  cmps(c,0,(int32_t)c->r[3],0); // 8029C03C
  if (crb(c,2)) { goto L_8029C050; } // 8029C040
  c->lr=0x8029C048u; f_8029E23C(c); // 8029C044
  c->r[0]=0u+0x00000000u; // 8029C048
  W32(c->r[31]+0x00000008u,c->r[0]); // 8029C04C
L_8029C050:;
  cmps(c,0,(int32_t)c->r[31],0); // 8029C050
  if (crb(c,2)) { goto L_8029C070; } // 8029C054
  c->r[12]=R32(c->r[31]+0x00000000u); // 8029C058
  c->r[3]=c->r[31]|c->r[31]; // 8029C05C
  c->r[4]=0u+0x00000001u; // 8029C060
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029C064
  c->ctr=c->r[12]; // 8029C068
  if (true) { c->lr=0x8029C070u; dispatch(c,c->ctr); } // 8029C06C
L_8029C070:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029C070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029C074
  c->lr=c->r[0]; // 8029C078
  c->r[1]=c->r[1]+0x00000010u; // 8029C07C
  return; // 8029C080
}

// fn_8029C084
void f_8029C084(Ctx* __restrict c) {
  trace_call(0x8029C084u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C084
  c->r[0]=c->lr; // 8029C088
  cmps(c,0,(int32_t)c->r[3],0); // 8029C08C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029C090
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029C094
  c->r[31]=c->r[3]|c->r[3]; // 8029C098
  if (crb(c,2)) { goto L_8029C0B0; } // 8029C09C
  cmps(c,0,(int32_t)c->r[4],0); // 8029C0A0
  if (!crb(c,1)) { goto L_8029C0B0; } // 8029C0A4
  c->r[4]=0u+0x00000010u; // 8029C0A8
  c->lr=0x8029C0B0u; f_8029C224(c); // 8029C0AC
L_8029C0B0:;
  c->r[3]=c->r[31]|c->r[31]; // 8029C0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029C0B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029C0B8
  c->lr=c->r[0]; // 8029C0BC
  c->r[1]=c->r[1]+0x00000010u; // 8029C0C0
  return; // 8029C0C4
}

// fn_8029C0C8
void f_8029C0C8(Ctx* __restrict c) {
  trace_call(0x8029C0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C0C8
  c->r[0]=c->lr; // 8029C0CC
  c->r[5]=0u+0x803D0000u; // 8029C0D0
  c->r[6]=0u+0x00000010u; // 8029C0D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029C0D8
  c->r[5]=c->r[5]+0x00003630u; // 8029C0DC
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029C0E0
  c->r[28]=c->r[4]|c->r[4]; // 8029C0E4
  c->r[29]=c->r[3]+0x00000004u; // 8029C0E8
  c->r[27]=c->r[3]|c->r[3]; // 8029C0EC
  c->r[31]=c->r[1]|c->r[1]; // 8029C0F0
  c->r[3]=c->r[28]|c->r[28]; // 8029C0F4
  c->r[4]=c->r[29]|c->r[29]; // 8029C0F8
  c->lr=0x8029C100u; f_8029D740(c); // 8029C0FC
  cmps(c,0,(int32_t)c->r[3],0); // 8029C100
  c->r[30]=c->r[3]|c->r[3]; // 8029C104
  if (!crb(c,2)) { goto L_8029C114; } // 8029C108
  c->r[30]=0u+0x00000000u; // 8029C10C
  goto L_8029C134; // 8029C110
L_8029C114:;
  c->r[5]=c->r[29]|c->r[29]; // 8029C114
  c->r[4]=0u+0x00000000u; // 8029C118
  c->lr=0x8029C120u; f_8000443C(c); // 8029C11C
  W32(c->r[30]+c->r[27],c->r[28]); // 8029C120
  goto L_8029C134; // 8029C124
  c->r[3]=c->r[31]+0x00000008u; // 8029C128
  c->lr=0x8029C130u; f_801E9000(c); // 8029C12C
L_8029C130:;
  IRQCHK(c); goto L_8029C130; // 8029C130
L_8029C134:;
  c->r[10]=c->r[31]|c->r[31]; // 8029C134
  c->r[3]=c->r[30]|c->r[30]; // 8029C138
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029C13C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029C140
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029C144
  c->r[1]=c->r[10]|c->r[10]; // 8029C148
  c->lr=c->r[0]; // 8029C14C
  return; // 8029C150
}

// fn_8029C154
void f_8029C154(Ctx* __restrict c) {
  trace_call(0x8029C154u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C154
  c->r[0]=c->lr; // 8029C158
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029C15C
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029C160
  c->r[28]=c->r[4]|c->r[4]; // 8029C164
  c->r[30]=c->r[3]+0x00000004u; // 8029C168
  c->r[27]=c->r[3]|c->r[3]; // 8029C16C
  c->r[31]=c->r[1]|c->r[1]; // 8029C170
  c->r[3]=c->r[28]|c->r[28]; // 8029C174
  c->r[4]=c->r[30]|c->r[30]; // 8029C178
  c->lr=0x8029C180u; f_8029D740(c); // 8029C17C
  cmps(c,0,(int32_t)c->r[3],0); // 8029C180
  c->r[29]=c->r[3]|c->r[3]; // 8029C184
  if (!crb(c,2)) { goto L_8029C194; } // 8029C188
  c->r[3]=0u+0x00000000u; // 8029C18C
  goto L_8029C1B8; // 8029C190
L_8029C194:;
  c->r[5]=c->r[30]|c->r[30]; // 8029C194
  c->r[4]=0u+0x00000000u; // 8029C198
  c->lr=0x8029C1A0u; f_8000443C(c); // 8029C19C
  W32(c->r[29]+c->r[27],c->r[28]); // 8029C1A0
  c->r[3]=c->r[29]|c->r[29]; // 8029C1A4
  goto L_8029C1B8; // 8029C1A8
  c->r[3]=c->r[31]+0x00000008u; // 8029C1AC
  c->lr=0x8029C1B4u; f_801E9000(c); // 8029C1B0
L_8029C1B4:;
  IRQCHK(c); goto L_8029C1B4; // 8029C1B4
L_8029C1B8:;
  c->r[10]=c->r[31]|c->r[31]; // 8029C1B8
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029C1BC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029C1C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029C1C4
  c->r[1]=c->r[10]|c->r[10]; // 8029C1C8
  c->lr=c->r[0]; // 8029C1CC
  return; // 8029C1D0
}

// fn_8029C1D4
void f_8029C1D4(Ctx* __restrict c) {
  trace_call(0x8029C1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C1D4
  c->r[0]=c->lr; // 8029C1D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8029C1DC
  c->r[0]=c->r[3]|c->r[3]; // 8029C1E0
  c->r[3]=c->r[4]|c->r[4]; // 8029C1E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8029C1E8
  c->r[31]=c->r[1]|c->r[1]; // 8029C1EC
  c->r[4]=c->r[0]|c->r[0]; // 8029C1F0
  c->lr=0x8029C1F8u; f_8029D794(c); // 8029C1F4
  goto L_8029C208; // 8029C1F8
  c->r[3]=c->r[31]+0x00000008u; // 8029C1FC
  c->lr=0x8029C204u; f_801E9000(c); // 8029C200
L_8029C204:;
  IRQCHK(c); goto L_8029C204; // 8029C204
L_8029C208:;
  c->r[10]=c->r[31]|c->r[31]; // 8029C208
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8029C20C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029C210
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029C214
  c->r[1]=c->r[10]|c->r[10]; // 8029C218
  c->lr=c->r[0]; // 8029C21C
  return; // 8029C220
}

// fn_8029C224
void f_8029C224(Ctx* __restrict c) {
  trace_call(0x8029C224u);
  c->r[0]=c->r[3]|c->r[3]; // 8029C224
  c->r[3]=R32(c->r[3]+c->r[4]); // 8029C228
  c->r[4]=c->r[0]|c->r[0]; // 8029C22C
  f_8029D794(c); return; // 8029C230
}

// fn_8029C234
void f_8029C234(Ctx* __restrict c) {
  trace_call(0x8029C234u);
  c->r[3]=0u+0x803D0000u; // 8029C234
  c->r[3]=c->r[3]+0x00003640u; // 8029C238
  W32(c->r[13]+0xFFFFA408u,c->r[3]); // 8029C23C
  return; // 8029C240
}

// fn_8029C244
void f_8029C244(Ctx* __restrict c) {
  trace_call(0x8029C244u);
  c->r[4]=0u+0x804C0000u; // 8029C244
  c->r[4]=c->r[4]+0xFFFFD768u; // 8029C248
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029C24C
  return; // 8029C250
}

// fn_8029C254
void f_8029C254(Ctx* __restrict c) {
  trace_call(0x8029C254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C254
  c->r[0]=c->lr; // 8029C258
  cmps(c,0,(int32_t)c->r[3],0); // 8029C25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029C260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029C264
  c->r[31]=c->r[3]|c->r[3]; // 8029C268
  if (crb(c,2)) { goto L_8029C280; } // 8029C26C
  cmps(c,0,(int32_t)c->r[4],0); // 8029C270
  if (!crb(c,1)) { goto L_8029C280; } // 8029C274
  c->r[4]=0u+0x00000004u; // 8029C278
  c->lr=0x8029C280u; f_8029C224(c); // 8029C27C
L_8029C280:;
  c->r[3]=c->r[31]|c->r[31]; // 8029C280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029C284
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029C288
  c->lr=c->r[0]; // 8029C28C
  c->r[1]=c->r[1]+0x00000010u; // 8029C290
  return; // 8029C294
}

// fn_8029C298
void f_8029C298(Ctx* __restrict c) {
  trace_call(0x8029C298u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C298
  c->r[0]=c->lr; // 8029C29C
  c->r[5]=0u+0x803D0000u; // 8029C2A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029C2A4
  c->r[5]=c->r[5]+0x000036A0u; // 8029C2A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029C2AC
  c->r[31]=c->r[4]|c->r[4]; // 8029C2B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8029C2B4
  c->r[30]=c->r[3]|c->r[3]; // 8029C2B8
  W32(c->r[13]+0xFFFFA410u,c->r[5]); // 8029C2BC
  c->lr=0x8029C2C4u; f_8029C234(c); // 8029C2C0
  c->r[0]=0u+0x00000000u; // 8029C2C4
  c->r[3]=c->r[30]|c->r[30]; // 8029C2C8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029C2CC
  c->r[4]=c->r[1]+0x00000008u; // 8029C2D0
  c->lr=0x8029C2D8u; f_8029C414(c); // 8029C2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8029C2D8
  if (crb(c,2)) { goto L_8029C2EC; } // 8029C2DC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8029C2E0
  cmps(c,0,(int32_t)c->r[0],0); // 8029C2E4
  if (crb(c,2)) { goto L_8029C2F8; } // 8029C2E8
L_8029C2EC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8029C2EC
  c->r[3]=0u+0x00000000u; // 8029C2F0
  W32(c->r[31]+0x00000000u,c->r[0]); // 8029C2F4
L_8029C2F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029C2F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029C2FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8029C300
  c->lr=c->r[0]; // 8029C304
  c->r[1]=c->r[1]+0x00000020u; // 8029C308
  return; // 8029C30C
}

// fn_8029C310
void f_8029C310(Ctx* __restrict c) {
  trace_call(0x8029C310u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C310
  c->r[0]=c->lr; // 8029C314
  c->r[4]=0u+0x803D0000u; // 8029C318
  W32(c->r[1]+0x00000024u,c->r[0]); // 8029C31C
  c->r[4]=c->r[4]+0x000036A0u; // 8029C320
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8029C324
  c->r[31]=c->r[3]|c->r[3]; // 8029C328
  W32(c->r[13]+0xFFFFA410u,c->r[4]); // 8029C32C
  c->lr=0x8029C334u; f_8029C234(c); // 8029C330
  c->r[0]=0u+0x00000000u; // 8029C334
  c->r[3]=c->r[31]|c->r[31]; // 8029C338
  W32(c->r[13]+0xFFFFA418u,c->r[0]); // 8029C33C
  c->r[4]=c->r[1]+0x00000008u; // 8029C340
  c->lr=0x8029C348u; f_8029C414(c); // 8029C344
  cmps(c,0,(int32_t)c->r[3],0); // 8029C348
  if (crb(c,2)) { goto L_8029C35C; } // 8029C34C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8029C350
  cmps(c,0,(int32_t)c->r[0],0); // 8029C354
  if (crb(c,2)) { goto L_8029C368; } // 8029C358
L_8029C35C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8029C35C
  c->r[3]=0u+0x00000000u; // 8029C360
  W32(c->r[13]+0xFFFFA418u,c->r[0]); // 8029C364
L_8029C368:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8029C368
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8029C36C
  c->lr=c->r[0]; // 8029C370
  c->r[1]=c->r[1]+0x00000020u; // 8029C374
  return; // 8029C378
}

// fn_8029C37C
void f_8029C37C(Ctx* __restrict c) {
  trace_call(0x8029C37Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029C37C
  c->r[4]=c->r[13]+0xFFFFA418u; // 8029C380
  c->r[12]=R32(c->r[12]+0x00000008u); // 8029C384
  c->ctr=c->r[12]; // 8029C388
  if (true) { dispatch(c,c->ctr); return; } // 8029C38C
}

// fn_8029C390
void f_8029C390(Ctx* __restrict c) {
  trace_call(0x8029C390u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029C390
  c->r[4]=c->r[13]+0xFFFFA418u; // 8029C394
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8029C398
  c->ctr=c->r[12]; // 8029C39C
  if (true) { dispatch(c,c->ctr); return; } // 8029C3A0
}

// fn_8029C3A4
void f_8029C3A4(Ctx* __restrict c) {
  trace_call(0x8029C3A4u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029C3A4
  c->r[4]=c->r[13]+0xFFFFA418u; // 8029C3A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8029C3AC
  c->ctr=c->r[12]; // 8029C3B0
  if (true) { dispatch(c,c->ctr); return; } // 8029C3B4
}

// fn_8029C3B8
void f_8029C3B8(Ctx* __restrict c) {
  trace_call(0x8029C3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C3B8
  c->r[0]=c->lr; // 8029C3BC
  cmps(c,0,(int32_t)c->r[3],0); // 8029C3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8029C3C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8029C3C8
  c->r[31]=c->r[4]|c->r[4]; // 8029C3CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8029C3D0
  c->r[30]=c->r[3]|c->r[3]; // 8029C3D4
  if (crb(c,2)) { goto L_8029C3F8; } // 8029C3D8
  c->r[4]=0u+0x00000000u; // 8029C3DC
  c->lr=0x8029C3E4u; f_8029C254(c); // 8029C3E0
  cmps(c,0,(int32_t)c->r[31],0); // 8029C3E4
  if (!crb(c,1)) { goto L_8029C3F8; } // 8029C3E8
  c->r[3]=c->r[30]|c->r[30]; // 8029C3EC
  c->r[4]=0u+0x00000020u; // 8029C3F0
  c->lr=0x8029C3F8u; f_8029C224(c); // 8029C3F4
L_8029C3F8:;
  c->r[3]=c->r[30]|c->r[30]; // 8029C3F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8029C3FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8029C400
  c->r[0]=R32(c->r[1]+0x00000014u); // 8029C404
  c->lr=c->r[0]; // 8029C408
  c->r[1]=c->r[1]+0x00000010u; // 8029C40C
  return; // 8029C410
}

// fn_8029C414
void f_8029C414(Ctx* __restrict c) {
  trace_call(0x8029C414u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8029C414
  c->r[0]=c->lr; // 8029C418
  c->r[6]=0u+0x00000004u; // 8029C41C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8029C420
  c->r[0]=0u+0x00000000u; // 8029C424
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8029C428
  c->r[29]=0u+0x803D0000u; // 8029C42C
  c->r[27]=c->r[3]|c->r[3]; // 8029C430
  c->r[31]=c->r[1]|c->r[1]; // 8029C434
  c->r[29]=c->r[29]+0x00003724u; // 8029C438
  c->r[28]=c->r[4]|c->r[4]; // 8029C43C
  c->r[3]=0u+0x00000020u; // 8029C440
  c->r[5]=c->r[29]|c->r[29]; // 8029C444
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029C448
  c->r[4]=c->r[27]|c->r[27]; // 8029C44C
  c->lr=0x8029C454u; f_8029C154(c); // 8029C450
  cmps(c,0,(int32_t)c->r[3],0); // 8029C454
  c->r[30]=c->r[3]|c->r[3]; // 8029C458
  if (crb(c,2)) { goto L_8029C49C; } // 8029C45C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8029C460
  c->lr=0x8029C468u; f_8029C244(c); // 8029C464
  c->r[3]=0u+0x804C0000u; // 8029C468
  c->r[3]=c->r[3]+0xFFFFD790u; // 8029C46C
  W32(c->r[30]+0x00000000u,c->r[3]); // 8029C470
  goto L_8029C49C; // 8029C474
  c->r[3]=c->r[30]|c->r[30]; // 8029C478
  c->r[4]=c->r[27]|c->r[27]; // 8029C47C
  c->r[5]=c->r[29]|c->r[29]; // 8029C480
  c->r[6]=0u+0x00000004u; // 8029C484
  c->lr=0x8029C48Cu; f_8029C1D4(c); // 8029C488
  c->r[3]=0u+0x00000000u; // 8029C48C
  c->r[4]=0u+0x00000000u; // 8029C490
  c->r[5]=0u+0x00000000u; // 8029C494
  c->lr=0x8029C49Cu; f_801E96FC(c); // 8029C498
L_8029C49C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8029C49C
  if (!crb(c,2)) { goto L_8029C4C4; } // 8029C4A0
  c->r[3]=0u+0x803D0000u; // 8029C4A4
  c->r[3]=c->r[3]+0x00003724u; // 8029C4A8
  c->r[3]=c->r[3]+0x00000009u; // 8029C4AC
  c->lr=0x8029C4B4u; f_8029D4B0(c); // 8029C4B0
  c->r[0]=0u+0xFFFFFFFDu; // 8029C4B4
  c->r[3]=0u+0x00000000u; // 8029C4B8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8029C4BC
  goto L_8029C4D0; // 8029C4C0
L_8029C4C4:;
  c->r[3]=c->r[30]+0x00000004u; // 8029C4C4
  c->lr=0x8029C4CCu; f_801BF900(c); // 8029C4C8
  c->r[3]=c->r[30]|c->r[30]; // 8029C4CC
L_8029C4D0:;
  c->r[10]=c->r[31]|c->r[31]; // 8029C4D0
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8029C4D4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8029C4D8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8029C4DC
  c->r[1]=c->r[10]|c->r[10]; // 8029C4E0
  c->lr=c->r[0]; // 8029C4E4
  return; // 8029C4E8
}

// fn_8029C4EC
void f_8029C4EC(Ctx* __restrict c) {
  trace_call(0x8029C4ECu);
  c->r[0]=0u+0x00000000u; // 8029C4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8029C4F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029C4F4
  if (crb(c,2)) return; // 8029C4F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8029C4FC
  c->r[4]=0u+0x00000001u; // 8029C500
  c->r[12]=R32(c->r[12]+0x00000014u); // 8029C504
  c->ctr=c->r[12]; // 8029C508
  if (true) { dispatch(c,c->ctr); return; } // 8029C50C
  return; // 8029C510
}

// fn_8029C514
void f_8029C514(Ctx* __restrict c) {
  trace_call(0x8029C514u);
  c->r[0]=0u+0x00000000u; // 8029C514
  c->r[3]=c->r[3]+0x00000004u; // 8029C518
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029C51C
  f_801BF938(c); return; // 8029C520
}

// fn_8029C524
void f_8029C524(Ctx* __restrict c) {
  trace_call(0x8029C524u);
  c->r[0]=0u+0x00000000u; // 8029C524
  c->r[3]=c->r[3]+0x00000004u; // 8029C528
  W32(c->r[4]+0x00000000u,c->r[0]); // 8029C52C
  f_801BFA14(c); return; // 8029C530
}

// fn_8029C534
void f_8029C534(Ctx* __restrict c) {
  trace_call(0x8029C534u);
  c->r[4]=0u+0x804C0000u; // 8029C534
  c->r[4]=c->r[4]+0xFFFFD7C0u; // 8029C538
  W32(c->r[3]+0x00000000u,c->r[4]); // 8029C53C
  return; // 8029C540
}

