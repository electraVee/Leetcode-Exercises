class Solution {
public:
    int countPrimes(int n) {

        if(n == 0 || n == 1)
            return 0;
        
        vector <bool> primos(n,true);

        primos[0] = false; primos[1]=false;

        for(int i = 2; i < n; i++){
            if(primos[i] && i <= sqrt(n)){
                
            for(int j = i*i; j < n; j+=i){
                primos[j] = false;
            }

            }

        }
         return count(primos.begin(), primos.end(),true);
    }
};