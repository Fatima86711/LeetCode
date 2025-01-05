class Solution {
public:
    void reverseString(vector<char>& s) {
        // int n = s.size();
        int k =0;
        int temp;
        int start = 0;
        int end= s.size()-1;
       while(start<end){
        temp= s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
       }
    }
};