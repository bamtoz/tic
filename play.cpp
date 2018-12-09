#include "play.h"

void Play::end_game(char pawn){

    bool opt1 = (tabBoard[0][0] == pawn && tabBoard[0][1] == pawn && tabBoard[0][2] == pawn);
    bool opt2 = (tabBoard[0][0] == pawn && tabBoard[1][1] == pawn && tabBoard[2][2] == pawn);
    bool opt3 = (tabBoard[0][0] == pawn && tabBoard[1][0] == pawn && tabBoard[2][0] == pawn);
    bool opt4 = (tabBoard[2][0] == pawn && tabBoard[2][1] == pawn && tabBoard[2][2] == pawn);
    bool opt5 = (tabBoard[0][2] == pawn && tabBoard[1][2] == pawn && tabBoard[2][2] == pawn);
    bool opt6 = (tabBoard[0][2] == pawn && tabBoard[1][1] == pawn && tabBoard[2][0] == pawn);
    bool opt7 = (tabBoard[0][1] == pawn && tabBoard[1][1] == pawn && tabBoard[2][1] == pawn);
    bool opt8 = (tabBoard[1][0] == pawn && tabBoard[1][1] == pawn && tabBoard[1][2] == pawn);

    if(opt1 || opt2 || opt3 || opt4 || opt5 || opt6 || opt7 || opt8){
        is_it_end = true;
        if(opt1){

                tabBoard[0][0] = '*';
                tabBoard[0][1] = '*';
                tabBoard[0][2] = '*';
        }
        if(opt2){
                tabBoard[0][0] = '*';
                tabBoard[1][1] = '*';
                tabBoard[2][2] = '*';
        }
        if(opt3){
                tabBoard[0][0] = '*';
                tabBoard[1][0] = '*';
                tabBoard[2][0] = '*';
        }
        if(opt4){
                tabBoard[2][0] = '*';
                tabBoard[2][1] = '*';
                tabBoard[2][2] = '*';
        }
        if(opt5){
                tabBoard[0][2] = '*';
                tabBoard[1][2] = '*';
                tabBoard[2][2] = '*';
        }
        if(opt6){
                tabBoard[0][2] = '*';
                tabBoard[1][1] = '*';
                tabBoard[2][0] = '*';
        }
        if(opt7){
                tabBoard[0][1] = '*';
                tabBoard[1][1] = '*';
                tabBoard[2][1] = '*';
        }
        if(opt8){
                tabBoard[1][0] = '*';
                tabBoard[1][1] = '*';
                tabBoard[1][2] = '*';
        }


        cout << pawn << " won!" << endl;
    }
}

bool Play::check_if_13(int field){
    if(field>=1 && field <=3){
        return true;
    }
    return false;
}

void Play::user_move(char pawn){

    board();

    int field1;
    int field2;

    do{
        cout << "\nEnter field number (" << pawn << "): \n";

        do{
            cout << "Line: ";
            cin >> field1;
            cin.fail();
            cin.clear();
            cin.ignore(1000,'\n');
        }while(!check_if_13(field1));

        do{
            cout << "Column: ";
            cin >> field2;
            cin.fail();
            cin.clear();
            cin.ignore(1000,'\n');
        }while(!check_if_13(field2));

        field1 = change_number(field1);
        field2 = change_number(field2);
    }while(!check_if_empty(field1,field2));

    set_pawn(field1, field2,pawn);
    cout << endl;
//    board();
    end_game(pawn);
}

void Play::guest_move(){

    cout << "\nWaiting for guest's move...\n" << endl;
    Sleep(1000);
    int field1;
    int field2;

    do{
        field1 = (rand() % 3) + 0;
        field2 = (rand() % 3) + 0;
    }while(!check_if_empty(field1,field2));

    set_pawn(field1, field2, circle);
    end_game(circle);
}

void Play::play(){

    cout << "\n    TicTacToe\n" << endl;
    int counter=0;
    do{
        user_move(cross);
        if(!is_it_end && counter!=4){
            guest_move();
        }
        counter++;
    }while(counter<5 && !is_it_end);

    board();
    cout << "Game over!\n\n" << endl;
}

void Play::play_vs_user(){

    cout << "\n    TicTacToe\n" << endl;
    int counter=0;

    do{
        user_move(cross);
        if(!is_it_end && counter!=4){
            user_move(circle);
        }
        counter++;
    }while(counter<5 && !is_it_end);

    board();
    cout << "Game over!\n\n" << endl;
}

