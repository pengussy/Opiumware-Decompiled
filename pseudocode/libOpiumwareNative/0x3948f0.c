/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3948f0:4c89934229
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_003948f0(int *param_1,uint param_2,undefined1 *param_3,long param_4,ulong param_5,int param_6,
            ulong *param_7)

{
  bool bVar1;
  ulong *puVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  code *pcVar21;
  code *pcVar22;
  long *plVar23;
/* WM - more drops soon - github.com/pengussy */
  long lStack_68;
  
  if (param_1 == (int *)0x0) {
    piVar20 = (int *)0x0;
    piVar12 = (int *)MACH_HEADER._24_8_;
    if ((*(byte *)(*(long *)(MACH_HEADER._24_8_ + 0xd8) + 0x50) >> 3 & 1) != 0) goto LAB_0039496c;
LAB_00394938:
    bVar1 = 0x303 < *piVar12 && *piVar12 != 0x10000;
  }
  else {
    piVar20 = param_1;
    if (*param_1 != 0) {
      piVar20 = (int *)0x0;
    }
    piVar12 = *(int **)(piVar20 + 6);
    if ((*(byte *)(*(long *)(*(int **)(piVar20 + 6) + 0x36) + 0x50) >> 3 & 1) == 0)
    goto LAB_00394938;
LAB_0039496c:
    bVar1 = false;
  }
  if (((0x17 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0xc00001U) == 0)) ||
     ((param_2 != 0x17 && (param_6 != 0)))) {
    func_0x004464bc();
    uVar10 = 0x284;
LAB_003949b4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                    ,uVar10,"ssl3_read_bytes");
    uVar10 = 0x50;
LAB_003949c0:
    puVar11 = &UNK_000c0103;
LAB_003949c8:
    func_0x003a9570(piVar20,uVar10,puVar11,0);
    return 0xffffffff;
  }
  if ((param_2 != 0x16) || (*(long *)(piVar20 + 0x39c) == 0)) {
    iVar9 = func_0x003a9624(piVar20);
/* more drops soon - github.com/pengussy - github.com/pengussy */
    if ((iVar9 == 0) && (iVar9 = func_0x003a934c(param_1), iVar9 != 0)) {
      uVar10 = (**(code **)(piVar20 + 0x1c))(param_1);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      if ((int)uVar10 == 0) {
        return 0xffffffff;
      }
    }
    pcVar21 = (code *)0x0;
    bVar5 = bVar1;
    if (param_3 == (undefined1 *)0x0) {
      bVar5 = true;
    }
    puVar2 = (ulong *)(piVar20 + 0x3b0);
    lStack_68 = param_4;
    if (param_2 != 0x16) {
      bVar5 = true;
    }
LAB_00394aa8:
    do {
      piVar20[0x1a] = 1;
      uVar16 = *(ulong *)(piVar20 + 0x3b2);
      if (*(ulong *)(piVar20 + 0x3b0) <= uVar16) {
        uVar16 = 0;
        *puVar2 = 0;
        piVar20[0x3b2] = 0;
        piVar20[0x3b3] = 0;
        do {
/*  thanks for reading - discord.gg/sdkhDjTex  */
          piVar12 = piVar20 + uVar16 * 0x10 + 0x3b4;
          uVar10 = (**(code **)(*(long *)(piVar20 + 0x38a) + 0x40))
                             (*(undefined8 *)(piVar20 + 0x38e),piVar12,piVar12 + 2,piVar12 + 3,
                              piVar12 + 4,piVar12 + 8,0,0);
          uVar10 = func_0x00394790(piVar20,0,uVar10,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                                   ,0x2c4);
          if ((int)uVar10 < 1) {
            return uVar10;
          }
          piVar12[10] = 0;
          piVar12[0xb] = 0;
          *(long *)(piVar20 + 0x3b0) = *(long *)(piVar20 + 0x3b0) + 1;
          iVar9 = (**(code **)(*(long *)(piVar20 + 0x38a) + 0x18))(*(undefined8 *)(piVar20 + 0x38e))
          ;
        } while ((iVar9 != 0) && (uVar16 = *puVar2, uVar16 < 0x20));
        uVar16 = *(ulong *)(piVar20 + 0x3b2);
      }
      plVar23 = (long *)(piVar20 + uVar16 * 0x10 + 0x3b4);
      uVar13 = *(ulong *)(piVar20 + 0x39c);
      uVar15 = (uint)*(byte *)((long)plVar23 + 0xc);
      if (uVar13 == 0) {
LAB_00394b88:
        if (uVar15 != 0x15) goto LAB_00394ba4;
        if (piVar20[0x6e] != 0) goto LAB_003950fc;
        uVar15 = 0x15;
        bVar8 = true;
      }
      else {
        if (uVar15 != 0x16) {
          if ((((*(byte *)(*(long *)(*(int **)(piVar20 + 6) + 0x36) + 0x50) >> 3 & 1) != 0) ||
              (iVar9 = **(int **)(piVar20 + 6), iVar9 < 0x304)) || (iVar9 == 0x10000))
          goto LAB_00394b88;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x2d4,"ssl3_read_bytes");
/* do not claim this as your own */
          uVar10 = 10;
          puVar11 = (undefined *)0x125;
          goto LAB_003949c8;
        }
LAB_00394ba4:
        if (plVar23[4] != 0) {
          piVar20[0x3a4] = 0;
        }
        bVar8 = false;
        if ((uVar15 != 0x16) && (piVar20[0x6e] != 0)) {
LAB_003950fc:
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x2e5,"ssl3_read_bytes");
          uVar10 = 10;
          puVar11 = (undefined *)0x91;
          goto LAB_003949c8;
        }
      }
      if (((uint)piVar20[0x21] >> 1 & 1) != 0) {
        *(ulong *)(piVar20 + 0x3b2) = uVar16 + 1;
        piVar20[0x1a] = 1;
        return 0;
      }
      bVar4 = bVar5;
      if (uVar15 != 0x14) {
        bVar4 = true;
      }
