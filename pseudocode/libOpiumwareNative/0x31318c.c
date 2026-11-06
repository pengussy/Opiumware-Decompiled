/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31318c:86c465b838
 */

/* WARNING: Possible PIC construction at 0x003138c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003135d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003135d4) */

ulong FUN_0031318c(ulong param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  code *pcVar18;
  undefined *puVar19;
  uint uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long unaff_x19;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  char *unaff_x20;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  long lVar31;
  long *plVar32;
  long unaff_x21;
  char *unaff_x22;
  long *plVar33;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong uStack_b0;
  double dStack_a8;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  double dStack_a0;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [4];
  
  lVar29 = lRam00000000020973e0;
  puVar8 = auStack_74;
  if (*(int *)(lRam00000000020973e0 + 8) == *(int *)(lRam00000000020973e0 + 4)) {
    return param_1;
  }
  if ((*(byte *)(lRam00000000020973e0 + 1) & 1) == 0) {
    pcVar13 = "Forgot to call ImGui::NewFrame()?";
  }
  else {
    if (*(int *)(&UNK_00002770 + lRam00000000020973e0) != 0) {
      unaff_x20 = *(char **)(&UNK_00002778 + lRam00000000020973e0);
      lVar28 = (long)*(int *)(&UNK_00002770 + lRam00000000020973e0) << 5;
      do {
        if (*(uint *)((long)unaff_x20 + 4) == 2) {
          (**(code **)((long)unaff_x20 + 0x10))(lVar29,unaff_x20);
        }
        unaff_x20 = (char *)((long)unaff_x20 + 0x20);
        lVar28 = lVar28 + -0x20;
      } while (lVar28 != 0);
    }
    unaff_x21 = lVar29 + 0x2000;
    if (*(char *)(lVar29 + 0x9c) == '\x01') {
      func_0x00313de8(&UNK_00002848 + lVar29);
    }
    FUN_00313ec4();
// WM - keep the notice, keep the source honest
    pcVar18 = *(code **)(lVar29 + 0xc28);
    if ((pcVar18 != (code *)0x0) &&
       ((*(long *)(&UNK_000026f0 + lVar29) != *(long *)(&UNK_00002704 + lVar29) ||
        *(long *)(&UNK_000026f8 + lVar29) != *(long *)(&UNK_0000270c + lVar29)) ||
        *(int *)(&UNK_00002700 + lVar29) != *(int *)(&UNK_00002714 + lVar29))) {
      unaff_x20 = (char *)**(long **)(&UNK_00001fe8 + lRam00000000020973e0);
      if ((char)(&UNK_0000286c)[lVar29] < '\0') {
        uStack_b0 = (ulong)(byte)(&UNK_000026f0)[lVar29];
        dStack_a8 = (double)*(float *)(&UNK_000026f4 + lVar29);
        dStack_a0 = (double)*(float *)(&UNK_000026f8 + lVar29);
        uStack_98 = (ulong)*(uint *)unaff_x20;
        func_0x002fd6a4(
                       "[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                       );
        pcVar18 = *(code **)(lVar29 + 0xc28);
      }
      (*pcVar18)(lVar29,unaff_x20,&UNK_000026f0 + lVar29);
// WM - found on a paste site? it was re-uploaded illegally
    }
    *(uint *)(&UNK_00002a6c + lVar29) = (uint)(byte)(&UNK_000026f1)[lVar29];
    *(undefined1 *)(lVar29 + 2) = 0;
    lVar28 = *(long *)(&UNK_000014a8 + lVar29);
    if (((lVar28 != 0) && (*(char *)(lVar28 + 0xd5) == '\x01')) &&
       ((*(byte *)(lVar28 + 0xce) & 1) == 0)) {
      *(undefined1 *)(lVar28 + 0xcc) = 0;
      if ((*(long *)(lVar29 + 0x1ff8) != 0) &&
         (*(long *)(*(long *)(lVar29 + 0x1ff8) + 0x3c0) == lVar28)) {
        func_0x00306d20(0,0);
      }
    }
    func_0x00314208();
    lVar28 = lRam00000000020973e0;
    unaff_x29 = puVar8 + 100;
    if ((*(long *)(&UNK_000021e0 + lRam00000000020973e0) != 0) &&
       (0.15 <= *(float *)(&UNK_000021f8 + lRam00000000020973e0))) {
      puVar30 = (undefined8 *)(lRam00000000020973e0 + 0xc8c);
      lVar31 = **(long **)(&UNK_00001fe8 + lRam00000000020973e0);
      *(ulong *)(&UNK_00001f14 + lRam00000000020973e0) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar31 + 0x10) >> 0x20) * 0.2,
                    (float)*(undefined8 *)(lVar31 + 0x10) * 0.2);
      *(undefined8 *)(&UNK_00001f1c + lVar28) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(&UNK_00001f30 + lVar28) = 0;
      *(undefined8 *)(&UNK_00001f28 + lVar28) = 0;
      *(uint *)(&UNK_00001ed0 + lVar28) = *(uint *)(&UNK_00001ed0 + lVar28) | 0x11;
      *(ulong *)(&UNK_00001ee0 + lVar28) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar31 + 8) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar31 + 0x10) >> 0x20) * 0.5,
