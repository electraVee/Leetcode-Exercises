class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) 
            return "";
        
        string base = strs[0];

        for(int i = 1; i < strs.size(); i++){

            while(strs[i].rfind(base,0) != 0){
                base.pop_back();

                if(base.size() == 0) 
                    return "";
            }
        }

        return base;
    }
};