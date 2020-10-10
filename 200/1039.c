#include <stdio.h>
#include <math.h>
int main(void){
	float a,b,c;
	float data;
	float x1,x2;
	scanf("%f%f%f",&a,&b,&c);
	if(a ==  0){
		if(b == 0)
		printf("No\n");
		else{
			x1 = -c / b;
			printf("%f\n",x1);
		}
	}else{
	   	data = b * b - 4 * a * c;
		x1 = (-b + sqrt(data)) / (2 * a);
		x2 = (-b - sqrt(data)) / (2 * a);
		if(data < 0){
			printf("No\n");
		}else{
			if(data == 0){
				printf("%f\n",x1);
			}else{
				if(x1 > x2){
				    printf("%f\n",x1);
				    printf("%f\n",x2);
				}else{
				    printf("%f\n",x2);
				    printf("%f\n",x1);
				}
			}
		}
	}
	return 0;
}
