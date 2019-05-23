#include<stdio.h>
int main()
{
  
  signed int a = 545;

  // print value and size of an int variable
  printf("signed int a value: %d and size: %d bytes\n", a, sizeof(a));

   unsigned char b = 2;

 // print value and size of an int variable
 printf("unsigned char b value; %d and size: %d bytes\n", b, sizeof(b));

 float c = 5.45;
  // print value and size of an int variable
 printf("float c value; %d and size: %d bytes\n", c, sizeof(c));

 double d = 8;
// print value and size of an int variable
 printf("double d value; %d and size: %d bytes\n", d, sizeof(d));
}

