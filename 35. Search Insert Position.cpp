class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {  
        for(int i=0;i<nums.size();i++) // travel on vector
        {
            if(nums[i]== target)
            {
                return i; // if target exists, return target index
            }
            else if(target<nums[i])
            {
                return i; // if not, we have to place target value to ascending order so, it'll be placed before the number wich is greater from our target
            }       
        } 
        return nums.size();
    }
};