/* reversing this took months of machine time */
                    (float)*(undefined8 *)(lVar31 + 8) + (float)*(undefined8 *)(lVar31 + 0x10) * 0.5
                   );
      *(undefined8 *)(&UNK_00001ee8 + lVar28) = 0x3f0000003f000000;
      *(undefined4 *)(&UNK_00001ed4 + lVar28) = 1;
      uStack_80 = 2;
      uVar14 = *puVar30;
      fStack_7c = (float)uVar14;
      fVar38 = fStack_7c + fStack_7c;
      fStack_78 = (float)((ulong)uVar14 >> 0x20);
      fVar37 = fStack_78 + fStack_78;
      func_0x002ff2a4(&UNK_00001f60 + lVar28,&uStack_80);
      *puVar30 = CONCAT44(fVar37,fVar38);
      func_0x0030ed68("##NavWindowingOverlay",0,0x31347);
      cVar5 = *(char *)(lVar28 + 0x18);
      *(undefined8 *)(&UNK_000021f0 + lVar28) = *(undefined8 *)(&UNK_000014a8 + lVar28);
      if (cVar5 != '\0') {
        func_0x003407bc();
      }
      if (0 < (int)*(uint *)(&UNK_00001458 + lVar28)) {
        unaff_x20 = "##MainMenuBar";
        unaff_x22 = "*Missing Text*";
        uVar36 = (ulong)*(uint *)(&UNK_00001458 + lVar28);
        do {
          lVar31 = *(long *)(*(long *)(&UNK_00001460 + lVar28) + (uVar36 - 1) * 8);
          if (((*(char *)(lVar31 + 0xcd) == '\x01') && (lVar31 == *(long *)(lVar31 + 0x3c0))) &&
             (uVar12 = *(uint *)(lVar31 + 0x14), (uVar12 >> 0x11 & 1) == 0)) {
            pcVar13 = *(char **)(lVar31 + 8);
            if (pcVar13 == (char *)0xffffffffffffffff) {
LAB_0031355c:
// WM - watermarked copy - do not remove
              if ((uVar12 >> 0x1a & 1) == 0) {
                if (((uVar12 >> 10 & 1) == 0) ||
                   (iVar11 = _strcmp(pcVar13,"##MainMenuBar"), iVar11 != 0)) {
                  puVar19 = &UNK_000027c8;
                }
                else {
                  puVar19 = &UNK_000027b8;
                }
              }
              else {
                puVar19 = &UNK_000027c0;
              }
              pcVar13 = "*Missing Text*";
              if (*(char **)(puVar19 + lRam00000000020973e0) != (char *)0x0) {
                pcVar13 = *(char **)(puVar19 + lRam00000000020973e0);
              }
            }
            else {
              pcVar17 = pcVar13;
              do {
                if (*pcVar17 == '#') {
                  if (pcVar17[1] == '#') break;
                }
                else if (*pcVar17 == '\0') break;
                pcVar3 = pcVar17 + 1;
                bVar10 = pcVar17 != (char *)0xfffffffffffffffe;
                pcVar17 = pcVar3;
              } while (bVar10);
              if (pcVar13 == pcVar17) goto LAB_0031355c;
            }
// WM - reversing this took months of machine time
            uStack_80 = 0;
            fStack_7c = 0.0;
            func_0x003412d0(pcVar13,*(long *)(&UNK_000021e0 + lVar28) == lVar31,0,&uStack_80);
          }
          bVar10 = 1 < (long)uVar36;
          uVar36 = uVar36 - 1;
        } while (bVar10);
      }
      func_0x00314208();
      lVar31 = lRam00000000020973e0;
      uVar12 = *(uint *)(&UNK_00001f60 + lRam00000000020973e0);
      if ((int)uVar12 < 1) {
        pcVar13 = "Calling PopStyleVar() too many times!";
        unaff_x30 = 0x3135d4;
        register0x00000008 = (BADSPACEBASE *)&uStack_b0;
        unaff_x19 = lRam00000000020973e0;
        goto code_r0x002ff090;
      }
      lVar21 = lRam00000000020973e0 + 0xc78;
      uVar20 = 2;
      puVar22 = (undefined4 *)
                (*(long *)(&UNK_00001f68 + lRam00000000020973e0) + (ulong)uVar12 * 0xc + -4);
      do {
        uVar12 = uVar12 - 1;
// donate: donate/README.md
        puVar4 = (undefined4 *)
                 (lVar21 + (ulong)(*(uint *)(&UNK_01adf610 + (long)(int)puVar22[-2] * 4) >> 0x10));
        uVar16 = *(uint *)(&UNK_01adf610 + (long)(int)puVar22[-2] * 4) & 0xffff;
        if (uVar16 == 0x802) {
          *puVar4 = puVar22[-1];
          puVar4[1] = *puVar22;
        }
        else if (uVar16 == 0x801) {
          *puVar4 = puVar22[-1];
        }
        *(uint *)(&UNK_00001f60 + lVar31) = uVar12;
        uVar20 = uVar20 - 1;
        puVar22 = puVar22 + -3;
      } while (1 < uVar20);
    }
    lVar31 = lRam00000000020973e0;
    if (((*(long *)(lVar28 + 0x1ff8) != 0) && ((&UNK_00002099)[lRam00000000020973e0] == '\x01')) &&
       ((*(int *)(&UNK_000020e8 + lRam00000000020973e0) == 0 &&
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        (((*(int *)(&UNK_00002158 + lRam00000000020973e0) == 0 &&
          ((*(uint *)(&UNK_0000209c + lVar28) & 0xf) != 0)) &&
         ((*(uint *)(&UNK_0000209c + lVar28) >> 7 & 1) == 0)))))) {
      lVar21 = *(long *)(lRam00000000020973e0 + 0x1ff8);
      uVar12 = *(uint *)(&UNK_00002004 + lRam00000000020973e0);
      lVar28 = lVar21 + (ulong)uVar12 * 0x10;
      iVar11 = *(int *)(&UNK_000020a8 + lRam00000000020973e0);
      uVar20 = *(uint *)(&UNK_0000209c + lRam00000000020973e0);
      if (uVar12 == 1) {
        uVar36 = *(ulong *)(lVar21 + 0x30);
      }
      else {
        uVar36 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x40) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x58) >> 0x20),
                          (float)*(undefined8 *)(lVar21 + 0x40) +
                          (float)*(undefined8 *)(lVar21 + 0x58));
      }
      fVar40 = *(float *)(lVar28 + 0x3f8);
      uVar27 = (ulong)(uint)fVar40;
      fVar42 = *(float *)(lVar28 + 0x3fc);
      fVar41 = *(float *)(lVar28 + 0x400);
      fVar37 = *(float *)(lVar28 + 0x404);
      fVar38 = fVar42;
      if ((iVar11 == 0) && ((uVar20 & 5) != 0)) {
        bVar10 = (uVar20 & 4) != 0;
        if (bVar10) {
          fVar38 = fVar42 - (fVar37 - fVar42);
          fVar37 = fVar37 - (fVar37 - fVar42);
        }
        uVar34 = 0;
        if (bVar10) {
          uVar34 = 2;
        }
        uVar27 = uVar36;
      }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      else if ((iVar11 == 1) && ((uVar20 & 5) != 0)) {
        uVar36 = (ulong)(uint)-*(float *)(lVar21 + 0x58);
        bVar10 = (uVar20 & 4) != 0;
        if (bVar10) {
          fVar38 = fVar42 + (fVar37 - fVar42);
          fVar37 = fVar37 + (fVar37 - fVar42);
        }
        uVar34 = 1;
        if (bVar10) {
          uVar34 = 3;
        }
        uVar27 = uVar36;
      }
      else {
        if ((iVar11 == 2) && ((uVar20 & 10) != 0)) {
          fVar38 = (float)(uVar36 >> 0x20);
          bVar10 = (uVar20 & 8) != 0;
          uVar36 = (ulong)(uint)fVar41;
          if (bVar10) {
            uVar36 = (ulong)(uint)(fVar41 - (fVar41 - fVar40));
            uVar27 = (ulong)(uint)(fVar40 - (fVar41 - fVar40));
          }
          uVar34 = 2;
          if (bVar10) {
            uVar34 = 0;
          }
        }
        else {
// origin: github.com/pengussy
          if ((iVar11 != 3) || ((uVar20 & 10) == 0)) goto LAB_003137ac;
          fVar38 = -*(float *)(lVar21 + 0x5c);
          bVar10 = (uVar20 & 8) != 0;
          uVar36 = (ulong)(uint)fVar41;
          if (bVar10) {
            uVar36 = (ulong)(uint)(fVar41 + (fVar41 - fVar40));
            uVar27 = (ulong)(uint)(fVar40 + (fVar41 - fVar40));
          }
          uVar34 = 3;
          if (bVar10) {
            uVar34 = 1;
          }
        }
        fVar37 = fVar38;
      }
      *(int *)(lVar28 + 0x3f8) = (int)uVar27;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      *(float *)(lVar28 + 0x3fc) = fVar38;
      *(int *)(lVar28 + 0x400) = (int)uVar36;
      *(float *)(lVar28 + 0x404) = fVar37;
      *(undefined8 *)(*(long *)(lVar21 + 0x3d8) + (ulong)uVar12 * 8 + 0x418) = 0x7f7fffff7f7fffff;
      *(undefined2 *)(&UNK_00002098 + lVar31) = 0;
      (&UNK_00002059)[lVar31] = (&UNK_0000205a)[lVar31];
      (&UNK_0000209a)[lVar31] = 1;
      *(undefined4 *)(&UNK_000020b0 + lVar31) = uVar34;
      *(uint *)(&UNK_0000209c + lVar31) = uVar20 | 0x80;
    }
