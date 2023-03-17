/*
 * @lc app=leetcode.cn id=16 lang=c
 *
 * [16] 最接近的三数之和
 */

// @lc code=start

int cmp_int(const void *_a, const void *_b)
{
    return (*((int*)_a) - *((int*)_b));
}

int threeSumClosest(int* nums, int numsSize, int target){
    int sum = 0, result, last_diff = 0, min_diff, left, right;
    qsort(nums, numsSize, sizeof(int), cmp_int);
    result = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < numsSize; i++) {
        left = i + 1;
        right = numsSize - 1;
        while (right > left) {
            sum = nums[i] + nums[left] + nums[right];
            // 和target相同直接返回
            if(0 == abs(result - target)) {
                return result;
            } else {
                if (abs(sum - target) < abs(result - target)) {
                    result = sum;
                // 和target比较移动左右指针
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return result;
}
// @lc code=end

