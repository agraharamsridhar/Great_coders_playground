import math
class Solution:
    def bulbSwitch(self, n: int) -> int:
        if n ==0:
            return 0
        if n==1 or n==2:
            return 1
        if n >=9999:
            return int(math.sqrt(n))
        if n%2 !=0:
            lst = [1,0]* (n//2) + [1]
        else:
            lst = [1,0]* (n//2)
        for i in range(3,n+1):
            for j in range(i,n+1,i):
                lst[j-1] = int(not lst[j-1])
        count = 0
        for i in lst:
            if i==1:
                count = count +1
        return count
    
