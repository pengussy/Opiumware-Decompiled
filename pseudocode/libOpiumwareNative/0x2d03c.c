/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2d03c:ab8c20b35b
 */

void FUN_0002d03c(undefined8 param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  long lVar12;
  char *pcVar13;
  byte *pbVar14;
  ulong uVar15;
  char *pcVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined1 auVar19 [16];
  long lStack_58;
  
  if (*(byte *)(param_2 + 0x18) < 0x13) {
    return;
  }
  lStack_58 = param_2;
  iVar3 = func_0x0002e078(&lStack_58);
  if (iVar3 == 0) {
    lStack_58 = *(long *)(param_2 + 0x38);
    if ((lStack_58 != 0) && (func_0x0170346c(&lStack_58,lStack_58,2), lStack_58 != 0)) {
      iVar3 = func_0x016c5c34(&lStack_58);
      if (iVar3 != 0) {
        if ((ulong)(*(long *)(param_3 + 0x10) - (long)*(undefined8 **)(param_3 + 0x18)) < 8) {
          lVar12 = func_0x01770110(param_3," ; line:",8);
        }
// donate: donate/README.md
        else {
          **(undefined8 **)(param_3 + 0x18) = 0x3a656e696c203b20;
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
          lVar12 = param_3;
        }
        uVar4 = func_0x016c5c34(&lStack_58);
        lVar12 = func_0x0176fd34(lVar12,uVar4);
        puVar1 = *(undefined4 **)(lVar12 + 0x18);
        if ((ulong)(*(long *)(lVar12 + 0x10) - (long)puVar1) < 5) {
          lVar12 = func_0x01770110(lVar12," col:",5);
        }
        else {
          *(undefined1 *)(puVar1 + 1) = 0x3a;
          *puVar1 = 0x6c6f6320;
          *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + 5;
        }
        uVar4 = func_0x016c5c88(&lStack_58);
        func_0x0176fd34(lVar12,uVar4);
      }
      if (lStack_58 != 0) {
        func_0x017034d0(&lStack_58);
      }
    }
  }
  else {
    lStack_58 = param_2;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    iVar3 = func_0x0002e154(&lStack_58);
    if (iVar3 == 0) {
      lStack_58 = param_2;
      iVar3 = func_0x0002e22c(&lStack_58);
      if (iVar3 == 0) goto LAB_0002d624;
      lStack_58 = param_2;
      uVar5 = func_0x0002e22c(&lStack_58);
      if ((uVar5 & 1) == 0) {
        func_0x0174f200("cast");
      }
      lVar12 = *(long *)(param_2 + (long)(int)-(*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 0x18 +
                        0x30);
      if (*(char *)(lVar12 + 0x18) != '\x11') {
        func_0x0174f200("cast");
      }
      pcVar18 = *(char **)(lVar12 + 0x20);
      if (*pcVar18 != '\x13') {
        func_0x0174f200("cast");
      }
/* WM - stripping the watermark breaks the license */
      lVar12 = *(long *)(param_2 + (long)(int)-(*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 0x18 +
                        0x48);
      cVar2 = *(char *)(lVar12 + 0x18);
    }
    else {
      lStack_58 = param_2;
      uVar5 = func_0x0002e154(&lStack_58);
      if ((uVar5 & 1) == 0) {
        func_0x0174f200("cast");
      }
      lVar12 = *(long *)(param_2 + (long)(int)-(*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 0x18 +
                        0x18);
      if (*(char *)(lVar12 + 0x18) != '\x11') {
        func_0x0174f200("cast");
      }
      pcVar18 = *(char **)(lVar12 + 0x20);
      if (*pcVar18 != '\x13') {
        func_0x0174f200("cast");
      }
      lVar12 = *(long *)(param_2 + (long)(int)-(*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 0x18 +
                        0x30);
      cVar2 = *(char *)(lVar12 + 0x18);
    }
    if (cVar2 != '\x11') {
      func_0x0174f200("cast");
    }
    pcVar13 = *(char **)(lVar12 + 0x20);
    if (*pcVar13 == '\x14') {
      puVar9 = *(undefined8 **)(param_3 + 0x18);
      if (7 < (ulong)(*(long *)(param_3 + 0x10) - (long)puVar9)) goto LAB_0002d280;
LAB_0002d144:
      lVar12 = func_0x01770110(param_3," ; var:\"",8);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      pcVar16 = pcVar18 + (ulong)*(uint *)(pcVar18 + 8) * -8;
      pcVar8 = *(char **)(pcVar16 + 8);
      if (pcVar8 != (char *)0x0) goto LAB_0002d2b4;
LAB_0002d358:
      puVar10 = *(undefined1 **)(lVar12 + 0x18);
      if (*(undefined1 **)(lVar12 + 0x10) == puVar10) goto LAB_0002d458;
LAB_0002d364:
      *puVar10 = 0x22;
      puVar10 = (undefined1 *)(*(long *)(lVar12 + 0x18) + 1);
      *(undefined1 **)(lVar12 + 0x18) = puVar10;
      if (*(undefined1 **)(lVar12 + 0x10) == puVar10) goto LAB_0002d474;
LAB_0002d380:
      *puVar10 = 0x20;
      *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + 1;
    }
    else {
      func_0x0174f200("cast");
      puVar9 = *(undefined8 **)(param_3 + 0x18);
      if ((ulong)(*(long *)(param_3 + 0x10) - (long)puVar9) < 8) goto LAB_0002d144;
LAB_0002d280:
      *puVar9 = 0x223a726176203b20;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 8;
      pcVar16 = pcVar18 + (ulong)*(uint *)(pcVar18 + 8) * -8;
      pcVar8 = *(char **)(pcVar16 + 8);
      lVar12 = param_3;
      if (pcVar8 == (char *)0x0) goto LAB_0002d358;
LAB_0002d2b4:
      if (*pcVar8 == '\x19') {
LAB_0002d2f4:
        auVar19 = func_0x016f677c(pcVar8);
        uVar5 = auVar19._8_8_;
        if (uVar5 <= (ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 0x18))) {
          if (uVar5 != 0) {
            _memcpy(*(long *)(lVar12 + 0x18),auVar19._0_8_,uVar5);
            *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar5;
          }
          goto LAB_0002d358;
        }
/* if you paid for this, you were scammed - github.com/pengussy */
        lVar12 = func_0x01770110(lVar12,auVar19._0_8_,uVar5);
        puVar10 = *(undefined1 **)(lVar12 + 0x18);
        if (*(undefined1 **)(lVar12 + 0x10) == puVar10) goto LAB_0002d458;
        goto LAB_0002d364;
      }
      func_0x0174f200("cast_or_null");
      pcVar8 = *(char **)(pcVar16 + 8);
      if (*pcVar8 == '\x19') goto LAB_0002d2f4;
      func_0x0174f200("cast");
      pcVar8 = *(char **)(pcVar16 + 8);
      if (pcVar8 != (char *)0x0) goto LAB_0002d2f4;
      puVar10 = *(undefined1 **)(lVar12 + 0x18);
      if (*(undefined1 **)(lVar12 + 0x10) != puVar10) goto LAB_0002d364;
LAB_0002d458:
      lVar12 = func_0x01770110(lVar12,"\"",1);
      puVar10 = *(undefined1 **)(lVar12 + 0x18);
      if (*(undefined1 **)(lVar12 + 0x10) != puVar10) goto LAB_0002d380;
LAB_0002d474:
      func_0x01770110(lVar12,&UNK_01c881b6,1);
    }
    func_0x0167ca30(pcVar13,param_3,0);
    pbVar14 = *(byte **)(pcVar18 + (ulong)*(uint *)(pcVar18 + 8) * -8);
    uVar7 = (uint)*pbVar14;
    if (10 < *pbVar14 - 5) {
      func_0x0174f200("cast_or_null");
      uVar7 = (uint)*pbVar14;
/* stripping the watermark breaks the license - github.com/pengussy */
      if (10 < *pbVar14 - 5) {
        func_0x0174f200("cast");
        uVar7 = (uint)*pbVar14;
      }
    }
    if (2 < uVar7 - 0xb) {
      func_0x0174f200("cast");
    }
    lVar12 = func_0x016b7a54(pbVar14);
    if (lVar12 != 0) {
      puVar1 = *(undefined4 **)(param_3 + 0x18);
      if ((ulong)(*(long *)(param_3 + 0x10) - (long)puVar1) < 7) {
        lVar6 = func_0x01770110(param_3," func:\"",7);
        lVar12 = lVar12 + (ulong)*(uint *)(lVar12 + 8) * -8;
        pcVar18 = *(char **)(lVar12 + 0x10);
      }
      else {
        *(undefined4 *)((long)puVar1 + 3) = 0x223a636e;
        *puVar1 = 0x6e756620;
// unlicensed copy if this notice is missing
        *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 7;
        lVar12 = lVar12 + (ulong)*(uint *)(lVar12 + 8) * -8;
        pcVar18 = *(char **)(lVar12 + 0x10);
        lVar6 = param_3;
      }
      if ((pcVar18 != (char *)0x0) &&
         (((*pcVar18 == '\x19' ||
           (func_0x0174f200("cast_or_null"), **(char **)(lVar12 + 0x10) == '\x19')) ||
          (func_0x0174f200("cast"), *(long *)(lVar12 + 0x10) != 0)))) {
        auVar19 = func_0x016f677c();
        uVar5 = auVar19._8_8_;
        if ((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 0x18)) < uVar5) {
          lVar6 = func_0x01770110(lVar6,auVar19._0_8_,uVar5);
        }
        else if (uVar5 != 0) {
          _memcpy(*(long *)(lVar6 + 0x18),auVar19._0_8_,uVar5);
          *(ulong *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + uVar5;
        }
      }
      if (*(undefined1 **)(lVar6 + 0x10) == *(undefined1 **)(lVar6 + 0x18)) {
        func_0x01770110(lVar6,"\"",1);
        cVar2 = *(char *)(param_2 + 0x18);
        goto joined_r0x0002d62c;
      }
      **(undefined1 **)(lVar6 + 0x18) = 0x22;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    }
  }
LAB_0002d624:
/* wm:reversing this took months of machine time */
  cVar2 = *(char *)(param_2 + 0x18);
joined_r0x0002d62c:
  if ((cVar2 == 'D') && ((*(uint *)(param_2 + 0x1c) & 0x1fffffff) != 1)) {
    lVar12 = *(long *)(param_2 + -0x18);
    if (*(char *)(lVar12 + 0x18) != '\x02') {
      lVar12 = 0;
    }
    auVar19 = func_0x0170cf30(lVar12);
    uVar17 = s___invalid_DXIL_opcode___01c227db._0_8_;
    if (((5 < auVar19._8_8_) && (*auVar19._0_8_ == 0x6f2e7864 && (short)auVar19._0_8_[1] == 0x2e70))
       && (lVar12 = *(long *)(param_2 + ((ulong)*(uint *)(param_2 + 0x1c) & 0x1fffffff) * -0x18),
          lVar12 != 0 && *(char *)(lVar12 + 0x18) == '\v')) {
      puVar11 = (ulong *)(lVar12 + 0x28);
      if (0x40 < *(uint *)(lVar12 + 0x20)) {
        puVar11 = (ulong *)*puVar11;
      }
      uVar15 = *puVar11;
      pcVar18 = *(char **)(param_3 + 0x18);
      uVar5 = *(long *)(param_3 + 0x10) - (long)pcVar18;
      if ((uint)uVar15 < 0x102) {
        if (uVar5 < 4) {
          lVar12 = func_0x01770110(param_3,"  ; ",4);
// keep the notice, keep the source honest
        }
        else {
          builtin_strncpy(pcVar18,"  ; ",4);
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 4;
          lVar12 = param_3;
        }
        lVar6 = func_0x015b76a8(uVar15);
        if (lVar6 != 0) {
          uVar5 = _strlen();
          if ((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 0x18)) < uVar5) {
            lVar12 = func_0x01770110(lVar12,lVar6,uVar5);
          }
          else if (uVar5 != 0) {
            _memcpy(*(long *)(lVar12 + 0x18),lVar6,uVar5);
            *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar5;
          }
        }
        uVar17 = *(undefined8 *)(&UNK_01dbde40 + (uVar15 & 0x1ff) * 8);
        uVar5 = _strlen(uVar17);
        if ((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 0x18)) < uVar5) {
          func_0x01770110(lVar12,uVar17,uVar5);
        }
        else if (uVar5 != 0) {
          _memcpy(*(long *)(lVar12 + 0x18),uVar17,uVar5);
          *(ulong *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + uVar5;
        }
        if ((uint)uVar15 == 0xd8) {
          if ((int)*(uint *)(param_2 + 0x1c) < 0) {
// WM - proprietary - see LICENSE - do not sell
            param_2 = *(long *)(param_2 + -8);
          }
          else {
            param_2 = param_2 + (long)(int)-(*(uint *)(param_2 + 0x1c) & 0x1fffffff) * 0x18;
          }
          if ((*(long *)(param_2 + 0x30) != 0) &&
             (0xfffffff0 < *(byte *)(*(long *)(param_2 + 0x30) + 0x18) - 0x11)) {
            lStack_58 = func_0x015bcd48();
            FUN_0002d8f8(&lStack_58,param_3);
          }
        }
      }
      else {
        if (uVar5 < 0x19) {
          param_3 = func_0x01770110(param_3,"  ; invalid DXIL opcode #",0x19);
        }
        else {
          *(ulong *)(pcVar18 + 8) =
               CONCAT71(s___invalid_DXIL_opcode___01c227db._9_7_,
/* wm:unlicensed copy if this notice is missing */
                        s___invalid_DXIL_opcode___01c227db[8]);
          *(undefined8 *)pcVar18 = uVar17;
          uVar17 = CONCAT17(s___invalid_DXIL_opcode___01c227db[0x10],
                            s___invalid_DXIL_opcode___01c227db._9_7_);
          *(undefined8 *)(pcVar18 + 0x11) = s___invalid_DXIL_opcode___01c227db._17_8_;
          *(undefined8 *)(pcVar18 + 9) = uVar17;
          *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 0x19;
        }
        func_0x0176fd34(param_3,uVar15 & 0xffffffff);
      }
    }
  }
  return;
}

