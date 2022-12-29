/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){
    long int num = 0;
    int temp = x;
    if(x<0)
        return false;
    else
    {
        if(0==(x/10))
            return true;
        while(0!=temp)
        {
            num = num*10+(temp % 10);
            temp /= 10;
        }
        if(x==num)
            return true;
        else
            return false;
    }
}
// @lc code=end

