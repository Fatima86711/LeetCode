class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5, count10, count20;
        count5 = count10 = count20 = 0;
        int total = 0;
        int n = bills.size();
        for(int i = 0;i<n;i++){
            if(bills[i]==5){
                count5 = count5+1;
                total = total + 5;
            }
            else if( bills[i]==10){
                if(count5){
                    count5 = count5 -1;
                    
                    total = total -5;
                    count10 = count10 + 1;
                }
                else{
                    return false;
                }}
            else if(bills[i]== 20){
                if(count5>0 && count10 >0){
                    count10 = count10-1;
                    count5= count5 - 1;
                    
                }
                else if(count5>=3){
                    count5 = count5-3;
                }
                else{
                    return false;
                }
            }

            
        }
        return true;
    }
};