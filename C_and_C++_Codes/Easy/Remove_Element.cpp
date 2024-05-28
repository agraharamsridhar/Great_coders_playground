class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,len;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        len = nums.size();
        return len;       
    }
};
