/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38e098:75db0b4cb4
   =========================================================================== */

undefined8 FUN_0038e098(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    return 0;
  }
  iVar4 = func_0x019ec1d8(param_1 + 8,&lStack_48);
  lVar7 = lStack_48;
  if (iVar4 != 0) {
// proprietary - see LICENSE - do not sell
    if (lStack_48 == 0) {
      lVar7 = 0;
LAB_0038e208:
      param_1[3] = param_1[3] + lVar7;
      func_0x004765c8(param_1 + 8);
      *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
      param_1[7] = 0;
      return 1;
    }
    if ((*(byte *)((long)param_1 + 0x34) >> 1 & 1) == 0) {
      lVar12 = param_1[7];
      lVar6 = *param_1;
      lVar1 = lVar6 + (ulong)*(uint *)(param_1 + 6) * 0x20;
      lVar10 = param_1[5];
      uVar8 = lVar10 + 1;
      uVar11 = *(ulong *)(lVar1 + 0x240);
      if (uVar11 < uVar8) {
        lVar6 = 8;
        if (uVar11 != 0) {
          lVar6 = uVar11 << 1;
        }
        lVar5 = func_0x0046f2fc(*(undefined8 *)(lVar1 + 0x238),lVar6,0x10,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_txp.c"
                                ,0xc4d);
        if (lVar5 == 0) goto LAB_0038e248;
        *(long *)(lVar1 + 0x238) = lVar5;
        *(long *)(lVar1 + 0x240) = lVar6;
        lVar10 = param_1[5];
        uVar8 = lVar10 + 1;
        lVar6 = *param_1;
      }
      else {
        lVar5 = *(long *)(lVar1 + 0x238);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      }
      plVar2 = (long *)(lVar5 + lVar10 * 0x10);
      *plVar2 = lVar12;
      plVar2[1] = lVar7;
      param_1[5] = uVar8;
      param_1[2] = param_1[2] + lVar7;
      lVar7 = lStack_48;
      if ((*(long *)(lVar6 + 0x2a8) == 0) || (lStack_48 == 0)) goto LAB_0038e208;
      if (-1 < lStack_48) {
        lStack_68 = param_1[7];
        lStack_58 = lStack_48;
        lStack_60 = lStack_68;
        iVar4 = func_0x0038f464(&lStack_68,&uStack_50,0);
        if (iVar4 != 0) {
          uVar9 = 0x202;
          if ((uStack_50 & 0xfffffffffffffff8) == 8 || uStack_50 == 6) {
            uVar9 = 0x203;
          }
          uVar3 = 0x204;
          if (uStack_50 != 0) {
            uVar3 = uVar9;
          }
          lVar7 = *param_1;
          (**(code **)(lVar7 + 0x2a8))
                    (1,1,uVar3,param_1[7],lStack_48,*(undefined8 *)(lVar7 + 0x2b8),
                     *(undefined8 *)(lVar7 + 0x2b0));
          lVar7 = lStack_48;
          goto LAB_0038e208;
        }
      }
/*  stripping the watermark breaks the license  */
    }
  }
LAB_0038e248:
  func_0x0047680c(param_1 + 8);
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  param_1[7] = 0;
  return 0;
}

