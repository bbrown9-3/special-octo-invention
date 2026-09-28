#include <iostream>
#include <string>

using namespace std;

int main()
{
    string player1;
    string player2;

    cout << "Player 1, enter rock, paper, or scissors: ";
    cin >> player1;

    cout << "Player 2, enter rock, paper, or scissors: ";
    cin >> player2;

    if (player1 == player2)
    {
        cout << "TIE" << endl;
    }
    else if (player1 == "rock" && player2 == "scissors")
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1 == "paper" && player2 == "rock")
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (player1 == "scissors" && player2 == "paper")
    {
        cout << "Player 1 wins!" << endl;
    }
    else
    {
        cout << "Player 2 wins!" << endl;
    }

    return 0;
}
