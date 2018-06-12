#include <stdio.h>
#include <string.h>
#include <math.h>

float recvolume(float a, float b, float c)
{
  return (a * b * c);
}
float recsa(float a, float b, float c)
{
  return ((2 * a * b) + (2 * b * c) + (2 * a * c));
}



int main(int argc, char* argv[])
{
 if (argc != 4)
 { printf("%s : expected 3 values, please fill both lines with intergers\n", argv[0]);
 return 1;
 }

  float length;
  float v;
  float s;
  float width;
  float height;

  int found = sscanf(argv[1], "%f", &width);
  if (found != 1)
  { printf("width is not a number, enter a number\n");
  return 1;
  }

  found = sscanf(argv[2], "%f", &height);
  if (found != 1)
  { printf("height is not a number, enter a number\n");
  return 1;
  }

  found = sscanf(argv[2], "%f", &length);
  if (found != 1)
  { printf("length is not a number, enter a number\n");
  return 1;
  }

  float w = width;
  float h = height;
  float l = length;

  v = recvolume(w, h, l);
  s = recsa(w, h, l);

 printf("The volume of your rectangular prism is %f and its surface are is %f, ", v, s);
}
