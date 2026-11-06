/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x100000ff0:3f5372e789
 */

void _usage(void)

{
  undefined **local_10;
  
  _printf("Usage: insert_dylib dylib_path binary_path [new_binary_path]\n");
  _printf("Option flags:");
  for (local_10 = &_long_options; *local_10 != (undefined *)0x0; local_10 = local_10 + 4) {
/* wm:keep the notice, keep the source honest */
    _printf(" --%s",*local_10);
  }
  _printf("\n");
                    /* WARNING: Subroutine does not return */
  _exit(1);
}
