#include <stdio.h>

int main()
{
int l,b,a,p;
printf("length:");
scanf("%d",&l);
printf("breadth:");
scanf("%d",&b);
a=l*b;
p=2*(l+b);
printf("area:%d\n",a);
printf("perimeter:%d",p);
    return 0;
}
