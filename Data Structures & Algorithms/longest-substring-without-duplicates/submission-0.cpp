#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int> map;
        int l = 0, r = 0;
        for(r = 0; r < s.size(); r++) {
            if (map.count(s[r])) {
                l = max(l, map[s[r]]+1);
            }
            map[s[r]] = r;
            ans = max(ans, r-l+1);
        }
        return ans; 
    }
};