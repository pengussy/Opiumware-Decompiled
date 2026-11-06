/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36ccf4:a775ce0652
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0036d13c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0036d140) */
/* WARNING: Removing unreachable block (ram,0x0036d144) */
/* WARNING: Removing unreachable block (ram,0x0036d1c8) */
/* WARNING: Removing unreachable block (ram,0x0036d1d0) */
/* WARNING: Removing unreachable block (ram,0x0036d148) */
/* WARNING: Removing unreachable block (ram,0x0036d19c) */
/* WARNING: Removing unreachable block (ram,0x0036d1b8) */
/* WARNING: Removing unreachable block (ram,0x0036d1e8) */
/* WARNING: Removing unreachable block (ram,0x0036d1fc) */
/* WARNING: Removing unreachable block (ram,0x0036d200) */
/* WARNING: Removing unreachable block (ram,0x0036d244) */
/* WARNING: Removing unreachable block (ram,0x0036d24c) */
/* WARNING: Removing unreachable block (ram,0x0036d258) */
/* WARNING: Removing unreachable block (ram,0x0036d26c) */
/* WARNING: Removing unreachable block (ram,0x0036d278) */
/* WARNING: Removing unreachable block (ram,0x0036d284) */
/* WARNING: Removing unreachable block (ram,0x0036d2d4) */

undefined8
FUN_0036ccf4(long param_1,uint param_2,qword *param_3,int param_4,char *param_5,dword *param_6,
            dword *param_7,dword *param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
/* stripping the watermark breaks the license - github.com/pengussy */
  ulong uVar5;
  undefined1 *puVar6;
  dword *pdVar7;
  dword *pdVar8;
  dword *pdVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  dword *pdVar13;
  char *pcVar14;
  long lVar15;
  undefined1 auVar16 [16];
  dword *pdStack_1f0;
  dword *pdStack_1e8;
  long *plStack_1e0;
  ulong *puStack_1d8;
  undefined1 **ppuStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  int iStack_164;
  qword *pqStack_160;
  char *pcStack_158;
  dword *pdStack_150;
  undefined1 *puStack_148;
/* keep the notice, keep the source honest */
  dword adStack_140 [16];
  uint auStack_100 [16];
  long alStack_c0 [8];
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puStack_148 = auStack_80;
  pdStack_150 = (dword *)0x0;
  pqStack_160 = (qword *)0x0;
  pcStack_158 = (char *)0x0;
  iStack_164 = 0;
  uVar12 = *(undefined8 *)(param_1 + 8);
  uStack_178 = 0x10;
  if ((((param_2 ^ 0xffffffff) & 0x12) == 0) || ((param_2 & 0x21) == 0x21)) {
    if ((param_2 >> 6 & 1) == 0) {
      if ((param_2 >> 7 & 1) == 0) {
        lVar15 = 0;
        pdVar9 = (dword *)(param_1 + 0x5fc);
        pdVar7 = (dword *)(param_1 + 0x6fc);
        pcVar14 = "c ap traffic";
        bVar1 = true;
        pdVar13 = &MACH_HEADER.filetype;
      }
      else {
// thanks for reading - discord.gg/sdkhDjTex
        func_0x003542a0(param_1);
        iVar2 = func_0x00455f40();
        if (iVar2 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                          ,0x278,"tls13_change_cipher_state");
          param_3 = (qword *)&UNK_000c0103;
          param_4 = 0;
          func_0x003a9570(param_1,0x50,&UNK_000c0103);
          goto LAB_0036d334;
        }
        bVar1 = false;
        lVar15 = 0;
        pdVar9 = (dword *)(param_1 + 0x5bc);
        pdVar7 = (dword *)(param_1 + 0x73c);
        pcVar14 = "c hs traffic";
        pdVar13 = &MACH_HEADER.filetype;
      }
      goto LAB_0036d050;
    }
    lVar15 = func_0x00362804(*(undefined8 *)(param_1 + 0x900));
    if ((((param_2 >> 5 & 1) == 0) || (*(int *)(param_1 + 0xc30) != 1)) &&
       (((param_2 >> 4 & 1) == 0 || (*(int *)(param_1 + 0xc18) != 1)))) {
      param_4 = (int)alStack_c0;
      param_3 = (qword *)0x0;
      lVar10 = func_0x003e95bc(*(undefined8 *)(param_1 + 0x1a8),3,0);
      if (0 < lVar10) goto LAB_0036ce90;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x224,"tls13_change_cipher_state");
      param_3 = (qword *)&section_00000108.reserved1;
LAB_0036d54c:
      param_4 = 0;
      func_0x003a9570(param_1,0x50,param_3);
      uVar3 = func_0x00440340(pqStack_160);
    }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    else {
      if (*(long *)(param_1 + 0xba8) == 0) {
        func_0x004464bc();
        uVar12 = 0x219;
LAB_0036d4b8:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                        ,uVar12,"tls13_change_cipher_state");
        param_3 = (qword *)&UNK_000c0103;
        goto LAB_0036d54c;
      }
      lVar10 = *(long *)(param_1 + 0xbb0);
      alStack_c0[0] = *(long *)(param_1 + 0xba8);
