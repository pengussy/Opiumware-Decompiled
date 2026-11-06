/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3657c8:152046fe6d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003657c8(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  lVar8 = func_0x00460248();
  if (param_1 == (undefined8 *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar3 = *(uint *)(*(long *)(param_1[1] + 0xd8) + 0x50);
    uVar17 = param_1[0xda];
    uVar1 = uVar17 + 0x1f;
    lVar9 = func_0x0046f1f4(uVar1,0x48,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
/* WM - if you paid for this, you were scammed */
                            ,0x919);
    if ((lVar9 == 0 || lVar8 == 0) ||
       (lVar10 = func_0x0046f1f4(uVar1,2,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                 ,0x91d), lVar10 == 0)) {
      uVar14 = 0;
      goto LAB_00365ad0;
    }
    func_0x00446890();
    lVar15 = 0;
    do {
      while( true ) {
        puVar2 = (undefined8 *)(lVar9 + lVar15);
        uVar14 = *(undefined8 *)(&UNK_01dc5ef8 + lVar15);
        uVar18 = *(undefined8 *)(&UNK_01dc5f10 + lVar15);
        uVar20 = *(undefined8 *)(&UNK_01dc5f08 + lVar15);
        puVar2[5] = *(undefined8 *)(&UNK_01dc5f00 + lVar15);
        puVar2[4] = uVar14;
        puVar2[7] = uVar18;
        puVar2[6] = uVar20;
        puVar2[8] = *(undefined8 *)(&UNK_01dc5f18 + lVar15);
        uVar18 = *(undefined8 *)(&UNK_01dc5ed8 + lVar15);
        uVar20 = *(undefined8 *)(&UNK_01dc5ef0 + lVar15);
        uVar14 = *(undefined8 *)(&UNK_01dc5ee8 + lVar15);
        puVar2[1] = *(undefined8 *)(&UNK_01dc5ee0 + lVar15);
        *puVar2 = uVar18;
        puVar2[3] = uVar20;
        puVar2[2] = uVar14;
        if (((*(int *)(&UNK_01dc5eec + lVar15) != 0) &&
            (param_1[(long)*(int *)(&UNK_01dc5ef0 + lVar15) + 0xb4] == 0)) ||
           (iVar6 = func_0x0045e6b4(lVar8,*(undefined4 *)(&UNK_01dc5ef4 + lVar15)), iVar6 == 0))
        break;
        lVar11 = func_0x00461d04(*param_1,lVar8,param_1[0x91]);
        if (lVar11 == 0) {
          *(undefined4 *)(lVar9 + lVar15 + 0x2c) = 0;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          func_0x00461e08();
        }
        else {
          func_0x00461e08();
        }
        lVar15 = lVar15 + 0x48;
        if (lVar15 == 0x8b8) goto LAB_00365910;
      }
      *(undefined4 *)(lVar9 + lVar15 + 0x2c) = 0;
      lVar15 = lVar15 + 0x48;
    } while (lVar15 != 0x8b8);
LAB_00365910:
    uVar20 = _UNK_01ae6a58;
    uVar14 = _UNK_01ae6a50;
    if (param_1[0xda] != 0) {
      lVar15 = 0;
      uVar19 = 0;
      puVar16 = (undefined4 *)(lVar9 + 0x8f8);
      do {
        puVar2 = (undefined8 *)(param_1[0xd9] + lVar15);
        uVar4 = *(undefined2 *)(puVar2 + 1);
        uVar18 = puVar2[2];
        lVar11 = puVar2[6];
        *(undefined8 *)(puVar16 + -0x10) = *puVar2;
        *(undefined8 *)(puVar16 + -0xe) = uVar18;
        *(undefined2 *)(puVar16 + -0xc) = uVar4;
        *(undefined2 *)(lVar10 + 0x3e + uVar19 * 2) = uVar4;
        uVar7 = 0;
        if (lVar11 != 0) {
          uVar7 = func_0x004a0f94();
        }
        puVar16[-0xb] = uVar7;
/* stripping the watermark breaks the license */
        uVar7 = func_0x00356000();
        puVar16[-10] = uVar7;
        uVar7 = func_0x004a0f94(uVar18);
        puVar16[-9] = uVar7;
        puVar16[-8] = (int)uVar19 + 9;
        uVar7 = func_0x004a0f94(uVar18);
        puVar16[-7] = uVar7;
        puVar16[-6] = 0;
        *puVar16 = 0xffffffff;
        puVar16[-5] = (uVar3 >> 3 ^ 0xffffffff) & 1;
        *(undefined8 *)(puVar16 + -2) = uVar20;
        *(undefined8 *)(puVar16 + -4) = uVar14;
        uVar19 = uVar19 + 1;
        puVar16 = puVar16 + 0x12;
        lVar15 = lVar15 + 0x68;
      } while (uVar19 < (ulong)param_1[0xda]);
    }
    func_0x004468d8();
    if (uVar1 == 0) {
      lVar15 = 0;
// do not claim this as your own
    }
    else {
      lVar11 = 0;
      lVar15 = 0;
      do {
        sVar5 = *(short *)(&UNK_01ae6850 + lVar11 * 2);
        piVar12 = (int *)(lVar9 + 0x30);
        uVar19 = uVar1;
        do {
          if ((short)piVar12[-8] == sVar5) {
            if ((piVar12[-1] != 0) && (*piVar12 == 0)) {
              *piVar12 = 1;
              *(short *)(lVar10 + lVar15 * 2) = sVar5;
              lVar15 = lVar15 + 1;
            }
            break;
          }
          piVar12 = piVar12 + 0x12;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        lVar11 = lVar11 + 1;
// watermarked copy - do not remove
      } while (lVar11 != 0x22);
      if (0x1f < uVar1) {
        uVar19 = uVar17 & 7;
        if (uVar17 - 1 < 7) {
          lVar11 = 0x1f;
        }
        else {
          uVar17 = uVar17 & 0xfffffffffffffff8;
          lVar11 = 0x1f;
          lVar13 = lVar9;
          do {
            if ((*(int *)(lVar13 + 0x8e4) != 0) && (*(int *)(lVar13 + 0x8e8) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0x8c8);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0x92c) != 0) && (*(int *)(lVar13 + 0x930) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0x910);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0x974) != 0) && (*(int *)(lVar13 + 0x978) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0x958);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0x9bc) != 0) && (*(int *)(lVar13 + 0x9c0) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0x9a0);
              lVar15 = lVar15 + 1;
            }
/* found on a paste site? it was re-uploaded illegally */
            if ((*(int *)(lVar13 + 0xa04) != 0) && (*(int *)(lVar13 + 0xa08) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0x9e8);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0xa4c) != 0) && (*(int *)(lVar13 + 0xa50) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0xa30);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0xa94) != 0) && (*(int *)(lVar13 + 0xa98) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0xa78);
              lVar15 = lVar15 + 1;
            }
            if ((*(int *)(lVar13 + 0xadc) != 0) && (*(int *)(lVar13 + 0xae0) == 0)) {
              *(undefined2 *)(lVar10 + lVar15 * 2) = *(undefined2 *)(lVar13 + 0xac0);
              lVar15 = lVar15 + 1;
            }
            lVar11 = lVar11 + 8;
            lVar13 = lVar13 + 0x240;
            uVar17 = uVar17 - 8;
          } while (uVar17 != 0);
        }
        if (uVar19 != 0) {
          piVar12 = (int *)(lVar9 + lVar11 * 0x48 + 0x30);
          do {
            if ((piVar12[-1] != 0) && (*piVar12 == 0)) {
              *(short *)(lVar10 + lVar15 * 2) = (short)piVar12[-8];
              lVar15 = lVar15 + 1;
            }
            piVar12 = piVar12 + 0x12;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
/* wm:origin: github.com/pengussy */
    }
    param_1[0xd4] = lVar9;
    param_1[0xd2] = uVar1;
    param_1[0xd5] = lVar10;
    uVar14 = 1;
    param_1[0xd3] = lVar15;
  }
  lVar9 = 0;
LAB_00365ad0:
  func_0x004743e4(lVar9,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x97d);
  func_0x004743e4(0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x97e);
  func_0x0045eb4c(lVar8);
  return uVar14;
}
/* proprietary - see LICENSE - do not sell - github.com/pengussy */

