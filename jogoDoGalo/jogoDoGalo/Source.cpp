#include "jogoDoGalo.h"

int main(void)
{
	int turn = 0;
	jogoDoGalo::State player[2] = { jogoDoGalo::State::Player1, jogoDoGalo::State::Player2 };

	cout << "Jogo do Galo" << endl << "Prima uma tecla para iniciar o jogo..." << endl;
	cin.get();

	do
	{
		play(player[turn]);
		if (winner(player[turn]) == true)
		{
			cout << "\n" << "You win!";
			break;
		}
		turn++;
		turn = turn % 2;
	} while (jogoDoGalo::countMoves < 9);

	cin.get();
	return 0;
}