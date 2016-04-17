int maze_n = 7;
int maze_w = 24;
int maze_h = 24;
int maze_flags = 0;
const char *maze_args = "RHERO=14.5,17.5,14.5,14.5,1.5,21.5,11.5 CHERO=14.5,11.5,11.5,12.5,1.5,11.5,3.5 RFRUIT=14.5,17.5,14.5,14.5,1.5,21.5,11.5 CFRUIT=14.5,11.5,11.5,12.5,1.5,11.5,3.5 RGHOST=12.5,4.5,12.5,8.5,21.5,4.5,12 CGHOST=12,11.5,12,12.5,21.5,12.5,1.5 ROGHOST=2,0,2,2,-1,-1,1 COGHOST=0.5,1,1,0,1,0,0 RTOP=9.5,4.5,8.5,11.5,21.5,4.5,12.5 RMSG=23 CMSG=7 RMSG2=0 CMSG2=7 WALL_COLORS=\"\\x0F\" MORTAR_COLORS=\"\\x08\" DOT_COLORS=\"\\x0F\" PELLET_COLORS=\"\\x0E\" ABOUT=\"Inspired by PeyloW/T.O.Y.S.\'s \'Toy-Man\'\" FIXME=\"there should be 3 ghosts on the first level and one additional ghost for each level past the initial one\"";
static const char builtin_mazefile_str[] = "lvl/toyman.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\007\371\306\315\315\315\315\315\315\315\315\315\315\315\315\315\315\265\371\007\371\272\272"
  "\272\371\371\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\371\371\272\272"
  "\272\371\322\371\007\371\306\315\315\315\315\315\315\315\315\315\315\265\371\007\371\322\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\322\371\007\371\306\315\315\315\315\315\315\265\371\007\371\322\371\272\371\272\272"
  "\272\371\272\371\272\371\371\376\371\371\371\371\371\371\371\371\376\371\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\322\371\007\371\306\315\315\265\371\007\371\322\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\322\371\311\360\360\273\371\322\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\272\371\272  \272\371\272\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\272\371\272  \272\371\272\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\320\371\310\315\315\274\371\320\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\371\371\371\371\371\371 \371\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\320\371\007\371\306\315\315\265\371\007\371\320\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\371\376\371\371\371\371\371\371\371\371\376\371\371\272\371\272\371\272\272"
  "\272\371\272\371\320\371\007\371\306\315\315\315\315\315\315\265\371\007\371\320\371\272\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\007\371\306\315\315\315\315\315\315\315\315\315\315\265\371\007\371\320\371\272\272"
  "\272\371\371\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\371\371\272\272"
  "\272\371\007\371\306\315\315\315\315\315\315\315\315\315\315\315\315\315\315\265\371\007\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x1 */
  " \311\315\315\315\315\315\315\273      \311\315\315\315\315\315\315\273  "
  "\311\274\371\371\371\371\371\371\314\315\315\315\315\315\315\271\371\371\371\371\371\371\310\273\273"
  "\272\371\371\306\315\315\273\371\320\371\371\371\371\371\371\320\371\311\315\315\265\371\371\272\272"
  "\272\371\322\376\371\371\272\371\371\371\306\315\315\265\371\371\371\272\371\371\376\322\371\272\272"
  "\272\371\272\371\007\371\310\265\371\322\371\377\371\371\322\371\306\274\371\007\371\272\371\272\272"
  "\272\371\272\371\371\371\371\371\371\320\371\306\265\371\320\371\371\371\371\371\371\272\371\272\272"
  "\272\371\310\270\277\371\332\277\371\371\371\371\371\371\371\371\332\277\371\332\325\274\371\272\272"
  "\272\371\371\300\331\371\300\305\304\304\304\304\304\304\304\304\305\331\371\300\331\371\371\272\272"
  "\314\265\371\371\371\371\371\326\304\304\304\304\304\304\304\304\267\371\371\371\371\371\306\271\271"
  "\272\371\371\322\371\332\304\275\371\371\371\371\371\371\371\371\323\304\277\371\322\371\371\272\272"
  "\272\371\332\275\371\300\304\331\371\306\315\270\325\315\265\371\300\304\331\371\323\277\371\272\272"
  "\272\371\263\263\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\263\263\371\272\272"
  "\272\371\263\263\371\306\315\315\315\273\371\263\263\371\311\315\315\315\265\371\263\263\371\272\272"
  "\272\371\300\267\371\371\371\371\371\272\371\263\263\371\272\371\371\371\371\371\326\331\371\272\272"
  "\272\371\371\320\371\306\315\273\371\272\371\263\263\371\272\371\311\315\265\371\320\371\371\272\272"
  "\314\265\371\371\371\371\371\272\371\320\371\263\263\371\320\371\272\371\371\371\371\371\306\271\271"
  "\272\371\371\332\277\371\332\275\371\371\371\300\331\371\371\371\323\277\371\332\277\371\371\272\272"
  "\272\371\311\276\331\371\300\331\371\322\371 \371\371\322\371\300\331\371\300\324\273\371\272\272"
  "\272\371\272\371\371\371\371\371\371\310\315\315\315\315\274\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\007\371\332\277\371\371\371\371\371\371\371\371\332\277\371\007\371\272\371\272\272"
  "\272\371\320\376\371\371\326\331\371\306\270\304\304\325\265\371\300\267\371\371\376\320\371\272\272"
  "\272\371\371\306\315\315\274\371\371\371\300\304\304\331\371\371\371\310\315\315\265\371\371\272\272"
  "\310\273\371\371\371\371\371\371\322\371\371\371\371\371\371\322\371\371\371\371\371\371\311\274\274"
  " \310\315\315\315\315\315\315\312\315\315\315\315\315\315\312\315\315\315\315\315\315\274  "
