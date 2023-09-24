#include "arith.h"
// arith.c functions 14
int Arith_max(int x, int y)
{
  return x > y ? x : y;
}

int Arith_min(int x, int y)
{
  return x > y ? y : x;
}

// arith.c functions 14 plus
int Arith_div(int x, int y)
{
  // if division truncates toward 0 14
  // && x and y have different signs 14
  if (-13/5 == -2
      && (x < 0) != (y < 0)){
    return x/y - 1;
  }
  else {
    return x/y;
  }
}

// arith.c functions 14 plus
int Arith_mod(int x, int y)
{
  if (-13/5 == -2
      && (x < 0) != (y < 0)) {
    return x%y + y;
  }
  else {
    return x%y;
  }
}

//arith.c functions 14 plus
int Arith_floor(int x, int y)
{
  return Arith_div(x, y);
}

int Arith_ceiling(int x, int y)
{
  return Arith_div(x, y) + (x%y != 0);
}
