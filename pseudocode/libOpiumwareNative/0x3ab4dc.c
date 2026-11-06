/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ab4dc:57c8cd18fb
 */

/* WARNING: Possible PIC construction at 0x003ab76c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003ab868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003ab770) */
/* WARNING: Removing unreachable block (ram,0x003ab774) */
/* WARNING: Removing unreachable block (ram,0x003ab780) */
/* WARNING: Removing unreachable block (ram,0x003ab790) */
/* WARNING: Removing unreachable block (ram,0x003aba24) */
/* WARNING: Removing unreachable block (ram,0x003ab7cc) */
/* WARNING: Removing unreachable block (ram,0x003aba5c) */
/* WARNING: Removing unreachable block (ram,0x003ab828) */
/* WARNING: Removing unreachable block (ram,0x003aba78) */
/* WARNING: Removing unreachable block (ram,0x003ab848) */
/* WARNING: Removing unreachable block (ram,0x003ab854) */
/* WARNING: Removing unreachable block (ram,0x003ab860) */
/* WARNING: Removing unreachable block (ram,0x003ab86c) */
/* WARNING: Removing unreachable block (ram,0x003aba94) */
/* WARNING: Removing unreachable block (ram,0x003ab870) */
/* WARNING: Removing unreachable block (ram,0x003abab0) */
/* WARNING: Removing unreachable block (ram,0x003ab8b0) */
/* WARNING: Removing unreachable block (ram,0x003ab8b8) */
/* WARNING: Removing unreachable block (ram,0x003abacc) */
/* WARNING: Removing unreachable block (ram,0x003ab8c0) */

ulong FUN_003ab4dc(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  undefined8 *unaff_x22;
  undefined8 *puVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a0 [8];
  short *psStack_98;
  undefined1 auStack_8e [6];
  undefined8 uStack_88;
  undefined1 auStack_68 [56];
  
  puVar1 = auStack_68;
  puVar14 = *(undefined8 **)(param_1 + 8);
  uStack_88 = 0;
  psStack_98 = (short *)0x0;
  puVar4 = (undefined *)func_0x003b691c();
  if ((int)puVar4 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x4cc,"tls_construct_client_hello");
    goto LAB_003ab538;
  }
  if (*(long **)(param_1 + 0xb60) != (long *)0x0) {
    if (**(long **)(param_1 + 0xb60) == 0) goto LAB_003ab5b4;
    iVar2 = func_0x003488cc(param_1,&psStack_98,auStack_8e);
    if ((iVar2 == 1) && (psStack_98 != (short *)0x0)) {
      if (*psStack_98 == -499) {
        *(undefined2 *)(param_1 + 0xc20) = 0xfe0d;
        *(uint *)(param_1 + 0xc24) = (uint)*(byte *)((long)psStack_98 + 0x31);
/* wm:watermarked copy - do not remove */
        *(undefined4 *)(param_1 + 0xc18) = 1;
        if ((*(long *)(param_1 + 0xb70) == 0) && (*(long *)(psStack_98 + 4) != 0)) {
          lVar9 = func_0x004759a8(*(long *)(psStack_98 + 4),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0x4e1);
          *(long *)(param_1 + 0xb70) = lVar9;
          if (lVar9 != 0) goto LAB_003ab5b4;
          func_0x004464bc();
          uVar6 = 0x4e3;
LAB_003aba44:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,uVar6,"tls_construct_client_hello");
          puVar4 = &UNK_000c0103;
          goto LAB_003ab538;
        }
LAB_003ab5b4:
        if ((*(int *)(param_1 + 0xc3c) == 1) && (*(int *)(param_1 + 0xc18) == 1)) {
/* keep the notice, keep the source honest - github.com/pengussy */
          *(undefined4 *)(param_1 + 0xc3c) = 0;
        }
        puVar11 = *(undefined4 **)(param_1 + 0x900);
        if ((((puVar11 == (undefined4 *)0x0) ||
             (iVar2 = func_0x003b5a0c(param_1,*puVar11,0), iVar2 == 0)) ||
            (iVar2 = func_0x00362820(puVar11), iVar2 == 0)) &&
           ((*(int *)(param_1 + 0x8d0) == 0 && (uVar5 = func_0x0036194c(param_1,0), (int)uVar5 == 0)
            ))) {
          return uVar5;
        }
        if ((*(int *)(param_1 + 0x7c) == 0) &&
           (piVar8 = *(int **)(param_1 + 0x900), *piVar8 != 0x304)) {
          if (*(int *)(param_1 + 0x48) == 0x304) {
            *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(piVar8 + 0x94);
            _memcpy(param_1 + 0x928,piVar8 + 0x96);
          }
        }
        else if ((*(int *)(param_1 + 0x48) == 0x304) && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) != 0)
                ) {
          *(undefined8 *)(param_1 + 0x948) = 0x20;
          if ((*(int *)(param_1 + 0x8d0) == 0) &&
             (iVar2 = func_0x004b242c(*puVar14,param_1 + 0x928,0x20,0), iVar2 < 1)) {
/*  no support for modified copies  */
            func_0x004464bc();
            uVar6 = 0x500;
            goto LAB_003aba44;
          }
          lVar9 = *(long *)(param_1 + 0x900);
          uVar6 = *(undefined8 *)(param_1 + 0x928);
          uVar16 = *(undefined8 *)(param_1 + 0x940);
          uVar15 = *(undefined8 *)(param_1 + 0x938);
          *(undefined8 *)(lVar9 + 0x260) = *(undefined8 *)(param_1 + 0x930);
          *(undefined8 *)(lVar9 + 600) = uVar6;
          *(undefined8 *)(lVar9 + 0x270) = uVar16;
          *(undefined8 *)(lVar9 + 0x268) = uVar15;
          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x250) = 0x20;
        }
        if (*(int *)(param_1 + 0x8d0) != 0) {
          *(undefined8 *)(param_1 + 0xc08) = 0;
        }
        *(undefined4 *)(param_1 + 0xc14) = 1;
        unaff_x21 = func_0x00400364();
        if (unaff_x21 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x51d,"tls_construct_client_hello");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          lVar9 = *(long *)(param_1 + 0xd10);
