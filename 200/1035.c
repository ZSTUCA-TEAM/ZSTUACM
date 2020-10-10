#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
    int a,b,c;
    int x,y,z,m,n;
    z=1000;
	while(z<10000){
		a=z;
		x=a/1000;
		a=a%1000;
		y=a/100;
		a=a%100;
		m=a/10;
		n=a%10;
		if(x==y && m==n && sqrt(z)==(int)sqrt(z)){   
		    printf("%d\n",z);   
		}
		z++;
	}
    return 0;
}
