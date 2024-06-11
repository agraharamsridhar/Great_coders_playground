e<cstring>
#include<bits/stdc++.h>
#include <algorithm>
class Solution {
public:
    bool palin(char *s) {
        if(s == nullptr) {
            return false;
        }
        size_t l = strlen(s);
        string f(s, l);
        string x(s, l);
        reverse(f.begin(), f.end());
        return f == x;
    }
    string longestPalindrome(string s) {
    char *sub = s.data(),*f,*l;
    char *check = new char[10000];
    string big = "";
    if(s.size()==0 || s.size()==1)
    {
        return s;
    }
    else
    {
        big = s.substr(0,1);
    }
    for(int i=0;sub[i];i++)
    {
        for(int j =i+1;sub[j];j++)
        {
            if(sub[i]==sub[j])
            {
                strncpy(check,sub+i,(j-i+1));
                check[j-i+1] = '\0';
                if(palin(check) && strlen(check) > big.size())
                {
                    string dum(check);
                    big = dum;
                }
            }
        }
    }

    return big;
    }
    };
