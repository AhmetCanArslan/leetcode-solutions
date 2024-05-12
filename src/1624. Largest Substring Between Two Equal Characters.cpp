class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int size = s.size();
        int result = -1;
        
        for(int i = 0; i < size; ++i)
        {
            for(int j = size - 1; j > i; --j)
            {
                if(s[i]==s[j])
                {
                    result = max(result, j - i - 1);
                }
            }
        }
        return result;
    }
};
