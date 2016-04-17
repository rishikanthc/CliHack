int maze_n = 1;
int maze_w = 15;
int maze_h = 19;
int maze_flags = 0;
const char *maze_args = "READY=\"GO!\" GAMEOVER=\"END\" PLAYER1=\"P 1\" PLAYER2=\"P 2\" RGHOST=17.5 ROGHOST=-1 RFRUIT=8.5 RTOP=17.5 RHERO=10.5 RMSG=9 CMSG=6 RMSG2=9 CMSG2=6 ABOUT=\"Inspired by GCE\'s \'Clean Sweep\' Vectrex game\" NOTE=\"This does not reflect the original gameplay\"";
static const char builtin_mazefile_str[] = "lvl/clsweep.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\302\304\304\304\331 \300\304\304\304\302\304\277\277"
  "\263\376l\371\371\371\371\371\371\371\371\371l\376\263\263"
  "\303\304\331\371\304\304\304\302\304\304\304\371\300\304\264\264"
  "\263\371\371\371\371\371\371\263\371\371\371\371\371\371\263\263"
  "\263\371\304\304\304\304\371\371\371\304\304\304\304\371\263\263"
  "\263\371\371\371\371\371\371\263\371\371\371\371\371\371\263\263"
  "\303\304\304\371\263\371\332\301\277\371\263\371\304\304\264\264"
  "\263\371\371\371\263\371\263 \263\371\263\371\371\371\263\263"
  "\331\371\263\371\263\371\263 \263\371\263\371\263\371\300\300"
  " \371\263\371\371\371   \371\371\371\263\371  "
  "\277\371\263\371\263\371\263 \263\371\263\371\263\371\332\332"
  "\263\371\371\371\263\371\263 \263\371\263\371\371\371\263\263"
  "\303\304\304\371\263\371\300\302\331\371\263\371\304\304\264\264"
  "\263\371\371\371\371\371\371\263\371\371\371\371\371\371\263\263"
  "\263\371\304\304\304\304\371\371\371\304\304\304\304\371\263\263"
  "\263\371\371\371\371\371\371\263\371\371\371\371\371\371\263\263"
  "\303~\277\371\304\304\304\301\304\304\304\371\332~\264\264"
  "\263\376\263\371\371\371\371\371\371\371\371\371\263\376\263\263"
  "\300\304\301\304\304\304\277 \332\304\304\304\301\304\331\331"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
