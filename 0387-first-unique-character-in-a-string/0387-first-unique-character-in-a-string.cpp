class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> abc(26,0); 

        for(char c: s){
            abc[c - 97]++;
        }

        for(int i = 0; i < s.size(); i++){
            if(abc[s[i] - 97] == 1)
                return i;
        }

        return -1;
        
    }
};