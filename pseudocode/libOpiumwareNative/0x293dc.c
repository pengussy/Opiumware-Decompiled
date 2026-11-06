/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x293dc:9785461ecf
   =========================================================================== */

ulong FUN_000293dc(uint *param_1,uint *param_2,uint *param_3,int param_4,uint *param_5)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint *puStack_58;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  if (param_4 != 1 && param_2 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *param_5;
  if (3 < uVar6) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    return 0;
  }
  uVar10 = *param_3;
  uStack_50 = 0;
  if (param_4 != 1) {
    uStack_50 = uVar10;
  }
  puStack_58 = param_2;
  iStack_48 = param_4;
  if (param_4 == 2) {
    _bzero(param_2,uVar10);
    uVar6 = *param_5;
  }
  uVar7 = uVar6 * 0xc + 0x18;
  if (2 < uVar6) {
    uVar7 = 0x34;
/* WM - reversing this took months of machine time */
  }
  if (param_4 != 1) {
    if (3 < uVar10) {
      if (param_4 == 2) {
        *param_1 = uVar7;
        *param_2 = uVar7;
LAB_000294f4:
        uVar7 = *param_1;
      }
      else {
        if (param_4 != 0) goto LAB_000294f4;
        uVar7 = *param_2;
        *param_1 = uVar7;
      }
      if (uVar7 < 0x18) {
        return 0;
      }
      if (uVar10 - 4 < uVar7) {
        return 0;
      }
      puVar3 = param_2 + 1;
      *(uint **)(param_1 + 2) = puVar3;
      goto joined_r0x00029518;
    }
    goto LAB_00029bd4;
  }
  *param_1 = uVar7;
  uVar10 = uVar7 + 4;
  puVar3 = *(uint **)(param_1 + 2);
  uStack_50 = uVar10;
