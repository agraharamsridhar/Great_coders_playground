class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {

        bool ii = true;
        int remove_count =0;
        int s_nums = nums.size();
        int ff;
        while(ii)
        {
            vector<int>::iterator it = min_element(nums.begin(),nums.end());

            if(nums.empty())
            {
                ii = false;
                
                return -1;
            }

            for(ff=0;ff<numsDivide.size();ff++)
            {
                if(numsDivide[ff]%(*it) !=0)
                {
                    int num_deleted = nums.size();
                    int value = *it;
                    nums.erase(remove(nums.begin(), nums.end(), value), nums.end());
                    num_deleted -= nums.size();
                 //   cout<<"\n";
                  //  cout<<"numes deleted is "<<num_deleted<<"\n";
                    remove_count += num_deleted;
                    break;
                }
            }
            if(ff == numsDivide.size())
            {
                cout<<"ans is "<<remove_count;
                return remove_count;
            }

            
        }
        return remove_count;
    }
};
