#pragma once

#include <iostream>
#include <string>
#include <cstdlib> // system()

using namespace std;

namespace jogoDoGalo {
	int countMoves = 0; // Inicializada a zero, uma vez que está declarada fora do âmbito de uma função
	enum class State { Empty = 0, Player1, Player2 };
	State board[3][3]{}; // Todos os elementos são inicializados a zero, uma vez que está declarada fora do âmbito de uma função

	void clearScreen(void)
	{
		system("cls");
	}

	void drawBoard(void)
	{
		for (int y = 0; y<3; y++)
		{
			if (y == 0) cout << "  0 1 2" << endl;
			for (int x = 0; x<3; x++)
			{
				if (x == 0) cout << y << " ";
				if (board[y][x] == State::Empty) cout << ". ";
				else if (board[y][x] == State::Player1) cout << "X ";
				else cout << "O ";
			}
			cout << endl;
		}
	}

	void play(State player)
	{
		int y, x;

		do
		{
			clearScreen();
			drawBoard();

			cout << endl << (player == State::Player1 ? "Jogador 1 " : "Jogador 2 ") << "Selecione jogada!" << endl;
			cout << "x: ";
			cin >> x;
			cout << "y: ";
			cin >> y;
		} while ((x<0 || x >= 3) || (y<0 || y >= 3) || (board[y][x] != State::Empty));

		board[y][x] = player;

		countMoves++;
	}

	bool winner(State player)
	{
		int sumY[3]{}, sumX[3]{}, SumDiagonal[2]{};

		for (int y = 0; y<3; y++)
		{
			for (int x = 0; x<3; x++)
			{
				if (board[y][x] == player)
				{
					sumY[y]++;
					sumX[x]++;
					if (x == y) SumDiagonal[0]++;
					if (x == 2 - y) SumDiagonal[1]++;
				}
			}
		}

		for (int i = 0; i<3; i++)
		{
			if (sumY[i] == 3) return true;
			if (sumX[i] == 3) return true;
		}
		if (SumDiagonal[0] == 3) return true;
		if (SumDiagonal[1] == 3) return true;

		return false;
	}
}