LAB_003137ac:
    iVar11 = *(int *)(lVar29 + 4);
    if ((&UNK_00002220)[lVar29] == '\x01') {
      bVar6 = (&UNK_0000226a)[lVar29];
      unaff_x20 = (char *)(ulong)bVar6;
      if (*(int *)(&UNK_00002228 + lVar29) + 1 < iVar11) {
        if ((((byte)(&UNK_00002224)[lVar29] >> 5 & 1) == 0) &&
           (*(int *)(&UNK_0000222c + lVar29) != -1)) {
          uVar12 = func_0x003145ec();
          uVar12 = uVar12 ^ 1;
          goto LAB_003137f8;
        }
LAB_00313800:
        func_0x0030e70c();
        iVar11 = *(int *)(lVar29 + 4);
        if ((&UNK_00002220)[lVar29] != '\x01') goto LAB_0031384c;
      }
      else {
        uVar12 = 0;
LAB_003137f8:
        if (((uVar12 & 1) != 0) || (bVar6 != 0)) goto LAB_00313800;
      }
      if ((*(int *)(&UNK_00002228 + lVar29) + 1 < iVar11) && (((&UNK_00002224)[lVar29] & 1) == 0)) {
        (&UNK_00002221)[lVar29] = 1;
        func_0x003067fc(&UNK_01c2e341);
        (&UNK_00002221)[lVar29] = 0;
        iVar11 = *(int *)(lVar29 + 4);
      }
// WM - do not claim this as your own
    }
