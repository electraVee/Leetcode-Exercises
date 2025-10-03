class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int summa = 0;
       int n = nums.size();

       for(int i : nums)
           summa+= i;

       return (n * (n + 1))/2 - summa; // fórmula de sumatoria n * (n + 1) / 2

    }
};