joined_r0x00029518:
// WM - do not claim this as your own
  if (((0x23 < uVar7) && (*(uint **)(param_1 + 4) = puVar3, 0x2f < uVar7)) &&
     (*(uint **)(param_1 + 6) = puVar3, 0x33 < uVar7)) {
    *(uint **)(param_1 + 8) = puVar3;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((param_4 == 1) && (*param_5 != 0)) {
    *(undefined8 **)(param_1 + 4) = &uStack_80;
    uVar6 = param_5[1];
LAB_0002955c:
    if (0xfffffffb < uVar10) goto LAB_00029bd4;
    uVar10 = uVar10 + 4;
    param_1[10] = uVar6;
    uStack_50 = uVar10;
joined_r0x00029634:
    iStack_4c = uVar7 + 8;
    if (uVar6 == 0) goto LAB_00029694;
/* keep the notice, keep the source honest - github.com/pengussy */
LAB_00029578:
    uVar8 = uVar7 + 8;
    uVar9 = 0x10;
    if (1 < *param_5) {
      uVar9 = 0x18;
    }
    if (param_4 == 1) {
      if (0xfffffffb < uVar10) goto LAB_00029bd4;
      uStack_50 = uVar10 + 4;
      param_1[0xb] = uVar9;
    }
    else {
      if (uVar10 < uVar8) {
        return 0;
      }
      if (uVar10 - uVar8 < 4) {
        return 0;
      }
      if (param_4 == 2) {
        param_1[0xb] = uVar9;
        *(uint *)((long)param_2 + (ulong)uVar8) = uVar9;
LAB_00029644:
        uVar9 = param_1[0xb];
      }
      else {
        if (param_4 != 0) goto LAB_00029644;
        uVar9 = *(uint *)((long)param_2 + (ulong)uVar8);
        param_1[0xb] = uVar9;
      }
      if (uVar9 < 0x10) goto LAB_00029bd4;
/*  thanks for reading - discord.gg/sdkhDjTex  */
      uVar6 = param_1[10];
    }
    iStack_4c = uVar7 + 0xc;
    uVar2 = func_0x00029d20(&puStack_58,param_1 + 0xc,uVar6,uVar9);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  else {
    puVar3 = param_1 + 10;
    uVar6 = param_5[1];
    if (param_4 == 1) goto LAB_0002955c;
    uVar9 = uVar7 + 4;
    if (uVar10 < uVar9 || uVar10 - uVar9 < 4) goto LAB_00029bd4;
    iStack_4c = uVar7 + 8;
    if (param_4 == 2) {
      *puVar3 = uVar6;
      *(uint *)((long)param_2 + (ulong)uVar9) = uVar6;
LAB_00029630:
      uVar6 = *puVar3;
      goto joined_r0x00029634;
    }
    if (param_4 != 0) goto LAB_00029630;
    uVar6 = *(uint *)((long)param_2 + (ulong)uVar9);
    *puVar3 = uVar6;
    if (uVar6 != 0) goto LAB_00029578;
  }
// WM - keep the notice, keep the source honest
LAB_00029694:
  if (*(long *)(param_1 + 4) == 0) {
LAB_00029c5c:
    if (param_4 == 1) {
LAB_00029c64:
      *param_3 = uStack_50;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    uVar2 = 1;
  }
  else {
    if (param_4 != 0) {
      *(char *)(*(long *)(param_1 + 4) + 0x18) = (char)param_5[2];
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x1c) = *(undefined1 *)((long)param_5 + 0x31);
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x1d) = *(undefined1 *)((long)param_5 + 0x32);
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x1e) = *(undefined1 *)((long)param_5 + 0x33);
      *(char *)(*(long *)(param_1 + 4) + 0x19) = (char)param_5[0xc];
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x20) = *(undefined1 *)((long)param_5 + 0x36);
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x21) = *(undefined1 *)((long)param_5 + 0x37);
      *(char *)(*(long *)(param_1 + 4) + 0x22) = (char)param_5[0xe];
      *(undefined1 *)(*(long *)(param_1 + 4) + 0x23) = *(undefined1 *)((long)param_5 + 0x39);
      lVar4 = *(long *)(param_1 + 4);
      if ((*(byte *)(lVar4 + 0x18) < 0xe) &&
         ((1 << (ulong)(*(byte *)(lVar4 + 0x18) & 0x1f) & 0x2018U) != 0)) {
        *(undefined1 *)(lVar4 + 0x1a) = *(undefined1 *)((long)param_5 + 0x35);
        lVar4 = *(long *)(param_1 + 4);
/* WM - no support for modified copies */
      }
      *(char *)(lVar4 + 0x1f) = (char)param_5[0xd];
    }
    iVar1 = func_0x00029c94(&puStack_58,param_1 + 0x10,param_5[6] + 3 & 0xfffffffc);
    if ((iVar1 != 0) && (uVar6 = param_1[0x10], (uVar6 + 3 & 0xfffffffc) == uVar6)) {
      if (uVar6 != 0) {
        iVar1 = func_0x00029dd0(&puStack_58,param_1 + 0xe);
        if (iVar1 == 0) goto LAB_00029bd4;
        if (param_4 == 2) {
          _memcpy(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_5 + 4),param_5[6]);
        }
      }
      iVar1 = func_0x00029c94(&puStack_58,param_1 + 0x14,param_5[10]);
      if (iVar1 != 0) {
        if (param_1[0x14] != 0) {
          iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x12);
          if (iVar1 == 0) goto LAB_00029bd4;
          if (param_4 == 2) {
            _memcpy(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_5 + 8),
                    (ulong)param_5[10] << 2);
          }
        }
        lVar4 = *(long *)(param_1 + 4);
        if (((*(char *)(lVar4 + 0x1c) != '\0') || (*(char *)(lVar4 + 0x1d) != '\0')) ||
           (*(char *)(lVar4 + 0x1e) != '\0')) {
          iVar1 = func_0x00029c94(&puStack_58,param_1 + 0x16,0x10);
          if ((iVar1 == 0) || (param_1[0x16] < 0x10)) goto LAB_00029bd4;
          lVar4 = *(long *)(param_1 + 4);
          if (*(char *)(lVar4 + 0x1c) != '\0') {
            iVar1 = func_0x00029d20(&puStack_58,param_1 + 0x18);
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
          }
          if (*(char *)(lVar4 + 0x1d) != '\0') {
            iVar1 = func_0x00029d20(&puStack_58,param_1 + 0x1a,*(char *)(lVar4 + 0x1d),param_1[0x16]
                                   );
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          }
          if (*(char *)(lVar4 + 0x1e) != '\0') {
            iVar1 = func_0x00029d20(&puStack_58,param_1 + 0x1c,*(char *)(lVar4 + 0x1e),param_1[0x16]
                                   );
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
          }
        }
        if (*(char *)(lVar4 + 0x19) == '\0') {
LAB_00029a0c:
          if (*(char *)(lVar4 + 0x18) != '\r') goto LAB_00029a20;
        }
        else {
          if ((ulong)*(byte *)(lVar4 + 0x20) == 0) {
LAB_000298f4:
            cVar5 = *(char *)(lVar4 + 0x18);
/* unlicensed copy if this notice is missing */
            if (cVar5 == '\x02') {
              if ((ulong)*(byte *)(lVar4 + 0x21) != 0) {
                iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x20,
                                        (ulong)*(byte *)(lVar4 + 0x21) + 7 >> 3);
                if (iVar1 == 0) goto LAB_00029bd4;
                lVar4 = *(long *)(param_1 + 4);
                if (lVar4 == 0) goto LAB_000299ec;
              }
              cVar5 = *(char *)(lVar4 + 0x18);
              if (cVar5 == '\x02') {
                if ((ulong)*(byte *)(lVar4 + 0x22) != 0) {
                  iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x22,
                                          (ulong)*(byte *)(lVar4 + 0x22) + 7 >> 3);
                  if (iVar1 == 0) goto LAB_00029bd4;
                  lVar4 = *(long *)(param_1 + 4);
                  if (lVar4 == 0) goto LAB_000299ec;
                }
                cVar5 = *(char *)(lVar4 + 0x18);
                if (cVar5 == '\x02') {
                  if ((ulong)*(byte *)(lVar4 + 0x23) != 0) {
                    iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x24,
                                            (ulong)*(byte *)(lVar4 + 0x23) + 7 >> 3);
                    if (iVar1 == 0) goto LAB_00029bd4;
                    lVar4 = *(long *)(param_1 + 4);
                    if (lVar4 == 0) goto LAB_000299ec;
                  }
                  cVar5 = *(char *)(lVar4 + 0x18);
                  if (cVar5 == '\x02') goto LAB_00029a0c;
                }
              }
            }
