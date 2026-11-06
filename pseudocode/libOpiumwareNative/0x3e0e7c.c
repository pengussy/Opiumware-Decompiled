/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e0e7c:825fda9b24
 */

/* WARNING: Possible PIC construction at 0x003e152c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e1470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e1a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e16ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e1a24) */
/* WARNING: Removing unreachable block (ram,0x003e1a6c) */
/* WARNING: Removing unreachable block (ram,0x003e1a28) */
/* WARNING: Removing unreachable block (ram,0x003e1a74) */
/* WARNING: Removing unreachable block (ram,0x003e1a78) */
/* WARNING: Removing unreachable block (ram,0x003e1a3c) */
/* WARNING: Removing unreachable block (ram,0x003e1a44) */
/* WARNING: Removing unreachable block (ram,0x003e1a4c) */
/* WARNING: Removing unreachable block (ram,0x003e1ad0) */
/* WARNING: Removing unreachable block (ram,0x003e1ad4) */
/* WARNING: Removing unreachable block (ram,0x003e1a54) */
/* WARNING: Removing unreachable block (ram,0x003e1474) */
/* WARNING: Removing unreachable block (ram,0x003e13c0) */
/* WARNING: Removing unreachable block (ram,0x003e147c) */
/* WARNING: Removing unreachable block (ram,0x003e1480) */
// stripping the watermark breaks the license
/* WARNING: Removing unreachable block (ram,0x003e14a8) */
/* WARNING: Removing unreachable block (ram,0x003e1530) */
/* WARNING: Removing unreachable block (ram,0x003e1590) */
/* WARNING: Removing unreachable block (ram,0x003e1724) */
/* WARNING: Removing unreachable block (ram,0x003e1764) */
/* WARNING: Removing unreachable block (ram,0x003e159c) */
/* WARNING: Removing unreachable block (ram,0x003e1538) */
/* WARNING: Removing unreachable block (ram,0x003e1550) */
/* WARNING: Removing unreachable block (ram,0x003e16b0) */

