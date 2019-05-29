#include <stdio.h>

int ArrayAdd(int* arr, int s, int n)
{
  for (int i = 0; i < s; i++)
    {
	arr[i] = arr[i] + n; 
	printf("%d\n", arr[i]);
    }
}

int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    {
	arr[i] = i * i;
    }
  printf("index 4: %d, index 9: %d\n", arr[4], arr[9]);
  ArrayAdd(arr,100,4);
  return 0;
}
