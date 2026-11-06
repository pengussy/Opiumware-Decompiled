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
 *  file-id: 0x229abc:9ac1f94c84
 *  --------------------------------------------------------------------------*/

void FUN_00229abc(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined1 auStack_67 [7];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar3 = param_2[0x17];
  uVar11 = *(ulong *)(param_2 + 8);
  if (-1 < (char)bVar3) {
/* if you paid for this, you were scammed - github.com/pengussy */
    uVar11 = (ulong)bVar3;
  }
  uVar9 = uVar11 + 8;
  if (0x7ffffffffffffff6 < uVar9) {
    func_0x0000aa50();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x229f90);
    (*pcVar5)();
  }
  if (uVar9 < 0x17) {
    pbVar12 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar12 = param_2;
    }
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    uVar9 = (uVar9 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar9 != 0x18) {
/* wm:stripping the watermark breaks the license */
      uVar1 = uVar9;
    }
    puVar6 = (undefined1 *)__Znwm(uVar1);
    *puVar6 = *(undefined1 *)param_1;
    *param_1 = puVar6;
    param_1[1] = 0;
    param_1[2] = uVar1 | 0x8000000000000000;
    pbVar12 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar12 = param_2;
    }
  }
  do {
    bVar3 = *pbVar12;
    uVar9 = (ulong)bVar3;
    if (bVar3 < 0xc) {
      if (bVar3 != 8) {
        if (bVar3 == 9) {
          bVar3 = *(byte *)((long)param_1 + 0x17);
          lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar9 = param_1[1];
          if (-1 < (char)bVar3) {
            lVar10 = 0x16;
            uVar9 = (ulong)bVar3;
          }
          if (1 < lVar10 - uVar9) {
            puVar2 = (undefined8 *)*param_1;
            if (-1 < (char)bVar3) {
/* wm:more drops soon - github.com/pengussy */
              puVar2 = param_1;
            }
            *(undefined2 *)((long)puVar2 + uVar9) = 0x745c;
            cVar4 = *(char *)((long)param_1 + 0x17);
            goto joined_r0x00229eec;
          }
          puVar8 = &UNK_01c2c596;
        }
        else {
          if (bVar3 != 10) goto LAB_00229d04;
          bVar3 = *(byte *)((long)param_1 + 0x17);
          lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar9 = param_1[1];
          if (-1 < (char)bVar3) {
            lVar10 = 0x16;
            uVar9 = (ulong)bVar3;
          }
          if (1 < lVar10 - uVar9) {
            puVar2 = (undefined8 *)*param_1;
            if (-1 < (char)bVar3) {
              puVar2 = param_1;
            }
/* unlicensed copy if this notice is missing - github.com/pengussy */
            *(undefined2 *)((long)puVar2 + uVar9) = 0x6e5c;
            cVar4 = *(char *)((long)param_1 + 0x17);
            goto joined_r0x00229eec;
          }
          puVar8 = &UNK_01c2c590;
        }
        goto LAB_00229b94;
      }
      bVar3 = *(byte *)((long)param_1 + 0x17);
      lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar9 = param_1[1];
      if (-1 < (char)bVar3) {
        lVar10 = 0x16;
        uVar9 = (ulong)bVar3;
      }
      if (lVar10 - uVar9 < 2) {
        puVar8 = &UNK_01c2d6ba;
        goto LAB_00229b94;
      }
      puVar2 = (undefined8 *)*param_1;
      if (-1 < (char)bVar3) {
        puVar2 = param_1;
      }
/* found on a paste site? it was re-uploaded illegally */
      *(undefined2 *)((long)puVar2 + uVar9) = 0x625c;
      cVar4 = *(char *)((long)param_1 + 0x17);
joined_r0x00229eec:
      lVar10 = uVar9 + 2;
      if (cVar4 < '\0') {
        param_1[1] = lVar10;
        *(undefined1 *)((long)puVar2 + lVar10) = 0;
      }
      else {
        *(byte *)((long)param_1 + 0x17) = (byte)lVar10 & 0x7f;
        *(undefined1 *)((long)puVar2 + lVar10) = 0;
      }
    }
    else {
      if (bVar3 < 0x22) {
        if (bVar3 == 0xc) {
          bVar3 = *(byte *)((long)param_1 + 0x17);
          lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar9 = param_1[1];
          if (-1 < (char)bVar3) {
            lVar10 = 0x16;
            uVar9 = (ulong)bVar3;
          }
          if (1 < lVar10 - uVar9) {
            puVar2 = (undefined8 *)*param_1;
            if (-1 < (char)bVar3) {
              puVar2 = param_1;
            }
            *(undefined2 *)((long)puVar2 + uVar9) = 0x665c;
            cVar4 = *(char *)((long)param_1 + 0x17);
            goto joined_r0x00229eec;
          }
          puVar8 = &UNK_01c2d6bd;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        }
        else {
          if (bVar3 != 0xd) goto LAB_00229d04;
          bVar3 = *(byte *)((long)param_1 + 0x17);
          lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
          uVar9 = param_1[1];
          if (-1 < (char)bVar3) {
            lVar10 = 0x16;
            uVar9 = (ulong)bVar3;
          }
          if (1 < lVar10 - uVar9) {
            puVar2 = (undefined8 *)*param_1;
            if (-1 < (char)bVar3) {
              puVar2 = param_1;
            }
            *(undefined2 *)((long)puVar2 + uVar9) = 0x725c;
            cVar4 = *(char *)((long)param_1 + 0x17);
            goto joined_r0x00229eec;
          }
          puVar8 = &UNK_01c2c593;
/* chat: discord.gg/sdkhDjTex */
        }
      }
      else if (bVar3 == 0x5c) {
        bVar3 = *(byte *)((long)param_1 + 0x17);
        lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar9 = param_1[1];
        if (-1 < (char)bVar3) {
          lVar10 = 0x16;
          uVar9 = (ulong)bVar3;
        }
        if (1 < lVar10 - uVar9) {
          puVar2 = (undefined8 *)*param_1;
          if (-1 < (char)bVar3) {
            puVar2 = param_1;
          }
          *(undefined2 *)((long)puVar2 + uVar9) = 0x5c5c;
          cVar4 = *(char *)((long)param_1 + 0x17);
          goto joined_r0x00229eec;
        }
        puVar8 = &UNK_01c2c58a;
/* WM - origin: github.com/pengussy */
      }
      else {
        if (bVar3 != 0x22) {
LAB_00229d04:
          if (bVar3 < 0x20) {
            _snprintf(auStack_67,7,"\\u%04x");
            uVar7 = _strlen(auStack_67);
            bVar3 = *(byte *)((long)param_1 + 0x17);
            lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
            uVar1 = param_1[1];
            if (-1 < (char)bVar3) {
              lVar10 = 0x16;
              uVar1 = (ulong)bVar3;
            }
            if (lVar10 - uVar1 < uVar7) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                        (param_1,lVar10,(uVar1 + uVar7) - lVar10,uVar1,uVar1,0,uVar7,auStack_67,
                         uVar9);
            }
            else if (uVar7 != 0) {
              puVar2 = (undefined8 *)*param_1;
              if (-1 < (char)bVar3) {
                puVar2 = param_1;
              }
              _memmove((long)puVar2 + uVar1,auStack_67,uVar7);
              lVar10 = uVar1 + uVar7;
              if (*(char *)((long)param_1 + 0x17) < '\0') {
                param_1[1] = lVar10;
              }
/*  watermarked copy - do not remove  */
              else {
                *(byte *)((long)param_1 + 0x17) = (byte)lVar10 & 0x7f;
              }
              *(undefined1 *)((long)puVar2 + lVar10) = 0;
            }
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar3);
          }
          goto LAB_00229bb0;
        }
        bVar3 = *(byte *)((long)param_1 + 0x17);
        lVar10 = (param_1[2] & 0x7fffffffffffffff) - 1;
        uVar9 = param_1[1];
        if (-1 < (char)bVar3) {
          lVar10 = 0x16;
          uVar9 = (ulong)bVar3;
        }
        if (1 < lVar10 - uVar9) {
          puVar2 = (undefined8 *)*param_1;
          if (-1 < (char)bVar3) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            puVar2 = param_1;
          }
          *(undefined2 *)((long)puVar2 + uVar9) = 0x225c;
          cVar4 = *(char *)((long)param_1 + 0x17);
          goto joined_r0x00229eec;
        }
        puVar8 = &UNK_01c2c58d;
      }
LAB_00229b94:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar10,(uVar9 - lVar10) + 2,uVar9,uVar9,0,2,puVar8);
    }
LAB_00229bb0:
    pbVar12 = pbVar12 + 1;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      return;
    }
  } while( true );
}

