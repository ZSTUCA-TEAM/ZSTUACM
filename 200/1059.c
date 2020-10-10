#include <stdio.h>

int main()
 {
     int n;
     int a[1000];
     int cnt;
     while(scanf("%d",&n)!=EOF)
     {
     	cnt=0;
     	for(int i=1;i<=n;i++){
     		if(i%3==0)
     			a[++cnt]=i;
		}
        for(int i=1;i<=cnt;i++){
        	if(i==cnt)
        		printf("%d\n",a[i]);
        	else
        		printf("%d ",a[i]);
		}
     }
 } 
