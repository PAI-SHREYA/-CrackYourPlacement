class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map <int,int> a;
      for(int i=0;i<nums.size();i++)
      {
        int comp=target-nums[i];
        if(a.find(comp)!=a.end()) return{a[comp],i};
        a[nums[i]]=i;
      }
      return {};



    }
};
