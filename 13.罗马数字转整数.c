/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start


int romanToInt(char * s){
    int value_type[26];
    value_type['I' - 'A'] = 1;
    value_type['V' - 'A'] = 5;
    value_type['X' - 'A'] = 10;
    value_type['L' - 'A'] = 50;
    value_type['C' - 'A'] = 100;
    value_type['D' - 'A'] = 500;
    value_type['M' - 'A'] = 1000;
    int n = strlen(s);
    int ans = 0;
    for(int i = 0;i < n;i++) {
        int value = value_type[s[i] - 'A'];
        if(i < n - 1 && value < value_type[s[i+1] - 'A']) {
            ans -= value;
        } else {
            ans +=value;
        }
    }
    return ans;
}
// @lc code=end

