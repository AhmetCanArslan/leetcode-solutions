class Solution {
public:
    int mySqrt(int x) {
        if (x <= 0)  return 0;

        int i = 1;
        while (true) {
            long long iSquared = static_cast<long long>(i) * i;
            long long nextSquared = static_cast<long long>(i + 1) * (i + 1);

            if (iSquared <= x && nextSquared > x) {
                return i;
            }
            i++;
        }
    }
};
