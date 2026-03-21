class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        int carry = 0;
        int i = a.size()-1;
        int j = b.size()-1;

       for(; (i>= 0 && j>=0) ;i--, j--){
            int actual = a[i] - 48 + b[j] - 48 + carry;
            c = ((char)((actual%2) + 48)) + c;
            carry = actual / 2;
       }

        for(;i>=0;i--){
        int actual = (a[i] - 48) + carry;
         c = (char)((actual % 2) + 48) + c;
        carry = actual / 2;
        }

        for(;j>=0;j--){
        int actual = (b[j] - 48) + carry;
         c = (char)((actual % 2) + 48) + c;
        carry = actual / 2;
        }

        if(carry){
        c.insert(0, 1, '1');
       }

       return c;

    }
};