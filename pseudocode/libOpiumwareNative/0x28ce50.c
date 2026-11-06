/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28ce50:64deb6d8e1
 */

undefined1 *
FUN_0028ce50(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char acStack_80 [8];
  char acStack_78 [6];
  char acStack_72 [2];
  char acStack_70 [6];
  short sStack_6a;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x28);
  *puVar3 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x20);
  *puVar2 = puVar3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
/*  found on a paste site? it was re-uploaded illegally  */
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_4);
  if (puVar2 != param_5) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar2 = (undefined8 *)func_0x00173020(puVar2,param_5[1],puVar2);
      *puVar3 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[2] = puVar3;
        goto LAB_0028cf0c;
      }
    }
    else {
      *puVar3 = puVar2;
      for (puVar2 = (undefined8 *)func_0x002893f4(puVar2,*puVar3,param_5[1],puVar2);
          puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
LAB_0028cf0c:
        puVar3 = puVar2;
      }
    }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    *(undefined8 *)(param_1 + 0x30) = param_5[2];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x38,param_6);
  acStack_78[0] = s_Sec_WebSocket_Protocol_01c2da97[8];
  acStack_78[1] = s_Sec_WebSocket_Protocol_01c2da97[9];
  acStack_78[2] = s_Sec_WebSocket_Protocol_01c2da97[10];
  acStack_78[3] = s_Sec_WebSocket_Protocol_01c2da97[0xb];
  acStack_78[4] = s_Sec_WebSocket_Protocol_01c2da97[0xc];
  acStack_78[5] = s_Sec_WebSocket_Protocol_01c2da97[0xd];
  acStack_80[0] = s_Sec_WebSocket_Protocol_01c2da97[0];
  acStack_80[1] = s_Sec_WebSocket_Protocol_01c2da97[1];
  acStack_80[2] = s_Sec_WebSocket_Protocol_01c2da97[2];
  acStack_80[3] = s_Sec_WebSocket_Protocol_01c2da97[3];
  acStack_80[4] = s_Sec_WebSocket_Protocol_01c2da97[4];
  acStack_80[5] = s_Sec_WebSocket_Protocol_01c2da97[5];
  acStack_80[6] = s_Sec_WebSocket_Protocol_01c2da97[6];
  acStack_80[7] = s_Sec_WebSocket_Protocol_01c2da97[7];
// WM - unlicensed copy if this notice is missing
  acStack_72[0] = s_Sec_WebSocket_Protocol_01c2da97[0xe];
  acStack_72[1] = s_Sec_WebSocket_Protocol_01c2da97[0xf];
  acStack_70[0] = s_Sec_WebSocket_Protocol_01c2da97[0x10];
  acStack_70[1] = s_Sec_WebSocket_Protocol_01c2da97[0x11];
  acStack_70[2] = s_Sec_WebSocket_Protocol_01c2da97[0x12];
  acStack_70[3] = s_Sec_WebSocket_Protocol_01c2da97[0x13];
  acStack_70[4] = s_Sec_WebSocket_Protocol_01c2da97[0x14];
  acStack_70[5] = s_Sec_WebSocket_Protocol_01c2da97[0x15];
  sStack_6a = 0x1600;
  puStack_58 = acStack_80;
  lVar1 = func_0x0016c624(param_5,param_5,&UNK_01adc20c,&puStack_58,&uStack_59);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x50,lVar1 + 0x38);
  if (sStack_6a < 0) {
    __ZdlPv(acStack_80);
  }
  return param_1;
}

