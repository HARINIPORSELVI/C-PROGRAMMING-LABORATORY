#include <stdio.h>

int main()
{
    int p,r,t;
    float si;
    printf("principal amount:");
    scanf("%d",&p);
    printf("rate of interest:");
    scanf("%d",&r);
    printf("time:");
    scanf("%d",&t);
    si=p*r*t/100.0;
    printf("simple interest:%.2f",si);
    return 0;
