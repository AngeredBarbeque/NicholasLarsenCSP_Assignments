#include <stdio.h>

float power(float base, int power)
{
    float rv=1.0;
    int i = 1;
    for (; i<=power; i++ ) {
        rv = rv*base;
    }
    return rv;
}

int main(void){    
    printf("Equation one is %f\n",7.0-24/8*4+6);
    printf("Equation two is %f\n",18.0/3-7+2*5);
    printf("Equation three is %f\n",6.0*4/12+72/8-9);
    printf("Equation four is %f\n",(17.0-6/2)+4*3);
    printf("Equation five is %f\n",-2.0*(1*4-2/2)+(6+2-3));
    printf("Equation six is %f\n",-1.0*((3-4*7)/5)-2*24/6);
    printf("Equation seven is %f\n",(3*power(5, 2)/15)-(5-power(2, 2)));
    printf("Equation eight is %f\n",(power(1, 4)*power(2, 2)+power(3, 3))-power(2, 5)/4);
    printf("Equation nine is %f\n",power(22/2-2*5, 2)+power(4-6/6, 2));
    return 0;
}