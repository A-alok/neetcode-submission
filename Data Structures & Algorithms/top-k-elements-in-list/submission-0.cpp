class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> a;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int count = 1;
            while((i+1) < nums.size() && nums[i]==nums[i+1]){
                count+=1;
                i++;
            }
            if(count>=k){
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};
