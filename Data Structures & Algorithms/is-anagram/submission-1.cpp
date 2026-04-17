class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        for (int i = 0; i < max(s.size(), t.size()); i++) {
            map[s[i]]++;
            map[t[i]]--;
        }
        for(auto& [key, val] : map) {
            if (val != 0) return false;
        }
        return true;
    }
};
