class Solution {
  public:
    string delAlternate(string S) {
        int i=0;
        while(S[i]!='\0'){
            if(i%2==0){
                cout<<S[i];
            }
            i++;
        }
    }
};
