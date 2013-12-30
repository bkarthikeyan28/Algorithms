#include<iostream>
#define n 4
using namespace std;
int board[n][n];
bool check(int board[n][n],int row,int col)
{
	for(int i=0;i<col;i++)
	{
		if(board[row][i])
			return false;
	}
	for(int i=row,j=col;i>=0&&j>=0;i--,j--)
	{
		if(board[i][j])
			return false;
	}
	for(int i=row,j=col;i<=n&&j<=n;i++,j--)
	{
		if(board[i][j])
			return false;
	}
	return true;
}
bool colcheck(int board[n][n],int col)
{
	if(col>=n)
		return true;
	for(int i=0;i<n;i++)
	{
		if(check(board,i,col))
		{
			board[i][col]=1;
			if(colcheck(board,col+1))
				return true;
			board[i][col]=0;
		}

	}
	return false;
}
int main()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			board[i][j]=0;
	}
	if(colcheck(board,0)==true)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout<<board[i][j]<<" ";
			cout<<endl;
		}
	}
}
