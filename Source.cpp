//First version
/*#include <iostream>
using namespace std;

char gameArr[3][3];

void startData() {
	int num = 49;
	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j < 3; j++) {
			gameArr[i][j] = num;
			num++;
		}
	}
}

void printData() {
	cout << "_______" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "|" << gameArr[i][j];
		}
		cout << "|" << endl;
		cout << "_______" << endl;
	}
}

void gameStep(int position, char symbol) {
	switch (position)
	{
	case 1:
		gameArr[2][0] = symbol;
		break;
	case 2:
		gameArr[2][1] = symbol;
		break;
	case 3:
		gameArr[2][2] = symbol;
		break;
	case 4:
		gameArr[1][0] = symbol;
		break;
	case 5:
		gameArr[1][1] = symbol;
		break;
	case 6:
		gameArr[1][2] = symbol;
		break;
	case 7:
		gameArr[0][0] = symbol;
		break;
	case 8:
		gameArr[0][1] = symbol;
		break;
	case 9:
		gameArr[0][2] = symbol;
		break;
	default:
		break;
	}
}

bool horizontalCheck(char symbol) {
	bool flag = false;
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			if (gameArr[i][j] != symbol) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag) {
			return true;
		}
	}
	return false;
}

bool verticalCheck(char symbol) {
	bool flag = false;
	for (int j = 0; j < 3; j++) {

		for (int i = 0; i < 3; i++) {
			if (gameArr[i][j] != symbol) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag) {
			return true;
		}
	}
	return false;
}
bool diogonalCheck(char symbol) {
	bool flag = false;
	for (int i = 0; i < 3; i++) {
		if (gameArr[i][i] != symbol) {
			flag = false;
			break;
		}
		else {
			flag = true;
		}
	}
	if (flag) {
		return true;
	}
	for (int i = 0; i < 3; i++) {
		if (gameArr[i][2 - i] != symbol) {
			flag = false;
			break;
		}
		else {
			flag = true;
		}
	}

	if (flag) {
		return true;
	}
	else {
		return false;
	}
}

bool checkWin(char symbol) {
	bool flag;
	flag = horizontalCheck(symbol);
	if (flag) {
		return flag;
	}
	else {
		flag = verticalCheck(symbol);
		if (flag) {
			return flag;
		}
		else {
			flag = diogonalCheck(symbol);
				return flag;
		}
	}
}
bool checkFreeCells() {
	bool flag = false;
	for (int i = 0; i <3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameArr[i][j] != 'X' && gameArr[i][j] != '0') {
				flag = true;
				break;
			}
		}
	}
	return flag;
}

int main() {
	startData();
	printArr();
	while (1) {
		cout << "Step first gamer " << endl;
		int a;
		cin >> a;
		gameStep(a, 'X');
		system("cls");
		printArr();
		cout << endl << endl;
		if (checkWin('X')) {
			cout << "first gammer win";
			break;
		}

		cout << "Step second gamer " << endl;
		cin >> a;
		gameStep(a, '0');
		system("cls");
		printArr();
		cout << endl << endl;
		if (checkWin('0')) {
			cout << "second gammer win";
			break;
		}
		
		if (!checkFreeCells()) {
			cout << "DRAW!!!!";
			break;
		}
	}
	system("pause");
	return 0;
}*/
//Second version
#include <iostream>
using namespace std;
char arr[3][3];
int turn = 0;
int gt = 0;/*Переменная, которая зацикливает ход игрока, пока он не походит в пустую(незанятую) клеточку*/
/*Создание поля*/void setStartData() {
	int num = 49;
	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = char(num);
			num++;
		}
	}
}
/*Создание решётки поля*/void printData() {

	cout << "_______" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "|" << arr[i][j];
		}
		cout << "|" << endl;
		cout << "_______" << endl;
	}
}
/*Записывание символов*/void gameStep(int key, char symb) {
	switch (key){
	case 1:
		if (arr[2][0] != ('X') && arr[2][0] != ('O')) {
			arr[2][0] = symb;
			turn++;
			gt = 0;

		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 2:
		if (arr[2][1] != ('X') && arr[2][1] != ('O')) {
			arr[2][1] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 3:
		if (arr[2][2] != ('X') && arr[2][2] != ('O')) {
			arr[2][2] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 4:
		if (arr[1][0] != ('X') && arr[1][0] != ('O')) {
			arr[1][0] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 5:
		if (arr[1][1] != ('X') && arr[1][1] != ('O')) {
			arr[1][1] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 6:
		if (arr[1][2] != ('X') && arr[1][2] != ('O')) {
			arr[1][2] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 7:
		if (arr[0][0] != ('X') && arr[0][0] != ('O')) {
			arr[0][0] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 8:
		if (arr[0][1] != ('X') && arr[0][1] != ('O')) {
			arr[0][1] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	case 9:
		if (arr[0][2] != ('X') && arr[0][2] != ('O')) {
			arr[0][2] = symb;
			turn++;
			gt = 0;
		}
		else {
			gt = 1;
			cout << "Yacheika zanyata" << endl;
			system("pause");
		}
		break;
	default:
		cout << "Vvedeno nepravilniy symvol" << endl;
		break;
	}
}
/*Проверка по горизонтали*/bool checkHor(char symb){
	bool flag = false;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (arr[i][j] != symb) {
					flag = false;
					break;
				}
				else {
					flag = true;
				}
			}
			if (flag) {
				return true;
			}
		}
	return false;
}
/*Проверка по вертикали*/bool checkVer(char symb) {
	bool flag = false;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			if (arr[i][j] != symb) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		}
		if (flag) {
			return true;
		}
	}
	return false;
}
/*Проверка по диагонали*/bool checkDiag(char symb) {
	bool flag = false;
	for (int i = 0; i < 3; i++) {
		if (arr[i][i] != symb) {
			flag = false;
			break;
		}
		else {
			flag = true;
		}
	}
	if (flag) {
		return true;
	}
	return false;
}
/*Проверка по побочной диагонали*/bool checkDiag2(char symb) {
	bool flag = false;
	for (int i = 0; i < 3; i++) {
		if (arr[i][2-i] != symb) {
			flag = false;
			break;
		}
		else {
			flag = true;
		}

	}
	if (flag) {
		return true;
	}
	return false;
}
/*Проверка на победу*/bool checkWin(char symb) {
	bool flag = checkHor(symb);
	if (flag) {
		return true;
	}
	else {
		flag = checkVer(symb);
		if (flag) {
			return true;
		}
		else {
			flag = checkDiag(symb);
			if (flag) {
				return true;
			}
			else {
				return checkDiag2(symb);
			}
		}
	}
}
/*Основной элемент программы*/int main() {
	setStartData();
	printData();
	while (true) {
		int a;
		do{
			cout << "First player`s turn" << endl;
			cin >> a;
			gameStep(a, 'X');
			system("cls");
			printData();
		} while (gt != 0);
		if (checkWin('X')) {
			cout << "First player won" << endl;
			break;
		}
		if (turn >= 9) {
			cout << "It`s a tie!" << endl;
			break;
		}
		do{
			cout << "Second player`s turn" << endl;
			cin >> a;
			gameStep(a, 'O');
			system("cls");
			printData();
		} while (gt != 0);
		if (checkWin('O')) {
			cout << "Second player won" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}
