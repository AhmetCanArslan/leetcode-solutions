class Solution {
public:
    int maxScore(string s) {
        int score = 0;
        int length = s.length();
        for(int i = 0;i<length;i++)
        {
            
            int tempSc=0;
            string s1 = s.substr(0,i+1);
            string s2 = s.substr(i+1);
            if(s2=="")
            {
                continue;
            }
            for(char i:s1)
            {
                if(i == '0')
                {
                    tempSc++;
                }
            }     
            for(char i:s2)
            {
                if(i=='1')  
                {
                    tempSc++;
                }     
            }
            score = max(tempSc,score);   
        }
        return score;
    }
};
