/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x871b4:a2e9335cbb
   =========================================================================== */

void FUN_000871b4(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  long alStack_160 [4];
  ulong uStack_140;
  undefined8 uStack_130;
  char cStack_119;
  ulong uStack_118;
  uint uStack_110;
  undefined *apuStack_108 [4];
  int aiStack_e8 [30];
  undefined1 auStack_70 [16];
  
  func_0x0008743c(&puStack_178);
  puVar3 = PTR___ZNSt3__15ctypeIcE2idE_01f204b0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(uint *)(auStack_168 + *(long *)(puStack_178 + -0x18) + -8) =
         *(uint *)(auStack_168 + *(long *)(puStack_178 + -0x18) + -8) | 0x4000;
    *(uint *)(auStack_168 + *(long *)(puStack_178 + -0x18) + -8) =
         *(uint *)(auStack_168 + *(long *)(puStack_178 + -0x18) + -8) & 0xffffffb5 | 8;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    *(undefined8 *)((long)alStack_160 + *(long *)(puStack_178 + -0x18)) = 2;
    lVar7 = *(long *)(puStack_178 + -0x18);
    if (*(int *)((long)aiStack_e8 + lVar7) == -1) {
      __ZNKSt3__18ios_base6getlocEv(auStack_70,auStack_168 + lVar7 + -0x10);
      plVar5 = (long *)__ZNKSt3__16locale9use_facetERNS0_2idE(auStack_70,puVar3);
      (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      __ZNSt3__16localeD1Ev(auStack_70);
    }
    *(undefined4 *)((long)aiStack_e8 + lVar7) = 0x30;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(&puStack_178,*param_2);
    param_2 = param_2 + 1;
  }
  puVar6 = param_1;
  if ((uStack_110 >> 4 & 1) == 0) {
    if ((uStack_110 >> 3 & 1) == 0) {
      lVar7 = 0;
      uVar8 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      goto LAB_00087338;
    }
    uVar8 = alStack_160[2] - alStack_160[0];
    lVar7 = alStack_160[0];
  }
  else {
    if (uStack_118 < uStack_140) {
      uStack_118 = uStack_140;
    }
    uVar8 = uStack_118 - alStack_160[3];
    lVar7 = alStack_160[3];
  }
  if (0x7ffffffffffffff6 < uVar8) {
    FUN_0000aa50();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x873f8);
/* WM - donate: donate/README.md */
    (*pcVar4)();
  }
  if (uVar8 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar8;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    puVar6 = (undefined8 *)__Znwm(uVar2);
    *param_1 = puVar6;
    param_1[1] = uVar8;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
LAB_00087338:
  _memmove(puVar6,lVar7,uVar8);
  *(undefined1 *)((long)puVar6 + uVar8) = 0;
  apuStack_108[0] = &UNK_01dbf0f0;
  puStack_178 = &UNK_01dbf0c8;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  puStack_170 = &UNK_01dbef48;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  puStack_170 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&puStack_178,&UNK_01dbf108);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_108);
  return;
}

