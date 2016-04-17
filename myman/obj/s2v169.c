int maze_n = 1;
int maze_w = 32;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "RTOP=9.5 RGHOST=11.5 ROGHOST=1 COGHOST=2 RFRUIT=14.5 RHERO=20.5 RMSG=13 CMSG=11 RMSG2=9 CMSG2=11 ABOUT=\"Inspired by Derek Brewster/Micromega\'s \'Haunted Hedges\'\"";
static const char builtin_mazefile_str[] = "lvl/hedges.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\304\304\277\332\304\304\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\304\277\371\332\304\304\304\277\371\263\263\371\332\304\304\304\277\371\332\304\304\304\277\371\263\263\263"
  "\263\263\376\300\304\304\304\331\371\300\304\304\304\331\371\300\331\371\300\304\304\304\331\371\300\304\304\304\331\376\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\304\304\277\371\332\304\304\304\304\304\304\304\304\304\304\277\371\332\304\304\304\304\277\371\263\263\263"
  "\263\263\371\300\304\304\304\277\263\371\300\304\304\304\304\304\304\304\304\304\304\331\371\263\332\304\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\263\263\263"
  "\263\300\304\304\304\277\371\263\263\371\332\304\304\304\302\360\360\302\304\304\304\277\371\263\263\371\332\304\304\304\331\263\263"
  "\300\304\304\304\304\331\371\300\331\371\263\332\304\304\331\377\377\300\304\304\277\263\371\300\331\371\300\304\304\304\304\331\331"
  "\371\371\371\371\371\371\371\371\371\371\263\263        \263\263\371\371\371\371\371\371\371\371\371\371 "
  "\332\304\304\304\304\277\371\332\277\371\263\300\304\304\304\304\304\304\304\304\331\263\371\332\277\371\332\304\304\304\304\277\277"
  "\263\332\304\304\304\331\371\263\263\371\300\304\304\304\304\304\304\304\304\304\304\331\371\263\263\371\300\304\304\304\277\263\263"
  "\263\263\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\277\371\263\300\304\304\277\371\332\304\304\304\304\277\371\332\304\304\331\263\371\332\304\277\371\263\263\263"
  "\263\263\371\263\332\331\371\300\304\304\304\331\371\300\304\277\332\304\331\371\300\304\304\304\331\371\300\277\263\371\263\263\263"
  "\263\263\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\263\263\263"
  "\263\263\371\263\263\371\332\304\277\371\332\304\304\277\371\263\263\371\332\304\304\277\371\332\304\277\371\263\263\371\263\263\263"
  "\263\263\376\300\331\371\300\304\331\371\300\304\304\331\371\300\331\371\300\304\304\331\371\300\304\331\371\300\331\376\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
