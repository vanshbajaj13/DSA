class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ls = 1,rs=1;
        vector<int> ans(nums.size(),0);
        for(int i = (nums.size()-1) ; i >= 0;i--){
            ans[i] = rs;
            rs *= nums[i];
        }
        for(int i = 0 ; i < nums.size() ;i++){
            ans[i] = ans[i]*ls;
            ls *= nums[i];
        }
        return ans;
    }
};
