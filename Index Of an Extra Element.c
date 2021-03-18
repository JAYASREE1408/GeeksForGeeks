int search(int *A,int *B,int l,int h)
{
    int mid=l+(h-l)/2;
    if(mid==h)
     return mid;
    if(A[mid]==B[mid])
    return search(A,B,mid+1,h);
    
    if(A[mid]!=B[mid-1])
    return mid;
    
    return search(A,B,l,mid-1);
}
int findExtra(int a[],int b[],int n)
{
 //add code here.
  return search(a,b,0,n-1);
}