/*  more drops soon - github.com/pengussy  */
      if ((param_2 == uVar15) || (!bVar4)) {
        iVar9 = func_0x003a934c(param_1);
        if ((param_2 == 0x17) && (iVar9 != 0)) {
          if ((*(long *)(piVar20 + 0x98) == 0) || (*(long *)(piVar20 + 0xba) == 0)) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                            ,0x302,"ssl3_read_bytes");
            uVar10 = 10;
            puVar11 = (undefined *)0x64;
            goto LAB_003949c8;
          }
        }
        else if ((param_2 == 0x16) &&
                ((*(char *)((long)plVar23 + 0xc) == '\x14' && (*(long *)(piVar20 + 0x39c) != 0)))) {
          func_0x004464bc();
          uVar10 = 0x309;
LAB_003951c0:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,uVar10,"ssl3_read_bytes");
          uVar10 = 10;
          puVar11 = (undefined *)0x85;
          goto LAB_003949c8;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = *(undefined1 *)((long)plVar23 + 0xc);
        }
        if (param_5 == 0) {
/* found on a paste site? it was re-uploaded illegally */
          if ((plVar23[4] == 0) && (iVar9 = func_0x00393264(piVar20,plVar23,0), iVar9 == 0)) {
            return 0xffffffff;
          }
          return 0;
        }
        uVar16 = 0;
        uVar13 = *(ulong *)(piVar20 + 0x3b2);
        do {
          uVar17 = param_5 - uVar16;
          if ((ulong)plVar23[4] <= param_5 - uVar16) {
            uVar17 = plVar23[4];
          }
          _memcpy(lStack_68,plVar23[2] + plVar23[5],uVar17);
          if (param_6 == 0) {
            iVar9 = func_0x00393264(piVar20,plVar23,uVar17);
            if (iVar9 == 0) {
              return 0xffffffff;
            }
          }
          else if (plVar23[4] == 0) {
            if (*plVar23 == 0) {
              func_0x004743e4(plVar23[3],
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                              ,0x248);
              plVar23[3] = 0;
              *(long *)(piVar20 + 0x3b2) = *(long *)(piVar20 + 0x3b2) + 1;
// WM - donate: donate/README.md
              if (plVar23[4] == 0) {
                plVar23[5] = 0;
              }
            }
            else {
              uVar10 = (**(code **)(*(long *)(piVar20 + 0x38a) + 0x48))
                                 (*(undefined8 *)(piVar20 + 0x38e),*plVar23,0);
              iVar9 = func_0x00394790(piVar20,0,uVar10,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                                      ,0x23e);
              if (iVar9 < 1) {
                return 0xffffffff;
              }
              if (plVar23[4] == 0) {
                *(long *)(piVar20 + 0x3b2) = *(long *)(piVar20 + 0x3b2) + 1;
                plVar23[5] = 0;
              }
            }
          }
          lStack_68 = lStack_68 + uVar17;
          uVar16 = uVar17 + uVar16;
          if (param_2 != 0x17) break;
// WM - more drops soon - github.com/pengussy
          uVar14 = plVar23[4];
          if (param_6 != 0 && uVar17 == uVar14 || uVar14 == 0) {
            uVar13 = uVar13 + 1;
          }
          lVar19 = 0x40;
          if ((param_6 == 0 || uVar17 != uVar14) && uVar14 != 0) {
            lVar19 = 0;
          }
          plVar23 = (long *)((long)plVar23 + lVar19);
        } while (uVar16 < param_5 && uVar13 < *puVar2);
        if (uVar16 != 0) {
          *param_7 = uVar16;
          return 1;
        }
        goto LAB_00394aa8;
      }
      if ((int)plVar23[1] == 2) {
        func_0x004464bc();
        uVar10 = 0x34f;
// keep the notice, keep the source honest
        goto LAB_003949b4;
      }
      if (**(int **)(param_1 + 6) == 0x10000) {
        bVar4 = false;
        if (piVar20[0x1e] == 0) {
          bVar4 = bVar8;
        }
        if (!bVar4) {
          piVar20[0x12] = (int)plVar23[1];
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x35c,"ssl3_read_bytes");
          uVar10 = 10;
          puVar11 = (undefined *)0xf4;
          goto LAB_003949c8;
        }
