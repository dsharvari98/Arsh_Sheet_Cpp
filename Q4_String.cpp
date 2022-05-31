class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string common = "";
         sort(strs.begin(), strs.end());
         char n = strs.size();
         for(char i = 0; i<min(strs[0].length(),strs[n-1].length()); i++){
             if(strs[0][i] == strs[n-1][i])
                 common += strs[0][i];
             else
                 break;
        }
        return common;
    }
};