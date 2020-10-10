#include <stdio.h>

int main(int argc, char *argv[]) {
    float a,b,h,s;
    scanf("%f,%f,%f",&a,&b,&h);
    s=(a+b)*h*0.5;
    printf("%.2f",s);
    return 0;
}
