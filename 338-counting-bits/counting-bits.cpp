class Solution {
public:
    vector<int> countBits(int k) {
        
        vector< int>arr(k+1,-1);
       
        int num=0;
        int remainder = 0;
         arr[0]=0;
          if (k == 0) {
            return arr;
        }
        arr[1]=1;
        int n = k;
            for(int i =2;i<n+1;i++){
              num=0;

            int l = i;   
while(l>0){
if(l%2==1){
    num++;
}    
     l= l/2;
            }
            arr[i] = num;
        }
        return arr;
    }
};