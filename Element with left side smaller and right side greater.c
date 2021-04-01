int findElement(int a[], int n) {
    int min[n],max[n],i,j,ans=-1;
    int b=a[0],s=a[n-1];
    for(i=0;i<n;i++){
        if(a[i]>b){
            b=a[i];
        }
        max[i]=b;
    }
    for(i=n-1;i>=0;i--){
        if(a[i]<s){
            s=a[i];
        }
        min[i]=s;
    }
    for(i=1;i<n-1;i++){
        
        if(min[i]==max[i]){
            ans=min[i];
            break;
        }
        
    }
   return ans;
}