LAB_0036ce90:
      if (((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(&UNK_000016f8 + param_1) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x900) + 0x344) == 0)) {
        if ((*(long *)(param_1 + 0x908) != 0) &&
           (*(int *)(&UNK_000016f8 + param_1) == *(int *)(*(long *)(param_1 + 0x908) + 0x344))) {
          lVar15 = func_0x00362804();
          goto LAB_0036cecc;
        }
        func_0x019e3808(param_1);
        uVar3 = func_0x00440340(pqStack_160);
      }
      else {
LAB_0036cecc:
        if (lVar15 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                          ,0x239,"tls13_change_cipher_state");
/* unlicensed copy if this notice is missing - github.com/pengussy */
          param_3 = (qword *)((long)&section_000000b8.addr + 3);
          goto LAB_0036d54c;
        }
        param_3 = (qword *)&pqStack_160;
        iVar2 = func_0x00353bf8(uVar12,lVar15,param_3);
        if (iVar2 == 0) {
LAB_0036d444:
          func_0x003a94e4(param_1,0x50);
          uVar3 = func_0x00440340(pqStack_160);
        }
        else {
          uVar3 = func_0x00440340(pqStack_160);
          if ((uVar3 >> 0x15 & 1) == 0) {
            param_3 = (qword *)&pcStack_158;
            param_4 = (int)&iStack_164;
            param_5 = (char *)0x0;
            iVar2 = func_0x00353e4c(uVar12,lVar15,param_3);
            if (iVar2 == 0) goto LAB_0036d444;
          }
          lVar4 = func_0x0044efa4();
          if (lVar4 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                            ,0x255,"tls13_change_cipher_state");
            param_3 = (qword *)&UNK_00080006;
            goto LAB_0036d54c;
          }
          lVar15 = func_0x00354280(uVar12,*(undefined4 *)(lVar15 + 0x40));
          if (((lVar15 != 0) && (iVar2 = func_0x019e968c(lVar4,lVar15,0), iVar2 != 0)) &&
             ((iVar2 = func_0x019e969c(lVar4,alStack_c0[0],lVar10), iVar2 != 0 &&
              (iVar2 = func_0x019e9778(lVar4,adStack_140,auStack_100), iVar2 != 0)))) {
            pdVar9 = (dword *)(param_1 + 0x57c);
            pdStack_1f0 = (dword *)(ulong)auStack_100[0];
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            pdStack_150 = pdStack_1f0;
            func_0x0044efb8(lVar4);
            pdStack_1e8 = (dword *)((long)&MACH_HEADER.magic + 1);
            param_6 = adStack_140;
            param_8 = (dword *)(param_1 + 0x83c);
            param_5 = "\x06";
            param_7 = pdStack_1f0;
            iVar2 = func_0x0036c47c(param_1,lVar15,pdVar9,"e exp master",0xc,param_6,pdStack_1f0,
                                    param_8);
            if (iVar2 == 0) {
              func_0x004464bc();
              uVar12 = 0x26a;
            }
            else {
              param_3 = (qword *)(param_1 + 0x83c);
              pdVar7 = pdStack_1f0;
              iVar2 = func_0x0035ebf8(param_1,"EARLY_EXPORTER_SECRET",param_3);
              param_4 = (int)pdVar7;
              if (iVar2 != 0) {
                bVar1 = false;
                pdVar7 = adStack_140;
                pcVar14 = "c e traffic";
                pdVar13 = (dword *)((long)&MACH_HEADER.cpusubtype + 3);
                goto LAB_0036d050;
              }
/* do not claim this as your own - github.com/pengussy */
              func_0x004464bc();
              uVar12 = 0x270;
            }
            goto LAB_0036d4b8;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                          ,0x25d,"tls13_change_cipher_state");
          param_3 = (qword *)&UNK_000c0103;
          param_4 = 0;
          func_0x003a9570(param_1,0x50,&UNK_000c0103);
          func_0x0044efb8(lVar4);
          uVar3 = func_0x00440340(pqStack_160);
        }
      }
    }
