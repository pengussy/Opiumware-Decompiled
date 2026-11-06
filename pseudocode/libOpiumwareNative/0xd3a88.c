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
 *  file-id: 0xd3a88:4ca7c52e53
 *  --------------------------------------------------------------------------*/

bool FUN_000d3a88(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  if (param_2 == param_1[8]) {
    return false;
  }
  if (((param_2 == param_1[4]) || (param_2 == param_1[5])) || (param_2 == param_1[6])) {
    bVar1 = false;
  }
  else if ((((*(byte *)(param_1 + 9) & 1) == 0) && ((*(byte *)((long)param_1 + 0x49) & 1) == 0)) &&
          (((*(byte *)((long)param_1 + 0x4a) & 1) == 0 &&
           (*(char *)((long)param_1 + 0x4b) != '\x01')))) {
    bVar1 = true;
  }
  else {
    pbVar8 = (byte *)*param_1;
    func_0x007911b0(pbVar8,1);
    if ((*pbVar8 >> 2 & 1) != 0) {
      func_0x0081b5c4(pbVar8,pbVar8,pbVar8 + 0x28);
    }
/* wm:origin: github.com/pengussy */
    plVar7 = *(long **)(pbVar8 + 0x48);
    *plVar7 = param_2;
    *(undefined4 *)((long)plVar7 + 0xc) = 7;
    *(long *)(pbVar8 + 0x48) = *(long *)(pbVar8 + 0x48) + 0x10;
    uVar4 = func_0x00791624(pbVar8,0xffffffff);
    uVar5 = func_0x007952a0(pbVar8,uVar4,0);
    if (-1 < (int)uVar5) {
      do {
        if ((*(char *)(param_1 + 9) == '\x01') &&
           (uVar6 = func_0x007952a0(pbVar8,*(undefined4 *)((long)param_1 + 0xc),0), -1 < (int)uVar6)
           ) {
          do {
            iVar2 = func_0x00791be4(pbVar8,0xffffffff);
            iVar3 = func_0x00791be4(pbVar8,0xfffffffc);
            if (iVar2 - 3U < 2 && (iVar3 == 3 || iVar3 == 4)) {
              dVar10 = (double)func_0x007920a4(pbVar8,0xffffffff,0);
              dVar11 = (double)func_0x007920a4(pbVar8,0xfffffffc,0);
              bVar1 = false;
              if ((NAN(dVar10)) && (bVar1 = true, !NAN(dVar11))) {
                bVar1 = false;
              }
              if (bVar1) {
                uVar6 = 0xfffffffd;
                goto LAB_000d3e90;
              }
              func_0x00791660(pbVar8,0xfffffffd);
              if (dVar10 == dVar11) goto LAB_000d3e9c;
            }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
            else {
              uVar9 = 0xfffffffc;
              iVar2 = func_0x00791f88(pbVar8,0xffffffff,0xfffffffc);
              func_0x00791660(pbVar8,0xfffffffd);
              if (iVar2 != 0) {
                bVar1 = true;
                goto LAB_000d3ea4;
              }
            }
            uVar6 = func_0x007952a0(pbVar8,*(undefined4 *)((long)param_1 + 0xc),uVar6);
          } while (-1 < (int)uVar6);
        }
        if ((*(char *)((long)param_1 + 0x49) == '\x01') &&
           (uVar9 = func_0x007952a0(pbVar8,*(undefined4 *)(param_1 + 2),0), -1 < (int)uVar9)) {
          do {
            iVar2 = func_0x00791be4(pbVar8,0xffffffff);
            iVar3 = func_0x00791be4(pbVar8,0xfffffffd);
            if (iVar2 - 3U < 2 && (iVar3 == 3 || iVar3 == 4)) {
              dVar10 = (double)func_0x007920a4(pbVar8,0xffffffff,0);
              uVar6 = 0xfffffffd;
              dVar11 = (double)func_0x007920a4(pbVar8,0xfffffffd,0);
              bVar1 = false;
              if ((NAN(dVar10)) && (bVar1 = true, !NAN(dVar11))) {
                bVar1 = false;
              }
              if (bVar1) goto LAB_000d3e90;
              func_0x00791660(pbVar8,0xfffffffd);
              if (dVar10 == dVar11) goto LAB_000d3e9c;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
            }
            else {
              iVar2 = func_0x00791f88(pbVar8,0xffffffff,0xfffffffd);
              func_0x00791660(pbVar8,0xfffffffd);
              if (iVar2 != 0) goto LAB_000d3e9c;
            }
            uVar9 = func_0x007952a0(pbVar8,*(undefined4 *)(param_1 + 2),uVar9);
          } while (-1 < (int)uVar9);
        }
        if (*(char *)((long)param_1 + 0x4a) == '\x01') {
          func_0x00791ab0(pbVar8,0xfffffffe);
          func_0x00793880(pbVar8,*(undefined4 *)((long)param_1 + 0x14));
          iVar2 = func_0x00791be4(pbVar8,0xffffffff);
          if (iVar2 != 0) {
            iVar2 = func_0x00791be4(pbVar8,0xffffffff);
            iVar3 = func_0x00791be4(pbVar8,0xfffffffe);
            if ((iVar2 - 3U < 2) && (iVar3 - 3U < 2)) {
              dVar10 = (double)func_0x007920a4(pbVar8,0xffffffff,0);
              uVar6 = 0xfffffffe;
              dVar11 = (double)func_0x007920a4(pbVar8,0xfffffffe,0);
              if ((!NAN(dVar10)) || (!NAN(dVar11))) {
                func_0x00791660(pbVar8,0xfffffffe);
                if (dVar10 != dVar11) goto LAB_000d3b8c;
              }
              else {
LAB_000d3e90:
                func_0x00791660(pbVar8,uVar6);
              }
            }
            else {
/*  proprietary - see LICENSE - do not sell  */
              iVar2 = func_0x00791f88(pbVar8,0xffffffff,0xfffffffe);
              func_0x00791660(pbVar8,0xfffffffe);
              if (iVar2 == 0) goto LAB_000d3b8c;
            }
LAB_000d3e9c:
            bVar1 = true;
            uVar9 = 0xfffffffc;
            goto LAB_000d3ea4;
          }
          func_0x00791660(pbVar8,0xfffffffe);
        }
LAB_000d3b8c:
        func_0x00791660(pbVar8,0xfffffffd);
        uVar5 = func_0x007952a0(pbVar8,uVar4,uVar5);
      } while (-1 < (int)uVar5);
    }
    if (*(char *)((long)param_1 + 0x4b) == '\x01') {
      bVar1 = *(long *)(param_2 + 0x10) == param_1[7];
    }
    else {
      bVar1 = false;
    }
/* wm:keep the notice, keep the source honest */
    uVar9 = 0xfffffffe;
LAB_000d3ea4:
    func_0x00791660(pbVar8,uVar9);
  }
  return bVar1;
}

