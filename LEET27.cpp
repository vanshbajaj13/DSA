class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j=0;
        vector<int> v;
        while(i < nums.size()){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
};
