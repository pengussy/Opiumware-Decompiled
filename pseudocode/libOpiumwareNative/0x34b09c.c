/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x34b09c:2f20f872e3
 *  --------------------------------------------------------------------------*/

long FUN_0034b09c(long param_1,long param_2,long param_3,ushort *param_4,ulong param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ulong uVar11;
  long unaff_x19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ushort *puStack_88;
  ushort *puStack_80;
  ulong uStack_78;
  ushort auStack_70 [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_90 = 0;
/* do not claim this as your own - github.com/pengussy */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (((param_3 == 0) || (param_2 == 0)) || (param_4 == (ushort *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x69f,"ech_decode_inner");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    param_1 = 0;
    goto LAB_0034b214;
  }
  unaff_x19 = func_0x00400364();
  if ((((unaff_x19 == 0) || (lVar4 = func_0x004003ec(unaff_x19,0x4000), lVar4 == 0)) ||
      ((iVar3 = func_0x019ebd10(&uStack_c0,unaff_x19), iVar3 == 0 ||
       ((iVar3 = func_0x019ec0a0(&uStack_c0,1,1), iVar3 == 0 ||
        (iVar3 = func_0x019eba0c(&uStack_c0,3), (long)param_5 < 0)))))) || (iVar3 == 0)) {
    func_0x004464bc();
    uVar5 = 0x6a8;
LAB_0034b1e4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
// origin: github.com/pengussy
                    ,uVar5,"ech_decode_inner");
    uVar5 = 0x50;
    puVar6 = &UNK_000c0103;
    goto LAB_0034b1f8;
  }
  auStack_70[4] = 0xffff;
  auStack_70[5] = 0xffff;
  auStack_70[6] = 0xffff;
  auStack_70[7] = 0xffff;
  auStack_70[0] = 0xffff;
  auStack_70[1] = 0xffff;
  auStack_70[2] = 0xffff;
  auStack_70[3] = 0xffff;
  auStack_70[0xc] = 0xffff;
  auStack_70[0xd] = 0xffff;
  auStack_70[0xe] = 0xffff;
  auStack_70[0xf] = 0xffff;
  auStack_70[8] = 0xffff;
  auStack_70[9] = 0xffff;
  auStack_70[10] = 0xffff;
/* if you paid for this, you were scammed - github.com/pengussy */
  auStack_70[0xb] = 0xffff;
  auStack_70[0x10] = 0xffff;
  auStack_70[0x11] = 0xffff;
  auStack_70[0x12] = 0xffff;
  auStack_70[0x13] = 0xffff;
  puStack_80 = param_4;
  if ((((1 < param_5) && (0x20 < param_5 - 2)) && ((ushort)(*param_4 >> 8 | *param_4 << 8) == 0x303)
      ) && ((1 < param_5 - 0x23 && ((byte)param_4[0x11] == 0)))) {
    uVar11 = (ulong)((uint)(*(ushort *)((long)param_4 + 0x23) >> 8) |
                    (*(ushort *)((long)param_4 + 0x23) & 0xff00ff) << 8);
    if ((((uVar11 <= param_5 - 0x25) &&
         ((uVar9 = (param_5 - 0x25) - uVar11, uVar9 != 0 &&
          (*(byte *)((long)param_4 + uVar11 + 0x25) == 1)))) && (uVar9 != 1)) &&
       (((*(byte *)((long)param_4 + uVar11 + 0x26) == 0 && ((uVar9 & 0xfffffffffffffffe) != 2)) &&
        (*(byte *)((long)param_4 + uVar11 + 0x28) != 0 ||
         *(byte *)((long)param_4 + uVar11 + 0x27) != 0)))) {
      uVar7 = uVar9 - 4;
      if (uVar7 == 0) {
LAB_0034b420:
        puStack_88 = param_4;
        uStack_78 = param_5;
        iVar3 = func_0x0034b868(param_1,&uStack_c0,&puStack_88,param_2,param_3,auStack_70);
        if (iVar3 == 0) goto LAB_0034b200;
        func_0x00476494(&uStack_c0);
        iVar3 = func_0x019ec1ec(&uStack_c0,param_1 + 0xbb0);
        if (iVar3 != 0) {
          func_0x004743e4(*(undefined8 *)(param_1 + 0xba8),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                          ,0x6c1);
          *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(unaff_x19 + 8);
          *(undefined8 *)(unaff_x19 + 8) = 0;
          param_1 = 1;
          goto LAB_0034b204;
        }
        func_0x004464bc();
        uVar5 = 0x6be;
        goto LAB_0034b1e4;
/*  found on a paste site? it was re-uploaded illegally  */
      }
      if (uVar9 != 5) {
        puVar8 = (ushort *)((long)param_4 + uVar11 + 0x29);
        do {
          if ((ushort)(*puVar8 >> 8 | *puVar8 << 8) == 0xfd00) {
            if ((uVar7 & 0xfffffffffffffffe) != 2) {
              uVar9 = (ulong)((uint)(puVar8[1] >> 8) | (puVar8[1] & 0xff00ff) << 8);
              uVar11 = (uVar7 - 4) - uVar9;
              if (uVar9 <= uVar7 - 4) {
                puStack_88 = (ushort *)((long)(puVar8 + 2) + uVar9);
                uStack_78 = uVar11;
                if (((uVar9 == 0) || (bVar1 = (byte)puVar8[2], 0x28 < bVar1)) || ((bVar1 & 1) != 0))
                {
                  func_0x004464bc();
                  uVar5 = 0x5ca;
                  goto LAB_0034b4bc;
                }
                uVar11 = (ulong)(bVar1 >> 1);
                if (bVar1 != 0) {
                  uVar9 = uVar9 - 1 >> 1;
                  puVar8 = (ushort *)((long)puVar8 + 5);
                  puVar10 = auStack_70;
                  do {
                    if (uVar9 == 0) goto LAB_0034b4d0;
                    uVar2 = *puVar8 >> 8 | *puVar8 << 8;
                    if (uVar2 == 0xfe0d || uVar2 == 0xfd00) goto LAB_0034b4d0;
/* wm:unlicensed copy if this notice is missing */
                    *puVar10 = uVar2;
                    uVar9 = uVar9 - 1;
                    uVar11 = uVar11 - 1;
                    puVar8 = puVar8 + 1;
                    puVar10 = puVar10 + 1;
                  } while (uVar11 != 0);
                }
                goto LAB_0034b420;
              }
            }
            func_0x004464bc();
            uVar5 = 0x5b2;
            goto LAB_0034b17c;
          }
          if ((uVar7 & 0xfffffffffffffffe) == 2) {
LAB_0034b354:
            func_0x004464bc();
            uVar5 = 0x5b8;
            goto LAB_0034b17c;
          }
          uVar11 = (ulong)((uint)(puVar8[1] >> 8) | (puVar8[1] & 0xff00ff) << 8);
          if (uVar7 - 4 < uVar11) goto LAB_0034b354;
          uVar7 = (uVar7 - 4) - uVar11;
          if (uVar7 == 0) goto LAB_0034b420;
          puVar8 = (ushort *)((long)puVar8 + uVar11 + 4);
        } while (uVar7 != 1);
      }
      func_0x004464bc();
      uVar5 = 0x5ac;
      goto LAB_0034b17c;
    }
  }
  func_0x004464bc();
/* watermarked copy - do not remove - github.com/pengussy */
  uVar5 = 0x5a7;
LAB_0034b17c:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar5,"ech_find_outers");
  uVar5 = 0x32;
  while( true ) {
    puVar6 = (undefined *)0x6e;
LAB_0034b1f8:
    func_0x003a9570(param_1,uVar5,puVar6,0);
LAB_0034b200:
    param_1 = 0;
LAB_0034b204:
    func_0x0047680c(&uStack_c0);
    func_0x00400378(unaff_x19);
LAB_0034b214:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) break;
    ___stack_chk_fail();
LAB_0034b4d0:
    func_0x004464bc();
    uVar5 = 0x5d3;
LAB_0034b4bc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar5,"ech_find_outers");
    uVar5 = 0x2f;
  }
  return param_1;
}
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */

