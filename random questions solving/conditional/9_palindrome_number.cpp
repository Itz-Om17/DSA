class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long reversedNum=0;
        int tempNum = x;
        while(tempNum>0){
            int rem = tempNum%10;
            reversedNum=reversedNum*10+rem;
            tempNum = tempNum/10;
        }
        if(x==reversedNum){
            return true;
        }
        return false;
    }
};