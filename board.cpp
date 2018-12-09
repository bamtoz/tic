#include"board.h"

void Board::board(){
cout << "   1    2   3    " << endl;
cout << "  -------------" << endl;
cout << "1 | " << tabBoard[0][0] << " | " << tabBoard[0][1] << " | " << tabBoard[0][2] << " |" << endl;
cout << "  |" << "---" << "|" << "---" << "|" << "---" << "|" << endl;
cout << "2 | " << tabBoard[1][0] << " | " << tabBoard[1][1] << " | " << tabBoard[1][2] << " |" << endl;
cout << "  |" << "---" << "|" << "---" << "|" << "---" << "|" << endl;
cout << "3 | " << tabBoard[2][0] << " | " << tabBoard[2][1] << " | " << tabBoard[2][2] << " |" << endl;
cout << "  -------------" << endl;
}

int Board::change_number(int field){

    int correct;
    switch(field){
    case 1:
        correct = 0;
        break;
    case 2:
        correct = 1;
        break;
    case 3:
        correct = 2;
        break;
    default:
        break;
    }
    return correct;
}


bool Board::check_if_empty(int field1, int field2){

    if(tabBoard[field1][field2] == ' '){
        return true;
    }
    else{return false;}
}


void Board::set_pawn(int field1, int field2, char pawn){

    if(check_if_empty(field1, field2)){
        tabBoard[field1][field2]=pawn;
    }
}
