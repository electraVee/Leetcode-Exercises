class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for(int i: nums){
            if(count == 0)
                candidate = i;

           count = count + ((i == candidate) ? 1 : -1); 
           //algoritmo Boyer-Moore Majority Vote
        }
        
        return candidate;
    }
};