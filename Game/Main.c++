#include <iostream>
#include "stdlib.h"
#include <unistd.h>
#include<iomanip>
// #include <windows.h> //uncomment this part if your OS is Windows
using namespace std;

void clearScreen()
{
    if (isatty(STDOUT_FILENO))
    {
        system("clear || cls");
    }
    else
    {
        cerr << " No terminal detected " << endl;
    }
}
class Choices
{
private:
    int states; // rock = 1 scissor = 2 paper = 3

protected:
    void setState(int state)
    {
        states = state;
    }

    int getState()
    {
        return states;
    }

public:
   static void choiceInfo()
    {
        cout <<"\t\t\t\t----------------------------------------------------------------------------------------" << endl
             <<"\t\t\t\t1. Rock 2. Paper 3. Scissor"<<setw(10)<< endl
             <<"\t\t\t\t0. Exit the Program" << endl;
        cout <<"\t\t\t\t-----------------------------------------------------------------------------------------" << endl;
    }

    void printModeInfo()
    {
    }
};

class Player : public Choices
{
};

class Game
{
private:
    void start()
    {
        int ch;
        cout << "Enter a choice between 1 and 2" << endl;
        Choices::choiceInfo();
        while (1)
        {
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "Player chose rock: " << endl;
                clearScreen();
                Choices::choiceInfo();
                break;
            case 2:
                cout << "Player chose 2 " << endl;
                clearScreen();
                Choices::choiceInfo();
                break;
            case 0:
                cout << "Exiting the program  " << endl;
                exit(0);
                break;
            default:
                break;
            }
        }
    }

public:
    Game()
    {
        start();
    }
};
int main()
{
    Game g;
    return 0;
}