#include <stdio.h>

int main() 
{
	int t,i,j,k,r,n;
	scanf("%d",&t);
	for(int z=0;z<t;z++){
	    scanf("%d%d",&n,&r);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[(i+n-r)%n]);
	    }
	   // for(i=0;i<r;i++){
	   //    int temp=a[0];
	   //         for(j=0;j<=n-1;j++){
	   //             a[j]=a[j+1];
	   //         }
	   //         a[n-1]=temp;
	   // }
	    for(i=0;i<n;i++){
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	}
}
