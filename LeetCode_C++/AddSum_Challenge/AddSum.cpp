class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 int i,j,temp=0;
        
for(i=0;i<(nums.size()-1);i++)
  {
      for(j=i+1;j<nums.size();j++)
      {
          if((nums[i]+nums[j])==target)
          {
              temp=1;
              break;
          }
      }
      if(temp==1)
      {
          break;
      }
  }
  
  if(temp==1)
  {
      return {i,j};
  }
 
 
}
    
};