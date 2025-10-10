class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;

        vector <int> count(26,0);

        for(char c: s)
            count[c - 97]++;
            //97 o 'a' es la dif de las minusculas y sus val numericos (empezando de 0)
        
        for(char c: t)
            count[c - 97]--;

        for(int c: count){
            if(c != 0)
                return false;
        }

        return true;
    }
};