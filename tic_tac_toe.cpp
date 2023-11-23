#include <iostream>
using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int col;
char player = 'X';
bool game = true;
int pCnt = 0;

void display()
{
   
    system("cls");

    cout << endl
         << endl;
    cout << "\t\tTic Tac Toe " << endl
         << endl
         << endl;
    cout << "Player1 [X]\nPlayer2 [O]";

    cout << endl
         << endl;

    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;

    cout << "\t\t_____|_____|_____" << endl;
    cout << "\t\t     |     |     " << endl;
    cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;

    cout << "\t\t     |     |     " << endl;
}



void player_turn()
{
    pCnt++;

//X Axis

if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }
else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }
else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }

//Y Axis
else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }
else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }
else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }

//digonal Axis of X
else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }
else if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X'){

game = false;
cout<<"\nplayer1 [X] Won\n"; 
    }

//X Axis of O
else if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }
else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }
else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }

//Y Axis of O
else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }
else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }
else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }

//digonal Axis of O
else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }
else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){

game = false;
cout<<"\nplayer2 [O] Won\n"; 
    }

    else if(pCnt == 10){
    game =  false;
    cout<<"\n Match Draw \n";
    }

    else if (player == 'X' && game){
        cout << "Player1 [X] turn : ";
   

    }

    else if (player == 'O' && game){

        cout << "Player2 [O] turn : ";

    }



 if(game == false) return;

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        row = 0;
        col = 0;

        break;
    case 2:
        row = 0;
        col = 1;

        break;
    case 3:
        row = 0;
        col = 2;

        break;
    case 4:
        row = 1;
        col = 0;

        break;
    case 5:
        row = 1;
        col = 1;

        break;
    case 6:
        row = 1;
        col = 2;

        break;
    case 7:
        row = 2;
        col = 0;

        break;
    case 8:
        row = 2;
        col = 1;

        break;
    case 9:
        row = 2;
        col = 2;

        break;
    default:
        cout << "Please try again";
        break;
    }
    
    if(board[row][col] != 'X' && board[row][col] != 'O' && player == 'X'){
        board[row][col] = 'X';
        player = 'O';
    }
    else if(board[row][col] != 'X' && board[row][col] != 'O' && player == 'O'){
        board[row][col] = 'O';
        player = 'X';
    }
    else{
        cout<<"\ntry again\n\n";
        player_turn();
    }
    display();
    
}


bool gameOver(){

return game;



}

int main()
{

    while (gameOver())
    {
        display();
        player_turn();

        cout << endl
             << endl;
    }
    



   
}