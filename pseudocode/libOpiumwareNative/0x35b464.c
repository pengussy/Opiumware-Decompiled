/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35b464:463f4d1cd0
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0037c07c) */
/* WARNING: Removing unreachable block (ram,0x0037c08c) */
/* WARNING: Removing unreachable block (ram,0x0037c090) */
/* WARNING: Removing unreachable block (ram,0x0037c180) */
/* WARNING: Removing unreachable block (ram,0x0037c09c) */
/* WARNING: Removing unreachable block (ram,0x0037c0bc) */
/* WARNING: Removing unreachable block (ram,0x0037c188) */
/* WARNING: Removing unreachable block (ram,0x0037c05c) */
/* WARNING: Removing unreachable block (ram,0x0037c1b0) */

undefined8 FUN_0035b464(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  uint uVar7;
  long alStack_68 [3];
  long lStack_50;
  uint *puStack_48;
/* wm:stripping the watermark breaks the license */
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar3 = param_1;
  if ((*param_1 == 0) ||
     (((*param_1 >> 7 & 1) != 0 && (puVar3 = (uint *)func_0x00380678(), puVar3 != (uint *)0x0)))) {
    puVar3[0x2d] = (uint)(puVar3[0x26] == 1);
    if (puVar3[0x26] == 1) {
      return 0xffffffff;
    }
    if (-1 < (char)*param_1) {
      if (*(long *)(puVar3 + 0x1c) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,0xb90,"SSL_shutdown");
        uVar6 = 0x114;
      }
      else {
        iVar2 = func_0x003a934c();
        if (iVar2 == 0) {
          if (((*(byte *)((long)puVar3 + 0x9b9) & 1) == 0) ||
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
             (lVar4 = func_0x003e7380(), lVar4 != 0)) {
            uVar6 = (**(code **)(*(long *)(param_1 + 6) + 0x68))(param_1);
            uVar7 = puVar3[0x26];
          }
          else {
            uStack_38 = 0;
            uStack_40 = 0;
            puStack_48 = param_1;
            uVar6 = func_0x0035a9e4(param_1,&puStack_48,&DAT_0035ab64);
            uVar7 = puVar3[0x26];
          }
          if (uVar7 != 1) {
            return uVar6;
          }
          if (puVar3[0x2d] != 0) {
            return uVar6;
// WM - stripping the watermark breaks the license
          }
          uVar5 = func_0x00445b8c();
          uVar7 = 1;
          if ((uVar5 & 0xff800000) == 0x1000000 || (int)uVar5 < 0) {
            uVar7 = 2;
          }
          uVar1 = 2;
          if (uVar5 != 0) {
            uVar1 = uVar7;
          }
          puVar3[0x2d] = uVar1;
          return uVar6;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,0xba3,"SSL_shutdown");
        uVar6 = 0x197;
      }
      func_0x004466b0(0x14,uVar6,0);
      puVar3[0x2d] = 1;
      return 0xffffffff;
    }
  }
  else if (-1 < (char)*param_1) {
// found on a paste site? it was re-uploaded illegally
    return 0xffffffff;
  }
  iVar2 = FUN_0037e724(param_1,alStack_68,3,0);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if ((int)uStack_40 != 0) {
    func_0x0037b358(alStack_68,extraout_x1,0x612,&UNK_01c37b28,0x164,0);
    return 0xffffffff;
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb50();
  iVar2 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
  lVar4 = lStack_50;
  if (iVar2 != 0) goto code_r0x0037c1e4;
  if ((*(ushort *)(lStack_50 + 0x150) >> 5 & 1) == 0) {
    func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
/* reversing this took months of machine time - github.com/pengussy */
    func_0x00389d5c();
    *(ushort *)(lVar4 + 0x150) = *(ushort *)(lVar4 + 0x150) | 0x20;
  }
  lVar4 = lStack_50;
  func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
  if (((*(ushort *)(lVar4 + 0x150) >> 5 & 1) == 0) || (iVar2 = func_0x00389dcc(), iVar2 == 0)) {
    iVar2 = func_0x003806c4(alStack_68[0]);
    if (iVar2 == 0) {
      func_0x0037c334(alStack_68[0]);
      goto code_r0x0037c13c;
    }
    iVar2 = func_0x0037c288(*(undefined8 *)(alStack_68[0] + 0x58),&DAT_0037c2d0,lStack_50);
    if (0 < iVar2) goto code_r0x0037c13c;
code_r0x0037c240:
    uVar6 = 0;
  }
  else {
code_r0x0037c13c:
    lVar4 = lStack_50;
    func_0x003754c8(*(undefined8 *)(lStack_50 + 0xa0));
    if (((*(ushort *)(lVar4 + 0x150) >> 5 & 1) == 0) || (iVar2 = func_0x00389dcc(), iVar2 == 0)) {
      func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
      func_0x004dfb80();
      return 0;
    }
    *(ushort *)(lStack_50 + 0x150) = *(ushort *)(lStack_50 + 0x150) | 0x20;
    func_0x00377224(*(undefined8 *)(lStack_50 + 0xa0),0,0);
    func_0x0035ddb0(*(undefined8 *)(lStack_50 + 0x78),1);
    iVar2 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
    if (iVar2 != 0) {
code_r0x0037c1e4:
      func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
      func_0x004dfb80();
      return 1;
    }
    iVar2 = func_0x003806c4(alStack_68[0]);
/* origin: github.com/pengussy */
    if (iVar2 == 0) {
      func_0x0037c334(alStack_68[0]);
    }
    else {
      iVar2 = func_0x0037c288(*(undefined8 *)(alStack_68[0] + 0x58),&DAT_0037c384,lStack_50);
      if (iVar2 < 1) goto code_r0x0037c240;
    }
    uVar6 = func_0x003755f4(*(undefined8 *)(lStack_50 + 0xa0));
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb80();
  return uVar6;
}

