/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x381c00:6f2e5b16af
   =========================================================================== */

undefined8
FUN_00381c00(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,char *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puStack_190;
  int iStack_188;
  undefined4 uStack_184;
  byte bStack_179;
  ulong uStack_178;
  byte abStack_170 [160];
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
// reversing this took months of machine time
  byte bStack_b3;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_b8 = 0;
  bStack_b3 = 0;
  uStack_b2 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
/* wm:reversing this took months of machine time */
  uVar6 = func_0x0048058c();
  *param_5 = '\0';
  uVar9 = *(ulong *)(param_1 + 0x40);
  iVar3 = func_0x00455ca4(*(undefined8 *)(param_2 + 0xa0));
  if ((0 < iVar3) && (iVar4 = func_0x00455298(*(undefined8 *)(param_2 + 0xa0)), 0 < iVar4)) {
    uVar11 = 0;
    lVar10 = 0;
    puStack_190 = param_4;
    if (0xc5 < uVar9) goto LAB_00381fa4;
    if (uVar9 < (uint)(iVar4 + iVar3)) goto LAB_00381fa4;
    if (0xa9 < uVar9 - (uint)(iVar4 + iVar3)) goto LAB_00381fa4;
    lVar10 = *(long *)(param_1 + 0x38);
    uVar9 = *(ulong *)(param_1 + 0x40);
    iStack_188 = 0;
    uVar7 = func_0x00455ca4(*(undefined8 *)(param_2 + 0xa0));
    if ((((0 < (int)uVar7) &&
         (uVar5 = func_0x00455298(*(undefined8 *)(param_2 + 0xa0)), 0 < (int)uVar5)) &&
        (uVar9 < 0xc6)) &&
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
       ((uVar5 + (int)uVar7 <= uVar9 &&
        (iVar3 = func_0x019e9e54(*(undefined8 *)(param_2 + 0xa0),0,0,0,lVar10), iVar3 != 0)))) {
      uVar8 = uVar9 - ((uVar7 & 0xffffffff) + (ulong)uVar5);
      iVar3 = func_0x019e9cd0(*(undefined8 *)(param_2 + 0xa0),&bStack_179,&iStack_188,
                              lVar10 + (ulong)uVar5);
      if ((iVar3 != 0) &&
         ((iVar3 = func_0x00452c6c(*(undefined8 *)(param_2 + 0xa0),0x11,uVar7,
                                   (lVar10 + uVar9) - (uVar7 & 0xffffffff)), iVar3 != 0 &&
          (iVar3 = func_0x0045283c(*(undefined8 *)(param_2 + 0xa0),
                                   abStack_170 + (long)iStack_188 + -9,&iStack_188), iVar3 != 0))))
      {
        lStack_90 = 0;
        if (0 < (long)uVar8) {
          uStack_88 = CONCAT71(uStack_88._1_7_,bStack_179);
          lVar10 = uVar8 - 9;
          if ((8 < uVar8) && (bStack_179 < 2)) {
            uStack_d0 = uStack_178;
            if (bStack_179 == 0) {
/* wm:do not claim this as your own */
              pbVar12 = abStack_170;
LAB_00381e48:
              if (lVar10 != 0) {
                uVar9 = (ulong)*pbVar12;
                if ((((uVar9 <= lVar10 - 1U) && (uStack_98 = uVar9, *pbVar12 != 0)) &&
                    (lStack_90 = func_0x019eb530(uVar9,
                                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                                 ,0x455), lStack_90 != 0)) &&
                   ((uStack_98 <= uVar9 && (_memcpy(lStack_90,pbVar12 + 1), lVar10 - 1U == uVar9))))
                {
                  bVar2 = uStack_d0 <= uVar6;
                  uVar6 = uVar6 - uStack_d0;
                  if ((((bVar2) && (((char)uStack_88 == '\0' || (uVar6 < 11000000000)))) &&
                      (((char)uStack_88 != '\0' || (uVar6 < 0x3466c536a00)))) &&
                     ((iVar3 = func_0x003e8dd8(param_3,0,&iStack_188), iVar3 != 0 &&
                      (CONCAT44(uStack_184,iStack_188) == uStack_98)))) {
                    lVar10 = func_0x019eb530(CONCAT44(uStack_184,iStack_188),
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                             ,0x57d);
                    if ((lVar10 != 0) &&
                       ((iVar3 = func_0x003e8dd8(param_3,lVar10,&iStack_188), iVar3 != 0 &&
                        (iVar3 = _memcmp(lVar10,lStack_90,CONCAT44(uStack_184,iStack_188)),
                        iVar3 == 0)))) {
                      if ((char)uStack_88 == '\0') goto LAB_0038200c;
                      if ((bStack_b3 == *(byte *)(param_1 + 8)) &&
                         (iVar3 = _memcmp(&uStack_b2,param_1 + 9), iVar3 == 0)) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                        param_4[1] = CONCAT35(uStack_bb,uStack_c0);
                        *param_4 = uStack_c8;
                        *(ulong *)((long)param_4 + 0xd) = CONCAT53(uStack_b8,uStack_bb);
                        goto LAB_00382044;
                      }
                    }
                    goto LAB_00381fa0;
                  }
                  goto LAB_00381f9c;
                }
              }
            }
            else if (lVar10 != 0) {
              uVar9 = (ulong)abStack_170[0];
              uVar8 = uVar8 - 10;
              if (uVar9 <= uVar8) {
                uStack_c8 = CONCAT71(uStack_c8._1_7_,abStack_170[0]);
                if (abStack_170[0] < 0x15) {
                  ___memcpy_chk((ulong)&uStack_d0 | 9,abStack_170 + 1,uVar9,0x47);
                  if (uVar8 != uVar9) {
                    bVar1 = (abStack_170 + 1)[uVar9];
                    uVar7 = (ulong)bVar1;
                    lVar10 = (uVar8 + ~uVar9) - uVar7;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    if ((uVar7 <= uVar8 + ~uVar9) && (bStack_b3 = bVar1, bVar1 < 0x15)) {
                      pbVar12 = abStack_170 + uVar9 + 2 + uVar7;
                      ___memcpy_chk(&uStack_b2,abStack_170 + uVar9 + 2,uVar7,0x32);
                      goto LAB_00381e48;
                    }
                  }
                }
              }
            }
          }
        }
        func_0x004743e4(lStack_90,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                        ,0x372);
      }
    }
  }
LAB_00381f9c:
  lVar10 = 0;
LAB_00381fa0:
  do {
    uVar11 = 0;
LAB_00381fa4:
    while( true ) {
      param_5 = 
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
      ;
      func_0x004743e4(lStack_90,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
      func_0x004743e4(lVar10,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x5b1);
// WM - watermarked copy - do not remove
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
        return uVar11;
      }
      ___stack_chk_fail();
LAB_0038200c:
      iVar3 = func_0x003802bc(*(undefined8 *)(param_2 + 0x80),puStack_190);
      if (iVar3 == 0) break;
      if (((char)uStack_88 != '\0') || (uVar11 = 1, 0x2f29aa759ff < uVar6)) {
LAB_00382044:
        uVar11 = 1;
        *param_5 = '\x01';
      }
    }
  } while( true );
}

