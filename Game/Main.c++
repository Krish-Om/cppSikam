// #include "Game.hpp"
#include "Game.hpp"
#include "iostream"
using namespace std;
void start();
void intro();
int main()
{
    start();
    return 0;
}

void start(){
    intro();
    Game g;
}

void intro(){
    cout << "💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥\n" << endl;
    cout << "\aWelcome to exciting CLI RPS game:\a " << endl;
    cout << "\n💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥💥\n" << endl;
}