#include <stdio.h>
#include <string.h>
#include <math.h>

float conevolume(float a, float b, float c)
{
  return (0.3333333 * c * a * (b * b));
}
float conesa(float a, float b, float c)
{
  return ((a * (b * b)) + (a * b * sqrt((b * b) + (c * c))));
}



int main(int argc, char* argv[])
{
 if (argc != 3)
 { printf("%s : expected 2 values, please fill both lines with intergers\n", argv[0]);
 return 1;
 }

  float p = 3.141592;
  float v;
  float s;
  float radius;
  float vheight;

  int found = sscanf(argv[1], "%f", &radius);
  if (found != 1)
  { printf("radius is not a number, enter a number\n");
  return 1;
  }

  found = sscanf(argv[2], "%f", &vheight);
  if (found != 1)
  { printf("height is not a number, enter a number\n");
  return 1;
  }

  float r = radius;
  float h = vheight;

  v = conevolume(p, r, h);
  s = conesa(p, r, h);

 printf("The volume of your cone is %f and its surface are is %f, ", v, s);
}
