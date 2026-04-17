#include <stdio.h>

int main(void)
{
    unsigned short a = 0;
    unsigned short b = 65535;
    unsigned short c;
    unsigned short d;
    
    c = (unsigned short)65536;  // overflow, hasil 0
    d = (unsigned short)-1;     // hasil 65535

    printf("a = %hu\n", a);
    printf("b = %hu\n", b);
    printf("c = %hu\n", c);
    printf("d = %hu\n", d);

    return 0;
}