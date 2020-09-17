#include<stdio.h>
#include<math.h>

int main()
{
	//1!/1^2-2!/2^2+3!/3^2-.....
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	float f=1;
	float a=1;
	int i;
	int s=1;
	int temp=1;
	float sum = 0; 
	for(i=0;i<n;i++)
	{

		s=temp;
		if(s%2==0)
		{
			s=-1;
		}
		else
		{
			s=+1;
		}
		temp++; 
		
		f = f*a;
		
		
		float p=pow(a,2);
		a++;
		
		float c = (f/p);
		sum+=(s*c);
	 
	}
		printf("%f", sum);	



}
