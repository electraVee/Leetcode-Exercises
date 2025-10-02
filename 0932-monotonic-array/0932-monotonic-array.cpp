class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;
        
        for(int i = 1; i < nums.size(); i++){

            if(nums[i] > nums[i - 1])
                decreasing = false;  // desactiva decreciente

            if(nums[i] < nums[i - 1])
                increasing = false; //desactiva creciente
        }

        return increasing || decreasing; // si alguna sigue activa es true
    }
};