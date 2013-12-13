#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

//*****Globals
string player = "X";
int moves = 0;
int row;
int colum;
bool go = true;
string TicTac[3][3]=
{
{" "," "," "},
{" "," "," "},
{" "," "," "}
};

//end of globals

//****functions
void cls();
void stop();
void turn();
void again();
void check();
int validate();
void opening();
void board2();
void board3();
void player_move();
void computer_move();
//end of functions







/*this function is for windows only it clears the std screen*/
void cls ()
{
    system("cls");
}
/*this is a windows only function that haults the game until the player press enter*/
void stop ()
{
    system("pause");
}
/* this function changes the current player form X to O or back to X*/
void turn()
{
    if( player == "X"){
    player = "O";
    }
    else{ player = "X"; }
}
/*this function is for asking if the player wants to play again*/
void again()
{
    string answer;
    cls();
    cout<<" would you like to to play again?(Y/N) or back to the menu? (M)";
    cin>>answer;
    cls();
    if(answer == "Y")
    {
      /*clear the board*/
      TicTac[0][0] = " ";
      TicTac[0][1] = " ";
      TicTac[0][2] = " ";
      TicTac[1][0] = " ";
      TicTac[1][1] = " ";
      TicTac[1][2] = " ";
      TicTac[2][0] = " ";
      TicTac[2][1] = " ";
      TicTac[2][2] = " ";
      moves = 0;
      go = "True";
    }
    else if(answer == "M")
    {
         /*clear the board*/
      TicTac[0][0] = " ";
      TicTac[0][1] = " ";
      TicTac[0][2] = " ";
      TicTac[1][0] = " ";
      TicTac[1][1] = " ";
      TicTac[1][2] = " ";
      TicTac[2][0] = " ";
      TicTac[2][1] = " ";
      TicTac[2][2] = " ";
      moves = 0;
      go = "True";
      opening();

    }else
    {
        go = false;
    }
    }
/* this function checks for the winner you still need to add last horizontal, then vertical then Diagnol*/
void Check()
{
      /* check to see if the square is taken*/
      if( TicTac[0][0] == player && TicTac[0][1] == player && TicTac [0][2]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[1][0] == player && TicTac[1][1] == player && TicTac [1][2]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[2][0] == player && TicTac[2][1] == player && TicTac[2][2] == player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[0][0] == player && TicTac[1][0] == player && TicTac[2][0]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[0][1] == player && TicTac[1][1] == player && TicTac[2][1]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[0][2] == player && TicTac[1][2] == player && TicTac[2][2]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[0][0] == player && TicTac[1][1] == player && TicTac[2][2]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[2][0] == player && TicTac[1][1] == player && TicTac[0][2]== player)
      {
        go = false;
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if (moves == 9)
      {
        go= false;
        cls();
        cout<<" TIE GAME!\n  ";
        stop();
        again();
      }
}
/*this function checks to see if the square is clear, if the square is clear it the player takes the sqaure and the function returns 1
  other wise it tells the player the spot is taken and returns 2
*/
int validate( int x, int y)
 {
if(TicTac[x][y] != "X" && TicTac[x][y] != "O")
 {
   moves++;
   TicTac[row][colum]=player;
   cls();
   return(1);
 } else {
 cls();
 cout<<"That spot is taken try agian!\n" ;
 return(2);
 stop();
 }
 }

void computer_move()
{
    cls();
    int comp_col[9] = {1,0,0,2,2,0,2,1,2};
    int comp_row[9] = {1,0,2,0,2,1,1,2,1};
    int cols = 0;
    int rows =0;
    int up=0;
    bool legit = false;
    while(legit != true)
    {
        cols = comp_col[up];
        rows = comp_row[up];
        if(TicTac[rows][cols] != " ")
        {
            legit = false;
            up++;
        }
        else
        {
            TicTac[rows][cols] = "O";
            Check();
            player = "X";
            legit = true;
        }
    }


}

void player_move()
{

                int a;
                string x, sub1, sub2;
                cout <<"Player: "<<player<< " chose your move!" << endl;
                cin >> x;
                if (x.length() == 2)
               {
                sub1 = x.substr(0,1);
                sub2 = x.substr(1,1);
                istringstream buf1(sub1);
                istringstream buf2(sub2);
                buf1 >> row;
                buf2 >> colum;
               }
                a = validate(row,colum);
                switch(a)
                {
               case 1:
                   Check();
                   player = "O";
                   break;

               case 2:
                   Check();
                   break;
                }



}







/*this is the game opening asking the player to if they would like to play or exit game*/
void opening()
{
string response;
string Square1 ="X";
string Square2 =" ";
string Square3 =" ";
string Square4 ="O";
string Square5 ="X";
string Square6 =" ";
string Square7 ="0";
string Square8 =" ";
string Square9 ="X";
while(go == true ){

                cout << "  WECLOME TO THE C++ TIC TAC TOE GAME!!!\n\n";
                cout << "       " << Square1 << "  |  " << Square2 << "  |  " << Square3 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square4 << "  |  " << Square5 << "  |  " << Square6 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square7 << "  |  " << Square8 << "  |  " << Square9 << endl;
				/*cout << "     -----+-----+-----" << endl; */
                cout<< "\n\n  Would you like like to play Tic-Tac-Toe?\n";
                cout<< "  (P) against another player?\n";
                cout<< "  (C) against the computer?\n";
                cout<< "  (Q) quit\n";
                cout<< "  enter your choice :";
                cin>> response;
if( response == "P"){

    cls();
    board2();
    break;
}
else if ( response == "C"){
    cls();
    board3();
    break;
}
else if ( response == "Q"){
    go = false;
    cls();
    exit(0);
}
else{
    cls();
    cout<<"Invalid response";
    stop();

}
}
}
/*this is the main game play function*/
void board2 ()
{
       while( go == true){
                int a;
                cout <<"\n\n\n\n";
                cout <<"         0    1    2      \n"<<endl;
                cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                cout << "\n\n\n\n";
                string x, sub1, sub2;
                cout <<"Player: "<<player<< " chose your move!" << endl;
                cin >> x;
                if (x.length() == 2)
               {
                sub1 = x.substr(0,1);
                sub2 = x.substr(1,1);
                istringstream buf1(sub1);
                istringstream buf2(sub2);
                buf1 >> row;
                buf2 >> colum;
               }
                a = validate(row,colum);
                switch(a)
                {
               case 1:
                   Check();
                   turn();
                   break;

               case 2:
                   Check();
                   break;
                }
}
}

void board3 ()
{
       player = "X";
       while( go == true){
                int a;
                cout <<"\n\n\n\n";
                cout <<"         0    1    2      \n"<<endl;
                cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                cout << "\n\n\n\n";
                if(player == "X")
                {
                    player_move();
                    continue;
                }
                else if (player == "O")
                {
                    computer_move();
                    continue;
                }
       }
}

int main()
{
    opening();
}
