//Problem no.374..In this question it is asked that there is a function named gas which will check if the number which I am guessing and actual pic number is equal or greater than or less than if the number which I guess is equal then it will return zero and if the number which I guess is greater than then it will return my -1 or else it will return me one and based on that I have to do the conditions check the conditions

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int st =1,end=n;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(guess(mid)==0){   
                return mid;
            }else if(guess(mid)==-1){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return -1;
    }
};