class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<pair<int,int>> a;
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++){
            int count = 1;
            while((i+1) < nums.size() && nums[i]==nums[i+1]){
                count+=1;
                i++;
            }
            a.push_back({count, nums[i]});
        }

        sort(a.begin(),a.end(),greater<pair<int, int>>());
        vector<int> b;
        for(int i=0; i<k;i++){
            b.push_back(a[i].second);
        }

        return b;
    }
};
