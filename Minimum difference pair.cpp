int  minimum_difference(vector<int>nums)
{
   	       sort(nums.begin(),nums.end());
   	       int ans=INT_MAX;
   	       for(int i=0;i<nums.size()-1;i++)
   	       {
   	           if(abs(nums.at(i)-nums.at(i+1))<ans)
   	           {
   	               ans=abs(nums.at(i)-nums.at(i+1));
   	           }
   	       }
   	       return ans;
}   
