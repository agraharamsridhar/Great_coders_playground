class Solution {
public:
    int romanToInt(string s) {
        unsigned int total =0;
        string dummy;
        std::map<char, int> RtoN = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
      //  auto f = RtoN.find(s[0]);
        int first = RtoN[s[0]];
        dummy= s[0];
        cout <<"    "<<s.length();
        for(int i=0;i<s.length();)
        {
          if(RtoN[s[i]] < RtoN[s[i+1]])
          {
              total += (RtoN[s[i+1]] - RtoN[s[i]]);
              i +=2;
          }
          else
          {
              total += RtoN[s[i]];
              i++;
          }
        }
        return total;

    }
};
