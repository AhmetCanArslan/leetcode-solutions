class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int counter = 0;
        for(int i = 0;i<size;i++)
        {
            if(i != nums[i])
            {
                return i;
            }
            counter ++;
        }
        return counter;
    }
};
