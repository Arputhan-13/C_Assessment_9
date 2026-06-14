#include <stdio.h>
int main()
{
    int a[5],i,b,h=0,g,n, m;
    printf("Enter the 5 Numbers : ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nThe Reverse Number : ");
    for(i=0;i<5;i++)
    {
    m=a[i];
    b=0;
    while(m!=0)
    {
    n=m%10;
    b=b*10+n;
    m=m/10;
    }
    g=b;
    h=h+g;
    printf("%d ",b);
    }
    printf("\nThe sum Of Numbers : %d ",h);
    
}