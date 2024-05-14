class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurrences;
        vector<int> counts;
        for (int num : arr) {
            occurrences[num]++;
        }
        for (auto& pair : occurrences) {
            counts.push_back(pair.second);
        }
        for (int i = 0; i < counts.size(); ++i) {
            for (int j = i + 1; j < counts.size(); ++j) {
                if (counts[i] == counts[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};
