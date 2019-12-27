// Spichki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int n;
	int max_matches = 5;
	srand(time(NULL));
	cout << "enter count: ";
	cin >> n;
	// победная стратегия где выигрывать будет компьютер
	int player_matches;
	int computer_matches;

	while (n > 0)
	{
		cout << "Count matches: " << n << endl;
		while (true) {
			cout << "Take matches: ";
			cin >> player_matches;
			if ((player_matches > max_matches) || (player_matches <= 0))
				cout << "Whrong count matches" << endl;
			else
				break;
		}

		n -= player_matches;
		if (n <= 0) {
			cout << "You win!!" << endl;
			return 0;
		}
		computer_matches = n % (max_matches + 1);

		if (computer_matches == 0)
			// рандомное значение от 1 до 5
			computer_matches = rand() % max_matches + 1;
		n -= computer_matches;
		if (n <= 0) {
			cout << "You lose((" << endl;
			return 0;
		}
	}
}

