#include <stdio.h>

int check(int array[8][8])
{
	int i, j, n, sum;
	int rowsum[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int colsum[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int diagsum_l2r[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int diagsum_r2l[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (i = 0; i <= 7; i++) //test if are 2 queens on the same row (i: row, j: column)
	{						
		for (j = 0; j <= 7; j++)
		{
			rowsum[i] += array[i][j]; /*since they are represented by 0s and 1s, 
									if a row's sum is bigger than 1 
							    	there is more than 1 queen on that particular row
									here the row doesn't change until all 
									columns are accessed (we get a row sum)*/
		}
	}


	for (i = 0; i <= 7; i++) //same as before, but for columns
	{						
		for (j = 0; j <= 7; j++)
		{
			colsum[i] += array[j][i]; //here the col. doesn't change until all rows are accessed (we get a col. sum)
		}
	}

//IMPORTANT!! Diagonal sum code starts here <this is the code for the "\" (left-to-right) diagonals>
	for (n = 0; n <= 7; n++) //n counts the squares of each diagonal
	{
		sum = 0; //initialize sum to 0, here goes the sum of each diagonal line
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)									//What we basically do here is this:
			{												//We start from the top left corner. Then,
				if (i + j == n) //if element belongs to the main diagonal of the "sub-board"		//following the major "\" diagonal line of the main board,
				{//Observe: For all elements: i + j = n 						//we divide the board into "sub-boards" of size n.
					sum += array[i][j]; //then add it to the general sum 				//The desired sum is each time the sum of the sub-board's "/" major diagonal.
				}
			}
		}
		diagsum_l2r[n] = sum; //the sum of each diagonal goes to the array
	}

	for (n = 0; n <= 6; n++)  //same for the rest 7 diagonals
	{
		sum = 0;
		for (i = 7; i >= 0; i--)
		{
			for (j = 7; j >= 0; j--)
			{
				if (i + j == 14 - n)
				{
					sum += array[i][j];
				}
			}
		}
		diagsum_l2r[14 - n] = sum;
	}

	for (n = 0; n <= 7; n++) //first 8 "/" diagonals (starting from the top left corner)
	{
		sum = 0;
		for (i = 7; i >= 7 - n; i--)
		{
			for (j = 0; j <= n; j++)
			{
				if (i - j == 7 - n)
				{
					sum += array[i][j];
				}
			}
		}
		diagsum_r2l[n] = sum;
	}

	for (n = 0; n <= 6; n++) //last 7 "/" diagonals
	{
		sum = 0;
		for (i = 0; i <= 7; i++)
		{
			for (j = 7; j >= 0; j--)
			{
				if (j - i == 7 - n)
				{
					sum += array[i][j];
				}
			}
		}
		diagsum_r2l[14 - n] = sum;
	}
	
	for (i = 0; i <= 7; i++)
	{
		if (rowsum[i] > 1 || colsum[i] > 1)
		{
			return 1;
		}
	}
	
	for (j = 0; j <= 14; j++)
	{
		if (diagsum_l2r[j] > 1 || diagsum_r2l[j] > 1)
		{
			return 1;
		} 
	}
	
	return 0;
}


int main(void)
{
	printf("\n8 Queens Problem - Solution Validity Checker by lightspot21\n\n");
	int i = 1; //counter for the input
	int j, k, result; //counters for array printout
	int row = 0;
	int column = 0; //row and column numbers

	int board[8][8] = {
		{0, 0, 0, 0, 0, 0, 0, 0},   //here we initialize an empty board as an 8x8 array
		{0, 0, 0, 0, 0, 0, 0, 0},	//from now on: a 0 is an empty square, a 1 is a queen
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0}, 
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0}
	};
	
	while (i <= 8) //we fill our board with queens
	{
		printf("Queen #%d row:", i);
		scanf("%d", &row);
		printf("Queen #%d column:", i);
		scanf("%d", &column);
		board[row - 1][column - 1] = 1;
		i++;
	}
	
	printf("\nYour input is as follows: (0 = empty, 1 = queen)\n\n");
	for (j = 0; j <= 7; j++) //prints the board as in a real chessboard (first row at bottom)
	{
		printf("%d - ", j + 1);
		for (k = 0; k <= 7; k++)
		{
			printf("%d ", board[7 - j][k]);
		}
		printf("\n");
	}
	printf("    | | | | | | | |\n");
	printf("    a b c d e f g h\n");

	result = check(board);
	if (result == 1)
	{
		printf("\nThe input is not a valid solution to the 8 Queens problem.\n");
	}
	else
	{
		printf("\nThe input is a valid solution to the 8 Queens problem.\n");
	}
}


