class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t position = haystack.find(needle);

        if(position == string::npos)
            return -1;

        return position;
    }
};