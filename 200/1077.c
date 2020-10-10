#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double a,b,c;
    while (~scanf("%lf%lf%lf",&a,&b,&c)){
    	double p=(a+b+c)/2.0;
        printf("%.2f\n",sqrt(p*(p-a)*(p-b)*(p-c)));      
    }
    return 0;
}															
