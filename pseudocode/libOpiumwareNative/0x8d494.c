/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x8d494:a625de070e
 */

/* WARNING: Possible PIC construction at 0x0008d70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0008d660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0008d5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0008d664) */
/* WARNING: Removing unreachable block (ram,0x0008d710) */
/* WARNING: Removing unreachable block (ram,0x0008d5dc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0008d494(long param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  bool bVar9;
  undefined *puVar10;
  ulong *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x19;
  undefined8 unaff_x20;
/* watermarked copy - do not remove - github.com/pengussy */
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_e0 [128];
  
  puVar1 = auStack_e0 + 0xd0;
  if ((((param_1 == 0) || ((int)param_3 < 0)) || (*(int *)(param_1 + 0xb0) <= (int)param_3)) ||
     (*(long *)(param_1 + 0x80) == 0)) {
    func_0x0199545c(param_2,"<invalid constant K%d>");
    return;
  }
  puVar11 = (ulong *)(*(long *)(param_1 + 0x80) + (ulong)param_3 * 0x10);
  switch(*(int *)((long)puVar11 + 0xc)) {
  case 0:
    pcVar7 = "nil";
    break;
  case 1:
    pcVar7 = "false";
    if ((int)*puVar11 != 0) {
      pcVar7 = "true";
    }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    break;
  case 2:
    pcVar7 = "lightuserdata";
    break;
  case 3:
    pcVar7 = "%f";
    unaff_x30 = 0x8d5dc;
    register0x00000008 = (BADSPACEBASE *)(auStack_e0 + 0xa0);
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
    break;
  case 4:
    func_0x0199545c(param_2,"%lld");
    return;
  case 5:
    pcVar7 = "vector(%f, %f, %f)";
    unaff_x30 = 0x8d664;
/*  no support for modified copies  */
    register0x00000008 = (BADSPACEBASE *)(auStack_e0 + 0xa0);
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
    break;
  case 6:
    uVar16 = *puVar11;
    uVar5 = *(uint *)(uVar16 + 0x14);
    bVar9 = true;
LAB_0008d8e0:
    pbVar6 = (byte *)(uVar16 + 0x18);
    uVar16 = (ulong)uVar5;
    if (bVar9) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,0x22);
    }
    do {
      if (uVar16 == 0) {
        if (!bVar9) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x01a16e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_01f243a0)
                  (param_2,0x22);
        return;
      }
      bVar2 = *pbVar6;
      if (bVar2 < 0xd) {
        if (bVar2 == 9) {
          bVar2 = *(byte *)((long)param_2 + 0x17);
          lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
          uVar14 = param_2[1];
          if (-1 < (char)bVar2) {
            lVar12 = 0x16;
            uVar14 = (ulong)bVar2;
          }
          if (lVar12 - uVar14 < 2) {
            lVar8 = (uVar14 - lVar12) + 2;
/* stripping the watermark breaks the license - github.com/pengussy */
            puVar10 = &UNK_01c2c596;
            goto code_r0x0008d964;
          }
          plVar13 = (long *)*param_2;
          if (-1 < (char)bVar2) {
            plVar13 = param_2;
          }
          *(undefined2 *)((long)plVar13 + uVar14) = 0x745c;
          lVar12 = uVar14 + 2;
          if (*(char *)((long)param_2 + 0x17) < '\0') goto code_r0x0008db6c;
code_r0x0008da8c:
          *(byte *)((long)param_2 + 0x17) = (byte)lVar12 & 0x7f;
          *(undefined1 *)((long)plVar13 + lVar12) = 0;
        }
        else {
          if (bVar2 == 10) {
            bVar2 = *(byte *)((long)param_2 + 0x17);
            lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
            uVar14 = param_2[1];
            if (-1 < (char)bVar2) {
              lVar12 = 0x16;
              uVar14 = (ulong)bVar2;
            }
            if (1 < lVar12 - uVar14) {
              plVar13 = (long *)*param_2;
              if (-1 < (char)bVar2) {
                plVar13 = param_2;
              }
              *(undefined2 *)((long)plVar13 + uVar14) = 0x6e5c;
              cVar4 = *(char *)((long)param_2 + 0x17);
              goto joined_r0x0008dbd8;
            }
            lVar8 = (uVar14 - lVar12) + 2;
            puVar10 = &UNK_01c2c590;
            goto code_r0x0008d964;
          }
code_r0x0008db38:
// WM - reversing this took months of machine time
          if (bVar2 - 0x20 < 0x5f) {
            uVar14 = (ulong)(uint)(int)(char)bVar2;
          }
          else {
            bVar3 = *(byte *)((long)param_2 + 0x17);
            lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
            uVar14 = param_2[1];
            if (-1 < (char)bVar3) {
              lVar12 = 0x16;
              uVar14 = (ulong)bVar3;
            }
            if (lVar12 - uVar14 < 2) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                        (param_2,lVar12,(uVar14 - lVar12) + 2,uVar14,uVar14,0,2,&UNK_01c2c599);
            }
            else {
              plVar13 = (long *)*param_2;
              if (-1 < (char)bVar3) {
                plVar13 = param_2;
              }
              *(undefined2 *)((long)plVar13 + uVar14) = 0x785c;
              lVar12 = uVar14 + 2;
              if (*(char *)((long)param_2 + 0x17) < '\0') {
                param_2[1] = lVar12;
              }
/* wm:proprietary - see LICENSE - do not sell */
              else {
                *(byte *)((long)param_2 + 0x17) = (byte)lVar12 & 0x7f;
              }
              *(undefined1 *)((long)plVar13 + lVar12) = 0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)(char)(&UNK_01c2c579)[bVar2 >> 4]);
            uVar14 = (ulong)(char)(&UNK_01c2c579)[(ulong)bVar2 & 0xf];
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2,uVar14);
        }
      }
      else {
        if (bVar2 == 0xd) {
          bVar2 = *(byte *)((long)param_2 + 0x17);
          lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
          uVar14 = param_2[1];
          if (-1 < (char)bVar2) {
            lVar12 = 0x16;
            uVar14 = (ulong)bVar2;
          }
          if (1 < lVar12 - uVar14) {
            plVar13 = (long *)*param_2;
            if (-1 < (char)bVar2) {
              plVar13 = param_2;
            }
            *(undefined2 *)((long)plVar13 + uVar14) = 0x725c;
            cVar4 = *(char *)((long)param_2 + 0x17);
joined_r0x0008dbd8:
            lVar12 = uVar14 + 2;
            if (-1 < cVar4) goto code_r0x0008da8c;
code_r0x0008db6c:
            param_2[1] = lVar12;
            *(undefined1 *)((long)plVar13 + lVar12) = 0;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            goto code_r0x0008d968;
          }
          lVar8 = (uVar14 - lVar12) + 2;
          puVar10 = &UNK_01c2c593;
        }
        else if (bVar2 == 0x22) {
          bVar2 = *(byte *)((long)param_2 + 0x17);
          lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
          uVar14 = param_2[1];
          if (-1 < (char)bVar2) {
            lVar12 = 0x16;
            uVar14 = (ulong)bVar2;
          }
          if (1 < lVar12 - uVar14) {
            plVar13 = (long *)*param_2;
            if (-1 < (char)bVar2) {
              plVar13 = param_2;
            }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            *(undefined2 *)((long)plVar13 + uVar14) = 0x225c;
            cVar4 = *(char *)((long)param_2 + 0x17);
            goto joined_r0x0008dbd8;
          }
          lVar8 = (uVar14 - lVar12) + 2;
          puVar10 = &UNK_01c2c58d;
        }
        else {
          if (bVar2 != 0x5c) goto code_r0x0008db38;
          bVar2 = *(byte *)((long)param_2 + 0x17);
          lVar12 = (param_2[2] & 0x7fffffffffffffffU) - 1;
          uVar14 = param_2[1];
          if (-1 < (char)bVar2) {
            lVar12 = 0x16;
            uVar14 = (ulong)bVar2;
          }
          if (1 < lVar12 - uVar14) {
            plVar13 = (long *)*param_2;
            if (-1 < (char)bVar2) {
              plVar13 = param_2;
            }
            *(undefined2 *)((long)plVar13 + uVar14) = 0x5c5c;
            cVar4 = *(char *)((long)param_2 + 0x17);
            goto joined_r0x0008dbd8;
          }
          lVar8 = (uVar14 - lVar12) + 2;
          puVar10 = &UNK_01c2c58a;
        }
code_r0x0008d964:
/*  proprietary - see LICENSE - do not sell  */
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                  (param_2,lVar12,lVar8,uVar14,uVar14,0,2,puVar10);
      }
