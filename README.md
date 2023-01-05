# guess-number-higher-or-lower

We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.<br>
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.<br>
You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).<br>
1: Your guess is lower than the number I picked (i.e. num < pick).<br>
0: your guess is equal to the number I picked (i.e. num == pick).<br>
Return the number that I picked.

Example 1:

Input: n = 10, pick = 6<br>
Output: 6

Example 2:

Input: n = 1, pick = 1<br>
Output: 1

Example 3:

Input: n = 2, pick = 1<br>
Output: 1
