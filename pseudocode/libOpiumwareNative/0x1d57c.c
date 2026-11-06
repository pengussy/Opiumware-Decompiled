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
 *  file-id: 0x1d57c:c2bdacc04e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0001d57c(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lStack_50;
  char *pcStack_48;
  
  if (param_2 == (long *)0x0) {
    puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar7 = &UNK_01dbcdf0;
    *(undefined4 *)(puVar7 + 1) = 0x80004003;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[2] = 0;
    ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
  }
  else {
    pcStack_48 = (char *)0x0;
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&pcStack_48);
    if (iVar2 < 0) {
      puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar7 = &UNK_01dbcdf0;
      *(int *)(puVar7 + 1) = iVar2;
      puVar7[3] = 0;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      puVar7[4] = 0;
      puVar7[2] = 0;
      ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
    }
    else {
      if (pcStack_48 == (char *)0x0) {
        uVar4 = 0x80004003;
      }
      else {
        if (((*pcStack_48 != 'o') || (pcStack_48[1] != 'p')) || (pcStack_48[2] != '\0')) {
          puVar7 = *(undefined8 **)(param_1 + 0x2a8);
          if (*(undefined8 **)(param_1 + 0x2a0) != puVar7) {
            uVar4 = 0x80070057;
            puVar5 = *(undefined8 **)(param_1 + 0x2a0);
            do {
              lStack_50 = 0;
              puVar6 = puVar5 + 1;
              iVar2 = (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,&lStack_50);
              if (iVar2 < 0) {
                puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar7 = &UNK_01dbcdf0;
                *(int *)(puVar7 + 1) = iVar2;
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[2] = 0;
                ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
// thanks for reading - discord.gg/sdkhDjTex
                goto LAB_0001d7c8;
              }
              if (lStack_50 == 0) {
                uVar4 = 0x80004003;
LAB_0001d6e0:
                puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
                *puVar7 = &UNK_01dbcdf0;
                *(undefined4 *)(puVar7 + 1) = uVar4;
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[2] = 0;
                ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
                goto LAB_0001d7c8;
              }
              iVar2 = _strcmp(pcStack_48);
              if (iVar2 == 0) goto LAB_0001d6e0;
              puVar5 = puVar6;
            } while (puVar6 != puVar7);
          }
          (**(code **)(*param_2 + 8))(param_2);
          plVar3 = *(long **)(param_1 + 0x2a8);
          if (*(long **)(param_1 + 0x2b0) <= plVar3) {
            func_0x0001d8a0(param_1 + 0x2a0,0);
            plVar3 = *(long **)(param_1 + 0x2a8);
          }
          *plVar3 = (long)param_2;
          *(long *)(param_1 + 0x2a8) = *(long *)(param_1 + 0x2a8) + 8;
          return 0;
        }
        uVar4 = 0x80070057;
      }
      puVar7 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar7 = &UNK_01dbcdf0;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      puVar7[3] = 0;
/* chat: discord.gg/sdkhDjTex */
      puVar7[4] = 0;
      puVar7[2] = 0;
      ___cxa_throw(puVar7,&DAT_01dbcd58,&DAT_0000755c);
    }
  }
LAB_0001d7c8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1d7cc);
  (*pcVar1)();
}

