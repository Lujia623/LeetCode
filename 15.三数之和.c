/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp_int(const void *_a, const void *_b)
{
    return (*(int*)_a - *(int*)_b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    // 定义左右指针
    int left, right;
    int **result = NULL;

    qsort(nums, numsSize, sizeof(int), cmp_int);
    // 分配太小容易造成内存溢出
    result = (int **)malloc(sizeof(int*) * numsSize * numsSize);
    *returnColumnSizes = (int*)malloc(sizeof(int) * numsSize * numsSize);
    *returnSize = 0;
    for (int index = 0; index < numsSize; index++) {
        /*** -1 -1 2 这种情况会被调过
        if(((index + 1) < numsSize) && (nums[index] == nums[index + 1])) {
            continue;
        } */
        // 去重的目的跳过 0 0 0 0,不去重的话输出[[0,0,0],[0,0,0]]
        if(index > 0 && nums[index] == nums[index - 1]) {
            continue;
        }
        left = index + 1;
        right = numsSize - 1;
        while (right > left) {
            if (nums[index] + nums[left] + nums[right] < 0) {
                left++;
            } else if (nums[index] + nums[left] + nums[right] > 0) {
                right--;
            } else {
                // 分配数组3 int空间
                result[*returnSize] = (int*)malloc(sizeof(int) * 3);
                // 每个数组的大小是3
                (*returnColumnSizes)[*returnSize] = 3;
                result[*returnSize][0] = nums[index];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];
                *returnSize += 1;
                // 去重,无重复元素则移动指针
                while (left < right && nums[left] == nums[++left]);
                while (left < right && nums[right] == nums[--right]);
                
            }
        }
    }
    return result;
}
// @lc code=end

