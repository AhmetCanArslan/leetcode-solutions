class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        if(words.empty())
            return "";
        for(string i:words)
        {
            string temp = i;
            reverse(temp.begin(),temp.end());
            if(i == temp )
                return i;
        }
        return "";
    }
};
