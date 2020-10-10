#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
    float r,h,s;
	const float pi=4.0 * atan(1.0);
    scanf("%f %f",&r,&h);
    s=2*r*r*pi+2*pi*r*h;
    printf("Area=%.3f",s);
    return 0;
}
