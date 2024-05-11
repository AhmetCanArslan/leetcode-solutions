class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int lenNeed= needle.length();
        int lenHay = haystack.length();
        do 
        {
            if(haystack.substr(i,lenNeed) == needle)
            {
                return i;
            }
            i++;
        }while(i<=lenHay-lenNeed);
        return -1;
    }
};
