#include<cstdio>
class Solution {
public:
    bool isPalindrome(int x) {
        char ch[100];
        sprintf(ch,"%d",x);
        
        int i,len=strlen(ch)-1;
        for(i=0;i<len;i++,len--)
        {
            if(ch[i]!=ch[len])
            {
                //printf("false");
                return false;
            }
        }
        return true;
        
    }
};
