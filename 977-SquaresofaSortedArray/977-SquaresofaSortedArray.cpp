// Last updated: 5/20/2026, 6:15:12 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int st = 0;
        int en = nums.size()-1;
        int i = en;

        while(st<=en) {
            if(abs(nums[st])<abs(nums[en])) {
                res[i--] = nums[en]*nums[en];
                en--;
            }
            else {
                res[i--] = nums[st]*nums[st];
                st++;
            }
        }
        return res;
    }
};