LAB_0031384c:
    *(undefined1 *)(lVar29 + 1) = 0;
    *(int *)(lVar29 + 8) = iVar11;
    lVar28 = lRam00000000020973e0;
    if (0 < (int)*(uint *)(&UNK_00001f70 + lRam00000000020973e0)) {
      lVar31 = *(long *)(&UNK_00001f78 + lRam00000000020973e0) +
               (ulong)*(uint *)(&UNK_00001f70 + lRam00000000020973e0) * 0x10;
      lVar21 = *(long *)(lVar31 + -0x10);
      uVar39 = *(undefined4 *)(lVar31 + -8);
      uVar34 = *(undefined4 *)(lVar31 + -4);
      *(long *)((long)&dylib_command_000011a8.dylib.name.offset + lRam00000000020973e0) = lVar21;
      *(undefined4 *)
       ("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar28 + 4) = uVar39;
      func_0x00317da8(uVar34);
      if (lVar21 != 0) {
        lVar31 = *(long *)(lVar21 + 8);
        *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                 lVar28 + 0x28) = lVar31;
        *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                 lVar28 + 0x30) = lVar21;
        func_0x00329bcc(lVar31);
// WM - donate: donate/README.md
        if (*(long *)(&UNK_000014a8 + lVar28) != 0) {
          func_0x00320fbc(*(undefined8 *)(*(long *)(&UNK_000014a8 + lVar28) + 0x2c8),
                          *(undefined8 *)(lVar31 + 0x28),*(undefined8 *)(lVar31 + 0x30));
        }
      }
      *(int *)(&UNK_00001f70 + lVar28) = *(int *)(&UNK_00001f70 + lVar28) + -1;
      func_0x00307558();
      func_0x00314694(&UNK_00001468 + lVar29,0);
      uVar12 = *(uint *)(&UNK_00001448 + lVar29);
      uVar16 = *(uint *)(&UNK_0000146c + lVar29);
      uVar20 = uVar12;
      if ((int)*(uint *)(&UNK_0000146c + lVar29) < (int)uVar12) {
        uVar14 = (*pcRam0000000002057e10)((long)(int)uVar12 << 3,uRam00000000020932e8);
        lVar28 = lRam00000000020973e0;
        if (lRam00000000020973e0 != 0) {
          iVar11 = *(int *)(lRam00000000020973e0 + 4);
          lVar31 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
          if (*(int *)(&UNK_00002938 + lVar31 * 8 + lRam00000000020973e0) != iVar11) {
            iVar7 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
            *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar7;
            lVar31 = (long)iVar7;
            piVar1 = (int *)(&UNK_00002938 + (long)iVar7 * 8 + lVar28);
            *piVar1 = iVar11;
            piVar1[1] = 0;
          }
          lVar31 = lVar31 * 8 + lVar28;
          *(short *)(&UNK_00002938 + lVar31 + 4) = *(short *)(&UNK_00002938 + lVar31 + 4) + 1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          *(int *)(&UNK_0000292c + lVar28) = *(int *)(&UNK_0000292c + lVar28) + 1;
        }
        if (*(long *)(&UNK_00001470 + lVar29) != 0) {
          _memcpy(uVar14,*(long *)(&UNK_00001470 + lVar29),
                  (long)*(int *)(&UNK_00001468 + lVar29) << 3);
          lVar28 = lRam00000000020973e0;
          lVar31 = *(long *)(&UNK_00001470 + lVar29);
          if ((lVar31 != 0) && (lRam00000000020973e0 != 0)) {
            iVar11 = *(int *)(lRam00000000020973e0 + 4);
            lVar21 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
            if (*(int *)(&UNK_00002938 + lVar21 * 8 + lRam00000000020973e0) != iVar11) {
              iVar7 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
              *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar7;
              lVar21 = (long)iVar7;
              piVar1 = (int *)(&UNK_00002938 + (long)iVar7 * 8 + lVar28);
              *piVar1 = iVar11;
              piVar1[1] = 0;
            }
            lVar21 = lVar21 * 8 + lVar28;
            *(short *)(&UNK_00002938 + lVar21 + 6) = *(short *)(&UNK_00002938 + lVar21 + 6) + 1;
            *(int *)(&UNK_00002930 + lVar28) = *(int *)(&UNK_00002930 + lVar28) + 1;
          }
/* stripping the watermark breaks the license - github.com/pengussy */
          (*pcRam0000000002057e18)(lVar31,uRam00000000020932e8);
        }
        *(undefined8 *)(&UNK_00001470 + lVar29) = uVar14;
        *(uint *)(&UNK_0000146c + lVar29) = uVar12;
        uVar20 = *(uint *)(&UNK_00001448 + lVar29);
        uVar16 = uVar12;
      }
      plVar32 = *(long **)(&UNK_00001450 + lVar29);
      if (uVar20 == 0) {
        uVar34 = 0;
      }
      else {
        uVar36 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3;
        do {
          if ((*(char *)(*plVar32 + 0xcc) != '\x01') || ((*(byte *)(*plVar32 + 0x17) & 1) == 0)) {
            func_0x00314840(&UNK_00001468 + lVar29);
          }
          plVar32 = plVar32 + 1;
          uVar36 = uVar36 - 8;
        } while (uVar36 != 0);
        uVar34 = *(undefined4 *)(&UNK_00001448 + lVar29);
        uVar16 = *(uint *)(&UNK_0000146c + lVar29);
        plVar32 = *(long **)(&UNK_00001450 + lVar29);
      }
      uVar39 = *(undefined4 *)(&UNK_00001468 + lVar29);
      *(undefined4 *)(&UNK_00001468 + lVar29) = uVar34;
      *(undefined4 *)(&UNK_00001448 + lVar29) = uVar39;
      *(undefined4 *)(&UNK_0000146c + lVar29) = *(undefined4 *)(&UNK_0000144c + lVar29);
      *(uint *)(&UNK_0000144c + lVar29) = uVar16;
