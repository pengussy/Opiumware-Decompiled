/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x191af0:011fb94ebc
   =========================================================================== */

undefined8 FUN_00191af0(long *param_1)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  byte bStack_61;
  byte **ppbStack_60;
  byte *pbStack_58;
  long *plStack_50;
  byte *pbStack_48;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
/* do not claim this as your own - github.com/pengussy */
    uVar5 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar4 = (byte *)*param_1;
    if (pbVar4 == (byte *)param_1[1]) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)*pbVar4;
      *param_1 = (long)(pbVar4 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar5;
  }
  if (uVar5 != 0xffffffff) {
    plVar1 = param_1 + 7;
    bStack_61 = (byte)uVar5;
    pbStack_48 = (byte *)param_1[8];
    ppbStack_60 = &pbStack_48;
    pbStack_58 = &bStack_61;
    if (pbStack_48 < (byte *)param_1[9]) {
      pbVar4 = pbStack_48 + 1;
      *pbStack_48 = bStack_61;
      param_1[8] = (long)pbVar4;
      iVar6 = *(int *)((long)param_1 + 0x14);
    }
    else {
      plStack_50 = plVar1;
      func_0x0003b960(&ppbStack_60);
      param_1[8] = (long)pbStack_48;
      iVar6 = *(int *)((long)param_1 + 0x14);
      pbVar4 = pbStack_48;
    }
    if (iVar6 == 10) {
      param_1[5] = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      param_1[6] = param_1[6] + 1;
    }
    else {
      if (iVar6 == 0x2f) {
        iVar6 = 0x2f;
        do {
          bStack_61 = (byte)iVar6;
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\x01') {
            *(undefined1 *)(param_1 + 3) = 0;
          }
          else {
            pbVar3 = (byte *)*param_1;
            if (pbVar3 == (byte *)param_1[1]) {
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
              return 1;
            }
            bStack_61 = *pbVar3;
            *param_1 = (long)(pbVar3 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)bStack_61;
          }
          if (pbVar4 < (byte *)param_1[9]) {
/* WM - reversing this took months of machine time */
            *pbVar4 = bStack_61;
            param_1[8] = (long)(pbVar4 + 1);
            iVar6 = *(int *)((long)param_1 + 0x14);
            pbVar4 = pbVar4 + 1;
          }
          else {
            ppbStack_60 = &pbStack_48;
            pbStack_58 = &bStack_61;
            plStack_50 = plVar1;
            pbStack_48 = pbVar4;
            func_0x0003b960(&ppbStack_60);
            param_1[8] = (long)pbStack_48;
            iVar6 = *(int *)((long)param_1 + 0x14);
            pbVar4 = pbStack_48;
          }
          if (iVar6 + 1U < 2) {
            return 1;
          }
          if (iVar6 == 0xd) {
            return 1;
          }
        } while (iVar6 != 10);
        param_1[5] = 0;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        param_1[6] = param_1[6] + 1;
        return 1;
      }
      if (iVar6 == 0x2a) {
        uVar5 = 0x2a;
        do {
          while( true ) {
            while( true ) {
              param_1[5] = param_1[5] + 1;
              param_1[4] = param_1[4] + 1;
              if ((char)param_1[3] == '\x01') {
                *(undefined1 *)(param_1 + 3) = 0;
              }
              else {
                pbVar3 = (byte *)*param_1;
                if (pbVar3 == (byte *)param_1[1]) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = (uint)*pbVar3;
                  *param_1 = (long)(pbVar3 + 1);
                }
                *(uint *)((long)param_1 + 0x14) = uVar5;
              }
              if (uVar5 == 0xffffffff) goto LAB_00191e64;
              bStack_61 = (byte)uVar5;
              if (pbVar4 < (byte *)param_1[9]) {
                *pbVar4 = bStack_61;
                param_1[8] = (long)(pbVar4 + 1);
                uVar5 = *(uint *)((long)param_1 + 0x14);
                pbVar4 = pbVar4 + 1;
              }
              else {
                ppbStack_60 = &pbStack_48;
                pbStack_58 = &bStack_61;
/* WM - no support for modified copies */
                plStack_50 = plVar1;
                pbStack_48 = pbVar4;
                func_0x0003b960(&ppbStack_60);
                param_1[8] = (long)pbStack_48;
                uVar5 = *(uint *)((long)param_1 + 0x14);
                pbVar4 = pbStack_48;
              }
              if (uVar5 != 10) break;
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
              uVar5 = 10;
            }
            if (uVar5 != 0x2a) break;
            lVar2 = param_1[4];
            lVar7 = param_1[5] + 1;
            param_1[4] = lVar2 + 1;
            param_1[5] = lVar7;
            if ((char)param_1[3] == '\x01') {
              *(undefined1 *)(param_1 + 3) = 0;
              bStack_61 = 0x2a;
LAB_00191c84:
              if (pbVar4 < (byte *)param_1[9]) {
                pbStack_48 = pbVar4 + 1;
                *pbVar4 = bStack_61;
                param_1[8] = (long)pbStack_48;
                uVar9 = *(uint *)((long)param_1 + 0x14);
                if (uVar9 != 10) goto LAB_00191cb0;
LAB_00191d3c:
                lVar7 = param_1[6] + 1;
                param_1[5] = 0;
                param_1[6] = lVar7;
                *(undefined1 *)(param_1 + 3) = 1;
                param_1[4] = param_1[4] + -1;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                uVar9 = 10;
                pbVar4 = pbStack_48;
              }
              else {
                ppbStack_60 = &pbStack_48;
                pbStack_58 = &bStack_61;
                plStack_50 = plVar1;
                pbStack_48 = pbVar4;
                func_0x0003b960(&ppbStack_60);
                param_1[8] = (long)pbStack_48;
                uVar9 = *(uint *)((long)param_1 + 0x14);
                if (uVar9 == 10) goto LAB_00191d3c;
LAB_00191cb0:
                if (uVar9 == 0x2f) {
                  return 1;
                }
                lVar7 = param_1[5];
                *(undefined1 *)(param_1 + 3) = 1;
                param_1[4] = param_1[4] + -1;
                pbVar4 = pbStack_48;
                if (lVar7 != 0) goto LAB_00191ccc;
/* WM - proprietary - see LICENSE - do not sell */
LAB_00191d98:
                lVar7 = param_1[6];
              }
              if (lVar7 != 0) {
                param_1[6] = lVar7 + -1;
              }
            }
            else {
              pbVar3 = (byte *)*param_1;
              if (pbVar3 != (byte *)param_1[1]) {
                bStack_61 = *pbVar3;
                *param_1 = (long)(pbVar3 + 1);
                *(uint *)((long)param_1 + 0x14) = (uint)bStack_61;
                goto LAB_00191c84;
              }
              uVar9 = 0xffffffff;
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
              *(undefined1 *)(param_1 + 3) = 1;
              param_1[4] = lVar2;
              if (lVar7 == 0) goto LAB_00191d98;
LAB_00191ccc:
              param_1[5] = lVar7 + -1;
            }
            uVar5 = 0xffffffff;
            if (uVar9 != 0xffffffff) {
              pbVar4 = pbVar4 + -1;
              param_1[8] = (long)pbVar4;
              uVar5 = uVar9;
            }
          }
        } while (1 < uVar5 + 1);
LAB_00191e64:
        pcVar8 = "invalid comment; missing closing \'*/\'";
        goto LAB_00191ed4;
      }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    }
  }
  pcVar8 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
LAB_00191ed4:
  param_1[0xd] = (long)pcVar8;
  return 0;
}

