#include <stdio.h>
main(void)
{
    float a,b,c,d;
    a=25;
    b=25.25;
    c=25123456;
    d=25.123456789;

    printf("a=%f\n",a);
    printf("b=%f\n",b);
    printf("c=%f\n",c);
    printf("d=%f\n",d);
    printf("\n");
    printf("a=%7.2f\n",a);
    printf("b=%7.3f\n",b);
    printf("c=%7.0f\n",c);
    printf("d=%7.4f\n",d);
}