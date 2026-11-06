/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3dcb28:bb95fceb4b
 */

undefined8 FUN_003dcb28(char *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_2) {
    uVar1 = 0;
    pcVar5 = param_1;
    do {
      pcVar8 = pcVar5 + 1;
      if (*pcVar5 == ':') {
        iVar3 = ~uVar1 + param_2;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        param_2 = uVar1;
        goto joined_r0x003dcc70;
      }
      uVar1 = uVar1 + 1;
      pcVar5 = pcVar8;
    } while (param_2 != uVar1);
  }
  iVar3 = 0;
  pcVar8 = (char *)0x0;
joined_r0x003dcc70:
  uVar1 = param_2;
  if (param_2 == 0xffffffff) {
    uVar1 = _strlen(param_1);
  }
  puVar9 = (uint *)&UNK_01dc85e4;
  iVar10 = 0x31;
  while ((uVar1 != puVar9[-1] ||
         (iVar2 = func_0x0047630c(*(undefined8 *)(puVar9 + -3),param_1,(long)(int)uVar1), iVar2 != 0
         ))) {
    puVar9 = puVar9 + 4;
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) {
LAB_003dcc00:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,0x113,"asn1_cb");
      pcVar5 = "tag=%s";
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      uVar4 = 0xc2;
LAB_003dcc30:
      func_0x004466b0(0xd,uVar4,pcVar5);
      return 0xffffffff;
    }
  }
  uVar1 = *puVar9;
  if (uVar1 != 0xffffffff) {
    if ((uVar1 >> 0x10 & 1) == 0) {
      param_3[2] = uVar1;
      *(char **)(param_3 + 4) = pcVar8;
      if ((pcVar8 != (char *)0x0) || (param_1[(int)param_2] == '\0')) {
        return 0;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,0x11d,"asn1_cb");
      uVar4 = 0xbd;
    }
    else if ((int)uVar1 < 0x10005) {
      if (uVar1 != 0x10001) {
        if (uVar1 == 0x10002) {
          iVar3 = func_0x003dd000(pcVar8,iVar3,&uStack_54,&uStack_58);
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          iVar3 = func_0x003dd140(param_3,uStack_54,uStack_58,1,0,0);
joined_r0x003dcf28:
          if (iVar3 == 0) {
            return 0xffffffff;
          }
          return 1;
        }
        if (uVar1 != 0x10004) {
          return 1;
        }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar10 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar6 = param_3 + (long)iVar3 * 6 + 6;
          if (iVar10 == -1) {
            iVar3 = 0;
            iVar10 = 3;
          }
          else {
            iVar3 = param_3[1];
            param_3[0] = -1;
            param_3[1] = -1;
          }
          iVar2 = 0;
          *piVar6 = iVar10;
          iVar10 = 1;
          goto LAB_003dcfdc;
        }
        goto LAB_003dce84;
      }
/* wm:origin: github.com/pengussy */
      if (*param_3 == -1) {
        iVar3 = func_0x003dd000(pcVar8,iVar3,param_3,param_3 + 1);
        goto joined_r0x003dcf28;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,0x128,"asn1_cb");
      uVar4 = 0xb5;
    }
    else if ((int)uVar1 < 0x10007) {
      if (uVar1 == 0x10005) {
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar7 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar6 = param_3 + (long)iVar3 * 6 + 6;
          if (iVar7 == -1) {
            iVar3 = 0;
            iVar7 = 4;
          }
          else {
            iVar3 = param_3[1];
            param_3[0] = -1;
            param_3[1] = -1;
          }
          iVar2 = 0;
          iVar10 = 0;
          *piVar6 = iVar7;
          goto LAB_003dcfdc;
        }
/* WM - found on a paste site? it was re-uploaded illegally */
      }
      else {
        if (uVar1 != 0x10006) {
          return 1;
        }
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar2 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar6 = param_3 + (long)iVar3 * 6 + 6;
          if (iVar2 == -1) {
            iVar3 = 0;
            iVar2 = 0x10;
          }
          else {
LAB_003dcf04:
            iVar3 = param_3[1];
            param_3[0] = -1;
            param_3[1] = -1;
          }
LAB_003dcfb8:
          iVar10 = 0;
          *piVar6 = iVar2;
          iVar2 = 1;
LAB_003dcfdc:
          piVar6[1] = iVar3;
          piVar6[2] = iVar2;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          param_3 = piVar6;
LAB_003dcfe4:
          param_3[3] = iVar10;
          return 1;
        }
      }
LAB_003dce84:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,0x1dd,"append_exp");
      uVar4 = 0xae;
    }
    else {
      if (uVar1 == 0x10007) {
        iVar3 = param_3[0x7e];
        if (iVar3 != 0x14) {
          iVar2 = *param_3;
          param_3[0x7e] = iVar3 + 1;
          piVar6 = param_3 + (long)iVar3 * 6 + 6;
// WM - watermarked copy - do not remove
          if (iVar2 != -1) goto LAB_003dcf04;
          iVar3 = 0;
          iVar2 = 0x11;
          goto LAB_003dcfb8;
        }
        goto LAB_003dce84;
      }
      if (uVar1 != 0x10008) {
        return 1;
      }
      if (pcVar8 == (char *)0x0) {
        func_0x004464bc();
        uVar4 = 0x14d;
      }
      else {
        iVar3 = _strncmp(pcVar8,"ASCII",5);
        if (iVar3 == 0) {
          iVar10 = 1;
          goto LAB_003dcfe4;
        }
        iVar3 = _strncmp(pcVar8,"UTF8",4);
        if (iVar3 == 0) {
          iVar10 = 2;
          goto LAB_003dcfe4;
        }
        if (((*pcVar8 == 'H') && (pcVar8[1] == 'E')) && (pcVar8[2] == 'X')) {
          iVar10 = 3;
          goto LAB_003dcfe4;
        }
        iVar3 = _strncmp(pcVar8,"BITLIST",7);
        if (iVar3 == 0) {
          iVar10 = 4;
          goto LAB_003dcfe4;
        }
// WM - donate: donate/README.md
        func_0x004464bc();
        uVar4 = 0x159;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,uVar4,"asn1_cb");
      uVar4 = 0xa0;
    }
    pcVar5 = (char *)0x0;
    goto LAB_003dcc30;
  }
  goto LAB_003dcc00;
}

