#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while (left < right) {
            while ( left<right && !std::isalnum(static_cast<unsigned char>(s[left]))) left++;
            while ( left<right && !std::isalnum(static_cast<unsigned char>(s[right]))) right--;
            
            if( std::tolower(s[left])!= std::tolower(s[right]) ) return false;

            left++;
            right--;
        }

        return true;
    }
};