undefined8
FUN_003e0e7c(uint *param_1,char **param_2,char **param_3,byte *param_4,ulong param_5,
            undefined4 param_6,long param_7,char **param_8,char **param_9,char **param_10,
            char **param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  byte *pbVar9;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  undefined8 uVar10;
  undefined *puVar11;
  char **ppcVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  byte *unaff_x19;
  char *pcVar18;
  char **unaff_x20;
  char **ppcVar19;
  uint *puVar20;
  char **ppcVar21;
  char **unaff_x21;
  undefined4 uVar22;
  char **unaff_x22;
  long lVar23;
  uint *puVar24;
  char **ppcVar25;
  long unaff_x23;
  long lVar26;
  char **ppcVar27;
  char **unaff_x24;
  char **ppcVar28;
  char **unaff_x25;
  uint *puVar29;
  char **ppcVar30;
  bool bVar31;
  uint *unaff_x26;
  char *pcVar32;
  code *unaff_x27;
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x28;
  ulong uVar33;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar34;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  byte abStack_1fc [316];
  undefined8 uStack_c0;
  char **ppcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  uint uStack_9c;
  char *pcStack_98;
  char **ppcStack_90;
  char **ppcStack_88;
  uint *puStack_80;
  uint uStack_78;
  char cStack_71;
  char *pcStack_70;
  undefined8 uStack_68;
  
  ppcVar12 = param_11;
  ppcVar19 = param_10;
  puVar1 = &uStack_c0;
  lVar23 = (long)register0x00000008 + -0x10;
  iVar5 = (int)param_9;
  uVar33 = (ulong)param_9 & 0xffffffff;
  pcStack_70 = (char *)0x0;
  uStack_68 = param_3;
  if ((param_1 == (uint *)0x0) || (param_4 == (byte *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0xd0,"asn1_item_embed_d2i");
    puVar11 = &UNK_000c0102;
LAB_003e0fc8:
    func_0x004466b0(0xd,puVar11,0);
    return 0;
/*  do not claim this as your own  */
  }
  if ((long)param_3 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0xd4,"asn1_item_embed_d2i");
    puVar11 = (undefined *)0xe0;
    goto LAB_003e0fc8;
  }
  lVar26 = *(long *)(param_4 + 0x20);
  if ((lVar26 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 0x18), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if ((int)param_9 < 0x1e) goto LAB_003e0f54;
LAB_003e0ed4:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0xde,"asn1_item_embed_d2i");
    puVar11 = (undefined *)0xc9;
    goto LAB_003e0ef8;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x0;
/* WM - stripping the watermark breaks the license */
  if (0x1d < (int)param_9) goto LAB_003e0ed4;
LAB_003e0f54:
  bVar13 = *param_4;
  puStack_80 = param_1;
  iVar3 = (int)param_5;
  iVar14 = (int)param_7;
  if (bVar13 < 4) {
    if (bVar13 == 0) {
      ppcVar28 = *(char ***)(param_4 + 0x10);
      if (ppcVar28 != (char **)0x0) {
        if ((iVar3 != -1) || (iVar14 != 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0xed,"asn1_item_embed_d2i");
          puVar11 = (undefined *)0xaa;
          goto LAB_003e0ef8;
        }
        param_9 = param_11;
        uVar15 = (ulong)(iVar5 + 1);
        bVar13 = 0;
        goto code_r0x003e1924;
      }
      puVar1 = (undefined8 *)register0x00000008;
      lVar26 = param_7;
      param_7 = unaff_x23;
      UNRECOVERED_JUMPTABLE = unaff_x27;
      uVar33 = unaff_x28;
      lVar23 = unaff_x29;
code_r0x003e1ae0:
      puVar8 = puStack_80;
      *(ulong *)((long)puVar1 + -0x60) = uVar33;
      *(code **)((long)puVar1 + -0x58) = UNRECOVERED_JUMPTABLE;
      *(uint **)((long)puVar1 + -0x50) = unaff_x26;
      *(char ***)((long)puVar1 + -0x48) = unaff_x25;
      *(char ***)((long)puVar1 + -0x40) = unaff_x24;
      *(long *)((long)puVar1 + -0x38) = param_7;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      *(char ***)((long)puVar1 + -0x30) = unaff_x22;
      *(char ***)((long)puVar1 + -0x28) = unaff_x21;
      *(char ***)((long)puVar1 + -0x20) = unaff_x20;
      *(byte **)((long)puVar1 + -0x18) = unaff_x19;
      *(long *)((long)puVar1 + -0x10) = lVar23;
      *(undefined8 *)((long)puVar1 + -8) = unaff_x30;
      *(undefined1 *)((long)puVar1 + -0x8b) = 0;
      *(undefined8 *)((long)puVar1 + -0xb8) = 0;
      *(undefined8 *)((long)puVar1 + -0xc0) = 0;
      *(undefined8 *)((long)puVar1 + -0xa8) = 0;
      *(undefined8 *)((long)puVar1 + -0xb0) = 0;
      iVar5 = (int)param_5;
      if (*param_4 == 5) {
        *(int *)((long)puVar1 + -0x7c) = iVar5;
        if (iVar5 == -4) {
          param_5 = 0xffffffff;
          goto code_r0x003e1b7c;
        }
        uVar33 = 0xffffffff;
        uVar15 = param_5;
code_r0x003e1c3c:
        uVar16 = (uint)uVar15;
        uVar4 = uVar16;
        uVar22 = 0;
        if ((uint)uVar33 != 0xffffffff) {
// WM - more drops soon - github.com/pengussy
          uVar4 = (uint)uVar33;
          uVar22 = param_6;
        }
        *(char **)((long)puVar1 + -0x98) = *param_2;
        *(char ***)((long)puVar1 + -200) = param_8;
        *(char *)((long)puVar1 + -0xcc) = (char)lVar26;
        *(undefined4 *)((long)puVar1 + -0xd0) = uVar22;
        uVar6 = func_0x003e2340((undefined1 *)((long)puVar1 + -0x88),0,0,
                                (undefined1 *)((long)puVar1 + -0x8a),
                                (undefined1 *)((long)puVar1 + -0x89),
                                (undefined1 *)((long)puVar1 + -0x98),param_3,uVar4);
        if ((int)uVar6 == -1) {
          return uVar6;
        }
        if ((int)uVar6 != 0) {
          if (uVar16 - 0x10 < 2) {
            if (*(char *)((long)puVar1 + -0x89) == '\0') {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x31c,&UNK_01c3d7e7);
              puVar11 = (undefined *)0x9c;
              goto code_r0x003e1cb0;
            }
code_r0x003e1d28:
            pbVar9 = (byte *)*param_2;
            if (*(char *)((long)puVar1 + -0x8a) != '\0') {
              pcVar18 = *(char **)((long)puVar1 + -0x88);
              *(char *)((long)puVar1 + -0x69) = *(char *)((long)puVar1 + -0x8a);
              *(char **)((long)puVar1 + -0x78) = *(char **)((long)puVar1 + -0x98);
              if (0 < (long)pcVar18) {
                iVar5 = 1;
                pcVar32 = *(char **)((long)puVar1 + -0x98);
                do {
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  while (((pcVar18 != (char *)0x1 && (*pcVar32 == '\0')) && (pcVar32[1] == '\0'))) {
                    pcVar17 = pcVar32 + 2;
                    *(char **)((long)puVar1 + -0x78) = pcVar17;
                    iVar5 = iVar5 + -1;
                    if (iVar5 == 0) goto code_r0x003e1f04;
                    pcVar18 = pcVar18 + -2;
joined_r0x003e1dec:
                    pcVar32 = pcVar17;
                    if ((long)pcVar18 < 1) goto code_r0x003e1e10;
                  }
                  *(undefined8 *)((long)puVar1 + -200) = 0;
                  *(undefined1 *)((long)puVar1 + -0xcc) = 0;
                  *(undefined4 *)((long)puVar1 + -0xd0) = 0;
                  iVar3 = func_0x003e2340((undefined1 *)((long)puVar1 + -0x68),0,0,
                                          (undefined1 *)((long)puVar1 + -0x69),0,
                                          (undefined1 *)((long)puVar1 + -0x78),pcVar18,0xffffffff);
                  if (iVar3 == 0) {
                    uVar6 = 0x40b;
code_r0x003e1ec8:
                    puVar11 = &UNK_0008010a;
                    goto code_r0x003e1ed0;
                  }
                  if (*(char *)((long)puVar1 + -0x69) != '\0') {
                    if (iVar5 != -1) {
                      iVar5 = iVar5 + 1;
                      pcVar17 = *(char **)((long)puVar1 + -0x78);
                      pcVar18 = pcVar32 + ((long)pcVar18 - (long)pcVar17);
                      goto joined_r0x003e1dec;
                    }
                    uVar6 = 0x410;
                    goto code_r0x003e1ec8;
                  }
                  pcVar17 = (char *)(*(long *)((long)puVar1 + -0x78) +
                                    *(long *)((long)puVar1 + -0x68));
                  *(char **)((long)puVar1 + -0x78) = pcVar17;
                  pcVar18 = pcVar32 + ((long)pcVar18 - (long)pcVar17);
                  pcVar32 = pcVar17;
/* watermarked copy - do not remove */
                } while (0 < (long)pcVar18);
code_r0x003e1e10:
                if (iVar5 == 0) {
code_r0x003e1f04:
                  *(char **)((long)puVar1 + -0x98) = pcVar17;
                  uVar33 = (long)pcVar17 - (long)pbVar9;
                  *(byte **)((long)puVar1 + -0x68) = pbVar9;
                  lVar23 = *(long *)(param_4 + 0x20);
                  goto joined_r0x003e1eb4;
                }
              }
              puVar11 = (undefined *)0x89;
              uVar6 = 0x41a;
code_r0x003e1ed0:
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,uVar6,&UNK_01c3d7fd);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              goto code_r0x003e1ef4;
            }
            uVar33 = (*(long *)((long)puVar1 + -0x98) - (long)pbVar9) +
                     *(long *)((long)puVar1 + -0x88);
            *(long *)((long)puVar1 + -0x98) =
                 *(long *)((long)puVar1 + -0x98) + *(long *)((long)puVar1 + -0x88);
            bVar31 = true;
            *(byte **)((long)puVar1 + -0x68) = pbVar9;
            lVar23 = *(long *)(param_4 + 0x20);
joined_r0x003e1f70:
            if ((lVar23 != 0) && (*(code **)(lVar23 + 0x28) != (code *)0x0)) {
              uVar6 = (**(code **)(lVar23 + 0x28))
                                (puVar8,pbVar9,uVar33,uVar15,(undefined1 *)((long)puVar1 + -0x8b),
                                 param_4);
              if ((int)uVar6 == 0) goto code_r0x003e1fa8;
              goto code_r0x003e1f9c;
            }
            if (*(long *)(param_4 + 8) == -4) {
              puVar24 = *(uint **)puVar8;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              if (puVar24 != (uint *)0x0) {
code_r0x003e1ff8:
                if (uVar16 != *puVar24) {
                  func_0x003db058(puVar24,uVar15,0);
                }
                puVar20 = puVar24 + 2;
                puVar29 = puVar8;
                goto code_r0x003e2028;
              }
              puVar24 = (uint *)func_0x003e54c0();
              if (puVar24 != (uint *)0x0) {
                *(uint **)puVar8 = puVar24;
                goto code_r0x003e1ff8;
              }
              func_0x003e54cc();
            }
            else {
              puVar24 = (uint *)0x0;
              puVar29 = (uint *)0x0;
              puVar20 = puVar8;
/* stripping the watermark breaks the license */
code_r0x003e2028:
              iVar5 = (int)uVar33;
              if ((int)uVar16 < 6) {
                if ((int)uVar16 < 3) {
                  if (uVar16 == 1) {
                    if (iVar5 == 1) {
                      *puVar20 = (uint)*pbVar9;
                      goto code_r0x003e1f9c;
                    }
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                    ,0x386,&UNK_01c3d825);
                    puVar11 = (undefined *)0x6a;
                  }
                  else {
                    if (uVar16 == 2) goto code_r0x003e2064;
code_r0x003e217c:
                    if ((uVar16 == 0x18) && (iVar5 < 0xf)) {
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                      ,0x3b8,&UNK_01c3d825);
                      puVar11 = (undefined *)0xe8;
                    }
                    else {
                      if ((uVar16 != 0x17) || (0xc < iVar5)) goto code_r0x003e221c;
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                      ,0x3bc,&UNK_01c3d825);
                      puVar11 = (undefined *)0xe9;
                    }
                  }
                }
                else {
                  if (uVar16 == 3) {
                    lVar23 = func_0x003d54a4(puVar20,(undefined1 *)((long)puVar1 + -0x68),
                                             (long)iVar5);
                    goto joined_r0x003e212c;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                  }
                  if (uVar16 != 5) goto code_r0x003e217c;
                  if (iVar5 == 0) {
                    puVar20[0] = 1;
                    puVar20[1] = 0;
                    goto code_r0x003e22b4;
                  }
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x37e,&UNK_01c3d825);
                  puVar11 = (undefined *)0x90;
                }
code_r0x003e2324:
                func_0x004466b0(0xd,puVar11,0);
              }
              else {
                if (0x1b < (int)uVar16) {
                  if (uVar16 == 0x1c) {
                    if ((uVar33 & 3) == 0) {
code_r0x003e221c:
                      lVar23 = *(long *)puVar20;
                      if (lVar23 == 0) {
                        lVar23 = func_0x003dd9fc(uVar15);
                        if (lVar23 == 0) {
                          func_0x004464bc();
                          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                          ,0x3c3,&UNK_01c3d825);
                          puVar11 = &UNK_0008000d;
                          goto code_r0x003e2324;
                        }
// keep the notice, keep the source honest
                        *(long *)puVar20 = lVar23;
                      }
                      else {
                        *(uint *)(lVar23 + 4) = uVar16;
                      }
                      if (bVar31) {
                        iVar5 = func_0x003dd758(lVar23,pbVar9,uVar33);
                        if (iVar5 == 0) {
                          func_0x004464bc();
                          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                          ,0x3d1,&UNK_01c3d825);
                          func_0x004466b0(0xd,&UNK_0008000d,0);
                          func_0x003dd954(lVar23);
                          puVar20[0] = 0;
                          puVar20[1] = 0;
                          goto code_r0x003e232c;
                        }
                      }
                      else {
                        func_0x003dd9b4(lVar23,pbVar9,uVar33);
                        *(undefined1 *)((long)puVar1 + -0x8b) = 0;
                      }
code_r0x003e1f9c:
                      *param_2 = *(char **)((long)puVar1 + -0x98);
                      uVar6 = 1;
                      goto code_r0x003e1fa8;
                    }
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                    ,0x3b4,&UNK_01c3d825);
                    puVar11 = (undefined *)0xd7;
                  }
                  else {
                    if (uVar16 != 0x1e) goto code_r0x003e217c;
/* keep the notice, keep the source honest - github.com/pengussy */
                    if ((uVar33 & 1) == 0) goto code_r0x003e221c;
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                    ,0x3b0,&UNK_01c3d825);
                    puVar11 = (undefined *)0xd6;
                  }
                  goto code_r0x003e2324;
                }
                if (uVar16 == 6) {
                  lVar23 = func_0x003d8678(puVar20,(undefined1 *)((long)puVar1 + -0x68),(long)iVar5)
                  ;
joined_r0x003e212c:
                  if (lVar23 != 0) goto code_r0x003e1f9c;
                }
                else {
                  if (uVar16 != 10) goto code_r0x003e217c;
code_r0x003e2064:
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                  lVar23 = func_0x003d65a0(puVar20,(undefined1 *)((long)puVar1 + -0x68),(long)iVar5)
                  ;
                  if (lVar23 != 0) {
                    *(uint *)(*(long *)puVar20 + 4) =
                         *(uint *)(*(long *)puVar20 + 4) & 0x100 | uVar16;
code_r0x003e22b4:
                    if ((uVar16 == 5) && (puVar24 != (uint *)0x0)) {
                      puVar24[2] = 0;
                      puVar24[3] = 0;
                    }
                    goto code_r0x003e1f9c;
                  }
                }
              }
