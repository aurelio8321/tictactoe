#include<iostream>

using namespace std;

void printGame(char array[3][3]){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            cout << array[i][j] << " "; 
        }
        cout << endl;
    }
}

void makeMove(char array[3][3]){
    char temp = ' ';
    cout << "Enter your move: ";
    cin >> temp;
    cout << "move is: " << temp << endl;
    //checker x,X,o,O

    int row = 0;
    cout << "Enter row (1-3): ";
    cin >> row;
    cout << "row is: " << row << endl;
    //checker 1-3

    int col = 0;
    cout << "Enter col (1-3): ";
    cin >> col;
    cout << "col is: " << col << endl;
    //checker 1-3



    array[row-1][col-1] = temp;


}

int checkWinDraw(char array[3][3]){
    
}


int main(){

    char octo[3][3] = {};
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            octo[i][j] = '-';
        }
    }
    printGame(octo);
    
    bool gameOver = false;

    while(!gameOver){
        makeMove(octo);
        printGame(octo);
    }
}

