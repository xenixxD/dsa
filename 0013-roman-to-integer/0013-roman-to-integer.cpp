class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map <char, int> mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for( int i = 0; i < n; i++) {
            int current = mp[s[i]];
            int next = mp[s[i + 1]];
            if(i + 1 < n && current < next) {
                ans -= current;
            } else {
                ans += current;
            }
        }  
        return ans;      
    }
};