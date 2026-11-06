/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36194c:ae2a52cd3a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0036194c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  iVar3 = func_0x00358078(0x200000,0);
  if ((iVar3 == 0) ||
     (puVar4 = (undefined4 *)
               func_0x019eb5a0(0x3a0,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                               ,0x6c), puVar4 == (undefined4 *)0x0)) {
LAB_00361a60:
    func_0x004464bc();
/* donate: donate/README.md - github.com/pengussy */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                    ,0x1b8,"ssl_get_new_session");
    func_0x003a9570(param_1,0x50,&UNK_00080014,0);
    return 0;
  }
  *(undefined1 *)(puVar4 + 0xd6) = 0xff;
  uVar2 = _UNK_01ae6520;
  *(undefined8 *)(puVar4 + 0xb6) = _UNK_01ae6528;
  *(undefined8 *)(puVar4 + 0xb4) = uVar2;
  uVar5 = func_0x0048058c();
  *(ulong *)(puVar4 + 0xb8) = uVar5;
  lVar1 = uVar5 + 304000000000;
  if (0xffffffb938301fff < uVar5) {
    lVar1 = -1;
  }
  *(long *)(puVar4 + 0xba) = lVar1;
  puVar4[0xe6] = 1;
  iVar3 = func_0x00472e68(2,puVar4,puVar4 + 0xc4);
  if (iVar3 == 0) {
    func_0x004743e4(puVar4,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                    ,0x7d);
    goto LAB_00361a60;
  }
/* wm:proprietary - see LICENSE - do not sell */
  uVar5 = *(ulong *)(*(long *)(param_1 + 0xd40) + 0x58);
  if (uVar5 == 0) {
    uVar5 = (**(code **)(*(long *)(param_1 + 0x18) + 0xd0))();
  }
  *(ulong *)(puVar4 + 0xb6) = uVar5;
  lVar1 = *(ulong *)(puVar4 + 0xb8) + uVar5;
  if (CARRY8(*(ulong *)(puVar4 + 0xb8),uVar5)) {
    lVar1 = -1;
  }
  *(long *)(puVar4 + 0xba) = lVar1;
  func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
  *(undefined8 *)(param_1 + 0x900) = 0;
  if (param_2 == 0) {
LAB_00361a44:
    *(undefined8 *)(puVar4 + 0x94) = 0;
  }
  else {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
      iVar3 = **(int **)(param_1 + 0x18);
      if ((0x303 < iVar3) && (iVar3 != 0x10000)) goto LAB_00361a44;
    }
    iVar3 = FUN_003614bc(param_1,puVar4);
    if (iVar3 == 0) goto LAB_00361af8;
  }
  uVar5 = *(ulong *)(param_1 + 0x8d8);
  if (uVar5 < 0x21) {
// WM - no support for modified copies
    _memcpy(puVar4 + 0xa0,param_1 + 0x8e0,uVar5);
    *(ulong *)(puVar4 + 0x9e) = uVar5;
    *(undefined4 **)(param_1 + 0x900) = puVar4;
    *puVar4 = *(undefined4 *)(param_1 + 0x48);
    *(undefined8 *)(puVar4 + 0xb4) = 0;
    if ((*(byte *)(param_1 + 0x161) >> 1 & 1) != 0) {
      puVar4[0xde] = puVar4[0xde] | 1;
    }
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x1d8,"ssl_get_new_session");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
LAB_00361af8:
  func_0x00361b60(puVar4);
  return 0;
}

