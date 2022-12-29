/*
 * @lc app=leetcode.cn id=414 lang=c
 *
 * [414] 第三大的数
 */

// @lc code=start


int thirdMax(int* nums, int numsSize){
    int a, b, c;
    int flag = 0, num = 0;
    a = b = c = INT_MIN;
    //a > b > c
    //2 2 3 1
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > a) {
            c = b;
            b = a;
            a = nums[i];
            num++;
        } else if (a > nums[i] && nums[i] > b) {
            c = b;
            b = nums[i];
            num++;
        } else if (b > nums[i] && nums[i] > c) {
            c = nums[i];
            num++;
        }
        if(nums[i] == INT_MIN) {
            flag = 1;
        }
    }
    if(num == 2 && flag) {
        return c == INT_MIN ? INT_MIN : c;
    } else {
        return c == INT_MIN ? a : c;
    }
}
// @lc code=end

