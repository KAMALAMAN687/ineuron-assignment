#include<stdio.h>
int main()
{
    int a,b;
    printf("enter time in HH:MM");
    scanf("%d%d",&a,&b);
    printf("entered time is %d:%d\n",a,b);
    printf("%d Hour and %d Minute",a,b);
    return 0;
}