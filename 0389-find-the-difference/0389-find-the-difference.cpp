class Solution {
public:
    char findTheDifference(string s, string t) {
    int chardif = 0;

    for (char c : t)
        chardif += c;

    for (char c : s)
        chardif -= c;
        
    return (char)chardif;    
    }
};