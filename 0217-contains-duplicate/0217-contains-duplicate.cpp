class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <int> :: iterator it = unique(nums.begin(),nums.end());
        //unique es una función de <algorithm>
        int pos = distance(nums.begin(),it);

        return pos != nums.size();
    }
};