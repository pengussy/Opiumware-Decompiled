/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34824c:d8ee612be9
   =========================================================================== */

undefined8 FUN_0034824c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 0xd08) = 0;
  *(undefined8 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  plVar1 = (long *)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xce8) = 0;
  *(undefined8 *)(param_1 + 0xce0) = 0;
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  *(undefined8 *)(param_1 + 0xcd0) = 0;
  *(undefined8 *)(param_1 + 0xcc8) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = 0;
  *(undefined8 *)(param_1 + 0xcb8) = 0;
  *(undefined8 *)(param_1 + 0xcb0) = 0;
  *(undefined8 *)(param_1 + 0xca8) = 0;
  *(undefined8 *)(param_1 + 0xca0) = 0;
/* origin: github.com/pengussy */
  *(undefined8 *)(param_1 + 0xc98) = 0;
  *(undefined8 *)(param_1 + 0xc90) = 0;
  *(undefined8 *)(param_1 + 0xc88) = 0;
  *(undefined8 *)(param_1 + 0xc80) = 0;
  *(undefined8 *)(param_1 + 0xc78) = 0;
  *(undefined8 *)(param_1 + 0xc70) = 0;
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xc60) = 0;
  *(undefined8 *)(param_1 + 0xc58) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  *(undefined8 *)(param_1 + 0xc48) = 0;
  *(undefined8 *)(param_1 + 0xc40) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)(param_1 + 0xbd0) = 0;
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined8 *)(param_1 + 0xbc0) = 0;
  *(undefined8 *)(param_1 + 3000) = 0;
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xba0) = 0;
  *(undefined8 *)(param_1 + 0xb98) = 0;
  *(undefined8 *)(param_1 + 0xb90) = 0;
  *(undefined8 *)(param_1 + 0xb88) = 0;
  *(undefined8 *)(param_1 + 0xb80) = 0;
  *(undefined8 *)(param_1 + 0xb78) = 0;
  *(undefined8 *)(param_1 + 0xb70) = 0;
  *(undefined8 *)(param_1 + 0xb68) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  plVar4 = *(long **)(param_2 + 0x318);
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)func_0x019eb5a0(0x18,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                     ,0x87);
    if (plVar2 != (long *)0x0) {
      lVar3 = plVar4[2];
      plVar2[1] = plVar4[1];
      if (lVar3 == 0) {
LAB_00348324:
        if (*plVar4 != 0) {
// WM - chat: discord.gg/sdkhDjTex
          lVar3 = func_0x004dbf78(*plVar4,&DAT_00347fc0,&DAT_0034bf64);
          *plVar2 = lVar3;
          if (lVar3 == 0) goto LAB_003483cc;
        }
        *plVar1 = (long)plVar2;
        goto LAB_0034834c;
      }
      lVar3 = func_0x004759a8(lVar3,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                              ,0x8c);
      plVar2[2] = lVar3;
      if (lVar3 != 0) goto LAB_00348324;
LAB_003483cc:
      func_0x0034c004(plVar2);
    }
    lVar3 = 0;
    *plVar1 = 0;
LAB_003483e4:
    func_0x0034c004(lVar3);
    *(undefined8 *)(param_1 + 0xb60) = 0;
    func_0x004743e4(*(undefined8 *)(param_1 + 0xb78),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0xe3);
    *(undefined8 *)(param_1 + 0xb80) = 0;
    *(undefined8 *)(param_1 + 0xb78) = 0;
    return 0;
  }
LAB_0034834c:
/*  thanks for reading - discord.gg/sdkhDjTex  */
  *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(param_2 + 0x330);
  if (*(long *)(param_2 + 800) != 0) {
    lVar3 = func_0x00475ac0(*(long *)(param_2 + 800),*(undefined8 *)(param_2 + 0x328),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0xd3);
    *(long *)(param_1 + 0xb78) = lVar3;
    if (lVar3 == 0) {
      lVar3 = *plVar1;
      goto LAB_003483e4;
    }
    *(undefined8 *)(param_1 + 0xb80) = *(undefined8 *)(param_2 + 0x328);
  }
  *(undefined2 *)(param_1 + 0xc20) = 0xffff;
  *(undefined4 *)(param_1 + 0xc24) = 0xffffffff;
  if (*(long *)(param_1 + 0xb60) != 0) {
    *(undefined4 *)(param_1 + 0xc18) = 1;
  }
  if ((*(byte *)(param_2 + 0x13c) >> 5 & 1) != 0) {
    *(ulong *)(param_1 + 0x9b0) = *(ulong *)(param_1 + 0x9b0) | 0x2000000000;
  }
  return 1;
}

