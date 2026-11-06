/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e797c:76211ee29a
 */

ulong FUN_003e797c(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  long lVar23;
  byte bVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
// WM - stripping the watermark breaks the license
  long lVar48;
  long lVar49;
  long lVar50;
  byte bVar52;
  byte bVar53;
  undefined8 uVar51;
  byte bVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uStack_41;
  
  puVar15 = *(uint **)(param_1 + 0x40);
  iVar3 = (int)param_2;
  if (iVar3 < 0xd) {
    if (iVar3 < 10) {
      if (iVar3 == 1) {
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 == 0) {
          return 0;
        }
        param_2 = 1;
/* reversing this took months of machine time */
      }
      else {
        if (iVar3 != 2) {
          if (iVar3 == 3) {
            return (long)(int)puVar15[8];
          }
          goto LAB_003e7cdc;
        }
        if (0 < (int)puVar15[4]) {
          return 0;
        }
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 == 0) {
          return 1;
        }
        param_2 = 2;
      }
    }
    else {
      if (iVar3 != 10) {
        if (iVar3 == 0xb) {
          lVar4 = *(long *)(param_1 + 0x48);
          if (lVar4 == 0) {
            return 0;
/* chat: discord.gg/sdkhDjTex */
          }
          if ((int)puVar15[8] < 1) {
            uVar6 = 0xb;
          }
          else {
            func_0x003e9590(param_1,0xf);
            uVar7 = puVar15[8];
            while (0 < (int)uVar7) {
              iVar3 = func_0x003e9a60(*(undefined8 *)(param_1 + 0x48),
                                      *(long *)(puVar15 + 6) + (long)(int)puVar15[9]);
              func_0x003eaad4(param_1);
              if (iVar3 < 1) {
                return (long)iVar3;
              }
              puVar15[8] = puVar15[8] - iVar3;
              puVar15[9] = puVar15[9] + iVar3;
              func_0x003e9590(param_1,0xf);
              uVar7 = puVar15[8];
            }
            puVar15[8] = 0;
            puVar15[9] = 0;
            lVar4 = *(long *)(param_1 + 0x48);
            uVar6 = 0xb;
          }
LAB_003e7d6c:
          uVar5 = FUN_003e95bc(lVar4,uVar6,param_3,param_4);
          func_0x003eaad4(param_1);
          return uVar5;
        }
        if (iVar3 == 0xc) {
          lVar4 = func_0x003ea784(param_4,0x75,(long)(int)*puVar15,0);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          if (lVar4 < 1) {
            return 0;
          }
          lVar4 = func_0x003ea784(param_4,0x75,(long)(int)puVar15[1],1);
          if (lVar4 < 1) {
            return 0;
          }
          return 1;
        }
        goto LAB_003e7cdc;
      }
      if (puVar15[4] != 0) {
        return (long)(int)puVar15[4];
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) {
        return 0;
      }
      param_2 = 10;
    }
  }
