#include<stdio.h>
void main()
{
	int x,y,z=1,i=1;
	printf("ENTER X:");
	scanf("%d",&x);
	printf("ENTER Y:");
	scanf("%d",&y);
	while(i<=y)
	{
		z=x*z;
		i++;
	}
	printf("%d",z);
	
}                                                                                                                                                                                                                                                                                   
