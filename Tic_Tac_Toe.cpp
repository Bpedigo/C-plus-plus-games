#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

/*these are global varibales that can be use by any function!*/
string player = "X"; /*this is only needed to make sure that the trun function can start turning*/
int moves = 0;
int row;
int colum;
string go = "True";
string TicTac[3][3]=
{
{" "," "," "},
{" "," "," "},
{" "," "," "}
};

/*this function is for windows only it clears the std screen*/
int cls ()
{
    system("cls");
}
/*this is a windows only function that haults the game until the player press enter*/
int stop ()
{
    system("pause");
}
/* this function changes the current player form X to O or back to X*/
int turn()
{
    if( player == "X"){
    player = "O";
    }
    else{ player = "X"; }
}
/*this function is for asking if the player wants to play again*/
int again()
{
    string answer;
    cls();
    cout<<" would you like to to play again?(Y/N)";
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
    else
    {
        go ="Flase";
    }
    }
/* this function checks for the winner you still need to add last horizontal, then vertical then Diagnol*/
int Check()
{
      /* check to see if the square is taken*/
      if( TicTac[0][0] == player && TicTac[0][1] == player && TicTac [0][2]== player)
      {
        go="False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[1][0] == player && TicTac[1][1] == player && TicTac [1][2]== player)
      {
        go = "False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[2][0] == player && TicTac[2][1] == player && TicTac[2][2] == player)
      {
        go="False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[0][0] == player && TicTac[1][0] == player && TicTac[2][0]== player)
      {
        go="False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if ( TicTac[0][1] == player && TicTac[1][1] == player && TicTac[2][1]== player)
      {
        go = "False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[0][2] == player && TicTac[1][2] == player && TicTac[2][2]== player)
      {
        go = "False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[0][0] == player && TicTac[1][1] == player && TicTac[2][2]== player)
      {
        go ="False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if( TicTac[2][0] == player && TicTac[1][1] == player && TicTac[0][2]== player)
      {
        go = "False";
        cls();
        cout<<player<<"  has won the game!\n";
        stop();
        again();
      }
      else if (moves == 9)
      {
        go= "False";
        cls();
        cout<<" TIE GAME!\n  ";
        stop();
        again();
      }
}
/*this function checks to see if the square is clear, it also calls another function to switch the current player*/
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
/*this is the game opening asking the player to if they would like to play or exit game*/
int board1()
{
string response;
string go ="True";
string Square1 ="X";
string Square2 =" ";
string Square3 =" ";
string Square4 ="O";
string Square5 ="X";
string Square6 =" ";
string Square7 ="0";
string Square8 =" ";
string Square9 ="X";
while(go == "True" ){

                cout << "  WECLOME TO THE C++ TIC TAC TOE GAME!!!\n\n";
                cout << "       " << Square1 << "  |  " << Square2 << "  |  " << Square3 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square4 << "  |  " << Square5 << "  |  " << Square6 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square7 << "  |  " << Square8 << "  |  " << Square9 << endl;
				/*cout << "     -----+-----+-----" << endl; */
                cout<< "\n\n  Would you like like to play Tic-Tac-Toe(Y/N)";
                cin>> response;
if( response == "Y"){
    go = "Flase";
    cls();
    break;
}
else{go ="Flase";
    cls();
    exit(0);
}
}
}
/*this is the main game play function*/
int board2 ()
{
       while( go == "True"){
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
int main()
{
    board1();
    board2();
}
