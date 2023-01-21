#include<stdio.h>
int main()
{
    int n=10,i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("\nSum of first 10 natural numbers = %d",sum);
    return 0;
}
