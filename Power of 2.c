class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
    //   for(int i=0;i<n/2;i++){
    //       if(pow(2,i)==n){
    //           return 1;
    //           exit(1);
    //       }
    //   } 
    //   return 0;
    if(n==0)
        return false;
    return(!(n&(n-1)));
        
    }
};
