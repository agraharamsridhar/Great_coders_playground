class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        lent=1
        for i in range(1,len(nums)):
            if nums[i]!=nums[i-1]:
                nums[lent]=nums[i]
                lent=lent+1
        return lent
