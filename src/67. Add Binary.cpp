class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int sizeA = a.size();
        int sizeB = b.size();
        string sum= "";
        int sizeMax = max(sizeA,sizeB);
        for(int i = 0; i < sizeMax || carry; i++) {
            int x = (i < sizeA) ? a[sizeA - i - 1] - '0' : 0;
            int y = (i < sizeB) ? b[sizeB - i - 1] - '0' : 0;
            int digitSum = x + y + carry;
            sum.push_back((digitSum % 2) + '0');
            carry = digitSum / 2;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