/* 0x2 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\311\315\315\315\315\270\304\304\304\304\304\304\304\304\325\315\315\315\315\273\371\272\272"
  "\272\371\272\376\371\371\371\326\304\304\304\277\332\304\304\304\267\371\371\371\376\272\371\272\272"
  "\272\371\310\315\315\265\371\272\371\371\371\263\263\371\371\371\272\371\306\315\315\274\371\272\272"
  "\272\371\371\371\371\371\371\310\315\265\371\263\263\371\306\315\274\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\371\371\371\371\263\263\371\371\371\371\371\332\304\304\277\371\272\272"
  "\272\371\326\304\304\324\270\304\277\371\306\276\324\265\371\332\304\325\276\304\304\267\371\272\272"
  "\272\371\272\371\371\371\300\304\331\371\371\371\371\371\371\300\304\331\371\371\371\272\371\272\272"
  "\272\371\310\315\273\371\371\371\371\371\311\360\360\273\371\371\371\371\371\311\315\274\371\272\272"
  "\272\371\371\371\310\315\270\304\277\371\272  \272\371\332\304\325\315\274\371\371\371\272\272"
  "\272\371\322\371\371\371\300\304\331\371\272  \272\371\300\304\331\371\371\371\322\371\272\272"
  "\272\371\272\371\322\371\371\371\371\371\272  \272\371\371\371\371\371\322\371\272\371\272\272"
  "\272\371\272\371\323\304\325\315\315\315\312\315\315\312\315\315\315\270\304\275\371\272\371\272\272"
  "\272\371\272\371\300\304\331\371\371\371\371  \371\371\371\371\300\304\331\371\272\371\272\272"
  "\272\371\272\371\371\371\371\371\332\277\371\332\277\371\332\277\371\371\371\371\371\272\371\272\272"
  "\272\371\323\304\304\325\315\315\276\331\371\300\331\371\300\324\315\315\270\304\304\275\371\272\272"
  "\272\371\300\304\304\331\371\371\371\371\371\371\371\371\371\371\371\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\311\315\273\371\332\277\371\311\315\273\371\371\371\371\371\371\272\272"
  "\272\371\311\315\315\265\371\272\371\320\371\263\263\371\320\371\272\371\306\315\315\273\371\272\272"
  "\272\371\272\376\371\371\371\272\371\371\371\263\263\371\371\371\272\371\371\371\376\272\371\272\272"
  "\272\371\310\315\315\315\315\312\315\315\315\276\324\315\315\315\312\315\315\315\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x3 */
  "\311\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\315\313\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\272\371\371\371\371\376\272\272"
  "\272\371\311\315\265\371\320\371\306\315\315\315\315\315\315\265\371\272\371\311\315\265\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\371\371\371\272\272"
  "\272\371\272\371\306\315\315\315\315\273\371\306\315\315\315\273\371\272\371\320\371\322\371\272\272"
  "\272\371\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\272\371\371\371\272\371\272\272"
  "\272\371\310\315\315\315\315\265\371\272\371\322\371\322\371\272\371\320\371\306\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\272\371\272\371\272\371\320\371\371\371\371\371\371\371\272\272"
  "\314\315\315\315\315\315\315\265\371\272\371\272\377\272\371\371\371\306\315\315\315\315\315\271\271"
  "\272\371\371\371\371\371\371\371\371\272\371\310\315\274\371\322\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\315\315\273\371\272\371\371\371\371\371\272\371\311\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\272\371\310\315\315\315\315\315\274\371\272\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\271\371\371\371\371\371\371\371\371\371\272\371\306\315\273\371\272\272"
  "\272\371\371\371\371\371\371\310\315\315\315\315\315\315\315\265\371\272\371\371\371\272\371\272\272"
  "\272\371\322\371\332\277\371\371\371\371\371\371 \371\371\371\371\320\371\306\315\274\371\272\272"
  "\272\371\272\371\300\324\315\315\315\315\315\315\315\315\315\265\371\371\371\371\371\371\371\272\272"
  "\272\376\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\311\315\315\315\265\371\272\272"
  "\272\371\272\371\306\315\315\315\315\315\315\315\315\315\315\265\371\272\371\371\371\371\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\306\315\273\371\272\272"
  "\272\371\320\371\306\315\315\315\313\315\315\315\265\371\306\315\315\271\371\371\371\272\371\272\272"
  "\272\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\322\376\272\371\272\272"
  "\272\371\306\315\315\315\265\371\320\371\306\315\315\315\265\371\306\274\371\310\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x4 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272 \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\371\272\272"
  "\323\325\315\315\315\273\371\322\371\322\371\322\371\322\371\322\371\322\371\007\371\272\371\272\272"
  "\263\263\376\371\371\272\371\272\371\272\371\272\371\272\371\272\371\272\371\371\371\272\371\272\272"
  "\263\263\371\322\371\272\371\272\371\272\371\272\371\272\371\272\371\310\315\265\371\272\371\272\272"
  "\326\331\371\272\371\272\371\272\371\272\371\272\371\272\371\272\371\371\371\371\371\272\371\272\272"
  "\272\371\371\272\371\272\371\272\371\272\371\272\371\272\371\310\315\315\315\265\371\272\371\272\272"
  "\272\371\332\275\371\272\371\272\371\272\371\272\371\272\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\263\263\371\272\371\272\371\272\371\272\371\310\315\315\315\315\315\265\371\272\371\272\272"
  "\272\371\263\263\371\272\371\272\371\272\371\272\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\326\331\371\272\371\272\371\272\371\310\315\315\315\315\315\315\315\265\371\272\371\272\272"
  "\272\371\272\371\371\272\371\272\371\272\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\306\271\371\272\371\310\315\315\315\315\315\315\315\315\315\265\371\272\371\272\272"
  "\272\371\272\371\371\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\314\265\371\272\371\310\315\315\315\315\315\315\315\315\315\315\265\371\371\272\371\272\272"
  "\272\371\272\371\371\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\332\320\304\304\304\304\304\304\304\304\304\304\304\304\304\277\371\272\371\272\272"
  "\272\371\371\371\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\267\371\272\371\272\272"
  "\272\371\007\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\320\371\272\272"
  "\272\371\376\306\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\371\377\371\272\272"
  "\310\273\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  " \310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x5 */
  "\311\315\315\315\315\315\315\315\315\315\273  \311\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\310\315\315\274\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\311\315\315\315\315\315\273\371\371\371\371\371\371\311\315\315\315\315\315\273\371\272\272"
  "\272\371\272\376\371\371\371\371\310\265\371\311\265\371\306\274\371\371\371\371\376\272\371\272\272"
  "\272\371\314\265\371\332\277\371\371\371\371\320\377\371\371\371\371\332\277\371\306\271\371\272\272"
  "\272\371\272\371\371\326\324\273\371\322\371\371\371\371\322\371\311\276\267\371\371\272\371\272\272"
  "\272\371\272\371\311\274\371\272\371\272\371\332\277\371\272\371\272\371\310\273\371\272\371\272\272"
  "\272\371\272\371\272\371\371\272\371\272\371\263\263\371\272\371\272\371\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\332\275\371\272\371\263\263\371\272\371\323\277\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\263\263\371\272\371\263\263\371\272\371\263\263\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\300\331\371\272\371\263\263\371\272\371\300\331\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\371\371\371\272\371\263\263\371\272\371\371\371\371\272\371\272\371\272\272"
  "\272\371\272\371\314\315\315\265\371\272\371\263\263\371\272\371\306\315\315\271\371\272\371\272\272"
  "\272\371\272\371\272\371\371\371\371\272\371\263\263\371\272\371\371\371\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\311\315\315\274\371\263\263\371\310\315\315\273\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\371\371\371\263\263\371\371\371\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\332\304\304\331\300\304\304\277\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\300\304\304\277\332\304\304\331\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\371\371\371\263\263\371\371\371\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\320\371\323\304\304\277\371\263\263\371\332\304\304\275\371\320\371\272\371\272\272"
  "\272\371\272\376\371\371\263\332\304\331\371\300\331\371\300\304\277\263\371\371\376\272\371\272\272"
  "\272\371\310\315\315\315\276\331\371\371\371 \371\371\371\371\300\324\315\315\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\311\315\315\315\315\273\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\274    \310\315\315\315\315\315\315\315\315\274\274"