code_r0x003e232c:
              func_0x003e54cc(puVar24);
              if (puVar29 != (uint *)0x0) {
                puVar29[0] = 0;
                puVar29[1] = 0;
              }
            }
          }
          else {
            if (uVar16 == 0xfffffffd) {
              if (param_8 != (char **)0x0) {
                *(undefined1 *)param_8 = 0;
              }
              goto code_r0x003e1d28;
            }
            if (*(char *)((long)puVar1 + -0x89) == '\0') {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              pbVar9 = *(byte **)((long)puVar1 + -0x98);
              uVar33 = *(ulong *)((long)puVar1 + -0x88);
              *(byte **)((long)puVar1 + -0x98) = pbVar9 + uVar33;
              *(byte **)((long)puVar1 + -0x68) = pbVar9;
              lVar23 = *(long *)(param_4 + 0x20);
joined_r0x003e1eb4:
              bVar31 = true;
              goto joined_r0x003e1f70;
            }
            if ((uVar16 < 0xb) && ((1 << (ulong)(uVar16 & 0x1f) & 0x466U) != 0)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x32e,&UNK_01c3d7e7);
              puVar11 = (undefined *)0xc3;
              goto code_r0x003e1cb0;
            }
            *(undefined1 *)((long)puVar1 + -0x8b) = 1;
            uVar6 = func_0x003e29e0((undefined1 *)((long)puVar1 + -0xc0),
                                    (undefined1 *)((long)puVar1 + -0x98),
                                    *(undefined8 *)((long)puVar1 + -0x88),
                                    (long)*(char *)((long)puVar1 + -0x8a),0);
            if ((int)uVar6 == 0) goto code_r0x003e1fa8;
            uVar33 = *(ulong *)((long)puVar1 + -0xc0);
            lVar23 = func_0x0040058c((undefined1 *)((long)puVar1 + -0xc0),uVar33 + 1);
            if (lVar23 != 0) {
              bVar31 = false;
              *(undefined1 *)(*(long *)((long)puVar1 + -0xb8) + uVar33) = 0;
              pbVar9 = *(byte **)((long)puVar1 + -0xb8);
              *(byte **)((long)puVar1 + -0x68) = pbVar9;
              lVar23 = *(long *)(param_4 + 0x20);
              goto joined_r0x003e1f70;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                            ,0x340,&UNK_01c3d7e7);
            puVar11 = &UNK_00080007;
