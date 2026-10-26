#include <iostream>
using namespace std;

class player
{
    int playerId;
    static int totalPlayers;

public:
    void enterGame()
    {
        cout << "enter the id of player" << endl;
        cin >> playerId;
        totalPlayers++;
    }

    static void showOnlineCount()
    {
        cout << "the number of totalPlayers is " << totalPlayers << endl;
    }
};
int player::totalPlayers;
int main()
{
    player p1, p2, p3;
    p1.enterGame();
    player::showOnlineCount();

    p2.enterGame();
    player::showOnlineCount();

    p3.enterGame();
    player::showOnlineCount();
    return 0;
}