class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
    k %= nums.size(); // ahorra iteraciones normalizando con el %

 std :: rotate(nums.begin(), nums.end() - k, nums.end()); 
    //rotate es una función de <algorithm> 
    }
};