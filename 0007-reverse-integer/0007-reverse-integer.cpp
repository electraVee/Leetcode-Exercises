class Solution {
public:
    int reverse(int x) {
        int aux = 0; int result = 0;

    while(x != 0){
        aux = x % 10;

    if((result < -2147483648/10) || (result > 2147483647/10) )
        return 0;
    
    result = result * 10 + aux;

    x/=10;
    }
        return result;
    }
};