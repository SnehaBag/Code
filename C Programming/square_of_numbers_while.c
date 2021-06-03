#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n;
    printf("Enter the terms: ");
    scanf("%d",&n);
    a=1;
    while(a<=n)
    {
        b=a*a;
        printf("%d square is %d\n",a,b);
        a++;
    }
    return 0;
}