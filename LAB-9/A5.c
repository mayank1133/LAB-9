//5. Find factors of the given number.
#include<stdio.h>
void main()
{
    int i=1,n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        printf("factor is :%d:",i);
        i++;
    }




}
