#include <iostream>
#include<windows.h>
#include "board.h"
#include "play.h"
#include "menu.h"
using namespace std;

Board board;
Play play;
Menu menu;


int main(){
    menu.menu();
    return 0;
}
