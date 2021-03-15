
int reverse(int n)
{
    int rem,res=0;
    while(n>0){
        rem=n%10;
        res=(res*10)+rem;
        n=n/10;
    }
    return res;
}
