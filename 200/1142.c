#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,l;
    char s[30],q;
    scanf("%d%c",&n,&q);
    for(int i=0;i<n;i++){
        //gets(s);
        scanf("%s",&s);
        l=strlen(s);
        if(s[l-1]=='y'||s[l-1]=='s'||s[l-1]=='x'||s[l-1]=='o'){
                cout<<s<<"es"<<endl;
        }else{
            if((s[l-2]=='s'&&s[l-1]=='h')||(s[l-2]=='c'&&s[l-1]=='h')){
                    cout<<s<<"es"<<endl;
            }else{
                cout<<s<<'s'<<endl;
            }
        }
    }

	return 0;
}