code_r0x003e1ef4:
            func_0x004466b0(0xd,puVar11,0);
// found on a paste site? it was re-uploaded illegally
          }
          uVar6 = 0;
code_r0x003e1fa8:
          if (*(char *)((long)puVar1 + -0x8b) != '\0') {
            func_0x004743e4(*(undefined8 *)((long)puVar1 + -0xb8),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                            ,0x354);
          }
          return uVar6;
        }
        func_0x004464bc();
        uVar6 = 0x30b;
      }
      else {
        uVar4 = *(uint *)(param_4 + 8);
        uVar15 = (ulong)uVar4;
        *(uint *)((long)puVar1 + -0x7c) = uVar4;
        uVar33 = param_5;
        if (uVar4 != 0xfffffffc) goto code_r0x003e1c3c;
        if (-1 < iVar5) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2f1,&UNK_01c3d7e7);
          puVar11 = (undefined *)0x7f;
          goto code_r0x003e1cb0;
        }
code_r0x003e1b7c:
        if ((int)lVar26 != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2f5,&UNK_01c3d7e7);
          puVar11 = (undefined *)0x7e;
          goto code_r0x003e1cb0;
        }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        *(char **)((long)puVar1 + -0x98) = *param_2;
        *(char ***)((long)puVar1 + -200) = param_8;
        *(undefined1 *)((long)puVar1 + -0xcc) = 0;
        *(undefined4 *)((long)puVar1 + -0xd0) = 0;
        iVar5 = func_0x003e2340(0,(undefined1 *)((long)puVar1 + -0x7c),
                                (undefined1 *)((long)puVar1 + -0x68),0,0,
                                (undefined1 *)((long)puVar1 + -0x98),param_3,0xffffffff);
        if (iVar5 != 0) {
          if (*(char *)((long)puVar1 + -0x68) == '\0') {
            uVar15 = (ulong)*(uint *)((long)puVar1 + -0x7c);
          }
          else {
            uVar15 = 0xfffffffd;
            *(undefined4 *)((long)puVar1 + -0x7c) = 0xfffffffd;
          }
          uVar33 = param_5;
          goto code_r0x003e1c3c;
        }
/* donate: donate/README.md - github.com/pengussy */
        func_0x004464bc();
        uVar6 = 0x2fc;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,uVar6,&UNK_01c3d7e7);
      puVar11 = &UNK_0008010a;
