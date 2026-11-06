/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3af134:8aae3dc37e
   =========================================================================== */

undefined8 FUN_003af134(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  ushort *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  ushort *puStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  uVar13 = param_2[2];
  uVar16 = uVar13 - 4;
  if (uVar13 < 4) {
LAB_003af274:
/* wm:donate: donate/README.md */
    func_0x004464bc();
    uVar7 = 0xc2e;
LAB_003af28c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar7,"tls_process_new_session_ticket");
    uVar7 = 0x32;
    uVar8 = 0x9f;
LAB_003af29c:
    func_0x003a9570(param_1,uVar7,uVar8,0);
  }
  else {
    puVar12 = (uint *)*param_2;
    puVar11 = puVar12 + 1;
    uVar1 = *puVar12;
    puVar18 = *(undefined8 **)(param_1 + 8);
    *param_2 = (long)puVar11;
    param_2[2] = uVar16;
    piVar9 = *(int **)(param_1 + 0x18);
    uVar5 = *(uint *)(*(long *)(piVar9 + 0x36) + 0x50);
    if ((uVar5 >> 3 & 1) == 0) {
      lVar14 = 0;
      uVar19 = 0;
      uVar15 = 0;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      if ((0x303 < *piVar9) && (*piVar9 != 0x10000)) {
        if (3 < uVar16) {
          uVar19 = puVar12[1];
          *param_2 = (long)(puVar12 + 2);
          param_2[2] = uVar13 - 8;
          if (uVar13 - 8 != 0) {
            uVar15 = (ulong)(byte)puVar12[2];
            uVar16 = (uVar13 - 9) - uVar15;
            if (uVar15 <= uVar13 - 9) {
              uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
              uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
              lVar14 = (long)puVar12 + 9;
              puVar11 = (uint *)(lVar14 + uVar15);
              *param_2 = (long)puVar11;
              param_2[2] = uVar16;
              goto LAB_003af204;
            }
          }
        }
        goto LAB_003af274;
      }
    }
    else {
      uVar19 = 0;
      lVar14 = 0;
      uVar15 = 0;
    }
LAB_003af204:
    uVar13 = uVar16 - 2;
    if (uVar16 < 2) goto LAB_003af274;
    uVar3 = (uint)(ushort)((ushort)*puVar11 >> 8) | ((ushort)*puVar11 & 0xff00ff) << 8;
    uVar16 = (ulong)uVar3;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    *param_2 = (long)puVar11 + 2;
    param_2[2] = uVar13;
    if ((((uVar5 >> 3 & 1) == 0) && (iVar4 = *piVar9, 0x303 < iVar4)) && (iVar4 != 0x10000)) {
      if (uVar3 == 0 || uVar13 < uVar16) goto LAB_003af274;
LAB_003af258:
      if ((iVar4 < 0x304) || (iVar4 == 0x10000)) goto LAB_003af2e4;
      lVar6 = *(long *)(param_1 + 0x900);
LAB_003af2f4:
      lVar6 = func_0x003614a0(lVar6,0);
      if (lVar6 != 0) {
        if (((*(byte *)(*(long *)(param_1 + 0xd40) + 0x50) & 1) != 0) &&
           ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0 ||
             (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)))) {
          func_0x003624b4(*(long *)(param_1 + 0xd40),*(undefined8 *)(param_1 + 0x900));
        }
        func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
        *(long *)(param_1 + 0x900) = lVar6;
        goto LAB_003af34c;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xc4a,"tls_process_new_session_ticket");
      uVar8 = 0x80014;
LAB_003af428:
      uVar7 = 0x50;
      goto LAB_003af29c;
    }
    if (uVar13 != uVar16) goto LAB_003af274;
    if (uVar3 == 0) {
      return 3;
    }
    if ((uVar5 >> 3 & 1) == 0) {
      iVar4 = *piVar9;
      goto LAB_003af258;
    }
LAB_003af2e4:
    lVar6 = *(long *)(param_1 + 0x900);
    if (*(long *)(lVar6 + 0x250) != 0) goto LAB_003af2f4;
