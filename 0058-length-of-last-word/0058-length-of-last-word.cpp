#include <iostream>

class Solution {
public:
    int lengthOfLastWord(string s) {

    int i = s.size() - 1;
    string candidate = "";

    while(i >= 0 && s[i] == ' ')
        i--;

    while(i >= 0 && s[i] != ' '){
        candidate += s[i];
        i--;
    }
        return candidate.size();
    }
};