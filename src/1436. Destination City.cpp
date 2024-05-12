class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int size = paths.size();
        
        unordered_set<string> startCities;
        for (int i = 0; i < size; ++i) {
            startCities.insert(paths[i][0]);
        }
                for (int i = 0; i < size; ++i) {
            if (startCities.find(paths[i][1]) == startCities.end()) {
                return paths[i][1];
            }
        }
        return "";
    }
};