joined_r0x003ab9cc:
          if (lVar9 == 0) {
            return 0;
          }
          func_0x004743e4(*(undefined8 *)(lVar9 + 0x298),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x56c);
          func_0x004743e4(*(undefined8 *)(param_1 + 0xd10),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x56d);
          *(undefined8 *)(param_1 + 0xd10) = 0;
          return 0;
// thanks for reading - discord.gg/sdkhDjTex
        }
        iVar2 = func_0x019ebd10(auStack_68,unaff_x21);
        if ((iVar2 == 0) ||
           (iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x58))
                              (param_1,auStack_68,1), iVar2 == 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x51d,"tls_construct_client_hello");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          func_0x0047680c(auStack_68);
          func_0x00400378(unaff_x21);
          lVar9 = *(long *)(param_1 + 0xd10);
          goto joined_r0x003ab9cc;
        }
        puVar7 = auStack_68;
        unaff_x30 = 0x3ab770;
        register0x00000008 = (BADSPACEBASE *)auStack_a0;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        unaff_x22 = puVar14;
        unaff_x29 = puVar1 + 0x58;
        goto code_r0x003afea0;
      }
      func_0x004464bc();
      uVar6 = 0x4da;
    }
    else {
      func_0x004464bc();
      uVar6 = 0x4d5;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar6,"tls_construct_client_hello");
    puVar4 = &UNK_0008010c;
/* donate: donate/README.md */
LAB_003ab538:
    func_0x003a9570(param_1,0x50,puVar4,0);
    return 0;
  }
  puVar7 = param_2;