code_r0x003e1cb0:
      func_0x004466b0(0xd,puVar11,0);
      return 0;
    }
    if (bVar13 == 1) goto LAB_003e1010;
    if (bVar13 != 2) {
      return 0;
    }
    if (iVar3 != -1) {
      func_0x004464bc(0);
      uVar6 = 0x12a;
      goto LAB_003e1110;
    }
    pcStack_98 = (char *)CONCAT44(pcStack_98._4_4_,iVar14);
    ppcStack_90 = param_3;
    ppcStack_88 = param_2;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      iVar3 = (*UNRECOVERED_JUMPTABLE)(4,param_1,param_4,0);
      if (iVar3 == 0) goto LAB_003e1880;
    }
    if (*(long *)puStack_80 == 0) {
      iVar3 = func_0x003e43ac(puStack_80,param_4,ppcVar19,ppcVar12);
      if (iVar3 == 0) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        func_0x004464bc();
        uVar6 = 0x13a;
        goto LAB_003e1084;
      }
    }
    else {
      uVar4 = func_0x003e5544(puStack_80,param_4);
      puVar8 = puStack_80;
      if ((-1 < (int)uVar4) && ((long)(ulong)uVar4 < *(long *)(param_4 + 0x18))) {
        lVar26 = *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x28;
        uVar6 = func_0x003e5884(puStack_80,lVar26);
        func_0x003e3d80(uVar6,lVar26);
        func_0x003e5554(puVar8,0xffffffff,param_4);
      }
    }
    pcStack_70 = *ppcStack_88;
    if (0 < *(long *)(param_4 + 0x18)) {
      unaff_x23 = 0;
      ppcVar28 = *(char ***)(param_4 + 0x10);
      param_1 = (uint *)func_0x003e5884(puStack_80,ppcVar28);
      uStack_c0 = (char *)ppcVar12;
      param_2 = &pcStack_70;
      uVar15 = (ulong)(iVar5 + 1);
      bVar13 = 1;
      unaff_x30 = 0x3e1530;
      register0x00000008 = (BADSPACEBASE *)&uStack_c0;
      param_3 = ppcStack_90;
      unaff_x19 = param_4;
      unaff_x21 = ppcVar19;
      unaff_x22 = ppcVar12;
      unaff_x24 = ppcVar28;
// WM - reversing this took months of machine time
      unaff_x25 = param_8;
      unaff_x26 = param_1;
      unaff_x27 = UNRECOVERED_JUMPTABLE;
      unaff_x28 = uVar33;
      unaff_x29 = lVar23;
code_r0x003e1924:
      puVar2 = (undefined8 *)((long)register0x00000008 + -0x90);
      *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(code **)((long)register0x00000008 + -0x58) = unaff_x27;
      *(uint **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(char ***)((long)register0x00000008 + -0x48) = unaff_x25;
      *(char ***)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(char ***)((long)register0x00000008 + -0x30) = unaff_x22;
      *(char ***)((long)register0x00000008 + -0x28) = unaff_x21;
      *(char ***)((long)register0x00000008 + -0x20) = unaff_x20;
      *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      puVar1 = (undefined8 *)((long)register0x00000008 + -0x10);
      if (param_1 == (uint *)0x0) {
        return 0;
      }
      uVar6 = *(undefined8 *)register0x00000008;
      uVar4 = *(uint *)ppcVar28;
/* WM - origin: github.com/pengussy */
      *(char **)((long)register0x00000008 + -0x70) = *param_2;
      if ((uVar4 >> 4 & 1) == 0) {
        *(undefined8 *)register0x00000008 = uVar6;
        puVar1 = *(undefined8 **)((long)register0x00000008 + -0x10);
        puVar34 = *(undefined **)((long)register0x00000008 + -8);
        puVar11 = *(undefined **)((long)register0x00000008 + -0x18);
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x60);
        uVar6 = *(undefined8 *)((long)register0x00000008 + -0x58);
        puVar2 = (undefined8 *)register0x00000008;
        ppcVar12 = param_2;
        ppcVar21 = *(char ***)((long)register0x00000008 + -0x20);
        uVar33 = *(ulong *)((long)register0x00000008 + -0x28);
        ppcVar25 = *(char ***)((long)register0x00000008 + -0x30);
        ppcVar27 = *(char ***)((long)register0x00000008 + -0x38);
        puVar8 = *(uint **)((long)register0x00000008 + -0x40);
        ppcVar30 = *(char ***)((long)register0x00000008 + -0x48);
        param_2 = *(char ***)((long)register0x00000008 + -0x50);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      }
      else {
        uVar16 = *(uint *)(ppcVar28 + 1);
        *(char ***)((long)register0x00000008 + -0x88) = param_8;
        *(byte *)((long)register0x00000008 + -0x8c) = bVar13;
        *(uint *)((long)register0x00000008 + -0x90) = uVar4 & 0xc0;
        uVar10 = func_0x003e2340((undefined8 *)((long)register0x00000008 + -0x68),0,0,
                                 (undefined1 *)((long)register0x00000008 + -0x71),
                                 (undefined1 *)((long)register0x00000008 + -0x72),
                                 (undefined8 *)((long)register0x00000008 + -0x70),param_3,uVar16);
        if ((int)uVar10 == -1) {
          return uVar10;
        }
        puVar11 = &UNK_0008010a;
        if ((int)uVar10 == 0) {
          uVar6 = 0x227;
code_r0x003e1a80:
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,uVar6,&UNK_01c3d7ba);
          func_0x004466b0(0xd,puVar11,0);
          return 0;
        }
        if (*(char *)((long)register0x00000008 + -0x72) == '\0') {
          puVar11 = (undefined *)0x78;
          uVar6 = 0x22c;
          goto code_r0x003e1a80;
        }
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x70);
        param_3 = *(char ***)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
        ppcVar12 = (char **)((long)register0x00000008 + -0x70);
        bVar13 = 0;
// WM - stripping the watermark breaks the license
        puVar34 = &UNK_003e1a24;
        ppcVar21 = ppcVar19;
        uVar33 = uVar15;
        ppcVar25 = param_8;
        ppcVar27 = ppcVar28;
        puVar8 = param_1;
        ppcVar30 = param_3;
      }
      puVar2[-0xc] = uVar10;
      puVar2[-0xb] = uVar6;
      puVar2[-10] = param_2;
      puVar2[-9] = ppcVar30;
      puVar2[-8] = puVar8;
      puVar2[-7] = ppcVar27;
      puVar2[-6] = ppcVar25;
      puVar2[-5] = uVar33;
      puVar2[-4] = ppcVar21;
      puVar2[-3] = puVar11;
      puVar2[-2] = puVar1;
      puVar2[-1] = puVar34;
      puVar2[-0xd] = param_3;
