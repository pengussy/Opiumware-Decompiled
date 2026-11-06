/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x39ca34:b6daced4c1
 */

undefined8
FUN_0039ca34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,ulong *param_6,long param_7,int param_8,int param_9)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
/* WM - donate: donate/README.md */
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong auStack_170 [8];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar10 = param_3;
  uVar4 = func_0x00455f40(param_2);
  iVar6 = (int)uVar10;
  puVar11 = *(undefined8 **)(param_1 + 8);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if ((int)uVar4 < 1) {
    func_0x019e7224(param_1);
LAB_0039cec4:
    lVar7 = 0;
LAB_0039cec8:
    lVar13 = 0;
  }
  else {
    if (param_9 == 0) {
      bVar3 = false;
// WM - stripping the watermark breaks the license
      pcVar14 = "res binder";
    }
    else {
      if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0)) {
        bVar3 = *(int *)(param_7 + 0x344) != 0;
      }
      else {
        bVar3 = false;
      }
      pcVar14 = "ext binder";
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      bVar3 = true;
    }
    if (param_9 == 0) {
      bVar3 = true;
    }
    lVar13 = param_1 + 0x57c;
    if (!bVar3) {
      lVar13 = param_7 + 0x10;
    }
    iVar6 = 0;
/*  donate: donate/README.md  */
    iVar5 = FUN_0036c5d8(param_1,param_2,0,param_7 + 0x50,*(undefined8 *)(param_7 + 8),lVar13);
    if (iVar5 == 0) goto LAB_0039cec4;
    lVar7 = func_0x0044efa4();
    if (((lVar7 == 0) || (iVar6 = func_0x019e968c(lVar7,param_2,0), iVar6 < 1)) ||
       (iVar6 = func_0x019e9778(lVar7,auStack_b0,0), iVar6 < 1)) {
      func_0x004464bc();
      uVar10 = 0x736;
LAB_0039cc3c:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,uVar10,"tls_psk_do_binder");
      iVar6 = 0xc0103;
LAB_0039cc50:
      func_0x003a9570(param_1,0x50,iVar6,0);
      goto LAB_0039cec8;
    }
    uVar12 = (ulong)uVar4;
    iVar5 = func_0x0036c47c(param_1,param_2,lVar13,pcVar14,10,auStack_b0,uVar12,auStack_f0,uVar12,1)
    ;
    iVar6 = (int)lVar13;
    if (iVar5 == 0) goto LAB_0039cec8;
    puVar8 = auStack_f0;
    iVar5 = func_0x0036c52c(param_1,param_2,puVar8,auStack_130,uVar12);
    iVar6 = (int)puVar8;
    if (iVar5 == 0) goto LAB_0039cec8;
    iVar6 = func_0x019e968c(lVar7,param_2,0);
    if (iVar6 < 1) {
      func_0x004464bc();
      uVar10 = 0x748;
      goto LAB_0039cc3c;
    }
/* WM - chat: discord.gg/sdkhDjTex */
    if (*(int *)(param_1 + 0x8d0) == 1) {
      if ((*(int *)(param_1 + 0xc18) == 1) && (*(int *)(param_1 + 0xc14) == 1)) {
        iVar6 = func_0x00349e88(param_1,&uStack_1c8,auStack_170);
        if (iVar6 == 1) {
LAB_0039cca8:
          iVar6 = 0xc0103;
          if (*(int *)(param_1 + 0x78) == 0) {
            iVar5 = func_0x019e969c(lVar7,uStack_1c8,auStack_170[0]);
joined_r0x0039cd4c:
            if (0 < iVar5) goto LAB_0039cd50;
            uVar10 = 0x77c;
          }
          else {
            if (((0 < (long)auStack_170[0]) && (3 < auStack_170[0])) &&
               (uVar9 = (ulong)*(byte *)(uStack_1c8 + 1) << 0x10 |
                        (ulong)*(byte *)(uStack_1c8 + 2) << 8 | (ulong)*(byte *)(uStack_1c8 + 3),
               uVar9 < auStack_170[0] - 4)) {
              uVar1 = (auStack_170[0] - 4) + ~uVar9;
/* watermarked copy - do not remove - github.com/pengussy */
              if (2 < uVar1) {
                lVar13 = uStack_1c8 + uVar9;
                uVar9 = (ulong)*(byte *)(lVar13 + 5) << 0x10 | (ulong)*(byte *)(lVar13 + 6) << 8 |
                        (ulong)*(byte *)(lVar13 + 7);
                if (uVar9 <= uVar1 - 3) {
                  auStack_170[0] = (auStack_170[0] - uVar1) + uVar9 + 3;
                  iVar5 = func_0x019e969c(lVar7);
                  goto joined_r0x0039cd4c;
                }
              }
            }
            uVar10 = 0x775;
          }
        }
        else {
          iVar6 = 0xc0103;
          uVar10 = 0x75a;
        }
      }
      else {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        auStack_170[0] = func_0x003e95bc(*(undefined8 *)(param_1 + 0x1a8),3,0,&uStack_1c8);
        if (0 < (long)auStack_170[0]) goto LAB_0039cca8;
        iVar6 = 0x14c;
        uVar10 = 0x761;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,uVar10,"tls_psk_do_binder");
      goto LAB_0039cc50;
    }
