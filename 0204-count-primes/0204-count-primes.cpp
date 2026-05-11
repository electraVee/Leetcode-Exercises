class Solution {
public:
    int countPrimes(int n) {

        if(n == 0 || n == 1)
            return 0;
        
        vector <bool> primos(n,true);
    long int count = n-2;
        primos[0] = false; primos[1]=false;

        for(int i = 2; i < n; i++){
            if(primos[i] && i < sqrt(n)){
            for(int j = i*i; j < n; j+=i){
                if (primos[j]) { 
                    primos[j] = false;
                    count--;
                }
            }

            }

        }
         return count;
    }
};