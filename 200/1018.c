#include <stdio.h>
int main(int argc, char *argv[]) {
    int a,x,y,z;
    scanf("%d",&a);
    x=a/100;
    a%=100;
    y=a/10;
    a%=10;
    z=a;
    printf("%d%d%d",z,y,x);
}
