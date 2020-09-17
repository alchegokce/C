#include <stdio.h>

int main(void)

{
	int a;
	printf("Enter an integer: \n");
	scanf("%d", &a);
	printf("Fibonacci series: \n");
	
	int i=0;
	int t1=0;
	int t2=1;
	for(i=0; i<a; i++)
	{

		printf("%d\n", t1);
		int t3=(t1+t2);
		t1=t2;
		t2=t3;
	}

}