/* 0x6 */
  "\311\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\314\315\265\371\322\371\272\371\311\265\371\311\265\371\322\371\311\315\315\315\315\273\371\272\272"
  "\272\371\371\371\272\371\272\371\272\371\371\320\371\371\272\371\272\371\371\371\371\272\371\272\272"
  "\272\371\311\315\274\371\272\371\310\265\371\371\007\371\272\371\272\376\332\277\371\272\371\272\272"
  "\272\371\272\371\371\371\272\371\371\371\371\007\371\371\272\371\310\315\276\331\371\272\371\272\272"
  "\272\371\272\371\311\315\312\315\270\277\371\371\007\371\272\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\320\371\371\371\300\331\371\007\371\371\272\371\306\315\315\315\315\274\371\272\272"
  "\272\371\272\371\371\371\322\371\371\371\371\371\322\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\272\371\306\315\312\315\315\273\371\306\274\371\310\315\315\315\315\315\315\265\371\272\272"
  "\272\371\272\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\377\272 \332\304\304\277\371\272\371\332\277\371\322\371\007\371\007\371\306\273\371\272\272"
  "\272\371\272\371\300\304\304\331\371\272\371\300\331\371\310\265\371\007\371\007\371\320\371\272\272"
  "\272\371\272\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\272\371\306\315\313\315\315\274\371\311\265\371\311\315\315\315\315\315\315\265\371\272\272"
  "\272\371\272\371\371\371\320\371\371\371\371\320\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\272\371\322\371\371\371\332\277\371\371\007\371\272\371\306\315\315\315\315\273\371\272\272"
  "\272\371\272\371\310\315\313\315\276\331\371\007\371\371\272\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\371\371\272\371\371\371\371\371\007\371\272\371\311\315\270\277\371\272\371\272\272"
  "\272\371\310\315\273\371\272\371\311\265\371\007\371\371\272\371\272\376\300\331\371\272\371\272\272"
  "\272\371\371\371\272\371\272\371\272\371\371\371\322\371\272\371\272\371\371\371\371\272\371\272\272"
  "\314\315\265\371\320\371\272\371\310\265\371\306\274\371\320\371\310\315\315\315\315\274\371\272\272"
  "\272\376\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\312\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x4 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x5 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x6 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
