#include<iostream>
using namespace std;

//global variables
string inventory[10];//1) declare an array 
int gold = 100;

void ItemDropper(); // Function declaration 

// function declarations
void shop();
void MonsterGen(char biome);
int main() {
	for (int i = 0; i < 10; i++)// 2) initailize
		inventory[i] = " ";
	//local variables
	char input = 'a';
	int room = 1;
	bool chests[5] = { 0,0,0,0,0 };//for a lot of chests

	while (input != 'q') {//game loop

		//print inventory
		cout << "your inventory:" << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << "";
		cout << endl;
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go (s)outh." << endl;
			// 5) only print that it's there if you Haven't picked it up
			if (inventory[0] != "key")
				cout << "you see a (k)ey piece glistening in a corner" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			if (input == 'S')
				room = 10;
			break;
		case 10:
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
			cout << "LEAVE." << endl;
			break;

			//4)get the item
			if (input == 'k')
				inventory[0] = "key";
			break;
		case 2:
			cout << "you're in room 2, you can go (n)orth or (s)outh" << endl;
			cout << "you spot a (c)hest in terrible condition in the corner." << endl;
			cin >> input;
			if (input == 'c') {
				if (chests[0] == 0) {
					cout << "You opened the chest!" << endl;
					ItemDropper();
				}
				else {
					cout << "the chest is empty." << endl;
				}
			}//end of chest option
			if (input == 'n') {
				room = 1;
			}
			else if (input == 's')
				if (inventory[0] == "key") {
					cout << "The door unlocks!" << endl;
					inventory[0] = " ";
					room = 3;
				}
				else
					cout << "The door won't budge!" << endl;
			break;
		case 3:
			cout << "you're in room 3, you can go (n)orth" << endl;
			cout << "there's a shoddy looking (s)hop in the corner that cathces your eye." << endl;
			MonsterGen('w');
			cin >> input;
			if (input == 'n')
				room = 2;
			if (input == 's')
				shop();
			break;
		case 4:
			cout << "you're in room 4, you can can go (N)orth,  (s)outh" << endl;
			cin >> input;

			if (input == 'n' || input == 'N')
				room = 2;

			else if (input == 's' || input == 'S')
				room = 5;
			break;
		}

	}
}

// functions! 
void shop() {
	int input = 'a';
	while (input != 0) {
		cout << "-------------------------------------------------------------" << endl;
		cout << endl << "Welcome to Haileys!" << endl;
		cout << "We sell our magical wears to suit your tears! Here's what we got:" << endl;
		cout << "1) Heart piece" << endl;
		cout << "2) Arch Witch Robes" << endl;
		cout << "3) Advanced wand" << endl;
		cout << "(0) to leave" << endl;
		cout << " your gold:" << gold << endl;
		//inventory
		cout << "your inventory:" << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << "";
		cout << endl << endl;
		cout << "what can I do for ya? *She stares at you eagerly*" << endl;
		cin >> input;
		if (input == 1) { //purchasing heart piece
			if (gold >= 15) {
				cout << "*She snatches the gold from you hands* Thank you kindly!" << endl;
				inventory[1] = "Heart piece";
				gold -= 5;
			}
			else cout << "Not enough gold!" << endl;

		}
		else if (input == 2) {//
			cout << "*She snatches the gold from you hands* Thank you kindly!" << endl;
			inventory[2] = "Arch Witch Robes";
			gold -= 50;
		}
		else if (input == 3) {
			cout << "*She snatches the gold from you hands* Thank you kindly!" << endl;
			inventory[3] = "Adcanced wand";
			gold -= 35;
		}
		else {
			cout << "*She grumbles* What do you think I'm runnin' here, a CHARITY? TRY AGAIN." << endl;
		}
	}

}
//function definitions
void ItemDropper() {
	int num = rand() % 100; //0-99
	if (num < 50) {
		cout << "some gold dropped!" << endl;
		inventory[2] = "gold";
	}
	else if (num < 25) {
		cout << "you got a dull gem!" << endl;
		inventory[3] = "dull gem";
	}
	else if (num < 5) {
		cout << "you found a smol frog" << endl;
		inventory[4] = "frog";
	}
	else if (num < 15) {
		cout << "nothing dropped....." << endl;
	}
}

void MonsterGen(char biome) {
	int num = rand() % 100;
	if (biome == 'f') {
		if (num < 25) {
			cout << " a wild small spirit appeared!" << endl;
		}
		else if (num < 55) {
			cout << "a wild skeleton appeared!" << endl;
		}
		else if (num < 75) {
			cout << "a lost soul appeared!" << endl;
		}
		else {
			cout << "You hear a foe skitter away." << endl;
		}
	}
	else if (biome == 'w') {
		if (num < 50)
			cout << "a rogue familar appeared" << endl;
		else if (num < 70)
			cout << " rocky the rock appears!" << endl;
		else
			cout << " a skeleton appearec!" << endl;
	}
}
