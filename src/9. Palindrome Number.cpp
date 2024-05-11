class Solution {
public:
    bool isPalindrome(int x) {
        string converted = to_string(x);
        string converted2 = "";
        int i = converted.size();
        while(i>0)
        {
            converted2 = converted2 + converted[i - 1];
            i--;
        }
        if (converted == converted2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
