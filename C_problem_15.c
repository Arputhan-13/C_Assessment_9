#include<stdio.h>
int main()
{
    int a[1000],i,j,c,b,d, e[1000],m,h=0,r;
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
    b=i;
    for(i=0;i<b;i++)
    {
    c=a[i];
    h=0;
    while(c!=0)
    {
    r=c%10;
    h=h+r;
    c=c/10;
    }
    e[i]=h;
    }
    for(i=0;i<b-1;i++)
    {
    for(j=i+1;j<b;j++)
    {
    if(e[i]>e[j])
    {
    m=e[i];
    e[i]=e[j];
    e[j]=m;
    }
    }
    }
    printf("\nAscending order : ");
    for(i=0;i<b;i++)
    {
    printf("%d ",e[i]);
    }
}