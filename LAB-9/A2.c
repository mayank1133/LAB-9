//2. Print multiplication table of a given number.

#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("ENTER N:");
	scanf("%d",&n);
	while(i<=10)
	{
		sum=i*n;
		printf("%d\n",sum);
		i++;
	}
	
}
