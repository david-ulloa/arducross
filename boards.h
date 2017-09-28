#define NUMBEROFBOARDS 22
const uint16_t LOADEDBOARD[16 * NUMBEROFBOARDS] PROGMEM =
{
  //MARIO PICROSS BOARDS

  // L 5x5
  28,
  28,
  28,
  28,
  0,0,0,0,0,0,0,0,0,0,0,5,
  // E 5x5
  0,
  28,
  24,
  28,
  0,0,0,0,0,0,0,0,0,0,0,5,
  // T 5x5
  0,
  27,
  27,
  27,
  27,0,0,0,0,0,0,0,0,0,0,5,
  // S 5x5
  1,
  28,
  0,
  7,
  16,0,0,0,0,0,0,0,0,0,0,5,
  // W 5x5
  14,
  10,
  10,
  0,
  21,0,0,0,0,0,0,0,0,0,0,5,
  // O 5x5
  17,
  12,
  12,
  12,
  17,0,0,0,0,0,0,0,0,0,0,5,
  // R 5x5
  16,
  12,
  12,
  16,
  12,0,0,0,0,0,0,0,0,0,0,5,
  // K 5x5
  4,
  16,
  24,
  16,
  4,0,0,0,0,0,0,0,0,0,0,5,


  //Inverted Plus Sign 3x3
  5,
  0,
  5,0,0,0,0,0,0,0,0,0,0,0,0,3,

  //Plus Sign 3x3
  2,
  7,
  2,0,0,0,0,0,0,0,0,0,0,0,0,3,

  // Circle 4x4
  6,
  9,
  9,
  6,0,0,0,0,0,0,0,0,0,0,0,4,

  //Ghost 5x5
  14,
  21, 
  31,
  31,
  21,0,0,0,0,0,0,0,0,0,0,5, // 15 uint16s for row, 16th for boardsize

  //Boat 6x6
  39,
  7,
  55,
  32,
  0,
  33,0,0,0,0,0,0,0,0,0,6,

  //Penguin 8x8
  231,
  225,
  231,
  203,
  203,
  139,
  231,
  195,0,0,0,0,0,0,0,8,

  //Cat 10x10
  1003,
  969,
  961,
  404,
  193,
  739,
  192,
  386,
  3,
  777,0,0,0,0,0,10,

  //Crocodile 15x15
  32736,
  18890,
  13952,
  9216,
  0,
  21,
  95,
  255,
  15615,
  24127,
  6031,
  1507,
  369,
  24577,
  31747,15,

  //Duck 15x15
  29183,
  24831, 
  2175,
  16511,
  24831,
  29183,
  24831, 
  16446,
  18200,
  18560,
  18497,
  26113,
  28675,
  31823,
  28735,15,

  //Clover 15x15
  31903,
  30735,
  30735,
  30735,
  17425,
  544,
  320,
  16513,
  320,
  864,
  18289,
  32575,
  32671,
  32707,
  32755,15,

  //Moose 15x15
  10212,
  9636,
  9633,
  899,
  28751,
  24639,
  16735,
  15,
  7,
  3,
  513,
  965,
  961,
  483,
  511,15,

  //Mouse 10x10
  32371,
  32173,
  32005,
  32339,
  32519,
  32291,
  31746,
  31746,
  31746,
  32257,
  0,
  0,
  0,
  0,
  0,10,

  //Heart 10x10
  32305,
  31744,
  31744,
  31748,
  31748,
  32265,
  32257,
  32515,
  32647,
  32719,
  0,
  0,
  0,
  0,
  0,10,

  //Smile 10x10
  32647,
  32635,
  32509,
  32182,
  32254,
  32122,
  32134,
  32509,
  32635,
  32647,
  0,
  0,
  0,
  0,
  0,10

  //
};