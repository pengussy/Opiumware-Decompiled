/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x8dcd0:e970c41557
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0008e8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0008e530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0008e620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0008e71c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0008e624) */
/* WARNING: Removing unreachable block (ram,0x0008e534) */
/* WARNING: Removing unreachable block (ram,0x0008e8e8) */
/* WARNING: Removing unreachable block (ram,0x0008e720) */

void FUN_0008dcd0(uint *param_1,long *param_2,char *param_3,undefined8 param_4,char *param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  char *pcVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  long *unaff_x19;
  char *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
/* wm:reversing this took months of machine time */
  char *pcStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48 + 0x38;
  if (0x58 < (uint)param_5) {
    pcVar7 = "<unsupported opcode %u>\n";
    uVar10 = unaff_x22;
    pcStack_70 = param_5;
    goto LAB_0008e8e0;
  }
  uVar5 = *param_1;
  uVar10 = (ulong)uVar5;
  uVar6 = (int)uVar5 >> 0x10;
  switch((uint)param_5) {
  case 0:
    pcVar7 = "NOP\n";
    goto code_r0x0199545c;
  case 1:
    pcVar7 = "BREAK\n";
    goto code_r0x0199545c;
  case 2:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "LOADNIL R%d\n";
    break;
  case 3:
    if (uVar5 >> 0x18 == 0) {
      pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
      pcStack_68 = (char *)(ulong)(uVar5 >> 0x10);
      pcVar7 = "LOADB R%d %d\n";
    }
    else {
      pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
      pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
      pcVar7 = "LOADB R%d %d +%d\n";
      pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    }
/* wm:no support for modified copies */
    break;
  case 4:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)uVar6;
    pcVar7 = "LOADN R%d %d\n";
    break;
  case 5:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    unaff_x20 = (char *)(ulong)uVar6;
    pcVar7 = "LOADK R%d K%d [";
    pcStack_68 = unaff_x20;
    goto LAB_0008e618;
  case 6:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "MOVE R%d R%d\n";
    break;
  case 7:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "GETGLOBAL R%d K%d [";
    goto LAB_0008e590;
  case 8:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "SETGLOBAL R%d K%d [";
    goto LAB_0008e590;
  case 9:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "GETUPVAL R%d %d\n";
// if you paid for this, you were scammed
    break;
  case 10:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "SETUPVAL R%d %d\n";
    break;
  case 0xb:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "CLOSEUPVALS R%d\n";
    break;
  case 0xc:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    unaff_x20 = (char *)(ulong)uVar6;
    pcVar7 = "GETIMPORT R%d %d [";
    pcStack_68 = unaff_x20;
    goto LAB_0008e618;
  case 0xd:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "GETTABLE R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0xe:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "SETTABLE R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0xf:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_60 = (char *)(ulong)param_1[1];
/* WM - do not claim this as your own */
    pcVar7 = "GETTABLEKS R%d R%d K%d [";
    goto LAB_0008e590;
  case 0x10:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_60 = (char *)(ulong)param_1[1];
    pcVar7 = "SETTABLEKS R%d R%d K%d [";
    goto LAB_0008e590;
  case 0x11:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "GETTABLEN R%d R%d %d\n";
    pcStack_60 = (char *)(ulong)((uVar5 >> 0x18) + 1);
    break;
  case 0x12:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "SETTABLEN R%d R%d %d\n";
    pcStack_60 = (char *)(ulong)((uVar5 >> 0x18) + 1);
    break;
  case 0x13:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)uVar6;
    pcVar7 = "NEWCLOSURE R%d P%d\n";
    break;
  case 0x14:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_60 = (char *)(ulong)param_1[1];
    pcVar7 = "NAMECALL R%d R%d K%d [";
/* donate: donate/README.md */
    goto LAB_0008e590;
  case 0x15:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)((uVar5 >> 0x10 & 0xff) - 1);
    pcVar7 = "CALL R%d %d %d\n";
    pcStack_60 = (char *)(ulong)((uVar5 >> 0x18) - 1);
    break;
  case 0x16:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)((uVar5 >> 0x10 & 0xff) - 1);
    pcVar7 = "RETURN R%d %d\n";
    break;
  case 0x17:
    pcVar7 = "JUMP L%d\n";
    pcStack_70 = param_3;
    break;
  case 0x18:
    pcVar7 = "JUMPBACK L%d\n";
    pcStack_70 = param_3;
    break;
  case 0x19:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
