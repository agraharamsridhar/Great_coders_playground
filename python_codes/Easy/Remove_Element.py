class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        lent=0
        for i in range(len(nums)):
            if nums[i]!=val:
                nums[lent]=nums[i]
                lent=lent+1
        return lent
