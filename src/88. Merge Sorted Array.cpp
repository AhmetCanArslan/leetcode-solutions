class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1; // nums1'in son gerçek elemanının indisini belirle
        int j = n - 1; // nums2'nin son gerçek elemanının indisini belirle
        int k = m + n - 1; // Birleştirilmiş vektördeki son elemanın indisini belirle

        while (i >= 0 && j >= 0) { // nums1 ve nums2 vektörlerinde elemanlar olduğu sürece
            if (nums1[i] > nums2[j]) { // nums1'in şu anki elemanı nums2'nin şu anki elemanından büyükse
                nums1[k--] = nums1[i--]; // nums1'in şu anki elemanını birleştirilmiş vektördeki uygun konuma yerleştir
            } else { // nums2'nin şu anki elemanı nums1'in şu anki elemanından büyükse veya eşitse
                nums1[k--] = nums2[j--]; // nums2'nin şu anki elemanını birleştirilmiş vektördeki uygun konuma yerleştir
            }
        }

        // nums2 vektöründe eleman kalmış olabilir, bunları birleştirilmiş vektöre ekleyelim
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
