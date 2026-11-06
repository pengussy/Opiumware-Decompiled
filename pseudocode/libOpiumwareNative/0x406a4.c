/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x406a4:209a18fb45
 */

undefined8 FUN_000406a4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  if (pcRam0000000002097158 == (code *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_00041ee0:
    uVar7 = (*pcRam0000000002097158)(param_1);
  }
  else {
    if ((lRam0000000002097088 == 0) ||
       (lVar3 = func_0x0013b76c(0x2097070,param_1 + 0x80), lVar3 == 0)) {
LAB_00041018:
                    /* WARNING: Could not recover jumptable at 0x00041034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000002097158)(param_1);
      return uVar7;
    }
    lVar3 = *(long *)(param_1 + 0x68);
    pcVar13 = (char *)(lVar3 + 0x18);
    if (*pcVar13 == '\0') goto LAB_00041018;
    pcStack_70 = pcVar13;
    uStack_68 = _strlen(pcVar13);
    if (((bRam0000000002097055 & 1) == 0) &&
       (lVar4 = func_0x0016dd78(0x20929d0,&pcStack_70), lVar4 != 0)) {
      pbVar5 = (byte *)(*pcRam0000000002062670)();
      if ((*pbVar5 & 1) == 0) goto LAB_00042198;
      goto LAB_00041f64;
    }
    pbVar5 = (byte *)(*pcRam00000000020626a0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x0199652c();
    }
    unaff_x23 = -0xae502812aa7333;
    unaff_x24 = -0x3b314601e57a13ad;
    unaff_x25 = -0x61c8864680b583eb;
    unaff_x27 = 0x8ebc6af09c88c6e3;
    pcStack_80 = (char *)(*pcRam0000000002062688)();
    if (*pcStack_80 == '\x01') {
      uVar1 = (byte)pcStack_80[1] ^ 0xb40f4bad;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xada34169;
      pcStack_80[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x69 ^ 0x6e;
      uVar10 = (((ulong)(byte)pcStack_80[1] ^ 0xa7537993cdc0311c) << 0x11 | 0x14ea6) +
/* reversing this took months of machine time - github.com/pengussy */
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
      pcStack_80[7] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
      pcStack_80[8] =
// WM - do not claim this as your own
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17);
      pcStack_80[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_80[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_80 = '\0';
    }
// WM - donate: donate/README.md
    pcStack_80 = pcStack_80 + 6;
    pcVar6 = (char *)func_0x0011ab24(&pcStack_80);
    cVar8 = *pcVar13;
    if (cVar8 != '\0') {
      pcVar11 = (char *)(lVar3 + 0x19);
      do {
        if (cVar8 != *pcVar6) break;
        pcVar6 = pcVar6 + 1;
        cVar8 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar8 != '\0');
    }
    if (cVar8 == *pcVar6) {
      pbVar5 = (byte *)(*pcRam00000000020626d0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x01996568();
      }
      pcStack_88 = (char *)(*pcRam00000000020626b8)();
      if (*pcStack_88 == '\x01') {
        uVar1 = (byte)pcStack_88[1] ^ 0xbe69f2ba;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x5d076b7d ^ 0x1528bf;
        pcStack_88[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x87;
        uVar10 = (((ulong)(byte)pcStack_88[1] ^ 0x3609563835f333ec) << 0x11 | 0x6c12) +
                 0x9e3779b97f4a7c15;
// found on a paste site? it was re-uploaded illegally
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
        pcStack_88[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
        pcStack_88[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
        pcStack_88[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
        pcStack_88[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 6;
      uVar7 = func_0x0011ab24(&pcStack_88);
      func_0x007935a0(param_1,0xffffd8ee,uVar7);
      iVar2 = func_0x00791f88(param_1,0xffffffff,1);
      if (iVar2 != 0) {
/* WM - do not claim this as your own */
        do {
          pbVar5 = (byte *)(*pcRam0000000002062700)();
          if ((*pbVar5 & 1) == 0) {
            func_0x019965a4();
          }
          pcStack_90 = (char *)(*pcRam00000000020626e8)();
          if (*pcStack_90 == '\x01') {
            lVar3 = 0;
            uVar10 = (unaff_x27 ^ 0x57098a008abcf787 ^ (unaff_x27 ^ 0x57098a008abcf787) >> 0x21) *
                     unaff_x23;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * unaff_x24;
            uVar10 = uVar10 ^ uVar10 >> 0x21;
            do {
              uVar9 = (uVar10 ^ uVar10 >> 0x21) * unaff_x23;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * unaff_x24;
              uVar12 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_90[lVar3 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
                      ((uint)(uVar9 >> 0x29) | 1);
              pcStack_90[lVar3 + 0x14] =
                   ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
              uVar10 = lVar3 + unaff_x25 +
                       (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[lVar3 + 1]) << 0x11);
              lVar3 = lVar3 + 1;
            } while (lVar3 != 0x13);
            *pcStack_90 = '\0';
          }
          pcStack_90 = pcStack_90 + 0x14;
          func_0x0011ab24(&pcStack_90);
          func_0x007a1b5c(param_1,"%s");
/*  found on a paste site? it was re-uploaded illegally  */
LAB_00042198:
          func_0x019964f0();
LAB_00041f64:
          pcStack_78 = (char *)(*pcRam0000000002062658)();
          if (*pcStack_78 == '\x01') {
            lVar3 = 0;
            uVar10 = 0xa04bd17fddb5af27;
            do {
              uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
              uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
              uVar12 = uVar9 ^ uVar9 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[lVar3 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
              pcStack_78[lVar3 + 0x20] =
                   ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
                   (byte)uVar12;
              uVar10 = lVar3 + -0x61c8864680b583eb +
                       (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[lVar3 + 1]) << 0x11);
              lVar3 = lVar3 + 1;
            } while (lVar3 != 0x1f);
            *pcStack_78 = '\0';
          }
          pcStack_78 = pcStack_78 + 0x20;
          uVar7 = func_0x0011ab24(&pcStack_78);
          func_0x007a1b5c(param_1,uVar7);
        } while( true );
      }
      func_0x00791660(param_1,0xfffffffe);
/* wm:chat: discord.gg/sdkhDjTex */
    }
    pbVar5 = (byte *)(*pcRam0000000002062730)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019965e0();
    }
    pcStack_98 = (char *)(*pcRam0000000002062718)();
    if (*pcStack_98 == '\x01') {
      lVar4 = 0;
      uVar10 = 0x7d5570e3b657cad2;
      do {
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[lVar4 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
        pcStack_98[lVar4 + 0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
        uVar10 = lVar4 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[lVar4 + 1]) << 0x11);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0xd);
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 0xe;
    pcVar6 = (char *)func_0x0011ab24(&pcStack_98);
    cVar8 = *pcVar13;
    if (cVar8 != '\0') {
      pcVar11 = (char *)(lVar3 + 0x19);
      do {
        if (cVar8 != *pcVar6) break;
/* stripping the watermark breaks the license - github.com/pengussy */
        pcVar6 = pcVar6 + 1;
        cVar8 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar8 != '\0');
    }
    if (cVar8 == *pcVar6) {
      pbVar5 = (byte *)(*pcRam0000000002062760)();
      if ((*pbVar5 & 1) == 0) {
        func_0x01996748();
      }
      pcStack_c8 = (char *)(*pcRam0000000002062748)();
      if (*pcStack_c8 == '\x01') {
        uVar1 = (byte)pcStack_c8[1] ^ 0x61a5816f;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x60ca2c4;
        pcStack_c8[6] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x83 ^ 0xac;
        uVar10 = (((ulong)(byte)pcStack_c8[1] ^ 0x2419db2642c89799) << 0x11 | 0x4833) +
                 0x9e3779b97f4a7c15;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
        pcStack_c8[7] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
        pcStack_c8[8] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar12;
/* found on a paste site? it was re-uploaded illegally */
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
        pcStack_c8[9] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
             (byte)uVar12;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar9 >> 0x17);
        pcStack_c8[10] =
             ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
             (byte)uVar9;
        *pcStack_c8 = '\0';
      }
      pcStack_c8 = pcStack_c8 + 6;
      uVar7 = func_0x0011ab24(&pcStack_c8);
      func_0x007935a0(param_1,0xffffd8ee,uVar7);
      iVar2 = func_0x00791f88(param_1,0xffffffff,1);
      func_0x00791660(param_1,0xfffffffe);
      if (iVar2 == 0) {
        uVar7 = (*pcRam0000000002097158)(param_1);
        return uVar7;
      }
      uVar7 = func_0x00201a9c(param_1);
      return uVar7;
    }
    pbVar5 = (byte *)(*pcRam0000000002062790)();
    if ((*pbVar5 & 1) == 0) {
      func_0x0199661c();
    }
// proprietary - see LICENSE - do not sell
    pcStack_a0 = (char *)(*pcRam0000000002062778)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0x1da76a51;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xef3c383c ^ 0x35c431;
      pcStack_a0[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x6e;
      uVar10 = (((ulong)(byte)pcStack_a0[1] ^ 0xf4515a7a7d7a471c) << 0x11 | 0x1e8a2) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 9;
    pcVar6 = (char *)func_0x0011ab24(&pcStack_a0);
    cVar8 = *pcVar13;
    if (cVar8 != '\0') {
      pcVar11 = (char *)(lVar3 + 0x19);
      do {
        if (cVar8 != *pcVar6) break;
        pcVar6 = pcVar6 + 1;
        cVar8 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar8 != '\0');
/* unlicensed copy if this notice is missing */
    }
    if (cVar8 == *pcVar6) {
      uVar7 = func_0x0020223c(param_1);
      return uVar7;
    }
    pbVar5 = (byte *)(*pcRam00000000020627c0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x01996658();
    }
    pcStack_a8 = (char *)(*pcRam00000000020627a8)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0xa5d6a968;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xa50b3c8f;
      pcStack_a8[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xab;
      uVar10 = (((ulong)(byte)pcStack_a8[1] ^ 0x67d6654d88a14069) << 0x11 | 0xcfac) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar12 ^ 0xffffffc3;
/* watermarked copy - do not remove */
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
/* wm:donate: donate/README.md */
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_a8[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar12;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[9] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_a8[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar9;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 10;
    pcVar6 = (char *)func_0x0011ab24(&pcStack_a8);
    cVar8 = *pcVar13;
    if (cVar8 != '\0') {
      pcVar11 = (char *)(lVar3 + 0x19);
      do {
        if (cVar8 != *pcVar6) break;
        pcVar6 = pcVar6 + 1;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        cVar8 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar8 != '\0');
    }
    if (cVar8 != *pcVar6) {
      pbVar5 = (byte *)(*pcRam00000000020627f0)();
      if ((*pbVar5 & 1) == 0) {
        func_0x01996694();
      }
      pcStack_b0 = (char *)(*pcRam00000000020627d8)();
      if (*pcStack_b0 == '\x01') {
        lVar4 = 0;
        uVar10 = 0xeffb8f6b15bd1cbb;
        do {
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[lVar4 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
          pcStack_b0[lVar4 + 0xf] =
               ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar9 >> 0x29) | 1) ^
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
               (byte)uVar12;
          uVar10 = lVar4 + -0x61c8864680b583eb +
                   (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b0[lVar4 + 1]) << 0x11);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0xe);
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 0xf;
      pcVar6 = (char *)func_0x0011ab24(&pcStack_b0);
      cVar8 = *pcVar13;
      if (cVar8 != '\0') {
        pcVar11 = (char *)(lVar3 + 0x19);
        do {
          if (cVar8 != *pcVar6) break;
          pcVar6 = pcVar6 + 1;
          cVar8 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar8 != '\0');
      }
      if (cVar8 != *pcVar6) {
        pbVar5 = (byte *)(*pcRam0000000002062820)();
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if ((*pbVar5 & 1) == 0) {
          func_0x019966d0();
        }
        pcStack_b8 = (char *)(*pcRam0000000002062808)();
        if (*pcStack_b8 == '\x01') {
          uVar1 = (byte)pcStack_b8[1] ^ 0xa6b5f284;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x1b481235;
          pcStack_b8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x47;
          uVar10 = (((ulong)(byte)pcStack_b8[1] ^ 0x125dadfe57109ca3) << 0x11 | 0x24bb) +
                   0x9e3779b97f4a7c15;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* WM - proprietary - see LICENSE - do not sell */
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x13] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x14] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
/* wm:if you paid for this, you were scammed */
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[10] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
          pcStack_b8[0x15] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar12;
          uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_b8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b8[0xb] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_b8[0x16] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
          *pcStack_b8 = '\0';
        }
        pcStack_b8 = pcStack_b8 + 0xc;
        pcVar6 = (char *)func_0x0011ab24(&pcStack_b8);
        cVar8 = *pcVar13;
        if (cVar8 != '\0') {
          pcVar11 = (char *)(lVar3 + 0x19);
          do {
            if (cVar8 != *pcVar6) break;
            pcVar6 = pcVar6 + 1;
            cVar8 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar8 != '\0');
        }
/*  thanks for reading - discord.gg/sdkhDjTex  */
        if (cVar8 == *pcVar6) {
LAB_00041ed4:
          uVar7 = func_0x002093b4(param_1);
          return uVar7;
        }
        pbVar5 = (byte *)(*pcRam0000000002062850)();
        if ((*pbVar5 & 1) == 0) {
          func_0x0199670c();
        }
        pcStack_c0 = (char *)(*pcRam0000000002062838)();
        if (*pcStack_c0 == '\x01') {
          lVar4 = 0;
          uVar10 = 0x50d376cf7fa9e5ff;
          do {
            uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar9 ^ uVar9 >> 0x21;
            uVar1 = (uint)(byte)pcStack_c0[lVar4 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
            pcStack_c0[lVar4 + 0x11] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar9 >> 0x29) | 1) ^
                 (byte)uVar12;
            uVar10 = lVar4 + -0x61c8864680b583eb +
                     (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_c0[lVar4 + 1]) << 0x11);
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0x10);
          *pcStack_c0 = '\0';
        }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        pcStack_c0 = pcStack_c0 + 0x11;
        pcVar6 = (char *)func_0x0011ab24(&pcStack_c0);
        cVar8 = *pcVar13;
        if (cVar8 != '\0') {
          pcVar13 = (char *)(lVar3 + 0x19);
          do {
            if (cVar8 != *pcVar6) break;
            pcVar6 = pcVar6 + 1;
            cVar8 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar8 != '\0');
        }
        if (cVar8 == *pcVar6) goto LAB_00041ed4;
        goto LAB_00041ee0;
      }
    }
    uVar7 = func_0x002027cc(param_1);
  }
  return uVar7;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
}

