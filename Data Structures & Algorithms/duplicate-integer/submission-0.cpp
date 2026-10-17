class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m1; 

        for( int i=0; i < nums.size(); i++ ) {
            m1[nums[i]]++;
        }

        for (auto j = m1.begin(); j != m1.end(); j++) {
            if (j->second > 1)  return true;
        }
        return false;
    }
};