class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); i++) {
            bool unique = true;  // Assume the character is unique
            for (int j = 0; j < s.size(); j++) {
                if (i != j && s[i] == s[j]) {  // Check for duplicates
                    unique = false;
                    break;
                }
            }
            if (unique) {
                return i;  // Return the index of the first unique character
            }
        }
        return -1;  // Return -1 if no unique character is found
    }
};
