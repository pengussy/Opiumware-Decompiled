/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x706b0:ad5f48263b
 *  --------------------------------------------------------------------------*/

void FUN_000706b0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  char *pcStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar13 = (uint)bVar1;
  lStack_40 = param_2;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar3 = func_0x001393dc(0x20970e8,&lStack_40);
  if (((lVar3 != 0) && (*(char *)(*(long *)(lVar3 + 0x18) + 3) != '\0')) &&
     (bVar2 = *(byte *)(*(long *)(lVar3 + 0x18) + 4), bVar1 <= bVar2)) {
    uVar13 = (uint)bVar2;
  }
/* wm:proprietary - see LICENSE - do not sell */
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (uVar13 < *(byte *)(param_3 + 4)) {
    pbVar5 = (byte *)(*pcRam0000000002063a50)();
    if ((*pbVar5 & 1) == 0) goto LAB_000709f4;
    do {
      pcStack_48 = (char *)(*pcRam0000000002063a38)();
      if (*pcStack_48 == '\x01') {
        lVar3 = 0;
        uVar10 = 0x213cdb366ed5359f;
        do {
          uVar7 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar7 ^ uVar7 >> 0x21;
          uVar13 = (uint)(byte)pcStack_48[lVar3 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar13 = (uVar13 >> 4 & 0xf | uVar13 << 4) - (int)(uVar12 >> 0x17) ^
                   ((uint)(uVar7 >> 0x29) | 1);
          pcStack_48[lVar3 + 0x2d] =
               ((byte)(uVar13 >> 4) & 0xf | (byte)(uVar13 << 4)) - (char)uVar12;
          uVar10 = lVar3 + -0x61c8864680b583eb +
                   (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_48[lVar3 + 1]) << 0x11);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x2c);
        *pcStack_48 = '\0';
      }
      pcStack_48 = pcStack_48 + 0x2d;
      func_0x0011ab24(&pcStack_48);
      func_0x007a1b5c(param_1,"%s");
LAB_000709f4:
      func_0x019bcc54();
    } while( true );
  }
  if (((*(char *)(param_3 + 3) == '\0') || (*(code **)(param_3 + 0x18) != FUN_0007dfd8)) ||
     (puVar4 = (undefined8 *)
               func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
     *(int *)((long)puVar4 + 0xc) != 7)) {
LAB_00070794:
    uVar6 = 0;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  }
  else {
    uStack_34 = 8;
    lStack_40 = param_3;
    puVar4 = (undefined8 *)func_0x00884ab4(*puVar4,&lStack_40);
    if (*(int *)((long)puVar4 + 0xc) != 8) goto LAB_00070794;
    uVar6 = *puVar4;
  }
  FUN_00070a14(param_1,param_2,uVar6);
  *(undefined **)(param_2 + 0x18) = &DAT_00130228;
  if (*(char *)(param_3 + 4) == '\0') {
    uVar10 = 0;
    if (uVar13 == 0) goto LAB_0007085c;
  }
  else {
    uVar7 = 0;
    puVar4 = (undefined8 *)(param_3 + 0x30);
    puVar8 = (undefined8 *)(param_2 + 0x30);
/* wm:more drops soon - github.com/pengussy */
    do {
      uVar6 = *puVar4;
      puVar8[1] = puVar4[1];
      *puVar8 = uVar6;
      uVar7 = uVar7 + 1;
      uVar10 = (ulong)*(byte *)(param_3 + 4);
      puVar4 = puVar4 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar7 < uVar10);
    if (uVar13 <= *(byte *)(param_3 + 4)) goto LAB_0007085c;
  }
  uVar7 = uVar13 - uVar10;
  if (uVar7 < 4) {
    uVar12 = uVar10;
  }
  else {
    uVar11 = uVar7 & 0xfffffffffffffffc;
    uVar12 = uVar11 + uVar10;
    puVar9 = (undefined4 *)(param_2 + uVar10 * 0x10 + 0x6c);
    uVar10 = uVar11;
    do {
      puVar9[-0xc] = 0;
      puVar9[-8] = 0;
      puVar9[-4] = 0;
      *puVar9 = 0;
      uVar10 = uVar10 - 4;
      puVar9 = puVar9 + 0x10;
    } while (uVar10 != 0);
    if (uVar7 == uVar11) goto LAB_0007085c;
  }
  lVar3 = uVar13 - uVar12;
  puVar9 = (undefined4 *)(param_2 + uVar12 * 0x10 + 0x3c);
  do {
    *puVar9 = 0;
// more drops soon - github.com/pengussy
    lVar3 = lVar3 + -1;
    puVar9 = puVar9 + 4;
  } while (lVar3 != 0);
LAB_0007085c:
  uVar10 = *(ulong *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_3 + 5);
  *(char *)(param_2 + 4) = (char)uVar13;
  *(ulong *)(param_2 + 0x20) = (ulong)(param_3 + 0x20) ^ param_2 + 0x20U ^ uVar10;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  func_0x0007102c(param_1,param_2);
  return;
}