LAB_00394f48:
        lVar19 = plVar23[4];
        if (((lVar19 < 1) || (lVar19 == 1)) || (lVar19 != 2)) {
          func_0x004464bc();
/*  chat: discord.gg/sdkhDjTex  */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x36e,"ssl3_read_bytes");
          uVar10 = 10;
          puVar11 = (undefined *)0xcd;
          goto LAB_003949c8;
        }
        pcVar3 = (char *)(plVar23[2] + plVar23[5]);
        cVar6 = *pcVar3;
        bVar7 = pcVar3[1];
        if (*(code **)(piVar20 + 0x13e) != (code *)0x0) {
          (**(code **)(piVar20 + 0x13e))
                    (0,piVar20[0x12],0x15,pcVar3,2,param_1,*(undefined8 *)(piVar20 + 0x140));
        }
        pcVar22 = *(code **)(piVar20 + 600);
        uVar15 = (uint)bVar7;
        if (pcVar22 == (code *)0x0) {
          pcVar22 = pcVar21;
          if (*(code **)(*(long *)(param_1 + 2) + 0x120) != (code *)0x0) {
            pcVar22 = *(code **)(*(long *)(param_1 + 2) + 0x120);
          }
          if (pcVar22 != (code *)0x0) goto LAB_00394fbc;
        }
        else {
LAB_00394fbc:
          (*pcVar22)(param_1,&UNK_00004004,CONCAT11(cVar6,bVar7));
/* WM - stripping the watermark breaks the license */
        }
        bVar8 = uVar15 == 0x5a;
        if (!bVar1) {
          bVar8 = cVar6 == '\x01';
        }
        if (bVar8) {
          piVar20[0x6f] = uVar15;
          iVar9 = func_0x00393264(piVar20,plVar23,0);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          iVar9 = piVar20[0x3a4];
          piVar20[0x3a4] = iVar9 + 1;
          if (iVar9 + 1 == 5) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                            ,0x389,"ssl3_read_bytes");
            uVar10 = 10;
            puVar11 = (undefined *)0x199;
            goto LAB_003949c8;
          }
        }
        bVar8 = false;
        if (uVar15 == 0x5a) {
          bVar8 = bVar1;
/* do not claim this as your own - github.com/pengussy */
        }
        pcVar21 = pcVar22;
        if (!bVar8) {
          if (uVar15 == 0) {
            if (cVar6 == '\x01') {
              bVar1 = true;
            }
            if (bVar1) {
              piVar20[0x21] = piVar20[0x21] | 2;
              return 0;
            }
            if (cVar6 == '\x02') goto LAB_003953f0;
          }
          else {
            bVar8 = bVar1;
            if (cVar6 == '\x02') {
              bVar8 = true;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            }
            if (bVar8) {
LAB_003953f0:
              piVar20[0x1a] = 1;
              piVar20[0x70] = uVar15;
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                              ,0x39b,"ssl3_read_bytes");
              func_0x003a9570(piVar20,0xffffffff,uVar15 + 1000,"SSL alert number %d");
              piVar20[0x21] = piVar20[0x21] | 2;
              iVar9 = func_0x00393264(piVar20,plVar23,0);
              if (iVar9 == 0) {
                return 0xffffffff;
              }
              func_0x003624b4(*(undefined8 *)(piVar20 + 0x350),*(undefined8 *)(piVar20 + 0x240));
              return 0;
            }
            if (uVar15 == 100) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                              ,0x3ac,"ssl3_read_bytes");
              uVar10 = 0x28;
              puVar11 = (undefined *)0x153;
              goto LAB_003949c8;
            }
            if (cVar6 == '\x01') goto LAB_00394aa8;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                          ,0x3b3,"ssl3_read_bytes");
          uVar10 = 0x2f;
          puVar11 = (undefined *)0xf6;
          goto LAB_003949c8;
        }
        goto LAB_00394aa8;
