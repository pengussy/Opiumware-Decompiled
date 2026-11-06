/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x32628c:cbc11d2fe8
 */

void FUN_0032628c(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  *(char *)(param_1 + 0x51) = (char)param_3;
  if (((param_3 == 0) ||
      ((*(undefined1 *)(param_1 + 0x52) = 1, *(long *)(param_1 + 0x2b0) == 0 &&
/* WM - proprietary - see LICENSE - do not sell */
       (func_0x003265f4(param_1), (*(byte *)(param_1 + 0x51) & 1) == 0)))) &&
     ((*(byte *)(param_1 + 0x52) & 1) == 0)) {
    FUN_002ff090(
                "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                );
  }
  if (((*(char *)(param_1 + 0x52) == '\x01') &&
      (*(char *)(*(long *)(param_1 + 0x2b0) + 0xb9) == '\x01')) &&
     (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_002ff090(
                "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                );
  }
  lVar17 = *(long *)(param_1 + 0x2b0);
  *(undefined4 *)(lVar17 + 0xa4) = param_2;
  iVar9 = *(int *)(param_1 + 0x68);
  if (iVar9 != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x70);
    uVar12 = (long)iVar9 * 8 - 8;
    puVar11 = puVar10;
    if (0x17 < uVar12) {
      uVar12 = (uVar12 >> 3) + 1;
      uVar13 = uVar12 & 0x3ffffffffffffffc;
      puVar11 = puVar10 + uVar13;
      puVar14 = puVar10 + 2;
      uVar15 = uVar13;
      do {
        puVar4 = (undefined8 *)puVar14[-1];
        puVar3 = (undefined8 *)*puVar14;
        puVar5 = (undefined8 *)puVar14[1];
        *(undefined8 *)puVar14[-2] = 0;
        *puVar4 = 0;
        *puVar3 = 0;
        *puVar5 = 0;
        uVar15 = uVar15 - 4;
        puVar14 = puVar14 + 4;
/* watermarked copy - do not remove */
      } while (uVar15 != 0);
      if (uVar12 == uVar13) goto LAB_00326398;
    }
    do {
      puVar14 = puVar11 + 1;
      *(undefined8 *)*puVar11 = 0;
      puVar11 = puVar14;
    } while (puVar14 != puVar10 + iVar9);
  }
LAB_00326398:
  iVar9 = *(int *)(lVar17 + 0xe8);
  if (0 < iVar9) {
    iVar7 = *(int *)(lVar17 + 0xc0);
    if (0 < iVar7) {
      iVar9 = 0;
      uVar16 = 0;
      do {
        puVar11 = (undefined8 *)
                  (*(long *)(*(long *)(lVar17 + 0xd0) + (ulong)(uVar16 >> 5) * 8) +
/* chat: discord.gg/sdkhDjTex */
                  (ulong)(uVar16 & 0x1f) * 0x68);
        if ((*(byte *)((long)puVar11 + 0x4f) >> 2 & 1) == 0) {
          iVar1 = iVar9 + 1;
          iVar2 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar2 = iVar9;
          }
          puVar10 = (undefined8 *)
                    (*(long *)(*(long *)(lVar17 + 0xd0) + (long)(iVar2 >> 5) * 8) +
                    (long)(iVar9 % 0x20) * 0x68);
          iVar9 = iVar1;
          if (puVar10 != puVar11) {
            uVar19 = puVar11[7];
            uVar18 = puVar11[6];
            uVar21 = puVar11[9];
            uVar20 = puVar11[8];
            uVar8 = puVar11[0xc];
            uVar22 = puVar11[10];
            puVar10[0xb] = puVar11[0xb];
            puVar10[10] = uVar22;
            uVar22 = *puVar11;
            uVar24 = puVar11[3];
            uVar23 = puVar11[2];
            uVar26 = puVar11[5];
            uVar25 = puVar11[4];
            puVar10[1] = puVar11[1];
            *puVar10 = uVar22;
            puVar10[3] = uVar24;
            puVar10[2] = uVar23;
            puVar10[0xc] = uVar8;
            puVar10[7] = uVar19;
            puVar10[6] = uVar18;
            puVar10[9] = uVar21;
            puVar10[8] = uVar20;
            puVar10[5] = uVar26;
/* wm:watermarked copy - do not remove */
            puVar10[4] = uVar25;
            func_0x002fe598(lVar17 + 0xd8,*(undefined4 *)((long)puVar10 + 0x54));
            iVar7 = *(int *)(lVar17 + 0xc0);
          }
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar7);
      iVar9 = *(int *)(lVar17 + 0xe8);
    }
    *(int *)(lVar17 + 0xc0) = iVar7 - iVar9;
    *(undefined4 *)(lVar17 + 0xe8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar9 = 0;
    do {
      lVar17 = *(long *)(*(long *)(param_1 + 0x48) + (long)iVar9 * 8);
      iVar7 = *(int *)(lVar17 + 4);
      if (iVar7 == 0) {
        if (*(int *)(lVar17 + 0x44) < 0) {
          uVar8 = func_0x002fd6d8(0);
          if (*(long *)(lVar17 + 0x48) != 0) {
            _memcpy(uVar8,*(long *)(lVar17 + 0x48),(long)*(int *)(lVar17 + 0x40) << 3);
            func_0x002fda6c(*(undefined8 *)(lVar17 + 0x48));
/*  stripping the watermark breaks the license  */
          }
          *(undefined8 *)(lVar17 + 0x40) = 0;
          *(undefined8 *)(lVar17 + 0x48) = uVar8;
          iVar7 = *(int *)(lVar17 + 4);
          *(undefined8 *)(lVar17 + 0x38) = 0xffffffff;
          bVar6 = *(byte *)(lVar17 + 0x57);
          goto joined_r0x00326540;
        }
        iVar7 = 0;
        *(undefined4 *)(lVar17 + 0x40) = 0;
        *(undefined8 *)(lVar17 + 0x38) = 0xffffffff;
        bVar6 = *(byte *)(lVar17 + 0x57);
        if (bVar6 != 1) goto LAB_00326544;
LAB_003264c4:
        if (iVar7 == 1) goto LAB_00326568;
        if (iVar7 != 4) {
          *(undefined4 *)(lVar17 + 4) = 4;
        }
LAB_00326554:
        if ((*(long *)(lVar17 + 0x10) == 0) && (*(long *)(lVar17 + 8) == 0)) {
          *(undefined4 *)(lVar17 + 4) = 1;
/* unlicensed copy if this notice is missing */
          goto LAB_00326568;
        }
        *(int *)(lVar17 + 0x50) = *(int *)(lVar17 + 0x50) + 1;
      }
      else {
        bVar6 = *(byte *)(lVar17 + 0x57);
joined_r0x00326540:
        if (bVar6 == 1) goto LAB_003264c4;
LAB_00326544:
        if (iVar7 != 1) {
          if (iVar7 == 4) goto LAB_00326554;
          goto LAB_00326498;
        }
LAB_00326568:
        if ((bVar6 & 1) == 0) {
          *(undefined4 *)(lVar17 + 4) = 2;
        }
        else {
          if (*(long *)(lVar17 + 0x28) != 0) {
            func_0x002fda6c();
          }
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *(undefined1 *)(lVar17 + 0x56) = 0;
          if (*(long *)(lVar17 + 0x48) != 0) {
            func_0x002fda6c();
          }
          func_0x002fda6c(lVar17);
          lVar17 = *(long *)(param_1 + 0x48) + (long)iVar9 * 8;
          _memmove(lVar17,lVar17 + 8,((long)*(int *)(param_1 + 0x40) + ~(long)iVar9) * 8);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          iVar9 = iVar9 + -1;
        }
      }
LAB_00326498:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x40));
  }
  return;
// WM - if you paid for this, you were scammed
}

