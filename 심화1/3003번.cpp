#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> ChessBoard{ 1, 1, 2, 2, 2, 8 };
	vector<int> ChessPlayer(6);
	for (int i{}; i < ChessPlayer.size(); ++i)
	{
		cin >> ChessPlayer[i];
		if (ChessPlayer[i] < 0 && ChessPlayer[i] > 10)
			exit(1);
	}

	for (int i{}; i < ChessBoard.size(); ++i)
		cout << ChessBoard[i] - ChessPlayer[i] << " ";

	return 0;
}
