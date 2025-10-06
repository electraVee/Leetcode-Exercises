class Solution {
public:
    int addDigits(int num) {
        if(num < 10)
            return num;

        int suma = 0;

        while(num > 0){
            suma = suma + (num % 10);
            num/=10;
        }
        
        return addDigits(suma);
    }
};