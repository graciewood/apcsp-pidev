#include <stdio.h>

int main()
{
	int a;
	int* ptrtoa;

	ptrtoa = &a;

	a = 5;
	printf("The value of a is %d\n", a);

	*ptrtoa = 6;
	printf("The value of a is %d\n", a);

	printf("The value of ptrtoa is %d\n", ptrtoa);
	printf("It stores the value %d\n", *ptrtoa);
	printf("The address of a is %d\n", &a);

	float d = 0.00; 
        float* ptrtod = &d;
	float e = 3.14; 
        float* ptrtoe = &e;
	
        printf("The value of d is %f\n", d);
	printf("The address of d is %d\n", &d);
	printf("The value of e is %f\n", e);
        printf("The address of e is %d\n", &e);
	
        float tmp = e;
	e = d;
	d = tmp;

        printf("new d: %f\n", d);
	printf("new e: %f\n", e);
}
