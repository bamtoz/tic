#include "menu.h"

void Menu::menu(){

    int action;
    cout << "    Welcome to TicTacToe!\n" << endl;

    do{

        tabBoard[0][0]=' ';
        tabBoard[0][1]=' ';
        tabBoard[0][2]=' ';
        tabBoard[1][0]=' ';
        tabBoard[1][1]=' ';
        tabBoard[1][2]=' ';
        tabBoard[2][0]=' ';
        tabBoard[2][1]=' ';
        tabBoard[2][2]=' ';
        is_it_end=false;

        cout << "[1] Start Game vs Computer\n[2] Start Game vs Other User\n[3] Exit Game\n" << endl;

        do{
            cout << "Choose one option: ";
            cin >> action;
            cin.fail();
            cin.clear();
            cin.ignore(1000,'\n');
        }while(action!=2 && action !=1 && action!=3);

        switch(action){
        case 1:
            cout << "\nLoading..." << endl;
            Sleep(1000);
            play();
            break;
        case 2:
            cout << "\nLoading..." << endl;
            Sleep(1000);
            play_vs_user();
            break;
        case 3:
            cout << "\nShutting down..." << endl;
            Sleep(1000);
            break;
        default:
            break;
        }
    }while(action!=3);
}
