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
 *  file-id: 0x3f530c:bd7d9c5f5b
 *  --------------------------------------------------------------------------*/

bool FUN_003f530c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
/* origin: github.com/pengussy - github.com/pengussy */
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
/* WM - proprietary - see LICENSE - do not sell */
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  bool bVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  long lVar68;
  undefined8 uVar69;
  long *plVar70;
  uint uVar71;
  ulong uVar72;
  uint uVar73;
  uint uVar74;
  long lVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  
  iVar64 = func_0x003f89fc(param_3);
  if (iVar64 != 0) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    param_3 = param_2;
LAB_003f5368:
    lVar68 = func_0x019e8960(param_1,param_3);
    *(undefined4 *)(param_1 + 2) = 0;
    return lVar68 != 0;
  }
  iVar64 = func_0x003f89fc(param_2);
  if (iVar64 != 0) goto LAB_003f5368;
  FUN_003f1890(param_4);
  uVar69 = FUN_003f1a40(param_4);
  plVar70 = (long *)FUN_003f1a40(param_4);
  if (((plVar70 != (long *)0x0) && (iVar64 = func_0x003fe938(plVar70,param_3), iVar64 != 0)) &&
     (iVar64 = func_0x003fe938(param_1,param_2), iVar64 != 0)) {
    if ((int)*(uint *)((long)param_1 + 0xc) < 1) {
      uVar73 = 0;
      uVar72 = 0xffffffffffffffff;
    }
    else {
      lVar68 = 0;
      iVar64 = 0;
      uVar72 = 0;
      lVar75 = 1;
      do {
        if ((ulong)(*(uint *)((long)plVar70 + 0xc) &
                   ((int)*(uint *)((long)plVar70 + 0xc) >> 0x1f ^ 0xffffffffU)) * 8 == lVar68)
        break;
        uVar76 = *(ulong *)(*plVar70 + lVar68) | *(ulong *)(*param_1 + lVar68);
        uVar77 = lVar75 - 1;
        uVar78 = -lVar75;
        if (uVar76 != 0) {
          lVar75 = 0;
        }
        iVar64 = iVar64 + (int)lVar75;
        uVar72 = uVar78 & uVar76 | uVar77 & uVar72;
        lVar68 = lVar68 + 8;
      } while ((ulong)*(uint *)((long)param_1 + 0xc) * 8 != lVar68);
/* WM - donate: donate/README.md */
      uVar72 = ~uVar72;
      uVar73 = iVar64 << 6;
    }
    uVar71 = (uint)uVar72;
    uVar1 = uVar71 & 1 & uVar71 >> 1;
    uVar2 = uVar1 & uVar71 >> 2;
    uVar3 = uVar2 & uVar71 >> 3;
    uVar4 = uVar3 & uVar71 >> 4;
    uVar5 = uVar4 & uVar71 >> 5;
    uVar6 = (uint)(uVar72 >> 6) & uVar5;
    uVar7 = (uint)(uVar72 >> 7) & uVar6;
    uVar8 = (uint)(uVar72 >> 8) & uVar7;
    uVar9 = (uint)(uVar72 >> 9) & uVar8;
    uVar10 = (uint)(uVar72 >> 10) & uVar9;
    uVar11 = (uint)(uVar72 >> 0xb) & uVar10;
    uVar12 = (uint)(uVar72 >> 0xc) & uVar11;
    uVar13 = (uint)(uVar72 >> 0xd) & uVar12;
    uVar14 = (uint)(uVar72 >> 0xe) & uVar13;
    uVar15 = (uint)(uVar72 >> 0xf) & uVar14;
    uVar16 = (uint)(uVar72 >> 0x10) & uVar15;
    uVar17 = (uint)(uVar72 >> 0x11) & uVar16;
    uVar18 = (uint)(uVar72 >> 0x12) & uVar17;
    uVar19 = (uint)(uVar72 >> 0x13) & uVar18;
    uVar20 = (uint)(uVar72 >> 0x14) & uVar19;
    uVar21 = (uint)(uVar72 >> 0x15) & uVar20;
    uVar22 = (uint)(uVar72 >> 0x16) & uVar21;
    uVar23 = (uint)(uVar72 >> 0x17) & uVar22;
    uVar24 = (uint)(uVar72 >> 0x18) & uVar23;
    uVar25 = (uint)(uVar72 >> 0x19) & uVar24;
    uVar26 = (uint)(uVar72 >> 0x1a) & uVar25;
    uVar27 = (uint)(uVar72 >> 0x1b) & uVar26;
    uVar28 = (uint)(uVar72 >> 0x1c) & uVar27;
    uVar29 = (uint)(uVar72 >> 0x1d) & uVar28;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar30 = (uint)(uVar72 >> 0x1e) & uVar29;
    uVar31 = (uint)(uVar72 >> 0x1f) & uVar30;
    uVar74 = (uint)(uVar72 >> 0x20);
    uVar32 = uVar74 & uVar31;
    uVar33 = uVar74 >> 1 & uVar32;
    uVar34 = uVar74 >> 2 & uVar33;
    uVar35 = uVar74 >> 3 & uVar34;
    uVar36 = uVar74 >> 4 & uVar35;
    uVar37 = uVar74 >> 5 & uVar36;
    uVar38 = uVar74 >> 6 & uVar37;
    uVar39 = uVar74 >> 7 & uVar38;
    uVar40 = uVar74 >> 8 & uVar39;
    uVar41 = uVar74 >> 9 & uVar40;
    uVar42 = uVar74 >> 10 & uVar41;
    uVar43 = uVar74 >> 0xb & uVar42;
    uVar44 = uVar74 >> 0xc & uVar43;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    uVar45 = uVar74 >> 0xd & uVar44;
    uVar46 = uVar74 >> 0xe & uVar45;
    uVar47 = uVar74 >> 0xf & uVar46;
    uVar48 = (ushort)(uVar72 >> 0x30) & uVar47;
    uVar49 = uVar74 >> 0x11 & uVar48;
    uVar50 = uVar74 >> 0x12 & uVar49;
    uVar51 = uVar74 >> 0x13 & uVar50;
    uVar52 = uVar74 >> 0x14 & uVar51;
    uVar53 = uVar74 >> 0x15 & uVar52;
    uVar54 = uVar74 >> 0x16 & uVar53;
    uVar55 = uVar74 >> 0x17 & uVar54;
    uVar56 = (byte)(uVar72 >> 0x38) & uVar55;
    uVar57 = uVar74 >> 0x19 & uVar56;
    uVar58 = uVar74 >> 0x1a & uVar57;
    uVar59 = uVar74 >> 0x1b & uVar58;
    uVar60 = uVar74 >> 0x1c & uVar59;
    uVar61 = uVar74 >> 0x1d & uVar60;
    uVar62 = uVar74 >> 0x1e & uVar61;
/* unlicensed copy if this notice is missing */
    iVar64 = (uVar73 | uVar71 & 1) + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 +
             uVar9 + uVar10 + uVar11 + uVar12 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18
             + uVar19 + uVar20 + uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + uVar27 +
             uVar28 + uVar29 + uVar30 + uVar31 + uVar32 + uVar33 + uVar34 + uVar35 + uVar36 + uVar37
             + uVar38 + uVar39 + uVar40 + uVar41 + uVar42 + uVar43 + uVar44 + uVar45 + uVar46 +
             uVar47 + uVar48 + uVar49 + uVar50 + uVar51 + uVar52 + uVar53 + uVar54 + uVar55 + uVar56
             + uVar57 + uVar58 + uVar59 + uVar60 + uVar61 + uVar62;
    uVar62 = uVar74 >> 0x1f & uVar62;
    iVar65 = FUN_003fee0c(param_1,param_1,iVar64 + uVar62);
    if ((iVar65 != 0) && (iVar65 = FUN_003fee0c(plVar70,plVar70,iVar64 + uVar62), iVar65 != 0)) {
      iVar65 = (int)param_1[1];
      if ((int)param_1[1] <= (int)plVar70[1]) {
        iVar65 = (int)plVar70[1];
      }
      lVar68 = func_0x003f8b8c(param_1,iVar65 + 1);
      if (((lVar68 != 0) && (lVar68 = func_0x003f8b8c(plVar70,iVar65 + 1), lVar68 != 0)) &&
         (lVar68 = func_0x003f8b8c(uVar69,iVar65 + 1), lVar68 != 0)) {
        func_0x003f9428(~*(uint *)*param_1 & 1,param_1,plVar70,iVar65 + 1);
        iVar66 = func_0x019e85d0(param_1);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        iVar67 = func_0x019e85d0(plVar70);
        if (iVar66 <= iVar67) {
          iVar66 = iVar67;
        }
        if (-2 < iVar66) {
          uVar73 = iVar66 * 3 + 3;
          iVar66 = (uVar73 & ((int)uVar73 >> 0x1f ^ 0xffffffffU)) + 1;
          uVar73 = 1;
          do {
            uVar2 = -uVar73;
            uVar1 = *(uint *)*plVar70 & uVar2 >> 0x1f & ((int)plVar70[1] - 1U >> 0x1f ^ 0xffffffff);
            *(uint *)(param_1 + 2) = uVar1 ^ *(uint *)(param_1 + 2);
            func_0x003f9428(uVar1,param_1,plVar70,iVar65 + 1);
            iVar67 = func_0x003ee9fc(uVar69,plVar70,param_1);
            if (iVar67 == 0) goto LAB_003f58ec;
            func_0x003f9428(*(uint *)*plVar70 & ((int)plVar70[1] - 1U >> 0x1f ^ 0xffffffff) & 1,
                            plVar70,uVar69,iVar65 + 1);
            iVar67 = func_0x003fe9f0(plVar70,plVar70);
            if (iVar67 == 0) goto LAB_003f58ec;
            if (uVar1 != 0) {
              uVar73 = 0;
            }
            uVar73 = (uVar73 | -uVar1 & uVar2) + 1;
            iVar66 = iVar66 + -1;
          } while (iVar66 != 0);
        }
        *(undefined4 *)(param_1 + 2) = 0;
        iVar64 = FUN_003feb74(param_1,param_1,iVar64 + uVar62);
        if (iVar64 != 0) {
          iVar64 = func_0x003fe9f0(param_1,param_1);
          bVar63 = iVar64 != 0;
          goto LAB_003f58f0;
        }
      }
    }
  }
/* WM - no support for modified copies */
LAB_003f58ec:
  bVar63 = false;
LAB_003f58f0:
  func_0x003f19bc(param_4);
  return bVar63;
}