/* watermarked copy - do not remove - github.com/pengussy */
LAB_003af34c:
    uVar7 = func_0x0048058c();
    *(undefined8 *)(lVar6 + 0x2e0) = uVar7;
    func_0x00361100(*(undefined8 *)(param_1 + 0x900));
    func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xc5f);
    lVar6 = *(long *)(param_1 + 0x900);
    *(undefined8 *)(lVar6 + 0x330) = 0;
    *(undefined8 *)(lVar6 + 0x328) = 0;
    lVar6 = func_0x019eb530(uVar16,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xc63);
    lVar20 = *(long *)(param_1 + 0x900);
    *(long *)(lVar20 + 0x328) = lVar6;
    if (lVar6 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xc65,"tls_process_new_session_ticket");
      uVar8 = 0x8000f;
      goto LAB_003af428;
    }
    uVar13 = param_2[2];
    if (uVar13 < uVar16) {
      func_0x004464bc();
      uVar7 = 0xc69;
      goto LAB_003af28c;
    }
    uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    lVar17 = *param_2;
    _memcpy(lVar6,lVar17,uVar16);
    *param_2 = lVar17 + uVar16;
    param_2[2] = uVar13 - uVar16;
    *(ulong *)(lVar20 + 0x338) = (ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
    *(uint *)(lVar20 + 0x340) = uVar19;
    *(ulong *)(lVar20 + 0x330) = uVar16;
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      if (1 < (ulong)param_2[2]) {
        puVar10 = (ushort *)*param_2 + 1;
        uVar2 = *(ushort *)*param_2;
        uVar13 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
        if (param_2[2] - 2U == uVar13) {
          lStack_78 = param_2[1];
          *param_2 = (long)puVar10 + uVar13;
          param_2[2] = 0;
          puStack_80 = puVar10;
          uStack_70 = uVar13;
          iVar4 = func_0x0039bb1c(param_1,&puStack_80,0x2000,&uStack_68,0,1);
          if ((iVar4 != 0) && (iVar4 = func_0x0039c418(param_1,0x2000,uStack_68,0,0,1), iVar4 != 0))
          goto LAB_003af50c;
          goto LAB_003af2a4;
        }
      }
      func_0x004464bc();
      uVar7 = 0xc76;
      goto LAB_003af28c;
    }
LAB_003af50c:
    lVar6 = func_0x0044fbe0(*puVar18,"SHA2-256",puVar18[0x91]);
    if (lVar6 == 0) {
      func_0x003a94e4(param_1,0x50);
    }
    else {
      iVar4 = func_0x019e98b8(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),uVar16,
                              *(long *)(param_1 + 0x900) + 600,&puStack_80,lVar6,0);
      if (iVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xc9d,"tls_process_new_session_ticket");
        func_0x003a9570(param_1,0x50,&UNK_00080006,0);
        goto LAB_003af2a8;
      }
      func_0x0044ed2c(lVar6);
      lVar6 = *(long *)(param_1 + 0x900);
/*  stripping the watermark breaks the license  */
      *(ulong *)(lVar6 + 0x250) = (ulong)puStack_80 & 0xffffffff;
      *(undefined4 *)(lVar6 + 0x2b0) = 0;
      if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
        return 3;
      }
      iVar4 = **(int **)(param_1 + 0x18);
      if (iVar4 < 0x304) {
        return 3;
      }
      if (iVar4 == 0x10000) {
        return 3;
      }
      uVar7 = func_0x003542a0(param_1);
      uVar5 = func_0x00455f40();
      if ((int)uVar5 < 1) {
        func_0x019e75d8(param_1);
      }
      else {
        iVar4 = func_0x0036c47c(param_1,uVar7,param_1 + 0x63c,s_resumption___01ae6fd9,10,lVar14,
                                uVar15,*(long *)(param_1 + 0x900) + 0x50,(ulong)uVar5,1);
        if (iVar4 != 0) {
          *(ulong *)(*(long *)(param_1 + 0x900) + 8) = (ulong)uVar5;
          func_0x004743e4(uStack_68,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xcc1);
          func_0x0035d388(param_1,1);
          return 1;
        }
      }
    }
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
LAB_003af2a4:
  lVar6 = 0;
LAB_003af2a8:
  func_0x0044ed2c(lVar6);
  func_0x004743e4(uStack_68,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0xcc9);
  return 0;
}

