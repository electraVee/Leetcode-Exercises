class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return num;

        for(long int i = 2; i <= num/2; i++){

            if(num == i * i)
                return true;
        }
        return false;
    }
};