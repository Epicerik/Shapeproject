#include <stdio.h>
#include <string.h>
#include <math.h>

float pyrvolume(float a, float b)
{
  return (0.3333333333333 * a * (b * b));
}
float pyrsa(float a, float b)
{
  return ((2 * b * sqrt(((b / 2) * (b / 2)) + (a * a)) + (b * b)));
}


int main(int argc, char* argv[])
{
 if (argc != 3)
 { printf("%s : expected 2 values, please fill both lines with intergers\n", argv[0]);
 return 1;
 }
  float length;
  float height;
  float v;
  float s;

  int found = sscanf(argv[1], "%f", &height);
  if (found != 1)
  { printf("height is not a number, enter a number\n");
  return 1;
  }

  found = sscanf(argv[2], "%f", &length);
  if (found != 1)
  { printf("length is not a number, enter a number\n");
  return 1;
  }

  float h = height;
  float l = length;

  v = pyrvolume(h, l);
  s = pyrsa(h, l);

 printf("The volume of your pyramid is %f and its surface area is %f, ", v, s);
}
