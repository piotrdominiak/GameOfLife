#include <iostream>
using namespace std;

void PrintLogo()
{
	cout << "**** GAME OF LIFE ****" << endl;
	cout << "---------------------" << endl;
	cout << "Piotr Dominiak" << endl;
	cout << "AGH 2020" << endl;
	cout << "---------------------" << endl;
	cout << endl << endl << endl;
}

char** CreateBoard(int rows, int columns)
{
	char** board = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		board[i] = new char[columns];
	}
	return board;
}

void FillBoard(int rows, int columns, char** board)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			board[i][j] = 'X';
		}
	}
}

void PrintBoard(int rows, int columns, char** board)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}