class Solution {
public:
    int scoreOfString(string s) {
        int size = s.size();
        int sum = 0;
        for(int i = 0;i<size-1;i++)
        {
            char a = s[i];
            char b = s[i+1];
            sum += abs(int(a)-int(b));
        }
        return sum;
    }
};