code_r0x003afea0:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar11 = *(undefined4 **)(param_1 + 0x900);
  puVar14 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined *)func_0x003b691c();
  if ((int)puVar4 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x585,&UNK_01c3aff6);
    uVar6 = 0x50;
    goto code_r0x003b0434;
  }
  if (*(long *)(param_1 + 0xb60) == 0) {
    if ((((puVar11 == (undefined4 *)0x0) ||
         (iVar2 = func_0x003b5a0c(param_1,*puVar11,0), iVar2 == 0)) ||
        (iVar2 = func_0x00362820(puVar11), iVar2 == 0)) &&
       ((*(int *)(param_1 + 0x8d0) == 0 && (uVar5 = func_0x0036194c(param_1,0), (int)uVar5 == 0))))
    {
      return uVar5;
    }
    if (*(long *)(param_1 + 0xb60) != 0) goto code_r0x003aff48;
code_r0x003b0070:
    pcVar12 = (char *)(param_1 + 0x188);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0)
// reversing this took months of machine time
    goto code_r0x003b0088;
code_r0x003aff6c:
    if ((((((*pcVar12 == '\0') && (pcVar12[1] == '\0')) &&
          ((pcVar12[2] == '\0' &&
           (((pcVar12[3] == '\0' && (pcVar12[4] == '\0')) && (pcVar12[5] == '\0')))))) &&
         ((pcVar12[6] == '\0' && (pcVar12[7] == '\0')))) &&
        ((pcVar12[8] == '\0' &&
         (((pcVar12[9] == '\0' && (pcVar12[10] == '\0')) &&
          ((pcVar12[0xb] == '\0' &&
           (((((pcVar12[0xc] == '\0' && (pcVar12[0xd] == '\0')) && (pcVar12[0xe] == '\0')) &&
             ((pcVar12[0xf] == '\0' && (pcVar12[0x10] == '\0')))) && (pcVar12[0x11] == '\0')))))))))
        ) && (((((pcVar12[0x12] == '\0' && (pcVar12[0x13] == '\0')) && (pcVar12[0x14] == '\0')) &&
               ((((pcVar12[0x15] == '\0' && (pcVar12[0x16] == '\0')) && (pcVar12[0x17] == '\0')) &&
                (((pcVar12[0x18] == '\0' && (pcVar12[0x19] == '\0')) &&
                 ((pcVar12[0x1a] == '\0' && ((pcVar12[0x1b] == '\0' && (pcVar12[0x1c] == '\0')))))))
                ))) && ((pcVar12[0x1d] == '\0' &&
                        ((pcVar12[0x1e] == '\0' && (pcVar12[0x1f] == '\0'))))))))
    goto code_r0x003b0090;
