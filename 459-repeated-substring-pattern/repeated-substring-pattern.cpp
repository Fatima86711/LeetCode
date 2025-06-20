class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubledstring = s+s ;
       string substring =  doubledstring.substr(1, (doubledstring.length())-2);
        return substring.find(s) != string::npos;






    }
};

// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         // string doubledstring = s+s;
//         // string substring = doubledstring.substr(1, (doubledstring.length())-2);
//         // return substring.find(s) != string:: npos ;
//  int n = s.length();
//         for (int len = 1; len <= n / 2; ++len) {
//             if (n % len == 0) { // Check if 'len' divides 'n'
//                 string substring = s.substr(0, len);
//                 string repeated = "";
//                 for (int i = 0; i < n / len; ++i) {
//                     repeated += substring;
//                 }
//                 if (repeated == s) return true;
//             }
//         }
//         return false;

//     }
// };