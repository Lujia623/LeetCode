/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start
void reversal(char *str) {
    int len = strlen(str);
    for(int i = 0; i < (len >> 1); i++) {
        char temp;
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

char * addBinary(char * a, char * b){
    int a_len, b_len, max_len, len = 0;
    int carry = 0;
    char* sum_binary = NULL;

    a_len = strlen(a);
    b_len = strlen(b);
    max_len = a_len > b_len ? a_len : b_len;
    sum_binary = (char*)malloc(sizeof(char) * (max_len + 2));
    reversal(a);
    reversal(b);
    for(int i = 0; i < max_len; i++) {
        carry += i < a_len ? (a[i] == '1') : 0;
        carry += i < b_len ? (b[i] == '1') : 0;
        sum_binary[len++] = (carry % 2) + '0';
        carry /= 2;
    }
    if(carry) {
        sum_binary[len++] = '1';
    }
    sum_binary[len] = '\0';
    reversal(sum_binary);
    return sum_binary;
}
// @lc code=end

