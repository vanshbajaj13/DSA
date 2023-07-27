class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return ;
        }
        int size = nums.size()-1;
        k = k%(size+1);
        reverse(nums,0,size-k);
        reverse(nums,size-k+1,size);
        reverse(nums,0,size);
    }
    void reverse(vector<int>& v,int low , int high){
        while(low <= high){
            int temp = v[low];
            v[low] = v[high];
            v[high] = temp;
            low++;
            high--;
        }
    }
};
