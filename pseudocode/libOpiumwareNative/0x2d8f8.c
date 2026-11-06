/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2d8f8:d0d2622d3e
 */

/* WARNING: Possible PIC construction at 0x0002d93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002daec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002dbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002dc2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002ddc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002dcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002dd58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002de2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002def0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002df14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002df34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002de80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002dfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002df7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0002dfe0) */
/* WARNING: Removing unreachable block (ram,0x0002de84) */
/* WARNING: Removing unreachable block (ram,0x0002df38) */
/* WARNING: Removing unreachable block (ram,0x0002df18) */
/* WARNING: Removing unreachable block (ram,0x0002def4) */
/* WARNING: Removing unreachable block (ram,0x0002de30) */
/* WARNING: Removing unreachable block (ram,0x0002dce0) */
/* WARNING: Removing unreachable block (ram,0x0002dd4c) */
/* WARNING: Removing unreachable block (ram,0x0002dcec) */
/* WARNING: Removing unreachable block (ram,0x0002dd5c) */
/* WARNING: Removing unreachable block (ram,0x0002dd64) */
/* WARNING: Removing unreachable block (ram,0x0002ddc4) */
/* WARNING: Removing unreachable block (ram,0x0002dc30) */
/* WARNING: Removing unreachable block (ram,0x0002dbb0) */
/* WARNING: Removing unreachable block (ram,0x0002daf0) */
/* WARNING: Removing unreachable block (ram,0x0002d940) */
/* WARNING: Removing unreachable block (ram,0x0002df80) */

