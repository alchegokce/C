#include<stdio.h>

int main()
{
	int n;
	printf("Enter an integer: \n");
	scanf("%d", &n);
	float a=1;
	float sum=0;
	int i=0;
	float b = 1;
	float c;
	
	for(i=0; i<n; i++)
	{
		c = (a/b);
		sum += c;
		b++;
	}
	printf("Sum is %f", sum);
}