/* WM - unlicensed copy if this notice is missing */
      pcVar18 = *ppcVar28;
      uVar16 = (uint)pcVar18;
      uVar4 = uVar16 & 0xc0;
      puVar2[-0xf] = *ppcVar12;
      puVar2[-0x12] = ppcVar12;
      if ((uVar16 >> 0xc & 1) != 0) {
        puVar2[-0xe] = param_1;
        param_1 = (uint *)(puVar2 + -0xe);
      }
      uVar6 = *puVar2;
      uVar22 = (undefined4)uVar15;
      if (((ulong)pcVar18 & 6) != 0) {
        if ((uVar16 >> 3 & 1) == 0) {
          uVar4 = 0;
          uVar16 = 0x10;
          if (((ulong)pcVar18 & 2) != 0) {
            uVar16 = 0x11;
          }
        }
        else {
          uVar16 = *(uint *)(ppcVar28 + 1);
        }
/* origin: github.com/pengussy */
        puVar2[-0x15] = param_8;
        *(byte *)((long)puVar2 + -0xac) = bVar13;
        *(uint *)(puVar2 + -0x16) = uVar4;
        uVar10 = func_0x003e2340(puVar2 + -0xd,0,0,(undefined1 *)((long)puVar2 + -0x79),0,
                                 puVar2 + -0xf,param_3,uVar16);
        if ((int)uVar10 == -1) {
          return uVar10;
        }
        if ((int)uVar10 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x27f,&UNK_01c3d7cf);
          func_0x004466b0(0xd,&UNK_0008010a,0);
          return uVar10;
        }
        lVar23 = *(long *)param_1;
        if (lVar23 == 0) {
          uVar10 = func_0x004dc0f0();
          lVar23 = func_0x004dc468(uVar10,&DAT_003e29d4);
          *(long *)param_1 = lVar23;
        }
        else {
          iVar5 = func_0x004dcb7c(lVar23);
          while (0 < iVar5) {
            uVar10 = func_0x004dca9c(lVar23);
            puVar2[-0x11] = uVar10;
            uVar10 = (*(code *)ppcVar28[4])();
            func_0x003e3d78(puVar2 + -0x11,uVar10);
            iVar5 = func_0x004dcb7c(lVar23);
          }
          lVar23 = *(long *)param_1;
        }
        if (lVar23 == 0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x292,&UNK_01c3d7cf);
          puVar11 = &UNK_0008000f;
        }
        else {
          for (pcVar18 = (char *)puVar2[-0xd]; 0 < (long)pcVar18;
              pcVar18 = pcVar32 + ((long)pcVar18 - lVar23)) {
            pcVar32 = (char *)puVar2[-0xf];
            if (((pcVar18 != (char *)0x1) && (*pcVar32 == '\0')) && (pcVar32[1] == '\0')) {
              puVar2[-0xf] = pcVar32 + 2;
              if (*(char *)((long)puVar2 + -0x79) != '\0') goto code_r0x003e297c;
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x29d,&UNK_01c3d7cf);
              puVar11 = (undefined *)0x9f;
              goto code_r0x003e28dc;
/*  if you paid for this, you were scammed  */
            }
            puVar2[-0x11] = 0;
            uVar10 = (*(code *)ppcVar28[4])();
            puVar2[-0x15] = ppcVar19;
            puVar2[-0x14] = uVar6;
            *(undefined4 *)(puVar2 + -0x16) = uVar22;
            iVar5 = FUN_003e0e7c(puVar2 + -0x11,puVar2 + -0xf,pcVar18,uVar10,0xffffffff,0,0,param_8)
            ;
            if (iVar5 < 1) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x2a9,&UNK_01c3d7cf);
              uVar22 = 0x8010a;
code_r0x003e2944:
              func_0x004466b0(0xd,uVar22,0);
              uVar10 = puVar2[-0x11];
              uVar6 = (*(code *)ppcVar28[4])();
              func_0x003e3aac(uVar10,uVar6);
              return 0;
            }
            lVar23 = puVar2[-0xf];
            iVar5 = func_0x004dc9ec(*(long *)param_1,puVar2[-0x11]);
            if (iVar5 == 0) {
/* origin: github.com/pengussy - github.com/pengussy */
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                              ,0x2b0,&UNK_01c3d7cf);
              uVar22 = 0x8000f;
              goto code_r0x003e2944;
            }
          }
          if (*(char *)((long)puVar2 + -0x79) == '\0') goto code_r0x003e297c;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x2b6,&UNK_01c3d7cf);
          puVar11 = (undefined *)0x89;
        }
code_r0x003e28dc:
        func_0x004466b0(0xd,puVar11,0);
        return 0;
      }
      uVar10 = (*(code *)ppcVar28[4])();
      if ((uVar16 >> 3 & 1) == 0) {
        puVar2[-0x15] = ppcVar19;
        puVar2[-0x14] = uVar6;
        *(undefined4 *)(puVar2 + -0x16) = uVar22;
        uVar6 = FUN_003e0e7c(param_1,puVar2 + -0xf,param_3,uVar10,0xffffffff,0,bVar13,param_8);
        if ((int)uVar6 == -1) {
          return uVar6;
        }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        if ((int)uVar6 == 0) {
          func_0x004464bc();
          uVar6 = 0x2c8;
          goto code_r0x003e2878;
        }
      }
      else {
        uVar16 = *(uint *)(ppcVar28 + 1);
        puVar2[-0x15] = ppcVar19;
        puVar2[-0x14] = uVar6;
        *(undefined4 *)(puVar2 + -0x16) = uVar22;
        uVar6 = FUN_003e0e7c(param_1,puVar2 + -0xf,param_3,uVar10,uVar16,uVar4,bVar13,param_8);
        if ((int)uVar6 == -1) {
          return uVar6;
        }
        if ((int)uVar6 == 0) {
          func_0x004464bc();
          uVar6 = 0x2bf;
code_r0x003e2878:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,uVar6,&UNK_01c3d7cf);
          func_0x004466b0(0xd,&UNK_0008010a,0);
          return 0;
        }
      }
