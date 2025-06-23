class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int s_size = s.size();
      int t_size = t.size();
        vector <int> s_to_t(256,0);
        vector <int> t_to_s(256, 0);
        if(s.size()!=t.size())
        return false;
        for(int i = 0;i<s.size();i++){
            char char_s = s[i];
            char char_t = t[i];
            if(s_to_t[char_s]!=0){
                if(s_to_t[char_s]!=char_t){
                    return false;
                }
            }
            else if(t_to_s[char_t]!=0){
                return false;
            }
            s_to_t [char_s] = char_t;
            t_to_s [char_t] = char_s;
        }
        return true;

    }
};