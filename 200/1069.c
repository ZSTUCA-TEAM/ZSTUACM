#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    while(scanf("%d",&n)!=EOF&&n>1&&n<30){
        int i;
  		int s=1;//ÌÒ×ÓÊ£Óà¸öÊý  
		int z=(s+1)*2;
		for (i=1;i<n;i++){
			s=z;
			z=(s+1)*2;  
		}
		printf("%d\n",s);  
    }
    return 0;
}