code_r0x003e297c:
      *(undefined8 *)puVar2[-0x12] = puVar2[-0xf];
      return 1;
    }
    if (*(long *)(param_4 + 0x18) == 0) {
      if ((int)pcStack_98 != 0) {
        func_0x003e3d78(puStack_80,param_4);
        return 0xffffffff;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                      ,0x15e,"asn1_item_embed_d2i");
/* wm:found on a paste site? it was re-uploaded illegally */
      puVar11 = (undefined *)0x8f;
      goto LAB_003e0ef8;
    }
    func_0x003e5554(puStack_80,0,param_4);
joined_r0x003e15cc:
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) ||
       (iVar5 = (*UNRECOVERED_JUMPTABLE)(5,puStack_80,param_4,0), iVar5 != 0)) {
      *ppcStack_88 = pcStack_70;
      return 1;
    }
LAB_003e1880:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                    ,0x1fb,"asn1_item_embed_d2i");
    puVar11 = (undefined *)0x64;
  }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  else {
    if (bVar13 == 4) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 0x40);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 0x20);
      }
      else {
        param_9 = param_10;
        param_10 = param_11;
      }
                    /* WARNING: Could not recover jumptable at 0x003e1184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)();
      return uVar6;
    }
    if (bVar13 == 5) {
      if (iVar3 == -1) {
        pcStack_70 = *param_2;
        uStack_c0 = (char *)CONCAT35(uStack_c0._5_3_,0x100000000);
/*  keep the notice, keep the source honest  */
        ppcStack_b8 = param_8;
        iVar5 = func_0x003e2340(0,&uStack_78,&cStack_71,0,0,&pcStack_70,param_3,0xffffffff);
        if (iVar5 == 0) {
          func_0x004464bc();
          uVar6 = 0x105;
          goto LAB_003e1084;
        }
        if (cStack_71 == '\0') {
          param_5 = (ulong)uStack_78;
          if (uStack_78 < 0x1f) {
            uVar15 = *(ulong *)(&UNK_01aeb348 + param_5 * 8);
          }
          else {
            uVar15 = 0;
          }
          if ((*(ulong *)(param_4 + 8) & uVar15) != 0) {
            param_6 = 0;
            lVar26 = 0;
            unaff_x30 = 0x3e16b0;
            unaff_x19 = param_4;
            unaff_x21 = param_2;
            unaff_x22 = param_8;
            unaff_x24 = param_3;
            goto code_r0x003e1ae0;
          }
          if (iVar14 != 0) {
            return 0xffffffff;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x117,"asn1_item_embed_d2i");
/*  no support for modified copies  */
          puVar11 = (undefined *)0x8c;
        }
        else {
          if (iVar14 != 0) {
            return 0xffffffff;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                          ,0x10e,"asn1_item_embed_d2i");
          puVar11 = (undefined *)0x8b;
        }
      }
      else {
        func_0x004464bc();
        uVar6 = 0xfc;
LAB_003e1110:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,uVar6,"asn1_item_embed_d2i");
        puVar11 = (undefined *)0xe6;
      }
    }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    else {
      if (bVar13 != 6) {
        return 0;
      }
LAB_003e1010:
      pcStack_70 = *param_2;
      uVar22 = 0;
      if (iVar3 != -1) {
        uVar22 = param_6;
      }
      iVar14 = 0x10;
      if (iVar3 != -1) {
        iVar14 = iVar3;
      }
      uStack_c0 = (char *)CONCAT44(CONCAT31(uStack_c0._5_3_,(char)param_7),uVar22);
      ppcStack_b8 = param_8;
      ppcStack_90 = param_8;
/* thanks for reading - discord.gg/sdkhDjTex */
      ppcStack_88 = param_2;
      uVar6 = func_0x003e2340(&uStack_68,0,0,&uStack_78,&cStack_71,&pcStack_70,param_3,iVar14);
      if ((int)uVar6 == -1) {
        return uVar6;
      }
      if ((int)uVar6 == 0) {
        func_0x004464bc();
        uVar6 = 0x177;
LAB_003e1084:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,uVar6,"asn1_item_embed_d2i");
        puVar11 = &UNK_0008010a;
      }
      else {
        if ((lVar26 == 0) || ((*(byte *)(lVar26 + 8) >> 2 & 1) == 0)) {
          uVar4 = (uint)((char)uStack_78 == '\0');
// WM - if you paid for this, you were scammed
        }
        else {
          uVar4 = 0;
          uStack_68 = (char **)((long)param_3 + ((long)*ppcStack_88 - (long)pcStack_70));
        }
        if (cStack_71 != '\0') {
          if ((*(long *)puStack_80 == 0) &&
             (iVar3 = func_0x003e43ac(puStack_80,param_4,ppcVar19,ppcVar12), iVar3 == 0)) {
            func_0x004464bc();
            uVar6 = 0x189;
            goto LAB_003e1084;
          }
          if ((UNRECOVERED_JUMPTABLE == (code *)0x0) ||
             (iVar3 = (*UNRECOVERED_JUMPTABLE)(4,puStack_80,param_4,0), iVar3 != 0)) {
            unaff_x23 = *(long *)(param_4 + 0x10);
            puVar8 = puStack_80;
            uStack_9c = uVar4;
            if (*(long *)(param_4 + 0x18) < 1) {
LAB_003e1600:
              ppcVar19 = uStack_68;
              if ((char)uStack_78 != '\0') {
                if ((((long)uStack_68 < 2) || (*pcStack_70 != '\0')) || (pcStack_70[1] != '\0')) {
LAB_003e1778:
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x1d2,"asn1_item_embed_d2i");
                  puVar11 = (undefined *)0x89;
// WM - do not claim this as your own
                  goto LAB_003e0ef8;
                }
                ppcVar19 = (char **)((long)&MACH_HEADER.magic + 1);
                pcStack_70 = pcStack_70 + 2;
              }
LAB_003e17c4:
              uVar4 = 0;
              if (ppcVar19 != (char **)0x0) {
                uVar4 = uStack_9c;
              }
              if ((uVar4 & 1) != 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                ,0x1d7,"asn1_item_embed_d2i");
                puVar11 = (undefined *)0x94;
                goto LAB_003e0ef8;
              }
            }
            else {
              lVar26 = 0;
              do {
                if ((*(byte *)(unaff_x23 + 1) & 3) != 0) {
                  lVar7 = func_0x003e5894(*(long *)puVar8,unaff_x23,0);
                  puVar8 = puStack_80;
                  if (lVar7 != 0) {
                    uVar6 = func_0x003e5884(puStack_80,lVar7);
                    func_0x003e3d80(uVar6,lVar7);
/* reversing this took months of machine time */
                    puVar8 = puStack_80;
                  }
                }
                param_3 = uStack_68;
                lVar26 = lVar26 + 1;
                unaff_x23 = unaff_x23 + 0x28;
              } while (lVar26 < *(long *)(param_4 + 0x18));
              unaff_x23 = *(long *)(param_4 + 0x10);
              if (*(long *)(param_4 + 0x18) < 1) goto LAB_003e1600;
              unaff_x25 = (char **)0x0;
              ppcVar28 = (char **)func_0x003e5894(*(long *)puVar8,unaff_x23,1);
              if (ppcVar28 == (char **)0x0) goto LAB_003e0f00;
              param_1 = (uint *)func_0x003e5884(puStack_80,ppcVar28);
              puVar8 = puStack_80;
              if (param_3 != (char **)0x0) {
                if ((((long)param_3 < 2) || (*pcStack_70 != '\0')) || (pcStack_70[1] != '\0')) {
                  pcStack_98 = pcStack_70;
                  if (*(long *)(param_4 + 0x18) == 1) {
                    bVar13 = 0;
                  }
                  else {
                    bVar13 = *(byte *)ppcVar28 & 1;
                  }
                  uStack_c0 = (char *)ppcVar12;
                  param_2 = &pcStack_70;
                  uVar15 = (ulong)(iVar5 + 1);
                  unaff_x30 = 0x3e1474;
                  register0x00000008 = (BADSPACEBASE *)&uStack_c0;
                  param_8 = ppcStack_90;
// WM - keep the notice, keep the source honest
                  unaff_x19 = param_4;
                  unaff_x20 = param_3;
                  unaff_x21 = ppcVar19;
                  unaff_x22 = ppcVar12;
                  unaff_x24 = ppcVar28;
                  unaff_x26 = param_1;
                  unaff_x27 = UNRECOVERED_JUMPTABLE;
                  unaff_x28 = uVar33;
                  unaff_x29 = lVar23;
                  goto code_r0x003e1924;
                }
                pcVar18 = pcStack_70 + 2;
                if ((char)uStack_78 == '\0') {
                  pcStack_70 = pcVar18;
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x1ab,"asn1_item_embed_d2i");
                  puVar11 = (undefined *)0x9f;
                  goto LAB_003e0ef8;
                }
                ppcVar19 = (char **)((char *)((long)param_3 + (long)pcStack_70) + -(long)pcVar18);
                uStack_78 = uStack_78 & 0xffffff00;
                pcStack_70 = pcVar18;
                uStack_68 = ppcVar19;
                goto LAB_003e17c4;
              }
              uStack_68 = (char **)0x0;
              if ((char)uStack_78 != '\0') goto LAB_003e1778;
            }
            lVar23 = 0;
            if (0 < *(long *)(param_4 + 0x18)) {
              do {
                pbVar9 = (byte *)func_0x003e5894(*(long *)puVar8,unaff_x23,1);
                puVar8 = puStack_80;
/*  chat: discord.gg/sdkhDjTex  */
                if (pbVar9 == (byte *)0x0) goto LAB_003e0f00;
                if ((*pbVar9 & 1) == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                                  ,0x1eb,"asn1_item_embed_d2i");
                  func_0x004466b0(0xd,0x79,0);
                  ppcStack_b8 = *(char ***)(pbVar9 + 0x18);
                  uStack_a8 = *(undefined8 *)(param_4 + 0x30);
                  pcStack_b0 = ", Type=";
                  uStack_c0 = "Field=";
                  uVar6 = 4;
                  goto LAB_003e0f14;
                }
                uVar6 = func_0x003e5884(puStack_80,pbVar9);
                func_0x003e3d80(uVar6,pbVar9);
                unaff_x23 = unaff_x23 + 0x28;
                lVar23 = lVar23 + 1;
              } while (lVar23 < *(long *)(param_4 + 0x18));
            }
            iVar5 = func_0x003e5708(puVar8,*ppcStack_88,(long)pcStack_70 - (long)*ppcStack_88,
                                    param_4);
            if (iVar5 != 0) goto joined_r0x003e15cc;
          }
          goto LAB_003e1880;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_dec.c"
                        ,0x183,"asn1_item_embed_d2i");
        puVar11 = (undefined *)0x95;
      }
    }
  }
LAB_003e0ef8:
  func_0x004466b0(0xd,puVar11,0);
LAB_003e0f00:
  ppcStack_b8 = *(char ***)(param_4 + 0x30);
  uStack_c0 = "Type=";
  uVar6 = 2;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
LAB_003e0f14:
  func_0x0044609c(uVar6);
  return 0;
}