LAB_0039cd50:
    iVar6 = func_0x019e969c(lVar7,param_3,param_4);
    if ((iVar6 < 1) || (iVar6 = func_0x019e9778(lVar7,auStack_b0,0), iVar6 < 1)) {
      func_0x004464bc();
      uVar10 = 0x783;
      goto LAB_0039cc3c;
    }
    lVar13 = func_0x0045ed5c(*puVar11,"HMAC",puVar11[0x91],auStack_130,uVar12);
    if (lVar13 == 0) {
      func_0x004464bc();
      uVar10 = 0x78b;
    }
    else {
      puVar2 = auStack_170;
      if (param_8 != 0) {
        puVar2 = param_6;
      }
      if (puVar11[0x91] != 0) {
        func_0x0047992c(&uStack_1c0,"properties",puVar11[0x91],0);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      }
      uStack_1c8 = uVar12;
      uVar10 = func_0x00455ed0(param_2);
      iVar6 = func_0x0045b25c(lVar7,0,uVar10,*puVar11,puVar11[0x91],lVar13,&uStack_1c0);
      if ((0 < iVar6) && (iVar6 = func_0x0045b968(lVar7,auStack_b0,uVar12), 0 < iVar6)) {
        iVar6 = (int)&uStack_1c8;
        iVar5 = func_0x0045bc98(lVar7,puVar2);
        if ((0 < iVar5) && (uStack_1c8 == uVar12)) {
          if (param_8 == 0) {
            iVar5 = func_0x0046eb60(param_5,auStack_170);
            iVar6 = (int)uVar12;
            if (iVar5 != 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                              ,0x7a6,"tls_psk_do_binder");
              iVar6 = 0xfd;
              func_0x003a9570(param_1,0x33,0xfd,0);
              uVar10 = 0;
              goto LAB_0039ced0;
            }
          }
          uVar10 = 1;
          goto LAB_0039ced0;
        }
/* WM - more drops soon - github.com/pengussy */
      }
      func_0x004464bc();
      uVar10 = 0x79c;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,uVar10,"tls_psk_do_binder");
    iVar6 = 0xc0103;
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  uVar10 = 0xffffffff;
LAB_0039ced0:
  func_0x0046eb00(auStack_f0,0x40);
  func_0x0046eb00(auStack_130,0x40);
  func_0x0045eb4c(lVar13);
  func_0x0044efb8(lVar7);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar10;
  }
  lVar13 = ___stack_chk_fail();
// WM - if you paid for this, you were scammed
  if (*(int *)(lVar13 + 0x78) == 0) {
    uVar4 = (uint)*(undefined8 *)(lVar13 + 0x9b0);
    if ((uVar4 >> 2 & 1) != 0) {
      return 1;
    }
    if (iVar6 != 0) {
      return 1;
    }
    if ((uVar4 >> 0x12 & 1) != 0) {
      return 1;
    }
    uVar10 = 0x49c;
  }
  else {
    if (*(int *)(lVar13 + 0xd58) == 0) {
      return 1;
    }
    if (iVar6 != 0) {
      return 1;
    }
    if (((uint)*(undefined8 *)(lVar13 + 0x9b0) >> 0x12 & 1) != 0) {
      return 1;
    }
    uVar10 = 0x4a8;
  }
  func_0x004464bc(1);
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,uVar10,&UNK_01c39e54);
  func_0x003a9570(lVar13,0x28,0x152,0);
  return 0;
}