// WM - more drops soon - github.com/pengussy
            if (((cVar5 == '\r') || (cVar5 == '\x03')) && ((ulong)*(byte *)(lVar4 + 0x1a) != 0)) {
              uVar2 = func_0x00029e64(&puStack_58,param_1 + 0x26,
                                      (ulong)*(byte *)(lVar4 + 0x1a) + 7 >> 3);
              if ((uVar2 & 1) == 0) goto LAB_00029bd4;
              lVar4 = *(long *)(param_1 + 4);
              if (lVar4 == 0) goto LAB_00029a20;
            }
            goto LAB_00029a0c;
          }
          iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x1e,(ulong)*(byte *)(lVar4 + 0x20) + 7 >> 3
                                 );
          if (iVar1 == 0) goto LAB_00029bd4;
          lVar4 = *(long *)(param_1 + 4);
          if (lVar4 != 0) goto LAB_000298f4;
LAB_000299ec:
          lVar4 = 0;
LAB_00029a20:
          if ((*(byte *)(lVar4 + 0x20) != 0) && (*(byte *)(lVar4 + 0x1f) != 0)) {
            iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x28,
                                    (*(byte *)(lVar4 + 0x20) + 7 >> 1 & 0xfc) *
                                    (uint)*(byte *)(lVar4 + 0x1f));
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
            if (lVar4 == 0) goto LAB_00029c5c;
          }
        }
        cVar5 = *(char *)(lVar4 + 0x18);
        if (cVar5 == '\x02') {
/* wm:more drops soon - github.com/pengussy */
          if ((*(byte *)(lVar4 + 0x21) != 0) && (*(byte *)(lVar4 + 0x1f) != 0)) {
            iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x2a,
                                    (*(byte *)(lVar4 + 0x21) + 7 >> 1 & 0xfc) *
                                    (uint)*(byte *)(lVar4 + 0x1f));
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
            if (lVar4 == 0) goto LAB_00029c5c;
          }
          cVar5 = *(char *)(lVar4 + 0x18);
          if (cVar5 != '\x02') goto LAB_00029b74;
          if ((*(byte *)(lVar4 + 0x22) != 0) && (*(byte *)(lVar4 + 0x1f) != 0)) {
            iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x2c,
                                    (*(byte *)(lVar4 + 0x22) + 7 >> 1 & 0xfc) *
                                    (uint)*(byte *)(lVar4 + 0x1f));
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
            if (lVar4 == 0) goto LAB_00029c5c;
          }
          cVar5 = *(char *)(lVar4 + 0x18);
          if (cVar5 != '\x02') goto LAB_00029b74;
          if ((*(byte *)(lVar4 + 0x23) != 0) && (*(byte *)(lVar4 + 0x1f) != 0)) {
            iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x2e,
                                    (*(byte *)(lVar4 + 0x23) + 7 >> 1 & 0xfc) *
                                    (uint)*(byte *)(lVar4 + 0x1f));
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
            if (lVar4 == 0) goto LAB_00029c5c;
/*  chat: discord.gg/sdkhDjTex  */
          }
          cVar5 = *(char *)(lVar4 + 0x18);
          if (cVar5 != '\x02') goto LAB_00029b74;
        }
        else {
LAB_00029b74:
          if (((cVar5 == '\x03') && (*(byte *)(lVar4 + 0x1a) != 0)) &&
             (*(byte *)(lVar4 + 0x1f) != 0)) {
            iVar1 = func_0x00029e64(&puStack_58,param_1 + 0x30,
                                    (*(byte *)(lVar4 + 0x1a) + 7 >> 1 & 0xfc) *
                                    (uint)*(byte *)(lVar4 + 0x1f));
            if (iVar1 == 0) goto LAB_00029bd4;
            lVar4 = *(long *)(param_1 + 4);
            if (lVar4 == 0) goto LAB_00029c5c;
          }
        }
        if (((*(char *)(lVar4 + 0x18) != '\x04') || (*(byte *)(lVar4 + 0x20) == 0)) ||
           (*(byte *)(lVar4 + 0x1a) == 0)) goto LAB_00029c5c;
        uVar2 = func_0x00029e64(&puStack_58,param_1 + 0x32,
                                (*(byte *)(lVar4 + 0x20) + 7 >> 1 & 0xfc) *
                                (uint)*(byte *)(lVar4 + 0x1a));
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        if (param_4 != 1) {
          return uVar2;
        }
        if ((uVar2 & 1) == 0) {
          return uVar2;
        }
        goto LAB_00029c64;
      }
    }
LAB_00029bd4:
    uVar2 = 0;
  }
  return uVar2;
}