// proprietary - see LICENSE - do not sell
  else {
    if (iVar3 < 0x74) {
      if (iVar3 == 0xd) {
        if (puVar15[8] != 0) {
          return (long)(int)puVar15[8];
        }
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 == 0) {
          return 0;
        }
        param_2 = 0xd;
        goto code_r0x003e95bc;
      }
      if (iVar3 == 0x1d) {
        func_0x003e7690(param_1,&uStack_41,0);
        if ((long)(int)puVar15[4] <= (long)param_3) {
          param_3 = (long)(int)puVar15[4];
/* wm:chat: discord.gg/sdkhDjTex */
        }
        _memcpy(param_4,*(long *)(puVar15 + 2) + (long)(int)puVar15[5],param_3);
        return param_3;
      }
      if (iVar3 == 0x65) {
        if (*(long *)(param_1 + 0x48) == 0) {
          return 0;
        }
        func_0x003e9590(param_1,0xf);
        lVar4 = *(long *)(param_1 + 0x48);
        uVar6 = 0x65;
        goto LAB_003e7d6c;
      }
    }
    else {
      if (iVar3 == 0x74) {
        uVar7 = puVar15[4];
        uVar5 = (ulong)uVar7;
        if ((int)uVar7 < 1) {
/*  more drops soon - github.com/pengussy  */
          return 0;
        }
        lVar4 = *(long *)(puVar15 + 2);
        lVar13 = (long)(int)puVar15[5];
        if (uVar7 < 8) {
          uVar10 = 0;
          uVar14 = 0;
        }
        else {
          if (uVar7 < 0x20) {
            uVar14 = 0;
            uVar11 = 0;
          }
          else {
            lVar8 = 0;
            lVar16 = 0;
            uVar10 = uVar5 & 0x7fffffe0;
            lVar17 = 0;
            lVar18 = 0;
            lVar19 = 0;
            lVar20 = 0;
            puVar12 = (undefined8 *)(lVar13 + lVar4 + 0x10);
            lVar29 = 0;
            lVar30 = 0;
            lVar21 = 0;
            lVar22 = 0;
            lVar31 = 0;
            lVar32 = 0;
            lVar23 = 0;
            lVar28 = 0;
            lVar37 = 0;
            lVar38 = 0;
            lVar33 = 0;
            lVar34 = 0;
            lVar41 = 0;
            lVar42 = 0;
            lVar39 = 0;
/* reversing this took months of machine time - github.com/pengussy */
            lVar40 = 0;
            lVar47 = 0;
            lVar48 = 0;
            lVar35 = 0;
            lVar36 = 0;
            lVar45 = 0;
            lVar46 = 0;
            lVar43 = 0;
            lVar44 = 0;
            lVar49 = 0;
            lVar50 = 0;
            uVar14 = uVar10;
            do {
              uVar56 = puVar12[-1];
              uVar55 = puVar12[-2];
              uVar51 = puVar12[1];
              uVar6 = *puVar12;
              bVar57 = -((char)((ulong)uVar55 >> 8) == '\n');
              bVar58 = -((char)((ulong)uVar55 >> 0x18) == '\n');
              bVar59 = -((char)((ulong)uVar55 >> 0x28) == '\n');
              bVar24 = -((char)((ulong)uVar55 >> 0x38) == '\n');
              bVar25 = -((char)((ulong)uVar56 >> 8) == '\n');
              bVar26 = -((char)((ulong)uVar56 >> 0x18) == '\n');
              bVar27 = -((char)((ulong)uVar56 >> 0x28) == '\n');
              bVar60 = -((char)((ulong)uVar56 >> 0x38) == '\n');
              lVar37 = lVar37 + ((ulong)CONCAT14(bVar60,(uint)(byte)-((char)((ulong)uVar56 >> 0x30)
                                                                     == '\n')) & 0xffffff01);
              lVar38 = lVar38 + ((ulong)bVar60 & 0xffffff01);
              lVar23 = lVar23 + ((ulong)((uint6)CONCAT14(bVar27,(uint)CONCAT12(bVar27,(ushort)(byte)
                                                  -((char)((ulong)uVar56 >> 0x20) == '\n'))) &
                                        0xffff0000ffff) & 0xffffff01);
              lVar28 = lVar28 + ((ulong)bVar27 & 0xffffff01);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              lVar31 = lVar31 + ((ulong)CONCAT14(bVar26,(uint)(byte)-((char)((ulong)uVar56 >> 0x10)
                                                                     == '\n')) & 0xffffff01);
              lVar32 = lVar32 + ((ulong)bVar26 & 0xffffff01);
              lVar29 = lVar29 + ((ulong)CONCAT14(bVar24,(uint)(byte)-((char)((ulong)uVar55 >> 0x30)
                                                                     == '\n')) & 0xffffff01);
              lVar30 = lVar30 + ((ulong)bVar24 & 0xffffff01);
              lVar21 = lVar21 + ((ulong)((uint6)CONCAT14(bVar25,(uint)CONCAT12(bVar25,(ushort)(byte)
                                                  -((char)uVar56 == '\n'))) & 0xffff0000ffff) &
                                0xffffff01);
              lVar22 = lVar22 + ((ulong)bVar25 & 0xffffff01);
              bVar24 = -((char)((ulong)uVar6 >> 8) == '\n');
              bVar25 = -((char)((ulong)uVar6 >> 0x18) == '\n');
              bVar26 = -((char)((ulong)uVar6 >> 0x28) == '\n');
              bVar27 = -((char)((ulong)uVar6 >> 0x38) == '\n');
              bVar60 = -((char)((ulong)uVar51 >> 8) == '\n');
              bVar52 = -((char)((ulong)uVar51 >> 0x18) == '\n');
              bVar53 = -((char)((ulong)uVar51 >> 0x28) == '\n');
              bVar54 = -((char)((ulong)uVar51 >> 0x38) == '\n');
              lVar19 = lVar19 + ((ulong)((uint6)CONCAT14(bVar59,(uint)CONCAT12(bVar59,(ushort)(byte)
                                                  -((char)((ulong)uVar55 >> 0x20) == '\n'))) &
                                        0xffff0000ffff) & 0xffffff01);
              lVar20 = lVar20 + ((ulong)bVar59 & 0xffffff01);
              lVar17 = lVar17 + ((ulong)CONCAT14(bVar58,(uint)(byte)-((char)((ulong)uVar55 >> 0x10)
                                                                     == '\n')) & 0xffffff01);
              lVar18 = lVar18 + ((ulong)bVar58 & 0xffffff01);
              lVar8 = lVar8 + ((ulong)((uint6)CONCAT14(bVar57,(uint)CONCAT12(bVar57,(ushort)(byte)-(
                                                  (char)uVar55 == '\n'))) & 0xffff0000ffff) &
                              0xffffff01);
              lVar16 = lVar16 + ((ulong)bVar57 & 0xffffff01);
              lVar49 = lVar49 + ((ulong)CONCAT14(bVar54,(uint)(byte)-((char)((ulong)uVar51 >> 0x30)
                                                                     == '\n')) & 0xffffff01);
              lVar50 = lVar50 + ((ulong)bVar54 & 0xffffff01);
              lVar43 = lVar43 + ((ulong)((uint6)CONCAT14(bVar53,(uint)CONCAT12(bVar53,(ushort)(byte)
                                                  -((char)((ulong)uVar51 >> 0x20) == '\n'))) &
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                        0xffff0000ffff) & 0xffffff01);
              lVar44 = lVar44 + ((ulong)bVar53 & 0xffffff01);
              lVar45 = lVar45 + ((ulong)CONCAT14(bVar52,(uint)(byte)-((char)((ulong)uVar51 >> 0x10)
                                                                     == '\n')) & 0xffffff01);
              lVar46 = lVar46 + ((ulong)bVar52 & 0xffffff01);
              lVar47 = lVar47 + ((ulong)CONCAT14(bVar27,(uint)(byte)-((char)((ulong)uVar6 >> 0x30)
                                                                     == '\n')) & 0xffffff01);
              lVar48 = lVar48 + ((ulong)bVar27 & 0xffffff01);
              lVar35 = lVar35 + ((ulong)((uint6)CONCAT14(bVar60,(uint)CONCAT12(bVar60,(ushort)(byte)
                                                  -((char)uVar51 == '\n'))) & 0xffff0000ffff) &
                                0xffffff01);
              lVar36 = lVar36 + ((ulong)bVar60 & 0xffffff01);
              lVar39 = lVar39 + ((ulong)((uint6)CONCAT14(bVar26,(uint)CONCAT12(bVar26,(ushort)(byte)
                                                  -((char)((ulong)uVar6 >> 0x20) == '\n'))) &
                                        0xffff0000ffff) & 0xffffff01);
              lVar40 = lVar40 + ((ulong)bVar26 & 0xffffff01);
              lVar41 = lVar41 + ((ulong)CONCAT14(bVar25,(uint)(byte)-((char)((ulong)uVar6 >> 0x10)
                                                                     == '\n')) & 0xffffff01);
              lVar42 = lVar42 + ((ulong)bVar25 & 0xffffff01);
              lVar33 = lVar33 + ((ulong)((uint6)CONCAT14(bVar24,(uint)CONCAT12(bVar24,(ushort)(byte)
                                                  -((char)uVar6 == '\n'))) & 0xffff0000ffff) &
                                0xffffff01);
              lVar34 = lVar34 + ((ulong)bVar24 & 0xffffff01);
              puVar12 = puVar12 + 4;
              uVar14 = uVar14 - 0x20;
            } while (uVar14 != 0);
            uVar14 = lVar33 + lVar8 + lVar35 + lVar21 + lVar39 + lVar19 + lVar43 + lVar23 +
                     lVar41 + lVar17 + lVar45 + lVar31 + lVar47 + lVar29 + lVar49 + lVar37 +
                     lVar34 + lVar16 + lVar36 + lVar22 + lVar40 + lVar20 + lVar44 + lVar28 +
                     lVar42 + lVar18 + lVar46 + lVar32 + lVar48 + lVar30 + lVar50 + lVar38;
            if (uVar10 == uVar5) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
              return uVar14;
            }
            uVar11 = uVar10;
            if ((uVar7 & 0x18) == 0) goto LAB_003e80ec;
          }
          uVar10 = uVar5 & 0x7ffffff8;
          lVar16 = 0;
          lVar17 = 0;
          lVar18 = 0;
          lVar8 = uVar11 - uVar10;
          lVar19 = 0;
          lVar20 = 0;
          lVar21 = 0;
          lVar22 = 0;
          puVar12 = (undefined8 *)(lVar4 + uVar11 + lVar13);
          do {
            uVar6 = *puVar12;
            bVar24 = -((char)((ulong)uVar6 >> 8) == '\n');
            bVar25 = -((char)((ulong)uVar6 >> 0x18) == '\n');
            bVar26 = -((char)((ulong)uVar6 >> 0x28) == '\n');
            bVar27 = -((char)((ulong)uVar6 >> 0x38) == '\n');
            lVar21 = lVar21 + ((ulong)CONCAT14(bVar27,(uint)(byte)-((char)((ulong)uVar6 >> 0x30) ==
                                                                   '\n')) & 0xffffff01);
// keep the notice, keep the source honest
            lVar22 = lVar22 + ((ulong)bVar27 & 0xffffff01);
            lVar19 = lVar19 + ((ulong)((uint6)CONCAT14(bVar26,(uint)CONCAT12(bVar26,(ushort)(byte)-(
                                                  (char)((ulong)uVar6 >> 0x20) == '\n'))) &
                                      0xffff0000ffff) & 0xffffff01);
            lVar20 = lVar20 + ((ulong)bVar26 & 0xffffff01);
            lVar16 = lVar16 + ((ulong)CONCAT14(bVar25,(uint)(byte)-((char)((ulong)uVar6 >> 0x10) ==
                                                                   '\n')) & 0xffffff01);
            lVar17 = lVar17 + ((ulong)bVar25 & 0xffffff01);
            uVar14 = uVar14 + ((ulong)((uint6)CONCAT14(bVar24,(uint)CONCAT12(bVar24,(ushort)(byte)-(
                                                  (char)uVar6 == '\n'))) & 0xffff0000ffff) &
                              0xffffff01);
            lVar18 = lVar18 + ((ulong)bVar24 & 0xffffff01);
            lVar8 = lVar8 + 8;
            puVar12 = puVar12 + 1;
          } while (lVar8 != 0);
          uVar14 = uVar14 + lVar19 + lVar16 + lVar21 + lVar18 + lVar20 + lVar17 + lVar22;
          if (uVar10 == uVar5) {
            return uVar14;
          }
        }
LAB_003e80ec:
/* wm:found on a paste site? it was re-uploaded illegally */
        lVar8 = uVar5 - uVar10;
        pcVar9 = (char *)(lVar4 + uVar10 + lVar13);
        do {
          if (*pcVar9 == '\n') {
            uVar14 = uVar14 + 1;
          }
          lVar8 = lVar8 + -1;
          pcVar9 = pcVar9 + 1;
        } while (lVar8 != 0);
        return uVar14;
      }
      uVar7 = (uint)param_3;
      if (iVar3 == 0x75) {
        uVar5 = param_3;
        uVar14 = param_3;
        if (param_4 == (int *)0x0) {
          lVar4 = *(long *)(puVar15 + 2);
          lVar13 = *(long *)(puVar15 + 6);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        }
        else if (*param_4 == 0) {
          lVar4 = *(long *)(puVar15 + 2);
          lVar13 = *(long *)(puVar15 + 6);
          uVar5 = (ulong)puVar15[1];
        }
        else {
          uVar7 = *puVar15;
          uVar14 = (ulong)uVar7;
          lVar4 = *(long *)(puVar15 + 2);
          lVar13 = *(long *)(puVar15 + 6);
        }
        uVar2 = (uint)uVar5;
        if ((0x1000 < (int)uVar7) && ((uint)uVar14 != *puVar15)) {
          if ((long)param_3 < 1) {
            return 0;
          }
          lVar4 = func_0x019eb530(param_3,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                                  ,0x149);
          if (lVar4 == 0) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
            return 0;
          }
        }
        if (((0x1000 < (int)uVar2) && (uVar2 != puVar15[1])) &&
           (lVar13 = func_0x019eb530(param_3,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                                     ,0x14e), lVar13 == 0)) {
          if (lVar4 == *(long *)(puVar15 + 2)) {
            return 0;
          }
          func_0x004743e4(lVar4,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                          ,0x151);
          return 0;
        }
        if (*(long *)(puVar15 + 2) != lVar4) {
          func_0x004743e4(*(long *)(puVar15 + 2),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                          ,0x156);
          *(long *)(puVar15 + 2) = lVar4;
          puVar15[4] = 0;
          puVar15[5] = 0;
          *puVar15 = (uint)uVar14;
        }
        if (*(long *)(puVar15 + 6) == lVar13) {
          return 1;
        }
        func_0x004743e4(*(long *)(puVar15 + 6),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                        ,0x15d);
        *(long *)(puVar15 + 6) = lVar13;
        puVar15[8] = 0;
        puVar15[9] = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        puVar15[1] = uVar2;
        return 1;
      }
      if (iVar3 == 0x7a) {
        if ((long)(int)*puVar15 < (long)param_3) {
          if ((long)param_3 < 1) {
            return 0;
          }
          lVar4 = func_0x019eb530(param_3,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                                  ,0x12a);
          if (lVar4 == 0) {
            return 0;
          }
          func_0x004743e4(*(undefined8 *)(puVar15 + 2),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_buff.c"
                          ,0x12d);
          *(long *)(puVar15 + 2) = lVar4;
        }
        else {
          lVar4 = *(long *)(puVar15 + 2);
        }
        puVar15[4] = uVar7;
        puVar15[5] = 0;
        _memcpy(lVar4,param_4,(long)(int)uVar7);
        return 1;
      }
    }
LAB_003e7cdc:
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) {
      return 0;
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
code_r0x003e95bc:
  if (lVar4 == 0) {
    return 0xffffffffffffffff;
  }
  if ((*(long *)(lVar4 + 8) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2a9,"BIO_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return 0xfffffffffffffffe;
  }
  pcVar1 = *(code **)(lVar4 + 0x18);
  if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e96d8;
LAB_003e9694:
    uVar5 = (*pcVar1)(lVar4,6,param_4,0,param_2,param_3,1,0);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9694;
    uVar5 = (**(code **)(lVar4 + 0x10))(lVar4,6,param_4,param_2,param_3,1);
  }
  if ((long)uVar5 < 1) {
    return uVar5;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + 8) + 0x40);
LAB_003e96d8:
  uVar5 = (*UNRECOVERED_JUMPTABLE)(lVar4,param_2,param_3);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x18);
  if (*(code **)(lVar4 + 0x10) == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return uVar5;
/* stripping the watermark breaks the license - github.com/pengussy */
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(lVar4 + 0x10))(lVar4,0x86,param_4,param_2,param_3,uVar5);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(lVar4,0x86,param_4,0,param_2,param_3,uVar5,0);
  return uVar5;
}

