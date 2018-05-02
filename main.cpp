#include <cstdlib>
#include <iostream>
#define _WIN32_WINNT 0x0500
#include <windows.h>

using namespace std;
void startGame() {
     int opt_1, opt_2;
     char respns;
     
     newGame:
     cout << "You wake up in a dark basement, you can't see nothing... What do you do?\n\n" << endl;
     theBeginning:
     cout << "(1)Look for a potential light source in your pockets.\n" << endl;
     cout << "(2)Stay there and don't move.\n" << endl;
     cout << "(3)Get up and start running.\n" << endl;
     cin >> opt_1;
         if(opt_1 == 1) {
         cout << "You found a lighter!" << endl;
                              system("pause");
                              system ("cls");
                              cout << "You lighten up the area around you.\nAll you can see is red, grim bricks and some staircase.\n" << endl;
                              lightenedUp:
                                          cout << "What do you do?\n\n" << endl;
                                          cout << "(1)Run up the stairway.\n" << endl;
                                          cout << "(2)Look around the basement for some items.\n" << endl;
                                          cout << "(3)Stay there and do nothing..\n" << endl;
                                          cin >> opt_2;
                                          if(opt_2 == 2) {
                                                   system("cls");
                                                   cout << "You are now searching for any valuable items..." << endl;
                                                    system("pause");
                                                     cout << "Found nothing.." << endl;
                                                     system("pause");
                                                     system("cls");
                                                      goto lightenedUp;
                                           }
                                           else if(opt_2 == 3) {
                                                cout << "You are doing nothing... it can get a bit boring." << endl;
                                                system("pause");
                                                system("cls");
                                                goto lightenedUp;                                               
                                           }
                                           else if(opt_2 == 1) {
                                                     cout << "You walk upstairs, the stairs seem to never end, you still keep going nonethless." << endl;
                                                     system("pause");
                                                     system("cls");
                                                     cout << "There is a loud growl comming from where you came from..." << endl;
                                                     system("pause");
                                                     system("cls");
                                                     cout << "TO BE CONTINUED.\n\nThanks for playing, more comming soon.." << endl;
                                                     system("pause");
                                                     system("cls");
                                           }
                              }
         else if(opt_1 == 2) {
              system("cls"); 
              cout << "It's getting realy boring.." << endl;
              system("pause");
              system("cls");
              cout << "You finally get bored of waiting.. \n\nWhat do you do?" << endl;
              goto theBeginning;
         }
         else if(opt_1 == 3) {
              system("cls");
              cout << "You start running around blindly..." << endl;
              system("pause");
              system("cls");
              cout << "You hit yourself in the head with full force, slowly passing away.\n\n"<< endl;
              system("pause");
              system("cls");
              cout << "YOU DIED." << endl;
              system("pause");
              system("cls");
              cout << "Do you wish to start the game again? [Y/N]" << endl;
              cin >> respns; 
                  if(respns == 'Y' || respns == 'y') {
                             system("cls");
                             goto newGame;
                             }
                  else if(respns == 'N' || respns == 'n') {
                       return;
                  }
              
}
}

void setupGame() {
     char respns;
     cout << "Welcome to Dark Dungeon!\nA text-adventure game. Version 0.1 .::Alpha::.\n\n" << endl;
     cout << "Do you wish to start? [Y/N]" << endl;
     cin >> respns; 
         if(respns == 'Y' || respns == 'y') {
                   system("cls");
                   return startGame();
         }
         else if(respns == 'N' || respns == 'n') {
                   return;
         }
              
}

int main()   {
    setupGame();   
    return 0;
    
}
