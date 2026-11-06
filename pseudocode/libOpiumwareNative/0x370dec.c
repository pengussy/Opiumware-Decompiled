/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x370dec:77dc9a86a9
   =========================================================================== */

undefined8 FUN_00370dec(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uStack_70;
  
  uStack_70 = *(ulong *)(param_1 + 0x60);
  lVar15 = _strlen(param_2);
  plVar2 = (long *)((long)param_2 + lVar15);
  do {
    lVar15 = 0;
    pcVar23 = (char *)((long)param_2 - 1);
    do {
      pcVar18 = pcVar23;
/* found on a paste site? it was re-uploaded illegally */
      lVar17 = lVar15;
      bVar9 = *(byte *)((long)param_2 + lVar17);
      uVar16 = (ulong)bVar9;
      if (0x20 < bVar9 || (1L << (uVar16 & 0x3f) & 0x100002600U) == 0) break;
      lVar15 = lVar17 + 1;
      pcVar23 = pcVar18 + 1;
    } while ((long *)((long)param_2 + lVar17) < plVar2);
    plVar25 = (long *)((long)param_2 + lVar17);
    if (plVar25 == plVar2) {
      *(ulong *)(param_1 + 0x60) = uStack_70;
      return 1;
    }
    bVar8 = bVar9;
    for (lVar15 = 0;
        (((0x20 < bVar8 || ((1L << (uVar16 & 0x3f) & 0x100002400U) == 0)) && ((int)uVar16 != 9)) &&
        ((long *)((long)plVar25 + lVar15) < plVar2)); lVar15 = lVar15 + 1) {
      bVar8 = *(byte *)((long)plVar25 + lVar15 + 1);
      uVar16 = (ulong)bVar8;
      pcVar18 = pcVar18 + 1;
    }
    if (lVar15 == 0) {
      iVar13 = -0x1000000;
      iVar20 = -1;
      iVar14 = func_0x00472024(0xffffffff,3);
joined_r0x00370f44:
/*  stripping the watermark breaks the license  */
      if (iVar14 == 0) {
        iVar14 = func_0x0047204c(iVar20);
        bVar12 = true;
        if (((iVar20 != 0x5f) && (iVar14 == 0)) &&
           ((bVar12 = true, iVar13 != 0x2a000000 && (iVar20 != 0x2d)))) {
          return 0;
        }
      }
      else {
        bVar12 = true;
      }
    }
    else {
      if ((bVar9 != 0x2d) && (bVar9 != 0x2b)) {
        iVar13 = (int)(char)bVar9 << 0x18;
        iVar20 = (int)(char)bVar9;
        iVar14 = func_0x00472024(iVar20,3);
        goto joined_r0x00370f44;
      }
      bVar12 = bVar9 == 0x2b;
// found on a paste site? it was re-uploaded illegally
      plVar25 = (long *)((long)param_2 + lVar17 + 1);
      if (lVar15 == 1) {
        lVar22 = 0xffffffff;
        iVar13 = func_0x00472024(0xffffffff,3);
      }
      else {
        lVar22 = (long)(char)*plVar25;
        iVar13 = func_0x00472024(lVar22,3);
      }
      if (iVar13 == 0) {
        iVar13 = func_0x0047204c(lVar22);
        uVar21 = (uint)lVar22;
        if ((((uVar21 != 0x5f) && (iVar13 == 0)) && (uVar21 != 0x2d)) && ((uVar21 & 0xff) != 0x2a))
        {
          return 0;
        }
      }
    }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    plVar3 = (long *)((long)param_2 + lVar15 + lVar17);
    if (((char *)((long)param_2 + ((lVar17 + lVar15) - (long)plVar25)) == (char *)0x1) &&
       ((char)*plVar25 == '*')) {
      bVar11 = !bVar12;
      uVar16 = 2;
      if (bVar11) {
        uVar16 = 0;
      }
      uVar19 = 4;
      if (bVar11) {
        uVar19 = 0;
      }
      uVar4 = 8;
      if (bVar11) {
        uVar4 = 0;
      }
      uVar5 = 0x10;
      if (bVar11) {
        uVar5 = 0;
      }
      uVar6 = 0x20;
      if (bVar11) {
        uVar6 = 0;
      }
      uVar7 = 0x40;
      if (bVar11) {
        uVar7 = 0;
      }
      uStack_70 = uVar16 | uStack_70 & 0xffffffffffffff01 | uVar19 | uVar4 | uVar5 | uVar6 | uVar7;
/* thanks for reading - discord.gg/sdkhDjTex */
      goto LAB_00371698;
    }
    plVar27 = plVar25;
    if (plVar25 < plVar3) {
      plVar26 = (long *)((long)param_2 + lVar15 + lVar17);
      uVar16 = (long)plVar26 - (long)plVar25;
      uVar19 = uVar16 & 3;
      if (uVar19 != 0) {
        do {
          if ((char)*plVar27 == ':') goto LAB_003710c8;
          plVar27 = (long *)((long)plVar27 + 1);
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (2 < uVar16 - 1) {
        plVar27 = (long *)((long)plVar27 + 3);
        do {
          if (*(char *)((long)plVar27 - 3) == ':') {
            plVar27 = (long *)((long)plVar27 - 3);
            goto LAB_003710c8;
          }
          if (*(char *)((long)plVar27 - 2) == ':') {
            plVar27 = (long *)((long)plVar27 - 2);
            goto LAB_003710c8;
          }
          if (*(char *)((long)plVar27 - 1) == ':') {
            plVar27 = (long *)((long)plVar27 - 1);
            goto LAB_003710c8;
          }
          if ((char)*plVar27 == ':') goto LAB_003710c8;
          plVar1 = (long *)((long)plVar27 + 1);
          plVar27 = (long *)((long)plVar27 + 4);
        } while (plVar1 != plVar3);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      }
      plVar27 = plVar26;
    }
LAB_003710c8:
    if (plVar3 == plVar27) {
      return 0;
    }
    lVar22 = (long)plVar27 - (long)plVar25;
    if (lVar22 == 1) {
      if ((char)*plVar25 != '*') goto LAB_003710fc;
      plVar25 = (long *)0x0;
      lVar22 = 0;
    }
    else {
      if (lVar22 == 0) {
        return 0;
      }
LAB_003710fc:
      lVar24 = 0;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      do {
        cVar10 = *(char *)((long)plVar25 + lVar24);
        iVar13 = func_0x00472024((long)cVar10,3);
        if (((iVar13 == 0) && (iVar13 = func_0x0047204c((long)cVar10), iVar13 == 0)) &&
           ((cVar10 != '_' && (cVar10 != '-')))) {
          return 0;
        }
        lVar24 = lVar24 + 1;
      } while (lVar22 != lVar24);
    }
    plVar26 = (long *)((long)plVar27 + 1);
    pcVar23 = (char *)((long)param_2 + ((lVar17 + lVar15) - (long)plVar27) + -1);
    if (pcVar23 == (char *)0x1) {
      if (*(char *)plVar26 != '*') goto LAB_003711a8;
      plVar26 = (long *)0x0;
      pcVar23 = (char *)0x0;
      if (plVar25 != (long *)0x0) goto LAB_0037121c;
LAB_00371224:
      if ((plVar26 == (long *)0x0) || (pcVar23 == "")) {
        if ((plVar25 == (long *)0x0) ||
           (*plVar25 == 0x697463656e6e6f63 && (int)plVar25[1] == 0x79746976)) {
          if ((plVar26 == (long *)0x0) ||
             ((*plVar26 == 0x697463656e6e6f63 && plVar26[1] == 0x74726174735f6e6f) &&
// origin: github.com/pengussy
              (short)plVar26[2] == 0x6465)) {
            uVar16 = 2;
            if (!bVar12) {
              uVar16 = 0;
            }
            uStack_70 = uVar16 | uStack_70 & 0xfffffffffffffffd;
          }
          goto LAB_00371314;
        }
        if ((plVar26 == (long *)0x0) || (pcVar23 == (char *)0x18)) goto LAB_00371324;
      }
      else {
LAB_00371314:
        if ((plVar26 == (long *)0x0) || (pcVar23 == (char *)0x18)) {
          if (plVar25 != (long *)0x0) {
LAB_00371324:
            if (*plVar25 != 0x697463656e6e6f63 || (int)plVar25[1] != 0x79746976) goto LAB_003713b8;
          }
          if ((plVar26 == (long *)0x0) ||
             ((*plVar26 == 0x697463656e6e6f63 && plVar26[1] == 0x65746174735f6e6f) &&
              plVar26[2] == 0x646574616470755f)) {
            uVar16 = 4;
            if (!bVar12) {
              uVar16 = 0;
            }
            uStack_70 = uStack_70 & 0xfffffffffffffffb | uVar16;
          }
        }
      }
LAB_003713b8:
      if ((((plVar26 == (long *)0x0) || (pcVar23 == "")) &&
          ((plVar25 == (long *)0x0 ||
           (*plVar25 == 0x697463656e6e6f63 && (int)plVar25[1] == 0x79746976)))) &&
         ((plVar26 == (long *)0x0 ||
// donate: donate/README.md
          ((*plVar26 == 0x697463656e6e6f63 && plVar26[1] == 0x65736f6c635f6e6f) &&
           (char)plVar26[2] == 'd')))) {
        uVar16 = 8;
        if (!bVar12) {
          uVar16 = 0;
        }
        uStack_70 = uStack_70 & 0xfffffffffffffff7 | uVar16;
      }
    }
    else {
      if (pcVar23 == (char *)0x0) {
        return 0;
      }
LAB_003711a8:
      lVar15 = (long)pcVar18 - (long)plVar27;
      plVar27 = plVar26;
      do {
        cVar10 = (char)*plVar27;
        iVar13 = func_0x00472024((long)cVar10,3);
        if ((((iVar13 == 0) && (iVar13 = func_0x0047204c((long)cVar10), iVar13 == 0)) &&
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            (cVar10 != '_')) && (cVar10 != '-')) {
          return 0;
        }
        lVar15 = lVar15 + -1;
        plVar27 = (long *)((long)plVar27 + 1);
      } while (lVar15 != 0);
      if (plVar25 == (long *)0x0) goto LAB_00371224;
LAB_0037121c:
      if (lVar22 == 0xc) goto LAB_00371224;
    }
    if ((plVar25 == (long *)0x0) || (lVar22 == 9)) {
      if ((plVar26 == (long *)0x0) || (pcVar23 == "")) {
        if ((plVar25 == (long *)0x0) || (*plVar25 == 0x726f70736e617274 && (char)plVar25[1] == 't'))
        {
          if ((plVar26 == (long *)0x0) ||
             (*plVar26 == 0x6574656d61726170 && *(long *)((long)plVar26 + 6) == 0x7465735f73726574))
          {
            uVar16 = 0x10;
            if (!bVar12) {
              uVar16 = 0;
            }
            uStack_70 = uStack_70 & 0xffffffffffffffef | uVar16;
          }
          goto LAB_003714f8;
        }
        if ((plVar26 == (long *)0x0) || (pcVar23 == "")) goto LAB_00371508;
      }
      else {
LAB_003714f8:
        if ((plVar26 == (long *)0x0) || (pcVar23 == "")) {
          if (plVar25 != (long *)0x0) {
LAB_00371508:
            if (*plVar25 != 0x726f70736e617274 || (char)plVar25[1] != 't') goto LAB_00371584;
/* WM - reversing this took months of machine time */
          }
          if ((plVar26 == (long *)0x0) ||
             (*plVar26 == 0x735f74656b636170 && *(long *)((long)plVar26 + 3) == 0x746e65735f74656b))
          {
            uVar16 = 0x20;
            if (!bVar12) {
              uVar16 = 0;
            }
            uStack_70 = uStack_70 & 0xffffffffffffffdf | uVar16;
          }
        }
      }
LAB_00371584:
      if ((((plVar26 == (long *)0x0) || (pcVar23 == "")) &&
          ((plVar25 == (long *)0x0 || (*plVar25 == 0x726f70736e617274 && (char)plVar25[1] == 't'))))
         && ((plVar26 == (long *)0x0 ||
             (*plVar26 == 0x725f74656b636170 && *(long *)((long)plVar26 + 7) == 0x6465766965636572))
            )) {
        uVar16 = 0x40;
        if (!bVar12) {
          uVar16 = 0;
        }
        uStack_70 = uStack_70 & 0xffffffffffffffbf | uVar16;
      }
/*  donate: donate/README.md  */
    }
    if ((((plVar25 == (long *)0x0) || (param_2 = plVar3, lVar22 == 8)) &&
        ((plVar26 == (long *)0x0 || (param_2 = plVar3, pcVar23 == "")))) &&
       (((plVar25 == (long *)0x0 || (param_2 = plVar3, *plVar25 == 0x797265766f636572)) &&
        ((plVar26 == (long *)0x0 ||
         (param_2 = plVar3,
         *plVar26 == 0x6c5f74656b636170 && *(long *)((long)plVar26 + 3) == 0x74736f6c5f74656b))))))
    {
      uStack_70 = uStack_70 & 0xffffffffffffff7f;
LAB_00371698:
      uVar16 = 0x80;
      if (!bVar12) {
        uVar16 = 0;
      }
      uStack_70 = uStack_70 | uVar16;
      param_2 = plVar3;
    }
  } while( true );
}
/*  proprietary - see LICENSE - do not sell  */

