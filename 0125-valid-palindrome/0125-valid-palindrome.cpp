class Solution {
public:
    bool isPalindrome(string s){
        if(s.empty())
            return true;

        string aux;

        for(char c: s){
        if ((c >= 'A' && c <= 'Z') || 
            (c >= 'a' && c <= 'z') || 
            (c >= '0' && c <= '9')) {

            if (c >= 'A' && c <= 'Z') 
                c = tolower(c); // tolower es de <cctype> y pone minuscula chars
            
            aux += c;
        }
        }

    string rev = aux;              
    reverse(rev.begin(), rev.end()); 
    return aux == rev;
    }
};