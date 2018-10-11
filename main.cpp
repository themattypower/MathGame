#include <iostream>
//#include <string>
//#include <math.h>
//#include <cmath>
//#include <stdio.h>
#include <windows.h>

using namespace std;

int generate(int highest) {
	int random = 1000;
	random = rand();
	while (random > highest) {
		random = rand();
	}
	return random;
}

bool question(int highest) {
	int one = generate(highest), two = generate(highest), correct = one*two, answer = 0;
	bool ifCorrect = false;
	cout << "What is " << one << "x" << two << "=";
	cin >> answer;
	if (answer == correct) {
		ifCorrect = true;
	}
	return ifCorrect;
}


int main() {
	double highest = 100, asked = 0, correct = 0;
	double percentage = 0.0;
	cout << "Welcome to MathGame\nPick the highest number: ";
	cin >> highest;
	cout << "Answer the following questions\n\n";
	while (true) {
		bool yesNo = question(highest);
		asked++;
		if (yesNo) { //correctly
			correct++;
			percentage = correct / asked * 100;
			cout << "Correct\nScore " << correct << "/" << asked << "\n" << percentage <<"%\n\n";
		}
		else {
			percentage = correct / asked * 100;
			cout << "Incorrect\nScore " << correct << "/" << asked << "\n" << percentage << "%\n\n";
		}
	}
}


/*
int main()
{
	unsigned char b, f;

	for (b = 0; b<16; b++)
	{
		for (f = 0; f<16; f++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), b << 4 | f);
			printf("%.2X", b << 4 | f);
		}
		printf("\n");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
	printf("\n");
	return 0;
}
*/
