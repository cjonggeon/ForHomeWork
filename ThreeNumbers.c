#include <stdio.h>

int GetMax(int, int, int);

int main(void)
{
	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);


	printf("The biggest number is %d\n", GetMax(x, y, z));

	return 0;
}

int GetMax(int a, int b, int c)
{
	int temp = a;

	if (temp < b)
		temp = b;

	return temp < c ? c : temp;
}