int maze_n = 1;
int maze_w = 21;
int maze_h = 15;
int maze_flags = 0;
const char *maze_args = "READY=\"READY\" GAMEOVER=\" BYE \" PLAYER1=\" ONE \" PLAYER2=\" TWO \" WALL_COLORS=\"\\x0A\" MORTAR_COLORS=\"\\x0A\" DOT_COLORS=\"\\x0C\" RGHOST=10.5 ROGHOST=0 COGHOST=0 RFRUIT=10.5 RTOP=10.5 RHERO=4.5 RMSG=8 CMSG=8 RMSG2=6 CMSG2=8 ABOUT=\"Inspired by ababasoft.com\'s \'Pac Man\' flash game, which has a Hase und Wolf/Nu pogodi! theme\"";
static const char builtin_mazefile_str[] = "lvl/ababa.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\273\0\0\311\315\315\315\315\315\315\315\315\315\273\0\0\311\315\273\273"
  "\272\371\272\0\0\272\371\371\371\371\371\371\371\371\371\272\0\0\272\371\272\272"
  "\272\371\310\315\315\274\371\332\304\304\304\304\304\277\371\310\315\315\274\371\272\272"
  "\272\371\371\371\371\371\371\300\304\304\304\304\304\331\371\371\371\371\371\371\272\272"
  "\310\273\371\332\304\277\371\371\371\371 \371\371\371\371\332\304\277\371\311\274\274"
  "\315\274\371\263 \263\371\332\304\304\304\304\304\277\371\263 \263\371\310\315\315"
  "\371\371\371\263 \263\371\263     \263\371\263 \263\371\371\371 "
  "\315\273\371\263 \263\371\263     \263\371\263 \263\371\311\315\315"
  "\311\274\371\300\304\331\371\263     \263\371\300\304\331\371\310\273\273"
  "\272\371\371\371\371\371\371\300\304\304\304\304\304\331\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\371\371\371 \371\371\371\371\332\304\304\277\371\272\272"
  "\272\371\263  \263\371\332\304\304\304\304\304\277\371\263  \263\371\272\272"
  "\272\371\300\304\304\331\371\300\304\304\304\304\304\331\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
