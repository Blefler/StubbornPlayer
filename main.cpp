#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int playtime;
  int won=0;

  cout<<"How many times would you like to play?"<<endl;
  cin>>playtime;
  for (int i=0; i<playtime; i++)
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
    if (game.isWinner() == true)
    {
    won++;
    }
  }
  cout<<won<<endl;
  return 0;
}
