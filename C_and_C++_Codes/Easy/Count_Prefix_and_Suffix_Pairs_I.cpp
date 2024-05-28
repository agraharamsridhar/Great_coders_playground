class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        string sub;
        size_t found;
        int i,len = words.size(),count=0,j;
        for(i=0;i<len;i++)
        {
            sub = words[i];
            for(j=i+1;j<len;j++)
            {
                found = words[j].find(sub);
                if(found != string::npos && found==0)
                {
                    found = words[j].find(sub,words[j].size()-sub.size());
                    if(found !=string::npos && found+sub.size()== words[j].size())
                    {
                        cout<<"Done with "<<words[i]<<"  its main string is "<<words[j]<<endl;;
                        count++;
                    }
                }  
            }
        }
        return count;
    }
};
