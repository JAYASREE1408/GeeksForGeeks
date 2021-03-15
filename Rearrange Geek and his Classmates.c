/*Geek and his classmates are playing a prank on their Computer Science teacher. They change places every time the teacher turns to look at the blackboard. 

Each of the N students in the class can be identified by a unique roll number X and each desk has a number i associated with it. Only one student can sit on one desk. 
Each time the teacher turns her back, a student with roll number X sitting on desk number i gets up and takes the place of the student with roll number i.

If the current position of N students in the class is given to you in an array, such that i is the desk number and a[i] is the roll number of the student sitting on the desk, can you modify a[ ] to represent the next position of all the students ? 


Example 1:

Input:
N = 6
a[] = {0, 5, 1, 2, 4, 3}
Output: 0 3 5 1 4 2
Explanation: After reshuffling, the modified 
position of all the students would be 
{0, 3, 5, 1, 4, 2}.


Example 2:

Input:
N = 5
a[] = {4, 3, 2, 1, 0}
Output: 0 1 2 3 4 
Explanation: After reshuffling, the modified 
position of all the students would be 
{0, 1, 2, 3, 4}.*/

class Solution {
  public:
    void prank(long long a[], int n){
        
    long long int arr[n],arr2[n];
    
    for(int i=0;i<n;i++) {
    arr[a[i]]=i;
    }
    
    for(int i=0;i<n;i++) {
    arr2[arr[i]]= a[i];
    
    }
    
    for(int i=0;i<n;i++) {
    a[i]=arr2[i];
    }
    }

    //     int res[n];
    //     for(int i=0;i<n;i++){
    //         if(a[i]==i){
    //             res[i]=a[i];
    //         }
    //         else{
    //             int pos=i;
    //             for(int j=0;j<n;j++){
    //                 if(i==a[j]){
    //                     res[j]=a[i];
    //                 }
    //             }
    //         }
    //     }
    //     for(int z=0;z<n;z++){
    //         a[z]=res[z];
    //     }
    // }
};
