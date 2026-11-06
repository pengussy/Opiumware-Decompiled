/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x6f648:9dfc118640
 */

undefined8 FUN_0006f648(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_38;
  char *pcStack_30;
  char *pcStack_28;
  
  func_0x007a1f70(param_1,1);
  iVar1 = func_0x00791be4(param_1,1);
  if (((iVar1 != 8) && (iVar1 = func_0x00791be4(param_1,1), iVar1 != 3)) &&
     (iVar1 = func_0x00791be4(param_1,1), iVar1 != 4)) goto LAB_0006f9d4;
  iVar1 = func_0x007a2070(param_1,2);
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 8) {
    puVar4 = (undefined8 *)func_0x00790f58(param_1,1);
  }
  else {
    uVar3 = func_0x007f4d48(param_1,1);
    if ((uint)((int)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x18)) >> 4) *
              -0x55555555) <= uVar3) {
      pbVar5 = (byte *)(*pcRam00000000020639f0)();
      if ((*pbVar5 & 1) == 0) goto LAB_0006fb18;
      goto LAB_0006f764;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar3 * -0x30 + 8);
    if (*(int *)((long)puVar4 + 0xc) != 8) {
      do {
        pbVar5 = (byte *)(*pcRam0000000002063a20)();
// WM - proprietary - see LICENSE - do not sell
        if ((*pbVar5 & 1) == 0) {
          func_0x019bcc18();
        }
        pcStack_38 = (char *)(*pcRam0000000002063a08)();
        if (*pcStack_38 == '\x01') {
          lVar7 = 0;
          uVar8 = 0xfe6babac6d1e4705;
          do {
            uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar3 = (uint)(byte)pcStack_38[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar10 >> 0x17) ^
                    ((uint)(uVar9 >> 0x29) | 1);
            pcStack_38[lVar7 + 0x24] =
                 ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar10;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            uVar8 = lVar7 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_38[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x23);
          *pcStack_38 = '\0';
        }
        pcStack_38 = pcStack_38 + 0x24;
        uVar6 = func_0x0011ab24(&pcStack_38);
        func_0x007a1abc(param_1,1,uVar6);
LAB_0006f9d4:
        pbVar5 = (byte *)(*pcRam00000000020639c0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019bcba0();
        }
        pcStack_28 = (char *)(*pcRam00000000020639a8)();
        if (*pcStack_28 == '\x01') {
          lVar7 = 0;
          uVar8 = 0x1521dcab31c9c68d;
          do {
            uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar3 = (uint)(byte)pcStack_28[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) -
                    (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
            pcStack_28[lVar7 + 0x14] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') ^ (byte)uVar10;
            uVar8 = lVar7 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_28[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x13);
          *pcStack_28 = '\0';
        }
        pcStack_28 = pcStack_28 + 0x14;
        uVar6 = func_0x0011ab24(&pcStack_28);
        func_0x007a1ba8(param_1,1,uVar6);
LAB_0006fb18:
        func_0x019bcbdc();
LAB_0006f764:
/* no support for modified copies - github.com/pengussy */
        pcStack_30 = (char *)(*pcRam00000000020639d8)();
        if (*pcStack_30 == '\x01') {
          lVar7 = 0;
          uVar8 = 0xd1afc2e1fd066c1d;
          do {
            uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar3 = (uint)(byte)pcStack_30[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar10 >> 0x17);
            pcStack_30[lVar7 + 0x14] =
                 ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
                 (byte)uVar10;
            uVar8 = lVar7 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_30[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x13);
          *pcStack_30 = '\0';
        }
        pcStack_30 = pcStack_30 + 0x14;
        uVar6 = func_0x0011ab24(&pcStack_30);
        func_0x007a1abc(param_1,1,uVar6);
      } while( true );
    }
  }
  func_0x0080dc58(param_1,*puVar4,iVar1 != 0);
  return 0;
}

