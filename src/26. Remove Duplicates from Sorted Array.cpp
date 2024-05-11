class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // Tekrar etmeyen elemanı bir sonraki boş pozisyona taşı
                k++;
            }
        }
        return k; // Tekrar etmeyen elemanların sayısını döndür
    }
};
