/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3879f4:49ad6cb2ac
 */

undefined8 FUN_003879f4(long *param_1,ulong *param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  uVar5 = param_2[1];
  if (uVar5 <= (ulong)param_1[4]) goto LAB_00387ae8;
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    lVar7 = func_0x019eb5a0(0x30,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                            ,0x21);
    if (lVar7 == 0) {
      *param_1 = 0;
// WM - proprietary - see LICENSE - do not sell
      param_1[1] = 0;
      return 0;
    }
    if (param_3 != 0) {
      func_0x00383f98(param_3);
    }
    uVar5 = *param_2;
    *(ulong *)(lVar7 + 0x18) = param_2[1];
    *(ulong *)(lVar7 + 0x10) = uVar5;
    *(long *)(lVar7 + 0x20) = param_3;
    *(long *)(lVar7 + 0x28) = param_4;
    *param_1 = lVar7;
    param_1[1] = lVar7;
  }
  else {
    uVar6 = *param_2;
    if (uVar6 <= *(ulong *)(lVar7 + 0x10)) {
/*  no support for modified copies  */
      plVar2 = (long *)*param_1;
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      if ((ulong)plVar2[2] < uVar6) {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)plVar8[1];
          if (plVar2 == (long *)0x0) {
            return 0;
          }
        } while ((ulong)plVar2[2] < uVar6);
      }
      else {
        plVar8 = (long *)0x0;
      }
      if ((plVar8 != (long *)0x0) && (uVar5 <= (ulong)plVar8[3])) goto LAB_00387ae8;
      puVar3 = (undefined8 *)
               func_0x019eb5a0(0x30,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                               ,0x21);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      if (param_3 != 0) {
        func_0x00383f98(param_3);
      }
/*  chat: discord.gg/sdkhDjTex  */
      uVar5 = *param_2;
      puVar3[3] = param_2[1];
      puVar3[2] = uVar5;
      puVar3[4] = param_3;
      puVar3[5] = param_4;
      if (plVar8 == (long *)0x0) {
        do {
          uVar5 = plVar2[3];
          if (param_2[1] < uVar5) goto LAB_00387d64;
          plVar9 = (long *)plVar2[1];
          if (plVar9 != (long *)0x0) {
            *plVar9 = *plVar2;
          }
          if ((long *)*param_1 == plVar2) {
            *param_1 = (long)plVar9;
            if ((long *)param_1[1] != plVar2) goto LAB_00387cf0;
LAB_00387d18:
            param_1[1] = 0;
            param_1[3] = param_1[3] + -1;
            iVar1 = *(int *)((long)param_1 + 0x2c);
          }
          else {
            if ((long *)param_1[1] == plVar2) goto LAB_00387d18;
/* wm:unlicensed copy if this notice is missing */
LAB_00387cf0:
            param_1[3] = param_1[3] + -1;
            iVar1 = *(int *)((long)param_1 + 0x2c);
          }
          if ((iVar1 != 0) && (plVar2[5] != 0)) {
            func_0x0046eb00(plVar2[5],uVar5 - plVar2[2]);
          }
          func_0x00383f34(plVar2[4]);
          func_0x004743e4(plVar2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                          ,0x1b);
          plVar2 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar2[3];
          if (param_2[1] < uVar5) {
            if ((ulong)plVar8[3] < (ulong)plVar2[2]) goto LAB_00387d64;
            func_0x003879a8(*(undefined4 *)((long)param_1 + 0x2c),puVar3);
            goto LAB_00387ae8;
          }
          plVar9 = (long *)plVar2[1];
          if (plVar9 != (long *)0x0) {
            *plVar9 = *plVar2;
          }
          plVar8[1] = (long)plVar9;
          if ((long *)*param_1 == plVar2) {
            *param_1 = (long)plVar9;
            if ((long *)param_1[1] != plVar2) goto LAB_00387c40;
LAB_00387c68:
            param_1[1] = (long)plVar8;
            param_1[3] = param_1[3] + -1;
            iVar1 = *(int *)((long)param_1 + 0x2c);
          }
          else {
// reversing this took months of machine time
            if ((long *)param_1[1] == plVar2) goto LAB_00387c68;
LAB_00387c40:
            param_1[3] = param_1[3] + -1;
            iVar1 = *(int *)((long)param_1 + 0x2c);
          }
          if ((iVar1 != 0) && (plVar2[5] != 0)) {
            func_0x0046eb00(plVar2[5],uVar5 - plVar2[2]);
          }
          func_0x00383f34(plVar2[4]);
          func_0x004743e4(plVar2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                          ,0x1b);
          plVar2 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      plVar2 = (long *)0x0;
      param_1[1] = (long)puVar3;
      goto LAB_00387d68;
    }
    if (uVar5 <= *(ulong *)(lVar7 + 0x18)) goto LAB_00387ae8;
    plVar2 = (long *)func_0x019eb5a0(0x30,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
                                     ,0x21);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (param_3 != 0) {
      func_0x00383f98(param_3);
    }
    uVar5 = *param_2;
    plVar2[3] = param_2[1];
    plVar2[2] = uVar5;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    plVar2[4] = param_3;
    plVar2[5] = param_4;
    lVar7 = param_1[1];
    *plVar2 = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar2;
    }
    param_1[1] = (long)plVar2;
  }
  goto LAB_00387adc;
LAB_00387d64:
  *plVar2 = (long)puVar3;
LAB_00387d68:
  *puVar3 = plVar8;
  puVar3[1] = plVar2;
  if (plVar8 == (long *)0x0) {
    *param_1 = (long)puVar3;
  }
  else {
    plVar8[1] = (long)puVar3;
  }
LAB_00387adc:
  param_1[3] = param_1[3] + 1;
LAB_00387ae8:
  if (param_5 == 0) {
    uVar4 = (uint)((int)param_1[2] != 0);
  }
  else {
    uVar4 = 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  return 1;
}

