#include<iostream> 
using namespace std;

int main() {
	int room = 1;
	char input;

	while (1) {
		switch (room) {
		case 1:
			cout << "you're in room 1, you can can go (s)South" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			else if (input == 'S')
				room = 44;
			else
				cout << "I dont understand" << endl;
			break;
		case 44:
			cout << "you're in... WAIT. YOU'RE NOT SUPPOSED TO BE HERE. GET OUT! You can go (N)orth, (S)outh, (E)ast, (W)est" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 1;
			else if (input == 's' || input == 'S')
				room = 1;
			else if (input == 'e' || input == 'E')
				room = 1;
			else if (input == 'w' || input == 'W')
				room = 1;
			else
				cout << "I dont understand" << endl;
			cout << "LEAVE." << endl;
			break;

		case 2:
			cout << "you're in room 2, you can can go (N)orth,(S)outh " << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 1;

			else if (input == 's' || input == 'S')
				room = 3;
			break;

		case 3:
			cout << "you're in room 3, you can can go (N)orth,(W)est" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 4;
			else if (input == 'n' || input == 'N')
				room = 2;
			break;
		case 4:
			cout << "you're in room 4, you can can go (e)ast,(W)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 5;
			else if (input == 'w' || input == 'W')
				room = 3;
			break;

		case 5:
			cout << "you're in room 5, you can can go (e)ast,(W)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 6;
			else if (input == 'w' || input == 'W')
				room = 4;
			break;

		case 6:
			cout << "you're in room 6, you can can go (N)orth, (S)outh, (E)ast, (W)est" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 7;
			else if (input == 's')
				room = 17;
			else if (input == 'e' || input == 'E')
				room = 15;
			else if (input == 'w' || input == 'W')
				room = 5;
			
			break;
		case 7: //Path to Mini boss #1 (Rooms 7-14) 
			cout << "you're in room 7, you can can go (N)orth, (S)outh," << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 8;
			else if (input == 's' || input == 'S')
				room = 6;
			break;
		case 8:
			cout << "you're in room 8, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 9;
			else if (input == 's' || input == 'S')
				room = 7;
			break;
		case 9:
			cout << "you're in room 9, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 10;
			else if (input == 's' || input == 'S')
				room = 8;
			break;
		case 10:
			cout << "you're in room 10, you can can go (w)est,(S)outh" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 11;
			else if (input == 's' || input == 'S')
				room = 8;
		case 11:
			cout << "you're in room 11, you can can go (e)ast,(W)est" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 10;
			else if (input == 'e' || input == 'E')
				room = 12;
			break;
		case 12:
			cout << "you're in room 12, you can can go (e)as,(W)est" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 11;
			else if (input == 'e' || input == 'E')
				room = 13;
			break;
		case 13:
			cout << "you're in room 13, you can can go (e)ast,(W)est" << endl;
			cin >> input;
			if(input == 'w' || input == 'W')
				room = 12;
			break;
		case 14://Path to Mayors house from Room 14 & 15
			cout << "you're in room 14, you can can go (e)ast,(W)est" << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 15;
			else if (input == 'e' || input == 'E')
				room = 6;
			break;
		case 15:
			cout << "you enter the mayor's house, you can can go (W)est" << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 15;
			break;
		case 16://Path to Mayors house from Room 17-16
			cout << "you're in room 17, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 6;
			else if (input == 's' || input == 'S')
				room = 18;
		case 17:
			cout << "you're in room 18, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 17;
			else if (input == 's' || input == 'S')
				room = 19;
		case 18:
			cout << "you're in room 19, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 18;
			else if (input == 's' || input == 'S')
				room = 20;
		case 19:
			cout << "you're in room 20, you can can go (n)orth,(S)outh,(E)ast" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 19;
			else if (input == 's' || input == 'S')
				room = 21;
			else if (input == 'e' || input == 'E')
				room = 27;
		case 20:
			cout << "you're in room 21, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 20;
			else if (input == 's' || input == 'S')
				room = 22;
		case 21:
			cout << "you're in room 22, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 21;
			else if (input == 's' || input == 'S')
				room = 23;
		case 22:
			cout << "you're in room 23, you can can go (n)orth,(S)outh" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 22;
			else if (input == 's' || input == 'S')
				room = 24;
		case 23:
			cout << "you're in room 24, you can can go (n)orth,(E)ast,(W)est" << endl;
			cin >> input;
			if (input == 'n' || input == 'N')
				room = 19;
			else if (input == 'w' || input == 'W')
				room = 25;
			else if (input == 'e' || input == 'E')
				room = 26;
		case 24:
			cout << "you enter a lone room with a switch. press (e) to leave." << endl;
			cin >> input;
			if (input == 'e' || input == 'E')
				room = 24;
		case 25:
			cout << "you enter a lone room with a switch. press (w) to leave." << endl;
			cin >> input;
			if (input == 'w' || input == 'W')
				room = 24;
			}

	}
}

	
