/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i;
    for(i = digitsSize - 1; i >= 0;i--) {
        if(digits[i] != 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    *returnSize = digitsSize + 1;
    int *new_digits = malloc(sizeof(int) * (*returnSize));
    memset(new_digits, 0, sizeof(int) * (*returnSize));
    new_digits[0] = 1;
    return new_digits;
}
// @lc code=end

