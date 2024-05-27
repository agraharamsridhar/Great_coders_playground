class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,total = nums.size();
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        int len = nums.size();
        return len;
    }
};
