/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3baf08:3279f5a512
 */

undefined8 FUN_003baf08(long param_1,long *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined2 uStack_7a;
  undefined8 uStack_78;
  long alStack_70 [3];
  int iStack_54;
  
  if ((*(int *)(param_1 + 0x78) == 0) || (param_2[2] == 0)) goto LAB_003bb19c;
  iStack_54 = -1;
  alStack_70[2] = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  uStack_78 = 0;
  uStack_7a = 0xffff;
  *(undefined4 *)(param_1 + 0xc80) = 0;
  iVar6 = func_0x00349ec0(param_1,param_2,alStack_70 + 2,alStack_70 + 1,alStack_70,&uStack_7a,
/*  no support for modified copies  */
                          &iStack_54,&uStack_78);
  if (iVar6 == 1) {
    if (iStack_54 != 1) {
      if (*(long *)(param_1 + 0xb60) != 0) {
        iVar6 = *(int *)(param_1 + 0xc30);
        if ((iVar6 == 1) && (alStack_70[0] == 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x6b2,"tls_process_client_hello");
          uVar14 = 0x6d;
          puVar9 = (undefined *)0x455;
          goto LAB_003bb148;
        }
        iVar7 = FUN_0034a05c(param_1,param_2,&lStack_c0);
        if (iVar7 != 1) goto LAB_003bb150;
        if (*(int *)(param_1 + 0xc30) == 1) {
          if ((ulong)param_2[2] < uStack_b0) {
            func_0x004464bc();
            uVar14 = 0x6c0;
// WM - unlicensed copy if this notice is missing
            goto LAB_003bb134;
          }
          param_2[1] = lStack_b8;
          *param_2 = lStack_c0;
          param_2[2] = uStack_b0;
        }
        else if ((iVar6 == 1) && (*(int *)(param_1 + 0xc30) == 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0x6c6,"tls_process_client_hello");
          uVar14 = 0x33;
          goto LAB_003bb140;
        }
      }
LAB_003bb19c:
      if (((*(int *)(param_1 + 0xd58) == 0) && (*(long *)(param_1 + 0x260) != 0)) &&
         (*(long *)(param_1 + 0x2e8) != 0)) {
/* more drops soon - github.com/pengussy */
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
            (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
          func_0x019e7cf0(param_1);
          goto LAB_003bb150;
        }
        if (((*(ulong *)(param_1 + 0x9b0) & 0x40000100) != 0x100) ||
           ((((uint)*(ulong *)(param_1 + 0x9b0) >> 0x12 & 1) == 0 &&
            (*(int *)(param_1 + 0x4b0) == 0)))) {
          func_0x00350e94(param_1,1,100);
          return 1;
        }
        *(undefined4 *)(param_1 + 0xd58) = 1;
        *(undefined4 *)(param_1 + 0x7c) = 1;
      }
      puVar16 = (uint *)func_0x019eb5a0(0x2a0,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                        ,0x6df);
      if (puVar16 == (uint *)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0x6e1,"tls_process_client_hello");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        goto LAB_003bb344;
      }
      uVar13 = param_2[2];
      if (uVar13 < 2) {
        uVar14 = 0xa0;
        uVar17 = 0x6eb;
LAB_003bb300:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar17,"tls_process_client_hello");
        func_0x003a9570(param_1,0x32,uVar14,0);
      }
      else {
        pbVar12 = (byte *)*param_2;
        bVar4 = *pbVar12;
        *puVar16 = (uint)bVar4 << 8;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        *puVar16 = (uint)CONCAT11(bVar4,pbVar12[1]);
        *param_2 = (long)(pbVar12 + 2);
        param_2[2] = uVar13 - 2;
        if (uVar13 - 2 < 0x20) {
LAB_003bb2f8:
          uVar14 = 0x9f;
          uVar17 = 0x6f4;
          goto LAB_003bb300;
        }
        uVar17 = *(undefined8 *)(pbVar12 + 10);
        uVar14 = *(undefined8 *)(pbVar12 + 2);
        uVar19 = *(undefined8 *)(pbVar12 + 0x12);
        *(undefined8 *)(puVar16 + 7) = *(undefined8 *)(pbVar12 + 0x1a);
        *(undefined8 *)(puVar16 + 5) = uVar19;
        *(undefined8 *)(puVar16 + 3) = uVar17;
        *(undefined8 *)(puVar16 + 1) = uVar14;
        *param_2 = (long)(pbVar12 + 0x22);
        param_2[2] = uVar13 - 0x22;
        if (uVar13 - 0x22 == 0) goto LAB_003bb2f8;
        bVar4 = pbVar12[0x22];
        uVar18 = (ulong)bVar4;
        uVar13 = uVar13 - 0x23;
        if (uVar13 < uVar18) goto LAB_003bb2f8;
        pbVar3 = pbVar12 + 0x23 + uVar18;
        *param_2 = (long)pbVar3;
        param_2[2] = uVar13 - uVar18;
        if (0x20 < bVar4) {
          puVar16[10] = 0;
          puVar16[0xb] = 0;
          goto LAB_003bb2f8;
        }
        *(ulong *)(puVar16 + 10) = uVar18;
        _memcpy(puVar16 + 0xc,pbVar12 + 0x23,uVar18);
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) {
          if (uVar13 != uVar18) {
            uVar10 = (ulong)*pbVar3;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            uVar13 = (uVar13 - uVar18) - 1;
            if (uVar10 <= uVar13) {
              *param_2 = (long)(pbVar3 + uVar10 + 1);
              param_2[2] = uVar13 - uVar10;
              *(ulong *)(puVar16 + 0x14) = uVar10;
              _memcpy(puVar16 + 0x16);
              uVar8 = func_0x0035e284(param_1);
              if (((uVar8 >> 0xd & 1) != 0) && (*(long *)(puVar16 + 0x14) == 0)) {
                func_0x004743e4(puVar16,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x70a);
                return 1;
              }
              goto LAB_003bb3cc;
            }
          }
          uVar14 = 0x9f;
          uVar17 = 0x6fa;
          goto LAB_003bb300;
// do not claim this as your own
        }
LAB_003bb3cc:
        uVar13 = param_2[2] - 2;
        if ((ulong)param_2[2] < 2) {
LAB_003bb3ec:
          uVar14 = 0x9f;
          uVar17 = 0x711;
          goto LAB_003bb300;
        }
        uVar5 = *(ushort *)*param_2;
        uVar18 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
        if (uVar13 < uVar18) goto LAB_003bb3ec;
        lVar11 = param_2[1];
        puVar1 = (ushort *)*param_2 + 1;
        pbVar12 = (byte *)((long)puVar1 + uVar18);
        *param_2 = (long)pbVar12;
        *(ushort **)(puVar16 + 0x56) = puVar1;
        *(long *)(puVar16 + 0x58) = lVar11;
        *(ulong *)(puVar16 + 0x5a) = uVar18;
        lVar11 = uVar13 - uVar18;
        param_2[2] = lVar11;
        if (lVar11 == 0) {
LAB_003bb450:
          uVar14 = 0x9f;
          uVar17 = 0x716;
          goto LAB_003bb300;
        }
        uVar13 = (ulong)*pbVar12;
        if (lVar11 - 1U < uVar13) goto LAB_003bb450;
        *param_2 = (long)(pbVar12 + 1 + uVar13);
/* wm:chat: discord.gg/sdkhDjTex */
        puVar2 = puVar16 + 0x9e;
        lVar11 = (lVar11 - 1U) - uVar13;
        param_2[2] = lVar11;
        if (lVar11 == 0) {
          puVar2[0] = 0;
          puVar2[1] = 0;
          puVar16[0xa0] = 0;
          puVar16[0xa1] = 0;
          puVar16[0xa2] = 0;
          puVar16[0xa3] = 0;
        }
        else {
          iVar6 = func_0x003bd6b0(param_2,puVar2);
          if ((iVar6 == 0) || (param_2[2] != 0)) {
            uVar14 = 0x9f;
            uVar17 = 0x720;
            goto LAB_003bb300;
          }
        }
        *(ulong *)(puVar16 + 0x5c) = uVar13;
        _memcpy(puVar16 + 0x5e,pbVar12 + 1,uVar13);
        lStack_b8 = *(long *)(puVar16 + 0xa0);
        lStack_c0 = *(long *)puVar2;
        uStack_b0 = *(ulong *)(puVar16 + 0xa2);
        iVar6 = FUN_0039bb1c(param_1,&lStack_c0,0x80,puVar16 + 0xa6,puVar16 + 0xa4,1);
        if (iVar6 != 0) {
          *(uint **)(param_1 + 0xd10) = puVar16;
          return 2;
        }
      }
      func_0x004743e4(*(undefined8 *)(puVar16 + 0xa6),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0x73a);
      goto LAB_003bb344;
    }
    *(undefined4 *)(param_1 + 0xc28) = 1;
    *(undefined2 *)(param_1 + 0xc20) = 0xfe0d;
    func_0x004743e4(*(undefined8 *)(param_1 + 0xba8),
// thanks for reading - discord.gg/sdkhDjTex
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x689);
    lVar11 = param_2[2];
    lVar15 = *param_2;
    *(long *)(param_1 + 0xbb0) = lVar11 + 4;
    lVar11 = func_0x019eb530(lVar11 + 4,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                             ,0x690);
    *(long *)(param_1 + 0xba8) = lVar11;
    if (lVar11 == 0) {
      uVar14 = 0x692;
    }
    else {
      iVar6 = func_0x019ebb80(&lStack_c0,lVar11,*(undefined8 *)(param_1 + 0xbb0),0);
      if (iVar6 == 0) {
        uVar14 = 0x697;
      }
      else {
        iVar6 = func_0x019ec0a0(&lStack_c0,1,1);
        if ((((iVar6 == 0) ||
             (iVar6 = func_0x019ec0a0(&lStack_c0,*(long *)(param_1 + 0xbb0) + -4,3), iVar6 == 0)) ||
            (iVar6 = func_0x00476690(&lStack_c0,lVar15,*(long *)(param_1 + 0xbb0) + -4), iVar6 == 0)
/* keep the notice, keep the source honest */
            ) || (iVar6 = func_0x004765c8(&lStack_c0), iVar6 == 0)) {
          func_0x0047680c(&lStack_c0);
          uVar14 = 0x69f;
        }
        else {
          iVar6 = func_0x0034b4ec(param_1,*(undefined8 *)(param_1 + 0xba8),
                                  *(undefined8 *)(param_1 + 0xbb0),0);
          if (iVar6 == 1) goto LAB_003bb19c;
          uVar14 = 0x6a5;
        }
      }
    }
    func_0x004464bc();
LAB_003bb134:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,uVar14,"tls_process_client_hello");
    uVar14 = 0x50;
LAB_003bb140:
    puVar9 = &UNK_000c0103;
LAB_003bb148:
    func_0x003a9570(param_1,uVar14,puVar9,0);
  }
LAB_003bb150:
  puVar16 = (uint *)0x0;
// donate: donate/README.md
LAB_003bb344:
  func_0x004743e4(puVar16,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,0x73b);
  *(undefined8 *)(param_1 + 0xd10) = 0;
  func_0x004743e4(*(undefined8 *)(param_1 + 0xba8),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,0x73e);
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  return 0;
}

