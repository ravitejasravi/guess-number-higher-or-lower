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
        int left =0 , right = n ;
        while(left<=right){
            int gus = left + (right-left)/2;
            if(guess(gus)==0){
                return gus;
            }
            else if(guess(gus)==-1){
                right = gus-1;
            }
            else{
                left= gus+1;
            }
        }
        return 0;
    }
};