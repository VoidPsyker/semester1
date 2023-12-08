#include<iostream>
using namespace std;
void turn(char arr[][3], char sign, char oppo);
bool won = false;
bool lost = false;
int turns = 0;
void checkWin(char sign, char arr[][3], char oppo){
    for(int i = 0; i < 3; i++){
        cout<<"\n";
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j] << "\t";
        }
    }
    if( (arr[0][0] == sign) && (arr[1][0] == sign) && (arr[2][0] == sign) ||
        (arr[0][0] == sign) && (arr[0][1] == sign) && (arr[0][2] == sign) ||
        (arr[0][1] == sign) && (arr[1][1] == sign) && (arr[2][1] == sign) ||
        (arr[0][0] == sign) && (arr[1][1] == sign) && (arr[2][2] == sign) ||
        (arr[1][0] == sign) && (arr[1][1] == sign) && (arr[1][2] == sign) ||
        (arr[2][0] == sign) && (arr[2][1] == sign) && (arr[2][2] == sign) ||
        (arr[0][2] == sign) && (arr[1][1] == sign) && (arr[2][2] == sign) ||
        (arr[0][2] == sign) && (arr[1][1] == sign) && (arr[2][0] == sign)){
            won = true;
        cout<<"\n\nYou won!";
    } else{
        if( (arr[0][0] == oppo) && (arr[1][0] == oppo) && (arr[2][0] == oppo) ||
            (arr[0][0] == oppo) && (arr[0][1] == oppo) && (arr[0][2] == oppo) ||
            (arr[0][1] == oppo) && (arr[1][1] == oppo) && (arr[2][1] == oppo) ||
            (arr[0][0] == oppo) && (arr[1][1] == oppo) && (arr[2][2] == oppo) ||
            (arr[1][0] == oppo) && (arr[1][1] == oppo) && (arr[1][2] == oppo) ||
            (arr[2][0] == oppo) && (arr[2][1] == oppo) && (arr[2][2] == oppo) ||
            (arr[0][2] == oppo) && (arr[1][1] == oppo) && (arr[2][2] == oppo) ||
            (arr[0][2] == oppo) && (arr[1][1] == oppo) && (arr[2][0] == oppo)){
                lost = true;
            cout<<"\n\nBot Won!";
        } else{
            if(turns >= 9){
                cout<<"\n\nIts a draw!";
            }
        }
    }
    turn(arr, sign, oppo);
}
void turn(char arr[][3], char sign, char oppo){
    if((turns < 9) && (!won) && (!lost)){
        int place;
        cout<<"Enter a number to select where you want to place your sign: ";
        cin>> place;
        bool validMove = false;
        for(int i = 0; i < 3 && !validMove; i++){
            for(int j = 0; j < 3 && !validMove; j++){
                if(arr[i][j] == ('0' + place)){
                    arr[i][j] = sign;
                    turns += 1;
                    validMove = true;
                }
            }
        }
        if(!validMove){
            cout << "\nInvalid number entered, you lost a turn!\n";
        }
        if(turns < 9){
            int placeBot;
            bool validBotMove = false;
            while(!validBotMove){
                placeBot = (rand() % 9) + 1;
                for(int i = 0; i < 3 && !validBotMove; i++){
                    for(int j = 0; j < 3 && !validBotMove; j++){
                        if(arr[i][j] == ('0' + placeBot)){
                            arr[i][j] = oppo;
                            turns += 1;
                            validBotMove = true;
                        }
                    }
                }
            }
        }
        checkWin(sign, arr, oppo);
    }
}
int main(){
    char sign, oppo;
    cout<<"Choose which sign you wanna play as (X or O): ";
    cin>> sign;
    sign = toupper(sign);
    if(sign == 'X'){
        oppo = 'O';
    } else{
        if(sign == 'O'){
            oppo = 'X';
        } else{
            cout<<"incorrect sign entered";
        }
    }
    char arr[3][3];
    int x = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            x += 1;
            arr[i][j] = '0' + x;
        }
    }
    checkWin(sign, arr, oppo);
}