#include<stdio.h>

int check(int A,int B,int C,int D){
    if(A+B+C+D==24)return 1;
    if(A+B+C-D==24)return 1;
    if(A+B+C*D==24)return 1;
        if(A+(B+C)*D==24)return 1;
        if((A+B+C)*D==24)return 1;
    if(A+B+C/D==24&&1.0*C/D==C/D)return 1;
        if(A+(B+C)/D==24&&1.0*(B+C)/D==(B+C)/D)return 1;
        if((A+B+C)/D==24&&1.0*(A+B+C)/D==(A+B+C)/D)return 1;
 
    if(A+B-C+D==24)return 1;
    if(A+B-C-D==24)return 1;
    if(A+B-C*D==24)return 1;
        if(A+(B-C)*D==24)return 1;
        if((A+B-C)*D==24)return 1;
    if(A+B-C/D==24&&1.0*C/D==C/D)return 1;
        if(A+(B-C)/D==24&&1.0*(B-C)/D==(B-C)/D)return 1;
        if((A+B-C)/D==24&&1.0*(A+B-C)/D==(A+B-C)/D)return 1;
 
    if(A+B*C+D==24)return 1;
        if((A+B)*C+D==24)return 1;
        if(A+B*(C+D)==24)return 1;
        if((A+B)*(C+D)==24)return 1;
    if(A+B*C-D==24)return 1;
        if((A+B)*C-D==24)return 1;
        if(A+B*(C-D)==24)return 1;
        if((A+B)*(C-D)==24)return 1;
    if(A+B*C*D==24)return 1;
        if((A+B)*C*D==24)return 1;
    if(A+B*C/D==24&&1.0*B*C/D==B*C/D)return 1;
        if((A+B)*C/D==24&&1.0*(A+B)*C/D==(A+B)*C/D)return 1;
        if((A+B*C)/D==24&&1.0*(A+B*C)/D==(A+B*C)/D)return 1;
 
    if(A+B/C+D==24&&1.0*B/C==B/C)return 1;
        if((A+B)/C+D==24&&1.0*(A+B)/C==(A+B)/C)return 1;
        if(A+B/(C+D)==24&&1.0*B/(C+D)==B/(C+D))return 1;
        if((A+B)/(C+D)==24&&1.0*(A+B)/(C+D)==(A+B)/(C+D))return 1;
    if(A+B/C-D==24&&1.0*B/C==B/C)return 1;
        if((A+B)/C-D==24&&1.0*(A+B)/C==(A+B)/C)return 1;
        if(C-D!=0&&A+B/(C-D)==24&&1.0*B/(C-D)==B/(C-D))return 1;
        if(C-D!=0&&(A+B)/(C-D)==24&&1.0*(A+B)/(C-D)==(A+B)/(C-D))return 1;
    if(A+B/C*D==24&&1.0*B/C*D==B/C*D)return 1;
        if((A+B)/C*D==24&&1.0*(A+B)/C*D==(A+B)/C*D)return 1;
    if(A+B/C/D==24&&1.0*B/C/D==B/C/D)return 1;
        if((A+B)/C/D==24&&1.0*(A+B)/C/D==(A+B)/C/D)return 1;
 

    if(A-B+C+D==24)return 1;
    if(A-B+C-D==24)return 1;
    if(A-B+C*D==24)return 1;
        if(A-(B+C)*D==24)return 1;
        if((A-B+C)*D==24)return 1;
    if(A-B+C/D==24&&1.0*C/D==C/D)return 1;
        if(A-(B+C)/D==24&&1.0*(B+C)/D==(B+C)/D)return 1;
        if((A-B+C)/D==24&&1.0*(A-B+C)/D==(A-B+C)/D)return 1;
 
    if(A-B-C+D==24)return 1;
    if(A-B-C-D==24)return 1;
    if(A-B-C*D==24)return 1;
        if(A-(B-C)*D==24)return 1;
        if((A-B-C)*D==24)return 1;
    if(A-B-C/D==24&&1.0*C/D==C/D)return 1;
        if(A-(B-C)/D==24&&1.0*(B-C)/D==(B-C)/D)return 1;
        if((A-B-C)/D==24&&1.0*(A-B-C)/D==(A-B-C)/D)return 1;
 
    if(A-B*C+D==24)return 1;
        if((A-B)*C+D==24)return 1;
        if(A-B*(C+D)==24)return 1;
        if((A-B)*(C+D)==24)return 1;
    if(A-B*C-D==24)return 1;
        if((A-B)*C-D==24)return 1;
        if(A-B*(C-D)==24)return 1;
        if((A-B)*(C-D)==24)return 1;
    if(A-B*C*D==24)return 1;
        if((A-B)*C*D==24)return 1;
    if(A-B*C/D==24&&1.0*C/D==C/D)return 1;
        if((A-B)*C/D==24&&1.0*(A-B)*C/D==(A-B)*C/D)return 1;
        if((A-B*C)/D==24&&1.0*(A-B*C)/D==(A-B*C)/D)return 1;
 
    if(A-B/C+D==24&&1.0*B/C==B/C)return 1;
        if((A-B)/C+D==24&&1.0*(A-B)/C==(A-B)/C)return 1;
        if(A-B/(C+D)==24&&1.0*B/(C+D)==B/(C+D))return 1;
        if((A-B)/(C+D)==24&&1.0*(A-B)/(C+D)==(A-B)/(C+D))return 1;
    if(A-B/C-D==24&&1.0*B/C==B/C)return 1;
        if((A-B)/C-D==24&&1.0*(A-B)/C==(A-B)/C)return 1;
        if(C-D!=0&&A-B/(C-D)==24&&1.0*B/(C-D)==B/(C-D))return 1;
        if(C-D!=0&&(A-B)/(C-D)==24&&1.0*(A-B)/(C-D)==(A-B)/(C-D))return 1;
    if(A-B/C*D==24&&1.0*B/C*D==B/C*D)return 1;
        if((A-B)/C*D==24&&1.0*(A-B)/C*D==(A-B)/C*D)return 1;
    if(A-B/C/D==24&&1.0*B/C/D==B/C/D)return 1;
        if((A-B)/C*D==24&&1.0*(A-B)/C*D==(A-B)/C*D)return 1;
 

    if(A*B+C+D==24)return 1;
        if(A*(B+C)+D==24)return 1;
        if(A*(B+C+D)==24)return 1;
    if(A*B+C-D==24)return 1;
        if(A*(B+C)-D==24)return 1;
        if(A*(B+C-D)==24)return 1;
    if(A*B+C*D==24)return 1;
        if(A*(B+C)*D==24)return 1;
        if(A*(B+C*D)==24)return 1;
        if((A*B+C)*D==24)return 1;
    if(A*B+C/D==24&&1.0*C/D==C/D)return 1;
        if(A*(B+C)/D==24&&1.0*A*(B+C)/D==A*(B+C)/D)return 1;
        if(A*(B+C/D)==24&&1.0*C/D==C/D)return 1;
        if((A*B+C)/D==24&&1.0*(A*B+C)/D==(A*B+C)/D)return 1;

    if(A*B-C+D==24)return 1;
        if(A*(B-C)+D==24)return 1;
        if(A*(B-C+D)==24)return 1;
    if(A*B-C-D==24)return 1;
        if(A*(B-C)-D==24)return 1;
        if(A*(B-C-D)==24)return 1;
    if(A*B-C*D==24)return 1;
        if(A*(B-C)*D==24)return 1;
        if(A*(B-C*D)==24)return 1;
        if((A*B-C)*D==24)return 1;
    if(A*B-C/D==24&&1.0*C/D==C/D)return 1;
        if(A*(B-C)/D==24&&1.0*A*(B-C)/D==A*(B-C)/D)return 1;
        if(A*(B-C/D)==24&&1.0*C/D==C/D)return 1; 
        if((A*B-C)/D==24&&1.0*(A*B-C)/D==(A*B-C)/D)return 1;

    if(A*B*C+D==24)return 1;
        if(A*B*(C+D)==24)return 1;
    if(A*B*C-D==24)return 1;
        if(A*B*(C-D)==24)return 1;
    if(A*B*C*D==24)return 1;
    if(A*B*C/D==24&&1.0*A*B*C/D==A*B*C/D)return 1;

    if(A*B/C+D==24&&1.0*A*B/C==A*B/C)return 1;
        if(A*B/(C+D)==24&&1.0*A*B/(C+D)==A*B/(C+D))return 1;
    if(A*B/C-D==24&&1.0*A*B/C==A*B/C)return 1;
        if(C-D!=0&&A*B/(C-D)==24&&1.0*A*B/(C-D)==A*B/(C-D))return 1;
    if(A*B/C*D==24&&1.0*A*B/C*D==A*B/C*D)return 1;
    if(A*B/C/D==24&&1.0*A*B/C/D==A*B/C/D)return 1;
 

    if(A/B+C+D==24&&1.0*A/B==A/B)return 1;
        if(A/(B+C)+D==24&&1.0*A/(B+C)==A/(B+C))return 1;
        if(A/(B+C+D)==24&&1.0*A/(B+C+D)==A/(B+C+D))return 1;
    if(A/B+C-D==24&&1.0*A/B==A/B)return 1;
        if(A/(B+C)-D==24&&1.0*A/(B+C)==A/(B+C))return 1;
        if(B+C-D!=0&&A/(B+C-D)==24&&1.0*A/(B+C-D)==A/(B+C-D))return 1;
    if(A/B+C*D==24&&1.0*A/B==A/B)return 1;
        if(A/(B+C)*D==24&&1.0*A/(B+C)*D==A/(B+C)*D)return 1;
        if(A/(B+C*D)==24&&1.0*A/(B+C*D)==A/(B+C*D))return 1;
    if(A/B+C/D==24&&1.0*A/B==A/B&&1.0*C/D==C/D)return 1;
        if(A/(B+C)/D==24&&1.0*A/(B+C)/D==A/(B+C)/D)return 1;
        if(A/(B+C/D)==24&&1.0*C/D==C/D&&1.0*A/(B+C/D)==A/(B+C/D))return 1;
        if((A/B+C)/D==24&&1.0*A/B==A/B&&1.0*(A/B+C)/D==(A/B+C)/D)return 1;

    if(A/B-C+D==24&&1.0*A/B==A/B)return 1;
        if(B-C!=0&&A/(B-C)+D==24&&1.0*A/(B-C)==A/(B-C))return 1;
        if(B-C+D!=0&&A/(B-C+D)==24&&1.0*A/(B-C+D)==A/(B-C+D))return 1;
    if(A/B-C-D==24&&1.0*A/B==A/B)return 1;
        if(B-C!=0&&A/(B-C)-D==24&&1.0*A/(B-C)==A/(B-C))return 1;
        if(B-C-D!=0&&A/(B-C-D)==24&&1.0*A/(B-C-D)==A/(B-C-D))return 1;
    if(A/B-C*D==24&&1.0*A/B==A/B)return 1;
        if(B-C!=0&&A/(B-C)*D==24&&1.0*A/(B-C)*D==A/(B-C)*D)return 1;
        if(B-C*D!=0&&A/(B-C*D)==24&&1.0*A/(B-C*D)==A/(B-C*D))return 1;
    if(A/B-C/D==24&&1.0*A/B==A/B&&1.0*C/D==C/D)return 1;
        if(B-C!=0&&A/(B-C)/D==24&&1.0*A/(B-C)/D==A/(B-C)/D)return 1;
        if(B-C/D!=0&&A/(B-C/D)==24&&1.0*C/D==C/D&&1.0*A/(B-C/D)==A/(B-C/D))return 1;
        if((A/B-C)/D==24&&1.0*A/B==A/B&&1.0*(A/B-C)/D==(A/B-C)/D)return 1;
 
    if(A/B*C+D==24&&1.0*A/B*C==A/B*C)return 1;
        if(A/(B+C)*D==24&&1.0*A/(B+C)*D==A/(B+C)*D)return 1;
        if(A/(B+C*D)==24&&1.0*A/(B+C*D)==A/(B+C*D))return 1;
    if(A/B*C-D==24&&1.0*A/B*C==A/B*C)return 1;
        if(A/B*(C-D)==24&&1.0*A/B*(C-D)==A/B*(C-D))return 1;
        if(B*C-D!=0&&A/(B*C-D)==24&&1.0*A/(B*C-D)==A/(B*C-D))return 1;//printf("%d %d %d %d\n",A,B,C,D);
    if(A/B*C*D==24&&1.0*A/B*C*D==A/B*C*D)return 1;
    if(A/B*C/D==24&&1.0*A/B*C/D==A/B*C/D)return 1;
 
    if(A/B/C+D==24&&1.0*A/B/C==A/B/C)return 1;
        if(A/B/(C+D)==24&&1.0*A/B/(C+D)==A/B/(C+D))return 1;
    if(A/B/C-D==24&&1.0*A/B/C==A/B/C)return 1;
        if(C-D!=0&&A/B/(C-D)==24&&1.0*A/B/(C-D)==A/B/(C-D))return 1;
    if(A/B/C*D==24&&1.0*A/B/C*D==A/B/C*D)return 1;
    if(A/B/C/D==24&&1.0*A/B/C/D==A/B/C/D)return 1;
    return 0;
}

