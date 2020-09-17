#include<stdio.h>
int max=0;
int min=0;

int main()
{
	int x, y;
	printf("Enter an integer: ");
	scanf("%d", &x);
	printf("\n");
	printf("Enter the numbers to find max and min\n");
	scanf("%d", &y);
	
	
	for(int i = 0; i<x-1; i++)
	{
		max=y;
		min=y;
		int z;
	
		printf("Enter the numbers to find max and min\n");
		scanf("%d", &z);
		if(z>y)
		{
			y=z;
			max=z;
		}
		
		else
		{
				min=z;
		}
	
	
	
	
	}
	printf("Min value is %d\n", min);
	printf("Max value is %d\n", max);
}