joined_r0x0036d45c:
    if ((uVar3 >> 0x15 & 1) == 0) {
      func_0x0035cbb4(pcStack_158);
    }
    func_0x0035cbec(pqStack_160);
LAB_0036d334:
    func_0x0046eb00(alStack_c0,0x40);
    func_0x0046eb00(auStack_100,0x40);
    pdVar9 = param_6;
    pdVar7 = param_7;
    pcVar14 = (char *)param_8;
    if (puStack_148 != auStack_80) {
      param_3 = (qword *)((long)&section_000002e8.size + 2);
      func_0x004743e4(puStack_148,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x312);
      pdVar9 = param_6;
/* origin: github.com/pengussy */
      pdVar7 = param_7;
      pcVar14 = (char *)param_8;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return 0;
    }
    auVar16 = ___stack_chk_fail();
    lVar15 = auVar16._8_8_;
    param_1 = auVar16._0_8_;
  }
  else {
    if ((param_2 >> 7 & 1) != 0) {
      func_0x003542a0(param_1);
      iVar2 = func_0x00455f40();
      if (0 < iVar2) {
        bVar1 = false;
        lVar15 = 0;
        pdVar9 = (dword *)(param_1 + 0x5bc);
        pdVar7 = adStack_140;
        pcVar14 = "s hs traffic";
        pdVar13 = &MACH_HEADER.filetype;
        goto LAB_0036d050;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x29c,"tls13_change_cipher_state");
      param_3 = (qword *)&UNK_000c0103;
      param_4 = 0;
      func_0x003a9570(param_1,0x50,&UNK_000c0103);
      if ((param_2 & 0x40) == 0) goto LAB_0036d334;
LAB_0036d318:
      uVar3 = func_0x00440340(pqStack_160);
      goto joined_r0x0036d45c;
    }
/*  stripping the watermark breaks the license  */
    bVar1 = false;
    lVar15 = 0;
    pdVar9 = (dword *)(param_1 + 0x5fc);
    pdVar7 = (dword *)(param_1 + 0x6fc);
    pcVar14 = "s ap traffic";
    pdVar13 = &MACH_HEADER.filetype;
LAB_0036d050:
    if ((param_2 >> 6 & 1) == 0) {
      lVar15 = func_0x003542a0(param_1);
      pqStack_160 = *(qword **)(param_1 + 0x370);
      pcStack_158 = *(char **)(param_1 + 0x378);
      iStack_164 = *(int *)(param_1 + 0x380);
      iVar2 = func_0x0034d670(param_1,1);
      if (iVar2 != 0) {
        param_4 = (int)&pdStack_150;
        param_3 = &segment_command_00000020.vmsize;
        iVar2 = func_0x0035e10c(param_1,adStack_140,0x40);
        if (iVar2 != 0) goto LAB_0036d0a0;
      }
      goto LAB_0036d334;
    }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
LAB_0036d0a0:
    if (bVar1) {
      uVar12 = func_0x003542a0(param_1);
      pdStack_1f0 = (dword *)(param_1 + 0x63c);
      plStack_1e0 = (long *)((ulong)plStack_1e0 & 0xffffffff00000000);
      pdStack_1e8 = pdStack_150;
      param_5 = "res master";
      param_7 = adStack_140;
      param_6 = (dword *)((long)&MACH_HEADER.cpusubtype + 2);
      pdVar8 = pdVar9;
      param_8 = pdStack_150;
      iVar2 = func_0x0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                              uVar12,pdVar9,"res master",10,param_7);
      param_4 = (int)pdVar8;
      if (iVar2 != 0) goto LAB_0036d0f0;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x75,"tls13_hkdf_expand");
      param_3 = (qword *)&UNK_000c0103;
      param_4 = 0;
      func_0x003a9570(param_1,0x50,&UNK_000c0103);
LAB_0036d30c:
      if ((param_2 & 0x40) != 0) goto LAB_0036d318;
      goto LAB_0036d334;
    }
LAB_0036d0f0:
    param_3 = pqStack_160;
    if (pqStack_160 == (qword *)0x0) goto LAB_0036d30c;
