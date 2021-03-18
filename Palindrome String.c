
int isPlaindrome(char s[])
{
    int i=0,length=0;
    while(s[i]!='\0'){
		length++;
		i++;
	}
	int flag=0;
	for(i=0;i<length;i++,length--){
		if(s[i]!=s[length-1]){
			flag++;
		}
	}
	if(flag==0){
		return 1;
	}
	else
		return 0;
	}

}
