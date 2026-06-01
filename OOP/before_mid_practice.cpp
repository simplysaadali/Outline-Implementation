#include <iostream>
using namespace std;

class Player{
        
    public:
        string* playerName;
        int id;

        Player(): playerName (new string("Unknown")), id(0){
        }

        Player(string name, int ID): id(ID){
            playerName = new string(name);
        }

        Player(const Player& test): id(test.id){
            playerName = new string(*test.playerName);
        }

        ~Player(){
            delete playerName;
        }
};

int main(){
    Player p1;
    Player p2("Hello", 2);
    Player p3 = p2;

    *(p3.playerName) = "World";

    cout << "Player 1: " << *p1.playerName << " " << p1.id << endl;
    cout << "Player 2: " << *p2.playerName << " " <<    p2.id << endl;
    cout << "Player 3: " << *p3.playerName << " " << p3.id << endl;
}