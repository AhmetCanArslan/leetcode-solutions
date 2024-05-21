class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        
        int counter = 1;
        
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    counter++;
                }
            }
            if(counter>nums.size()/2)
            {
                return nums[i];
            }
            counter = 1;
        }
        return counter;
    }
};