int main()
{
	char str[5][3];
	while(~scanf("%s%s%s%s",str[1],str[2],str[3],str[4])){
	
		int a[5];
	    for(int i=1;i<=4;i++) {
	    	if(str[i][0]=='A')
	    		a[i]=1;
	    	else if(str[i][0]=='1'&&str[i][1]=='0')
	    		a[i]=10;
	    	else if(str[i][0]=='J')
	    		a[i]=11;
	    	else if(str[i][0]=='Q')
	    		a[i]=12;
	    	else if(str[i][0]=='K')
	    		a[i]=13;
	    	else
	    		a[i]=str[i][0]-'0';
		}
		//printf("%d %d %d %d\n",a[1],a[2],a[3],a[4]);
	    int ans=0,cnt=0;
	    ans|=check(a[1],a[2],a[3],a[4]);
	    ans|=check(a[1],a[2],a[4],a[3]);
		ans|=check(a[1],a[3],a[2],a[4]);
		ans|=check(a[1],a[3],a[4],a[2]);
		ans|=check(a[1],a[4],a[2],a[3]);
		ans|=check(a[1],a[4],a[3],a[2]);
		ans|=check(a[2],a[1],a[3],a[4]);
		ans|=check(a[2],a[1],a[4],a[3]);
		ans|=check(a[2],a[3],a[1],a[4]);
		ans|=check(a[2],a[3],a[4],a[1]);
		ans|=check(a[2],a[4],a[1],a[3]);
		ans|=check(a[2],a[4],a[3],a[1]);
		ans|=check(a[3],a[1],a[2],a[4]);
		ans|=check(a[3],a[1],a[4],a[2]);
		ans|=check(a[3],a[2],a[1],a[4]);
		ans|=check(a[3],a[2],a[4],a[1]);
		ans|=check(a[3],a[4],a[1],a[2]);
		ans|=check(a[3],a[4],a[2],a[1]);
		ans|=check(a[4],a[1],a[2],a[3]);
		ans|=check(a[4],a[1],a[3],a[2]);
		ans|=check(a[4],a[2],a[1],a[3]);
		ans|=check(a[4],a[2],a[3],a[1]);
		ans|=check(a[4],a[3],a[1],a[2]);
		ans|=check(a[4],a[3],a[2],a[1]);
	    printf("%s\n",(ans?"Yes":"No"));
	}
    return 0;
}

