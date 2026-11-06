/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d6cc:3b9f5a0489
 */

void FUN_0003d6cc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  char cVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  char *pcStack_90;
  undefined8 uStack_88;
/* origin: github.com/pengussy */
  undefined8 **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00793a78(param_2,0xffffd8f0,uRam0000000001f26a20,0);
  iVar2 = func_0x00791be4(param_2,0xffffffff);
  if (iVar2 == 7) {
    uVar4 = func_0x00791624(param_2,0xffffffff);
    pcVar5 = (char *)(*pcRam00000000020623b8)();
    pcVar1 = pcRam00000000020623d0;
    uVar16 = 0;
    while (uVar16 = func_0x007952a0(param_2,uVar4,uVar16), -1 < (int)uVar16) {
      lVar6 = func_0x007926a8(param_2,0xffffffff);
      iVar2 = func_0x00791be4(param_2,0xffffffff);
      if (((iVar2 == 9) && (lVar6 != 0)) && (uVar3 = func_0x00792558(param_2,0xffffffff), 7 < uVar3)
         ) {
        uStack_88 = 0;
        pcVar7 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
        (*pcVar7)(&uStack_88,lVar6,8);
        pcVar8 = (char *)func_0x007a25b0(param_2,0xffffffff);
        pbVar9 = (byte *)(*pcVar1)(0x20623d0);
        if ((*pbVar9 & 1) == 0) {
/*  found on a paste site? it was re-uploaded illegally  */
          func_0x01996138();
          cVar11 = *pcVar5;
        }
        else {
          cVar11 = *pcVar5;
        }
        if (cVar11 == '\x01') {
          uVar3 = (byte)pcVar5[1] ^ 0x3bbe8017;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x2cc425b3;
          pcVar5[10] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ 0xd4;
          uVar14 = (((ulong)(byte)pcVar5[1] ^ 0xfab2b52952a132b0) << 0x11 | 0x1f565) +
                   0x9e3779b97f4a7c15;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[2] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0xb] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[3] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0xc] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[4] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0xd] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[5] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0xe] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[6] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0xf] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[7] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0x10] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar13 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar13 ^ uVar13 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[8] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcVar5[0x11] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar15;
          uVar14 = (uVar14 >> 0x2f | (uVar14 ^ (byte)pcVar5[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar14 ^ uVar14 >> 0x21;
          uVar3 = (uint)(byte)pcVar5[9] ^ (uint)uVar13 ^ 0xffffffc3;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcVar5[0x12] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar13;
          *pcVar5 = '\0';
        }
        pcStack_90 = pcVar5 + 10;
        pcVar10 = (char *)func_0x0011ab24(&pcStack_90,pcVar5 + 10);
        cVar11 = *pcVar8;
        if (cVar11 != '\0') {
          do {
            pcVar8 = pcVar8 + 1;
            if (cVar11 != *pcVar10) break;
            pcVar10 = pcVar10 + 1;
            cVar11 = *pcVar8;
          } while (cVar11 != '\0');
        }
        if (cVar11 == *pcVar10) {
          puStack_68 = (undefined8 *)param_1[1];
          ppuStack_80 = &puStack_68;
          puStack_78 = &uStack_88;
          puStack_70 = param_1;
          if (puStack_68 < (undefined8 *)param_1[2]) {
            puVar12 = puStack_68 + 1;
            *puStack_68 = uStack_88;
          }
          else {
            func_0x0000aad8(&ppuStack_80);
            puVar12 = puStack_68;
          }
          param_1[1] = puVar12;
        }
      }
      func_0x00791660(param_2,0xfffffffd);
    }
    func_0x00791660(param_2,0xfffffffe);
  }
  else {
/*  donate: donate/README.md  */
    func_0x00791660(param_2,0xfffffffe);
  }
  return;
}

