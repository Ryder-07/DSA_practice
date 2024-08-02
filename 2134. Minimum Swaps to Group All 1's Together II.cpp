class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int count_one = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count_one++;
            }
        }

        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }

        // int last = count_one;
        int min_ = INT_MAX;
        int count_zero = 0;

        for (int i = 0; i < count_one; i++) {
            if (nums[i] == 0)
                count_zero++;
        }

        min_ = count_zero;

        for (int i = count_one; i < 2 * n; i++) {
            if (nums[i] == 0) {
                count_zero++;
            }
            if (nums[i - count_one] == 0) {
                count_zero--;
            }

            min_ = min(min_ , count_zero);
        }

        return min_;
    }
};
