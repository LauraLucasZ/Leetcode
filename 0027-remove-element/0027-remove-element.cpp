class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
                int p1=0;
        for(int p2=0; p2<nums.size(); p2++){
            if(nums[p2]!=val){
                nums[p1]=nums[p2];
                p1++;
            }
        }
        return p1;
    }
};