#include<stdio.h>
int main()
{
    int a[1000],i,c, b, m, n;
    float y;
    printf("Enter the Number : ");
    i=0;
    while(1)
    {
    scanf("%d",&a[i]);
    if(a[i]==0)
    {
    break;
    }
    i++;
    }
    if(i%2==1)
    {
    b=i/2;
    m=a[b];
    printf("Middle Number = %d",m);
    }
    else
    {
    b=i/2;
    m=a[b-1];
    n=a[b];
    y=(m+n)/2.0;
    printf("Average = %.2f",y);
    }
}