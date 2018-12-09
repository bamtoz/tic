#ifndef PLAY_HH
#define PLAY_HH
#include <windows.h>
#include"board.h"

using namespace std;

class Play : public Board {

public:
    bool is_it_end=false;
    void end_game(char pawn);
    bool check_if_13(int field);
    void user_move(char pawn);
    void guest_move();
    void play();
    void play_vs_user();
};

#endif
