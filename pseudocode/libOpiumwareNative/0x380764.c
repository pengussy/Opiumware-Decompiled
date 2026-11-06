/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x380764:b06e0b2168
   =========================================================================== */

long * FUN_00380764(long *param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar7 = (long *)func_0x019eb5a0(0xa8,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                   ,0x68);
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar8 = 0;
  lVar10 = *param_1;
  *plVar7 = lVar10;
  uVar2 = *(ushort *)(param_1 + 4);
  uVar3 = *(ushort *)((long)param_1 + 0x24);
  lVar9 = param_1[3];
  plVar7[5] = lVar9;
  *(ushort *)((long)plVar7 + 0x9a) =
       *(ushort *)((long)plVar7 + 0x9a) & 0xfff9 | (uVar3 & 1) << 2 | (ushort)((uVar2 & 1) << 1);
  lVar11 = param_1[1];
  plVar7[4] = param_1[2];
  plVar7[3] = lVar11;
  if ((lVar10 == 0) || (lVar9 == 0)) {
LAB_00380968:
    func_0x00451e8c(lVar8);
/*  found on a paste site? it was re-uploaded illegally  */
    func_0x004743e4(0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                    ,0xbf);
    bVar1 = false;
  }
  else {
    lVar9 = func_0x00446c9c(0);
    plVar7[0x12] = lVar9;
    lVar8 = 0;
    if (lVar9 == 0) goto LAB_00380968;
    iVar5 = (uVar2 & 1) << 3;
    lVar9 = func_0x00379c8c(0,iVar5,&DAT_00381460,plVar7);
    plVar7[8] = lVar9;
    lVar8 = 0;
    if (lVar9 == 0) goto LAB_00380968;
    func_0x00379f18(lVar9,&DAT_00381468,plVar7);
    lVar9 = func_0x00387f14(*(undefined8 *)*plVar7,((undefined8 *)*plVar7)[1]);
    plVar7[0x11] = lVar9;
    lVar8 = 0;
    if (lVar9 == 0) goto LAB_00380968;
    lVar9 = func_0x0037f784(*(undefined8 *)*plVar7,iVar5);
    plVar7[0x10] = lVar9;
    lVar8 = 0;
    if (lVar9 == 0) goto LAB_00380968;
    *(char *)(plVar7 + 0x13) = (char)iVar5;
    *(undefined1 *)((long)plVar7 + 0x99) = 8;
    *(ushort *)((long)plVar7 + 0x9a) = *(ushort *)((long)plVar7 + 0x9a) & 0xfffe;
// watermarked copy - do not remove
    lVar8 = *plVar7;
    lVar9 = *(long *)(lVar8 + 0x90);
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar7;
    }
    plVar7[1] = 0;
    plVar7[2] = lVar9;
    *(long **)(lVar8 + 0x90) = plVar7;
    if (*(long *)(lVar8 + 0x88) == 0) {
      *(long **)(lVar8 + 0x88) = plVar7;
    }
    *(long *)(lVar8 + 0x98) = *(long *)(lVar8 + 0x98) + 1;
    *(ushort *)((long)plVar7 + 0x9a) = *(ushort *)((long)plVar7 + 0x9a) | 0x120;
    lVar9 = func_0x00451f08();
    plVar7[0x14] = lVar9;
    lVar8 = 0;
    if ((((lVar9 == 0) ||
         (lVar8 = func_0x004535cc(*(undefined8 *)*plVar7,"AES-256-GCM",0), lVar8 == 0)) ||
        (iVar5 = func_0x019e9e3c(plVar7[0x14],lVar8,0,0,0), iVar5 == 0)) ||
       (iVar5 = func_0x00455d34(plVar7[0x14]), iVar5 < 1)) goto LAB_00380968;
    lVar9 = func_0x019eb530(iVar5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                            ,0xb4);
    if ((lVar9 == 0) || (iVar6 = func_0x004b2208(*(undefined8 *)*plVar7,lVar9,iVar5,0), iVar6 == 0))
    {
      bVar1 = false;
      bVar4 = true;
    }
    else {
      iVar6 = func_0x019e9e3c(plVar7[0x14],0,0,lVar9,0);
      bVar4 = iVar6 == 0;
      bVar1 = !bVar4;
    }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    func_0x00451e8c(lVar8);
    func_0x00474404(lVar9,iVar5,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                    ,0xbd);
    if (!bVar4) goto LAB_0038098c;
  }
  func_0x00380a40(plVar7);
LAB_0038098c:
  if (!bVar1) {
    func_0x004743e4(plVar7,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                    ,0x73);
    return (long *)0x0;
  }
  return plVar7;
}

