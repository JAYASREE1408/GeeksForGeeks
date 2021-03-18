
class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
    unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[a[i]]++;
        int count=0;
        for(int i=0;i<n;i++){
            int x=k-a[i];
            if(m[x]>0){
                if(x!=a[i]){
                    count+=m[x];
                    m[a[i]]--;
                }
                else{
                    count+=(m[x]-1);
                    m[a[i]]--;
                }
            }
        }
        return count;
    }
};
