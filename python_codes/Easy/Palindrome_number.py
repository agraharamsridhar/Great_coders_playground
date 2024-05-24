class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp=x
        res=0
        while temp>0:
            digit=temp%10
            res=res*10+digit
            temp=temp//10
        return True if res==x else False
