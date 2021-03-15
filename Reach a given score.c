/*Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow.The first line of each test case is n.

Output:
For each testcase, in a new line, print number of ways/combinations to reach the given score.

Example:
Input
3
8
20
13
Output
1
4
2
Explanation
For 1st example when n = 8
{ 3, 5 } and {5, 3} are the two possible permutations but these represent the same cobmination. Hence output is 1.

*/


int coin[3] = {3,5,10};
	long long int table[4][n+1];
	for(int i=0;i<=3;i++)
	{
	    table[i][0] = 1;
	}
	for(int i=1;i<=n;i++)
	{
	    table[0][i] = 0 ; 
	}
	for(int i=1;i<=3;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(coin[i-1]<=j)
	        {
	            table[i][j] = table[i][j-coin[i-1]]+table[i-1][j];
	        }
	        else
	        {
	            table[i][j] = table[i-1][j];
	        }
	    }
	}
	return table[3][n];
