
void check_armstrong(int n)
{
    int rem,res=0,temp=n;
   while(n>0){
       rem=n%10;
       res=res+(rem*rem*rem);
       n=n/10;
   }
   if(temp==res){
       printf("yes");
   }
   else
        printf("no");
}
