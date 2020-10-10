#include <stdio.h>
int cal(int x){
	int s=0;
	for(int i=1;i<x;i++){
		if(x%i==0)
			s+=i;
	}
	return s;
}
int main(int argc, char *argv[]) {
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		if(n==cal(m)&&m==cal(n))
			printf("YES\n");
		else 
			printf("NO\n");
	}
    return 0;
}															
