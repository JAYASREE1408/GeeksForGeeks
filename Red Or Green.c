
class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int i=0,R=0,G=0;
           while(i<N){
               if(S[i]=='R'){
                   R++;
               }
               if(S[i]=='G'){
                   G++;
               }
           i++;
           }
           if(R<=G){
               return R;
           }
           else{
               return G;
           }
    }
};
