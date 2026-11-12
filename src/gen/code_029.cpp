#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_802F6EE0
void f_802F6EE0(Ctx* __restrict c) {
  trace_call(0x802F6EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F6EE0
  c->r[0]=c->lr; // 802F6EE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802F6EE8
  c->r[3]=c->r[1]+0x00000008u; // 802F6EEC
  c->lr=0x802F6EF4u; f_801C5A1C(c); // 802F6EF0
  c->r[3]=c->r[1]+0x00000008u; // 802F6EF4
  c->r[4]=0u+0x00000000u; // 802F6EF8
  c->lr=0x802F6F00u; f_801E6204(c); // 802F6EFC
  c->r[3]=0u+0x00000000u; // 802F6F00
  c->lr=0x802F6F08u; f_801E62AC(c); // 802F6F04
  c->lr=0x802F6F0Cu; f_801E17C4(c); // 802F6F08
  c->r[3]=0u+0x00000009u; // 802F6F0C
  c->r[4]=0u+0x00000001u; // 802F6F10
  c->lr=0x802F6F18u; f_801E1384(c); // 802F6F14
  c->r[3]=0u+0x00000000u; // 802F6F18
  c->r[4]=0u+0x00000009u; // 802F6F1C
  c->r[5]=0u+0x00000000u; // 802F6F20
  c->r[6]=0u+0x00000004u; // 802F6F24
  c->r[7]=0u+0x00000000u; // 802F6F28
  c->lr=0x802F6F30u; f_801E17F8(c); // 802F6F2C
  c->r[3]=0u+0x00000001u; // 802F6F30
  c->lr=0x802F6F38u; f_801E3D74(c); // 802F6F34
  c->r[3]=0u+0x00000004u; // 802F6F38
  c->r[4]=0u+0x00000000u; // 802F6F3C
  c->r[5]=0u+0x00000000u; // 802F6F40
  c->r[6]=0u+0x00000000u; // 802F6F44
  c->r[7]=0u+0x00000000u; // 802F6F48
  c->r[8]=0u+0x00000000u; // 802F6F4C
  c->r[9]=0u+0x00000002u; // 802F6F50
  c->lr=0x802F6F58u; f_801E3D98(c); // 802F6F54
  c->r[3]=0u+0x00000005u; // 802F6F58
  c->r[4]=0u+0x00000000u; // 802F6F5C
  c->r[5]=0u+0x00000000u; // 802F6F60
  c->r[6]=0u+0x00000000u; // 802F6F64
  c->r[7]=0u+0x00000000u; // 802F6F68
  c->r[8]=0u+0x00000000u; // 802F6F6C
  c->r[9]=0u+0x00000002u; // 802F6F70
  c->lr=0x802F6F78u; f_801E3D98(c); // 802F6F74
  c->r[3]=0u+0x00000000u; // 802F6F78
  c->lr=0x802F6F80u; f_801E1E54(c); // 802F6F7C
  c->r[3]=0u+0x00000001u; // 802F6F80
  c->lr=0x802F6F88u; f_801E5914(c); // 802F6F84
  c->r[3]=0u+0x00000000u; // 802F6F88
  c->r[4]=0u+0x000000FFu; // 802F6F8C
  c->r[5]=0u+0x000000FFu; // 802F6F90
  c->r[6]=0u+0x000000FFu; // 802F6F94
  c->lr=0x802F6F9Cu; f_801E57B8(c); // 802F6F98
  c->r[3]=0u+0x00000000u; // 802F6F9C
  c->r[4]=0u+0x0000000Fu; // 802F6FA0
  c->r[5]=0u+0x0000000Fu; // 802F6FA4
  c->r[6]=0u+0x0000000Fu; // 802F6FA8
  c->r[7]=0u+0x00000002u; // 802F6FAC
  c->lr=0x802F6FB4u; f_801E534C(c); // 802F6FB0
  c->r[3]=0u+0x00000000u; // 802F6FB4
  c->r[4]=0u+0x00000000u; // 802F6FB8
  c->r[5]=0u+0x00000000u; // 802F6FBC
  c->r[6]=0u+0x00000000u; // 802F6FC0
  c->r[7]=0u+0x00000001u; // 802F6FC4
  c->r[8]=0u+0x00000000u; // 802F6FC8
  c->lr=0x802F6FD0u; f_801E53CC(c); // 802F6FCC
  c->r[3]=0u+0x00000000u; // 802F6FD0
  c->r[4]=0u+0x00000007u; // 802F6FD4
  c->r[5]=0u+0x00000007u; // 802F6FD8
  c->r[6]=0u+0x00000007u; // 802F6FDC
  c->r[7]=0u+0x00000001u; // 802F6FE0
  c->lr=0x802F6FE8u; f_801E538C(c); // 802F6FE4
  c->r[3]=0u+0x00000000u; // 802F6FE8
  c->r[4]=0u+0x00000000u; // 802F6FEC
  c->r[5]=0u+0x00000000u; // 802F6FF0
  c->r[6]=0u+0x00000000u; // 802F6FF4
  c->r[7]=0u+0x00000001u; // 802F6FF8
  c->r[8]=0u+0x00000000u; // 802F6FFC
  c->lr=0x802F7004u; f_801E5424(c); // 802F7000
  c->r[3]=0u+0x00000007u; // 802F7004
  c->r[4]=0u+0x00000000u; // 802F7008
  c->r[5]=0u+0x00000001u; // 802F700C
  c->r[6]=0u+0x00000007u; // 802F7010
  c->r[7]=0u+0x00000000u; // 802F7014
  c->lr=0x802F701Cu; f_801E56F4(c); // 802F7018
  c->r[3]=0u+0x00000001u; // 802F701C
  c->r[4]=0u+0x00000004u; // 802F7020
  c->r[5]=0u+0x00000005u; // 802F7024
  c->r[6]=0u+0x00000005u; // 802F7028
  c->lr=0x802F7030u; f_801E5DE8(c); // 802F702C
  c->r[3]=0u+0x00000000u; // 802F7030
  c->lr=0x802F7038u; f_801E5E64(c); // 802F7034
  c->r[3]=0u+0x00000000u; // 802F7038
  c->r[4]=0u+0x00000007u; // 802F703C
  c->r[5]=0u+0x00000000u; // 802F7040
  c->lr=0x802F7048u; f_801E5E90(c); // 802F7044
  c->r[3]=0u+0x00000000u; // 802F7048
  c->lr=0x802F7050u; f_801E34B0(c); // 802F704C
  c->r[3]=0u+0x00000000u; // 802F7050
  c->lr=0x802F7058u; f_801E51F8(c); // 802F7054
  c->r[3]=0u+0x00000000u; // 802F7058
  c->r[4]=0u+0x00000000u; // 802F705C
  c->r[5]=0u+0x00000001u; // 802F7060
  c->r[6]=0u+0x00000002u; // 802F7064
  c->r[7]=0u+0x00000003u; // 802F7068
  c->lr=0x802F7070u; f_801E5678(c); // 802F706C
  c->r[3]=0u+0x00000000u; // 802F7070
  c->r[4]=0u+0x00000000u; // 802F7074
  c->r[5]=0u+0x00000000u; // 802F7078
  c->lr=0x802F7080u; f_801E563C(c); // 802F707C
  c->r[3]=0u+0x00000000u; // 802F7080
  c->lr=0x802F7088u; f_801E2BBC(c); // 802F7084
  c->r[0]=R32(c->r[1]+0x00000044u); // 802F7088
  c->lr=c->r[0]; // 802F708C
  c->r[1]=c->r[1]+0x00000040u; // 802F7090
  return; // 802F7094
}

// fn_802F7098
void f_802F7098(Ctx* __restrict c) {
  trace_call(0x802F7098u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7098
  c->r[0]=c->lr; // 802F709C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802F70A0
  c->r[11]=c->r[1]+0x00000030u; // 802F70A4
  c->lr=0x802F70ACu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F70A8
  c->r[29]=0u+0x804C0000u; // 802F70AC
  c->r[6]=0u+0x80610000u; // 802F70B0
  c->r[31]=c->r[3]|c->r[3]; // 802F70B4
  c->r[24]=c->r[4]|c->r[4]; // 802F70B8
  c->r[25]=c->r[5]|c->r[5]; // 802F70BC
  c->r[29]=c->r[29]+0x000071E0u; // 802F70C0
  c->r[3]=c->r[6]+0x000005C8u; // 802F70C4
  c->r[4]=0u+0x000000D8u; // 802F70C8
  c->lr=0x802F70D0u; f_80201D90(c); // 802F70CC
  cmps(c,0,(int32_t)c->r[3],0); // 802F70D0
  if (crb(c,2)) { goto L_802F70E4; } // 802F70D4
  if (crb(c,2)) { goto L_802F70E0; } // 802F70D8
  c->lr=0x802F70E0u; f_8031CDB4(c); // 802F70DC
L_802F70E0:;
  W32(c->r[31]+0x000005D0u,c->r[3]); // 802F70E0
L_802F70E4:;
  c->r[0]=R32(c->r[31]+0x000005D0u); // 802F70E4
  cmps(c,0,(int32_t)c->r[0],0); // 802F70E8
  if (!crb(c,2)) { goto L_802F7104; } // 802F70EC
  c->r[3]=c->r[29]+0x00000048u; // 802F70F0
  c->r[5]=c->r[29]+0x00000DCCu; // 802F70F4
  c->r[4]=0u+0x00000E97u; // 802F70F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F70FC
  c->lr=0x802F7104u; f_802FA328(c); // 802F7100
L_802F7104:;
  c->r[3]=R32(c->r[31]+0x000005D0u); // 802F7104
  c->r[4]=c->r[24]|c->r[24]; // 802F7108
  c->lr=0x802F7110u; f_8031D67C(c); // 802F710C
  c->r[27]=c->r[3]|c->r[3]; // 802F7110
  c->r[3]=R32(c->r[31]+0x000005D0u); // 802F7114
  c->r[4]=c->r[24]|c->r[24]; // 802F7118
  c->lr=0x802F7120u; f_8031D7D0(c); // 802F711C
  c->r[26]=c->r[3]|c->r[3]; // 802F7120
  c->r[30]=0u+0x80610000u; // 802F7124
  c->r[4]=c->r[26]|c->r[26]; // 802F7128
  c->r[3]=c->r[30]+0x000005C8u; // 802F712C
  c->lr=0x802F7134u; f_80201D90(c); // 802F7130
  c->r[28]=c->r[3]|c->r[3]; // 802F7134
  c->r[4]=c->r[27]|c->r[27]; // 802F7138
  c->r[3]=c->r[30]+0x000005C8u; // 802F713C
  c->lr=0x802F7144u; f_80201D90(c); // 802F7140
  c->r[5]=c->r[3]|c->r[3]; // 802F7144
  c->r[3]=R32(c->r[31]+0x000005D0u); // 802F7148
  c->r[4]=c->r[24]|c->r[24]; // 802F714C
  c->r[6]=c->r[27]|c->r[27]; // 802F7150
  c->r[7]=c->r[28]|c->r[28]; // 802F7154
  c->r[8]=c->r[26]|c->r[26]; // 802F7158
  c->lr=0x802F7160u; f_8031D360(c); // 802F715C
  cmps(c,0,(int32_t)c->r[3],0); // 802F7160
  if (!crb(c,2)) { goto L_802F717C; } // 802F7164
  c->r[3]=c->r[29]+0x00000048u; // 802F7168
  c->r[5]=c->r[29]+0x00000DFCu; // 802F716C
  c->r[4]=0u+0x00000EA9u; // 802F7170
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7174
  c->lr=0x802F717Cu; f_802FA328(c); // 802F7178
L_802F717C:;
  c->r[3]=0u+0x80610000u; // 802F717C
  c->r[4]=0u+0x00000004u; // 802F7180
  c->r[3]=c->r[3]+0x000005C8u; // 802F7184
  c->lr=0x802F718Cu; f_80201D90(c); // 802F7188
  cmps(c,0,(int32_t)c->r[3],0); // 802F718C
  if (crb(c,2)) { goto L_802F71A4; } // 802F7190
  if (crb(c,2)) { goto L_802F71A0; } // 802F7194
  c->r[0]=0u+0x00000000u; // 802F7198
  W32(c->r[3]+0x00000000u,c->r[0]); // 802F719C
L_802F71A0:;
  W32(c->r[31]+0x000005E4u,c->r[3]); // 802F71A0
L_802F71A4:;
  c->r[0]=R32(c->r[31]+0x000005E4u); // 802F71A4
  cmps(c,0,(int32_t)c->r[0],0); // 802F71A8
  if (!crb(c,2)) { goto L_802F71C4; } // 802F71AC
  c->r[3]=c->r[29]+0x00000048u; // 802F71B0
  c->r[5]=c->r[29]+0x00000E1Cu; // 802F71B4
  c->r[4]=0u+0x00000EB0u; // 802F71B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F71BC
  c->lr=0x802F71C4u; f_802FA328(c); // 802F71C0
L_802F71C4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802F71C4
  if (crb(c,2)) { goto L_802F72A0; } // 802F71C8
  c->r[3]=0u+0x80610000u; // 802F71CC
  c->r[4]=0u+0x0000002Cu; // 802F71D0
  c->r[3]=c->r[3]+0x000005C8u; // 802F71D4
  c->lr=0x802F71DCu; f_80201D90(c); // 802F71D8
  cmps(c,0,(int32_t)c->r[3],0); // 802F71DC
  if (crb(c,2)) { goto L_802F71F0; } // 802F71E0
  if (crb(c,2)) { goto L_802F71EC; } // 802F71E4
  c->lr=0x802F71ECu; f_8032054C(c); // 802F71E8
L_802F71EC:;
  W32(c->r[31]+0x000005E0u,c->r[3]); // 802F71EC
L_802F71F0:;
  c->r[0]=R32(c->r[31]+0x000005E0u); // 802F71F0
  cmps(c,0,(int32_t)c->r[0],0); // 802F71F4
  if (!crb(c,2)) { goto L_802F7210; } // 802F71F8
  c->r[3]=c->r[29]+0x00000048u; // 802F71FC
  c->r[5]=c->r[29]+0x00000E44u; // 802F7200
  c->r[4]=0u+0x00000EB9u; // 802F7204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7208
  c->lr=0x802F7210u; f_802FA328(c); // 802F720C
L_802F7210:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 802F7210
  c->r[3]=0u+0x00070000u; // 802F7214
  c->r[30]=c->r[3]+0xFFFFF800u; // 802F7218
  cmps(c,0,(int32_t)c->r[0],2); // 802F721C
  if (!crb(c,2)) { goto L_802F7228; } // 802F7220
  c->r[30]=0u+0x00060000u; // 802F7224
L_802F7228:;
  c->r[3]=0u+0x80610000u; // 802F7228
  c->r[4]=c->r[30]|c->r[30]; // 802F722C
  c->r[3]=c->r[3]+0x000005C8u; // 802F7230
  c->lr=0x802F7238u; f_80201D90(c); // 802F7234
  c->r[4]=c->r[3]|c->r[3]; // 802F7238
  c->r[3]=R32(c->r[31]+0x000005E0u); // 802F723C
  c->r[5]=c->r[30]|c->r[30]; // 802F7240
  c->lr=0x802F7248u; f_80320604(c); // 802F7244
  c->r[3]=R32(c->r[31]+0x000005E0u); // 802F7248
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802F724C
  cmps(c,0,(int32_t)c->r[0],0); // 802F7250
  if (!crb(c,2)) { goto L_802F726C; } // 802F7254
  c->r[3]=c->r[29]+0x00000048u; // 802F7258
  c->r[5]=c->r[29]+0x00000E68u; // 802F725C
  c->r[4]=0u+0x00000EC1u; // 802F7260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7264
  c->lr=0x802F726Cu; f_802FA328(c); // 802F7268
L_802F726C:;
  c->r[3]=R32(c->r[31]+0x000005D0u); // 802F726C
  c->r[4]=0u+0x00000000u; // 802F7270
  c->r[5]=R32(c->r[31]+0x000005E0u); // 802F7274
  c->r[6]=0u+0x00000000u; // 802F7278
  c->lr=0x802F7280u; f_8031EEB8(c); // 802F727C
  cmps(c,0,(int32_t)c->r[3],0); // 802F7280
  if (!crb(c,2)) { goto L_802F72A8; } // 802F7284
  c->r[3]=c->r[29]+0x00000048u; // 802F7288
  c->r[5]=c->r[29]+0x00000DFCu; // 802F728C
  c->r[4]=0u+0x00000EC4u; // 802F7290
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7294
  c->lr=0x802F729Cu; f_802FA328(c); // 802F7298
  goto L_802F72A8; // 802F729C
L_802F72A0:;
  c->r[0]=0u+0x00000000u; // 802F72A0
  W32(c->r[31]+0x000005E0u,c->r[0]); // 802F72A4
L_802F72A8:;
  c->r[11]=c->r[1]+0x00000030u; // 802F72A8
  c->lr=0x802F72B0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F72AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802F72B0
  c->lr=c->r[0]; // 802F72B4
  c->r[1]=c->r[1]+0x00000030u; // 802F72B8
  return; // 802F72BC
}

// fn_802F72C0
void f_802F72C0(Ctx* __restrict c) {
  trace_call(0x802F72C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F72C0
  c->r[0]=c->lr; // 802F72C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F72C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F72CC
  c->r[31]=0u+0x80610000u; // 802F72D0
  c->r[31]=c->r[31]+0x000005D8u; // 802F72D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F72D8
  c->r[30]=c->r[3]|c->r[3]; // 802F72DC
  c->r[3]=c->r[31]|c->r[31]; // 802F72E0
  c->lr=0x802F72E8u; f_801BF938(c); // 802F72E4
  c->r[3]=R32(c->r[30]+0x000005D4u); // 802F72E8
  cmps(c,0,(int32_t)c->r[3],0); // 802F72EC
  if (crb(c,2)) { goto L_802F7310; } // 802F72F0
  c->lr=0x802F72F8u; f_803135A0(c); // 802F72F4
  c->r[3]=R32(c->r[30]+0x000005D4u); // 802F72F8
  c->r[4]=0u+0xFFFFFFFFu; // 802F72FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7300
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F7304
  c->ctr=c->r[12]; // 802F7308
  if (true) { c->lr=0x802F7310u; dispatch(c,c->ctr); } // 802F730C
L_802F7310:;
  c->r[3]=R32(c->r[30]+0x000005D8u); // 802F7310
  cmps(c,0,(int32_t)c->r[3],0); // 802F7314
  if (crb(c,2)) { goto L_802F7338; } // 802F7318
  c->lr=0x802F7320u; f_80314E8C(c); // 802F731C
  c->r[3]=R32(c->r[30]+0x000005D8u); // 802F7320
  c->r[4]=0u+0xFFFFFFFFu; // 802F7324
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7328
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F732C
  c->ctr=c->r[12]; // 802F7330
  if (true) { c->lr=0x802F7338u; dispatch(c,c->ctr); } // 802F7334
L_802F7338:;
  c->r[3]=R32(c->r[30]+0x000005DCu); // 802F7338
  cmps(c,0,(int32_t)c->r[3],0); // 802F733C
  if (crb(c,2)) { goto L_802F7360; } // 802F7340
  c->lr=0x802F7348u; f_803166B0(c); // 802F7344
  c->r[3]=R32(c->r[30]+0x000005DCu); // 802F7348
  c->r[4]=0u+0xFFFFFFFFu; // 802F734C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7350
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F7354
  c->ctr=c->r[12]; // 802F7358
  if (true) { c->lr=0x802F7360u; dispatch(c,c->ctr); } // 802F735C
L_802F7360:;
  c->r[3]=R32(c->r[30]+0x000005E0u); // 802F7360
  cmps(c,0,(int32_t)c->r[3],0); // 802F7364
  if (crb(c,2)) { goto L_802F7388; } // 802F7368
  c->lr=0x802F7370u; f_8032060C(c); // 802F736C
  c->r[3]=R32(c->r[30]+0x000005E0u); // 802F7370
  c->r[4]=0u+0xFFFFFFFFu; // 802F7374
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7378
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F737C
  c->ctr=c->r[12]; // 802F7380
  if (true) { c->lr=0x802F7388u; dispatch(c,c->ctr); } // 802F7384
L_802F7388:;
  c->r[3]=R32(c->r[30]+0x000005D0u); // 802F7388
  cmps(c,0,(int32_t)c->r[3],0); // 802F738C
  if (crb(c,2)) { goto L_802F73B0; } // 802F7390
  c->lr=0x802F7398u; f_8031D520(c); // 802F7394
  c->r[3]=R32(c->r[30]+0x000005D0u); // 802F7398
  c->r[4]=0u+0xFFFFFFFFu; // 802F739C
  c->r[12]=R32(c->r[3]+0x00000008u); // 802F73A0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F73A4
  c->ctr=c->r[12]; // 802F73A8
  if (true) { c->lr=0x802F73B0u; dispatch(c,c->ctr); } // 802F73AC
L_802F73B0:;
  c->r[3]=R32(c->r[30]+0x000005E4u); // 802F73B0
  cmps(c,0,(int32_t)c->r[3],0); // 802F73B4
  if (crb(c,2)) { goto L_802F73C4; } // 802F73B8
  if (crb(c,2)) { goto L_802F73C4; } // 802F73BC
  c->lr=0x802F73C4u; f_803204FC(c); // 802F73C0
L_802F73C4:;
  c->lr=0x802F73C8u; f_8032258C(c); // 802F73C4
  c->r[3]=c->r[31]|c->r[31]; // 802F73C8
  c->lr=0x802F73D0u; f_801BFA14(c); // 802F73CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F73D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F73D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F73D8
  c->lr=c->r[0]; // 802F73DC
  c->r[1]=c->r[1]+0x00000010u; // 802F73E0
  return; // 802F73E4
}

// fn_802F73E8
void f_802F73E8(Ctx* __restrict c) {
  trace_call(0x802F73E8u);
  return; // 802F73E8
}

// fn_802F73EC
void f_802F73EC(Ctx* __restrict c) {
  trace_call(0x802F73ECu);
  return; // 802F73EC
}

// fn_802F73F0
void f_802F73F0(Ctx* __restrict c) {
  trace_call(0x802F73F0u);
  return; // 802F73F0
}

// fn_802F73F4
void f_802F73F4(Ctx* __restrict c) {
  trace_call(0x802F73F4u);
  return; // 802F73F4
}

// fn_802F73F8
void f_802F73F8(Ctx* __restrict c) {
  trace_call(0x802F73F8u);
  return; // 802F73F8
}

// fn_802F73FC
void f_802F73FC(Ctx* __restrict c) {
  trace_call(0x802F73FCu);
  return; // 802F73FC
}

// fn_802F7400
void f_802F7400(Ctx* __restrict c) {
  trace_call(0x802F7400u);
  c->r[4]=0u+0x804D0000u; // 802F7400
  c->r[0]=0u+0x00000000u; // 802F7404
  c->r[4]=c->r[4]+0xFFFF8188u; // 802F7408
  W32(c->r[3]+0x00000020u,c->r[0]); // 802F740C
  W32(c->r[3]+0x00000000u,c->r[4]); // 802F7410
  W32(c->r[3]+0x00000024u,c->r[0]); // 802F7414
  return; // 802F7418
}

// fn_802F741C
void f_802F741C(Ctx* __restrict c) {
  trace_call(0x802F741Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F741C
  c->r[0]=c->lr; // 802F7420
  cmps(c,0,(int32_t)c->r[3],0); // 802F7424
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F7428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F742C
  c->r[31]=c->r[3]|c->r[3]; // 802F7430
  if (crb(c,2)) { goto L_802F7444; } // 802F7434
  cmps(c,0,(int32_t)c->r[4],0); // 802F7438
  if (!crb(c,1)) { goto L_802F7444; } // 802F743C
  c->lr=0x802F7444u; f_8001AAC0(c); // 802F7440
L_802F7444:;
  c->r[3]=c->r[31]|c->r[31]; // 802F7444
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F7448
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F744C
  c->lr=c->r[0]; // 802F7450
  c->r[1]=c->r[1]+0x00000010u; // 802F7454
  return; // 802F7458
}

// fn_802F745C
void f_802F745C(Ctx* __restrict c) {
  trace_call(0x802F745Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F745C
  c->r[0]=c->lr; // 802F7460
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7464
  c->r[11]=c->r[1]+0x00000020u; // 802F7468
  c->lr=0x802F7470u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F746C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802F7470
  c->r[26]=c->r[3]|c->r[3]; // 802F7474
  cmps(c,0,(int32_t)c->r[0],1); // 802F7478
  if (!crb(c,2)) { goto L_802F74A4; } // 802F747C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7480
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F7484
  c->ctr=c->r[12]; // 802F7488
  if (true) { c->lr=0x802F7490u; dispatch(c,c->ctr); } // 802F748C
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7490
  c->r[27]=0u+0x00000001u; // 802F7494
  c->r[3]=R32(c->r[26]+0x00000024u); // 802F7498
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 802F749C
  goto L_802F74A8; // 802F74A0
L_802F74A4:;
  c->r[27]=0u+0x00000000u; // 802F74A4
L_802F74A8:;
  c->r[3]=R32(c->r[26]+0x00000020u); // 802F74A8
  c->r[28]=0u+0x804D0000u; // 802F74AC
  c->r[29]=0u+0x804D0000u; // 802F74B0
  c->r[31]=R32(c->r[3]+0x00000010u); // 802F74B4
  c->r[30]=c->r[3]+0x00000010u; // 802F74B8
  goto L_802F7500; // 802F74BC
L_802F74C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802F74C0
  if (!crb(c,2)) { goto L_802F74DC; } // 802F74C4
  c->r[3]=c->r[28]+0xFFFF814Cu; // 802F74C8
  c->r[5]=c->r[29]+0xFFFF8128u; // 802F74CC
  c->r[4]=0u+0x0000023Du; // 802F74D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F74D4
  c->lr=0x802F74DCu; f_802FA328(c); // 802F74D8
L_802F74DC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 802F74DC
  c->r[5]=c->r[27]|c->r[27]; // 802F74E0
  c->r[4]=R32(c->r[26]+0x00000024u); // 802F74E4
  c->r[6]=0u+0x00000000u; // 802F74E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F74EC
  c->r[12]=R32(c->r[12]+0x00000058u); // 802F74F0
  c->ctr=c->r[12]; // 802F74F4
  if (true) { c->lr=0x802F74FCu; dispatch(c,c->ctr); } // 802F74F8
  c->r[31]=R32(c->r[31]+0x00000000u); // 802F74FC
L_802F7500:;
  cmpu(c,0,c->r[31],c->r[30]); // 802F7500
  if (!crb(c,2)) { IRQCHK(c); goto L_802F74C0; } // 802F7504
  c->r[11]=c->r[1]+0x00000020u; // 802F7508
  c->lr=0x802F7510u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F750C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F7510
  c->lr=c->r[0]; // 802F7514
  c->r[1]=c->r[1]+0x00000020u; // 802F7518
  return; // 802F751C
}

// init__Q210homebutton15FrameControllerFifff
void f_802F7520(Ctx* __restrict c) {
  trace_call(0x802F7520u);
  c->r[0]=0u+0x00000000u; // 802F7520
  cmps(c,0,(int32_t)c->r[4],1); // 802F7524
  W32(c->r[3]+0x00000018u,c->r[4]); // 802F7528
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802F752C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802F7530
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 802F7534
  W32(c->r[3]+0x00000014u,c->r[0]); // 802F7538
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 802F753C
  if (!crb(c,2)) { goto L_802F754C; } // 802F7540
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802F7544
  goto L_802F7550; // 802F7548
L_802F754C:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802F754C
L_802F7550:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F7550
  return; // 802F7554
}

// initFrame__Q210homebutton15FrameControllerFv
void f_802F7558(Ctx* __restrict c) {
  trace_call(0x802F7558u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 802F7558
  cmps(c,0,(int32_t)c->r[0],1); // 802F755C
  if (!crb(c,2)) { goto L_802F756C; } // 802F7560
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7564
  goto L_802F7570; // 802F7568
L_802F756C:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F756C
L_802F7570:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F7570
  return; // 802F7574
}

// fn_802F7578
void f_802F7578(Ctx* __restrict c) {
  trace_call(0x802F7578u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 802F7578
  cmps(c,0,(int32_t)c->r[0],1); // 802F757C
  if (!crb(c,2)) return; // 802F7580
  c->r[0]=R32(c->r[3]+0x00000018u); // 802F7584
  cmps(c,0,(int32_t)c->r[0],2); // 802F7588
  if (crb(c,2)) { goto L_802F7618; } // 802F758C
  if (!crb(c,0)) { goto L_802F75A4; } // 802F7590
  cmps(c,0,(int32_t)c->r[0],0); // 802F7594
  if (crb(c,2)) { goto L_802F75B0; } // 802F7598
  if (!crb(c,0)) { goto L_802F75E8; } // 802F759C
  return; // 802F75A0
L_802F75A4:;
  cmps(c,0,(int32_t)c->r[0],4); // 802F75A4
  if (!crb(c,0)) return; // 802F75A8
  goto L_802F764C; // 802F75AC
L_802F75B0:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802F75B0
  {uint32_t ea=c->r[2]+0xFFFFD008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F75B4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802F75B8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F75BC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802F75C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802F75C4
  fcmp(c,0,c->f[0],c->f[2]); // 802F75C8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F75CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802F75D0
  if (!crb(c,2)) return; // 802F75D4
  c->r[0]=0u+0x00000000u; // 802F75D8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802F75DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 802F75E0
  return; // 802F75E4
L_802F75E8:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802F75E8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F75EC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F75F0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802F75F4
  fcmp(c,0,c->f[1],c->f[0]); // 802F75F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802F75FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F7600
  if (!crb(c,2)) return; // 802F7604
  c->r[0]=0u+0x00000000u; // 802F7608
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F760C
  W32(c->r[3]+0x00000014u,c->r[0]); // 802F7610
  return; // 802F7614
L_802F7618:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802F7618
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F761C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F7620
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 802F7624
  fcmp(c,0,c->f[2],c->f[1]); // 802F7628
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802F762C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802F7630
  if (!crb(c,2)) return; // 802F7634
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7638
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802F763C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 802F7640
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F7644
  return; // 802F7648
L_802F764C:;
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 802F764C
  cmps(c,0,(int32_t)c->r[0],0); // 802F7650
  if (!crb(c,2)) { goto L_802F7690; } // 802F7654
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802F7658
  {uint32_t ea=c->r[2]+0xFFFFD008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F765C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802F7660
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7664
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802F7668
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802F766C
  fcmp(c,0,c->f[0],c->f[2]); // 802F7670
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F7674
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802F7678
  if (!crb(c,2)) return; // 802F767C
  c->r[0]=0u+0x00000001u; // 802F7680
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802F7684
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 802F7688
  return; // 802F768C
L_802F7690:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802F7690
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F7694
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7698
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802F769C
  fcmp(c,0,c->f[1],c->f[0]); // 802F76A0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802F76A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F76A8
  if (!crb(c,2)) return; // 802F76AC
  c->r[0]=0u+0x00000000u; // 802F76B0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F76B4
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 802F76B8
  return; // 802F76BC
}

// fn_802F76C0
void f_802F76C0(Ctx* __restrict c) {
  trace_call(0x802F76C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F76C0
  c->r[0]=c->lr; // 802F76C4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802F76C8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802F76CC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802F76D0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802F76D4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802F76D8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 802F76DC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 802F76E0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 802F76E4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 802F76E8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 802F76EC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 802F76F0
  c->f[27]=c->f[1]; // 802F76F4
  c->f[28]=c->f[2]; // 802F76F8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802F76FC
  c->f[29]=c->f[3]; // 802F7700
  c->f[30]=c->f[4]; // 802F7704
  c->r[31]=c->r[4]|c->r[4]; // 802F7708
  W32(c->r[1]+0x00000038u,c->r[30]); // 802F770C
  c->f[31]=c->f[5]; // 802F7710
  c->r[30]=c->r[3]|c->r[3]; // 802F7714
  c->lr=0x802F771Cu; f_801E17C4(c); // 802F7718
  c->r[3]=0u+0x00000009u; // 802F771C
  c->r[4]=0u+0x00000001u; // 802F7720
  c->lr=0x802F7728u; f_801E1384(c); // 802F7724
  c->r[3]=0u+0x0000000Bu; // 802F7728
  c->r[4]=0u+0x00000001u; // 802F772C
  c->lr=0x802F7734u; f_801E1384(c); // 802F7730
  c->r[3]=0u+0x00000000u; // 802F7734
  c->r[4]=0u+0x00000009u; // 802F7738
  c->r[5]=0u+0x00000001u; // 802F773C
  c->r[6]=0u+0x00000004u; // 802F7740
  c->r[7]=0u+0x00000000u; // 802F7744
  c->lr=0x802F774Cu; f_801E17F8(c); // 802F7748
  c->r[3]=0u+0x00000000u; // 802F774C
  c->r[4]=0u+0x0000000Bu; // 802F7750
  c->r[5]=0u+0x00000001u; // 802F7754
  c->r[6]=0u+0x00000005u; // 802F7758
  c->r[7]=0u+0x00000000u; // 802F775C
  c->lr=0x802F7764u; f_801E17F8(c); // 802F7760
  c->r[3]=0u+0x00000000u; // 802F7764
  c->lr=0x802F776Cu; f_801E2BBC(c); // 802F7768
  c->r[3]=0u+0x00000001u; // 802F776C
  c->lr=0x802F7774u; f_801E3D74(c); // 802F7770
  c->r[3]=0u+0x00000004u; // 802F7774
  c->r[4]=0u+0x00000000u; // 802F7778
  c->r[5]=0u+0x00000001u; // 802F777C
  c->r[6]=0u+0x00000001u; // 802F7780
  c->r[7]=0u+0x00000000u; // 802F7784
  c->r[8]=0u+0x00000000u; // 802F7788
  c->r[9]=0u+0x00000002u; // 802F778C
  c->lr=0x802F7794u; f_801E3D98(c); // 802F7790
  c->r[3]=0u+0x00000000u; // 802F7794
  c->lr=0x802F779Cu; f_801E1E54(c); // 802F7798
  c->r[3]=0u+0x00000001u; // 802F779C
  c->lr=0x802F77A4u; f_801E5914(c); // 802F77A0
  c->r[3]=0u+0x00000000u; // 802F77A4
  c->r[4]=0u+0x00000004u; // 802F77A8
  c->lr=0x802F77B0u; f_801E52B8(c); // 802F77AC
  c->r[3]=0u+0x00000000u; // 802F77B0
  c->r[4]=0u+0x000000FFu; // 802F77B4
  c->r[5]=0u+0x000000FFu; // 802F77B8
  c->r[6]=0u+0x00000004u; // 802F77BC
  c->lr=0x802F77C4u; f_801E57B8(c); // 802F77C0
  c->r[3]=0u+0x00000000u; // 802F77C4
  c->r[4]=0u+0x00000000u; // 802F77C8
  c->r[5]=0u+0x00000000u; // 802F77CC
  c->r[6]=0u+0x00000005u; // 802F77D0
  c->lr=0x802F77D8u; f_801E5DE8(c); // 802F77D4
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F77D8
  c->r[3]=c->r[1]+0x00000008u; // 802F77DC
  c->f[2]=c->f[1]; // 802F77E0
  c->f[3]=c->f[1]; // 802F77E4
  c->lr=0x802F77ECu; f_801C5DBC(c); // 802F77E8
  c->r[3]=c->r[1]+0x00000008u; // 802F77EC
  c->r[4]=0u+0x00000000u; // 802F77F0
  c->lr=0x802F77F8u; f_801E6204(c); // 802F77F4
  c->r[3]=c->r[30]|c->r[30]; // 802F77F8
  c->r[4]=0u+0x00000000u; // 802F77FC
  c->lr=0x802F7804u; f_801E2B18(c); // 802F7800
  c->r[3]=0u+0x000000A8u; // 802F7804
  c->r[4]=0u+0x00000000u; // 802F7808
  c->r[5]=0u+0x00000002u; // 802F780C
  c->lr=0x802F7814u; f_801E28F4(c); // 802F7810
  c->r[3]=0u+0xCC010000u; // 802F7814
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 802F7818
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 802F781C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 802F7820
  c->r[0]=R32(c->r[31]+0x00000000u); // 802F7824
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802F7828
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 802F782C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 802F7830
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 802F7834
  c->r[0]=R32(c->r[31]+0x00000000u); // 802F7838
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802F783C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 802F7840
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802F7844
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802F7848
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802F784C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 802F7850
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 802F7854
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 802F7858
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 802F785C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 802F7860
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 802F7864
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802F7868
  c->r[0]=R32(c->r[1]+0x00000094u); // 802F786C
  c->r[30]=R32(c->r[1]+0x00000038u); // 802F7870
  c->lr=c->r[0]; // 802F7874
  c->r[1]=c->r[1]+0x00000090u; // 802F7878
  return; // 802F787C
}

// update__Q310homebutton3gui9ComponentFiffUlUlUlPv
void f_802F7880(Ctx* __restrict c) {
  trace_call(0x802F7880u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7880
  c->r[0]=c->lr; // 802F7884
  W32(c->r[1]+0x00000034u,c->r[0]); // 802F7888
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 802F788C
  c->f[31]=c->f[2]; // 802F7890
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802F7894
  c->f[30]=c->f[1]; // 802F7898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F789C
  c->r[31]=0u+0x00000000u; // 802F78A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F78A4
  c->r[30]=c->r[8]|c->r[8]; // 802F78A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F78AC
  c->r[29]=c->r[4]|c->r[4]; // 802F78B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F78B4
  c->r[28]=c->r[3]|c->r[3]; // 802F78B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F78BC
  c->r[12]=R32(c->r[12]+0x00000058u); // 802F78C0
  c->ctr=c->r[12]; // 802F78C4
  if (true) { c->lr=0x802F78CCu; dispatch(c,c->ctr); } // 802F78C8
  cmps(c,0,(int32_t)c->r[3],0); // 802F78CC
  if (crb(c,2)) { goto L_802F7A5C; } // 802F78D0
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F78D4
  c->f[1]=c->f[30]; // 802F78D8
  c->f[2]=c->f[31]; // 802F78DC
  c->r[3]=c->r[28]|c->r[28]; // 802F78E0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 802F78E4
  c->ctr=c->r[12]; // 802F78E8
  if (true) { c->lr=0x802F78F0u; dispatch(c,c->ctr); } // 802F78EC
  cmps(c,0,(int32_t)c->r[3],0); // 802F78F0
  if (crb(c,2)) { goto L_802F79D8; } // 802F78F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F78F8
  c->r[3]=c->r[28]|c->r[28]; // 802F78FC
  c->r[4]=c->r[29]|c->r[29]; // 802F7900
  c->r[12]=R32(c->r[12]+0x00000024u); // 802F7904
  c->ctr=c->r[12]; // 802F7908
  if (true) { c->lr=0x802F7910u; dispatch(c,c->ctr); } // 802F790C
  cmps(c,0,(int32_t)c->r[3],0); // 802F7910
  if (crb(c,2)) { goto L_802F796C; } // 802F7914
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F7918
  c->f[1]=c->f[30]; // 802F791C
  c->f[2]=c->f[31]; // 802F7920
  c->r[3]=c->r[28]|c->r[28]; // 802F7924
  c->r[12]=R32(c->r[12]+0x00000038u); // 802F7928
  c->ctr=c->r[12]; // 802F792C
  if (true) { c->lr=0x802F7934u; dispatch(c,c->ctr); } // 802F7930
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F7934
  c->r[3]=c->r[28]|c->r[28]; // 802F7938
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F793C
  c->ctr=c->r[12]; // 802F7940
  if (true) { c->lr=0x802F7948u; dispatch(c,c->ctr); } // 802F7944
  c->r[4]=c->r[3]|c->r[3]; // 802F7948
  c->r[3]=R32(c->r[28]+0x00000028u); // 802F794C
  c->r[6]=c->r[30]|c->r[30]; // 802F7950
  c->r[5]=0u+0x00000003u; // 802F7954
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7958
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F795C
  c->ctr=c->r[12]; // 802F7960
  if (true) { c->lr=0x802F7968u; dispatch(c,c->ctr); } // 802F7964
  goto L_802F79D0; // 802F7968
L_802F796C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F796C
  c->r[3]=c->r[28]|c->r[28]; // 802F7970
  c->r[4]=c->r[29]|c->r[29]; // 802F7974
  c->r[5]=0u+0x00000001u; // 802F7978
  c->r[12]=R32(c->r[12]+0x00000028u); // 802F797C
  c->ctr=c->r[12]; // 802F7980
  if (true) { c->lr=0x802F7988u; dispatch(c,c->ctr); } // 802F7984
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F7988
  c->r[3]=c->r[28]|c->r[28]; // 802F798C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 802F7990
  c->ctr=c->r[12]; // 802F7994
  if (true) { c->lr=0x802F799Cu; dispatch(c,c->ctr); } // 802F7998
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F799C
  c->r[3]=c->r[28]|c->r[28]; // 802F79A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F79A4
  c->ctr=c->r[12]; // 802F79A8
  if (true) { c->lr=0x802F79B0u; dispatch(c,c->ctr); } // 802F79AC
  c->r[4]=c->r[3]|c->r[3]; // 802F79B0
  c->r[3]=R32(c->r[28]+0x00000028u); // 802F79B4
  c->r[6]=c->r[30]|c->r[30]; // 802F79B8
  c->r[5]=0u+0x00000001u; // 802F79BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F79C0
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F79C4
  c->ctr=c->r[12]; // 802F79C8
  if (true) { c->lr=0x802F79D0u; dispatch(c,c->ctr); } // 802F79CC
L_802F79D0:;
  c->r[31]=0u+0x00000001u; // 802F79D0
  goto L_802F7A5C; // 802F79D4
L_802F79D8:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F79D8
  c->r[3]=c->r[28]|c->r[28]; // 802F79DC
  c->r[4]=c->r[29]|c->r[29]; // 802F79E0
  c->r[12]=R32(c->r[12]+0x00000024u); // 802F79E4
  c->ctr=c->r[12]; // 802F79E8
  if (true) { c->lr=0x802F79F0u; dispatch(c,c->ctr); } // 802F79EC
  cmps(c,0,(int32_t)c->r[3],0); // 802F79F0
  if (crb(c,2)) { goto L_802F7A5C; } // 802F79F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F79F8
  c->r[3]=c->r[28]|c->r[28]; // 802F79FC
  c->r[4]=c->r[29]|c->r[29]; // 802F7A00
  c->r[5]=0u+0x00000000u; // 802F7A04
  c->r[12]=R32(c->r[12]+0x00000028u); // 802F7A08
  c->ctr=c->r[12]; // 802F7A0C
  if (true) { c->lr=0x802F7A14u; dispatch(c,c->ctr); } // 802F7A10
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F7A14
  c->r[3]=c->r[28]|c->r[28]; // 802F7A18
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F7A1C
  c->ctr=c->r[12]; // 802F7A20
  if (true) { c->lr=0x802F7A28u; dispatch(c,c->ctr); } // 802F7A24
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F7A28
  c->r[3]=c->r[28]|c->r[28]; // 802F7A2C
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F7A30
  c->ctr=c->r[12]; // 802F7A34
  if (true) { c->lr=0x802F7A3Cu; dispatch(c,c->ctr); } // 802F7A38
  c->r[4]=c->r[3]|c->r[3]; // 802F7A3C
  c->r[3]=R32(c->r[28]+0x00000028u); // 802F7A40
  c->r[6]=c->r[30]|c->r[30]; // 802F7A44
  c->r[5]=0u+0x00000002u; // 802F7A48
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7A4C
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F7A50
  c->ctr=c->r[12]; // 802F7A54
  if (true) { c->lr=0x802F7A5Cu; dispatch(c,c->ctr); } // 802F7A58
L_802F7A5C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 802F7A5C
  c->r[3]=c->r[31]|c->r[31]; // 802F7A60
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802F7A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F7A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F7A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F7A70
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F7A74
  c->r[0]=R32(c->r[1]+0x00000034u); // 802F7A78
  c->lr=c->r[0]; // 802F7A7C
  c->r[1]=c->r[1]+0x00000030u; // 802F7A80
  return; // 802F7A84
}

// fn_802F7A88
void f_802F7A88(Ctx* __restrict c) {
  trace_call(0x802F7A88u);
  c->r[3]=0u+0x00000001u; // 802F7A88
  return; // 802F7A8C
}

// fn_802F7A90
void f_802F7A90(Ctx* __restrict c) {
  trace_call(0x802F7A90u);
  c->r[3]=c->r[3]+c->r[4]; // 802F7A90
  c->r[3]=R8(c->r[3]+0x00000004u); // 802F7A94
  return; // 802F7A98
}

// fn_802F7A9C
void f_802F7A9C(Ctx* __restrict c) {
  trace_call(0x802F7A9Cu);
  return; // 802F7A9C
}

// fn_802F7AA0
void f_802F7AA0(Ctx* __restrict c) {
  trace_call(0x802F7AA0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F7AA0
  cmps(c,0,(int32_t)c->r[3],0); // 802F7AA4
  if (crb(c,2)) return; // 802F7AA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7AAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802F7AB0
  c->ctr=c->r[12]; // 802F7AB4
  if (true) { dispatch(c,c->ctr); return; } // 802F7AB8
  return; // 802F7ABC
}

// fn_802F7AC0
void f_802F7AC0(Ctx* __restrict c) {
  trace_call(0x802F7AC0u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 802F7AC0
  return; // 802F7AC4
}

// setPointed__Q310homebutton3gui9ComponentFib
void f_802F7AC8(Ctx* __restrict c) {
  trace_call(0x802F7AC8u);
  c->r[3]=c->r[3]+c->r[4]; // 802F7AC8
  W8(c->r[3]+0x00000004u,c->r[5]); // 802F7ACC
  return; // 802F7AD0
}

// fn_802F7AD4
void f_802F7AD4(Ctx* __restrict c) {
  trace_call(0x802F7AD4u);
  return; // 802F7AD4
}

// fn_802F7AD8
void f_802F7AD8(Ctx* __restrict c) {
  trace_call(0x802F7AD8u);
  return; // 802F7AD8
}

// __dt__Q310homebutton3gui7ManagerFv
void f_802F7ADC(Ctx* __restrict c) {
  trace_call(0x802F7ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7ADC
  c->r[0]=c->lr; // 802F7AE0
  cmps(c,0,(int32_t)c->r[3],0); // 802F7AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F7AEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F7AF0
  c->r[30]=c->r[4]|c->r[4]; // 802F7AF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F7AF8
  c->r[29]=c->r[3]|c->r[3]; // 802F7AFC
  if (crb(c,2)) { goto L_802F7B78; } // 802F7B00
  c->r[5]=0u+0x804D0000u; // 802F7B04
  c->r[4]=0u+0x00000000u; // 802F7B08
  c->r[5]=c->r[5]+0xFFFF8254u; // 802F7B0C
  W32(c->r[3]+0x00000000u,c->r[5]); // 802F7B10
  c->r[3]=c->r[3]+0x00000008u; // 802F7B14
  c->lr=0x802F7B1Cu; f_803300F4(c); // 802F7B18
  c->r[31]=c->r[3]|c->r[3]; // 802F7B1C
  goto L_802F7B60; // 802F7B20
L_802F7B24:;
  c->r[4]=c->r[31]|c->r[31]; // 802F7B24
  c->r[3]=c->r[29]+0x00000008u; // 802F7B28
  c->lr=0x802F7B30u; f_80330010(c); // 802F7B2C
  c->r[3]=R32(c->r[29]+0x00000014u); // 802F7B30
  cmps(c,0,(int32_t)c->r[3],0); // 802F7B34
  if (crb(c,2)) { goto L_802F7B48; } // 802F7B38
  c->r[4]=c->r[31]|c->r[31]; // 802F7B3C
  c->lr=0x802F7B44u; f_80201DA0(c); // 802F7B40
  goto L_802F7B50; // 802F7B44
L_802F7B48:;
  c->r[3]=c->r[31]|c->r[31]; // 802F7B48
  c->lr=0x802F7B50u; f_8001AAC0(c); // 802F7B4C
L_802F7B50:;
  c->r[3]=c->r[29]+0x00000008u; // 802F7B50
  c->r[4]=0u+0x00000000u; // 802F7B54
  c->lr=0x802F7B5Cu; f_803300F4(c); // 802F7B58
  c->r[31]=c->r[3]|c->r[3]; // 802F7B5C
L_802F7B60:;
  cmps(c,0,(int32_t)c->r[31],0); // 802F7B60
  if (!crb(c,2)) { IRQCHK(c); goto L_802F7B24; } // 802F7B64
  cmps(c,0,(int32_t)c->r[30],0); // 802F7B68
  if (!crb(c,1)) { goto L_802F7B78; } // 802F7B6C
  c->r[3]=c->r[29]|c->r[29]; // 802F7B70
  c->lr=0x802F7B78u; f_8001AAC0(c); // 802F7B74
L_802F7B78:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F7B78
  c->r[3]=c->r[29]|c->r[29]; // 802F7B7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F7B80
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F7B84
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F7B88
  c->lr=c->r[0]; // 802F7B8C
  c->r[1]=c->r[1]+0x00000020u; // 802F7B90
  return; // 802F7B94
}

// fn_802F7B98
void f_802F7B98(Ctx* __restrict c) {
  trace_call(0x802F7B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7B98
  c->r[0]=c->lr; // 802F7B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F7BA4
  c->r[31]=0u+0x804D0000u; // 802F7BA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F7BAC
  c->r[30]=c->r[3]+0x00000008u; // 802F7BB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F7BB4
  c->r[29]=0u+0x00000000u; // 802F7BB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F7BBC
  c->r[28]=c->r[3]|c->r[3]; // 802F7BC0
  goto L_802F7BEC; // 802F7BC4
L_802F7BC8:;
  c->r[3]=c->r[28]+0x00000008u; // 802F7BC8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802F7BCC
  c->lr=0x802F7BD4u; f_80330168(c); // 802F7BD0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F7BD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7BD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F7BDC
  c->ctr=c->r[12]; // 802F7BE0
  if (true) { c->lr=0x802F7BE8u; dispatch(c,c->ctr); } // 802F7BE4
  c->r[29]=c->r[29]+0x00000001u; // 802F7BE8
L_802F7BEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F7BEC
  if (!crb(c,2)) { goto L_802F7C08; } // 802F7BF0
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F7BF4
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F7BF8
  c->r[4]=0u+0x000000CFu; // 802F7BFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7C00
  c->lr=0x802F7C08u; f_802FA328(c); // 802F7C04
L_802F7C08:;
  c->r[0]=R16(c->r[28]+0x00000010u); // 802F7C08
  cmpu(c,0,c->r[29],c->r[0]); // 802F7C0C
  if (crb(c,0)) { IRQCHK(c); goto L_802F7BC8; } // 802F7C10
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F7C14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F7C18
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F7C1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F7C20
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F7C24
  c->lr=c->r[0]; // 802F7C28
  c->r[1]=c->r[1]+0x00000020u; // 802F7C2C
  return; // 802F7C30
}

// init__Q310homebutton3gui9ComponentFv
void f_802F7C34(Ctx* __restrict c) {
  trace_call(0x802F7C34u);
  c->r[0]=0u+0x00000000u; // 802F7C34
  W8(c->r[3]+0x00000018u,c->r[0]); // 802F7C38
  W8(c->r[3]+0x00000004u,c->r[0]); // 802F7C3C
  W8(c->r[3]+0x00000005u,c->r[0]); // 802F7C40
  W8(c->r[3]+0x00000006u,c->r[0]); // 802F7C44
  W8(c->r[3]+0x00000007u,c->r[0]); // 802F7C48
  W8(c->r[3]+0x00000008u,c->r[0]); // 802F7C4C
  W8(c->r[3]+0x00000009u,c->r[0]); // 802F7C50
  W8(c->r[3]+0x0000000Au,c->r[0]); // 802F7C54
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 802F7C58
  return; // 802F7C5C
}

// addComponent__Q310homebutton3gui7ManagerFPQ310homebutton3gui9Component
void f_802F7C60(Ctx* __restrict c) {
  trace_call(0x802F7C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7C60
  c->r[0]=c->lr; // 802F7C64
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7C68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F7C6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F7C70
  c->r[30]=c->r[4]|c->r[4]; // 802F7C74
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F7C78
  c->r[29]=c->r[3]|c->r[3]; // 802F7C7C
  c->r[3]=c->r[30]|c->r[30]; // 802F7C80
  c->r[12]=R32(c->r[30]+0x00000000u); // 802F7C84
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F7C88
  c->ctr=c->r[12]; // 802F7C8C
  if (true) { c->lr=0x802F7C94u; dispatch(c,c->ctr); } // 802F7C90
  c->r[12]=R32(c->r[30]+0x00000000u); // 802F7C94
  c->r[31]=c->r[3]|c->r[3]; // 802F7C98
  c->r[3]=c->r[30]|c->r[30]; // 802F7C9C
  c->r[4]=c->r[29]|c->r[29]; // 802F7CA0
  c->r[12]=R32(c->r[12]+0x00000054u); // 802F7CA4
  c->ctr=c->r[12]; // 802F7CA8
  if (true) { c->lr=0x802F7CB0u; dispatch(c,c->ctr); } // 802F7CAC
  c->r[3]=R32(c->r[29]+0x00000014u); // 802F7CB0
  cmps(c,0,(int32_t)c->r[3],0); // 802F7CB4
  if (crb(c,2)) { goto L_802F7CE4; } // 802F7CB8
  c->r[4]=0u+0x00000010u; // 802F7CBC
  c->lr=0x802F7CC4u; f_80201D90(c); // 802F7CC0
  cmps(c,0,(int32_t)c->r[3],0); // 802F7CC4
  if (crb(c,2)) { goto L_802F7CD4; } // 802F7CC8
  W32(c->r[3]+0x00000000u,c->r[31]); // 802F7CCC
  W32(c->r[3]+0x00000004u,c->r[30]); // 802F7CD0
L_802F7CD4:;
  c->r[4]=c->r[3]|c->r[3]; // 802F7CD4
  c->r[3]=c->r[29]+0x00000008u; // 802F7CD8
  c->lr=0x802F7CE0u; f_8032FEF0(c); // 802F7CDC
  goto L_802F7D08; // 802F7CE0
L_802F7CE4:;
  c->r[3]=0u+0x00000010u; // 802F7CE4
  c->lr=0x802F7CECu; f_8001A948(c); // 802F7CE8
  cmps(c,0,(int32_t)c->r[3],0); // 802F7CEC
  if (crb(c,2)) { goto L_802F7CFC; } // 802F7CF0
  W32(c->r[3]+0x00000000u,c->r[31]); // 802F7CF4
  W32(c->r[3]+0x00000004u,c->r[30]); // 802F7CF8
L_802F7CFC:;
  c->r[4]=c->r[3]|c->r[3]; // 802F7CFC
  c->r[3]=c->r[29]+0x00000008u; // 802F7D00
  c->lr=0x802F7D08u; f_8032FEF0(c); // 802F7D04
L_802F7D08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F7D08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F7D0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F7D10
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F7D14
  c->lr=c->r[0]; // 802F7D18
  c->r[1]=c->r[1]+0x00000020u; // 802F7D1C
  return; // 802F7D20
}

// fn_802F7D24
void f_802F7D24(Ctx* __restrict c) {
  trace_call(0x802F7D24u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 802F7D24
  return; // 802F7D28
}

// getComponent__Q310homebutton3gui7ManagerFUl
void f_802F7D2C(Ctx* __restrict c) {
  trace_call(0x802F7D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7D2C
  c->r[0]=c->lr; // 802F7D30
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 802F7D34
  c->r[3]=c->r[3]+0x00000008u; // 802F7D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F7D3C
  c->lr=0x802F7D44u; f_80330168(c); // 802F7D40
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F7D44
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F7D48
  c->lr=c->r[0]; // 802F7D4C
  c->r[1]=c->r[1]+0x00000010u; // 802F7D50
  return; // 802F7D54
}

// fn_802F7D58
void f_802F7D58(Ctx* __restrict c) {
  trace_call(0x802F7D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7D58
  c->r[0]=c->lr; // 802F7D5C
  W32(c->r[1]+0x00000064u,c->r[0]); // 802F7D60
  c->r[11]=c->r[1]+0x00000050u; // 802F7D64
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 802F7D68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802F7D6C
  c->lr=0x802F7D74u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F7D70
  c->f[30]=c->f[1]; // 802F7D74
  c->r[20]=c->r[3]|c->r[3]; // 802F7D78
  c->f[31]=c->f[2]; // 802F7D7C
  c->r[21]=c->r[4]|c->r[4]; // 802F7D80
  c->r[22]=c->r[5]|c->r[5]; // 802F7D84
  c->r[23]=c->r[6]|c->r[6]; // 802F7D88
  c->r[24]=c->r[7]|c->r[7]; // 802F7D8C
  c->r[25]=c->r[8]|c->r[8]; // 802F7D90
  c->r[30]=c->r[3]+0x00000008u; // 802F7D94
  c->r[28]=0u+0x00000000u; // 802F7D98
  c->r[27]=0u+0x00000000u; // 802F7D9C
  c->r[26]=0u+0x00000000u; // 802F7DA0
  c->r[31]=0u+0x804D0000u; // 802F7DA4
  goto L_802F7E1C; // 802F7DA8
L_802F7DAC:;
  c->r[3]=c->r[20]+0x00000008u; // 802F7DAC
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 802F7DB0
  c->lr=0x802F7DB8u; f_80330168(c); // 802F7DB4
  c->r[29]=c->r[3]|c->r[3]; // 802F7DB8
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F7DBC
  c->f[1]=c->f[30]; // 802F7DC0
  c->r[4]=c->r[21]|c->r[21]; // 802F7DC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7DC8
  c->f[2]=c->f[31]; // 802F7DCC
  c->r[5]=c->r[22]|c->r[22]; // 802F7DD0
  c->r[6]=c->r[23]|c->r[23]; // 802F7DD4
  c->r[12]=R32(c->r[12]+0x00000048u); // 802F7DD8
  c->r[7]=c->r[24]|c->r[24]; // 802F7DDC
  c->r[8]=c->r[25]|c->r[25]; // 802F7DE0
  c->ctr=c->r[12]; // 802F7DE4
  if (true) { c->lr=0x802F7DECu; dispatch(c,c->ctr); } // 802F7DE8
  cmps(c,0,(int32_t)c->r[3],0); // 802F7DEC
  if (crb(c,2)) { goto L_802F7E18; } // 802F7DF0
  c->r[3]=R32(c->r[29]+0x00000004u); // 802F7DF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7DF8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 802F7DFC
  c->ctr=c->r[12]; // 802F7E00
  if (true) { c->lr=0x802F7E08u; dispatch(c,c->ctr); } // 802F7E04
  cmps(c,0,(int32_t)c->r[3],0); // 802F7E08
  if (crb(c,2)) { goto L_802F7E14; } // 802F7E0C
  c->r[27]=R32(c->r[29]+0x00000004u); // 802F7E10
L_802F7E14:;
  c->r[28]=0u+0x00000001u; // 802F7E14
L_802F7E18:;
  c->r[26]=c->r[26]+0x00000001u; // 802F7E18
L_802F7E1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F7E1C
  if (!crb(c,2)) { goto L_802F7E38; } // 802F7E20
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F7E24
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F7E28
  c->r[4]=0u+0x000000CFu; // 802F7E2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7E30
  c->lr=0x802F7E38u; f_802FA328(c); // 802F7E34
L_802F7E38:;
  c->r[0]=R16(c->r[20]+0x00000010u); // 802F7E38
  cmpu(c,0,c->r[26],c->r[0]); // 802F7E3C
  if (crb(c,0)) { IRQCHK(c); goto L_802F7DAC; } // 802F7E40
  cmps(c,0,(int32_t)c->r[27],0); // 802F7E44
  if (crb(c,2)) { goto L_802F7EFC; } // 802F7E48
  cmps(c,0,(int32_t)c->r[22],0); // 802F7E4C
  if (crb(c,2)) { goto L_802F7EA4; } // 802F7E50
  c->r[12]=R32(c->r[27]+0x00000000u); // 802F7E54
  c->r[3]=c->r[27]|c->r[27]; // 802F7E58
  c->r[4]=c->r[22]|c->r[22]; // 802F7E5C
  c->r[5]=c->r[1]+0x00000014u; // 802F7E60
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802F7E64
  c->ctr=c->r[12]; // 802F7E68
  if (true) { c->lr=0x802F7E70u; dispatch(c,c->ctr); } // 802F7E6C
  c->r[12]=R32(c->r[27]+0x00000000u); // 802F7E70
  c->r[3]=c->r[27]|c->r[27]; // 802F7E74
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F7E78
  c->ctr=c->r[12]; // 802F7E7C
  if (true) { c->lr=0x802F7E84u; dispatch(c,c->ctr); } // 802F7E80
  c->r[12]=R32(c->r[20]+0x00000000u); // 802F7E84
  c->r[4]=c->r[3]|c->r[3]; // 802F7E88
  c->r[3]=c->r[20]|c->r[20]; // 802F7E8C
  c->r[6]=c->r[25]|c->r[25]; // 802F7E90
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F7E94
  c->r[5]=0u+0x00000000u; // 802F7E98
  c->ctr=c->r[12]; // 802F7E9C
  if (true) { c->lr=0x802F7EA4u; dispatch(c,c->ctr); } // 802F7EA0
L_802F7EA4:;
  cmps(c,0,(int32_t)c->r[24],0); // 802F7EA4
  if (crb(c,2)) { goto L_802F7EFC; } // 802F7EA8
  c->r[12]=R32(c->r[27]+0x00000000u); // 802F7EAC
  c->r[3]=c->r[27]|c->r[27]; // 802F7EB0
  c->r[4]=c->r[24]|c->r[24]; // 802F7EB4
  c->r[5]=c->r[1]+0x00000008u; // 802F7EB8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802F7EBC
  c->ctr=c->r[12]; // 802F7EC0
  if (true) { c->lr=0x802F7EC8u; dispatch(c,c->ctr); } // 802F7EC4
  c->r[12]=R32(c->r[27]+0x00000000u); // 802F7EC8
  c->r[3]=c->r[27]|c->r[27]; // 802F7ECC
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F7ED0
  c->ctr=c->r[12]; // 802F7ED4
  if (true) { c->lr=0x802F7EDCu; dispatch(c,c->ctr); } // 802F7ED8
  c->r[12]=R32(c->r[20]+0x00000000u); // 802F7EDC
  c->r[4]=c->r[3]|c->r[3]; // 802F7EE0
  c->r[3]=c->r[20]|c->r[20]; // 802F7EE4
  c->r[6]=c->r[25]|c->r[25]; // 802F7EE8
  c->r[12]=R32(c->r[12]+0x00000030u); // 802F7EEC
  c->r[5]=0u+0x00000005u; // 802F7EF0
  c->ctr=c->r[12]; // 802F7EF4
  if (true) { c->lr=0x802F7EFCu; dispatch(c,c->ctr); } // 802F7EF8
L_802F7EFC:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[31]=RF64(ea);} // 802F7EFC
  c->r[3]=c->r[28]|c->r[28]; // 802F7F00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802F7F04
  c->r[11]=c->r[1]+0x00000050u; // 802F7F08
  c->lr=0x802F7F10u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F7F0C
  c->r[0]=R32(c->r[1]+0x00000064u); // 802F7F10
  c->lr=c->r[0]; // 802F7F14
  c->r[1]=c->r[1]+0x00000060u; // 802F7F18
  return; // 802F7F1C
}

// fn_802F7F20
void f_802F7F20(Ctx* __restrict c) {
  trace_call(0x802F7F20u);
  c->r[3]=R8(c->r[3]+0x00000024u); // 802F7F20
  return; // 802F7F24
}

// onTrig__Q310homebutton3gui9ComponentFUlR3Vec
void f_802F7F28(Ctx* __restrict c) {
  trace_call(0x802F7F28u);
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802F7F28
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 802F7F2C
  if (crb(c,2)) return; // 802F7F30
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7F34
  c->r[0]=0u+0x00000001u; // 802F7F38
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F7F3C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7F40
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 802F7F44
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F7F48
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 802F7F4C
  W8(c->r[3]+0x00000018u,c->r[0]); // 802F7F50
  return; // 802F7F54
}

// fn_802F7F58
void f_802F7F58(Ctx* __restrict c) {
  trace_call(0x802F7F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7F58
  c->r[0]=c->lr; // 802F7F5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7F60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F7F64
  c->r[31]=0u+0x804D0000u; // 802F7F68
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F7F6C
  c->r[30]=c->r[3]+0x00000008u; // 802F7F70
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F7F74
  c->r[29]=0u+0x00000000u; // 802F7F78
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F7F7C
  c->r[28]=c->r[3]|c->r[3]; // 802F7F80
  goto L_802F7FAC; // 802F7F84
L_802F7F88:;
  c->r[3]=c->r[28]+0x00000008u; // 802F7F88
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802F7F8C
  c->lr=0x802F7F94u; f_80330168(c); // 802F7F90
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F7F94
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F7F98
  c->r[12]=R32(c->r[12]+0x00000010u); // 802F7F9C
  c->ctr=c->r[12]; // 802F7FA0
  if (true) { c->lr=0x802F7FA8u; dispatch(c,c->ctr); } // 802F7FA4
  c->r[29]=c->r[29]+0x00000001u; // 802F7FA8
L_802F7FAC:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F7FAC
  if (!crb(c,2)) { goto L_802F7FC8; } // 802F7FB0
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F7FB4
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F7FB8
  c->r[4]=0u+0x000000CFu; // 802F7FBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F7FC0
  c->lr=0x802F7FC8u; f_802FA328(c); // 802F7FC4
L_802F7FC8:;
  c->r[0]=R16(c->r[28]+0x00000010u); // 802F7FC8
  cmpu(c,0,c->r[29],c->r[0]); // 802F7FCC
  if (crb(c,0)) { IRQCHK(c); goto L_802F7F88; } // 802F7FD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F7FD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F7FD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F7FDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F7FE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F7FE4
  c->lr=c->r[0]; // 802F7FE8
  c->r[1]=c->r[1]+0x00000020u; // 802F7FEC
  return; // 802F7FF0
}

// fn_802F7FF4
void f_802F7FF4(Ctx* __restrict c) {
  trace_call(0x802F7FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F7FF4
  c->r[0]=c->lr; // 802F7FF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F7FFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F8000
  c->r[31]=0u+0x804D0000u; // 802F8004
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F8008
  c->r[30]=c->r[3]+0x00000008u; // 802F800C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F8010
  c->r[29]=0u+0x00000000u; // 802F8014
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F8018
  c->r[28]=c->r[3]|c->r[3]; // 802F801C
  goto L_802F8048; // 802F8020
L_802F8024:;
  c->r[3]=c->r[28]+0x00000008u; // 802F8024
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802F8028
  c->lr=0x802F8030u; f_80330168(c); // 802F802C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F8030
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F8034
  c->r[12]=R32(c->r[12]+0x00000018u); // 802F8038
  c->ctr=c->r[12]; // 802F803C
  if (true) { c->lr=0x802F8044u; dispatch(c,c->ctr); } // 802F8040
  c->r[29]=c->r[29]+0x00000001u; // 802F8044
L_802F8048:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F8048
  if (!crb(c,2)) { goto L_802F8064; } // 802F804C
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F8050
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F8054
  c->r[4]=0u+0x000000CFu; // 802F8058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F805C
  c->lr=0x802F8064u; f_802FA328(c); // 802F8060
L_802F8064:;
  c->r[0]=R16(c->r[28]+0x00000010u); // 802F8064
  cmpu(c,0,c->r[29],c->r[0]); // 802F8068
  if (crb(c,0)) { IRQCHK(c); goto L_802F8024; } // 802F806C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F8074
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F8078
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F807C
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F8080
  c->lr=c->r[0]; // 802F8084
  c->r[1]=c->r[1]+0x00000020u; // 802F8088
  return; // 802F808C
}

// fn_802F8090
void f_802F8090(Ctx* __restrict c) {
  trace_call(0x802F8090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8090
  c->r[0]=c->lr; // 802F8094
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F8098
  c->r[11]=c->r[1]+0x00000020u; // 802F809C
  c->lr=0x802F80A4u; f_801E795C(c); // 802F80A0
  c->r[27]=c->r[3]|c->r[3]; // 802F80A4
  c->r[28]=c->r[4]|c->r[4]; // 802F80A8
  c->r[30]=c->r[3]+0x00000008u; // 802F80AC
  c->r[29]=0u+0x00000000u; // 802F80B0
  c->r[31]=0u+0x804D0000u; // 802F80B4
  goto L_802F80E4; // 802F80B8
L_802F80BC:;
  c->r[3]=c->r[27]+0x00000008u; // 802F80BC
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802F80C0
  c->lr=0x802F80C8u; f_80330168(c); // 802F80C4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F80C8
  c->r[4]=c->r[28]|c->r[28]; // 802F80CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F80D0
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F80D4
  c->ctr=c->r[12]; // 802F80D8
  if (true) { c->lr=0x802F80E0u; dispatch(c,c->ctr); } // 802F80DC
  c->r[29]=c->r[29]+0x00000001u; // 802F80E0
L_802F80E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F80E4
  if (!crb(c,2)) { goto L_802F8100; } // 802F80E8
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F80EC
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F80F0
  c->r[4]=0u+0x000000CFu; // 802F80F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F80F8
  c->lr=0x802F8100u; f_802FA328(c); // 802F80FC
L_802F8100:;
  c->r[0]=R16(c->r[27]+0x00000010u); // 802F8100
  cmpu(c,0,c->r[29],c->r[0]); // 802F8104
  if (crb(c,0)) { IRQCHK(c); goto L_802F80BC; } // 802F8108
  c->r[11]=c->r[1]+0x00000020u; // 802F810C
  c->lr=0x802F8114u; f_801E79A8(c); // 802F8110
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8114
  c->lr=c->r[0]; // 802F8118
  c->r[1]=c->r[1]+0x00000020u; // 802F811C
  return; // 802F8120
}

// __dt__Q310homebutton3gui11PaneManagerFv
void f_802F8124(Ctx* __restrict c) {
  trace_call(0x802F8124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8124
  c->r[0]=c->lr; // 802F8128
  cmps(c,0,(int32_t)c->r[3],0); // 802F812C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F8130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F8134
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F8138
  c->r[30]=c->r[4]|c->r[4]; // 802F813C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F8140
  c->r[29]=c->r[3]|c->r[3]; // 802F8144
  if (crb(c,2)) { goto L_802F8258; } // 802F8148
  c->r[5]=0u+0x804D0000u; // 802F814C
  c->r[4]=0u+0x00000000u; // 802F8150
  c->r[5]=c->r[5]+0xFFFF8200u; // 802F8154
  W32(c->r[3]+0x00000000u,c->r[5]); // 802F8158
  c->r[3]=c->r[3]+0x00000018u; // 802F815C
  c->lr=0x802F8164u; f_803300F4(c); // 802F8160
  c->r[31]=c->r[3]|c->r[3]; // 802F8164
  goto L_802F81D4; // 802F8168
L_802F816C:;
  c->r[4]=c->r[31]|c->r[31]; // 802F816C
  c->r[3]=c->r[29]+0x00000018u; // 802F8170
  c->lr=0x802F8178u; f_80330010(c); // 802F8174
  c->r[3]=R32(c->r[29]+0x00000014u); // 802F8178
  cmps(c,0,(int32_t)c->r[3],0); // 802F817C
  if (crb(c,2)) { goto L_802F819C; } // 802F8180
  c->r[4]=R32(c->r[31]+0x00000004u); // 802F8184
  c->lr=0x802F818Cu; f_80201DA0(c); // 802F8188
  c->r[3]=R32(c->r[29]+0x00000014u); // 802F818C
  c->r[4]=c->r[31]|c->r[31]; // 802F8190
  c->lr=0x802F8198u; f_80201DA0(c); // 802F8194
  goto L_802F81C4; // 802F8198
L_802F819C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 802F819C
  cmps(c,0,(int32_t)c->r[3],0); // 802F81A0
  if (crb(c,2)) { goto L_802F81BC; } // 802F81A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F81A8
  c->r[4]=0u+0x00000001u; // 802F81AC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802F81B0
  c->ctr=c->r[12]; // 802F81B4
  if (true) { c->lr=0x802F81BCu; dispatch(c,c->ctr); } // 802F81B8
L_802F81BC:;
  c->r[3]=c->r[31]|c->r[31]; // 802F81BC
  c->lr=0x802F81C4u; f_8001AAC0(c); // 802F81C0
L_802F81C4:;
  c->r[3]=c->r[29]+0x00000018u; // 802F81C4
  c->r[4]=0u+0x00000000u; // 802F81C8
  c->lr=0x802F81D0u; f_803300F4(c); // 802F81CC
  c->r[31]=c->r[3]|c->r[3]; // 802F81D0
L_802F81D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 802F81D4
  if (!crb(c,2)) { IRQCHK(c); goto L_802F816C; } // 802F81D8
  cmps(c,0,(int32_t)c->r[29],0); // 802F81DC
  if (crb(c,2)) { goto L_802F8248; } // 802F81E0
  c->r[5]=0u+0x804D0000u; // 802F81E4
  c->r[3]=c->r[29]+0x00000008u; // 802F81E8
  c->r[5]=c->r[5]+0xFFFF8254u; // 802F81EC
  c->r[4]=0u+0x00000000u; // 802F81F0
  W32(c->r[29]+0x00000000u,c->r[5]); // 802F81F4
  c->lr=0x802F81FCu; f_803300F4(c); // 802F81F8
  c->r[31]=c->r[3]|c->r[3]; // 802F81FC
  goto L_802F8240; // 802F8200
L_802F8204:;
  c->r[4]=c->r[31]|c->r[31]; // 802F8204
  c->r[3]=c->r[29]+0x00000008u; // 802F8208
  c->lr=0x802F8210u; f_80330010(c); // 802F820C
  c->r[3]=R32(c->r[29]+0x00000014u); // 802F8210
  cmps(c,0,(int32_t)c->r[3],0); // 802F8214
  if (crb(c,2)) { goto L_802F8228; } // 802F8218
  c->r[4]=c->r[31]|c->r[31]; // 802F821C
  c->lr=0x802F8224u; f_80201DA0(c); // 802F8220
  goto L_802F8230; // 802F8224
L_802F8228:;
  c->r[3]=c->r[31]|c->r[31]; // 802F8228
  c->lr=0x802F8230u; f_8001AAC0(c); // 802F822C
L_802F8230:;
  c->r[3]=c->r[29]+0x00000008u; // 802F8230
  c->r[4]=0u+0x00000000u; // 802F8234
  c->lr=0x802F823Cu; f_803300F4(c); // 802F8238
  c->r[31]=c->r[3]|c->r[3]; // 802F823C
L_802F8240:;
  cmps(c,0,(int32_t)c->r[31],0); // 802F8240
  if (!crb(c,2)) { IRQCHK(c); goto L_802F8204; } // 802F8244
L_802F8248:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F8248
  if (!crb(c,1)) { goto L_802F8258; } // 802F824C
  c->r[3]=c->r[29]|c->r[29]; // 802F8250
  c->lr=0x802F8258u; f_8001AAC0(c); // 802F8254
L_802F8258:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F8258
  c->r[3]=c->r[29]|c->r[29]; // 802F825C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F8260
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F8264
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8268
  c->lr=c->r[0]; // 802F826C
  c->r[1]=c->r[1]+0x00000020u; // 802F8270
  return; // 802F8274
}

// fn_802F8278
void f_802F8278(Ctx* __restrict c) {
  trace_call(0x802F8278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8278
  c->r[0]=c->lr; // 802F827C
  cmps(c,0,(int32_t)c->r[3],0); // 802F8280
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F8284
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F8288
  c->r[31]=c->r[3]|c->r[3]; // 802F828C
  if (crb(c,2)) { goto L_802F82A0; } // 802F8290
  cmps(c,0,(int32_t)c->r[4],0); // 802F8294
  if (!crb(c,1)) { goto L_802F82A0; } // 802F8298
  c->lr=0x802F82A0u; f_8001AAC0(c); // 802F829C
L_802F82A0:;
  c->r[3]=c->r[31]|c->r[31]; // 802F82A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F82A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F82A8
  c->lr=c->r[0]; // 802F82AC
  c->r[1]=c->r[1]+0x00000010u; // 802F82B0
  return; // 802F82B4
}

// fn_802F82B8
void f_802F82B8(Ctx* __restrict c) {
  trace_call(0x802F82B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F82B8
  c->r[0]=c->lr; // 802F82BC
  cmps(c,0,(int32_t)c->r[3],0); // 802F82C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F82C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F82C8
  c->r[31]=c->r[3]|c->r[3]; // 802F82CC
  if (crb(c,2)) { goto L_802F82E0; } // 802F82D0
  cmps(c,0,(int32_t)c->r[4],0); // 802F82D4
  if (!crb(c,1)) { goto L_802F82E0; } // 802F82D8
  c->lr=0x802F82E0u; f_8001AAC0(c); // 802F82DC
L_802F82E0:;
  c->r[3]=c->r[31]|c->r[31]; // 802F82E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F82E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F82E8
  c->lr=c->r[0]; // 802F82EC
  c->r[1]=c->r[1]+0x00000010u; // 802F82F0
  return; // 802F82F4
}

// fn_802F82F8
void f_802F82F8(Ctx* __restrict c) {
  trace_call(0x802F82F8u);
  c->r[0]=0u+0x00000000u; // 802F82F8
  c->r[4]=R32(c->r[4]+0x00000010u); // 802F82FC
  W32(c->r[13]+0xFFFFA5A0u,c->r[0]); // 802F8300
  c->r[4]=c->r[4]+0x00000010u; // 802F8304
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F8308
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F830C
  c->ctr=c->r[12]; // 802F8310
  if (true) { dispatch(c,c->ctr); return; } // 802F8314
}

// fn_802F8318
void f_802F8318(Ctx* __restrict c) {
  trace_call(0x802F8318u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8318
  c->r[0]=c->lr; // 802F831C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802F8320
  c->r[11]=c->r[1]+0x00000050u; // 802F8324
  c->lr=0x802F832Cu; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F8328
  c->r[19]=0u+0x804D0000u; // 802F832C
  c->r[21]=0u+0x804D0000u; // 802F8330
  c->r[27]=R32(c->r[4]+0x00000004u); // 802F8334
  c->r[28]=c->r[3]|c->r[3]; // 802F8338
  c->r[19]=c->r[19]+0xFFFF8290u; // 802F833C
  c->r[21]=c->r[21]+0xFFFF8198u; // 802F8340
  c->r[26]=c->r[4]+0x00000004u; // 802F8344
  c->r[20]=0u+0x00000000u; // 802F8348
  c->r[22]=0u+0x804D0000u; // 802F834C
  c->r[23]=0u+0x804D0000u; // 802F8350
  c->r[24]=0u+0x804D0000u; // 802F8354
  c->r[25]=0u+0x804D0000u; // 802F8358
  c->r[31]=c->r[13]+0xFFFFA600u; // 802F835C
  c->r[30]=c->r[13]+0xFFFFA610u; // 802F8360
  goto L_802F86AC; // 802F8364
L_802F8368:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 802F8368
  cmps(c,0,(int32_t)c->r[3],0); // 802F836C
  if (crb(c,2)) { goto L_802F841C; } // 802F8370
  c->r[4]=0u+0x00000030u; // 802F8374
  c->lr=0x802F837Cu; f_80201D90(c); // 802F8378
  c->r[29]=c->r[3]|c->r[3]; // 802F837C
  c->r[3]=R32(c->r[28]+0x00000014u); // 802F8380
  c->r[4]=0u+0x00000010u; // 802F8384
  c->lr=0x802F838Cu; f_80201D90(c); // 802F8388
  cmps(c,0,(int32_t)c->r[29],0); // 802F838C
  c->r[17]=c->r[3]|c->r[3]; // 802F8390
  if (crb(c,2)) { goto L_802F83D0; } // 802F8394
  c->r[0]=R32(c->r[13]+0xFFFFA5A0u); // 802F8398
  c->r[3]=c->r[29]|c->r[29]; // 802F839C
  W32(c->r[29]+0x00000000u,c->r[19]); // 802F83A0
  W8(c->r[29]+0x00000018u,c->r[20]); // 802F83A4
  W32(c->r[29]+0x0000001Cu,c->r[20]); // 802F83A8
  W32(c->r[29]+0x00000020u,c->r[0]); // 802F83AC
  W8(c->r[29]+0x00000024u,c->r[20]); // 802F83B0
  W32(c->r[29]+0x00000028u,c->r[20]); // 802F83B4
  c->r[12]=R32(c->r[29]+0x00000000u); // 802F83B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F83BC
  c->ctr=c->r[12]; // 802F83C0
  if (true) { c->lr=0x802F83C8u; dispatch(c,c->ctr); } // 802F83C4
  W32(c->r[29]+0x00000000u,c->r[21]); // 802F83C8
  W32(c->r[29]+0x0000002Cu,c->r[20]); // 802F83CC
L_802F83D0:;
  cmps(c,0,(int32_t)c->r[17],0); // 802F83D0
  if (crb(c,2)) { goto L_802F84B4; } // 802F83D4
  cmps(c,0,(int32_t)c->r[27],0); // 802F83D8
  if (!crb(c,2)) { goto L_802F83F4; } // 802F83DC
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F83E0
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F83E4
  c->r[4]=0u+0x0000023Du; // 802F83E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F83EC
  c->lr=0x802F83F4u; f_802FA328(c); // 802F83F0
L_802F83F4:;
  c->r[18]=addc(c,c->r[27],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802F83F4
  if (!crb(c,2)) { goto L_802F8410; } // 802F83F8
  c->r[3]=c->r[24]+0xFFFF8314u; // 802F83FC
  c->r[5]=c->r[25]+0xFFFF82F0u; // 802F8400
  c->r[4]=0u+0x00000193u; // 802F8404
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F8408
  c->lr=0x802F8410u; f_802FA328(c); // 802F840C
L_802F8410:;
  W32(c->r[17]+0x00000000u,c->r[18]); // 802F8410
  W32(c->r[17]+0x00000004u,c->r[29]); // 802F8414
  goto L_802F84B4; // 802F8418
L_802F841C:;
  c->r[3]=0u+0x00000030u; // 802F841C
  c->lr=0x802F8424u; f_8001A948(c); // 802F8420
  cmps(c,0,(int32_t)c->r[3],0); // 802F8424
  c->r[29]=c->r[3]|c->r[3]; // 802F8428
  if (crb(c,2)) { goto L_802F8460; } // 802F842C
  c->r[0]=R32(c->r[13]+0xFFFFA5A0u); // 802F8430
  W32(c->r[3]+0x00000000u,c->r[19]); // 802F8434
  W8(c->r[3]+0x00000018u,c->r[20]); // 802F8438
  W32(c->r[3]+0x0000001Cu,c->r[20]); // 802F843C
  W32(c->r[3]+0x00000020u,c->r[0]); // 802F8440
  W8(c->r[3]+0x00000024u,c->r[20]); // 802F8444
  W32(c->r[3]+0x00000028u,c->r[20]); // 802F8448
  c->r[12]=R32(c->r[19]+0x0000000Cu); // 802F844C
  c->ctr=c->r[12]; // 802F8450
  if (true) { c->lr=0x802F8458u; dispatch(c,c->ctr); } // 802F8454
  W32(c->r[29]+0x00000000u,c->r[21]); // 802F8458
  W32(c->r[29]+0x0000002Cu,c->r[20]); // 802F845C
L_802F8460:;
  c->r[3]=0u+0x00000010u; // 802F8460
  c->lr=0x802F8468u; f_8001A948(c); // 802F8464
  cmps(c,0,(int32_t)c->r[3],0); // 802F8468
  c->r[17]=c->r[3]|c->r[3]; // 802F846C
  if (crb(c,2)) { goto L_802F84B4; } // 802F8470
  cmps(c,0,(int32_t)c->r[27],0); // 802F8474
  if (!crb(c,2)) { goto L_802F8490; } // 802F8478
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F847C
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F8480
  c->r[4]=0u+0x0000023Du; // 802F8484
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F8488
  c->lr=0x802F8490u; f_802FA328(c); // 802F848C
L_802F8490:;
  c->r[18]=addc(c,c->r[27],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802F8490
  if (!crb(c,2)) { goto L_802F84AC; } // 802F8494
  c->r[3]=c->r[24]+0xFFFF8314u; // 802F8498
  c->r[5]=c->r[25]+0xFFFF82F0u; // 802F849C
  c->r[4]=0u+0x00000193u; // 802F84A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F84A4
  c->lr=0x802F84ACu; f_802FA328(c); // 802F84A8
L_802F84AC:;
  W32(c->r[17]+0x00000000u,c->r[18]); // 802F84AC
  W32(c->r[17]+0x00000004u,c->r[29]); // 802F84B0
L_802F84B4:;
  c->r[4]=c->r[17]|c->r[17]; // 802F84B4
  c->r[3]=c->r[28]+0x00000018u; // 802F84B8
  c->lr=0x802F84C0u; f_8032FEF0(c); // 802F84BC
  c->r[3]=R32(c->r[13]+0xFFFFA5A0u); // 802F84C0
  cmps(c,0,(int32_t)c->r[27],0); // 802F84C4
  c->r[0]=c->r[3]+0x00000001u; // 802F84C8
  W32(c->r[13]+0xFFFFA5A0u,c->r[0]); // 802F84CC
  if (!crb(c,2)) { goto L_802F84E8; } // 802F84D0
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F84D4
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F84D8
  c->r[4]=0u+0x0000023Du; // 802F84DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F84E0
  c->lr=0x802F84E8u; f_802FA328(c); // 802F84E4
L_802F84E8:;
  c->r[18]=addc(c,c->r[27],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802F84E8
  if (!crb(c,2)) { goto L_802F8504; } // 802F84EC
  c->r[3]=c->r[24]+0xFFFF8314u; // 802F84F0
  c->r[5]=c->r[25]+0xFFFF82F0u; // 802F84F4
  c->r[4]=0u+0x00000193u; // 802F84F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F84FC
  c->lr=0x802F8504u; f_802FA328(c); // 802F8500
L_802F8504:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 802F8504
  c->r[3]=c->r[29]|c->r[29]; // 802F8508
  c->r[4]=c->r[18]|c->r[18]; // 802F850C
  c->r[12]=R32(c->r[12]+0x00000060u); // 802F8510
  c->ctr=c->r[12]; // 802F8514
  if (true) { c->lr=0x802F851Cu; dispatch(c,c->ctr); } // 802F8518
  cmps(c,0,(int32_t)c->r[27],0); // 802F851C
  if (!crb(c,2)) { goto L_802F8538; } // 802F8520
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F8524
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F8528
  c->r[4]=0u+0x0000023Du; // 802F852C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F8530
  c->lr=0x802F8538u; f_802FA328(c); // 802F8534
L_802F8538:;
  c->r[18]=addc(c,c->r[27],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802F8538
  if (!crb(c,2)) { goto L_802F8554; } // 802F853C
  c->r[3]=c->r[24]+0xFFFF8314u; // 802F8540
  c->r[5]=c->r[25]+0xFFFF82F0u; // 802F8544
  c->r[4]=0u+0x00000193u; // 802F8548
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F854C
  c->lr=0x802F8554u; f_802FA328(c); // 802F8550
L_802F8554:;
  c->r[12]=R32(c->r[18]+0x00000000u); // 802F8554
  c->r[3]=c->r[18]|c->r[18]; // 802F8558
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F855C
  c->ctr=c->r[12]; // 802F8560
  if (true) { c->lr=0x802F8568u; dispatch(c,c->ctr); } // 802F8564
  goto L_802F8580; // 802F8568
L_802F856C:;
  cmpu(c,0,c->r[3],c->r[31]); // 802F856C
  if (!crb(c,2)) { goto L_802F857C; } // 802F8570
  c->r[0]=0u+0x00000001u; // 802F8574
  goto L_802F858C; // 802F8578
L_802F857C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802F857C
L_802F8580:;
  cmps(c,0,(int32_t)c->r[3],0); // 802F8580
  if (!crb(c,2)) { IRQCHK(c); goto L_802F856C; } // 802F8584
  c->r[0]=0u+0x00000000u; // 802F8588
L_802F858C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802F858C
  if (crb(c,2)) { goto L_802F8598; } // 802F8590
  goto L_802F859C; // 802F8594
L_802F8598:;
  c->r[18]=0u+0x00000000u; // 802F8598
L_802F859C:;
  cmps(c,0,(int32_t)c->r[18],0); // 802F859C
  if (crb(c,2)) { goto L_802F85BC; } // 802F85A0
  c->r[12]=R32(c->r[29]+0x00000000u); // 802F85A4
  c->r[3]=c->r[29]|c->r[29]; // 802F85A8
  c->r[4]=0u+0x00000001u; // 802F85AC
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F85B0
  c->ctr=c->r[12]; // 802F85B4
  if (true) { c->lr=0x802F85BCu; dispatch(c,c->ctr); } // 802F85B8
L_802F85BC:;
  cmps(c,0,(int32_t)c->r[27],0); // 802F85BC
  if (!crb(c,2)) { goto L_802F85D8; } // 802F85C0
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F85C4
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F85C8
  c->r[4]=0u+0x0000023Du; // 802F85CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F85D0
  c->lr=0x802F85D8u; f_802FA328(c); // 802F85D4
L_802F85D8:;
  c->r[18]=addc(c,c->r[27],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802F85D8
  if (!crb(c,2)) { goto L_802F85F4; } // 802F85DC
  c->r[3]=c->r[24]+0xFFFF8314u; // 802F85E0
  c->r[5]=c->r[25]+0xFFFF82F0u; // 802F85E4
  c->r[4]=0u+0x00000193u; // 802F85E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F85EC
  c->lr=0x802F85F4u; f_802FA328(c); // 802F85F0
L_802F85F4:;
  c->r[12]=R32(c->r[18]+0x00000000u); // 802F85F4
  c->r[3]=c->r[18]|c->r[18]; // 802F85F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F85FC
  c->ctr=c->r[12]; // 802F8600
  if (true) { c->lr=0x802F8608u; dispatch(c,c->ctr); } // 802F8604
  goto L_802F8620; // 802F8608
L_802F860C:;
  cmpu(c,0,c->r[3],c->r[30]); // 802F860C
  if (!crb(c,2)) { goto L_802F861C; } // 802F8610
  c->r[0]=0u+0x00000001u; // 802F8614
  goto L_802F862C; // 802F8618
L_802F861C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802F861C
L_802F8620:;
  cmps(c,0,(int32_t)c->r[3],0); // 802F8620
  if (!crb(c,2)) { IRQCHK(c); goto L_802F860C; } // 802F8624
  c->r[0]=0u+0x00000000u; // 802F8628
L_802F862C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802F862C
  if (crb(c,2)) { goto L_802F8638; } // 802F8630
  goto L_802F863C; // 802F8634
L_802F8638:;
  c->r[18]=0u+0x00000000u; // 802F8638
L_802F863C:;
  cmps(c,0,(int32_t)c->r[18],0); // 802F863C
  if (crb(c,2)) { goto L_802F865C; } // 802F8640
  c->r[12]=R32(c->r[29]+0x00000000u); // 802F8644
  c->r[3]=c->r[29]|c->r[29]; // 802F8648
  c->r[4]=0u+0x00000001u; // 802F864C
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F8650
  c->ctr=c->r[12]; // 802F8654
  if (true) { c->lr=0x802F865Cu; dispatch(c,c->ctr); } // 802F8658
L_802F865C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F865C
  c->r[3]=c->r[28]|c->r[28]; // 802F8660
  c->r[4]=c->r[29]|c->r[29]; // 802F8664
  c->r[12]=R32(c->r[12]+0x00000020u); // 802F8668
  c->ctr=c->r[12]; // 802F866C
  if (true) { c->lr=0x802F8674u; dispatch(c,c->ctr); } // 802F8670
  cmps(c,0,(int32_t)c->r[27],0); // 802F8674
  if (!crb(c,2)) { goto L_802F8690; } // 802F8678
  c->r[3]=c->r[22]+0xFFFF817Cu; // 802F867C
  c->r[5]=c->r[23]+0xFFFF8158u; // 802F8680
  c->r[4]=0u+0x0000023Du; // 802F8684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F8688
  c->lr=0x802F8690u; f_802FA328(c); // 802F868C
L_802F8690:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F8690
  c->r[3]=c->r[28]|c->r[28]; // 802F8694
  c->r[4]=c->r[27]+0x0000000Cu; // 802F8698
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F869C
  c->ctr=c->r[12]; // 802F86A0
  if (true) { c->lr=0x802F86A8u; dispatch(c,c->ctr); } // 802F86A4
  c->r[27]=R32(c->r[27]+0x00000000u); // 802F86A8
L_802F86AC:;
  cmpu(c,0,c->r[27],c->r[26]); // 802F86AC
  if (!crb(c,2)) { IRQCHK(c); goto L_802F8368; } // 802F86B0
  c->r[11]=c->r[1]+0x00000050u; // 802F86B4
  c->lr=0x802F86BCu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F86B8
  c->r[0]=R32(c->r[1]+0x00000054u); // 802F86BC
  c->lr=c->r[0]; // 802F86C0
  c->r[1]=c->r[1]+0x00000050u; // 802F86C4
  return; // 802F86C8
}

// fn_802F86CC
void f_802F86CC(Ctx* __restrict c) {
  trace_call(0x802F86CCu);
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 802F86CC
  return; // 802F86D0
}

// fn_802F86D4
void f_802F86D4(Ctx* __restrict c) {
  trace_call(0x802F86D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F86D4
  c->r[0]=c->lr; // 802F86D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F86DC
  c->r[11]=c->r[1]+0x00000020u; // 802F86E0
  c->lr=0x802F86E8u; f_801E795C(c); // 802F86E4
  c->r[27]=c->r[3]|c->r[3]; // 802F86E8
  c->r[28]=c->r[4]|c->r[4]; // 802F86EC
  c->r[30]=c->r[3]+0x00000008u; // 802F86F0
  c->r[29]=0u+0x00000000u; // 802F86F4
  c->r[31]=0u+0x804D0000u; // 802F86F8
  goto L_802F8724; // 802F86FC
L_802F8700:;
  c->r[3]=c->r[27]+0x00000018u; // 802F8700
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802F8704
  c->lr=0x802F870Cu; f_80330168(c); // 802F8708
  c->r[0]=R32(c->r[3]+0x00000000u); // 802F870C
  cmpu(c,0,c->r[0],c->r[28]); // 802F8710
  if (!crb(c,2)) { goto L_802F8720; } // 802F8714
  c->r[3]=R32(c->r[3]+0x00000004u); // 802F8718
  goto L_802F8750; // 802F871C
L_802F8720:;
  c->r[29]=c->r[29]+0x00000001u; // 802F8720
L_802F8724:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F8724
  if (!crb(c,2)) { goto L_802F8740; } // 802F8728
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F872C
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F8730
  c->r[4]=0u+0x000000CFu; // 802F8734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F8738
  c->lr=0x802F8740u; f_802FA328(c); // 802F873C
L_802F8740:;
  c->r[0]=R16(c->r[27]+0x00000010u); // 802F8740
  cmpu(c,0,c->r[29],c->r[0]); // 802F8744
  if (crb(c,0)) { IRQCHK(c); goto L_802F8700; } // 802F8748
  c->r[3]=0u+0x00000000u; // 802F874C
L_802F8750:;
  c->r[11]=c->r[1]+0x00000020u; // 802F8750
  c->lr=0x802F8758u; f_801E79A8(c); // 802F8754
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8758
  c->lr=c->r[0]; // 802F875C
  c->r[1]=c->r[1]+0x00000020u; // 802F8760
  return; // 802F8764
}

// fn_802F8768
void f_802F8768(Ctx* __restrict c) {
  trace_call(0x802F8768u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8768
  c->r[0]=c->lr; // 802F876C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802F8770
  c->r[11]=c->r[1]+0x00000030u; // 802F8774
  c->lr=0x802F877Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F8778
  c->r[24]=c->r[3]|c->r[3]; // 802F877C
  c->r[25]=c->r[4]|c->r[4]; // 802F8780
  c->r[30]=c->r[3]+0x00000008u; // 802F8784
  c->r[26]=0u+0x00000000u; // 802F8788
  c->r[31]=0u+0x804D0000u; // 802F878C
  c->r[27]=c->r[13]+0xFFFFA5E0u; // 802F8790
  goto L_802F8818; // 802F8794
L_802F8798:;
  c->r[3]=c->r[24]+0x00000018u; // 802F8798
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 802F879C
  c->lr=0x802F87A4u; f_80330168(c); // 802F87A0
  c->r[28]=R32(c->r[3]+0x00000000u); // 802F87A4
  c->r[29]=c->r[3]|c->r[3]; // 802F87A8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802F87AC
  c->r[3]=c->r[28]|c->r[28]; // 802F87B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F87B4
  c->ctr=c->r[12]; // 802F87B8
  if (true) { c->lr=0x802F87C0u; dispatch(c,c->ctr); } // 802F87BC
  goto L_802F87D8; // 802F87C0
L_802F87C4:;
  cmpu(c,0,c->r[3],c->r[27]); // 802F87C4
  if (!crb(c,2)) { goto L_802F87D4; } // 802F87C8
  c->r[0]=0u+0x00000001u; // 802F87CC
  goto L_802F87E4; // 802F87D0
L_802F87D4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802F87D4
L_802F87D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802F87D8
  if (!crb(c,2)) { IRQCHK(c); goto L_802F87C4; } // 802F87DC
  c->r[0]=0u+0x00000000u; // 802F87E0
L_802F87E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802F87E4
  if (crb(c,2)) { goto L_802F87F0; } // 802F87E8
  goto L_802F87F4; // 802F87EC
L_802F87F0:;
  c->r[28]=0u+0x00000000u; // 802F87F0
L_802F87F4:;
  cmps(c,0,(int32_t)c->r[28],0); // 802F87F4
  if (crb(c,2)) { goto L_802F8814; } // 802F87F8
  c->r[3]=R32(c->r[29]+0x00000004u); // 802F87FC
  c->r[4]=c->r[25]|c->r[25]; // 802F8800
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F8804
  c->r[12]=R32(c->r[12]+0x00000050u); // 802F8808
  c->ctr=c->r[12]; // 802F880C
  if (true) { c->lr=0x802F8814u; dispatch(c,c->ctr); } // 802F8810
L_802F8814:;
  c->r[26]=c->r[26]+0x00000001u; // 802F8814
L_802F8818:;
  cmps(c,0,(int32_t)c->r[30],0); // 802F8818
  if (!crb(c,2)) { goto L_802F8834; } // 802F881C
  c->r[5]=c->r[31]+0xFFFF8320u; // 802F8820
  c->r[3]=c->r[13]+0xFFFF8C10u; // 802F8824
  c->r[4]=0u+0x000000CFu; // 802F8828
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802F882C
  c->lr=0x802F8834u; f_802FA328(c); // 802F8830
L_802F8834:;
  c->r[0]=R16(c->r[24]+0x00000010u); // 802F8834
  cmpu(c,0,c->r[26],c->r[0]); // 802F8838
  if (crb(c,0)) { IRQCHK(c); goto L_802F8798; } // 802F883C
  c->r[11]=c->r[1]+0x00000030u; // 802F8840
  c->lr=0x802F8848u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F8844
  c->r[0]=R32(c->r[1]+0x00000034u); // 802F8848
  c->lr=c->r[0]; // 802F884C
  c->r[1]=c->r[1]+0x00000030u; // 802F8850
  return; // 802F8854
}

// fn_802F8858
void f_802F8858(Ctx* __restrict c) {
  trace_call(0x802F8858u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8858
  c->r[0]=c->lr; // 802F885C
  W32(c->r[1]+0x00000094u,c->r[0]); // 802F8860
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802F8864
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802F8868
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802F886C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802F8870
  c->f[30]=c->f[1]; // 802F8874
  c->f[31]=c->f[2]; // 802F8878
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 802F887C
  W32(c->r[1]+0x00000068u,c->r[30]); // 802F8880
  c->r[30]=c->r[3]|c->r[3]; // 802F8884
  c->r[0]=R32(c->r[3]+0x00000028u); // 802F8888
  cmps(c,0,(int32_t)c->r[0],0); // 802F888C
  if (!crb(c,2)) { goto L_802F889C; } // 802F8890
  c->r[3]=0u+0x00000000u; // 802F8894
  goto L_802F8958; // 802F8898
L_802F889C:;
  c->r[3]=c->r[0]|c->r[0]; // 802F889C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F88A0
  c->r[12]=R32(c->r[12]+0x00000044u); // 802F88A4
  c->ctr=c->r[12]; // 802F88A8
  if (true) { c->lr=0x802F88B0u; dispatch(c,c->ctr); } // 802F88AC
  cmps(c,0,(int32_t)c->r[3],0); // 802F88B0
  c->r[31]=c->r[3]|c->r[3]; // 802F88B4
  if (!crb(c,2)) { goto L_802F88C4; } // 802F88B8
  c->r[3]=0u+0x00000000u; // 802F88BC
  goto L_802F8958; // 802F88C0
L_802F88C4:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 802F88C4
  c->r[4]=c->r[1]+0x00000038u; // 802F88C8
  c->r[3]=c->r[3]+0x00000084u; // 802F88CC
  c->lr=0x802F88D4u; f_801C5B98(c); // 802F88D0
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F88D4
  c->r[3]=c->r[1]+0x00000038u; // 802F88D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[30]);} // 802F88DC
  c->r[4]=c->r[1]+0x00000008u; // 802F88E0
  c->r[5]=c->r[1]+0x00000028u; // 802F88E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 802F88E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802F88EC
  c->lr=0x802F88F4u; f_801C6000(c); // 802F88F0
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 802F88F4
  c->r[5]=c->r[31]|c->r[31]; // 802F88F8
  c->r[3]=c->r[1]+0x00000018u; // 802F88FC
  c->lr=0x802F8904u; f_80303884(c); // 802F8900
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8904
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F8908
  fcmp(c,0,c->f[0],c->f[1]); // 802F890C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F8910
  if (!crb(c,2)) { goto L_802F8954; } // 802F8914
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8918
  fcmp(c,0,c->f[1],c->f[0]); // 802F891C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F8920
  if (!crb(c,2)) { goto L_802F8954; } // 802F8924
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8928
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802F892C
  fcmp(c,0,c->f[0],c->f[1]); // 802F8930
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F8934
  if (!crb(c,2)) { goto L_802F8954; } // 802F8938
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802F893C
  fcmp(c,0,c->f[1],c->f[0]); // 802F8940
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802F8944
  if (!crb(c,2)) { goto L_802F8954; } // 802F8948
  c->r[3]=0u+0x00000001u; // 802F894C
  goto L_802F8958; // 802F8950
L_802F8954:;
  c->r[3]=0u+0x00000000u; // 802F8954
L_802F8958:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 802F8958
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802F895C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802F8960
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802F8964
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 802F8968
  c->r[0]=R32(c->r[1]+0x00000094u); // 802F896C
  c->r[30]=R32(c->r[1]+0x00000068u); // 802F8970
  c->lr=c->r[0]; // 802F8974
  c->r[1]=c->r[1]+0x00000090u; // 802F8978
  return; // 802F897C
}

// fn_802F8980
void f_802F8980(Ctx* __restrict c) {
  trace_call(0x802F8980u);
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F8980
  return; // 802F8984
}

// fn_802F8988
void f_802F8988(Ctx* __restrict c) {
  trace_call(0x802F8988u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8988
  c->r[0]=c->lr; // 802F898C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802F8990
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802F8994
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802F8998
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802F899C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 802F89A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F89A4
  c->r[31]=c->r[3]|c->r[3]; // 802F89A8
  c->r[3]=R32(c->r[3]+0x00000028u); // 802F89AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F89B0
  c->r[12]=R32(c->r[12]+0x00000044u); // 802F89B4
  c->ctr=c->r[12]; // 802F89B8
  if (true) { c->lr=0x802F89C0u; dispatch(c,c->ctr); } // 802F89BC
  cmps(c,0,(int32_t)c->r[3],0); // 802F89C0
  if (crb(c,2)) { goto L_802F8AF0; } // 802F89C4
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 802F89C8
  c->r[5]=R8(c->r[2]+0xFFFFD014u); // 802F89CC
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802F89D0
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F89D4
  {uint32_t ea=c->r[3]+0x00000090u; c->f[31]=c->ps1[31]=RF32(ea);} // 802F89D8
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 802F89DC
  c->r[4]=R8(c->r[2]+0xFFFFD015u); // 802F89E0
  c->r[3]=R8(c->r[2]+0xFFFFD016u); // 802F89E4
  c->r[0]=R8(c->r[2]+0xFFFFD017u); // 802F89E8
  W8(c->r[1]+0x00000008u,c->r[5]); // 802F89EC
  W8(c->r[1]+0x00000009u,c->r[4]); // 802F89F0
  W8(c->r[1]+0x0000000Au,c->r[3]); // 802F89F4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802F89F8
  c->r[0]=R8(c->r[31]+0x00000004u); // 802F89FC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 802F8A00
  cmps(c,0,(int32_t)c->r[0],0); // 802F8A04
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802F8A08
  if (crb(c,2)) { goto L_802F8A20; } // 802F8A0C
  c->r[3]=0u+0x00000000u; // 802F8A10
  c->r[0]=0u+0x000000FFu; // 802F8A14
  W8(c->r[1]+0x00000008u,c->r[3]); // 802F8A18
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802F8A1C
L_802F8A20:;
  {uint32_t ea=c->r[2]+0xFFFFD018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F8A20
  c->r[4]=c->r[1]+0x00000008u; // 802F8A24
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8A28
  c->r[3]=0u+0x00000008u; // 802F8A2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F8A30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802F8A34
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[5]=c->ps1[5]=RF32(ea);} // 802F8A38
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802F8A3C
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 802F8A40
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[3]); // 802F8A44
  c->f[3]=c->ps1[3]=S(c->f[31]+c->f[3]); // 802F8A48
  c->f[4]=c->f[2]; // 802F8A4C
  c->lr=0x802F8A54u; f_802F76C0(c); // 802F8A50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F8A54
  c->r[4]=c->r[1]+0x00000008u; // 802F8A58
  {uint32_t ea=c->r[2]+0xFFFFD018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F8A5C
  c->r[3]=0u+0x00000008u; // 802F8A60
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8A64
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802F8A68
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[5]=c->ps1[5]=RF32(ea);} // 802F8A6C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802F8A70
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 802F8A74
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 802F8A78
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[0]); // 802F8A7C
  c->f[3]=c->f[1]; // 802F8A80
  c->lr=0x802F8A88u; f_802F76C0(c); // 802F8A84
  {uint32_t ea=c->r[2]+0xFFFFD018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F8A88
  c->r[4]=c->r[1]+0x00000008u; // 802F8A8C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8A90
  c->r[3]=0u+0x00000008u; // 802F8A94
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F8A98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802F8A9C
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[5]=c->ps1[5]=RF32(ea);} // 802F8AA0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802F8AA4
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 802F8AA8
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[3]); // 802F8AAC
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[3]); // 802F8AB0
  c->f[4]=c->f[2]; // 802F8AB4
  c->lr=0x802F8ABCu; f_802F76C0(c); // 802F8AB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F8ABC
  c->r[4]=c->r[1]+0x00000008u; // 802F8AC0
  {uint32_t ea=c->r[2]+0xFFFFD018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802F8AC4
  c->r[3]=0u+0x00000008u; // 802F8AC8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8ACC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802F8AD0
  {uint32_t ea=c->r[2]+0xFFFFD010u; c->f[5]=c->ps1[5]=RF32(ea);} // 802F8AD4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802F8AD8
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 802F8ADC
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 802F8AE0
  c->f[4]=c->ps1[4]=S(c->f[30]-c->f[0]); // 802F8AE4
  c->f[3]=c->f[1]; // 802F8AE8
  c->lr=0x802F8AF0u; f_802F76C0(c); // 802F8AEC
L_802F8AF0:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802F8AF0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802F8AF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 802F8AF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802F8AFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802F8B00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F8B04
  c->lr=c->r[0]; // 802F8B08
  c->r[1]=c->r[1]+0x00000040u; // 802F8B0C
  return; // 802F8B10
}

// is_visible__Q210homebutton3guiFPQ36nw4hbm3lyt4Pane
void f_802F8B14(Ctx* __restrict c) {
  trace_call(0x802F8B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8B14
  c->r[0]=c->lr; // 802F8B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F8B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F8B20
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8B24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8B28
  if (!crb(c,2)) { goto L_802F8B38; } // 802F8B2C
  c->r[3]=0u+0x00000000u; // 802F8B30
  goto L_802F8C00; // 802F8B34
L_802F8B38:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8B38
  cmps(c,0,(int32_t)c->r[3],0); // 802F8B3C
  if (!crb(c,2)) { goto L_802F8B4C; } // 802F8B40
  c->r[3]=0u+0x00000001u; // 802F8B44
  goto L_802F8C00; // 802F8B48
L_802F8B4C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8B4C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8B50
  if (!crb(c,2)) { goto L_802F8B60; } // 802F8B54
  c->r[3]=0u+0x00000000u; // 802F8B58
  goto L_802F8C00; // 802F8B5C
L_802F8B60:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8B60
  cmps(c,0,(int32_t)c->r[3],0); // 802F8B64
  if (!crb(c,2)) { goto L_802F8B74; } // 802F8B68
  c->r[3]=0u+0x00000001u; // 802F8B6C
  goto L_802F8C00; // 802F8B70
L_802F8B74:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8B74
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8B78
  if (!crb(c,2)) { goto L_802F8B88; } // 802F8B7C
  c->r[3]=0u+0x00000000u; // 802F8B80
  goto L_802F8C00; // 802F8B84
L_802F8B88:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8B88
  cmps(c,0,(int32_t)c->r[3],0); // 802F8B8C
  if (!crb(c,2)) { goto L_802F8B9C; } // 802F8B90
  c->r[3]=0u+0x00000001u; // 802F8B94
  goto L_802F8C00; // 802F8B98
L_802F8B9C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8B9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8BA0
  if (!crb(c,2)) { goto L_802F8BB0; } // 802F8BA4
  c->r[3]=0u+0x00000000u; // 802F8BA8
  goto L_802F8C00; // 802F8BAC
L_802F8BB0:;
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 802F8BB0
  cmps(c,0,(int32_t)c->r[31],0); // 802F8BB4
  if (!crb(c,2)) { goto L_802F8BC4; } // 802F8BB8
  c->r[3]=0u+0x00000001u; // 802F8BBC
  goto L_802F8C00; // 802F8BC0
L_802F8BC4:;
  c->r[3]=c->r[31]|c->r[31]; // 802F8BC4
  c->lr=0x802F8BCCu; f_802F8C14(c); // 802F8BC8
  cmps(c,0,(int32_t)c->r[3],0); // 802F8BCC
  if (!crb(c,2)) { goto L_802F8BDC; } // 802F8BD0
  c->r[3]=0u+0x00000000u; // 802F8BD4
  goto L_802F8C00; // 802F8BD8
L_802F8BDC:;
  c->r[3]=c->r[31]|c->r[31]; // 802F8BDC
  c->lr=0x802F8BE4u; f_802F8C20(c); // 802F8BE0
  cmps(c,0,(int32_t)c->r[3],0); // 802F8BE4
  if (!crb(c,2)) { goto L_802F8BF4; } // 802F8BE8
  c->r[3]=0u+0x00000001u; // 802F8BEC
  goto L_802F8C00; // 802F8BF0
L_802F8BF4:;
  c->r[3]=c->r[31]|c->r[31]; // 802F8BF4
  c->lr=0x802F8BFCu; f_802F8C20(c); // 802F8BF8
  c->lr=0x802F8C00u; f_802F8B14(c); // 802F8BFC
L_802F8C00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F8C00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F8C04
  c->lr=c->r[0]; // 802F8C08
  c->r[1]=c->r[1]+0x00000010u; // 802F8C0C
  return; // 802F8C10
}

// IsVisible__Q36nw4hbm3lyt4PaneCFv
void f_802F8C14(Ctx* __restrict c) {
  trace_call(0x802F8C14u);
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8C14
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 802F8C18
  return; // 802F8C1C
}

// GetParent__Q36nw4hbm3lyt4PaneCFv
void f_802F8C20(Ctx* __restrict c) {
  trace_call(0x802F8C20u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8C20
  return; // 802F8C24
}

// isVisible__Q310homebutton3gui13PaneComponentFv
void f_802F8C28(Ctx* __restrict c) {
  trace_call(0x802F8C28u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 802F8C28
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8C2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8C30
  if (!crb(c,2)) { goto L_802F8C40; } // 802F8C34
  c->r[3]=0u+0x00000000u; // 802F8C38
  return; // 802F8C3C
L_802F8C40:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8C40
  cmps(c,0,(int32_t)c->r[3],0); // 802F8C44
  if (!crb(c,2)) { goto L_802F8C54; } // 802F8C48
  c->r[3]=0u+0x00000001u; // 802F8C4C
  return; // 802F8C50
L_802F8C54:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8C54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8C58
  if (!crb(c,2)) { goto L_802F8C68; } // 802F8C5C
  c->r[3]=0u+0x00000000u; // 802F8C60
  return; // 802F8C64
L_802F8C68:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8C68
  cmps(c,0,(int32_t)c->r[3],0); // 802F8C6C
  if (!crb(c,2)) { goto L_802F8C7C; } // 802F8C70
  c->r[3]=0u+0x00000001u; // 802F8C74
  return; // 802F8C78
L_802F8C7C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8C7C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8C80
  if (!crb(c,2)) { goto L_802F8C90; } // 802F8C84
  c->r[3]=0u+0x00000000u; // 802F8C88
  return; // 802F8C8C
L_802F8C90:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8C90
  cmps(c,0,(int32_t)c->r[3],0); // 802F8C94
  if (!crb(c,2)) { goto L_802F8CA4; } // 802F8C98
  c->r[3]=0u+0x00000001u; // 802F8C9C
  return; // 802F8CA0
L_802F8CA4:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8CA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8CA8
  if (!crb(c,2)) { goto L_802F8CB8; } // 802F8CAC
  c->r[3]=0u+0x00000000u; // 802F8CB0
  return; // 802F8CB4
L_802F8CB8:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8CB8
  cmps(c,0,(int32_t)c->r[3],0); // 802F8CBC
  if (!crb(c,2)) { goto L_802F8CCC; } // 802F8CC0
  c->r[3]=0u+0x00000001u; // 802F8CC4
  return; // 802F8CC8
L_802F8CCC:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 802F8CCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802F8CD0
  if (!crb(c,2)) { goto L_802F8CE0; } // 802F8CD4
  c->r[3]=0u+0x00000000u; // 802F8CD8
  return; // 802F8CDC
L_802F8CE0:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802F8CE0
  cmps(c,0,(int32_t)c->r[3],0); // 802F8CE4
  if (!crb(c,2)) { goto L_802F8CF4; } // 802F8CE8
  c->r[3]=0u+0x00000001u; // 802F8CEC
  return; // 802F8CF0
L_802F8CF4:;
  f_802F8B14(c); return; // 802F8CF4
  return; // 802F8CF8
}

// fn_802F8CFC
void f_802F8CFC(Ctx* __restrict c) {
  trace_call(0x802F8CFCu);
  c->r[3]=0u+0x00000000u; // 802F8CFC
  return; // 802F8D00
}

// fn_802F8D04
void f_802F8D04(Ctx* __restrict c) {
  trace_call(0x802F8D04u);
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 802F8D04
  return; // 802F8D08
}

// fn_802F8D0C
void f_802F8D0C(Ctx* __restrict c) {
  trace_call(0x802F8D0Cu);
  return; // 802F8D0C
}

// setEventHandler__Q310homebutton3gui7ManagerFPQ310homebutton3gui12EventHandler
void f_802F8D10(Ctx* __restrict c) {
  trace_call(0x802F8D10u);
  cmps(c,0,(int32_t)c->r[4],0); // 802F8D10
  W32(c->r[3]+0x00000004u,c->r[4]); // 802F8D14
  c->r[0]=c->r[3]|c->r[3]; // 802F8D18
  if (crb(c,2)) return; // 802F8D1C
  c->r[3]=c->r[4]|c->r[4]; // 802F8D20
  c->r[4]=c->r[0]|c->r[0]; // 802F8D24
  c->r[12]=R32(c->r[3]+0x00000000u); // 802F8D28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802F8D2C
  c->ctr=c->r[12]; // 802F8D30
  if (true) { dispatch(c,c->ctr); return; } // 802F8D34
  return; // 802F8D38
}

// fn_802F8D3C
void f_802F8D3C(Ctx* __restrict c) {
  trace_call(0x802F8D3Cu);
  c->r[3]=0u+0x00000000u; // 802F8D3C
  return; // 802F8D40
}

// fn_802F8D44
void f_802F8D44(Ctx* __restrict c) {
  trace_call(0x802F8D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8D44
  c->r[0]=c->lr; // 802F8D48
  cmps(c,0,(int32_t)c->r[4],0); // 802F8D4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F8D50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F8D54
  c->r[31]=c->r[4]|c->r[4]; // 802F8D58
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F8D5C
  c->r[30]=c->r[3]|c->r[3]; // 802F8D60
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F8D64
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F8D68
  if (crb(c,2)) { goto L_802F8D80; } // 802F8D6C
  if (!crb(c,0)) { goto L_802F8E0C; } // 802F8D70
  cmps(c,0,(int32_t)c->r[4],-1); // 802F8D74
  if (!crb(c,0)) { goto L_802F8DD0; } // 802F8D78
  goto L_802F8E0C; // 802F8D7C
L_802F8D80:;
  c->r[28]=0u+0x80610000u; // 802F8D80
  c->r[29]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802F8D84
  c->r[28]=c->r[28]+0x00000770u; // 802F8D88
  c->r[4]=R32(c->r[28]+c->r[29]); // 802F8D8C
  c->r[0]=R8(c->r[4]+0x00000040u); // 802F8D90
  cmps(c,0,(int32_t)c->r[0],0); // 802F8D94
  if (!crb(c,2)) { goto L_802F8DBC; } // 802F8D98
  c->r[4]=0u+0x80300000u; // 802F8D9C
  c->r[4]=c->r[4]+0xFFFF8E58u; // 802F8DA0
  c->lr=0x802F8DA8u; f_802AD22C(c); // 802F8DA4
  c->r[4]=R32(c->r[28]+c->r[29]); // 802F8DA8
  c->r[0]=0u+0x00000001u; // 802F8DAC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 802F8DB0
  c->r[3]=R32(c->r[28]+c->r[29]); // 802F8DB4
  W8(c->r[3]+0x00000040u,c->r[0]); // 802F8DB8
L_802F8DBC:;
  c->r[3]=c->r[30]|c->r[30]; // 802F8DBC
  c->r[4]=0u+0x00000000u; // 802F8DC0
  c->r[5]=0u+0x00000000u; // 802F8DC4
  c->lr=0x802F8DCCu; f_802ADF6C(c); // 802F8DC8
  goto L_802F8E0C; // 802F8DCC
L_802F8DD0:;
  c->r[29]=0u+0x80610000u; // 802F8DD0
  c->r[28]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802F8DD4
  c->r[29]=c->r[29]+0x00000770u; // 802F8DD8
  c->r[4]=R32(c->r[29]+c->r[28]); // 802F8DDC
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 802F8DE0
  c->lr=0x802F8DE8u; f_802AD22C(c); // 802F8DE4
  c->r[3]=R32(c->r[29]+c->r[28]); // 802F8DE8
  c->r[0]=0u+0x00000000u; // 802F8DEC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802F8DF0
  c->r[3]=R32(c->r[29]+c->r[28]); // 802F8DF4
  W8(c->r[3]+0x00000040u,c->r[0]); // 802F8DF8
  c->r[3]=R32(c->r[29]+c->r[28]); // 802F8DFC
  W8(c->r[3]+0x00000042u,c->r[0]); // 802F8E00
  c->r[3]=R32(c->r[29]+c->r[28]); // 802F8E04
  W8(c->r[3]+0x00000043u,c->r[0]); // 802F8E08
L_802F8E0C:;
  c->r[3]=0u+0x80610000u; // 802F8E0C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802F8E10
  c->r[3]=c->r[3]+0x00000770u; // 802F8E14
  c->r[3]=R32(c->r[3]+c->r[0]); // 802F8E18
  c->r[12]=R32(c->r[3]+0x00000028u); // 802F8E1C
  cmps(c,0,(int32_t)c->r[12],0); // 802F8E20
  if (crb(c,2)) { goto L_802F8E38; } // 802F8E24
  c->r[3]=c->r[30]|c->r[30]; // 802F8E28
  c->r[4]=c->r[31]|c->r[31]; // 802F8E2C
  c->ctr=c->r[12]; // 802F8E30
  if (true) { c->lr=0x802F8E38u; dispatch(c,c->ctr); } // 802F8E34
L_802F8E38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8E38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F8E3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F8E40
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F8E44
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F8E48
  c->lr=c->r[0]; // 802F8E4C
  c->r[1]=c->r[1]+0x00000020u; // 802F8E50
  return; // 802F8E54
}

// wpadExtensionCallback__Q210homebutton10ControllerFll
void f_802F8E58(Ctx* __restrict c) {
  trace_call(0x802F8E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8E58
  c->r[0]=c->lr; // 802F8E5C
  cmps(c,0,(int32_t)c->r[4],255); // 802F8E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F8E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F8E68
  c->r[31]=c->r[4]|c->r[4]; // 802F8E6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F8E70
  c->r[30]=c->r[3]|c->r[3]; // 802F8E74
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F8E78
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F8E7C
  if (crb(c,2)) { goto L_802F8E88; } // 802F8E80
  goto L_802F8F1C; // 802F8E84
L_802F8E88:;
  c->r[4]=0u+0x80610000u; // 802F8E88
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802F8E8C
  c->r[4]=c->r[4]+0x00000770u; // 802F8E90
  c->r[29]=R32(c->r[4]+c->r[0]); // 802F8E94
  c->r[28]=R32(c->r[29]+0x00000000u); // 802F8E98
  c->r[3]=c->r[28]|c->r[28]; // 802F8E9C
  c->lr=0x802F8EA4u; f_802ADF28(c); // 802F8EA0
  cmps(c,0,(int32_t)c->r[3],0); // 802F8EA4
  if (crb(c,2)) { goto L_802F8F1C; } // 802F8EA8
  c->r[3]=c->r[28]|c->r[28]; // 802F8EAC
  c->r[4]=0u+0x00000002u; // 802F8EB0
  c->r[5]=0u+0x00000000u; // 802F8EB4
  c->lr=0x802F8EBCu; f_802ADF6C(c); // 802F8EB8
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 802F8EBC
  c->r[3]=0u+0x80610000u; // 802F8EC0
  c->r[4]=c->r[28]|c->r[28]; // 802F8EC4
  c->r[3]=c->r[3]+0x000006B0u; // 802F8EC8
  c->r[28]=c->r[3]+c->r[0]; // 802F8ECC
  c->r[3]=c->r[28]|c->r[28]; // 802F8ED0
  c->lr=0x802F8ED8u; f_801B9EF0(c); // 802F8ED4
  c->r[3]=c->r[28]|c->r[28]; // 802F8ED8
  c->lr=0x802F8EE0u; f_801B9AC8(c); // 802F8EDC
  c->r[4]=0u+0x80000000u; // 802F8EE0
  c->r[7]=0u+0x80300000u; // 802F8EE4
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802F8EE8
  c->r[3]=0u+0x10620000u; // 802F8EEC
  c->r[4]=c->r[3]+0x00004DD3u; // 802F8EF0
  c->r[7]=c->r[7]+0xFFFF8F68u; // 802F8EF4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F8EF8
  c->r[3]=c->r[28]|c->r[28]; // 802F8EFC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802F8F00
  c->r[5]=0u+0x00000000u; // 802F8F04
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F8F08
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 802F8F0C
  c->lr=0x802F8F14u; f_801B99D4(c); // 802F8F10
  c->r[0]=0u+0x00000001u; // 802F8F14
  W8(c->r[29]+0x00000041u,c->r[0]); // 802F8F18
L_802F8F1C:;
  c->r[3]=0u+0x80610000u; // 802F8F1C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802F8F20
  c->r[3]=c->r[3]+0x00000770u; // 802F8F24
  c->r[3]=R32(c->r[3]+c->r[0]); // 802F8F28
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 802F8F2C
  cmps(c,0,(int32_t)c->r[12],0); // 802F8F30
  if (crb(c,2)) { goto L_802F8F48; } // 802F8F34
  c->r[3]=c->r[30]|c->r[30]; // 802F8F38
  c->r[4]=c->r[31]|c->r[31]; // 802F8F3C
  c->ctr=c->r[12]; // 802F8F40
  if (true) { c->lr=0x802F8F48u; dispatch(c,c->ctr); } // 802F8F44
L_802F8F48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F8F48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F8F4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F8F50
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F8F54
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F8F58
  c->lr=c->r[0]; // 802F8F5C
  c->r[1]=c->r[1]+0x00000020u; // 802F8F60
  return; // 802F8F64
}

// soundOnCallback__Q210homebutton10ControllerFP7OSAlarmP9OSContext
void f_802F8F68(Ctx* __restrict c) {
  trace_call(0x802F8F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8F68
  c->r[0]=c->lr; // 802F8F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F8F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F8F74
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F8F78
  c->lr=0x802F8F80u; f_801B9EF8(c); // 802F8F7C
  c->r[4]=0u+0x80610000u; // 802F8F80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802F8F84
  c->r[4]=c->r[4]+0x00000770u; // 802F8F88
  c->r[31]=R32(c->r[4]+c->r[0]); // 802F8F8C
  c->r[30]=R32(c->r[31]+0x00000000u); // 802F8F90
  c->r[3]=c->r[30]|c->r[30]; // 802F8F94
  c->lr=0x802F8F9Cu; f_802ADF28(c); // 802F8F98
  cmps(c,0,(int32_t)c->r[3],0); // 802F8F9C
  if (crb(c,2)) { goto L_802F8FB4; } // 802F8FA0
  c->r[3]=c->r[30]|c->r[30]; // 802F8FA4
  c->r[4]=0u+0x00000003u; // 802F8FA8
  c->r[5]=0u+0x00000000u; // 802F8FAC
  c->lr=0x802F8FB4u; f_802ADF6C(c); // 802F8FB0
L_802F8FB4:;
  c->r[0]=0u+0x00000000u; // 802F8FB4
  W8(c->r[31]+0x00000041u,c->r[0]); // 802F8FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F8FBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F8FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F8FC4
  c->lr=c->r[0]; // 802F8FC8
  c->r[1]=c->r[1]+0x00000010u; // 802F8FCC
  return; // 802F8FD0
}

// fn_802F8FD4
void f_802F8FD4(Ctx* __restrict c) {
  trace_call(0x802F8FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F8FD4
  c->r[0]=c->lr; // 802F8FD8
  {uint32_t ea=c->r[2]+0xFFFFD020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F8FDC
  c->r[6]=0u+0x00000000u; // 802F8FE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F8FE4
  c->r[0]=0u+0x00000001u; // 802F8FE8
  cmps(c,0,(int32_t)c->r[4],4); // 802F8FEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F8FF0
  c->r[31]=0u+0x80610000u; // 802F8FF4
  c->r[31]=c->r[31]+0x000005F0u; // 802F8FF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F8FFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F9000
  c->r[29]=c->r[4]|c->r[4]; // 802F9004
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F9008
  c->r[28]=c->r[3]|c->r[3]; // 802F900C
  W32(c->r[3]+0x00000020u,c->r[6]); // 802F9010
  W32(c->r[3]+0x00000000u,c->r[4]); // 802F9014
  W8(c->r[3]+0x0000001Cu,c->r[6]); // 802F9018
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802F901C
  W32(c->r[3]+0x00000024u,c->r[5]); // 802F9020
  W32(c->r[3]+0x00000028u,c->r[6]); // 802F9024
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 802F9028
  W8(c->r[3]+0x00000040u,c->r[6]); // 802F902C
  W8(c->r[3]+0x00000041u,c->r[6]); // 802F9030
  W8(c->r[3]+0x00000044u,c->r[0]); // 802F9034
  if (!crb(c,0)) { goto L_802F906C; } // 802F9038
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802F903C
  c->r[3]=c->r[13]+0xFFFFA5A8u; // 802F9040
  c->r[0]=c->r[31]+0x00000000u; // 802F9044
  W8(c->r[3]+c->r[4],c->r[6]); // 802F9048
  c->r[3]=c->r[0]+c->r[30]; // 802F904C
  c->lr=0x802F9054u; f_801B9774(c); // 802F9050
  c->r[0]=c->r[31]+0x000000C0u; // 802F9054
  c->r[3]=c->r[0]+c->r[30]; // 802F9058
  c->lr=0x802F9060u; f_801B9774(c); // 802F905C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802F9060
  c->r[3]=c->r[31]+0x00000180u; // 802F9064
  W32(c->r[3]+c->r[0],c->r[28]); // 802F9068
L_802F906C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F906C
  c->r[3]=c->r[28]|c->r[28]; // 802F9070
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F9074
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F9078
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F907C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F9080
  c->lr=c->r[0]; // 802F9084
  c->r[1]=c->r[1]+0x00000020u; // 802F9088
  return; // 802F908C
}

// fn_802F9090
void f_802F9090(Ctx* __restrict c) {
  trace_call(0x802F9090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9090
  c->r[0]=c->lr; // 802F9094
  c->r[4]=0u+0x80300000u; // 802F9098
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F909C
  c->r[4]=c->r[4]+0xFFFF8D44u; // 802F90A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F90A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F90A8
  c->r[30]=c->r[3]|c->r[3]; // 802F90AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802F90B0
  c->lr=0x802F90B8u; f_802AD1C4(c); // 802F90B4
  c->r[31]=0u+0x00000001u; // 802F90B8
  W32(c->r[30]+0x00000028u,c->r[3]); // 802F90BC
  c->r[3]=R32(c->r[30]+0x00000000u); // 802F90C0
  c->r[4]=c->r[1]+0x00000008u; // 802F90C4
  W8(c->r[30]+0x00000044u,c->r[31]); // 802F90C8
  c->lr=0x802F90D0u; f_802AD0D0(c); // 802F90CC
  cmps(c,0,(int32_t)c->r[3],0); // 802F90D0
  if (crb(c,2)) { goto L_802F90E8; } // 802F90D4
  if (!crb(c,0)) { goto L_802F910C; } // 802F90D8
  cmps(c,0,(int32_t)c->r[3],-1); // 802F90DC
  if (!crb(c,0)) { goto L_802F9104; } // 802F90E0
  goto L_802F910C; // 802F90E4
L_802F90E8:;
  c->r[4]=0u+0x80300000u; // 802F90E8
  c->r[3]=R32(c->r[30]+0x00000000u); // 802F90EC
  c->r[4]=c->r[4]+0xFFFF8E58u; // 802F90F0
  c->lr=0x802F90F8u; f_802AD22C(c); // 802F90F4
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 802F90F8
  W8(c->r[30]+0x00000040u,c->r[31]); // 802F90FC
  goto L_802F910C; // 802F9100
L_802F9104:;
  c->r[0]=0u+0x00000000u; // 802F9104
  W8(c->r[30]+0x00000040u,c->r[0]); // 802F9108
L_802F910C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F910C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F9110
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F9114
  c->lr=c->r[0]; // 802F9118
  c->r[1]=c->r[1]+0x00000020u; // 802F911C
  return; // 802F9120
}

// fn_802F9124
void f_802F9124(Ctx* __restrict c) {
  trace_call(0x802F9124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9124
  c->r[0]=c->lr; // 802F9128
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F912C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9130
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F9134
  c->r[30]=c->r[3]|c->r[3]; // 802F9138
  c->r[3]=R32(c->r[3]+0x00000000u); // 802F913C
  c->r[4]=R32(c->r[30]+0x00000028u); // 802F9140
  c->lr=0x802F9148u; f_802AD1C4(c); // 802F9144
  c->r[31]=0u+0x00000000u; // 802F9148
  c->r[3]=R32(c->r[30]+0x00000000u); // 802F914C
  W32(c->r[30]+0x00000028u,c->r[31]); // 802F9150
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 802F9154
  c->lr=0x802F915Cu; f_802AD22C(c); // 802F9158
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 802F915C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9160
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F9164
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9168
  c->lr=c->r[0]; // 802F916C
  c->r[1]=c->r[1]+0x00000010u; // 802F9170
  return; // 802F9174
}

// setKpad__Q210homebutton10ControllerFPC11HBMKPadDatab
void f_802F9178(Ctx* __restrict c) {
  trace_call(0x802F9178u);
  c->r[6]=R32(c->r[4]+0x00000000u); // 802F9178
  cmps(c,0,(int32_t)c->r[6],0); // 802F917C
  if (crb(c,2)) return; // 802F9180
  cmps(c,0,(int32_t)c->r[5],0); // 802F9184
  if (crb(c,2)) { goto L_802F91CC; } // 802F9188
  c->r[0]=R8(c->r[6]+0x0000005Cu); // 802F918C
  cmpu(c,0,c->r[0],0x00000002u); // 802F9190
  if (!crb(c,2)) { goto L_802F91B8; } // 802F9194
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802F9198
  cmpu(c,0,c->r[0],0x00000002u); // 802F919C
  if (!crb(c,2)) { goto L_802F91B8; } // 802F91A0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F91A4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F91A8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 802F91AC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F91B0
  goto L_802F91CC; // 802F91B4
L_802F91B8:;
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F91B8
  c->r[5]=R32(c->r[4]+0x00000000u); // 802F91BC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802F91C0
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F91C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F91C8
L_802F91CC:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 802F91CC
  c->r[0]=R32(c->r[7]+0x00000004u); // 802F91D0
  W32(c->r[3]+0x00000010u,c->r[0]); // 802F91D4
  c->r[6]=R32(c->r[7]+0x00000000u); // 802F91D8
  W32(c->r[3]+0x00000014u,c->r[6]); // 802F91DC
  c->r[0]=R32(c->r[7]+0x00000008u); // 802F91E0
  W32(c->r[3]+0x00000018u,c->r[0]); // 802F91E4
  c->r[0]=R8(c->r[7]+0x0000005Cu); // 802F91E8
  cmpu(c,0,c->r[0],0x00000002u); // 802F91EC
  if (!crb(c,2)) return; // 802F91F0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802F91F4
  cmpu(c,0,c->r[0],0x00000002u); // 802F91F8
  if (!crb(c,2)) return; // 802F91FC
  c->r[0]=R32(c->r[7]+0x00000060u); // 802F9200
  c->r[4]=R32(c->r[7]+0x00000064u); // 802F9204
  c->r[5]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[5]); // 802F9208
  c->r[5]=R32(c->r[7]+0x00000068u); // 802F920C
  if (crb(c,2)) { goto L_802F921C; } // 802F9210
  c->r[6]=c->r[6]|0x00000800u; // 802F9214
  W32(c->r[3]+0x00000014u,c->r[6]); // 802F9218
L_802F921C:;
  c->r[6]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[6]); // 802F921C
  if (crb(c,2)) { goto L_802F9230; } // 802F9220
  c->r[6]=R32(c->r[3]+0x00000010u); // 802F9224
  c->r[6]=c->r[6]|0x00000800u; // 802F9228
  W32(c->r[3]+0x00000010u,c->r[6]); // 802F922C
L_802F9230:;
  c->r[6]=rotl(c->r[5],0)&0x00000010u; cr0(c,c->r[6]); // 802F9230
  if (crb(c,2)) { goto L_802F9244; } // 802F9234
  c->r[6]=R32(c->r[3]+0x00000018u); // 802F9238
  c->r[6]=c->r[6]|0x00000800u; // 802F923C
  W32(c->r[3]+0x00000018u,c->r[6]); // 802F9240
L_802F9244:;
  c->r[6]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[6]); // 802F9244
  if (crb(c,2)) { goto L_802F9258; } // 802F9248
  c->r[6]=R32(c->r[3]+0x00000014u); // 802F924C
  c->r[6]=c->r[6]|0x00000010u; // 802F9250
  W32(c->r[3]+0x00000014u,c->r[6]); // 802F9254
L_802F9258:;
  c->r[6]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[6]); // 802F9258
  if (crb(c,2)) { goto L_802F926C; } // 802F925C
  c->r[6]=R32(c->r[3]+0x00000010u); // 802F9260
  c->r[6]=c->r[6]|0x00000010u; // 802F9264
  W32(c->r[3]+0x00000010u,c->r[6]); // 802F9268
L_802F926C:;
  c->r[6]=rotl(c->r[5],0)&0x00000400u; cr0(c,c->r[6]); // 802F926C
  if (crb(c,2)) { goto L_802F9280; } // 802F9270
  c->r[6]=R32(c->r[3]+0x00000018u); // 802F9274
  c->r[6]=c->r[6]|0x00000010u; // 802F9278
  W32(c->r[3]+0x00000018u,c->r[6]); // 802F927C
L_802F9280:;
  c->r[6]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[6]); // 802F9280
  if (crb(c,2)) { goto L_802F9294; } // 802F9284
  c->r[6]=R32(c->r[3]+0x00000014u); // 802F9288
  c->r[6]=c->r[6]|0x00001000u; // 802F928C
  W32(c->r[3]+0x00000014u,c->r[6]); // 802F9290
L_802F9294:;
  c->r[6]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[6]); // 802F9294
  if (crb(c,2)) { goto L_802F92A8; } // 802F9298
  c->r[6]=R32(c->r[3]+0x00000010u); // 802F929C
  c->r[6]=c->r[6]|0x00001000u; // 802F92A0
  W32(c->r[3]+0x00000010u,c->r[6]); // 802F92A4
L_802F92A8:;
  c->r[6]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[6]); // 802F92A8
  if (crb(c,2)) { goto L_802F92BC; } // 802F92AC
  c->r[6]=R32(c->r[3]+0x00000018u); // 802F92B0
  c->r[6]=c->r[6]|0x00001000u; // 802F92B4
  W32(c->r[3]+0x00000018u,c->r[6]); // 802F92B8
L_802F92BC:;
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 802F92BC
  if (crb(c,2)) { goto L_802F92D0; } // 802F92C0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802F92C4
  c->r[0]=c->r[0]|0x00008000u; // 802F92C8
  W32(c->r[3]+0x00000014u,c->r[0]); // 802F92CC
L_802F92D0:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 802F92D0
  if (crb(c,2)) { goto L_802F92E4; } // 802F92D4
  c->r[0]=R32(c->r[3]+0x00000010u); // 802F92D8
  c->r[0]=c->r[0]|0x00008000u; // 802F92DC
  W32(c->r[3]+0x00000010u,c->r[0]); // 802F92E0
L_802F92E4:;
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 802F92E4
  if (crb(c,2)) return; // 802F92E8
  c->r[0]=R32(c->r[3]+0x00000018u); // 802F92EC
  c->r[0]=c->r[0]|0x00008000u; // 802F92F0
  W32(c->r[3]+0x00000018u,c->r[0]); // 802F92F4
  return; // 802F92F8
}

// fn_802F92FC
void f_802F92FC(Ctx* __restrict c) {
  trace_call(0x802F92FCu);
  c->r[0]=0u+0x00000000u; // 802F92FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 802F9300
  W32(c->r[3]+0x00000014u,c->r[0]); // 802F9304
  W32(c->r[3]+0x00000018u,c->r[0]); // 802F9308
  return; // 802F930C
}

// fn_802F9310
void f_802F9310(Ctx* __restrict c) {
  trace_call(0x802F9310u);
  {uint32_t ea=c->r[2]+0xFFFFD024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F9310
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802F9314
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802F9318
  return; // 802F931C
}

// fn_802F9320
void f_802F9320(Ctx* __restrict c) {
  trace_call(0x802F9320u);
  c->r[4]=c->r[3]|c->r[3]; // 802F9320
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F9324
  c->r[4]=R32(c->r[4]+0x00000000u); // 802F9328
  f_802F9E5C(c); return; // 802F932C
}

// fn_802F9330
void f_802F9330(Ctx* __restrict c) {
  trace_call(0x802F9330u);
  return; // 802F9330
}

// fn_802F9334
void f_802F9334(Ctx* __restrict c) {
  trace_call(0x802F9334u);
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802F9334
  return; // 802F9338
}

// fn_802F933C
void f_802F933C(Ctx* __restrict c) {
  trace_call(0x802F933Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F933C
  c->r[0]=c->lr; // 802F9340
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F9344
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F9348
  c->r[31]=c->r[3]|c->r[3]; // 802F934C
  c->r[0]=R8(c->r[3]+0x00000041u); // 802F9350
  cmps(c,0,(int32_t)c->r[0],0); // 802F9354
  if (!crb(c,2)) { goto L_802F93BC; } // 802F9358
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802F935C
  {uint32_t ea=c->r[2]+0xFFFFD028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802F9360
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F9364
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802F9368
  c->r[4]=R32(c->r[31]+0x00000000u); // 802F936C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802F9370
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 802F9374
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 802F9378
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 802F937C
  c->lr=0x802F9384u; f_802F9EDC(c); // 802F9380
  c->r[3]=R32(c->r[31]+0x00000000u); // 802F9384
  c->lr=0x802F938Cu; f_802ADF28(c); // 802F9388
  cmps(c,0,(int32_t)c->r[3],0); // 802F938C
  if (crb(c,2)) { goto L_802F93BC; } // 802F9390
  c->r[0]=R8(c->r[31]+0x00000042u); // 802F9394
  cmps(c,0,(int32_t)c->r[0],0); // 802F9398
  if (!crb(c,2)) { goto L_802F93AC; } // 802F939C
  c->lr=0x802F93A4u; f_801C257C(c); // 802F93A0
  W32(c->r[31]+0x00000034u,c->r[4]); // 802F93A4
  W32(c->r[31]+0x00000030u,c->r[3]); // 802F93A8
L_802F93AC:;
  c->r[3]=0u+0x00000001u; // 802F93AC
  c->r[0]=0u+0x00000000u; // 802F93B0
  W8(c->r[31]+0x00000042u,c->r[3]); // 802F93B4
  W8(c->r[31]+0x00000043u,c->r[0]); // 802F93B8
L_802F93BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F93BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F93C0
  c->lr=c->r[0]; // 802F93C4
  c->r[1]=c->r[1]+0x00000020u; // 802F93C8
  return; // 802F93CC
}

// isPlayingSoundId__Q210homebutton10ControllerCFi
void f_802F93D0(Ctx* __restrict c) {
  trace_call(0x802F93D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F93D0
  c->r[0]=c->lr; // 802F93D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F93D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F93DC
  c->r[31]=c->r[4]|c->r[4]; // 802F93E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F93E4
  c->r[30]=c->r[3]|c->r[3]; // 802F93E8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F93EC
  c->r[4]=R32(c->r[30]+0x00000000u); // 802F93F0
  c->lr=0x802F93F8u; f_802F9F74(c); // 802F93F4
  cmps(c,0,(int32_t)c->r[3],0); // 802F93F8
  if (!crb(c,2)) { goto L_802F9408; } // 802F93FC
  c->r[3]=0u+0x00000000u; // 802F9400
  goto L_802F9418; // 802F9404
L_802F9408:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 802F9408
  c->r[5]=c->r[31]|c->r[31]; // 802F940C
  c->r[4]=R32(c->r[30]+0x00000000u); // 802F9410
  c->lr=0x802F9418u; f_802F9F90(c); // 802F9414
L_802F9418:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F941C
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F9420
  c->lr=c->r[0]; // 802F9424
  c->r[1]=c->r[1]+0x00000010u; // 802F9428
  return; // 802F942C
}

// initSound__Q210homebutton10ControllerFv
void f_802F9430(Ctx* __restrict c) {
  trace_call(0x802F9430u);
  c->r[0]=0u+0x00000000u; // 802F9430
  W8(c->r[3]+0x00000042u,c->r[0]); // 802F9434
  W8(c->r[3]+0x00000043u,c->r[0]); // 802F9438
  return; // 802F943C
}

// updateSound__Q210homebutton10ControllerFv
void f_802F9440(Ctx* __restrict c) {
  trace_call(0x802F9440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9440
  c->r[0]=c->lr; // 802F9444
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F9448
  c->r[11]=c->r[1]+0x00000020u; // 802F944C
  c->lr=0x802F9454u; f_801E795C(c); // 802F9450
  c->r[27]=R32(c->r[3]+0x00000000u); // 802F9454
  c->r[31]=c->r[3]|c->r[3]; // 802F9458
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F945C
  c->r[4]=c->r[27]|c->r[27]; // 802F9460
  c->lr=0x802F9468u; f_802F9F74(c); // 802F9464
  cmps(c,0,(int32_t)c->r[3],0); // 802F9468
  if (!crb(c,2)) { goto L_802F94E4; } // 802F946C
  c->r[0]=R8(c->r[31]+0x00000042u); // 802F9470
  cmps(c,0,(int32_t)c->r[0],0); // 802F9474
  if (crb(c,2)) { goto L_802F9660; } // 802F9478
  c->r[0]=R8(c->r[31]+0x00000043u); // 802F947C
  cmps(c,0,(int32_t)c->r[0],0); // 802F9480
  if (!crb(c,2)) { goto L_802F94A0; } // 802F9484
  c->lr=0x802F948Cu; f_801C257C(c); // 802F9488
  c->r[0]=0u+0x00000001u; // 802F948C
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 802F9490
  W32(c->r[31]+0x00000038u,c->r[3]); // 802F9494
  W8(c->r[31]+0x00000043u,c->r[0]); // 802F9498
  goto L_802F9660; // 802F949C
L_802F94A0:;
  c->lr=0x802F94A4u; f_801C257C(c); // 802F94A0
  c->r[5]=0u+0x80000000u; // 802F94A4
  c->r[3]=0u+0x10620000u; // 802F94A8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802F94AC
  c->r[3]=c->r[3]+0x00004DD3u; // 802F94B0
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 802F94B4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F94B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 802F94BC
  c->r[3]=c->r[4]-c->r[5]; // 802F94C0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F94C4
  c->r[0]=divwu(c->r[3],c->r[0]); // 802F94C8
  cmpu(c,0,c->r[0],0x000003E8u); // 802F94CC
  if (crb(c,0)) { goto L_802F9660; } // 802F94D0
  c->r[0]=0u+0x00000000u; // 802F94D4
  W8(c->r[31]+0x00000042u,c->r[0]); // 802F94D8
  W8(c->r[31]+0x00000043u,c->r[0]); // 802F94DC
  goto L_802F9660; // 802F94E0
L_802F94E4:;
  c->r[0]=R8(c->r[31]+0x00000042u); // 802F94E4
  cmps(c,0,(int32_t)c->r[0],0); // 802F94E8
  if (crb(c,2)) { goto L_802F95BC; } // 802F94EC
  c->r[28]=0u+0x00000000u; // 802F94F0
  W8(c->r[31]+0x00000043u,c->r[28]); // 802F94F4
  c->lr=0x802F94FCu; f_801C257C(c); // 802F94F8
  c->r[29]=0u+0x80000000u; // 802F94FC
  c->r[30]=0u+0x10620000u; // 802F9500
  c->r[0]=R32(c->r[29]+0x000000F8u); // 802F9504
  c->r[3]=0u+0x00070000u; // 802F9508
  c->r[7]=R32(c->r[31]+0x00000034u); // 802F950C
  c->r[6]=c->r[30]+0x00004DD3u; // 802F9510
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F9514
  c->r[0]=c->r[3]+0x00005300u; // 802F9518
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[5])>>32); // 802F951C
  c->r[4]=c->r[4]-c->r[7]; // 802F9520
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 802F9524
  c->r[3]=divwu(c->r[4],c->r[3]); // 802F9528
  cmpu(c,0,c->r[3],c->r[0]); // 802F952C
  if (crb(c,0)) { goto L_802F95BC; } // 802F9530
  c->r[27]=R32(c->r[31]+0x00000000u); // 802F9534
  W8(c->r[31]+0x00000042u,c->r[28]); // 802F9538
  c->r[3]=c->r[27]|c->r[27]; // 802F953C
  W8(c->r[31]+0x00000043u,c->r[28]); // 802F9540
  c->lr=0x802F9548u; f_802ADF28(c); // 802F9544
  cmps(c,0,(int32_t)c->r[3],0); // 802F9548
  if (crb(c,2)) { goto L_802F9660; } // 802F954C
  c->r[3]=c->r[27]|c->r[27]; // 802F9550
  c->r[4]=0u+0x00000002u; // 802F9554
  c->r[5]=0u+0x00000000u; // 802F9558
  c->lr=0x802F9560u; f_802ADF6C(c); // 802F955C
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 802F9560
  c->r[3]=0u+0x80610000u; // 802F9564
  c->r[4]=c->r[27]|c->r[27]; // 802F9568
  c->r[3]=c->r[3]+0x000006B0u; // 802F956C
  c->r[27]=c->r[3]+c->r[0]; // 802F9570
  c->r[3]=c->r[27]|c->r[27]; // 802F9574
  c->lr=0x802F957Cu; f_801B9EF0(c); // 802F9578
  c->r[3]=c->r[27]|c->r[27]; // 802F957C
  c->lr=0x802F9584u; f_801B9AC8(c); // 802F9580
  c->r[0]=R32(c->r[29]+0x000000F8u); // 802F9584
  c->r[7]=0u+0x80300000u; // 802F9588
  c->r[4]=c->r[30]+0x00004DD3u; // 802F958C
  c->r[3]=c->r[27]|c->r[27]; // 802F9590
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F9594
  c->r[7]=c->r[7]+0xFFFF8F68u; // 802F9598
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802F959C
  c->r[5]=0u+0x00000000u; // 802F95A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F95A4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 802F95A8
  c->lr=0x802F95B0u; f_801B99D4(c); // 802F95AC
  c->r[0]=0u+0x00000001u; // 802F95B0
  W8(c->r[31]+0x00000041u,c->r[0]); // 802F95B4
  goto L_802F9660; // 802F95B8
L_802F95BC:;
  c->r[0]=R8(c->r[31]+0x00000041u); // 802F95BC
  cmps(c,0,(int32_t)c->r[0],0); // 802F95C0
  if (!crb(c,2)) { goto L_802F9660; } // 802F95C4
  c->r[3]=c->r[27]|c->r[27]; // 802F95C8
  c->lr=0x802F95D0u; f_802ABE54(c); // 802F95CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802F95D0
  cmpu(c,0,c->r[0],0x00000055u); // 802F95D4
  if (crb(c,1)) { goto L_802F9660; } // 802F95D8
  c->r[27]=R32(c->r[31]+0x00000000u); // 802F95DC
  c->r[3]=c->r[27]|c->r[27]; // 802F95E0
  c->lr=0x802F95E8u; f_802ADF28(c); // 802F95E4
  cmps(c,0,(int32_t)c->r[3],0); // 802F95E8
  if (crb(c,2)) { goto L_802F9660; } // 802F95EC
  c->r[3]=c->r[27]|c->r[27]; // 802F95F0
  c->r[4]=0u+0x00000002u; // 802F95F4
  c->r[5]=0u+0x00000000u; // 802F95F8
  c->lr=0x802F9600u; f_802ADF6C(c); // 802F95FC
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 802F9600
  c->r[3]=0u+0x80610000u; // 802F9604
  c->r[4]=c->r[27]|c->r[27]; // 802F9608
  c->r[3]=c->r[3]+0x000006B0u; // 802F960C
  c->r[27]=c->r[3]+c->r[0]; // 802F9610
  c->r[3]=c->r[27]|c->r[27]; // 802F9614
  c->lr=0x802F961Cu; f_801B9EF0(c); // 802F9618
  c->r[3]=c->r[27]|c->r[27]; // 802F961C
  c->lr=0x802F9624u; f_801B9AC8(c); // 802F9620
  c->r[4]=0u+0x80000000u; // 802F9624
  c->r[7]=0u+0x80300000u; // 802F9628
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802F962C
  c->r[3]=0u+0x10620000u; // 802F9630
  c->r[4]=c->r[3]+0x00004DD3u; // 802F9634
  c->r[7]=c->r[7]+0xFFFF8F68u; // 802F9638
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F963C
  c->r[3]=c->r[27]|c->r[27]; // 802F9640
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802F9644
  c->r[5]=0u+0x00000000u; // 802F9648
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F964C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 802F9650
  c->lr=0x802F9658u; f_801B99D4(c); // 802F9654
  c->r[0]=0u+0x00000001u; // 802F9658
  W8(c->r[31]+0x00000041u,c->r[0]); // 802F965C
L_802F9660:;
  c->r[11]=c->r[1]+0x00000020u; // 802F9660
  c->lr=0x802F9668u; f_801E79A8(c); // 802F9664
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F9668
  c->lr=c->r[0]; // 802F966C
  c->r[1]=c->r[1]+0x00000020u; // 802F9670
  return; // 802F9674
}

// fn_802F9678
void f_802F9678(Ctx* __restrict c) {
  trace_call(0x802F9678u);
  c->r[4]=c->r[3]|c->r[3]; // 802F9678
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F967C
  c->r[4]=R32(c->r[4]+0x00000000u); // 802F9680
  f_802F9FC0(c); return; // 802F9684
}

// fn_802F9688
void f_802F9688(Ctx* __restrict c) {
  trace_call(0x802F9688u);
  return; // 802F9688
}

// fn_802F968C
void f_802F968C(Ctx* __restrict c) {
  trace_call(0x802F968Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F968C
  c->r[0]=c->lr; // 802F9690
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9698
  c->r[31]=c->r[3]|c->r[3]; // 802F969C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802F96A0
  cmps(c,0,(int32_t)c->r[4],4); // 802F96A4
  if (!crb(c,0)) { goto L_802F96DC; } // 802F96A8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F96AC
  c->lr=0x802F96B4u; f_802F9F74(c); // 802F96B0
  cmps(c,0,(int32_t)c->r[3],0); // 802F96B4
  if (!crb(c,2)) { goto L_802F96DC; } // 802F96B8
  c->r[0]=R8(c->r[31]+0x00000044u); // 802F96BC
  cmps(c,0,(int32_t)c->r[0],0); // 802F96C0
  if (crb(c,2)) { goto L_802F96DC; } // 802F96C4
  c->r[0]=0u+0x00000001u; // 802F96C8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802F96CC
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 802F96D0
  c->r[4]=0u+0x00000001u; // 802F96D4
  c->lr=0x802F96DCu; f_802AD600(c); // 802F96D8
L_802F96DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F96DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F96E0
  c->lr=c->r[0]; // 802F96E4
  c->r[1]=c->r[1]+0x00000010u; // 802F96E8
  return; // 802F96EC
}

// stopMotor__Q210homebutton10ControllerFv
void f_802F96F0(Ctx* __restrict c) {
  trace_call(0x802F96F0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802F96F0
  cmps(c,0,(int32_t)c->r[5],4); // 802F96F4
  if (!crb(c,0)) return; // 802F96F8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 802F96FC
  cmps(c,0,(int32_t)c->r[0],0); // 802F9700
  if (crb(c,2)) return; // 802F9704
  c->r[0]=0u+0x00000000u; // 802F9708
  c->r[4]=0u+0x00000000u; // 802F970C
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 802F9710
  c->r[3]=c->r[5]|c->r[5]; // 802F9714
  f_802AD600(c); return; // 802F9718
  return; // 802F971C
}

// getInfoAsync__Q210homebutton10ControllerFP8WPADInfo
void f_802F9720(Ctx* __restrict c) {
  trace_call(0x802F9720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9720
  c->r[0]=c->lr; // 802F9724
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F972C
  c->r[31]=c->r[4]|c->r[4]; // 802F9730
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F9734
  c->r[30]=c->r[3]|c->r[3]; // 802F9738
  c->r[0]=R32(c->r[3]+0x00000000u); // 802F973C
  cmps(c,0,(int32_t)c->r[0],4); // 802F9740
  if (crb(c,0)) { goto L_802F9750; } // 802F9744
  c->r[3]=0u+0xFFFFFFFEu; // 802F9748
  goto L_802F978C; // 802F974C
L_802F9750:;
  c->r[3]=R32(c->r[3]+0x00000024u); // 802F9750
  c->r[4]=c->r[0]|c->r[0]; // 802F9754
  c->lr=0x802F975Cu; f_802F9F74(c); // 802F9758
  cmps(c,0,(int32_t)c->r[3],0); // 802F975C
  if (!crb(c,2)) { goto L_802F9770; } // 802F9760
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 802F9764
  cmps(c,0,(int32_t)c->r[0],0); // 802F9768
  if (crb(c,2)) { goto L_802F9778; } // 802F976C
L_802F9770:;
  c->r[3]=0u+0xFFFFFFFEu; // 802F9770
  goto L_802F978C; // 802F9774
L_802F9778:;
  c->r[5]=0u+0x80300000u; // 802F9778
  c->r[3]=R32(c->r[30]+0x00000000u); // 802F977C
  c->r[4]=c->r[31]|c->r[31]; // 802F9780
  c->r[5]=c->r[5]+0xFFFF97A4u; // 802F9784
  c->lr=0x802F978Cu; f_802AD3E0(c); // 802F9788
L_802F978C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F978C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9790
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F9794
  c->lr=c->r[0]; // 802F9798
  c->r[1]=c->r[1]+0x00000010u; // 802F979C
  return; // 802F97A0
}

// fn_802F97A4
void f_802F97A4(Ctx* __restrict c) {
  trace_call(0x802F97A4u);
  cmps(c,0,(int32_t)c->r[4],0); // 802F97A4
  if (!crb(c,2)) return; // 802F97A8
  cmps(c,0,(int32_t)c->r[3],4); // 802F97AC
  if (!crb(c,0)) return; // 802F97B0
  c->r[0]=0u+0x00000001u; // 802F97B4
  c->r[4]=c->r[13]+0xFFFFA5A8u; // 802F97B8
  W8(c->r[4]+c->r[3],c->r[0]); // 802F97BC
  return; // 802F97C0
}

// fn_802F97C4
void f_802F97C4(Ctx* __restrict c) {
  trace_call(0x802F97C4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802F97C4
  cmps(c,0,(int32_t)c->r[0],4); // 802F97C8
  if (crb(c,0)) { goto L_802F97D8; } // 802F97CC
  c->r[3]=0u+0x00000000u; // 802F97D0
  return; // 802F97D4
L_802F97D8:;
  c->r[3]=c->r[13]+0xFFFFA5A8u; // 802F97D8
  c->r[3]=R8(c->r[3]+c->r[0]); // 802F97DC
  return; // 802F97E0
}

// fn_802F97E4
void f_802F97E4(Ctx* __restrict c) {
  trace_call(0x802F97E4u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 802F97E4
  cmps(c,0,(int32_t)c->r[4],4); // 802F97E8
  if (!crb(c,0)) return; // 802F97EC
  c->r[0]=0u+0x00000000u; // 802F97F0
  c->r[3]=c->r[13]+0xFFFFA5A8u; // 802F97F4
  W8(c->r[3]+c->r[4],c->r[0]); // 802F97F8
  return; // 802F97FC
}

// fn_802F9800
void f_802F9800(Ctx* __restrict c) {
  trace_call(0x802F9800u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9800
  c->r[0]=c->lr; // 802F9804
  W32(c->r[1]+0x00000094u,c->r[0]); // 802F9808
  c->r[11]=c->r[1]+0x00000090u; // 802F980C
  c->lr=0x802F9814u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F9810
  c->r[29]=R32(c->r[13]+0xFFFFA5B0u); // 802F9814
  cmps(c,0,(int32_t)c->r[29],0); // 802F9818
  if (crb(c,2)) { goto L_802F9A4C; } // 802F981C
  c->r[28]=0u+0x00000000u; // 802F9820
  c->r[31]=0u+0x00000000u; // 802F9824
  c->r[30]=0u+0x66660000u; // 802F9828
  c->r[26]=0u+0xFFFFFFFFu; // 802F982C
L_802F9830:;
  c->r[0]=R32(c->r[29]+0x00000050u); // 802F9830
  cmps(c,0,(int32_t)c->r[0],0); // 802F9834
  if (crb(c,2)) { goto L_802F9A3C; } // 802F9838
  c->r[3]=c->r[28]|c->r[28]; // 802F983C
  c->lr=0x802F9844u; f_802ADF28(c); // 802F9840
  cmps(c,0,(int32_t)c->r[3],0); // 802F9844
  if (crb(c,2)) { goto L_802F9A3C; } // 802F9848
  c->lr=0x802F9850u; f_801BE74C(c); // 802F984C
  c->r[27]=c->r[3]|c->r[3]; // 802F9850
  c->r[3]=c->r[28]|c->r[28]; // 802F9854
  c->lr=0x802F985Cu; f_802AF744(c); // 802F9858
  cmps(c,0,(int32_t)c->r[3],0); // 802F985C
  if (crb(c,2)) { goto L_802F9A14; } // 802F9860
  c->r[0]=R32(c->r[29]+0x00000054u); // 802F9864
  c->r[7]=c->r[1]+0x00000020u; // 802F9868
  c->r[8]=R8(c->r[29]+0x0000005Du); // 802F986C
  c->r[5]=0u+0x00000028u; // 802F9870
  c->r[9]=rotl(c->r[0],31)&0x7FFFFFFFu; // 802F9874
  c->r[6]=R32(c->r[29]+0x00000050u); // 802F9878
  cmpu(c,0,c->r[9],0x00000028u); // 802F987C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 802F9880
  if (crb(c,1)) { goto L_802F988C; } // 802F9884
  c->r[5]=c->r[9]|c->r[9]; // 802F9888
L_802F988C:;
  cmpu(c,0,c->r[5],0x00000000u); // 802F988C
  c->r[4]=c->r[30]+0x00006667u; // 802F9890
  if (!crb(c,1)) { goto L_802F9954; } // 802F9894
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 802F9898
  c->ctr=c->r[0]; // 802F989C
  if (crb(c,2)) { goto L_802F9928; } // 802F98A0
L_802F98A4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 802F98A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 802F98A8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802F98AC
  c->r[0]=sraw(c,c->r[0],2); // 802F98B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F98B4
  c->r[0]=c->r[0]+c->r[3]; // 802F98B8
  W16(c->r[7]+0x00000000u,c->r[0]); // 802F98BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 802F98C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 802F98C4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802F98C8
  c->r[0]=sraw(c,c->r[0],2); // 802F98CC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F98D0
  c->r[0]=c->r[0]+c->r[3]; // 802F98D4
  W16(c->r[7]+0x00000002u,c->r[0]); // 802F98D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000004u); // 802F98DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 802F98E0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802F98E4
  c->r[0]=sraw(c,c->r[0],2); // 802F98E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F98EC
  c->r[0]=c->r[0]+c->r[3]; // 802F98F0
  W16(c->r[7]+0x00000004u,c->r[0]); // 802F98F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000006u); // 802F98F8
  c->r[6]=c->r[6]+0x00000008u; // 802F98FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 802F9900
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802F9904
  c->r[0]=sraw(c,c->r[0],2); // 802F9908
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F990C
  c->r[0]=c->r[0]+c->r[3]; // 802F9910
  W16(c->r[7]+0x00000006u,c->r[0]); // 802F9914
  c->r[7]=c->r[7]+0x00000008u; // 802F9918
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802F98A4; } // 802F991C
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 802F9920
  if (crb(c,2)) { goto L_802F9954; } // 802F9924
L_802F9928:;
  c->ctr=c->r[5]; // 802F9928
L_802F992C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 802F992C
  c->r[6]=c->r[6]+0x00000002u; // 802F9930
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 802F9934
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802F9938
  c->r[0]=sraw(c,c->r[0],2); // 802F993C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F9940
  c->r[0]=c->r[0]+c->r[3]; // 802F9944
  W16(c->r[7]+0x00000000u,c->r[0]); // 802F9948
  c->r[7]=c->r[7]+0x00000002u; // 802F994C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802F992C; } // 802F9950
L_802F9954:;
  cmpu(c,0,c->r[9],0x00000028u); // 802F9954
  if (crb(c,1)) { goto L_802F99B4; } // 802F9958
  c->r[3]=addc(c,~c->r[9],0x00000028u,1); // 802F995C
  cmpu(c,0,c->r[3],0x00000000u); // 802F9960
  if (!crb(c,1)) { goto L_802F99B4; } // 802F9964
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 802F9968
  c->ctr=c->r[0]; // 802F996C
  if (crb(c,2)) { goto L_802F99A4; } // 802F9970
L_802F9974:;
  W16(c->r[7]+0x00000000u,c->r[31]); // 802F9974
  W16(c->r[7]+0x00000002u,c->r[31]); // 802F9978
  W16(c->r[7]+0x00000004u,c->r[31]); // 802F997C
  W16(c->r[7]+0x00000006u,c->r[31]); // 802F9980
  W16(c->r[7]+0x00000008u,c->r[31]); // 802F9984
  W16(c->r[7]+0x0000000Au,c->r[31]); // 802F9988
  W16(c->r[7]+0x0000000Cu,c->r[31]); // 802F998C
  W16(c->r[7]+0x0000000Eu,c->r[31]); // 802F9990
  c->r[7]=c->r[7]+0x00000010u; // 802F9994
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802F9974; } // 802F9998
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 802F999C
  if (crb(c,2)) { goto L_802F99B4; } // 802F99A0
L_802F99A4:;
  c->ctr=c->r[3]; // 802F99A4
L_802F99A8:;
  W16(c->r[7]+0x00000000u,c->r[31]); // 802F99A8
  c->r[7]=c->r[7]+0x00000002u; // 802F99AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802F99A8; } // 802F99B0
L_802F99B4:;
  c->r[0]=R8(c->r[29]+0x0000005Cu); // 802F99B4
  c->r[3]=c->r[29]+0x00000030u; // 802F99B8
  c->r[5]=c->r[1]+0x00000020u; // 802F99BC
  c->r[7]=c->r[1]+0x00000008u; // 802F99C0
  c->r[0]=cntlz(c->r[0]); // 802F99C4
  c->r[6]=0u+0x00000028u; // 802F99C8
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 802F99CC
  c->lr=0x802F99D4u; f_80209EE8(c); // 802F99D0
  c->r[3]=c->r[28]|c->r[28]; // 802F99D4
  c->r[4]=c->r[1]+0x00000008u; // 802F99D8
  c->r[5]=0u+0x00000014u; // 802F99DC
  c->lr=0x802F99E4u; f_802AF7C8(c); // 802F99E0
  W8(c->r[29]+0x0000005Cu,c->r[31]); // 802F99E4
  W8(c->r[29]+0x0000005Eu,c->r[31]); // 802F99E8
  c->r[3]=R32(c->r[29]+0x00000050u); // 802F99EC
  c->r[0]=c->r[3]+0x00000050u; // 802F99F0
  W32(c->r[29]+0x00000050u,c->r[0]); // 802F99F4
  c->r[3]=R32(c->r[29]+0x00000054u); // 802F99F8
  c->r[0]=addc(c,c->r[3],0xFFFFFFB0u,0); cr0(c,c->r[0]); // 802F99FC
  W32(c->r[29]+0x00000054u,c->r[0]); // 802F9A00
  if (crb(c,1)) { goto L_802F9A34; } // 802F9A04
  W32(c->r[29]+0x00000058u,c->r[26]); // 802F9A08
  W32(c->r[29]+0x00000050u,c->r[31]); // 802F9A0C
  goto L_802F9A34; // 802F9A10
L_802F9A14:;
  c->r[3]=R8(c->r[29]+0x0000005Eu); // 802F9A14
  c->r[3]=c->r[3]+0x00000001u; // 802F9A18
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802F9A1C
  W8(c->r[29]+0x0000005Eu,c->r[3]); // 802F9A20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802F9A24
  cmps(c,0,(int32_t)c->r[0],60); // 802F9A28
  if (!crb(c,1)) { goto L_802F9A34; } // 802F9A2C
  W32(c->r[29]+0x00000050u,c->r[31]); // 802F9A30
L_802F9A34:;
  c->r[3]=c->r[27]|c->r[27]; // 802F9A34
  c->lr=0x802F9A3Cu; f_801BE774(c); // 802F9A38
L_802F9A3C:;
  c->r[28]=c->r[28]+0x00000001u; // 802F9A3C
  c->r[29]=c->r[29]+0x00000068u; // 802F9A40
  cmps(c,0,(int32_t)c->r[28],4); // 802F9A44
  if (crb(c,0)) { IRQCHK(c); goto L_802F9830; } // 802F9A48
L_802F9A4C:;
  c->r[11]=c->r[1]+0x00000090u; // 802F9A4C
  c->lr=0x802F9A54u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F9A50
  c->r[0]=R32(c->r[1]+0x00000094u); // 802F9A54
  c->lr=c->r[0]; // 802F9A58
  c->r[1]=c->r[1]+0x00000090u; // 802F9A5C
  return; // 802F9A60
}

// fn_802F9A64
void f_802F9A64(Ctx* __restrict c) {
  trace_call(0x802F9A64u);
  c->r[4]=R32(c->r[13]+0xFFFFA5B0u); // 802F9A64
  c->r[3]=0u+0xFFFFFFFFu; // 802F9A68
  c->r[0]=0u+0x00000000u; // 802F9A6C
  W32(c->r[4]+0x00000058u,c->r[3]); // 802F9A70
  W32(c->r[4]+0x00000050u,c->r[0]); // 802F9A74
  return; // 802F9A78
}

// fn_802F9A7C
void f_802F9A7C(Ctx* __restrict c) {
  trace_call(0x802F9A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9A7C
  c->r[0]=c->lr; // 802F9A80
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F9A84
  c->r[11]=c->r[1]+0x00000020u; // 802F9A88
  c->lr=0x802F9A90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F9A8C
  c->r[5]=0u+0x804D0000u; // 802F9A90
  cmps(c,0,(int32_t)c->r[4],0); // 802F9A94
  c->r[5]=c->r[5]+0xFFFF8348u; // 802F9A98
  c->r[26]=c->r[3]|c->r[3]; // 802F9A9C
  W32(c->r[3]+0x000001F0u,c->r[5]); // 802F9AA0
  W32(c->r[13]+0xFFFFA5B0u,c->r[3]); // 802F9AA4
  if (crb(c,2)) { goto L_802F9ACC; } // 802F9AA8
  c->r[3]=c->r[4]|c->r[4]; // 802F9AAC
  c->r[4]=c->r[26]+0x000001D0u; // 802F9AB0
  c->lr=0x802F9AB8u; f_8020A1C0(c); // 802F9AB4
  c->r[0]=0u-c->r[3]; // 802F9AB8
  c->r[0]=c->r[0]|c->r[3]; // 802F9ABC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802F9AC0
  W8(c->r[26]+0x000001ECu,c->r[0]); // 802F9AC4
  goto L_802F9AD4; // 802F9AC8
L_802F9ACC:;
  c->r[0]=0u+0x00000000u; // 802F9ACC
  W8(c->r[3]+0x000001ECu,c->r[0]); // 802F9AD0
L_802F9AD4:;
  c->r[3]=c->r[26]+0x000001A0u; // 802F9AD4
  c->lr=0x802F9ADCu; f_801B9774(c); // 802F9AD8
  c->r[28]=c->r[26]|c->r[26]; // 802F9ADC
  c->r[27]=0u+0x00000000u; // 802F9AE0
  c->r[29]=0u+0x00000000u; // 802F9AE4
  c->r[30]=0u+0xFFFFFFFFu; // 802F9AE8
  c->r[31]=0u+0x00000001u; // 802F9AEC
L_802F9AF0:;
  c->r[3]=c->r[28]|c->r[28]; // 802F9AF0
  c->lr=0x802F9AF8u; f_801B9774(c); // 802F9AF4
  W32(c->r[28]+0x00000050u,c->r[29]); // 802F9AF8
  c->r[27]=c->r[27]+0x00000001u; // 802F9AFC
  cmps(c,0,(int32_t)c->r[27],4); // 802F9B00
  W32(c->r[28]+0x00000058u,c->r[30]); // 802F9B04
  W8(c->r[28]+0x0000005Cu,c->r[31]); // 802F9B08
  W8(c->r[28]+0x00000062u,c->r[31]); // 802F9B0C
  c->r[28]=c->r[28]+0x00000068u; // 802F9B10
  if (crb(c,0)) { IRQCHK(c); goto L_802F9AF0; } // 802F9B14
  c->r[11]=c->r[1]+0x00000020u; // 802F9B18
  c->r[3]=c->r[26]|c->r[26]; // 802F9B1C
  c->lr=0x802F9B24u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F9B20
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F9B24
  c->lr=c->r[0]; // 802F9B28
  c->r[1]=c->r[1]+0x00000020u; // 802F9B2C
  return; // 802F9B30
}

// fn_802F9B34
void f_802F9B34(Ctx* __restrict c) {
  trace_call(0x802F9B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9B34
  c->r[0]=c->lr; // 802F9B38
  cmps(c,0,(int32_t)c->r[3],0); // 802F9B3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802F9B40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802F9B44
  W32(c->r[1]+0x00000018u,c->r[30]); // 802F9B48
  W32(c->r[1]+0x00000014u,c->r[29]); // 802F9B4C
  c->r[29]=c->r[4]|c->r[4]; // 802F9B50
  W32(c->r[1]+0x00000010u,c->r[28]); // 802F9B54
  c->r[28]=c->r[3]|c->r[3]; // 802F9B58
  if (crb(c,2)) { goto L_802F9BB0; } // 802F9B5C
  c->r[4]=0u+0x804D0000u; // 802F9B60
  c->r[0]=0u+0x00000000u; // 802F9B64
  c->r[4]=c->r[4]+0xFFFF8348u; // 802F9B68
  W32(c->r[3]+0x000001F0u,c->r[4]); // 802F9B6C
  W32(c->r[13]+0xFFFFA5B0u,c->r[0]); // 802F9B70
  W8(c->r[3]+0x000001ECu,c->r[0]); // 802F9B74
  c->r[3]=c->r[3]+0x000001A0u; // 802F9B78
  c->lr=0x802F9B80u; f_801B9AC8(c); // 802F9B7C
  c->r[31]=c->r[28]|c->r[28]; // 802F9B80
  c->r[30]=0u+0x00000000u; // 802F9B84
L_802F9B88:;
  c->r[3]=c->r[31]|c->r[31]; // 802F9B88
  c->lr=0x802F9B90u; f_801B9AC8(c); // 802F9B8C
  c->r[30]=c->r[30]+0x00000001u; // 802F9B90
  c->r[31]=c->r[31]+0x00000068u; // 802F9B94
  cmps(c,0,(int32_t)c->r[30],4); // 802F9B98
  if (crb(c,0)) { IRQCHK(c); goto L_802F9B88; } // 802F9B9C
  cmps(c,0,(int32_t)c->r[29],0); // 802F9BA0
  if (!crb(c,1)) { goto L_802F9BB0; } // 802F9BA4
  c->r[3]=c->r[28]|c->r[28]; // 802F9BA8
  c->lr=0x802F9BB0u; f_8001AAC0(c); // 802F9BAC
L_802F9BB0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802F9BB0
  c->r[3]=c->r[28]|c->r[28]; // 802F9BB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802F9BB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802F9BBC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802F9BC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802F9BC4
  c->lr=c->r[0]; // 802F9BC8
  c->r[1]=c->r[1]+0x00000020u; // 802F9BCC
  return; // 802F9BD0
}

// fn_802F9BD4
void f_802F9BD4(Ctx* __restrict c) {
  trace_call(0x802F9BD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9BD4
  c->r[0]=c->lr; // 802F9BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9BE0
  c->r[31]=c->r[3]|c->r[3]; // 802F9BE4
  c->r[0]=R8(c->r[3]+0x000001ECu); // 802F9BE8
  cmps(c,0,(int32_t)c->r[0],0); // 802F9BEC
  if (crb(c,2)) { goto L_802F9C54; } // 802F9BF0
  c->r[3]=c->r[3]+0x000001A0u; // 802F9BF4
  c->lr=0x802F9BFCu; f_801B9774(c); // 802F9BF8
  c->lr=0x802F9C00u; f_801C257C(c); // 802F9BFC
  c->r[6]=0u+0x80000000u; // 802F9C00
  c->r[5]=0u+0x431C0000u; // 802F9C04
  c->r[0]=R32(c->r[6]+0x000000F8u); // 802F9C08
  c->r[6]=0u+0x10620000u; // 802F9C0C
  c->r[10]=c->r[6]+0x00004DD3u; // 802F9C10
  c->r[9]=0u+0x80300000u; // 802F9C14
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F9C18
  c->r[5]=c->r[5]+0xFFFFDE83u; // 802F9C1C
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 802F9C20
  c->r[7]=0u+0x00660000u; // 802F9C24
  c->r[6]=c->r[4]|c->r[4]; // 802F9C28
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 802F9C2C
  c->r[5]=c->r[3]|c->r[3]; // 802F9C30
  c->r[3]=c->r[31]+0x000001A0u; // 802F9C34
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 802F9C38
  c->r[9]=c->r[9]+0xFFFF9800u; // 802F9C3C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802F9C40
  c->r[7]=0u+0x00000000u; // 802F9C44
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 802F9C48
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 802F9C4C
  c->lr=0x802F9C54u; f_801B9A44(c); // 802F9C50
L_802F9C54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9C54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9C58
  c->lr=c->r[0]; // 802F9C5C
  c->r[1]=c->r[1]+0x00000010u; // 802F9C60
  return; // 802F9C64
}

// fn_802F9C68
void f_802F9C68(Ctx* __restrict c) {
  trace_call(0x802F9C68u);
  c->r[3]=c->r[3]+0x000001A0u; // 802F9C68
  f_801B9AC8(c); return; // 802F9C6C
}

// fn_802F9C70
void f_802F9C70(Ctx* __restrict c) {
  trace_call(0x802F9C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9C70
  c->r[0]=c->lr; // 802F9C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9C78
  c->lr=0x802F9C80u; f_801B9EF8(c); // 802F9C7C
  c->r[5]=0u+0x80300000u; // 802F9C80
  c->r[4]=0u+0x00000001u; // 802F9C84
  c->r[5]=c->r[5]+0xFFFF9CA0u; // 802F9C88
  c->lr=0x802F9C90u; f_802ADF6C(c); // 802F9C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9C90
  c->lr=c->r[0]; // 802F9C94
  c->r[1]=c->r[1]+0x00000010u; // 802F9C98
  return; // 802F9C9C
}

// fn_802F9CA0
void f_802F9CA0(Ctx* __restrict c) {
  trace_call(0x802F9CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9CA0
  c->r[0]=c->lr; // 802F9CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9CAC
  c->r[6]=R32(c->r[13]+0xFFFFA5B0u); // 802F9CB0
  cmps(c,0,(int32_t)c->r[6],0); // 802F9CB4
  if (crb(c,2)) { goto L_802F9D50; } // 802F9CB8
  cmps(c,0,(int32_t)c->r[4],-1); // 802F9CBC
  if (crb(c,2)) { goto L_802F9D50; } // 802F9CC0
  if (!crb(c,0)) { goto L_802F9CD4; } // 802F9CC4
  cmps(c,0,(int32_t)c->r[4],-2); // 802F9CC8
  if (!crb(c,0)) { goto L_802F9D00; } // 802F9CCC
  goto L_802F9D50; // 802F9CD0
L_802F9CD4:;
  cmps(c,0,(int32_t)c->r[4],1); // 802F9CD4
  if (!crb(c,0)) { goto L_802F9D50; } // 802F9CD8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 802F9CDC
  c->r[5]=0u+0x80300000u; // 802F9CE0
  c->r[7]=0u+0x00000001u; // 802F9CE4
  c->r[5]=c->r[5]+0xFFFF9D94u; // 802F9CE8
  c->r[6]=c->r[6]+c->r[0]; // 802F9CEC
  c->r[4]=0u+0x00000004u; // 802F9CF0
  W8(c->r[6]+0x0000005Cu,c->r[7]); // 802F9CF4
  c->lr=0x802F9CFCu; f_802ADF6C(c); // 802F9CF8
  goto L_802F9D50; // 802F9CFC
L_802F9D00:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 802F9D00
  c->r[4]=c->r[3]|c->r[3]; // 802F9D04
  c->r[31]=c->r[6]+c->r[0]; // 802F9D08
  c->r[3]=c->r[31]|c->r[31]; // 802F9D0C
  c->lr=0x802F9D14u; f_801B9EF0(c); // 802F9D10
  c->r[3]=c->r[31]|c->r[31]; // 802F9D14
  c->lr=0x802F9D1Cu; f_801B9AC8(c); // 802F9D18
  c->r[4]=0u+0x80000000u; // 802F9D1C
  c->r[7]=0u+0x80300000u; // 802F9D20
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802F9D24
  c->r[3]=0u+0x10620000u; // 802F9D28
  c->r[4]=c->r[3]+0x00004DD3u; // 802F9D2C
  c->r[7]=c->r[7]+0xFFFF9C70u; // 802F9D30
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F9D34
  c->r[3]=c->r[31]|c->r[31]; // 802F9D38
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802F9D3C
  c->r[5]=0u+0x00000000u; // 802F9D40
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F9D44
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 802F9D48
  c->lr=0x802F9D50u; f_801B99D4(c); // 802F9D4C
L_802F9D50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9D50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9D54
  c->lr=c->r[0]; // 802F9D58
  c->r[1]=c->r[1]+0x00000010u; // 802F9D5C
  return; // 802F9D60
}

// fn_802F9D64
void f_802F9D64(Ctx* __restrict c) {
  trace_call(0x802F9D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9D64
  c->r[0]=c->lr; // 802F9D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9D6C
  c->lr=0x802F9D74u; f_801B9EF8(c); // 802F9D70
  c->r[5]=0u+0x80300000u; // 802F9D74
  c->r[4]=0u+0x00000004u; // 802F9D78
  c->r[5]=c->r[5]+0xFFFF9D94u; // 802F9D7C
  c->lr=0x802F9D84u; f_802ADF6C(c); // 802F9D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9D84
  c->lr=c->r[0]; // 802F9D88
  c->r[1]=c->r[1]+0x00000010u; // 802F9D8C
  return; // 802F9D90
}

// fn_802F9D94
void f_802F9D94(Ctx* __restrict c) {
  trace_call(0x802F9D94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9D94
  c->r[0]=c->lr; // 802F9D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9DA0
  c->r[5]=R32(c->r[13]+0xFFFFA5B0u); // 802F9DA4
  cmps(c,0,(int32_t)c->r[5],0); // 802F9DA8
  if (crb(c,2)) { goto L_802F9E48; } // 802F9DAC
  cmps(c,0,(int32_t)c->r[4],-1); // 802F9DB0
  if (crb(c,2)) { goto L_802F9DE4; } // 802F9DB4
  if (!crb(c,0)) { goto L_802F9DC8; } // 802F9DB8
  cmps(c,0,(int32_t)c->r[4],-2); // 802F9DBC
  if (!crb(c,0)) { goto L_802F9DF8; } // 802F9DC0
  goto L_802F9E48; // 802F9DC4
L_802F9DC8:;
  cmps(c,0,(int32_t)c->r[4],1); // 802F9DC8
  if (!crb(c,0)) { goto L_802F9E48; } // 802F9DCC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 802F9DD0
  c->r[4]=0u+0x00000001u; // 802F9DD4
  c->r[3]=c->r[5]+c->r[0]; // 802F9DD8
  W8(c->r[3]+0x00000062u,c->r[4]); // 802F9DDC
  goto L_802F9E48; // 802F9DE0
L_802F9DE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 802F9DE4
  c->r[4]=0u+0x00000000u; // 802F9DE8
  c->r[3]=c->r[5]+c->r[0]; // 802F9DEC
  W8(c->r[3]+0x00000062u,c->r[4]); // 802F9DF0
  goto L_802F9E48; // 802F9DF4
L_802F9DF8:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)104); // 802F9DF8
  c->r[4]=c->r[3]|c->r[3]; // 802F9DFC
  c->r[31]=c->r[5]+c->r[0]; // 802F9E00
  c->r[3]=c->r[31]|c->r[31]; // 802F9E04
  c->lr=0x802F9E0Cu; f_801B9EF0(c); // 802F9E08
  c->r[3]=c->r[31]|c->r[31]; // 802F9E0C
  c->lr=0x802F9E14u; f_801B9AC8(c); // 802F9E10
  c->r[4]=0u+0x80000000u; // 802F9E14
  c->r[7]=0u+0x80300000u; // 802F9E18
  c->r[0]=R32(c->r[4]+0x000000F8u); // 802F9E1C
  c->r[3]=0u+0x10620000u; // 802F9E20
  c->r[4]=c->r[3]+0x00004DD3u; // 802F9E24
  c->r[7]=c->r[7]+0xFFFF9D64u; // 802F9E28
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802F9E2C
  c->r[3]=c->r[31]|c->r[31]; // 802F9E30
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 802F9E34
  c->r[5]=0u+0x00000000u; // 802F9E38
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802F9E3C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)50); // 802F9E40
  c->lr=0x802F9E48u; f_801B99D4(c); // 802F9E44
L_802F9E48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9E48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9E4C
  c->lr=c->r[0]; // 802F9E50
  c->r[1]=c->r[1]+0x00000010u; // 802F9E54
  return; // 802F9E58
}

// fn_802F9E5C
void f_802F9E5C(Ctx* __restrict c) {
  trace_call(0x802F9E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9E5C
  c->r[0]=c->lr; // 802F9E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 802F9E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802F9E68
  c->r[31]=c->r[4]|c->r[4]; // 802F9E6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 802F9E70
  c->r[30]=c->r[3]|c->r[3]; // 802F9E74
  c->r[0]=R8(c->r[3]+0x000001ECu); // 802F9E78
  cmps(c,0,(int32_t)c->r[0],0); // 802F9E7C
  if (crb(c,2)) { goto L_802F9EC4; } // 802F9E80
  c->r[5]=0u+0x80300000u; // 802F9E84
  c->r[3]=c->r[31]|c->r[31]; // 802F9E88
  c->r[5]=c->r[5]+0xFFFF9CA0u; // 802F9E8C
  c->r[4]=0u+0x00000001u; // 802F9E90
  c->lr=0x802F9E98u; f_802ADF6C(c); // 802F9E94
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)104); // 802F9E98
  c->r[4]=0u+0x00000000u; // 802F9E9C
  c->r[5]=0u+0x00000020u; // 802F9EA0
  c->r[3]=c->r[30]+c->r[31]; // 802F9EA4
  c->r[3]=c->r[3]+0x00000030u; // 802F9EA8
  c->lr=0x802F9EB0u; f_8000443C(c); // 802F9EAC
  c->r[3]=c->r[30]+c->r[31]; // 802F9EB0
  c->r[0]=0u+0x00000001u; // 802F9EB4
  W8(c->r[3]+0x0000005Cu,c->r[0]); // 802F9EB8
  c->r[0]=0u+0x00000000u; // 802F9EBC
  W8(c->r[3]+0x00000062u,c->r[0]); // 802F9EC0
L_802F9EC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802F9EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802F9EC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802F9ECC
  c->lr=c->r[0]; // 802F9ED0
  c->r[1]=c->r[1]+0x00000010u; // 802F9ED4
  return; // 802F9ED8
}

// Play__Q210homebutton9RemoteSpkFliSc
void f_802F9EDC(Ctx* __restrict c) {
  trace_call(0x802F9EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9EDC
  c->r[0]=c->lr; // 802F9EE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802F9EE4
  c->r[11]=c->r[1]+0x00000030u; // 802F9EE8
  c->lr=0x802F9EF0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802F9EEC
  c->r[0]=R8(c->r[3]+0x000001ECu); // 802F9EF0
  c->r[26]=c->r[3]|c->r[3]; // 802F9EF4
  c->r[27]=c->r[4]|c->r[4]; // 802F9EF8
  c->r[28]=c->r[5]|c->r[5]; // 802F9EFC
  cmps(c,0,(int32_t)c->r[0],0); // 802F9F00
  c->r[29]=c->r[6]|c->r[6]; // 802F9F04
  if (crb(c,2)) { goto L_802F9F5C; } // 802F9F08
  c->r[4]=c->r[28]|c->r[28]; // 802F9F0C
  c->r[5]=c->r[1]+0x00000008u; // 802F9F10
  c->r[3]=c->r[3]+0x000001D0u; // 802F9F14
  c->lr=0x802F9F1Cu; f_8020A260(c); // 802F9F18
  c->r[3]=c->r[1]+0x00000008u; // 802F9F1C
  c->lr=0x802F9F24u; f_8020A514(c); // 802F9F20
  c->r[30]=c->r[3]|c->r[3]; // 802F9F24
  c->r[3]=c->r[1]+0x00000008u; // 802F9F28
  c->lr=0x802F9F30u; f_8020A528(c); // 802F9F2C
  c->r[31]=c->r[3]|c->r[3]; // 802F9F30
  c->r[3]=c->r[1]+0x00000008u; // 802F9F34
  c->lr=0x802F9F3Cu; f_8020A530(c); // 802F9F38
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)104); // 802F9F3C
  c->r[0]=0u+0x00000000u; // 802F9F40
  c->r[3]=c->r[26]+c->r[3]; // 802F9F44
  W8(c->r[3]+0x0000005Eu,c->r[0]); // 802F9F48
  W32(c->r[3]+0x00000058u,c->r[28]); // 802F9F4C
  W32(c->r[3]+0x00000054u,c->r[31]); // 802F9F50
  W8(c->r[3]+0x0000005Du,c->r[29]); // 802F9F54
  W32(c->r[3]+0x00000050u,c->r[30]); // 802F9F58
L_802F9F5C:;
  c->r[11]=c->r[1]+0x00000030u; // 802F9F5C
  c->lr=0x802F9F64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802F9F60
  c->r[0]=R32(c->r[1]+0x00000034u); // 802F9F64
  c->lr=c->r[0]; // 802F9F68
  c->r[1]=c->r[1]+0x00000030u; // 802F9F6C
  return; // 802F9F70
}

// isPlaying__Q210homebutton9RemoteSpkCFl
void f_802F9F74(Ctx* __restrict c) {
  trace_call(0x802F9F74u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 802F9F74
  c->r[3]=c->r[3]+c->r[0]; // 802F9F78
  c->r[3]=R32(c->r[3]+0x00000050u); // 802F9F7C
  c->r[0]=0u-c->r[3]; // 802F9F80
  c->r[0]=c->r[0]|c->r[3]; // 802F9F84
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F9F88
  return; // 802F9F8C
}

// isPlayingId__Q210homebutton9RemoteSpkCFli
void f_802F9F90(Ctx* __restrict c) {
  trace_call(0x802F9F90u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 802F9F90
  c->r[3]=c->r[3]+c->r[0]; // 802F9F94
  c->r[0]=R32(c->r[3]+0x00000050u); // 802F9F98
  cmps(c,0,(int32_t)c->r[0],0); // 802F9F9C
  if (crb(c,2)) { goto L_802F9FB8; } // 802F9FA0
  c->r[0]=R32(c->r[3]+0x00000058u); // 802F9FA4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802F9FA8
  if (!crb(c,2)) { goto L_802F9FB8; } // 802F9FAC
  c->r[3]=0u+0x00000001u; // 802F9FB0
  return; // 802F9FB4
L_802F9FB8:;
  c->r[3]=0u+0x00000000u; // 802F9FB8
  return; // 802F9FBC
}

// isPlayReady__Q210homebutton9RemoteSpkCFl
void f_802F9FC0(Ctx* __restrict c) {
  trace_call(0x802F9FC0u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)104); // 802F9FC0
  c->r[3]=c->r[3]+c->r[0]; // 802F9FC4
  c->r[3]=R8(c->r[3]+0x00000062u); // 802F9FC8
  c->r[0]=0u-c->r[3]; // 802F9FCC
  c->r[0]=c->r[0]|c->r[3]; // 802F9FD0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802F9FD4
  return; // 802F9FD8
}

// Assertion_Printf___Q24nw4r2dbFPCce
void f_802F9FDC(Ctx* __restrict c) {
  trace_call(0x802F9FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802F9FDC
  c->r[0]=c->lr; // 802F9FE0
  W32(c->r[1]+0x00000084u,c->r[0]); // 802F9FE4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802F9FE8
  W32(c->r[1]+0x00000078u,c->r[30]); // 802F9FEC
  if (!crb(c,6)) { goto L_802FA014; } // 802F9FF0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802F9FF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802F9FF8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802F9FFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802FA000
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802FA004
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802FA008
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802FA00C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802FA010
L_802FA014:;
  c->r[30]=R32(c->r[13]+0xFFFFA5BCu); // 802FA014
  c->r[11]=c->r[1]+0x00000088u; // 802FA018
  c->r[0]=c->r[1]+0x00000008u; // 802FA01C
  c->r[12]=0u+0x01000000u; // 802FA020
  cmps(c,0,(int32_t)c->r[30],0); // 802FA024
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FA028
  c->r[31]=c->r[1]+0x00000068u; // 802FA02C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802FA030
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FA034
  W32(c->r[1]+0x00000014u,c->r[6]); // 802FA038
  W32(c->r[1]+0x00000018u,c->r[7]); // 802FA03C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802FA040
  W32(c->r[1]+0x00000020u,c->r[9]); // 802FA044
  W32(c->r[1]+0x00000024u,c->r[10]); // 802FA048
  W32(c->r[1]+0x00000068u,c->r[12]); // 802FA04C
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 802FA050
  W32(c->r[1]+0x00000070u,c->r[0]); // 802FA054
  if (crb(c,2)) { goto L_802FA074; } // 802FA058
  c->r[5]=c->r[3]|c->r[3]; // 802FA05C
  c->r[4]=c->r[30]|c->r[30]; // 802FA060
  c->r[6]=c->r[31]|c->r[31]; // 802FA064
  c->r[3]=0u+0x00000003u; // 802FA068
  c->lr=0x802FA070u; f_802FAC08(c); // 802FA06C
  goto L_802FA07C; // 802FA070
L_802FA074:;
  c->r[4]=c->r[31]|c->r[31]; // 802FA074
  c->lr=0x802FA07Cu; f_801BB488(c); // 802FA078
L_802FA07C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 802FA07C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 802FA080
  c->r[30]=R32(c->r[1]+0x00000078u); // 802FA084
  c->lr=c->r[0]; // 802FA088
  c->r[1]=c->r[1]+0x00000080u; // 802FA08C
  return; // 802FA090
}

// fn_802FA094
void f_802FA094(Ctx* __restrict c) {
  trace_call(0x802FA094u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA094
  c->r[0]=c->lr; // 802FA098
  W32(c->r[1]+0x00000134u,c->r[0]); // 802FA09C
  c->r[11]=c->r[1]+0x00000130u; // 802FA0A0
  c->lr=0x802FA0A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FA0A4
  c->r[29]=0u+0x804D0000u; // 802FA0A8
  c->r[26]=c->r[3]|c->r[3]; // 802FA0AC
  c->r[29]=c->r[29]+0xFFFF8358u; // 802FA0B0
  c->r[3]=c->r[29]+0x00000000u; // 802FA0B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA0B8
  c->lr=0x802FA0C0u; f_802F9FDC(c); // 802FA0BC
  c->r[3]=c->r[29]+0x00000028u; // 802FA0C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA0C4
  c->lr=0x802FA0CCu; f_802F9FDC(c); // 802FA0C8
  c->r[27]=0u+0x00000000u; // 802FA0CC
  c->r[30]=0u+0x80000000u; // 802FA0D0
  c->r[31]=0u+0x83000000u; // 802FA0D4
L_802FA0D8:;
  cmps(c,0,(int32_t)c->r[26],0); // 802FA0D8
  if (crb(c,2)) { goto L_802FA198; } // 802FA0DC
  c->r[0]=c->r[26]+0x00010000u; // 802FA0E0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802FA0E4
  if (crb(c,2)) { goto L_802FA198; } // 802FA0E8
  c->r[0]=rotl(c->r[26],0)&0x80000000u; cr0(c,c->r[0]); // 802FA0EC
  if (crb(c,2)) { goto L_802FA198; } // 802FA0F0
  c->r[5]=R32(c->r[26]+0x00000000u); // 802FA0F4
  c->r[4]=c->r[26]|c->r[26]; // 802FA0F8
  c->r[6]=R32(c->r[26]+0x00000004u); // 802FA0FC
  c->r[3]=c->r[29]+0x00000048u; // 802FA100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA104
  c->lr=0x802FA10Cu; f_802F9FDC(c); // 802FA108
  c->r[28]=R32(c->r[26]+0x00000004u); // 802FA10C
  c->lr=0x802FA114u; f_802FB93C(c); // 802FA110
  cmps(c,0,(int32_t)c->r[3],0); // 802FA114
  if (!crb(c,2)) { goto L_802FA124; } // 802FA118
  c->r[0]=0u+0x00000000u; // 802FA11C
  goto L_802FA174; // 802FA120
L_802FA124:;
  cmpu(c,0,c->r[28],c->r[30]); // 802FA124
  if (crb(c,0)) { goto L_802FA138; } // 802FA128
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 802FA12C
  cmpu(c,0,c->r[28],c->r[0]); // 802FA130
  if (!crb(c,1)) { goto L_802FA140; } // 802FA134
L_802FA138:;
  c->r[0]=0u+0x00000000u; // 802FA138
  goto L_802FA174; // 802FA13C
L_802FA140:;
  c->r[3]=c->r[28]|c->r[28]; // 802FA140
  c->r[4]=c->r[1]+0x00000008u; // 802FA144
  c->r[5]=0u+0x00000104u; // 802FA148
  c->lr=0x802FA150u; f_802FC1CC(c); // 802FA14C
  cmps(c,0,(int32_t)c->r[3],0); // 802FA150
  if (crb(c,2)) { goto L_802FA170; } // 802FA154
  c->r[4]=c->r[1]+0x00000008u; // 802FA158
  c->r[3]=c->r[13]+0xFFFF8C18u; // 802FA15C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA160
  c->lr=0x802FA168u; f_802F9FDC(c); // 802FA164
  c->r[0]=0u+0x00000001u; // 802FA168
  goto L_802FA174; // 802FA16C
L_802FA170:;
  c->r[0]=0u+0x00000000u; // 802FA170
L_802FA174:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FA174
  if (!crb(c,2)) { goto L_802FA188; } // 802FA178
  c->r[3]=c->r[13]+0xFFFF8C1Cu; // 802FA17C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA180
  c->lr=0x802FA188u; f_802F9FDC(c); // 802FA184
L_802FA188:;
  c->r[27]=c->r[27]+0x00000001u; // 802FA188
  c->r[26]=R32(c->r[26]+0x00000000u); // 802FA18C
  cmpu(c,0,c->r[27],0x00000010u); // 802FA190
  if (crb(c,0)) { IRQCHK(c); goto L_802FA0D8; } // 802FA194
L_802FA198:;
  c->r[11]=c->r[1]+0x00000130u; // 802FA198
  c->lr=0x802FA1A0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FA19C
  c->r[0]=R32(c->r[1]+0x00000134u); // 802FA1A0
  c->lr=c->r[0]; // 802FA1A4
  c->r[1]=c->r[1]+0x00000130u; // 802FA1A8
  return; // 802FA1AC
}

// fn_802FA1B0
void f_802FA1B0(Ctx* __restrict c) {
  trace_call(0x802FA1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA1B0
  c->r[0]=c->lr; // 802FA1B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FA1B8
  c->r[11]=c->r[1]+0x00000020u; // 802FA1BC
  c->lr=0x802FA1C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FA1C0
  c->r[31]=0u+0x804D0000u; // 802FA1C4
  c->r[29]=R32(c->r[1]+0x00000000u); // 802FA1C8
  c->r[26]=c->r[3]|c->r[3]; // 802FA1CC
  c->r[27]=c->r[4]|c->r[4]; // 802FA1D0
  c->r[28]=c->r[5]|c->r[5]; // 802FA1D4
  c->r[30]=c->r[6]|c->r[6]; // 802FA1D8
  c->r[31]=c->r[31]+0xFFFF8358u; // 802FA1DC
  c->lr=0x802FA1E4u; f_801BE74C(c); // 802FA1E0
  c->r[3]=0u+0x00000000u; // 802FA1E4
  c->lr=0x802FA1ECu; f_801CDFF4(c); // 802FA1E8
  c->r[3]=0u+0x00000000u; // 802FA1EC
  c->lr=0x802FA1F4u; f_801CE038(c); // 802FA1F0
  c->r[0]=R32(c->r[13]+0xFFFFA5BCu); // 802FA1F4
  cmps(c,0,(int32_t)c->r[0],0); // 802FA1F8
  if (crb(c,2)) { goto L_802FA208; } // 802FA1FC
  c->r[3]=0u+0x00000000u; // 802FA200
  c->lr=0x802FA208u; f_802FB74C(c); // 802FA204
L_802FA208:;
  c->r[3]=c->r[29]|c->r[29]; // 802FA208
  c->lr=0x802FA210u; f_802FA094(c); // 802FA20C
  c->r[3]=R32(c->r[13]+0xFFFFA5BCu); // 802FA210
  cmps(c,0,(int32_t)c->r[3],0); // 802FA214
  if (crb(c,2)) { goto L_802FA2E0; } // 802FA218
  c->r[5]=c->r[26]|c->r[26]; // 802FA21C
  c->r[6]=c->r[27]|c->r[27]; // 802FA220
  c->r[4]=c->r[31]+0x00000060u; // 802FA224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA228
  c->lr=0x802FA230u; f_802FAD00(c); // 802FA22C
  c->r[4]=R32(c->r[13]+0xFFFFA5BCu); // 802FA230
  c->r[5]=c->r[28]|c->r[28]; // 802FA234
  c->r[6]=c->r[30]|c->r[30]; // 802FA238
  c->r[3]=0u+0x00000003u; // 802FA23C
  c->lr=0x802FA244u; f_802FAC08(c); // 802FA240
  c->r[3]=R32(c->r[13]+0xFFFFA5BCu); // 802FA244
  c->r[4]=c->r[13]+0xFFFF8C1Cu; // 802FA248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA24C
  c->lr=0x802FA254u; f_802FAD00(c); // 802FA250
  c->r[29]=R32(c->r[13]+0xFFFFA5BCu); // 802FA254
  cmps(c,0,(int32_t)c->r[29],0); // 802FA258
  if (!crb(c,2)) { goto L_802FA274; } // 802FA25C
  c->r[3]=c->r[31]+0x00000070u; // 802FA260
  c->r[5]=c->r[31]+0x0000007Cu; // 802FA264
  c->r[4]=0u+0x000001B2u; // 802FA268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA26C
  c->lr=0x802FA274u; f_802FA328(c); // 802FA270
L_802FA274:;
  c->r[30]=R16(c->r[29]+0x00000020u); // 802FA274
  c->r[3]=c->r[29]|c->r[29]; // 802FA278
  c->lr=0x802FA280u; f_802FAE28(c); // 802FA27C
  c->r[30]=c->r[3]-c->r[30]; cr0(c,c->r[30]); // 802FA280
  if (!crb(c,0)) { goto L_802FA28C; } // 802FA284
  c->r[30]=0u+0x00000000u; // 802FA288
L_802FA28C:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FA28C
  if (!crb(c,2)) { goto L_802FA2A8; } // 802FA290
  c->r[3]=c->r[31]+0x00000070u; // 802FA294
  c->r[5]=c->r[31]+0x0000007Cu; // 802FA298
  c->r[4]=0u+0x0000022Du; // 802FA29C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA2A0
  c->lr=0x802FA2A8u; f_802FA328(c); // 802FA2A4
L_802FA2A8:;
  W32(c->r[29]+0x00000018u,c->r[30]); // 802FA2A8
  c->r[29]=R32(c->r[13]+0xFFFFA5BCu); // 802FA2AC
  cmps(c,0,(int32_t)c->r[29],0); // 802FA2B0
  if (!crb(c,2)) { goto L_802FA2CC; } // 802FA2B4
  c->r[3]=c->r[31]+0x00000070u; // 802FA2B8
  c->r[5]=c->r[31]+0x0000007Cu; // 802FA2BC
  c->r[4]=0u+0x000001F1u; // 802FA2C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA2C4
  c->lr=0x802FA2CCu; f_802FA328(c); // 802FA2C8
L_802FA2CC:;
  c->r[0]=0u+0x00000001u; // 802FA2CC
  W8(c->r[29]+0x00000022u,c->r[0]); // 802FA2D0
  c->r[3]=R32(c->r[13]+0xFFFFA5BCu); // 802FA2D4
  c->lr=0x802FA2DCu; f_802FA788(c); // 802FA2D8
  goto L_802FA30C; // 802FA2DC
L_802FA2E0:;
  c->r[4]=c->r[26]|c->r[26]; // 802FA2E0
  c->r[5]=c->r[27]|c->r[27]; // 802FA2E4
  c->r[3]=c->r[31]+0x00000060u; // 802FA2E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA2EC
  c->lr=0x802FA2F4u; f_801BB3FC(c); // 802FA2F0
  c->r[3]=c->r[28]|c->r[28]; // 802FA2F4
  c->r[4]=c->r[30]|c->r[30]; // 802FA2F8
  c->lr=0x802FA300u; f_801BB488(c); // 802FA2FC
  c->r[3]=c->r[13]+0xFFFF8C1Cu; // 802FA300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA304
  c->lr=0x802FA30Cu; f_801BB3FC(c); // 802FA308
L_802FA30C:;
  c->lr=0x802FA310u; f_801B81DC(c); // 802FA30C
  c->r[11]=c->r[1]+0x00000020u; // 802FA310
  c->lr=0x802FA318u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FA314
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FA318
  c->lr=c->r[0]; // 802FA31C
  c->r[1]=c->r[1]+0x00000020u; // 802FA320
  return; // 802FA324
}

// fn_802FA328
void f_802FA328(Ctx* __restrict c) {
  trace_call(0x802FA328u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA328
  c->r[0]=c->lr; // 802FA32C
  W32(c->r[1]+0x00000084u,c->r[0]); // 802FA330
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802FA334
  if (!crb(c,6)) { goto L_802FA35C; } // 802FA338
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802FA33C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802FA340
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802FA344
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802FA348
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802FA34C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802FA350
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802FA354
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802FA358
L_802FA35C:;
  c->r[11]=c->r[1]+0x00000088u; // 802FA35C
  c->r[0]=c->r[1]+0x00000008u; // 802FA360
  c->r[12]=0u+0x03000000u; // 802FA364
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FA368
  c->r[31]=c->r[1]+0x00000068u; // 802FA36C
  W32(c->r[1]+0x00000014u,c->r[6]); // 802FA370
  c->r[6]=c->r[31]|c->r[31]; // 802FA374
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802FA378
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FA37C
  W32(c->r[1]+0x00000018u,c->r[7]); // 802FA380
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802FA384
  W32(c->r[1]+0x00000020u,c->r[9]); // 802FA388
  W32(c->r[1]+0x00000024u,c->r[10]); // 802FA38C
  W32(c->r[1]+0x00000068u,c->r[12]); // 802FA390
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 802FA394
  W32(c->r[1]+0x00000070u,c->r[0]); // 802FA398
  c->lr=0x802FA3A0u; f_802FA1B0(c); // 802FA39C
  c->r[0]=R32(c->r[1]+0x00000084u); // 802FA3A0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 802FA3A4
  c->lr=c->r[0]; // 802FA3A8
  c->r[1]=c->r[1]+0x00000080u; // 802FA3AC
  return; // 802FA3B0
}

// fn_802FA3B4
void f_802FA3B4(Ctx* __restrict c) {
  trace_call(0x802FA3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA3B4
  c->r[0]=c->lr; // 802FA3B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802FA3BC
  c->r[11]=c->r[1]+0x00000090u; // 802FA3C0
  c->lr=0x802FA3C8u; f_801E795C(c); // 802FA3C4
  c->r[27]=c->r[3]|c->r[3]; // 802FA3C8
  c->r[28]=c->r[4]|c->r[4]; // 802FA3CC
  c->r[29]=c->r[5]|c->r[5]; // 802FA3D0
  if (!crb(c,6)) { goto L_802FA3F8; } // 802FA3D4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802FA3D8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802FA3DC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802FA3E0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802FA3E4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802FA3E8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802FA3EC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802FA3F0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802FA3F4
L_802FA3F8:;
  c->r[0]=R8(c->r[13]+0xFFFFA5C0u); // 802FA3F8
  c->r[30]=0u+0x804D0000u; // 802FA3FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FA400
  c->r[30]=c->r[30]+0xFFFF8358u; // 802FA404
  cmps(c,0,(int32_t)c->r[0],0); // 802FA408
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802FA40C
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FA410
  W32(c->r[1]+0x00000014u,c->r[6]); // 802FA414
  W32(c->r[1]+0x00000018u,c->r[7]); // 802FA418
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802FA41C
  W32(c->r[1]+0x00000020u,c->r[9]); // 802FA420
  W32(c->r[1]+0x00000024u,c->r[10]); // 802FA424
  if (!crb(c,2)) { goto L_802FA440; } // 802FA428
  c->r[3]=0u+0x80610000u; // 802FA42C
  c->r[3]=c->r[3]+0x00000780u; // 802FA430
  c->lr=0x802FA438u; f_801B9774(c); // 802FA434
  c->r[0]=0u+0x00000001u; // 802FA438
  W8(c->r[13]+0xFFFFA5C0u,c->r[0]); // 802FA43C
L_802FA440:;
  c->r[3]=R32(c->r[13]+0xFFFFA5BCu); // 802FA440
  c->r[4]=c->r[1]+0x00000098u; // 802FA444
  c->r[0]=c->r[1]+0x00000008u; // 802FA448
  c->r[5]=0u+0x03000000u; // 802FA44C
  cmps(c,0,(int32_t)c->r[3],0); // 802FA450
  W32(c->r[1]+0x00000068u,c->r[5]); // 802FA454
  c->r[31]=c->r[1]+0x00000068u; // 802FA458
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 802FA45C
  W32(c->r[1]+0x00000070u,c->r[0]); // 802FA460
  if (crb(c,2)) { goto L_802FA524; } // 802FA464
  c->r[5]=c->r[27]|c->r[27]; // 802FA468
  c->r[6]=c->r[28]|c->r[28]; // 802FA46C
  c->r[4]=c->r[30]+0x000000A0u; // 802FA470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA474
  c->lr=0x802FA47Cu; f_802FAD00(c); // 802FA478
  c->r[4]=R32(c->r[13]+0xFFFFA5BCu); // 802FA47C
  c->r[5]=c->r[29]|c->r[29]; // 802FA480
  c->r[6]=c->r[31]|c->r[31]; // 802FA484
  c->r[3]=0u+0x00000003u; // 802FA488
  c->lr=0x802FA490u; f_802FAC08(c); // 802FA48C
  c->r[3]=R32(c->r[13]+0xFFFFA5BCu); // 802FA490
  c->r[4]=c->r[13]+0xFFFF8C1Cu; // 802FA494
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA498
  c->lr=0x802FA4A0u; f_802FAD00(c); // 802FA49C
  c->r[29]=R32(c->r[13]+0xFFFFA5BCu); // 802FA4A0
  cmps(c,0,(int32_t)c->r[29],0); // 802FA4A4
  if (!crb(c,2)) { goto L_802FA4C0; } // 802FA4A8
  c->r[3]=c->r[30]+0x00000070u; // 802FA4AC
  c->r[5]=c->r[30]+0x0000007Cu; // 802FA4B0
  c->r[4]=0u+0x000001B2u; // 802FA4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA4B8
  c->lr=0x802FA4C0u; f_802FA328(c); // 802FA4BC
L_802FA4C0:;
  c->r[31]=R16(c->r[29]+0x00000020u); // 802FA4C0
  c->r[3]=c->r[29]|c->r[29]; // 802FA4C4
  c->lr=0x802FA4CCu; f_802FAE28(c); // 802FA4C8
  c->r[31]=c->r[3]-c->r[31]; cr0(c,c->r[31]); // 802FA4CC
  if (!crb(c,0)) { goto L_802FA4D8; } // 802FA4D0
  c->r[31]=0u+0x00000000u; // 802FA4D4
L_802FA4D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FA4D8
  if (!crb(c,2)) { goto L_802FA4F4; } // 802FA4DC
  c->r[3]=c->r[30]+0x00000070u; // 802FA4E0
  c->r[5]=c->r[30]+0x0000007Cu; // 802FA4E4
  c->r[4]=0u+0x0000022Du; // 802FA4E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA4EC
  c->lr=0x802FA4F4u; f_802FA328(c); // 802FA4F0
L_802FA4F4:;
  W32(c->r[29]+0x00000018u,c->r[31]); // 802FA4F4
  c->r[29]=R32(c->r[13]+0xFFFFA5BCu); // 802FA4F8
  cmps(c,0,(int32_t)c->r[29],0); // 802FA4FC
  if (!crb(c,2)) { goto L_802FA518; } // 802FA500
  c->r[3]=c->r[30]+0x00000070u; // 802FA504
  c->r[5]=c->r[30]+0x0000007Cu; // 802FA508
  c->r[4]=0u+0x000001F1u; // 802FA50C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA510
  c->lr=0x802FA518u; f_802FA328(c); // 802FA514
L_802FA518:;
  c->r[0]=0u+0x00000001u; // 802FA518
  W8(c->r[29]+0x00000022u,c->r[0]); // 802FA51C
  goto L_802FA550; // 802FA520
L_802FA524:;
  c->r[4]=c->r[27]|c->r[27]; // 802FA524
  c->r[5]=c->r[28]|c->r[28]; // 802FA528
  c->r[3]=c->r[30]+0x000000A0u; // 802FA52C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA530
  c->lr=0x802FA538u; f_801BB3FC(c); // 802FA534
  c->r[3]=c->r[29]|c->r[29]; // 802FA538
  c->r[4]=c->r[31]|c->r[31]; // 802FA53C
  c->lr=0x802FA544u; f_801BB488(c); // 802FA540
  c->r[3]=c->r[13]+0xFFFF8C1Cu; // 802FA544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA548
  c->lr=0x802FA550u; f_801BB3FC(c); // 802FA54C
L_802FA550:;
  c->r[0]=R32(c->r[13]+0xFFFFA5B8u); // 802FA550
  cmps(c,0,(int32_t)c->r[0],0); // 802FA554
  if (crb(c,2)) { goto L_802FA580; } // 802FA558
  c->r[31]=0u+0x80610000u; // 802FA55C
  c->r[3]=c->r[31]+0x00000780u; // 802FA560
  c->lr=0x802FA568u; f_801B9AC8(c); // 802FA564
  c->r[7]=0u+0x80300000u; // 802FA568
  c->r[6]=R32(c->r[13]+0xFFFFA5B8u); // 802FA56C
  c->r[3]=c->r[31]+0x00000780u; // 802FA570
  c->r[5]=0u+0x00000000u; // 802FA574
  c->r[7]=c->r[7]+0xFFFFA598u; // 802FA578
  c->lr=0x802FA580u; f_801B99D4(c); // 802FA57C
L_802FA580:;
  c->r[11]=c->r[1]+0x00000090u; // 802FA580
  c->lr=0x802FA588u; f_801E79A8(c); // 802FA584
  c->r[0]=R32(c->r[1]+0x00000094u); // 802FA588
  c->lr=c->r[0]; // 802FA58C
  c->r[1]=c->r[1]+0x00000090u; // 802FA590
  return; // 802FA594
}

// fn_802FA598
void f_802FA598(Ctx* __restrict c) {
  trace_call(0x802FA598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA598
  c->r[0]=c->lr; // 802FA59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FA5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FA5A4
  c->r[31]=R32(c->r[13]+0xFFFFA5BCu); // 802FA5A8
  cmps(c,0,(int32_t)c->r[31],0); // 802FA5AC
  if (!crb(c,2)) { goto L_802FA5D0; } // 802FA5B0
  c->r[3]=0u+0x804D0000u; // 802FA5B4
  c->r[5]=0u+0x804D0000u; // 802FA5B8
  c->r[3]=c->r[3]+0xFFFF83C8u; // 802FA5BC
  c->r[4]=0u+0x000001F1u; // 802FA5C0
  c->r[5]=c->r[5]+0xFFFF83D4u; // 802FA5C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA5C8
  c->lr=0x802FA5D0u; f_802FA328(c); // 802FA5CC
L_802FA5D0:;
  c->r[0]=0u+0x00000000u; // 802FA5D0
  W8(c->r[31]+0x00000022u,c->r[0]); // 802FA5D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FA5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FA5DC
  c->lr=c->r[0]; // 802FA5E0
  c->r[1]=c->r[1]+0x00000010u; // 802FA5E4
  return; // 802FA5E8
}

// fn_802FA5EC
void f_802FA5EC(Ctx* __restrict c) {
  trace_call(0x802FA5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA5EC
  c->r[0]=c->lr; // 802FA5F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FA5F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FA5F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FA5FC
  c->r[30]=0u+0x00000000u; // 802FA600
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FA604
  c->r[29]=c->r[4]|c->r[4]; // 802FA608
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FA60C
  c->r[28]=c->r[3]|c->r[3]; // 802FA610
  c->r[5]=R32(c->r[3]+0x00000014u); // 802FA614
  c->r[0]=R32(c->r[3]+0x00000018u); // 802FA618
  c->r[31]=c->r[0]-c->r[5]; cr0(c,c->r[31]); // 802FA61C
  if (!crb(c,0)) { goto L_802FA62C; } // 802FA620
  c->r[31]=0u+0x00000000u; // 802FA624
  goto L_802FA688; // 802FA628
L_802FA62C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FA62C
  if (!crb(c,2)) { goto L_802FA650; } // 802FA630
  c->r[3]=0u+0x804D0000u; // 802FA634
  c->r[5]=0u+0x804D0000u; // 802FA638
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FA63C
  c->r[4]=0u+0x00000070u; // 802FA640
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FA644
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA648
  c->lr=0x802FA650u; f_802FA328(c); // 802FA64C
L_802FA650:;
  c->r[3]=R16(c->r[28]+0x00000012u); // 802FA650
  c->r[0]=R16(c->r[28]+0x0000000Cu); // 802FA654
  c->r[3]=c->r[0]-c->r[3]; cr0(c,c->r[3]); // 802FA658
  if (!crb(c,0)) { goto L_802FA668; } // 802FA65C
  c->r[0]=R16(c->r[28]+0x00000006u); // 802FA660
  c->r[3]=c->r[3]+c->r[0]; // 802FA664
L_802FA668:;
  c->r[0]=R16(c->r[28]+0x00000010u); // 802FA668
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 802FA66C
  cmps(c,0,(int32_t)c->r[0],0); // 802FA670
  if (crb(c,2)) { goto L_802FA680; } // 802FA674
  c->r[0]=c->r[3]+0x00000001u; // 802FA678
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 802FA67C
L_802FA680:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 802FA680
  if (crb(c,1)) { goto L_802FA768; } // 802FA684
L_802FA688:;
  c->r[0]=R16(c->r[28]+0x00000012u); // 802FA688
  c->r[3]=R16(c->r[28]+0x00000006u); // 802FA68C
  c->r[0]=c->r[0]+c->r[31]; // 802FA690
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 802FA694
  cmpu(c,0,c->r[31],c->r[3]); // 802FA698
  if (crb(c,0)) { goto L_802FA6A8; } // 802FA69C
  c->r[0]=c->r[31]-c->r[3]; // 802FA6A0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 802FA6A4
L_802FA6A8:;
  c->r[0]=R16(c->r[28]+0x0000000Cu); // 802FA6A8
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 802FA6AC
  cmpu(c,0,c->r[3],c->r[0]); // 802FA6B0
  if (!crb(c,2)) { goto L_802FA6C4; } // 802FA6B4
  c->r[0]=R16(c->r[28]+0x00000010u); // 802FA6B8
  cmps(c,0,(int32_t)c->r[0],0); // 802FA6BC
  if (crb(c,2)) { goto L_802FA768; } // 802FA6C0
L_802FA6C4:;
  c->r[3]=R16(c->r[28]+0x00000004u); // 802FA6C4
  c->r[0]=rotl(c->r[31],0)&0x0000FFFFu; // 802FA6C8
  cmps(c,0,(int32_t)c->r[29],0); // 802FA6CC
  c->r[4]=R32(c->r[28]+0x00000000u); // 802FA6D0
  c->r[3]=c->r[3]+0x00000001u; // 802FA6D4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 802FA6D8
  c->r[5]=c->r[4]+c->r[0]; // 802FA6DC
  if (crb(c,2)) { goto L_802FA6F8; } // 802FA6E0
  c->r[3]=c->r[29]|c->r[29]; // 802FA6E4
  c->r[4]=c->r[13]+0xFFFF8C20u; // 802FA6E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA6EC
  c->lr=0x802FA6F4u; f_80335EBC(c); // 802FA6F0
  goto L_802FA720; // 802FA6F4
L_802FA6F8:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 802FA6F8
  c->r[7]=c->r[5]|c->r[5]; // 802FA6FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 802FA700
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000001Eu); // 802FA704
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000001Cu); // 802FA708
  c->r[5]=0u+0x00000000u; // 802FA70C
  c->r[6]=c->r[13]+0xFFFF8C20u; // 802FA710
  c->r[4]=c->r[4]+c->r[0]; // 802FA714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA718
  c->lr=0x802FA720u; f_802FB0F4(c); // 802FA71C
L_802FA720:;
  c->r[0]=R16(c->r[28]+0x0000000Cu); // 802FA720
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 802FA724
  c->r[30]=c->r[30]+0x00000001u; // 802FA728
  cmpu(c,0,c->r[3],c->r[0]); // 802FA72C
  if (crb(c,2)) { goto L_802FA768; } // 802FA730
  c->r[31]=c->r[31]+0x00000001u; // 802FA734
  c->r[0]=R16(c->r[28]+0x00000006u); // 802FA738
  c->r[3]=rotl(c->r[31],0)&0x0000FFFFu; // 802FA73C
  cmpu(c,0,c->r[3],c->r[0]); // 802FA740
  if (!crb(c,2)) { goto L_802FA758; } // 802FA744
  c->r[0]=R16(c->r[28]+0x0000000Au); // 802FA748
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802FA74C
  if (!crb(c,2)) { goto L_802FA768; } // 802FA750
  c->r[31]=0u+0x00000000u; // 802FA754
L_802FA758:;
  c->r[0]=R16(c->r[28]+0x00000020u); // 802FA758
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 802FA75C
  cmpu(c,0,c->r[3],c->r[0]); // 802FA760
  if (crb(c,0)) { IRQCHK(c); goto L_802FA6A8; } // 802FA764
L_802FA768:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FA768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FA76C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FA770
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FA774
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FA778
  c->lr=c->r[0]; // 802FA77C
  c->r[1]=c->r[1]+0x00000020u; // 802FA780
  return; // 802FA784
}

// fn_802FA788
void f_802FA788(Ctx* __restrict c) {
  trace_call(0x802FA788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA788
  c->r[0]=c->lr; // 802FA78C
  cmps(c,0,(int32_t)c->r[3],0); // 802FA790
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FA794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FA798
  W32(c->r[1]+0x00000008u,c->r[30]); // 802FA79C
  c->r[30]=c->r[3]|c->r[3]; // 802FA7A0
  if (!crb(c,2)) { goto L_802FA7C4; } // 802FA7A4
  c->r[3]=0u+0x804D0000u; // 802FA7A8
  c->r[5]=0u+0x804D0000u; // 802FA7AC
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FA7B0
  c->r[4]=0u+0x0000026Du; // 802FA7B4
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FA7B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA7BC
  c->lr=0x802FA7C4u; f_802FA328(c); // 802FA7C0
L_802FA7C4:;
  c->lr=0x802FA7C8u; f_802FAF2C(c); // 802FA7C4
  cmps(c,0,(int32_t)c->r[3],0); // 802FA7C8
  if (crb(c,2)) { goto L_802FA82C; } // 802FA7CC
  c->r[0]=R8(c->r[30]+0x00000022u); // 802FA7D0
  cmps(c,0,(int32_t)c->r[0],0); // 802FA7D4
  if (crb(c,2)) { goto L_802FA82C; } // 802FA7D8
  c->r[31]=0u+0x80610000u; // 802FA7DC
  c->r[3]=c->r[31]+0x000007B0u; // 802FA7E0
  c->lr=0x802FA7E8u; f_801BF938(c); // 802FA7E4
  c->r[3]=R16(c->r[30]+0x00000004u); // 802FA7E8
  c->r[0]=R16(c->r[30]+0x00000020u); // 802FA7EC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)6); // 802FA7F0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000001Cu); // 802FA7F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000001Eu); // 802FA7F8
  c->r[3]=c->r[3]+0xFFFFFFFAu; // 802FA7FC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 802FA800
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 802FA804
  c->r[5]=c->r[5]+0x0000000Cu; // 802FA808
  c->r[6]=c->r[6]+0x00000004u; // 802FA80C
  c->lr=0x802FA814u; f_802FAF54(c); // 802FA810
  c->r[3]=c->r[30]|c->r[30]; // 802FA814
  c->r[4]=0u+0x00000000u; // 802FA818
  c->lr=0x802FA820u; f_802FA5EC(c); // 802FA81C
  c->lr=0x802FA824u; f_802FB0E0(c); // 802FA820
  c->r[3]=c->r[31]+0x000007B0u; // 802FA824
  c->lr=0x802FA82Cu; f_801BFA14(c); // 802FA828
L_802FA82C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FA82C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FA830
  c->r[30]=R32(c->r[1]+0x00000008u); // 802FA834
  c->lr=c->r[0]; // 802FA838
  c->r[1]=c->r[1]+0x00000010u; // 802FA83C
  return; // 802FA840
}

// fn_802FA844
void f_802FA844(Ctx* __restrict c) {
  trace_call(0x802FA844u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FA844
  c->r[0]=c->lr; // 802FA848
  cmps(c,0,(int32_t)c->r[3],0); // 802FA84C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FA850
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FA854
  c->r[31]=c->r[4]|c->r[4]; // 802FA858
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FA85C
  c->r[30]=c->r[3]|c->r[3]; // 802FA860
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FA864
  c->r[29]=0u+0x804D0000u; // 802FA868
  c->r[29]=c->r[29]+0xFFFF8408u; // 802FA86C
  if (!crb(c,2)) { goto L_802FA888; } // 802FA870
  c->r[3]=c->r[29]+0x00000000u; // 802FA874
  c->r[5]=c->r[29]+0x00000010u; // 802FA878
  c->r[4]=0u+0x000002EBu; // 802FA87C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA880
  c->lr=0x802FA888u; f_802FA328(c); // 802FA884
L_802FA888:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FA888
  if (!crb(c,2)) { goto L_802FA8A4; } // 802FA88C
  c->r[3]=c->r[29]+0x00000000u; // 802FA890
  c->r[5]=c->r[29]+0x000000F8u; // 802FA894
  c->r[4]=0u+0x000002ECu; // 802FA898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FA89C
  c->lr=0x802FA8A4u; f_802FA328(c); // 802FA8A0
L_802FA8A4:;
  c->r[7]=R16(c->r[30]+0x00000004u); // 802FA8A4
  c->r[4]=0u+0x00000020u; // 802FA8A8
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 802FA8AC
  c->r[5]=0u+0x00000002u; // 802FA8B0
  c->r[3]=c->r[7]+0x00000001u; // 802FA8B4
  c->r[6]=R32(c->r[30]+0x00000000u); // 802FA8B8
  c->r[9]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 802FA8BC
  c->r[0]=R16(c->r[30]+0x0000000Eu); // 802FA8C0
  c->r[3]=0u+0x00000081u; // 802FA8C4
  c->r[8]=c->r[6]+c->r[0]; // 802FA8C8
  c->r[0]=0u+0x00000001u; // 802FA8CC
  c->r[6]=0u+0x00000000u; // 802FA8D0
  c->r[8]=c->r[9]+c->r[8]; // 802FA8D4
  goto L_802FABE0; // 802FA8D8
L_802FA8DC:;
  c->r[9]=R16(c->r[30]+0x0000000Au); // 802FA8DC
  c->r[9]=rotl(c->r[9],0)&0x00000002u; cr0(c,c->r[9]); // 802FA8E0
  if (crb(c,2)) { goto L_802FABD4; } // 802FA8E4
  c->r[10]=R16(c->r[30]+0x0000000Cu); // 802FA8E8
  c->r[9]=R16(c->r[30]+0x00000006u); // 802FA8EC
  cmpu(c,0,c->r[10],c->r[9]); // 802FA8F0
  if (crb(c,2)) { goto L_802FABEC; } // 802FA8F4
  goto L_802FABD4; // 802FA8F8
L_802FA8FC:;
  cmps(c,0,(int32_t)c->r[11],10); // 802FA8FC
  c->r[9]=0u+0x00000000u; // 802FA900
  if (!crb(c,2)) { goto L_802FA9B0; } // 802FA904
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FA908
  c->r[7]=c->r[7]+0x00000001u; // 802FA90C
  c->r[9]=R32(c->r[30]+0x00000000u); // 802FA910
  c->r[31]=c->r[31]+0x00000001u; // 802FA914
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 802FA918
  c->r[7]=R16(c->r[30]+0x0000000Eu); // 802FA91C
  c->r[7]=c->r[9]+c->r[7]; // 802FA920
  W8(c->r[8]+c->r[7],c->r[6]); // 802FA924
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FA928
  c->r[7]=R16(c->r[30]+0x00000006u); // 802FA92C
  c->r[9]=c->r[8]+0x00000001u; // 802FA930
  W16(c->r[30]+0x0000000Eu,c->r[6]); // 802FA934
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; // 802FA938
  cmpu(c,0,c->r[8],c->r[7]); // 802FA93C
  W16(c->r[30]+0x0000000Cu,c->r[9]); // 802FA940
  W16(c->r[30]+0x00000010u,c->r[6]); // 802FA944
  if (!crb(c,2)) { goto L_802FA95C; } // 802FA948
  c->r[7]=R16(c->r[30]+0x0000000Au); // 802FA94C
  c->r[7]=rotl(c->r[7],0)&0x00000002u; cr0(c,c->r[7]); // 802FA950
  if (!crb(c,2)) { goto L_802FA95C; } // 802FA954
  W16(c->r[30]+0x0000000Cu,c->r[6]); // 802FA958
L_802FA95C:;
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FA95C
  c->r[7]=R16(c->r[30]+0x00000012u); // 802FA960
  cmpu(c,0,c->r[8],c->r[7]); // 802FA964
  if (!crb(c,2)) { goto L_802FA994; } // 802FA968
  c->r[9]=c->r[7]+0x00000001u; // 802FA96C
  c->r[10]=R32(c->r[30]+0x00000014u); // 802FA970
  c->r[7]=R16(c->r[30]+0x00000006u); // 802FA974
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; // 802FA978
  c->r[10]=c->r[10]+0x00000001u; // 802FA97C
  W16(c->r[30]+0x00000012u,c->r[9]); // 802FA980
  cmpu(c,0,c->r[8],c->r[7]); // 802FA984
  W32(c->r[30]+0x00000014u,c->r[10]); // 802FA988
  if (!crb(c,2)) { goto L_802FA994; } // 802FA98C
  W16(c->r[30]+0x00000012u,c->r[6]); // 802FA990
L_802FA994:;
  c->r[7]=R16(c->r[30]+0x00000004u); // 802FA994
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FA998
  c->r[9]=c->r[7]+0x00000001u; // 802FA99C
  c->r[10]=R32(c->r[30]+0x00000000u); // 802FA9A0
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 802FA9A4
  c->r[8]=c->r[10]+c->r[8]; // 802FA9A8
  goto L_802FABE0; // 802FA9AC
L_802FA9B0:;
  cmps(c,0,(int32_t)c->r[11],9); // 802FA9B0
  if (!crb(c,2)) { goto L_802FAA00; } // 802FA9B4
  c->r[7]=R16(c->r[30]+0x0000000Au); // 802FA9B8
  c->r[31]=c->r[31]+0x00000001u; // 802FA9BC
  c->r[7]=rotl(c->r[7],30)&0x00000003u; // 802FA9C0
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 802FA9C4
  c->r[10]=c->r[7]+0xFFFFFFFFu; // 802FA9C8
L_802FA9CC:;
  W8(c->r[8]+0x00000000u,c->r[4]); // 802FA9CC
  c->r[8]=c->r[8]+0x00000001u; // 802FA9D0
  c->r[11]=R16(c->r[30]+0x0000000Eu); // 802FA9D4
  c->r[7]=R16(c->r[30]+0x00000004u); // 802FA9D8
  c->r[11]=c->r[11]+0x00000001u; // 802FA9DC
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 802FA9E0
  W16(c->r[30]+0x0000000Eu,c->r[11]); // 802FA9E4
  cmpu(c,0,c->r[12],c->r[7]); // 802FA9E8
  if (!crb(c,0)) { goto L_802FA9F8; } // 802FA9EC
  c->r[7]=c->r[12]&c->r[10]; cr0(c,c->r[7]); // 802FA9F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802FA9CC; } // 802FA9F4
L_802FA9F8:;
  W16(c->r[30]+0x00000010u,c->r[0]); // 802FA9F8
  goto L_802FAADC; // 802FA9FC
L_802FAA00:;
  c->r[10]=c->r[11]+0xFFFFFF7Fu; // 802FAA00
  c->r[12]=c->r[11]|~c->r[3]; // 802FAA04
  c->r[11]=rotl(c->r[10],31)&0x7FFFFFFFu; // 802FAA08
  c->r[10]=R16(c->r[30]+0x0000000Eu); // 802FAA0C
  c->r[11]=c->r[12]-c->r[11]; // 802FAA10
  c->r[29]=c->r[8]|c->r[8]; // 802FAA14
  c->r[11]=rotl(c->r[11],1)&0x00000001u; // 802FAA18
  c->r[12]=c->r[31]|c->r[31]; // 802FAA1C
  c->r[11]=c->r[11]+0x00000001u; // 802FAA20
  c->r[10]=c->r[10]+c->r[11]; // 802FAA24
  cmpu(c,0,c->r[10],c->r[7]); // 802FAA28
  if (!crb(c,1)) { goto L_802FAA38; } // 802FAA2C
  c->r[11]=0u+0x00000000u; // 802FAA30
  goto L_802FAAC0; // 802FAA34
L_802FAA38:;
  cmps(c,0,(int32_t)c->r[11],0); // 802FAA38
  W16(c->r[30]+0x0000000Eu,c->r[10]); // 802FAA3C
  c->r[10]=c->r[11]|c->r[11]; // 802FAA40
  if (crb(c,2)) { goto L_802FAAC0; } // 802FAA44
  c->r[7]=rotl(c->r[11],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 802FAA48
  c->ctr=c->r[7]; // 802FAA4C
  if (crb(c,2)) { goto L_802FAAA8; } // 802FAA50
L_802FAA54:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 802FAA54
  W8(c->r[29]+0x00000000u,c->r[7]); // 802FAA58
  c->r[7]=R8(c->r[12]+0x00000001u); // 802FAA5C
  W8(c->r[29]+0x00000001u,c->r[7]); // 802FAA60
  c->r[7]=R8(c->r[12]+0x00000002u); // 802FAA64
  W8(c->r[29]+0x00000002u,c->r[7]); // 802FAA68
  c->r[7]=R8(c->r[12]+0x00000003u); // 802FAA6C
  W8(c->r[29]+0x00000003u,c->r[7]); // 802FAA70
  c->r[7]=R8(c->r[12]+0x00000004u); // 802FAA74
  W8(c->r[29]+0x00000004u,c->r[7]); // 802FAA78
  c->r[7]=R8(c->r[12]+0x00000005u); // 802FAA7C
  W8(c->r[29]+0x00000005u,c->r[7]); // 802FAA80
  c->r[7]=R8(c->r[12]+0x00000006u); // 802FAA84
  W8(c->r[29]+0x00000006u,c->r[7]); // 802FAA88
  c->r[7]=R8(c->r[12]+0x00000007u); // 802FAA8C
  c->r[12]=c->r[12]+0x00000008u; // 802FAA90
  W8(c->r[29]+0x00000007u,c->r[7]); // 802FAA94
  c->r[29]=c->r[29]+0x00000008u; // 802FAA98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FAA54; } // 802FAA9C
  c->r[10]=c->r[11]&0x00000007u; cr0(c,c->r[10]); // 802FAAA0
  if (crb(c,2)) { goto L_802FAAC0; } // 802FAAA4
L_802FAAA8:;
  c->ctr=c->r[10]; // 802FAAA8
L_802FAAAC:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 802FAAAC
  c->r[12]=c->r[12]+0x00000001u; // 802FAAB0
  W8(c->r[29]+0x00000000u,c->r[7]); // 802FAAB4
  c->r[29]=c->r[29]+0x00000001u; // 802FAAB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FAAAC; } // 802FAABC
L_802FAAC0:;
  cmps(c,0,(int32_t)c->r[11],0); // 802FAAC0
  if (crb(c,2)) { goto L_802FAAD8; } // 802FAAC4
  W16(c->r[30]+0x00000010u,c->r[0]); // 802FAAC8
  c->r[31]=c->r[31]+c->r[11]; // 802FAACC
  c->r[8]=c->r[8]+c->r[11]; // 802FAAD0
  goto L_802FAADC; // 802FAAD4
L_802FAAD8:;
  c->r[9]=0u+0x00000001u; // 802FAAD8
L_802FAADC:;
  c->r[7]=R16(c->r[30]+0x00000004u); // 802FAADC
  c->r[10]=R16(c->r[30]+0x0000000Eu); // 802FAAE0
  cmpu(c,0,c->r[10],c->r[7]); // 802FAAE4
  if (crb(c,0)) { goto L_802FAAF0; } // 802FAAE8
  c->r[9]=0u+0x00000001u; // 802FAAEC
L_802FAAF0:;
  cmps(c,0,(int32_t)c->r[9],0); // 802FAAF0
  if (crb(c,2)) { goto L_802FABD4; } // 802FAAF4
  c->r[9]=R16(c->r[30]+0x0000000Au); // 802FAAF8
  c->r[9]=rotl(c->r[9],0)&0x00000001u; cr0(c,c->r[9]); // 802FAAFC
  if (crb(c,2)) { goto L_802FAB24; } // 802FAB00
  goto L_802FAB0C; // 802FAB04
L_802FAB08:;
  c->r[31]=c->r[31]+0x00000001u; // 802FAB08
L_802FAB0C:;
  c->r[9]=R8(c->r[31]+0x00000000u); // 802FAB0C
  cmps(c,0,(int32_t)c->r[9],10); // 802FAB10
  if (crb(c,2)) { goto L_802FABE0; } // 802FAB14
  cmps(c,0,(int32_t)c->r[9],0); // 802FAB18
  if (!crb(c,2)) { IRQCHK(c); goto L_802FAB08; } // 802FAB1C
  goto L_802FABE0; // 802FAB20
L_802FAB24:;
  c->r[8]=R8(c->r[31]+0x00000000u); // 802FAB24
  cmps(c,0,(int32_t)c->r[8],10); // 802FAB28
  if (!crb(c,2)) { goto L_802FAB34; } // 802FAB2C
  c->r[31]=c->r[31]+0x00000001u; // 802FAB30
L_802FAB34:;
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FAB34
  c->r[7]=c->r[7]+0x00000001u; // 802FAB38
  c->r[9]=R32(c->r[30]+0x00000000u); // 802FAB3C
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 802FAB40
  c->r[7]=c->r[9]+c->r[10]; // 802FAB44
  W8(c->r[8]+c->r[7],c->r[6]); // 802FAB48
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FAB4C
  c->r[7]=R16(c->r[30]+0x00000006u); // 802FAB50
  c->r[9]=c->r[8]+0x00000001u; // 802FAB54
  W16(c->r[30]+0x0000000Eu,c->r[6]); // 802FAB58
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; // 802FAB5C
  cmpu(c,0,c->r[8],c->r[7]); // 802FAB60
  W16(c->r[30]+0x0000000Cu,c->r[9]); // 802FAB64
  W16(c->r[30]+0x00000010u,c->r[6]); // 802FAB68
  if (!crb(c,2)) { goto L_802FAB80; } // 802FAB6C
  c->r[7]=R16(c->r[30]+0x0000000Au); // 802FAB70
  c->r[7]=rotl(c->r[7],0)&0x00000002u; cr0(c,c->r[7]); // 802FAB74
  if (!crb(c,2)) { goto L_802FAB80; } // 802FAB78
  W16(c->r[30]+0x0000000Cu,c->r[6]); // 802FAB7C
L_802FAB80:;
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FAB80
  c->r[7]=R16(c->r[30]+0x00000012u); // 802FAB84
  cmpu(c,0,c->r[8],c->r[7]); // 802FAB88
  if (!crb(c,2)) { goto L_802FABB8; } // 802FAB8C
  c->r[9]=c->r[7]+0x00000001u; // 802FAB90
  c->r[10]=R32(c->r[30]+0x00000014u); // 802FAB94
  c->r[7]=R16(c->r[30]+0x00000006u); // 802FAB98
  c->r[8]=rotl(c->r[9],0)&0x0000FFFFu; // 802FAB9C
  c->r[10]=c->r[10]+0x00000001u; // 802FABA0
  W16(c->r[30]+0x00000012u,c->r[9]); // 802FABA4
  cmpu(c,0,c->r[8],c->r[7]); // 802FABA8
  W32(c->r[30]+0x00000014u,c->r[10]); // 802FABAC
  if (!crb(c,2)) { goto L_802FABB8; } // 802FABB0
  W16(c->r[30]+0x00000012u,c->r[6]); // 802FABB4
L_802FABB8:;
  c->r[7]=R16(c->r[30]+0x00000004u); // 802FABB8
  c->r[8]=R16(c->r[30]+0x0000000Cu); // 802FABBC
  c->r[9]=c->r[7]+0x00000001u; // 802FABC0
  c->r[10]=R32(c->r[30]+0x00000000u); // 802FABC4
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 802FABC8
  c->r[8]=c->r[10]+c->r[8]; // 802FABCC
  goto L_802FABE0; // 802FABD0
L_802FABD4:;
  c->r[11]=R8(c->r[31]+0x00000000u); // 802FABD4
  cmps(c,0,(int32_t)c->r[11],0); // 802FABD8
  if (!crb(c,2)) { IRQCHK(c); goto L_802FA8FC; } // 802FABDC
L_802FABE0:;
  c->r[9]=R8(c->r[31]+0x00000000u); // 802FABE0
  cmps(c,0,(int32_t)c->r[9],0); // 802FABE4
  if (!crb(c,2)) { IRQCHK(c); goto L_802FA8DC; } // 802FABE8
L_802FABEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FABEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FABF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FABF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FABF8
  c->lr=c->r[0]; // 802FABFC
  c->r[1]=c->r[1]+0x00000020u; // 802FAC00
  return; // 802FAC04
}

// fn_802FAC08
void f_802FAC08(Ctx* __restrict c) {
  trace_call(0x802FAC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FAC08
  c->r[0]=c->lr; // 802FAC0C
  cmps(c,0,(int32_t)c->r[4],0); // 802FAC10
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FAC14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FAC18
  c->r[31]=c->r[6]|c->r[6]; // 802FAC1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FAC20
  c->r[30]=c->r[5]|c->r[5]; // 802FAC24
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FAC28
  c->r[29]=c->r[4]|c->r[4]; // 802FAC2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FAC30
  c->r[28]=c->r[3]|c->r[3]; // 802FAC34
  if (!crb(c,2)) { goto L_802FAC58; } // 802FAC38
  c->r[3]=0u+0x804D0000u; // 802FAC3C
  c->r[5]=0u+0x804D0000u; // 802FAC40
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FAC44
  c->r[4]=0u+0x00000368u; // 802FAC48
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FAC4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FAC50
  c->lr=0x802FAC58u; f_802FA328(c); // 802FAC54
L_802FAC58:;
  c->r[3]=0u+0x80610000u; // 802FAC58
  c->r[3]=c->r[3]+0x000007B0u; // 802FAC5C
  c->lr=0x802FAC64u; f_801BF938(c); // 802FAC60
  c->r[3]=0u+0x80610000u; // 802FAC64
  c->r[5]=c->r[30]|c->r[30]; // 802FAC68
  c->r[6]=c->r[31]|c->r[31]; // 802FAC6C
  c->r[4]=0u+0x00000400u; // 802FAC70
  c->r[3]=c->r[3]+0x000007C8u; // 802FAC74
  c->lr=0x802FAC7Cu; f_801EF044(c); // 802FAC78
  cmps(c,0,(int32_t)c->r[29],0); // 802FAC7C
  if (!crb(c,2)) { goto L_802FACA0; } // 802FAC80
  c->r[3]=0u+0x804D0000u; // 802FAC84
  c->r[5]=0u+0x804D0000u; // 802FAC88
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FAC8C
  c->r[4]=0u+0x0000034Bu; // 802FAC90
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FAC94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FAC98
  c->lr=0x802FACA0u; f_802FA328(c); // 802FAC9C
L_802FACA0:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 802FACA0
  if (crb(c,2)) { goto L_802FACBC; } // 802FACA4
  c->r[4]=0u+0x80610000u; // 802FACA8
  c->r[3]=c->r[13]+0xFFFF8C24u; // 802FACAC
  c->r[4]=c->r[4]+0x000007C8u; // 802FACB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FACB4
  c->lr=0x802FACBCu; f_801BB3FC(c); // 802FACB8
L_802FACBC:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 802FACBC
  if (crb(c,2)) { goto L_802FACD4; } // 802FACC0
  c->r[4]=0u+0x80610000u; // 802FACC4
  c->r[3]=c->r[29]|c->r[29]; // 802FACC8
  c->r[4]=c->r[4]+0x000007C8u; // 802FACCC
  c->lr=0x802FACD4u; f_802FA844(c); // 802FACD0
L_802FACD4:;
  c->r[3]=0u+0x80610000u; // 802FACD4
  c->r[3]=c->r[3]+0x000007B0u; // 802FACD8
  c->lr=0x802FACE0u; f_801BFA14(c); // 802FACDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FACE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FACE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FACE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FACEC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FACF0
  c->lr=c->r[0]; // 802FACF4
  c->r[1]=c->r[1]+0x00000020u; // 802FACF8
  return; // 802FACFC
}

// fn_802FAD00
void f_802FAD00(Ctx* __restrict c) {
  trace_call(0x802FAD00u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FAD00
  c->r[0]=c->lr; // 802FAD04
  W32(c->r[1]+0x00000084u,c->r[0]); // 802FAD08
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 802FAD0C
  c->r[31]=c->r[4]|c->r[4]; // 802FAD10
  W32(c->r[1]+0x00000078u,c->r[30]); // 802FAD14
  c->r[30]=c->r[3]|c->r[3]; // 802FAD18
  if (!crb(c,6)) { goto L_802FAD40; } // 802FAD1C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802FAD20
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802FAD24
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802FAD28
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802FAD2C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802FAD30
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802FAD34
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802FAD38
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802FAD3C
L_802FAD40:;
  c->r[11]=c->r[1]+0x00000088u; // 802FAD40
  c->r[0]=c->r[1]+0x00000008u; // 802FAD44
  c->r[12]=0u+0x02000000u; // 802FAD48
  cmps(c,0,(int32_t)c->r[3],0); // 802FAD4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FAD50
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802FAD54
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FAD58
  W32(c->r[1]+0x00000014u,c->r[6]); // 802FAD5C
  W32(c->r[1]+0x00000018u,c->r[7]); // 802FAD60
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802FAD64
  W32(c->r[1]+0x00000020u,c->r[9]); // 802FAD68
  W32(c->r[1]+0x00000024u,c->r[10]); // 802FAD6C
  W32(c->r[1]+0x00000068u,c->r[12]); // 802FAD70
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 802FAD74
  W32(c->r[1]+0x00000070u,c->r[0]); // 802FAD78
  if (!crb(c,2)) { goto L_802FAD9C; } // 802FAD7C
  c->r[3]=0u+0x804D0000u; // 802FAD80
  c->r[5]=0u+0x804D0000u; // 802FAD84
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FAD88
  c->r[4]=0u+0x00000368u; // 802FAD8C
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FAD90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FAD94
  c->lr=0x802FAD9Cu; f_802FA328(c); // 802FAD98
L_802FAD9C:;
  c->r[3]=0u+0x80610000u; // 802FAD9C
  c->r[3]=c->r[3]+0x000007B0u; // 802FADA0
  c->lr=0x802FADA8u; f_801BF938(c); // 802FADA4
  c->r[3]=0u+0x80610000u; // 802FADA8
  c->r[5]=c->r[31]|c->r[31]; // 802FADAC
  c->r[3]=c->r[3]+0x000007C8u; // 802FADB0
  c->r[6]=c->r[1]+0x00000068u; // 802FADB4
  c->r[4]=0u+0x00000400u; // 802FADB8
  c->lr=0x802FADC0u; f_801EF044(c); // 802FADBC
  cmps(c,0,(int32_t)c->r[30],0); // 802FADC0
  if (!crb(c,2)) { goto L_802FADE4; } // 802FADC4
  c->r[3]=0u+0x804D0000u; // 802FADC8
  c->r[5]=0u+0x804D0000u; // 802FADCC
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FADD0
  c->r[4]=0u+0x0000034Bu; // 802FADD4
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FADD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FADDC
  c->lr=0x802FADE4u; f_802FA328(c); // 802FADE0
L_802FADE4:;
  c->r[31]=0u+0x80610000u; // 802FADE4
  c->r[3]=c->r[13]+0xFFFF8C24u; // 802FADE8
  c->r[4]=c->r[31]+0x000007C8u; // 802FADEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FADF0
  c->lr=0x802FADF8u; f_801BB3FC(c); // 802FADF4
  c->r[3]=c->r[30]|c->r[30]; // 802FADF8
  c->r[4]=c->r[31]+0x000007C8u; // 802FADFC
  c->lr=0x802FAE04u; f_802FA844(c); // 802FAE00
  c->r[3]=0u+0x80610000u; // 802FAE04
  c->r[3]=c->r[3]+0x000007B0u; // 802FAE08
  c->lr=0x802FAE10u; f_801BFA14(c); // 802FAE0C
  c->r[0]=R32(c->r[1]+0x00000084u); // 802FAE10
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 802FAE14
  c->r[30]=R32(c->r[1]+0x00000078u); // 802FAE18
  c->lr=c->r[0]; // 802FAE1C
  c->r[1]=c->r[1]+0x00000080u; // 802FAE20
  return; // 802FAE24
}

// fn_802FAE28
void f_802FAE28(Ctx* __restrict c) {
  trace_call(0x802FAE28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FAE28
  c->r[0]=c->lr; // 802FAE2C
  cmps(c,0,(int32_t)c->r[3],0); // 802FAE30
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FAE34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FAE38
  c->r[31]=c->r[3]|c->r[3]; // 802FAE3C
  if (!crb(c,2)) { goto L_802FAE60; } // 802FAE40
  c->r[3]=0u+0x804D0000u; // 802FAE44
  c->r[5]=0u+0x804D0000u; // 802FAE48
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FAE4C
  c->r[4]=0u+0x0000041Au; // 802FAE50
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FAE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FAE58
  c->lr=0x802FAE60u; f_802FA328(c); // 802FAE5C
L_802FAE60:;
  c->r[3]=0u+0x80610000u; // 802FAE60
  c->r[3]=c->r[3]+0x000007B0u; // 802FAE64
  c->lr=0x802FAE6Cu; f_801BF938(c); // 802FAE68
  cmps(c,0,(int32_t)c->r[31],0); // 802FAE6C
  if (!crb(c,2)) { goto L_802FAE90; } // 802FAE70
  c->r[3]=0u+0x804D0000u; // 802FAE74
  c->r[5]=0u+0x804D0000u; // 802FAE78
  c->r[3]=c->r[3]+0xFFFF8408u; // 802FAE7C
  c->r[4]=0u+0x00000070u; // 802FAE80
  c->r[5]=c->r[5]+0xFFFF8418u; // 802FAE84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FAE88
  c->lr=0x802FAE90u; f_802FA328(c); // 802FAE8C
L_802FAE90:;
  c->r[3]=R16(c->r[31]+0x00000012u); // 802FAE90
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 802FAE94
  c->r[3]=c->r[0]-c->r[3]; cr0(c,c->r[3]); // 802FAE98
  if (!crb(c,0)) { goto L_802FAEA8; } // 802FAE9C
  c->r[0]=R16(c->r[31]+0x00000006u); // 802FAEA0
  c->r[3]=c->r[3]+c->r[0]; // 802FAEA4
L_802FAEA8:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 802FAEA8
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 802FAEAC
  cmps(c,0,(int32_t)c->r[0],0); // 802FAEB0
  if (crb(c,2)) { goto L_802FAEC0; } // 802FAEB4
  c->r[0]=c->r[4]+0x00000001u; // 802FAEB8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 802FAEBC
L_802FAEC0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 802FAEC0
  c->r[3]=0u+0x80610000u; // 802FAEC4
  c->r[3]=c->r[3]+0x000007B0u; // 802FAEC8
  c->r[31]=c->r[0]+c->r[4]; // 802FAECC
  c->lr=0x802FAED4u; f_801BFA14(c); // 802FAED0
  c->r[3]=c->r[31]|c->r[31]; // 802FAED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FAED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FAEDC
  c->lr=c->r[0]; // 802FAEE0
  c->r[1]=c->r[1]+0x00000010u; // 802FAEE4
  return; // 802FAEE8
}

// fn_802FAEEC
void f_802FAEEC(Ctx* __restrict c) {
  trace_call(0x802FAEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FAEEC
  c->r[0]=c->lr; // 802FAEF0
  cmps(c,0,(int32_t)c->r[3],0); // 802FAEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FAEF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FAEFC
  c->r[31]=c->r[3]|c->r[3]; // 802FAF00
  if (crb(c,2)) { goto L_802FAF14; } // 802FAF04
  cmps(c,0,(int32_t)c->r[4],0); // 802FAF08
  if (!crb(c,1)) { goto L_802FAF14; } // 802FAF0C
  c->lr=0x802FAF14u; f_8001AAC0(c); // 802FAF10
L_802FAF14:;
  c->r[3]=c->r[31]|c->r[31]; // 802FAF14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FAF18
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FAF1C
  c->lr=c->r[0]; // 802FAF20
  c->r[1]=c->r[1]+0x00000010u; // 802FAF24
  return; // 802FAF28
}

// DirectPrint_IsActive__Q24nw4r2dbFv
void f_802FAF2C(Ctx* __restrict c) {
  trace_call(0x802FAF2Cu);
  c->r[0]=R32(c->r[13]+0xFFFFA5C8u); // 802FAF2C
  c->r[3]=0u+0x00000000u; // 802FAF30
  cmps(c,0,(int32_t)c->r[0],0); // 802FAF34
  if (crb(c,2)) return; // 802FAF38
  c->r[4]=0u+0x80610000u; // 802FAF3C
  c->r[0]=R32(c->r[4]+0x00000BC8u); // 802FAF40
  cmps(c,0,(int32_t)c->r[0],0); // 802FAF44
  if (crb(c,2)) return; // 802FAF48
  c->r[3]=0u+0x00000001u; // 802FAF4C
  return; // 802FAF50
}

// fn_802FAF54
void f_802FAF54(Ctx* __restrict c) {
  trace_call(0x802FAF54u);
  c->r[7]=0u+0x80610000u; // 802FAF54
  c->r[0]=R32(c->r[7]+0x00000BC8u); // 802FAF58
  cmps(c,0,(int32_t)c->r[0],0); // 802FAF5C
  if (crb(c,2)) return; // 802FAF60
  c->r[8]=c->r[7]+0x00000BC8u; // 802FAF64
  c->r[7]=0u+0x00000190u; // 802FAF68
  c->r[8]=R16(c->r[8]+0x00000008u); // 802FAF6C
  c->r[7]=addc(c,~c->r[7],c->r[8],1); // 802FAF70
  c->r[7]=addc(c,~c->r[7],c->r[7],c->xer_ca); // 802FAF74
  c->r[7]=c->r[7]+0x00000002u; // 802FAF78
  cmps(c,0,(int32_t)c->r[7],2); // 802FAF7C
  if (!crb(c,2)) { goto L_802FAF8C; } // 802FAF80
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802FAF84
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802FAF88
L_802FAF8C:;
  c->r[9]=c->r[3]+c->r[5]; // 802FAF8C
  c->r[5]=rotl(c->r[3],1)&0x00000001u; // 802FAF90
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 802FAF94
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802FAF98
  c->r[7]=c->r[3]&c->r[5]; // 802FAF9C
  if (crb(c,1)) { goto L_802FAFA8; } // 802FAFA0
  c->r[8]=c->r[9]|c->r[9]; // 802FAFA4
L_802FAFA8:;
  c->r[5]=0u+0x80610000u; // 802FAFA8
  c->r[3]=0u+0x0000012Cu; // 802FAFAC
  c->r[5]=c->r[5]+0x00000BC8u; // 802FAFB0
  c->r[10]=R16(c->r[5]+0x0000000Au); // 802FAFB4
  c->r[5]=c->r[8]-c->r[7]; // 802FAFB8
  c->r[3]=addc(c,~c->r[3],c->r[10],1); // 802FAFBC
  c->r[3]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 802FAFC0
  c->r[3]=c->r[3]+0x00000002u; // 802FAFC4
  cmps(c,0,(int32_t)c->r[3],2); // 802FAFC8
  if (!crb(c,2)) { goto L_802FAFD8; } // 802FAFCC
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802FAFD0
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 802FAFD4
L_802FAFD8:;
  c->r[6]=c->r[4]+c->r[6]; // 802FAFD8
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 802FAFDC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 802FAFE0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 802FAFE4
  c->r[8]=c->r[4]&c->r[3]; // 802FAFE8
  if (crb(c,1)) { goto L_802FAFF4; } // 802FAFEC
  c->r[10]=c->r[6]|c->r[6]; // 802FAFF0
L_802FAFF4:;
  c->r[9]=0u+0x80610000u; // 802FAFF4
  c->r[6]=c->r[10]-c->r[8]; // 802FAFF8
  c->r[9]=c->r[9]+0x00000BC8u; // 802FAFFC
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 802FB000
  c->r[4]=R16(c->r[9]+0x0000000Cu); // 802FB004
  c->r[11]=0u+0x00000000u; // 802FB008
  c->r[3]=0u+0x00001080u; // 802FB00C
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[8]); // 802FB010
  c->r[4]=0u+0x80000000u; // 802FB014
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802FB018
  c->r[0]=c->r[0]+c->r[8]; // 802FB01C
  c->r[10]=c->r[7]+c->r[0]; // 802FB020
  goto L_802FB0D4; // 802FB024
L_802FB028:;
  cmps(c,1,(int32_t)c->r[5],0); // 802FB028
  c->r[12]=0u+0x00000000u; // 802FB02C
  if (!crb(c,5)) { goto L_802FB0C0; } // 802FB030
  cmps(c,0,(int32_t)c->r[5],8); // 802FB034
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 802FB038
  if (!crb(c,1)) { goto L_802FB0A0; } // 802FB03C
  c->r[8]=0u+0x00000000u; // 802FB040
  if (crb(c,4)) { goto L_802FB058; } // 802FB044
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 802FB048
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802FB04C
  if (crb(c,1)) { goto L_802FB058; } // 802FB050
  c->r[8]=0u+0x00000001u; // 802FB054
L_802FB058:;
  cmps(c,0,(int32_t)c->r[8],0); // 802FB058
  if (crb(c,2)) { goto L_802FB0A0; } // 802FB05C
  c->r[0]=c->r[7]+0x00000007u; // 802FB060
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802FB064
  c->ctr=c->r[0]; // 802FB068
  cmps(c,0,(int32_t)c->r[7],0); // 802FB06C
  if (!crb(c,1)) { goto L_802FB0A0; } // 802FB070
L_802FB074:;
  W16(c->r[10]+0x00000000u,c->r[3]); // 802FB074
  c->r[12]=c->r[12]+0x00000008u; // 802FB078
  W16(c->r[10]+0x00000002u,c->r[3]); // 802FB07C
  W16(c->r[10]+0x00000004u,c->r[3]); // 802FB080
  W16(c->r[10]+0x00000006u,c->r[3]); // 802FB084
  W16(c->r[10]+0x00000008u,c->r[3]); // 802FB088
  W16(c->r[10]+0x0000000Au,c->r[3]); // 802FB08C
  W16(c->r[10]+0x0000000Cu,c->r[3]); // 802FB090
  W16(c->r[10]+0x0000000Eu,c->r[3]); // 802FB094
  c->r[10]=c->r[10]+0x00000010u; // 802FB098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FB074; } // 802FB09C
L_802FB0A0:;
  c->r[0]=c->r[5]-c->r[12]; // 802FB0A0
  c->ctr=c->r[0]; // 802FB0A4
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[5]); // 802FB0A8
  if (!crb(c,0)) { goto L_802FB0C0; } // 802FB0AC
L_802FB0B0:;
  W16(c->r[10]+0x00000000u,c->r[3]); // 802FB0B0
  c->r[10]=c->r[10]+0x00000002u; // 802FB0B4
  c->r[12]=c->r[12]+0x00000001u; // 802FB0B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FB0B0; } // 802FB0BC
L_802FB0C0:;
  c->r[0]=R16(c->r[9]+0x0000000Cu); // 802FB0C0
  c->r[11]=c->r[11]+0x00000001u; // 802FB0C4
  c->r[0]=c->r[0]-c->r[5]; // 802FB0C8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802FB0CC
  c->r[10]=c->r[10]+c->r[0]; // 802FB0D0
L_802FB0D4:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[6]); // 802FB0D4
  if (crb(c,0)) { IRQCHK(c); goto L_802FB028; } // 802FB0D8
  return; // 802FB0DC
}

// DirectPrint_StoreCache__Q24nw4r2dbFv
void f_802FB0E0(Ctx* __restrict c) {
  trace_call(0x802FB0E0u);
  c->r[3]=0u+0x80610000u; // 802FB0E0
  c->r[4]=c->r[3]+0x00000BC8u; // 802FB0E4
  c->r[3]=R32(c->r[3]+0x00000BC8u); // 802FB0E8
  c->r[4]=R32(c->r[4]+0x00000004u); // 802FB0EC
  f_801BA7C0(c); return; // 802FB0F0
}

// fn_802FB0F4
void f_802FB0F4(Ctx* __restrict c) {
  trace_call(0x802FB0F4u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB0F4
  c->r[0]=c->lr; // 802FB0F8
  W32(c->r[1]+0x00000194u,c->r[0]); // 802FB0FC
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 802FB100
  c->r[31]=c->r[6]|c->r[6]; // 802FB104
  W32(c->r[1]+0x00000188u,c->r[30]); // 802FB108
  c->r[30]=c->r[5]|c->r[5]; // 802FB10C
  W32(c->r[1]+0x00000184u,c->r[29]); // 802FB110
  c->r[29]=c->r[4]|c->r[4]; // 802FB114
  W32(c->r[1]+0x00000180u,c->r[28]); // 802FB118
  c->r[28]=c->r[3]|c->r[3]; // 802FB11C
  if (!crb(c,6)) { goto L_802FB144; } // 802FB120
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802FB124
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 802FB128
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 802FB12C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 802FB130
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 802FB134
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 802FB138
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 802FB13C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 802FB140
L_802FB144:;
  c->r[11]=0u+0x80610000u; // 802FB144
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FB148
  c->r[0]=R32(c->r[11]+0x00000BC8u); // 802FB14C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802FB150
  cmps(c,0,(int32_t)c->r[0],0); // 802FB154
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FB158
  W32(c->r[1]+0x00000014u,c->r[6]); // 802FB15C
  W32(c->r[1]+0x00000018u,c->r[7]); // 802FB160
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 802FB164
  W32(c->r[1]+0x00000020u,c->r[9]); // 802FB168
  W32(c->r[1]+0x00000024u,c->r[10]); // 802FB16C
  if (crb(c,2)) { goto L_802FB1E0; } // 802FB170
  c->r[3]=c->r[1]+0x00000198u; // 802FB174
  c->r[0]=c->r[1]+0x00000008u; // 802FB178
  c->r[4]=0u+0x04000000u; // 802FB17C
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 802FB180
  W32(c->r[1]+0x00000068u,c->r[4]); // 802FB184
  W32(c->r[1]+0x00000070u,c->r[0]); // 802FB188
  if (!crb(c,2)) { goto L_802FB1AC; } // 802FB18C
  c->r[3]=0u+0x804D0000u; // 802FB190
  c->r[5]=0u+0x804D0000u; // 802FB194
  c->r[3]=c->r[3]+0xFFFF8528u; // 802FB198
  c->r[4]=0u+0x00000287u; // 802FB19C
  c->r[5]=c->r[5]+0xFFFF853Cu; // 802FB1A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FB1A4
  c->lr=0x802FB1ACu; f_802FA328(c); // 802FB1A8
L_802FB1AC:;
  c->r[5]=c->r[31]|c->r[31]; // 802FB1AC
  c->r[3]=c->r[1]+0x00000078u; // 802FB1B0
  c->r[6]=c->r[1]+0x00000068u; // 802FB1B4
  c->r[4]=0u+0x00000100u; // 802FB1B8
  c->lr=0x802FB1C0u; f_801EF044(c); // 802FB1BC
  cmps(c,0,(int32_t)c->r[3],0); // 802FB1C0
  if (!crb(c,1)) { goto L_802FB1E0; } // 802FB1C4
  c->r[3]=c->r[28]|c->r[28]; // 802FB1C8
  c->r[4]=c->r[29]|c->r[29]; // 802FB1CC
  c->r[6]=c->r[30]|c->r[30]; // 802FB1D0
  c->r[5]=c->r[1]+0x00000078u; // 802FB1D4
  c->r[7]=0u+0x00000000u; // 802FB1D8
  c->lr=0x802FB1E0u; f_802FB200(c); // 802FB1DC
L_802FB1E0:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 802FB1E0
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 802FB1E4
  c->r[30]=R32(c->r[1]+0x00000188u); // 802FB1E8
  c->r[29]=R32(c->r[1]+0x00000184u); // 802FB1EC
  c->r[28]=R32(c->r[1]+0x00000180u); // 802FB1F0
  c->lr=c->r[0]; // 802FB1F4
  c->r[1]=c->r[1]+0x00000190u; // 802FB1F8
  return; // 802FB1FC
}

// fn_802FB200
void f_802FB200(Ctx* __restrict c) {
  trace_call(0x802FB200u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB200
  c->r[0]=c->lr; // 802FB204
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FB208
  c->r[11]=c->r[1]+0x00000040u; // 802FB20C
  c->lr=0x802FB214u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FB210
  c->r[8]=0u+0x80610000u; // 802FB214
  c->r[23]=c->r[3]|c->r[3]; // 802FB218
  c->r[8]=c->r[8]+0x00000BC8u; // 802FB21C
  c->r[3]=0u+0x2AAB0000u; // 802FB220
  c->r[8]=R16(c->r[8]+0x00000008u); // 802FB224
  c->r[0]=0u+0x00000190u; // 802FB228
  c->r[24]=c->r[4]|c->r[4]; // 802FB22C
  c->r[25]=c->r[5]|c->r[5]; // 802FB230
  c->r[0]=addc(c,~c->r[0],c->r[8],1); // 802FB234
  c->r[26]=c->r[6]|c->r[6]; // 802FB238
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802FB23C
  c->r[27]=c->r[7]|c->r[7]; // 802FB240
  c->r[0]=c->r[4]+0x00000002u; // 802FB244
  c->r[29]=c->r[23]|c->r[23]; // 802FB248
  c->r[28]=divw((int32_t)c->r[8],(int32_t)c->r[0]); // 802FB24C
  c->r[22]=c->r[3]+0xFFFFAAABu; // 802FB250
  c->r[30]=0u+0x804D0000u; // 802FB254
  c->r[31]=0u+0x804D0000u; // 802FB258
  goto L_802FB354; // 802FB25C
L_802FB260:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FB260
  if (crb(c,2)) { goto L_802FB2D8; } // 802FB264
  cmps(c,0,(int32_t)c->r[25],0); // 802FB268
  c->r[21]=c->r[25]|c->r[25]; // 802FB26C
  c->r[20]=0u+0x00000000u; // 802FB270
  if (!crb(c,2)) { goto L_802FB28C; } // 802FB274
  c->r[3]=c->r[30]+0xFFFF8528u; // 802FB278
  c->r[5]=c->r[31]+0xFFFF857Cu; // 802FB27C
  c->r[4]=0u+0x00000132u; // 802FB280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FB284
  c->lr=0x802FB28Cu; f_802FA328(c); // 802FB288
L_802FB28C:;
  c->r[0]=R8(c->r[21]+0x00000000u); // 802FB28C
  c->r[21]=c->r[21]+0x00000001u; // 802FB290
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802FB294
  if (crb(c,2)) { goto L_802FB2C0; } // 802FB298
  cmps(c,0,(int32_t)c->r[0],10); // 802FB29C
  if (crb(c,2)) { goto L_802FB2C0; } // 802FB2A0
  cmps(c,0,(int32_t)c->r[0],9); // 802FB2A4
  if (!crb(c,2)) { goto L_802FB2B8; } // 802FB2A8
  c->r[0]=c->r[20]+0x00000004u; // 802FB2AC
  c->r[20]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802FB2B0
  IRQCHK(c); goto L_802FB28C; // 802FB2B4
L_802FB2B8:;
  c->r[20]=c->r[20]+0x00000001u; // 802FB2B8
  IRQCHK(c); goto L_802FB28C; // 802FB2BC
L_802FB2C0:;
  c->r[0]=c->r[20]+0x00000002u; // 802FB2C0
  c->r[3]=c->r[23]+0xFFFFFFFAu; // 802FB2C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 802FB2C8
  c->r[4]=c->r[24]+0xFFFFFFFDu; // 802FB2CC
  c->r[6]=0u+0x0000000Du; // 802FB2D0
  c->lr=0x802FB2D8u; f_802FAF54(c); // 802FB2D4
L_802FB2D8:;
  c->r[0]=c->r[28]-c->r[23]; // 802FB2D8
  c->r[3]=c->r[23]|c->r[23]; // 802FB2DC
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[22]*(int64_t)(int32_t)c->r[0])>>32); // 802FB2E0
  c->r[4]=c->r[24]|c->r[24]; // 802FB2E4
  c->r[5]=c->r[25]|c->r[25]; // 802FB2E8
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 802FB2EC
  c->r[6]=c->r[6]+c->r[0]; // 802FB2F0
  c->lr=0x802FB2F8u; f_802FB378(c); // 802FB2F4
  c->r[0]=R8(c->r[3]+0x00000000u); // 802FB2F8
  c->r[25]=c->r[3]|c->r[3]; // 802FB2FC
  c->r[24]=c->r[24]+0x0000000Au; // 802FB300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802FB304
  cmps(c,0,(int32_t)c->r[0],10); // 802FB308
  if (!crb(c,2)) { goto L_802FB31C; } // 802FB30C
  c->r[23]=c->r[29]|c->r[29]; // 802FB310
  c->r[25]=c->r[3]+0x00000001u; // 802FB314
  goto L_802FB354; // 802FB318
L_802FB31C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FB31C
  if (crb(c,2)) { goto L_802FB354; } // 802FB320
  cmps(c,0,(int32_t)c->r[26],0); // 802FB324
  c->r[25]=c->r[3]+0x00000001u; // 802FB328
  if (!crb(c,2)) { goto L_802FB350; } // 802FB32C
  c->r[3]=c->r[25]|c->r[25]; // 802FB330
  c->r[4]=0u+0x0000000Au; // 802FB334
  c->lr=0x802FB33Cu; f_801F0D7C(c); // 802FB338
  cmps(c,0,(int32_t)c->r[3],0); // 802FB33C
  if (crb(c,2)) { goto L_802FB360; } // 802FB340
  c->r[23]=c->r[29]|c->r[29]; // 802FB344
  c->r[25]=c->r[3]+0x00000001u; // 802FB348
  goto L_802FB354; // 802FB34C
L_802FB350:;
  c->r[23]=0u+0x00000000u; // 802FB350
L_802FB354:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 802FB354
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802FB358
  if (!crb(c,2)) { IRQCHK(c); goto L_802FB260; } // 802FB35C
L_802FB360:;
  c->r[11]=c->r[1]+0x00000040u; // 802FB360
  c->lr=0x802FB368u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FB364
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FB368
  c->lr=c->r[0]; // 802FB36C
  c->r[1]=c->r[1]+0x00000040u; // 802FB370
  return; // 802FB374
}

// DrawStringLineToXfb___Q24nw4r2dbFiiPCci
void f_802FB378(Ctx* __restrict c) {
  trace_call(0x802FB378u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB378
  c->r[0]=c->lr; // 802FB37C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FB380
  c->r[11]=c->r[1]+0x00000020u; // 802FB384
  c->lr=0x802FB38Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FB388
  cmps(c,0,(int32_t)c->r[5],0); // 802FB38C
  c->r[31]=0u+0x804D0000u; // 802FB390
  c->r[26]=c->r[3]|c->r[3]; // 802FB394
  c->r[27]=c->r[4]|c->r[4]; // 802FB398
  c->r[28]=c->r[5]|c->r[5]; // 802FB39C
  c->r[29]=c->r[6]|c->r[6]; // 802FB3A0
  c->r[31]=c->r[31]+0xFFFF8528u; // 802FB3A4
  c->r[30]=0u+0x00000000u; // 802FB3A8
  if (!crb(c,2)) { goto L_802FB3C4; } // 802FB3AC
  c->r[3]=c->r[31]+0x00000000u; // 802FB3B0
  c->r[5]=c->r[31]+0x00000054u; // 802FB3B4
  c->r[4]=0u+0x000002E9u; // 802FB3B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FB3BC
  c->lr=0x802FB3C4u; f_802FA328(c); // 802FB3C0
L_802FB3C4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FB3C4
  if (crb(c,1)) { goto L_802FB3E0; } // 802FB3C8
  c->r[3]=c->r[31]+0x00000000u; // 802FB3CC
  c->r[5]=c->r[31]+0x0000007Cu; // 802FB3D0
  c->r[4]=0u+0x000002EAu; // 802FB3D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FB3D8
  c->lr=0x802FB3E0u; f_802FA328(c); // 802FB3DC
L_802FB3E0:;
  c->r[31]=0u+0x803D0000u; // 802FB3E0
  c->r[31]=c->r[31]+0x000061D0u; // 802FB3E4
  goto L_802FB46C; // 802FB3E8
L_802FB3EC:;
  cmps(c,0,(int32_t)c->r[0],10); // 802FB3EC
  if (crb(c,2)) { goto L_802FB3FC; } // 802FB3F0
  cmps(c,0,(int32_t)c->r[0],0); // 802FB3F4
  if (!crb(c,2)) { goto L_802FB404; } // 802FB3F8
L_802FB3FC:;
  c->r[3]=c->r[28]|c->r[28]; // 802FB3FC
  goto L_802FB47C; // 802FB400
L_802FB404:;
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 802FB404
  c->r[5]=R8(c->r[31]+c->r[0]); // 802FB408
  cmps(c,0,(int32_t)c->r[5],253); // 802FB40C
  if (!crb(c,2)) { goto L_802FB42C; } // 802FB410
  c->r[0]=rotl(c->r[30],0)&0x00000003u; // 802FB414
  c->r[3]=addc(c,~c->r[0],0x00000004u,1); // 802FB418
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)6); // 802FB41C
  c->r[30]=c->r[30]+c->r[3]; // 802FB420
  c->r[26]=c->r[26]+c->r[0]; // 802FB424
  goto L_802FB448; // 802FB428
L_802FB42C:;
  cmps(c,0,(int32_t)c->r[5],255); // 802FB42C
  if (crb(c,2)) { goto L_802FB440; } // 802FB430
  c->r[3]=c->r[26]|c->r[26]; // 802FB434
  c->r[4]=c->r[27]|c->r[27]; // 802FB438
  c->lr=0x802FB440u; f_802FB494(c); // 802FB43C
L_802FB440:;
  c->r[26]=c->r[26]+0x00000006u; // 802FB440
  c->r[30]=c->r[30]+0x00000001u; // 802FB444
L_802FB448:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 802FB448
  if (crb(c,0)) { goto L_802FB468; } // 802FB44C
  c->r[0]=R8(c->r[28]+0x00000001u); // 802FB450
  cmps(c,0,(int32_t)c->r[0],10); // 802FB454
  if (!crb(c,2)) { goto L_802FB460; } // 802FB458
  c->r[28]=c->r[28]+0x00000001u; // 802FB45C
L_802FB460:;
  c->r[3]=c->r[28]|c->r[28]; // 802FB460
  goto L_802FB47C; // 802FB464
L_802FB468:;
  c->r[28]=c->r[28]+0x00000001u; // 802FB468
L_802FB46C:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 802FB46C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802FB470
  if (!crb(c,2)) { IRQCHK(c); goto L_802FB3EC; } // 802FB474
  c->r[3]=c->r[28]|c->r[28]; // 802FB478
L_802FB47C:;
  c->r[11]=c->r[1]+0x00000020u; // 802FB47C
  c->lr=0x802FB484u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FB480
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FB484
  c->lr=c->r[0]; // 802FB488
  c->r[1]=c->r[1]+0x00000020u; // 802FB48C
  return; // 802FB490
}

// fn_802FB494
void f_802FB494(Ctx* __restrict c) {
  trace_call(0x802FB494u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB494
  c->r[0]=c->lr; // 802FB498
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FB49C
  c->r[11]=c->r[1]+0x00000020u; // 802FB4A0
  c->lr=0x802FB4A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FB4A4
  cmps(c,0,(int32_t)c->r[5],100); // 802FB4A8
  c->r[8]=c->r[5]|c->r[5]; // 802FB4AC
  if (crb(c,0)) { goto L_802FB4B8; } // 802FB4B0
  c->r[8]=c->r[5]+0xFFFFFF9Cu; // 802FB4B4
L_802FB4B8:;
  c->r[7]=0u+0x66660000u; // 802FB4B8
  c->r[6]=0u+0x803D0000u; // 802FB4BC
  c->r[0]=c->r[7]+0x00006667u; // 802FB4C0
  cmps(c,0,(int32_t)c->r[5],100); // 802FB4C4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[8])>>32); // 802FB4C8
  c->r[6]=c->r[6]+0x00006350u; // 802FB4CC
  c->r[5]=sraw(c,c->r[0],1); // 802FB4D0
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 802FB4D4
  c->r[0]=sraw(c,c->r[0],1); // 802FB4D8
  c->r[5]=c->r[5]+c->r[7]; // 802FB4DC
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)5); // 802FB4E0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 802FB4E4
  c->r[5]=c->r[0]+c->r[5]; // 802FB4E8
  c->r[7]=c->r[8]-c->r[7]; // 802FB4EC
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 802FB4F0
  c->r[0]=c->r[0]-c->r[5]; // 802FB4F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802FB4F8
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)6); // 802FB4FC
  c->r[10]=c->r[6]+c->r[0]; // 802FB500
  if (!crb(c,0)) { goto L_802FB514; } // 802FB504
  c->r[5]=0u+0x803D0000u; // 802FB508
  c->r[5]=c->r[5]+0x00006250u; // 802FB50C
  c->r[10]=c->r[5]+c->r[0]; // 802FB510
L_802FB514:;
  c->r[12]=0u+0x80610000u; // 802FB514
  c->r[6]=0u+0x00000190u; // 802FB518
  c->r[5]=c->r[12]+0x00000BC8u; // 802FB51C
  c->r[0]=0u+0x0000012Cu; // 802FB520
  c->r[28]=R16(c->r[5]+0x00000008u); // 802FB524
  cmps(c,0,(int32_t)c->r[4],0); // 802FB528
  c->r[7]=R16(c->r[5]+0x0000000Au); // 802FB52C
  c->r[6]=addc(c,~c->r[6],c->r[28],1); // 802FB530
  c->r[8]=R16(c->r[5]+0x0000000Cu); // 802FB534
  c->r[11]=addc(c,~c->r[6],c->r[6],c->xer_ca); // 802FB538
  c->r[12]=R32(c->r[12]+0x00000BC8u); // 802FB53C
  c->r[0]=addc(c,~c->r[0],c->r[7],1); // 802FB540
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802FB544
  c->r[6]=c->r[6]+0x00000002u; // 802FB548
  c->r[0]=c->r[11]+0x00000002u; // 802FB54C
  c->r[11]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 802FB550
  c->r[8]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[8]); // 802FB554
  c->r[11]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 802FB558
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802FB55C
  c->r[8]=c->r[12]+c->r[8]; // 802FB560
  c->r[11]=rotl(c->r[11],1)&0xFFFFFFFEu; // 802FB564
  c->r[11]=c->r[11]+c->r[8]; // 802FB568
  if (crb(c,0)) { goto L_802FB734; } // 802FB56C
  cmps(c,0,(int32_t)c->r[3],0); // 802FB570
  if (!crb(c,0)) { goto L_802FB57C; } // 802FB574
  goto L_802FB734; // 802FB578
L_802FB57C:;
  c->r[3]=c->r[3]+0x00000006u; // 802FB57C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 802FB580
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 802FB584
  if (!crb(c,1)) { goto L_802FB734; } // 802FB588
  c->r[3]=c->r[4]+0x00000007u; // 802FB58C
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 802FB590
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 802FB594
  if (crb(c,1)) { goto L_802FB5A0; } // 802FB598
  goto L_802FB734; // 802FB59C
L_802FB5A0:;
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 802FB5A0
  c->r[3]=0u+0x80610000u; // 802FB5A4
  c->r[4]=0u+0x804D0000u; // 802FB5A8
  c->r[3]=c->r[3]+0x00000BD8u; // 802FB5AC
  c->r[4]=c->r[4]+0xFFFF85C8u; // 802FB5B0
  c->r[12]=0u+0x00000000u; // 802FB5B4
L_802FB5B8:;
  c->r[8]=R32(c->r[10]+0x00000000u); // 802FB5B8
  cmps(c,0,(int32_t)c->r[0],1); // 802FB5BC
  c->r[10]=c->r[10]+0x00000004u; // 802FB5C0
  c->r[26]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 802FB5C4
  if (!crb(c,2)) { goto L_802FB5D4; } // 802FB5C8
  c->r[8]=rotl(c->r[26],31)&0x7E000000u; // 802FB5CC
  goto L_802FB600; // 802FB5D0
L_802FB5D4:;
  c->r[8]=rotl(c->r[26],6)&0x0000000Cu; // 802FB5D4
  c->r[31]=rotl(c->r[26],4)&0x0000000Cu; // 802FB5D8
  c->r[30]=rotl(c->r[26],8)&0x0000000Cu; // 802FB5DC
  c->r[8]=R32(c->r[4]+c->r[8]); // 802FB5E0
  c->r[31]=R32(c->r[4]+c->r[31]); // 802FB5E4
  c->r[30]=R32(c->r[4]+c->r[30]); // 802FB5E8
  c->r[8]=rotl(c->r[8],4)&0xFFFFFFF0u; // 802FB5EC
  c->r[31]=rotl(c->r[31],8)&0xFFFFFF00u; // 802FB5F0
  c->r[8]=c->r[30]|c->r[8]; // 802FB5F4
  c->r[8]=c->r[31]|c->r[8]; // 802FB5F8
  c->r[8]=rotl(c->r[8],19)&0xFFF80000u; // 802FB5FC
L_802FB600:;
  c->r[31]=c->r[7]+0x00000001u; // 802FB600
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 802FB604
  c->ctr=c->r[31]; // 802FB608
  cmps(c,0,(int32_t)c->r[7],0); // 802FB60C
  if (!crb(c,1)) { goto L_802FB714; } // 802FB610
L_802FB614:;
  c->r[27]=rotl(c->r[8],0)&0x40000000u; cr0(c,c->r[27]); // 802FB614
  if (crb(c,2)) { goto L_802FB624; } // 802FB618
  c->r[29]=R16(c->r[3]+0x00000008u); // 802FB61C
  goto L_802FB628; // 802FB620
L_802FB624:;
  c->r[29]=0u+0x00000040u; // 802FB624
L_802FB628:;
  c->r[30]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[30]); // 802FB628
  if (crb(c,2)) { goto L_802FB638; } // 802FB62C
  c->r[30]=R16(c->r[3]+0x0000000Au); // 802FB630
  goto L_802FB63C; // 802FB634
L_802FB638:;
  c->r[30]=0u+0x00000020u; // 802FB638
L_802FB63C:;
  c->r[26]=rotl(c->r[8],0)&0x20000000u; cr0(c,c->r[26]); // 802FB63C
  if (crb(c,2)) { goto L_802FB64C; } // 802FB640
  c->r[28]=R16(c->r[3]+0x0000000Au); // 802FB644
  goto L_802FB650; // 802FB648
L_802FB64C:;
  c->r[28]=0u+0x00000020u; // 802FB64C
L_802FB650:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FB650
  if (crb(c,2)) { goto L_802FB660; } // 802FB654
  c->r[31]=R16(c->r[3]+0x00000004u); // 802FB658
  goto L_802FB664; // 802FB65C
L_802FB660:;
  c->r[31]=0u+0x00000000u; // 802FB660
L_802FB664:;
  c->r[30]=c->r[28]+c->r[30]; // 802FB664
  cmps(c,0,(int32_t)c->r[6],1); // 802FB668
  c->r[30]=c->r[29]+c->r[30]; // 802FB66C
  c->r[30]=c->r[31]|c->r[30]; // 802FB670
  W16(c->r[11]+0x00000000u,c->r[30]); // 802FB674
  c->r[28]=rotl(c->r[30],0)&0x0000FFFFu; // 802FB678
  if (!crb(c,1)) { goto L_802FB68C; } // 802FB67C
  c->r[30]=R16(c->r[5]+0x0000000Cu); // 802FB680
  c->r[30]=rotl(c->r[30],1)&0xFFFFFFFEu; // 802FB684
  W16(c->r[11]+c->r[30],c->r[28]); // 802FB688
L_802FB68C:;
  cmps(c,0,(int32_t)c->r[26],0); // 802FB68C
  if (crb(c,2)) { goto L_802FB69C; } // 802FB690
  c->r[28]=R16(c->r[3]+0x0000000Eu); // 802FB694
  goto L_802FB6A0; // 802FB698
L_802FB69C:;
  c->r[28]=0u+0x00000040u; // 802FB69C
L_802FB6A0:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FB6A0
  if (crb(c,2)) { goto L_802FB6B0; } // 802FB6A4
  c->r[29]=R16(c->r[3]+0x00000010u); // 802FB6A8
  goto L_802FB6B4; // 802FB6AC
L_802FB6B0:;
  c->r[29]=0u+0x00000020u; // 802FB6B0
L_802FB6B4:;
  c->r[30]=rotl(c->r[8],0)&0x10000000u; cr0(c,c->r[30]); // 802FB6B4
  if (crb(c,2)) { goto L_802FB6C4; } // 802FB6B8
  c->r[31]=R16(c->r[3]+0x00000010u); // 802FB6BC
  goto L_802FB6C8; // 802FB6C0
L_802FB6C4:;
  c->r[31]=0u+0x00000020u; // 802FB6C4
L_802FB6C8:;
  cmps(c,0,(int32_t)c->r[26],0); // 802FB6C8
  if (crb(c,2)) { goto L_802FB6D8; } // 802FB6CC
  c->r[30]=R16(c->r[3]+0x00000004u); // 802FB6D0
  goto L_802FB6DC; // 802FB6D4
L_802FB6D8:;
  c->r[30]=0u+0x00000000u; // 802FB6D8
L_802FB6DC:;
  c->r[31]=c->r[31]+c->r[29]; // 802FB6DC
  cmps(c,0,(int32_t)c->r[6],1); // 802FB6E0
  c->r[31]=c->r[28]+c->r[31]; // 802FB6E4
  c->r[31]=c->r[30]|c->r[31]; // 802FB6E8
  W16(c->r[11]+0x00000002u,c->r[31]); // 802FB6EC
  c->r[26]=rotl(c->r[31],0)&0x0000FFFFu; // 802FB6F0
  if (!crb(c,1)) { goto L_802FB708; } // 802FB6F4
  c->r[31]=R16(c->r[5]+0x0000000Cu); // 802FB6F8
  c->r[31]=rotl(c->r[31],1)&0xFFFFFFFEu; // 802FB6FC
  c->r[31]=c->r[11]+c->r[31]; // 802FB700
  W16(c->r[31]+0x00000002u,c->r[26]); // 802FB704
L_802FB708:;
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802FB708
  c->r[11]=c->r[11]+0x00000004u; // 802FB70C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FB614; } // 802FB710
L_802FB714:;
  c->r[8]=R16(c->r[5]+0x0000000Cu); // 802FB714
  c->r[12]=c->r[12]+0x00000001u; // 802FB718
  cmps(c,0,(int32_t)c->r[12],7); // 802FB71C
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 802FB720
  c->r[8]=c->r[8]-c->r[7]; // 802FB724
  c->r[8]=rotl(c->r[8],1)&0xFFFFFFFEu; // 802FB728
  c->r[11]=c->r[11]+c->r[8]; // 802FB72C
  if (crb(c,0)) { IRQCHK(c); goto L_802FB5B8; } // 802FB730
L_802FB734:;
  c->r[11]=c->r[1]+0x00000020u; // 802FB734
  c->lr=0x802FB73Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FB738
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FB73C
  c->lr=c->r[0]; // 802FB740
  c->r[1]=c->r[1]+0x00000020u; // 802FB744
  return; // 802FB748
}

// fn_802FB74C
void f_802FB74C(Ctx* __restrict c) {
  trace_call(0x802FB74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB74C
  c->r[0]=c->lr; // 802FB750
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FB754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FB758
  c->r[31]=c->r[3]|c->r[3]; // 802FB75C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FB760
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FB764
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FB768
  c->r[0]=R32(c->r[13]+0xFFFFA5C8u); // 802FB76C
  cmps(c,0,(int32_t)c->r[0],0); // 802FB770
  if (!crb(c,2)) { goto L_802FB7FC; } // 802FB774
  c->r[30]=0u+0x00000280u; // 802FB778
  c->r[11]=0u+0x000001E0u; // 802FB77C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[11]); // 802FB780
  c->r[29]=0u+0x80610000u; // 802FB784
  c->r[8]=0u+0x80610000u; // 802FB788
  c->r[12]=c->r[29]+0x00000BC8u; // 802FB78C
  c->r[6]=0u+0x00010000u; // 802FB790
  W16(c->r[12]+0x00000008u,c->r[30]); // 802FB794
  c->r[10]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802FB798
  c->r[28]=0u+0x00000000u; // 802FB79C
  c->r[9]=0u+0x000000FFu; // 802FB7A0
  c->r[7]=c->r[8]+0x00000BD8u; // 802FB7A4
  c->r[5]=0u+0x0000007Fu; // 802FB7A8
  c->r[4]=0u+0x0000003Fu; // 802FB7AC
  c->r[3]=0u+0x0000001Fu; // 802FB7B0
  c->r[6]=c->r[6]+0xFFFFEB00u; // 802FB7B4
  c->r[0]=0u+0x00000001u; // 802FB7B8
  W32(c->r[29]+0x00000BC8u,c->r[28]); // 802FB7BC
  W16(c->r[12]+0x0000000Au,c->r[11]); // 802FB7C0
  W16(c->r[12]+0x0000000Cu,c->r[30]); // 802FB7C4
  W32(c->r[12]+0x00000004u,c->r[10]); // 802FB7C8
  W8(c->r[8]+0x00000BD8u,c->r[9]); // 802FB7CC
  W8(c->r[7]+0x00000001u,c->r[9]); // 802FB7D0
  W8(c->r[7]+0x00000002u,c->r[9]); // 802FB7D4
  W8(c->r[7]+0x00000003u,c->r[9]); // 802FB7D8
  W16(c->r[7]+0x00000004u,c->r[6]); // 802FB7DC
  W16(c->r[7]+0x00000006u,c->r[5]); // 802FB7E0
  W16(c->r[7]+0x00000008u,c->r[4]); // 802FB7E4
  W16(c->r[7]+0x0000000Au,c->r[3]); // 802FB7E8
  W16(c->r[7]+0x0000000Cu,c->r[5]); // 802FB7EC
  W16(c->r[7]+0x0000000Eu,c->r[4]); // 802FB7F0
  W16(c->r[7]+0x00000010u,c->r[3]); // 802FB7F4
  W32(c->r[13]+0xFFFFA5C8u,c->r[0]); // 802FB7F8
L_802FB7FC:;
  c->lr=0x802FB800u; f_801CF9E0(c); // 802FB7FC
  cmps(c,0,(int32_t)c->r[3],0); // 802FB800
  c->r[29]=c->r[3]|c->r[3]; // 802FB804
  if (!crb(c,2)) { goto L_802FB8A0; } // 802FB808
  cmps(c,0,(int32_t)c->r[31],0); // 802FB80C
  if (!crb(c,2)) { goto L_802FB86C; } // 802FB810
  c->lr=0x802FB818u; f_801CFB94(c); // 802FB814
  cmps(c,0,(int32_t)c->r[3],2); // 802FB818
  if (crb(c,2)) { goto L_802FB864; } // 802FB81C
  if (!crb(c,0)) { goto L_802FB834; } // 802FB820
  cmps(c,0,(int32_t)c->r[3],0); // 802FB824
  if (crb(c,2)) { goto L_802FB840; } // 802FB828
  if (!crb(c,0)) { goto L_802FB84C; } // 802FB82C
  goto L_802FB86C; // 802FB830
L_802FB834:;
  cmps(c,0,(int32_t)c->r[3],5); // 802FB834
  if (crb(c,2)) { goto L_802FB858; } // 802FB838
  goto L_802FB86C; // 802FB83C
L_802FB840:;
  c->r[31]=0u+0x804B0000u; // 802FB840
  c->r[31]=c->r[31]+0x00007B70u; // 802FB844
  goto L_802FB86C; // 802FB848
L_802FB84C:;
  c->r[31]=0u+0x804B0000u; // 802FB84C
  c->r[31]=c->r[31]+0x00007C60u; // 802FB850
  goto L_802FB86C; // 802FB854
L_802FB858:;
  c->r[31]=0u+0x804B0000u; // 802FB858
  c->r[31]=c->r[31]+0x00007C9Cu; // 802FB85C
  goto L_802FB86C; // 802FB860
L_802FB864:;
  c->r[31]=0u+0x804B0000u; // 802FB864
  c->r[31]=c->r[31]+0x00007BE8u; // 802FB868
L_802FB86C:;
  c->lr=0x802FB870u; f_801BA218(c); // 802FB86C
  c->r[4]=R16(c->r[31]+0x00000004u); // 802FB870
  c->r[0]=R16(c->r[31]+0x00000008u); // 802FB874
  c->r[4]=c->r[4]+0x0000000Fu; // 802FB878
  c->r[4]=rotl(c->r[4],0)&0x0000FFF0u; // 802FB87C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 802FB880
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802FB884
  c->r[0]=c->r[3]-c->r[0]; // 802FB888
  c->r[3]=c->r[31]|c->r[31]; // 802FB88C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802FB890
  c->lr=0x802FB898u; f_801CED78(c); // 802FB894
  c->r[3]=c->r[29]|c->r[29]; // 802FB898
  c->lr=0x802FB8A0u; f_801CF974(c); // 802FB89C
L_802FB8A0:;
  c->r[3]=0u+0x00000000u; // 802FB8A0
  c->lr=0x802FB8A8u; f_801CF9E8(c); // 802FB8A4
  c->lr=0x802FB8ACu; f_801CF860(c); // 802FB8A8
  c->lr=0x802FB8B0u; f_801BE760(c); // 802FB8AC
  c->r[28]=c->r[3]|c->r[3]; // 802FB8B0
  c->lr=0x802FB8B8u; f_801CFA60(c); // 802FB8B4
  c->r[30]=c->r[3]|c->r[3]; // 802FB8B8
L_802FB8BC:;
  c->lr=0x802FB8C0u; f_801CFA60(c); // 802FB8BC
  cmpu(c,0,c->r[30],c->r[3]); // 802FB8C0
  if (crb(c,2)) { IRQCHK(c); goto L_802FB8BC; } // 802FB8C4
  c->r[3]=c->r[28]|c->r[28]; // 802FB8C8
  c->lr=0x802FB8D0u; f_801BE774(c); // 802FB8CC
  cmps(c,0,(int32_t)c->r[31],0); // 802FB8D0
  if (crb(c,2)) { goto L_802FB910; } // 802FB8D4
  c->r[6]=R16(c->r[31]+0x00000004u); // 802FB8D8
  c->r[5]=0u+0x80610000u; // 802FB8DC
  c->r[7]=R16(c->r[31]+0x00000008u); // 802FB8E0
  c->r[4]=c->r[5]+0x00000BC8u; // 802FB8E4
  c->r[0]=c->r[6]+0x0000000Fu; // 802FB8E8
  c->r[3]=rotl(c->r[0],0)&0x0000FFF0u; // 802FB8EC
  W32(c->r[5]+0x00000BC8u,c->r[29]); // 802FB8F0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[7]); // 802FB8F4
  W16(c->r[4]+0x00000008u,c->r[6]); // 802FB8F8
  W16(c->r[4]+0x0000000Au,c->r[7]); // 802FB8FC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802FB900
  W16(c->r[4]+0x0000000Cu,c->r[3]); // 802FB904
  W32(c->r[4]+0x00000004u,c->r[0]); // 802FB908
  goto L_802FB918; // 802FB90C
L_802FB910:;
  c->r[3]=0u+0x80610000u; // 802FB910
  W32(c->r[3]+0x00000BC8u,c->r[29]); // 802FB914
L_802FB918:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FB918
  c->r[3]=c->r[29]|c->r[29]; // 802FB91C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FB920
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FB924
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FB928
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FB92C
  c->lr=c->r[0]; // 802FB930
  c->r[1]=c->r[1]+0x00000020u; // 802FB934
  return; // 802FB938
}

// fn_802FB93C
void f_802FB93C(Ctx* __restrict c) {
  trace_call(0x802FB93Cu);
  c->r[3]=R32(c->r[13]+0xFFFFA5D4u); // 802FB93C
  c->r[0]=0u-c->r[3]; // 802FB940
  c->r[0]=c->r[0]|c->r[3]; // 802FB944
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802FB948
  return; // 802FB94C
}

// fn_802FB950
void f_802FB950(Ctx* __restrict c) {
  trace_call(0x802FB950u);
  c->r[3]=R8(c->r[3]+0x00000000u); // 802FB950
  return; // 802FB954
}

// GetCharOnDvd___Q24nw4r2dbFPCUc
void f_802FB958(Ctx* __restrict c) {
  trace_call(0x802FB958u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FB958
  c->r[0]=c->lr; // 802FB95C
  c->r[5]=rotl(c->r[3],0)&0x7FFFFFFFu; // 802FB960
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FB964
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FB968
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FB96C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FB970
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FB974
  c->r[0]=R32(c->r[13]+0xFFFFA5D0u); // 802FB978
  c->r[3]=R32(c->r[13]+0xFFFF8C28u); // 802FB97C
  cmpu(c,0,c->r[5],c->r[0]); // 802FB980
  c->r[29]=c->r[5]-c->r[3]; // 802FB984
  if (crb(c,0)) { goto L_802FB994; } // 802FB988
  c->r[3]=0u+0x00000000u; // 802FB98C
  goto L_802FBA3C; // 802FB990
L_802FB994:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FB994
  if (crb(c,0)) { goto L_802FB9AC; } // 802FB998
  cmps(c,0,(int32_t)c->r[29],0); // 802FB99C
  if (crb(c,0)) { goto L_802FB9AC; } // 802FB9A0
  cmps(c,0,(int32_t)c->r[29],512); // 802FB9A4
  if (crb(c,0)) { goto L_802FBA30; } // 802FB9A8
L_802FB9AC:;
  c->r[4]=rotl(c->r[5],0)&0xFFFFFFE0u; // 802FB9AC
  c->r[0]=R32(c->r[13]+0xFFFFA5D0u); // 802FB9B0
  c->r[3]=c->r[4]+0x00000200u; // 802FB9B4
  W32(c->r[13]+0xFFFF8C28u,c->r[4]); // 802FB9B8
  cmpu(c,0,c->r[3],c->r[0]); // 802FB9BC
  c->r[29]=c->r[5]-c->r[4]; // 802FB9C0
  c->r[31]=0u+0x00000200u; // 802FB9C4
  if (crb(c,0)) { goto L_802FB9D8; } // 802FB9C8
  c->r[3]=c->r[0]-c->r[4]; // 802FB9CC
  c->r[0]=c->r[3]+0x0000001Fu; // 802FB9D0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802FB9D4
L_802FB9D8:;
  c->lr=0x802FB9DCu; f_801BE760(c); // 802FB9D8
  c->r[4]=0u+0x80610000u; // 802FB9DC
  c->r[6]=R32(c->r[13]+0xFFFF8C28u); // 802FB9E0
  c->r[30]=0u+0x80610000u; // 802FB9E4
  c->r[28]=c->r[3]|c->r[3]; // 802FB9E8
  c->r[5]=c->r[31]|c->r[31]; // 802FB9EC
  c->r[4]=c->r[4]+0x00000C00u; // 802FB9F0
  c->r[3]=c->r[30]+0x00000E00u; // 802FB9F4
  c->r[7]=0u+0x00000000u; // 802FB9F8
  c->r[8]=0u+0x00000002u; // 802FB9FC
  c->lr=0x802FBA04u; f_801C6C34(c); // 802FBA00
  c->r[31]=c->r[3]|c->r[3]; // 802FBA04
L_802FBA08:;
  c->r[3]=c->r[30]+0x00000E00u; // 802FBA08
  c->lr=0x802FBA10u; f_801CAA48(c); // 802FBA0C
  cmps(c,0,(int32_t)c->r[3],0); // 802FBA10
  if (!crb(c,2)) { IRQCHK(c); goto L_802FBA08; } // 802FBA14
  c->r[3]=c->r[28]|c->r[28]; // 802FBA18
  c->lr=0x802FBA20u; f_801BE774(c); // 802FBA1C
  cmps(c,0,(int32_t)c->r[31],0); // 802FBA20
  if (crb(c,1)) { goto L_802FBA30; } // 802FBA24
  c->r[3]=0u+0x00000000u; // 802FBA28
  goto L_802FBA3C; // 802FBA2C
L_802FBA30:;
  c->r[3]=0u+0x80610000u; // 802FBA30
  c->r[3]=c->r[3]+0x00000C00u; // 802FBA34
  c->r[3]=R8(c->r[3]+c->r[29]); // 802FBA38
L_802FBA3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FBA3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FBA40
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FBA44
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FBA48
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FBA4C
  c->lr=c->r[0]; // 802FBA50
  c->r[1]=c->r[1]+0x00000020u; // 802FBA54
  return; // 802FBA58
}

// SearchParam___Q24nw4r2dbFPUcUlUc
void f_802FBA5C(Ctx* __restrict c) {
  trace_call(0x802FBA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FBA5C
  c->r[0]=c->lr; // 802FBA60
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FBA64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FBA68
  c->r[31]=0u+0x00000000u; // 802FBA6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FBA70
  c->r[30]=c->r[5]|c->r[5]; // 802FBA74
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FBA78
  c->r[29]=c->r[4]|c->r[4]; // 802FBA7C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FBA80
  c->r[28]=c->r[3]|c->r[3]; // 802FBA84
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBA88
  cmps(c,0,(int32_t)c->r[0],0); // 802FBA8C
  if (!crb(c,2)) { goto L_802FBAB0; } // 802FBA90
  c->r[3]=0u+0x804D0000u; // 802FBA94
  c->r[5]=0u+0x804D0000u; // 802FBA98
  c->r[3]=c->r[3]+0xFFFF85D8u; // 802FBA9C
  c->r[4]=0u+0x000001B0u; // 802FBAA0
  c->r[5]=c->r[5]+0xFFFF870Cu; // 802FBAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBAA8
  c->lr=0x802FBAB0u; f_802FA328(c); // 802FBAAC
L_802FBAB0:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FBAB0
  if (!crb(c,2)) { goto L_802FBAC0; } // 802FBAB4
  c->r[3]=0u+0x00000000u; // 802FBAB8
  goto L_802FBB28; // 802FBABC
L_802FBAC0:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBAC0
  c->r[3]=c->r[28]|c->r[28]; // 802FBAC4
  c->ctr=c->r[12]; // 802FBAC8
  if (true) { c->lr=0x802FBAD0u; dispatch(c,c->ctr); } // 802FBACC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 802FBAD0
  if (crb(c,2)) { goto L_802FBAE0; } // 802FBAD4
  cmps(c,0,(int32_t)c->r[0],10); // 802FBAD8
  if (!crb(c,2)) { goto L_802FBAE8; } // 802FBADC
L_802FBAE0:;
  c->r[3]=0u+0x00000000u; // 802FBAE0
  goto L_802FBB28; // 802FBAE4
L_802FBAE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FBAE8
  if (crb(c,2)) { goto L_802FBB00; } // 802FBAEC
  cmpu(c,0,c->r[0],c->r[30]); // 802FBAF0
  if (!crb(c,2)) { goto L_802FBB20; } // 802FBAF4
  c->r[31]=0u+0x00000000u; // 802FBAF8
  goto L_802FBB20; // 802FBAFC
L_802FBB00:;
  cmpu(c,0,c->r[0],c->r[30]); // 802FBB00
  if (crb(c,2)) { goto L_802FBB20; } // 802FBB04
  cmps(c,0,(int32_t)c->r[29],0); // 802FBB08
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 802FBB0C
  if (!crb(c,2)) { goto L_802FBB1C; } // 802FBB10
  c->r[3]=c->r[28]|c->r[28]; // 802FBB14
  goto L_802FBB28; // 802FBB18
L_802FBB1C:;
  c->r[31]=0u+0x00000001u; // 802FBB1C
L_802FBB20:;
  c->r[28]=c->r[28]+0x00000001u; // 802FBB20
  IRQCHK(c); goto L_802FBAC0; // 802FBB24
L_802FBB28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FBB28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FBB2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FBB30
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FBB34
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FBB38
  c->lr=c->r[0]; // 802FBB3C
  c->r[1]=c->r[1]+0x00000020u; // 802FBB40
  return; // 802FBB44
}

// XStrToU32___Q24nw4r2dbFPCUc
void f_802FBB48(Ctx* __restrict c) {
  trace_call(0x802FBB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FBB48
  c->r[0]=c->lr; // 802FBB4C
  cmps(c,0,(int32_t)c->r[3],0); // 802FBB50
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FBB54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FBB58
  c->r[31]=0u+0x804D0000u; // 802FBB5C
  c->r[31]=c->r[31]+0xFFFF85D8u; // 802FBB60
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FBB64
  c->r[30]=0u+0x00000000u; // 802FBB68
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FBB6C
  c->r[29]=c->r[3]|c->r[3]; // 802FBB70
  if (!crb(c,2)) { goto L_802FBB8C; } // 802FBB74
  c->r[3]=c->r[31]+0x00000000u; // 802FBB78
  c->r[5]=c->r[31]+0x00000164u; // 802FBB7C
  c->r[4]=0u+0x000001E6u; // 802FBB80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBB84
  c->lr=0x802FBB8Cu; f_802FA328(c); // 802FBB88
L_802FBB8C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBB8C
  cmps(c,0,(int32_t)c->r[0],0); // 802FBB90
  if (!crb(c,2)) { goto L_802FBBAC; } // 802FBB94
  c->r[3]=c->r[31]+0x00000000u; // 802FBB98
  c->r[5]=c->r[31]+0x00000134u; // 802FBB9C
  c->r[4]=0u+0x000001E7u; // 802FBBA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBBA4
  c->lr=0x802FBBACu; f_802FA328(c); // 802FBBA8
L_802FBBAC:;
  c->r[31]=0u+0x10000000u; // 802FBBAC
L_802FBBB0:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBBB0
  c->r[3]=c->r[29]|c->r[29]; // 802FBBB4
  c->ctr=c->r[12]; // 802FBBB8
  if (true) { c->lr=0x802FBBC0u; dispatch(c,c->ctr); } // 802FBBBC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 802FBBC0
  cmps(c,0,(int32_t)c->r[4],48); // 802FBBC4
  if (crb(c,0)) { goto L_802FBBDC; } // 802FBBC8
  cmps(c,0,(int32_t)c->r[4],57); // 802FBBCC
  if (crb(c,1)) { goto L_802FBBDC; } // 802FBBD0
  c->r[3]=c->r[4]+0xFFFFFFD0u; // 802FBBD4
  goto L_802FBC1C; // 802FBBD8
L_802FBBDC:;
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 802FBBDC
  cmps(c,0,(int32_t)c->r[4],97); // 802FBBE0
  if (crb(c,0)) { goto L_802FBBF8; } // 802FBBE4
  cmps(c,0,(int32_t)c->r[4],122); // 802FBBE8
  if (crb(c,1)) { goto L_802FBBF8; } // 802FBBEC
  c->r[3]=c->r[4]+0xFFFFFFA9u; // 802FBBF0
  goto L_802FBC1C; // 802FBBF4
L_802FBBF8:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 802FBBF8
  cmps(c,0,(int32_t)c->r[3],65); // 802FBBFC
  if (crb(c,0)) { goto L_802FBC14; } // 802FBC00
  cmps(c,0,(int32_t)c->r[3],90); // 802FBC04
  if (crb(c,1)) { goto L_802FBC14; } // 802FBC08
  c->r[3]=c->r[3]+0xFFFFFFC9u; // 802FBC0C
  goto L_802FBC1C; // 802FBC10
L_802FBC14:;
  c->r[3]=c->r[30]|c->r[30]; // 802FBC14
  goto L_802FBC3C; // 802FBC18
L_802FBC1C:;
  cmpu(c,0,c->r[30],c->r[31]); // 802FBC1C
  if (crb(c,0)) { goto L_802FBC2C; } // 802FBC20
  c->r[3]=0u+0x00000000u; // 802FBC24
  goto L_802FBC3C; // 802FBC28
L_802FBC2C:;
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 802FBC2C
  c->r[29]=c->r[29]+0x00000001u; // 802FBC30
  c->r[30]=c->r[3]+c->r[0]; // 802FBC34
  IRQCHK(c); goto L_802FBBB0; // 802FBC38
L_802FBC3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FBC3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FBC40
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FBC44
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FBC48
  c->lr=c->r[0]; // 802FBC4C
  c->r[1]=c->r[1]+0x00000020u; // 802FBC50
  return; // 802FBC54
}

// fn_802FBC58
void f_802FBC58(Ctx* __restrict c) {
  trace_call(0x802FBC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FBC58
  c->r[0]=c->lr; // 802FBC5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FBC60
  c->r[11]=c->r[1]+0x00000020u; // 802FBC64
  c->lr=0x802FBC6Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FBC68
  cmps(c,0,(int32_t)c->r[3],0); // 802FBC6C
  c->r[31]=0u+0x804D0000u; // 802FBC70
  c->r[26]=c->r[3]|c->r[3]; // 802FBC74
  c->r[27]=c->r[4]|c->r[4]; // 802FBC78
  c->r[28]=c->r[5]|c->r[5]; // 802FBC7C
  c->r[29]=c->r[6]|c->r[6]; // 802FBC80
  c->r[31]=c->r[31]+0xFFFF85D8u; // 802FBC84
  c->r[30]=0u+0x00000000u; // 802FBC88
  if (!crb(c,2)) { goto L_802FBCA4; } // 802FBC8C
  c->r[3]=c->r[31]+0x00000000u; // 802FBC90
  c->r[5]=c->r[31]+0x0000018Cu; // 802FBC94
  c->r[4]=0u+0x00000220u; // 802FBC98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBC9C
  c->lr=0x802FBCA4u; f_802FA328(c); // 802FBCA0
L_802FBCA4:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FBCA4
  if (!crb(c,2)) { goto L_802FBCC0; } // 802FBCA8
  c->r[3]=c->r[31]+0x00000000u; // 802FBCAC
  c->r[5]=c->r[31]+0x00000164u; // 802FBCB0
  c->r[4]=0u+0x00000221u; // 802FBCB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBCB8
  c->lr=0x802FBCC0u; f_802FA328(c); // 802FBCBC
L_802FBCC0:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBCC0
  cmps(c,0,(int32_t)c->r[0],0); // 802FBCC4
  if (!crb(c,2)) { goto L_802FBCE0; } // 802FBCC8
  c->r[3]=c->r[31]+0x00000000u; // 802FBCCC
  c->r[5]=c->r[31]+0x00000134u; // 802FBCD0
  c->r[4]=0u+0x00000222u; // 802FBCD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBCD8
  c->lr=0x802FBCE0u; f_802FA328(c); // 802FBCDC
L_802FBCE0:;
  c->r[31]=c->r[28]+0xFFFFFFFFu; // 802FBCE0
L_802FBCE4:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBCE4
  c->r[3]=c->r[26]|c->r[26]; // 802FBCE8
  c->ctr=c->r[12]; // 802FBCEC
  c->r[26]=c->r[26]+0x00000001u; // 802FBCF0
  if (true) { c->lr=0x802FBCF8u; dispatch(c,c->ctr); } // 802FBCF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FBCF8
  cmpu(c,0,c->r[0],c->r[29]); // 802FBCFC
  if (crb(c,2)) { goto L_802FBD14; } // 802FBD00
  cmps(c,0,(int32_t)c->r[0],0); // 802FBD04
  if (crb(c,2)) { goto L_802FBD14; } // 802FBD08
  cmps(c,0,(int32_t)c->r[0],10); // 802FBD0C
  if (!crb(c,2)) { goto L_802FBD24; } // 802FBD10
L_802FBD14:;
  c->r[0]=0u+0x00000000u; // 802FBD14
  c->r[3]=c->r[30]|c->r[30]; // 802FBD18
  W8(c->r[27]+0x00000000u,c->r[0]); // 802FBD1C
  goto L_802FBD44; // 802FBD20
L_802FBD24:;
  c->r[30]=c->r[30]+0x00000001u; // 802FBD24
  W8(c->r[27]+0x00000000u,c->r[3]); // 802FBD28
  cmpu(c,0,c->r[30],c->r[31]); // 802FBD2C
  c->r[27]=c->r[27]+0x00000001u; // 802FBD30
  if (crb(c,0)) { IRQCHK(c); goto L_802FBCE4; } // 802FBD34
  c->r[0]=0u+0x00000000u; // 802FBD38
  c->r[3]=c->r[30]|c->r[30]; // 802FBD3C
  W8(c->r[27]+0x00000000u,c->r[0]); // 802FBD40
L_802FBD44:;
  c->r[11]=c->r[1]+0x00000020u; // 802FBD44
  c->lr=0x802FBD4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FBD48
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FBD4C
  c->lr=c->r[0]; // 802FBD50
  c->r[1]=c->r[1]+0x00000020u; // 802FBD54
  return; // 802FBD58
}

// fn_802FBD5C
void f_802FBD5C(Ctx* __restrict c) {
  trace_call(0x802FBD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FBD5C
  c->r[0]=c->lr; // 802FBD60
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FBD64
  c->r[11]=c->r[1]+0x00000030u; // 802FBD68
  c->lr=0x802FBD70u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FBD6C
  cmps(c,0,(int32_t)c->r[6],0); // 802FBD70
  c->r[31]=0u+0x804D0000u; // 802FBD74
  c->r[24]=c->r[3]|c->r[3]; // 802FBD78
  c->r[23]=c->r[4]|c->r[4]; // 802FBD7C
  c->r[25]=c->r[5]|c->r[5]; // 802FBD80
  c->r[26]=c->r[6]|c->r[6]; // 802FBD84
  c->r[27]=c->r[7]|c->r[7]; // 802FBD88
  c->r[31]=c->r[31]+0xFFFF85D8u; // 802FBD8C
  c->r[30]=0u+0x00000000u; // 802FBD90
  if (!crb(c,2)) { goto L_802FBDAC; } // 802FBD94
  c->r[3]=c->r[31]+0x00000000u; // 802FBD98
  c->r[5]=c->r[31]+0x000001B4u; // 802FBD9C
  c->r[4]=0u+0x0000025Au; // 802FBDA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBDA4
  c->lr=0x802FBDACu; f_802FA328(c); // 802FBDA8
L_802FBDAC:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FBDAC
  if (!crb(c,2)) { goto L_802FBDC8; } // 802FBDB0
  c->r[3]=c->r[31]+0x00000000u; // 802FBDB4
  c->r[5]=c->r[31]+0x000001E0u; // 802FBDB8
  c->r[4]=0u+0x0000025Bu; // 802FBDBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBDC0
  c->lr=0x802FBDC8u; f_802FA328(c); // 802FBDC4
L_802FBDC8:;
  cmps(c,0,(int32_t)c->r[23],0); // 802FBDC8
  if (crb(c,2)) { goto L_802FBDD8; } // 802FBDCC
  c->r[30]=R32(c->r[23]+0x00000010u); // 802FBDD0
  c->r[29]=R32(c->r[23]+0x0000000Cu); // 802FBDD4
L_802FBDD8:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBDD8
  c->r[28]=0u+0x00000000u; // 802FBDDC
  cmps(c,0,(int32_t)c->r[0],0); // 802FBDE0
  if (!crb(c,2)) { goto L_802FBDFC; } // 802FBDE4
  c->r[3]=c->r[31]+0x00000000u; // 802FBDE8
  c->r[5]=c->r[31]+0x00000134u; // 802FBDEC
  c->r[4]=0u+0x0000018Du; // 802FBDF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBDF4
  c->lr=0x802FBDFCu; f_802FA328(c); // 802FBDF8
L_802FBDFC:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBDFC
  c->r[23]=0u+0x00000001u; // 802FBE00
  cmps(c,0,(int32_t)c->r[0],0); // 802FBE04
  if (!crb(c,2)) { goto L_802FBE20; } // 802FBE08
  c->r[3]=c->r[31]+0x00000000u; // 802FBE0C
  c->r[5]=c->r[31]+0x00000134u; // 802FBE10
  c->r[4]=0u+0x00000169u; // 802FBE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBE18
  c->lr=0x802FBE20u; f_802FA328(c); // 802FBE1C
L_802FBE20:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FBE20
  if (!crb(c,2)) { goto L_802FBE54; } // 802FBE24
  c->r[24]=0u+0x00000000u; // 802FBE28
  goto L_802FBE70; // 802FBE2C
  goto L_802FBE54; // 802FBE30
L_802FBE34:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FBE34
  cmps(c,0,(int32_t)c->r[0],10); // 802FBE38
  if (!crb(c,2)) { goto L_802FBE50; } // 802FBE3C
  c->r[23]=addc(c,c->r[23],0xFFFFFFFFu,0); cr0(c,c->r[23]); // 802FBE40
  if (crb(c,1)) { goto L_802FBE50; } // 802FBE44
  c->r[24]=c->r[24]+0x00000001u; // 802FBE48
  goto L_802FBE70; // 802FBE4C
L_802FBE50:;
  c->r[24]=c->r[24]+0x00000001u; // 802FBE50
L_802FBE54:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBE54
  c->r[3]=c->r[24]|c->r[24]; // 802FBE58
  c->ctr=c->r[12]; // 802FBE5C
  if (true) { c->lr=0x802FBE64u; dispatch(c,c->ctr); } // 802FBE60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 802FBE64
  if (!crb(c,2)) { IRQCHK(c); goto L_802FBE34; } // 802FBE68
  c->r[24]=0u+0x00000000u; // 802FBE6C
L_802FBE70:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FBE70
  if (!crb(c,2)) { goto L_802FBE80; } // 802FBE74
  c->r[24]=0u+0x00000000u; // 802FBE78
  goto L_802FBE9C; // 802FBE7C
L_802FBE80:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBE80
  c->r[3]=c->r[24]|c->r[24]; // 802FBE84
  c->ctr=c->r[12]; // 802FBE88
  if (true) { c->lr=0x802FBE90u; dispatch(c,c->ctr); } // 802FBE8C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FBE90
  cmps(c,0,(int32_t)c->r[0],46); // 802FBE94
  if (!crb(c,2)) { IRQCHK(c); goto L_802FBDFC; } // 802FBE98
L_802FBE9C:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBE9C
  c->r[23]=0u+0x00000003u; // 802FBEA0
  cmps(c,0,(int32_t)c->r[0],0); // 802FBEA4
  if (!crb(c,2)) { goto L_802FBEC0; } // 802FBEA8
  c->r[3]=c->r[31]+0x00000000u; // 802FBEAC
  c->r[5]=c->r[31]+0x00000134u; // 802FBEB0
  c->r[4]=0u+0x00000169u; // 802FBEB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBEB8
  c->lr=0x802FBEC0u; f_802FA328(c); // 802FBEBC
L_802FBEC0:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FBEC0
  if (!crb(c,2)) { goto L_802FBEF4; } // 802FBEC4
  c->r[24]=0u+0x00000000u; // 802FBEC8
  goto L_802FBF10; // 802FBECC
  goto L_802FBEF4; // 802FBED0
L_802FBED4:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FBED4
  cmps(c,0,(int32_t)c->r[0],10); // 802FBED8
  if (!crb(c,2)) { goto L_802FBEF0; } // 802FBEDC
  c->r[23]=addc(c,c->r[23],0xFFFFFFFFu,0); cr0(c,c->r[23]); // 802FBEE0
  if (crb(c,1)) { goto L_802FBEF0; } // 802FBEE4
  c->r[24]=c->r[24]+0x00000001u; // 802FBEE8
  goto L_802FBF10; // 802FBEEC
L_802FBEF0:;
  c->r[24]=c->r[24]+0x00000001u; // 802FBEF0
L_802FBEF4:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBEF4
  c->r[3]=c->r[24]|c->r[24]; // 802FBEF8
  c->ctr=c->r[12]; // 802FBEFC
  if (true) { c->lr=0x802FBF04u; dispatch(c,c->ctr); } // 802FBF00
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 802FBF04
  if (!crb(c,2)) { IRQCHK(c); goto L_802FBED4; } // 802FBF08
  c->r[24]=0u+0x00000000u; // 802FBF0C
L_802FBF10:;
  cmps(c,0,(int32_t)c->r[30],0); // 802FBF10
  if (crb(c,2)) { goto L_802FBF34; } // 802FBF14
  c->r[28]=R32(c->r[30]+0x00000000u); // 802FBF18
  cmpu(c,0,c->r[25],c->r[28]); // 802FBF1C
  if (crb(c,0)) { goto L_802FC074; } // 802FBF20
  c->r[0]=R32(c->r[30]+0x00000004u); // 802FBF24
  c->r[0]=c->r[28]+c->r[0]; // 802FBF28
  cmpu(c,0,c->r[25],c->r[0]); // 802FBF2C
  if (!crb(c,0)) { goto L_802FC074; } // 802FBF30
L_802FBF34:;
  c->r[0]=R32(c->r[13]+0xFFFFA5D8u); // 802FBF34
  c->r[23]=0u+0x00000001u; // 802FBF38
  cmps(c,0,(int32_t)c->r[0],0); // 802FBF3C
  if (!crb(c,2)) { goto L_802FBF58; } // 802FBF40
  c->r[3]=c->r[31]+0x00000000u; // 802FBF44
  c->r[5]=c->r[31]+0x00000134u; // 802FBF48
  c->r[4]=0u+0x00000169u; // 802FBF4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FBF50
  c->lr=0x802FBF58u; f_802FA328(c); // 802FBF54
L_802FBF58:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FBF58
  if (!crb(c,2)) { goto L_802FBF8C; } // 802FBF5C
  c->r[24]=0u+0x00000000u; // 802FBF60
  goto L_802FBFA8; // 802FBF64
  goto L_802FBF8C; // 802FBF68
L_802FBF6C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FBF6C
  cmps(c,0,(int32_t)c->r[0],10); // 802FBF70
  if (!crb(c,2)) { goto L_802FBF88; } // 802FBF74
  c->r[23]=addc(c,c->r[23],0xFFFFFFFFu,0); cr0(c,c->r[23]); // 802FBF78
  if (crb(c,1)) { goto L_802FBF88; } // 802FBF7C
  c->r[24]=c->r[24]+0x00000001u; // 802FBF80
  goto L_802FBFA8; // 802FBF84
L_802FBF88:;
  c->r[24]=c->r[24]+0x00000001u; // 802FBF88
L_802FBF8C:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FBF8C
  c->r[3]=c->r[24]|c->r[24]; // 802FBF90
  c->ctr=c->r[12]; // 802FBF94
  if (true) { c->lr=0x802FBF9Cu; dispatch(c,c->ctr); } // 802FBF98
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 802FBF9C
  if (!crb(c,2)) { IRQCHK(c); goto L_802FBF6C; } // 802FBFA0
  c->r[24]=0u+0x00000000u; // 802FBFA4
L_802FBFA8:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FBFA8
  if (!crb(c,2)) { goto L_802FBFB8; } // 802FBFAC
  c->r[3]=0u+0x00000000u; // 802FBFB0
  goto L_802FC094; // 802FBFB4
L_802FBFB8:;
  c->r[3]=c->r[24]|c->r[24]; // 802FBFB8
  c->r[4]=0u+0x00000001u; // 802FBFBC
  c->r[5]=0u+0x00000020u; // 802FBFC0
  c->lr=0x802FBFC8u; f_802FBA5C(c); // 802FBFC4
  cmps(c,0,(int32_t)c->r[3],0); // 802FBFC8
  if (crb(c,2)) { goto L_802FC074; } // 802FBFCC
  c->lr=0x802FBFD4u; f_802FBB48(c); // 802FBFD0
  c->r[23]=c->r[3]|c->r[3]; // 802FBFD4
  c->r[3]=c->r[24]|c->r[24]; // 802FBFD8
  c->r[4]=0u+0x00000002u; // 802FBFDC
  c->r[5]=0u+0x00000020u; // 802FBFE0
  c->lr=0x802FBFE8u; f_802FBA5C(c); // 802FBFE4
  cmps(c,0,(int32_t)c->r[3],0); // 802FBFE8
  if (crb(c,2)) { goto L_802FC074; } // 802FBFEC
  c->lr=0x802FBFF4u; f_802FBB48(c); // 802FBFF0
  cmps(c,0,(int32_t)c->r[3],0); // 802FBFF4
  if (crb(c,2)) { IRQCHK(c); goto L_802FBF34; } // 802FBFF8
  c->r[0]=c->r[3]+c->r[28]; // 802FBFFC
  cmpu(c,0,c->r[25],c->r[0]); // 802FC000
  if (crb(c,0)) { IRQCHK(c); goto L_802FBF34; } // 802FC004
  c->r[0]=c->r[0]+c->r[23]; // 802FC008
  cmpu(c,0,c->r[0],c->r[25]); // 802FC00C
  if (!crb(c,1)) { IRQCHK(c); goto L_802FBF34; } // 802FC010
  c->r[3]=c->r[24]|c->r[24]; // 802FC014
  c->r[4]=0u+0x00000005u; // 802FC018
  c->r[5]=0u+0x00000020u; // 802FC01C
  c->lr=0x802FC024u; f_802FBA5C(c); // 802FC020
  cmps(c,0,(int32_t)c->r[3],0); // 802FC024
  c->r[23]=c->r[3]|c->r[3]; // 802FC028
  if (!crb(c,2)) { goto L_802FC040; } // 802FC02C
  c->r[0]=0u+0x00000000u; // 802FC030
  c->r[3]=0u+0x00000001u; // 802FC034
  W8(c->r[26]+0x00000000u,c->r[0]); // 802FC038
  goto L_802FC094; // 802FC03C
L_802FC040:;
  c->r[12]=R32(c->r[13]+0xFFFFA5D8u); // 802FC040
  c->ctr=c->r[12]; // 802FC044
  if (true) { c->lr=0x802FC04Cu; dispatch(c,c->ctr); } // 802FC048
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802FC04C
  cmps(c,0,(int32_t)c->r[0],46); // 802FC050
  if (crb(c,2)) { IRQCHK(c); goto L_802FBF34; } // 802FC054
  c->r[3]=c->r[23]|c->r[23]; // 802FC058
  c->r[4]=c->r[26]|c->r[26]; // 802FC05C
  c->r[5]=c->r[27]|c->r[27]; // 802FC060
  c->r[6]=0u+0x00000020u; // 802FC064
  c->lr=0x802FC06Cu; f_802FBC58(c); // 802FC068
  c->r[3]=0u+0x00000001u; // 802FC06C
  goto L_802FC094; // 802FC070
L_802FC074:;
  cmps(c,0,(int32_t)c->r[30],0); // 802FC074
  if (crb(c,2)) { IRQCHK(c); goto L_802FBDD8; } // 802FC078
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 802FC07C
  if (!crb(c,2)) { goto L_802FC08C; } // 802FC080
  c->r[3]=0u+0x00000000u; // 802FC084
  goto L_802FC094; // 802FC088
L_802FC08C:;
  c->r[30]=c->r[30]+0x00000008u; // 802FC08C
  IRQCHK(c); goto L_802FBDD8; // 802FC090
L_802FC094:;
  c->r[11]=c->r[1]+0x00000030u; // 802FC094
  c->lr=0x802FC09Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FC098
  c->r[0]=R32(c->r[1]+0x00000034u); // 802FC09C
  c->lr=c->r[0]; // 802FC0A0
  c->r[1]=c->r[1]+0x00000030u; // 802FC0A4
  return; // 802FC0A8
}

// fn_802FC0AC
void f_802FC0AC(Ctx* __restrict c) {
  trace_call(0x802FC0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC0AC
  c->r[0]=c->lr; // 802FC0B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FC0B4
  c->r[11]=c->r[1]+0x00000020u; // 802FC0B8
  c->lr=0x802FC0C0u; f_801E795C(c); // 802FC0BC
  cmps(c,0,(int32_t)c->r[3],0); // 802FC0C0
  c->r[31]=0u+0x804D0000u; // 802FC0C4
  c->r[27]=c->r[3]|c->r[3]; // 802FC0C8
  c->r[28]=c->r[4]|c->r[4]; // 802FC0CC
  c->r[29]=c->r[5]|c->r[5]; // 802FC0D0
  c->r[30]=c->r[6]|c->r[6]; // 802FC0D4
  c->r[31]=c->r[31]+0xFFFF85D8u; // 802FC0D8
  if (!crb(c,2)) { goto L_802FC0F4; } // 802FC0DC
  c->r[3]=c->r[31]+0x00000000u; // 802FC0E0
  c->r[5]=c->r[31]+0x0000006Cu; // 802FC0E4
  c->r[4]=0u+0x000002D3u; // 802FC0E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FC0EC
  c->lr=0x802FC0F4u; f_802FA328(c); // 802FC0F0
L_802FC0F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FC0F4
  if (!crb(c,2)) { goto L_802FC110; } // 802FC0F8
  c->r[3]=c->r[31]+0x00000000u; // 802FC0FC
  c->r[5]=c->r[31]+0x000001B4u; // 802FC100
  c->r[4]=0u+0x000002D4u; // 802FC104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FC108
  c->lr=0x802FC110u; f_802FA328(c); // 802FC10C
L_802FC110:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802FC110
  cmps(c,0,(int32_t)c->r[0],0); // 802FC114
  if (crb(c,2)) { goto L_802FC144; } // 802FC118
  c->r[3]=0u+0x80300000u; // 802FC11C
  c->r[5]=c->r[28]|c->r[28]; // 802FC120
  c->r[3]=c->r[3]+0xFFFFB950u; // 802FC124
  c->r[6]=c->r[29]|c->r[29]; // 802FC128
  W32(c->r[13]+0xFFFFA5D8u,c->r[3]); // 802FC12C
  c->r[7]=c->r[30]|c->r[30]; // 802FC130
  c->r[3]=R32(c->r[27]+0x00000000u); // 802FC134
  c->r[4]=R32(c->r[27]+0x00000004u); // 802FC138
  c->lr=0x802FC140u; f_802FBD5C(c); // 802FC13C
  goto L_802FC1B4; // 802FC140
L_802FC144:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 802FC144
  cmps(c,0,(int32_t)c->r[3],0); // 802FC148
  if (crb(c,0)) { goto L_802FC1A8; } // 802FC14C
  c->r[31]=0u+0x80610000u; // 802FC150
  c->r[4]=c->r[31]+0x00000E00u; // 802FC154
  c->lr=0x802FC15Cu; f_801C673C(c); // 802FC158
  cmps(c,0,(int32_t)c->r[3],0); // 802FC15C
  if (crb(c,2)) { goto L_802FC1A8; } // 802FC160
  c->r[31]=c->r[31]+0x00000E00u; // 802FC164
  c->r[3]=0u+0x80300000u; // 802FC168
  c->r[0]=R32(c->r[31]+0x00000034u); // 802FC16C
  c->r[3]=c->r[3]+0xFFFFB958u; // 802FC170
  W32(c->r[13]+0xFFFFA5D8u,c->r[3]); // 802FC174
  c->r[5]=c->r[28]|c->r[28]; // 802FC178
  c->r[6]=c->r[29]|c->r[29]; // 802FC17C
  c->r[7]=c->r[30]|c->r[30]; // 802FC180
  W32(c->r[13]+0xFFFFA5D0u,c->r[0]); // 802FC184
  c->r[3]=0u+0x80000000u; // 802FC188
  c->r[4]=R32(c->r[27]+0x00000004u); // 802FC18C
  c->lr=0x802FC194u; f_802FBD5C(c); // 802FC190
  c->r[30]=c->r[3]|c->r[3]; // 802FC194
  c->r[3]=c->r[31]|c->r[31]; // 802FC198
  c->lr=0x802FC1A0u; f_801C6A50(c); // 802FC19C
  c->r[3]=c->r[30]|c->r[30]; // 802FC1A0
  goto L_802FC1B4; // 802FC1A4
L_802FC1A8:;
  c->r[0]=0u+0x00000000u; // 802FC1A8
  c->r[3]=0u+0x00000000u; // 802FC1AC
  W8(c->r[29]+0x00000000u,c->r[0]); // 802FC1B0
L_802FC1B4:;
  c->r[11]=c->r[1]+0x00000020u; // 802FC1B4
  c->lr=0x802FC1BCu; f_801E79A8(c); // 802FC1B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FC1BC
  c->lr=c->r[0]; // 802FC1C0
  c->r[1]=c->r[1]+0x00000020u; // 802FC1C4
  return; // 802FC1C8
}

// fn_802FC1CC
void f_802FC1CC(Ctx* __restrict c) {
  trace_call(0x802FC1CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC1CC
  c->r[0]=c->lr; // 802FC1D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FC1D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FC1D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FC1DC
  c->r[30]=c->r[5]|c->r[5]; // 802FC1E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FC1E4
  c->r[29]=c->r[4]|c->r[4]; // 802FC1E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FC1EC
  c->r[28]=c->r[3]|c->r[3]; // 802FC1F0
  c->r[31]=R32(c->r[13]+0xFFFFA5D4u); // 802FC1F4
  goto L_802FC224; // 802FC1F8
L_802FC1FC:;
  c->r[3]=c->r[31]|c->r[31]; // 802FC1FC
  c->r[4]=c->r[28]|c->r[28]; // 802FC200
  c->r[5]=c->r[29]|c->r[29]; // 802FC204
  c->r[6]=c->r[30]|c->r[30]; // 802FC208
  c->lr=0x802FC210u; f_802FC0AC(c); // 802FC20C
  cmps(c,0,(int32_t)c->r[3],0); // 802FC210
  if (crb(c,2)) { goto L_802FC220; } // 802FC214
  c->r[3]=0u+0x00000001u; // 802FC218
  goto L_802FC230; // 802FC21C
L_802FC220:;
  c->r[31]=R32(c->r[31]+0x0000000Cu); // 802FC220
L_802FC224:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FC224
  if (!crb(c,2)) { IRQCHK(c); goto L_802FC1FC; } // 802FC228
  c->r[3]=0u+0x00000000u; // 802FC22C
L_802FC230:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FC230
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FC234
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FC238
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FC23C
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FC240
  c->lr=c->r[0]; // 802FC244
  c->r[1]=c->r[1]+0x00000020u; // 802FC248
  return; // 802FC24C
}

// fn_802FC250
void f_802FC250(Ctx* __restrict c) {
  trace_call(0x802FC250u);
  cmpu(c,0,c->r[4],0x00000001u); // 802FC250
  if (crb(c,2)) { goto L_802FC268; } // 802FC254
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC258
  fcmp(c,0,c->f[1],c->f[0]); // 802FC25C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802FC260
  if (!crb(c,2)) { goto L_802FC270; } // 802FC264
L_802FC268:;
  c->r[3]=R16(c->r[3]+0x00000004u); // 802FC268
  return; // 802FC26C
L_802FC270:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802FC270
  c->r[5]=c->r[3]+c->r[0]; // 802FC274
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC278
  fcmp(c,0,c->f[1],c->f[0]); // 802FC27C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FC280
  if (!crb(c,2)) { goto L_802FC290; } // 802FC284
  c->r[3]=R16(c->r[5]+0xFFFFFFFCu); // 802FC288
  return; // 802FC28C
L_802FC290:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 802FC290
  c->r[5]=0u+0x00000000u; // 802FC294
  goto L_802FC2D4; // 802FC298
L_802FC29C:;
  c->r[4]=c->r[5]+c->r[6]; // 802FC29C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802FC2A0
  c->r[4]=c->r[0]+c->r[4]; // 802FC2A4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFF8u; // 802FC2A8
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC2AC
  c->r[4]=sraw(c,c->r[4],1); // 802FC2B0
  fcmp(c,0,c->f[1],c->f[0]); // 802FC2B4
  c->r[0]=c->cr; // 802FC2B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802FC2BC
  if (crb(c,2)) { goto L_802FC2C8; } // 802FC2C0
  c->r[6]=c->r[4]|c->r[4]; // 802FC2C4
L_802FC2C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FC2C8
  if (!crb(c,2)) { goto L_802FC2D4; } // 802FC2CC
  c->r[5]=c->r[4]|c->r[4]; // 802FC2D0
L_802FC2D4:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802FC2D4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802FC2D8
  if (crb(c,2)) { goto L_802FC2E8; } // 802FC2DC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 802FC2E0
  if (!crb(c,2)) { IRQCHK(c); goto L_802FC29C; } // 802FC2E4
L_802FC2E8:;
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802FC2E8
  {uint32_t ea=c->r[2]+0xFFFFD030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC2EC
  {uint32_t ea=c->r[3]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 802FC2F0
  c->r[0]=0u+0x00000000u; // 802FC2F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802FC2F8
  fcmp(c,0,c->f[0],c->f[1]); // 802FC2FC
  if (!crb(c,0)) { goto L_802FC314; } // 802FC300
  {uint32_t ea=c->r[2]+0xFFFFD034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC304
  fcmp(c,0,c->f[1],c->f[0]); // 802FC308
  if (!crb(c,0)) { goto L_802FC314; } // 802FC30C
  c->r[0]=0u+0x00000001u; // 802FC310
L_802FC314:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FC314
  if (crb(c,2)) { goto L_802FC328; } // 802FC318
  c->r[3]=c->r[3]+c->r[4]; // 802FC31C
  c->r[3]=R16(c->r[3]+0x00000004u); // 802FC320
  return; // 802FC324
L_802FC328:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 802FC328
  c->r[3]=c->r[3]+c->r[0]; // 802FC32C
  c->r[3]=R16(c->r[3]+0x00000004u); // 802FC330
  return; // 802FC334
}

// fn_802FC338
void f_802FC338(Ctx* __restrict c) {
  trace_call(0x802FC338u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC338
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 802FC33C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 802FC340
  cmpu(c,0,c->r[4],0x00000001u); // 802FC344
  if (crb(c,2)) { goto L_802FC35C; } // 802FC348
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC34C
  fcmp(c,0,c->f[1],c->f[0]); // 802FC350
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802FC354
  if (!crb(c,2)) { goto L_802FC364; } // 802FC358
L_802FC35C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC35C
  goto L_802FC4E4; // 802FC360
L_802FC364:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802FC364
  c->r[5]=c->r[3]+c->r[0]; // 802FC368
  {uint32_t ea=c->r[5]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC36C
  fcmp(c,0,c->f[1],c->f[0]); // 802FC370
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FC374
  if (!crb(c,2)) { goto L_802FC384; } // 802FC378
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC37C
  goto L_802FC4E4; // 802FC380
L_802FC384:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 802FC384
  c->r[6]=0u+0x00000000u; // 802FC388
  goto L_802FC3CC; // 802FC38C
L_802FC390:;
  c->r[5]=c->r[6]+c->r[7]; // 802FC390
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 802FC394
  c->r[0]=c->r[0]+c->r[5]; // 802FC398
  c->r[5]=sraw(c,c->r[0],1); // 802FC39C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 802FC3A0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC3A4
  fcmp(c,0,c->f[1],c->f[0]); // 802FC3A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802FC3AC
  c->r[0]=c->cr; // 802FC3B0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 802FC3B4
  if (crb(c,2)) { goto L_802FC3C0; } // 802FC3B8
  c->r[7]=c->r[5]|c->r[5]; // 802FC3BC
L_802FC3C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FC3C0
  if (!crb(c,2)) { goto L_802FC3CC; } // 802FC3C4
  c->r[6]=c->r[5]|c->r[5]; // 802FC3C8
L_802FC3CC:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 802FC3CC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802FC3D0
  if (crb(c,2)) { goto L_802FC3E0; } // 802FC3D4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 802FC3D8
  if (!crb(c,2)) { IRQCHK(c); goto L_802FC390; } // 802FC3DC
L_802FC3E0:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 802FC3E0
  {uint32_t ea=c->r[2]+0xFFFFD030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC3E4
  c->r[0]=0u+0x00000000u; // 802FC3E8
  {uint32_t ea=c->r[3]+c->r[5]; c->f[2]=c->ps1[2]=RF32(ea);} // 802FC3EC
  c->r[8]=c->r[3]+c->r[5]; // 802FC3F0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 802FC3F4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 802FC3F8
  c->r[5]=c->r[3]+c->r[5]; // 802FC3FC
  fcmp(c,0,c->f[0],c->f[2]); // 802FC400
  if (!crb(c,0)) { goto L_802FC418; } // 802FC404
  {uint32_t ea=c->r[2]+0xFFFFD034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC408
  fcmp(c,0,c->f[2],c->f[0]); // 802FC40C
  if (!crb(c,0)) { goto L_802FC418; } // 802FC410
  c->r[0]=0u+0x00000001u; // 802FC414
L_802FC418:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FC418
  if (crb(c,2)) { goto L_802FC458; } // 802FC41C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802FC420
  cmpu(c,0,c->r[7],c->r[0]); // 802FC424
  if (!crb(c,0)) { goto L_802FC450; } // 802FC428
  c->r[0]=c->r[7]+0x00000001u; // 802FC42C
  {uint32_t ea=c->r[8]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC430
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802FC434
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC438
  fcmp(c,0,c->f[1],c->f[0]); // 802FC43C
  if (!crb(c,2)) { goto L_802FC450; } // 802FC440
  c->r[3]=c->r[3]+c->r[0]; // 802FC444
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC448
  goto L_802FC4E4; // 802FC44C
L_802FC450:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC450
  goto L_802FC4E4; // 802FC454
L_802FC458:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FC458
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC45C
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 802FC460
  {uint32_t ea=c->r[2]+0xFFFFD038u; c->f[6]=c->ps1[6]=RF32(ea);} // 802FC464
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802FC468
  {uint32_t ea=c->r[2]+0xFFFFD03Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802FC46C
  {uint32_t ea=c->r[2]+0xFFFFD040u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FC470
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 802FC474
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[0]); // 802FC478
  {uint32_t ea=c->r[2]+0xFFFFD044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC47C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802FC480
  {uint32_t ea=c->r[8]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 802FC484
  {uint32_t ea=c->r[5]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802FC488
  {uint32_t ea=c->r[8]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802FC48C
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[2]); // 802FC490
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[5]); // 802FC494
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 802FC498
  c->f[13]=c->ps1[13]=S(c->f[7]*c->f[2]); // 802FC49C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 802FC4A0
  c->f[31]=c->ps1[31]=S(c->f[13]*c->f[5]); // 802FC4A4
  c->f[3]=c->ps1[3]=S(c->f[13]-c->f[3]); // 802FC4A8
  c->f[5]=c->ps1[5]=S(c->f[13]-c->f[12]); // 802FC4AC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[31]); // 802FC4B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 802FC4B4
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[3]); // 802FC4B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802FC4BC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 802FC4C0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[3]); // 802FC4C4
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 802FC4C8
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 802FC4CC
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[5]); // 802FC4D0
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 802FC4D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802FC4D8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802FC4DC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 802FC4E0
L_802FC4E4:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 802FC4E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 802FC4E8
  c->r[1]=c->r[1]+0x00000020u; // 802FC4EC
  return; // 802FC4F0
}

// fn_802FC4F4
void f_802FC4F4(Ctx* __restrict c) {
  trace_call(0x802FC4F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC4F4
  c->r[0]=c->lr; // 802FC4F8
  cmps(c,0,(int32_t)c->r[3],0); // 802FC4FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FC500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FC504
  c->r[31]=c->r[3]|c->r[3]; // 802FC508
  if (crb(c,2)) { goto L_802FC51C; } // 802FC50C
  cmps(c,0,(int32_t)c->r[4],0); // 802FC510
  if (!crb(c,1)) { goto L_802FC51C; } // 802FC514
  c->lr=0x802FC51Cu; f_8001AAC0(c); // 802FC518
L_802FC51C:;
  c->r[3]=c->r[31]|c->r[31]; // 802FC51C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FC520
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FC524
  c->lr=c->r[0]; // 802FC528
  c->r[1]=c->r[1]+0x00000010u; // 802FC52C
  return; // 802FC530
}

// GetFrameSize__Q36nw4hbm3lyt13AnimTransformCFv
void f_802FC534(Ctx* __restrict c) {
  trace_call(0x802FC534u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802FC534
  c->r[3]=R16(c->r[3]+0x00000008u); // 802FC538
  return; // 802FC53C
}

// fn_802FC540
void f_802FC540(Ctx* __restrict c) {
  trace_call(0x802FC540u);
  {uint32_t ea=c->r[2]+0xFFFFD048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FC540
  c->r[4]=0u+0x804D0000u; // 802FC544
  c->r[0]=0u+0x00000000u; // 802FC548
  c->r[4]=c->r[4]+0xFFFF8AF0u; // 802FC54C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802FC550
  W32(c->r[3]+0x00000008u,c->r[0]); // 802FC554
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802FC558
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 802FC55C
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FC560
  W32(c->r[3]+0x00000014u,c->r[0]); // 802FC564
  W32(c->r[3]+0x00000018u,c->r[0]); // 802FC568
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 802FC56C
  return; // 802FC570
}

// fn_802FC574
void f_802FC574(Ctx* __restrict c) {
  trace_call(0x802FC574u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC574
  c->r[0]=c->lr; // 802FC578
  cmps(c,0,(int32_t)c->r[3],0); // 802FC57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FC580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FC584
  c->r[31]=c->r[4]|c->r[4]; // 802FC588
  W32(c->r[1]+0x00000008u,c->r[30]); // 802FC58C
  c->r[30]=c->r[3]|c->r[3]; // 802FC590
  if (crb(c,2)) { goto L_802FC5DC; } // 802FC594
  c->r[4]=R32(c->r[3]+0x00000018u); // 802FC598
  c->r[5]=0u+0x804D0000u; // 802FC59C
  c->r[5]=c->r[5]+0xFFFF8AF0u; // 802FC5A0
  cmps(c,0,(int32_t)c->r[4],0); // 802FC5A4
  W32(c->r[3]+0x00000000u,c->r[5]); // 802FC5A8
  if (crb(c,2)) { goto L_802FC5B8; } // 802FC5AC
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FC5B0
  c->lr=0x802FC5B8u; f_80201DA0(c); // 802FC5B4
L_802FC5B8:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 802FC5B8
  cmps(c,0,(int32_t)c->r[4],0); // 802FC5BC
  if (crb(c,2)) { goto L_802FC5CC; } // 802FC5C0
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FC5C4
  c->lr=0x802FC5CCu; f_80201DA0(c); // 802FC5C8
L_802FC5CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FC5CC
  if (!crb(c,1)) { goto L_802FC5DC; } // 802FC5D0
  c->r[3]=c->r[30]|c->r[30]; // 802FC5D4
  c->lr=0x802FC5DCu; f_8001AAC0(c); // 802FC5D8
L_802FC5DC:;
  c->r[3]=c->r[30]|c->r[30]; // 802FC5DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FC5E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802FC5E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FC5E8
  c->lr=c->r[0]; // 802FC5EC
  c->r[1]=c->r[1]+0x00000010u; // 802FC5F0
  return; // 802FC5F4
}

// fn_802FC5F8
void f_802FC5F8(Ctx* __restrict c) {
  trace_call(0x802FC5F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC5F8
  c->r[0]=c->lr; // 802FC5FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FC600
  c->r[11]=c->r[1]+0x00000030u; // 802FC604
  c->lr=0x802FC60Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FC608
  c->r[0]=R32(c->r[3]+0x00000014u); // 802FC60C
  c->r[29]=0u+0x804D0000u; // 802FC610
  c->r[30]=c->r[3]|c->r[3]; // 802FC614
  c->r[31]=c->r[4]|c->r[4]; // 802FC618
  cmps(c,0,(int32_t)c->r[0],0); // 802FC61C
  c->r[24]=c->r[5]|c->r[5]; // 802FC620
  c->r[29]=c->r[29]+0xFFFF87E0u; // 802FC624
  if (crb(c,2)) { goto L_802FC640; } // 802FC628
  c->r[3]=c->r[29]+0x00000000u; // 802FC62C
  c->r[5]=c->r[29]+0x00000014u; // 802FC630
  c->r[4]=0u+0x000001A6u; // 802FC634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FC638
  c->lr=0x802FC640u; f_802FA328(c); // 802FC63C
L_802FC640:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 802FC640
  cmps(c,0,(int32_t)c->r[0],0); // 802FC644
  if (crb(c,2)) { goto L_802FC660; } // 802FC648
  c->r[3]=c->r[29]+0x00000000u; // 802FC64C
  c->r[5]=c->r[29]+0x00000040u; // 802FC650
  c->r[4]=0u+0x000001A7u; // 802FC654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FC658
  c->lr=0x802FC660u; f_802FA328(c); // 802FC65C
L_802FC660:;
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 802FC660
  c->r[0]=0u+0x00000000u; // 802FC664
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 802FC668
  cmps(c,0,(int32_t)c->r[4],0); // 802FC66C
  W32(c->r[30]+0x00000014u,c->r[0]); // 802FC670
  if (crb(c,2)) { goto L_802FC6F4; } // 802FC674
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FC678
  c->r[4]=rotl(c->r[4],2)&0x0003FFFCu; // 802FC67C
  c->lr=0x802FC684u; f_80201D90(c); // 802FC680
  cmps(c,0,(int32_t)c->r[3],0); // 802FC684
  W32(c->r[30]+0x00000014u,c->r[3]); // 802FC688
  if (crb(c,2)) { goto L_802FC6F4; } // 802FC68C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802FC690
  c->r[25]=0u+0x00000000u; // 802FC694
  c->r[26]=0u+0x00000000u; // 802FC698
  c->r[29]=0u+0x74690000u; // 802FC69C
  c->r[28]=c->r[3]+0x00000014u; // 802FC6A0
  c->r[27]=c->r[28]|c->r[28]; // 802FC6A4
  goto L_802FC6E4; // 802FC6A8
L_802FC6AC:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 802FC6AC
  c->r[3]=c->r[24]|c->r[24]; // 802FC6B0
  c->r[0]=R32(c->r[27]+0x00000000u); // 802FC6B4
  c->r[4]=c->r[29]+0x00006D67u; // 802FC6B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FC6BC
  c->r[6]=0u+0x00000000u; // 802FC6C0
  c->r[5]=c->r[28]+c->r[0]; // 802FC6C4
  c->ctr=c->r[12]; // 802FC6C8
  if (true) { c->lr=0x802FC6D0u; dispatch(c,c->ctr); } // 802FC6CC
  c->r[4]=R32(c->r[30]+0x00000014u); // 802FC6D0
  c->r[27]=c->r[27]+0x00000004u; // 802FC6D4
  c->r[25]=c->r[25]+0x00000001u; // 802FC6D8
  W32(c->r[4]+c->r[26],c->r[3]); // 802FC6DC
  c->r[26]=c->r[26]+0x00000004u; // 802FC6E0
L_802FC6E4:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 802FC6E4
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 802FC6E8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802FC6EC
  if (crb(c,0)) { IRQCHK(c); goto L_802FC6AC; } // 802FC6F0
L_802FC6F4:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 802FC6F4
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FC6F8
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802FC6FC
  c->lr=0x802FC704u; f_80201D90(c); // 802FC700
  cmps(c,0,(int32_t)c->r[3],0); // 802FC704
  W32(c->r[30]+0x00000018u,c->r[3]); // 802FC708
  if (crb(c,2)) { goto L_802FC768; } // 802FC70C
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 802FC710
  c->r[4]=0u+0x00000000u; // 802FC714
  W16(c->r[30]+0x0000001Cu,c->r[0]); // 802FC718
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802FC71C
  c->lr=0x802FC724u; f_8000443C(c); // 802FC720
  c->r[5]=0u+0x00000000u; // 802FC724
  c->r[4]=0u+0x00000000u; // 802FC728
  goto L_802FC758; // 802FC72C
L_802FC730:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 802FC730
  c->r[0]=rotl(c->r[5],4)&0x000FFFF0u; // 802FC734
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 802FC738
  if (crb(c,2)) { goto L_802FC754; } // 802FC73C
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FC740
  W32(c->r[3]+0x00000004u,c->r[4]); // 802FC744
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 802FC748
  W32(c->r[3]+0x00000008u,c->r[4]); // 802FC74C
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 802FC750
L_802FC754:;
  c->r[5]=c->r[5]+0x00000001u; // 802FC754
L_802FC758:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 802FC758
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 802FC75C
  cmpu(c,0,c->r[3],c->r[0]); // 802FC760
  if (crb(c,0)) { IRQCHK(c); goto L_802FC730; } // 802FC764
L_802FC768:;
  c->r[11]=c->r[1]+0x00000030u; // 802FC768
  c->lr=0x802FC770u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FC76C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802FC770
  c->lr=c->r[0]; // 802FC774
  c->r[1]=c->r[1]+0x00000030u; // 802FC778
  return; // 802FC77C
}

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt4Paneb
void f_802FC780(Ctx* __restrict c) {
  trace_call(0x802FC780u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC780
  c->r[0]=c->lr; // 802FC784
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FC788
  c->r[11]=c->r[1]+0x00000020u; // 802FC78C
  c->lr=0x802FC794u; f_801E795C(c); // 802FC790
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 802FC794
  c->r[27]=c->r[3]|c->r[3]; // 802FC798
  c->r[28]=c->r[4]|c->r[4]; // 802FC79C
  c->r[29]=c->r[5]|c->r[5]; // 802FC7A0
  c->r[0]=R32(c->r[6]+0x00000010u); // 802FC7A4
  c->r[30]=0u+0x00000000u; // 802FC7A8
  c->r[31]=c->r[6]+c->r[0]; // 802FC7AC
  goto L_802FC854; // 802FC7B0
L_802FC7B4:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 802FC7B4
  c->r[0]=R32(c->r[31]+c->r[0]); // 802FC7B8
  c->r[4]=c->r[4]+c->r[0]; // 802FC7BC
  c->r[0]=R8(c->r[4]+0x00000015u); // 802FC7C0
  cmps(c,0,(int32_t)c->r[0],0); // 802FC7C4
  if (!crb(c,2)) { goto L_802FC810; } // 802FC7C8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802FC7CC
  c->r[3]=c->r[28]|c->r[28]; // 802FC7D0
  c->r[5]=c->r[29]|c->r[29]; // 802FC7D4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802FC7D8
  c->ctr=c->r[12]; // 802FC7DC
  if (true) { c->lr=0x802FC7E4u; dispatch(c,c->ctr); } // 802FC7E0
  cmps(c,0,(int32_t)c->r[3],0); // 802FC7E4
  if (crb(c,2)) { goto L_802FC850; } // 802FC7E8
  c->r[0]=R32(c->r[27]+0x00000018u); // 802FC7EC
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 802FC7F0
  c->r[4]=c->r[0]+c->r[5]; // 802FC7F4
  W32(c->r[4]+0x00000008u,c->r[27]); // 802FC7F8
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 802FC7FC
  c->r[0]=R32(c->r[27]+0x00000018u); // 802FC800
  c->r[4]=c->r[0]+c->r[5]; // 802FC804
  c->lr=0x802FC80Cu; f_80304414(c); // 802FC808
  goto L_802FC850; // 802FC80C
L_802FC810:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802FC810
  c->r[3]=c->r[28]|c->r[28]; // 802FC814
  c->r[5]=c->r[29]|c->r[29]; // 802FC818
  c->r[12]=R32(c->r[12]+0x00000040u); // 802FC81C
  c->ctr=c->r[12]; // 802FC820
  if (true) { c->lr=0x802FC828u; dispatch(c,c->ctr); } // 802FC824
  cmps(c,0,(int32_t)c->r[3],0); // 802FC828
  if (crb(c,2)) { goto L_802FC850; } // 802FC82C
  c->r[0]=R32(c->r[27]+0x00000018u); // 802FC830
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 802FC834
  c->r[4]=c->r[0]+c->r[5]; // 802FC838
  W32(c->r[4]+0x00000008u,c->r[27]); // 802FC83C
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 802FC840
  c->r[0]=R32(c->r[27]+0x00000018u); // 802FC844
  c->r[4]=c->r[0]+c->r[5]; // 802FC848
  c->lr=0x802FC850u; f_80303280(c); // 802FC84C
L_802FC850:;
  c->r[30]=c->r[30]+0x00000001u; // 802FC850
L_802FC854:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 802FC854
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 802FC858
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 802FC85C
  cmpu(c,0,c->r[3],c->r[0]); // 802FC860
  if (crb(c,0)) { IRQCHK(c); goto L_802FC7B4; } // 802FC864
  c->r[11]=c->r[1]+0x00000020u; // 802FC868
  c->lr=0x802FC870u; f_801E79A8(c); // 802FC86C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FC870
  c->lr=c->r[0]; // 802FC874
  c->r[1]=c->r[1]+0x00000020u; // 802FC878
  return; // 802FC87C
}

// Bind__Q36nw4hbm3lyt18AnimTransformBasicFPQ36nw4hbm3lyt8Material
void f_802FC880(Ctx* __restrict c) {
  trace_call(0x802FC880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC880
  c->r[0]=c->lr; // 802FC884
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FC888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FC88C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FC890
  c->r[30]=0u+0x00000000u; // 802FC894
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FC898
  c->r[29]=c->r[4]|c->r[4]; // 802FC89C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FC8A0
  c->r[28]=c->r[3]|c->r[3]; // 802FC8A4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 802FC8A8
  c->r[0]=R32(c->r[5]+0x00000010u); // 802FC8AC
  c->r[31]=c->r[5]+c->r[0]; // 802FC8B0
  goto L_802FC908; // 802FC8B4
L_802FC8B8:;
  c->r[0]=rotl(c->r[30],2)&0x0003FFFCu; // 802FC8B8
  c->r[0]=R32(c->r[31]+c->r[0]); // 802FC8BC
  c->r[4]=c->r[4]+c->r[0]; // 802FC8C0
  c->r[0]=R8(c->r[4]+0x00000015u); // 802FC8C4
  cmpu(c,0,c->r[0],0x00000001u); // 802FC8C8
  if (!crb(c,2)) { goto L_802FC904; } // 802FC8CC
  c->r[3]=c->r[29]+0x00000004u; // 802FC8D0
  c->lr=0x802FC8D8u; f_802FDA08(c); // 802FC8D4
  cmps(c,0,(int32_t)c->r[3],0); // 802FC8D8
  if (crb(c,2)) { goto L_802FC904; } // 802FC8DC
  c->r[0]=R32(c->r[28]+0x00000018u); // 802FC8E0
  c->r[5]=rotl(c->r[30],4)&0x000FFFF0u; // 802FC8E4
  c->r[3]=c->r[29]|c->r[29]; // 802FC8E8
  c->r[4]=c->r[0]+c->r[5]; // 802FC8EC
  W32(c->r[4]+0x00000008u,c->r[28]); // 802FC8F0
  W16(c->r[4]+0x0000000Cu,c->r[30]); // 802FC8F4
  c->r[0]=R32(c->r[28]+0x00000018u); // 802FC8F8
  c->r[4]=c->r[0]+c->r[5]; // 802FC8FC
  c->lr=0x802FC904u; f_80303280(c); // 802FC900
L_802FC904:;
  c->r[30]=c->r[30]+0x00000001u; // 802FC904
L_802FC908:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 802FC908
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 802FC90C
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 802FC910
  cmpu(c,0,c->r[3],c->r[0]); // 802FC914
  if (crb(c,0)) { IRQCHK(c); goto L_802FC8B8; } // 802FC918
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FC91C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FC920
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FC924
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FC928
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FC92C
  c->lr=c->r[0]; // 802FC930
  c->r[1]=c->r[1]+0x00000020u; // 802FC934
  return; // 802FC938
}

// fn_802FC93C
void f_802FC93C(Ctx* __restrict c) {
  trace_call(0x802FC93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FC93C
  c->r[0]=c->lr; // 802FC940
  W32(c->r[1]+0x00000084u,c->r[0]); // 802FC944
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802FC948
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802FC94C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802FC950
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802FC954
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802FC958
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 802FC95C
  c->r[11]=c->r[1]+0x00000050u; // 802FC960
  c->lr=0x802FC968u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FC964
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 802FC968
  c->r[30]=0u+0x524C0000u; // 802FC96C
  c->r[28]=0u+0x804D0000u; // 802FC970
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802FC974
  c->r[0]=R32(c->r[6]+0x00000010u); // 802FC978
  c->r[20]=c->r[3]|c->r[3]; // 802FC97C
  {uint32_t ea=c->r[2]+0xFFFFD04Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802FC980
  c->r[21]=c->r[5]|c->r[5]; // 802FC984
  c->r[0]=c->r[6]+c->r[0]; // 802FC988
  c->r[28]=c->r[28]+0xFFFF87E0u; // 802FC98C
  c->r[0]=R32(c->r[4]+c->r[0]); // 802FC990
  c->r[29]=c->r[30]+0x00005643u; // 802FC994
  c->r[22]=0u+0x00000000u; // 802FC998
  c->r[31]=0u+0x804D0000u; // 802FC99C
  c->r[26]=c->r[6]+c->r[0]; // 802FC9A0
  c->r[24]=c->r[26]+0x00000018u; // 802FC9A4
  goto L_802FCBE8; // 802FC9A8
L_802FC9AC:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 802FC9AC
  c->r[3]=R32(c->r[26]+c->r[0]); // 802FC9B0
  c->r[25]=c->r[26]+c->r[0]; // 802FC9B4
  c->r[23]=c->r[25]+0x00000008u; // 802FC9B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[29]); // 802FC9BC
  if (crb(c,2)) { goto L_802FCB34; } // 802FC9C0
  if (!crb(c,0)) { goto L_802FC9D8; } // 802FC9C4
  c->r[0]=c->r[30]+0x00005041u; // 802FC9C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FC9CC
  if (crb(c,2)) { goto L_802FC9E8; } // 802FC9D0
  goto L_802FCBE0; // 802FC9D4
L_802FC9D8:;
  c->r[0]=c->r[30]+0x00005649u; // 802FC9D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FC9DC
  if (crb(c,2)) { goto L_802FCA98; } // 802FC9E0
  goto L_802FCBE0; // 802FC9E4
L_802FC9E8:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FC9E8
  c->r[27]=0u+0x00000000u; // 802FC9EC
  goto L_802FCA88; // 802FC9F0
L_802FC9F4:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802FC9F4
  c->r[19]=c->r[25]+c->r[0]; // 802FC9F8
  c->r[0]=R8(c->r[19]+0x00000001u); // 802FC9FC
  cmpu(c,0,c->r[0],0x0000000Au); // 802FCA00
  if (crb(c,0)) { goto L_802FCA1C; } // 802FCA04
  c->r[3]=c->r[28]+0x00000000u; // 802FCA08
  c->r[5]=c->r[28]+0x0000006Cu; // 802FCA0C
  c->r[4]=0u+0x000000C5u; // 802FCA10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCA14
  c->lr=0x802FCA1Cu; f_802FA328(c); // 802FCA18
L_802FCA1C:;
  c->r[0]=R8(c->r[19]+0x00000002u); // 802FCA1C
  cmpu(c,0,c->r[0],0x00000002u); // 802FCA20
  if (crb(c,2)) { goto L_802FCA3C; } // 802FCA24
  c->r[3]=c->r[28]+0x00000000u; // 802FCA28
  c->r[5]=c->r[28]+0x000000B0u; // 802FCA2C
  c->r[4]=0u+0x000000C6u; // 802FCA30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCA34
  c->lr=0x802FCA3Cu; f_802FA328(c); // 802FCA38
L_802FCA3C:;
  c->r[0]=R32(c->r[19]+0x00000008u); // 802FCA3C
  c->f[1]=c->f[29]; // 802FCA40
  c->r[4]=R16(c->r[19]+0x00000004u); // 802FCA44
  c->r[3]=c->r[19]+c->r[0]; // 802FCA48
  c->lr=0x802FCA50u; f_802FC338(c); // 802FCA4C
  c->r[19]=R8(c->r[19]+0x00000001u); // 802FCA50
  c->f[30]=c->f[1]; // 802FCA54
  cmpu(c,0,c->r[19],0x0000000Au); // 802FCA58
  if (crb(c,0)) { goto L_802FCA74; } // 802FCA5C
  c->r[5]=c->r[31]+0xFFFF8B90u; // 802FCA60
  c->r[3]=c->r[13]+0xFFFF8C30u; // 802FCA64
  c->r[4]=0u+0x000000FAu; // 802FCA68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCA6C
  c->lr=0x802FCA74u; f_802FA328(c); // 802FCA70
L_802FCA74:;
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 802FCA74
  c->r[23]=c->r[23]+0x00000004u; // 802FCA78
  c->r[3]=c->r[21]+c->r[0]; // 802FCA7C
  c->r[27]=c->r[27]+0x00000001u; // 802FCA80
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[30]);} // 802FCA84
L_802FCA88:;
  c->r[0]=R8(c->r[25]+0x00000004u); // 802FCA88
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802FCA8C
  if (crb(c,0)) { IRQCHK(c); goto L_802FC9F4; } // 802FCA90
  goto L_802FCBE0; // 802FCA94
L_802FCA98:;
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FCA98
  c->r[27]=0u+0x00000000u; // 802FCA9C
  goto L_802FCB24; // 802FCAA0
L_802FCAA4:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802FCAA4
  c->r[19]=c->r[25]+c->r[0]; // 802FCAA8
  c->r[0]=R8(c->r[19]+0x00000001u); // 802FCAAC
  cmpu(c,0,c->r[0],0x0000000Au); // 802FCAB0
  if (crb(c,0)) { goto L_802FCACC; } // 802FCAB4
  c->r[3]=c->r[28]+0x00000000u; // 802FCAB8
  c->r[5]=c->r[28]+0x0000006Cu; // 802FCABC
  c->r[4]=0u+0x000000D9u; // 802FCAC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCAC4
  c->lr=0x802FCACCu; f_802FA328(c); // 802FCAC8
L_802FCACC:;
  c->r[0]=R8(c->r[19]+0x00000002u); // 802FCACC
  cmpu(c,0,c->r[0],0x00000001u); // 802FCAD0
  if (crb(c,2)) { goto L_802FCAEC; } // 802FCAD4
  c->r[3]=c->r[28]+0x00000000u; // 802FCAD8
  c->r[5]=c->r[28]+0x000000F4u; // 802FCADC
  c->r[4]=0u+0x000000DAu; // 802FCAE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCAE4
  c->lr=0x802FCAECu; f_802FA328(c); // 802FCAE8
L_802FCAEC:;
  c->r[0]=R32(c->r[19]+0x00000008u); // 802FCAEC
  c->f[1]=c->f[29]; // 802FCAF0
  c->r[4]=R16(c->r[19]+0x00000004u); // 802FCAF4
  c->r[3]=c->r[19]+c->r[0]; // 802FCAF8
  c->lr=0x802FCB00u; f_802FC250(c); // 802FCAFC
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 802FCB00
  c->r[0]=R8(c->r[21]+0x000000CFu); // 802FCB04
  c->r[3]=0u-c->r[4]; // 802FCB08
  c->r[23]=c->r[23]+0x00000004u; // 802FCB0C
  c->r[3]=c->r[3]|c->r[4]; // 802FCB10
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802FCB14
  c->r[0]=(rotl(c->r[3],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 802FCB18
  c->r[27]=c->r[27]+0x00000001u; // 802FCB1C
  W8(c->r[21]+0x000000CFu,c->r[0]); // 802FCB20
L_802FCB24:;
  c->r[0]=R8(c->r[25]+0x00000004u); // 802FCB24
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802FCB28
  if (crb(c,0)) { IRQCHK(c); goto L_802FCAA4; } // 802FCB2C
  goto L_802FCBE0; // 802FCB30
L_802FCB34:;
  c->r[0]=R8(c->r[25]+0x00000004u); // 802FCB34
  c->r[27]=0u+0x00000000u; // 802FCB38
  {uint32_t ea=c->r[20]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FCB3C
  cmps(c,0,(int32_t)c->r[0],0); // 802FCB40
  if (!crb(c,1)) { goto L_802FCBE0; } // 802FCB44
  goto L_802FCBD4; // 802FCB48
L_802FCB4C:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802FCB4C
  c->r[19]=c->r[25]+c->r[0]; // 802FCB50
  c->r[0]=R8(c->r[19]+0x00000001u); // 802FCB54
  cmpu(c,0,c->r[0],0x00000011u); // 802FCB58
  if (crb(c,0)) { goto L_802FCB74; } // 802FCB5C
  c->r[3]=c->r[28]+0x00000000u; // 802FCB60
  c->r[5]=c->r[28]+0x00000138u; // 802FCB64
  c->r[4]=0u+0x000000EDu; // 802FCB68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCB6C
  c->lr=0x802FCB74u; f_802FA328(c); // 802FCB70
L_802FCB74:;
  c->r[0]=R8(c->r[19]+0x00000002u); // 802FCB74
  cmpu(c,0,c->r[0],0x00000002u); // 802FCB78
  if (crb(c,2)) { goto L_802FCB94; } // 802FCB7C
  c->r[3]=c->r[28]+0x00000000u; // 802FCB80
  c->r[5]=c->r[28]+0x000000B0u; // 802FCB84
  c->r[4]=0u+0x000000EEu; // 802FCB88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCB8C
  c->lr=0x802FCB94u; f_802FA328(c); // 802FCB90
L_802FCB94:;
  c->r[0]=R32(c->r[19]+0x00000008u); // 802FCB94
  c->f[1]=c->f[29]; // 802FCB98
  c->r[4]=R16(c->r[19]+0x00000004u); // 802FCB9C
  c->r[3]=c->r[19]+c->r[0]; // 802FCBA0
  c->lr=0x802FCBA8u; f_802FC338(c); // 802FCBA4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 802FCBA8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 802FCBAC
  c->r[3]=c->r[21]|c->r[21]; // 802FCBB0
  c->r[12]=R32(c->r[21]+0x00000000u); // 802FCBB4
  c->r[5]=R8(c->r[1]+0x00000008u); // 802FCBB8
  c->r[12]=R32(c->r[12]+0x00000030u); // 802FCBBC
  c->r[4]=R8(c->r[19]+0x00000001u); // 802FCBC0
  c->ctr=c->r[12]; // 802FCBC4
  if (true) { c->lr=0x802FCBCCu; dispatch(c,c->ctr); } // 802FCBC8
  c->r[23]=c->r[23]+0x00000004u; // 802FCBCC
  c->r[27]=c->r[27]+0x00000001u; // 802FCBD0
L_802FCBD4:;
  c->r[0]=R8(c->r[25]+0x00000004u); // 802FCBD4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802FCBD8
  if (crb(c,0)) { IRQCHK(c); goto L_802FCB4C; } // 802FCBDC
L_802FCBE0:;
  c->r[24]=c->r[24]+0x00000004u; // 802FCBE0
  c->r[22]=c->r[22]+0x00000001u; // 802FCBE4
L_802FCBE8:;
  c->r[0]=R8(c->r[26]+0x00000014u); // 802FCBE8
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 802FCBEC
  if (crb(c,0)) { IRQCHK(c); goto L_802FC9AC; } // 802FCBF0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802FCBF4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802FCBF8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802FCBFC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802FCC00
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 802FCC04
  c->r[11]=c->r[1]+0x00000050u; // 802FCC08
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 802FCC0C
  c->lr=0x802FCC14u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FCC10
  c->r[0]=R32(c->r[1]+0x00000084u); // 802FCC14
  c->lr=c->r[0]; // 802FCC18
  c->r[1]=c->r[1]+0x00000080u; // 802FCC1C
  return; // 802FCC20
}

// fn_802FCC24
void f_802FCC24(Ctx* __restrict c) {
  trace_call(0x802FCC24u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FCC24
  c->r[0]=c->lr; // 802FCC28
  W32(c->r[1]+0x00000094u,c->r[0]); // 802FCC2C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802FCC30
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802FCC34
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802FCC38
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802FCC3C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 802FCC40
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 802FCC44
  c->r[11]=c->r[1]+0x00000060u; // 802FCC48
  c->lr=0x802FCC50u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FCC4C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 802FCC50
  c->r[20]=0u+0x524C0000u; // 802FCC54
  c->r[18]=0u+0x804D0000u; // 802FCC58
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802FCC5C
  c->r[0]=R32(c->r[6]+0x00000010u); // 802FCC60
  c->r[25]=c->r[3]|c->r[3]; // 802FCC64
  {uint32_t ea=c->r[2]+0xFFFFD04Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802FCC68
  c->r[26]=c->r[5]|c->r[5]; // 802FCC6C
  c->r[0]=c->r[6]+c->r[0]; // 802FCC70
  c->r[18]=c->r[18]+0xFFFF87E0u; // 802FCC74
  c->r[0]=R32(c->r[4]+c->r[0]); // 802FCC78
  c->r[19]=c->r[20]+0x00005450u; // 802FCC7C
  c->r[27]=0u+0x00000000u; // 802FCC80
  c->r[23]=0u+0x804D0000u; // 802FCC84
  c->r[31]=c->r[6]+c->r[0]; // 802FCC88
  c->r[24]=0u+0x804D0000u; // 802FCC8C
  c->r[29]=c->r[31]+0x00000018u; // 802FCC90
  c->r[21]=0u+0x804D0000u; // 802FCC94
  c->r[22]=0u+0x804D0000u; // 802FCC98
  goto L_802FD074; // 802FCC9C
L_802FCCA0:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802FCCA0
  c->r[3]=R32(c->r[31]+c->r[0]); // 802FCCA4
  c->r[30]=c->r[31]+c->r[0]; // 802FCCA8
  c->r[28]=c->r[30]+0x00000008u; // 802FCCAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[19]); // 802FCCB0
  if (crb(c,2)) { goto L_802FCEB4; } // 802FCCB4
  if (!crb(c,0)) { goto L_802FCCDC; } // 802FCCB8
  c->r[0]=c->r[20]+0x00004D43u; // 802FCCBC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FCCC0
  if (crb(c,2)) { goto L_802FCCEC; } // 802FCCC4
  if (!crb(c,0)) { goto L_802FD06C; } // 802FCCC8
  c->r[0]=c->r[20]+0x0000494Du; // 802FCCCC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FCCD0
  if (crb(c,2)) { goto L_802FCF74; } // 802FCCD4
  goto L_802FD06C; // 802FCCD8
L_802FCCDC:;
  c->r[0]=c->r[20]+0x00005453u; // 802FCCDC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FCCE0
  if (crb(c,2)) { goto L_802FCDB8; } // 802FCCE4
  goto L_802FD06C; // 802FCCE8
L_802FCCEC:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 802FCCEC
  c->r[17]=0u+0x00000000u; // 802FCCF0
  {uint32_t ea=c->r[25]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 802FCCF4
  cmps(c,0,(int32_t)c->r[0],0); // 802FCCF8
  if (!crb(c,1)) { goto L_802FD06C; } // 802FCCFC
  goto L_802FCDA8; // 802FCD00
L_802FCD04:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802FCD04
  c->r[15]=c->r[30]+c->r[0]; // 802FCD08
  c->r[0]=R8(c->r[15]+0x00000001u); // 802FCD0C
  cmpu(c,0,c->r[0],0x00000020u); // 802FCD10
  if (crb(c,0)) { goto L_802FCD2C; } // 802FCD14
  c->r[3]=c->r[18]+0x00000000u; // 802FCD18
  c->r[5]=c->r[18]+0x00000180u; // 802FCD1C
  c->r[4]=0u+0x00000106u; // 802FCD20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCD24
  c->lr=0x802FCD2Cu; f_802FA328(c); // 802FCD28
L_802FCD2C:;
  c->r[0]=R8(c->r[15]+0x00000002u); // 802FCD2C
  cmpu(c,0,c->r[0],0x00000002u); // 802FCD30
  if (crb(c,2)) { goto L_802FCD4C; } // 802FCD34
  c->r[3]=c->r[18]+0x00000000u; // 802FCD38
  c->r[5]=c->r[18]+0x000000B0u; // 802FCD3C
  c->r[4]=0u+0x00000107u; // 802FCD40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCD44
  c->lr=0x802FCD4Cu; f_802FA328(c); // 802FCD48
L_802FCD4C:;
  c->r[0]=R32(c->r[15]+0x00000008u); // 802FCD4C
  c->f[1]=c->f[31]; // 802FCD50
  c->r[4]=R16(c->r[15]+0x00000004u); // 802FCD54
  c->r[3]=c->r[15]+c->r[0]; // 802FCD58
  c->lr=0x802FCD60u; f_802FC338(c); // 802FCD5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 802FCD60
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 802FCD64
  c->r[6]=0u+0xFFFFFC00u; // 802FCD68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 802FCD6C
  cmps(c,0,(int32_t)c->r[0],-1024); // 802FCD70
  if (crb(c,0)) { goto L_802FCD7C; } // 802FCD74
  c->r[6]=c->r[0]|c->r[0]; // 802FCD78
L_802FCD7C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 802FCD7C
  c->r[4]=R8(c->r[15]+0x00000001u); // 802FCD80
  cmps(c,0,(int32_t)c->r[0],1023); // 802FCD84
  c->r[3]=c->r[26]|c->r[26]; // 802FCD88
  c->r[5]=0u+0x000003FFu; // 802FCD8C
  if (crb(c,1)) { goto L_802FCD98; } // 802FCD90
  c->r[5]=c->r[6]|c->r[6]; // 802FCD94
L_802FCD98:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 802FCD98
  c->lr=0x802FCDA0u; f_80301FD0(c); // 802FCD9C
  c->r[28]=c->r[28]+0x00000004u; // 802FCDA0
  c->r[17]=c->r[17]+0x00000001u; // 802FCDA4
L_802FCDA8:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 802FCDA8
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 802FCDAC
  if (crb(c,0)) { IRQCHK(c); goto L_802FCD04; } // 802FCDB0
  goto L_802FD06C; // 802FCDB4
L_802FCDB8:;
  {uint32_t ea=c->r[25]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FCDB8
  c->r[15]=0u+0x00000000u; // 802FCDBC
  goto L_802FCEA4; // 802FCDC0
L_802FCDC4:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802FCDC4
  c->r[17]=c->r[30]+c->r[0]; // 802FCDC8
  c->r[0]=R8(c->r[30]+c->r[0]); // 802FCDCC
  cmpu(c,0,c->r[0],0x0000000Au); // 802FCDD0
  if (crb(c,0)) { goto L_802FCDEC; } // 802FCDD4
  c->r[3]=c->r[18]+0x00000000u; // 802FCDD8
  c->r[5]=c->r[18]+0x000001C8u; // 802FCDDC
  c->r[4]=0u+0x0000011Fu; // 802FCDE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCDE4
  c->lr=0x802FCDECu; f_802FA328(c); // 802FCDE8
L_802FCDEC:;
  c->r[0]=R32(c->r[26]+0x0000004Cu); // 802FCDEC
  c->r[3]=R8(c->r[17]+0x00000000u); // 802FCDF0
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 802FCDF4
  cmpu(c,0,c->r[3],c->r[0]); // 802FCDF8
  if (!crb(c,0)) { goto L_802FCE9C; } // 802FCDFC
  c->r[0]=R8(c->r[17]+0x00000001u); // 802FCE00
  cmpu(c,0,c->r[0],0x00000005u); // 802FCE04
  if (crb(c,0)) { goto L_802FCE20; } // 802FCE08
  c->r[3]=c->r[18]+0x00000000u; // 802FCE0C
  c->r[5]=c->r[18]+0x000001FCu; // 802FCE10
  c->r[4]=0u+0x00000122u; // 802FCE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCE18
  c->lr=0x802FCE20u; f_802FA328(c); // 802FCE1C
L_802FCE20:;
  c->r[0]=R8(c->r[17]+0x00000002u); // 802FCE20
  cmpu(c,0,c->r[0],0x00000002u); // 802FCE24
  if (crb(c,2)) { goto L_802FCE40; } // 802FCE28
  c->r[3]=c->r[18]+0x00000000u; // 802FCE2C
  c->r[5]=c->r[18]+0x000000B0u; // 802FCE30
  c->r[4]=0u+0x00000123u; // 802FCE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCE38
  c->lr=0x802FCE40u; f_802FA328(c); // 802FCE3C
L_802FCE40:;
  c->r[0]=R32(c->r[17]+0x00000008u); // 802FCE40
  c->f[1]=c->f[29]; // 802FCE44
  c->r[4]=R16(c->r[17]+0x00000004u); // 802FCE48
  c->r[3]=c->r[17]+c->r[0]; // 802FCE4C
  c->lr=0x802FCE54u; f_802FC338(c); // 802FCE50
  c->r[0]=R32(c->r[26]+0x00000050u); // 802FCE54
  c->f[31]=c->f[1]; // 802FCE58
  c->r[16]=R8(c->r[17]+0x00000000u); // 802FCE5C
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 802FCE60
  c->r[17]=R8(c->r[17]+0x00000001u); // 802FCE64
  cmpu(c,0,c->r[16],c->r[0]); // 802FCE68
  if (crb(c,0)) { goto L_802FCE84; } // 802FCE6C
  c->r[3]=c->r[21]+0xFFFF8BFCu; // 802FCE70
  c->r[5]=c->r[22]+0xFFFF8BC4u; // 802FCE74
  c->r[4]=0u+0x00000125u; // 802FCE78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCE7C
  c->lr=0x802FCE84u; f_802FA328(c); // 802FCE80
L_802FCE84:;
  c->r[3]=c->r[26]|c->r[26]; // 802FCE84
  c->lr=0x802FCE8Cu; f_80301448(c); // 802FCE88
  c->r[4]=(uint32_t)((int32_t)c->r[16]*(int32_t)20); // 802FCE8C
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 802FCE90
  c->r[3]=c->r[3]+c->r[4]; // 802FCE94
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 802FCE98
L_802FCE9C:;
  c->r[28]=c->r[28]+0x00000004u; // 802FCE9C
  c->r[15]=c->r[15]+0x00000001u; // 802FCEA0
L_802FCEA4:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 802FCEA4
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 802FCEA8
  if (crb(c,0)) { IRQCHK(c); goto L_802FCDC4; } // 802FCEAC
  goto L_802FD06C; // 802FCEB0
L_802FCEB4:;
  c->r[17]=R32(c->r[25]+0x00000014u); // 802FCEB4
  cmps(c,0,(int32_t)c->r[17],0); // 802FCEB8
  if (crb(c,2)) { goto L_802FD06C; } // 802FCEBC
  {uint32_t ea=c->r[25]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FCEC0
  c->r[15]=0u+0x00000000u; // 802FCEC4
  goto L_802FCF64; // 802FCEC8
L_802FCECC:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802FCECC
  c->r[16]=c->r[30]+c->r[0]; // 802FCED0
  c->r[0]=R8(c->r[30]+c->r[0]); // 802FCED4
  cmpu(c,0,c->r[0],0x00000008u); // 802FCED8
  if (crb(c,0)) { goto L_802FCEF4; } // 802FCEDC
  c->r[3]=c->r[18]+0x00000000u; // 802FCEE0
  c->r[5]=c->r[18]+0x00000240u; // 802FCEE4
  c->r[4]=0u+0x00000137u; // 802FCEE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCEEC
  c->lr=0x802FCEF4u; f_802FA328(c); // 802FCEF0
L_802FCEF4:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 802FCEF4
  c->r[3]=R8(c->r[16]+0x00000000u); // 802FCEF8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 802FCEFC
  cmpu(c,0,c->r[3],c->r[0]); // 802FCF00
  if (!crb(c,0)) { goto L_802FCF5C; } // 802FCF04
  c->r[0]=R8(c->r[16]+0x00000002u); // 802FCF08
  cmpu(c,0,c->r[0],0x00000001u); // 802FCF0C
  if (crb(c,2)) { goto L_802FCF28; } // 802FCF10
  c->r[3]=c->r[18]+0x00000000u; // 802FCF14
  c->r[5]=c->r[18]+0x000000F4u; // 802FCF18
  c->r[4]=0u+0x0000013Au; // 802FCF1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCF20
  c->lr=0x802FCF28u; f_802FA328(c); // 802FCF24
L_802FCF28:;
  c->r[0]=R8(c->r[16]+0x00000001u); // 802FCF28
  cmps(c,0,(int32_t)c->r[0],0); // 802FCF2C
  if (!crb(c,2)) { goto L_802FCF5C; } // 802FCF30
  c->r[0]=R32(c->r[16]+0x00000008u); // 802FCF34
  c->f[1]=c->f[29]; // 802FCF38
  c->r[4]=R16(c->r[16]+0x00000004u); // 802FCF3C
  c->r[3]=c->r[16]+c->r[0]; // 802FCF40
  c->lr=0x802FCF48u; f_802FC250(c); // 802FCF44
  c->r[0]=rotl(c->r[3],2)&0x0003FFFCu; // 802FCF48
  c->r[4]=R8(c->r[16]+0x00000000u); // 802FCF4C
  c->r[5]=R32(c->r[17]+c->r[0]); // 802FCF50
  c->r[3]=c->r[26]|c->r[26]; // 802FCF54
  c->lr=0x802FCF5Cu; f_80301E58(c); // 802FCF58
L_802FCF5C:;
  c->r[28]=c->r[28]+0x00000004u; // 802FCF5C
  c->r[15]=c->r[15]+0x00000001u; // 802FCF60
L_802FCF64:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 802FCF64
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 802FCF68
  if (crb(c,0)) { IRQCHK(c); goto L_802FCECC; } // 802FCF6C
  goto L_802FD06C; // 802FCF70
L_802FCF74:;
  {uint32_t ea=c->r[25]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 802FCF74
  c->r[17]=0u+0x00000000u; // 802FCF78
  goto L_802FD060; // 802FCF7C
L_802FCF80:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 802FCF80
  c->r[15]=c->r[30]+c->r[0]; // 802FCF84
  c->r[0]=R8(c->r[30]+c->r[0]); // 802FCF88
  cmpu(c,0,c->r[0],0x00000003u); // 802FCF8C
  if (crb(c,0)) { goto L_802FCFA8; } // 802FCF90
  c->r[3]=c->r[18]+0x00000000u; // 802FCF94
  c->r[5]=c->r[18]+0x00000278u; // 802FCF98
  c->r[4]=0u+0x00000151u; // 802FCF9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCFA0
  c->lr=0x802FCFA8u; f_802FA328(c); // 802FCFA4
L_802FCFA8:;
  c->r[0]=R32(c->r[26]+0x0000004Cu); // 802FCFA8
  c->r[3]=R8(c->r[15]+0x00000000u); // 802FCFAC
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 802FCFB0
  cmpu(c,0,c->r[3],c->r[0]); // 802FCFB4
  if (!crb(c,0)) { goto L_802FD058; } // 802FCFB8
  c->r[0]=R8(c->r[15]+0x00000001u); // 802FCFBC
  cmpu(c,0,c->r[0],0x00000005u); // 802FCFC0
  if (crb(c,0)) { goto L_802FCFDC; } // 802FCFC4
  c->r[3]=c->r[18]+0x00000000u; // 802FCFC8
  c->r[5]=c->r[18]+0x000001FCu; // 802FCFCC
  c->r[4]=0u+0x00000154u; // 802FCFD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCFD4
  c->lr=0x802FCFDCu; f_802FA328(c); // 802FCFD8
L_802FCFDC:;
  c->r[0]=R8(c->r[15]+0x00000002u); // 802FCFDC
  cmpu(c,0,c->r[0],0x00000002u); // 802FCFE0
  if (crb(c,2)) { goto L_802FCFFC; } // 802FCFE4
  c->r[3]=c->r[18]+0x00000000u; // 802FCFE8
  c->r[5]=c->r[18]+0x000000B0u; // 802FCFEC
  c->r[4]=0u+0x00000155u; // 802FCFF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FCFF4
  c->lr=0x802FCFFCu; f_802FA328(c); // 802FCFF8
L_802FCFFC:;
  c->r[0]=R32(c->r[15]+0x00000008u); // 802FCFFC
  c->f[1]=c->f[29]; // 802FD000
  c->r[4]=R16(c->r[15]+0x00000004u); // 802FD004
  c->r[3]=c->r[15]+c->r[0]; // 802FD008
  c->lr=0x802FD010u; f_802FC338(c); // 802FD00C
  c->r[0]=R32(c->r[26]+0x00000050u); // 802FD010
  c->f[31]=c->f[1]; // 802FD014
  c->r[16]=R8(c->r[15]+0x00000000u); // 802FD018
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 802FD01C
  c->r[15]=R8(c->r[15]+0x00000001u); // 802FD020
  cmpu(c,0,c->r[16],c->r[0]); // 802FD024
  if (crb(c,0)) { goto L_802FD040; } // 802FD028
  c->r[3]=c->r[23]+0xFFFF8C40u; // 802FD02C
  c->r[5]=c->r[24]+0xFFFF8C08u; // 802FD030
  c->r[4]=0u+0x00000135u; // 802FD034
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD038
  c->lr=0x802FD040u; f_802FA328(c); // 802FD03C
L_802FD040:;
  c->r[3]=c->r[26]|c->r[26]; // 802FD040
  c->lr=0x802FD048u; f_803015E4(c); // 802FD044
  c->r[4]=(uint32_t)((int32_t)c->r[16]*(int32_t)20); // 802FD048
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802FD04C
  c->r[3]=c->r[3]+c->r[4]; // 802FD050
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 802FD054
L_802FD058:;
  c->r[28]=c->r[28]+0x00000004u; // 802FD058
  c->r[17]=c->r[17]+0x00000001u; // 802FD05C
L_802FD060:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 802FD060
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 802FD064
  if (crb(c,0)) { IRQCHK(c); goto L_802FCF80; } // 802FD068
L_802FD06C:;
  c->r[29]=c->r[29]+0x00000004u; // 802FD06C
  c->r[27]=c->r[27]+0x00000001u; // 802FD070
L_802FD074:;
  c->r[0]=R8(c->r[31]+0x00000014u); // 802FD074
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802FD078
  if (crb(c,0)) { IRQCHK(c); goto L_802FCCA0; } // 802FD07C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 802FD080
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802FD084
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802FD088
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802FD08C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 802FD090
  c->r[11]=c->r[1]+0x00000060u; // 802FD094
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 802FD098
  c->lr=0x802FD0A0u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FD09C
  c->r[0]=R32(c->r[1]+0x00000094u); // 802FD0A0
  c->lr=c->r[0]; // 802FD0A4
  c->r[1]=c->r[1]+0x00000090u; // 802FD0A8
  return; // 802FD0AC
}

// fn_802FD0B0
void f_802FD0B0(Ctx* __restrict c) {
  trace_call(0x802FD0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD0B0
  c->r[0]=c->lr; // 802FD0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FD0B8
  c->r[11]=c->r[1]+0x00000020u; // 802FD0BC
  c->lr=0x802FD0C4u; f_801E795C(c); // 802FD0C0
  cmps(c,0,(int32_t)c->r[3],0); // 802FD0C4
  c->r[29]=0u+0x804D0000u; // 802FD0C8
  c->r[30]=c->r[3]|c->r[3]; // 802FD0CC
  c->r[27]=c->r[4]|c->r[4]; // 802FD0D0
  c->r[29]=c->r[29]+0xFFFF87E0u; // 802FD0D4
  if (!crb(c,2)) { goto L_802FD0F0; } // 802FD0D8
  c->r[3]=c->r[29]+0x00000000u; // 802FD0DC
  c->r[5]=c->r[29]+0x000002B0u; // 802FD0E0
  c->r[4]=0u+0x0000022Fu; // 802FD0E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD0E8
  c->lr=0x802FD0F0u; f_802FA328(c); // 802FD0EC
L_802FD0F0:;
  cmps(c,0,(int32_t)c->r[27],0); // 802FD0F0
  if (!crb(c,2)) { goto L_802FD10C; } // 802FD0F4
  c->r[3]=c->r[29]+0x00000000u; // 802FD0F8
  c->r[5]=c->r[29]+0x000002DCu; // 802FD0FC
  c->r[4]=0u+0x00000230u; // 802FD100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD104
  c->lr=0x802FD10Cu; f_802FA328(c); // 802FD108
L_802FD10C:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 802FD10C
  c->r[31]=c->r[30]+0x00000004u; // 802FD110
  c->r[29]=0u+0x804D0000u; // 802FD114
  c->r[30]=0u+0x804D0000u; // 802FD118
  goto L_802FD19C; // 802FD11C
L_802FD120:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FD120
  if (!crb(c,2)) { goto L_802FD13C; } // 802FD124
  c->r[3]=c->r[29]+0xFFFF8B84u; // 802FD128
  c->r[5]=c->r[30]+0xFFFF8B60u; // 802FD12C
  c->r[4]=0u+0x0000023Du; // 802FD130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD134
  c->lr=0x802FD13Cu; f_802FA328(c); // 802FD138
L_802FD13C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 802FD13C
  cmpu(c,0,c->r[27],c->r[0]); // 802FD140
  if (!crb(c,2)) { goto L_802FD198; } // 802FD144
  cmps(c,0,(int32_t)c->r[28],0); // 802FD148
  if (!crb(c,2)) { goto L_802FD16C; } // 802FD14C
  c->r[3]=0u+0x804D0000u; // 802FD150
  c->r[5]=0u+0x804D0000u; // 802FD154
  c->r[3]=c->r[3]+0xFFFF8B84u; // 802FD158
  c->r[4]=0u+0x0000023Du; // 802FD15C
  c->r[5]=c->r[5]+0xFFFF8B60u; // 802FD160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD164
  c->lr=0x802FD16Cu; f_802FA328(c); // 802FD168
L_802FD16C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FD16C
  if (!crb(c,2)) { goto L_802FD190; } // 802FD170
  c->r[3]=0u+0x804D0000u; // 802FD174
  c->r[5]=0u+0x804D0000u; // 802FD178
  c->r[3]=c->r[3]+0xFFFF8B54u; // 802FD17C
  c->r[4]=0u+0x00000193u; // 802FD180
  c->r[5]=c->r[5]+0xFFFF8B30u; // 802FD184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD188
  c->lr=0x802FD190u; f_802FA328(c); // 802FD18C
L_802FD190:;
  c->r[3]=c->r[28]|c->r[28]; // 802FD190
  goto L_802FD1A8; // 802FD194
L_802FD198:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 802FD198
L_802FD19C:;
  cmpu(c,0,c->r[28],c->r[31]); // 802FD19C
  if (!crb(c,2)) { IRQCHK(c); goto L_802FD120; } // 802FD1A0
  c->r[3]=0u+0x00000000u; // 802FD1A4
L_802FD1A8:;
  c->r[11]=c->r[1]+0x00000020u; // 802FD1A8
  c->lr=0x802FD1B0u; f_801E79A8(c); // 802FD1AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FD1B0
  c->lr=c->r[0]; // 802FD1B4
  c->r[1]=c->r[1]+0x00000020u; // 802FD1B8
  return; // 802FD1BC
}

// fn_802FD1C0
void f_802FD1C0(Ctx* __restrict c) {
  trace_call(0x802FD1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD1C0
  c->r[0]=c->lr; // 802FD1C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FD1C8
  c->r[11]=c->r[1]+0x00000040u; // 802FD1CC
  c->lr=0x802FD1D4u; f_801E795C(c); // 802FD1D0
  c->r[28]=c->r[4]|c->r[4]; // 802FD1D4
  c->r[27]=c->r[3]|c->r[3]; // 802FD1D8
  c->r[5]=c->r[1]+0x00000018u; // 802FD1DC
  c->r[29]=0u+0xFFFFFFFFu; // 802FD1E0
  c->r[4]=c->r[13]+0xFFFF8C38u; // 802FD1E4
  c->lr=0x802FD1ECu; f_8020A590(c); // 802FD1E8
  cmps(c,0,(int32_t)c->r[3],0); // 802FD1EC
  if (!crb(c,2)) { goto L_802FD210; } // 802FD1F0
  c->r[3]=0u+0x804D0000u; // 802FD1F4
  c->r[5]=0u+0x804D0000u; // 802FD1F8
  c->r[3]=c->r[3]+0xFFFF8C50u; // 802FD1FC
  c->r[4]=0u+0x00000030u; // 802FD200
  c->r[5]=c->r[5]+0xFFFF8C6Cu; // 802FD204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD208
  c->lr=0x802FD210u; f_802FA328(c); // 802FD20C
L_802FD210:;
  c->r[30]=0u+0x804D0000u; // 802FD210
  c->r[31]=0u+0x804D0000u; // 802FD214
  goto L_802FD2B0; // 802FD218
L_802FD21C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 802FD21C
  cmps(c,0,(int32_t)c->r[0],0); // 802FD220
  if (crb(c,2)) { goto L_802FD294; } // 802FD224
  c->r[4]=R32(c->r[1]+0x00000014u); // 802FD228
  c->r[3]=c->r[27]|c->r[27]; // 802FD22C
  c->lr=0x802FD234u; f_8020A538(c); // 802FD230
  cmps(c,0,(int32_t)c->r[3],0); // 802FD234
  if (!crb(c,2)) { goto L_802FD250; } // 802FD238
  c->r[3]=c->r[30]+0xFFFF8C50u; // 802FD23C
  c->r[5]=c->r[31]+0xFFFF8C6Cu; // 802FD240
  c->r[4]=0u+0x00000039u; // 802FD244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD248
  c->lr=0x802FD250u; f_802FA328(c); // 802FD24C
L_802FD250:;
  c->r[3]=c->r[27]|c->r[27]; // 802FD250
  c->r[4]=c->r[28]|c->r[28]; // 802FD254
  c->lr=0x802FD25Cu; f_802FD1C0(c); // 802FD258
  c->r[29]=c->r[3]|c->r[3]; // 802FD25C
  c->r[3]=c->r[27]|c->r[27]; // 802FD260
  c->r[4]=c->r[13]+0xFFFF8C3Cu; // 802FD264
  c->lr=0x802FD26Cu; f_8020A538(c); // 802FD268
  cmps(c,0,(int32_t)c->r[3],0); // 802FD26C
  if (!crb(c,2)) { goto L_802FD288; } // 802FD270
  c->r[3]=c->r[30]+0xFFFF8C50u; // 802FD274
  c->r[5]=c->r[31]+0xFFFF8C6Cu; // 802FD278
  c->r[4]=0u+0x0000003Cu; // 802FD27C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD280
  c->lr=0x802FD288u; f_802FA328(c); // 802FD284
L_802FD288:;
  cmps(c,0,(int32_t)c->r[29],-1); // 802FD288
  if (!crb(c,2)) { goto L_802FD2C4; } // 802FD28C
  goto L_802FD2B0; // 802FD290
L_802FD294:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 802FD294
  c->r[3]=c->r[28]|c->r[28]; // 802FD298
  c->lr=0x802FD2A0u; f_801F3240(c); // 802FD29C
  cmps(c,0,(int32_t)c->r[3],0); // 802FD2A0
  if (!crb(c,2)) { goto L_802FD2B0; } // 802FD2A4
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 802FD2A8
  goto L_802FD2C4; // 802FD2AC
L_802FD2B0:;
  c->r[3]=c->r[1]+0x00000018u; // 802FD2B0
  c->r[4]=c->r[1]+0x00000008u; // 802FD2B4
  c->lr=0x802FD2BCu; f_8020A60C(c); // 802FD2B8
  cmps(c,0,(int32_t)c->r[3],0); // 802FD2BC
  if (!crb(c,2)) { IRQCHK(c); goto L_802FD21C; } // 802FD2C0
L_802FD2C4:;
  c->r[3]=c->r[1]+0x00000018u; // 802FD2C4
  c->lr=0x802FD2CCu; f_8020A6C4(c); // 802FD2C8
  cmps(c,0,(int32_t)c->r[3],0); // 802FD2CC
  if (!crb(c,2)) { goto L_802FD2F0; } // 802FD2D0
  c->r[3]=0u+0x804D0000u; // 802FD2D4
  c->r[5]=0u+0x804D0000u; // 802FD2D8
  c->r[3]=c->r[3]+0xFFFF8C50u; // 802FD2DC
  c->r[4]=0u+0x0000004Du; // 802FD2E0
  c->r[5]=c->r[5]+0xFFFF8C6Cu; // 802FD2E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD2E8
  c->lr=0x802FD2F0u; f_802FA328(c); // 802FD2EC
L_802FD2F0:;
  c->r[11]=c->r[1]+0x00000040u; // 802FD2F0
  c->r[3]=c->r[29]|c->r[29]; // 802FD2F4
  c->lr=0x802FD2FCu; f_801E79A8(c); // 802FD2F8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FD2FC
  c->lr=c->r[0]; // 802FD300
  c->r[1]=c->r[1]+0x00000040u; // 802FD304
  return; // 802FD308
}

// fn_802FD30C
void f_802FD30C(Ctx* __restrict c) {
  trace_call(0x802FD30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD30C
  c->r[0]=c->lr; // 802FD310
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FD314
  c->r[11]=c->r[1]+0x00000040u; // 802FD318
  c->lr=0x802FD320u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FD31C
  c->r[26]=c->r[3]|c->r[3]; // 802FD320
  c->r[27]=c->r[4]|c->r[4]; // 802FD324
  c->r[28]=c->r[5]|c->r[5]; // 802FD328
  c->r[29]=c->r[6]|c->r[6]; // 802FD32C
  c->r[30]=c->r[7]|c->r[7]; // 802FD330
  c->r[31]=0u+0xFFFFFFFFu; // 802FD334
  c->lr=0x802FD33Cu; f_8020A2B0(c); // 802FD338
  cmps(c,0,(int32_t)c->r[3],-1); // 802FD33C
  if (crb(c,2)) { goto L_802FD430; } // 802FD340
  c->r[3]=c->r[26]|c->r[26]; // 802FD344
  c->r[4]=c->r[27]|c->r[27]; // 802FD348
  c->lr=0x802FD350u; f_8020A538(c); // 802FD34C
  cmps(c,0,(int32_t)c->r[3],0); // 802FD350
  if (crb(c,2)) { goto L_802FD430; } // 802FD354
  cmps(c,0,(int32_t)c->r[28],0); // 802FD358
  if (!crb(c,2)) { goto L_802FD374; } // 802FD35C
  c->r[3]=c->r[26]|c->r[26]; // 802FD360
  c->r[4]=c->r[29]|c->r[29]; // 802FD364
  c->lr=0x802FD36Cu; f_802FD1C0(c); // 802FD368
  c->r[31]=c->r[3]|c->r[3]; // 802FD36C
  goto L_802FD400; // 802FD370
L_802FD374:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 802FD374
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 802FD378
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 802FD37C
  c->r[0]=0u+0x00000000u; // 802FD380
  W8(c->r[1]+0x00000008u,c->r[3]); // 802FD384
  c->r[3]=c->r[26]|c->r[26]; // 802FD388
  c->r[4]=c->r[1]+0x00000008u; // 802FD38C
  W8(c->r[1]+0x00000009u,c->r[6]); // 802FD390
  W8(c->r[1]+0x0000000Au,c->r[5]); // 802FD394
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 802FD398
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 802FD39C
  c->lr=0x802FD3A4u; f_8020A2B0(c); // 802FD3A0
  cmps(c,0,(int32_t)c->r[3],-1); // 802FD3A4
  if (crb(c,2)) { goto L_802FD400; } // 802FD3A8
  c->r[3]=c->r[26]|c->r[26]; // 802FD3AC
  c->r[4]=c->r[1]+0x00000008u; // 802FD3B0
  c->lr=0x802FD3B8u; f_8020A538(c); // 802FD3B4
  cmps(c,0,(int32_t)c->r[3],0); // 802FD3B8
  if (crb(c,2)) { goto L_802FD400; } // 802FD3BC
  c->r[3]=c->r[26]|c->r[26]; // 802FD3C0
  c->r[4]=c->r[29]|c->r[29]; // 802FD3C4
  c->lr=0x802FD3CCu; f_8020A2B0(c); // 802FD3C8
  c->r[31]=c->r[3]|c->r[3]; // 802FD3CC
  c->r[3]=c->r[26]|c->r[26]; // 802FD3D0
  c->r[4]=c->r[13]+0xFFFF8C3Cu; // 802FD3D4
  c->lr=0x802FD3DCu; f_8020A538(c); // 802FD3D8
  cmps(c,0,(int32_t)c->r[3],0); // 802FD3DC
  if (!crb(c,2)) { goto L_802FD400; } // 802FD3E0
  c->r[3]=0u+0x804D0000u; // 802FD3E4
  c->r[5]=0u+0x804D0000u; // 802FD3E8
  c->r[3]=c->r[3]+0xFFFF8C50u; // 802FD3EC
  c->r[4]=0u+0x00000075u; // 802FD3F0
  c->r[5]=c->r[5]+0xFFFF8C6Cu; // 802FD3F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD3F8
  c->lr=0x802FD400u; f_802FA328(c); // 802FD3FC
L_802FD400:;
  c->r[3]=c->r[26]|c->r[26]; // 802FD400
  c->r[4]=c->r[13]+0xFFFF8C3Cu; // 802FD404
  c->lr=0x802FD40Cu; f_8020A538(c); // 802FD408
  cmps(c,0,(int32_t)c->r[3],0); // 802FD40C
  if (!crb(c,2)) { goto L_802FD430; } // 802FD410
  c->r[3]=0u+0x804D0000u; // 802FD414
  c->r[5]=0u+0x804D0000u; // 802FD418
  c->r[3]=c->r[3]+0xFFFF8C50u; // 802FD41C
  c->r[4]=0u+0x0000007Bu; // 802FD420
  c->r[5]=c->r[5]+0xFFFF8C6Cu; // 802FD424
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD428
  c->lr=0x802FD430u; f_802FA328(c); // 802FD42C
L_802FD430:;
  cmps(c,0,(int32_t)c->r[31],-1); // 802FD430
  if (crb(c,2)) { goto L_802FD49C; } // 802FD434
  c->r[3]=c->r[26]|c->r[26]; // 802FD438
  c->r[4]=c->r[31]|c->r[31]; // 802FD43C
  c->r[5]=c->r[1]+0x00000010u; // 802FD440
  c->lr=0x802FD448u; f_8020A260(c); // 802FD444
  cmps(c,0,(int32_t)c->r[3],0); // 802FD448
  if (!crb(c,2)) { goto L_802FD46C; } // 802FD44C
  c->r[3]=0u+0x804D0000u; // 802FD450
  c->r[5]=0u+0x804D0000u; // 802FD454
  c->r[3]=c->r[3]+0xFFFF8C50u; // 802FD458
  c->r[4]=0u+0x00000083u; // 802FD45C
  c->r[5]=c->r[5]+0xFFFF8C6Cu; // 802FD460
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD464
  c->lr=0x802FD46Cu; f_802FA328(c); // 802FD468
L_802FD46C:;
  c->r[3]=c->r[1]+0x00000010u; // 802FD46C
  c->lr=0x802FD474u; f_8020A514(c); // 802FD470
  cmps(c,0,(int32_t)c->r[30],0); // 802FD474
  c->r[31]=c->r[3]|c->r[3]; // 802FD478
  if (crb(c,2)) { goto L_802FD48C; } // 802FD47C
  c->r[3]=c->r[1]+0x00000010u; // 802FD480
  c->lr=0x802FD488u; f_8020A528(c); // 802FD484
  W32(c->r[30]+0x00000000u,c->r[3]); // 802FD488
L_802FD48C:;
  c->r[3]=c->r[1]+0x00000010u; // 802FD48C
  c->lr=0x802FD494u; f_8020A530(c); // 802FD490
  c->r[3]=c->r[31]|c->r[31]; // 802FD494
  goto L_802FD4A0; // 802FD498
L_802FD49C:;
  c->r[3]=0u+0x00000000u; // 802FD49C
L_802FD4A0:;
  c->r[11]=c->r[1]+0x00000040u; // 802FD4A0
  c->lr=0x802FD4A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FD4A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FD4A8
  c->lr=c->r[0]; // 802FD4AC
  c->r[1]=c->r[1]+0x00000040u; // 802FD4B0
  return; // 802FD4B4
}

// __ct__Q36nw4hbm3lyt19ArcResourceAccessorFv
void f_802FD4B8(Ctx* __restrict c) {
  trace_call(0x802FD4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD4B8
  c->r[0]=c->lr; // 802FD4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FD4C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FD4C4
  c->r[31]=c->r[3]|c->r[3]; // 802FD4C8
  c->lr=0x802FD4D0u; f_80304F68(c); // 802FD4CC
  c->r[0]=0u+0x00000000u; // 802FD4D0
  c->r[4]=0u+0x804D0000u; // 802FD4D4
  W32(c->r[31]+0x00000028u,c->r[0]); // 802FD4D8
  c->r[5]=c->r[31]+0x00000028u; // 802FD4DC
  c->r[4]=c->r[4]+0xFFFF8DC4u; // 802FD4E0
  c->r[3]=c->r[31]|c->r[31]; // 802FD4E4
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 802FD4E8
  W32(c->r[31]+0x00000000u,c->r[4]); // 802FD4EC
  W32(c->r[31]+0x00000020u,c->r[0]); // 802FD4F0
  W32(c->r[31]+0x00000024u,c->r[0]); // 802FD4F4
  W32(c->r[31]+0x00000028u,c->r[5]); // 802FD4F8
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 802FD4FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FD500
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FD504
  c->lr=c->r[0]; // 802FD508
  c->r[1]=c->r[1]+0x00000010u; // 802FD50C
  return; // 802FD510
}

// fn_802FD514
void f_802FD514(Ctx* __restrict c) {
  trace_call(0x802FD514u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD514
  c->r[0]=c->lr; // 802FD518
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FD51C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FD520
  c->r[31]=0u+0x804D0000u; // 802FD524
  c->r[31]=c->r[31]+0xFFFF8C50u; // 802FD528
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FD52C
  c->r[30]=c->r[5]|c->r[5]; // 802FD530
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FD534
  c->r[29]=c->r[4]|c->r[4]; // 802FD538
  W32(c->r[1]+0x00000010u,c->r[28]); // 802FD53C
  c->r[28]=c->r[3]|c->r[3]; // 802FD540
  c->r[0]=R32(c->r[3]+0x00000020u); // 802FD544
  cmps(c,0,(int32_t)c->r[0],0); // 802FD548
  if (crb(c,2)) { goto L_802FD564; } // 802FD54C
  c->r[3]=c->r[31]+0x00000000u; // 802FD550
  c->r[5]=c->r[31]+0x0000007Cu; // 802FD554
  c->r[4]=0u+0x000000DCu; // 802FD558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD55C
  c->lr=0x802FD564u; f_802FA328(c); // 802FD560
L_802FD564:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FD564
  if (!crb(c,2)) { goto L_802FD580; } // 802FD568
  c->r[3]=c->r[31]+0x00000000u; // 802FD56C
  c->r[5]=c->r[31]+0x000000A4u; // 802FD570
  c->r[4]=0u+0x000000DDu; // 802FD574
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD578
  c->lr=0x802FD580u; f_802FA328(c); // 802FD57C
L_802FD580:;
  cmps(c,0,(int32_t)c->r[30],0); // 802FD580
  if (!crb(c,2)) { goto L_802FD59C; } // 802FD584
  c->r[3]=c->r[31]+0x00000000u; // 802FD588
  c->r[5]=c->r[31]+0x000000D8u; // 802FD58C
  c->r[4]=0u+0x000000DEu; // 802FD590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD594
  c->lr=0x802FD59Cu; f_802FA328(c); // 802FD598
L_802FD59C:;
  c->r[3]=c->r[29]|c->r[29]; // 802FD59C
  c->r[4]=c->r[28]+0x00000004u; // 802FD5A0
  c->lr=0x802FD5A8u; f_8020A1C0(c); // 802FD5A4
  cmps(c,0,(int32_t)c->r[3],0); // 802FD5A8
  if (!crb(c,2)) { goto L_802FD5B8; } // 802FD5AC
  c->r[3]=0u+0x00000000u; // 802FD5B0
  goto L_802FD5D8; // 802FD5B4
L_802FD5B8:;
  W32(c->r[28]+0x00000020u,c->r[29]); // 802FD5B8
  c->r[4]=c->r[30]|c->r[30]; // 802FD5BC
  c->r[3]=c->r[28]+0x00000030u; // 802FD5C0
  c->r[5]=0u+0x0000007Fu; // 802FD5C4
  c->lr=0x802FD5CCu; f_801F0B64(c); // 802FD5C8
  c->r[0]=0u+0x00000000u; // 802FD5CC
  c->r[3]=0u+0x00000001u; // 802FD5D0
  W8(c->r[28]+0x000000AFu,c->r[0]); // 802FD5D4
L_802FD5D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FD5D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FD5DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FD5E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FD5E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 802FD5E8
  c->lr=c->r[0]; // 802FD5EC
  c->r[1]=c->r[1]+0x00000020u; // 802FD5F0
  return; // 802FD5F4
}

// GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl
void f_802FD5F8(Ctx* __restrict c) {
  trace_call(0x802FD5F8u);
  c->r[8]=c->r[4]|c->r[4]; // 802FD5F8
  c->r[0]=c->r[5]|c->r[5]; // 802FD5FC
  c->r[7]=c->r[6]|c->r[6]; // 802FD600
  c->r[4]=c->r[3]+0x00000030u; // 802FD604
  c->r[5]=c->r[8]|c->r[8]; // 802FD608
  c->r[6]=c->r[0]|c->r[0]; // 802FD60C
  c->r[3]=c->r[3]+0x00000004u; // 802FD610
  f_802FD30C(c); return; // 802FD614
}

// fn_802FD618
void f_802FD618(Ctx* __restrict c) {
  trace_call(0x802FD618u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD618
  c->r[0]=c->lr; // 802FD61C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FD620
  c->r[11]=c->r[1]+0x00000020u; // 802FD624
  c->lr=0x802FD62Cu; f_801E795C(c); // 802FD628
  c->r[31]=R32(c->r[3]+0x00000028u); // 802FD62C
  c->r[27]=c->r[4]|c->r[4]; // 802FD630
  c->r[30]=c->r[3]+0x00000028u; // 802FD634
  c->r[28]=0u+0x804D0000u; // 802FD638
  c->r[29]=0u+0x804D0000u; // 802FD63C
  goto L_802FD6A4; // 802FD640
L_802FD644:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FD644
  if (!crb(c,2)) { goto L_802FD660; } // 802FD648
  c->r[3]=c->r[28]+0xFFFF8EBCu; // 802FD64C
  c->r[5]=c->r[29]+0xFFFF8E98u; // 802FD650
  c->r[4]=0u+0x0000023Du; // 802FD654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD658
  c->lr=0x802FD660u; f_802FA328(c); // 802FD65C
L_802FD660:;
  c->r[3]=c->r[27]|c->r[27]; // 802FD660
  c->r[4]=c->r[31]+0x00000008u; // 802FD664
  c->lr=0x802FD66Cu; f_801F0C20(c); // 802FD668
  cmps(c,0,(int32_t)c->r[3],0); // 802FD66C
  if (!crb(c,2)) { goto L_802FD6A0; } // 802FD670
  cmps(c,0,(int32_t)c->r[31],0); // 802FD674
  if (!crb(c,2)) { goto L_802FD698; } // 802FD678
  c->r[3]=0u+0x804D0000u; // 802FD67C
  c->r[5]=0u+0x804D0000u; // 802FD680
  c->r[3]=c->r[3]+0xFFFF8EBCu; // 802FD684
  c->r[4]=0u+0x0000023Du; // 802FD688
  c->r[5]=c->r[5]+0xFFFF8E98u; // 802FD68C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD690
  c->lr=0x802FD698u; f_802FA328(c); // 802FD694
L_802FD698:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 802FD698
  goto L_802FD6B0; // 802FD69C
L_802FD6A0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FD6A0
L_802FD6A4:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FD6A4
  if (!crb(c,2)) { IRQCHK(c); goto L_802FD644; } // 802FD6A8
  c->r[3]=0u+0x00000000u; // 802FD6AC
L_802FD6B0:;
  c->r[11]=c->r[1]+0x00000020u; // 802FD6B0
  c->lr=0x802FD6B8u; f_801E79A8(c); // 802FD6B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FD6B8
  c->lr=c->r[0]; // 802FD6BC
  c->r[1]=c->r[1]+0x00000020u; // 802FD6C0
  return; // 802FD6C4
}

// fn_802FD6C8
void f_802FD6C8(Ctx* __restrict c) {
  trace_call(0x802FD6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD6C8
  c->r[0]=c->lr; // 802FD6CC
  cmps(c,0,(int32_t)c->r[3],0); // 802FD6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FD6D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FD6D8
  c->r[31]=c->r[4]|c->r[4]; // 802FD6DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802FD6E0
  c->r[30]=c->r[3]|c->r[3]; // 802FD6E4
  if (crb(c,2)) { goto L_802FD73C; } // 802FD6E8
  c->r[4]=0u+0x804D0000u; // 802FD6EC
  c->r[4]=c->r[4]+0xFFFF8DB0u; // 802FD6F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FD6F4
  c->r[3]=c->r[3]+0x00000004u; // 802FD6F8
  c->lr=0x802FD700u; f_8032FB80(c); // 802FD6FC
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 802FD700
  if (crb(c,2)) { goto L_802FD710; } // 802FD704
  c->r[4]=0u+0x00000000u; // 802FD708
  c->lr=0x802FD710u; f_8032F918(c); // 802FD70C
L_802FD710:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 802FD710
  if (crb(c,2)) { goto L_802FD720; } // 802FD714
  c->r[4]=0u+0x00000000u; // 802FD718
  c->lr=0x802FD720u; f_8032F918(c); // 802FD71C
L_802FD720:;
  c->r[3]=c->r[30]|c->r[30]; // 802FD720
  c->r[4]=0u+0x00000000u; // 802FD724
  c->lr=0x802FD72Cu; f_80304F28(c); // 802FD728
  cmps(c,0,(int32_t)c->r[31],0); // 802FD72C
  if (!crb(c,1)) { goto L_802FD73C; } // 802FD730
  c->r[3]=c->r[30]|c->r[30]; // 802FD734
  c->lr=0x802FD73Cu; f_8001AAC0(c); // 802FD738
L_802FD73C:;
  c->r[3]=c->r[30]|c->r[30]; // 802FD73C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FD740
  c->r[30]=R32(c->r[1]+0x00000008u); // 802FD744
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FD748
  c->lr=c->r[0]; // 802FD74C
  c->r[1]=c->r[1]+0x00000010u; // 802FD750
  return; // 802FD754
}

// fn_802FD758
void f_802FD758(Ctx* __restrict c) {
  trace_call(0x802FD758u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD758
  c->r[0]=c->lr; // 802FD75C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FD760
  c->r[11]=c->r[1]+0x00000030u; // 802FD764
  c->lr=0x802FD76Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FD768
  c->r[31]=R32(c->r[3]+0x00000008u); // 802FD76C
  c->r[24]=c->r[4]|c->r[4]; // 802FD770
  c->r[25]=c->r[5]|c->r[5]; // 802FD774
  c->r[26]=c->r[6]|c->r[6]; // 802FD778
  c->r[30]=c->r[3]+0x00000008u; // 802FD77C
  c->r[28]=0u+0x804D0000u; // 802FD780
  c->r[29]=0u+0x804D0000u; // 802FD784
  goto L_802FD7F0; // 802FD788
L_802FD78C:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FD78C
  if (!crb(c,2)) { goto L_802FD7A8; } // 802FD790
  c->r[3]=c->r[28]+0xFFFF8E2Cu; // 802FD794
  c->r[5]=c->r[29]+0xFFFF8E08u; // 802FD798
  c->r[4]=0u+0x0000023Du; // 802FD79C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD7A0
  c->lr=0x802FD7A8u; f_802FA328(c); // 802FD7A4
L_802FD7A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FD7A8
  c->r[27]=c->r[31]+0x00000008u; // 802FD7AC
  if (!crb(c,2)) { goto L_802FD7C8; } // 802FD7B0
  c->r[3]=c->r[28]+0xFFFF8E2Cu; // 802FD7B4
  c->r[5]=c->r[29]+0xFFFF8E08u; // 802FD7B8
  c->r[4]=0u+0x0000023Du; // 802FD7BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD7C0
  c->lr=0x802FD7C8u; f_802FA328(c); // 802FD7C4
L_802FD7C8:;
  c->r[3]=c->r[27]|c->r[27]; // 802FD7C8
  c->r[5]=c->r[24]|c->r[24]; // 802FD7CC
  c->r[6]=c->r[25]|c->r[25]; // 802FD7D0
  c->r[7]=c->r[26]|c->r[26]; // 802FD7D4
  c->r[4]=c->r[31]+0x00000024u; // 802FD7D8
  c->lr=0x802FD7E0u; f_802FD30C(c); // 802FD7DC
  cmps(c,0,(int32_t)c->r[3],0); // 802FD7E0
  if (crb(c,2)) { goto L_802FD7EC; } // 802FD7E4
  goto L_802FD7FC; // 802FD7E8
L_802FD7EC:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FD7EC
L_802FD7F0:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FD7F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802FD78C; } // 802FD7F4
  c->r[3]=0u+0x00000000u; // 802FD7F8
L_802FD7FC:;
  c->r[11]=c->r[1]+0x00000030u; // 802FD7FC
  c->lr=0x802FD804u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FD800
  c->r[0]=R32(c->r[1]+0x00000034u); // 802FD804
  c->lr=c->r[0]; // 802FD808
  c->r[1]=c->r[1]+0x00000030u; // 802FD80C
  return; // 802FD810
}

// fn_802FD814
void f_802FD814(Ctx* __restrict c) {
  trace_call(0x802FD814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD814
  c->r[0]=c->lr; // 802FD818
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FD81C
  c->r[11]=c->r[1]+0x00000020u; // 802FD820
  c->lr=0x802FD828u; f_801E795C(c); // 802FD824
  c->r[31]=R32(c->r[3]+0x00000014u); // 802FD828
  c->r[27]=c->r[4]|c->r[4]; // 802FD82C
  c->r[30]=c->r[3]+0x00000014u; // 802FD830
  c->r[28]=0u+0x804D0000u; // 802FD834
  c->r[29]=0u+0x804D0000u; // 802FD838
  goto L_802FD8A0; // 802FD83C
L_802FD840:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FD840
  if (!crb(c,2)) { goto L_802FD85C; } // 802FD844
  c->r[3]=c->r[28]+0xFFFF8EBCu; // 802FD848
  c->r[5]=c->r[29]+0xFFFF8E98u; // 802FD84C
  c->r[4]=0u+0x0000023Du; // 802FD850
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD854
  c->lr=0x802FD85Cu; f_802FA328(c); // 802FD858
L_802FD85C:;
  c->r[3]=c->r[27]|c->r[27]; // 802FD85C
  c->r[4]=c->r[31]+0x00000008u; // 802FD860
  c->lr=0x802FD868u; f_801F0C20(c); // 802FD864
  cmps(c,0,(int32_t)c->r[3],0); // 802FD868
  if (!crb(c,2)) { goto L_802FD89C; } // 802FD86C
  cmps(c,0,(int32_t)c->r[31],0); // 802FD870
  if (!crb(c,2)) { goto L_802FD894; } // 802FD874
  c->r[3]=0u+0x804D0000u; // 802FD878
  c->r[5]=0u+0x804D0000u; // 802FD87C
  c->r[3]=c->r[3]+0xFFFF8EBCu; // 802FD880
  c->r[4]=0u+0x0000023Du; // 802FD884
  c->r[5]=c->r[5]+0xFFFF8E98u; // 802FD888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FD88C
  c->lr=0x802FD894u; f_802FA328(c); // 802FD890
L_802FD894:;
  c->r[3]=R32(c->r[31]+0x00000088u); // 802FD894
  goto L_802FD8AC; // 802FD898
L_802FD89C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FD89C
L_802FD8A0:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FD8A0
  if (!crb(c,2)) { IRQCHK(c); goto L_802FD840; } // 802FD8A4
  c->r[3]=0u+0x00000000u; // 802FD8A8
L_802FD8AC:;
  c->r[11]=c->r[1]+0x00000020u; // 802FD8AC
  c->lr=0x802FD8B4u; f_801E79A8(c); // 802FD8B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FD8B4
  c->lr=c->r[0]; // 802FD8B8
  c->r[1]=c->r[1]+0x00000020u; // 802FD8BC
  return; // 802FD8C0
}

// fn_802FD8C4
void f_802FD8C4(Ctx* __restrict c) {
  trace_call(0x802FD8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD8C4
  c->r[0]=c->lr; // 802FD8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FD8CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FD8D0
  c->r[31]=c->r[3]|c->r[3]; // 802FD8D4
  c->lr=0x802FD8DCu; f_803034F0(c); // 802FD8D8
  c->r[4]=0u+0x804D0000u; // 802FD8DC
  c->r[3]=c->r[31]|c->r[31]; // 802FD8E0
  c->r[4]=c->r[4]+0xFFFF8EC8u; // 802FD8E4
  W32(c->r[31]+0x00000000u,c->r[4]); // 802FD8E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FD8EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FD8F0
  c->lr=c->r[0]; // 802FD8F4
  c->r[1]=c->r[1]+0x00000010u; // 802FD8F8
  return; // 802FD8FC
}

// fn_802FD900
void f_802FD900(Ctx* __restrict c) {
  trace_call(0x802FD900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD900
  c->r[0]=c->lr; // 802FD904
  cmps(c,0,(int32_t)c->r[3],0); // 802FD908
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FD90C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FD910
  c->r[31]=c->r[4]|c->r[4]; // 802FD914
  W32(c->r[1]+0x00000008u,c->r[30]); // 802FD918
  c->r[30]=c->r[3]|c->r[3]; // 802FD91C
  if (crb(c,2)) { goto L_802FD93C; } // 802FD920
  c->r[4]=0u+0x00000000u; // 802FD924
  c->lr=0x802FD92Cu; f_80303614(c); // 802FD928
  cmps(c,0,(int32_t)c->r[31],0); // 802FD92C
  if (!crb(c,1)) { goto L_802FD93C; } // 802FD930
  c->r[3]=c->r[30]|c->r[30]; // 802FD934
  c->lr=0x802FD93Cu; f_8001AAC0(c); // 802FD938
L_802FD93C:;
  c->r[3]=c->r[30]|c->r[30]; // 802FD93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FD940
  c->r[30]=R32(c->r[1]+0x00000008u); // 802FD944
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FD948
  c->lr=c->r[0]; // 802FD94C
  c->r[1]=c->r[1]+0x00000010u; // 802FD950
  return; // 802FD954
}

// DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo
void f_802FD958(Ctx* __restrict c) {
  trace_call(0x802FD958u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD958
  c->r[0]=c->lr; // 802FD95C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FD960
  c->r[0]=R8(c->r[4]+0x00000050u); // 802FD964
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FD968
  c->r[31]=c->r[3]|c->r[3]; // 802FD96C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 802FD970
  if (crb(c,2)) { goto L_802FD9B4; } // 802FD974
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FD978
  c->r[12]=R32(c->r[12]+0x00000060u); // 802FD97C
  c->ctr=c->r[12]; // 802FD980
  if (true) { c->lr=0x802FD988u; dispatch(c,c->ctr); } // 802FD984
  c->r[4]=0u+0x00FF0000u; // 802FD988
  c->r[3]=c->r[31]|c->r[31]; // 802FD98C
  c->r[0]=c->r[4]+0x000000FFu; // 802FD990
  W32(c->r[1]+0x00000008u,c->r[0]); // 802FD994
  c->lr=0x802FD99Cu; f_80304708(c); // 802FD998
  W32(c->r[1]+0x00000014u,c->r[4]); // 802FD99C
  c->r[4]=c->r[31]+0x0000004Cu; // 802FD9A0
  c->r[5]=c->r[1]+0x00000008u; // 802FD9A4
  W32(c->r[1]+0x00000010u,c->r[3]); // 802FD9A8
  c->r[3]=c->r[1]+0x00000010u; // 802FD9AC
  c->lr=0x802FD9B4u; f_802FE570(c); // 802FD9B0
L_802FD9B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FD9B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FD9B8
  c->lr=c->r[0]; // 802FD9BC
  c->r[1]=c->r[1]+0x00000020u; // 802FD9C0
  return; // 802FD9C4
}

// fn_802FD9C8
void f_802FD9C8(Ctx* __restrict c) {
  trace_call(0x802FD9C8u);
  c->r[3]=c->r[13]+0xFFFFA5E0u; // 802FD9C8
  return; // 802FD9CC
}

// fn_802FD9D0
void f_802FD9D0(Ctx* __restrict c) {
  trace_call(0x802FD9D0u);
  c->r[0]=c->r[13]+0xFFFFA5F8u; // 802FD9D0
  W32(c->r[13]+0xFFFFA5E0u,c->r[0]); // 802FD9D4
  return; // 802FD9D8
}

// fn_802FD9DC
void f_802FD9DC(Ctx* __restrict c) {
  trace_call(0x802FD9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FD9DC
  c->r[0]=c->lr; // 802FD9E0
  c->r[5]=0u+0x00000010u; // 802FD9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FD9E8
  c->lr=0x802FD9F0u; f_801F0D3C(c); // 802FD9EC
  c->r[0]=cntlz(c->r[3]); // 802FD9F0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802FD9F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FD9F8
  c->lr=c->r[0]; // 802FD9FC
  c->r[1]=c->r[1]+0x00000010u; // 802FDA00
  return; // 802FDA04
}

// EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
void f_802FDA08(Ctx* __restrict c) {
  trace_call(0x802FDA08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDA08
  c->r[0]=c->lr; // 802FDA0C
  c->r[5]=0u+0x00000014u; // 802FDA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FDA14
  c->lr=0x802FDA1Cu; f_801F0D3C(c); // 802FDA18
  c->r[0]=cntlz(c->r[3]); // 802FDA1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802FDA20
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FDA24
  c->lr=c->r[0]; // 802FDA28
  c->r[1]=c->r[1]+0x00000010u; // 802FDA2C
  return; // 802FDA30
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
void f_802FDA34(Ctx* __restrict c) {
  trace_call(0x802FDA34u);
  c->r[0]=R16(c->r[3]+0x00000004u); // 802FDA34
  c->r[4]=0u+0x00000000u; // 802FDA38
  cmpu(c,0,c->r[0],0x0000FEFFu); // 802FDA3C
  if (!crb(c,2)) { goto L_802FDA54; } // 802FDA40
  c->r[0]=R16(c->r[3]+0x00000006u); // 802FDA44
  cmpu(c,0,c->r[0],0x00000008u); // 802FDA48
  if (!crb(c,2)) { goto L_802FDA54; } // 802FDA4C
  c->r[4]=0u+0x00000001u; // 802FDA50
L_802FDA54:;
  c->r[3]=c->r[4]|c->r[4]; // 802FDA54
  return; // 802FDA58
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
void f_802FDA5C(Ctx* __restrict c) {
  trace_call(0x802FDA5Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802FDA5C
  c->r[5]=0u+0x00000000u; // 802FDA60
  cmpu(c,0,c->r[4],c->r[0]); // 802FDA64
  if (!crb(c,2)) { goto L_802FDA88; } // 802FDA68
  c->r[0]=R16(c->r[3]+0x00000004u); // 802FDA6C
  cmpu(c,0,c->r[0],0x0000FEFFu); // 802FDA70
  if (!crb(c,2)) { goto L_802FDA88; } // 802FDA74
  c->r[0]=R16(c->r[3]+0x00000006u); // 802FDA78
  cmpu(c,0,c->r[0],0x00000008u); // 802FDA7C
  if (!crb(c,2)) { goto L_802FDA88; } // 802FDA80
  c->r[5]=0u+0x00000001u; // 802FDA84
L_802FDA88:;
  c->r[3]=c->r[5]|c->r[5]; // 802FDA88
  return; // 802FDA8C
}

// __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_802FDA90(Ctx* __restrict c) {
  trace_call(0x802FDA90u);
  c->r[0]=0u+0x00000000u; // 802FDA90
  W8(c->r[3]+0x00000000u,c->r[0]); // 802FDA94
  W8(c->r[3]+0x00000001u,c->r[0]); // 802FDA98
  W32(c->r[3]+0x00000004u,c->r[0]); // 802FDA9C
  return; // 802FDAA0
}

// fn_802FDAA4
void f_802FDAA4(Ctx* __restrict c) {
  trace_call(0x802FDAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDAA4
  c->r[0]=c->lr; // 802FDAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FDAAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FDAB0
  c->r[31]=c->r[3]|c->r[3]; // 802FDAB4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802FDAB8
  cmps(c,0,(int32_t)c->r[4],0); // 802FDABC
  if (crb(c,2)) { goto L_802FDADC; } // 802FDAC0
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FDAC4
  c->lr=0x802FDACCu; f_80201DA0(c); // 802FDAC8
  c->r[0]=0u+0x00000000u; // 802FDACC
  W32(c->r[31]+0x00000004u,c->r[0]); // 802FDAD0
  W8(c->r[31]+0x00000000u,c->r[0]); // 802FDAD4
  W8(c->r[31]+0x00000001u,c->r[0]); // 802FDAD8
L_802FDADC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FDADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FDAE0
  c->lr=c->r[0]; // 802FDAE4
  c->r[1]=c->r[1]+0x00000010u; // 802FDAE8
  return; // 802FDAEC
}

// fn_802FDAF0
void f_802FDAF0(Ctx* __restrict c) {
  trace_call(0x802FDAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDAF0
  c->r[0]=c->lr; // 802FDAF4
  cmpu(c,0,c->r[4],0x00000008u); // 802FDAF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FDAFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FDB00
  c->r[31]=c->r[4]|c->r[4]; // 802FDB04
  W32(c->r[1]+0x00000008u,c->r[30]); // 802FDB08
  c->r[30]=c->r[3]|c->r[3]; // 802FDB0C
  if (!crb(c,1)) { goto L_802FDB30; } // 802FDB10
  c->r[3]=0u+0x804D0000u; // 802FDB14
  c->r[5]=0u+0x804D0000u; // 802FDB18
  c->r[3]=c->r[3]+0xFFFF8F30u; // 802FDB1C
  c->r[4]=0u+0x0000005Du; // 802FDB20
  c->r[5]=c->r[5]+0xFFFF8F40u; // 802FDB24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FDB28
  c->lr=0x802FDB30u; f_802FA328(c); // 802FDB2C
L_802FDB30:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 802FDB30
  cmpu(c,0,c->r[0],c->r[31]); // 802FDB34
  if (!crb(c,0)) { goto L_802FDB7C; } // 802FDB38
  c->r[4]=R32(c->r[30]+0x00000004u); // 802FDB3C
  cmps(c,0,(int32_t)c->r[4],0); // 802FDB40
  if (crb(c,2)) { goto L_802FDB60; } // 802FDB44
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FDB48
  c->lr=0x802FDB50u; f_80201DA0(c); // 802FDB4C
  c->r[0]=0u+0x00000000u; // 802FDB50
  W32(c->r[30]+0x00000004u,c->r[0]); // 802FDB54
  W8(c->r[30]+0x00000000u,c->r[0]); // 802FDB58
  W8(c->r[30]+0x00000001u,c->r[0]); // 802FDB5C
L_802FDB60:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FDB60
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 802FDB64
  c->lr=0x802FDB6Cu; f_80201D90(c); // 802FDB68
  cmps(c,0,(int32_t)c->r[3],0); // 802FDB6C
  W32(c->r[30]+0x00000004u,c->r[3]); // 802FDB70
  if (crb(c,2)) { goto L_802FDB7C; } // 802FDB74
  W8(c->r[30]+0x00000000u,c->r[31]); // 802FDB78
L_802FDB7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FDB7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FDB80
  c->r[30]=R32(c->r[1]+0x00000008u); // 802FDB84
  c->lr=c->r[0]; // 802FDB88
  c->r[1]=c->r[1]+0x00000010u; // 802FDB8C
  return; // 802FDB90
}

// fn_802FDB94
void f_802FDB94(Ctx* __restrict c) {
  trace_call(0x802FDB94u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FDB94
  cmps(c,0,(int32_t)c->r[0],0); // 802FDB98
  if (crb(c,2)) return; // 802FDB9C
  c->r[0]=R8(c->r[3]+0x00000000u); // 802FDBA0
  cmpu(c,0,c->r[4],c->r[0]); // 802FDBA4
  if (crb(c,1)) return; // 802FDBA8
  c->r[0]=R8(c->r[13]+0xFFFFA5E8u); // 802FDBAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802FDBB0
  if (!crb(c,2)) { goto L_802FDBF0; } // 802FDBB4
  c->r[6]=0u+0x80610000u; // 802FDBB8
  {uint32_t ea=c->r[2]+0xFFFFD050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDBBC
  c->r[5]=c->r[6]+0x00000E40u; // 802FDBC0
  {uint32_t ea=c->r[2]+0xFFFFD054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDBC4
  c->r[0]=0u+0x00000001u; // 802FDBC8
  {uint32_t ea=c->r[6]+0x00000E40u; WF32(ea,c->f[1]);} // 802FDBCC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 802FDBD0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 802FDBD4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[1]);} // 802FDBD8
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 802FDBDC
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 802FDBE0
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 802FDBE4
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 802FDBE8
  W8(c->r[13]+0xFFFFA5E8u,c->r[0]); // 802FDBEC
L_802FDBF0:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 802FDBF0
  c->r[6]=0u+0x80610000u; // 802FDBF4
  c->r[5]=c->r[6]+0x00000E40u; // 802FDBF8
  {uint32_t ea=c->r[6]+0x00000E40u; c->f[7]=c->ps1[7]=RF32(ea);} // 802FDBFC
  c->r[0]=c->r[4]-c->r[7]; // 802FDC00
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 802FDC04
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 802FDC08
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802FDC0C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802FDC10
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802FDC14
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FDC18
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDC1C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDC20
  c->ctr=c->r[0]; // 802FDC24
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 802FDC28
  if (!crb(c,0)) { goto L_802FDC78; } // 802FDC2C
L_802FDC30:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FDC30
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 802FDC34
  c->r[5]=c->r[0]+c->r[6]; // 802FDC38
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 802FDC3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FDC40
  c->r[5]=c->r[0]+c->r[6]; // 802FDC44
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 802FDC48
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 802FDC4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FDC50
  c->r[5]=c->r[0]+c->r[6]; // 802FDC54
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 802FDC58
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 802FDC5C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FDC60
  c->r[5]=c->r[0]+c->r[6]; // 802FDC64
  c->r[6]=c->r[6]+0x00000020u; // 802FDC68
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 802FDC6C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 802FDC70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FDC30; } // 802FDC74
L_802FDC78:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 802FDC78
  return; // 802FDC7C
}

// fn_802FDC80
void f_802FDC80(Ctx* __restrict c) {
  trace_call(0x802FDC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDC80
  c->r[0]=c->lr; // 802FDC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FDC88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FDC8C
  c->r[31]=c->r[5]|c->r[5]; // 802FDC90
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FDC94
  c->r[30]=c->r[4]|c->r[4]; // 802FDC98
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FDC9C
  c->r[29]=c->r[3]|c->r[3]; // 802FDCA0
  c->r[0]=R8(c->r[3]+0x00000000u); // 802FDCA4
  cmpu(c,0,c->r[5],c->r[0]); // 802FDCA8
  if (!crb(c,1)) { goto L_802FDCCC; } // 802FDCAC
  c->r[3]=0u+0x804D0000u; // 802FDCB0
  c->r[5]=0u+0x804D0000u; // 802FDCB4
  c->r[3]=c->r[3]+0xFFFF8F30u; // 802FDCB8
  c->r[4]=0u+0x000000A1u; // 802FDCBC
  c->r[5]=c->r[5]+0xFFFF8F70u; // 802FDCC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FDCC4
  c->lr=0x802FDCCCu; f_802FA328(c); // 802FDCC8
L_802FDCCC:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 802FDCCC
  cmpu(c,0,c->r[0],c->r[31]); // 802FDCD0
  if (!crb(c,0)) { goto L_802FDCDC; } // 802FDCD4
  c->r[0]=c->r[31]|c->r[31]; // 802FDCD8
L_802FDCDC:;
  W8(c->r[29]+0x00000001u,c->r[0]); // 802FDCDC
  c->r[4]=0u+0x00000000u; // 802FDCE0
  c->ctr=c->r[31]; // 802FDCE4
  cmps(c,0,(int32_t)c->r[31],0); // 802FDCE8
  if (!crb(c,1)) { goto L_802FDD5C; } // 802FDCEC
L_802FDCF0:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 802FDCF0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDCF4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDCF8
  c->r[3]=c->r[0]+c->r[4]; // 802FDCFC
  {uint32_t ea=c->r[4]+c->r[0]; WF32(ea,c->f[1]);} // 802FDD00
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDD04
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802FDD08
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDD0C
  c->r[0]=R32(c->r[29]+0x00000004u); // 802FDD10
  {uint32_t ea=c->r[30]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802FDD14
  c->r[3]=c->r[0]+c->r[4]; // 802FDD18
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FDD1C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 802FDD20
  {uint32_t ea=c->r[30]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDD24
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802FDD28
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDD2C
  c->r[30]=c->r[30]+0x00000020u; // 802FDD30
  c->r[0]=R32(c->r[29]+0x00000004u); // 802FDD34
  c->r[3]=c->r[0]+c->r[4]; // 802FDD38
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 802FDD3C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 802FDD40
  c->r[0]=R32(c->r[29]+0x00000004u); // 802FDD44
  c->r[3]=c->r[0]+c->r[4]; // 802FDD48
  c->r[4]=c->r[4]+0x00000020u; // 802FDD4C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 802FDD50
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802FDD54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FDCF0; } // 802FDD58
L_802FDD5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FDD5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FDD60
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FDD64
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FDD68
  c->lr=c->r[0]; // 802FDD6C
  c->r[1]=c->r[1]+0x00000020u; // 802FDD70
  return; // 802FDD74
}

// IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
void f_802FDD78(Ctx* __restrict c) {
  trace_call(0x802FDD78u);
  cmpu(c,0,c->r[4],0x000000FFu); // 802FDD78
  if (crb(c,2)) { goto L_802FDD88; } // 802FDD7C
  c->r[3]=0u+0x00000001u; // 802FDD80
  return; // 802FDD84
L_802FDD88:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FDD88
  if (crb(c,2)) { goto L_802FDDD8; } // 802FDD8C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802FDD90
  c->r[0]=c->r[4]+0x00010000u; // 802FDD94
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802FDD98
  if (!crb(c,2)) { goto L_802FDDD0; } // 802FDD9C
  c->r[4]=R32(c->r[3]+0x00000004u); // 802FDDA0
  c->r[0]=c->r[4]+0x00010000u; // 802FDDA4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802FDDA8
  if (!crb(c,2)) { goto L_802FDDD0; } // 802FDDAC
  c->r[4]=R32(c->r[3]+0x00000008u); // 802FDDB0
  c->r[0]=c->r[4]+0x00010000u; // 802FDDB4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802FDDB8
  if (!crb(c,2)) { goto L_802FDDD0; } // 802FDDBC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802FDDC0
  c->r[0]=c->r[3]+0x00010000u; // 802FDDC4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802FDDC8
  if (crb(c,2)) { goto L_802FDDD8; } // 802FDDCC
L_802FDDD0:;
  c->r[3]=0u+0x00000001u; // 802FDDD0
  return; // 802FDDD4
L_802FDDD8:;
  c->r[3]=0u+0x00000000u; // 802FDDD8
  return; // 802FDDDC
}

// MultipleAlpha__Q36nw4hbm3lyt6detailFQ36nw4hbm2ut5ColorUc
void f_802FDDE0(Ctx* __restrict c) {
  trace_call(0x802FDDE0u);
  c->r[8]=R8(c->r[4]+0x00000000u); // 802FDDE0
  cmpu(c,0,c->r[5],0x000000FFu); // 802FDDE4
  c->r[7]=R8(c->r[4]+0x00000001u); // 802FDDE8
  c->r[6]=R8(c->r[4]+0x00000002u); // 802FDDEC
  c->r[0]=R8(c->r[4]+0x00000003u); // 802FDDF0
  W8(c->r[3]+0x00000000u,c->r[8]); // 802FDDF4
  W8(c->r[3]+0x00000001u,c->r[7]); // 802FDDF8
  W8(c->r[3]+0x00000002u,c->r[6]); // 802FDDFC
  W8(c->r[3]+0x00000003u,c->r[0]); // 802FDE00
  if (crb(c,2)) return; // 802FDE04
  c->r[0]=R8(c->r[4]+0x00000003u); // 802FDE08
  c->r[4]=0u+0x80810000u; // 802FDE0C
  c->r[4]=c->r[4]+0xFFFF8081u; // 802FDE10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 802FDE14
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802FDE18
  c->r[0]=c->r[4]+c->r[0]; // 802FDE1C
  c->r[0]=sraw(c,c->r[0],7); // 802FDE20
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802FDE24
  c->r[0]=c->r[0]+c->r[4]; // 802FDE28
  W8(c->r[3]+0x00000003u,c->r[0]); // 802FDE2C
  return; // 802FDE30
}

// SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
void f_802FDE34(Ctx* __restrict c) {
  trace_call(0x802FDE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDE34
  c->r[0]=c->lr; // 802FDE38
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FDE3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FDE40
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FDE44
  c->r[30]=c->r[4]|c->r[4]; // 802FDE48
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FDE4C
  c->r[29]=c->r[3]|c->r[3]; // 802FDE50
  c->lr=0x802FDE58u; f_801E17C4(c); // 802FDE54
  c->r[3]=0u+0x00000009u; // 802FDE58
  c->r[4]=0u+0x00000001u; // 802FDE5C
  c->lr=0x802FDE64u; f_801E1384(c); // 802FDE60
  cmps(c,0,(int32_t)c->r[29],0); // 802FDE64
  if (crb(c,2)) { goto L_802FDE78; } // 802FDE68
  c->r[3]=0u+0x0000000Bu; // 802FDE6C
  c->r[4]=0u+0x00000001u; // 802FDE70
  c->lr=0x802FDE78u; f_801E1384(c); // 802FDE74
L_802FDE78:;
  c->r[31]=0u+0x00000000u; // 802FDE78
  goto L_802FDE90; // 802FDE7C
L_802FDE80:;
  c->r[3]=c->r[31]+0x0000000Du; // 802FDE80
  c->r[4]=0u+0x00000001u; // 802FDE84
  c->lr=0x802FDE8Cu; f_801E1384(c); // 802FDE88
  c->r[31]=c->r[31]+0x00000001u; // 802FDE8C
L_802FDE90:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 802FDE90
  if (crb(c,0)) { IRQCHK(c); goto L_802FDE80; } // 802FDE94
  c->r[3]=0u+0x00000000u; // 802FDE98
  c->r[4]=0u+0x00000009u; // 802FDE9C
  c->r[5]=0u+0x00000000u; // 802FDEA0
  c->r[6]=0u+0x00000004u; // 802FDEA4
  c->r[7]=0u+0x00000000u; // 802FDEA8
  c->lr=0x802FDEB0u; f_801E17F8(c); // 802FDEAC
  cmps(c,0,(int32_t)c->r[29],0); // 802FDEB0
  if (crb(c,2)) { goto L_802FDED0; } // 802FDEB4
  c->r[3]=0u+0x00000000u; // 802FDEB8
  c->r[4]=0u+0x0000000Bu; // 802FDEBC
  c->r[5]=0u+0x00000001u; // 802FDEC0
  c->r[6]=0u+0x00000005u; // 802FDEC4
  c->r[7]=0u+0x00000000u; // 802FDEC8
  c->lr=0x802FDED0u; f_801E17F8(c); // 802FDECC
L_802FDED0:;
  c->r[31]=0u+0x00000000u; // 802FDED0
  goto L_802FDEF4; // 802FDED4
L_802FDED8:;
  c->r[4]=c->r[31]+0x0000000Du; // 802FDED8
  c->r[3]=0u+0x00000000u; // 802FDEDC
  c->r[5]=0u+0x00000001u; // 802FDEE0
  c->r[6]=0u+0x00000004u; // 802FDEE4
  c->r[7]=0u+0x00000000u; // 802FDEE8
  c->lr=0x802FDEF0u; f_801E17F8(c); // 802FDEEC
  c->r[31]=c->r[31]+0x00000001u; // 802FDEF0
L_802FDEF4:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 802FDEF4
  if (crb(c,0)) { IRQCHK(c); goto L_802FDED8; } // 802FDEF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FDEFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FDF00
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FDF04
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FDF08
  c->lr=c->r[0]; // 802FDF0C
  c->r[1]=c->r[1]+0x00000020u; // 802FDF10
  return; // 802FDF14
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
void f_802FDF18(Ctx* __restrict c) {
  trace_call(0x802FDF18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FDF18
  c->r[0]=c->lr; // 802FDF1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FDF20
  c->r[11]=c->r[1]+0x00000020u; // 802FDF24
  c->lr=0x802FDF2Cu; f_801E795C(c); // 802FDF28
  c->r[27]=c->r[3]|c->r[3]; // 802FDF2C
  c->r[28]=c->r[4]|c->r[4]; // 802FDF30
  c->r[29]=c->r[5]|c->r[5]; // 802FDF34
  c->r[30]=c->r[6]|c->r[6]; // 802FDF38
  c->r[31]=c->r[7]|c->r[7]; // 802FDF3C
  c->r[3]=0u+0x00000080u; // 802FDF40
  c->r[4]=0u+0x00000000u; // 802FDF44
  c->r[5]=0u+0x00000004u; // 802FDF48
  c->lr=0x802FDF50u; f_801E28F4(c); // 802FDF4C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDF50
  c->r[3]=0u+0xCC010000u; // 802FDF54
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDF58
  cmps(c,0,(int32_t)c->r[31],0); // 802FDF5C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FDF60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FDF64
  if (crb(c,2)) { goto L_802FDF74; } // 802FDF68
  c->r[0]=R32(c->r[31]+0x00000000u); // 802FDF6C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802FDF70
L_802FDF74:;
  cmps(c,1,(int32_t)c->r[29],0); // 802FDF74
  c->r[6]=0u+0x00000000u; // 802FDF78
  if (!crb(c,5)) { goto L_802FE08C; } // 802FDF7C
  cmps(c,0,(int32_t)c->r[29],8); // 802FDF80
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802FDF84
  if (!crb(c,1)) { goto L_802FE058; } // 802FDF88
  c->r[5]=0u+0x00000000u; // 802FDF8C
  if (crb(c,4)) { goto L_802FDFA8; } // 802FDF90
  c->r[3]=0u+0x80000000u; // 802FDF94
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802FDF98
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802FDF9C
  if (crb(c,1)) { goto L_802FDFA8; } // 802FDFA0
  c->r[5]=0u+0x00000001u; // 802FDFA4
L_802FDFA8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802FDFA8
  if (crb(c,2)) { goto L_802FE058; } // 802FDFAC
  c->r[0]=c->r[4]+0x00000007u; // 802FDFB0
  c->r[5]=c->r[30]|c->r[30]; // 802FDFB4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802FDFB8
  c->r[3]=0u+0xCC010000u; // 802FDFBC
  c->ctr=c->r[0]; // 802FDFC0
  cmps(c,0,(int32_t)c->r[4],0); // 802FDFC4
  if (!crb(c,1)) { goto L_802FE058; } // 802FDFC8
L_802FDFCC:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDFCC
  c->r[6]=c->r[6]+0x00000008u; // 802FDFD0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDFD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FDFD8
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FDFDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FDFE0
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDFE4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FDFE8
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDFEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FDFF0
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FDFF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FDFF8
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FDFFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE000
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE004
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE008
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE00C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE010
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE014
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE018
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE01C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE020
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE024
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE028
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE02C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE030
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE034
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE038
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE03C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE040
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE044
  c->r[5]=c->r[5]+0x00000100u; // 802FE048
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE04C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE050
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FDFCC; } // 802FE054
L_802FE058:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 802FE058
  c->r[0]=c->r[29]-c->r[6]; // 802FE05C
  c->r[4]=c->r[30]+c->r[3]; // 802FE060
  c->r[3]=0u+0xCC010000u; // 802FE064
  c->ctr=c->r[0]; // 802FE068
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 802FE06C
  if (!crb(c,0)) { goto L_802FE08C; } // 802FE070
L_802FE074:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE074
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE078
  c->r[4]=c->r[4]+0x00000020u; // 802FE07C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE080
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE084
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE074; } // 802FE088
L_802FE08C:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE08C
  c->r[3]=0u+0xCC010000u; // 802FE090
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE094
  cmps(c,0,(int32_t)c->r[31],0); // 802FE098
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE09C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802FE0A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE0A4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE0A8
  if (crb(c,2)) { goto L_802FE0B8; } // 802FE0AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 802FE0B0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802FE0B4
L_802FE0B8:;
  cmps(c,1,(int32_t)c->r[29],0); // 802FE0B8
  c->r[6]=0u+0x00000000u; // 802FE0BC
  if (!crb(c,5)) { goto L_802FE1D0; } // 802FE0C0
  cmps(c,0,(int32_t)c->r[29],8); // 802FE0C4
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802FE0C8
  if (!crb(c,1)) { goto L_802FE19C; } // 802FE0CC
  c->r[5]=0u+0x00000000u; // 802FE0D0
  if (crb(c,4)) { goto L_802FE0EC; } // 802FE0D4
  c->r[3]=0u+0x80000000u; // 802FE0D8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802FE0DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802FE0E0
  if (crb(c,1)) { goto L_802FE0EC; } // 802FE0E4
  c->r[5]=0u+0x00000001u; // 802FE0E8
L_802FE0EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802FE0EC
  if (crb(c,2)) { goto L_802FE19C; } // 802FE0F0
  c->r[0]=c->r[4]+0x00000007u; // 802FE0F4
  c->r[5]=c->r[30]|c->r[30]; // 802FE0F8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802FE0FC
  c->r[3]=0u+0xCC010000u; // 802FE100
  c->ctr=c->r[0]; // 802FE104
  cmps(c,0,(int32_t)c->r[4],0); // 802FE108
  if (!crb(c,1)) { goto L_802FE19C; } // 802FE10C
L_802FE110:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE110
  c->r[6]=c->r[6]+0x00000008u; // 802FE114
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE118
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE11C
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE120
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE124
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE128
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE12C
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE130
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE134
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE138
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE13C
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE140
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE144
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE148
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE14C
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE150
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE154
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE158
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE15C
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE160
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE164
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE168
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE16C
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE170
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE174
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE178
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE17C
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE180
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE184
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE188
  c->r[5]=c->r[5]+0x00000100u; // 802FE18C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE190
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE194
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE110; } // 802FE198
L_802FE19C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 802FE19C
  c->r[0]=c->r[29]-c->r[6]; // 802FE1A0
  c->r[4]=c->r[30]+c->r[3]; // 802FE1A4
  c->r[3]=0u+0xCC010000u; // 802FE1A8
  c->ctr=c->r[0]; // 802FE1AC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 802FE1B0
  if (!crb(c,0)) { goto L_802FE1D0; } // 802FE1B4
L_802FE1B8:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE1B8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE1BC
  c->r[4]=c->r[4]+0x00000020u; // 802FE1C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE1C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE1C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE1B8; } // 802FE1CC
L_802FE1D0:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE1D0
  c->r[3]=0u+0xCC010000u; // 802FE1D4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE1D8
  cmps(c,0,(int32_t)c->r[31],0); // 802FE1DC
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE1E0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802FE1E4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE1E8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802FE1EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE1F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE1F4
  if (crb(c,2)) { goto L_802FE204; } // 802FE1F8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802FE1FC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802FE200
L_802FE204:;
  cmps(c,1,(int32_t)c->r[29],0); // 802FE204
  c->r[6]=0u+0x00000000u; // 802FE208
  if (!crb(c,5)) { goto L_802FE31C; } // 802FE20C
  cmps(c,0,(int32_t)c->r[29],8); // 802FE210
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802FE214
  if (!crb(c,1)) { goto L_802FE2E8; } // 802FE218
  c->r[5]=0u+0x00000000u; // 802FE21C
  if (crb(c,4)) { goto L_802FE238; } // 802FE220
  c->r[3]=0u+0x80000000u; // 802FE224
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802FE228
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802FE22C
  if (crb(c,1)) { goto L_802FE238; } // 802FE230
  c->r[5]=0u+0x00000001u; // 802FE234
L_802FE238:;
  cmps(c,0,(int32_t)c->r[5],0); // 802FE238
  if (crb(c,2)) { goto L_802FE2E8; } // 802FE23C
  c->r[0]=c->r[4]+0x00000007u; // 802FE240
  c->r[5]=c->r[30]|c->r[30]; // 802FE244
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802FE248
  c->r[3]=0u+0xCC010000u; // 802FE24C
  c->ctr=c->r[0]; // 802FE250
  cmps(c,0,(int32_t)c->r[4],0); // 802FE254
  if (!crb(c,1)) { goto L_802FE2E8; } // 802FE258
L_802FE25C:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE25C
  c->r[6]=c->r[6]+0x00000008u; // 802FE260
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE264
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE268
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE26C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE270
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE274
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE278
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE27C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE280
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE284
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE288
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE28C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE290
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE294
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE298
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE29C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE2A0
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE2A4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE2A8
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE2AC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE2B0
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE2B4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE2B8
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE2BC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE2C0
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE2C4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE2C8
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE2CC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE2D0
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE2D4
  c->r[5]=c->r[5]+0x00000100u; // 802FE2D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE2DC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE2E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE25C; } // 802FE2E4
L_802FE2E8:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 802FE2E8
  c->r[0]=c->r[29]-c->r[6]; // 802FE2EC
  c->r[4]=c->r[30]+c->r[3]; // 802FE2F0
  c->r[3]=0u+0xCC010000u; // 802FE2F4
  c->ctr=c->r[0]; // 802FE2F8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 802FE2FC
  if (!crb(c,0)) { goto L_802FE31C; } // 802FE300
L_802FE304:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE304
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE308
  c->r[4]=c->r[4]+0x00000020u; // 802FE30C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE310
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE314
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE304; } // 802FE318
L_802FE31C:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE31C
  c->r[3]=0u+0xCC010000u; // 802FE320
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE324
  cmps(c,0,(int32_t)c->r[31],0); // 802FE328
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE32C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802FE330
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE334
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE338
  if (crb(c,2)) { goto L_802FE348; } // 802FE33C
  c->r[0]=R32(c->r[31]+0x00000008u); // 802FE340
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802FE344
L_802FE348:;
  cmps(c,1,(int32_t)c->r[29],0); // 802FE348
  c->r[6]=0u+0x00000000u; // 802FE34C
  if (!crb(c,5)) { goto L_802FE460; } // 802FE350
  cmps(c,0,(int32_t)c->r[29],8); // 802FE354
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 802FE358
  if (!crb(c,1)) { goto L_802FE42C; } // 802FE35C
  c->r[5]=0u+0x00000000u; // 802FE360
  if (crb(c,4)) { goto L_802FE37C; } // 802FE364
  c->r[3]=0u+0x80000000u; // 802FE368
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 802FE36C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802FE370
  if (crb(c,1)) { goto L_802FE37C; } // 802FE374
  c->r[5]=0u+0x00000001u; // 802FE378
L_802FE37C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802FE37C
  if (crb(c,2)) { goto L_802FE42C; } // 802FE380
  c->r[0]=c->r[4]+0x00000007u; // 802FE384
  c->r[5]=c->r[30]|c->r[30]; // 802FE388
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802FE38C
  c->r[3]=0u+0xCC010000u; // 802FE390
  c->ctr=c->r[0]; // 802FE394
  cmps(c,0,(int32_t)c->r[4],0); // 802FE398
  if (!crb(c,1)) { goto L_802FE42C; } // 802FE39C
L_802FE3A0:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3A0
  c->r[6]=c->r[6]+0x00000008u; // 802FE3A4
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE3A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE3AC
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE3B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE3B4
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3B8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE3BC
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE3C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE3C4
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE3CC
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE3D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE3D4
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE3DC
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE3E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE3E4
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE3EC
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE3F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE3F4
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE3F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE3FC
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE400
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE404
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE408
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE40C
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE410
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE414
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE418
  c->r[5]=c->r[5]+0x00000100u; // 802FE41C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE420
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE424
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE3A0; } // 802FE428
L_802FE42C:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 802FE42C
  c->r[0]=c->r[29]-c->r[6]; // 802FE430
  c->r[4]=c->r[30]+c->r[3]; // 802FE434
  c->r[3]=0u+0xCC010000u; // 802FE438
  c->ctr=c->r[0]; // 802FE43C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 802FE440
  if (!crb(c,0)) { goto L_802FE460; } // 802FE444
L_802FE448:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE448
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE44C
  c->r[4]=c->r[4]+0x00000020u; // 802FE450
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE454
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE458
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802FE448; } // 802FE45C
L_802FE460:;
  c->r[11]=c->r[1]+0x00000020u; // 802FE460
  c->lr=0x802FE468u; f_801E79A8(c); // 802FE464
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FE468
  c->lr=c->r[0]; // 802FE46C
  c->r[1]=c->r[1]+0x00000020u; // 802FE470
  return; // 802FE474
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5ColorUc
void f_802FE478(Ctx* __restrict c) {
  trace_call(0x802FE478u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE478
  c->r[0]=c->lr; // 802FE47C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802FE480
  c->r[11]=c->r[1]+0x00000050u; // 802FE484
  c->lr=0x802FE48Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FE488
  c->r[0]=0u+0xFFFFFFFFu; // 802FE48C
  cmps(c,0,(int32_t)c->r[7],0); // 802FE490
  W32(c->r[1]+0x00000010u,c->r[0]); // 802FE494
  c->r[26]=c->r[3]|c->r[3]; // 802FE498
  c->r[27]=c->r[4]|c->r[4]; // 802FE49C
  c->r[28]=c->r[5]|c->r[5]; // 802FE4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FE4A4
  c->r[29]=c->r[6]|c->r[6]; // 802FE4A8
  c->r[30]=c->r[7]|c->r[7]; // 802FE4AC
  c->r[31]=c->r[8]|c->r[8]; // 802FE4B0
  W32(c->r[1]+0x00000018u,c->r[0]); // 802FE4B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802FE4B8
  if (crb(c,2)) { goto L_802FE530; } // 802FE4BC
  c->r[24]=c->r[30]|c->r[30]; // 802FE4C0
  c->r[23]=c->r[1]+0x00000010u; // 802FE4C4
  c->r[25]=0u+0x00000000u; // 802FE4C8
L_802FE4CC:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 802FE4CC
  c->r[5]=c->r[31]|c->r[31]; // 802FE4D0
  c->r[3]=c->r[1]+0x0000000Cu; // 802FE4D4
  c->r[4]=c->r[1]+0x00000008u; // 802FE4D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 802FE4DC
  c->r[0]=R8(c->r[24]+0x00000001u); // 802FE4E0
  W8(c->r[1]+0x00000009u,c->r[0]); // 802FE4E4
  c->r[0]=R8(c->r[24]+0x00000002u); // 802FE4E8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802FE4EC
  c->r[0]=R8(c->r[24]+0x00000003u); // 802FE4F0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802FE4F4
  c->lr=0x802FE4FCu; f_802FDDE0(c); // 802FE4F8
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 802FE4FC
  c->r[25]=c->r[25]+0x00000001u; // 802FE500
  c->r[0]=R8(c->r[1]+0x0000000Du); // 802FE504
  cmps(c,0,(int32_t)c->r[25],4); // 802FE508
  W8(c->r[23]+0x00000000u,c->r[3]); // 802FE50C
  c->r[24]=c->r[24]+0x00000004u; // 802FE510
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 802FE514
  W8(c->r[23]+0x00000001u,c->r[0]); // 802FE518
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802FE51C
  W8(c->r[23]+0x00000002u,c->r[3]); // 802FE520
  W8(c->r[23]+0x00000003u,c->r[0]); // 802FE524
  c->r[23]=c->r[23]+0x00000004u; // 802FE528
  if (crb(c,0)) { IRQCHK(c); goto L_802FE4CC; } // 802FE52C
L_802FE530:;
  c->r[3]=0u-c->r[30]; // 802FE530
  c->r[0]=c->r[1]+0x00000010u; // 802FE534
  c->r[4]=c->r[3]|c->r[30]; // 802FE538
  c->r[5]=c->r[28]|c->r[28]; // 802FE53C
  c->r[7]=sraw(c,c->r[4],31); // 802FE540
  c->r[3]=c->r[26]|c->r[26]; // 802FE544
  c->r[4]=c->r[27]|c->r[27]; // 802FE548
  c->r[6]=c->r[29]|c->r[29]; // 802FE54C
  c->r[7]=c->r[0]&c->r[7]; // 802FE550
  c->lr=0x802FE558u; f_802FDF18(c); // 802FE554
  c->r[11]=c->r[1]+0x00000050u; // 802FE558
  c->lr=0x802FE560u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FE55C
  c->r[0]=R32(c->r[1]+0x00000054u); // 802FE560
  c->lr=c->r[0]; // 802FE564
  c->r[1]=c->r[1]+0x00000050u; // 802FE568
  return; // 802FE56C
}

// DrawLine__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeQ36nw4hbm2ut5Color
void f_802FE570(Ctx* __restrict c) {
  trace_call(0x802FE570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE570
  c->r[0]=c->lr; // 802FE574
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FE578
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FE57C
  c->r[31]=c->r[5]|c->r[5]; // 802FE580
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FE584
  c->r[30]=c->r[4]|c->r[4]; // 802FE588
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FE58C
  c->r[29]=c->r[3]|c->r[3]; // 802FE590
  c->lr=0x802FE598u; f_801E17C4(c); // 802FE594
  c->r[3]=0u+0x00000009u; // 802FE598
  c->r[4]=0u+0x00000001u; // 802FE59C
  c->lr=0x802FE5A4u; f_801E1384(c); // 802FE5A0
  c->r[3]=0u+0x00000000u; // 802FE5A4
  c->r[4]=0u+0x00000009u; // 802FE5A8
  c->r[5]=0u+0x00000000u; // 802FE5AC
  c->r[6]=0u+0x00000004u; // 802FE5B0
  c->r[7]=0u+0x00000000u; // 802FE5B4
  c->lr=0x802FE5BCu; f_801E17F8(c); // 802FE5B8
  c->r[3]=0u+0x00000001u; // 802FE5BC
  c->lr=0x802FE5C4u; f_801E3D74(c); // 802FE5C0
  c->r[3]=0u+0x00000004u; // 802FE5C4
  c->r[4]=0u+0x00000000u; // 802FE5C8
  c->r[5]=0u+0x00000000u; // 802FE5CC
  c->r[6]=0u+0x00000000u; // 802FE5D0
  c->r[7]=0u+0x00000000u; // 802FE5D4
  c->r[8]=0u+0x00000000u; // 802FE5D8
  c->r[9]=0u+0x00000002u; // 802FE5DC
  c->lr=0x802FE5E4u; f_801E3D98(c); // 802FE5E0
  c->r[7]=R8(c->r[31]+0x00000000u); // 802FE5E4
  c->r[4]=c->r[1]+0x00000008u; // 802FE5E8
  c->r[6]=R8(c->r[31]+0x00000001u); // 802FE5EC
  c->r[3]=0u+0x00000004u; // 802FE5F0
  c->r[5]=R8(c->r[31]+0x00000002u); // 802FE5F4
  c->r[0]=R8(c->r[31]+0x00000003u); // 802FE5F8
  W8(c->r[1]+0x00000008u,c->r[7]); // 802FE5FC
  W8(c->r[1]+0x00000009u,c->r[6]); // 802FE600
  W8(c->r[1]+0x0000000Au,c->r[5]); // 802FE604
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802FE608
  c->lr=0x802FE610u; f_801E3C9C(c); // 802FE60C
  c->r[3]=0u+0x00000000u; // 802FE610
  c->lr=0x802FE618u; f_801E1E54(c); // 802FE614
  c->r[3]=0u+0x00000001u; // 802FE618
  c->lr=0x802FE620u; f_801E5914(c); // 802FE61C
  c->r[3]=0u+0x00000000u; // 802FE620
  c->lr=0x802FE628u; f_801E51F8(c); // 802FE624
  c->r[3]=0u+0x00000000u; // 802FE628
  c->r[4]=0u+0x000000FFu; // 802FE62C
  c->r[5]=0u+0x000000FFu; // 802FE630
  c->r[6]=0u+0x00000004u; // 802FE634
  c->lr=0x802FE63Cu; f_801E57B8(c); // 802FE638
  c->r[3]=0u+0x00000000u; // 802FE63C
  c->r[4]=0u+0x00000004u; // 802FE640
  c->lr=0x802FE648u; f_801E52B8(c); // 802FE644
  c->r[3]=0u+0x00000000u; // 802FE648
  c->lr=0x802FE650u; f_801E5218(c); // 802FE64C
  c->r[3]=0u+0x00000000u; // 802FE650
  c->r[4]=0u+0x00000000u; // 802FE654
  c->r[5]=0u+0x00000000u; // 802FE658
  c->lr=0x802FE660u; f_801E563C(c); // 802FE65C
  c->r[3]=0u+0x00000000u; // 802FE660
  c->r[4]=0u+0x00000000u; // 802FE664
  c->r[5]=0u+0x00000001u; // 802FE668
  c->r[6]=0u+0x00000002u; // 802FE66C
  c->r[7]=0u+0x00000003u; // 802FE670
  c->lr=0x802FE678u; f_801E5678(c); // 802FE674
  c->r[3]=0u+0x00000007u; // 802FE678
  c->r[4]=0u+0x00000000u; // 802FE67C
  c->r[5]=0u+0x00000000u; // 802FE680
  c->r[6]=0u+0x00000007u; // 802FE684
  c->r[7]=0u+0x00000000u; // 802FE688
  c->lr=0x802FE690u; f_801E56F4(c); // 802FE68C
  c->r[3]=0u+0x00000001u; // 802FE690
  c->r[4]=0u+0x00000004u; // 802FE694
  c->r[5]=0u+0x00000005u; // 802FE698
  c->r[6]=0u+0x0000000Fu; // 802FE69C
  c->lr=0x802FE6A4u; f_801E5DE8(c); // 802FE6A0
  c->r[3]=0u+0x00000006u; // 802FE6A4
  c->r[4]=0u+0x00000000u; // 802FE6A8
  c->lr=0x802FE6B0u; f_801E2B18(c); // 802FE6AC
  c->r[3]=0u+0x000000B0u; // 802FE6B0
  c->r[4]=0u+0x00000000u; // 802FE6B4
  c->r[5]=0u+0x00000005u; // 802FE6B8
  c->lr=0x802FE6C0u; f_801E28F4(c); // 802FE6BC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE6C0
  c->r[3]=0u+0xCC010000u; // 802FE6C4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE6C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE6CC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FE6D0
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802FE6D4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE6D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE6DC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802FE6E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 802FE6E4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE6E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 802FE6EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE6F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE6F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 802FE6F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 802FE6FC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 802FE700
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FE704
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FE708
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FE70C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FE710
  c->lr=c->r[0]; // 802FE714
  c->r[1]=c->r[1]+0x00000020u; // 802FE718
  return; // 802FE71C
}

// fn_802FE720
void f_802FE720(Ctx* __restrict c) {
  trace_call(0x802FE720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE720
  c->r[0]=c->lr; // 802FE724
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FE728
  c->r[0]=0u+0x80000000u; // 802FE72C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802FE730
  c->r[31]=c->r[5]|c->r[5]; // 802FE734
  W32(c->r[1]+0x00000028u,c->r[30]); // 802FE738
  c->r[30]=c->r[4]|c->r[4]; // 802FE73C
  W32(c->r[1]+0x00000024u,c->r[29]); // 802FE740
  c->r[29]=c->r[3]|c->r[3]; // 802FE744
  c->r[6]=R32(c->r[4]+0x00000008u); // 802FE748
  cmpu(c,0,c->r[6],c->r[0]); // 802FE74C
  if (!crb(c,0)) { goto L_802FE75C; } // 802FE750
  c->r[3]=c->r[30]|c->r[30]; // 802FE754
  c->lr=0x802FE75Cu; f_802EDB8C(c); // 802FE758
L_802FE75C:;
  c->r[3]=c->r[30]|c->r[30]; // 802FE75C
  c->r[4]=c->r[31]|c->r[31]; // 802FE760
  c->lr=0x802FE768u; f_802EDCA0(c); // 802FE764
  c->r[9]=R32(c->r[3]+0x00000000u); // 802FE768
  c->r[31]=c->r[3]|c->r[3]; // 802FE76C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802FE770
  c->r[5]=R8(c->r[9]+0x00000021u); // 802FE774
  c->r[4]=R8(c->r[9]+0x00000022u); // 802FE778
  cmps(c,0,(int32_t)c->r[0],0); // 802FE77C
  c->r[3]=c->r[4]-c->r[5]; // 802FE780
  c->r[0]=c->r[5]-c->r[4]; // 802FE784
  c->r[0]=c->r[3]|c->r[0]; // 802FE788
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 802FE78C
  if (crb(c,2)) { goto L_802FE7CC; } // 802FE790
  c->r[0]=0u+0x00000000u; // 802FE794
  c->r[3]=c->r[29]|c->r[29]; // 802FE798
  W32(c->r[1]+0x00000008u,c->r[0]); // 802FE79C
  c->r[4]=R32(c->r[9]+0x00000008u); // 802FE7A0
  c->r[5]=R16(c->r[9]+0x00000002u); // 802FE7A4
  c->r[6]=R16(c->r[9]+0x00000000u); // 802FE7A8
  c->r[7]=R32(c->r[9]+0x00000004u); // 802FE7AC
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 802FE7B0
  c->r[9]=R32(c->r[9]+0x00000010u); // 802FE7B4
  c->lr=0x802FE7BCu; f_801E422C(c); // 802FE7B8
  c->r[4]=R32(c->r[31]+0x00000004u); // 802FE7BC
  c->r[3]=c->r[29]|c->r[29]; // 802FE7C0
  c->lr=0x802FE7C8u; f_801E43BC(c); // 802FE7C4
  goto L_802FE7EC; // 802FE7C8
L_802FE7CC:;
  c->r[4]=R32(c->r[9]+0x00000008u); // 802FE7CC
  c->r[3]=c->r[29]|c->r[29]; // 802FE7D0
  c->r[5]=R16(c->r[9]+0x00000002u); // 802FE7D4
  c->r[6]=R16(c->r[9]+0x00000000u); // 802FE7D8
  c->r[7]=R32(c->r[9]+0x00000004u); // 802FE7DC
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 802FE7E0
  c->r[9]=R32(c->r[9]+0x00000010u); // 802FE7E4
  c->lr=0x802FE7ECu; f_801E4020(c); // 802FE7E8
L_802FE7EC:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 802FE7EC
  c->r[5]=0u+0x43300000u; // 802FE7F0
  W32(c->r[1]+0x00000010u,c->r[5]); // 802FE7F4
  c->r[3]=c->r[29]|c->r[29]; // 802FE7F8
  c->r[4]=R8(c->r[7]+0x00000021u); // 802FE7FC
  c->r[6]=0u+0x00000000u; // 802FE800
  c->r[0]=R8(c->r[7]+0x00000022u); // 802FE804
  c->r[8]=0u+0x00000000u; // 802FE808
  W32(c->r[1]+0x00000014u,c->r[4]); // 802FE80C
  {uint32_t ea=c->r[2]+0xFFFFD058u; c->f[2]=RF64(ea);} // 802FE810
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802FE814
  W32(c->r[1]+0x00000018u,c->r[5]); // 802FE818
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 802FE81C
  c->r[4]=R32(c->r[7]+0x00000014u); // 802FE820
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802FE824
  c->r[5]=R32(c->r[7]+0x00000018u); // 802FE828
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 802FE82C
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802FE830
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 802FE834
  c->r[7]=R8(c->r[7]+0x00000020u); // 802FE838
  c->lr=0x802FE840u; f_801E4274(c); // 802FE83C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802FE840
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802FE844
  c->r[30]=R32(c->r[1]+0x00000028u); // 802FE848
  c->r[29]=R32(c->r[1]+0x00000024u); // 802FE84C
  c->lr=c->r[0]; // 802FE850
  c->r[1]=c->r[1]+0x00000030u; // 802FE854
  return; // 802FE858
}

// fn_802FE85C
void f_802FE85C(Ctx* __restrict c) {
  trace_call(0x802FE85Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE85C
  c->r[0]=c->lr; // 802FE860
  c->r[4]=0u+0x804D0000u; // 802FE864
  {uint32_t ea=c->r[2]+0xFFFFD060u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FE868
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FE86C
  c->r[4]=c->r[4]+0xFFFF8FA0u; // 802FE870
  {uint32_t ea=c->r[2]+0xFFFFD064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FE874
  c->r[5]=0u+0x00000001u; // 802FE878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FE87C
  c->r[31]=c->r[3]|c->r[3]; // 802FE880
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FE884
  c->r[4]=0u+0x00000000u; // 802FE888
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 802FE88C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 802FE890
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 802FE894
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 802FE898
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 802FE89C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 802FE8A0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 802FE8A4
  c->r[3]=c->r[3]+0x00000050u; // 802FE8A8
  c->lr=0x802FE8B0u; f_8000443C(c); // 802FE8AC
  c->r[3]=c->r[31]+0x00000004u; // 802FE8B0
  c->lr=0x802FE8B8u; f_801C5A1C(c); // 802FE8B4
  c->r[3]=c->r[31]|c->r[31]; // 802FE8B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FE8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FE8C0
  c->lr=c->r[0]; // 802FE8C4
  c->r[1]=c->r[1]+0x00000010u; // 802FE8C8
  return; // 802FE8CC
}

// fn_802FE8D0
void f_802FE8D0(Ctx* __restrict c) {
  trace_call(0x802FE8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE8D0
  c->r[0]=c->lr; // 802FE8D4
  cmps(c,0,(int32_t)c->r[3],0); // 802FE8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FE8DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802FE8E0
  c->r[31]=c->r[3]|c->r[3]; // 802FE8E4
  if (crb(c,2)) { goto L_802FE8F8; } // 802FE8E8
  cmps(c,0,(int32_t)c->r[4],0); // 802FE8EC
  if (!crb(c,1)) { goto L_802FE8F8; } // 802FE8F0
  c->lr=0x802FE8F8u; f_8001AAC0(c); // 802FE8F4
L_802FE8F8:;
  c->r[3]=c->r[31]|c->r[31]; // 802FE8F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802FE8FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802FE900
  c->lr=c->r[0]; // 802FE904
  c->r[1]=c->r[1]+0x00000010u; // 802FE908
  return; // 802FE90C
}

// fn_802FE910
void f_802FE910(Ctx* __restrict c) {
  trace_call(0x802FE910u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FE910
  c->r[0]=c->lr; // 802FE914
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FE918
  c->r[11]=c->r[1]+0x00000040u; // 802FE91C
  c->lr=0x802FE924u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FE920
  c->r[28]=0u+0x00000000u; // 802FE924
  c->r[6]=0u+0x804D0000u; // 802FE928
  W32(c->r[3]+0x00000010u,c->r[28]); // 802FE92C
  c->r[7]=c->r[3]+0x00000010u; // 802FE930
  c->r[6]=c->r[6]+0xFFFF8FB0u; // 802FE934
  c->r[22]=c->r[4]|c->r[4]; // 802FE938
  W32(c->r[3]+0x00000014u,c->r[28]); // 802FE93C
  c->r[23]=c->r[5]|c->r[5]; // 802FE940
  c->r[21]=c->r[3]|c->r[3]; // 802FE944
  c->r[5]=0u+0x00000010u; // 802FE948
  W32(c->r[3]+0x00000000u,c->r[6]); // 802FE94C
  c->r[4]=c->r[4]+0x00000008u; // 802FE950
  W32(c->r[3]+0x00000004u,c->r[28]); // 802FE954
  W32(c->r[3]+0x00000008u,c->r[28]); // 802FE958
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 802FE95C
  W32(c->r[3]+0x00000010u,c->r[7]); // 802FE960
  W32(c->r[3]+0x00000014u,c->r[7]); // 802FE964
  W8(c->r[3]+0x00000028u,c->r[28]); // 802FE968
  c->r[3]=c->r[3]+0x00000018u; // 802FE96C
  c->lr=0x802FE974u; f_80004338(c); // 802FE970
  c->r[25]=c->r[22]+0x0000001Cu; // 802FE974
  c->r[24]=0u+0x00000000u; // 802FE978
  c->r[26]=0u+0x00000000u; // 802FE97C
  c->r[30]=0u+0x804D0000u; // 802FE980
  c->r[31]=0u+0x804D0000u; // 802FE984
  goto L_802FEA18; // 802FE988
L_802FE98C:;
  c->r[12]=R32(c->r[23]+0x00000000u); // 802FE98C
  c->r[3]=c->r[23]|c->r[23]; // 802FE990
  c->r[4]=c->r[25]+c->r[26]; // 802FE994
  c->r[5]=0u+0x00000001u; // 802FE998
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 802FE99C
  c->ctr=c->r[12]; // 802FE9A0
  if (true) { c->lr=0x802FE9A8u; dispatch(c,c->ctr); } // 802FE9A4
  cmps(c,0,(int32_t)c->r[3],0); // 802FE9A8
  c->r[29]=c->r[3]|c->r[3]; // 802FE9AC
  if (crb(c,2)) { goto L_802FEA10; } // 802FE9B0
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FE9B4
  c->r[4]=0u+0x0000000Cu; // 802FE9B8
  c->lr=0x802FE9C0u; f_80201D90(c); // 802FE9BC
  cmps(c,0,(int32_t)c->r[3],0); // 802FE9C0
  if (crb(c,2)) { goto L_802FEA10; } // 802FE9C4
  c->r[27]=c->r[3]|c->r[3]; // 802FE9C8
  if (crb(c,2)) { goto L_802FE9D8; } // 802FE9CC
  W32(c->r[3]+0x00000000u,c->r[28]); // 802FE9D0
  W32(c->r[3]+0x00000004u,c->r[28]); // 802FE9D4
L_802FE9D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FE9D8
  W32(c->r[3]+0x00000008u,c->r[29]); // 802FE9DC
  c->r[29]=c->r[21]+0x00000010u; // 802FE9E0
  if (!crb(c,2)) { goto L_802FE9FC; } // 802FE9E4
  c->r[3]=c->r[30]+0xFFFF9070u; // 802FE9E8
  c->r[5]=c->r[31]+0xFFFF904Cu; // 802FE9EC
  c->r[4]=0u+0x00000233u; // 802FE9F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FE9F4
  c->lr=0x802FE9FCu; f_802FA328(c); // 802FE9F8
L_802FE9FC:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 802FE9FC
  c->r[5]=c->r[27]|c->r[27]; // 802FEA00
  c->r[3]=c->r[21]+0x0000000Cu; // 802FEA04
  c->r[4]=c->r[1]+0x00000008u; // 802FEA08
  c->lr=0x802FEA10u; f_8032FC8C(c); // 802FEA0C
L_802FEA10:;
  c->r[26]=c->r[26]+0x00000010u; // 802FEA10
  c->r[24]=c->r[24]+0x00000001u; // 802FEA14
L_802FEA18:;
  c->r[0]=R16(c->r[22]+0x00000018u); // 802FEA18
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 802FEA1C
  if (crb(c,0)) { IRQCHK(c); goto L_802FE98C; } // 802FEA20
  c->r[11]=c->r[1]+0x00000040u; // 802FEA24
  c->r[3]=c->r[21]|c->r[21]; // 802FEA28
  c->lr=0x802FEA30u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FEA2C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FEA30
  c->lr=c->r[0]; // 802FEA34
  c->r[1]=c->r[1]+0x00000040u; // 802FEA38
  return; // 802FEA3C
}

// fn_802FEA40
void f_802FEA40(Ctx* __restrict c) {
  trace_call(0x802FEA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FEA40
  c->r[0]=c->lr; // 802FEA44
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FEA48
  c->r[11]=c->r[1]+0x00000040u; // 802FEA4C
  c->lr=0x802FEA54u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FEA50
  cmps(c,0,(int32_t)c->r[3],0); // 802FEA54
  c->r[23]=c->r[3]|c->r[3]; // 802FEA58
  c->r[24]=c->r[4]|c->r[4]; // 802FEA5C
  if (crb(c,2)) { goto L_802FEB10; } // 802FEA60
  c->r[4]=0u+0x804D0000u; // 802FEA64
  c->r[31]=R32(c->r[3]+0x00000010u); // 802FEA68
  c->r[4]=c->r[4]+0xFFFF8FB0u; // 802FEA6C
  c->r[30]=c->r[3]+0x00000010u; // 802FEA70
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FEA74
  c->r[26]=0u+0x804D0000u; // 802FEA78
  c->r[27]=0u+0x804D0000u; // 802FEA7C
  c->r[28]=0u+0x804D0000u; // 802FEA80
  c->r[29]=0u+0x804D0000u; // 802FEA84
  goto L_802FEAE8; // 802FEA88
L_802FEA8C:;
  c->r[25]=c->r[31]|c->r[31]; // 802FEA8C
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FEA90
  c->r[3]=c->r[23]+0x0000000Cu; // 802FEA94
  c->r[4]=c->r[1]+0x00000008u; // 802FEA98
  W32(c->r[1]+0x00000008u,c->r[25]); // 802FEA9C
  c->lr=0x802FEAA4u; f_8032FA44(c); // 802FEAA0
  cmps(c,0,(int32_t)c->r[25],0); // 802FEAA4
  if (!crb(c,2)) { goto L_802FEAC0; } // 802FEAA8
  c->r[3]=c->r[26]+0xFFFF814Cu; // 802FEAAC
  c->r[5]=c->r[27]+0xFFFF8128u; // 802FEAB0
  c->r[4]=0u+0x0000023Du; // 802FEAB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEAB8
  c->lr=0x802FEAC0u; f_802FA328(c); // 802FEABC
L_802FEAC0:;
  cmps(c,0,(int32_t)c->r[25],0); // 802FEAC0
  if (!crb(c,2)) { goto L_802FEADC; } // 802FEAC4
  c->r[3]=c->r[28]+0xFFFF90A0u; // 802FEAC8
  c->r[5]=c->r[29]+0xFFFF907Cu; // 802FEACC
  c->r[4]=0u+0x00000193u; // 802FEAD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEAD4
  c->lr=0x802FEADCu; f_802FA328(c); // 802FEAD8
L_802FEADC:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FEADC
  c->r[4]=c->r[25]|c->r[25]; // 802FEAE0
  c->lr=0x802FEAE8u; f_80201DA0(c); // 802FEAE4
L_802FEAE8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FEAE8
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEA8C; } // 802FEAEC
  c->r[3]=addc(c,c->r[23],0x0000000Cu,0); cr0(c,c->r[3]); // 802FEAF0
  if (crb(c,2)) { goto L_802FEB00; } // 802FEAF4
  c->r[4]=0u+0x00000000u; // 802FEAF8
  c->lr=0x802FEB00u; f_8032F918(c); // 802FEAFC
L_802FEB00:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FEB00
  if (!crb(c,1)) { goto L_802FEB10; } // 802FEB04
  c->r[3]=c->r[23]|c->r[23]; // 802FEB08
  c->lr=0x802FEB10u; f_8001AAC0(c); // 802FEB0C
L_802FEB10:;
  c->r[11]=c->r[1]+0x00000040u; // 802FEB10
  c->r[3]=c->r[23]|c->r[23]; // 802FEB14
  c->lr=0x802FEB1Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FEB18
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FEB1C
  c->lr=c->r[0]; // 802FEB20
  c->r[1]=c->r[1]+0x00000040u; // 802FEB24
  return; // 802FEB28
}

// fn_802FEB2C
void f_802FEB2C(Ctx* __restrict c) {
  trace_call(0x802FEB2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FEB2C
  c->r[0]=c->lr; // 802FEB30
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FEB34
  c->r[11]=c->r[1]+0x00000040u; // 802FEB38
  c->lr=0x802FEB40u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FEB3C
  cmps(c,0,(int32_t)c->r[3],0); // 802FEB40
  c->r[23]=c->r[3]|c->r[3]; // 802FEB44
  c->r[24]=c->r[4]|c->r[4]; // 802FEB48
  if (crb(c,2)) { goto L_802FEC50; } // 802FEB4C
  c->r[31]=R32(c->r[3]+0x00000004u); // 802FEB50
  c->r[30]=c->r[3]+0x00000004u; // 802FEB54
  c->r[26]=0u+0x804D0000u; // 802FEB58
  c->r[27]=0u+0x804D0000u; // 802FEB5C
  c->r[28]=0u+0x804D0000u; // 802FEB60
  c->r[29]=0u+0x804D0000u; // 802FEB64
  goto L_802FEC24; // 802FEB68
L_802FEB6C:;
  c->r[25]=c->r[31]|c->r[31]; // 802FEB6C
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FEB70
  c->r[3]=c->r[23]|c->r[23]; // 802FEB74
  c->r[4]=c->r[1]+0x00000008u; // 802FEB78
  W32(c->r[1]+0x00000008u,c->r[25]); // 802FEB7C
  c->lr=0x802FEB84u; f_8032FA44(c); // 802FEB80
  cmps(c,0,(int32_t)c->r[25],0); // 802FEB84
  if (!crb(c,2)) { goto L_802FEBA0; } // 802FEB88
  c->r[3]=c->r[26]+0xFFFF9040u; // 802FEB8C
  c->r[5]=c->r[27]+0xFFFF901Cu; // 802FEB90
  c->r[4]=0u+0x0000023Du; // 802FEB94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEB98
  c->lr=0x802FEBA0u; f_802FA328(c); // 802FEB9C
L_802FEBA0:;
  c->r[0]=R8(c->r[25]+0x00000024u); // 802FEBA0
  cmps(c,0,(int32_t)c->r[0],0); // 802FEBA4
  if (!crb(c,2)) { goto L_802FEC24; } // 802FEBA8
  cmps(c,0,(int32_t)c->r[25],0); // 802FEBAC
  if (!crb(c,2)) { goto L_802FEBC8; } // 802FEBB0
  c->r[3]=c->r[26]+0xFFFF9040u; // 802FEBB4
  c->r[5]=c->r[27]+0xFFFF901Cu; // 802FEBB8
  c->r[4]=0u+0x0000023Du; // 802FEBBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEBC0
  c->lr=0x802FEBC8u; f_802FA328(c); // 802FEBC4
L_802FEBC8:;
  c->r[12]=R32(c->r[25]+0xFFFFFFFCu); // 802FEBC8
  c->r[3]=c->r[25]+0xFFFFFFFCu; // 802FEBCC
  c->r[4]=0u+0xFFFFFFFFu; // 802FEBD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802FEBD4
  c->ctr=c->r[12]; // 802FEBD8
  if (true) { c->lr=0x802FEBE0u; dispatch(c,c->ctr); } // 802FEBDC
  cmps(c,0,(int32_t)c->r[25],0); // 802FEBE0
  if (!crb(c,2)) { goto L_802FEBFC; } // 802FEBE4
  c->r[3]=c->r[26]+0xFFFF9040u; // 802FEBE8
  c->r[5]=c->r[27]+0xFFFF901Cu; // 802FEBEC
  c->r[4]=0u+0x0000023Du; // 802FEBF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEBF4
  c->lr=0x802FEBFCu; f_802FA328(c); // 802FEBF8
L_802FEBFC:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FEBFC
  if (!crb(c,2)) { goto L_802FEC18; } // 802FEC00
  c->r[3]=c->r[28]+0xFFFF9010u; // 802FEC04
  c->r[5]=c->r[29]+0xFFFF8FECu; // 802FEC08
  c->r[4]=0u+0x00000193u; // 802FEC0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEC10
  c->lr=0x802FEC18u; f_802FA328(c); // 802FEC14
L_802FEC18:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FEC18
  c->r[4]=c->r[25]|c->r[25]; // 802FEC1C
  c->lr=0x802FEC24u; f_80201DA0(c); // 802FEC20
L_802FEC24:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FEC24
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEB6C; } // 802FEC28
  cmps(c,0,(int32_t)c->r[23],0); // 802FEC2C
  if (crb(c,2)) { goto L_802FEC40; } // 802FEC30
  c->r[3]=c->r[23]|c->r[23]; // 802FEC34
  c->r[4]=0u+0x00000000u; // 802FEC38
  c->lr=0x802FEC40u; f_8032F918(c); // 802FEC3C
L_802FEC40:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FEC40
  if (!crb(c,1)) { goto L_802FEC50; } // 802FEC44
  c->r[3]=c->r[23]|c->r[23]; // 802FEC48
  c->lr=0x802FEC50u; f_8001AAC0(c); // 802FEC4C
L_802FEC50:;
  c->r[11]=c->r[1]+0x00000040u; // 802FEC50
  c->r[3]=c->r[23]|c->r[23]; // 802FEC54
  c->lr=0x802FEC5Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FEC58
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FEC5C
  c->lr=c->r[0]; // 802FEC60
  c->r[1]=c->r[1]+0x00000040u; // 802FEC64
  return; // 802FEC68
}

// fn_802FEC6C
void f_802FEC6C(Ctx* __restrict c) {
  trace_call(0x802FEC6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FEC6C
  c->r[0]=c->lr; // 802FEC70
  cmps(c,0,(int32_t)c->r[4],0); // 802FEC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FEC78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FEC7C
  c->r[31]=c->r[3]+0x00000004u; // 802FEC80
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FEC84
  c->r[30]=c->r[4]|c->r[4]; // 802FEC88
  W32(c->r[1]+0x00000014u,c->r[29]); // 802FEC8C
  c->r[29]=c->r[3]|c->r[3]; // 802FEC90
  if (!crb(c,2)) { goto L_802FECB4; } // 802FEC94
  c->r[3]=0u+0x804D0000u; // 802FEC98
  c->r[5]=0u+0x804D0000u; // 802FEC9C
  c->r[3]=c->r[3]+0xFFFF8FE0u; // 802FECA0
  c->r[4]=0u+0x00000233u; // 802FECA4
  c->r[5]=c->r[5]+0xFFFF8FBCu; // 802FECA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FECAC
  c->lr=0x802FECB4u; f_802FA328(c); // 802FECB0
L_802FECB4:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 802FECB4
  c->r[3]=c->r[29]|c->r[29]; // 802FECB8
  c->r[4]=c->r[1]+0x00000008u; // 802FECBC
  c->r[5]=c->r[30]+0x00000004u; // 802FECC0
  c->lr=0x802FECC8u; f_8032FC8C(c); // 802FECC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FECC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FECCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FECD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802FECD4
  c->lr=c->r[0]; // 802FECD8
  c->r[1]=c->r[1]+0x00000020u; // 802FECDC
  return; // 802FECE0
}

// fn_802FECE4
void f_802FECE4(Ctx* __restrict c) {
  trace_call(0x802FECE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FECE4
  c->r[0]=c->lr; // 802FECE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FECEC
  c->r[11]=c->r[1]+0x00000020u; // 802FECF0
  c->lr=0x802FECF8u; f_801E795C(c); // 802FECF4
  c->r[31]=R32(c->r[3]+0x00000004u); // 802FECF8
  c->r[27]=c->r[4]|c->r[4]; // 802FECFC
  c->r[30]=c->r[3]+0x00000004u; // 802FED00
  c->r[28]=0u+0x804D0000u; // 802FED04
  c->r[29]=0u+0x804D0000u; // 802FED08
  goto L_802FED94; // 802FED0C
L_802FED10:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FED10
  if (!crb(c,2)) { goto L_802FED2C; } // 802FED14
  c->r[3]=c->r[28]+0xFFFF9040u; // 802FED18
  c->r[5]=c->r[29]+0xFFFF901Cu; // 802FED1C
  c->r[4]=0u+0x0000023Du; // 802FED20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FED24
  c->lr=0x802FED2Cu; f_802FA328(c); // 802FED28
L_802FED2C:;
  c->r[4]=c->r[27]|c->r[27]; // 802FED2C
  c->r[3]=c->r[31]+0x00000014u; // 802FED30
  c->lr=0x802FED38u; f_802FD9DC(c); // 802FED34
  cmps(c,0,(int32_t)c->r[3],0); // 802FED38
  if (crb(c,2)) { goto L_802FED90; } // 802FED3C
  cmps(c,0,(int32_t)c->r[31],0); // 802FED40
  if (!crb(c,2)) { goto L_802FED64; } // 802FED44
  c->r[3]=0u+0x804D0000u; // 802FED48
  c->r[5]=0u+0x804D0000u; // 802FED4C
  c->r[3]=c->r[3]+0xFFFF9040u; // 802FED50
  c->r[4]=0u+0x0000023Du; // 802FED54
  c->r[5]=c->r[5]+0xFFFF901Cu; // 802FED58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FED5C
  c->lr=0x802FED64u; f_802FA328(c); // 802FED60
L_802FED64:;
  c->r[28]=addc(c,c->r[31],0xFFFFFFFCu,0); cr0(c,c->r[28]); // 802FED64
  if (!crb(c,2)) { goto L_802FED88; } // 802FED68
  c->r[3]=0u+0x804D0000u; // 802FED6C
  c->r[5]=0u+0x804D0000u; // 802FED70
  c->r[3]=c->r[3]+0xFFFF9010u; // 802FED74
  c->r[4]=0u+0x00000193u; // 802FED78
  c->r[5]=c->r[5]+0xFFFF8FECu; // 802FED7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FED80
  c->lr=0x802FED88u; f_802FA328(c); // 802FED84
L_802FED88:;
  c->r[3]=c->r[28]|c->r[28]; // 802FED88
  goto L_802FEDA0; // 802FED8C
L_802FED90:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FED90
L_802FED94:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FED94
  if (!crb(c,2)) { IRQCHK(c); goto L_802FED10; } // 802FED98
  c->r[3]=0u+0x00000000u; // 802FED9C
L_802FEDA0:;
  c->r[11]=c->r[1]+0x00000020u; // 802FEDA0
  c->lr=0x802FEDA8u; f_801E79A8(c); // 802FEDA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802FEDA8
  c->lr=c->r[0]; // 802FEDAC
  c->r[1]=c->r[1]+0x00000020u; // 802FEDB0
  return; // 802FEDB4
}

// fn_802FEDB8
void f_802FEDB8(Ctx* __restrict c) {
  trace_call(0x802FEDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FEDB8
  c->r[0]=c->lr; // 802FEDBC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FEDC0
  c->r[11]=c->r[1]+0x00000040u; // 802FEDC4
  c->lr=0x802FEDCCu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FEDC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FEDCC
  c->r[18]=c->r[3]|c->r[3]; // 802FEDD0
  c->r[31]=c->r[4]|c->r[4]; // 802FEDD4
  c->r[21]=c->r[13]+0xFFFFA608u; // 802FEDD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FEDDC
  c->ctr=c->r[12]; // 802FEDE0
  if (true) { c->lr=0x802FEDE8u; dispatch(c,c->ctr); } // 802FEDE4
  goto L_802FEE00; // 802FEDE8
L_802FEDEC:;
  cmpu(c,0,c->r[3],c->r[21]); // 802FEDEC
  if (!crb(c,2)) { goto L_802FEDFC; } // 802FEDF0
  c->r[0]=0u+0x00000001u; // 802FEDF4
  goto L_802FEE0C; // 802FEDF8
L_802FEDFC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FEDFC
L_802FEE00:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEE00
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEDEC; } // 802FEE04
  c->r[0]=0u+0x00000000u; // 802FEE08
L_802FEE0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FEE0C
  if (crb(c,2)) { goto L_802FEE1C; } // 802FEE10
  c->r[3]=c->r[18]|c->r[18]; // 802FEE14
  goto L_802FEE20; // 802FEE18
L_802FEE1C:;
  c->r[3]=0u+0x00000000u; // 802FEE1C
L_802FEE20:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEE20
  if (crb(c,2)) { goto L_802FEE2C; } // 802FEE24
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FEE28
L_802FEE2C:;
  c->r[30]=R32(c->r[18]+0x00000014u); // 802FEE2C
  c->r[27]=c->r[18]+0x00000014u; // 802FEE30
  c->r[21]=0u+0x804D0000u; // 802FEE34
  c->r[22]=0u+0x804D0000u; // 802FEE38
  c->r[23]=0u+0x804D0000u; // 802FEE3C
  c->r[24]=0u+0x804D0000u; // 802FEE40
  c->r[19]=c->r[13]+0xFFFFA608u; // 802FEE44
  c->r[20]=c->r[13]+0xFFFFA608u; // 802FEE48
  goto L_802FEFE4; // 802FEE4C
L_802FEE50:;
  cmps(c,0,(int32_t)c->r[30],0); // 802FEE50
  if (!crb(c,2)) { goto L_802FEE6C; } // 802FEE54
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FEE58
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FEE5C
  c->r[4]=0u+0x0000023Du; // 802FEE60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEE64
  c->lr=0x802FEE6Cu; f_802FA328(c); // 802FEE68
L_802FEE6C:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FEE6C
  if (!crb(c,2)) { goto L_802FEE88; } // 802FEE70
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FEE74
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FEE78
  c->r[4]=0u+0x00000193u; // 802FEE7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEE80
  c->lr=0x802FEE88u; f_802FA328(c); // 802FEE84
L_802FEE88:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802FEE88
  c->r[3]=c->r[25]|c->r[25]; // 802FEE8C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FEE90
  c->ctr=c->r[12]; // 802FEE94
  if (true) { c->lr=0x802FEE9Cu; dispatch(c,c->ctr); } // 802FEE98
  goto L_802FEEB4; // 802FEE9C
L_802FEEA0:;
  cmpu(c,0,c->r[3],c->r[20]); // 802FEEA0
  if (!crb(c,2)) { goto L_802FEEB0; } // 802FEEA4
  c->r[0]=0u+0x00000001u; // 802FEEA8
  goto L_802FEEC0; // 802FEEAC
L_802FEEB0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FEEB0
L_802FEEB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEEB4
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEEA0; } // 802FEEB8
  c->r[0]=0u+0x00000000u; // 802FEEBC
L_802FEEC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FEEC0
  if (crb(c,2)) { goto L_802FEED0; } // 802FEEC4
  c->r[3]=c->r[25]|c->r[25]; // 802FEEC8
  goto L_802FEED4; // 802FEECC
L_802FEED0:;
  c->r[3]=0u+0x00000000u; // 802FEED0
L_802FEED4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEED4
  if (crb(c,2)) { goto L_802FEEE0; } // 802FEED8
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FEEDC
L_802FEEE0:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 802FEEE0
  c->r[26]=c->r[25]+0x00000014u; // 802FEEE4
  goto L_802FEFD8; // 802FEEE8
L_802FEEEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FEEEC
  if (!crb(c,2)) { goto L_802FEF08; } // 802FEEF0
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FEEF4
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FEEF8
  c->r[4]=0u+0x0000023Du; // 802FEEFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEF00
  c->lr=0x802FEF08u; f_802FA328(c); // 802FEF04
L_802FEF08:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FEF08
  if (!crb(c,2)) { goto L_802FEF24; } // 802FEF0C
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FEF10
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FEF14
  c->r[4]=0u+0x00000193u; // 802FEF18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEF1C
  c->lr=0x802FEF24u; f_802FA328(c); // 802FEF20
L_802FEF24:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802FEF24
  c->r[3]=c->r[25]|c->r[25]; // 802FEF28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FEF2C
  c->ctr=c->r[12]; // 802FEF30
  if (true) { c->lr=0x802FEF38u; dispatch(c,c->ctr); } // 802FEF34
  goto L_802FEF50; // 802FEF38
L_802FEF3C:;
  cmpu(c,0,c->r[3],c->r[19]); // 802FEF3C
  if (!crb(c,2)) { goto L_802FEF4C; } // 802FEF40
  c->r[0]=0u+0x00000001u; // 802FEF44
  goto L_802FEF5C; // 802FEF48
L_802FEF4C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FEF4C
L_802FEF50:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEF50
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEF3C; } // 802FEF54
  c->r[0]=0u+0x00000000u; // 802FEF58
L_802FEF5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FEF5C
  if (crb(c,2)) { goto L_802FEF6C; } // 802FEF60
  c->r[3]=c->r[25]|c->r[25]; // 802FEF64
  goto L_802FEF70; // 802FEF68
L_802FEF6C:;
  c->r[3]=0u+0x00000000u; // 802FEF6C
L_802FEF70:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FEF70
  if (crb(c,2)) { goto L_802FEF7C; } // 802FEF74
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FEF78
L_802FEF7C:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 802FEF7C
  goto L_802FEFCC; // 802FEF80
L_802FEF84:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FEF84
  if (!crb(c,2)) { goto L_802FEFA0; } // 802FEF88
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FEF8C
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FEF90
  c->r[4]=0u+0x0000023Du; // 802FEF94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEF98
  c->lr=0x802FEFA0u; f_802FA328(c); // 802FEF9C
L_802FEFA0:;
  c->r[18]=addc(c,c->r[28],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802FEFA0
  if (!crb(c,2)) { goto L_802FEFBC; } // 802FEFA4
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FEFA8
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FEFAC
  c->r[4]=0u+0x00000193u; // 802FEFB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FEFB4
  c->lr=0x802FEFBCu; f_802FA328(c); // 802FEFB8
L_802FEFBC:;
  c->r[3]=c->r[18]|c->r[18]; // 802FEFBC
  c->r[4]=c->r[31]|c->r[31]; // 802FEFC0
  c->lr=0x802FEFC8u; f_802FEDB8(c); // 802FEFC4
  c->r[28]=R32(c->r[28]+0x00000000u); // 802FEFC8
L_802FEFCC:;
  cmpu(c,0,c->r[28],c->r[25]); // 802FEFCC
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEF84; } // 802FEFD0
  c->r[29]=R32(c->r[29]+0x00000000u); // 802FEFD4
L_802FEFD8:;
  cmpu(c,0,c->r[29],c->r[26]); // 802FEFD8
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEEEC; } // 802FEFDC
  c->r[30]=R32(c->r[30]+0x00000000u); // 802FEFE0
L_802FEFE4:;
  cmpu(c,0,c->r[30],c->r[27]); // 802FEFE4
  if (!crb(c,2)) { IRQCHK(c); goto L_802FEE50; } // 802FEFE8
  c->r[11]=c->r[1]+0x00000040u; // 802FEFEC
  c->lr=0x802FEFF4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FEFF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FEFF4
  c->lr=c->r[0]; // 802FEFF8
  c->r[1]=c->r[1]+0x00000040u; // 802FEFFC
  return; // 802FF000
}

// fn_802FF004
void f_802FF004(Ctx* __restrict c) {
  trace_call(0x802FF004u);
  c->r[0]=0u+0x00000000u; // 802FF004
  {uint32_t ea=c->r[2]+0xFFFFD068u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FF008
  c->r[4]=0u+0x804D0000u; // 802FF00C
  W32(c->r[3]+0x00000008u,c->r[0]); // 802FF010
  c->r[5]=c->r[3]+0x00000008u; // 802FF014
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802FF018
  c->r[4]=c->r[4]+0xFFFF91F0u; // 802FF01C
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FF020
  W32(c->r[3]+0x00000004u,c->r[0]); // 802FF024
  W32(c->r[3]+0x00000008u,c->r[5]); // 802FF028
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 802FF02C
  W32(c->r[3]+0x00000010u,c->r[0]); // 802FF030
  W32(c->r[3]+0x00000014u,c->r[0]); // 802FF034
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802FF038
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802FF03C
  W8(c->r[3]+0x00000020u,c->r[0]); // 802FF040
  return; // 802FF044
}

// fn_802FF048
void f_802FF048(Ctx* __restrict c) {
  trace_call(0x802FF048u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FF048
  c->r[0]=c->lr; // 802FF04C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FF050
  c->r[11]=c->r[1]+0x00000040u; // 802FF054
  c->lr=0x802FF05Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FF058
  cmps(c,0,(int32_t)c->r[3],0); // 802FF05C
  c->r[23]=c->r[3]|c->r[3]; // 802FF060
  c->r[24]=c->r[4]|c->r[4]; // 802FF064
  if (crb(c,2)) { goto L_802FF1A8; } // 802FF068
  c->r[0]=R32(c->r[3]+0x00000014u); // 802FF06C
  c->r[4]=0u+0x804D0000u; // 802FF070
  c->r[4]=c->r[4]+0xFFFF91F0u; // 802FF074
  cmps(c,0,(int32_t)c->r[0],0); // 802FF078
  W32(c->r[3]+0x00000000u,c->r[4]); // 802FF07C
  if (crb(c,2)) { goto L_802FF09C; } // 802FF080
  c->r[3]=c->r[0]|c->r[0]; // 802FF084
  c->r[4]=0u+0xFFFFFFFFu; // 802FF088
  c->lr=0x802FF090u; f_802FEB2C(c); // 802FF08C
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF090
  c->r[4]=R32(c->r[23]+0x00000014u); // 802FF094
  c->lr=0x802FF09Cu; f_80201DA0(c); // 802FF098
L_802FF09C:;
  c->r[3]=R32(c->r[23]+0x00000010u); // 802FF09C
  cmps(c,0,(int32_t)c->r[3],0); // 802FF0A0
  if (crb(c,2)) { goto L_802FF0D4; } // 802FF0A4
  c->r[0]=R8(c->r[3]+0x000000D0u); // 802FF0A8
  cmps(c,0,(int32_t)c->r[0],0); // 802FF0AC
  if (!crb(c,2)) { goto L_802FF0D4; } // 802FF0B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF0B4
  c->r[4]=0u+0xFFFFFFFFu; // 802FF0B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802FF0BC
  c->ctr=c->r[12]; // 802FF0C0
  if (true) { c->lr=0x802FF0C8u; dispatch(c,c->ctr); } // 802FF0C4
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF0C8
  c->r[4]=R32(c->r[23]+0x00000010u); // 802FF0CC
  c->lr=0x802FF0D4u; f_80201DA0(c); // 802FF0D0
L_802FF0D4:;
  c->r[31]=R32(c->r[23]+0x00000008u); // 802FF0D4
  c->r[30]=c->r[23]+0x00000008u; // 802FF0D8
  c->r[26]=0u+0x804D0000u; // 802FF0DC
  c->r[27]=0u+0x804D0000u; // 802FF0E0
  c->r[28]=0u+0x804D0000u; // 802FF0E4
  c->r[29]=0u+0x804D0000u; // 802FF0E8
  goto L_802FF180; // 802FF0EC
L_802FF0F0:;
  c->r[25]=c->r[31]|c->r[31]; // 802FF0F0
  c->r[31]=R32(c->r[31]+0x00000000u); // 802FF0F4
  c->r[3]=c->r[23]+0x00000004u; // 802FF0F8
  c->r[4]=c->r[1]+0x00000008u; // 802FF0FC
  W32(c->r[1]+0x00000008u,c->r[25]); // 802FF100
  c->lr=0x802FF108u; f_8032FA44(c); // 802FF104
  cmps(c,0,(int32_t)c->r[25],0); // 802FF108
  if (!crb(c,2)) { goto L_802FF124; } // 802FF10C
  c->r[3]=c->r[26]+0xFFFF92A8u; // 802FF110
  c->r[5]=c->r[27]+0xFFFF9284u; // 802FF114
  c->r[4]=0u+0x0000023Du; // 802FF118
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF11C
  c->lr=0x802FF124u; f_802FA328(c); // 802FF120
L_802FF124:;
  c->r[12]=R32(c->r[25]+0xFFFFFFFCu); // 802FF124
  c->r[3]=c->r[25]+0xFFFFFFFCu; // 802FF128
  c->r[4]=0u+0xFFFFFFFFu; // 802FF12C
  c->r[12]=R32(c->r[12]+0x00000008u); // 802FF130
  c->ctr=c->r[12]; // 802FF134
  if (true) { c->lr=0x802FF13Cu; dispatch(c,c->ctr); } // 802FF138
  cmps(c,0,(int32_t)c->r[25],0); // 802FF13C
  if (!crb(c,2)) { goto L_802FF158; } // 802FF140
  c->r[3]=c->r[26]+0xFFFF92A8u; // 802FF144
  c->r[5]=c->r[27]+0xFFFF9284u; // 802FF148
  c->r[4]=0u+0x0000023Du; // 802FF14C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF150
  c->lr=0x802FF158u; f_802FA328(c); // 802FF154
L_802FF158:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FF158
  if (!crb(c,2)) { goto L_802FF174; } // 802FF15C
  c->r[3]=c->r[28]+0xFFFF9278u; // 802FF160
  c->r[5]=c->r[29]+0xFFFF9254u; // 802FF164
  c->r[4]=0u+0x00000193u; // 802FF168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF16C
  c->lr=0x802FF174u; f_802FA328(c); // 802FF170
L_802FF174:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF174
  c->r[4]=c->r[25]|c->r[25]; // 802FF178
  c->lr=0x802FF180u; f_80201DA0(c); // 802FF17C
L_802FF180:;
  cmpu(c,0,c->r[31],c->r[30]); // 802FF180
  if (!crb(c,2)) { IRQCHK(c); goto L_802FF0F0; } // 802FF184
  c->r[3]=addc(c,c->r[23],0x00000004u,0); cr0(c,c->r[3]); // 802FF188
  if (crb(c,2)) { goto L_802FF198; } // 802FF18C
  c->r[4]=0u+0x00000000u; // 802FF190
  c->lr=0x802FF198u; f_8032F918(c); // 802FF194
L_802FF198:;
  cmps(c,0,(int32_t)c->r[24],0); // 802FF198
  if (!crb(c,1)) { goto L_802FF1A8; } // 802FF19C
  c->r[3]=c->r[23]|c->r[23]; // 802FF1A0
  c->lr=0x802FF1A8u; f_8001AAC0(c); // 802FF1A4
L_802FF1A8:;
  c->r[11]=c->r[1]+0x00000040u; // 802FF1A8
  c->r[3]=c->r[23]|c->r[23]; // 802FF1AC
  c->lr=0x802FF1B4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FF1B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FF1B4
  c->lr=c->r[0]; // 802FF1B8
  c->r[1]=c->r[1]+0x00000040u; // 802FF1BC
  return; // 802FF1C0
}

// fn_802FF1C4
void f_802FF1C4(Ctx* __restrict c) {
  trace_call(0x802FF1C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FF1C4
  c->r[0]=c->lr; // 802FF1C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802FF1CC
  c->r[11]=c->r[1]+0x00000060u; // 802FF1D0
  c->lr=0x802FF1D8u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FF1D4
  c->r[0]=R32(c->r[13]+0xFFFFA5F0u); // 802FF1D8
  c->r[22]=0u+0x804D0000u; // 802FF1DC
  c->r[30]=c->r[3]|c->r[3]; // 802FF1E0
  c->r[31]=c->r[4]|c->r[4]; // 802FF1E4
  cmps(c,0,(int32_t)c->r[0],0); // 802FF1E8
  c->r[14]=c->r[5]|c->r[5]; // 802FF1EC
  c->r[22]=c->r[22]+0xFFFF90B0u; // 802FF1F0
  if (!crb(c,2)) { goto L_802FF20C; } // 802FF1F4
  c->r[3]=c->r[22]+0x00000000u; // 802FF1F8
  c->r[5]=c->r[22]+0x00000010u; // 802FF1FC
  c->r[4]=0u+0x000000ABu; // 802FF200
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF204
  c->lr=0x802FF20Cu; f_802FA328(c); // 802FF208
L_802FF20C:;
  cmps(c,0,(int32_t)c->r[31],0); // 802FF20C
  if (!crb(c,2)) { goto L_802FF228; } // 802FF210
  c->r[3]=c->r[22]+0x00000000u; // 802FF214
  c->r[5]=c->r[22]+0x00000040u; // 802FF218
  c->r[4]=0u+0x000000ACu; // 802FF21C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF220
  c->lr=0x802FF228u; f_802FA328(c); // 802FF224
L_802FF228:;
  c->r[4]=0u+0x524C0000u; // 802FF228
  c->r[3]=c->r[31]|c->r[31]; // 802FF22C
  c->r[4]=c->r[4]+0x00005954u; // 802FF230
  c->lr=0x802FF238u; f_802FDA5C(c); // 802FF234
  cmps(c,0,(int32_t)c->r[3],0); // 802FF238
  if (!crb(c,2)) { goto L_802FF248; } // 802FF23C
  c->r[3]=0u+0x00000000u; // 802FF240
  goto L_802FF550; // 802FF244
L_802FF248:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 802FF248
  cmpu(c,0,c->r[0],0x00000008u); // 802FF24C
  if (crb(c,2)) { goto L_802FF278; } // 802FF250
  c->r[3]=c->r[22]+0x00000000u; // 802FF254
  c->r[5]=c->r[22]+0x0000006Cu; // 802FF258
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 802FF25C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 802FF260
  c->r[4]=0u+0x000000BBu; // 802FF264
  c->r[8]=0u+0x00000000u; // 802FF268
  c->r[9]=0u+0x00000008u; // 802FF26C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF270
  c->lr=0x802FF278u; f_802FA328(c); // 802FF274
L_802FF278:;
  c->r[23]=0u+0x00000000u; // 802FF278
  W32(c->r[1]+0x00000014u,c->r[14]); // 802FF27C
  c->r[28]=0u+0x70610000u; // 802FF280
  c->r[20]=0u+0x00000000u; // 802FF284
  W32(c->r[1]+0x00000008u,c->r[23]); // 802FF288
  c->r[24]=c->r[28]+0x00006531u; // 802FF28C
  c->r[19]=0u+0x00000000u; // 802FF290
  c->r[18]=0u+0x00000000u; // 802FF294
  W32(c->r[1]+0x0000000Cu,c->r[23]); // 802FF298
  c->r[17]=0u+0x00000000u; // 802FF29C
  c->r[15]=0u+0x00000000u; // 802FF2A0
  c->r[29]=0u+0x74780000u; // 802FF2A4
  W32(c->r[1]+0x00000010u,c->r[23]); // 802FF2A8
  c->r[26]=0u+0x626E0000u; // 802FF2AC
  c->r[14]=0u+0x6C790000u; // 802FF2B0
  c->r[27]=0u+0x67720000u; // 802FF2B4
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 802FF2B8
  c->r[25]=0u+0x666E0000u; // 802FF2BC
  c->r[16]=c->r[31]+c->r[0]; // 802FF2C0
  goto L_802FF540; // 802FF2C4
L_802FF2C8:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 802FF2C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[24]); // 802FF2CC
  if (crb(c,2)) { goto L_802FF45C; } // 802FF2D0
  if (!crb(c,0)) { goto L_802FF34C; } // 802FF2D4
  c->r[0]=c->r[27]+0x00007031u; // 802FF2D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF2DC
  if (crb(c,2)) { goto L_802FF468; } // 802FF2E0
  if (!crb(c,0)) { goto L_802FF318; } // 802FF2E4
  c->r[0]=c->r[25]+0x00006C31u; // 802FF2E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF2EC
  if (crb(c,2)) { goto L_802FF3E4; } // 802FF2F0
  if (!crb(c,0)) { goto L_802FF308; } // 802FF2F4
  c->r[0]=c->r[26]+0x00006431u; // 802FF2F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF2FC
  if (crb(c,2)) { goto L_802FF3F4; } // 802FF300
  goto L_802FF534; // 802FF304
L_802FF308:;
  c->r[0]=c->r[27]+0x00006531u; // 802FF308
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF30C
  if (crb(c,2)) { goto L_802FF530; } // 802FF310
  goto L_802FF534; // 802FF314
L_802FF318:;
  c->r[0]=c->r[14]+0x00007431u; // 802FF318
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF31C
  if (crb(c,2)) { goto L_802FF3B4; } // 802FF320
  if (!crb(c,0)) { goto L_802FF338; } // 802FF324
  c->r[0]=c->r[27]+0x00007331u; // 802FF328
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF32C
  if (crb(c,2)) { goto L_802FF528; } // 802FF330
  goto L_802FF534; // 802FF334
L_802FF338:;
  c->r[4]=0u+0x6D610000u; // 802FF338
  c->r[0]=c->r[4]+0x00007431u; // 802FF33C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF340
  if (crb(c,2)) { goto L_802FF3EC; } // 802FF344
  goto L_802FF534; // 802FF348
L_802FF34C:;
  c->r[0]=c->r[29]+0x00006C31u; // 802FF34C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF350
  if (crb(c,2)) { goto L_802FF3DC; } // 802FF354
  if (!crb(c,0)) { goto L_802FF390; } // 802FF358
  c->r[0]=c->r[28]+0x00007331u; // 802FF35C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF360
  if (crb(c,2)) { goto L_802FF438; } // 802FF364
  if (!crb(c,0)) { goto L_802FF37C; } // 802FF368
  c->r[0]=c->r[28]+0x00006E31u; // 802FF36C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF370
  if (crb(c,2)) { goto L_802FF3F4; } // 802FF374
  goto L_802FF534; // 802FF378
L_802FF37C:;
  c->r[4]=0u+0x70690000u; // 802FF37C
  c->r[0]=c->r[4]+0x00006331u; // 802FF380
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF384
  if (crb(c,2)) { goto L_802FF3F4; } // 802FF388
  goto L_802FF534; // 802FF38C
L_802FF390:;
  c->r[4]=0u+0x776E0000u; // 802FF390
  c->r[0]=c->r[4]+0x00006431u; // 802FF394
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF398
  if (crb(c,2)) { goto L_802FF3F4; } // 802FF39C
  if (!crb(c,0)) { goto L_802FF534; } // 802FF3A0
  c->r[0]=c->r[29]+0x00007431u; // 802FF3A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF3A8
  if (crb(c,2)) { goto L_802FF3F4; } // 802FF3AC
  goto L_802FF534; // 802FF3B0
L_802FF3B4:;
  c->r[3]=R8(c->r[16]+0x00000008u); // 802FF3B4
  c->r[0]=0u-c->r[3]; // 802FF3B8
  c->r[0]=c->r[0]|c->r[3]; // 802FF3BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802FF3C0
  W8(c->r[30]+0x00000020u,c->r[0]); // 802FF3C4
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FF3C8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802FF3CC
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FF3D0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802FF3D4
  goto L_802FF534; // 802FF3D8
L_802FF3DC:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 802FF3DC
  goto L_802FF534; // 802FF3E0
L_802FF3E4:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 802FF3E4
  goto L_802FF534; // 802FF3E8
L_802FF3EC:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 802FF3EC
  goto L_802FF534; // 802FF3F0
L_802FF3F4:;
  c->r[4]=c->r[16]|c->r[16]; // 802FF3F4
  c->r[5]=c->r[1]+0x00000008u; // 802FF3F8
  c->lr=0x802FF400u; f_802FFB44(c); // 802FF3FC
  cmps(c,0,(int32_t)c->r[3],0); // 802FF400
  c->r[21]=c->r[3]|c->r[3]; // 802FF404
  if (crb(c,2)) { goto L_802FF534; } // 802FF408
  c->r[0]=R32(c->r[30]+0x00000010u); // 802FF40C
  cmps(c,0,(int32_t)c->r[0],0); // 802FF410
  if (!crb(c,2)) { goto L_802FF41C; } // 802FF414
  W32(c->r[30]+0x00000010u,c->r[3]); // 802FF418
L_802FF41C:;
  cmps(c,0,(int32_t)c->r[20],0); // 802FF41C
  if (crb(c,2)) { goto L_802FF430; } // 802FF420
  c->r[3]=c->r[20]|c->r[20]; // 802FF424
  c->r[4]=c->r[21]|c->r[21]; // 802FF428
  c->lr=0x802FF430u; f_803037BC(c); // 802FF42C
L_802FF430:;
  c->r[19]=c->r[21]|c->r[21]; // 802FF430
  goto L_802FF534; // 802FF434
L_802FF438:;
  cmps(c,0,(int32_t)c->r[19],0); // 802FF438
  if (!crb(c,2)) { goto L_802FF454; } // 802FF43C
  c->r[3]=c->r[22]+0x00000000u; // 802FF440
  c->r[5]=c->r[22]+0x0000009Cu; // 802FF444
  c->r[4]=0u+0x000000F9u; // 802FF448
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF44C
  c->lr=0x802FF454u; f_802FA328(c); // 802FF450
L_802FF454:;
  c->r[20]=c->r[19]|c->r[19]; // 802FF454
  goto L_802FF534; // 802FF458
L_802FF45C:;
  c->r[19]=c->r[20]|c->r[20]; // 802FF45C
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 802FF460
  goto L_802FF534; // 802FF464
L_802FF468:;
  cmps(c,0,(int32_t)c->r[18],0); // 802FF468
  if (!crb(c,2)) { goto L_802FF4C8; } // 802FF46C
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF470
  c->r[18]=0u+0x00000001u; // 802FF474
  c->r[4]=0u+0x0000000Cu; // 802FF478
  c->lr=0x802FF480u; f_80201D90(c); // 802FF47C
  cmps(c,0,(int32_t)c->r[3],0); // 802FF480
  if (crb(c,2)) { goto L_802FF4A8; } // 802FF484
  if (crb(c,2)) { goto L_802FF4C0; } // 802FF488
  W32(c->r[3]+0x00000004u,c->r[23]); // 802FF48C
  c->r[4]=c->r[3]+0x00000004u; // 802FF490
  W32(c->r[3]+0x00000008u,c->r[23]); // 802FF494
  W32(c->r[3]+0x00000000u,c->r[23]); // 802FF498
  W32(c->r[3]+0x00000004u,c->r[4]); // 802FF49C
  W32(c->r[3]+0x00000008u,c->r[4]); // 802FF4A0
  goto L_802FF4C0; // 802FF4A4
L_802FF4A8:;
  c->r[3]=c->r[22]+0x00000000u; // 802FF4A8
  c->r[5]=c->r[22]+0x000000C8u; // 802FF4AC
  c->r[4]=0u+0x0000002Fu; // 802FF4B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF4B4
  c->lr=0x802FF4BCu; f_802FA3B4(c); // 802FF4B8
  c->r[3]=0u+0x00000000u; // 802FF4BC
L_802FF4C0:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 802FF4C0
  goto L_802FF534; // 802FF4C4
L_802FF4C8:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 802FF4C8
  cmps(c,0,(int32_t)c->r[0],0); // 802FF4CC
  if (crb(c,2)) { goto L_802FF534; } // 802FF4D0
  cmps(c,0,(int32_t)c->r[17],1); // 802FF4D4
  if (!crb(c,2)) { goto L_802FF534; } // 802FF4D8
  c->r[21]=R32(c->r[30]+0x00000010u); // 802FF4DC
  c->r[4]=0u+0x0000002Cu; // 802FF4E0
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF4E4
  c->lr=0x802FF4ECu; f_80201D90(c); // 802FF4E8
  cmps(c,0,(int32_t)c->r[3],0); // 802FF4EC
  if (crb(c,2)) { goto L_802FF510; } // 802FF4F0
  c->r[4]=c->r[3]|c->r[3]; // 802FF4F4
  if (crb(c,2)) { goto L_802FF514; } // 802FF4F8
  c->r[4]=c->r[16]|c->r[16]; // 802FF4FC
  c->r[5]=c->r[21]|c->r[21]; // 802FF500
  c->lr=0x802FF508u; f_802FE910(c); // 802FF504
  c->r[4]=c->r[3]|c->r[3]; // 802FF508
  goto L_802FF514; // 802FF50C
L_802FF510:;
  c->r[4]=0u+0x00000000u; // 802FF510
L_802FF514:;
  cmps(c,0,(int32_t)c->r[4],0); // 802FF514
  if (crb(c,2)) { goto L_802FF534; } // 802FF518
  c->r[3]=R32(c->r[30]+0x00000014u); // 802FF51C
  c->lr=0x802FF524u; f_802FEC6C(c); // 802FF520
  goto L_802FF534; // 802FF524
L_802FF528:;
  c->r[17]=c->r[17]+0x00000001u; // 802FF528
  goto L_802FF534; // 802FF52C
L_802FF530:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 802FF530
L_802FF534:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 802FF534
  c->r[15]=c->r[15]+0x00000001u; // 802FF538
  c->r[16]=c->r[16]+c->r[0]; // 802FF53C
L_802FF540:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 802FF540
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 802FF544
  if (crb(c,0)) { IRQCHK(c); goto L_802FF2C8; } // 802FF548
  c->r[3]=0u+0x00000001u; // 802FF54C
L_802FF550:;
  c->r[11]=c->r[1]+0x00000060u; // 802FF550
  c->lr=0x802FF558u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FF554
  c->r[0]=R32(c->r[1]+0x00000064u); // 802FF558
  c->lr=c->r[0]; // 802FF55C
  c->r[1]=c->r[1]+0x00000060u; // 802FF560
  return; // 802FF564
}

// fn_802FF568
void f_802FF568(Ctx* __restrict c) {
  trace_call(0x802FF568u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FF568
  c->r[0]=c->lr; // 802FF56C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FF570
  c->r[11]=c->r[1]+0x00000040u; // 802FF574
  c->lr=0x802FF57Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FF578
  c->r[0]=R32(c->r[13]+0xFFFFA5F0u); // 802FF57C
  c->r[30]=0u+0x804D0000u; // 802FF580
  c->r[24]=c->r[3]|c->r[3]; // 802FF584
  c->r[25]=c->r[4]|c->r[4]; // 802FF588
  cmps(c,0,(int32_t)c->r[0],0); // 802FF58C
  c->r[26]=c->r[5]|c->r[5]; // 802FF590
  c->r[30]=c->r[30]+0xFFFF90B0u; // 802FF594
  if (!crb(c,2)) { goto L_802FF5B0; } // 802FF598
  c->r[3]=c->r[30]+0x00000000u; // 802FF59C
  c->r[5]=c->r[30]+0x00000010u; // 802FF5A0
  c->r[4]=0u+0x00000127u; // 802FF5A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF5A8
  c->lr=0x802FF5B0u; f_802FA328(c); // 802FF5AC
L_802FF5B0:;
  cmps(c,0,(int32_t)c->r[25],0); // 802FF5B0
  if (!crb(c,2)) { goto L_802FF5CC; } // 802FF5B4
  c->r[3]=c->r[30]+0x00000000u; // 802FF5B8
  c->r[5]=c->r[30]+0x000000DCu; // 802FF5BC
  c->r[4]=0u+0x00000128u; // 802FF5C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF5C4
  c->lr=0x802FF5CCu; f_802FA328(c); // 802FF5C8
L_802FF5CC:;
  c->r[3]=c->r[25]|c->r[25]; // 802FF5CC
  c->lr=0x802FF5D4u; f_802FDA34(c); // 802FF5D0
  cmps(c,0,(int32_t)c->r[3],0); // 802FF5D4
  if (!crb(c,2)) { goto L_802FF5E4; } // 802FF5D8
  c->r[3]=0u+0x00000000u; // 802FF5DC
  goto L_802FF798; // 802FF5E0
L_802FF5E4:;
  c->r[0]=R16(c->r[25]+0x00000006u); // 802FF5E4
  cmpu(c,0,c->r[0],0x00000008u); // 802FF5E8
  if (crb(c,2)) { goto L_802FF614; } // 802FF5EC
  c->r[3]=c->r[30]+0x00000000u; // 802FF5F0
  c->r[5]=c->r[30]+0x0000006Cu; // 802FF5F4
  c->r[6]=rotl(c->r[0],24)&0x000000FFu; // 802FF5F8
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 802FF5FC
  c->r[4]=0u+0x00000137u; // 802FF600
  c->r[8]=0u+0x00000000u; // 802FF604
  c->r[9]=0u+0x00000008u; // 802FF608
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF60C
  c->lr=0x802FF614u; f_802FA328(c); // 802FF610
L_802FF614:;
  c->r[0]=R16(c->r[25]+0x0000000Cu); // 802FF614
  c->r[3]=0u+0x70610000u; // 802FF618
  c->r[31]=c->r[3]+0x00006931u; // 802FF61C
  c->r[28]=0u+0x00000000u; // 802FF620
  c->r[29]=c->r[25]+c->r[0]; // 802FF624
  c->r[27]=0u+0x00000000u; // 802FF628
  c->r[20]=0u+0x524C0000u; // 802FF62C
  c->r[22]=0u+0x804D0000u; // 802FF630
  c->r[23]=0u+0x804D0000u; // 802FF634
  goto L_802FF788; // 802FF638
L_802FF63C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802FF63C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802FF640
  if (crb(c,2)) { goto L_802FF64C; } // 802FF644
  goto L_802FF77C; // 802FF648
L_802FF64C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FF64C
  if (crb(c,2)) { goto L_802FF668; } // 802FF650
  c->r[3]=c->r[30]+0x00000000u; // 802FF654
  c->r[5]=c->r[30]+0x00000108u; // 802FF658
  c->r[4]=0u+0x00000141u; // 802FF65C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF660
  c->lr=0x802FF668u; f_802FA328(c); // 802FF664
L_802FF668:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 802FF668
  c->r[0]=c->r[20]+0x00005450u; // 802FF66C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF670
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF674
  if (!crb(c,0)) { goto L_802FF6AC; } // 802FF678
  c->r[0]=c->r[20]+0x00004D43u; // 802FF67C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF680
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF684
  if (!crb(c,0)) { goto L_802FF69C; } // 802FF688
  c->r[0]=c->r[20]+0x0000414Eu; // 802FF68C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF690
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF694
  goto L_802FF744; // 802FF698
L_802FF69C:;
  c->r[0]=c->r[20]+0x00005041u; // 802FF69C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF6A0
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF6A4
  goto L_802FF744; // 802FF6A8
L_802FF6AC:;
  c->r[0]=c->r[20]+0x00005643u; // 802FF6AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF6B0
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF6B4
  if (!crb(c,0)) { goto L_802FF6CC; } // 802FF6B8
  c->r[0]=c->r[20]+0x00005453u; // 802FF6BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF6C0
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF6C4
  goto L_802FF744; // 802FF6C8
L_802FF6CC:;
  c->r[0]=c->r[20]+0x00005649u; // 802FF6CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FF6D0
  if (crb(c,2)) { goto L_802FF6DC; } // 802FF6D4
  goto L_802FF744; // 802FF6D8
L_802FF6DC:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FF6DC
  c->r[4]=0u+0x00000020u; // 802FF6E0
  c->lr=0x802FF6E8u; f_80201D90(c); // 802FF6E4
  cmps(c,0,(int32_t)c->r[3],0); // 802FF6E8
  if (crb(c,2)) { goto L_802FF704; } // 802FF6EC
  c->r[21]=c->r[3]|c->r[3]; // 802FF6F0
  if (crb(c,2)) { goto L_802FF71C; } // 802FF6F4
  c->lr=0x802FF6FCu; f_802FC540(c); // 802FF6F8
  c->r[21]=c->r[3]|c->r[3]; // 802FF6FC
  goto L_802FF71C; // 802FF700
L_802FF704:;
  c->r[3]=c->r[30]+0x00000000u; // 802FF704
  c->r[5]=c->r[30]+0x000000C8u; // 802FF708
  c->r[4]=0u+0x0000002Fu; // 802FF70C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF710
  c->lr=0x802FF718u; f_802FA3B4(c); // 802FF714
  c->r[21]=0u+0x00000000u; // 802FF718
L_802FF71C:;
  cmps(c,0,(int32_t)c->r[21],0); // 802FF71C
  if (crb(c,2)) { goto L_802FF744; } // 802FF720
  c->r[12]=R32(c->r[21]+0x00000000u); // 802FF724
  c->r[3]=c->r[21]|c->r[21]; // 802FF728
  c->r[4]=c->r[29]|c->r[29]; // 802FF72C
  c->r[5]=c->r[26]|c->r[26]; // 802FF730
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FF734
  c->ctr=c->r[12]; // 802FF738
  if (true) { c->lr=0x802FF740u; dispatch(c,c->ctr); } // 802FF73C
  c->r[28]=c->r[21]|c->r[21]; // 802FF740
L_802FF744:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FF744
  if (crb(c,2)) { goto L_802FF77C; } // 802FF748
  c->r[21]=c->r[24]+0x00000008u; // 802FF74C
  if (!crb(c,2)) { goto L_802FF768; } // 802FF750
  c->r[3]=c->r[22]+0xFFFF9248u; // 802FF754
  c->r[5]=c->r[23]+0xFFFF9224u; // 802FF758
  c->r[4]=0u+0x00000233u; // 802FF75C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF760
  c->lr=0x802FF768u; f_802FA328(c); // 802FF764
L_802FF768:;
  W32(c->r[1]+0x00000008u,c->r[21]); // 802FF768
  c->r[3]=c->r[24]+0x00000004u; // 802FF76C
  c->r[4]=c->r[1]+0x00000008u; // 802FF770
  c->r[5]=c->r[28]+0x00000004u; // 802FF774
  c->lr=0x802FF77Cu; f_8032FC8C(c); // 802FF778
L_802FF77C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 802FF77C
  c->r[27]=c->r[27]+0x00000001u; // 802FF780
  c->r[29]=c->r[29]+c->r[0]; // 802FF784
L_802FF788:;
  c->r[0]=R16(c->r[25]+0x0000000Eu); // 802FF788
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802FF78C
  if (crb(c,0)) { IRQCHK(c); goto L_802FF63C; } // 802FF790
  c->r[3]=c->r[28]|c->r[28]; // 802FF794
L_802FF798:;
  c->r[11]=c->r[1]+0x00000040u; // 802FF798
  c->lr=0x802FF7A0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FF79C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FF7A0
  c->lr=c->r[0]; // 802FF7A4
  c->r[1]=c->r[1]+0x00000040u; // 802FF7A8
  return; // 802FF7AC
}

// fn_802FF7B0
void f_802FF7B0(Ctx* __restrict c) {
  trace_call(0x802FF7B0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF7B0
  cmps(c,0,(int32_t)c->r[3],0); // 802FF7B4
  if (crb(c,2)) return; // 802FF7B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF7BC
  c->r[5]=0u+0x00000001u; // 802FF7C0
  c->r[12]=R32(c->r[12]+0x00000044u); // 802FF7C4
  c->ctr=c->r[12]; // 802FF7C8
  if (true) { dispatch(c,c->ctr); return; } // 802FF7CC
  return; // 802FF7D0
}

// fn_802FF7D4
void f_802FF7D4(Ctx* __restrict c) {
  trace_call(0x802FF7D4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF7D4
  cmps(c,0,(int32_t)c->r[3],0); // 802FF7D8
  if (crb(c,2)) return; // 802FF7DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF7E0
  c->r[5]=0u+0x00000001u; // 802FF7E4
  c->r[12]=R32(c->r[12]+0x00000048u); // 802FF7E8
  c->ctr=c->r[12]; // 802FF7EC
  if (true) { dispatch(c,c->ctr); return; } // 802FF7F0
  return; // 802FF7F4
}

// fn_802FF7F8
void f_802FF7F8(Ctx* __restrict c) {
  trace_call(0x802FF7F8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF7F8
  c->r[4]=0u+0x00000000u; // 802FF7FC
  c->r[12]=R32(c->r[12]+0x00000018u); // 802FF800
  c->ctr=c->r[12]; // 802FF804
  if (true) { dispatch(c,c->ctr); return; } // 802FF808
}

// fn_802FF80C
void f_802FF80C(Ctx* __restrict c) {
  trace_call(0x802FF80Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF80C
  cmps(c,0,(int32_t)c->r[3],0); // 802FF810
  if (crb(c,2)) return; // 802FF814
  f_802FF818(c);
}

// fn_802FF818
void f_802FF818(Ctx* __restrict c) {
  trace_call(0x802FF818u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF818
  c->r[6]=0u+0x00000001u; // 802FF81C
  c->r[12]=R32(c->r[12]+0x00000058u); // 802FF820
  c->ctr=c->r[12]; // 802FF824
  if (true) { dispatch(c,c->ctr); return; } // 802FF828
  return; // 802FF82C
}

// fn_802FF830
void f_802FF830(Ctx* __restrict c) {
  trace_call(0x802FF830u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF830
  cmps(c,0,(int32_t)c->r[3],0); // 802FF834
  if (crb(c,2)) return; // 802FF838
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF83C
  c->r[12]=R32(c->r[12]+0x00000010u); // 802FF840
  c->ctr=c->r[12]; // 802FF844
  if (true) { dispatch(c,c->ctr); return; } // 802FF848
  return; // 802FF84C
}

// fn_802FF850
void f_802FF850(Ctx* __restrict c) {
  trace_call(0x802FF850u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF850
  cmps(c,0,(int32_t)c->r[3],0); // 802FF854
  if (crb(c,2)) return; // 802FF858
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF85C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802FF860
  c->ctr=c->r[12]; // 802FF864
  if (true) { dispatch(c,c->ctr); return; } // 802FF868
  return; // 802FF86C
}

// fn_802FF870
void f_802FF870(Ctx* __restrict c) {
  trace_call(0x802FF870u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 802FF870
  cmps(c,0,(int32_t)c->r[3],0); // 802FF874
  if (crb(c,2)) return; // 802FF878
  c->r[12]=R32(c->r[3]+0x00000000u); // 802FF87C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802FF880
  c->ctr=c->r[12]; // 802FF884
  if (true) { dispatch(c,c->ctr); return; } // 802FF888
  return; // 802FF88C
}

// fn_802FF890
void f_802FF890(Ctx* __restrict c) {
  trace_call(0x802FF890u);
  c->r[0]=R8(c->r[4]+0x00000020u); // 802FF890
  cmpu(c,0,c->r[0],0x00000001u); // 802FF894
  if (!crb(c,2)) { goto L_802FF8D4; } // 802FF898
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802FF89C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FF8A0
  c->f[3]=-c->f[4]; // 802FF8A4
  {uint32_t ea=c->r[2]+0xFFFFD06Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802FF8A8
  c->f[0]=-c->f[1]; // 802FF8AC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 802FF8B0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 802FF8B4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 802FF8B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802FF8BC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 802FF8C0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802FF8C4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 802FF8C8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 802FF8CC
  return; // 802FF8D0
L_802FF8D4:;
  {uint32_t ea=c->r[2]+0xFFFFD068u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FF8D4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802FF8D8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FF8DC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 802FF8E0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802FF8E4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 802FF8E8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802FF8EC
  return; // 802FF8F0
}

// fn_802FF8F4
void f_802FF8F4(Ctx* __restrict c) {
  trace_call(0x802FF8F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FF8F4
  c->r[0]=c->lr; // 802FF8F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FF8FC
  c->r[11]=c->r[1]+0x00000040u; // 802FF900
  c->lr=0x802FF908u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802FF904
  c->r[21]=R32(c->r[3]+0x00000010u); // 802FF908
  c->r[31]=c->r[4]|c->r[4]; // 802FF90C
  c->r[19]=c->r[13]+0xFFFFA608u; // 802FF910
  c->r[12]=R32(c->r[21]+0x00000000u); // 802FF914
  c->r[3]=c->r[21]|c->r[21]; // 802FF918
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FF91C
  c->ctr=c->r[12]; // 802FF920
  if (true) { c->lr=0x802FF928u; dispatch(c,c->ctr); } // 802FF924
  goto L_802FF940; // 802FF928
L_802FF92C:;
  cmpu(c,0,c->r[3],c->r[19]); // 802FF92C
  if (!crb(c,2)) { goto L_802FF93C; } // 802FF930
  c->r[0]=0u+0x00000001u; // 802FF934
  goto L_802FF94C; // 802FF938
L_802FF93C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FF93C
L_802FF940:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FF940
  if (!crb(c,2)) { IRQCHK(c); goto L_802FF92C; } // 802FF944
  c->r[0]=0u+0x00000000u; // 802FF948
L_802FF94C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FF94C
  if (crb(c,2)) { goto L_802FF95C; } // 802FF950
  c->r[3]=c->r[21]|c->r[21]; // 802FF954
  goto L_802FF960; // 802FF958
L_802FF95C:;
  c->r[3]=0u+0x00000000u; // 802FF95C
L_802FF960:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FF960
  if (crb(c,2)) { goto L_802FF96C; } // 802FF964
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FF968
L_802FF96C:;
  c->r[30]=R32(c->r[21]+0x00000014u); // 802FF96C
  c->r[27]=c->r[21]+0x00000014u; // 802FF970
  c->r[21]=0u+0x804D0000u; // 802FF974
  c->r[22]=0u+0x804D0000u; // 802FF978
  c->r[23]=0u+0x804D0000u; // 802FF97C
  c->r[24]=0u+0x804D0000u; // 802FF980
  c->r[20]=c->r[13]+0xFFFFA608u; // 802FF984
  c->r[19]=c->r[13]+0xFFFFA608u; // 802FF988
  goto L_802FFB24; // 802FF98C
L_802FF990:;
  cmps(c,0,(int32_t)c->r[30],0); // 802FF990
  if (!crb(c,2)) { goto L_802FF9AC; } // 802FF994
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FF998
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FF99C
  c->r[4]=0u+0x0000023Du; // 802FF9A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF9A4
  c->lr=0x802FF9ACu; f_802FA328(c); // 802FF9A8
L_802FF9AC:;
  c->r[25]=addc(c,c->r[30],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FF9AC
  if (!crb(c,2)) { goto L_802FF9C8; } // 802FF9B0
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FF9B4
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FF9B8
  c->r[4]=0u+0x00000193u; // 802FF9BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FF9C0
  c->lr=0x802FF9C8u; f_802FA328(c); // 802FF9C4
L_802FF9C8:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802FF9C8
  c->r[3]=c->r[25]|c->r[25]; // 802FF9CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FF9D0
  c->ctr=c->r[12]; // 802FF9D4
  if (true) { c->lr=0x802FF9DCu; dispatch(c,c->ctr); } // 802FF9D8
  goto L_802FF9F4; // 802FF9DC
L_802FF9E0:;
  cmpu(c,0,c->r[3],c->r[19]); // 802FF9E0
  if (!crb(c,2)) { goto L_802FF9F0; } // 802FF9E4
  c->r[0]=0u+0x00000001u; // 802FF9E8
  goto L_802FFA00; // 802FF9EC
L_802FF9F0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FF9F0
L_802FF9F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FF9F4
  if (!crb(c,2)) { IRQCHK(c); goto L_802FF9E0; } // 802FF9F8
  c->r[0]=0u+0x00000000u; // 802FF9FC
L_802FFA00:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FFA00
  if (crb(c,2)) { goto L_802FFA10; } // 802FFA04
  c->r[3]=c->r[25]|c->r[25]; // 802FFA08
  goto L_802FFA14; // 802FFA0C
L_802FFA10:;
  c->r[3]=0u+0x00000000u; // 802FFA10
L_802FFA14:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FFA14
  if (crb(c,2)) { goto L_802FFA20; } // 802FFA18
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FFA1C
L_802FFA20:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 802FFA20
  c->r[26]=c->r[25]+0x00000014u; // 802FFA24
  goto L_802FFB18; // 802FFA28
L_802FFA2C:;
  cmps(c,0,(int32_t)c->r[29],0); // 802FFA2C
  if (!crb(c,2)) { goto L_802FFA48; } // 802FFA30
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FFA34
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FFA38
  c->r[4]=0u+0x0000023Du; // 802FFA3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FFA40
  c->lr=0x802FFA48u; f_802FA328(c); // 802FFA44
L_802FFA48:;
  c->r[25]=addc(c,c->r[29],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 802FFA48
  if (!crb(c,2)) { goto L_802FFA64; } // 802FFA4C
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FFA50
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FFA54
  c->r[4]=0u+0x00000193u; // 802FFA58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FFA5C
  c->lr=0x802FFA64u; f_802FA328(c); // 802FFA60
L_802FFA64:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802FFA64
  c->r[3]=c->r[25]|c->r[25]; // 802FFA68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802FFA6C
  c->ctr=c->r[12]; // 802FFA70
  if (true) { c->lr=0x802FFA78u; dispatch(c,c->ctr); } // 802FFA74
  goto L_802FFA90; // 802FFA78
L_802FFA7C:;
  cmpu(c,0,c->r[3],c->r[20]); // 802FFA7C
  if (!crb(c,2)) { goto L_802FFA8C; } // 802FFA80
  c->r[0]=0u+0x00000001u; // 802FFA84
  goto L_802FFA9C; // 802FFA88
L_802FFA8C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802FFA8C
L_802FFA90:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FFA90
  if (!crb(c,2)) { IRQCHK(c); goto L_802FFA7C; } // 802FFA94
  c->r[0]=0u+0x00000000u; // 802FFA98
L_802FFA9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802FFA9C
  if (crb(c,2)) { goto L_802FFAAC; } // 802FFAA0
  c->r[3]=c->r[25]|c->r[25]; // 802FFAA4
  goto L_802FFAB0; // 802FFAA8
L_802FFAAC:;
  c->r[3]=0u+0x00000000u; // 802FFAAC
L_802FFAB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802FFAB0
  if (crb(c,2)) { goto L_802FFABC; } // 802FFAB4
  W32(c->r[3]+0x000000F4u,c->r[31]); // 802FFAB8
L_802FFABC:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 802FFABC
  goto L_802FFB0C; // 802FFAC0
L_802FFAC4:;
  cmps(c,0,(int32_t)c->r[28],0); // 802FFAC4
  if (!crb(c,2)) { goto L_802FFAE0; } // 802FFAC8
  c->r[3]=c->r[21]+0xFFFF817Cu; // 802FFACC
  c->r[5]=c->r[22]+0xFFFF8158u; // 802FFAD0
  c->r[4]=0u+0x0000023Du; // 802FFAD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FFAD8
  c->lr=0x802FFAE0u; f_802FA328(c); // 802FFADC
L_802FFAE0:;
  c->r[18]=addc(c,c->r[28],0xFFFFFFFCu,0); cr0(c,c->r[18]); // 802FFAE0
  if (!crb(c,2)) { goto L_802FFAFC; } // 802FFAE4
  c->r[3]=c->r[23]+0xFFFF8314u; // 802FFAE8
  c->r[5]=c->r[24]+0xFFFF82F0u; // 802FFAEC
  c->r[4]=0u+0x00000193u; // 802FFAF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FFAF4
  c->lr=0x802FFAFCu; f_802FA328(c); // 802FFAF8
L_802FFAFC:;
  c->r[3]=c->r[18]|c->r[18]; // 802FFAFC
  c->r[4]=c->r[31]|c->r[31]; // 802FFB00
  c->lr=0x802FFB08u; f_802FEDB8(c); // 802FFB04
  c->r[28]=R32(c->r[28]+0x00000000u); // 802FFB08
L_802FFB0C:;
  cmpu(c,0,c->r[28],c->r[25]); // 802FFB0C
  if (!crb(c,2)) { IRQCHK(c); goto L_802FFAC4; } // 802FFB10
  c->r[29]=R32(c->r[29]+0x00000000u); // 802FFB14
L_802FFB18:;
  cmpu(c,0,c->r[29],c->r[26]); // 802FFB18
  if (!crb(c,2)) { IRQCHK(c); goto L_802FFA2C; } // 802FFB1C
  c->r[30]=R32(c->r[30]+0x00000000u); // 802FFB20
L_802FFB24:;
  cmpu(c,0,c->r[30],c->r[27]); // 802FFB24
  if (!crb(c,2)) { IRQCHK(c); goto L_802FF990; } // 802FFB28
  c->r[11]=c->r[1]+0x00000040u; // 802FFB2C
  c->lr=0x802FFB34u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802FFB30
  c->r[0]=R32(c->r[1]+0x00000044u); // 802FFB34
  c->lr=c->r[0]; // 802FFB38
  c->r[1]=c->r[1]+0x00000040u; // 802FFB3C
  return; // 802FFB40
}

// fn_802FFB44
void f_802FFB44(Ctx* __restrict c) {
  trace_call(0x802FFB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FFB44
  c->r[0]=c->lr; // 802FFB48
  c->r[6]=0u+0x70690000u; // 802FFB4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802FFB50
  c->r[0]=c->r[6]+0x00006331u; // 802FFB54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FFB58
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802FFB5C
  if (crb(c,2)) { goto L_802FFBE8; } // 802FFB60
  if (!crb(c,0)) { goto L_802FFB90; } // 802FFB64
  c->r[6]=0u+0x70610000u; // 802FFB68
  c->r[0]=c->r[6]+0x00006E31u; // 802FFB6C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FFB70
  if (crb(c,2)) { goto L_802FFBB8; } // 802FFB74
  if (!crb(c,0)) { goto L_802FFD38; } // 802FFB78
  c->r[6]=0u+0x626E0000u; // 802FFB7C
  c->r[0]=c->r[6]+0x00006431u; // 802FFB80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FFB84
  if (crb(c,2)) { goto L_802FFCE4; } // 802FFB88
  goto L_802FFD38; // 802FFB8C
L_802FFB90:;
  c->r[6]=0u+0x776E0000u; // 802FFB90
  c->r[0]=c->r[6]+0x00006431u; // 802FFB94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FFB98
  if (crb(c,2)) { goto L_802FFC90; } // 802FFB9C
  if (!crb(c,0)) { goto L_802FFD38; } // 802FFBA0
  c->r[6]=0u+0x74780000u; // 802FFBA4
  c->r[0]=c->r[6]+0x00007431u; // 802FFBA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802FFBAC
  if (crb(c,2)) { goto L_802FFC3C; } // 802FFBB0
  goto L_802FFD38; // 802FFBB4
L_802FFBB8:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FFBB8
  c->r[31]=c->r[4]|c->r[4]; // 802FFBBC
  c->r[4]=0u+0x000000D4u; // 802FFBC0
  c->lr=0x802FFBC8u; f_80201D90(c); // 802FFBC4
  cmps(c,0,(int32_t)c->r[3],0); // 802FFBC8
  if (crb(c,2)) { goto L_802FFBE0; } // 802FFBCC
  if (crb(c,2)) { goto L_802FFD58; } // 802FFBD0
  c->r[4]=c->r[31]|c->r[31]; // 802FFBD4
  c->lr=0x802FFBDCu; f_803034F0(c); // 802FFBD8
  goto L_802FFD58; // 802FFBDC
L_802FFBE0:;
  c->r[3]=0u+0x00000000u; // 802FFBE0
  goto L_802FFD58; // 802FFBE4
L_802FFBE8:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802FFBE8
  c->r[31]=c->r[4]|c->r[4]; // 802FFBEC
  c->r[7]=R32(c->r[5]+0x00000004u); // 802FFBF0
  c->r[4]=0u+0x000000ECu; // 802FFBF4
  c->r[6]=R32(c->r[5]+0x00000008u); // 802FFBF8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802FFBFC
  W32(c->r[1]+0x00000038u,c->r[3]); // 802FFC00
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FFC04
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 802FFC08
  W32(c->r[1]+0x00000040u,c->r[6]); // 802FFC0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802FFC10
  c->lr=0x802FFC18u; f_80201D90(c); // 802FFC14
  cmps(c,0,(int32_t)c->r[3],0); // 802FFC18
  if (crb(c,2)) { goto L_802FFC34; } // 802FFC1C
  if (crb(c,2)) { goto L_802FFD58; } // 802FFC20
  c->r[4]=c->r[31]|c->r[31]; // 802FFC24
  c->r[5]=c->r[1]+0x00000038u; // 802FFC28
  c->lr=0x802FFC30u; f_80304808(c); // 802FFC2C
  goto L_802FFD58; // 802FFC30
L_802FFC34:;
  c->r[3]=0u+0x00000000u; // 802FFC34
  goto L_802FFD58; // 802FFC38
L_802FFC3C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802FFC3C
  c->r[31]=c->r[4]|c->r[4]; // 802FFC40
  c->r[7]=R32(c->r[5]+0x00000004u); // 802FFC44
  c->r[4]=0u+0x00000100u; // 802FFC48
  c->r[6]=R32(c->r[5]+0x00000008u); // 802FFC4C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802FFC50
  W32(c->r[1]+0x00000028u,c->r[3]); // 802FFC54
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FFC58
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 802FFC5C
  W32(c->r[1]+0x00000030u,c->r[6]); // 802FFC60
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FFC64
  c->lr=0x802FFC6Cu; f_80201D90(c); // 802FFC68
  cmps(c,0,(int32_t)c->r[3],0); // 802FFC6C
  if (crb(c,2)) { goto L_802FFC88; } // 802FFC70
  if (crb(c,2)) { goto L_802FFD58; } // 802FFC74
  c->r[4]=c->r[31]|c->r[31]; // 802FFC78
  c->r[5]=c->r[1]+0x00000028u; // 802FFC7C
  c->lr=0x802FFC84u; f_80305034(c); // 802FFC80
  goto L_802FFD58; // 802FFC84
L_802FFC88:;
  c->r[3]=0u+0x00000000u; // 802FFC88
  goto L_802FFD58; // 802FFC8C
L_802FFC90:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802FFC90
  c->r[31]=c->r[4]|c->r[4]; // 802FFC94
  c->r[7]=R32(c->r[5]+0x00000004u); // 802FFC98
  c->r[4]=0u+0x00000104u; // 802FFC9C
  c->r[6]=R32(c->r[5]+0x00000008u); // 802FFCA0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802FFCA4
  W32(c->r[1]+0x00000018u,c->r[3]); // 802FFCA8
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FFCAC
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 802FFCB0
  W32(c->r[1]+0x00000020u,c->r[6]); // 802FFCB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FFCB8
  c->lr=0x802FFCC0u; f_80201D90(c); // 802FFCBC
  cmps(c,0,(int32_t)c->r[3],0); // 802FFCC0
  if (crb(c,2)) { goto L_802FFCDC; } // 802FFCC4
  if (crb(c,2)) { goto L_802FFD58; } // 802FFCC8
  c->r[4]=c->r[31]|c->r[31]; // 802FFCCC
  c->r[5]=c->r[1]+0x00000018u; // 802FFCD0
  c->lr=0x802FFCD8u; f_80307DC8(c); // 802FFCD4
  goto L_802FFD58; // 802FFCD8
L_802FFCDC:;
  c->r[3]=0u+0x00000000u; // 802FFCDC
  goto L_802FFD58; // 802FFCE0
L_802FFCE4:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802FFCE4
  c->r[31]=c->r[4]|c->r[4]; // 802FFCE8
  c->r[7]=R32(c->r[5]+0x00000004u); // 802FFCEC
  c->r[4]=0u+0x000000D4u; // 802FFCF0
  c->r[6]=R32(c->r[5]+0x00000008u); // 802FFCF4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802FFCF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802FFCFC
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 802FFD00
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 802FFD04
  W32(c->r[1]+0x00000010u,c->r[6]); // 802FFD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 802FFD0C
  c->lr=0x802FFD14u; f_80201D90(c); // 802FFD10
  cmps(c,0,(int32_t)c->r[3],0); // 802FFD14
  if (crb(c,2)) { goto L_802FFD30; } // 802FFD18
  if (crb(c,2)) { goto L_802FFD58; } // 802FFD1C
  c->r[4]=c->r[31]|c->r[31]; // 802FFD20
  c->r[5]=c->r[1]+0x00000008u; // 802FFD24
  c->lr=0x802FFD2Cu; f_802FD8C4(c); // 802FFD28
  goto L_802FFD58; // 802FFD2C
L_802FFD30:;
  c->r[3]=0u+0x00000000u; // 802FFD30
  goto L_802FFD58; // 802FFD34
L_802FFD38:;
  c->r[3]=0u+0x804D0000u; // 802FFD38
  c->r[5]=0u+0x804D0000u; // 802FFD3C
  c->r[3]=c->r[3]+0xFFFF90B0u; // 802FFD40
  c->r[4]=0u+0x000001F7u; // 802FFD44
  c->r[5]=c->r[5]+0xFFFF91DCu; // 802FFD48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802FFD4C
  c->lr=0x802FFD54u; f_802FA328(c); // 802FFD50
  c->r[3]=0u+0x00000000u; // 802FFD54
L_802FFD58:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802FFD58
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802FFD5C
  c->lr=c->r[0]; // 802FFD60
  c->r[1]=c->r[1]+0x00000050u; // 802FFD64
  return; // 802FFD68
}

// fn_802FFD6C
void f_802FFD6C(Ctx* __restrict c) {
  trace_call(0x802FFD6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FFD6C
  c->r[0]=c->lr; // 802FFD70
  W32(c->r[1]+0x00000034u,c->r[0]); // 802FFD74
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802FFD78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802FFD7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FFD80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802FFD84
  c->r[31]=c->r[4]|c->r[4]; // 802FFD88
  {uint32_t ea=c->r[2]+0xFFFFD070u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FFD8C
  {uint32_t ea=c->r[2]+0xFFFFD074u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFD90
  W32(c->r[1]+0x00000018u,c->r[30]); // 802FFD94
  c->r[30]=c->r[3]|c->r[3]; // 802FFD98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802FFD9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802FFDA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802FFDA4
  c->lr=0x802FFDACu; f_8030A708(c); // 802FFDA8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FFDAC
  c->f[31]=c->f[1]; // 802FFDB0
  {uint32_t ea=c->r[2]+0xFFFFD074u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFDB4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 802FFDB8
  c->lr=0x802FFDC0u; f_8030A69C(c); // 802FFDBC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802FFDC0
  c->f[5]=-c->f[1]; // 802FFDC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FFDC8
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 802FFDCC
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[8]=c->ps1[8]=RF32(ea);} // 802FFDD0
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 802FFDD4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFDD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802FFDDC
  c->f[4]=-c->f[2]; // 802FFDE0
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 802FFDE4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802FFDE8
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 802FFDEC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FFDF0
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 802FFDF4
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFDF8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 802FFDFC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[11]);} // 802FFE00
  c->f[7]=-c->f[6]; // 802FFE04
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 802FFE08
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[12]);} // 802FFE0C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 802FFE10
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 802FFE14
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[8]);} // 802FFE18
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802FFE1C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 802FFE20
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[9]);} // 802FFE24
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 802FFE28
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[10]);} // 802FFE2C
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 802FFE30
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 802FFE34
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[8]);} // 802FFE38
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802FFE3C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 802FFE40
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[8]);} // 802FFE44
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[8]);} // 802FFE48
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 802FFE4C
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[8]);} // 802FFE50
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802FFE54
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802FFE58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802FFE5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802FFE60
  c->r[0]=R32(c->r[1]+0x00000034u); // 802FFE64
  c->lr=c->r[0]; // 802FFE68
  c->r[1]=c->r[1]+0x00000030u; // 802FFE6C
  return; // 802FFE70
}

// fn_802FFE74
void f_802FFE74(Ctx* __restrict c) {
  trace_call(0x802FFE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802FFE74
  c->r[0]=c->lr; // 802FFE78
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802FFE7C
  c->r[5]=0u+0x00000000u; // 802FFE80
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802FFE84
  c->f[8]=std::fabs(c->f[2]); // 802FFE88
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFE8C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802FFE90
  c->f[9]=std::fabs(c->f[3]); // 802FFE94
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802FFE98
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 802FFE9C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 802FFEA0
  fcmp(c,0,c->f[8],c->f[0]); // 802FFEA4
  c->f[10]=std::fabs(c->f[4]); // 802FFEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802FFEAC
  c->f[11]=std::fabs(c->f[5]); // 802FFEB0
  c->f[12]=std::fabs(c->f[6]); // 802FFEB4
  c->f[13]=std::fabs(c->f[7]); // 802FFEB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFEBC
  if (crb(c,2)) { goto L_802FFF00; } // 802FFEC0
  fcmp(c,0,c->f[9],c->f[0]); // 802FFEC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFEC8
  if (crb(c,2)) { goto L_802FFF00; } // 802FFECC
  fcmp(c,0,c->f[10],c->f[0]); // 802FFED0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFED4
  if (crb(c,2)) { goto L_802FFF00; } // 802FFED8
  fcmp(c,0,c->f[11],c->f[0]); // 802FFEDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFEE0
  if (crb(c,2)) { goto L_802FFF00; } // 802FFEE4
  fcmp(c,0,c->f[12],c->f[0]); // 802FFEE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFEEC
  if (crb(c,2)) { goto L_802FFF00; } // 802FFEF0
  fcmp(c,0,c->f[13],c->f[0]); // 802FFEF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFEF8
  if (!crb(c,2)) { goto L_802FFF94; } // 802FFEFC
L_802FFF00:;
  {uint32_t ea=c->r[2]+0xFFFFD070u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FFF00
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFF04
L_802FFF08:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802FFF08
  cmps(c,0,(int32_t)c->r[0],46); // 802FFF0C
  if (!crb(c,0)) { goto L_8030003C; } // 802FFF10
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 802FFF14
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 802FFF18
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 802FFF1C
  fcmp(c,0,c->f[8],c->f[0]); // 802FFF20
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 802FFF24
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 802FFF28
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 802FFF2C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 802FFF30
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 802FFF34
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 802FFF38
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 802FFF3C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 802FFF40
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 802FFF44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF48
  c->r[5]=c->r[5]+0x00000001u; // 802FFF4C
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF50
  fcmp(c,0,c->f[9],c->f[0]); // 802FFF54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF58
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF5C
  fcmp(c,0,c->f[10],c->f[0]); // 802FFF60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF64
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF68
  fcmp(c,0,c->f[11],c->f[0]); // 802FFF6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF70
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF74
  fcmp(c,0,c->f[12],c->f[0]); // 802FFF78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF7C
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF80
  fcmp(c,0,c->f[13],c->f[0]); // 802FFF84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802FFF88
  if (crb(c,2)) { IRQCHK(c); goto L_802FFF08; } // 802FFF8C
  goto L_8030003C; // 802FFF90
L_802FFF94:;
  {uint32_t ea=c->r[2]+0xFFFFD070u; c->f[1]=c->ps1[1]=RF32(ea);} // 802FFF94
  fcmp(c,0,c->f[8],c->f[1]); // 802FFF98
  if (!crb(c,0)) { goto L_8030003C; } // 802FFF9C
  fcmp(c,0,c->f[9],c->f[1]); // 802FFFA0
  if (!crb(c,0)) { goto L_8030003C; } // 802FFFA4
  fcmp(c,0,c->f[10],c->f[1]); // 802FFFA8
  if (!crb(c,0)) { goto L_8030003C; } // 802FFFAC
  fcmp(c,0,c->f[11],c->f[1]); // 802FFFB0
  if (!crb(c,0)) { goto L_8030003C; } // 802FFFB4
  fcmp(c,0,c->f[12],c->f[1]); // 802FFFB8
  if (!crb(c,0)) { goto L_8030003C; } // 802FFFBC
  fcmp(c,0,c->f[13],c->f[1]); // 802FFFC0
  if (!crb(c,0)) { goto L_8030003C; } // 802FFFC4
  {uint32_t ea=c->r[2]+0xFFFFD080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802FFFC8
L_802FFFCC:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 802FFFCC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802FFFD0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802FFFD4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802FFFD8
  fcmp(c,0,c->f[8],c->f[1]); // 802FFFDC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 802FFFE0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 802FFFE4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 802FFFE8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 802FFFEC
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 802FFFF0
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802FFFF4
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 802FFFF8
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 802FFFFC
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 80300000
  if (!crb(c,0)) { goto L_8030003C; } // 80300004
  fcmp(c,0,c->f[9],c->f[1]); // 80300008
  if (!crb(c,0)) { goto L_8030003C; } // 8030000C
  fcmp(c,0,c->f[10],c->f[1]); // 80300010
  if (!crb(c,0)) { goto L_8030003C; } // 80300014
  fcmp(c,0,c->f[11],c->f[1]); // 80300018
  if (!crb(c,0)) { goto L_8030003C; } // 8030001C
  fcmp(c,0,c->f[12],c->f[1]); // 80300020
  if (!crb(c,0)) { goto L_8030003C; } // 80300024
  fcmp(c,0,c->f[13],c->f[1]); // 80300028
  if (!crb(c,0)) { goto L_8030003C; } // 8030002C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80300030
  cmps(c,0,(int32_t)c->r[0],-17); // 80300034
  if (crb(c,1)) { IRQCHK(c); goto L_802FFFCC; } // 80300038
L_8030003C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8030003C
  c->r[4]=c->r[1]+0x00000008u; // 80300040
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80300044
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80300048
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 8030004C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 80300050
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 80300054
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 80300058
  c->lr=0x80300060u; f_801E4ED4(c); // 8030005C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80300060
  c->lr=c->r[0]; // 80300064
  c->r[1]=c->r[1]+0x00000020u; // 80300068
  return; // 8030006C
}

// fn_80300070
void f_80300070(Ctx* __restrict c) {
  trace_call(0x80300070u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80300070
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80300074
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80300078
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8030007C
  return; // 80300080
}

// fn_80300084
void f_80300084(Ctx* __restrict c) {
  trace_call(0x80300084u);
  c->r[0]=0u+0xFFFFFFFFu; // 80300084
  W32(c->r[3]+0x00000000u,c->r[0]); // 80300088
  return; // 8030008C
}

// fn_80300090
void f_80300090(Ctx* __restrict c) {
  trace_call(0x80300090u);
  c->r[0]=0u+0x00000000u; // 80300090
  c->r[4]=c->r[3]+0x00000004u; // 80300094
  W32(c->r[3]+0x00000004u,c->r[0]); // 80300098
  W32(c->r[3]+0x00000008u,c->r[0]); // 8030009C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803000A0
  W32(c->r[3]+0x00000004u,c->r[4]); // 803000A4
  W32(c->r[3]+0x00000008u,c->r[4]); // 803000A8
  return; // 803000AC
}

// fn_803000B0
void f_803000B0(Ctx* __restrict c) {
  trace_call(0x803000B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803000B0
  c->r[0]=c->lr; // 803000B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 803000B8
  c->r[11]=c->r[1]+0x00000070u; // 803000BC
  c->lr=0x803000C4u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803000C0
  c->r[6]=0u+0x804D0000u; // 803000C4
  c->r[24]=0u+0x804D0000u; // 803000C8
  c->r[6]=c->r[6]+0xFFFF9890u; // 803000CC
  c->r[15]=c->r[3]|c->r[3]; // 803000D0
  W32(c->r[3]+0x00000000u,c->r[6]); // 803000D4
  c->r[16]=c->r[4]|c->r[4]; // 803000D8
  c->r[17]=c->r[5]|c->r[5]; // 803000DC
  c->r[24]=c->r[24]+0xFFFF9318u; // 803000E0
  c->r[3]=c->r[3]+0x00000018u; // 803000E4
  c->lr=0x803000ECu; f_80300090(c); // 803000E8
  c->r[4]=0u+0x80300000u; // 803000EC
  c->r[5]=0u+0x80300000u; // 803000F0
  c->r[3]=c->r[15]+0x0000003Cu; // 803000F4
  c->r[6]=0u+0x00000004u; // 803000F8
  c->r[4]=c->r[4]+0x00000084u; // 803000FC
  c->r[5]=c->r[5]+0xFFFFAEECu; // 80300100
  c->r[7]=0u+0x00000004u; // 80300104
  c->lr=0x8030010Cu; f_801E73B8(c); // 80300108
  c->r[3]=c->r[15]|c->r[15]; // 8030010C
  c->lr=0x80300114u; f_80300B24(c); // 80300110
  c->r[3]=c->r[15]|c->r[15]; // 80300114
  c->r[4]=c->r[16]|c->r[16]; // 80300118
  c->lr=0x80300120u; f_8030169C(c); // 8030011C
  c->r[14]=c->r[16]+0x00000014u; // 80300120
  c->r[18]=c->r[15]+0x00000024u; // 80300124
  c->r[19]=0u+0x00000000u; // 80300128
L_8030012C:;
  c->r[3]=c->r[18]|c->r[18]; // 8030012C
  c->r[4]=c->r[14]|c->r[14]; // 80300130
  c->lr=0x80300138u; f_80300808(c); // 80300134
  c->r[19]=c->r[19]+0x00000001u; // 80300138
  c->r[18]=c->r[18]+0x00000008u; // 8030013C
  cmps(c,0,(int32_t)c->r[19],3); // 80300140
  c->r[14]=c->r[14]+0x00000008u; // 80300144
  if (crb(c,0)) { IRQCHK(c); goto L_8030012C; } // 80300148
  c->r[14]=c->r[16]+0x0000002Cu; // 8030014C
  c->r[18]=c->r[15]+0x0000003Cu; // 80300150
  c->r[19]=0u+0x00000000u; // 80300154
L_80300158:;
  c->r[3]=c->r[18]|c->r[18]; // 80300158
  c->r[4]=c->r[14]|c->r[14]; // 8030015C
  c->lr=0x80300164u; f_8030082C(c); // 80300160
  c->r[19]=c->r[19]+0x00000001u; // 80300164
  c->r[18]=c->r[18]+0x00000004u; // 80300168
  cmps(c,0,(int32_t)c->r[19],4); // 8030016C
  c->r[14]=c->r[14]+0x00000004u; // 80300170
  if (crb(c,0)) { IRQCHK(c); goto L_80300158; } // 80300174
  c->r[3]=c->r[16]|c->r[16]; // 80300178
  c->r[4]=0u+0x00000040u; // 8030017C
  c->lr=0x80300184u; f_80300B1C(c); // 80300180
  c->r[25]=c->r[3]|c->r[3]; // 80300184
  c->r[3]=c->r[16]+0x0000003Cu; // 80300188
  c->lr=0x80300190u; f_80300838(c); // 8030018C
  c->r[4]=rotl(c->r[3],2)&0x000003FCu; // 80300190
  c->r[3]=c->r[16]|c->r[16]; // 80300194
  c->r[22]=c->r[4]+0x00000040u; // 80300198
  c->r[4]=c->r[22]|c->r[22]; // 8030019C
  c->lr=0x803001A4u; f_80300B14(c); // 803001A0
  c->r[21]=c->r[3]|c->r[3]; // 803001A4
  c->r[3]=c->r[16]+0x0000003Cu; // 803001A8
  c->lr=0x803001B0u; f_80300844(c); // 803001AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803001B0
  c->r[3]=c->r[16]|c->r[16]; // 803001B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803001B8
  c->r[22]=c->r[22]+c->r[0]; // 803001BC
  c->r[4]=c->r[22]|c->r[22]; // 803001C0
  c->lr=0x803001C8u; f_80300B0C(c); // 803001C4
  c->r[20]=c->r[3]|c->r[3]; // 803001C8
  c->r[3]=c->r[16]+0x0000003Cu; // 803001CC
  c->lr=0x803001D4u; f_80300850(c); // 803001D0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803001D4
  c->r[3]=c->r[16]+0x0000003Cu; // 803001D8
  c->r[22]=c->r[22]+c->r[0]; // 803001DC
  c->lr=0x803001E4u; f_80300838(c); // 803001E0
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803001E4
  c->r[4]=0u+0x00000008u; // 803001E8
  c->lr=0x803001F0u; f_80300AFC(c); // 803001EC
  c->r[18]=c->r[3]|c->r[3]; // 803001F0
  c->r[3]=c->r[16]+0x0000003Cu; // 803001F4
  c->lr=0x803001FCu; f_80300844(c); // 803001F8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803001FC
  c->r[4]=0u+0x0000000Au; // 80300200
  c->lr=0x80300208u; f_80300AFC(c); // 80300204
  c->r[26]=c->r[3]|c->r[3]; // 80300208
  c->r[3]=c->r[16]+0x0000003Cu; // 8030020C
  c->lr=0x80300214u; f_80300850(c); // 80300210
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80300214
  c->r[4]=0u+0x00000008u; // 80300218
  c->lr=0x80300220u; f_80300AFC(c); // 8030021C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80300220
  c->r[3]=c->r[16]+0x0000003Cu; // 80300224
  c->lr=0x8030022Cu; f_8030085C(c); // 80300228
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8030022C
  c->r[3]=c->r[16]+0x0000003Cu; // 80300230
  c->r[0]=0u-c->r[4]; // 80300234
  c->r[0]=c->r[0]|c->r[4]; // 80300238
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8030023C
  W8(c->r[1]+0x00000019u,c->r[0]); // 80300240
  c->lr=0x80300248u; f_80300868(c); // 80300244
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80300248
  c->r[3]=c->r[16]+0x0000003Cu; // 8030024C
  c->r[0]=0u-c->r[4]; // 80300250
  c->r[0]=c->r[0]|c->r[4]; // 80300254
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80300258
  W8(c->r[1]+0x00000018u,c->r[0]); // 8030025C
  c->lr=0x80300264u; f_80300874(c); // 80300260
  c->r[14]=c->r[3]|c->r[3]; // 80300264
  c->r[3]=c->r[16]+0x0000003Cu; // 80300268
  c->lr=0x80300270u; f_80300880(c); // 8030026C
  W32(c->r[1]+0x00000020u,c->r[3]); // 80300270
  c->r[3]=c->r[16]+0x0000003Cu; // 80300274
  c->lr=0x8030027Cu; f_8030088C(c); // 80300278
  W32(c->r[1]+0x00000024u,c->r[3]); // 8030027C
  c->r[3]=c->r[16]+0x0000003Cu; // 80300280
  c->lr=0x80300288u; f_80300898(c); // 80300284
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80300288
  c->r[4]=0u+0x00000003u; // 8030028C
  c->lr=0x80300294u; f_80300AFC(c); // 80300290
  c->r[27]=c->r[3]|c->r[3]; // 80300294
  c->r[3]=c->r[16]+0x0000003Cu; // 80300298
  c->lr=0x803002A0u; f_803008A4(c); // 8030029C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803002A0
  c->r[4]=0u+0x00000004u; // 803002A4
  c->lr=0x803002ACu; f_80300AFC(c); // 803002A8
  c->r[28]=c->r[3]|c->r[3]; // 803002AC
  c->r[3]=c->r[16]+0x0000003Cu; // 803002B0
  c->lr=0x803002B8u; f_803008B0(c); // 803002B4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803002B8
  c->r[4]=0u+0x00000010u; // 803002BC
  c->lr=0x803002C4u; f_80300AFC(c); // 803002C0
  c->r[0]=R8(c->r[1]+0x00000019u); // 803002C4
  c->r[29]=c->r[3]|c->r[3]; // 803002C8
  c->r[3]=c->r[15]|c->r[15]; // 803002CC
  c->r[8]=c->r[14]|c->r[14]; // 803002D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 803002D4
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 803002D8
  c->r[0]=R8(c->r[1]+0x00000018u); // 803002DC
  c->r[5]=rotl(c->r[26],0)&0x000000FFu; // 803002E0
  c->r[7]=rotl(c->r[29],0)&0x000000FFu; // 803002E4
  c->r[9]=rotl(c->r[28],0)&0x000000FFu; // 803002E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803002EC
  c->r[10]=rotl(c->r[27],0)&0x000000FFu; // 803002F0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803002F4
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 803002F8
  c->r[0]=R32(c->r[1]+0x00000020u); // 803002FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80300300
  c->r[0]=R32(c->r[1]+0x00000024u); // 80300304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80300308
  c->lr=0x80300310u; f_80300C40(c); // 8030030C
  c->r[0]=R32(c->r[15]+0x00000058u); // 80300310
  cmps(c,0,(int32_t)c->r[0],0); // 80300314
  if (crb(c,2)) { goto L_803007EC; } // 80300318
  c->r[3]=c->r[15]|c->r[15]; // 8030031C
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 80300320
  c->lr=0x80300328u; f_803016A8(c); // 80300324
  c->r[0]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[0]); // 80300328
  if (crb(c,2)) { goto L_80300418; } // 8030032C
  c->r[0]=R32(c->r[17]+0x00000000u); // 80300330
  cmps(c,0,(int32_t)c->r[0],0); // 80300334
  if (!crb(c,2)) { goto L_80300350; } // 80300338
  c->r[3]=c->r[24]+0x00000000u; // 8030033C
  c->r[5]=c->r[24]+0x00000014u; // 80300340
  c->r[4]=0u+0x000001D5u; // 80300344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300348
  c->lr=0x80300350u; f_802FA328(c); // 8030034C
L_80300350:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 80300350
  c->r[4]=0u+0x0000000Cu; // 80300354
  c->lr=0x8030035Cu; f_80300AF4(c); // 80300358
  c->r[19]=c->r[3]|c->r[3]; // 8030035C
  c->r[3]=c->r[15]|c->r[15]; // 80300360
  c->lr=0x80300368u; f_80301440(c); // 80300364
  c->r[30]=c->r[3]|c->r[3]; // 80300368
  c->r[18]=0u+0x00000000u; // 8030036C
  c->r[31]=0u+0x74690000u; // 80300370
  goto L_80300404; // 80300374
L_80300378:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 80300378
  c->r[0]=rotl(c->r[18],2)&0x000003FCu; // 8030037C
  c->r[23]=c->r[25]+c->r[0]; // 80300380
  c->r[4]=R16(c->r[25]+c->r[0]); // 80300384
  c->r[0]=R16(c->r[3]+0x00000008u); // 80300388
  cmpu(c,0,c->r[4],c->r[0]); // 8030038C
  if (crb(c,0)) { goto L_803003A8; } // 80300390
  c->r[3]=c->r[24]+0x00000000u; // 80300394
  c->r[5]=c->r[24]+0x00000050u; // 80300398
  c->r[4]=0u+0x000001DBu; // 8030039C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803003A0
  c->lr=0x803003A8u; f_802FA328(c); // 803003A4
L_803003A8:;
  c->r[0]=R16(c->r[23]+0x00000000u); // 803003A8
  c->r[3]=c->r[19]|c->r[19]; // 803003AC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803003B0
  c->r[4]=R32(c->r[19]+c->r[0]); // 803003B4
  c->lr=0x803003BCu; f_80300AEC(c); // 803003B8
  c->r[5]=c->r[3]|c->r[3]; // 803003BC
  c->r[3]=R32(c->r[17]+0x0000000Cu); // 803003C0
  c->r[4]=c->r[31]+0x00006D67u; // 803003C4
  c->r[6]=0u+0x00000000u; // 803003C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803003CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803003D0
  c->ctr=c->r[12]; // 803003D4
  if (true) { c->lr=0x803003DCu; dispatch(c,c->ctr); } // 803003D8
  c->r[5]=c->r[3]|c->r[3]; // 803003DC
  c->r[3]=c->r[15]|c->r[15]; // 803003E0
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 803003E4
  c->lr=0x803003ECu; f_80301DD4(c); // 803003E8
  c->r[0]=rotl(c->r[18],5)&0x00001FE0u; // 803003EC
  c->r[4]=R8(c->r[23]+0x00000002u); // 803003F0
  c->r[5]=R8(c->r[23]+0x00000003u); // 803003F4
  c->r[3]=c->r[30]+c->r[0]; // 803003F8
  c->lr=0x80300400u; f_801E4378(c); // 803003FC
  c->r[18]=c->r[18]+0x00000001u; // 80300400
L_80300404:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 80300404
  c->r[3]=rotl(c->r[18],0)&0x000000FFu; // 80300408
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8030040C
  cmpu(c,0,c->r[3],c->r[0]); // 80300410
  if (crb(c,0)) { IRQCHK(c); goto L_80300378; } // 80300414
L_80300418:;
  c->r[3]=c->r[15]|c->r[15]; // 80300418
  c->lr=0x80300420u; f_80301448(c); // 8030041C
  c->r[0]=R32(c->r[15]+0x00000050u); // 80300420
  c->r[4]=rotl(c->r[26],0)&0x000000FFu; // 80300424
  c->r[19]=c->r[3]|c->r[3]; // 80300428
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 8030042C
  cmpu(c,0,c->r[4],c->r[0]); // 80300430
  if (!crb(c,1)) { goto L_8030044C; } // 80300434
  c->r[3]=c->r[24]+0x00000000u; // 80300438
  c->r[5]=c->r[24]+0x000000A0u; // 8030043C
  c->r[4]=0u+0x000001E6u; // 80300440
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300444
  c->lr=0x8030044Cu; f_802FA328(c); // 80300448
L_8030044C:;
  c->r[18]=c->r[21]|c->r[21]; // 8030044C
  c->r[17]=rotl(c->r[26],0)&0x000000FFu; // 80300450
  c->r[23]=0u+0x00000000u; // 80300454
  goto L_8030048C; // 80300458
L_8030045C:;
  c->r[3]=c->r[19]|c->r[19]; // 8030045C
  c->r[4]=c->r[21]|c->r[21]; // 80300460
  c->lr=0x80300468u; f_80300070(c); // 80300464
  {uint32_t ea=c->r[18]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80300468
  c->r[3]=c->r[19]+0x0000000Cu; // 8030046C
  c->r[4]=c->r[21]+0x0000000Cu; // 80300470
  {uint32_t ea=c->r[19]+0x00000008u; WF32(ea,c->f[0]);} // 80300474
  c->lr=0x8030047Cu; f_80300070(c); // 80300478
  c->r[21]=c->r[21]+0x00000014u; // 8030047C
  c->r[19]=c->r[19]+0x00000014u; // 80300480
  c->r[18]=c->r[18]+0x00000014u; // 80300484
  c->r[23]=c->r[23]+0x00000001u; // 80300488
L_8030048C:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[17]); // 8030048C
  if (crb(c,0)) { IRQCHK(c); goto L_8030045C; } // 80300490
  c->r[3]=c->r[15]|c->r[15]; // 80300494
  c->lr=0x8030049Cu; f_8030145C(c); // 80300498
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8030049C
  c->r[17]=c->r[3]|c->r[3]; // 803004A0
  c->r[3]=c->r[15]|c->r[15]; // 803004A4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 803004A8
  c->lr=0x803004B0u; f_80301784(c); // 803004AC
  c->r[18]=0u+0x00000000u; // 803004B0
  goto L_803004D0; // 803004B4
L_803004B8:;
  c->r[3]=c->r[17]|c->r[17]; // 803004B8
  c->r[4]=c->r[20]|c->r[20]; // 803004BC
  c->lr=0x803004C4u; f_803008BC(c); // 803004C0
  c->r[20]=c->r[20]+0x00000004u; // 803004C4
  c->r[17]=c->r[17]+0x00000004u; // 803004C8
  c->r[18]=c->r[18]+0x00000001u; // 803004CC
L_803004D0:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803004D0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 803004D4
  cmpu(c,0,c->r[18],c->r[0]); // 803004D8
  if (crb(c,0)) { IRQCHK(c); goto L_803004B8; } // 803004DC
  c->r[0]=R8(c->r[1]+0x00000019u); // 803004E0
  cmps(c,0,(int32_t)c->r[0],0); // 803004E4
  if (crb(c,2)) { goto L_80300534; } // 803004E8
  c->r[3]=c->r[15]|c->r[15]; // 803004EC
  c->lr=0x803004F4u; f_803008E0(c); // 803004F0
  cmps(c,0,(int32_t)c->r[3],0); // 803004F4
  if (!crb(c,2)) { goto L_80300510; } // 803004F8
  c->r[3]=c->r[24]+0x00000000u; // 803004FC
  c->r[5]=c->r[24]+0x000000D8u; // 80300500
  c->r[4]=0u+0x000001F8u; // 80300504
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300508
  c->lr=0x80300510u; f_802FA328(c); // 8030050C
L_80300510:;
  c->r[3]=c->r[16]|c->r[16]; // 80300510
  c->r[4]=c->r[22]|c->r[22]; // 80300514
  c->lr=0x8030051Cu; f_80300AE4(c); // 80300518
  c->r[17]=c->r[3]|c->r[3]; // 8030051C
  c->r[3]=c->r[15]|c->r[15]; // 80300520
  c->lr=0x80300528u; f_8030147C(c); // 80300524
  c->r[4]=c->r[17]|c->r[17]; // 80300528
  c->lr=0x80300530u; f_803008EC(c); // 8030052C
  c->r[22]=c->r[22]+0x00000004u; // 80300530
L_80300534:;
  c->r[0]=R8(c->r[1]+0x00000018u); // 80300534
  cmps(c,0,(int32_t)c->r[0],0); // 80300538
  if (crb(c,2)) { goto L_80300588; } // 8030053C
  c->r[3]=c->r[15]|c->r[15]; // 80300540
  c->lr=0x80300548u; f_80300910(c); // 80300544
  cmps(c,0,(int32_t)c->r[3],0); // 80300548
  if (!crb(c,2)) { goto L_80300564; } // 8030054C
  c->r[3]=c->r[24]+0x00000000u; // 80300550
  c->r[5]=c->r[24]+0x00000100u; // 80300554
  c->r[4]=0u+0x00000200u; // 80300558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030055C
  c->lr=0x80300564u; f_802FA328(c); // 80300560
L_80300564:;
  c->r[3]=c->r[16]|c->r[16]; // 80300564
  c->r[4]=c->r[22]|c->r[22]; // 80300568
  c->lr=0x80300570u; f_80300ADC(c); // 8030056C
  c->r[17]=c->r[3]|c->r[3]; // 80300570
  c->r[3]=c->r[15]|c->r[15]; // 80300574
  c->lr=0x8030057Cu; f_803014A4(c); // 80300578
  c->r[4]=c->r[17]|c->r[17]; // 8030057C
  c->lr=0x80300584u; f_8030091C(c); // 80300580
  c->r[22]=c->r[22]+0x00000004u; // 80300584
L_80300588:;
  cmps(c,0,(int32_t)c->r[14],0); // 80300588
  if (crb(c,2)) { goto L_803005F0; } // 8030058C
  c->r[3]=c->r[15]|c->r[15]; // 80300590
  c->lr=0x80300598u; f_80300940(c); // 80300594
  cmps(c,0,(int32_t)c->r[3],0); // 80300598
  if (!crb(c,2)) { goto L_803005B4; } // 8030059C
  c->r[3]=c->r[24]+0x00000000u; // 803005A0
  c->r[5]=c->r[24]+0x00000128u; // 803005A4
  c->r[4]=0u+0x00000208u; // 803005A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803005AC
  c->lr=0x803005B4u; f_802FA328(c); // 803005B0
L_803005B4:;
  c->r[3]=c->r[16]|c->r[16]; // 803005B4
  c->r[4]=c->r[22]|c->r[22]; // 803005B8
  c->lr=0x803005C0u; f_80300AD4(c); // 803005BC
  c->r[17]=c->r[3]|c->r[3]; // 803005C0
  c->r[3]=c->r[15]|c->r[15]; // 803005C4
  c->lr=0x803005CCu; f_803014D4(c); // 803005C8
  c->r[14]=c->r[3]|c->r[3]; // 803005CC
  c->r[18]=0u+0x00000000u; // 803005D0
L_803005D4:;
  c->r[3]=c->r[14]+c->r[18]; // 803005D4
  c->r[4]=c->r[17]+c->r[18]; // 803005D8
  c->lr=0x803005E0u; f_8030094C(c); // 803005DC
  c->r[18]=c->r[18]+0x00000001u; // 803005E0
  cmps(c,0,(int32_t)c->r[18],4); // 803005E4
  if (crb(c,0)) { IRQCHK(c); goto L_803005D4; } // 803005E8
  c->r[22]=c->r[22]+0x00000004u; // 803005EC
L_803005F0:;
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[3]); // 803005F0
  if (crb(c,2)) { goto L_80300664; } // 803005F4
  c->r[0]=R32(c->r[15]+0x00000050u); // 803005F8
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 803005FC
  cmpu(c,0,c->r[3],c->r[0]); // 80300600
  if (!crb(c,1)) { goto L_8030061C; } // 80300604
  c->r[3]=c->r[24]+0x00000000u; // 80300608
  c->r[5]=c->r[24]+0x00000150u; // 8030060C
  c->r[4]=0u+0x00000214u; // 80300610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300614
  c->lr=0x8030061Cu; f_802FA328(c); // 80300618
L_8030061C:;
  c->r[3]=c->r[15]|c->r[15]; // 8030061C
  c->lr=0x80300624u; f_803015E4(c); // 80300620
  c->r[18]=c->r[3]|c->r[3]; // 80300624
  c->r[3]=c->r[16]|c->r[16]; // 80300628
  c->r[4]=c->r[22]|c->r[22]; // 8030062C
  c->lr=0x80300634u; f_80300B14(c); // 80300630
  c->r[17]=c->r[3]|c->r[3]; // 80300634
  c->r[14]=rotl(c->r[27],0)&0x000000FFu; // 80300638
  c->r[19]=0u+0x00000000u; // 8030063C
  goto L_8030065C; // 80300640
L_80300644:;
  c->r[3]=c->r[18]|c->r[18]; // 80300644
  c->r[4]=c->r[17]|c->r[17]; // 80300648
  c->lr=0x80300650u; f_80300958(c); // 8030064C
  c->r[17]=c->r[17]+0x00000014u; // 80300650
  c->r[18]=c->r[18]+0x00000014u; // 80300654
  c->r[19]=c->r[19]+0x00000001u; // 80300658
L_8030065C:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 8030065C
  if (crb(c,0)) { IRQCHK(c); goto L_80300644; } // 80300660
L_80300664:;
  c->r[3]=c->r[16]+0x0000003Cu; // 80300664
  c->lr=0x8030066Cu; f_80300898(c); // 80300668
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8030066C
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[4]); // 80300670
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80300674
  c->r[22]=c->r[22]+c->r[0]; // 80300678
  if (crb(c,2)) { goto L_803006D0; } // 8030067C
  c->r[3]=c->r[15]|c->r[15]; // 80300680
  c->lr=0x80300688u; f_80301BE4(c); // 80300684
  c->r[3]=c->r[15]|c->r[15]; // 80300688
  c->lr=0x80300690u; f_80301594(c); // 8030068C
  c->r[18]=c->r[3]|c->r[3]; // 80300690
  c->r[3]=c->r[16]|c->r[16]; // 80300694
  c->r[4]=c->r[22]|c->r[22]; // 80300698
  c->lr=0x803006A0u; f_80300ACC(c); // 8030069C
  c->r[17]=c->r[3]|c->r[3]; // 803006A0
  c->r[14]=rotl(c->r[28],0)&0x000000FFu; // 803006A4
  c->r[19]=0u+0x00000000u; // 803006A8
  goto L_803006C8; // 803006AC
L_803006B0:;
  c->r[3]=c->r[18]|c->r[18]; // 803006B0
  c->r[4]=c->r[17]|c->r[17]; // 803006B4
  c->lr=0x803006BCu; f_80300984(c); // 803006B8
  c->r[17]=c->r[17]+0x00000004u; // 803006BC
  c->r[18]=c->r[18]+0x00000004u; // 803006C0
  c->r[19]=c->r[19]+0x00000001u; // 803006C4
L_803006C8:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 803006C8
  if (crb(c,0)) { IRQCHK(c); goto L_803006B0; } // 803006CC
L_803006D0:;
  c->r[3]=c->r[16]+0x0000003Cu; // 803006D0
  c->lr=0x803006D8u; f_803008A4(c); // 803006D4
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[4]); // 803006D8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803006DC
  c->r[22]=c->r[22]+c->r[0]; // 803006E0
  if (crb(c,2)) { goto L_80300738; } // 803006E4
  c->r[3]=c->r[15]|c->r[15]; // 803006E8
  c->lr=0x803006F0u; f_8030195C(c); // 803006EC
  c->r[3]=c->r[15]|c->r[15]; // 803006F0
  c->lr=0x803006F8u; f_8030163C(c); // 803006F4
  c->r[18]=c->r[3]|c->r[3]; // 803006F8
  c->r[3]=c->r[16]|c->r[16]; // 803006FC
  c->r[4]=c->r[22]|c->r[22]; // 80300700
  c->lr=0x80300708u; f_80300AC4(c); // 80300704
  c->r[17]=c->r[3]|c->r[3]; // 80300708
  c->r[14]=rotl(c->r[29],0)&0x000000FFu; // 8030070C
  c->r[19]=0u+0x00000000u; // 80300710
  goto L_80300730; // 80300714
L_80300718:;
  c->r[3]=c->r[18]|c->r[18]; // 80300718
  c->r[4]=c->r[17]|c->r[17]; // 8030071C
  c->lr=0x80300724u; f_803009A8(c); // 80300720
  c->r[17]=c->r[17]+0x00000010u; // 80300724
  c->r[18]=c->r[18]+0x00000010u; // 80300728
  c->r[19]=c->r[19]+0x00000001u; // 8030072C
L_80300730:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[14]); // 80300730
  if (crb(c,0)) { IRQCHK(c); goto L_80300718; } // 80300734
L_80300738:;
  c->r[3]=c->r[16]+0x0000003Cu; // 80300738
  c->lr=0x80300740u; f_803008B0(c); // 8030073C
  c->r[0]=R32(c->r[1]+0x00000020u); // 80300740
  cmps(c,0,(int32_t)c->r[0],0); // 80300744
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 80300748
  c->r[22]=c->r[22]+c->r[0]; // 8030074C
  if (crb(c,2)) { goto L_8030079C; } // 80300750
  c->r[3]=c->r[15]|c->r[15]; // 80300754
  c->lr=0x8030075Cu; f_80300A54(c); // 80300758
  cmps(c,0,(int32_t)c->r[3],0); // 8030075C
  if (!crb(c,2)) { goto L_80300778; } // 80300760
  c->r[3]=c->r[24]+0x00000000u; // 80300764
  c->r[5]=c->r[24]+0x0000018Cu; // 80300768
  c->r[4]=0u+0x00000238u; // 8030076C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300770
  c->lr=0x80300778u; f_802FA328(c); // 80300774
L_80300778:;
  c->r[3]=c->r[16]|c->r[16]; // 80300778
  c->r[4]=c->r[22]|c->r[22]; // 8030077C
  c->lr=0x80300784u; f_80300ABC(c); // 80300780
  c->r[14]=c->r[3]|c->r[3]; // 80300784
  c->r[3]=c->r[15]|c->r[15]; // 80300788
  c->lr=0x80300790u; f_8030150C(c); // 8030078C
  c->r[4]=c->r[14]|c->r[14]; // 80300790
  c->lr=0x80300798u; f_80300A60(c); // 80300794
  c->r[22]=c->r[22]+0x00000004u; // 80300798
L_8030079C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030079C
  cmps(c,0,(int32_t)c->r[0],0); // 803007A0
  if (crb(c,2)) { goto L_803007EC; } // 803007A4
  c->r[3]=c->r[15]|c->r[15]; // 803007A8
  c->lr=0x803007B0u; f_80300A84(c); // 803007AC
  cmps(c,0,(int32_t)c->r[3],0); // 803007B0
  if (!crb(c,2)) { goto L_803007CC; } // 803007B4
  c->r[3]=c->r[24]+0x00000000u; // 803007B8
  c->r[5]=c->r[24]+0x000001B8u; // 803007BC
  c->r[4]=0u+0x00000240u; // 803007C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803007C4
  c->lr=0x803007CCu; f_802FA328(c); // 803007C8
L_803007CC:;
  c->r[3]=c->r[16]|c->r[16]; // 803007CC
  c->r[4]=c->r[22]|c->r[22]; // 803007D0
  c->lr=0x803007D8u; f_80300AB4(c); // 803007D4
  c->r[14]=c->r[3]|c->r[3]; // 803007D8
  c->r[3]=c->r[15]|c->r[15]; // 803007DC
  c->lr=0x803007E4u; f_8030154C(c); // 803007E0
  c->r[4]=c->r[14]|c->r[14]; // 803007E4
  c->lr=0x803007ECu; f_80300A90(c); // 803007E8
L_803007EC:;
  c->r[11]=c->r[1]+0x00000070u; // 803007EC
  c->r[3]=c->r[15]|c->r[15]; // 803007F0
  c->lr=0x803007F8u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803007F4
  c->r[0]=R32(c->r[1]+0x00000074u); // 803007F8
  c->lr=c->r[0]; // 803007FC
  c->r[1]=c->r[1]+0x00000070u; // 80300800
  return; // 80300804
}

// fn_80300808
void f_80300808(Ctx* __restrict c) {
  trace_call(0x80300808u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 80300808
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8030080C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80300810
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80300814
  W16(c->r[3]+0x00000000u,c->r[7]); // 80300818
  W16(c->r[3]+0x00000002u,c->r[6]); // 8030081C
  W16(c->r[3]+0x00000004u,c->r[5]); // 80300820
  W16(c->r[3]+0x00000006u,c->r[0]); // 80300824
  return; // 80300828
}

// fn_8030082C
void f_8030082C(Ctx* __restrict c) {
  trace_call(0x8030082Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8030082C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80300830
  return; // 80300834
}

// fn_80300838
void f_80300838(Ctx* __restrict c) {
  trace_call(0x80300838u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300838
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 8030083C
  return; // 80300840
}

// fn_80300844
void f_80300844(Ctx* __restrict c) {
  trace_call(0x80300844u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300844
  c->r[3]=rotl(c->r[0],28)&0x0000000Fu; // 80300848
  return; // 8030084C
}

// fn_80300850
void f_80300850(Ctx* __restrict c) {
  trace_call(0x80300850u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300850
  c->r[3]=rotl(c->r[0],24)&0x0000000Fu; // 80300854
  return; // 80300858
}

// fn_8030085C
void f_8030085C(Ctx* __restrict c) {
  trace_call(0x8030085Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8030085C
  c->r[3]=rotl(c->r[0],7)&0x00000001u; // 80300860
  return; // 80300864
}

// fn_80300868
void f_80300868(Ctx* __restrict c) {
  trace_call(0x80300868u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300868
  c->r[3]=rotl(c->r[0],5)&0x00000001u; // 8030086C
  return; // 80300870
}

// fn_80300874
void f_80300874(Ctx* __restrict c) {
  trace_call(0x80300874u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300874
  c->r[3]=rotl(c->r[0],20)&0x00000001u; // 80300878
  return; // 8030087C
}

// fn_80300880
void f_80300880(Ctx* __restrict c) {
  trace_call(0x80300880u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300880
  c->r[3]=rotl(c->r[0],9)&0x00000001u; // 80300884
  return; // 80300888
}

// fn_8030088C
void f_8030088C(Ctx* __restrict c) {
  trace_call(0x8030088Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8030088C
  c->r[3]=rotl(c->r[0],8)&0x00000001u; // 80300890
  return; // 80300894
}

// fn_80300898
void f_80300898(Ctx* __restrict c) {
  trace_call(0x80300898u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 80300898
  c->r[3]=rotl(c->r[0],19)&0x00000003u; // 8030089C
  return; // 803008A0
}

// fn_803008A4
void f_803008A4(Ctx* __restrict c) {
  trace_call(0x803008A4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803008A4
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 803008A8
  return; // 803008AC
}

// fn_803008B0
void f_803008B0(Ctx* __restrict c) {
  trace_call(0x803008B0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803008B0
  c->r[3]=rotl(c->r[0],14)&0x0000001Fu; // 803008B4
  return; // 803008B8
}

// fn_803008BC
void f_803008BC(Ctx* __restrict c) {
  trace_call(0x803008BCu);
  c->r[7]=R8(c->r[4]+0x00000000u); // 803008BC
  c->r[6]=R8(c->r[4]+0x00000001u); // 803008C0
  c->r[5]=R8(c->r[4]+0x00000002u); // 803008C4
  c->r[0]=R8(c->r[4]+0x00000003u); // 803008C8
  W8(c->r[3]+0x00000000u,c->r[7]); // 803008CC
  W8(c->r[3]+0x00000001u,c->r[6]); // 803008D0
  W8(c->r[3]+0x00000002u,c->r[5]); // 803008D4
  W8(c->r[3]+0x00000003u,c->r[0]); // 803008D8
  return; // 803008DC
}

// fn_803008E0
void f_803008E0(Ctx* __restrict c) {
  trace_call(0x803008E0u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803008E0
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 803008E4
  return; // 803008E8
}

// fn_803008EC
void f_803008EC(Ctx* __restrict c) {
  trace_call(0x803008ECu);
  c->r[7]=R8(c->r[4]+0x00000000u); // 803008EC
  c->r[6]=R8(c->r[4]+0x00000001u); // 803008F0
  c->r[5]=R8(c->r[4]+0x00000002u); // 803008F4
  c->r[0]=R8(c->r[4]+0x00000003u); // 803008F8
  W8(c->r[3]+0x00000000u,c->r[7]); // 803008FC
  W8(c->r[3]+0x00000001u,c->r[6]); // 80300900
  W8(c->r[3]+0x00000002u,c->r[5]); // 80300904
  W8(c->r[3]+0x00000003u,c->r[0]); // 80300908
  return; // 8030090C
}

// fn_80300910
void f_80300910(Ctx* __restrict c) {
  trace_call(0x80300910u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80300910
  c->r[3]=rotl(c->r[0],25)&0x00000001u; // 80300914
  return; // 80300918
}

// fn_8030091C
void f_8030091C(Ctx* __restrict c) {
  trace_call(0x8030091Cu);
  c->r[7]=R8(c->r[4]+0x00000000u); // 8030091C
  c->r[6]=R8(c->r[4]+0x00000001u); // 80300920
  c->r[5]=R8(c->r[4]+0x00000002u); // 80300924
  c->r[0]=R8(c->r[4]+0x00000003u); // 80300928
  W8(c->r[3]+0x00000000u,c->r[7]); // 8030092C
  W8(c->r[3]+0x00000001u,c->r[6]); // 80300930
  W8(c->r[3]+0x00000002u,c->r[5]); // 80300934
  W8(c->r[3]+0x00000003u,c->r[0]); // 80300938
  return; // 8030093C
}

// fn_80300940
void f_80300940(Ctx* __restrict c) {
  trace_call(0x80300940u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80300940
  c->r[3]=rotl(c->r[0],18)&0x00000001u; // 80300944
  return; // 80300948
}

// fn_8030094C
void f_8030094C(Ctx* __restrict c) {
  trace_call(0x8030094Cu);
  c->r[0]=R8(c->r[4]+0x00000000u); // 8030094C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80300950
  return; // 80300954
}

// fn_80300958
void f_80300958(Ctx* __restrict c) {
  trace_call(0x80300958u);
  c->r[7]=R32(c->r[4]+0x00000000u); // 80300958
  c->r[6]=R32(c->r[4]+0x00000004u); // 8030095C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80300960
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80300964
  c->r[0]=R32(c->r[4]+0x00000010u); // 80300968
  W32(c->r[3]+0x00000000u,c->r[7]); // 8030096C
  W32(c->r[3]+0x00000004u,c->r[6]); // 80300970
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80300974
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 80300978
  W32(c->r[3]+0x00000010u,c->r[0]); // 8030097C
  return; // 80300980
}

// fn_80300984
void f_80300984(Ctx* __restrict c) {
  trace_call(0x80300984u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80300984
  c->r[6]=R8(c->r[4]+0x00000001u); // 80300988
  c->r[5]=R8(c->r[4]+0x00000002u); // 8030098C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80300990
  W8(c->r[3]+0x00000000u,c->r[7]); // 80300994
  W8(c->r[3]+0x00000001u,c->r[6]); // 80300998
  W8(c->r[3]+0x00000002u,c->r[5]); // 8030099C
  W8(c->r[3]+0x00000003u,c->r[0]); // 803009A0
  return; // 803009A4
}

// fn_803009A8
void f_803009A8(Ctx* __restrict c) {
  trace_call(0x803009A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803009A8
  c->r[0]=c->lr; // 803009AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803009B0
  c->r[11]=c->r[1]+0x00000030u; // 803009B4
  c->lr=0x803009BCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803009B8
  c->r[25]=R8(c->r[4]+0x00000000u); // 803009BC
  c->r[26]=R8(c->r[4]+0x00000001u); // 803009C0
  c->r[27]=R8(c->r[4]+0x00000002u); // 803009C4
  c->r[28]=R8(c->r[4]+0x00000003u); // 803009C8
  c->r[29]=R8(c->r[4]+0x00000004u); // 803009CC
  c->r[30]=R8(c->r[4]+0x00000005u); // 803009D0
  c->r[31]=R8(c->r[4]+0x00000006u); // 803009D4
  c->r[12]=R8(c->r[4]+0x00000007u); // 803009D8
  c->r[11]=R8(c->r[4]+0x00000008u); // 803009DC
  c->r[10]=R8(c->r[4]+0x00000009u); // 803009E0
  c->r[9]=R8(c->r[4]+0x0000000Au); // 803009E4
  c->r[8]=R8(c->r[4]+0x0000000Bu); // 803009E8
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 803009EC
  c->r[6]=R8(c->r[4]+0x0000000Du); // 803009F0
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 803009F4
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 803009F8
  W8(c->r[3]+0x00000008u,c->r[11]); // 803009FC
  c->r[11]=c->r[1]+0x00000030u; // 80300A00
  W8(c->r[3]+0x00000000u,c->r[25]); // 80300A04
  W8(c->r[3]+0x00000001u,c->r[26]); // 80300A08
  W8(c->r[3]+0x00000002u,c->r[27]); // 80300A0C
  W8(c->r[3]+0x00000003u,c->r[28]); // 80300A10
  W8(c->r[3]+0x00000004u,c->r[29]); // 80300A14
  W8(c->r[3]+0x00000005u,c->r[30]); // 80300A18
  W8(c->r[3]+0x00000006u,c->r[31]); // 80300A1C
  W8(c->r[3]+0x00000007u,c->r[12]); // 80300A20
  W8(c->r[3]+0x00000009u,c->r[10]); // 80300A24
  W8(c->r[3]+0x0000000Au,c->r[9]); // 80300A28
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 80300A2C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 80300A30
  W8(c->r[3]+0x0000000Du,c->r[6]); // 80300A34
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 80300A38
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80300A3C
  c->lr=0x80300A44u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80300A40
  c->r[0]=R32(c->r[1]+0x00000034u); // 80300A44
  c->lr=c->r[0]; // 80300A48
  c->r[1]=c->r[1]+0x00000030u; // 80300A4C
  return; // 80300A50
}

// fn_80300A54
void f_80300A54(Ctx* __restrict c) {
  trace_call(0x80300A54u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80300A54
  c->r[3]=rotl(c->r[0],26)&0x00000001u; // 80300A58
  return; // 80300A5C
}

// fn_80300A60
void f_80300A60(Ctx* __restrict c) {
  trace_call(0x80300A60u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80300A60
  c->r[6]=R8(c->r[4]+0x00000001u); // 80300A64
  c->r[5]=R8(c->r[4]+0x00000002u); // 80300A68
  c->r[0]=R8(c->r[4]+0x00000003u); // 80300A6C
  W8(c->r[3]+0x00000000u,c->r[7]); // 80300A70
  W8(c->r[3]+0x00000001u,c->r[6]); // 80300A74
  W8(c->r[3]+0x00000002u,c->r[5]); // 80300A78
  W8(c->r[3]+0x00000003u,c->r[0]); // 80300A7C
  return; // 80300A80
}

// fn_80300A84
void f_80300A84(Ctx* __restrict c) {
  trace_call(0x80300A84u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80300A84
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 80300A88
  return; // 80300A8C
}

// fn_80300A90
void f_80300A90(Ctx* __restrict c) {
  trace_call(0x80300A90u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 80300A90
  c->r[6]=R8(c->r[4]+0x00000001u); // 80300A94
  c->r[5]=R8(c->r[4]+0x00000002u); // 80300A98
  c->r[0]=R8(c->r[4]+0x00000003u); // 80300A9C
  W8(c->r[3]+0x00000000u,c->r[7]); // 80300AA0
  W8(c->r[3]+0x00000001u,c->r[6]); // 80300AA4
  W8(c->r[3]+0x00000002u,c->r[5]); // 80300AA8
  W8(c->r[3]+0x00000003u,c->r[0]); // 80300AAC
  return; // 80300AB0
}

// fn_80300AB4
void f_80300AB4(Ctx* __restrict c) {
  trace_call(0x80300AB4u);
  c->r[3]=c->r[3]+c->r[4]; // 80300AB4
  return; // 80300AB8
}

// fn_80300ABC
void f_80300ABC(Ctx* __restrict c) {
  trace_call(0x80300ABCu);
  c->r[3]=c->r[3]+c->r[4]; // 80300ABC
  return; // 80300AC0
}

// fn_80300AC4
void f_80300AC4(Ctx* __restrict c) {
  trace_call(0x80300AC4u);
  c->r[3]=c->r[3]+c->r[4]; // 80300AC4
  return; // 80300AC8
}

// fn_80300ACC
void f_80300ACC(Ctx* __restrict c) {
  trace_call(0x80300ACCu);
  c->r[3]=c->r[3]+c->r[4]; // 80300ACC
  return; // 80300AD0
}

// fn_80300AD4
void f_80300AD4(Ctx* __restrict c) {
  trace_call(0x80300AD4u);
  c->r[3]=c->r[3]+c->r[4]; // 80300AD4
  return; // 80300AD8
}

// fn_80300ADC
void f_80300ADC(Ctx* __restrict c) {
  trace_call(0x80300ADCu);
  c->r[3]=c->r[3]+c->r[4]; // 80300ADC
  return; // 80300AE0
}

// fn_80300AE4
void f_80300AE4(Ctx* __restrict c) {
  trace_call(0x80300AE4u);
  c->r[3]=c->r[3]+c->r[4]; // 80300AE4
  return; // 80300AE8
}

// fn_80300AEC
void f_80300AEC(Ctx* __restrict c) {
  trace_call(0x80300AECu);
  c->r[3]=c->r[3]+c->r[4]; // 80300AEC
  return; // 80300AF0
}

// fn_80300AF4
void f_80300AF4(Ctx* __restrict c) {
  trace_call(0x80300AF4u);
  c->r[3]=c->r[3]+c->r[4]; // 80300AF4
  return; // 80300AF8
}

// fn_80300AFC
void f_80300AFC(Ctx* __restrict c) {
  trace_call(0x80300AFCu);
  cmpu(c,0,c->r[3],c->r[4]); // 80300AFC
  if (!crb(c,1)) return; // 80300B00
  c->r[3]=c->r[4]|c->r[4]; // 80300B04
  return; // 80300B08
}

// fn_80300B0C
void f_80300B0C(Ctx* __restrict c) {
  trace_call(0x80300B0Cu);
  c->r[3]=c->r[3]+c->r[4]; // 80300B0C
  return; // 80300B10
}

// fn_80300B14
void f_80300B14(Ctx* __restrict c) {
  trace_call(0x80300B14u);
  c->r[3]=c->r[3]+c->r[4]; // 80300B14
  return; // 80300B18
}

// fn_80300B1C
void f_80300B1C(Ctx* __restrict c) {
  trace_call(0x80300B1Cu);
  c->r[3]=c->r[3]+c->r[4]; // 80300B1C
  return; // 80300B20
}

// fn_80300B24
void f_80300B24(Ctx* __restrict c) {
  trace_call(0x80300B24u);
  c->r[7]=c->r[2]+0xFFFFD3D0u; // 80300B24
  c->r[0]=R32(c->r[3]+0x00000050u); // 80300B28
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80300B2C
  c->r[6]=0u+0x000000FFu; // 80300B30
  c->r[4]=0u+0x00000000u; // 80300B34
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFD3D0u); // 80300B38
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000002u); // 80300B3C
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 80300B40
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000004u); // 80300B44
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80300B48
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000006u); // 80300B4C
  W16(c->r[3]+0x00000024u,c->r[10]); // 80300B50
  W16(c->r[3]+0x00000026u,c->r[9]); // 80300B54
  W16(c->r[3]+0x00000028u,c->r[8]); // 80300B58
  W16(c->r[3]+0x0000002Au,c->r[7]); // 80300B5C
  W16(c->r[3]+0x0000002Cu,c->r[6]); // 80300B60
  W16(c->r[3]+0x0000002Eu,c->r[6]); // 80300B64
  W16(c->r[3]+0x00000030u,c->r[6]); // 80300B68
  W16(c->r[3]+0x00000032u,c->r[6]); // 80300B6C
  W16(c->r[3]+0x00000034u,c->r[6]); // 80300B70
  W16(c->r[3]+0x00000036u,c->r[6]); // 80300B74
  W16(c->r[3]+0x00000038u,c->r[6]); // 80300B78
  W16(c->r[3]+0x0000003Au,c->r[6]); // 80300B7C
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 80300B80
  W32(c->r[3]+0x00000050u,c->r[0]); // 80300B84
  W8(c->r[3]+0x00000054u,c->r[4]); // 80300B88
  W32(c->r[3]+0x00000058u,c->r[4]); // 80300B8C
  return; // 80300B90
}

// fn_80300B94
void f_80300B94(Ctx* __restrict c) {
  trace_call(0x80300B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80300B94
  c->r[0]=c->lr; // 80300B98
  cmps(c,0,(int32_t)c->r[3],0); // 80300B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80300BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80300BA4
  c->r[31]=c->r[4]|c->r[4]; // 80300BA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80300BAC
  c->r[30]=c->r[3]|c->r[3]; // 80300BB0
  if (crb(c,2)) { goto L_80300C24; } // 80300BB4
  c->r[12]=0u+0x804D0000u; // 80300BB8
  c->r[12]=c->r[12]+0xFFFF9890u; // 80300BBC
  W32(c->r[3]+0x00000000u,c->r[12]); // 80300BC0
  c->r[12]=R32(c->r[12]+0x00000018u); // 80300BC4
  c->ctr=c->r[12]; // 80300BC8
  if (true) { c->lr=0x80300BD0u; dispatch(c,c->ctr); } // 80300BCC
  c->r[4]=R32(c->r[30]+0x00000058u); // 80300BD0
  cmps(c,0,(int32_t)c->r[4],0); // 80300BD4
  if (crb(c,2)) { goto L_80300BEC; } // 80300BD8
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 80300BDC
  c->lr=0x80300BE4u; f_80201DA0(c); // 80300BE0
  c->r[0]=0u+0x00000000u; // 80300BE4
  W32(c->r[30]+0x00000058u,c->r[0]); // 80300BE8
L_80300BEC:;
  c->r[4]=0u+0x80300000u; // 80300BEC
  c->r[3]=c->r[30]+0x0000003Cu; // 80300BF0
  c->r[4]=c->r[4]+0xFFFFAEECu; // 80300BF4
  c->r[5]=0u+0x00000004u; // 80300BF8
  c->r[6]=0u+0x00000004u; // 80300BFC
  c->lr=0x80300C04u; f_801E74B0(c); // 80300C00
  c->r[3]=addc(c,c->r[30],0x00000018u,0); cr0(c,c->r[3]); // 80300C04
  if (crb(c,2)) { goto L_80300C14; } // 80300C08
  c->r[4]=0u+0x00000000u; // 80300C0C
  c->lr=0x80300C14u; f_8032F918(c); // 80300C10
L_80300C14:;
  cmps(c,0,(int32_t)c->r[31],0); // 80300C14
  if (!crb(c,1)) { goto L_80300C24; } // 80300C18
  c->r[3]=c->r[30]|c->r[30]; // 80300C1C
  c->lr=0x80300C24u; f_8001AAC0(c); // 80300C20
L_80300C24:;
  c->r[3]=c->r[30]|c->r[30]; // 80300C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80300C28
  c->r[30]=R32(c->r[1]+0x00000008u); // 80300C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80300C30
  c->lr=c->r[0]; // 80300C34
  c->r[1]=c->r[1]+0x00000010u; // 80300C38
  return; // 80300C3C
}

// fn_80300C40
void f_80300C40(Ctx* __restrict c) {
  trace_call(0x80300C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80300C40
  c->r[0]=c->lr; // 80300C44
  W32(c->r[1]+0x00000064u,c->r[0]); // 80300C48
  c->r[11]=c->r[1]+0x00000060u; // 80300C4C
  c->lr=0x80300C54u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80300C50
  cmpu(c,0,c->r[4],0x00000008u); // 80300C54
  c->r[19]=0u+0x804D0000u; // 80300C58
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 80300C5C
  c->r[20]=c->r[3]|c->r[3]; // 80300C60
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 80300C64
  c->r[21]=c->r[4]|c->r[4]; // 80300C68
  c->r[30]=R8(c->r[1]+0x00000073u); // 80300C6C
  c->r[22]=c->r[5]|c->r[5]; // 80300C70
  c->r[31]=R8(c->r[1]+0x00000077u); // 80300C74
  c->r[23]=c->r[6]|c->r[6]; // 80300C78
  c->r[24]=c->r[7]|c->r[7]; // 80300C7C
  c->r[25]=c->r[8]|c->r[8]; // 80300C80
  c->r[26]=c->r[9]|c->r[9]; // 80300C84
  c->r[27]=c->r[10]|c->r[10]; // 80300C88
  c->r[19]=c->r[19]+0xFFFF9318u; // 80300C8C
  if (!crb(c,1)) { goto L_80300CA8; } // 80300C90
  c->r[3]=c->r[19]+0x00000000u; // 80300C94
  c->r[5]=c->r[19]+0x000001E4u; // 80300C98
  c->r[4]=0u+0x00000295u; // 80300C9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300CA0
  c->lr=0x80300CA8u; f_802FA328(c); // 80300CA4
L_80300CA8:;
  cmpu(c,0,c->r[22],0x0000000Au); // 80300CA8
  if (!crb(c,1)) { goto L_80300CC4; } // 80300CAC
  c->r[3]=c->r[19]+0x00000000u; // 80300CB0
  c->r[5]=c->r[19]+0x00000218u; // 80300CB4
  c->r[4]=0u+0x00000296u; // 80300CB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300CBC
  c->lr=0x80300CC4u; f_802FA328(c); // 80300CC0
L_80300CC4:;
  cmpu(c,0,c->r[23],0x00000008u); // 80300CC4
  if (!crb(c,1)) { goto L_80300CE0; } // 80300CC8
  c->r[3]=c->r[19]+0x00000000u; // 80300CCC
  c->r[5]=c->r[19]+0x00000248u; // 80300CD0
  c->r[4]=0u+0x00000297u; // 80300CD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300CD8
  c->lr=0x80300CE0u; f_802FA328(c); // 80300CDC
L_80300CE0:;
  cmpu(c,0,c->r[24],0x00000010u); // 80300CE0
  if (!crb(c,1)) { goto L_80300CFC; } // 80300CE4
  c->r[3]=c->r[19]+0x00000000u; // 80300CE8
  c->r[5]=c->r[19]+0x00000284u; // 80300CEC
  c->r[4]=0u+0x00000298u; // 80300CF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300CF4
  c->lr=0x80300CFCu; f_802FA328(c); // 80300CF8
L_80300CFC:;
  cmpu(c,0,c->r[26],0x00000004u); // 80300CFC
  if (!crb(c,1)) { goto L_80300D18; } // 80300D00
  c->r[3]=c->r[19]+0x00000000u; // 80300D04
  c->r[5]=c->r[19]+0x000002BCu; // 80300D08
  c->r[4]=0u+0x00000299u; // 80300D0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300D10
  c->lr=0x80300D18u; f_802FA328(c); // 80300D14
L_80300D18:;
  cmpu(c,0,c->r[27],0x00000003u); // 80300D18
  if (!crb(c,1)) { goto L_80300D34; } // 80300D1C
  c->r[3]=c->r[19]+0x00000000u; // 80300D20
  c->r[5]=c->r[19]+0x000002F8u; // 80300D24
  c->r[4]=0u+0x0000029Au; // 80300D28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80300D2C
  c->lr=0x80300D34u; f_802FA328(c); // 80300D30
L_80300D34:;
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 80300D34
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 80300D38
  cmpu(c,0,c->r[0],c->r[21]); // 80300D3C
  if (crb(c,0)) { goto L_80300DBC; } // 80300D40
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 80300D44
  cmpu(c,0,c->r[0],c->r[22]); // 80300D48
  if (crb(c,0)) { goto L_80300DBC; } // 80300D4C
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 80300D50
  cmpu(c,0,c->r[0],c->r[23]); // 80300D54
  if (crb(c,0)) { goto L_80300DBC; } // 80300D58
  c->r[0]=rotl(c->r[3],23)&0x0000001Fu; // 80300D5C
  cmpu(c,0,c->r[0],c->r[24]); // 80300D60
  if (crb(c,0)) { goto L_80300DBC; } // 80300D64
  c->r[0]=rotl(c->r[3],18)&0x00000001u; // 80300D68
  cmpu(c,0,c->r[0],c->r[25]); // 80300D6C
  if (crb(c,0)) { goto L_80300DBC; } // 80300D70
  c->r[0]=rotl(c->r[3],17)&0x00000007u; // 80300D74
  cmpu(c,0,c->r[0],c->r[26]); // 80300D78
  if (crb(c,0)) { goto L_80300DBC; } // 80300D7C
  c->r[0]=rotl(c->r[3],14)&0x00000003u; // 80300D80
  cmpu(c,0,c->r[0],c->r[27]); // 80300D84
  if (crb(c,0)) { goto L_80300DBC; } // 80300D88
  c->r[0]=rotl(c->r[3],24)&0x00000001u; // 80300D8C
  cmpu(c,0,c->r[0],c->r[28]); // 80300D90
  if (crb(c,0)) { goto L_80300DBC; } // 80300D94
  c->r[0]=rotl(c->r[3],25)&0x00000001u; // 80300D98
  cmpu(c,0,c->r[0],c->r[29]); // 80300D9C
  if (crb(c,0)) { goto L_80300DBC; } // 80300DA0
  c->r[0]=rotl(c->r[3],26)&0x00000001u; // 80300DA4
  cmpu(c,0,c->r[0],c->r[30]); // 80300DA8
  if (crb(c,0)) { goto L_80300DBC; } // 80300DAC
  c->r[0]=rotl(c->r[3],27)&0x00000001u; // 80300DB0
  cmpu(c,0,c->r[0],c->r[31]); // 80300DB4
  if (!crb(c,0)) { goto L_80301428; } // 80300DB8
L_80300DBC:;
  c->r[4]=R32(c->r[20]+0x00000058u); // 80300DBC
  cmps(c,0,(int32_t)c->r[4],0); // 80300DC0
  if (crb(c,2)) { goto L_80300DF0; } // 80300DC4
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 80300DC8
  c->lr=0x80300DD0u; f_80201DA0(c); // 80300DCC
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 80300DD0
  c->r[4]=0u+0x00000000u; // 80300DD4
  c->r[0]=R32(c->r[20]+0x00000050u); // 80300DD8
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 80300DDC
  W32(c->r[20]+0x00000058u,c->r[4]); // 80300DE0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 80300DE4
  W32(c->r[20]+0x0000004Cu,c->r[3]); // 80300DE8
  W32(c->r[20]+0x00000050u,c->r[0]); // 80300DEC
L_80300DF0:;
  c->r[5]=c->r[27]+c->r[22]; // 80300DF0
  c->r[0]=c->r[25]+c->r[28]; // 80300DF4
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80300DF8
  c->r[4]=c->r[31]+c->r[29]; // 80300DFC
  c->r[3]=c->r[26]+c->r[23]; // 80300E00
  c->r[0]=c->r[30]+c->r[0]; // 80300E04
  c->r[4]=c->r[4]+c->r[3]; // 80300E08
  c->r[5]=rotl(c->r[21],5)&0x00001FE0u; // 80300E0C
  c->r[0]=c->r[4]+c->r[0]; // 80300E10
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 80300E14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80300E18
  c->r[4]=rotl(c->r[24],4)&0x00000FF0u; // 80300E1C
  c->r[0]=c->r[6]+c->r[0]; // 80300E20
  c->r[0]=c->r[5]+c->r[0]; // 80300E24
  c->r[4]=c->r[4]+c->r[0]; // 80300E28
  c->lr=0x80300E30u; f_80201D90(c); // 80300E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80300E30
  W32(c->r[20]+0x00000058u,c->r[3]); // 80300E34
  if (crb(c,2)) { goto L_80301428; } // 80300E38
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80300E3C
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 80300E40
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 80300E44
  c->r[4]=R32(c->r[20]+0x00000050u); // 80300E48
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80300E4C
  c->r[6]=0u+0x00000000u; // 80300E50
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 80300E54
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80300E58
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 80300E5C
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80300E60
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 80300E64
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 80300E68
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80300E6C
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80300E70
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 80300E74
  W32(c->r[20]+0x0000004Cu,c->r[0]); // 80300E78
  c->r[5]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[5]); // 80300E7C
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 80300E80
  W32(c->r[20]+0x00000050u,c->r[4]); // 80300E84
  c->r[4]=c->r[3]+c->r[0]; // 80300E88
  if (crb(c,2)) { goto L_80301034; } // 80300E8C
  cmpu(c,0,c->r[5],0x00000008u); // 80300E90
  c->r[3]=c->r[5]+0xFFFFFFF8u; // 80300E94
  if (!crb(c,1)) { goto L_80300FE8; } // 80300E98
  c->r[0]=c->r[3]+0x00000007u; // 80300E9C
  c->r[7]=c->r[4]|c->r[4]; // 80300EA0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80300EA4
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80300EA8
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80300EAC
  c->ctr=c->r[0]; // 80300EB0
  cmpu(c,0,c->r[3],0x00000000u); // 80300EB4
  if (!crb(c,1)) { goto L_80300FE8; } // 80300EB8
L_80300EBC:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[1]);} // 80300EBC
  c->r[6]=c->r[6]+0x00000008u; // 80300EC0
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 80300EC4
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 80300EC8
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 80300ECC
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80300ED0
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[1]);} // 80300ED4
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[1]);} // 80300ED8
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300EDC
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 80300EE0
  {uint32_t ea=c->r[7]+0x00000024u; WF32(ea,c->f[0]);} // 80300EE4
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[1]);} // 80300EE8
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[1]);} // 80300EEC
  {uint32_t ea=c->r[7]+0x00000030u; WF32(ea,c->f[1]);} // 80300EF0
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[0]);} // 80300EF4
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[0]);} // 80300EF8
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 80300EFC
  {uint32_t ea=c->r[7]+0x00000040u; WF32(ea,c->f[1]);} // 80300F00
  {uint32_t ea=c->r[7]+0x00000044u; WF32(ea,c->f[1]);} // 80300F04
  {uint32_t ea=c->r[7]+0x00000048u; WF32(ea,c->f[0]);} // 80300F08
  {uint32_t ea=c->r[7]+0x0000004Cu; WF32(ea,c->f[0]);} // 80300F0C
  {uint32_t ea=c->r[7]+0x00000050u; WF32(ea,c->f[1]);} // 80300F10
  {uint32_t ea=c->r[7]+0x00000054u; WF32(ea,c->f[1]);} // 80300F14
  {uint32_t ea=c->r[7]+0x00000058u; WF32(ea,c->f[1]);} // 80300F18
  {uint32_t ea=c->r[7]+0x0000005Cu; WF32(ea,c->f[0]);} // 80300F1C
  {uint32_t ea=c->r[7]+0x00000060u; WF32(ea,c->f[0]);} // 80300F20
  {uint32_t ea=c->r[7]+0x00000064u; WF32(ea,c->f[1]);} // 80300F24
  {uint32_t ea=c->r[7]+0x00000068u; WF32(ea,c->f[1]);} // 80300F28
  {uint32_t ea=c->r[7]+0x0000006Cu; WF32(ea,c->f[1]);} // 80300F2C
  {uint32_t ea=c->r[7]+0x00000070u; WF32(ea,c->f[0]);} // 80300F30
  {uint32_t ea=c->r[7]+0x00000074u; WF32(ea,c->f[0]);} // 80300F34
  {uint32_t ea=c->r[7]+0x00000078u; WF32(ea,c->f[1]);} // 80300F38
  {uint32_t ea=c->r[7]+0x0000007Cu; WF32(ea,c->f[1]);} // 80300F3C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300F40
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300F44
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300F48
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300F4C
  {uint32_t ea=c->r[7]+0x00000080u; WF32(ea,c->f[1]);} // 80300F50
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300F54
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300F58
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300F5C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300F60
  {uint32_t ea=c->r[7]+0x00000084u; WF32(ea,c->f[0]);} // 80300F64
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300F68
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300F6C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300F70
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300F74
  {uint32_t ea=c->r[7]+0x00000088u; WF32(ea,c->f[0]);} // 80300F78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300F7C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300F80
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300F84
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300F88
  {uint32_t ea=c->r[7]+0x0000008Cu; WF32(ea,c->f[1]);} // 80300F8C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300F90
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300F94
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300F98
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300F9C
  {uint32_t ea=c->r[7]+0x00000090u; WF32(ea,c->f[1]);} // 80300FA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300FA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300FA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300FAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300FB0
  {uint32_t ea=c->r[7]+0x00000094u; WF32(ea,c->f[1]);} // 80300FB4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300FB8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300FBC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300FC0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300FC4
  {uint32_t ea=c->r[7]+0x00000098u; WF32(ea,c->f[0]);} // 80300FC8
  {uint32_t ea=c->r[7]+0x0000009Cu; WF32(ea,c->f[0]);} // 80300FCC
  c->r[7]=c->r[7]+0x000000A0u; // 80300FD0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80300FD4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80300FD8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80300FDC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80300FE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80300EBC; } // 80300FE4
L_80300FE8:;
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 80300FE8
  c->r[0]=c->r[5]-c->r[6]; // 80300FEC
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80300FF0
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80300FF4
  c->r[3]=c->r[4]+c->r[3]; // 80300FF8
  c->ctr=c->r[0]; // 80300FFC
  cmpu(c,0,c->r[6],c->r[5]); // 80301000
  if (!crb(c,0)) { goto L_80301034; } // 80301004
L_80301008:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80301008
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8030100C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80301010
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80301014
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80301018
  c->r[3]=c->r[3]+0x00000014u; // 8030101C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80301020
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80301024
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80301028
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8030102C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301008; } // 80301030
L_80301034:;
  c->r[10]=R32(c->r[20]+0x0000004Cu); // 80301034
  c->r[3]=0u+0x00000000u; // 80301038
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 8030103C
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 80301040
  c->r[4]=R32(c->r[20]+0x00000050u); // 80301044
  c->r[4]=(rotl(c->r[5],0)&0x000C0000u)|(c->r[4]&~0x000C0000u); // 80301048
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 8030104C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80301050
  c->r[5]=rotl(c->r[10],26)&0x00000004u; // 80301054
  W32(c->r[20]+0x00000050u,c->r[4]); // 80301058
  c->r[19]=rotl(c->r[4],14)&0x00000003u; cr0(c,c->r[19]); // 8030105C
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 80301060
  c->r[12]=R32(c->r[20]+0x00000058u); // 80301064
  c->r[7]=rotl(c->r[10],27)&0x00000004u; // 80301068
  c->r[4]=rotl(c->r[10],14)&0x0000003Cu; // 8030106C
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 80301070
  c->r[11]=rotl(c->r[10],19)&0x0000001Cu; // 80301074
  c->r[4]=c->r[4]+c->r[0]; // 80301078
  c->r[10]=rotl(c->r[10],29)&0x00000004u; // 8030107C
  c->r[0]=c->r[11]+c->r[10]; // 80301080
  c->r[7]=c->r[8]+c->r[7]; // 80301084
  c->r[5]=c->r[9]+c->r[5]; // 80301088
  c->r[4]=c->r[6]+c->r[4]; // 8030108C
  c->r[5]=c->r[7]+c->r[5]; // 80301090
  c->r[0]=c->r[12]+c->r[0]; // 80301094
  c->r[4]=c->r[5]+c->r[4]; // 80301098
  c->r[5]=c->r[4]+c->r[0]; // 8030109C
  if (crb(c,2)) { goto L_80301248; } // 803010A0
  cmpu(c,0,c->r[19],0x00000008u); // 803010A4
  c->r[4]=c->r[19]+0xFFFFFFF8u; // 803010A8
  if (!crb(c,1)) { goto L_803011FC; } // 803010AC
  c->r[0]=c->r[4]+0x00000007u; // 803010B0
  c->r[6]=c->r[5]|c->r[5]; // 803010B4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803010B8
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[1]=c->ps1[1]=RF32(ea);} // 803010BC
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803010C0
  c->ctr=c->r[0]; // 803010C4
  cmpu(c,0,c->r[4],0x00000000u); // 803010C8
  if (!crb(c,1)) { goto L_803011FC; } // 803010CC
L_803010D0:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[1]);} // 803010D0
  c->r[3]=c->r[3]+0x00000008u; // 803010D4
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 803010D8
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[1]);} // 803010DC
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 803010E0
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 803010E4
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[1]);} // 803010E8
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[1]);} // 803010EC
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[1]);} // 803010F0
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[0]);} // 803010F4
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[0]);} // 803010F8
  {uint32_t ea=c->r[6]+0x00000028u; WF32(ea,c->f[1]);} // 803010FC
  {uint32_t ea=c->r[6]+0x0000002Cu; WF32(ea,c->f[1]);} // 80301100
  {uint32_t ea=c->r[6]+0x00000030u; WF32(ea,c->f[1]);} // 80301104
  {uint32_t ea=c->r[6]+0x00000034u; WF32(ea,c->f[0]);} // 80301108
  {uint32_t ea=c->r[6]+0x00000038u; WF32(ea,c->f[0]);} // 8030110C
  {uint32_t ea=c->r[6]+0x0000003Cu; WF32(ea,c->f[1]);} // 80301110
  {uint32_t ea=c->r[6]+0x00000040u; WF32(ea,c->f[1]);} // 80301114
  {uint32_t ea=c->r[6]+0x00000044u; WF32(ea,c->f[1]);} // 80301118
  {uint32_t ea=c->r[6]+0x00000048u; WF32(ea,c->f[0]);} // 8030111C
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[0]);} // 80301120
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[1]);} // 80301124
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[1]);} // 80301128
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[1]);} // 8030112C
  {uint32_t ea=c->r[6]+0x0000005Cu; WF32(ea,c->f[0]);} // 80301130
  {uint32_t ea=c->r[6]+0x00000060u; WF32(ea,c->f[0]);} // 80301134
  {uint32_t ea=c->r[6]+0x00000064u; WF32(ea,c->f[1]);} // 80301138
  {uint32_t ea=c->r[6]+0x00000068u; WF32(ea,c->f[1]);} // 8030113C
  {uint32_t ea=c->r[6]+0x0000006Cu; WF32(ea,c->f[1]);} // 80301140
  {uint32_t ea=c->r[6]+0x00000070u; WF32(ea,c->f[0]);} // 80301144
  {uint32_t ea=c->r[6]+0x00000074u; WF32(ea,c->f[0]);} // 80301148
  {uint32_t ea=c->r[6]+0x00000078u; WF32(ea,c->f[1]);} // 8030114C
  {uint32_t ea=c->r[6]+0x0000007Cu; WF32(ea,c->f[1]);} // 80301150
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80301154
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80301158
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8030115C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80301160
  {uint32_t ea=c->r[6]+0x00000080u; WF32(ea,c->f[1]);} // 80301164
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80301168
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8030116C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80301170
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80301174
  {uint32_t ea=c->r[6]+0x00000084u; WF32(ea,c->f[0]);} // 80301178
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8030117C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80301180
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80301184
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80301188
  {uint32_t ea=c->r[6]+0x00000088u; WF32(ea,c->f[0]);} // 8030118C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80301190
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80301194
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80301198
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8030119C
  {uint32_t ea=c->r[6]+0x0000008Cu; WF32(ea,c->f[1]);} // 803011A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803011A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803011A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803011AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803011B0
  {uint32_t ea=c->r[6]+0x00000090u; WF32(ea,c->f[1]);} // 803011B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803011B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803011BC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803011C0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803011C4
  {uint32_t ea=c->r[6]+0x00000094u; WF32(ea,c->f[1]);} // 803011C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803011CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803011D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803011D4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803011D8
  {uint32_t ea=c->r[6]+0x00000098u; WF32(ea,c->f[0]);} // 803011DC
  {uint32_t ea=c->r[6]+0x0000009Cu; WF32(ea,c->f[0]);} // 803011E0
  c->r[6]=c->r[6]+0x000000A0u; // 803011E4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803011E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803011EC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803011F0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803011F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803010D0; } // 803011F8
L_803011FC:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803011FC
  c->r[0]=c->r[19]-c->r[3]; // 80301200
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80301204
  {uint32_t ea=c->r[2]+0xFFFFD07Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80301208
  c->r[4]=c->r[5]+c->r[4]; // 8030120C
  c->ctr=c->r[0]; // 80301210
  cmpu(c,0,c->r[3],c->r[19]); // 80301214
  if (!crb(c,0)) { goto L_80301248; } // 80301218
L_8030121C:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 8030121C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 80301220
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 80301224
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 80301228
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 8030122C
  c->r[4]=c->r[4]+0x00000014u; // 80301230
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80301234
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80301238
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8030123C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80301240
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8030121C; } // 80301244
L_80301248:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80301248
  c->r[3]=R32(c->r[20]+0x00000050u); // 8030124C
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 80301250
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 80301254
  W32(c->r[20]+0x00000050u,c->r[3]); // 80301258
  if (crb(c,2)) { goto L_80301298; } // 8030125C
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 80301260
  c->r[3]=0u+0x00000001u; // 80301264
  c->r[7]=R32(c->r[20]+0x00000058u); // 80301268
  c->r[0]=0u+0x00000000u; // 8030126C
  c->r[4]=rotl(c->r[5],8)&0x0000000Fu; // 80301270
  c->r[6]=rotl(c->r[5],14)&0x0000003Cu; // 80301274
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80301278
  c->r[5]=rotl(c->r[5],9)&0x000001E0u; // 8030127C
  c->r[5]=c->r[6]+c->r[5]; // 80301280
  c->r[4]=c->r[7]+c->r[4]; // 80301284
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 80301288
  W8(c->r[4]+0x00000001u,c->r[3]); // 8030128C
  W8(c->r[4]+0x00000002u,c->r[0]); // 80301290
  W8(c->r[4]+0x00000003u,c->r[0]); // 80301294
L_80301298:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80301298
  c->r[3]=R32(c->r[20]+0x00000050u); // 8030129C
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 803012A0
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 803012A4
  W32(c->r[20]+0x00000050u,c->r[3]); // 803012A8
  if (crb(c,2)) { goto L_803012E0; } // 803012AC
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 803012B0
  c->r[7]=0u+0xFFFFFFFFu; // 803012B4
  c->r[6]=R32(c->r[20]+0x00000058u); // 803012B8
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 803012BC
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 803012C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803012C4
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 803012C8
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 803012CC
  c->r[0]=c->r[4]+c->r[0]; // 803012D0
  c->r[3]=c->r[5]+c->r[3]; // 803012D4
  c->r[0]=c->r[6]+c->r[0]; // 803012D8
  W32(c->r[3]+c->r[0],c->r[7]); // 803012DC
L_803012E0:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803012E0
  c->r[3]=R32(c->r[20]+0x00000050u); // 803012E4
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 803012E8
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 803012EC
  W32(c->r[20]+0x00000050u,c->r[3]); // 803012F0
  if (crb(c,2)) { goto L_80301348; } // 803012F4
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 803012F8
  c->r[5]=0u+0x000000E4u; // 803012FC
  c->r[10]=R32(c->r[20]+0x00000058u); // 80301300
  c->r[4]=0u+0x000000C0u; // 80301304
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80301308
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 8030130C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80301310
  c->r[8]=rotl(c->r[9],27)&0x00000004u; // 80301314
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 80301318
  c->r[7]=rotl(c->r[9],26)&0x00000004u; // 8030131C
  c->r[3]=c->r[3]+c->r[0]; // 80301320
  c->r[0]=c->r[8]+c->r[7]; // 80301324
  c->r[7]=c->r[6]+c->r[3]; // 80301328
  c->r[3]=0u+0x000000D5u; // 8030132C
  c->r[6]=c->r[10]+c->r[0]; // 80301330
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80301334
  c->r[0]=0u+0x000000EAu; // 80301338
  W8(c->r[6]+0x00000001u,c->r[4]); // 8030133C
  W8(c->r[6]+0x00000002u,c->r[3]); // 80301340
  W8(c->r[6]+0x00000003u,c->r[0]); // 80301344
L_80301348:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 80301348
  c->r[3]=R32(c->r[20]+0x00000050u); // 8030134C
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 80301350
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80301354
  W32(c->r[20]+0x00000050u,c->r[3]); // 80301358
  if (crb(c,2)) { goto L_803013B0; } // 8030135C
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 80301360
  c->r[3]=0u+0x00000077u; // 80301364
  c->r[10]=R32(c->r[20]+0x00000058u); // 80301368
  c->r[0]=0u+0x00000000u; // 8030136C
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 80301370
  c->r[4]=rotl(c->r[9],27)&0x00000004u; // 80301374
  c->r[4]=c->r[7]+c->r[4]; // 80301378
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 8030137C
  c->r[4]=c->r[6]+c->r[4]; // 80301380
  c->r[5]=rotl(c->r[9],8)&0x0000000Fu; // 80301384
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 80301388
  c->r[8]=rotl(c->r[9],14)&0x0000003Cu; // 8030138C
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 80301390
  c->r[4]=c->r[10]+c->r[4]; // 80301394
  c->r[5]=c->r[8]+c->r[7]; // 80301398
  c->r[5]=c->r[6]+c->r[5]; // 8030139C
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 803013A0
  W8(c->r[4]+0x00000001u,c->r[0]); // 803013A4
  W8(c->r[4]+0x00000002u,c->r[0]); // 803013A8
  W8(c->r[4]+0x00000003u,c->r[0]); // 803013AC
L_803013B0:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803013B0
  c->r[3]=R32(c->r[20]+0x00000050u); // 803013B4
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 803013B8
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 803013BC
  W32(c->r[20]+0x00000050u,c->r[3]); // 803013C0
  if (crb(c,2)) { goto L_80301428; } // 803013C4
  c->r[7]=R32(c->r[20]+0x0000004Cu); // 803013C8
  c->r[5]=0u+0x00000001u; // 803013CC
  c->r[11]=R32(c->r[20]+0x00000058u); // 803013D0
  c->r[4]=0u+0x00000004u; // 803013D4
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 803013D8
  c->r[6]=rotl(c->r[7],28)&0x00000004u; // 803013DC
  c->r[3]=rotl(c->r[7],26)&0x00000004u; // 803013E0
  c->r[10]=rotl(c->r[7],20)&0x00000004u; // 803013E4
  c->r[9]=rotl(c->r[7],27)&0x00000004u; // 803013E8
  c->r[8]=rotl(c->r[7],14)&0x0000003Cu; // 803013EC
  c->r[7]=rotl(c->r[7],9)&0x000001E0u; // 803013F0
  c->r[6]=c->r[6]+c->r[3]; // 803013F4
  c->r[7]=c->r[8]+c->r[7]; // 803013F8
  c->r[9]=c->r[10]+c->r[9]; // 803013FC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80301400
  c->r[3]=0u+0x00000005u; // 80301404
  c->r[6]=c->r[9]+c->r[6]; // 80301408
  c->r[0]=0u+0x0000000Fu; // 8030140C
  c->r[7]=c->r[8]+c->r[7]; // 80301410
  c->r[6]=c->r[11]+c->r[6]; // 80301414
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 80301418
  W8(c->r[6]+0x00000001u,c->r[4]); // 8030141C
  W8(c->r[6]+0x00000002u,c->r[3]); // 80301420
  W8(c->r[6]+0x00000003u,c->r[0]); // 80301424
L_80301428:;
  c->r[11]=c->r[1]+0x00000060u; // 80301428
  c->lr=0x80301430u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8030142C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80301430
  c->lr=c->r[0]; // 80301434
  c->r[1]=c->r[1]+0x00000060u; // 80301438
  return; // 8030143C
}

// fn_80301440
void f_80301440(Ctx* __restrict c) {
  trace_call(0x80301440u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 80301440
  return; // 80301444
}

// GetTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_80301448(Ctx* __restrict c) {
  trace_call(0x80301448u);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80301448
  c->r[3]=R32(c->r[3]+0x00000058u); // 8030144C
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 80301450
  c->r[3]=c->r[3]+c->r[0]; // 80301454
  return; // 80301458
}

// GetTexCoordGenAry__Q36nw4hbm3lyt8MaterialFv
void f_8030145C(Ctx* __restrict c) {
  trace_call(0x8030145Cu);
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8030145C
  c->r[5]=R32(c->r[3]+0x00000058u); // 80301460
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 80301464
  c->r[3]=rotl(c->r[4],9)&0x000001E0u; // 80301468
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8030146C
  c->r[0]=c->r[5]+c->r[0]; // 80301470
  c->r[3]=c->r[3]+c->r[0]; // 80301474
  return; // 80301478
}

// fn_8030147C
void f_8030147C(Ctx* __restrict c) {
  trace_call(0x8030147Cu);
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 8030147C
  c->r[6]=R32(c->r[3]+0x00000058u); // 80301480
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 80301484
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 80301488
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8030148C
  c->r[3]=rotl(c->r[5],9)&0x000001E0u; // 80301490
  c->r[3]=c->r[4]+c->r[3]; // 80301494
  c->r[0]=c->r[6]+c->r[0]; // 80301498
  c->r[3]=c->r[3]+c->r[0]; // 8030149C
  return; // 803014A0
}

// fn_803014A4
void f_803014A4(Ctx* __restrict c) {
  trace_call(0x803014A4u);
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 803014A4
  c->r[6]=R32(c->r[3]+0x00000058u); // 803014A8
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 803014AC
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 803014B0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803014B4
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 803014B8
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 803014BC
  c->r[0]=c->r[4]+c->r[0]; // 803014C0
  c->r[3]=c->r[5]+c->r[3]; // 803014C4
  c->r[0]=c->r[6]+c->r[0]; // 803014C8
  c->r[3]=c->r[3]+c->r[0]; // 803014CC
  return; // 803014D0
}

// fn_803014D4
void f_803014D4(Ctx* __restrict c) {
  trace_call(0x803014D4u);
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 803014D4
  c->r[8]=R32(c->r[3]+0x00000058u); // 803014D8
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 803014DC
  c->r[6]=rotl(c->r[7],27)&0x00000004u; // 803014E0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803014E4
  c->r[5]=rotl(c->r[7],26)&0x00000004u; // 803014E8
  c->r[3]=rotl(c->r[7],14)&0x0000003Cu; // 803014EC
  c->r[0]=rotl(c->r[7],9)&0x000001E0u; // 803014F0
  c->r[3]=c->r[3]+c->r[0]; // 803014F4
  c->r[0]=c->r[6]+c->r[5]; // 803014F8
  c->r[3]=c->r[4]+c->r[3]; // 803014FC
  c->r[0]=c->r[8]+c->r[0]; // 80301500
  c->r[3]=c->r[3]+c->r[0]; // 80301504
  return; // 80301508
}

// fn_8030150C
void f_8030150C(Ctx* __restrict c) {
  trace_call(0x8030150Cu);
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8030150C
  c->r[8]=R32(c->r[3]+0x00000058u); // 80301510
  c->r[5]=rotl(c->r[7],20)&0x00000004u; // 80301514
  c->r[0]=rotl(c->r[7],27)&0x00000004u; // 80301518
  c->r[0]=c->r[5]+c->r[0]; // 8030151C
  c->r[4]=rotl(c->r[7],26)&0x00000004u; // 80301520
  c->r[0]=c->r[4]+c->r[0]; // 80301524
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 80301528
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8030152C
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 80301530
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 80301534
  c->r[0]=c->r[8]+c->r[0]; // 80301538
  c->r[3]=c->r[6]+c->r[5]; // 8030153C
  c->r[3]=c->r[4]+c->r[3]; // 80301540
  c->r[3]=c->r[3]+c->r[0]; // 80301544
  return; // 80301548
}

// fn_8030154C
void f_8030154C(Ctx* __restrict c) {
  trace_call(0x8030154Cu);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 8030154C
  c->r[10]=R32(c->r[3]+0x00000058u); // 80301550
  c->r[4]=rotl(c->r[9],8)&0x0000000Fu; // 80301554
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 80301558
  c->r[0]=rotl(c->r[9],26)&0x00000004u; // 8030155C
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 80301560
  c->r[6]=rotl(c->r[9],27)&0x00000004u; // 80301564
  c->r[5]=rotl(c->r[9],14)&0x0000003Cu; // 80301568
  c->r[3]=rotl(c->r[9],9)&0x000001E0u; // 8030156C
  c->r[0]=c->r[8]+c->r[0]; // 80301570
  c->r[6]=c->r[7]+c->r[6]; // 80301574
  c->r[0]=c->r[6]+c->r[0]; // 80301578
  c->r[3]=c->r[5]+c->r[3]; // 8030157C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80301580
  c->r[0]=c->r[10]+c->r[0]; // 80301584
  c->r[3]=c->r[4]+c->r[3]; // 80301588
  c->r[3]=c->r[3]+c->r[0]; // 8030158C
  return; // 80301590
}

// fn_80301594
void f_80301594(Ctx* __restrict c) {
  trace_call(0x80301594u);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 80301594
  c->r[10]=R32(c->r[3]+0x00000058u); // 80301598
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 8030159C
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 803015A0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803015A4
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 803015A8
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803015AC
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 803015B0
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 803015B4
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 803015B8
  c->r[0]=c->r[3]+c->r[0]; // 803015BC
  c->r[5]=c->r[7]+c->r[5]; // 803015C0
  c->r[3]=c->r[8]+c->r[6]; // 803015C4
  c->r[6]=rotl(c->r[9],29)&0x00000004u; // 803015C8
  c->r[3]=c->r[5]+c->r[3]; // 803015CC
  c->r[0]=c->r[4]+c->r[0]; // 803015D0
  c->r[3]=c->r[6]+c->r[3]; // 803015D4
  c->r[0]=c->r[10]+c->r[0]; // 803015D8
  c->r[3]=c->r[3]+c->r[0]; // 803015DC
  return; // 803015E0
}

// GetIndTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_803015E4(Ctx* __restrict c) {
  trace_call(0x803015E4u);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 803015E4
  c->r[11]=R32(c->r[3]+0x00000058u); // 803015E8
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803015EC
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 803015F0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803015F4
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 803015F8
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803015FC
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 80301600
  c->r[4]=rotl(c->r[9],14)&0x0000003Cu; // 80301604
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 80301608
  c->r[0]=c->r[4]+c->r[0]; // 8030160C
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 80301610
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 80301614
  c->r[5]=c->r[7]+c->r[5]; // 80301618
  c->r[4]=c->r[8]+c->r[6]; // 8030161C
  c->r[3]=c->r[3]+c->r[0]; // 80301620
  c->r[4]=c->r[5]+c->r[4]; // 80301624
  c->r[0]=c->r[10]+c->r[9]; // 80301628
  c->r[3]=c->r[4]+c->r[3]; // 8030162C
  c->r[0]=c->r[11]+c->r[0]; // 80301630
  c->r[3]=c->r[3]+c->r[0]; // 80301634
  return; // 80301638
}

// fn_8030163C
void f_8030163C(Ctx* __restrict c) {
  trace_call(0x8030163Cu);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 8030163C
  c->r[10]=R32(c->r[3]+0x00000058u); // 80301640
  c->r[3]=rotl(c->r[9],14)&0x00000003u; // 80301644
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80301648
  c->r[0]=c->r[3]+c->r[0]; // 8030164C
  c->r[5]=rotl(c->r[9],26)&0x00000004u; // 80301650
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80301654
  c->r[3]=rotl(c->r[9],27)&0x00000004u; // 80301658
  c->r[0]=rotl(c->r[9],20)&0x00000004u; // 8030165C
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 80301660
  c->r[6]=rotl(c->r[9],14)&0x0000003Cu; // 80301664
  c->r[0]=c->r[3]+c->r[0]; // 80301668
  c->r[4]=rotl(c->r[9],28)&0x00000004u; // 8030166C
  c->r[5]=c->r[8]+c->r[5]; // 80301670
  c->r[0]=c->r[4]+c->r[0]; // 80301674
  c->r[3]=rotl(c->r[9],29)&0x00000004u; // 80301678
  c->r[6]=c->r[7]+c->r[6]; // 8030167C
  c->r[4]=rotl(c->r[9],19)&0x0000001Cu; // 80301680
  c->r[3]=c->r[3]+c->r[0]; // 80301684
  c->r[0]=c->r[6]+c->r[5]; // 80301688
  c->r[3]=c->r[4]+c->r[3]; // 8030168C
  c->r[0]=c->r[10]+c->r[0]; // 80301690
  c->r[3]=c->r[3]+c->r[0]; // 80301694
  return; // 80301698
}

// fn_8030169C
void f_8030169C(Ctx* __restrict c) {
  trace_call(0x8030169Cu);
  c->r[5]=0u+0x00000014u; // 8030169C
  c->r[3]=c->r[3]+0x00000004u; // 803016A0
  f_801F0B64(c); return; // 803016A4
}

// fn_803016A8
void f_803016A8(Ctx* __restrict c) {
  trace_call(0x803016A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803016A8
  c->r[0]=c->lr; // 803016AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803016B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803016B4
  c->r[31]=0u+0x804D0000u; // 803016B8
  c->r[31]=c->r[31]+0xFFFF9318u; // 803016BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803016C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803016C4
  c->r[29]=c->r[4]|c->r[4]; // 803016C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803016CC
  c->r[28]=c->r[3]|c->r[3]; // 803016D0
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803016D4
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803016D8
  cmpu(c,0,c->r[4],c->r[0]); // 803016DC
  if (!crb(c,1)) { goto L_803016F8; } // 803016E0
  c->r[3]=c->r[31]+0x00000000u; // 803016E4
  c->r[5]=c->r[31]+0x00000330u; // 803016E8
  c->r[4]=0u+0x0000038Bu; // 803016EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803016F0
  c->lr=0x803016F8u; f_802FA328(c); // 803016F4
L_803016F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 803016F8
  if (crb(c,2)) { goto L_80301764; } // 803016FC
  c->r[0]=R32(c->r[28]+0x00000058u); // 80301700
  cmps(c,0,(int32_t)c->r[0],0); // 80301704
  if (!crb(c,2)) { goto L_80301720; } // 80301708
  c->r[3]=c->r[31]+0x00000000u; // 8030170C
  c->r[5]=c->r[31]+0x00000360u; // 80301710
  c->r[4]=0u+0x0000038Eu; // 80301714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301718
  c->lr=0x80301720u; f_802FA328(c); // 8030171C
L_80301720:;
  c->r[4]=R32(c->r[28]+0x00000050u); // 80301720
  c->r[3]=R32(c->r[28]+0x00000058u); // 80301724
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 80301728
  c->r[30]=rotl(c->r[4],4)&0x0000000Fu; // 8030172C
  c->r[31]=c->r[3]+c->r[0]; // 80301730
  goto L_80301750; // 80301734
L_80301738:;
  c->r[3]=c->r[31]|c->r[31]; // 80301738
  c->r[4]=0u+0x00000000u; // 8030173C
  c->r[5]=0u+0x00000020u; // 80301740
  c->lr=0x80301748u; f_8000443C(c); // 80301744
  c->r[31]=c->r[31]+0x00000020u; // 80301748
  c->r[30]=c->r[30]+0x00000001u; // 8030174C
L_80301750:;
  cmpu(c,0,c->r[30],c->r[29]); // 80301750
  if (crb(c,0)) { IRQCHK(c); goto L_80301738; } // 80301754
  c->r[0]=R32(c->r[28]+0x00000050u); // 80301758
  c->r[0]=(rotl(c->r[29],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 8030175C
  W32(c->r[28]+0x00000050u,c->r[0]); // 80301760
L_80301764:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301764
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301768
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030176C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80301770
  c->r[28]=R32(c->r[1]+0x00000010u); // 80301774
  c->lr=c->r[0]; // 80301778
  c->r[1]=c->r[1]+0x00000020u; // 8030177C
  return; // 80301780
}

// fn_80301784
void f_80301784(Ctx* __restrict c) {
  trace_call(0x80301784u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80301784
  c->r[0]=c->lr; // 80301788
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030178C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80301790
  c->r[31]=c->r[4]|c->r[4]; // 80301794
  W32(c->r[1]+0x00000018u,c->r[30]); // 80301798
  c->r[30]=c->r[3]|c->r[3]; // 8030179C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803017A0
  c->r[29]=0u+0x804D0000u; // 803017A4
  c->r[29]=c->r[29]+0xFFFF9318u; // 803017A8
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803017AC
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 803017B0
  cmpu(c,0,c->r[4],c->r[0]); // 803017B4
  if (!crb(c,1)) { goto L_803017D0; } // 803017B8
  c->r[3]=c->r[29]+0x00000000u; // 803017BC
  c->r[5]=c->r[29]+0x0000038Cu; // 803017C0
  c->r[4]=0u+0x0000039Cu; // 803017C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803017C8
  c->lr=0x803017D0u; f_802FA328(c); // 803017CC
L_803017D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803017D0
  if (crb(c,2)) { goto L_80301940; } // 803017D4
  c->r[0]=R32(c->r[30]+0x00000058u); // 803017D8
  cmps(c,0,(int32_t)c->r[0],0); // 803017DC
  if (!crb(c,2)) { goto L_803017F8; } // 803017E0
  c->r[3]=c->r[29]+0x00000000u; // 803017E4
  c->r[5]=c->r[29]+0x00000360u; // 803017E8
  c->r[4]=0u+0x0000039Fu; // 803017EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803017F0
  c->lr=0x803017F8u; f_802FA328(c); // 803017F4
L_803017F8:;
  c->r[5]=R32(c->r[30]+0x0000004Cu); // 803017F8
  c->r[0]=R32(c->r[30]+0x00000050u); // 803017FC
  c->r[3]=rotl(c->r[5],8)&0x0000000Fu; // 80301800
  c->r[6]=R32(c->r[30]+0x00000058u); // 80301804
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80301808
  c->r[10]=rotl(c->r[0],12)&0x0000000Fu; // 8030180C
  c->r[3]=rotl(c->r[5],9)&0x000001E0u; // 80301810
  cmpu(c,1,c->r[10],c->r[31]); // 80301814
  c->r[0]=c->r[6]+c->r[4]; // 80301818
  c->r[9]=c->r[3]+c->r[0]; // 8030181C
  if (!crb(c,4)) { goto L_80301934; } // 80301820
  c->r[0]=c->r[31]-c->r[10]; // 80301824
  c->r[7]=c->r[31]+0xFFFFFFF8u; // 80301828
  cmpu(c,0,c->r[0],0x00000008u); // 8030182C
  if (!crb(c,1)) { goto L_803018F4; } // 80301830
  if (crb(c,5)) { goto L_803018F4; } // 80301834
  c->r[0]=c->r[7]+0x00000007u; // 80301838
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 8030183C
  c->r[0]=c->r[0]-c->r[10]; // 80301840
  c->r[6]=0u+0x00000001u; // 80301844
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80301848
  c->r[8]=c->r[9]+c->r[3]; // 8030184C
  c->r[5]=0u+0x00000004u; // 80301850
  c->r[4]=0u+0x0000003Cu; // 80301854
  c->r[3]=0u+0x00000000u; // 80301858
  c->ctr=c->r[0]; // 8030185C
  cmpu(c,0,c->r[10],c->r[7]); // 80301860
  if (!crb(c,0)) { goto L_803018F4; } // 80301864
L_80301868:;
  W8(c->r[8]+0x00000000u,c->r[6]); // 80301868
  c->r[10]=c->r[10]+0x00000008u; // 8030186C
  W8(c->r[8]+0x00000001u,c->r[5]); // 80301870
  W8(c->r[8]+0x00000002u,c->r[4]); // 80301874
  W8(c->r[8]+0x00000003u,c->r[3]); // 80301878
  W8(c->r[8]+0x00000004u,c->r[6]); // 8030187C
  W8(c->r[8]+0x00000005u,c->r[5]); // 80301880
  W8(c->r[8]+0x00000006u,c->r[4]); // 80301884
  W8(c->r[8]+0x00000007u,c->r[3]); // 80301888
  W8(c->r[8]+0x00000008u,c->r[6]); // 8030188C
  W8(c->r[8]+0x00000009u,c->r[5]); // 80301890
  W8(c->r[8]+0x0000000Au,c->r[4]); // 80301894
  W8(c->r[8]+0x0000000Bu,c->r[3]); // 80301898
  W8(c->r[8]+0x0000000Cu,c->r[6]); // 8030189C
  W8(c->r[8]+0x0000000Du,c->r[5]); // 803018A0
  W8(c->r[8]+0x0000000Eu,c->r[4]); // 803018A4
  W8(c->r[8]+0x0000000Fu,c->r[3]); // 803018A8
  W8(c->r[8]+0x00000010u,c->r[6]); // 803018AC
  W8(c->r[8]+0x00000011u,c->r[5]); // 803018B0
  W8(c->r[8]+0x00000012u,c->r[4]); // 803018B4
  W8(c->r[8]+0x00000013u,c->r[3]); // 803018B8
  W8(c->r[8]+0x00000014u,c->r[6]); // 803018BC
  W8(c->r[8]+0x00000015u,c->r[5]); // 803018C0
  W8(c->r[8]+0x00000016u,c->r[4]); // 803018C4
  W8(c->r[8]+0x00000017u,c->r[3]); // 803018C8
  W8(c->r[8]+0x00000018u,c->r[6]); // 803018CC
  W8(c->r[8]+0x00000019u,c->r[5]); // 803018D0
  W8(c->r[8]+0x0000001Au,c->r[4]); // 803018D4
  W8(c->r[8]+0x0000001Bu,c->r[3]); // 803018D8
  W8(c->r[8]+0x0000001Cu,c->r[6]); // 803018DC
  W8(c->r[8]+0x0000001Du,c->r[5]); // 803018E0
  W8(c->r[8]+0x0000001Eu,c->r[4]); // 803018E4
  W8(c->r[8]+0x0000001Fu,c->r[3]); // 803018E8
  c->r[8]=c->r[8]+0x00000020u; // 803018EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301868; } // 803018F0
L_803018F4:;
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 803018F4
  c->r[0]=c->r[31]-c->r[10]; // 803018F8
  c->r[7]=c->r[9]+c->r[3]; // 803018FC
  c->r[6]=0u+0x00000001u; // 80301900
  c->r[5]=0u+0x00000004u; // 80301904
  c->r[4]=0u+0x0000003Cu; // 80301908
  c->r[3]=0u+0x00000000u; // 8030190C
  c->ctr=c->r[0]; // 80301910
  cmpu(c,0,c->r[10],c->r[31]); // 80301914
  if (!crb(c,0)) { goto L_80301934; } // 80301918
L_8030191C:;
  W8(c->r[7]+0x00000000u,c->r[6]); // 8030191C
  W8(c->r[7]+0x00000001u,c->r[5]); // 80301920
  W8(c->r[7]+0x00000002u,c->r[4]); // 80301924
  W8(c->r[7]+0x00000003u,c->r[3]); // 80301928
  c->r[7]=c->r[7]+0x00000004u; // 8030192C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8030191C; } // 80301930
L_80301934:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 80301934
  c->r[0]=(rotl(c->r[31],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 80301938
  W32(c->r[30]+0x00000050u,c->r[0]); // 8030193C
L_80301940:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301940
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301944
  c->r[30]=R32(c->r[1]+0x00000018u); // 80301948
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030194C
  c->lr=c->r[0]; // 80301950
  c->r[1]=c->r[1]+0x00000020u; // 80301954
  return; // 80301958
}

// fn_8030195C
void f_8030195C(Ctx* __restrict c) {
  trace_call(0x8030195Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030195C
  c->r[0]=c->lr; // 80301960
  W32(c->r[1]+0x00000044u,c->r[0]); // 80301964
  c->r[11]=c->r[1]+0x00000040u; // 80301968
  c->lr=0x80301970u; f_801E795C(c); // 8030196C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80301970
  c->r[28]=0u+0x804D0000u; // 80301974
  c->r[30]=c->r[3]|c->r[3]; // 80301978
  c->r[31]=c->r[4]|c->r[4]; // 8030197C
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 80301980
  c->r[28]=c->r[28]+0xFFFF9318u; // 80301984
  cmpu(c,0,c->r[4],c->r[0]); // 80301988
  if (!crb(c,1)) { goto L_803019A4; } // 8030198C
  c->r[3]=c->r[28]+0x00000000u; // 80301990
  c->r[5]=c->r[28]+0x000003C4u; // 80301994
  c->r[4]=0u+0x000003ADu; // 80301998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030199C
  c->lr=0x803019A4u; f_802FA328(c); // 803019A0
L_803019A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803019A4
  if (crb(c,2)) { goto L_80301BCC; } // 803019A8
  c->r[0]=R32(c->r[30]+0x00000058u); // 803019AC
  cmps(c,0,(int32_t)c->r[0],0); // 803019B0
  if (!crb(c,2)) { goto L_803019CC; } // 803019B4
  c->r[3]=c->r[28]+0x00000000u; // 803019B8
  c->r[5]=c->r[28]+0x00000360u; // 803019BC
  c->r[4]=0u+0x000003B0u; // 803019C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803019C4
  c->lr=0x803019CCu; f_802FA328(c); // 803019C8
L_803019CC:;
  c->r[10]=R32(c->r[30]+0x0000004Cu); // 803019CC
  c->r[0]=R32(c->r[30]+0x00000050u); // 803019D0
  c->r[4]=rotl(c->r[10],14)&0x00000003u; // 803019D4
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 803019D8
  c->r[3]=c->r[4]+c->r[3]; // 803019DC
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 803019E0
  c->r[9]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803019E4
  c->r[5]=rotl(c->r[10],27)&0x00000004u; // 803019E8
  c->r[3]=rotl(c->r[10],20)&0x00000004u; // 803019EC
  c->r[11]=R32(c->r[30]+0x00000058u); // 803019F0
  c->r[6]=rotl(c->r[10],26)&0x00000004u; // 803019F4
  c->r[3]=c->r[5]+c->r[3]; // 803019F8
  c->r[4]=rotl(c->r[10],28)&0x00000004u; // 803019FC
  c->r[5]=c->r[9]+c->r[6]; // 80301A00
  c->r[8]=rotl(c->r[10],9)&0x000001E0u; // 80301A04
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 80301A08
  c->r[7]=c->r[8]+c->r[7]; // 80301A0C
  c->r[4]=c->r[4]+c->r[3]; // 80301A10
  c->r[3]=c->r[7]+c->r[5]; // 80301A14
  c->r[6]=rotl(c->r[10],29)&0x00000004u; // 80301A18
  cmpu(c,0,c->r[0],c->r[31]); // 80301A1C
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 80301A20
  c->r[4]=c->r[6]+c->r[4]; // 80301A24
  c->r[3]=c->r[11]+c->r[3]; // 80301A28
  c->r[4]=c->r[5]+c->r[4]; // 80301A2C
  c->r[9]=c->r[4]+c->r[3]; // 80301A30
  if (!crb(c,0)) { goto L_80301BC0; } // 80301A34
  c->r[12]=0u+0x00000000u; // 80301A38
  c->r[28]=0u+0x000000FFu; // 80301A3C
  c->r[8]=0u+0x000000AFu; // 80301A40
  c->r[5]=0u+0x00000061u; // 80301A44
  c->r[7]=0u+0x00000077u; // 80301A48
  c->r[6]=0u+0x00000057u; // 80301A4C
  c->r[4]=0u+0x00000081u; // 80301A50
  c->r[3]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80301A54
  c->r[27]=c->r[9]+c->r[3]; // 80301A58
  W8(c->r[1]+0x00000014u,c->r[28]); // 80301A5C
  c->r[3]=c->r[31]-c->r[0]; // 80301A60
  c->r[29]=0u+0x00000004u; // 80301A64
  W8(c->r[1]+0x00000015u,c->r[8]); // 80301A68
  W8(c->r[1]+0x00000016u,c->r[12]); // 80301A6C
  W8(c->r[1]+0x00000017u,c->r[5]); // 80301A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80301A74
  W8(c->r[1]+0x00000018u,c->r[7]); // 80301A78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80301A7C
  W8(c->r[1]+0x00000019u,c->r[6]); // 80301A80
  c->r[11]=R8(c->r[1]+0x0000000Cu); // 80301A84
  W8(c->r[1]+0x0000001Au,c->r[12]); // 80301A88
  c->r[10]=R8(c->r[1]+0x0000000Du); // 80301A8C
  W8(c->r[1]+0x0000001Bu,c->r[4]); // 80301A90
  c->r[9]=R8(c->r[1]+0x0000000Eu); // 80301A94
  c->r[0]=R32(c->r[1]+0x00000018u); // 80301A98
  W8(c->r[1]+0x00000010u,c->r[28]); // 80301A9C
  c->r[8]=R8(c->r[1]+0x0000000Fu); // 80301AA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80301AA4
  W8(c->r[1]+0x00000011u,c->r[29]); // 80301AA8
  c->r[7]=R8(c->r[1]+0x00000008u); // 80301AAC
  W8(c->r[1]+0x00000012u,c->r[28]); // 80301AB0
  c->r[6]=R8(c->r[1]+0x00000009u); // 80301AB4
  W8(c->r[1]+0x00000013u,c->r[12]); // 80301AB8
  c->r[5]=R8(c->r[1]+0x0000000Au); // 80301ABC
  W8(c->r[1]+0x0000001Cu,c->r[12]); // 80301AC0
  c->r[4]=R8(c->r[1]+0x0000000Bu); // 80301AC4
  W8(c->r[1]+0x0000001Du,c->r[12]); // 80301AC8
  W8(c->r[1]+0x0000001Eu,c->r[12]); // 80301ACC
  W8(c->r[1]+0x0000001Fu,c->r[12]); // 80301AD0
  if (!crb(c,0)) { goto L_80301BC0; } // 80301AD4
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80301AD8
  c->ctr=c->r[0]; // 80301ADC
  if (crb(c,2)) { goto L_80301B74; } // 80301AE0
L_80301AE4:;
  W8(c->r[27]+0x00000000u,c->r[28]); // 80301AE4
  W8(c->r[27]+0x00000001u,c->r[29]); // 80301AE8
  W8(c->r[27]+0x00000002u,c->r[28]); // 80301AEC
  W8(c->r[27]+0x00000003u,c->r[12]); // 80301AF0
  W8(c->r[27]+0x00000004u,c->r[11]); // 80301AF4
  W8(c->r[27]+0x00000005u,c->r[10]); // 80301AF8
  W8(c->r[27]+0x00000006u,c->r[9]); // 80301AFC
  W8(c->r[27]+0x00000007u,c->r[8]); // 80301B00
  W8(c->r[27]+0x00000008u,c->r[7]); // 80301B04
  W8(c->r[27]+0x00000009u,c->r[6]); // 80301B08
  W8(c->r[27]+0x0000000Au,c->r[5]); // 80301B0C
  W8(c->r[27]+0x0000000Bu,c->r[4]); // 80301B10
  W8(c->r[27]+0x0000000Cu,c->r[12]); // 80301B14
  W8(c->r[27]+0x0000000Du,c->r[12]); // 80301B18
  W8(c->r[27]+0x0000000Eu,c->r[12]); // 80301B1C
  W8(c->r[27]+0x0000000Fu,c->r[12]); // 80301B20
  W8(c->r[27]+0x00000010u,c->r[28]); // 80301B24
  W8(c->r[27]+0x00000011u,c->r[29]); // 80301B28
  W8(c->r[27]+0x00000012u,c->r[28]); // 80301B2C
  W8(c->r[27]+0x00000013u,c->r[12]); // 80301B30
  W8(c->r[27]+0x00000014u,c->r[11]); // 80301B34
  W8(c->r[27]+0x00000015u,c->r[10]); // 80301B38
  W8(c->r[27]+0x00000016u,c->r[9]); // 80301B3C
  W8(c->r[27]+0x00000017u,c->r[8]); // 80301B40
  W8(c->r[27]+0x00000018u,c->r[7]); // 80301B44
  W8(c->r[27]+0x00000019u,c->r[6]); // 80301B48
  W8(c->r[27]+0x0000001Au,c->r[5]); // 80301B4C
  W8(c->r[27]+0x0000001Bu,c->r[4]); // 80301B50
  W8(c->r[27]+0x0000001Cu,c->r[12]); // 80301B54
  W8(c->r[27]+0x0000001Du,c->r[12]); // 80301B58
  W8(c->r[27]+0x0000001Eu,c->r[12]); // 80301B5C
  W8(c->r[27]+0x0000001Fu,c->r[12]); // 80301B60
  c->r[27]=c->r[27]+0x00000020u; // 80301B64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301AE4; } // 80301B68
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 80301B6C
  if (crb(c,2)) { goto L_80301BC0; } // 80301B70
L_80301B74:;
  c->ctr=c->r[3]; // 80301B74
L_80301B78:;
  W8(c->r[27]+0x00000000u,c->r[28]); // 80301B78
  W8(c->r[27]+0x00000001u,c->r[29]); // 80301B7C
  W8(c->r[27]+0x00000002u,c->r[28]); // 80301B80
  W8(c->r[27]+0x00000003u,c->r[12]); // 80301B84
  W8(c->r[27]+0x00000004u,c->r[11]); // 80301B88
  W8(c->r[27]+0x00000005u,c->r[10]); // 80301B8C
  W8(c->r[27]+0x00000006u,c->r[9]); // 80301B90
  W8(c->r[27]+0x00000007u,c->r[8]); // 80301B94
  W8(c->r[27]+0x00000008u,c->r[7]); // 80301B98
  W8(c->r[27]+0x00000009u,c->r[6]); // 80301B9C
  W8(c->r[27]+0x0000000Au,c->r[5]); // 80301BA0
  W8(c->r[27]+0x0000000Bu,c->r[4]); // 80301BA4
  W8(c->r[27]+0x0000000Cu,c->r[12]); // 80301BA8
  W8(c->r[27]+0x0000000Du,c->r[12]); // 80301BAC
  W8(c->r[27]+0x0000000Eu,c->r[12]); // 80301BB0
  W8(c->r[27]+0x0000000Fu,c->r[12]); // 80301BB4
  c->r[27]=c->r[27]+0x00000010u; // 80301BB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301B78; } // 80301BBC
L_80301BC0:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 80301BC0
  c->r[0]=(rotl(c->r[31],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 80301BC4
  W32(c->r[30]+0x00000050u,c->r[0]); // 80301BC8
L_80301BCC:;
  c->r[11]=c->r[1]+0x00000040u; // 80301BCC
  c->lr=0x80301BD4u; f_801E79A8(c); // 80301BD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80301BD4
  c->lr=c->r[0]; // 80301BD8
  c->r[1]=c->r[1]+0x00000040u; // 80301BDC
  return; // 80301BE0
}

// fn_80301BE4
void f_80301BE4(Ctx* __restrict c) {
  trace_call(0x80301BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80301BE4
  c->r[0]=c->lr; // 80301BE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80301BEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80301BF0
  c->r[31]=c->r[4]|c->r[4]; // 80301BF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80301BF8
  c->r[30]=c->r[3]|c->r[3]; // 80301BFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80301C00
  c->r[29]=0u+0x804D0000u; // 80301C04
  c->r[29]=c->r[29]+0xFFFF9318u; // 80301C08
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80301C0C
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 80301C10
  cmpu(c,0,c->r[4],c->r[0]); // 80301C14
  if (!crb(c,1)) { goto L_80301C30; } // 80301C18
  c->r[3]=c->r[29]+0x00000000u; // 80301C1C
  c->r[5]=c->r[29]+0x000003F8u; // 80301C20
  c->r[4]=0u+0x000003BEu; // 80301C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301C28
  c->lr=0x80301C30u; f_802FA328(c); // 80301C2C
L_80301C30:;
  cmps(c,0,(int32_t)c->r[31],0); // 80301C30
  if (crb(c,2)) { goto L_80301DB8; } // 80301C34
  c->r[0]=R32(c->r[30]+0x00000058u); // 80301C38
  cmps(c,0,(int32_t)c->r[0],0); // 80301C3C
  if (!crb(c,2)) { goto L_80301C58; } // 80301C40
  c->r[3]=c->r[29]+0x00000000u; // 80301C44
  c->r[5]=c->r[29]+0x00000360u; // 80301C48
  c->r[4]=0u+0x000003C1u; // 80301C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301C50
  c->lr=0x80301C58u; f_802FA328(c); // 80301C54
L_80301C58:;
  c->r[10]=R32(c->r[30]+0x0000004Cu); // 80301C58
  c->r[0]=R32(c->r[30]+0x00000050u); // 80301C5C
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 80301C60
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 80301C64
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80301C68
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 80301C6C
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 80301C70
  c->r[11]=R32(c->r[30]+0x00000058u); // 80301C74
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 80301C78
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 80301C7C
  c->r[5]=rotl(c->r[10],14)&0x0000003Cu; // 80301C80
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 80301C84
  c->r[0]=c->r[5]+c->r[0]; // 80301C88
  c->r[6]=c->r[8]+c->r[6]; // 80301C8C
  c->r[5]=c->r[9]+c->r[7]; // 80301C90
  cmpu(c,1,c->r[3],c->r[31]); // 80301C94
  c->r[0]=c->r[4]+c->r[0]; // 80301C98
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 80301C9C
  c->r[4]=c->r[6]+c->r[5]; // 80301CA0
  c->r[4]=c->r[7]+c->r[4]; // 80301CA4
  c->r[0]=c->r[11]+c->r[0]; // 80301CA8
  c->r[7]=c->r[4]+c->r[0]; // 80301CAC
  if (!crb(c,4)) { goto L_80301DAC; } // 80301CB0
  c->r[0]=c->r[31]-c->r[3]; // 80301CB4
  c->r[6]=c->r[31]+0xFFFFFFF8u; // 80301CB8
  cmpu(c,0,c->r[0],0x00000008u); // 80301CBC
  if (!crb(c,1)) { goto L_80301D78; } // 80301CC0
  if (crb(c,5)) { goto L_80301D78; } // 80301CC4
  c->r[0]=c->r[6]+0x00000007u; // 80301CC8
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80301CCC
  c->r[0]=c->r[0]-c->r[3]; // 80301CD0
  c->r[4]=0u+0x00000000u; // 80301CD4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80301CD8
  c->r[5]=c->r[7]+c->r[5]; // 80301CDC
  c->ctr=c->r[0]; // 80301CE0
  cmpu(c,0,c->r[3],c->r[6]); // 80301CE4
  if (!crb(c,0)) { goto L_80301D78; } // 80301CE8
L_80301CEC:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 80301CEC
  c->r[3]=c->r[3]+0x00000008u; // 80301CF0
  W8(c->r[5]+0x00000001u,c->r[4]); // 80301CF4
  W8(c->r[5]+0x00000002u,c->r[4]); // 80301CF8
  W8(c->r[5]+0x00000003u,c->r[4]); // 80301CFC
  W8(c->r[5]+0x00000004u,c->r[4]); // 80301D00
  W8(c->r[5]+0x00000005u,c->r[4]); // 80301D04
  W8(c->r[5]+0x00000006u,c->r[4]); // 80301D08
  W8(c->r[5]+0x00000007u,c->r[4]); // 80301D0C
  W8(c->r[5]+0x00000008u,c->r[4]); // 80301D10
  W8(c->r[5]+0x00000009u,c->r[4]); // 80301D14
  W8(c->r[5]+0x0000000Au,c->r[4]); // 80301D18
  W8(c->r[5]+0x0000000Bu,c->r[4]); // 80301D1C
  W8(c->r[5]+0x0000000Cu,c->r[4]); // 80301D20
  W8(c->r[5]+0x0000000Du,c->r[4]); // 80301D24
  W8(c->r[5]+0x0000000Eu,c->r[4]); // 80301D28
  W8(c->r[5]+0x0000000Fu,c->r[4]); // 80301D2C
  W8(c->r[5]+0x00000010u,c->r[4]); // 80301D30
  W8(c->r[5]+0x00000011u,c->r[4]); // 80301D34
  W8(c->r[5]+0x00000012u,c->r[4]); // 80301D38
  W8(c->r[5]+0x00000013u,c->r[4]); // 80301D3C
  W8(c->r[5]+0x00000014u,c->r[4]); // 80301D40
  W8(c->r[5]+0x00000015u,c->r[4]); // 80301D44
  W8(c->r[5]+0x00000016u,c->r[4]); // 80301D48
  W8(c->r[5]+0x00000017u,c->r[4]); // 80301D4C
  W8(c->r[5]+0x00000018u,c->r[4]); // 80301D50
  W8(c->r[5]+0x00000019u,c->r[4]); // 80301D54
  W8(c->r[5]+0x0000001Au,c->r[4]); // 80301D58
  W8(c->r[5]+0x0000001Bu,c->r[4]); // 80301D5C
  W8(c->r[5]+0x0000001Cu,c->r[4]); // 80301D60
  W8(c->r[5]+0x0000001Du,c->r[4]); // 80301D64
  W8(c->r[5]+0x0000001Eu,c->r[4]); // 80301D68
  W8(c->r[5]+0x0000001Fu,c->r[4]); // 80301D6C
  c->r[5]=c->r[5]+0x00000020u; // 80301D70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301CEC; } // 80301D74
L_80301D78:;
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80301D78
  c->r[0]=c->r[31]-c->r[3]; // 80301D7C
  c->r[5]=c->r[7]+c->r[4]; // 80301D80
  c->r[4]=0u+0x00000000u; // 80301D84
  c->ctr=c->r[0]; // 80301D88
  cmpu(c,0,c->r[3],c->r[31]); // 80301D8C
  if (!crb(c,0)) { goto L_80301DAC; } // 80301D90
L_80301D94:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 80301D94
  W8(c->r[5]+0x00000001u,c->r[4]); // 80301D98
  W8(c->r[5]+0x00000002u,c->r[4]); // 80301D9C
  W8(c->r[5]+0x00000003u,c->r[4]); // 80301DA0
  c->r[5]=c->r[5]+0x00000004u; // 80301DA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80301D94; } // 80301DA8
L_80301DAC:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 80301DAC
  c->r[0]=(rotl(c->r[31],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 80301DB0
  W32(c->r[30]+0x00000050u,c->r[0]); // 80301DB4
L_80301DB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301DB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301DBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80301DC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80301DC4
  c->lr=c->r[0]; // 80301DC8
  c->r[1]=c->r[1]+0x00000020u; // 80301DCC
  return; // 80301DD0
}

// fn_80301DD4
void f_80301DD4(Ctx* __restrict c) {
  trace_call(0x80301DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80301DD4
  c->r[0]=c->lr; // 80301DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80301DDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80301DE0
  c->r[31]=c->r[5]|c->r[5]; // 80301DE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80301DE8
  c->r[30]=c->r[4]|c->r[4]; // 80301DEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80301DF0
  c->r[29]=c->r[3]|c->r[3]; // 80301DF4
  c->r[0]=R32(c->r[3]+0x00000050u); // 80301DF8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80301DFC
  cmpu(c,0,c->r[4],c->r[0]); // 80301E00
  if (crb(c,0)) { goto L_80301E24; } // 80301E04
  c->r[3]=0u+0x804D0000u; // 80301E08
  c->r[5]=0u+0x804D0000u; // 80301E0C
  c->r[3]=c->r[3]+0xFFFF9318u; // 80301E10
  c->r[4]=0u+0x000003F2u; // 80301E14
  c->r[5]=c->r[5]+0xFFFF9770u; // 80301E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301E1C
  c->lr=0x80301E24u; f_802FA328(c); // 80301E20
L_80301E24:;
  c->r[3]=R32(c->r[29]+0x00000058u); // 80301E24
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 80301E28
  c->r[4]=c->r[31]|c->r[31]; // 80301E2C
  c->r[5]=0u+0x00000000u; // 80301E30
  c->r[3]=c->r[3]+c->r[0]; // 80301E34
  c->lr=0x80301E3Cu; f_802FE720(c); // 80301E38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301E3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301E40
  c->r[30]=R32(c->r[1]+0x00000018u); // 80301E44
  c->r[29]=R32(c->r[1]+0x00000014u); // 80301E48
  c->lr=c->r[0]; // 80301E4C
  c->r[1]=c->r[1]+0x00000020u; // 80301E50
  return; // 80301E54
}

// fn_80301E58
void f_80301E58(Ctx* __restrict c) {
  trace_call(0x80301E58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80301E58
  c->r[0]=c->lr; // 80301E5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80301E60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80301E64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80301E68
  c->r[30]=c->r[3]|c->r[3]; // 80301E6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80301E70
  c->r[29]=c->r[4]|c->r[4]; // 80301E74
  W32(c->r[1]+0x00000010u,c->r[28]); // 80301E78
  c->r[28]=c->r[5]|c->r[5]; // 80301E7C
  c->r[0]=R32(c->r[3]+0x00000050u); // 80301E80
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80301E84
  cmpu(c,0,c->r[4],c->r[0]); // 80301E88
  if (crb(c,0)) { goto L_80301EAC; } // 80301E8C
  c->r[3]=0u+0x804D0000u; // 80301E90
  c->r[5]=0u+0x804D0000u; // 80301E94
  c->r[3]=c->r[3]+0xFFFF9318u; // 80301E98
  c->r[4]=0u+0x00000409u; // 80301E9C
  c->r[5]=c->r[5]+0xFFFF9770u; // 80301EA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301EA4
  c->lr=0x80301EACu; f_802FA328(c); // 80301EA8
L_80301EAC:;
  c->r[3]=R32(c->r[30]+0x00000058u); // 80301EAC
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 80301EB0
  c->r[31]=c->r[3]+c->r[0]; // 80301EB4
  c->r[3]=c->r[31]|c->r[31]; // 80301EB8
  c->lr=0x80301EC0u; f_801E4460(c); // 80301EBC
  c->r[30]=c->r[3]|c->r[3]; // 80301EC0
  c->r[3]=c->r[31]|c->r[31]; // 80301EC4
  c->lr=0x80301ECCu; f_801E446C(c); // 80301EC8
  c->r[29]=c->r[3]|c->r[3]; // 80301ECC
  c->r[3]=c->r[31]|c->r[31]; // 80301ED0
  c->r[4]=c->r[28]|c->r[28]; // 80301ED4
  c->r[5]=0u+0x00000000u; // 80301ED8
  c->lr=0x80301EE0u; f_802FE720(c); // 80301EDC
  c->r[3]=c->r[31]|c->r[31]; // 80301EE0
  c->r[4]=c->r[30]|c->r[30]; // 80301EE4
  c->r[5]=c->r[29]|c->r[29]; // 80301EE8
  c->lr=0x80301EF0u; f_801E4378(c); // 80301EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301EF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301EF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80301EF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80301EFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80301F00
  c->lr=c->r[0]; // 80301F04
  c->r[1]=c->r[1]+0x00000020u; // 80301F08
  return; // 80301F0C
}

// fn_80301F10
void f_80301F10(Ctx* __restrict c) {
  trace_call(0x80301F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80301F10
  c->r[0]=c->lr; // 80301F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80301F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80301F1C
  c->r[31]=c->r[5]|c->r[5]; // 80301F20
  W32(c->r[1]+0x00000018u,c->r[30]); // 80301F24
  c->r[30]=c->r[4]|c->r[4]; // 80301F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80301F2C
  c->r[29]=c->r[3]|c->r[3]; // 80301F30
  c->r[0]=R32(c->r[3]+0x00000050u); // 80301F34
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80301F38
  cmpu(c,0,c->r[4],c->r[0]); // 80301F3C
  if (crb(c,0)) { goto L_80301F60; } // 80301F40
  c->r[3]=0u+0x804D0000u; // 80301F44
  c->r[5]=0u+0x804D0000u; // 80301F48
  c->r[3]=c->r[3]+0xFFFF9318u; // 80301F4C
  c->r[4]=0u+0x00000425u; // 80301F50
  c->r[5]=c->r[5]+0xFFFF9770u; // 80301F54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80301F58
  c->lr=0x80301F60u; f_802FA328(c); // 80301F5C
L_80301F60:;
  c->r[3]=R32(c->r[29]+0x00000058u); // 80301F60
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 80301F64
  c->r[5]=R32(c->r[31]+0x00000000u); // 80301F68
  c->r[4]=0u+0x00000000u; // 80301F6C
  c->r[3]=c->r[3]+c->r[0]; // 80301F70
  c->r[0]=R32(c->r[31]+0x00000004u); // 80301F74
  W32(c->r[3]+0x00000000u,c->r[5]); // 80301F78
  c->r[5]=R32(c->r[31]+0x00000008u); // 80301F7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80301F80
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80301F84
  W32(c->r[3]+0x00000008u,c->r[5]); // 80301F88
  c->r[5]=R32(c->r[31]+0x00000010u); // 80301F8C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80301F90
  c->r[0]=R32(c->r[31]+0x00000014u); // 80301F94
  W32(c->r[3]+0x00000010u,c->r[5]); // 80301F98
  c->r[5]=R32(c->r[31]+0x00000018u); // 80301F9C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80301FA0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80301FA4
  W32(c->r[3]+0x00000018u,c->r[5]); // 80301FA8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80301FAC
  c->lr=0x80301FB4u; f_801E43BC(c); // 80301FB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80301FB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80301FB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80301FBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80301FC0
  c->lr=c->r[0]; // 80301FC4
  c->r[1]=c->r[1]+0x00000020u; // 80301FC8
  return; // 80301FCC
}

// SetColorElement__Q36nw4hbm3lyt8MaterialFUls
void f_80301FD0(Ctx* __restrict c) {
  trace_call(0x80301FD0u);
  cmps(c,0,(int32_t)c->r[4],16); // 80301FD0
  if (!crb(c,0)) { goto L_80301FEC; } // 80301FD4
  cmps(c,0,(int32_t)c->r[4],4); // 80301FD8
  if (!crb(c,0)) { goto L_803020A0; } // 80301FDC
  cmps(c,0,(int32_t)c->r[4],0); // 80301FE0
  if (!crb(c,0)) { goto L_80301FF8; } // 80301FE4
  return; // 80301FE8
L_80301FEC:;
  cmps(c,0,(int32_t)c->r[4],32); // 80301FEC
  if (!crb(c,0)) return; // 80301FF0
  goto L_80302114; // 80301FF4
L_80301FF8:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 80301FF8
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 80301FFC
  cmpu(c,0,c->r[0],0x00000001u); // 80302000
  if (crb(c,0)) return; // 80302004
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 80302008
  c->r[0]=sraw(c,c->r[5],31); // 8030200C
  c->r[9]=c->r[5]&~c->r[0]; // 80302010
  c->r[8]=R32(c->r[3]+0x00000058u); // 80302014
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 80302018
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 8030201C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302020
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 80302024
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 80302028
  c->r[7]=rotl(c->r[7],26)&0x00000004u; // 8030202C
  c->r[6]=c->r[6]+c->r[5]; // 80302030
  cmps(c,0,(int32_t)c->r[0],255); // 80302034
  c->r[5]=c->r[7]+c->r[3]; // 80302038
  c->r[3]=0u+0x000000FFu; // 8030203C
  c->r[0]=c->r[8]+c->r[6]; // 80302040
  c->r[5]=c->r[5]+c->r[0]; // 80302044
  if (crb(c,1)) { goto L_80302050; } // 80302048
  c->r[3]=c->r[9]|c->r[9]; // 8030204C
L_80302050:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 80302050
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80302054
  cmps(c,0,(int32_t)c->r[0],2); // 80302058
  if (crb(c,2)) { goto L_80302090; } // 8030205C
  if (!crb(c,0)) { goto L_80302074; } // 80302060
  cmps(c,0,(int32_t)c->r[0],0); // 80302064
  if (crb(c,2)) { goto L_80302080; } // 80302068
  if (!crb(c,0)) { goto L_80302088; } // 8030206C
  return; // 80302070
L_80302074:;
  cmps(c,0,(int32_t)c->r[0],4); // 80302074
  if (!crb(c,0)) return; // 80302078
  goto L_80302098; // 8030207C
L_80302080:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 80302080
  return; // 80302084
L_80302088:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 80302088
  return; // 8030208C
L_80302090:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 80302090
  return; // 80302094
L_80302098:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 80302098
  return; // 8030209C
L_803020A0:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 803020A0
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803020A4
  cmps(c,0,(int32_t)c->r[0],2); // 803020A8
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 803020AC
  if (crb(c,2)) { goto L_803020F4; } // 803020B0
  if (!crb(c,0)) { goto L_803020C8; } // 803020B4
  cmps(c,0,(int32_t)c->r[0],0); // 803020B8
  if (crb(c,2)) { goto L_803020D4; } // 803020BC
  if (!crb(c,0)) { goto L_803020E4; } // 803020C0
  return; // 803020C4
L_803020C8:;
  cmps(c,0,(int32_t)c->r[0],4); // 803020C8
  if (!crb(c,0)) return; // 803020CC
  goto L_80302104; // 803020D0
L_803020D4:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803020D4
  c->r[3]=c->r[3]+c->r[0]; // 803020D8
  W16(c->r[3]+0x00000024u,c->r[5]); // 803020DC
  return; // 803020E0
L_803020E4:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803020E4
  c->r[3]=c->r[3]+c->r[0]; // 803020E8
  W16(c->r[3]+0x00000026u,c->r[5]); // 803020EC
  return; // 803020F0
L_803020F4:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803020F4
  c->r[3]=c->r[3]+c->r[0]; // 803020F8
  W16(c->r[3]+0x00000028u,c->r[5]); // 803020FC
  return; // 80302100
L_80302104:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80302104
  c->r[3]=c->r[3]+c->r[0]; // 80302108
  W16(c->r[3]+0x0000002Au,c->r[5]); // 8030210C
  return; // 80302110
L_80302114:;
  c->r[0]=sraw(c,c->r[5],31); // 80302114
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 80302118
  c->r[7]=c->r[5]&~c->r[0]; // 8030211C
  c->r[5]=0u+0x000000FFu; // 80302120
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 80302124
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80302128
  cmps(c,0,(int32_t)c->r[0],255); // 8030212C
  if (crb(c,1)) { goto L_80302138; } // 80302130
  c->r[5]=c->r[7]|c->r[7]; // 80302134
L_80302138:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 80302138
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 8030213C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80302140
  cmps(c,0,(int32_t)c->r[0],2); // 80302144
  if (crb(c,2)) { goto L_8030218C; } // 80302148
  if (!crb(c,0)) { goto L_80302160; } // 8030214C
  cmps(c,0,(int32_t)c->r[0],0); // 80302150
  if (crb(c,2)) { goto L_8030216C; } // 80302154
  if (!crb(c,0)) { goto L_8030217C; } // 80302158
  return; // 8030215C
L_80302160:;
  cmps(c,0,(int32_t)c->r[0],4); // 80302160
  if (!crb(c,0)) return; // 80302164
  goto L_8030219C; // 80302168
L_8030216C:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8030216C
  c->r[3]=c->r[3]+c->r[0]; // 80302170
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 80302174
  return; // 80302178
L_8030217C:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8030217C
  c->r[3]=c->r[3]+c->r[0]; // 80302180
  W8(c->r[3]+0x0000003Du,c->r[4]); // 80302184
  return; // 80302188
L_8030218C:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8030218C
  c->r[3]=c->r[3]+c->r[0]; // 80302190
  W8(c->r[3]+0x0000003Eu,c->r[4]); // 80302194
  return; // 80302198
L_8030219C:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8030219C
  c->r[3]=c->r[3]+c->r[0]; // 803021A0
  W8(c->r[3]+0x0000003Fu,c->r[4]); // 803021A4
  return; // 803021A8
}

// fn_803021AC
void f_803021AC(Ctx* __restrict c) {
  trace_call(0x803021ACu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803021AC
  c->r[0]=c->lr; // 803021B0
  W32(c->r[1]+0x00000124u,c->r[0]); // 803021B4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 803021B8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 803021BC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 803021C0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 803021C4
  c->r[11]=c->r[1]+0x00000100u; // 803021C8
  c->lr=0x803021D0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803021CC
  c->r[29]=0u+0x804D0000u; // 803021D0
  c->r[31]=c->r[3]|c->r[3]; // 803021D4
  c->r[24]=c->r[4]|c->r[4]; // 803021D8
  c->r[23]=c->r[5]|c->r[5]; // 803021DC
  c->r[29]=c->r[29]+0xFFFF9318u; // 803021E0
  c->r[26]=0u+0x00000001u; // 803021E4
  c->r[21]=0u+0x00000000u; // 803021E8
  c->r[3]=0u+0x00000001u; // 803021EC
  c->lr=0x803021F4u; f_801E3D74(c); // 803021F0
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 803021F4
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 803021F8
  if (crb(c,2)) { goto L_803022A0; } // 803021FC
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 80302200
  c->r[7]=R32(c->r[31]+0x00000058u); // 80302204
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302208
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 8030220C
  c->r[4]=rotl(c->r[3],9)&0x000001E0u; // 80302210
  c->r[3]=0u+0x00000000u; // 80302214
  c->r[6]=c->r[5]+c->r[4]; // 80302218
  c->r[4]=0u+0x00000000u; // 8030221C
  c->r[0]=c->r[7]+c->r[0]; // 80302220
  c->r[5]=0u+0x00000000u; // 80302224
  c->r[22]=c->r[6]+c->r[0]; // 80302228
  c->r[6]=R8(c->r[6]+c->r[0]); // 8030222C
  c->r[7]=0u+0x00000000u; // 80302230
  c->r[8]=0u+0x00000000u; // 80302234
  c->r[9]=0u+0x00000002u; // 80302238
  c->lr=0x80302240u; f_801E3D98(c); // 8030223C
  c->r[6]=R8(c->r[22]+0x00000001u); // 80302240
  c->r[3]=0u+0x00000002u; // 80302244
  c->r[4]=0u+0x00000000u; // 80302248
  c->r[5]=0u+0x00000000u; // 8030224C
  c->r[7]=0u+0x00000000u; // 80302250
  c->r[8]=0u+0x00000000u; // 80302254
  c->r[9]=0u+0x00000002u; // 80302258
  c->lr=0x80302260u; f_801E3D98(c); // 8030225C
  c->r[3]=R8(c->r[22]+0x00000000u); // 80302260
  c->r[26]=0u+0x00000001u; // 80302264
  cmps(c,0,(int32_t)c->r[3],1); // 80302268
  if (crb(c,2)) { goto L_80302280; } // 8030226C
  c->r[0]=R8(c->r[22]+0x00000001u); // 80302270
  cmps(c,0,(int32_t)c->r[0],1); // 80302274
  if (crb(c,2)) { goto L_80302280; } // 80302278
  c->r[26]=0u+0x00000000u; // 8030227C
L_80302280:;
  cmps(c,0,(int32_t)c->r[3],0); // 80302280
  c->r[21]=0u+0x00000000u; // 80302284
  if (crb(c,2)) { goto L_80302298; } // 80302288
  c->r[0]=R8(c->r[22]+0x00000001u); // 8030228C
  cmps(c,0,(int32_t)c->r[0],0); // 80302290
  if (!crb(c,2)) { goto L_803022C0; } // 80302294
L_80302298:;
  c->r[21]=0u+0x00000001u; // 80302298
  goto L_803022C0; // 8030229C
L_803022A0:;
  c->r[3]=0u+0x00000004u; // 803022A0
  c->r[4]=0u+0x00000000u; // 803022A4
  c->r[5]=0u+0x00000000u; // 803022A8
  c->r[6]=0u+0x00000001u; // 803022AC
  c->r[7]=0u+0x00000000u; // 803022B0
  c->r[8]=0u+0x00000000u; // 803022B4
  c->r[9]=0u+0x00000002u; // 803022B8
  c->lr=0x803022C0u; f_801E3D98(c); // 803022BC
L_803022C0:;
  cmps(c,0,(int32_t)c->r[26],0); // 803022C0
  c->r[25]=0u+0x00000000u; // 803022C4
  if (crb(c,2)) { goto L_803022DC; } // 803022C8
  cmps(c,0,(int32_t)c->r[24],0); // 803022CC
  c->r[25]=0u+0x00000001u; // 803022D0
  if (!crb(c,2)) { goto L_803022DC; } // 803022D4
  c->r[25]=0u+0x00000000u; // 803022D8
L_803022DC:;
  cmps(c,0,(int32_t)c->r[21],0); // 803022DC
  if (crb(c,2)) { goto L_803023B4; } // 803022E0
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 803022E4
  c->r[0]=0u+0xFFFFFFFFu; // 803022E8
  W32(c->r[1]+0x00000030u,c->r[0]); // 803022EC
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 803022F0
  if (crb(c,2)) { goto L_80302340; } // 803022F4
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 803022F8
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 803022FC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302300
  c->r[6]=R32(c->r[31]+0x00000058u); // 80302304
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 80302308
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 8030230C
  c->r[0]=c->r[4]+c->r[0]; // 80302310
  c->r[3]=c->r[5]+c->r[3]; // 80302314
  c->r[0]=c->r[6]+c->r[0]; // 80302318
  c->r[6]=c->r[3]+c->r[0]; // 8030231C
  c->r[5]=R8(c->r[3]+c->r[0]); // 80302320
  c->r[4]=R8(c->r[6]+0x00000001u); // 80302324
  c->r[3]=R8(c->r[6]+0x00000002u); // 80302328
  c->r[0]=R8(c->r[6]+0x00000003u); // 8030232C
  W8(c->r[1]+0x00000030u,c->r[5]); // 80302330
  W8(c->r[1]+0x00000031u,c->r[4]); // 80302334
  W8(c->r[1]+0x00000032u,c->r[3]); // 80302338
  W8(c->r[1]+0x00000033u,c->r[0]); // 8030233C
L_80302340:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 80302340
  c->r[5]=c->r[23]|c->r[23]; // 80302344
  c->r[3]=c->r[1]+0x00000024u; // 80302348
  c->r[4]=c->r[1]+0x00000028u; // 8030234C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80302350
  c->lr=0x80302358u; f_802FDDE0(c); // 80302354
  c->r[7]=R8(c->r[1]+0x00000024u); // 80302358
  c->r[4]=c->r[1]+0x00000020u; // 8030235C
  c->r[6]=R8(c->r[1]+0x00000025u); // 80302360
  c->r[3]=0u+0x00000004u; // 80302364
  c->r[5]=R8(c->r[1]+0x00000026u); // 80302368
  c->r[0]=R8(c->r[1]+0x00000027u); // 8030236C
  W8(c->r[1]+0x00000030u,c->r[7]); // 80302370
  W8(c->r[1]+0x00000031u,c->r[6]); // 80302374
  W8(c->r[1]+0x00000032u,c->r[5]); // 80302378
  W8(c->r[1]+0x00000033u,c->r[0]); // 8030237C
  W8(c->r[1]+0x00000020u,c->r[7]); // 80302380
  W8(c->r[1]+0x00000021u,c->r[6]); // 80302384
  W8(c->r[1]+0x00000022u,c->r[5]); // 80302388
  W8(c->r[1]+0x00000023u,c->r[0]); // 8030238C
  c->lr=0x80302394u; f_801E3C9C(c); // 80302390
  cmps(c,0,(int32_t)c->r[25],0); // 80302394
  c->r[25]=0u+0x00000000u; // 80302398
  if (!crb(c,2)) { goto L_803023B0; } // 8030239C
  c->r[3]=R32(c->r[1]+0x00000030u); // 803023A0
  c->r[0]=c->r[3]+0x00010000u; // 803023A4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803023A8
  if (crb(c,2)) { goto L_803023B4; } // 803023AC
L_803023B0:;
  c->r[25]=0u+0x00000001u; // 803023B0
L_803023B4:;
  c->r[24]=0u+0x00000000u; // 803023B4
  W8(c->r[1]+0x0000005Cu,c->r[24]); // 803023B8
  W8(c->r[1]+0x0000005Du,c->r[24]); // 803023BC
  W8(c->r[1]+0x0000005Eu,c->r[24]); // 803023C0
  W8(c->r[1]+0x0000005Fu,c->r[24]); // 803023C4
  W8(c->r[1]+0x00000060u,c->r[24]); // 803023C8
  W8(c->r[1]+0x00000061u,c->r[24]); // 803023CC
  W8(c->r[1]+0x00000062u,c->r[24]); // 803023D0
  W8(c->r[1]+0x00000063u,c->r[24]); // 803023D4
  W8(c->r[1]+0x00000064u,c->r[24]); // 803023D8
  W8(c->r[1]+0x00000065u,c->r[24]); // 803023DC
  c->r[0]=R32(c->r[31]+0x00000050u); // 803023E0
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 803023E4
  c->lr=0x803023ECu; f_801E1E54(c); // 803023E8
  c->r[0]=R32(c->r[31]+0x00000050u); // 803023EC
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 803023F0
  if (crb(c,2)) { goto L_803024F8; } // 803023F4
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 803023F8
  c->r[22]=c->r[1]+0x0000005Cu; // 803023FC
  c->r[4]=R32(c->r[31]+0x00000058u); // 80302400
  c->r[23]=0u+0x00000000u; // 80302404
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 80302408
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8030240C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302410
  c->r[30]=0u+0xAAAB0000u; // 80302414
  c->r[21]=0u+0x00000001u; // 80302418
  c->r[0]=c->r[4]+c->r[0]; // 8030241C
  c->r[27]=c->r[3]+c->r[0]; // 80302420
  goto L_803024E8; // 80302424
L_80302428:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80302428
  cmps(c,0,(int32_t)c->r[0],0); // 8030242C
  if (!crb(c,2)) { goto L_80302448; } // 80302430
  c->r[3]=c->r[29]+0x00000000u; // 80302434
  c->r[5]=c->r[29]+0x000004D0u; // 80302438
  c->r[4]=0u+0x00000508u; // 8030243C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80302440
  c->lr=0x80302448u; f_802FA328(c); // 80302444
L_80302448:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80302448
  c->r[28]=R8(c->r[27]+0x00000002u); // 8030244C
  cmps(c,0,(int32_t)c->r[0],1); // 80302450
  if (!crb(c,2)) { goto L_803024C4; } // 80302454
  cmpu(c,0,c->r[28],0x0000003Cu); // 80302458
  c->r[4]=0u+0x00000000u; // 8030245C
  if (crb(c,2)) { goto L_80302484; } // 80302460
  c->r[0]=c->r[28]+0xFFFFFFE2u; // 80302464
  c->r[3]=c->r[30]+0xFFFFAAABu; // 80302468
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 8030246C
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302470
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80302474
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80302478
  cmpu(c,0,c->r[3],c->r[0]); // 8030247C
  if (!crb(c,0)) { goto L_80302488; } // 80302480
L_80302484:;
  c->r[4]=0u+0x00000001u; // 80302484
L_80302488:;
  cmps(c,0,(int32_t)c->r[4],0); // 80302488
  if (!crb(c,2)) { goto L_803024A4; } // 8030248C
  c->r[3]=c->r[29]+0x00000000u; // 80302490
  c->r[5]=c->r[29]+0x00000518u; // 80302494
  c->r[4]=0u+0x0000050Eu; // 80302498
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030249C
  c->lr=0x803024A4u; f_802FA328(c); // 803024A0
L_803024A4:;
  cmpu(c,0,c->r[28],0x0000003Cu); // 803024A4
  if (crb(c,2)) { goto L_803024C4; } // 803024A8
  c->r[0]=c->r[28]+0xFFFFFFE2u; // 803024AC
  c->r[3]=c->r[30]+0xFFFFAAABu; // 803024B0
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 803024B4
  c->r[24]=0u+0x00000001u; // 803024B8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803024BC
  W8(c->r[22]+c->r[0],c->r[21]); // 803024C0
L_803024C4:;
  c->r[4]=R8(c->r[27]+0x00000000u); // 803024C4
  c->r[3]=c->r[23]|c->r[23]; // 803024C8
  c->r[5]=R8(c->r[27]+0x00000001u); // 803024CC
  c->r[6]=c->r[28]|c->r[28]; // 803024D0
  c->r[7]=0u+0x00000000u; // 803024D4
  c->r[8]=0u+0x0000007Du; // 803024D8
  c->lr=0x803024E0u; f_801E1C2C(c); // 803024DC
  c->r[27]=c->r[27]+0x00000004u; // 803024E0
  c->r[23]=c->r[23]+0x00000001u; // 803024E4
L_803024E8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 803024E8
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 803024EC
  cmpu(c,0,c->r[23],c->r[0]); // 803024F0
  if (crb(c,0)) { IRQCHK(c); goto L_80302428; } // 803024F4
L_803024F8:;
  cmps(c,0,(int32_t)c->r[24],0); // 803024F8
  if (crb(c,2)) { goto L_80302570; } // 803024FC
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 80302500
  c->r[24]=c->r[1]+0x0000005Cu; // 80302504
  c->r[3]=R32(c->r[31]+0x00000058u); // 80302508
  c->r[23]=0u+0x00000000u; // 8030250C
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 80302510
  c->r[21]=c->r[3]+c->r[0]; // 80302514
  goto L_8030255C; // 80302518
L_8030251C:;
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 8030251C
  c->r[0]=R8(c->r[24]+c->r[3]); // 80302520
  cmps(c,0,(int32_t)c->r[0],0); // 80302524
  if (crb(c,2)) { goto L_80302558; } // 80302528
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8030252C
  c->r[3]=c->r[1]+0x000000A0u; // 80302530
  c->r[4]=c->r[21]+c->r[0]; // 80302534
  c->lr=0x8030253Cu; f_802FFD6C(c); // 80302538
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 8030253C
  c->r[0]=rotl(c->r[23],2)&0x000003FCu; // 80302540
  c->r[4]=c->r[0]-c->r[3]; // 80302544
  c->r[5]=0u+0x00000001u; // 80302548
  c->r[3]=c->r[1]+0x000000A0u; // 8030254C
  c->r[4]=c->r[4]+0x0000001Eu; // 80302550
  c->lr=0x80302558u; f_801E62CC(c); // 80302554
L_80302558:;
  c->r[23]=c->r[23]+0x00000001u; // 80302558
L_8030255C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 8030255C
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 80302560
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 80302564
  cmpu(c,0,c->r[3],c->r[0]); // 80302568
  if (crb(c,0)) { IRQCHK(c); goto L_8030251C; } // 8030256C
L_80302570:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302570
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80302574
  if (crb(c,2)) { goto L_80302648; } // 80302578
  c->r[28]=R32(c->r[31]+0x00000058u); // 8030257C
  c->r[23]=0u+0x00000000u; // 80302580
  c->r[24]=0u+0x00000000u; // 80302584
  goto L_80302638; // 80302588
L_8030258C:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 8030258C
  c->r[3]=c->r[1]+0x00000080u; // 80302590
  c->r[0]=R32(c->r[28]+0x00000004u); // 80302594
  W32(c->r[1]+0x00000080u,c->r[4]); // 80302598
  W32(c->r[1]+0x00000084u,c->r[0]); // 8030259C
  c->r[4]=R32(c->r[28]+0x00000008u); // 803025A0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 803025A4
  W32(c->r[1]+0x00000088u,c->r[4]); // 803025A8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803025AC
  c->r[4]=R32(c->r[28]+0x00000010u); // 803025B0
  c->r[0]=R32(c->r[28]+0x00000014u); // 803025B4
  W32(c->r[1]+0x00000090u,c->r[4]); // 803025B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 803025BC
  c->r[4]=R32(c->r[28]+0x00000018u); // 803025C0
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 803025C4
  W32(c->r[1]+0x00000098u,c->r[4]); // 803025C8
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 803025CC
  c->lr=0x803025D4u; f_801E4458(c); // 803025D0
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803025D4
  cmpu(c,0,c->r[0],0x00000001u); // 803025D8
  if (crb(c,1)) { goto L_80302624; } // 803025DC
  c->r[3]=c->r[1]+0x00000080u; // 803025E0
  c->lr=0x803025E8u; f_801E43C4(c); // 803025E4
  cmps(c,0,(int32_t)c->r[3],0); // 803025E8
  c->r[6]=c->r[3]|c->r[3]; // 803025EC
  if (crb(c,2)) { goto L_80302624; } // 803025F0
  c->r[4]=R32(c->r[6]+0x00000008u); // 803025F4
  c->r[3]=c->r[1]+0x00000050u; // 803025F8
  c->r[5]=R32(c->r[6]+0x00000004u); // 803025FC
  c->r[6]=R16(c->r[6]+0x00000000u); // 80302600
  c->lr=0x80302608u; f_801E4720(c); // 80302604
  c->r[4]=c->r[23]|c->r[23]; // 80302608
  c->r[3]=c->r[1]+0x00000050u; // 8030260C
  c->lr=0x80302614u; f_801E4748(c); // 80302610
  c->r[4]=c->r[23]|c->r[23]; // 80302614
  c->r[3]=c->r[1]+0x00000080u; // 80302618
  c->lr=0x80302620u; f_801E438C(c); // 8030261C
  c->r[23]=c->r[23]+0x00000001u; // 80302620
L_80302624:;
  c->r[4]=c->r[24]|c->r[24]; // 80302624
  c->r[3]=c->r[1]+0x00000080u; // 80302628
  c->lr=0x80302630u; f_801E46CC(c); // 8030262C
  c->r[28]=c->r[28]+0x00000020u; // 80302630
  c->r[24]=c->r[24]+0x00000001u; // 80302634
L_80302638:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302638
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 8030263C
  cmpu(c,0,c->r[24],c->r[0]); // 80302640
  if (crb(c,0)) { IRQCHK(c); goto L_8030258C; } // 80302644
L_80302648:;
  c->r[5]=R16(c->r[31]+0x00000024u); // 80302648
  c->r[4]=c->r[1]+0x00000048u; // 8030264C
  c->r[0]=R16(c->r[31]+0x00000026u); // 80302650
  c->r[3]=0u+0x00000001u; // 80302654
  W16(c->r[1]+0x00000048u,c->r[5]); // 80302658
  W16(c->r[1]+0x0000004Au,c->r[0]); // 8030265C
  c->r[5]=R16(c->r[31]+0x00000028u); // 80302660
  c->r[0]=R16(c->r[31]+0x0000002Au); // 80302664
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 80302668
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 8030266C
  c->lr=0x80302674u; f_801E54DC(c); // 80302670
  c->r[5]=R16(c->r[31]+0x0000002Cu); // 80302674
  c->r[4]=c->r[1]+0x00000040u; // 80302678
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 8030267C
  c->r[3]=0u+0x00000002u; // 80302680
  W16(c->r[1]+0x00000040u,c->r[5]); // 80302684
  W16(c->r[1]+0x00000042u,c->r[0]); // 80302688
  c->r[5]=R16(c->r[31]+0x00000030u); // 8030268C
  c->r[0]=R16(c->r[31]+0x00000032u); // 80302690
  W16(c->r[1]+0x00000044u,c->r[5]); // 80302694
  W16(c->r[1]+0x00000046u,c->r[0]); // 80302698
  c->lr=0x803026A0u; f_801E54DC(c); // 8030269C
  c->r[5]=R16(c->r[31]+0x00000034u); // 803026A0
  c->r[4]=c->r[1]+0x00000038u; // 803026A4
  c->r[0]=R16(c->r[31]+0x00000036u); // 803026A8
  c->r[3]=0u+0x00000003u; // 803026AC
  W16(c->r[1]+0x00000038u,c->r[5]); // 803026B0
  W16(c->r[1]+0x0000003Au,c->r[0]); // 803026B4
  c->r[5]=R16(c->r[31]+0x00000038u); // 803026B8
  c->r[0]=R16(c->r[31]+0x0000003Au); // 803026BC
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 803026C0
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 803026C4
  c->lr=0x803026CCu; f_801E54DC(c); // 803026C8
  c->r[0]=R8(c->r[31]+0x0000003Cu); // 803026CC
  c->r[4]=c->r[1]+0x0000001Cu; // 803026D0
  c->r[3]=0u+0x00000000u; // 803026D4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803026D8
  c->r[0]=R8(c->r[31]+0x0000003Du); // 803026DC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803026E0
  c->r[0]=R8(c->r[31]+0x0000003Eu); // 803026E4
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803026E8
  c->r[0]=R8(c->r[31]+0x0000003Fu); // 803026EC
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803026F0
  c->lr=0x803026F8u; f_801E5540(c); // 803026F4
  c->r[0]=R8(c->r[31]+0x00000040u); // 803026F8
  c->r[4]=c->r[1]+0x00000018u; // 803026FC
  c->r[3]=0u+0x00000001u; // 80302700
  W8(c->r[1]+0x00000018u,c->r[0]); // 80302704
  c->r[0]=R8(c->r[31]+0x00000041u); // 80302708
  W8(c->r[1]+0x00000019u,c->r[0]); // 8030270C
  c->r[0]=R8(c->r[31]+0x00000042u); // 80302710
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80302714
  c->r[0]=R8(c->r[31]+0x00000043u); // 80302718
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8030271C
  c->lr=0x80302724u; f_801E5540(c); // 80302720
  c->r[0]=R8(c->r[31]+0x00000044u); // 80302724
  c->r[4]=c->r[1]+0x00000014u; // 80302728
  c->r[3]=0u+0x00000002u; // 8030272C
  W8(c->r[1]+0x00000014u,c->r[0]); // 80302730
  c->r[0]=R8(c->r[31]+0x00000045u); // 80302734
  W8(c->r[1]+0x00000015u,c->r[0]); // 80302738
  c->r[0]=R8(c->r[31]+0x00000046u); // 8030273C
  W8(c->r[1]+0x00000016u,c->r[0]); // 80302740
  c->r[0]=R8(c->r[31]+0x00000047u); // 80302744
  W8(c->r[1]+0x00000017u,c->r[0]); // 80302748
  c->lr=0x80302750u; f_801E5540(c); // 8030274C
  c->r[0]=R8(c->r[31]+0x00000048u); // 80302750
  c->r[4]=c->r[1]+0x00000010u; // 80302754
  c->r[3]=0u+0x00000003u; // 80302758
  W8(c->r[1]+0x00000010u,c->r[0]); // 8030275C
  c->r[0]=R8(c->r[31]+0x00000049u); // 80302760
  W8(c->r[1]+0x00000011u,c->r[0]); // 80302764
  c->r[0]=R8(c->r[31]+0x0000004Au); // 80302768
  W8(c->r[1]+0x00000012u,c->r[0]); // 8030276C
  c->r[0]=R8(c->r[31]+0x0000004Bu); // 80302770
  W8(c->r[1]+0x00000013u,c->r[0]); // 80302774
  c->lr=0x8030277Cu; f_801E5540(c); // 80302778
  c->r[8]=R32(c->r[31]+0x0000004Cu); // 8030277C
  c->r[0]=rotl(c->r[8],18)&0x00000001u; cr0(c,c->r[0]); // 80302780
  if (crb(c,2)) { goto L_803027EC; } // 80302784
  c->r[0]=rotl(c->r[8],8)&0x0000000Fu; // 80302788
  c->r[6]=rotl(c->r[8],27)&0x00000004u; // 8030278C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302790
  c->r[5]=rotl(c->r[8],26)&0x00000004u; // 80302794
  c->r[3]=rotl(c->r[8],14)&0x0000003Cu; // 80302798
  c->r[7]=R32(c->r[31]+0x00000058u); // 8030279C
  c->r[0]=rotl(c->r[8],9)&0x000001E0u; // 803027A0
  c->r[3]=c->r[3]+c->r[0]; // 803027A4
  c->r[0]=c->r[6]+c->r[5]; // 803027A8
  c->r[21]=0u+0x00000000u; // 803027AC
  c->r[3]=c->r[4]+c->r[3]; // 803027B0
  c->r[0]=c->r[7]+c->r[0]; // 803027B4
  c->r[23]=c->r[3]+c->r[0]; // 803027B8
L_803027BC:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 803027BC
  c->r[3]=c->r[21]|c->r[21]; // 803027C0
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 803027C4
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 803027C8
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 803027CC
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 803027D0
  c->lr=0x803027D8u; f_801E5678(c); // 803027D4
  c->r[21]=c->r[21]+0x00000001u; // 803027D8
  c->r[23]=c->r[23]+0x00000001u; // 803027DC
  cmps(c,0,(int32_t)c->r[21],4); // 803027E0
  if (crb(c,0)) { IRQCHK(c); goto L_803027BC; } // 803027E4
  goto L_8030284C; // 803027E8
L_803027EC:;
  c->r[3]=0u+0x00000000u; // 803027EC
  c->r[4]=0u+0x00000000u; // 803027F0
  c->r[5]=0u+0x00000001u; // 803027F4
  c->r[6]=0u+0x00000002u; // 803027F8
  c->r[7]=0u+0x00000003u; // 803027FC
  c->lr=0x80302804u; f_801E5678(c); // 80302800
  c->r[3]=0u+0x00000001u; // 80302804
  c->r[4]=0u+0x00000000u; // 80302808
  c->r[5]=0u+0x00000000u; // 8030280C
  c->r[6]=0u+0x00000000u; // 80302810
  c->r[7]=0u+0x00000003u; // 80302814
  c->lr=0x8030281Cu; f_801E5678(c); // 80302818
  c->r[3]=0u+0x00000002u; // 8030281C
  c->r[4]=0u+0x00000001u; // 80302820
  c->r[5]=0u+0x00000001u; // 80302824
  c->r[6]=0u+0x00000001u; // 80302828
  c->r[7]=0u+0x00000003u; // 8030282C
  c->lr=0x80302834u; f_801E5678(c); // 80302830
  c->r[3]=0u+0x00000003u; // 80302834
  c->r[4]=0u+0x00000002u; // 80302838
  c->r[5]=0u+0x00000002u; // 8030283C
  c->r[6]=0u+0x00000002u; // 80302840
  c->r[7]=0u+0x00000003u; // 80302844
  c->lr=0x8030284Cu; f_801E5678(c); // 80302848
L_8030284C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 8030284C
  c->r[23]=0u+0x00000000u; // 80302850
  W8(c->r[1]+0x0000002Cu,c->r[23]); // 80302854
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 80302858
  W8(c->r[1]+0x0000002Du,c->r[23]); // 8030285C
  W8(c->r[1]+0x0000002Eu,c->r[23]); // 80302860
  if (crb(c,2)) { goto L_80302A30; } // 80302864
  c->lr=0x8030286Cu; f_801E5914(c); // 80302868
  c->r[9]=R32(c->r[31]+0x0000004Cu); // 8030286C
  c->r[25]=c->r[1]+0x0000002Cu; // 80302870
  c->r[10]=R32(c->r[31]+0x00000058u); // 80302874
  c->r[24]=0u+0x00000000u; // 80302878
  c->r[3]=rotl(c->r[9],14)&0x00000003u; // 8030287C
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80302880
  c->r[0]=c->r[3]+c->r[0]; // 80302884
  c->r[5]=rotl(c->r[9],26)&0x00000004u; // 80302888
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8030288C
  c->r[3]=rotl(c->r[9],27)&0x00000004u; // 80302890
  c->r[0]=rotl(c->r[9],20)&0x00000004u; // 80302894
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 80302898
  c->r[6]=rotl(c->r[9],14)&0x0000003Cu; // 8030289C
  c->r[0]=c->r[3]+c->r[0]; // 803028A0
  c->r[4]=rotl(c->r[9],28)&0x00000004u; // 803028A4
  c->r[5]=c->r[8]+c->r[5]; // 803028A8
  c->r[0]=c->r[4]+c->r[0]; // 803028AC
  c->r[3]=rotl(c->r[9],29)&0x00000004u; // 803028B0
  c->r[6]=c->r[7]+c->r[6]; // 803028B4
  c->r[4]=rotl(c->r[9],19)&0x0000001Cu; // 803028B8
  c->r[3]=c->r[3]+c->r[0]; // 803028BC
  c->r[27]=0u+0x00000001u; // 803028C0
  c->r[0]=c->r[6]+c->r[5]; // 803028C4
  c->r[3]=c->r[4]+c->r[3]; // 803028C8
  c->r[0]=c->r[10]+c->r[0]; // 803028CC
  c->r[22]=c->r[3]+c->r[0]; // 803028D0
  goto L_80302A18; // 803028D4
L_803028D8:;
  c->r[0]=R8(c->r[22]+0x00000003u); // 803028D8
  c->r[3]=c->r[24]|c->r[24]; // 803028DC
  c->r[5]=R8(c->r[22]+0x00000002u); // 803028E0
  c->r[4]=R8(c->r[22]+0x00000000u); // 803028E4
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 803028E8
  c->r[6]=R8(c->r[22]+0x00000001u); // 803028EC
  c->lr=0x803028F4u; f_801E57B8(c); // 803028F0
  c->r[0]=R8(c->r[22]+0x00000003u); // 803028F4
  c->r[3]=c->r[24]|c->r[24]; // 803028F8
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 803028FC
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 80302900
  c->lr=0x80302908u; f_801E563C(c); // 80302904
  c->r[0]=R8(c->r[22]+0x00000005u); // 80302908
  c->r[3]=c->r[24]|c->r[24]; // 8030290C
  c->r[5]=R8(c->r[22]+0x00000004u); // 80302910
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80302914
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 80302918
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 8030291C
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 80302920
  c->lr=0x80302928u; f_801E534C(c); // 80302924
  c->r[6]=R8(c->r[22]+0x00000006u); // 80302928
  c->r[3]=c->r[24]|c->r[24]; // 8030292C
  c->r[0]=R8(c->r[22]+0x00000007u); // 80302930
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 80302934
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 80302938
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 8030293C
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 80302940
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 80302944
  c->lr=0x8030294Cu; f_801E53CC(c); // 80302948
  c->r[0]=R8(c->r[22]+0x00000007u); // 8030294C
  c->r[3]=c->r[24]|c->r[24]; // 80302950
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 80302954
  c->lr=0x8030295Cu; f_801E559C(c); // 80302958
  c->r[0]=R8(c->r[22]+0x00000009u); // 8030295C
  c->r[3]=c->r[24]|c->r[24]; // 80302960
  c->r[5]=R8(c->r[22]+0x00000008u); // 80302964
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80302968
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 8030296C
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 80302970
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 80302974
  c->lr=0x8030297Cu; f_801E538C(c); // 80302978
  c->r[6]=R8(c->r[22]+0x0000000Au); // 8030297C
  c->r[3]=c->r[24]|c->r[24]; // 80302980
  c->r[0]=R8(c->r[22]+0x0000000Bu); // 80302984
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 80302988
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 8030298C
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 80302990
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 80302994
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 80302998
  c->lr=0x803029A0u; f_801E5424(c); // 8030299C
  c->r[0]=R8(c->r[22]+0x0000000Bu); // 803029A0
  c->r[3]=c->r[24]|c->r[24]; // 803029A4
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 803029A8
  c->lr=0x803029B0u; f_801E55EC(c); // 803029AC
  c->r[10]=R8(c->r[22]+0x0000000Fu); // 803029B0
  c->r[3]=c->r[24]|c->r[24]; // 803029B4
  c->r[6]=R8(c->r[22]+0x0000000Du); // 803029B8
  c->r[9]=R8(c->r[22]+0x0000000Eu); // 803029BC
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 803029C0
  c->r[21]=rotl(c->r[6],29)&0x0000000Fu; // 803029C4
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 803029C8
  W32(c->r[1]+0x00000008u,c->r[4]); // 803029CC
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 803029D0
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 803029D4
  c->r[7]=c->r[21]|c->r[21]; // 803029D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803029DC
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 803029E0
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 803029E4
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 803029E8
  c->r[4]=R8(c->r[22]+0x0000000Cu); // 803029EC
  c->lr=0x803029F4u; f_801E4E6C(c); // 803029F0
  cmps(c,0,(int32_t)c->r[21],1); // 803029F4
  if (crb(c,0)) { goto L_80302A10; } // 803029F8
  cmps(c,0,(int32_t)c->r[21],3); // 803029FC
  if (crb(c,1)) { goto L_80302A10; } // 80302A00
  c->r[3]=c->r[25]+c->r[21]; // 80302A04
  c->r[23]=0u+0x00000001u; // 80302A08
  W8(c->r[3]+0xFFFFFFFFu,c->r[27]); // 80302A0C
L_80302A10:;
  c->r[22]=c->r[22]+0x00000010u; // 80302A10
  c->r[24]=c->r[24]+0x00000001u; // 80302A14
L_80302A18:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302A18
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 80302A1C
  cmpu(c,0,c->r[24],c->r[0]); // 80302A20
  if (crb(c,0)) { IRQCHK(c); goto L_803028D8; } // 80302A24
  c->r[25]=0u+0x00000001u; // 80302A28
  goto L_80302DE8; // 80302A2C
L_80302A30:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 80302A30
  c->r[24]=0u+0x00000000u; // 80302A34
  if (!crb(c,2)) { goto L_80302A8C; } // 80302A38
  c->r[3]=0u+0x00000000u; // 80302A3C
  c->r[4]=0u+0x000000FFu; // 80302A40
  c->r[5]=0u+0x000000FFu; // 80302A44
  c->r[6]=0u+0x00000004u; // 80302A48
  c->lr=0x80302A50u; f_801E57B8(c); // 80302A4C
  c->r[3]=0u+0x00000000u; // 80302A50
  c->r[4]=0u+0x0000000Fu; // 80302A54
  c->r[5]=0u+0x00000004u; // 80302A58
  c->r[6]=0u+0x0000000Au; // 80302A5C
  c->r[7]=0u+0x0000000Fu; // 80302A60
  c->lr=0x80302A68u; f_801E534C(c); // 80302A64
  c->r[3]=0u+0x00000000u; // 80302A68
  c->r[4]=0u+0x00000007u; // 80302A6C
  c->r[5]=0u+0x00000002u; // 80302A70
  c->r[6]=0u+0x00000005u; // 80302A74
  c->r[7]=0u+0x00000007u; // 80302A78
  c->lr=0x80302A80u; f_801E538C(c); // 80302A7C
  c->r[25]=0u+0x00000001u; // 80302A80
  c->r[24]=0u+0x00000001u; // 80302A84
  goto L_80302D70; // 80302A88
L_80302A8C:;
  cmpu(c,0,c->r[0],0x00000001u); // 80302A8C
  if (!crb(c,2)) { goto L_80302AE0; } // 80302A90
  c->r[3]=0u+0x00000000u; // 80302A94
  c->r[4]=0u+0x00000000u; // 80302A98
  c->r[5]=0u+0x00000000u; // 80302A9C
  c->r[6]=0u+0x000000FFu; // 80302AA0
  c->lr=0x80302AA8u; f_801E57B8(c); // 80302AA4
  c->r[3]=0u+0x00000000u; // 80302AA8
  c->r[4]=0u+0x00000002u; // 80302AAC
  c->r[5]=0u+0x00000004u; // 80302AB0
  c->r[6]=0u+0x00000008u; // 80302AB4
  c->r[7]=0u+0x0000000Fu; // 80302AB8
  c->lr=0x80302AC0u; f_801E534C(c); // 80302ABC
  c->r[3]=0u+0x00000000u; // 80302AC0
  c->r[4]=0u+0x00000001u; // 80302AC4
  c->r[5]=0u+0x00000002u; // 80302AC8
  c->r[6]=0u+0x00000004u; // 80302ACC
  c->r[7]=0u+0x00000007u; // 80302AD0
  c->lr=0x80302AD8u; f_801E538C(c); // 80302AD4
  c->r[24]=0u+0x00000001u; // 80302AD8
  goto L_80302D1C; // 80302ADC
L_80302AE0:;
  cmpu(c,0,c->r[0],0x00000002u); // 80302AE0
  if (!crb(c,2)) { goto L_80302B90; } // 80302AE4
  c->r[3]=0u+0x00000000u; // 80302AE8
  c->r[4]=0u+0x00000000u; // 80302AEC
  c->r[5]=0u+0x00000000u; // 80302AF0
  c->r[6]=0u+0x000000FFu; // 80302AF4
  c->lr=0x80302AFCu; f_801E57B8(c); // 80302AF8
  c->r[3]=0u+0x00000000u; // 80302AFC
  c->r[4]=0u+0x0000000Fu; // 80302B00
  c->r[5]=0u+0x0000000Fu; // 80302B04
  c->r[6]=0u+0x0000000Fu; // 80302B08
  c->r[7]=0u+0x00000008u; // 80302B0C
  c->lr=0x80302B14u; f_801E534C(c); // 80302B10
  c->r[3]=0u+0x00000000u; // 80302B14
  c->r[4]=0u+0x00000007u; // 80302B18
  c->r[5]=0u+0x00000007u; // 80302B1C
  c->r[6]=0u+0x00000007u; // 80302B20
  c->r[7]=0u+0x00000004u; // 80302B24
  c->lr=0x80302B2Cu; f_801E538C(c); // 80302B28
  c->r[3]=0u+0x00000001u; // 80302B2C
  c->r[4]=0u+0x00000001u; // 80302B30
  c->r[5]=0u+0x00000001u; // 80302B34
  c->r[6]=0u+0x000000FFu; // 80302B38
  c->lr=0x80302B40u; f_801E57B8(c); // 80302B3C
  c->r[3]=0u+0x00000001u; // 80302B40
  c->r[4]=0u+0x00000008u; // 80302B44
  c->r[5]=0u+0x00000000u; // 80302B48
  c->r[6]=0u+0x0000000Eu; // 80302B4C
  c->r[7]=0u+0x0000000Fu; // 80302B50
  c->lr=0x80302B58u; f_801E534C(c); // 80302B54
  c->r[3]=0u+0x00000001u; // 80302B58
  c->r[4]=0u+0x00000004u; // 80302B5C
  c->r[5]=0u+0x00000000u; // 80302B60
  c->r[6]=0u+0x00000006u; // 80302B64
  c->r[7]=0u+0x00000007u; // 80302B68
  c->lr=0x80302B70u; f_801E538C(c); // 80302B6C
  c->r[4]=R32(c->r[29]+0x00000490u); // 80302B70
  c->r[3]=0u+0x00000001u; // 80302B74
  c->lr=0x80302B7Cu; f_801E559C(c); // 80302B78
  c->r[4]=R32(c->r[29]+0x000004B0u); // 80302B7C
  c->r[3]=0u+0x00000001u; // 80302B80
  c->lr=0x80302B88u; f_801E55EC(c); // 80302B84
  c->r[24]=0u+0x00000002u; // 80302B88
  goto L_80302C3C; // 80302B8C
L_80302B90:;
  c->r[21]=c->r[29]+0x00000490u; // 80302B90
  c->r[22]=c->r[29]+0x000004B0u; // 80302B94
  c->r[28]=0u+0x00000000u; // 80302B98
  goto L_80302C2C; // 80302B9C
L_80302BA0:;
  c->r[29]=rotl(c->r[24],0)&0x000000FFu; // 80302BA0
  c->r[4]=c->r[28]|c->r[28]; // 80302BA4
  c->r[3]=c->r[29]|c->r[29]; // 80302BA8
  c->r[5]=c->r[28]|c->r[28]; // 80302BAC
  c->r[6]=0u+0x000000FFu; // 80302BB0
  c->lr=0x80302BB8u; f_801E57B8(c); // 80302BB4
  cmps(c,0,(int32_t)c->r[28],0); // 80302BB8
  c->r[7]=0u+0x00000000u; // 80302BBC
  if (!crb(c,2)) { goto L_80302BC8; } // 80302BC0
  c->r[7]=0u+0x0000000Fu; // 80302BC4
L_80302BC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 80302BC8
  c->r[27]=0u+0x00000000u; // 80302BCC
  if (!crb(c,2)) { goto L_80302BD8; } // 80302BD0
  c->r[27]=0u+0x00000007u; // 80302BD4
L_80302BD8:;
  c->r[3]=c->r[29]|c->r[29]; // 80302BD8
  c->r[4]=0u+0x0000000Fu; // 80302BDC
  c->r[5]=0u+0x00000008u; // 80302BE0
  c->r[6]=0u+0x0000000Eu; // 80302BE4
  c->lr=0x80302BECu; f_801E534C(c); // 80302BE8
  c->r[3]=c->r[29]|c->r[29]; // 80302BEC
  c->r[7]=c->r[27]|c->r[27]; // 80302BF0
  c->r[4]=0u+0x00000007u; // 80302BF4
  c->r[5]=0u+0x00000004u; // 80302BF8
  c->r[6]=0u+0x00000006u; // 80302BFC
  c->lr=0x80302C04u; f_801E538C(c); // 80302C00
  c->r[4]=R32(c->r[21]+0x00000000u); // 80302C04
  c->r[3]=c->r[29]|c->r[29]; // 80302C08
  c->lr=0x80302C10u; f_801E559C(c); // 80302C0C
  c->r[4]=R32(c->r[22]+0x00000000u); // 80302C10
  c->r[3]=c->r[29]|c->r[29]; // 80302C14
  c->lr=0x80302C1Cu; f_801E55EC(c); // 80302C18
  c->r[24]=c->r[24]+0x00000001u; // 80302C1C
  c->r[21]=c->r[21]+0x00000004u; // 80302C20
  c->r[22]=c->r[22]+0x00000004u; // 80302C24
  c->r[28]=c->r[28]+0x00000001u; // 80302C28
L_80302C2C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302C2C
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80302C30
  cmpu(c,0,c->r[28],c->r[0]); // 80302C34
  if (crb(c,0)) { IRQCHK(c); goto L_80302BA0; } // 80302C38
L_80302C3C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000024u); // 80302C3C
  c->r[5]=0u+0x00000000u; // 80302C40
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[2]+0xFFFFD3D0u); // 80302C44
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80302C48
  if (!crb(c,2)) { goto L_80302C88; } // 80302C4C
  c->r[4]=c->r[2]+0xFFFFD3D0u; // 80302C50
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000026u); // 80302C54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80302C58
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80302C5C
  if (!crb(c,2)) { goto L_80302C88; } // 80302C60
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000028u); // 80302C64
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80302C68
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80302C6C
  if (!crb(c,2)) { goto L_80302C88; } // 80302C70
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Au); // 80302C74
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80302C78
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80302C7C
  if (!crb(c,2)) { goto L_80302C88; } // 80302C80
  c->r[5]=0u+0x00000001u; // 80302C84
L_80302C88:;
  cmps(c,0,(int32_t)c->r[5],0); // 80302C88
  if (crb(c,2)) { goto L_80302CD0; } // 80302C8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Cu); // 80302C90
  c->r[3]=0u+0x00000000u; // 80302C94
  cmps(c,0,(int32_t)c->r[0],255); // 80302C98
  if (!crb(c,2)) { goto L_80302CC8; } // 80302C9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000002Eu); // 80302CA0
  cmps(c,0,(int32_t)c->r[0],255); // 80302CA4
  if (!crb(c,2)) { goto L_80302CC8; } // 80302CA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000030u); // 80302CAC
  cmps(c,0,(int32_t)c->r[0],255); // 80302CB0
  if (!crb(c,2)) { goto L_80302CC8; } // 80302CB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000032u); // 80302CB8
  cmps(c,0,(int32_t)c->r[0],255); // 80302CBC
  if (!crb(c,2)) { goto L_80302CC8; } // 80302CC0
  c->r[3]=0u+0x00000001u; // 80302CC4
L_80302CC8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80302CC8
  if (!crb(c,2)) { goto L_80302D1C; } // 80302CCC
L_80302CD0:;
  c->r[21]=rotl(c->r[24],0)&0x000000FFu; // 80302CD0
  c->r[4]=0u+0x000000FFu; // 80302CD4
  c->r[3]=c->r[21]|c->r[21]; // 80302CD8
  c->r[5]=0u+0x000000FFu; // 80302CDC
  c->r[6]=0u+0x000000FFu; // 80302CE0
  c->lr=0x80302CE8u; f_801E57B8(c); // 80302CE4
  c->r[3]=c->r[21]|c->r[21]; // 80302CE8
  c->r[4]=0u+0x00000002u; // 80302CEC
  c->r[5]=0u+0x00000004u; // 80302CF0
  c->r[6]=0u+0x00000000u; // 80302CF4
  c->r[7]=0u+0x0000000Fu; // 80302CF8
  c->lr=0x80302D00u; f_801E534C(c); // 80302CFC
  c->r[3]=c->r[21]|c->r[21]; // 80302D00
  c->r[4]=0u+0x00000001u; // 80302D04
  c->r[5]=0u+0x00000002u; // 80302D08
  c->r[6]=0u+0x00000000u; // 80302D0C
  c->r[7]=0u+0x00000007u; // 80302D10
  c->lr=0x80302D18u; f_801E538C(c); // 80302D14
  c->r[24]=c->r[24]+0x00000001u; // 80302D18
L_80302D1C:;
  cmps(c,0,(int32_t)c->r[25],0); // 80302D1C
  if (crb(c,2)) { goto L_80302D70; } // 80302D20
  c->r[21]=rotl(c->r[24],0)&0x000000FFu; // 80302D24
  c->r[4]=0u+0x000000FFu; // 80302D28
  c->r[3]=c->r[21]|c->r[21]; // 80302D2C
  c->r[5]=0u+0x000000FFu; // 80302D30
  c->r[6]=0u+0x00000004u; // 80302D34
  c->lr=0x80302D3Cu; f_801E57B8(c); // 80302D38
  c->r[3]=c->r[21]|c->r[21]; // 80302D3C
  c->r[4]=0u+0x0000000Fu; // 80302D40
  c->r[5]=0u+0x00000000u; // 80302D44
  c->r[6]=0u+0x0000000Au; // 80302D48
  c->r[7]=0u+0x0000000Fu; // 80302D4C
  c->lr=0x80302D54u; f_801E534C(c); // 80302D50
  c->r[3]=c->r[21]|c->r[21]; // 80302D54
  c->r[4]=0u+0x00000007u; // 80302D58
  c->r[5]=0u+0x00000000u; // 80302D5C
  c->r[6]=0u+0x00000005u; // 80302D60
  c->r[7]=0u+0x00000007u; // 80302D64
  c->lr=0x80302D6Cu; f_801E538C(c); // 80302D68
  c->r[24]=c->r[24]+0x00000001u; // 80302D6C
L_80302D70:;
  c->r[21]=rotl(c->r[24],0)&0x000000FFu; // 80302D70
  c->r[22]=0u+0x00000000u; // 80302D74
  goto L_80302DD4; // 80302D78
L_80302D7C:;
  c->r[24]=rotl(c->r[22],0)&0x000000FFu; // 80302D7C
  c->r[4]=0u+0x00000000u; // 80302D80
  c->r[3]=c->r[24]|c->r[24]; // 80302D84
  c->r[5]=0u+0x00000000u; // 80302D88
  c->r[6]=0u+0x00000000u; // 80302D8C
  c->r[7]=0u+0x00000001u; // 80302D90
  c->r[8]=0u+0x00000000u; // 80302D94
  c->lr=0x80302D9Cu; f_801E53CC(c); // 80302D98
  c->r[3]=c->r[24]|c->r[24]; // 80302D9C
  c->r[4]=0u+0x00000000u; // 80302DA0
  c->r[5]=0u+0x00000000u; // 80302DA4
  c->r[6]=0u+0x00000000u; // 80302DA8
  c->r[7]=0u+0x00000001u; // 80302DAC
  c->r[8]=0u+0x00000000u; // 80302DB0
  c->lr=0x80302DB8u; f_801E5424(c); // 80302DB4
  c->r[3]=c->r[24]|c->r[24]; // 80302DB8
  c->lr=0x80302DC0u; f_801E5218(c); // 80302DBC
  c->r[3]=c->r[24]|c->r[24]; // 80302DC0
  c->r[4]=0u+0x00000000u; // 80302DC4
  c->r[5]=0u+0x00000000u; // 80302DC8
  c->lr=0x80302DD0u; f_801E563C(c); // 80302DCC
  c->r[22]=c->r[22]+0x00000001u; // 80302DD0
L_80302DD4:;
  c->r[0]=rotl(c->r[22],0)&0x000000FFu; // 80302DD4
  cmpu(c,0,c->r[0],c->r[21]); // 80302DD8
  if (crb(c,0)) { IRQCHK(c); goto L_80302D7C; } // 80302DDC
  c->r[3]=c->r[21]|c->r[21]; // 80302DE0
  c->lr=0x80302DE8u; f_801E5914(c); // 80302DE4
L_80302DE8:;
  cmps(c,0,(int32_t)c->r[23],0); // 80302DE8
  if (crb(c,2)) { goto L_80302EE8; } // 80302DEC
  c->r[9]=R32(c->r[31]+0x0000004Cu); // 80302DF0
  c->r[28]=c->r[1]+0x0000002Cu; // 80302DF4
  c->r[11]=R32(c->r[31]+0x00000058u); // 80302DF8
  c->r[23]=0u+0x00000000u; // 80302DFC
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80302E00
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 80302E04
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302E08
  c->r[4]=rotl(c->r[9],26)&0x00000004u; // 80302E0C
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 80302E10
  {uint32_t ea=c->r[2]+0xFFFFD074u; c->f[30]=c->ps1[30]=RF32(ea);} // 80302E14
  c->r[6]=rotl(c->r[9],27)&0x00000004u; // 80302E18
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 80302E1C
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 80302E20
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 80302E24
  c->r[3]=c->r[3]+c->r[0]; // 80302E28
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 80302E2C
  c->r[0]=c->r[10]+c->r[9]; // 80302E30
  c->r[6]=c->r[7]+c->r[6]; // 80302E34
  c->r[4]=c->r[8]+c->r[4]; // 80302E38
  c->r[3]=c->r[5]+c->r[3]; // 80302E3C
  c->r[4]=c->r[6]+c->r[4]; // 80302E40
  c->r[0]=c->r[11]+c->r[0]; // 80302E44
  c->r[3]=c->r[4]+c->r[3]; // 80302E48
  c->r[21]=c->r[3]+c->r[0]; // 80302E4C
  goto L_80302ED8; // 80302E50
L_80302E54:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80302E54
  cmps(c,0,(int32_t)c->r[0],0); // 80302E58
  if (crb(c,2)) { goto L_80302ECC; } // 80302E5C
  {uint32_t ea=c->r[21]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302E60
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 80302E64
  c->lr=0x80302E6Cu; f_8030A708(c); // 80302E68
  {uint32_t ea=c->r[21]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302E6C
  c->f[31]=c->f[1]; // 80302E70
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 80302E74
  c->lr=0x80302E7Cu; f_8030A69C(c); // 80302E78
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80302E7C
  c->f[2]=-c->f[1]; // 80302E80
  c->r[3]=c->r[23]+0x00000001u; // 80302E84
  c->r[4]=c->r[1]+0x00000068u; // 80302E88
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80302E8C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80302E90
  {uint32_t ea=c->r[21]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302E94
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80302E98
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80302E9C
  {uint32_t ea=c->r[21]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302EA0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80302EA4
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80302EA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80302EAC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80302EB0
  {uint32_t ea=c->r[21]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302EB4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80302EB8
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80302EBC
  {uint32_t ea=c->r[21]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80302EC0
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80302EC4
  c->lr=0x80302ECCu; f_802FFE74(c); // 80302EC8
L_80302ECC:;
  c->r[28]=c->r[28]+0x00000001u; // 80302ECC
  c->r[21]=c->r[21]+0x00000014u; // 80302ED0
  c->r[23]=c->r[23]+0x00000001u; // 80302ED4
L_80302ED8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302ED8
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 80302EDC
  cmpu(c,0,c->r[23],c->r[0]); // 80302EE0
  if (crb(c,0)) { IRQCHK(c); goto L_80302E54; } // 80302EE4
L_80302EE8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302EE8
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 80302EEC
  c->lr=0x80302EF4u; f_801E51F8(c); // 80302EF0
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302EF4
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 80302EF8
  if (crb(c,2)) { goto L_80302F8C; } // 80302EFC
  c->r[9]=R32(c->r[31]+0x0000004Cu); // 80302F00
  c->r[23]=0u+0x00000000u; // 80302F04
  c->r[10]=R32(c->r[31]+0x00000058u); // 80302F08
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 80302F0C
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 80302F10
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80302F14
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 80302F18
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 80302F1C
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 80302F20
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 80302F24
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 80302F28
  c->r[0]=c->r[3]+c->r[0]; // 80302F2C
  c->r[5]=c->r[7]+c->r[5]; // 80302F30
  c->r[3]=c->r[8]+c->r[6]; // 80302F34
  c->r[6]=rotl(c->r[9],29)&0x00000004u; // 80302F38
  c->r[3]=c->r[5]+c->r[3]; // 80302F3C
  c->r[0]=c->r[4]+c->r[0]; // 80302F40
  c->r[3]=c->r[6]+c->r[3]; // 80302F44
  c->r[0]=c->r[10]+c->r[0]; // 80302F48
  c->r[21]=c->r[3]+c->r[0]; // 80302F4C
  goto L_80302F7C; // 80302F50
L_80302F54:;
  c->r[4]=R8(c->r[21]+0x00000000u); // 80302F54
  c->r[3]=c->r[23]|c->r[23]; // 80302F58
  c->r[5]=R8(c->r[21]+0x00000001u); // 80302F5C
  c->lr=0x80302F64u; f_801E512C(c); // 80302F60
  c->r[4]=R8(c->r[21]+0x00000002u); // 80302F64
  c->r[3]=c->r[23]|c->r[23]; // 80302F68
  c->r[5]=R8(c->r[21]+0x00000003u); // 80302F6C
  c->lr=0x80302F74u; f_801E5028(c); // 80302F70
  c->r[21]=c->r[21]+0x00000004u; // 80302F74
  c->r[23]=c->r[23]+0x00000001u; // 80302F78
L_80302F7C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80302F7C
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 80302F80
  cmpu(c,0,c->r[23],c->r[0]); // 80302F84
  if (crb(c,0)) { IRQCHK(c); goto L_80302F54; } // 80302F88
L_80302F8C:;
  c->r[7]=R32(c->r[31]+0x0000004Cu); // 80302F8C
  c->r[0]=rotl(c->r[7],26)&0x00000001u; cr0(c,c->r[0]); // 80302F90
  if (crb(c,2)) { goto L_80302FF0; } // 80302F94
  c->r[5]=rotl(c->r[7],20)&0x00000004u; // 80302F98
  c->r[0]=rotl(c->r[7],27)&0x00000004u; // 80302F9C
  c->r[0]=c->r[5]+c->r[0]; // 80302FA0
  c->r[4]=rotl(c->r[7],26)&0x00000004u; // 80302FA4
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 80302FA8
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 80302FAC
  c->r[0]=c->r[4]+c->r[0]; // 80302FB0
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 80302FB4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80302FB8
  c->r[7]=R32(c->r[31]+0x00000058u); // 80302FBC
  c->r[3]=c->r[6]+c->r[5]; // 80302FC0
  c->r[0]=c->r[7]+c->r[0]; // 80302FC4
  c->r[3]=c->r[4]+c->r[3]; // 80302FC8
  c->r[6]=c->r[3]+c->r[0]; // 80302FCC
  c->r[0]=R8(c->r[3]+c->r[0]); // 80302FD0
  c->r[4]=R8(c->r[6]+0x00000002u); // 80302FD4
  c->r[5]=R8(c->r[6]+0x00000001u); // 80302FD8
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 80302FDC
  c->r[7]=R8(c->r[6]+0x00000003u); // 80302FE0
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 80302FE4
  c->lr=0x80302FECu; f_801E56F4(c); // 80302FE8
  goto L_80303008; // 80302FEC
L_80302FF0:;
  c->r[3]=0u+0x00000007u; // 80302FF0
  c->r[4]=0u+0x00000000u; // 80302FF4
  c->r[5]=0u+0x00000000u; // 80302FF8
  c->r[6]=0u+0x00000007u; // 80302FFC
  c->r[7]=0u+0x00000000u; // 80303000
  c->lr=0x80303008u; f_801E56F4(c); // 80303004
L_80303008:;
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 80303008
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 8030300C
  if (crb(c,2)) { goto L_8030306C; } // 80303010
  c->r[4]=rotl(c->r[3],8)&0x0000000Fu; // 80303014
  c->r[8]=rotl(c->r[3],28)&0x00000004u; // 80303018
  c->r[0]=rotl(c->r[3],26)&0x00000004u; // 8030301C
  c->r[7]=rotl(c->r[3],20)&0x00000004u; // 80303020
  c->r[6]=rotl(c->r[3],27)&0x00000004u; // 80303024
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 80303028
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 8030302C
  c->r[0]=c->r[8]+c->r[0]; // 80303030
  c->r[6]=c->r[7]+c->r[6]; // 80303034
  c->r[7]=R32(c->r[31]+0x00000058u); // 80303038
  c->r[0]=c->r[6]+c->r[0]; // 8030303C
  c->r[3]=c->r[5]+c->r[3]; // 80303040
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 80303044
  c->r[0]=c->r[7]+c->r[0]; // 80303048
  c->r[3]=c->r[4]+c->r[3]; // 8030304C
  c->r[6]=c->r[3]+c->r[0]; // 80303050
  c->r[3]=R8(c->r[3]+c->r[0]); // 80303054
  c->r[4]=R8(c->r[6]+0x00000001u); // 80303058
  c->r[5]=R8(c->r[6]+0x00000002u); // 8030305C
  c->r[6]=R8(c->r[6]+0x00000003u); // 80303060
  c->lr=0x80303068u; f_801E5DE8(c); // 80303064
  goto L_80303080; // 80303068
L_8030306C:;
  c->r[3]=0u+0x00000001u; // 8030306C
  c->r[4]=0u+0x00000004u; // 80303070
  c->r[5]=0u+0x00000005u; // 80303074
  c->r[6]=0u+0x0000000Fu; // 80303078
  c->lr=0x80303080u; f_801E5DE8(c); // 8030307C
L_80303080:;
  cmps(c,0,(int32_t)c->r[25],0); // 80303080
  c->r[3]=0u+0x00000000u; // 80303084
  if (crb(c,2)) { goto L_80303098; } // 80303088
  cmps(c,0,(int32_t)c->r[26],0); // 8030308C
  if (crb(c,2)) { goto L_80303098; } // 80303090
  c->r[3]=0u+0x00000001u; // 80303094
L_80303098:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80303098
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 8030309C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 803030A0
  c->r[11]=c->r[1]+0x00000100u; // 803030A4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 803030A8
  c->lr=0x803030B0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803030AC
  c->r[0]=R32(c->r[1]+0x00000124u); // 803030B0
  c->lr=c->r[0]; // 803030B4
  c->r[1]=c->r[1]+0x00000120u; // 803030B8
  return; // 803030BC
}

// fn_803030C0
void f_803030C0(Ctx* __restrict c) {
  trace_call(0x803030C0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 803030C0
  c->r[0]=c->r[3]|c->r[3]; // 803030C4
  c->r[3]=c->r[4]|c->r[4]; // 803030C8
  c->r[12]=R32(c->r[12]+0x00000014u); // 803030CC
  c->r[4]=c->r[0]|c->r[0]; // 803030D0
  c->ctr=c->r[12]; // 803030D4
  if (true) { dispatch(c,c->ctr); return; } // 803030D8
}

// fn_803030DC
void f_803030DC(Ctx* __restrict c) {
  trace_call(0x803030DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803030DC
  c->r[0]=c->lr; // 803030E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803030E4
  c->r[11]=c->r[1]+0x00000030u; // 803030E8
  c->lr=0x803030F0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803030EC
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 803030F0
  c->r[24]=c->r[3]|c->r[3]; // 803030F4
  c->r[25]=c->r[4]|c->r[4]; // 803030F8
  c->r[30]=c->r[3]+0x0000001Cu; // 803030FC
  c->r[27]=0u+0x804D0000u; // 80303100
  c->r[28]=0u+0x804D0000u; // 80303104
  c->r[29]=0u+0x00000000u; // 80303108
  goto L_8030317C; // 8030310C
L_80303110:;
  cmps(c,0,(int32_t)c->r[25],0); // 80303110
  c->r[26]=c->r[31]|c->r[31]; // 80303114
  c->r[31]=R32(c->r[31]+0x00000000u); // 80303118
  if (crb(c,2)) { goto L_80303148; } // 8030311C
  cmps(c,0,(int32_t)c->r[26],0); // 80303120
  if (!crb(c,2)) { goto L_8030313C; } // 80303124
  c->r[3]=c->r[27]+0xFFFF8B84u; // 80303128
  c->r[5]=c->r[28]+0xFFFF8B60u; // 8030312C
  c->r[4]=0u+0x0000023Du; // 80303130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303134
  c->lr=0x8030313Cu; f_802FA328(c); // 80303138
L_8030313C:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 8030313C
  cmpu(c,0,c->r[0],c->r[25]); // 80303140
  if (!crb(c,2)) { goto L_8030317C; } // 80303144
L_80303148:;
  W32(c->r[1]+0x00000008u,c->r[26]); // 80303148
  c->r[3]=c->r[24]+0x00000018u; // 8030314C
  c->r[4]=c->r[1]+0x00000008u; // 80303150
  c->lr=0x80303158u; f_8032FA44(c); // 80303154
  cmps(c,0,(int32_t)c->r[26],0); // 80303158
  if (!crb(c,2)) { goto L_80303174; } // 8030315C
  c->r[3]=c->r[27]+0xFFFF8B84u; // 80303160
  c->r[5]=c->r[28]+0xFFFF8B60u; // 80303164
  c->r[4]=0u+0x0000023Du; // 80303168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030316C
  c->lr=0x80303174u; f_802FA328(c); // 80303170
L_80303174:;
  W32(c->r[26]+0x00000008u,c->r[29]); // 80303174
  W16(c->r[26]+0x0000000Cu,c->r[29]); // 80303178
L_8030317C:;
  cmpu(c,0,c->r[31],c->r[30]); // 8030317C
  if (!crb(c,2)) { IRQCHK(c); goto L_80303110; } // 80303180
  c->r[11]=c->r[1]+0x00000030u; // 80303184
  c->lr=0x8030318Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80303188
  c->r[0]=R32(c->r[1]+0x00000034u); // 8030318C
  c->lr=c->r[0]; // 80303190
  c->r[1]=c->r[1]+0x00000030u; // 80303194
  return; // 80303198
}

// fn_8030319C
void f_8030319C(Ctx* __restrict c) {
  trace_call(0x8030319Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8030319C
  c->r[4]=0u+0x00000000u; // 803031A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 803031A4
  c->ctr=c->r[12]; // 803031A8
  if (true) { dispatch(c,c->ctr); return; } // 803031AC
}

// fn_803031B0
void f_803031B0(Ctx* __restrict c) {
  trace_call(0x803031B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803031B0
  c->r[0]=c->lr; // 803031B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803031B8
  c->r[11]=c->r[1]+0x00000020u; // 803031BC
  c->lr=0x803031C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803031C0
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 803031C4
  c->r[26]=c->r[3]|c->r[3]; // 803031C8
  c->r[30]=c->r[3]+0x0000001Cu; // 803031CC
  c->r[28]=0u+0x804D0000u; // 803031D0
  c->r[29]=0u+0x804D0000u; // 803031D4
  goto L_80303260; // 803031D8
L_803031DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803031DC
  if (!crb(c,2)) { goto L_803031F8; } // 803031E0
  c->r[3]=c->r[28]+0xFFFF8B84u; // 803031E4
  c->r[5]=c->r[29]+0xFFFF8B60u; // 803031E8
  c->r[4]=0u+0x0000023Du; // 803031EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803031F0
  c->lr=0x803031F8u; f_802FA328(c); // 803031F4
L_803031F8:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803031F8
  cmps(c,0,(int32_t)c->r[0],0); // 803031FC
  if (!crb(c,2)) { goto L_8030325C; } // 80303200
  cmps(c,0,(int32_t)c->r[31],0); // 80303204
  if (!crb(c,2)) { goto L_80303220; } // 80303208
  c->r[3]=c->r[28]+0xFFFF8B84u; // 8030320C
  c->r[5]=c->r[29]+0xFFFF8B60u; // 80303210
  c->r[4]=0u+0x0000023Du; // 80303214
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303218
  c->lr=0x80303220u; f_802FA328(c); // 8030321C
L_80303220:;
  cmps(c,0,(int32_t)c->r[31],0); // 80303220
  c->r[27]=R32(c->r[31]+0x00000008u); // 80303224
  if (!crb(c,2)) { goto L_80303240; } // 80303228
  c->r[3]=c->r[28]+0xFFFF8B84u; // 8030322C
  c->r[5]=c->r[29]+0xFFFF8B60u; // 80303230
  c->r[4]=0u+0x0000023Du; // 80303234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303238
  c->lr=0x80303240u; f_802FA328(c); // 8030323C
L_80303240:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80303240
  c->r[3]=c->r[27]|c->r[27]; // 80303244
  c->r[5]=c->r[26]|c->r[26]; // 80303248
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 8030324C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80303250
  c->ctr=c->r[12]; // 80303254
  if (true) { c->lr=0x8030325Cu; dispatch(c,c->ctr); } // 80303258
L_8030325C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 8030325C
L_80303260:;
  cmpu(c,0,c->r[31],c->r[30]); // 80303260
  if (!crb(c,2)) { IRQCHK(c); goto L_803031DC; } // 80303264
  c->r[11]=c->r[1]+0x00000020u; // 80303268
  c->lr=0x80303270u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8030326C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303270
  c->lr=c->r[0]; // 80303274
  c->r[1]=c->r[1]+0x00000020u; // 80303278
  return; // 8030327C
}

// fn_80303280
void f_80303280(Ctx* __restrict c) {
  trace_call(0x80303280u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303280
  c->r[0]=c->lr; // 80303284
  cmps(c,0,(int32_t)c->r[4],0); // 80303288
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030328C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80303290
  c->r[31]=c->r[3]+0x0000001Cu; // 80303294
  W32(c->r[1]+0x00000018u,c->r[30]); // 80303298
  c->r[30]=c->r[4]|c->r[4]; // 8030329C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803032A0
  c->r[29]=c->r[3]|c->r[3]; // 803032A4
  if (!crb(c,2)) { goto L_803032C8; } // 803032A8
  c->r[3]=0u+0x804D0000u; // 803032AC
  c->r[5]=0u+0x804D0000u; // 803032B0
  c->r[3]=c->r[3]+0xFFFF98DCu; // 803032B4
  c->r[4]=0u+0x00000233u; // 803032B8
  c->r[5]=c->r[5]+0xFFFF98B8u; // 803032BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803032C0
  c->lr=0x803032C8u; f_802FA328(c); // 803032C4
L_803032C8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 803032C8
  c->r[5]=c->r[30]|c->r[30]; // 803032CC
  c->r[3]=c->r[29]+0x00000018u; // 803032D0
  c->r[4]=c->r[1]+0x00000008u; // 803032D4
  c->lr=0x803032DCu; f_8032FC8C(c); // 803032D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803032DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803032E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803032E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803032E8
  c->lr=c->r[0]; // 803032EC
  c->r[1]=c->r[1]+0x00000020u; // 803032F0
  return; // 803032F4
}

// fn_803032F8
void f_803032F8(Ctx* __restrict c) {
  trace_call(0x803032F8u);
  c->r[3]=c->r[3]+0x00000018u; // 803032F8
  f_802FD0B0(c); return; // 803032FC
}

// SetAnimationEnable__Q36nw4hbm3lyt8MaterialFPQ36nw4hbm3lyt13AnimTransformb
void f_80303300(Ctx* __restrict c) {
  trace_call(0x80303300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303300
  c->r[0]=c->lr; // 80303304
  W32(c->r[1]+0x00000014u,c->r[0]); // 80303308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030330C
  c->r[31]=c->r[5]|c->r[5]; // 80303310
  c->r[12]=R32(c->r[3]+0x00000000u); // 80303314
  c->r[12]=R32(c->r[12]+0x00000020u); // 80303318
  c->ctr=c->r[12]; // 8030331C
  if (true) { c->lr=0x80303324u; dispatch(c,c->ctr); } // 80303320
  cmps(c,0,(int32_t)c->r[3],0); // 80303324
  if (crb(c,2)) { goto L_80303338; } // 80303328
  c->r[0]=cntlz(c->r[31]); // 8030332C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80303330
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80303334
L_80303338:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80303338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030333C
  c->lr=c->r[0]; // 80303340
  c->r[1]=c->r[1]+0x00000010u; // 80303344
  return; // 80303348
}

// fn_8030334C
void f_8030334C(Ctx* __restrict c) {
  trace_call(0x8030334Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030334C
  c->r[0]=c->lr; // 80303350
  W32(c->r[1]+0x00000064u,c->r[0]); // 80303354
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80303358
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8030335C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80303360
  c->r[31]=c->r[3]|c->r[3]; // 80303364
  W32(c->r[1]+0x00000048u,c->r[30]); // 80303368
  c->r[30]=0u+0x804D0000u; // 8030336C
  c->r[30]=c->r[30]+0xFFFF9318u; // 80303370
  W32(c->r[1]+0x00000044u,c->r[29]); // 80303374
  c->r[29]=c->r[5]|c->r[5]; // 80303378
  W32(c->r[1]+0x00000040u,c->r[28]); // 8030337C
  c->r[28]=c->r[4]|c->r[4]; // 80303380
  c->r[0]=R32(c->r[4]+0x00000050u); // 80303384
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 80303388
  cmpu(c,0,c->r[5],c->r[0]); // 8030338C
  if (crb(c,0)) { goto L_803033A4; } // 80303390
  {uint32_t ea=c->r[2]+0xFFFFD078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80303394
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80303398
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8030339C
  goto L_80303488; // 803033A0
L_803033A4:;
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 803033A4
  if (!crb(c,2)) { goto L_803033C0; } // 803033A8
  c->r[3]=c->r[30]+0x00000000u; // 803033AC
  c->r[5]=c->r[30]+0x0000042Cu; // 803033B0
  c->r[4]=0u+0x000003DCu; // 803033B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803033B8
  c->lr=0x803033C0u; f_802FA328(c); // 803033BC
L_803033C0:;
  c->r[0]=R32(c->r[28]+0x00000050u); // 803033C0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803033C4
  cmpu(c,0,c->r[29],c->r[0]); // 803033C8
  if (crb(c,0)) { goto L_803033E4; } // 803033CC
  c->r[3]=c->r[30]+0x00000000u; // 803033D0
  c->r[5]=c->r[30]+0x00000458u; // 803033D4
  c->r[4]=0u+0x000003DDu; // 803033D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803033DC
  c->lr=0x803033E4u; f_802FA328(c); // 803033E0
L_803033E4:;
  c->r[5]=R32(c->r[28]+0x00000058u); // 803033E4
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 803033E8
  c->r[3]=c->r[1]+0x00000008u; // 803033EC
  c->r[4]=0u+0x00000000u; // 803033F0
  c->r[6]=c->r[5]+c->r[0]; // 803033F4
  c->r[5]=R32(c->r[5]+c->r[0]); // 803033F8
  c->r[0]=R32(c->r[6]+0x00000004u); // 803033FC
  W32(c->r[1]+0x00000008u,c->r[5]); // 80303400
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80303404
  c->r[5]=R32(c->r[6]+0x00000008u); // 80303408
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8030340C
  W32(c->r[1]+0x00000010u,c->r[5]); // 80303410
  W32(c->r[1]+0x00000014u,c->r[0]); // 80303414
  c->r[5]=R32(c->r[6]+0x00000010u); // 80303418
  c->r[0]=R32(c->r[6]+0x00000014u); // 8030341C
  W32(c->r[1]+0x00000018u,c->r[5]); // 80303420
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80303424
  c->r[5]=R32(c->r[6]+0x00000018u); // 80303428
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 8030342C
  W32(c->r[1]+0x00000020u,c->r[5]); // 80303430
  W32(c->r[1]+0x00000024u,c->r[0]); // 80303434
  c->lr=0x8030343Cu; f_801E43BC(c); // 80303438
  c->r[3]=c->r[1]+0x00000008u; // 8030343C
  c->lr=0x80303444u; f_801E4444(c); // 80303440
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80303444
  c->r[30]=0u+0x43300000u; // 80303448
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8030344C
  c->r[3]=c->r[1]+0x00000008u; // 80303450
  {uint32_t ea=c->r[2]+0xFFFFD088u; c->f[1]=RF64(ea);} // 80303454
  W32(c->r[1]+0x00000028u,c->r[30]); // 80303458
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8030345C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80303460
  c->lr=0x80303468u; f_801E4430(c); // 80303464
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80303468
  W32(c->r[1]+0x00000030u,c->r[30]); // 8030346C
  {uint32_t ea=c->r[2]+0xFFFFD088u; c->f[1]=RF64(ea);} // 80303470
  W32(c->r[1]+0x00000034u,c->r[0]); // 80303474
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 80303478
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 8030347C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80303480
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80303484
L_80303488:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80303488
  c->r[0]=R32(c->r[1]+0x00000064u); // 8030348C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80303490
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80303494
  c->r[30]=R32(c->r[1]+0x00000048u); // 80303498
  c->r[29]=R32(c->r[1]+0x00000044u); // 8030349C
  c->r[28]=R32(c->r[1]+0x00000040u); // 803034A0
  c->lr=c->r[0]; // 803034A4
  c->r[1]=c->r[1]+0x00000060u; // 803034A8
  return; // 803034AC
}

// fn_803034B0
void f_803034B0(Ctx* __restrict c) {
  trace_call(0x803034B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803034B0
  c->r[0]=c->lr; // 803034B4
  cmps(c,0,(int32_t)c->r[3],0); // 803034B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803034BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803034C0
  c->r[31]=c->r[3]|c->r[3]; // 803034C4
  if (crb(c,2)) { goto L_803034D8; } // 803034C8
  cmps(c,0,(int32_t)c->r[4],0); // 803034CC
  if (!crb(c,1)) { goto L_803034D8; } // 803034D0
  c->lr=0x803034D8u; f_8001AAC0(c); // 803034D4
L_803034D8:;
  c->r[3]=c->r[31]|c->r[31]; // 803034D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803034DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803034E0
  c->lr=c->r[0]; // 803034E4
  c->r[1]=c->r[1]+0x00000010u; // 803034E8
  return; // 803034EC
}

// fn_803034F0
void f_803034F0(Ctx* __restrict c) {
  trace_call(0x803034F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803034F0
  c->r[0]=c->lr; // 803034F4
  c->r[6]=0u+0x804D0000u; // 803034F8
  c->r[7]=0u+0x00000000u; // 803034FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80303500
  c->r[8]=c->r[3]+0x00000014u; // 80303504
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80303508
  c->r[9]=c->r[3]+0x00000020u; // 8030350C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80303510
  c->r[6]=c->r[6]+0xFFFF9AB4u; // 80303514
  c->r[0]=R8(c->r[4]+0x00000009u); // 80303518
  c->r[31]=c->r[4]|c->r[4]; // 8030351C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80303520
  c->r[30]=c->r[3]|c->r[3]; // 80303524
  c->r[5]=0u+0x00000010u; // 80303528
  c->r[4]=c->r[4]+0x0000000Cu; // 8030352C
  W32(c->r[3]+0x00000014u,c->r[7]); // 80303530
  W32(c->r[3]+0x00000018u,c->r[7]); // 80303534
  W32(c->r[3]+0x00000020u,c->r[7]); // 80303538
  W32(c->r[3]+0x00000024u,c->r[7]); // 8030353C
  W32(c->r[3]+0x00000004u,c->r[7]); // 80303540
  W32(c->r[3]+0x00000008u,c->r[7]); // 80303544
  W32(c->r[3]+0x00000000u,c->r[6]); // 80303548
  W32(c->r[3]+0x00000010u,c->r[7]); // 8030354C
  W32(c->r[3]+0x00000014u,c->r[8]); // 80303550
  W32(c->r[3]+0x00000018u,c->r[8]); // 80303554
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 80303558
  W32(c->r[3]+0x00000020u,c->r[9]); // 8030355C
  W32(c->r[3]+0x00000024u,c->r[9]); // 80303560
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80303564
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80303568
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8030356C
  W32(c->r[3]+0x00000028u,c->r[7]); // 80303570
  W8(c->r[3]+0x000000D0u,c->r[7]); // 80303574
  W8(c->r[3]+0x000000CCu,c->r[0]); // 80303578
  c->r[3]=c->r[3]+0x000000B4u; // 8030357C
  c->lr=0x80303584u; f_801F0B64(c); // 80303580
  c->r[3]=c->r[30]+0x000000C4u; // 80303584
  c->r[4]=c->r[31]+0x0000001Cu; // 80303588
  c->r[5]=0u+0x00000008u; // 8030358C
  c->lr=0x80303594u; f_801F0B64(c); // 80303590
  c->r[4]=R8(c->r[31]+0x0000000Au); // 80303594
  c->r[3]=c->r[30]|c->r[30]; // 80303598
  {uint32_t ea=c->r[31]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 8030359C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 803035A0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 803035A4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 803035A8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 803035AC
  {uint32_t ea=c->r[31]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 803035B0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803035B4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803035B8
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 803035BC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803035C0
  c->r[0]=R8(c->r[31]+0x00000008u); // 803035C4
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[9]);} // 803035C8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[8]);} // 803035CC
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[7]);} // 803035D0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[6]);} // 803035D4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[5]);} // 803035D8
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[4]);} // 803035DC
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[3]);} // 803035E0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 803035E4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 803035E8
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803035EC
  W8(c->r[30]+0x000000CDu,c->r[4]); // 803035F0
  W8(c->r[30]+0x000000CEu,c->r[4]); // 803035F4
  W8(c->r[30]+0x000000CFu,c->r[0]); // 803035F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803035FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80303600
  c->r[0]=R32(c->r[1]+0x00000014u); // 80303604
  c->lr=c->r[0]; // 80303608
  c->r[1]=c->r[1]+0x00000010u; // 8030360C
  return; // 80303610
}

// fn_80303614
void f_80303614(Ctx* __restrict c) {
  trace_call(0x80303614u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303614
  c->r[0]=c->lr; // 80303618
  W32(c->r[1]+0x00000044u,c->r[0]); // 8030361C
  c->r[11]=c->r[1]+0x00000040u; // 80303620
  c->lr=0x80303628u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80303624
  cmps(c,0,(int32_t)c->r[3],0); // 80303628
  c->r[23]=c->r[3]|c->r[3]; // 8030362C
  c->r[24]=c->r[4]|c->r[4]; // 80303630
  if (crb(c,2)) { goto L_803037A0; } // 80303634
  c->r[4]=0u+0x804D0000u; // 80303638
  c->r[31]=R32(c->r[3]+0x00000014u); // 8030363C
  c->r[4]=c->r[4]+0xFFFF9AB4u; // 80303640
  c->r[30]=c->r[3]+0x00000014u; // 80303644
  W32(c->r[3]+0x00000000u,c->r[4]); // 80303648
  c->r[26]=0u+0x804D0000u; // 8030364C
  c->r[27]=0u+0x804D0000u; // 80303650
  c->r[28]=0u+0x804D0000u; // 80303654
  c->r[29]=0u+0x804D0000u; // 80303658
  goto L_80303718; // 8030365C
L_80303660:;
  c->r[25]=c->r[31]|c->r[31]; // 80303660
  c->r[31]=R32(c->r[31]+0x00000000u); // 80303664
  c->r[3]=c->r[23]+0x00000010u; // 80303668
  c->r[4]=c->r[1]+0x00000008u; // 8030366C
  W32(c->r[1]+0x00000008u,c->r[25]); // 80303670
  c->lr=0x80303678u; f_8032FA44(c); // 80303674
  cmps(c,0,(int32_t)c->r[25],0); // 80303678
  if (!crb(c,2)) { goto L_80303694; } // 8030367C
  c->r[3]=c->r[26]+0xFFFF817Cu; // 80303680
  c->r[5]=c->r[27]+0xFFFF8158u; // 80303684
  c->r[4]=0u+0x0000023Du; // 80303688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030368C
  c->lr=0x80303694u; f_802FA328(c); // 80303690
L_80303694:;
  c->r[0]=R8(c->r[25]+0x000000CCu); // 80303694
  cmps(c,0,(int32_t)c->r[0],0); // 80303698
  if (!crb(c,2)) { goto L_80303718; } // 8030369C
  cmps(c,0,(int32_t)c->r[25],0); // 803036A0
  if (!crb(c,2)) { goto L_803036BC; } // 803036A4
  c->r[3]=c->r[26]+0xFFFF817Cu; // 803036A8
  c->r[5]=c->r[27]+0xFFFF8158u; // 803036AC
  c->r[4]=0u+0x0000023Du; // 803036B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803036B4
  c->lr=0x803036BCu; f_802FA328(c); // 803036B8
L_803036BC:;
  c->r[12]=R32(c->r[25]+0xFFFFFFFCu); // 803036BC
  c->r[3]=c->r[25]+0xFFFFFFFCu; // 803036C0
  c->r[4]=0u+0xFFFFFFFFu; // 803036C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803036C8
  c->ctr=c->r[12]; // 803036CC
  if (true) { c->lr=0x803036D4u; dispatch(c,c->ctr); } // 803036D0
  cmps(c,0,(int32_t)c->r[25],0); // 803036D4
  if (!crb(c,2)) { goto L_803036F0; } // 803036D8
  c->r[3]=c->r[26]+0xFFFF817Cu; // 803036DC
  c->r[5]=c->r[27]+0xFFFF8158u; // 803036E0
  c->r[4]=0u+0x0000023Du; // 803036E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803036E8
  c->lr=0x803036F0u; f_802FA328(c); // 803036EC
L_803036F0:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFCu,0); cr0(c,c->r[25]); // 803036F0
  if (!crb(c,2)) { goto L_8030370C; } // 803036F4
  c->r[3]=c->r[28]+0xFFFF8314u; // 803036F8
  c->r[5]=c->r[29]+0xFFFF82F0u; // 803036FC
  c->r[4]=0u+0x00000193u; // 80303700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303704
  c->lr=0x8030370Cu; f_802FA328(c); // 80303708
L_8030370C:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 8030370C
  c->r[4]=c->r[25]|c->r[25]; // 80303710
  c->lr=0x80303718u; f_80201DA0(c); // 80303714
L_80303718:;
  cmpu(c,0,c->r[31],c->r[30]); // 80303718
  if (!crb(c,2)) { IRQCHK(c); goto L_80303660; } // 8030371C
  c->r[12]=R32(c->r[23]+0x00000000u); // 80303720
  c->r[3]=c->r[23]|c->r[23]; // 80303724
  c->r[4]=0u+0x00000000u; // 80303728
  c->r[12]=R32(c->r[12]+0x00000050u); // 8030372C
  c->ctr=c->r[12]; // 80303730
  if (true) { c->lr=0x80303738u; dispatch(c,c->ctr); } // 80303734
  c->r[3]=R32(c->r[23]+0x00000028u); // 80303738
  cmps(c,0,(int32_t)c->r[3],0); // 8030373C
  if (crb(c,2)) { goto L_80303770; } // 80303740
  c->r[0]=R8(c->r[3]+0x00000054u); // 80303744
  cmps(c,0,(int32_t)c->r[0],0); // 80303748
  if (!crb(c,2)) { goto L_80303770; } // 8030374C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80303750
  c->r[4]=0u+0xFFFFFFFFu; // 80303754
  c->r[12]=R32(c->r[12]+0x00000008u); // 80303758
  c->ctr=c->r[12]; // 8030375C
  if (true) { c->lr=0x80303764u; dispatch(c,c->ctr); } // 80303760
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 80303764
  c->r[4]=R32(c->r[23]+0x00000028u); // 80303768
  c->lr=0x80303770u; f_80201DA0(c); // 8030376C
L_80303770:;
  c->r[3]=addc(c,c->r[23],0x0000001Cu,0); cr0(c,c->r[3]); // 80303770
  if (crb(c,2)) { goto L_80303780; } // 80303774
  c->r[4]=0u+0x00000000u; // 80303778
  c->lr=0x80303780u; f_8032F918(c); // 8030377C
L_80303780:;
  c->r[3]=addc(c,c->r[23],0x00000010u,0); cr0(c,c->r[3]); // 80303780
  if (crb(c,2)) { goto L_80303790; } // 80303784
  c->r[4]=0u+0x00000000u; // 80303788
  c->lr=0x80303790u; f_8032F918(c); // 8030378C
L_80303790:;
  cmps(c,0,(int32_t)c->r[24],0); // 80303790
  if (!crb(c,1)) { goto L_803037A0; } // 80303794
  c->r[3]=c->r[23]|c->r[23]; // 80303798
  c->lr=0x803037A0u; f_8001AAC0(c); // 8030379C
L_803037A0:;
  c->r[11]=c->r[1]+0x00000040u; // 803037A0
  c->r[3]=c->r[23]|c->r[23]; // 803037A4
  c->lr=0x803037ACu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803037A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 803037AC
  c->lr=c->r[0]; // 803037B0
  c->r[1]=c->r[1]+0x00000040u; // 803037B4
  return; // 803037B8
}

// fn_803037BC
void f_803037BC(Ctx* __restrict c) {
  trace_call(0x803037BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803037BC
  c->r[0]=c->lr; // 803037C0
  cmps(c,0,(int32_t)c->r[4],0); // 803037C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803037C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803037CC
  c->r[31]=c->r[3]+0x00000014u; // 803037D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803037D4
  c->r[30]=0u+0x804D0000u; // 803037D8
  c->r[30]=c->r[30]+0xFFFF9918u; // 803037DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803037E0
  c->r[29]=c->r[4]|c->r[4]; // 803037E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803037E8
  c->r[28]=c->r[3]|c->r[3]; // 803037EC
  if (!crb(c,2)) { goto L_80303808; } // 803037F0
  c->r[3]=c->r[30]+0x00000000u; // 803037F4
  c->r[5]=c->r[30]+0x00000010u; // 803037F8
  c->r[4]=0u+0x000000FDu; // 803037FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303800
  c->lr=0x80303808u; f_802FA328(c); // 80303804
L_80303808:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80303808
  cmps(c,0,(int32_t)c->r[0],0); // 8030380C
  if (crb(c,2)) { goto L_80303828; } // 80303810
  c->r[3]=c->r[30]+0x00000000u; // 80303814
  c->r[5]=c->r[30]+0x0000003Cu; // 80303818
  c->r[4]=0u+0x000000FEu; // 8030381C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303820
  c->lr=0x80303828u; f_802FA328(c); // 80303824
L_80303828:;
  cmps(c,0,(int32_t)c->r[29],0); // 80303828
  if (!crb(c,2)) { goto L_8030384C; } // 8030382C
  c->r[3]=0u+0x804D0000u; // 80303830
  c->r[5]=0u+0x804D0000u; // 80303834
  c->r[3]=c->r[3]+0xFFFF9BD8u; // 80303838
  c->r[4]=0u+0x00000233u; // 8030383C
  c->r[5]=c->r[5]+0xFFFF9BB4u; // 80303840
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303844
  c->lr=0x8030384Cu; f_802FA328(c); // 80303848
L_8030384C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 8030384C
  c->r[3]=c->r[28]+0x00000010u; // 80303850
  c->r[4]=c->r[1]+0x00000008u; // 80303854
  c->r[5]=c->r[29]+0x00000004u; // 80303858
  c->lr=0x80303860u; f_8032FC8C(c); // 8030385C
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 80303860
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80303864
  c->r[30]=R32(c->r[1]+0x00000018u); // 80303868
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030386C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80303870
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303874
  c->lr=c->r[0]; // 80303878
  c->r[1]=c->r[1]+0x00000020u; // 8030387C
  return; // 80303880
}

// fn_80303884
void f_80303884(Ctx* __restrict c) {
  trace_call(0x80303884u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303884
  c->r[0]=c->lr; // 80303888
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8030388C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80303890
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80303894
  c->r[31]=c->r[5]|c->r[5]; // 80303898
  W32(c->r[1]+0x00000028u,c->r[30]); // 8030389C
  c->r[30]=c->r[4]|c->r[4]; // 803038A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803038A4
  c->r[29]=c->r[3]|c->r[3]; // 803038A8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 803038AC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803038B0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803038B4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803038B8
  c->r[3]=c->r[30]|c->r[30]; // 803038BC
  c->lr=0x803038C4u; f_80304708(c); // 803038C0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803038C4
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803038C8
  W32(c->r[1]+0x00000010u,c->r[3]); // 803038CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803038D0
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 803038D4
  W32(c->r[1]+0x00000014u,c->r[4]); // 803038D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803038DC
  fcmp(c,0,c->f[1],c->f[0]); // 803038E0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803038E4
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803038E8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803038EC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803038F0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803038F4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803038F8
  W32(c->r[1]+0x00000008u,c->r[3]); // 803038FC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[3]);} // 80303900
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[2]);} // 80303904
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 80303908
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 8030390C
  c->r[0]=c->cr; // 80303910
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80303914
  if (crb(c,2)) { goto L_8030392C; } // 80303918
  c->f[1]=-c->f[2]; // 8030391C
  c->f[0]=-c->f[0]; // 80303920
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 80303924
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 80303928
L_8030392C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8030392C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80303930
  c->r[30]=R32(c->r[1]+0x00000028u); // 80303934
  c->r[29]=R32(c->r[1]+0x00000024u); // 80303938
  c->lr=c->r[0]; // 8030393C
  c->r[1]=c->r[1]+0x00000030u; // 80303940
  return; // 80303944
}

// fn_80303948
void f_80303948(Ctx* __restrict c) {
  trace_call(0x80303948u);
  c->r[0]=0u+0xFFFFFFFFu; // 80303948
  W32(c->r[3]+0x00000000u,c->r[0]); // 8030394C
  return; // 80303950
}

// fn_80303954
void f_80303954(Ctx* __restrict c) {
  trace_call(0x80303954u);
  return; // 80303954
}

// fn_80303958
void f_80303958(Ctx* __restrict c) {
  trace_call(0x80303958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303958
  c->r[0]=c->lr; // 8030395C
  cmpu(c,0,c->r[4],0x00000011u); // 80303960
  W32(c->r[1]+0x00000014u,c->r[0]); // 80303964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80303968
  c->r[31]=c->r[4]|c->r[4]; // 8030396C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80303970
  c->r[30]=c->r[3]|c->r[3]; // 80303974
  if (crb(c,0)) { goto L_80303998; } // 80303978
  c->r[3]=0u+0x804D0000u; // 8030397C
  c->r[5]=0u+0x804D0000u; // 80303980
  c->r[3]=c->r[3]+0xFFFF9918u; // 80303984
  c->r[4]=0u+0x0000013Fu; // 80303988
  c->r[5]=c->r[5]+0xFFFF9A18u; // 8030398C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303990
  c->lr=0x80303998u; f_802FA328(c); // 80303994
L_80303998:;
  cmps(c,0,(int32_t)c->r[31],16); // 80303998
  if (crb(c,2)) { goto L_803039A4; } // 8030399C
  goto L_803039AC; // 803039A0
L_803039A4:;
  c->r[3]=R8(c->r[30]+0x000000CDu); // 803039A4
  goto L_803039C4; // 803039A8
L_803039AC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803039AC
  c->r[3]=c->r[30]|c->r[30]; // 803039B0
  c->r[4]=c->r[31]|c->r[31]; // 803039B4
  c->r[12]=R32(c->r[12]+0x00000034u); // 803039B8
  c->ctr=c->r[12]; // 803039BC
  if (true) { c->lr=0x803039C4u; dispatch(c,c->ctr); } // 803039C0
L_803039C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803039C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803039C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803039CC
  c->lr=c->r[0]; // 803039D0
  c->r[1]=c->r[1]+0x00000010u; // 803039D4
  return; // 803039D8
}

// fn_803039DC
void f_803039DC(Ctx* __restrict c) {
  trace_call(0x803039DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803039DC
  c->r[0]=c->lr; // 803039E0
  cmpu(c,0,c->r[4],0x00000011u); // 803039E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803039E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803039EC
  c->r[31]=c->r[5]|c->r[5]; // 803039F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803039F4
  c->r[30]=c->r[4]|c->r[4]; // 803039F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803039FC
  c->r[29]=c->r[3]|c->r[3]; // 80303A00
  if (crb(c,0)) { goto L_80303A24; } // 80303A04
  c->r[3]=0u+0x804D0000u; // 80303A08
  c->r[5]=0u+0x804D0000u; // 80303A0C
  c->r[3]=c->r[3]+0xFFFF9918u; // 80303A10
  c->r[4]=0u+0x0000014Eu; // 80303A14
  c->r[5]=c->r[5]+0xFFFF9A18u; // 80303A18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303A1C
  c->lr=0x80303A24u; f_802FA328(c); // 80303A20
L_80303A24:;
  cmps(c,0,(int32_t)c->r[30],16); // 80303A24
  if (crb(c,2)) { goto L_80303A30; } // 80303A28
  goto L_80303A38; // 80303A2C
L_80303A30:;
  W8(c->r[29]+0x000000CDu,c->r[31]); // 80303A30
  goto L_80303A54; // 80303A34
L_80303A38:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80303A38
  c->r[3]=c->r[29]|c->r[29]; // 80303A3C
  c->r[4]=c->r[30]|c->r[30]; // 80303A40
  c->r[5]=c->r[31]|c->r[31]; // 80303A44
  c->r[12]=R32(c->r[12]+0x00000038u); // 80303A48
  c->ctr=c->r[12]; // 80303A4C
  if (true) { c->lr=0x80303A54u; dispatch(c,c->ctr); } // 80303A50
L_80303A54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303A54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80303A58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80303A5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80303A60
  c->lr=c->r[0]; // 80303A64
  c->r[1]=c->r[1]+0x00000020u; // 80303A68
  return; // 80303A6C
}

// fn_80303A70
void f_80303A70(Ctx* __restrict c) {
  trace_call(0x80303A70u);
  c->r[3]=0u+0x000000FFu; // 80303A70
  return; // 80303A74
}

// fn_80303A78
void f_80303A78(Ctx* __restrict c) {
  trace_call(0x80303A78u);
  return; // 80303A78
}

// fn_80303A7C
void f_80303A7C(Ctx* __restrict c) {
  trace_call(0x80303A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303A7C
  c->r[0]=c->lr; // 80303A80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80303A84
  c->r[11]=c->r[1]+0x00000020u; // 80303A88
  c->lr=0x80303A90u; f_801E795C(c); // 80303A8C
  c->r[29]=c->r[3]|c->r[3]; // 80303A90
  c->r[27]=c->r[4]|c->r[4]; // 80303A94
  c->r[28]=c->r[5]|c->r[5]; // 80303A98
  c->r[3]=c->r[3]+0x000000B4u; // 80303A9C
  c->lr=0x80303AA4u; f_802FD9DC(c); // 80303AA0
  cmps(c,0,(int32_t)c->r[3],0); // 80303AA4
  if (crb(c,2)) { goto L_80303AB4; } // 80303AA8
  c->r[3]=c->r[29]|c->r[29]; // 80303AAC
  goto L_80303B24; // 80303AB0
L_80303AB4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80303AB4
  if (crb(c,2)) { goto L_80303B20; } // 80303AB8
  c->r[31]=R32(c->r[29]+0x00000014u); // 80303ABC
  c->r[30]=c->r[29]+0x00000014u; // 80303AC0
  c->r[28]=0u+0x804D0000u; // 80303AC4
  c->r[29]=0u+0x804D0000u; // 80303AC8
  goto L_80303B18; // 80303ACC
L_80303AD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80303AD0
  if (!crb(c,2)) { goto L_80303AEC; } // 80303AD4
  c->r[3]=c->r[28]+0xFFFF817Cu; // 80303AD8
  c->r[5]=c->r[29]+0xFFFF8158u; // 80303ADC
  c->r[4]=0u+0x0000023Du; // 80303AE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303AE4
  c->lr=0x80303AECu; f_802FA328(c); // 80303AE8
L_80303AEC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80303AEC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80303AF0
  c->r[4]=c->r[27]|c->r[27]; // 80303AF4
  c->r[5]=0u+0x00000001u; // 80303AF8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80303AFC
  c->ctr=c->r[12]; // 80303B00
  if (true) { c->lr=0x80303B08u; dispatch(c,c->ctr); } // 80303B04
  cmps(c,0,(int32_t)c->r[3],0); // 80303B08
  if (crb(c,2)) { goto L_80303B14; } // 80303B0C
  goto L_80303B24; // 80303B10
L_80303B14:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80303B14
L_80303B18:;
  cmpu(c,0,c->r[31],c->r[30]); // 80303B18
  if (!crb(c,2)) { IRQCHK(c); goto L_80303AD0; } // 80303B1C
L_80303B20:;
  c->r[3]=0u+0x00000000u; // 80303B20
L_80303B24:;
  c->r[11]=c->r[1]+0x00000020u; // 80303B24
  c->lr=0x80303B2Cu; f_801E79A8(c); // 80303B28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303B2C
  c->lr=c->r[0]; // 80303B30
  c->r[1]=c->r[1]+0x00000020u; // 80303B34
  return; // 80303B38
}

// fn_80303B3C
void f_80303B3C(Ctx* __restrict c) {
  trace_call(0x80303B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303B3C
  c->r[0]=c->lr; // 80303B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80303B44
  c->r[11]=c->r[1]+0x00000020u; // 80303B48
  c->lr=0x80303B50u; f_801E795C(c); // 80303B4C
  c->r[6]=R32(c->r[3]+0x00000028u); // 80303B50
  c->r[29]=c->r[3]|c->r[3]; // 80303B54
  c->r[27]=c->r[4]|c->r[4]; // 80303B58
  c->r[28]=c->r[5]|c->r[5]; // 80303B5C
  cmps(c,0,(int32_t)c->r[6],0); // 80303B60
  if (crb(c,2)) { goto L_80303B80; } // 80303B64
  c->r[3]=c->r[6]+0x00000004u; // 80303B68
  c->lr=0x80303B70u; f_802FDA08(c); // 80303B6C
  cmps(c,0,(int32_t)c->r[3],0); // 80303B70
  if (crb(c,2)) { goto L_80303B80; } // 80303B74
  c->r[3]=R32(c->r[29]+0x00000028u); // 80303B78
  goto L_80303BF0; // 80303B7C
L_80303B80:;
  cmps(c,0,(int32_t)c->r[28],0); // 80303B80
  if (crb(c,2)) { goto L_80303BEC; } // 80303B84
  c->r[31]=R32(c->r[29]+0x00000014u); // 80303B88
  c->r[30]=c->r[29]+0x00000014u; // 80303B8C
  c->r[28]=0u+0x804D0000u; // 80303B90
  c->r[29]=0u+0x804D0000u; // 80303B94
  goto L_80303BE4; // 80303B98
L_80303B9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80303B9C
  if (!crb(c,2)) { goto L_80303BB8; } // 80303BA0
  c->r[3]=c->r[28]+0xFFFF817Cu; // 80303BA4
  c->r[5]=c->r[29]+0xFFFF8158u; // 80303BA8
  c->r[4]=0u+0x0000023Du; // 80303BAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303BB0
  c->lr=0x80303BB8u; f_802FA328(c); // 80303BB4
L_80303BB8:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80303BB8
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80303BBC
  c->r[4]=c->r[27]|c->r[27]; // 80303BC0
  c->r[5]=0u+0x00000001u; // 80303BC4
  c->r[12]=R32(c->r[12]+0x00000040u); // 80303BC8
  c->ctr=c->r[12]; // 80303BCC
  if (true) { c->lr=0x80303BD4u; dispatch(c,c->ctr); } // 80303BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80303BD4
  if (crb(c,2)) { goto L_80303BE0; } // 80303BD8
  goto L_80303BF0; // 80303BDC
L_80303BE0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80303BE0
L_80303BE4:;
  cmpu(c,0,c->r[31],c->r[30]); // 80303BE4
  if (!crb(c,2)) { IRQCHK(c); goto L_80303B9C; } // 80303BE8
L_80303BEC:;
  c->r[3]=0u+0x00000000u; // 80303BEC
L_80303BF0:;
  c->r[11]=c->r[1]+0x00000020u; // 80303BF0
  c->lr=0x80303BF8u; f_801E79A8(c); // 80303BF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303BF8
  c->lr=c->r[0]; // 80303BFC
  c->r[1]=c->r[1]+0x00000020u; // 80303C00
  return; // 80303C04
}

// fn_80303C08
void f_80303C08(Ctx* __restrict c) {
  trace_call(0x80303C08u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303C08
  c->r[0]=c->lr; // 80303C0C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80303C10
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80303C14
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80303C18
  c->r[11]=c->r[1]+0x000000D0u; // 80303C1C
  c->lr=0x80303C24u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80303C20
  c->r[6]=R8(c->r[3]+0x000000CFu); // 80303C24
  c->r[30]=c->r[3]|c->r[3]; // 80303C28
  c->r[31]=c->r[4]|c->r[4]; // 80303C2C
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 80303C30
  if (!crb(c,2)) { goto L_80303C44; } // 80303C34
  c->r[0]=R8(c->r[4]+0x00000050u); // 80303C38
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 80303C3C
  if (crb(c,2)) { goto L_80303F04; } // 80303C40
L_80303C44:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 80303C44
  c->r[5]=R32(c->r[3]+0x00000044u); // 80303C48
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80303C4C
  c->r[0]=R32(c->r[3]+0x00000048u); // 80303C50
  W32(c->r[1]+0x00000008u,c->r[5]); // 80303C54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80303C58
  if (crb(c,2)) { goto L_80303C88; } // 80303C5C
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 80303C60
  if (crb(c,2)) { goto L_80303C88; } // 80303C64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80303C68
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80303C6C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80303C70
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80303C74
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80303C78
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80303C7C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80303C80
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80303C84
L_80303C88:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80303C88
  c->r[3]=c->r[1]+0x00000040u; // 80303C8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80303C90
  {uint32_t ea=c->r[2]+0xFFFFD094u; c->f[3]=c->ps1[3]=RF32(ea);} // 80303C94
  c->lr=0x80303C9Cu; f_801C5E3C(c); // 80303C98
  {uint32_t ea=c->r[2]+0xFFFFD098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80303C9C
  c->r[3]=c->r[1]+0x00000010u; // 80303CA0
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80303CA4
  c->r[4]=0u+0x00000078u; // 80303CA8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80303CAC
  c->lr=0x80303CB4u; f_801C5C90(c); // 80303CB0
  c->r[3]=c->r[1]+0x00000010u; // 80303CB4
  c->r[4]=c->r[1]+0x00000040u; // 80303CB8
  c->r[5]=c->r[1]+0x00000070u; // 80303CBC
  c->lr=0x80303CC4u; f_801C5A7C(c); // 80303CC0
  {uint32_t ea=c->r[2]+0xFFFFD098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80303CC4
  c->r[3]=c->r[1]+0x00000010u; // 80303CC8
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80303CCC
  c->r[4]=0u+0x00000079u; // 80303CD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80303CD4
  c->lr=0x80303CDCu; f_801C5C90(c); // 80303CD8
  c->r[3]=c->r[1]+0x00000010u; // 80303CDC
  c->r[4]=c->r[1]+0x00000070u; // 80303CE0
  c->r[5]=c->r[1]+0x00000040u; // 80303CE4
  c->lr=0x80303CECu; f_801C5A7C(c); // 80303CE8
  {uint32_t ea=c->r[2]+0xFFFFD098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80303CEC
  c->r[3]=c->r[1]+0x00000010u; // 80303CF0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80303CF4
  c->r[4]=0u+0x0000007Au; // 80303CF8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80303CFC
  c->lr=0x80303D04u; f_801C5C90(c); // 80303D00
  c->r[3]=c->r[1]+0x00000010u; // 80303D04
  c->r[4]=c->r[1]+0x00000040u; // 80303D08
  c->r[5]=c->r[1]+0x00000070u; // 80303D0C
  c->lr=0x80303D14u; f_801C5A7C(c); // 80303D10
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80303D14
  c->r[3]=c->r[1]+0x00000070u; // 80303D18
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80303D1C
  c->r[4]=c->r[30]+0x00000054u; // 80303D20
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80303D24
  c->lr=0x80303D2Cu; f_801C5DF0(c); // 80303D28
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80303D2C
  cmps(c,0,(int32_t)c->r[3],0); // 80303D30
  if (crb(c,2)) { goto L_80303D4C; } // 80303D34
  c->r[3]=c->r[3]+0x00000084u; // 80303D38
  c->r[4]=c->r[30]+0x00000054u; // 80303D3C
  c->r[5]=c->r[30]+0x00000084u; // 80303D40
  c->lr=0x80303D48u; f_801C5A7C(c); // 80303D44
  goto L_80303DCC; // 80303D48
L_80303D4C:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 80303D4C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80303D50
  if (crb(c,2)) { goto L_80303DBC; } // 80303D54
  c->r[25]=R32(c->r[30]+0x00000054u); // 80303D58
  c->r[12]=R32(c->r[30]+0x00000058u); // 80303D5C
  c->r[11]=R32(c->r[30]+0x0000005Cu); // 80303D60
  c->r[10]=R32(c->r[30]+0x00000060u); // 80303D64
  c->r[9]=R32(c->r[30]+0x00000064u); // 80303D68
  c->r[8]=R32(c->r[30]+0x00000068u); // 80303D6C
  c->r[7]=R32(c->r[30]+0x0000006Cu); // 80303D70
  c->r[6]=R32(c->r[30]+0x00000070u); // 80303D74
  c->r[5]=R32(c->r[30]+0x00000074u); // 80303D78
  c->r[4]=R32(c->r[30]+0x00000078u); // 80303D7C
  c->r[3]=R32(c->r[30]+0x0000007Cu); // 80303D80
  c->r[0]=R32(c->r[30]+0x00000080u); // 80303D84
  W32(c->r[30]+0x00000084u,c->r[25]); // 80303D88
  W32(c->r[30]+0x00000088u,c->r[12]); // 80303D8C
  W32(c->r[30]+0x0000008Cu,c->r[11]); // 80303D90
  W32(c->r[30]+0x00000090u,c->r[10]); // 80303D94
  W32(c->r[30]+0x00000094u,c->r[9]); // 80303D98
  W32(c->r[30]+0x00000098u,c->r[8]); // 80303D9C
  W32(c->r[30]+0x0000009Cu,c->r[7]); // 80303DA0
  W32(c->r[30]+0x000000A0u,c->r[6]); // 80303DA4
  W32(c->r[30]+0x000000A4u,c->r[5]); // 80303DA8
  W32(c->r[30]+0x000000A8u,c->r[4]); // 80303DAC
  W32(c->r[30]+0x000000ACu,c->r[3]); // 80303DB0
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80303DB4
  goto L_80303DCC; // 80303DB8
L_80303DBC:;
  c->r[3]=c->r[31]+0x00000004u; // 80303DBC
  c->r[4]=c->r[30]+0x00000054u; // 80303DC0
  c->r[5]=c->r[30]+0x00000084u; // 80303DC4
  c->lr=0x80303DCCu; f_801C5A7C(c); // 80303DC8
L_80303DCC:;
  c->r[0]=R8(c->r[31]+0x00000050u); // 80303DCC
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80303DD0
  if (crb(c,2)) { goto L_80303E1C; } // 80303DD4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80303DD8
  cmps(c,0,(int32_t)c->r[0],0); // 80303DDC
  if (crb(c,2)) { goto L_80303E1C; } // 80303DE0
  c->r[3]=R8(c->r[30]+0x000000CDu); // 80303DE4
  c->r[0]=0u+0x43300000u; // 80303DE8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80303DEC
  {uint32_t ea=c->r[2]+0xFFFFD0A0u; c->f[1]=RF64(ea);} // 80303DF0
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80303DF4
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80303DF8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80303DFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80303E00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80303E04
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80303E08
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 80303E0C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 80303E10
  W8(c->r[30]+0x000000CEu,c->r[0]); // 80303E14
  goto L_80303E24; // 80303E18
L_80303E1C:;
  c->r[0]=R8(c->r[30]+0x000000CDu); // 80303E1C
  W8(c->r[30]+0x000000CEu,c->r[0]); // 80303E20
L_80303E24:;
  c->r[0]=R8(c->r[30]+0x000000CFu); // 80303E24
  c->r[26]=0u+0x00000000u; // 80303E28
  c->r[3]=R8(c->r[31]+0x00000050u); // 80303E2C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80303E30
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80303E34
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 80303E38
  c->r[0]=0u-c->r[3]; // 80303E3C
  c->r[0]=c->r[0]|c->r[3]; // 80303E40
  c->r[25]=rotl(c->r[0],1)&0x00000001u; // 80303E44
  if (crb(c,2)) { goto L_80303E5C; } // 80303E48
  c->r[0]=R8(c->r[30]+0x000000CDu); // 80303E4C
  cmpu(c,0,c->r[0],0x000000FFu); // 80303E50
  if (crb(c,2)) { goto L_80303E5C; } // 80303E54
  c->r[26]=0u+0x00000001u; // 80303E58
L_80303E5C:;
  cmps(c,0,(int32_t)c->r[26],0); // 80303E5C
  if (crb(c,2)) { goto L_80303E9C; } // 80303E60
  c->r[4]=R8(c->r[30]+0x000000CDu); // 80303E64
  c->r[3]=0u+0x43300000u; // 80303E68
  c->r[0]=R8(c->r[31]+0x00000050u); // 80303E6C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 80303E70
  c->r[0]=c->r[0]|0x00000040u; // 80303E74
  {uint32_t ea=c->r[2]+0xFFFFD0A0u; c->f[2]=RF64(ea);} // 80303E78
  W32(c->r[1]+0x000000A8u,c->r[3]); // 80303E7C
  {uint32_t ea=c->r[2]+0xFFFFD09Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80303E80
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 80303E84
  W8(c->r[31]+0x00000050u,c->r[0]); // 80303E88
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80303E8C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80303E90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80303E94
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 80303E98
L_80303E9C:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[29]=R32(ea); c->r[30]=ea;} // 80303E9C
  c->r[27]=0u+0x804D0000u; // 80303EA0
  c->r[28]=0u+0x804D0000u; // 80303EA4
  goto L_80303EE4; // 80303EA8
L_80303EAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80303EAC
  if (!crb(c,2)) { goto L_80303EC8; } // 80303EB0
  c->r[3]=c->r[27]+0xFFFF817Cu; // 80303EB4
  c->r[5]=c->r[28]+0xFFFF8158u; // 80303EB8
  c->r[4]=0u+0x0000023Du; // 80303EBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303EC0
  c->lr=0x80303EC8u; f_802FA328(c); // 80303EC4
L_80303EC8:;
  c->r[12]=R32(c->r[29]+0xFFFFFFFCu); // 80303EC8
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 80303ECC
  c->r[4]=c->r[31]|c->r[31]; // 80303ED0
  c->r[12]=R32(c->r[12]+0x00000010u); // 80303ED4
  c->ctr=c->r[12]; // 80303ED8
  if (true) { c->lr=0x80303EE0u; dispatch(c,c->ctr); } // 80303EDC
  c->r[29]=R32(c->r[29]+0x00000000u); // 80303EE0
L_80303EE4:;
  cmpu(c,0,c->r[29],c->r[30]); // 80303EE4
  if (!crb(c,2)) { IRQCHK(c); goto L_80303EAC; } // 80303EE8
  cmps(c,0,(int32_t)c->r[26],0); // 80303EEC
  if (crb(c,2)) { goto L_80303F04; } // 80303EF0
  c->r[0]=R8(c->r[31]+0x00000050u); // 80303EF4
  c->r[0]=(rotl(c->r[25],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 80303EF8
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 80303EFC
  W8(c->r[31]+0x00000050u,c->r[0]); // 80303F00
L_80303F04:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 80303F04
  c->r[11]=c->r[1]+0x000000D0u; // 80303F08
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 80303F0C
  c->lr=0x80303F14u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80303F10
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80303F14
  c->lr=c->r[0]; // 80303F18
  c->r[1]=c->r[1]+0x000000E0u; // 80303F1C
  return; // 80303F20
}

// fn_80303F24
void f_80303F24(Ctx* __restrict c) {
  trace_call(0x80303F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303F24
  c->r[0]=c->lr; // 80303F28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80303F2C
  c->r[11]=c->r[1]+0x00000020u; // 80303F30
  c->lr=0x80303F38u; f_801E795C(c); // 80303F34
  c->r[0]=R8(c->r[3]+0x000000CFu); // 80303F38
  c->r[28]=c->r[3]|c->r[3]; // 80303F3C
  c->r[27]=c->r[4]|c->r[4]; // 80303F40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80303F44
  if (crb(c,2)) { goto L_80303FB0; } // 80303F48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80303F4C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80303F50
  c->ctr=c->r[12]; // 80303F54
  if (true) { c->lr=0x80303F5Cu; dispatch(c,c->ctr); } // 80303F58
  c->r[31]=R32(c->r[28]+0x00000014u); // 80303F5C
  c->r[30]=c->r[28]+0x00000014u; // 80303F60
  c->r[28]=0u+0x804D0000u; // 80303F64
  c->r[29]=0u+0x804D0000u; // 80303F68
  goto L_80303FA8; // 80303F6C
L_80303F70:;
  cmps(c,0,(int32_t)c->r[31],0); // 80303F70
  if (!crb(c,2)) { goto L_80303F8C; } // 80303F74
  c->r[3]=c->r[28]+0xFFFF817Cu; // 80303F78
  c->r[5]=c->r[29]+0xFFFF8158u; // 80303F7C
  c->r[4]=0u+0x0000023Du; // 80303F80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80303F84
  c->lr=0x80303F8Cu; f_802FA328(c); // 80303F88
L_80303F8C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 80303F8C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 80303F90
  c->r[4]=c->r[27]|c->r[27]; // 80303F94
  c->r[12]=R32(c->r[12]+0x00000014u); // 80303F98
  c->ctr=c->r[12]; // 80303F9C
  if (true) { c->lr=0x80303FA4u; dispatch(c,c->ctr); } // 80303FA0
  c->r[31]=R32(c->r[31]+0x00000000u); // 80303FA4
L_80303FA8:;
  cmpu(c,0,c->r[31],c->r[30]); // 80303FA8
  if (!crb(c,2)) { IRQCHK(c); goto L_80303F70; } // 80303FAC
L_80303FB0:;
  c->r[11]=c->r[1]+0x00000020u; // 80303FB0
  c->lr=0x80303FB8u; f_801E79A8(c); // 80303FB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80303FB8
  c->lr=c->r[0]; // 80303FBC
  c->r[1]=c->r[1]+0x00000020u; // 80303FC0
  return; // 80303FC4
}

// DrawSelf__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_80303FC8(Ctx* __restrict c) {
  trace_call(0x80303FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80303FC8
  c->r[0]=c->lr; // 80303FCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80303FD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80303FD4
  c->r[31]=c->r[3]|c->r[3]; // 80303FD8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80303FDC
  cmps(c,0,(int32_t)c->r[0],0); // 80303FE0
  if (crb(c,2)) { goto L_80304030; } // 80303FE4
  c->r[0]=R8(c->r[4]+0x00000050u); // 80303FE8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 80303FEC
  if (crb(c,2)) { goto L_80304030; } // 80303FF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80303FF4
  c->r[12]=R32(c->r[12]+0x00000060u); // 80303FF8
  c->ctr=c->r[12]; // 80303FFC
  if (true) { c->lr=0x80304004u; dispatch(c,c->ctr); } // 80304000
  c->r[4]=0u+0x00FF0000u; // 80304004
  c->r[3]=c->r[31]|c->r[31]; // 80304008
  c->r[0]=c->r[4]+0x000000FFu; // 8030400C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80304010
  c->lr=0x80304018u; f_80304708(c); // 80304014
  W32(c->r[1]+0x00000014u,c->r[4]); // 80304018
  c->r[4]=c->r[31]+0x0000004Cu; // 8030401C
  c->r[5]=c->r[1]+0x00000008u; // 80304020
  W32(c->r[1]+0x00000010u,c->r[3]); // 80304024
  c->r[3]=c->r[1]+0x00000010u; // 80304028
  c->lr=0x80304030u; f_802FE570(c); // 8030402C
L_80304030:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80304030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80304034
  c->lr=c->r[0]; // 80304038
  c->r[1]=c->r[1]+0x00000020u; // 8030403C
  return; // 80304040
}

// fn_80304044
void f_80304044(Ctx* __restrict c) {
  trace_call(0x80304044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304044
  c->r[0]=c->lr; // 80304048
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030404C
  c->r[11]=c->r[1]+0x00000020u; // 80304050
  c->lr=0x80304058u; f_801E795C(c); // 80304054
  c->r[12]=R32(c->r[3]+0x00000000u); // 80304058
  c->r[28]=c->r[3]|c->r[3]; // 8030405C
  c->r[27]=c->r[4]|c->r[4]; // 80304060
  c->r[12]=R32(c->r[12]+0x00000020u); // 80304064
  c->ctr=c->r[12]; // 80304068
  if (true) { c->lr=0x80304070u; dispatch(c,c->ctr); } // 8030406C
  c->r[0]=R8(c->r[28]+0x000000CFu); // 80304070
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80304074
  if (!crb(c,2)) { goto L_80304084; } // 80304078
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 8030407C
  if (!crb(c,2)) { goto L_803040D8; } // 80304080
L_80304084:;
  c->r[31]=R32(c->r[28]+0x00000014u); // 80304084
  c->r[30]=c->r[28]+0x00000014u; // 80304088
  c->r[28]=0u+0x804D0000u; // 8030408C
  c->r[29]=0u+0x804D0000u; // 80304090
  goto L_803040D0; // 80304094
L_80304098:;
  cmps(c,0,(int32_t)c->r[31],0); // 80304098
  if (!crb(c,2)) { goto L_803040B4; } // 8030409C
  c->r[3]=c->r[28]+0xFFFF817Cu; // 803040A0
  c->r[5]=c->r[29]+0xFFFF8158u; // 803040A4
  c->r[4]=0u+0x0000023Du; // 803040A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803040AC
  c->lr=0x803040B4u; f_802FA328(c); // 803040B0
L_803040B4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803040B4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803040B8
  c->r[4]=c->r[27]|c->r[27]; // 803040BC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803040C0
  c->ctr=c->r[12]; // 803040C4
  if (true) { c->lr=0x803040CCu; dispatch(c,c->ctr); } // 803040C8
  c->r[31]=R32(c->r[31]+0x00000000u); // 803040CC
L_803040D0:;
  cmpu(c,0,c->r[31],c->r[30]); // 803040D0
  if (!crb(c,2)) { IRQCHK(c); goto L_80304098; } // 803040D4
L_803040D8:;
  c->r[11]=c->r[1]+0x00000020u; // 803040D8
  c->lr=0x803040E0u; f_801E79A8(c); // 803040DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803040E0
  c->lr=c->r[0]; // 803040E4
  c->r[1]=c->r[1]+0x00000020u; // 803040E8
  return; // 803040EC
}

// fn_803040F0
void f_803040F0(Ctx* __restrict c) {
  trace_call(0x803040F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803040F0
  c->r[0]=c->lr; // 803040F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803040F8
  c->r[11]=c->r[1]+0x00000030u; // 803040FC
  c->lr=0x80304104u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80304100
  c->r[31]=R32(c->r[3]+0x00000020u); // 80304104
  c->r[25]=c->r[3]|c->r[3]; // 80304108
  c->r[26]=c->r[4]|c->r[4]; // 8030410C
  c->r[30]=c->r[3]+0x00000020u; // 80304110
  c->r[28]=0u+0x804D0000u; // 80304114
  c->r[29]=0u+0x804D0000u; // 80304118
  goto L_803041A4; // 8030411C
L_80304120:;
  cmps(c,0,(int32_t)c->r[31],0); // 80304120
  if (!crb(c,2)) { goto L_8030413C; } // 80304124
  c->r[3]=c->r[28]+0xFFFF8B84u; // 80304128
  c->r[5]=c->r[29]+0xFFFF8B60u; // 8030412C
  c->r[4]=0u+0x0000023Du; // 80304130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80304134
  c->lr=0x8030413Cu; f_802FA328(c); // 80304138
L_8030413C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8030413C
  cmps(c,0,(int32_t)c->r[0],0); // 80304140
  if (!crb(c,2)) { goto L_803041A0; } // 80304144
  cmps(c,0,(int32_t)c->r[31],0); // 80304148
  if (!crb(c,2)) { goto L_80304164; } // 8030414C
  c->r[3]=c->r[28]+0xFFFF8B84u; // 80304150
  c->r[5]=c->r[29]+0xFFFF8B60u; // 80304154
  c->r[4]=0u+0x0000023Du; // 80304158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030415C
  c->lr=0x80304164u; f_802FA328(c); // 80304160
L_80304164:;
  cmps(c,0,(int32_t)c->r[31],0); // 80304164
  c->r[27]=R32(c->r[31]+0x00000008u); // 80304168
  if (!crb(c,2)) { goto L_80304184; } // 8030416C
  c->r[3]=c->r[28]+0xFFFF8B84u; // 80304170
  c->r[5]=c->r[29]+0xFFFF8B60u; // 80304174
  c->r[4]=0u+0x0000023Du; // 80304178
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8030417C
  c->lr=0x80304184u; f_802FA328(c); // 80304180
L_80304184:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80304184
  c->r[3]=c->r[27]|c->r[27]; // 80304188
  c->r[5]=c->r[25]|c->r[25]; // 8030418C
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 80304190
  c->r[12]=R32(c->r[12]+0x00000018u); // 80304194
  c->ctr=c->r[12]; // 80304198
  if (true) { c->lr=0x803041A0u; dispatch(c,c->ctr); } // 8030419C
L_803041A0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803041A0
L_803041A4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803041A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80304120; } // 803041A8
  c->r[0]=R8(c->r[25]+0x000000CFu); // 803041AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803041B0
  if (!crb(c,2)) { goto L_803041C0; } // 803041B4
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 803041B8
  if (!crb(c,2)) { goto L_803041DC; } // 803041BC
L_803041C0:;
  c->r[3]=R32(c->r[25]+0x00000028u); // 803041C0
  cmps(c,0,(int32_t)c->r[3],0); // 803041C4
  if (crb(c,2)) { goto L_803041DC; } // 803041C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803041CC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803041D0
  c->ctr=c->r[12]; // 803041D4
  if (true) { c->lr=0x803041DCu; dispatch(c,c->ctr); } // 803041D8
L_803041DC:;
  c->r[11]=c->r[1]+0x00000030u; // 803041DC
  c->lr=0x803041E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803041E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803041E4
  c->lr=c->r[0]; // 803041E8
  c->r[1]=c->r[1]+0x00000030u; // 803041EC
  return; // 803041F0
}

// fn_803041F4
void f_803041F4(Ctx* __restrict c) {
  trace_call(0x803041F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803041F4
  c->r[0]=c->lr; // 803041F8
  cmps(c,0,(int32_t)c->r[4],0); // 803041FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80304200
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80304204
  c->r[31]=c->r[5]|c->r[5]; // 80304208
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030420C
  c->r[30]=c->r[4]|c->r[4]; // 80304210
  W32(c->r[1]+0x00000014u,c->r[29]); // 80304214
  c->r[29]=c->r[3]|c->r[3]; // 80304218
  if (!crb(c,2)) { goto L_8030423C; } // 8030421C
  c->r[3]=0u+0x804D0000u; // 80304220
  c->r[5]=0u+0x804D0000u; // 80304224
  c->r[3]=c->r[3]+0xFFFF9918u; // 80304228
  c->r[4]=0u+0x00000254u; // 8030422C
  c->r[5]=c->r[5]+0xFFFF9A50u; // 80304230
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80304234
  c->lr=0x8030423Cu; f_802FA328(c); // 80304238
L_8030423C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8030423C
  c->r[3]=c->r[30]|c->r[30]; // 80304240
  c->r[4]=c->r[29]|c->r[29]; // 80304244
  c->r[5]=c->r[31]|c->r[31]; // 80304248
  c->r[12]=R32(c->r[12]+0x00000010u); // 8030424C
  c->ctr=c->r[12]; // 80304250
  if (true) { c->lr=0x80304258u; dispatch(c,c->ctr); } // 80304254
  c->r[0]=R32(c->r[1]+0x00000024u); // 80304258
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030425C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80304260
  c->r[29]=R32(c->r[1]+0x00000014u); // 80304264
  c->lr=c->r[0]; // 80304268
  c->r[1]=c->r[1]+0x00000020u; // 8030426C
  return; // 80304270
}

// fn_80304274
void f_80304274(Ctx* __restrict c) {
  trace_call(0x80304274u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304274
  c->r[0]=c->lr; // 80304278
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030427C
  c->r[11]=c->r[1]+0x00000020u; // 80304280
  c->lr=0x80304288u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80304284
  c->r[12]=R32(c->r[3]+0x00000000u); // 80304288
  c->r[28]=c->r[3]|c->r[3]; // 8030428C
  c->r[26]=c->r[4]|c->r[4]; // 80304290
  c->r[27]=c->r[5]|c->r[5]; // 80304294
  c->r[12]=R32(c->r[12]+0x00000050u); // 80304298
  c->ctr=c->r[12]; // 8030429C
  if (true) { c->lr=0x803042A4u; dispatch(c,c->ctr); } // 803042A0
  cmps(c,0,(int32_t)c->r[27],0); // 803042A4
  if (crb(c,2)) { goto L_80304304; } // 803042A8
  c->r[31]=R32(c->r[28]+0x00000014u); // 803042AC
  c->r[30]=c->r[28]+0x00000014u; // 803042B0
  c->r[28]=0u+0x804D0000u; // 803042B4
  c->r[29]=0u+0x804D0000u; // 803042B8
  goto L_803042FC; // 803042BC
L_803042C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803042C0
  if (!crb(c,2)) { goto L_803042DC; } // 803042C4
  c->r[3]=c->r[28]+0xFFFF817Cu; // 803042C8
  c->r[5]=c->r[29]+0xFFFF8158u; // 803042CC
  c->r[4]=0u+0x0000023Du; // 803042D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803042D4
  c->lr=0x803042DCu; f_802FA328(c); // 803042D8
L_803042DC:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803042DC
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803042E0
  c->r[4]=c->r[26]|c->r[26]; // 803042E4
  c->r[5]=c->r[27]|c->r[27]; // 803042E8
  c->r[12]=R32(c->r[12]+0x00000048u); // 803042EC
  c->ctr=c->r[12]; // 803042F0
  if (true) { c->lr=0x803042F8u; dispatch(c,c->ctr); } // 803042F4
  c->r[31]=R32(c->r[31]+0x00000000u); // 803042F8
L_803042FC:;
  cmpu(c,0,c->r[31],c->r[30]); // 803042FC
  if (!crb(c,2)) { IRQCHK(c); goto L_803042C0; } // 80304300
L_80304304:;
  c->r[11]=c->r[1]+0x00000020u; // 80304304
  c->lr=0x8030430Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80304308
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030430C
  c->lr=c->r[0]; // 80304310
  c->r[1]=c->r[1]+0x00000020u; // 80304314
  return; // 80304318
}

// fn_8030431C
void f_8030431C(Ctx* __restrict c) {
  trace_call(0x8030431Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 8030431C
  c->r[5]=c->r[4]|c->r[4]; // 80304320
  c->r[4]=0u+0x00000000u; // 80304324
  c->r[12]=R32(c->r[12]+0x00000048u); // 80304328
  c->ctr=c->r[12]; // 8030432C
  if (true) { dispatch(c,c->ctr); return; } // 80304330
}

// fn_80304334
void f_80304334(Ctx* __restrict c) {
  trace_call(0x80304334u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304334
  c->r[0]=c->lr; // 80304338
  W32(c->r[1]+0x00000034u,c->r[0]); // 8030433C
  c->r[11]=c->r[1]+0x00000030u; // 80304340
  c->lr=0x80304348u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80304344
  c->r[0]=R32(c->r[3]+0x00000028u); // 80304348
  c->r[24]=c->r[3]|c->r[3]; // 8030434C
  c->r[25]=c->r[4]|c->r[4]; // 80304350
  cmps(c,0,(int32_t)c->r[0],0); // 80304354
  if (crb(c,2)) { goto L_80304370; } // 80304358
  c->r[3]=c->r[0]|c->r[0]; // 8030435C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80304360
  c->r[12]=R32(c->r[12]+0x00000014u); // 80304364
  c->ctr=c->r[12]; // 80304368
  if (true) { c->lr=0x80304370u; dispatch(c,c->ctr); } // 8030436C
L_80304370:;
  c->r[31]=R32(c->r[24]+0x00000020u); // 80304370
  c->r[30]=c->r[24]+0x00000020u; // 80304374
  c->r[27]=0u+0x804D0000u; // 80304378
  c->r[28]=0u+0x804D0000u; // 8030437C
  c->r[29]=0u+0x00000000u; // 80304380
  goto L_803043F4; // 80304384
L_80304388:;
  cmps(c,0,(int32_t)c->r[25],0); // 80304388
  c->r[26]=c->r[31]|c->r[31]; // 8030438C
  c->r[31]=R32(c->r[31]+0x00000000u); // 80304390
  if (crb(c,2)) { goto L_803043C0; } // 80304394
  cmps(c,0,(int32_t)c->r[26],0); // 80304398
  if (!crb(c,2)) { goto L_803043B4; } // 8030439C
  c->r[3]=c->r[27]+0xFFFF8B84u; // 803043A0
  c->r[5]=c->r[28]+0xFFFF8B60u; // 803043A4
  c->r[4]=0u+0x0000023Du; // 803043A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803043AC
  c->lr=0x803043B4u; f_802FA328(c); // 803043B0
L_803043B4:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 803043B4
  cmpu(c,0,c->r[0],c->r[25]); // 803043B8
  if (!crb(c,2)) { goto L_803043F4; } // 803043BC
L_803043C0:;
  W32(c->r[1]+0x00000008u,c->r[26]); // 803043C0
  c->r[3]=c->r[24]+0x0000001Cu; // 803043C4
  c->r[4]=c->r[1]+0x00000008u; // 803043C8
  c->lr=0x803043D0u; f_8032FA44(c); // 803043CC
  cmps(c,0,(int32_t)c->r[26],0); // 803043D0
  if (!crb(c,2)) { goto L_803043EC; } // 803043D4
  c->r[3]=c->r[27]+0xFFFF8B84u; // 803043D8
  c->r[5]=c->r[28]+0xFFFF8B60u; // 803043DC
  c->r[4]=0u+0x0000023Du; // 803043E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803043E4
  c->lr=0x803043ECu; f_802FA328(c); // 803043E8
L_803043EC:;
  W32(c->r[26]+0x00000008u,c->r[29]); // 803043EC
  W16(c->r[26]+0x0000000Cu,c->r[29]); // 803043F0
L_803043F4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803043F4
  if (!crb(c,2)) { IRQCHK(c); goto L_80304388; } // 803043F8
  c->r[11]=c->r[1]+0x00000030u; // 803043FC
  c->lr=0x80304404u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80304400
  c->r[0]=R32(c->r[1]+0x00000034u); // 80304404
  c->lr=c->r[0]; // 80304408
  c->r[1]=c->r[1]+0x00000030u; // 8030440C
  return; // 80304410
}

// fn_80304414
void f_80304414(Ctx* __restrict c) {
  trace_call(0x80304414u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304414
  c->r[0]=c->lr; // 80304418
  cmps(c,0,(int32_t)c->r[4],0); // 8030441C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80304420
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80304424
  W32(c->r[1]+0x00000018u,c->r[30]); // 80304428
  c->r[30]=c->r[4]|c->r[4]; // 8030442C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80304430
  c->r[29]=c->r[3]|c->r[3]; // 80304434
  if (!crb(c,2)) { goto L_80304458; } // 80304438
  c->r[3]=0u+0x804D0000u; // 8030443C
  c->r[5]=0u+0x804D0000u; // 80304440
  c->r[3]=c->r[3]+0xFFFF9918u; // 80304444
  c->r[4]=0u+0x00000289u; // 80304448
  c->r[5]=c->r[5]+0xFFFF9A80u; // 8030444C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80304450
  c->lr=0x80304458u; f_802FA328(c); // 80304454
L_80304458:;
  cmps(c,0,(int32_t)c->r[30],0); // 80304458
  c->r[31]=c->r[29]+0x00000020u; // 8030445C
  if (!crb(c,2)) { goto L_80304480; } // 80304460
  c->r[3]=0u+0x804D0000u; // 80304464
  c->r[5]=0u+0x804D0000u; // 80304468
  c->r[3]=c->r[3]+0xFFFF98DCu; // 8030446C
  c->r[4]=0u+0x00000233u; // 80304470
  c->r[5]=c->r[5]+0xFFFF98B8u; // 80304474
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80304478
  c->lr=0x80304480u; f_802FA328(c); // 8030447C
L_80304480:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 80304480
  c->r[5]=c->r[30]|c->r[30]; // 80304484
  c->r[3]=c->r[29]+0x0000001Cu; // 80304488
  c->r[4]=c->r[1]+0x00000008u; // 8030448C
  c->lr=0x80304494u; f_8032FC8C(c); // 80304490
  c->r[0]=R32(c->r[1]+0x00000024u); // 80304494
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80304498
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030449C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803044A0
  c->lr=c->r[0]; // 803044A4
  c->r[1]=c->r[1]+0x00000020u; // 803044A8
  return; // 803044AC
}

// FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform
void f_803044B0(Ctx* __restrict c) {
  trace_call(0x803044B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803044B0
  c->r[0]=c->lr; // 803044B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803044B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803044BC
  c->r[31]=c->r[4]|c->r[4]; // 803044C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803044C4
  c->r[30]=c->r[3]|c->r[3]; // 803044C8
  c->r[3]=c->r[3]+0x0000001Cu; // 803044CC
  c->lr=0x803044D4u; f_802FD0B0(c); // 803044D0
  cmps(c,0,(int32_t)c->r[3],0); // 803044D4
  if (crb(c,2)) { goto L_803044E0; } // 803044D8
  goto L_80304510; // 803044DC
L_803044E0:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 803044E0
  cmps(c,0,(int32_t)c->r[3],0); // 803044E4
  if (crb(c,2)) { goto L_8030450C; } // 803044E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803044EC
  c->r[4]=c->r[31]|c->r[31]; // 803044F0
  c->r[12]=R32(c->r[12]+0x00000020u); // 803044F4
  c->ctr=c->r[12]; // 803044F8
  if (true) { c->lr=0x80304500u; dispatch(c,c->ctr); } // 803044FC
  cmps(c,0,(int32_t)c->r[3],0); // 80304500
  if (crb(c,2)) { goto L_8030450C; } // 80304504
  goto L_80304510; // 80304508
L_8030450C:;
  c->r[3]=0u+0x00000000u; // 8030450C
L_80304510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80304510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80304514
  c->r[30]=R32(c->r[1]+0x00000008u); // 80304518
  c->lr=c->r[0]; // 8030451C
  c->r[1]=c->r[1]+0x00000010u; // 80304520
  return; // 80304524
}

// fn_80304528
void f_80304528(Ctx* __restrict c) {
  trace_call(0x80304528u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304528
  c->r[0]=c->lr; // 8030452C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80304530
  c->r[11]=c->r[1]+0x00000030u; // 80304534
  c->lr=0x8030453Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80304538
  c->r[28]=c->r[3]|c->r[3]; // 8030453C
  c->r[25]=c->r[4]|c->r[4]; // 80304540
  c->r[26]=c->r[5]|c->r[5]; // 80304544
  c->r[27]=c->r[6]|c->r[6]; // 80304548
  c->r[3]=c->r[3]+0x0000001Cu; // 8030454C
  c->lr=0x80304554u; f_802FD0B0(c); // 80304550
  cmps(c,0,(int32_t)c->r[3],0); // 80304554
  if (crb(c,2)) { goto L_80304568; } // 80304558
  c->r[0]=cntlz(c->r[26]); // 8030455C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80304560
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80304564
L_80304568:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 80304568
  cmps(c,0,(int32_t)c->r[3],0); // 8030456C
  if (crb(c,2)) { goto L_8030458C; } // 80304570
  c->r[12]=R32(c->r[3]+0x00000000u); // 80304574
  c->r[4]=c->r[25]|c->r[25]; // 80304578
  c->r[5]=c->r[26]|c->r[26]; // 8030457C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80304580
  c->ctr=c->r[12]; // 80304584
  if (true) { c->lr=0x8030458Cu; dispatch(c,c->ctr); } // 80304588
L_8030458C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8030458C
  if (crb(c,2)) { goto L_803045F0; } // 80304590
  c->r[31]=R32(c->r[28]+0x00000014u); // 80304594
  c->r[30]=c->r[28]+0x00000014u; // 80304598
  c->r[28]=0u+0x804D0000u; // 8030459C
  c->r[29]=0u+0x804D0000u; // 803045A0
  goto L_803045E8; // 803045A4
L_803045A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 803045A8
  if (!crb(c,2)) { goto L_803045C4; } // 803045AC
  c->r[3]=c->r[28]+0xFFFF817Cu; // 803045B0
  c->r[5]=c->r[29]+0xFFFF8158u; // 803045B4
  c->r[4]=0u+0x0000023Du; // 803045B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803045BC
  c->lr=0x803045C4u; f_802FA328(c); // 803045C0
L_803045C4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803045C4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803045C8
  c->r[4]=c->r[25]|c->r[25]; // 803045CC
  c->r[5]=c->r[26]|c->r[26]; // 803045D0
  c->r[12]=R32(c->r[12]+0x00000058u); // 803045D4
  c->r[6]=c->r[27]|c->r[27]; // 803045D8
  c->ctr=c->r[12]; // 803045DC
  if (true) { c->lr=0x803045E4u; dispatch(c,c->ctr); } // 803045E0
  c->r[31]=R32(c->r[31]+0x00000000u); // 803045E4
L_803045E8:;
  cmpu(c,0,c->r[31],c->r[30]); // 803045E8
  if (!crb(c,2)) { IRQCHK(c); goto L_803045A8; } // 803045EC
L_803045F0:;
  c->r[11]=c->r[1]+0x00000030u; // 803045F0
  c->lr=0x803045F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803045F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803045F8
  c->lr=c->r[0]; // 803045FC
  c->r[1]=c->r[1]+0x00000030u; // 80304600
  return; // 80304604
}

// fn_80304608
void f_80304608(Ctx* __restrict c) {
  trace_call(0x80304608u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304608
  c->r[0]=c->lr; // 8030460C
  c->r[5]=c->r[3]|c->r[3]; // 80304610
  W32(c->r[1]+0x00000044u,c->r[0]); // 80304614
  c->r[0]=R8(c->r[4]+0x00000050u); // 80304618
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8030461C
  c->r[31]=c->r[4]|c->r[4]; // 80304620
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80304624
  if (crb(c,2)) { goto L_80304688; } // 80304628
  c->r[3]=c->r[4]+0x00000004u; // 8030462C
  c->r[4]=c->r[5]+0x00000084u; // 80304630
  c->r[5]=c->r[1]+0x00000008u; // 80304634
  c->lr=0x8030463Cu; f_801C5A7C(c); // 80304638
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8030463C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80304640
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80304644
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80304648
  fcmp(c,0,c->f[1],c->f[0]); // 8030464C
  c->r[0]=c->cr; // 80304650
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80304654
  if (crb(c,2)) { goto L_80304680; } // 80304658
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8030465C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80304660
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80304664
  c->f[2]=-c->f[2]; // 80304668
  c->f[1]=-c->f[1]; // 8030466C
  c->f[0]=-c->f[0]; // 80304670
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80304674
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80304678
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8030467C
L_80304680:;
  c->r[3]=c->r[1]+0x00000008u; // 80304680
  goto L_803046E4; // 80304684
L_80304688:;
  {uint32_t ea=c->r[4]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 80304688
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8030468C
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80304690
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80304694
  fcmp(c,0,c->f[1],c->f[0]); // 80304698
  c->r[0]=c->cr; // 8030469C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803046A0
  if (crb(c,2)) { goto L_803046E0; } // 803046A4
  c->r[3]=c->r[3]+0x00000084u; // 803046A8
  c->r[4]=c->r[1]+0x00000008u; // 803046AC
  c->lr=0x803046B4u; f_801C5A48(c); // 803046B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803046B4
  c->r[3]=c->r[1]+0x00000008u; // 803046B8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803046BC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803046C0
  c->f[2]=-c->f[2]; // 803046C4
  c->f[1]=-c->f[1]; // 803046C8
  c->f[0]=-c->f[0]; // 803046CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803046D0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803046D4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803046D8
  goto L_803046E4; // 803046DC
L_803046E0:;
  c->r[3]=c->r[3]+0x00000084u; // 803046E0
L_803046E4:;
  c->r[4]=0u+0x00000000u; // 803046E4
  c->lr=0x803046ECu; f_801E6204(c); // 803046E8
  c->r[3]=0u+0x00000000u; // 803046EC
  c->lr=0x803046F4u; f_801E62AC(c); // 803046F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803046F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803046F8
  c->lr=c->r[0]; // 803046FC
  c->r[1]=c->r[1]+0x00000040u; // 80304700
  return; // 80304704
}

// fn_80304708
void f_80304708(Ctx* __restrict c) {
  trace_call(0x80304708u);
  c->r[4]=0u+0x55550000u; // 80304708
  c->r[5]=R8(c->r[3]+0x000000CCu); // 8030470C
  c->r[0]=c->r[4]+0x00005556u; // 80304710
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304714
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80304718
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8030471C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80304720
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80304724
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80304728
  c->r[0]=c->r[4]+c->r[0]; // 8030472C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80304730
  c->r[0]=c->r[5]-c->r[0]; // 80304734
  cmps(c,0,(int32_t)c->r[0],1); // 80304738
  if (crb(c,2)) { goto L_80304760; } // 8030473C
  if (!crb(c,0)) { goto L_80304748; } // 80304740
  goto L_80304754; // 80304744
L_80304748:;
  cmps(c,0,(int32_t)c->r[0],3); // 80304748
  if (!crb(c,0)) { goto L_80304754; } // 8030474C
  goto L_80304778; // 80304750
L_80304754:;
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 80304754
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80304758
  goto L_80304784; // 8030475C
L_80304760:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80304760
  {uint32_t ea=c->r[2]+0xFFFFD0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80304764
  c->f[1]=-c->f[1]; // 80304768
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8030476C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80304770
  goto L_80304784; // 80304774
L_80304778:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80304778
  c->f[0]=-c->f[0]; // 8030477C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80304780
L_80304784:;
  c->r[4]=0u+0x55550000u; // 80304784
  c->r[0]=c->r[4]+0x00005556u; // 80304788
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8030478C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80304790
  c->r[0]=c->r[4]+c->r[0]; // 80304794
  cmps(c,0,(int32_t)c->r[0],1); // 80304798
  if (crb(c,2)) { goto L_803047C0; } // 8030479C
  if (!crb(c,0)) { goto L_803047A8; } // 803047A0
  goto L_803047B4; // 803047A4
L_803047A8:;
  cmps(c,0,(int32_t)c->r[0],3); // 803047A8
  if (!crb(c,0)) { goto L_803047B4; } // 803047AC
  goto L_803047D8; // 803047B0
L_803047B4:;
  {uint32_t ea=c->r[2]+0xFFFFD090u; c->f[0]=c->ps1[0]=RF32(ea);} // 803047B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803047B8
  goto L_803047E4; // 803047BC
L_803047C0:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803047C0
  {uint32_t ea=c->r[2]+0xFFFFD0A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803047C4
  c->f[1]=-c->f[1]; // 803047C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803047CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803047D0
  goto L_803047E4; // 803047D4
L_803047D8:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803047D8
  c->f[0]=-c->f[0]; // 803047DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803047E0
L_803047E4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 803047E4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803047E8
  c->r[1]=c->r[1]+0x00000010u; // 803047EC
  return; // 803047F0
}

// fn_803047F4
void f_803047F4(Ctx* __restrict c) {
  trace_call(0x803047F4u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 803047F4
  return; // 803047F8
}

// fn_803047FC
void f_803047FC(Ctx* __restrict c) {
  trace_call(0x803047FCu);
  c->r[0]=0u+0x00000000u; // 803047FC
  W32(c->r[13]+0xFFFFA5F8u,c->r[0]); // 80304800
  return; // 80304804
}

// fn_80304808
void f_80304808(Ctx* __restrict c) {
  trace_call(0x80304808u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304808
  c->r[0]=c->lr; // 8030480C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80304810
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80304814
  c->r[31]=c->r[3]|c->r[3]; // 80304818
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030481C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80304820
  c->r[29]=c->r[5]|c->r[5]; // 80304824
  W32(c->r[1]+0x00000010u,c->r[28]); // 80304828
  c->r[28]=c->r[4]|c->r[4]; // 8030482C
  c->lr=0x80304834u; f_803034F0(c); // 80304830
  c->r[3]=0u+0x804D0000u; // 80304834
  c->r[4]=0u+0x80300000u; // 80304838
  c->r[3]=c->r[3]+0xFFFF9D90u; // 8030483C
  c->r[5]=0u+0x80300000u; // 80304840
  W32(c->r[31]+0x00000000u,c->r[3]); // 80304844
  c->r[3]=c->r[31]+0x000000D4u; // 80304848
  c->r[4]=c->r[4]+0x00000084u; // 8030484C
  c->r[5]=c->r[5]+0xFFFFAEECu; // 80304850
  c->r[6]=0u+0x00000004u; // 80304854
  c->r[7]=0u+0x00000004u; // 80304858
  c->lr=0x80304860u; f_801E73B8(c); // 8030485C
  c->r[3]=c->r[31]+0x000000E4u; // 80304860
  c->lr=0x80304868u; f_802FDA90(c); // 80304864
  c->r[0]=R8(c->r[28]+0x0000005Eu); // 80304868
  c->r[30]=0u+0x00000008u; // 8030486C
  cmpu(c,0,c->r[0],0x00000008u); // 80304870
  if (crb(c,1)) { goto L_8030487C; } // 80304874
  c->r[30]=c->r[0]|c->r[0]; // 80304878
L_8030487C:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[4]); // 8030487C
  if (crb(c,2)) { goto L_8030488C; } // 80304880
  c->r[3]=c->r[31]+0x000000E4u; // 80304884
  c->lr=0x8030488Cu; f_802FDAF0(c); // 80304888
L_8030488C:;
  c->r[6]=R32(c->r[28]+0x0000004Cu); // 8030488C
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[5]); // 80304890
  c->r[4]=R32(c->r[28]+0x00000050u); // 80304894
  c->r[3]=R32(c->r[28]+0x00000054u); // 80304898
  c->r[0]=R32(c->r[28]+0x00000058u); // 8030489C
  W32(c->r[31]+0x000000D4u,c->r[6]); // 803048A0
  W32(c->r[31]+0x000000D8u,c->r[4]); // 803048A4
  W32(c->r[31]+0x000000DCu,c->r[3]); // 803048A8
  W32(c->r[31]+0x000000E0u,c->r[0]); // 803048AC
  if (crb(c,2)) { goto L_803048CC; } // 803048B0
  c->r[0]=R8(c->r[31]+0x000000E4u); // 803048B4
  cmps(c,0,(int32_t)c->r[0],0); // 803048B8
  if (crb(c,2)) { goto L_803048CC; } // 803048BC
  c->r[3]=c->r[31]+0x000000E4u; // 803048C0
  c->r[4]=c->r[28]+0x00000060u; // 803048C4
  c->lr=0x803048CCu; f_802FDC80(c); // 803048C8
L_803048CC:;
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 803048CC
  c->r[4]=0u+0x0000005Cu; // 803048D0
  c->lr=0x803048D8u; f_80201D90(c); // 803048D4
  cmps(c,0,(int32_t)c->r[3],0); // 803048D8
  c->r[30]=c->r[3]|c->r[3]; // 803048DC
  if (crb(c,2)) { goto L_80304940; } // 803048E0
  c->r[0]=R32(c->r[29]+0x00000008u); // 803048E4
  cmps(c,0,(int32_t)c->r[0],0); // 803048E8
  if (!crb(c,2)) { goto L_8030490C; } // 803048EC
  c->r[3]=0u+0x804D0000u; // 803048F0
  c->r[5]=0u+0x804D0000u; // 803048F4
  c->r[3]=c->r[3]+0xFFFF9CA8u; // 803048F8
  c->r[4]=0u+0x00000095u; // 803048FC
  c->r[5]=c->r[5]+0xFFFF9CB8u; // 80304900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80304904
  c->lr=0x8030490Cu; f_802FA328(c); // 80304908
L_8030490C:;
  c->r[0]=R16(c->r[28]+0x0000005Cu); // 8030490C
  cmps(c,0,(int32_t)c->r[30],0); // 80304910
  c->r[4]=R32(c->r[29]+0x00000008u); // 80304914
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80304918
  c->r[3]=c->r[4]+c->r[0]; // 8030491C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80304920
  c->r[4]=c->r[4]+c->r[0]; // 80304924
  if (crb(c,2)) { goto L_8030493C; } // 80304928
  c->r[3]=c->r[30]|c->r[30]; // 8030492C
  c->r[5]=c->r[29]|c->r[29]; // 80304930
  c->lr=0x80304938u; f_803000B0(c); // 80304934
  c->r[30]=c->r[3]|c->r[3]; // 80304938
L_8030493C:;
  W32(c->r[31]+0x00000028u,c->r[30]); // 8030493C
L_80304940:;
  c->r[3]=c->r[31]|c->r[31]; // 80304940
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80304944
  c->r[30]=R32(c->r[1]+0x00000018u); // 80304948
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030494C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80304950
  c->r[0]=R32(c->r[1]+0x00000024u); // 80304954
  c->lr=c->r[0]; // 80304958
  c->r[1]=c->r[1]+0x00000020u; // 8030495C
  return; // 80304960
}

// fn_80304964
void f_80304964(Ctx* __restrict c) {
  trace_call(0x80304964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80304964
  c->r[0]=c->lr; // 80304968
  cmps(c,0,(int32_t)c->r[3],0); // 8030496C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80304970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80304974
  c->r[31]=c->r[4]|c->r[4]; // 80304978
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030497C
  c->r[30]=c->r[3]|c->r[3]; // 80304980
  if (crb(c,2)) { goto L_80304A14; } // 80304984
  c->r[5]=R32(c->r[3]+0x00000028u); // 80304988
  c->r[4]=0u+0x804D0000u; // 8030498C
  c->r[4]=c->r[4]+0xFFFF9D90u; // 80304990
  cmps(c,0,(int32_t)c->r[5],0); // 80304994
  W32(c->r[3]+0x00000000u,c->r[4]); // 80304998
  if (crb(c,2)) { goto L_803049D8; } // 8030499C
  c->r[0]=R8(c->r[5]+0x00000054u); // 803049A0
  cmps(c,0,(int32_t)c->r[0],0); // 803049A4
  if (!crb(c,2)) { goto L_803049D8; } // 803049A8
  c->r[12]=R32(c->r[5]+0x00000000u); // 803049AC
  c->r[3]=c->r[5]|c->r[5]; // 803049B0
  c->r[4]=0u+0xFFFFFFFFu; // 803049B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803049B8
  c->ctr=c->r[12]; // 803049BC
  if (true) { c->lr=0x803049C4u; dispatch(c,c->ctr); } // 803049C0
  c->r[3]=R32(c->r[13]+0xFFFFA5F0u); // 803049C4
  c->r[4]=R32(c->r[30]+0x00000028u); // 803049C8
  c->lr=0x803049D0u; f_80201DA0(c); // 803049CC
  c->r[0]=0u+0x00000000u; // 803049D0
  W32(c->r[30]+0x00000028u,c->r[0]); // 803049D4
L_803049D8:;
  c->r[3]=c->r[30]+0x000000E4u; // 803049D8
  c->lr=0x803049E0u; f_802FDAA4(c); // 803049DC
  c->r[4]=0u+0x80300000u; // 803049E0
  c->r[3]=c->r[30]+0x000000D4u; // 803049E4
  c->r[4]=c->r[4]+0xFFFFAEECu; // 803049E8
  c->r[5]=0u+0x00000004u; // 803049EC
  c->r[6]=0u+0x00000004u; // 803049F0
  c->lr=0x803049F8u; f_801E74B0(c); // 803049F4
  c->r[3]=c->r[30]|c->r[30]; // 803049F8
  c->r[4]=0u+0x00000000u; // 803049FC
  c->lr=0x80304A04u; f_80303614(c); // 80304A00
  cmps(c,0,(int32_t)c->r[31],0); // 80304A04
  if (!crb(c,1)) { goto L_80304A14; } // 80304A08
  c->r[3]=c->r[30]|c->r[30]; // 80304A0C
  c->lr=0x80304A14u; f_8001AAC0(c); // 80304A10
L_80304A14:;
  c->r[3]=c->r[30]|c->r[30]; // 80304A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80304A18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80304A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80304A20
  c->lr=c->r[0]; // 80304A24
  c->r[1]=c->r[1]+0x00000010u; // 80304A28
  return; // 80304A2C
}

