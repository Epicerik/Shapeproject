#include <stdio.h>
#include <string.h>
#include <math.h>

float cubevolume(float a)
{
  return (a * a * a);
}
float cubesa(float a)
{
  return (6 * a * a);
}


int main(int argc, char* argv[])
{
 if (argc != 2)
 { printf("%s : expected 1 values, please fill both lines with intergers\n", argv[0]);
 return 1;
}
  float sidelength;
  float v;
  float s;

  int found = sscanf(argv[1], "%f", &sidelength);
  if (found != 1)
  { printf("radius is not a number, enter a number\n");
  return 1;
  }

  float d = sidelength;

  v = cubevolume(d);
  s = cubesa(d);

 printf("the volume of your cube is %f and its surface area is %f", v, s);
}

