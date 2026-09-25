class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int XoR = 0;
        for(int i = 0;i<nums.size();i++){
            XoR = XoR ^ nums[i];
        }
        return XoR;
    }
    
};