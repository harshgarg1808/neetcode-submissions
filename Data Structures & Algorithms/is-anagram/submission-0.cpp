class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length()) return false;
        
        int size = s.length();
        unordered_map <char, int> m1;

        for (int i = 0; i < size ; i++) {
            m1[s[i]]++;
            m1[t[i]]--;
        }

        for (auto j = m1.begin(); j != m1.end(); j++){
            if(j->second != 0 ) return false;
        }
        return true;
    }
};
