#include <stdio.h>

float areaOfCircle(float radius)
{
  float area = 3.14 * radius * radius;
  return area;
}

int main(int argc, char* argv[])
{
  int arg = 0;
  while (arg < argc)
  {
    printf("radius %d : %s\n", arg, argv[arg]);
    arg++;
  }
  
  float l;
  float u;
  int c = 1;
  
  while ( c == 1 )
  {
    printf("lower bound: ");
    scanf("%f", &l);
    if ( l < 0 )
    {
      printf("not a valid bound\n");
    }
    else
    {
      c = 0;
    }
  }
  
  while ( c == 0 )
  {
    printf("upper bound: ");
    scanf("%f", &u);
   
   if ( u < 0 )
   {
      printf("not a valid bound\n");
   }
    elif( u <= l )
   {
    printf("not a valid bound\n");
   }
    else
   {
      c = 2;
   }
  }
  
  for (float radius = l; radius <= u; radius++){
	  float area = areaOfCircle(radius);
	  printf("radius = %f - area: %f\n", radius, area);
  }
}
