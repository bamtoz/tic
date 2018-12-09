#ifndef BOARD_HH
#define BOARD_HH
#include<iostream>

using namespace std;

class Board {

public:
    char tabBoard[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char circle = 'O';
    char cross = 'X';

    void board();
    int change_number(int field);
    bool check_if_empty(int field1, int field2);
    void set_pawn(int field1, int field2, char pawn);
};

#endif