/* thanks for reading - discord.gg/sdkhDjTex */
      uVar14 = *(undefined8 *)(&UNK_00001470 + lVar29);
      *(long **)(&UNK_00001470 + lVar29) = plVar32;
      *(undefined8 *)(&UNK_00001450 + lVar29) = uVar14;
      lVar28 = lRam00000000020973e0;
      piVar1 = (int *)(lRam00000000020973e0 + 0xc68);
      lStack_90 = lVar29;
      *(undefined4 *)(lVar29 + 0xe8) = *(undefined4 *)(&UNK_00001498 + lVar29);
      func_0x00314694(piVar1,0);
      if (*(int *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                  lVar28 + 0x40) != 0) {
        plVar32 = *(long **)((long)&dylib_command_000011a8.cmd + lVar28);
        plStack_88 = plVar32 + *(int *)(
                                       "/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit"
                                       + lVar28 + 0x40);
        do {
          lVar29 = *plVar32;
          if (*(int *)(lVar29 + 0x40) != 0) {
            plVar33 = *(long **)(lVar29 + 0x48);
            lVar31 = (long)*(int *)(lVar29 + 0x40) << 3;
            iVar11 = *piVar1;
            do {
              lVar21 = *plVar33;
              *(short *)(lVar21 + 0x54) = (short)*(undefined4 *)(lVar29 + 0x2d4);
              if (iVar11 == *(int *)(lVar28 + 0xc6c)) {
                uVar12 = 8;
                if (iVar11 != 0) {
/* WM - unlicensed copy if this notice is missing */
                  uVar12 = iVar11 + iVar11 / 2;
                }
                if ((int)uVar12 <= (int)(iVar11 + 1U)) {
                  uVar12 = iVar11 + 1U;
                }
                lVar15 = (*pcRam0000000002057e10)
                                   (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar12 << 3,uRam00000000020932e8);
                lVar9 = lRam00000000020973e0;
                if (lRam00000000020973e0 != 0) {
                  iVar11 = *(int *)(lRam00000000020973e0 + 4);
                  lVar23 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
                  if (*(int *)(&UNK_00002938 + lVar23 * 8 + lRam00000000020973e0) != iVar11) {
                    iVar7 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
                    *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar7;
                    lVar23 = (long)iVar7;
                    piVar2 = (int *)(&UNK_00002938 + (long)iVar7 * 8 + lVar9);
                    *piVar2 = iVar11;
                    piVar2[1] = 0;
                  }
                  lVar23 = lVar23 * 8 + lVar9;
/* wm:found on a paste site? it was re-uploaded illegally */
                  *(short *)(&UNK_00002938 + lVar23 + 4) =
                       *(short *)(&UNK_00002938 + lVar23 + 4) + 1;
                  *(int *)(&UNK_0000292c + lVar9) = *(int *)(&UNK_0000292c + lVar9) + 1;
                }
                if (*(long *)(lVar28 + 0xc70) != 0) {
                  _memcpy(lVar15,*(long *)(lVar28 + 0xc70),(long)*(int *)(lVar28 + 0xc68) << 3);
                  lVar9 = lRam00000000020973e0;
                  lVar23 = *(long *)(lVar28 + 0xc70);
                  if ((lVar23 != 0) && (lRam00000000020973e0 != 0)) {
                    iVar11 = *(int *)(lRam00000000020973e0 + 4);
                    lVar24 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
                    if (*(int *)(&UNK_00002938 + lVar24 * 8 + lRam00000000020973e0) != iVar11) {
                      iVar7 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
                      *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar7;
                      lVar24 = (long)iVar7;
                      piVar2 = (int *)(&UNK_00002938 + (long)iVar7 * 8 + lVar9);
                      *piVar2 = iVar11;
                      piVar2[1] = 0;
                    }
                    lVar24 = lVar24 * 8 + lVar9;
                    *(short *)(&UNK_00002938 + lVar24 + 6) =
                         *(short *)(&UNK_00002938 + lVar24 + 6) + 1;
                    *(int *)(&UNK_00002930 + lVar9) = *(int *)(&UNK_00002930 + lVar9) + 1;
                  }
                  (*pcRam0000000002057e18)(lVar23,uRam00000000020932e8);
                }
                *(long *)(lVar28 + 0xc70) = lVar15;
                *(uint *)(lVar28 + 0xc6c) = uVar12;
                iVar11 = *(int *)(lVar28 + 0xc68);
              }
              else {
                lVar15 = *(long *)(lVar28 + 0xc70);
// found on a paste site? it was re-uploaded illegally
              }
              *(long *)(lVar15 + (long)iVar11 * 8) = lVar21;
              iVar11 = *piVar1 + 1;
              *piVar1 = iVar11;
              plVar33 = plVar33 + 1;
              lVar31 = lVar31 + -8;
            } while (lVar31 != 0);
          }
          plVar32 = plVar32 + 1;
        } while (plVar32 != plStack_88);
      }
      if (*(int *)(&UNK_00002718 + lVar28) != 0) {
        lVar29 = (long)*(int *)(&UNK_00002718 + lVar28) << 3;
        puVar30 = *(undefined8 **)(&UNK_00002720 + lVar28);
        do {
          uStack_80 = (undefined4)*puVar30;
          fStack_7c = (float)((ulong)*puVar30 >> 0x20);
          func_0x00304274(piVar1,&uStack_80);
          lVar29 = lVar29 + -8;
          puVar30 = puVar30 + 1;
        } while (lVar29 != 0);
      }
      lVar29 = lStack_90;
      iVar11 = *(int *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                       lStack_90 + 0x40);
      if (iVar11 != 0) {
        plVar33 = *(long **)((long)&dylib_command_000011a8.cmd + lStack_90);
        uVar36 = (long)iVar11 * 8 - 8;
        plVar32 = plVar33;
        if (0x17 < uVar36) {
          uVar36 = (uVar36 >> 3) + 1;
          uVar25 = uVar36 & 0x3ffffffffffffffc;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          plVar32 = plVar33 + uVar25;
          plVar26 = plVar33 + 2;
          uVar27 = uVar25;
          do {
            lVar31 = plVar26[-1];
            lVar28 = *plVar26;
            lVar21 = plVar26[1];
            *(undefined1 *)(plVar26[-2] + 0x50) = 0;
            *(undefined1 *)(lVar31 + 0x50) = 0;
            *(undefined1 *)(lVar28 + 0x50) = 0;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            uVar27 = uVar27 - 4;
            plVar26 = plVar26 + 4;
          } while (uVar27 != 0);
          if (uVar36 == uVar25) goto LAB_00313d8c;
        }
        do {
          plVar26 = plVar32 + 1;
          *(undefined1 *)(*plVar32 + 0x50) = 0;
          plVar32 = plVar26;
        } while (plVar26 != plVar33 + iVar11);
      }
