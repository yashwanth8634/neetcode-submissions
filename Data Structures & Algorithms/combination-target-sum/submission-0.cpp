class Solution {
public:
    void F(int ind,vector<int> &ds,vector<vector<int>>& ans,vector<int>& arr,int target,int n){
        if(ind >= n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            F(ind,ds,ans,arr,target-arr[ind],n);
            ds.pop_back();
        }
        F(ind+1,ds,ans,arr,target,n);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        F(0,ds,ans,nums,target,nums.size());
        return ans;
    }
};
