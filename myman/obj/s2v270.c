int maze_n = 1;
int maze_w = 37;
int maze_h = 41;
int maze_flags = 0;
const char *maze_args = "    RTOP=16.5   RGHOST=20.5 CGHOST=18.5 ROGHOST=2 COGHOST=2.5   RFRUIT=23.5 CFRUIT=18.5    RHERO=31.5  CHERO=18.5     RMSG=23     CMSG=13    RMSG2=15    CMSG2=13    READY=\"   READY!  \"  PLAYER1=\"PLAYER ONE \"  PLAYER2=\"PLAYER TWO \" GAMEOVER=\" GAME OVER.\"    ABOUT=\"Inspired by Toru Iwatani/Namco\'s Pac-Man/Puckman\"";
static const char builtin_mazefile_str[] = "lvl/bigpac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\270\304\325\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\277\371\332\304\304\304\304\304\277\371\263 \263\371\332\304\304\304\304\304\277\371\332\304\304\304\304\277\371\272\272"
  "\272\371\263    \263\371\263     \263\371\263 \263\371\263     \263\371\263    \263\371\272\272"
  "\272\376\263    \263\371\263     \263\371\263 \263\371\263     \263\371\263    \263\376\272\272"
  "\272\371\263    \263\371\263     \263\371\263 \263\371\263     \263\371\263    \263\371\272\272"
  "\272\371\300\304\304\304\304\331\371\300\304\304\304\304\304\331\371\300\304\331\371\300\304\304\304\304\304\331\371\300\304\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\277\371\332\304\277\371\332\304\304\304\304\304\304\304\304\304\277\371\332\304\277\371\332\304\304\304\304\277\371\272\272"
  "\272\371\263    \263\371\263 \263\371\263         \263\371\263 \263\371\263    \263\371\272\272"
  "\272\371\300\304\304\304\304\331\371\263 \263\371\300\304\304\304\277 \332\304\304\304\331\371\263 \263\371\300\304\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\263 \263\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\273\371\263 \300\304\304\304\277 \263 \263 \332\304\304\304\331 \263\371\311\315\315\315\315\315\315\274\274"
  "\0\0\0\0\0\0\0\272\371\263     \263 \263 \263 \263     \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \332\304\304\304\331 \300\304\331 \300\304\304\304\277 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263             \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263 \311\315\315\315\315\360\315\315\315\315\273 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263 \272         \272 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\315\315\315\315\315\315\315\274\371\300\304\331 \272         \272 \300\304\331\371\310\315\315\315\315\315\315\315\315"
  "        \371    \272         \272    \371         "
  "\315\315\315\315\315\315\315\273\371\332\304\277 \272         \272 \332\304\277\371\311\315\315\315\315\315\315\315\315"
  "\0\0\0\0\0\0\0\272\371\263 \263 \272         \272 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263 \310\315\315\315\315\315\315\315\315\315\274 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263             \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263 \332\304\304\304\304\304\304\304\304\304\277 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\272\371\263 \263 \263         \263 \263 \263\371\272\0\0\0\0\0\0\0\0"
  "\311\315\315\315\315\315\315\274\371\300\304\331 \300\304\304\304\277 \332\304\304\304\331 \300\304\331\371\310\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\277\371\332\304\304\304\304\304\277\371\263 \263\371\332\304\304\304\304\304\277\371\332\304\304\304\304\277\371\272\272"
  "\272\371\263    \263\371\263     \263\371\263 \263\371\263     \263\371\263    \263\371\272\272"
  "\272\371\300\304\304\277 \263\371\300\304\304\304\304\304\331\371\300\304\331\371\300\304\304\304\304\304\331\371\263 \332\304\304\331\371\272\272"
  "\272\376\371\371\371\263 \263\371\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\371\263 \263\371\371\371\376\272\272"
  "\323\304\304\277\371\263 \263\371\332\304\277\371\332\304\304\304\304\304\304\304\304\304\277\371\332\304\277\371\263 \263\371\332\304\304\275\275"
  "\263  \263\371\263 \263\371\263 \263\371\263         \263\371\263 \263\371\263 \263\371\263  \263\263"
  "\326\304\304\331\371\300\304\331\371\263 \263\371\300\304\304\304\277 \332\304\304\304\331\371\263 \263\371\300\304\331\371\300\304\304\267\267"
  "\272\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\263 \263\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\304\304\331 \300\304\304\304\277\371\263 \263\371\332\304\304\304\331 \300\304\304\304\304\304\304\277\371\272\272"
  "\272\371\263            \263\371\263 \263\371\263            \263\371\272\272"
  "\272\371\300\304\304\304\304\304\304\304\304\304\304\304\304\331\371\300\304\331\371\300\304\304\304\304\304\304\304\304\304\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