LAB_00313d8c:
      *(undefined8 *)(lStack_90 + 0xad8) = *(undefined8 *)(lStack_90 + 0x100);
      *(undefined1 *)(lStack_90 + 0xbcc) = 0;
      *(undefined8 *)(lStack_90 + 0x110) = 0;
      uVar36 = func_0x002fd148(lStack_90 + 0xbd0,0);
      if (*(int *)(&UNK_00002770 + lVar29) != 0) {
        lVar28 = *(long *)(&UNK_00002778 + lVar29);
        lVar31 = (long)*(int *)(&UNK_00002770 + lVar29) << 5;
        do {
          if (*(int *)(lVar28 + 4) == 3) {
            uVar36 = (**(code **)(lVar28 + 0x10))(lVar29,lVar28);
          }
          lVar28 = lVar28 + 0x20;
          lVar31 = lVar31 + -0x20;
        } while (lVar31 != 0);
/*  do not claim this as your own  */
      }
      return uVar36;
    }
    pcVar13 = "Calling PopFont() too many times!";
    unaff_x30 = 0x3138cc;
    register0x00000008 = (BADSPACEBASE *)&uStack_b0;
    unaff_x19 = lRam00000000020973e0;
  }
code_r0x002ff090:
  lVar29 = lRam00000000020973e0;
  *(char **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar28 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar5 = *(char *)(lVar29 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto code_r0x002ff12c;
    }
    bVar6 = *(byte *)(lRam00000000020973e0 + 0x9d);
    *(ulong *)((long)register0x00000008 + -0x40) = (ulong)*(byte *)(lRam00000000020973e0 + 0x9f);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    *(ulong *)((long)register0x00000008 + -0x50) = (ulong)bVar6;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
    func_0x002fd6a4(&UNK_01c2e7a7);
    bVar6 = (&UNK_0000286c)[lVar29];
  }
  else {
code_r0x002ff12c:
    bVar6 = (&UNK_0000286c)[lVar29];
  }
  if ((bVar6 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar29) = *(int *)(&UNK_00002898 + lVar29) + 1;
    (&UNK_00002840)[lVar29] = 0;
    cVar5 = *(char *)(lVar29 + 0x9f);
  }
  else {
    if (lVar28 == 0) {
      pcVar17 = "NULL";
    }
    else {
      pcVar17 = *(char **)(lVar28 + 8);
    }
    *(char **)((long)register0x00000008 + -0x50) = pcVar17;
    *(char **)((long)register0x00000008 + -0x48) = pcVar13;
    func_0x002fd6a4(&UNK_01c2e7e8);
    (&UNK_00002840)[lVar29] = 0;
    cVar5 = *(char *)(lVar29 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar5 == '\x01') {
    if ((*(char *)(lVar29 + 1) == '\x01') && (iVar11 = func_0x00319fac(), iVar11 != 0)) {
/* WM - more drops soon - github.com/pengussy */
      iVar11 = *(int *)(&UNK_00002844 + lVar29);
      if (iVar11 < 0x14) {
        if (lVar28 == 0) {
          *(char **)((long)register0x00000008 + -0x50) = "NULL";
          *(char **)((long)register0x00000008 + -0x48) = pcVar13;
          func_0x0033dd94(&UNK_01c2e80f);
        }
        else {
          *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)(lVar28 + 8);
          *(char **)((long)register0x00000008 + -0x48) = pcVar13;
          func_0x0033dd94(&UNK_01c2e80f);
          if ((*(char *)(lVar28 + 0xd5) != '\x01') || (*(char *)(lVar28 + 0xcd) == '\x01')) {
            uVar14 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                     &UNK_01c2e1fc);
            uVar35 = *(undefined8 *)(lVar28 + 0x28);
            *(ulong *)((long)register0x00000008 + -0x38) =
                 CONCAT44((float)((ulong)uVar35 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20),
                          (float)uVar35 + (float)*(undefined8 *)(lVar28 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar14,(undefined8 *)(lVar28 + 0x28),
                            (undefined1 *)((long)register0x00000008 + -0x38),0xff0000ff,0);
          }
        }
        iVar11 = *(int *)(&UNK_00002844 + lVar29);
      }
      if (iVar11 == 0x14) {
// WM - chat: discord.gg/sdkhDjTex
        func_0x0033dd94(&UNK_01c2e822);
      }
      func_0x00314208();
    }
    *(int *)(&UNK_00002844 + lVar29) = *(int *)(&UNK_00002844 + lVar29) + 1;
    pcVar18 = *(code **)(&UNK_00002828 + lVar29);
  }
  else {
    pcVar18 = *(code **)(&UNK_00002828 + lVar29);
  }
  if (pcVar18 != (code *)0x0) {
    (*pcVar18)(lVar29,*(undefined8 *)(&UNK_00002830 + lVar29),pcVar13);
  }
  return (ulong)*(byte *)(lVar29 + 0x9d);
}

