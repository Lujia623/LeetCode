/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int int_compare(void *start, void *end)
{
    return ((int *)start > (int *)end);
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // for (int i = 0; i < numsSize;i++)
    //     for (int j = i+1; j < numsSize;j++)
    //     {
    //         if(nums[i]+nums[j]==target)
    //         {
    //             int *ret = malloc(sizeof(int) * 2);
    //             ret[0] = i;
    //             ret[1] = j;
    //             *returnSize = 2;
    //             return ret;
    //         }
    //     }

    // *returnSize = 0;
    // return NULL;
    int left = 0, right = numsSize - 1;
    for()
}
// @lc code=end

