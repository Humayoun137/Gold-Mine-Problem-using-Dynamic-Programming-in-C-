# Gold-Mine-Problem-using-Dynamic-Programming-in-C++


The Gold Mine Problem is a classic optimization problem in dynamic programming where the goal is to find the maximum amount of gold that can be collected by a miner moving through a grid of mines. Each cell in the grid represents a mine, and the value in the cell represents the amount of gold in that mine. The miner can start from any column in the first row and move only right, right-up, or right-down to collect gold. The objective is to find the maximum amount of gold the miner can collect.
To solve the Gold Mine Problem using dynamic programming in C/C++, you can create a 2D array, say dp[][], where dp[i][j] represents the maximum amount of gold that can be collected starting from cell (i, j). You can initialize the last column of the dp array with the values of gold in the corresponding cells of the grid.
Then, you iterate through the rows from bottom to top and for each row, iterate through the columns from right to left. For each cell (i, j), you calculate the maximum amount of gold that can be collected from that cell by considering the gold in the current cell and adding it to the maximum of the values in the right, right-up, and right-down adjacent cells. The formula for updating the dp array looks like this:
dp[i][j] = gold[i][j] + max(dp[i+1][j+1], dp[i][j+1], dp[i-1][j+1]);

After filling up the dp array, the maximum amount of gold that can be collected by the miner is the maximum value in the first column of the dp array (dp[i][0] for all i).
This dynamic programming approach ensures an optimal solution to the Gold Mine Problem, avoiding redundant calculations and providing an efficient way to find the maximum amount of gold that can be collected by the miner as they move through the grid of mines.

