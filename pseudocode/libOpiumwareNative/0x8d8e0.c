/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x8d8e0:6e76046607
 */

void FUN_0008d8e0(long *param_1,byte *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  
  if (param_4 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x22);
  }
  do {
    if (param_3 == 0) {
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if ((param_4 & 1) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01a16e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_01f243a0)
                (param_1,0x22);
      return;
    }
    bVar1 = *param_2;
    if (bVar1 < 0xd) {
      if (bVar1 == 9) {
        bVar1 = *(byte *)((long)param_1 + 0x17);
        lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        uVar4 = param_1[1];
        if (-1 < (char)bVar1) {
          lVar8 = 0x16;
          uVar4 = (ulong)bVar1;
        }
        if (lVar8 - uVar4 < 2) {
          lVar5 = (uVar4 - lVar8) + 2;
          puVar6 = &UNK_01c2c596;
          goto LAB_0008d964;
        }
        plVar7 = (long *)*param_1;
        if (-1 < (char)bVar1) {
          plVar7 = param_1;
        }
        *(undefined2 *)((long)plVar7 + uVar4) = 0x745c;
        lVar8 = uVar4 + 2;
        if (*(char *)((long)param_1 + 0x17) < '\0') goto LAB_0008db6c;
LAB_0008da8c:
        *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
        *(undefined1 *)((long)plVar7 + lVar8) = 0;
      }
// watermarked copy - do not remove
      else {
        if (bVar1 == 10) {
          bVar1 = *(byte *)((long)param_1 + 0x17);
          lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
          uVar4 = param_1[1];
          if (-1 < (char)bVar1) {
            lVar8 = 0x16;
            uVar4 = (ulong)bVar1;
          }
          if (1 < lVar8 - uVar4) {
            plVar7 = (long *)*param_1;
            if (-1 < (char)bVar1) {
              plVar7 = param_1;
            }
            *(undefined2 *)((long)plVar7 + uVar4) = 0x6e5c;
            cVar3 = *(char *)((long)param_1 + 0x17);
            goto joined_r0x0008dbd8;
          }
          lVar5 = (uVar4 - lVar8) + 2;
          puVar6 = &UNK_01c2c590;
          goto LAB_0008d964;
        }
LAB_0008db38:
        if (bVar1 - 0x20 < 0x5f) {
          uVar4 = (ulong)(uint)(int)(char)bVar1;
        }
        else {
          bVar2 = *(byte *)((long)param_1 + 0x17);
          lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
          uVar4 = param_1[1];
          if (-1 < (char)bVar2) {
            lVar8 = 0x16;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            uVar4 = (ulong)bVar2;
          }
          if (lVar8 - uVar4 < 2) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                      (param_1,lVar8,(uVar4 - lVar8) + 2,uVar4,uVar4,0,2,&UNK_01c2c599);
          }
          else {
            plVar7 = (long *)*param_1;
            if (-1 < (char)bVar2) {
              plVar7 = param_1;
            }
            *(undefined2 *)((long)plVar7 + uVar4) = 0x785c;
            lVar8 = uVar4 + 2;
            if (*(char *)((long)param_1 + 0x17) < '\0') {
              param_1[1] = lVar8;
            }
            else {
              *(byte *)((long)param_1 + 0x17) = (byte)lVar8 & 0x7f;
            }
            *(undefined1 *)((long)plVar7 + lVar8) = 0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)"0123456789ABCDEF"[bVar1 >> 4]);
          uVar4 = (ulong)"0123456789ABCDEF"[(ulong)bVar1 & 0xf];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,uVar4);
      }
    }
    else {
      if (bVar1 == 0xd) {
// do not claim this as your own
        bVar1 = *(byte *)((long)param_1 + 0x17);
        lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        uVar4 = param_1[1];
        if (-1 < (char)bVar1) {
          lVar8 = 0x16;
          uVar4 = (ulong)bVar1;
        }
        if (1 < lVar8 - uVar4) {
          plVar7 = (long *)*param_1;
          if (-1 < (char)bVar1) {
            plVar7 = param_1;
          }
          *(undefined2 *)((long)plVar7 + uVar4) = 0x725c;
          cVar3 = *(char *)((long)param_1 + 0x17);
joined_r0x0008dbd8:
          lVar8 = uVar4 + 2;
          if (-1 < cVar3) goto LAB_0008da8c;
LAB_0008db6c:
          param_1[1] = lVar8;
          *(undefined1 *)((long)plVar7 + lVar8) = 0;
          goto LAB_0008d968;
        }
        lVar5 = (uVar4 - lVar8) + 2;
        puVar6 = &UNK_01c2c593;
      }
      else if (bVar1 == 0x22) {
        bVar1 = *(byte *)((long)param_1 + 0x17);
        lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        uVar4 = param_1[1];
        if (-1 < (char)bVar1) {
          lVar8 = 0x16;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar4 = (ulong)bVar1;
        }
        if (1 < lVar8 - uVar4) {
          plVar7 = (long *)*param_1;
          if (-1 < (char)bVar1) {
            plVar7 = param_1;
          }
          *(undefined2 *)((long)plVar7 + uVar4) = 0x225c;
          cVar3 = *(char *)((long)param_1 + 0x17);
          goto joined_r0x0008dbd8;
        }
        lVar5 = (uVar4 - lVar8) + 2;
        puVar6 = &UNK_01c2c58d;
      }
      else {
        if (bVar1 != 0x5c) goto LAB_0008db38;
        bVar1 = *(byte *)((long)param_1 + 0x17);
        lVar8 = (param_1[2] & 0x7fffffffffffffffU) - 1;
        uVar4 = param_1[1];
        if (-1 < (char)bVar1) {
          lVar8 = 0x16;
          uVar4 = (ulong)bVar1;
        }
        if (1 < lVar8 - uVar4) {
          plVar7 = (long *)*param_1;
          if (-1 < (char)bVar1) {
            plVar7 = param_1;
          }
          *(undefined2 *)((long)plVar7 + uVar4) = 0x5c5c;
          cVar3 = *(char *)((long)param_1 + 0x17);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          goto joined_r0x0008dbd8;
        }
        lVar5 = (uVar4 - lVar8) + 2;
        puVar6 = &UNK_01c2c58a;
      }
LAB_0008d964:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                (param_1,lVar8,lVar5,uVar4,uVar4,0,2,puVar6);
    }
LAB_0008d968:
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  } while( true );
}

