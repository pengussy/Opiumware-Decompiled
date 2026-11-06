/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b24cc:40fdd79e2d
 */

undefined8 FUN_003b24cc(long param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
/*  thanks for reading - discord.gg/sdkhDjTex  */
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  ulong uStack_158;
  undefined1 auStack_150 [256];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar12 = param_2[4];
  if ((undefined *)param_2[1] < (undefined *)(param_2[3] + uVar12)) {
LAB_003b2524:
    uVar4 = 0xffffffff;
  }
  else {
    puVar10 = *(undefined **)(param_1 + 0x9c8);
    if (puVar10 < &UNK_0000454d) {
      puVar10 = &UNK_0000454c;
    }
    if (puVar10 < (undefined *)param_2[1]) goto LAB_003b2524;
    if (uVar12 == 0) {
LAB_003b2820:
      uVar4 = 0xfffffffd;
    }
/* WM - proprietary - see LICENSE - do not sell */
    else {
      lStack_50 = (ulong)(ushort)(*(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8) <<
                  0x30;
      lVar5 = func_0x0034d410(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118),&lStack_50);
      if (lVar5 != 0) {
        puVar14 = *(undefined8 **)(lVar5 + 8);
        if (puVar14[1] != param_2[1]) goto LAB_003b2524;
        if (puVar14[9] != 0) goto LAB_003b25ac;
LAB_003b2670:
        do {
          uVar11 = uVar12;
          if (0xff < uVar12) {
            uVar11 = 0x100;
          }
          iVar3 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                            (param_1,0x16,0,auStack_150,uVar11,0,&uStack_158);
          if (iVar3 < 1) goto LAB_003b25ec;
          uVar12 = uVar12 - uStack_158;
        } while (uVar12 != 0);
        goto LAB_003b2820;
      }
      puVar14 = (undefined8 *)func_0x003b21d4(param_2[1],1);
      if (puVar14 == (undefined8 *)0x0) goto LAB_003b2524;
      uVar17 = param_2[5];
      uVar16 = param_2[4];
      uVar15 = param_2[7];
      uVar4 = param_2[6];
      uVar20 = *param_2;
      uVar19 = param_2[3];
      uVar18 = param_2[2];
      puVar14[1] = param_2[1];
      *puVar14 = uVar20;
      puVar14[3] = uVar19;
      puVar14[2] = uVar18;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      puVar14[5] = uVar17;
      puVar14[4] = uVar16;
      puVar14[7] = uVar15;
      puVar14[6] = uVar4;
      puVar14[3] = 0;
      puVar14[4] = puVar14[1];
      if (puVar14[9] == 0) goto LAB_003b2670;
LAB_003b25ac:
      iVar3 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                        (param_1,0x16,0,puVar14[8] + param_2[3],uVar12,0,&uStack_158);
      if (0 < iVar3 && uStack_158 == uVar12) {
        uVar11 = param_2[3];
        if ((long)uVar12 < 9) {
          if ((long)uVar11 < (long)(uVar11 + uVar12)) {
            do {
              *(byte *)(puVar14[9] + ((long)uVar11 >> 3)) =
                   *(byte *)(puVar14[9] + ((long)uVar11 >> 3)) | (byte)(1 << (uVar11 & 7));
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(param_2[3] + uVar12));
          }
        }
        else {
          *(byte *)(puVar14[9] + ((long)uVar11 >> 3)) =
               *(byte *)(puVar14[9] + ((long)uVar11 >> 3)) |
               s_resumption___01ae6fd9[(uVar11 & 7) + 10];
          lVar6 = param_2[3];
          lVar7 = (lVar6 >> 3) + 1;
          lVar13 = (long)(lVar6 + (uVar12 - 1)) >> 3;
          if (lVar7 < lVar13) {
            do {
              *(undefined1 *)(puVar14[9] + lVar7) = 0xff;
              lVar7 = lVar7 + 1;
              lVar6 = param_2[3];
              lVar13 = (long)(lVar6 + (uVar12 - 1)) >> 3;
            } while (lVar7 < lVar13);
          }
          *(byte *)(puVar14[9] + lVar13) =
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
               *(byte *)(puVar14[9] + lVar13) |
               s_resumption___01ae6fd9[((ulong)(uint)((int)lVar6 + (int)uVar12) & 7) + 0x12];
        }
        uVar12 = param_2[1];
        if (uVar12 == 0) goto LAB_003b25ec;
        lVar6 = puVar14[9];
        lVar7 = (long)(uVar12 - 1) >> 3;
        if (*(char *)(lVar6 + lVar7) == s_resumption___01ae6fd9[(uVar12 & 7) + 0x12]) {
          if (0 < lVar7) {
            do {
              if (*(char *)(lVar6 + -1 + lVar7) != -1) goto LAB_003b27f8;
              bVar1 = 1 < lVar7;
              lVar7 = lVar7 + -1;
            } while (bVar1);
          }
          func_0x004743e4(lVar6,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                          ,0x2b2);
/* more drops soon - github.com/pengussy */
          puVar14[9] = 0;
        }
LAB_003b27f8:
        if ((lVar5 != 0) ||
           ((lVar5 = func_0x0034d2d0(&lStack_50,puVar14), lVar5 != 0 &&
            (lVar5 = func_0x0034d348(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118),lVar5),
            lVar5 != 0)))) goto LAB_003b2820;
        if (puVar14 == (undefined8 *)0x0) goto LAB_003b2524;
LAB_003b25f8:
        func_0x004743e4(puVar14[8],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6d);
        func_0x004743e4(puVar14[9],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6e);
        func_0x004743e4(puVar14,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6f);
        goto LAB_003b2524;
      }
LAB_003b25ec:
      uVar4 = 0xffffffff;
      if ((lVar5 == 0) && (puVar14 != (undefined8 *)0x0)) goto LAB_003b25f8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return uVar4;
  }
  auVar21 = ___stack_chk_fail(uVar4);
  pbVar8 = auVar21._8_8_;
  lVar5 = auVar21._0_8_;
  puVar10 = *(undefined **)(pbVar8 + 8);
  if (puVar10 < (undefined *)(*(long *)(pbVar8 + 0x20) + *(long *)(pbVar8 + 0x18))) {
LAB_003b2874:
    func_0x004464bc();
    uVar4 = 0x1d1;
/* keep the notice, keep the source honest - github.com/pengussy */
  }
  else {
    puVar9 = *(undefined **)(lVar5 + 0x9c8);
    if (puVar9 < &UNK_0000454d) {
      puVar9 = &UNK_0000454c;
    }
    if (puVar9 < puVar10) goto LAB_003b2874;
    if (*(long *)(*(long *)(lVar5 + 0x4f0) + 400) == 0) {
      lVar7 = func_0x0040058c(*(undefined8 *)(lVar5 + 0xf8),puVar10 + 0xc);
      if (lVar7 != 0) {
        *(undefined **)(lVar5 + 0x2f0) = puVar10;
        lVar7 = *(long *)(lVar5 + 0x4f0);
        *(undefined **)(lVar7 + 0x180) = puVar10;
        bVar2 = *pbVar8;
        *(uint *)(lVar5 + 0x2f8) = (uint)bVar2;
        *(byte *)(lVar7 + 0x178) = bVar2;
        *(undefined2 *)(lVar7 + 0x188) = *(undefined2 *)(pbVar8 + 0x10);
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x1db,"dtls1_preprocess_fragment");
      uVar4 = 0x50;
      puVar10 = &UNK_00080007;
      goto LAB_003b289c;
    }
    if (puVar10 == *(undefined **)(*(long *)(lVar5 + 0x4f0) + 0x180)) {
      return 1;
/* WM - watermarked copy - do not remove */
    }
    func_0x004464bc();
    uVar4 = 0x1e9;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                  ,uVar4,"dtls1_preprocess_fragment");
  uVar4 = 0x2f;
  puVar10 = (undefined *)0x98;
LAB_003b289c:
  func_0x003a9570(lVar5,uVar4,puVar10,0);
  return 0;
}

