class Solution
{
    public:
    void sort012(int a[], int n)
    {
       int i,c0=0,c1=0,c2=0;
       for(i=0;i<n;i++){
            if(a[i]==0)
                c0++;
            if(a[i]==1)
                c1++;
       }
      for(int j=0;j<c0;j++){
          a[j]=0;
      }
      for(int k=c0;k<(c0+c1);k++){
          a[k]=1;
      }
      for(int h=c0+c1;h<n;h++){
          a[h]=2;
      }
    }
    
};