code_r0x0008d968:
      uVar16 = uVar16 - 1;
      pbVar6 = pbVar6 + 1;
    } while( true );
  case 7:
    pcVar7 = "table";
    break;
  case 8:
    uVar16 = *puVar11;
    if (*(char *)(uVar16 + 3) == '\0') {
      puVar11 = (ulong *)(*(long *)(uVar16 + 0x18) + 0x20);
      if ((ulong *)*puVar11 != puVar11) {
        uVar16 = *puVar11 ^ (ulong)puVar11;
        uVar5 = *(uint *)(uVar16 + 0x14);
        bVar9 = false;
        goto LAB_0008d8e0;
      }
    }
    else if (*(long *)(uVar16 + 0x28) != 0) {
      lVar12 = *(long *)(uVar16 + 0x28) + 0x18;
      goto __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc;
    }
    pbVar6 = (byte *)(*pcRam0000000002065610)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019bef04();
    }
    pcVar7 = (char *)(*pcRam00000000020655f8)();
    if (*pcVar7 == '\x01') {
      lVar12 = 0;
      uVar16 = 0x1d3a5272c528d05a;
      do {
        uVar14 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
/* stripping the watermark breaks the license */
        uVar5 = (uint)(byte)pcVar7[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar5 = (uVar5 >> 6 & 3 | uVar5 << 2) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
        pcVar7[lVar12 + 0x12] = ((byte)(uVar5 >> 7) & 1 | (char)uVar5 * '\x02') ^ (byte)uVar15;
        uVar16 = lVar12 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x11);
      *pcVar7 = '\0';
    }
    lVar12 = func_0x0011ab24(auStack_e0 + 0xb8);
__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc:
                    /* WARNING: Could not recover jumptable at 0x01a16da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc_01f24338)
              (param_2,lVar12);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    return;
  case 9:
    pcVar7 = "userdata";
    break;
  case 10:
    pcVar7 = "thread";
    break;
  case 0xb:
    pcVar7 = "buffer";
    break;
  case 0xc:
    pcVar7 = "class";
    break;
  case 0xd:
    pcVar7 = "object";
    break;
  default:
    pcVar7 = "unk type: %i\n";
    unaff_x30 = 0x8d710;
    register0x00000008 = (BADSPACEBASE *)(auStack_e0 + 0xa0);
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x48) = register0x00000008;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x40) = register0x00000008;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x38) = register0x00000008;
  uVar5 = _vsnprintf(0,0,pcVar7,register0x00000008);
/* wm:keep the notice, keep the source honest */
  if ((int)uVar5 < 1) {
    return;
  }
  uVar16 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar16 < 0) {
    uVar16 = param_2[1];
    uVar14 = uVar16 + uVar5;
    if (uVar14 <= uVar16) {
      param_2[1] = uVar14;
      *(undefined1 *)(*param_2 + uVar14) = 0;
      goto code_r0x019954d4;
    }
  }
  else {
    uVar14 = uVar16 + uVar5;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
            (param_2,uVar14 - uVar16,0);
code_r0x019954d4:
  plVar13 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar13 = param_2;
  }
  _vsnprintf((long)plVar13 + uVar16,uVar5 + 1,pcVar7,
             *(undefined8 *)((long)register0x00000008 + -0x38));
  return;
}

