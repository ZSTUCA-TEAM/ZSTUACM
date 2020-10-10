#include <stdio.h>
 
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0\n");
    }else if(n>0){
        printf("+\n");  
    }else if(n<0){
        printf("-\n");  
    }
    return 0;
 }
 
