class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
        k %= nums.size();

 std :: rotate(nums.begin(), nums.end() - k, nums.end()); 
    //rotate es una función de <algorithm> 
    }
};