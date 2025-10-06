class Solution {
public:

    int climbStairs(int n) {

    if(n == 1 || n == 0)
    return n;

    int fibo = 0; 
    int V1 = 1, V2 = 1; 

    for (int i = 0; i <= n; i++){

        if(i == 1 || i == 0)
            continue;
        
        fibo = V1 + V2;
        V1 = V2;
        V2 = fibo;
    }
        return fibo; 
    }
    
    
};