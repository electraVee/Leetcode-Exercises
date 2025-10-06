class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
            return n;

        int fibo = 0;
        int n1 = 0; int n2 = 1;

        for(int i = 0; i <= n; i++){

            if(i == 0 || i == 1)
                continue;

            fibo = n1 + n2;
            n1 = n2;
            n2 = fibo;
        }

        return fibo;
    }
};