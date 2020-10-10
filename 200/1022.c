#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
 	const double pi=acos(-1);
  	int n;
  	scanf("%d",&n);
    double m=n*pi/180;
    printf("%.2f\n%.2f\n",sin(m),cos(m));
    return 0;
 }
