class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    int i=0;
	    cout<<S[0];
	    while(S[i]!='\0'){
	        
	        if(S[i]==' '){
	            cout<<S[i+1];
	        }
	        i++;
	    }
	    
	}
};