/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
dword * FUN_0002d8f8(dword *param_1,dword *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  dword *pdVar7;
  dword *pdVar8;
  char *pcVar9;
  dword *pdVar10;
  uint *puVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  dword *unaff_x19;
  long *plVar17;
  long *plVar18;
// donate: donate/README.md
  dword *unaff_x20;
  dword *unaff_x21;
  dword *unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined8 unaff_x30;
  undefined1 auStack_70 [8];
  dword *pdStack_68;
  dword *pdStack_60;
  byte bStack_51;
  
  puVar4 = auStack_70;
  puVar5 = auStack_70;
  puVar19 = auStack_70 + 0x60;
  pcVar13 = *(char **)(param_2 + 6);
  if ((ulong)(*(long *)(param_2 + 4) - (long)pcVar13) < 0xc) {
    unaff_x30 = 0x2d940;
    puVar5 = auStack_70;
    pcVar9 = "  resource: ";
    pdVar10 = &MACH_HEADER.filetype;
    unaff_x19 = param_2;
    pcVar13 = (char *)unaff_x21;
    pdVar8 = unaff_x22;
    goto code_r0x01770110;
  }
/* wm:do not claim this as your own */
  pcVar13[8] = 'c';
  pcVar13[9] = 'e';
  pcVar13[10] = ':';
  pcVar13[0xb] = ' ';
  *(undefined8 *)pcVar13 = s_resource__01c236e9._0_8_;
  *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + 0xc;
  pdVar7 = (dword *)func_0x015bcc20(param_1);
  if ((int)pdVar7 == 2) {
    puVar11 = *(uint **)(param_2 + 6);
    if (6 < (ulong)(*(long *)(param_2 + 4) - (long)puVar11)) {
      *(undefined4 *)((long)puVar11 + 3) = 0x72656666;
      uVar15 = 0x4243;
LAB_0002da48:
      *puVar11 = uVar15 | 0x66750000;
      lVar12 = *(long *)(param_2 + 6) + 7;
LAB_0002e028:
      *(long *)(param_2 + 6) = lVar12;
      return pdVar7;
    }
    pcVar9 = "CBuffer";
LAB_0002d9d8:
    pdVar10 = (dword *)((long)&MACH_HEADER.cputype + 3);
LAB_0002d9e0:
    puVar5 = (undefined1 *)register0x00000008;
/* wm:no support for modified copies */
    param_1 = unaff_x20;
    pcVar13 = (char *)unaff_x21;
    pdVar8 = unaff_x22;
    puVar19 = unaff_x29;
  }
  else {
    iVar6 = func_0x015bcc20(param_1);
    if ((iVar6 == 0) && (pdVar7 = (dword *)func_0x00290f6c(param_1), (int)pdVar7 == 0xf)) {
      puVar11 = *(uint **)(param_2 + 6);
      if (6 < (ulong)(*(long *)(param_2 + 4) - (long)puVar11)) {
        *(undefined4 *)((long)puVar11 + 3) = 0x72656666;
        uVar15 = 0x4254;
        goto LAB_0002da48;
      }
      pcVar9 = "TBuffer";
      goto LAB_0002d9d8;
    }
    pdVar7 = (dword *)func_0x015bcc20(param_1);
    uVar3 = s_SamplerComparisonState_01c23713._0_8_;
    if ((int)pdVar7 == 3) {
      pcVar13 = *(char **)(param_2 + 6);
      if (*(char *)((long)param_1 + 1) < '\0') {
        if (0x15 < (ulong)(*(long *)(param_2 + 4) - (long)pcVar13)) {
          *(ulong *)(pcVar13 + 8) =
               CONCAT26(s_SamplerComparisonState_01c23713._14_2_,
                        s_SamplerComparisonState_01c23713._8_6_);
          *(undefined8 *)pcVar13 = uVar3;
          *(ulong *)(pcVar13 + 0xe) =
               CONCAT62(s_SamplerComparisonState_01c23713._16_6_,
                        s_SamplerComparisonState_01c23713._14_2_);
          lVar12 = *(long *)(param_2 + 6) + 0x16;
          goto LAB_0002e028;
        }
        pcVar9 = "SamplerComparisonState";
        pdVar10 = (dword *)((long)&MACH_HEADER.sizeofcmds + 2);
      }
      else {
/* no support for modified copies - github.com/pengussy */
        if (0xb < (ulong)(*(long *)(param_2 + 4) - (long)pcVar13)) {
          pcVar13[8] = 't';
          pcVar13[9] = 'a';
          pcVar13[10] = 't';
          pcVar13[0xb] = 'e';
          *(undefined8 *)pcVar13 = s_SamplerState_01c23706._0_8_;
          lVar12 = *(long *)(param_2 + 6) + 0xc;
          goto LAB_0002e028;
        }
        pcVar9 = "SamplerState";
        pdVar10 = &MACH_HEADER.filetype;
      }
      goto LAB_0002d9e0;
    }
    iVar6 = func_0x015bcc04(param_1);
    pcVar13 = "RW";
    if ((*param_1 & 0x2000) != 0) {
      pcVar13 = "ROV";
    }
    pcVar9 = &UNK_01cb7848;
    if ((*param_1 & 0x4000) != 0) {
      pcVar9 = "globallycoherent ";
    }
    if (iVar6 == 0) {
      pcVar13 = &UNK_01cb7848;
      pcVar9 = &UNK_01cb7848;
    }
    iVar6 = func_0x00290f6c(param_1);
    if (iVar6 < 0xc) {
      if (iVar6 - 1U < 10) {
        pdVar10 = (dword *)_strlen(pcVar9);
        pcVar16 = *(char **)(param_2 + 6);
        if ((long *)(*(long *)(param_2 + 4) - (long)pcVar16) < pdVar10) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          unaff_x30 = 0x2daf0;
          puVar5 = auStack_70;
          unaff_x19 = param_2;
          pdVar8 = (dword *)pcVar9;
        }
        else {
          if (pdVar10 != (dword *)0x0) {
            _memcpy(pcVar16,pcVar9,pdVar10);
            pcVar16 = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
            *(char **)(param_2 + 6) = pcVar16;
          }
          pdVar10 = (dword *)_strlen(pcVar13);
          pdVar8 = param_2;
          if ((long *)(*(long *)(param_2 + 4) - (long)pcVar16) < pdVar10) {
            unaff_x30 = 0x2dbb0;
            puVar5 = auStack_70;
            pcVar9 = pcVar13;
            unaff_x19 = param_2;
          }
          else {
            if (pdVar10 != (dword *)0x0) {
              _memcpy(pcVar16,pcVar13,pdVar10);
              *(char **)(param_2 + 6) = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
            }
            iVar6 = func_0x00290f6c(param_1);
            if (iVar6 - 1U < 0x12) {
              pcVar13 = *(char **)(&UNK_01dbe7d8 + (ulong)(iVar6 - 1U) * 8);
            }
            else {
              pcVar13 = "<invalid ResourceKind>";
            }
            pdVar10 = (dword *)_strlen(pcVar13);
            if ((long *)(*(long *)(param_2 + 4) - *(long *)(param_2 + 6)) < pdVar10) {
              unaff_x30 = 0x2dc30;
              puVar5 = auStack_70;
              pcVar9 = pcVar13;
              unaff_x19 = param_2;
            }
/* wm:proprietary - see LICENSE - do not sell */
            else {
              if (pdVar10 != (dword *)0x0) {
                _memcpy(*(long *)(param_2 + 6),pcVar13,pdVar10);
                *(char **)(param_2 + 6) = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
              }
              if (*(undefined1 **)(param_2 + 4) == *(undefined1 **)(param_2 + 6)) {
                func_0x01770110(param_2,"<",1);
                bVar1 = *(byte *)((long)param_1 + 5);
              }
              else {
                **(undefined1 **)(param_2 + 6) = 0x3c;
                *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + 1;
                bVar1 = *(byte *)((long)param_1 + 5);
              }
              if (bVar1 < 2) {
                iVar6 = func_0x00290f84(param_1);
                if (iVar6 - 1U < 0x10) {
                  pcVar9 = *(char **)(&UNK_01dbe758 + (ulong)(iVar6 - 1U) * 8);
                }
                else {
                  pcVar9 = "<invalid CompType>";
                }
                pcVar13 = (char *)_strlen(pcVar9);
                pdVar7 = *(dword **)(param_2 + 6);
                if (pcVar13 <= (long *)(*(long *)(param_2 + 4) - (long)pdVar7)) {
                  if ((dword *)pcVar13 != (dword *)0x0) {
                    _memcpy(pdVar7,pcVar9,pcVar13);
                    pdVar7 = (dword *)(*(long *)(param_2 + 6) + (long)pcVar13);
                    *(dword **)(param_2 + 6) = pdVar7;
                  }
                  if ((dword *)*(char **)(param_2 + 4) == pdVar7) {
                    pdVar10 = (dword *)func_0x01770110(param_2,&UNK_01c8c2be,1);
                    return pdVar10;
                  }
// found on a paste site? it was re-uploaded illegally
                  *(char *)pdVar7 = '>';
                  goto LAB_0002e020;
                }
                unaff_x30 = 0x2ddc4;
                puVar5 = auStack_70;
                pdVar10 = (dword *)pcVar13;
                unaff_x19 = param_2;
                param_1 = (dword *)pcVar9;
              }
              else {
                pcVar13 = (char *)&pdStack_68;
                __ZNSt3__19to_stringEi(&pdStack_68);
                if (-1 < (char)bStack_51) {
                  pdStack_60 = (dword *)(ulong)bStack_51;
                  pdStack_68 = (dword *)pcVar13;
                }
                unaff_x30 = 0x2dce0;
                puVar5 = auStack_70;
                pcVar9 = (char *)pdStack_68;
                pdVar10 = pdStack_60;
                unaff_x19 = param_2;
              }
            }
          }
/*  unlicensed copy if this notice is missing  */
        }
      }
      else {
        if (iVar6 == 0xb) {
          unaff_x30 = 0x2de30;
          puVar4 = auStack_70;
          unaff_x19 = param_2;
          unaff_x22 = (dword *)pcVar9;
        }
        else {
LAB_0002df44:
          pcVar9 = "<invalid resource properties>";
LAB_0002df4c:
          puVar4 = (undefined1 *)register0x00000008;
          param_1 = unaff_x20;
          pcVar13 = (char *)unaff_x21;
          puVar19 = unaff_x29;
        }
// WM - chat: discord.gg/sdkhDjTex
code_r0x0000d688:
        *(dword **)(puVar4 + -0x30) = unaff_x22;
        *(char **)(puVar4 + -0x28) = pcVar13;
        *(dword **)(puVar4 + -0x20) = param_1;
        *(dword **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = puVar19;
        *(undefined8 *)(puVar4 + -8) = unaff_x30;
        if ((dword *)pcVar9 == (dword *)0x0) {
          return param_2;
        }
        pdVar10 = (dword *)_strlen(pcVar9);
        if (pdVar10 <= (long *)(*(long *)(param_2 + 4) - *(long *)(param_2 + 6))) {
          if (pdVar10 == (dword *)0x0) {
            return param_2;
          }
          _memcpy(*(long *)(param_2 + 6),pcVar9,pdVar10);
          *(char **)(param_2 + 6) = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
          return param_2;
        }
        puVar19 = *(undefined1 **)(puVar4 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar4 + -8);
// unlicensed copy if this notice is missing
        pcVar13 = *(char **)(puVar4 + -0x28);
        puVar5 = puVar4;
        unaff_x19 = *(dword **)(puVar4 + -0x18);
        param_1 = *(dword **)(puVar4 + -0x20);
        pdVar8 = *(dword **)(puVar4 + -0x30);
      }
    }
    else {
      if (1 < iVar6 - 0x11U) {
        if (iVar6 != 0xc) {
          if (iVar6 != 0x10) goto LAB_0002df44;
          func_0x00290f6c(param_1);
          pcVar9 = (char *)func_0x0002e304();
          goto LAB_0002df4c;
        }
        unaff_x30 = 0x2def4;
        unaff_x19 = param_2;
        unaff_x22 = (dword *)pcVar9;
        goto code_r0x0000d688;
      }
      iVar6 = func_0x00290f6c(param_1);
      if (iVar6 - 1U < 0x12) {
        pcVar13 = *(char **)(&UNK_01dbe7d8 + (ulong)(iVar6 - 1U) * 8);
      }
      else {
        pcVar13 = "<invalid ResourceKind>";
      }
      pdVar8 = (dword *)_strlen(pcVar13);
/*  stripping the watermark breaks the license  */
      pcVar9 = *(char **)(param_2 + 6);
      if ((long *)(*(long *)(param_2 + 4) - (long)pcVar9) < pdVar8) {
        unaff_x30 = 0x2de84;
        puVar5 = auStack_70;
        pcVar9 = pcVar13;
        pdVar10 = pdVar8;
        unaff_x19 = param_2;
      }
      else {
        if (pdVar8 != (dword *)0x0) {
          _memcpy(pcVar9,pcVar13,pdVar8);
          pcVar9 = (char *)(*(long *)(param_2 + 6) + (long)pdVar8);
          *(char **)(param_2 + 6) = pcVar9;
        }
        if (*(char **)(param_2 + 4) == pcVar9) {
          pcVar9 = "<";
          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
          unaff_x30 = 0x2df80;
          unaff_x19 = param_2;
        }
        else {
          *pcVar9 = '<';
          pcVar13 = (char *)(*(long *)(param_2 + 6) + 1);
          *(char **)(param_2 + 6) = pcVar13;
          pcVar16 = "MipRegionUsed";
          if ((char)param_1[1] != '\x01') {
            pcVar16 = "<invalid sampler feedback type>";
          }
          pcVar9 = "MinMip";
          if ((char)param_1[1] != '\0') {
            pcVar9 = pcVar16;
          }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
          pdVar10 = (dword *)_strlen(pcVar9);
          if (pdVar10 <= (long *)(*(long *)(param_2 + 4) - (long)pcVar13)) {
            pdVar7 = (dword *)0x0;
            if (pdVar10 != (dword *)0x0) {
              pdVar7 = (dword *)_memcpy(pcVar13,pcVar9,pdVar10);
              pcVar13 = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
              *(char **)(param_2 + 6) = pcVar13;
            }
            if (*(long **)(param_2 + 4) != (long *)pcVar13) {
              *pcVar13 = '>';
LAB_0002e020:
              lVar12 = *(long *)(param_2 + 6) + 1;
              goto LAB_0002e028;
            }
            pcVar9 = &UNK_01c8c2be;
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
            goto LAB_0002d9e0;
          }
// more drops soon - github.com/pengussy
          unaff_x30 = 0x2dfe0;
          puVar5 = auStack_70;
          unaff_x19 = param_2;
          param_1 = (dword *)pcVar9;
          pdVar8 = pdVar10;
        }
      }
    }
  }
code_r0x01770110:
  *(dword **)(puVar5 + -0x30) = pdVar8;
  *(char **)(puVar5 + -0x28) = pcVar13;
  *(dword **)(puVar5 + -0x20) = param_1;
  *(dword **)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = puVar19;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  pcVar13 = *(char **)(param_2 + 6);
  plVar17 = (long *)(*(long *)(param_2 + 4) - (long)pcVar13);
  if (plVar17 < pdVar10) {
    do {
/*  found on a paste site? it was re-uploaded illegally  */
      pcVar16 = *(char **)(param_2 + 2);
      plVar18 = plVar17;
      while (pcVar16 == (char *)0x0) {
        *(char **)(puVar5 + -0x40) = pcVar9;
        *(dword **)(puVar5 + -0x38) = pdVar10;
        if (param_2[9] == 0) {
          (**(code **)(*(long *)param_2 + 0x50))
                    (param_2,*(undefined8 *)(puVar5 + -0x40),*(undefined8 *)(puVar5 + -0x38));
          return param_2;
        }
        func_0x0176fbd8(param_2);
        pcVar13 = *(char **)(param_2 + 6);
        plVar18 = (long *)(*(long *)(param_2 + 4) - (long)pcVar13);
        if (*(long **)(puVar5 + -0x38) <= plVar18) {
          pcVar9 = *(char **)(puVar5 + -0x40);
          pdVar10 = *(dword **)(puVar5 + -0x38);
          goto joined_r0x0177026c;
        }
        pcVar9 = *(char **)(puVar5 + -0x40);
/* WM - origin: github.com/pengussy */
        pdVar10 = *(dword **)(puVar5 + -0x38);
        pcVar16 = *(char **)(param_2 + 2);
      }
      if (pcVar13 == pcVar16) {
        uVar2 = 0;
        if (plVar18 != (long *)0x0) {
          uVar2 = (ulong)pdVar10 / (ulong)plVar18;
        }
        plVar18 = (long *)(uVar2 * (long)plVar18);
        pdVar10 = (dword *)((long)pdVar10 - (long)plVar18);
        (**(code **)(*(long *)param_2 + 0x50))(param_2,pcVar9,plVar18);
        pcVar13 = *(char **)(param_2 + 6);
        plVar17 = (long *)(*(long *)(param_2 + 4) - (long)pcVar13);
        if (pdVar10 <= plVar17) {
          func_0x01771174(param_2,(dword *)((long)pcVar9 + (long)plVar18));
          return param_2;
        }
      }
      else {
        func_0x01771174(param_2,pcVar9,plVar18);
        lVar14 = *(long *)(param_2 + 6);
        lVar12 = *(long *)(param_2 + 2);
        *(long *)(param_2 + 6) = lVar12;
        (**(code **)(*(long *)param_2 + 0x50))(param_2,lVar12,lVar14 - lVar12);
        pdVar10 = (dword *)((long)pdVar10 - (long)plVar18);
        pcVar13 = *(char **)(param_2 + 6);
        plVar17 = (long *)(*(long *)(param_2 + 4) - (long)pcVar13);
      }
      pcVar9 = (char *)((long)pcVar9 + (long)plVar18);
    } while (plVar17 < pdVar10);
  }
joined_r0x0177026c:
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  if ((long)pdVar10 < 2) {
    if (pdVar10 == (dword *)0x0) goto code_r0x01770284;
    if (pdVar10 != (dword *)((long)&MACH_HEADER.magic + 1)) {
code_r0x017702a4:
      _memcpy(pcVar13);
      goto code_r0x01770284;
    }
  }
  else {
    if (pdVar10 != (dword *)((long)&MACH_HEADER.magic + 2)) {
      if (pdVar10 != (dword *)((long)&MACH_HEADER.magic + 3)) {
        if (pdVar10 != &MACH_HEADER.cputype) goto code_r0x017702a4;
        pcVar13[3] = *(char *)((long)pcVar9 + 3);
        pcVar13 = *(char **)(param_2 + 6);
      }
      pcVar13[2] = *(char *)((long)pcVar9 + 2);
      pcVar13 = *(char **)(param_2 + 6);
    }
    pcVar13[1] = *(char *)((long)pcVar9 + 1);
    pcVar13 = *(char **)(param_2 + 6);
  }
  *pcVar13 = (char)*(dword *)pcVar9;
code_r0x01770284:
  *(char **)(param_2 + 6) = (char *)(*(long *)(param_2 + 6) + (long)pdVar10);
  return param_2;
}