code_r0x003b00b0:
    iVar2 = func_0x019ec0a0(puVar7,(long)*(int *)(param_1 + 0x9d4),2);
    if ((iVar2 == 0) || (iVar2 = func_0x00476690(puVar7,pcVar12,0x20), iVar2 == 0)) {
      func_0x004464bc();
      uVar6 = 0x5d9;
    }
    else {
      piVar10 = *(int **)(param_1 + 0x900);
      piVar8 = piVar10 + 0x96;
      if (*(long *)(param_1 + 0xb60) == 0) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        if ((*(int *)(param_1 + 0x7c) == 0) && (*piVar10 != 0x304)) {
          uVar5 = *(ulong *)(piVar10 + 0x94);
          if (*(int *)(param_1 + 0x48) == 0x304) {
            *(ulong *)(param_1 + 0x948) = uVar5;
            _memcpy(param_1 + 0x928,piVar8,uVar5);
          }
        }
        else if ((*(int *)(param_1 + 0x48) == 0x304) && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) != 0)
                ) {
          uVar5 = 0x20;
          *(undefined8 *)(param_1 + 0x948) = 0x20;
          piVar8 = (int *)(param_1 + 0x928);
          if (*(int *)(param_1 + 0x8d0) == 0) {
            uVar5 = 0x20;
            iVar2 = func_0x004b242c(*puVar14,piVar8,0x20,0);
            if (iVar2 < 1) {
              func_0x004464bc();
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
              uVar6 = 0x5f6;
              goto code_r0x003b0420;
            }
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x48) != 0x304) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x5e3,&UNK_01c3aff6);
          uVar6 = 0x46;
          puVar4 = (undefined *)0x103;
          goto code_r0x003b0434;
        }
        uVar5 = *(ulong *)(param_1 + 0x9b0) >> 0xf & 0x20;
      }
      iVar2 = func_0x019eba0c(puVar7,1);
      if ((iVar2 == 0) ||
         (((uVar5 != 0 && (iVar2 = func_0x00476690(puVar7,piVar8,uVar5), iVar2 == 0)) ||
          (iVar2 = func_0x00476494(puVar7), iVar2 == 0)))) {
        func_0x004464bc();
        uVar6 = 0x60b;
/* WM - if you paid for this, you were scammed */
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) {
          uVar5 = *(ulong *)(*(long *)(param_1 + 0x4f0) + 0x100);
          if ((0xff < uVar5) ||
             (iVar2 = func_0x004766ec(puVar7,*(long *)(param_1 + 0x4f0),uVar5,1), iVar2 == 0)) {
            func_0x004464bc();
            uVar6 = 0x614;
            goto code_r0x003b0420;
          }
        }
        iVar2 = func_0x019eba0c(puVar7,2);
        if (iVar2 == 0) {
          func_0x004464bc();
          uVar6 = 0x61b;
        }
        else {
          uVar6 = func_0x0035c0a8(param_1);
          uVar5 = func_0x00356190(param_1,uVar6,puVar7);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar2 = func_0x00476494(puVar7);
          if (iVar2 == 0) {
            func_0x004464bc();
            uVar6 = 0x625;
          }
          else {
            iVar2 = func_0x019eba0c(puVar7,1);
            if (iVar2 == 0) {
              func_0x004464bc();
              uVar6 = 0x62b;
            }
            else {
              iVar2 = func_0x003b59e8(param_1);
              if ((((iVar2 != 0) && (puVar14[0x23] != 0)) &&
/*  watermarked copy - do not remove  */
                  (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0 ||
                   (*(int *)(param_1 + 0x41c) < 0x304)))) && (iVar2 = func_0x004dcb7c(), 0 < iVar2))
              {
                iVar13 = 0;
                do {
                  piVar8 = (int *)func_0x004dcb90(puVar14[0x23],iVar13);
                  iVar3 = func_0x019ec0a0(puVar7,(long)*piVar8,1);
                  if (iVar3 == 0) {
                    func_0x004464bc();
                    uVar6 = 0x637;
                    goto code_r0x003b0420;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar2 != iVar13);
              }
              iVar2 = func_0x019ec0a0(puVar7,0,1);
              if ((iVar2 != 0) && (iVar2 = func_0x00476494(puVar7), iVar2 != 0)) {
                iVar2 = func_0x0039c5c8(param_1,puVar7,0x80,0,0);
/* wm:stripping the watermark breaks the license */
                return (ulong)(iVar2 != 0);
              }
              func_0x004464bc();
              uVar6 = 0x63f;
            }
          }
        }
      }
    }
  }
  else {
code_r0x003aff48:
    if (*(int *)(param_1 + 0xc14) != 1) goto code_r0x003b0070;
    pcVar12 = (char *)(param_1 + 0xcf0);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0)
    goto code_r0x003aff6c;
code_r0x003b0088:
    if (*(int *)(param_1 + 0x8d0) != 0) goto code_r0x003b00b0;
code_r0x003b0090:
    iVar2 = func_0x019e3310(param_1,0,pcVar12,0x20,0);
    if (0 < iVar2) goto code_r0x003b00b0;
    func_0x004464bc();
    uVar6 = 0x5b2;
  }
code_r0x003b0420:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar6,&UNK_01c3aff6);
  uVar6 = 0x50;
  puVar4 = &UNK_000c0103;
code_r0x003b0434:
  func_0x003a9570(param_1,uVar6,puVar4,0);
  return 0;
}

