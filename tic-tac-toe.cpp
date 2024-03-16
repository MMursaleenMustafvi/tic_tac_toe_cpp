#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
string player1, player2;
char firstplayer[3][3];
char secoundplayer[3][3];
char t[3][3];
int i, j, c = 0;
int pointA = 0;
int pointB = 0;
int totalrowcol = 3;
char n = 'y';
void table()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			SetConsoleTextAttribute(color, 15);
			t[i][j] = '-';
		}
	}
}
void rule()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 11);
	cout << "*" << setw(26) << setfill('*') << "*" << endl;
	cout << "*" << "      *WELLCOME*         *\n";
	cout << "*" << "     TIC_TAC_TOE GAME    *\n";
	cout << "*" << "         RULES           *\n";
	cout << "*" << "  SELECT ROW AND COLMN   *\n";
	cout << "*" << setw(26) << setfill('*') << "*" << endl;
}
void printtable()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 13);
	cout << "*" << setw(26) << setfill('*') << "*" << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "* column |";
	for (int c = 0; c < 3; c++)
	{
		cout << "   " << c;
	}
	SetConsoleTextAttribute(color, 13);
	cout << "    *" << endl;
	cout << "*" << setw(26) << setfill('*') << "*" << endl;
	for (int i = 0; i < 3; i++)
	{
		SetConsoleTextAttribute(color, 10);
		cout << "* ROW : " << i << "|" << " ";
		for (int j = 0; j < 3; j++)
		{
			SetConsoleTextAttribute(color, 15);
			cout << "  " << t[i][j] << " ";
		}
		SetConsoleTextAttribute(color, 13);
		cout << "   *" << endl;
	}

	SetConsoleTextAttribute(color, 13);
	cout << "*" << setw(26) << setfill('*') << "*" << endl;

}
bool gamecheckp1()
{
	bool check = false;
	if (t[i][j] != '-'&&i >= 0 && i<3 && j >= 0 && j<3 && t[i][j] == 'O')
	{
		if (i == 1 && j == 1)
		{
			if (t[i - 1][j - 1] == 'O'&& t[i + 1][j + 1] == 'O')
			{
				return true;
			}
			else  if (t[i - 1][j + 1] == 'O'&& t[i - 1][j + 1] == 'O')
			{
				return true;
			}
			else if (t[i - 1][j] == 'O'&& t[i + 1][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j + 1] == 'O')
			{
				return true;
			}
		}
		else if (i == 1 && j == 2)
		{
			if (t[i - 1][j] == 'O'&& t[i + 1][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j - 2] == 'O')
			{
				return true;
			}
		}
		else if (i == 1 && j == 0)
		{
			if (t[i - 1][j] == 'O'&& t[i + 1][j] == 'O')
			{
				return true;
			}
			else if (t[i][j + 1] == 'O'&& t[i][j + 2] == 'O')
			{
				return true;
			}
		}
		else if (i == 0 && j == 0)
		{
			if (t[i + 1][j] == 'O'&& t[i + 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j + 1] == 'O'&& t[i][j + 2] == 'O')
			{
				return true;
			}
			else if (t[i + 1][j + 1] == 'O'&& t[i + 2][j + 2] == 'O')
			{
				return true;
			}
		}
		else if (i == 0 && j == 1)
		{
			if (t[i + 1][j] == 'O'&& t[i + 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j + 1] == 'O')
			{
				return true;
			}
		}
		else if (i == 0 && j == 2)
		{
			if (t[i + 1][j] == 'O'&& t[i + 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j - 2] == 'O')
			{
				return true;
			}
			else if (t[i + 1][j - 1] == 'O'&& t[i + 2][j - 2] == 'O')
			{
				return true;
			}
		}
		else if (i == 2 && j == 0)
		{
			if (t[i - 1][j] == 'O'&& t[i - 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j + 1] == 'O'&& t[i][j + 2] == 'O')
			{
				return true;
			}
			else if (t[i - 1][j + 1] == 'O'&& t[i - 2][j + 2] == 'O')
			{
				return true;
			}
		}
		else if (i == 2 && j == 1)
		{
			if (t[i - 1][j] == 'O'&& t[i - 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j + 1] == 'O')
			{

				return true;
			}
		}
		else if (i == 2 && j == 2)
		{
			if (t[i - 1][j] == 'O'&& t[i - 2][j] == 'O')
			{
				return true;
			}
			else if (t[i][j - 1] == 'O'&& t[i][j - 2] == 'O')
			{
				return true;
			}
			else if (t[i - 1][j - 1] == 'O'&& t[i - 2][j - 2] == 'O')
			{
				return true;
			}
		}
	}
}
bool gamecheckp2()
{
	bool check = false;
	if (t[i][j] != '-'&&i >= 0 && i<3 && j >= 0 && j<3 && t[i][j] == 'X')
	{
		if (i == 1 && j == 1)
		{
			if (t[i - 1][j - 1] == 'X'&& t[i + 1][j + 1] == 'X')
			{
				return true;
			}
			else  if (t[i - 1][j + 1] == 'X'&& t[i - 1][j + 1] == 'X')
			{
				return true;
			}
			else if (t[i - 1][j] == 'X'&& t[i + 1][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j + 1] == 'X')
			{
				return true;
			}
		}
		else if (i == 1 && j == 2)
		{
			if (t[i - 1][j] == 'X'&& t[i + 1][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j - 2] == 'X')
			{
				return true;
			}
		}
		else if (i == 1 && j == 0)
		{
			if (t[i - 1][j] == 'X'&& t[i + 1][j] == 'X')
			{
				return true;
			}
			else if (t[i][j + 1] == 'X'&& t[i][j + 2] == 'X')
			{
				return true;
			}
		}
		else if (i == 0 && j == 0)
		{
			if (t[i + 1][j] == 'X'&& t[i + 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j + 1] == 'X'&& t[i][j + 2] == 'X')
			{
				return true;
			}
			else if (t[i + 1][j + 1] == 'X'&& t[i + 2][j + 2] == 'X')
			{
				return true;
			}
		}
		else if (i == 0 && j == 1)
		{
			if (t[i + 1][j] == 'X'&& t[i + 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j + 1] == 'X')
			{
				return true;
			}
		}
		else if (i == 0 && j == 2)
		{
			if (t[i + 1][j] == 'X'&& t[i + 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j - 2] == 'X')
			{
				return true;
			}
			else if (t[i + 1][j - 1] == 'X'&& t[i + 2][j - 2] == 'X')
			{
				return true;
			}
		}
		else if (i == 2 && j == 0)
		{
			if (t[i - 1][j] == 'X'&& t[i - 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j + 1] == 'X'&& t[i][j + 2] == 'X')
			{
				return true;
			}
			else if (t[i - 1][j + 1] == 'X'&& t[i - 2][j + 2] == 'X')
			{
				return true;
			}
		}
		else if (i == 2 && j == 1)
		{
			if (t[i - 1][j] == 'X'&& t[i - 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j + 1] == 'X')
			{

				return true;
			}
		}
		else if (i == 2 && j == 2)
		{
			if (t[i - 1][j] == 'X'&& t[i - 2][j] == 'X')
			{
				return true;
			}
			else if (t[i][j - 1] == 'X'&& t[i][j - 2] == 'X')
			{
				return true;
			}
			else if (t[i - 1][j - 1] == 'X'&& t[i - 2][j - 2] == 'X')
			{
				return true;
			}
		}
	}
}
void game()
{
	while (n != 'n')
	{
		table();
		do
		{
			printtable();
			int r, start;
			if (c % 2 == 0)
			{

				cout << "NOW " << player1 << " turn \n";
				cin >> i >> j;
				if (t[i][j] == 'O' || t[i][j] == 'X')
				{
					cout << "ALREADY FILLED!\n";
					continue;
				}
				if (i < 0 || i>2 || j < 0 || j>2)
				{
					cout << "OUT OF RANGE! ENTER IN TABLE RANGE\n";
					cin >> i >> j;
				}
				firstplayer[i][j] = 'O';
				t[i][j] = firstplayer[i][j];
				system("cls");
				printtable();
			}
			else if (c % 2 != 0)
			{
				cout << "NOW " << player2 << " turn \n";
				cin >> i >> j;
				if (t[i][j] == 'O' || t[i][j] == 'X')
				{
					cout << "ALREADY FILLED!\n";
					continue;
				}
				if (i < 0 || i>2 || j < 0 || j>2)
				{
					cout << "OUT OF RANGE! ENTER IN TABLE RANGE\n";
					cin >> i >> j;
				}
				secoundplayer[i][j] = 'X';
				t[i][j] = secoundplayer[i][j];
				system("cls");
				printtable();
				cout << endl;
			}
			system("cls");
			if (gamecheckp1() == true)
			{
				cout << "conratulation " << player1 << " won the game!\n";
				break;
			}
			if (gamecheckp2() == true)
			{
				cout << "conratulation " << player2 << " won the game!\n";
				break;
			}
			c++;
			if (c == 9)
			{
				cout << "MATCH IS DRAW!";
				break;
			}
		} while (c != 9);
		cout << endl;
		cout << "IF YOU WANT TO PLAY AGAIN PRESS ANY CHAARACTER\n";
		cout << "IF YOU WANT TO EXIT THE GAME PRESS n\n";
		cin >> n;
		if (n == 'n')
		{
			cout << "THANK YOU FOR PLAYING!\n";
		}
	}
}
int main()
{
	rule();
	cout << "ENTER PLAYER 1 NAME :";
	getline(cin, player1);
	cout << endl;
	cout << "ENTER PLAYER 2 NAME :";
	getline(cin, player2);
	cout << endl;
	game();
	system("pause");
	return 0;
}
