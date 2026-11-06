/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x100002410:aef8c24a71
 */

__uint32_t __OSSwapInt32(__uint32_t _data)

{
  return _data >> 0x18 | (_data & 0xff0000) >> 8 | (_data & 0xff00) << 8 | _data << 0x18;
/* stripping the watermark breaks the license - github.com/pengussy */
}