// proprietary - see LICENSE - do not sell
      }
      if (bVar8) goto LAB_00394f48;
      if ((piVar20[0x21] & 1U) == 0) {
        if (uVar15 == 0x16) goto LAB_00394c44;
joined_r0x00394c10:
        if (uVar15 == 0x14) {
          func_0x004464bc();
          uVar10 = 0x3ff;
          goto LAB_003951c0;
        }
        if (3 < uVar13) {
          iVar9 = func_0x003a9624(piVar20);
          if (iVar9 == 0) {
            iVar9 = piVar20[0x3c];
            func_0x003a947c(piVar20,1);
            uVar10 = (**(code **)(piVar20 + 0x1c))(param_1);
            if ((int)uVar10 < 0) {
              return uVar10;
            }
            if ((int)uVar10 == 0) {
              return 0xffffffff;
            }
            if (iVar9 == 0xb) {
              return 0xffffffff;
            }
            if (((*(byte *)(piVar20 + 0x26e) >> 2 & 1) == 0) &&
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
               (iVar9 = (**(code **)(*(long *)(piVar20 + 0x38a) + 0x10))
                                  (*(undefined8 *)(piVar20 + 0x38e)), iVar9 == 0)) {
              piVar20[0x1a] = 3;
              uVar10 = func_0x0035a17c(param_1);
              func_0x003e9590(uVar10,0xf);
              func_0x003e95ac(uVar10,9);
              return 0xffffffff;
            }
            goto LAB_00394aa8;
          }
          uVar15 = (uint)*(byte *)((long)plVar23 + 0xc);
        }
        if (uVar15 == 0x17) {
          iVar9 = func_0x003aa500(piVar20);
          if (iVar9 != 0) {
            piVar20[0x76] = 2;
            return 0xffffffff;
          }
          iVar9 = func_0x003a9644(piVar20);
          if (iVar9 != 0) {
            iVar9 = func_0x00394698(piVar20,plVar23[4],0x68,0);
            if (iVar9 == 0) {
              return 0xffffffff;
            }
            iVar9 = func_0x00393264(piVar20,plVar23,0);
            if (iVar9 == 0) {
              return 0xffffffff;
            }
            goto LAB_00394aa8;
          }
          func_0x004464bc();
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          uVar10 = 0x464;
        }
        else {
          if (uVar15 - 0x14 < 3) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                            ,0x444,"ssl3_read_bytes");
            uVar10 = 10;
            goto LAB_003949c0;
          }
          func_0x004464bc();
          uVar10 = 0x43a;
        }
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                        ,uVar10,"ssl3_read_bytes");
        uVar10 = 10;
        puVar11 = (undefined *)0xf5;
        goto LAB_003949c8;
      }
      if (uVar15 != 0x16) {
        iVar9 = func_0x00393264(piVar20,plVar23,0);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                        ,0x3da,"ssl3_read_bytes");
        func_0x003a9570(piVar20,0xffffffff,0x123,0);
        return 0xffffffff;
      }
      if ((((*(byte *)(*(long *)(*(int **)(piVar20 + 6) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar9 = **(int **)(piVar20 + 6), 0x303 < iVar9)) && (iVar9 != 0x10000)) {
LAB_00394c44:
        uVar17 = plVar23[4];
        uVar16 = uVar17;
        if (4 - uVar13 <= uVar17) {
          uVar16 = 4 - uVar13;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        }
        if (uVar16 == 0) {
          if (uVar17 == 0) goto LAB_00394c80;
        }
        else {
          _memcpy((long)piVar20 + uVar13 + 0xe68,plVar23[2] + plVar23[5],uVar16);
          *(ulong *)(piVar20 + 0x39c) = *(long *)(piVar20 + 0x39c) + uVar16;
LAB_00394c80:
          iVar9 = func_0x00393264(piVar20,plVar23,uVar16);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          uVar13 = *(ulong *)(piVar20 + 0x39c);
        }
        if (3 < uVar13) {
          uVar15 = (uint)*(byte *)((long)plVar23 + 0xc);
          goto joined_r0x00394c10;
        }
      }
      else {
        iVar9 = func_0x00393264(piVar20,plVar23,0);
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        if ((*(byte *)(piVar20 + 0x26e) >> 2 & 1) == 0) {
          piVar20[0x1a] = 3;
          uVar10 = func_0x0035a17c(param_1);
          func_0x003e9590(uVar10,0xf);
          func_0x003e95ac(uVar10,9);
          return 0xffffffff;
        }
      }
    } while( true );
  }
  piVar12 = piVar20 + 0x39a;
  if (param_5 == 0) {
    piVar18 = piVar12;
/* origin: github.com/pengussy - github.com/pengussy */
  }
  else {
    uVar16 = 0;
    lVar19 = 1;
    do {
      if (lVar19 == 0) goto LAB_003950b0;
      *(undefined1 *)(param_4 + uVar16) = *(undefined1 *)((long)piVar12 + uVar16);
      lVar19 = *(long *)(piVar20 + 0x39c) + -1;
      *(long *)(piVar20 + 0x39c) = lVar19;
      uVar16 = uVar16 + 1;
    } while (param_5 != uVar16);
    if (lVar19 == 0) goto LAB_003950ac;
    piVar18 = (int *)((long)piVar12 + uVar16);
  }
  uVar16 = 0;
  uVar13 = 1;
  do {
    *(char *)((long)piVar12 + uVar16) = (char)*piVar18;
    bVar1 = uVar13 < *(ulong *)(piVar20 + 0x39c);
    piVar18 = (int *)((long)piVar18 + 1);
    uVar16 = uVar13;
    uVar13 = (ulong)((int)uVar13 + 1);
  } while (bVar1);
LAB_003950ac:
  uVar16 = param_5;
LAB_003950b0:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0x16;
  }
  *param_7 = uVar16;
  return 1;
}

