class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
        unordered_set<int> numSet;

        int duplicate, missing;
        for(int i = 0; i < size; i++) 
        {
            if(numSet.find(nums[i]) != numSet.end()) { 
                duplicate = nums[i];
            } else {
                numSet.insert(nums[i]);
            }
        }
        for(int i = 1; i <= size; i++) 
        {
            if(numSet.find(i) == numSet.end()) { 
                missing = i;
                break;
            }
        }
        result.push_back(duplicate);
        result.push_back(missing);
        return result;
    }
};
