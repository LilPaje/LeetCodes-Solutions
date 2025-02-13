class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int not_zero = 0;
            for(int i=0; i<nums.size();i++){
                if(nums[i] != 0){
                    nums[not_zero] = nums[i];
                    not_zero += 1;
                }
            }
            for(int i=not_zero; i<nums.size();i++){
                nums[i] = 0;
            }
        }
    };