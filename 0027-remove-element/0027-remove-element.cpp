class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int digitsNotVal = 0;
        
        vector <int> result;

        for(int i: nums){
           if(i == val)
            continue;
           
           result.push_back(i);
           digitsNotVal++;
        }

        nums = result; 
        
        return digitsNotVal;
    }
};