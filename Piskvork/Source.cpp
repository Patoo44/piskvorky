#include <iostream>
#include <conio.h>

using namespace std;

int checkwin(char[]);
void board(char[]);
char pole[10] = { '0','1','2','3','4','5','6','7','8','9', };
void main()
{

		int hrac = 1, i, x;

		char mark;
		do
		{
			board(pole);

			if (hrac % 2 == 1)
				hrac = 1;
			else
				hrac = 2;

			if (hrac == 2)
			{
				cout << "hrac  " << hrac << endl;
				cout << "zmackni enter pre AI" << endl;
				x = rand() % 9;
				mark = 'O';
				int turn = 1;
				int placed = 0;
				while (placed == 0)
				{

					if (x == 1 && pole[1] == '1') {
						pole[1] = mark;
						placed = 1;
					}
					else if (x == 2 && pole[2] == '2') {

						pole[2] = mark;
						placed = 1;
					}
					else if (x == 3 && pole[3] == '3') {

						pole[3] = mark;
						placed = 1;
					}
					else if (x == 4 && pole[4] == '4') {

						placed = 1;
						pole[4] = mark;
					}
					else if (x == 5 && pole[5] == '5') {

						pole[5] = mark;
						placed = 1;
					}
					else if (x == 6 && pole[6] == '6') {

						pole[6] = mark;
						placed = 1;
					}
					else if (x == 7 && pole[7] == '7') {

						pole[7] = mark;
						placed = 1;
					}
					else if (x == 8 && pole[8] == '8') {

						pole[8] = mark;
						placed = 1;
					}
					else if (x == 9 && pole[9] == '9') {

						pole[9] = mark;
						placed = 1;
					}

					else
					{
						x = rand() % 9;
					}
				}
				i = checkwin(pole);
				hrac++;
				_getche();
				board(pole);
			}


			else if (hrac == 1)
			{
				cout << "hrac " << hrac << " :  ";
				cin >> x;
				mark = 'x';

				if (x == 1 && pole[1] == '1')

					pole[1] = mark;
				else if (x == 2 && pole[2] == '2')

					pole[2] = mark;
				else if (x == 3 && pole[3] == '3')

					pole[3] = mark;
				else if (x == 4 && pole[4] == '4')

					pole[4] = mark;
				else if (x == 5 && pole[5] == '5')

					pole[5] = mark;
				else if (x == 6 && pole[6] == '6')

					pole[6] = mark;
				else if (x == 7 && pole[7] == '7')

					pole[7] = mark;
				else if (x == 8 && pole[8] == '8')

					pole[8] = mark;
				else if (x == 9 && pole[9] == '9')

					pole[9] = mark;
				else
				{
					cout << "Neplatne ";

					hrac--;
					_getche();
				}
				i = checkwin(pole);

				hrac++;
			}
		} while (i == -1);
		board(pole);
		if (i == 1)

			cout << " hrac " << --hrac << " vyhrava ";
		else
			cout << "remiza";

		_getche();
	}

	void board(char pole[])
	{
		system("cls");
		cout << "      |     |     " << endl;
		cout << "  " << pole[1] << "   |  " << pole[2] << "  |  " << pole[3] << "  " << endl;
		cout << "______|_____|_____" << endl;
		cout << "      |     |     " << endl;
		cout << "  " << pole[4] << "   |  " << pole[5] << "  |  " << pole[6] << "  " << endl;
		cout << "______|_____|_____" << endl;
		cout << "      |     |     " << endl;
		cout << "  " << pole[7] << "   |  " << pole[8] << "  |  " << pole[9] << "  " << endl;
		cout << "      |     |     " << endl;

	}


	int checkwin(char pole[])
	{
		if (pole[1] == pole[2] && pole[2] == pole[3])

			return 1;
		else if (pole[4] == pole[5] && pole[5] == pole[6])

			return 1;
		else if (pole[7] == pole[8] && pole[8] == pole[9])

			return 1;
		else if (pole[1] == pole[4] && pole[4] == pole[7])

			return 1;
		else if (pole[2] == pole[5] && pole[5] == pole[8])

			return 1;
		else if (pole[3] == pole[6] && pole[6] == pole[9])

			return 1;
		else if (pole[1] == pole[5] && pole[5] == pole[9])

			return 1;
		else if (pole[3] == pole[5] && pole[5] == pole[7])

			return 1;
		else if (pole[1] != '1' && pole[2] != '2' && pole[3] != '3'
			&& pole[4] != '4' && pole[5] != '5' && pole[6] != '6'
			&& pole[7] != '7' && pole[8] != '8' && pole[9] != '9')

			return 0;
		else
			return -1;

	
}