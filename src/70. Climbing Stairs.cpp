class Solution {
public:
    int climbStairs(int n) {
    if (n <= 2) return n; 

    int onceki = 1;
    int suanki = 2; 

    for (int i = 3; i <= n; ++i) {
        int sonraki = onceki + suanki; 
        onceki = suanki; 
        suanki = sonraki; 
    }

    return suanki; 
}

};
