class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxCandidate = INT_MIN;

        for (int num : numSet) {
            if (numSet.count(-num) > 0) {
                maxCandidate = max(maxCandidate, abs(num));
            }
        }

        if (maxCandidate != INT_MIN) {
            return maxCandidate;
        } else {
            return -1;
        }
    }
};