/* wm:proprietary - see LICENSE - do not sell */
    pcVar7 = "JUMPIF R%d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x1a:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "JUMPIFNOT R%d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x1b:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFEQ R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x1c:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFLE R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x1d:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFLT R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x1e:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFNOTEQ R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x1f:
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFNOTLE R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x20:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "JUMPIFNOTLT R%d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x21:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "ADD R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x22:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "SUB R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x23:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "MUL R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x24:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "DIV R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x25:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "MOD R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x26:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "POW R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x27:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "ADDK R%d R%d K%d [";
// WM - more drops soon - github.com/pengussy
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x28:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "SUBK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x29:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "MULK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x2a:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "DIVK R%d R%d K%d [";
/* WM - more drops soon - github.com/pengussy */
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x2b:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "MODK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x2c:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "POWK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x2d:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "AND R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x2e:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
// proprietary - see LICENSE - do not sell
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "OR R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x2f:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "ANDK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x30:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "ORK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
    goto LAB_0008e618;
  case 0x31:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "CONCAT R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x32:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "NOT R%d R%d\n";
    break;
  case 0x33:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "MINUS R%d R%d\n";
    break;
  case 0x34:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "LENGTH R%d R%d\n";
    break;
  case 0x35:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    uVar6 = uVar5 >> 0x10 & 0xff;
    pcStack_68 = (char *)(ulong)uVar6;
    if (uVar6 == 0) {
      pcStack_68 = (char *)(ulong)param_1[1];
      pcVar7 = "NEWTABLE R%d 0 %u\n";
    }
    else if (uVar6 < 0x21) {
      pcStack_68 = (char *)(ulong)(uint)(1 << (ulong)(uVar6 - 1 & 0x1f));
      pcVar7 = "NEWTABLE R%d %u %u\n";
/* keep the notice, keep the source honest */
      pcStack_60 = (char *)(ulong)param_1[1];
    }
    else {
      pcVar7 = "NEWTABLE R%d <invalid exponent %u> %u\n";
      pcStack_60 = (char *)(ulong)param_1[1];
    }
    break;
  case 0x36:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)uVar6;
    pcVar7 = "DUPTABLE R%d %d\n";
    break;
  case 0x37:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_58 = (char *)(ulong)param_1[1];
    pcVar7 = "SETLIST R%d R%d %d [%d]\n";
    pcStack_60 = (char *)(ulong)((uVar5 >> 0x18) - 1);
    break;
  case 0x38:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FORNPREP R%d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x39:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FORNLOOP R%d L%d\n";
    pcStack_68 = param_3;
    break;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  case 0x3a:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_58 = " [inext]";
    if (-1 < (int)param_1[1]) {
      pcStack_58 = "";
    }
    pcVar7 = "FORGLOOP R%d L%d %d%s\n";
    pcStack_68 = param_3;
    pcStack_60 = (char *)(ulong)(param_1[1] & 0xff);
    break;
  case 0x3b:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FORGPREP_INEXT R%d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x3c:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_58 = (char *)(ulong)(param_1[1] >> 8 & 0xff);
    pcVar7 = "FASTCALL3 %d R%d R%d R%d L%d\n";
    pcStack_60 = (char *)(ulong)(param_1[1] & 0xff);
    pcStack_50 = param_3;
    break;
  case 0x3d:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FORGPREP_NEXT R%d L%d\n";
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    pcStack_68 = param_3;
    break;
  case 0x3e:
    pcVar7 = "NATIVECALL\n";
    goto code_r0x0199545c;
  case 0x3f:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)((uVar5 >> 0x10 & 0xff) - 1);
    pcVar7 = "GETVARARGS R%d %d\n";
    break;
  case 0x40:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    unaff_x20 = (char *)(ulong)uVar6;
    pcVar7 = "DUPCLOSURE R%d K%d [";
    pcStack_68 = unaff_x20;
    goto LAB_0008e618;
  case 0x41:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
