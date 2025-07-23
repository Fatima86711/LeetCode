class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)
    {return 1;}
    vector <long long> outdegree(n+1,0); 
    vector <long long> indegree(n+1,0);
    for(auto &it:trust){
        int trustigPerson =it[0];
        int trustedPerson =it[1];
        outdegree[trustigPerson]++;
        indegree[trustedPerson]++;

    }
    for(int i =1;i<=n;i++){
        if(outdegree[i]==0 && indegree[i]==n-1){
            return i;
        }

    }
    return -1;
    }
};