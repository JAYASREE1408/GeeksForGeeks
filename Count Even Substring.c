#include <stdio.h>
#include<string.h>

void main() {
	
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	    char s[50];
	    scanf("%s",s);
	    int i=0,count=0;
	    int len=strlen(s);
	    for(i=0;i<len;i++){
    	    int temp=s[i]-'0';
    	    if(temp%2==0){
    	        count=count+(i+1);
    	    }
    	    
	}
	printf("%d\n",count);
	
	}
}
