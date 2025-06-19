class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> char_count(26,0);
        for(char c:s){
            char_count[c-'a']++;
        }
        for(int i = 0 ;i<s.size();i++){
            int count = char_count[s[i]-'a'];
            if(count==1){
                return i;
            }
        }
        return -1;
    }
};







// class Solution {
// public:
//     int firstUniqChar(string s) {
//         for (int i = 0; i < s.size(); i++) {
//             bool unique = true;  
//             for (int j = 0; j < s.size(); j++) {
//                 if (i != j && s[i] == s[j]) { 
//                     unique = false;
//                     break;
//                 }
//             }
//             if (unique) {
//                 return i;  
//             }
//         }
//         return -1;  
//     }
// };
