class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        char ch;
        int count = 0;
        for(int i = 0;i<jewels.length();i++)
{
    ch = jewels[i];
        for(int j = 0;j<stones.length();j++){
if(stones[j]==jewels[i]){
    count++;
}
        }

}   
return count;
 }
};