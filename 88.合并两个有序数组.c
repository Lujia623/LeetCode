/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int index = m + n - 1;
    m--;
    n--;
    while (n >= 0) {
        if(m >= 0 && (nums1[m] > nums2[n])) {
            nums1[index] = nums1[m--];
        } else {
            nums1[index] = nums2[n--];
        }
        index--;
    }
}
// @lc code=end