/* do not claim this as your own - github.com/pengussy */
    pcVar7 = "PREPVARARGS %d\n";
    break;
  case 0x42:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "LOADKX R%d K%d [";
    goto LAB_0008e590;
  case 0x43:
    pcVar7 = "JUMPX L%d\n";
    pcStack_70 = param_3;
    break;
  case 0x44:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FASTCALL %d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x45:
    pcVar7 = "COVERAGE\n";
    goto code_r0x0199545c;
  case 0x46:
    uVar6 = uVar5 >> 8 & 0xff;
    pcVar7 = "VAL";
    if ((uVar5 & 0xff00) != 0) {
/* WM - donate: donate/README.md */
      pcVar7 = "";
    }
    uVar9 = 0x55;
    if (uVar6 != 2) {
      uVar9 = 0x52;
    }
    pcVar3 = "UPVAL";
    if (uVar6 != 2) {
      pcVar3 = pcVar7;
    }
    uVar2 = 0x52;
    if (uVar6 != 1) {
      uVar2 = uVar9;
    }
    pcStack_68 = (char *)(ulong)uVar2;
    pcStack_70 = "REF";
    if (uVar6 != 1) {
/*  watermarked copy - do not remove  */
      pcStack_70 = pcVar3;
    }
    pcVar7 = "CAPTURE %s %c%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    break;
  case 0x47:
    pcVar7 = "SUBRK R%d K%d [";
    goto LAB_0008e714;
  case 0x48:
    pcVar7 = "DIVRK R%d K%d [";
LAB_0008e714:
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    unaff_x30 = 0x8e720;
    register0x00000008 = (BADSPACEBASE *)&pcStack_70;
    unaff_x19 = param_2;
    unaff_x20 = pcStack_68;
    unaff_x21 = param_4;
    unaff_x22 = uVar10;
    unaff_x29 = puVar1;
    goto code_r0x0199545c;
  case 0x49:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
/* wm:do not claim this as your own */
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "FASTCALL1 %d R%d L%d\n";
    pcStack_60 = param_3;
    break;
  case 0x4a:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "FASTCALL2 %d R%d R%d L%d\n";
    pcStack_60 = (char *)(ulong)param_1[1];
    pcStack_58 = param_3;
    break;
  case 0x4b:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcStack_60 = (char *)(ulong)param_1[1];
    pcVar7 = "FASTCALL2K %d R%d K%d L%d [";
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    pcStack_58 = param_3;
    goto LAB_0008e590;
  case 0x4c:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcVar7 = "FORGPREP R%d L%d\n";
    pcStack_68 = param_3;
    break;
  case 0x4d:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_60 = "";
    if (0x7fffffff < param_1[1]) {
      pcStack_60 = " NOT";
    }
    pcVar7 = "JUMPXEQKNIL R%d L%d%s\n";
    pcStack_68 = param_3;
    break;
  case 0x4e:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
/* stripping the watermark breaks the license - github.com/pengussy */
    pcStack_68 = (char *)(ulong)(param_1[1] & 1);
    pcStack_58 = "";
    if (0x7fffffff < param_1[1]) {
      pcStack_58 = " NOT";
    }
    pcVar7 = "JUMPXEQKB R%d %d L%d%s\n";
    pcStack_60 = param_3;
    break;
  case 0x4f:
    uVar6 = param_1[1];
    pcStack_58 = "";
    if (0x7fffffff < uVar6) {
      pcStack_58 = " NOT";
    }
    pcVar7 = "JUMPXEQKN R%d K%d L%d%s [";
    goto LAB_0008dedc;
  case 0x50:
    uVar6 = param_1[1];
    pcStack_58 = "";
    if (0x7fffffff < uVar6) {
      pcStack_58 = " NOT";
    }
    pcVar7 = "JUMPXEQKS R%d K%d L%d%s [";
LAB_0008dedc:
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    pcStack_68 = (char *)(ulong)(uVar6 & 0xffffff);
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_60 = param_3;
    func_0x0199545c(param_2,pcVar7);
    uVar6 = param_1[1] & 0xffffff;
    goto LAB_0008e5a4;
  case 0x51:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "IDIV R%d R%d R%d\n";
    pcStack_60 = (char *)(ulong)(uVar5 >> 0x18);
    break;
  case 0x52:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    unaff_x20 = (char *)(ulong)(uVar5 >> 0x18);
    pcVar7 = "IDIVK R%d R%d K%d [";
    pcStack_60 = unaff_x20;
