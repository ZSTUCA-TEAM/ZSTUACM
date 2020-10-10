#include <stdio.h>
int main(int argc, char *argv[]) {
 	float a,b;
    while(scanf("%f",&a)!=EOF){
        b=(5/9.000000)*(a-32);
        printf("fahr=%.3f,celsius=%.3f\n",a,b);
    }
    return 0;
}
