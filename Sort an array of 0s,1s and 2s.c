//Sort an array of 0s, 1s and 2s
void sort012(int a[], int n)
{
    int i,j,t;
    int mid=0,lower=0,upper=n-1;
    while(mid<=upper){
        if(a[mid]==0){
            t=a[mid];
            a[mid]=a[lower];
            a[lower]=t;
            mid++;
            lower++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            t=a[mid];
            a[mid]=a[upper];
            a[upper]=t;
            upper--;
        }
        
    }
    
}
