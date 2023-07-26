class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , j =1 , count = 1;
        while(j < nums.size()){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
                count = 1;
            }
            else{
                if(count == 1){
                    i++;
                    nums[i] = nums[j];
                    count = 1;
                }
                count++;
            }
            j++;
        }
        return i+1;
    }
};
