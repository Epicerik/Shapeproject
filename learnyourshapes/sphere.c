#include <stdio.h>
#include <string.h>
#include <math.h>

float sphvolume(float a, float b)
{
  return (1.3333333333 * b * a * a * a);
}
float sphsa(float a, float b)
{
  return (4 * b * a * a);
}


int main(int argc, char* argv[])
{
 if (argc != 2)
 { printf("%s : expected 2 values, please fill both lines with intergers\n", argv[0]);
 return 1;
}
  float p = 3.141592;
  float radius;
  float v;
  float s;

  int found = sscanf(argv[1], "%f", &radius);
  if (found != 1)
  { printf("radius is not a number, enter a number\n");
  return 1;
  }

  float r = radius;

  v = sphvolume(r, p);
  s = sphsa(r, p);

 printf("the volume of your sphere is %f and its surface area is %f", v, s);
}

