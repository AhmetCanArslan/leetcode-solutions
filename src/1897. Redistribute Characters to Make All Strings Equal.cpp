class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> counts;
        for(auto a: words)
        {
            for(char x : a)
            {
                counts[x]++;
            }
        }
        
        int size = words.size();
        for(auto a : counts)
        {
            if(a.second % size != 0)
            {
                return false;
            }
        }
        return true;
    }
};
