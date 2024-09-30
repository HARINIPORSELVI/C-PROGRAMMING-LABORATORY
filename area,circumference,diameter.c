#include <stdio.h>

int main()
{
    int r;
    scanf("%d",&r); 
    float a,c,d;
    a=(22/7.0)*r*r;
    c=2*(22/7.0)*r;
    d=2.0*r;
    printf("area:%.2f\n",a);
    printf("circumference:%.2f\n",c);
    printf("diameter:%.2f\n",d);
    return 0;

}
