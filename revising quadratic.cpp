
#include <iostream>
using namespace std;

class tat
{
	int choice = 10, choice2 = 11, r = 0; //return value

public:
	char ar[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

	void table()
	{
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[0][0] << "    |  " << ar[0][1] << "  |   " << ar[0][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t_____|_____|_____\n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[1][0] << "    |  " << ar[1][1] << "  |   " << ar[1][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t_____|_____|_____\n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t" << ar[2][0] << "    |  " << ar[2][1] << "  |   " << ar[2][2] << "     \n";
		cout << "\t\t\t     |     |     \n";
		cout << "\t\t\t     |     |     \n";
	}

	int dec()
	{

		if ((ar[0][0] == 'X') && (ar[0][1] == 'X') && (ar[0][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[1][0] == 'X') && (ar[1][1] == 'X') && (ar[1][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[2][0] == 'X') && (ar[2][1] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'X') && (ar[1][0] == 'X') && (ar[2][0] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][1] == 'X') && (ar[1][1] == 'X') && (ar[2][1] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'X') && (ar[1][2] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'X') && (ar[1][1] == 'X') && (ar[2][2] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'X') && (ar[1][1] == 'X') && (ar[2][0] == 'X'))
		{
			cout << "CONGRATULATIONS PLAYER 1 [X] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[0][1] == 'O') && (ar[0][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[1][0] == 'O') && (ar[1][1] == 'O') && (ar[1][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[2][0] == 'O') && (ar[2][1] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[1][0] == 'O') && (ar[2][0] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][1] == 'O') && (ar[1][1] == 'O') && (ar[2][1] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'O') && (ar[1][2] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][0] == 'O') && (ar[1][1] == 'O') && (ar[2][2] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else if ((ar[0][2] == 'O') && (ar[1][1] == 'O') && (ar[2][0] == 'O'))
		{
			cout << "CONGRATULATIONS PLAYER  2 [O] WINS ";
			return 1;
		}

		else
		{
			return 0;
		}
	}

	int check()
	{
		if (choice == choice2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int game()
	{
		int x = 0;
		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}
		table();

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 2 [O] TURN : ";
		cin >> choice2;
		switch (choice2)
		{
		case 1:
			ar[0][0] = 'O';
			break;

		case 2:
			ar[0][1] = 'O';
			break;

		case 3:
			ar[0][2] = 'O';
			break;

		case 4:
			ar[1][0] = 'O';
			break;

		case 5:
			ar[1][1] = 'O';
			break;

		case 6:
			ar[1][2] = 'O';
			break;

		case 7:
			ar[2][0] = 'O';
			break;

		case 8:
			ar[2][1] = 'O';
			break;

		case 9:
			ar[2][2] = 'O';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}

		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 2 [O] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'O';
			break;

		case 2:
			ar[0][1] = 'O';
			break;

		case 3:
			ar[0][2] = 'O';
			break;

		case 4:
			ar[1][0] = 'O';
			break;

		case 5:
			ar[1][1] = 'O';
			break;

		case 6:
			ar[1][2] = 'O';
			break;

		case 7:
			ar[2][0] = 'O';
			break;

		case 8:
			ar[2][1] = 'O';
			break;

		case 9:
			ar[2][2] = 'O';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 2 [O] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'O';
			break;

		case 2:
			ar[0][1] = 'O';
			break;

		case 3:
			ar[0][2] = 'O';
			break;

		case 4:
			ar[1][0] = 'O';
			break;

		case 5:
			ar[1][1] = 'O';
			break;

		case 6:
			ar[1][2] = 'O';
			break;

		case 7:
			ar[2][0] = 'O';
			break;

		case 8:
			ar[2][1] = 'O';
			break;

		case 9:
			ar[2][2] = 'O';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 2 [O] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'O';
			break;

		case 2:
			ar[0][1] = 'O';
			break;

		case 3:
			ar[0][2] = 'O';
			break;

		case 4:
			ar[1][0] = 'O';
			break;

		case 5:
			ar[1][1] = 'O';
			break;

		case 6:
			ar[1][2] = 'O';
			break;

		case 7:
			ar[2][0] = 'O';
			break;

		case 8:
			ar[2][1] = 'O';
			break;

		case 9:
			ar[2][2] = 'O';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}

		cout << "PLAYER 1 [X] TURN : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			ar[0][0] = 'X';
			break;

		case 2:
			ar[0][1] = 'X';
			break;

		case 3:
			ar[0][2] = 'X';
			break;

		case 4:
			ar[1][0] = 'X';
			break;

		case 5:
			ar[1][1] = 'X';
			break;

		case 6:
			ar[1][2] = 'X';
			break;

		case 7:
			ar[2][0] = 'X';
			break;

		case 8:
			ar[2][1] = 'X';
			break;

		case 9:
			ar[2][2] = 'X';
			break;

		default:
			cout << "INVALID";
			break;
		}
		r = check();
		if (r == 0)
		{
			table();
		}
		else
		{
			cout << "\n\nINVALID CHOICE\n\n";
		}

		x = dec();
		if (x == 1)
		{
			return x;
		}
		else
		{
			return 0;
		}
	}
};

int main()
{
	int y = 0;
	char ar[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
	cout << "\t\t\t     TIC- TAC-TOE\n\n\n\n";
	cout << "\t\tPLAYER 1 [X]\t\tPLAYER 2 [O]\n\n";
	tat t;
	t.table();
	y = t.game();
	if (y == 0)
	{
		cout << "\nMATCH DRAW";
	}
}

