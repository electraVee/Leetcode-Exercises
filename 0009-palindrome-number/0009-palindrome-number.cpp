class Solution {
public:
    bool isPalindrome(int x) {

    if(x < 0)
        return 0;

    long int aux = x; long int inverted = 0;

    while(aux != 0){
        inverted = inverted * 10 + aux % 10;
        aux/=10;
    }

    return inverted == x;   
    }
};