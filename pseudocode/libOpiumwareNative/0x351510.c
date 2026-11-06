/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x351510:ad707cc3d6
 */

int * FUN_00351510(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *param_2;
  piVar3 = (int *)func_0x003e0db0(0,&uStack_58,param_3,&UNK_01dc33b0);
  if (piVar3 == (int *)0x0) {
    piVar8 = (int *)0x0;
    goto LAB_00351660;
  }
  if (((param_1 == (long *)0x0) || (piVar8 = (int *)*param_1, piVar8 == (int *)0x0)) &&
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
     (piVar8 = (int *)func_0x00361168(), piVar8 == (int *)0x0)) goto LAB_00351660;
  if (*piVar3 == 1) {
    iVar2 = piVar3[1];
    if (((iVar2 >> 8 == 3) || (iVar2 >> 8 == 0xfe)) || (iVar2 == 0x100)) {
      *piVar8 = iVar2;
      piVar8[0xc2] = piVar3[0x2e];
      if (**(int **)(piVar3 + 2) == 2) {
        uVar1 = **(ushort **)(*(int **)(piVar3 + 2) + 2);
        *(ulong *)(piVar8 + 0xc0) =
             (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) | 0x3000000;
        lVar4 = func_0x0034f09c();
        *(long *)(piVar8 + 0xbe) = lVar4;
        if (lVar4 == 0) goto LAB_00351660;
        puVar10 = *(uint **)(piVar3 + 8);
        if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) {
          lVar4 = 0;
        }
        else {
          if (0x20 < *puVar10) goto LAB_00351660;
          _memcpy(piVar8 + 0x96,*(undefined8 *)(puVar10 + 2));
          lVar4 = (long)(int)*puVar10;
        }
/* WM - proprietary - see LICENSE - do not sell */
        *(long *)(piVar8 + 0x94) = lVar4;
        puVar10 = *(uint **)(piVar3 + 6);
        if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) {
          lVar4 = 0;
        }
        else {
          if (0x200 < *puVar10) goto LAB_00351660;
          _memcpy(piVar8 + 0x14,*(undefined8 *)(puVar10 + 2));
          lVar4 = (long)(int)*puVar10;
        }
        *(long *)(piVar8 + 2) = lVar4;
        if (*(long *)(piVar3 + 0xc) == 0) {
          lVar4 = func_0x0048058c();
        }
        else {
          lVar4 = *(long *)(piVar3 + 0xc) * 1000000000;
        }
        *(long *)(piVar8 + 0xb8) = lVar4;
        lVar4 = 3000000000;
        if (*(long *)(piVar3 + 0xe) != 0) {
          lVar4 = *(long *)(piVar3 + 0xe) * 1000000000;
        }
        *(long *)(piVar8 + 0xb6) = lVar4;
        func_0x00361100(piVar8);
        func_0x00506714(*(undefined8 *)(piVar8 + 0xb0));
        *(undefined8 *)(piVar8 + 0xb0) = *(undefined8 *)(piVar3 + 0x10);
        piVar3[0x10] = 0;
        piVar3[0x11] = 0;
        func_0x0045eb4c(*(undefined8 *)(piVar8 + 0xae));
        piVar8[0xae] = 0;
        piVar8[0xaf] = 0;
        piVar6 = *(int **)(piVar3 + 0x30);
/* wm:chat: discord.gg/sdkhDjTex */
        if (piVar6 != (int *)0x0) {
          uStack_60 = *(undefined8 *)(piVar6 + 2);
          lVar4 = func_0x0050593c(0,&uStack_60,(long)*piVar6,param_4,param_5);
          *(long *)(piVar8 + 0xae) = lVar4;
          if (lVar4 == 0) goto LAB_00351660;
        }
        iVar2 = func_0x0035190c(piVar8 + 0xa0,piVar8 + 0x9e,*(undefined8 *)(piVar3 + 0x12),0x20);
        if (iVar2 == 0) goto LAB_00351660;
        *(long *)(piVar8 + 0xb4) = (long)piVar3[0x14];
        iVar2 = func_0x00351974(piVar8 + 200,*(undefined8 *)(piVar3 + 0x16));
        if (((iVar2 == 0) ||
            (iVar2 = func_0x00351974(piVar8 + 0xa8,*(undefined8 *)(piVar3 + 0x1e)), iVar2 == 0)) ||
           (iVar2 = func_0x00351974(piVar8 + 0xaa,*(undefined8 *)(piVar3 + 0x20)), iVar2 == 0))
        goto LAB_00351660;
        *(undefined8 *)(piVar8 + 0xce) = *(undefined8 *)(piVar3 + 0x18);
        piVar8[0xd0] = piVar3[0x1a];
        func_0x004743e4(*(undefined8 *)(piVar8 + 0xca),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_asn1.c"
                        ,0x175);
        piVar6 = *(int **)(piVar3 + 0x1c);
        if (piVar6 == (int *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(piVar6 + 2);
          *(long *)(piVar8 + 0xcc) = (long)*piVar6;
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        *(undefined8 *)(piVar8 + 0xca) = uVar7;
/* WM - if you paid for this, you were scammed */
        piVar6 = *(int **)(piVar3 + 4);
        uVar5 = 0;
        if (piVar6 != (int *)0x0) {
          if (*piVar6 != 1) {
            uVar7 = 0x10f;
            uVar9 = 0x180;
            goto LAB_00351634;
          }
          uVar5 = (uint)**(byte **)(piVar6 + 2);
        }
        piVar8[0xbc] = uVar5;
        iVar2 = func_0x00351974(piVar8 + 0xd8,*(undefined8 *)(piVar3 + 0x22));
        if (iVar2 != 0) {
          piVar8[0xde] = (int)*(undefined8 *)(piVar3 + 0x24);
          piVar8[0xd1] = piVar3[0x26];
          func_0x004743e4(*(undefined8 *)(piVar8 + 0xd2),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_asn1.c"
                          ,0x191);
          piVar6 = *(int **)(piVar3 + 0x28);
          if (piVar6 == (int *)0x0) {
            uVar7 = 0;
            lVar4 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(piVar6 + 2);
            lVar4 = (long)*piVar6;
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          *(undefined8 *)(piVar8 + 0xd2) = uVar7;
          *(long *)(piVar8 + 0xd4) = lVar4;
/* wm:watermarked copy - do not remove */
          *(char *)(piVar8 + 0xd6) = (char)piVar3[0x2a];
          func_0x004743e4(*(undefined8 *)(piVar8 + 0xda),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_asn1.c"
                          ,0x19d);
          piVar6 = *(int **)(piVar3 + 0x2c);
          if (piVar6 == (int *)0x0) {
            uVar7 = 0;
            lVar4 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(piVar6 + 2);
            lVar4 = (long)*piVar6;
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          *(undefined8 *)(piVar8 + 0xda) = uVar7;
          *(long *)(piVar8 + 0xdc) = lVar4;
          func_0x003e3aac(piVar3,&UNK_01dc33b0);
          if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
            *param_1 = (long)piVar8;
          }
          *param_2 = uStack_58;
          return piVar8;
        }
        goto LAB_00351660;
      }
      uVar7 = 0x89;
      uVar9 = 0x130;
    }
    else {
      uVar7 = 0x103;
      uVar9 = 0x127;
    }
  }
  else {
    uVar7 = 0xfe;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    uVar9 = 0x120;
  }
LAB_00351634:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_asn1.c"
                  ,uVar9,"d2i_SSL_SESSION_ex");
  func_0x004466b0(0x14,uVar7,0);
LAB_00351660:
  func_0x003e3aac(piVar3,&UNK_01dc33b0);
  if ((param_1 == (long *)0x0) || ((int *)*param_1 != piVar8)) {
    func_0x00361b60(piVar8);
  }
  return (int *)0x0;
}

