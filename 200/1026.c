#include <stdio.h>

int main(int argc, char *argv[]) {
  	int n;
  	scanf("%d",&n);
  	if(n%5==0&&n%7==0){
  		printf("Yes\n");
	}else {
		printf("No\n");	
	}
    return 0;
 }
