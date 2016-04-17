int maze_n = 1;
int maze_w = 32;
int maze_h = 22;
int maze_flags = 0;
const char *maze_args = "RGHOST=10.5 ROGHOST=1 RFRUIT=12.5 RTOP=9 RHERO=16.5 RMSG=12 CMSG=11 RMSG2=8 CMSG2=11 ABOUT=\"Inspired by Atari\'s PC conversion of Pac-Man\"";
static const char builtin_mazefile_str[] = "lvl/pacmanpc.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\332\304\304\304\304\304\277\371\263\263\371\332\304\304\304\304\304\277\371\332\304\304\277\371\272\272"
  "\272\376\300\304\304\331\371\300\304\304\304\304\304\331\371\300\331\371\300\304\304\304\304\304\331\371\300\304\304\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\265\371\332\277\371\306\315\315\315\315\270\325\315\315\315\315\265\371\332\277\371\306\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\273\371\263\306\315\315\315\315\265 \300\331 \306\315\315\315\315\265\263\371\311\315\315\315\315\274\274"
  "\0\0\0\0\0\272\371\263\263              \263\263\371\272\0\0\0\0\0\0"
  "\315\315\315\315\315\274\371\300\331 \311\315\315\315\315\360\360\315\315\315\315\273 \300\331\371\310\315\315\315\315\315\315"
  "      \371   \272          \272   \371       "
  "\315\315\315\315\315\273\371\332\277 \310\315\315\315\315\315\315\315\315\315\315\274 \332\277\371\311\315\315\315\315\315\315"
  "\0\0\0\0\0\272\371\263\263              \263\263\371\272\0\0\0\0\0\0"
  "\311\315\315\315\315\274\371\300\331 \306\315\315\315\315\270\325\315\315\315\315\265 \300\331\371\310\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\273\371\306\315\315\315\315\315\265\371\300\331\371\306\315\315\315\315\315\265\371\311\315\315\265\371\272\272"
  "\272\376\371\371\371\272\371\371\371\371\371\371\371\371\371  \371\371\371\371\371\371\371\371\371\272\371\371\371\376\272\272"
  "\314\315\315\265\371\320\371\332\277\371\306\315\315\315\315\270\325\315\315\315\315\265\371\332\277\371\320\371\306\315\315\271\271"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\276\324\315\315\315\315\265\371\300\331\371\306\315\315\315\315\276\324\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
