class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int p1=0, p2 = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector <int> result;
        while(p1< n1 && p2 < n2){
            if(nums1[p1]<nums2[p2]){
                p1++;
            }
            else if(nums1[p1]>nums2[p2]){
                p2++;
            }
            else{
                result.push_back(nums1[p1]);
                p1++, p2++;
            }
        }
        return result;
    }
};