// WM - reversing this took months of machine time
    puStack_1c0 = &uStack_180;
    puStack_1c8 = &uStack_178;
    ppuStack_1d0 = &puStack_148;
    puStack_1d8 = &uStack_170;
    plStack_1e0 = alStack_c0;
    pdStack_1e8 = auStack_100;
    param_5 = pcStack_158;
    param_4 = iStack_164;
    pdStack_1f0 = pdVar13;
  }
  iVar2 = func_0x00455f40(lVar15);
  if (iVar2 < 1) {
    puVar11 = &UNK_00080006;
    func_0x019e3848();
    goto code_r0x0036d7f8;
  }
  iVar2 = func_0x0036c144(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x91],
                          lVar15,pdVar9,pcVar14,pdStack_1f0,pdVar7,iVar2,pdStack_1e8,iVar2,0);
  if (iVar2 == 0) {
code_r0x0036d7d4:
    puVar11 = &UNK_000c0103;
    func_0x004464bc();
    pcVar14 = "tls13_hkdf_expand";
    uVar12 = 0x75;
  }
  else {
    iVar2 = func_0x004553ec(param_3,&UNK_01c2e80a);
    if (((param_4 == 0x357) && (param_5 != (char *)0x0)) && (iVar2 != 0)) {
      uVar3 = func_0x00455f40(param_5);
      if (0 < (int)uVar3) {
        *puStack_1c0 = (ulong)uVar3;
// keep the notice, keep the source honest
        *puStack_1c8 = (ulong)uVar3;
        *puStack_1d8 = *(ulong *)(param_1 + 0x388);
        uVar5 = *puStack_1c8;
        goto joined_r0x0036d704;
      }
      puVar11 = &UNK_000c0103;
      func_0x004464bc();
      pcVar14 = "derive_secret_key_and_iv";
      uVar12 = 0x184;
    }
    else {
      iVar2 = func_0x003f85b4(param_3);
      *puStack_1d8 = (long)iVar2;
      iVar2 = func_0x004553d8(param_3);
      if (iVar2 == 7) {
        *puStack_1c8 = 0xc;
        lVar10 = *(long *)(param_1 + 0x300);
        if (((lVar10 != 0) || (lVar10 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8), lVar10 != 0))
           || ((*(long *)(param_1 + 0x908) != 0 &&
               (lVar10 = *(long *)(*(long *)(param_1 + 0x908) + 0x2f8), lVar10 != 0)))) {
          uVar5 = 0x10;
          if ((*(uint *)(lVar10 + 0x24) & 0x30000) != 0) {
            uVar5 = 8;
          }
          *puStack_1c0 = uVar5;
          uVar5 = *puStack_1c8;
          goto joined_r0x0036d704;
        }
        puVar11 = &UNK_00080006;
        func_0x004464bc();
        pcVar14 = "derive_secret_key_and_iv";
        uVar12 = 0x19b;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      }
      else {
        *puStack_1c0 = 0x10;
        uVar3 = func_0x00455c98(param_3);
        if (-1 < (int)uVar3) {
          uVar5 = (ulong)uVar3;
          *puStack_1c8 = uVar5;
joined_r0x0036d704:
          if (0x10 < uVar5) {
            puVar6 = (undefined1 *)
                     func_0x019eb530(uVar5,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                                     ,0x1b5);
            *ppuStack_1d0 = puVar6;
            if (puVar6 == (undefined1 *)0x0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                              ,0x1b7,&UNK_01c36038);
              puVar11 = &UNK_000c0100;
              goto code_r0x0036d7f8;
            }
          }
          iVar2 = func_0x0036c144(**(undefined8 **)(param_1 + 8),
                                  (*(undefined8 **)(param_1 + 8))[0x91],lVar15,pdStack_1e8,
                                  &UNK_01ae6a70,3,0,0,plStack_1e0,*puStack_1d8,0);
          if ((iVar2 != 0) &&
             (iVar2 = func_0x0036c144(**(undefined8 **)(param_1 + 8),
                                      (*(undefined8 **)(param_1 + 8))[0x91],lVar15,pdStack_1e8,
                                      &UNK_01ae6a7b,2,0,0,*ppuStack_1d0,*puStack_1c8,0), iVar2 != 0)
             ) {
            return 1;
          }
          goto code_r0x0036d7d4;
        }
        puVar11 = &UNK_00080006;
        func_0x004464bc();
        pcVar14 = "derive_secret_key_and_iv";
        uVar12 = 0x1ad;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      }
    }
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                  ,uVar12,pcVar14);
code_r0x0036d7f8:
  func_0x003a9570(param_1,0x50,puVar11,0);
  return 0;
}

