/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子数组和
 */

// @lc code=start
#if 0
// 动态规划（决策）
int maxSubArray(int* nums, int numsSize){
    int i, ans, ansSum;
    ans = nums[0];
    ansSum = nums[0];
    for(i = 1; i < numsSize; i++) {
        if(ansSum < 0) {
            // 小于0的数不加
            ansSum = nums[i];
        } else {
            //大于0的数会越加越大
            ansSum += nums[i];
        }
        //取出当前遍历的最大值
        ans = ans > ansSum ? ans : ansSum;
    }
    return ans;
}
#endif

///TODO:  分治法

int maxSpace(int* nums, int left, int right)
{
    int mid, max;
    mid = (left + right) >> 1;

    if(left == right)
        return nums[left];
    int maxLeft = maxSpace(nums, left, mid);
    int maxRight = maxSpace(nums, mid + 1, right);
    int isum = nums[left] + nums[right];
    maxLeft = maxLeft > isum ? maxLeft: isum;
    maxRight = maxRight > isum ? maxRight: isum;
    max = maxLeft + maxRight;
    return max > (maxLeft > maxRight ? maxLeft : maxRight) ? max : (maxLeft > maxRight ? maxLeft : maxRight);
}
int maxSubArray(int* nums, int numsSize){
    return maxSpace(nums, 0, numsSize - 1);
}
// @lc code=end

