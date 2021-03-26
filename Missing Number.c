int MissingNumber(vector<int>& a, int n) {
    int i;
    int sum=(n*(n+1))/2;
    int sum1=0;
    for(i=0;i<n-1;i++){
        sum1=sum1+a[i];
    }
    return sum-sum1;
}
