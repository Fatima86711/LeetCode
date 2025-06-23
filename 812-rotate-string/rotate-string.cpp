class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()==goal.size()){
            if(s.empty()) return true;
         string doubled_s = s+s;
         if(doubled_s.find(goal)!=string::npos)
         return true;
        }
       
            return false;
        
    }
};