LAB_0008e618:
    unaff_x30 = 0x8e624;
    register0x00000008 = (BADSPACEBASE *)&pcStack_70;
/*  donate: donate/README.md  */
    unaff_x19 = param_2;
    unaff_x21 = param_4;
    unaff_x22 = uVar10;
    unaff_x29 = puVar1;
    goto code_r0x0199545c;
  case 0x53:
    pcStack_60 = (char *)(ulong)(param_1[1] & 0xffff);
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "GETUDATAKS R%d R%d K%u [";
    goto LAB_0008e528;
  case 0x54:
    pcStack_60 = (char *)(ulong)(param_1[1] & 0xffff);
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "SETUDATAKS R%d R%d K%u [";
    goto LAB_0008e528;
  case 0x55:
    pcStack_60 = (char *)(ulong)(param_1[1] & 0xffff);
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x10 & 0xff);
    pcVar7 = "NAMECALLUDATA R%d R%d K%u [";
LAB_0008e528:
    unaff_x30 = 0x8e534;
    register0x00000008 = (BADSPACEBASE *)&pcStack_70;
/*  chat: discord.gg/sdkhDjTex  */
    unaff_x19 = param_2;
    unaff_x20 = pcStack_60;
    unaff_x21 = param_4;
    unaff_x22 = uVar10;
    unaff_x29 = puVar1;
    goto code_r0x0199545c;
  case 0x56:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)(uVar5 >> 0x18);
    pcStack_60 = (char *)(ulong)param_1[1];
    pcVar7 = "NEWCLASSMEMBER R%d R%d K%u [";
LAB_0008e590:
    func_0x0199545c(param_2,pcVar7);
    uVar6 = param_1[1];
LAB_0008e5a4:
    func_0x0008d494(param_4,param_2,uVar6);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                    /* WARNING: Could not recover jumptable at 0x01a16da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc_01f24338)
              (param_2,"]\n");
    return;
  case 0x57:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)((uVar5 >> 0x10 & 0xff) - 1);
    pcStack_60 = (char *)(ulong)((uVar5 >> 0x18) - 1);
    if (param_1[1] == 0xffffffff) {
      pcVar7 = "CALLFB R%d %d %d [sealed]\n";
    }
    else {
      pcVar7 = "CALLFB R%d %d %d [%u]\n";
      pcStack_58 = (char *)(ulong)param_1[1];
    }
    break;
// WM - chat: discord.gg/sdkhDjTex
  case 0x58:
    pcStack_70 = (char *)(ulong)(uVar5 >> 8 & 0xff);
    pcStack_68 = (char *)(ulong)param_1[1];
    pcVar7 = "CMPPROTO R%d #%u L%d\n";
    pcStack_60 = param_3;
  }
LAB_0008e8e0:
  unaff_x30 = 0x8e8e8;
  register0x00000008 = (BADSPACEBASE *)&pcStack_70;
  unaff_x19 = param_2;
  unaff_x22 = uVar10;
  unaff_x29 = puVar1;
code_r0x0199545c:
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x48) = register0x00000008;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x40) = register0x00000008;
  *(BADSPACEBASE **)((long)register0x00000008 + -0x38) = register0x00000008;
  uVar6 = _vsnprintf(0,0,pcVar7,register0x00000008);
  if ((int)uVar6 < 1) {
/* wm:donate: donate/README.md */
    return;
  }
  uVar10 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar10 < 0) {
    uVar10 = param_2[1];
    uVar8 = uVar10 + uVar6;
    if (uVar8 <= uVar10) {
      param_2[1] = uVar8;
      *(undefined1 *)(*param_2 + uVar8) = 0;
      goto code_r0x019954d4;
    }
  }
  else {
    uVar8 = uVar10 + uVar6;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
            (param_2,uVar8 - uVar10,0);
code_r0x019954d4:
  plVar4 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar4 = param_2;
  }
  _vsnprintf((long)plVar4 + uVar10,uVar6 + 1,pcVar7,
/* proprietary - see LICENSE - do not sell */
             *(undefined8 *)((long)register0x00000008 + -0x38));
  return;
}

