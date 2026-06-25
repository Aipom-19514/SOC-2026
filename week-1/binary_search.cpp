class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int a=0, c=n-1;
        while(a<=c){
            int b=(a+c)/2;
            if(nums[b]==target)
                return b;
            else if(nums[b]<target)
                a=b+1;
            else
                c=b-1;
        }
        return -1;
    }
};