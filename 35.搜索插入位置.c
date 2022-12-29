/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start

/*区间为[low,high], 遵循循环不变量*/
/*
int searchInsert(int* nums, int numsSize, int target){
    //有序直接二分查找,查找的时间复杂度为O(logn)
    int low, high, mid;
    low = 0;
    high = numsSize - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] > target) {
            high = mid - 1;
        }
        else if(nums[mid] < target) {
            low = mid + 1;
        }
    }
    return high + 1;
}*/

int searchInsert(int* nums, int numsSize, int target){
    //有序直接二分查找,查找的时间复杂度为O(logn)
    int low, high, mid;
    low = 0;
    high = numsSize;
    while (low < high) {
        mid = (low + high) / 2;
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] > target) {
            high = mid;
        }
        else if(nums[mid] < target) {
            low = mid + 1;
        }
    }
    return high;
}
// @lc code=end

