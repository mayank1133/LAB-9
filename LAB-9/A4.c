//4. Find factorial of the given number.

#include<stdio.h>
void main()
{
	int i=1,n,x=1;
	scanf("%d",&n);
	while(i<=n)
	{
		x=x*i;
		i++;
    }
    printf("factorial is %d",x);
}
