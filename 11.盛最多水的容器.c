/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start


int maxArea(int* height, int heightSize){
    int left, right, result = 0, last_result = 0;
    int width, high, min_high, area;

    left = 0;
    right = heightSize - 1;

    while (right > left) {
        // 实际计算的长度是最短的长度
        high = height[left] < height[right] ? height[left] : height[right];
        width = right - left;
        area = high * width;
        // 结果永远取最大的面积
        result = area > result ? area : result;
        // 计算左右两边最短长度
        min_high = height[left] > height[right] ? height[right] : height[left];
        // 算出左边left最大的长度
        while (left < right && min_high >= height[left]) {
            left++;
        }
        // 算出右边right最大的长度
        while (left < right && min_high >= height[right]) {
            right--;
        }
    }
    return result;
}
// @lc code=end

