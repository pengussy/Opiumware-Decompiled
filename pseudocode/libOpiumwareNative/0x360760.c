/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x360760:169a1f3ffd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00360760(long param_1,int param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (((param_1 == 0) || (param_3 == (uint *)0x0)) || (param_4 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                    ,0x325,"SSL_CTX_use_serverinfo_ex");
    puVar7 = &UNK_000c0102;
  }
  else {
    if (param_2 == 1) {
      puVar4 = (undefined4 *)
               func_0x019eb530(param_4 + 4,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                               ,0x332);
      uVar5 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = (int)_UNK_01ae6510;
        _memcpy(puVar4 + 1,param_3,param_4);
        uVar5 = FUN_00360760(param_1,2,puVar4,param_4 + 4);
        func_0x004743e4(puVar4,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x33b);
// WM - no support for modified copies
      }
      return uVar5;
    }
    if ((param_2 == 2) && (-1 < (long)param_4)) {
      puVar8 = param_3;
      uVar9 = param_4;
      do {
        if ((uVar9 < 8) ||
           (uVar10 = (ulong)((uint)(*(ushort *)((long)puVar8 + 6) >> 8) |
                            (*(ushort *)((long)puVar8 + 6) & 0xff00ff) << 8), uVar9 - 8 < uVar10))
        goto LAB_00360900;
        puVar8 = (uint *)((long)puVar8 + uVar10 + 8);
        uVar9 = (uVar9 - 8) - uVar10;
      } while (uVar9 != 0);
      if (**(long **)(param_1 + 0x158) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x344,"SSL_CTX_use_serverinfo_ex");
        puVar7 = &UNK_000c0103;
// unlicensed copy if this notice is missing
        goto LAB_00360924;
      }
      lVar6 = func_0x019eb634(*(undefined8 *)(**(long **)(param_1 + 0x158) + 0x18),param_4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                              ,0x348);
      if (lVar6 == 0) {
        return 0;
      }
      *(long *)(**(long **)(param_1 + 0x158) + 0x18) = lVar6;
      uVar5 = _memcpy(lVar6,param_3,param_4);
      *(ulong *)(**(long **)(param_1 + 0x158) + 0x20) = param_4;
      while (((3 < param_4 && ((param_4 & 0xfffffffffffffffe) != 4)) &&
             ((param_4 & 0xfffffffffffffffe) != 6))) {
        uVar10 = (ulong)((uint)(*(ushort *)((long)param_3 + 6) >> 8) |
                        (*(ushort *)((long)param_3 + 6) & 0xff00ff) << 8);
        uVar9 = param_4 - 8;
        param_4 = uVar9 - uVar10;
        if (uVar9 < uVar10) break;
        uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar2 = (ushort)param_3[1] >> 8 | (ushort)param_3[1] << 8;
// WM - keep the notice, keep the source honest
        if (uVar1 == 0x1d0) {
          uVar5 = func_0x003a467c(param_1,uVar2,&DAT_00360e50,0,0,&DAT_00360f58,0);
          iVar3 = (int)uVar5;
        }
        else {
          uVar5 = func_0x003a4798(param_1,uVar2,uVar1,&DAT_00360f74,0,0,&DAT_003610e4,0);
          iVar3 = (int)uVar5;
        }
        if (iVar3 == 0) break;
        param_3 = (uint *)((long)param_3 + uVar10 + 8);
        uVar5 = 1;
        if (param_4 == 0) {
          return 1;
        }
      }
      func_0x004464bc(uVar5);
      uVar5 = 0x355;
    }
    else {
LAB_00360900:
      func_0x004464bc();
      uVar5 = 0x340;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,uVar5,"SSL_CTX_use_serverinfo_ex");
    puVar7 = (undefined *)0x184;
  }
LAB_00360924:
  func_0x004466b0(0x14,puVar7,0);
  return 0;
/* keep the notice, keep the source honest - github.com/pengussy */
}

