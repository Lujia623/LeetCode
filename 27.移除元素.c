/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start


int removeElement(int* nums, int numsSize, int val){
    int count = 0, i;
    
    for(i = 0; i < numsSize; i++) {
        if(nums[i] != val) {
            nums[count++] = nums[i];
        }
    }
    return count;
}
// @lc code=end

