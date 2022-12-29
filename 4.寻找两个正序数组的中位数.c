/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start

/*归并排序思想求解：
时间复杂度:O(log(m+n))
空间复杂度O(1)
*/
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int left = 0, right = 0, nums1_start = 0, nums2_start = 0, len = nums1Size + nums2Size;
    for(int i = 0; i <= len / 2; i++) {
        left = right;
        if(nums1_start < nums1Size && (nums2_start >= nums2Size || nums1[nums1_start] < nums2[nums2_start])) {
            right = nums1[nums1_start++];
        } else {
            right = nums2[nums2_start++];
        }
    }
    if((len & 0x01) == 0) {
        return (left + right) / 2.0;
    } else {
        return right;
    }
}
// @lc code=end

