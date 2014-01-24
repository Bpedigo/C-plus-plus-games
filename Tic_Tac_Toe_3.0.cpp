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
bool round = true;
string TicTac[3][3]=
{
{" "," "," "},
{" "," "," "},
{" "," "," "}
};
//end of globals

//****functions
void player_vs_player();
void cls();
void stop();
string turn(string player);
void clear_board();
string Check(string player, int moves);
bool validate(int x, int y);
void welcome();
string ask_Player(string prompt);
void player_vs_computer();
void player_move();
void computer_move();
void help();
//end of functions


int main()
{
    welcome();
}



string ask_Player(string prompt)
{
    char temp;
    cout<<prompt;
    cin>>temp;
    temp = toupper(temp);
         if(temp == 'P') {return "Player";}
    else if(temp == 'C') {return "Computer";}
    else if(temp == 'Q') {return "Q";}
    else if(temp == 'H') {return "Help";}
    else{return "Invalid"; }

}

void welcome()
{
clear_board();
string response;
string Square1 ="X";
string Square2 =" ";
string Square3 =" ";
string Square4 ="O";
string Square5 ="X";
string Square6 =" ";
string Square7 ="O";
string Square8 =" ";
string Square9 ="X";
while(go == true ){

                cout << "WECLOME TO THE C++ TIC TAC TOE GAME!!!\n\n";
                cout << "       " << Square1 << "  |  " << Square2 << "  |  " << Square3 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square4 << "  |  " << Square5 << "  |  " << Square6 << endl;
				cout << "     -----+-----+-----" << endl;
				cout << "       " << Square7 << "  |  " << Square8 << "  |  " << Square9 << endl;
				/*cout << "     -----+-----+-----" << endl; */
                cout<< "\n\nWould you like to play Tic-Tac-Toe?\n\n";
                cout<< "(P) Player vs Player?\n\n";
                cout<< "(C) Player vs Computer?\n\n";
                cout<< "(H) Help\n\n";
                cout<< "(Q) Quit\n\n";
                string response = ask_Player("What is your choice? :");
if( response == "Player"){

    cls();
    player_vs_player();
    break;
}
else if ( response == "Computer"){
    cls();
    player_vs_computer();
    break;
}
else if ( response == "Q"){
    cls();
    cout<<"Good Bye!";
    Sleep(1000);
    go = false;
    cls();
    exit(0);

}
else if( response == "Help" )
{
    cls();
    help();
    break;
}
else if ( response == "Invalid"){
    cls();
    cout<<"Invalid input try again!\n\n";
    stop();
    cls();
}
}
}









inline void cls () { system("cls"); }

inline void stop () { system("pause"); }


string turn(string player)
{
    if( player == "X"){
    return "O";
    }
    else{ return "X"; }
}


void clear_board()
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
      go = true;
      round = true;
      player ="X";
    }


string Check(string player, int moves)
{

      if( TicTac[0][0] == player && TicTac[0][1] == player && TicTac [0][2]== player)       {return "winner";}

      else if ( TicTac[1][0] == player && TicTac[1][1] == player && TicTac [1][2]== player) { return "winner"; }

      else if( TicTac[2][0] == player && TicTac[2][1] == player && TicTac[2][2] == player)  { return "winner"; }

      else if ( TicTac[0][0] == player && TicTac[1][0] == player && TicTac[2][0]== player)  { return "winner"; }

      else if ( TicTac[0][1] == player && TicTac[1][1] == player && TicTac[2][1]== player)  { return "winner"; }

      else if( TicTac[0][2] == player && TicTac[1][2] == player && TicTac[2][2]== player)   { return "winner"; }

      else if( TicTac[0][0] == player && TicTac[1][1] == player && TicTac[2][2]== player)   { return "winner"; }

      else if( TicTac[2][0] == player && TicTac[1][1] == player && TicTac[0][2]== player)    { return "winner"; }

      else if (moves == 9) { return "Tie"; }

      else { return "Not_Yet";}
}

bool validate( int x, int y)
 {
if(TicTac[x][y] != "X" && TicTac[x][y] != "O") {return true;}
 else { return false;}
 }

void player_vs_player()
{



       while( go == true){


            while( round == true)
            {

                if(moves == 9)
                   {
                       cls();
                       cout<<" Tie";
                       stop();
                       go = false;
                       break;
                   }

                string temperay = " ";
                bool a;
                cls();
                cout <<"\n\n\n\n";
                cout <<"         0    1    2      \n"<<endl;
                cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                cout << "\n\n\n\n";
                string x, sub1, sub2;
                cout<<a<<endl;
                //cout<<moves<<endl;
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


                if (a == true )
                {

                    TicTac[row][colum]=player;
                    temperay = Check(player, moves);

                   if(temperay == "winner")
                    {
                        cls();
                        cout <<"\n\n\n\n";
                        cout <<"         0    1    2      \n"<<endl;
                        cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
                        cout << "      -----+-----+-----" << endl;
				        cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				        cout << "      -----+-----+-----" << endl;
				        cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                        cout << "\n\n\n\n";
                        cout<<"Player "<<player<<" is the Winner\n";
                        stop();
                        clear_board();
                        cls();
                        welcome();
                    }
                    else if(temperay == "Not_Yet")
                    {
                    player = turn(player);
                    moves++;
                    break;
                    }
                }
               else if( a== false)
                {
                    cls();
                    cout<<" Invaild move try another space!\n\n\n";
                    stop();
                    break;
                }


           }


      }


}



void player_vs_computer  ()
{

       string tem;
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
               //cout<<a<<endl;
                if(player == "X")
                {
                    player_move();
                    continue;
                }
                else if (player == "O")
                {
                    computer_move();
                    tem = Check("O", moves);

                   if(tem == "winner")
                    {
                        cls();
                        cout <<"\n\n\n\n";
                        cout <<"         0    1    2      \n"<<endl;
                        cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
                        cout << "      -----+-----+-----" << endl;
				        cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				        cout << "      -----+-----+-----" << endl;
				        cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                        cout << "\n\n\n\n";
                        cout<<"Player "<<player<<" is the Winner\n";
                        stop();
                        clear_board();
                        cls();
                        welcome();
                    }
                    else if(tem == "Not_Yet")
                    {
                    player ="X";
                    continue;
                    }
                }

                }
       }



void player_move()
{
               string temperay = " ";
               bool a;
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


                if (a == true )
                {

                    TicTac[row][colum]="X";
                    temperay = Check("X", moves);

                   if(temperay == "winner")
                    {
                        cls();
                        cout <<"\n\n\n\n";
                        cout <<"         0    1    2      \n"<<endl;
                        cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
                        cout << "      -----+-----+-----" << endl;
				        cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				        cout << "      -----+-----+-----" << endl;
				        cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                        cout << "\n\n\n\n";
                        cout<<"Player "<<player<<" is the Winner\n";
                        stop();
                        clear_board();
                        cls();
                        welcome();
                    }
                    else if(temperay == "Not_Yet")
                    {
                    player = "O";
                    moves++;
                    player_vs_computer();
                    }
                }
               else if( a== false)
                {
                    cls();
                    cout<<" Invaild move try another space!\n\n\n";
                    stop();

                }






}

void computer_move()
{
    cls();
    int comp_col[9] = {1,0,0,2,2,0,2,1,1};
    int comp_row[9] = {1,0,2,0,2,1,1,2,0};
    int cols = 0;
    int rows = 0;
    int up = 0;
    int i = 0;
    int j = 0;
    bool found = false;


    for ( i = 0; i<3 ; i++)
    {
         player = turn(player);

         if( TicTac[0][0] == player && TicTac[0][1] == player )
         {
            if(validate(0,2)) {TicTac [0][2] = "O"; found = true; break;}
         }

      else if ( TicTac[1][0] == player && TicTac[1][1] == player )
        {
            if(validate(1,2)) { TicTac [1][2] = "O"; found = true; break; }
        }

      else if( TicTac[2][0] == player && TicTac[2][1] == player )
        {
            if(validate(2,2)) { TicTac[2][2]  = "O"; found = true; break; }
        }

      else if ( TicTac[0][0] == player && TicTac[1][0] == player)
        {
            if(validate(2,0)) { TicTac[2][0] = "O"; found = true; break; }
        }

      else if ( TicTac[0][1] == player && TicTac[1][1] == player)
        {
            if(validate(2,1)) { TicTac[2][1] = "O";  found = true; break; }
        }

      else if( TicTac[0][2] == player && TicTac[1][2] == player)
        {
            if(validate(2,2)) { TicTac[2][2] = "O"; found = true; break; }
        }

      else if( TicTac[0][0] == player && TicTac[1][1] == player)
        {
            if(validate(2,2)) {TicTac[2][2] = "O"; found = true; break; }
        }

      else if( TicTac[2][0] == player && TicTac[1][1] == player)
        {
            if(validate(0,2)) {TicTac[0][2] = "O"; found = true; break; }
        }


      else if ( TicTac[0][2] == player && TicTac[0][1] == player )
        {
            if(validate(0,0)) {TicTac [0][0] = "O"; found = true; break; }
        }

      else if( TicTac[1][2] == player && TicTac[1][1] == player )
        {
            if(validate(1,0)) {TicTac[1][0] = "O"; found = true; break; }
        }

      else if ( TicTac[2][2] == player && TicTac[2][1] == player)
        {
            if(validate(2,0)) {TicTac[2][0] = "O"; found = true; break; }
        }

      else if ( TicTac[2][0] == player && TicTac[1][0] == player)
        {
            if(validate(0,0)) {TicTac[0][0] = "O";  found = true; break; }
        }

      else if( TicTac[2][1] == player && TicTac[1][1] == player)
        {
            if(validate(0,1)) {TicTac[0][1] = "O"; found = true; break; }
        }

      else if( TicTac[2][2] == player && TicTac[1][2] == player)
        {
            if(validate(0,2)) {TicTac[0][2] = "O"; found = true; break; }
        }

      else if( TicTac[2][2] == player && TicTac[1][1] == player)
        {
            if(validate(0,0)) {TicTac[0][0] = "O"; found = true; break;}
        }

      else if( TicTac[0][2] == player && TicTac[1][1] == player)
        {
            if(validate(2,0)) {TicTac[2][0] = "O"; found = true; break; }
        }
    }



    while(found != true)
    {
        cols = comp_col[up];
        rows = comp_row[up];
        if(TicTac[rows][cols] != " ")
        {

            up++;
        }
        else
        {
            TicTac[rows][cols] = "O";
            found = true;
        }
    }



}

void help()
{
    clear_board();
    while(go= true)
    {
        cls();
        cout<<" To play the tic tac toe game you need to get three spots in a row."<<endl;
        cout<<" in order to make a move on the board you have to use two numbers."<<endl;
        cout<<" The frist number is the colum number and the second is the row"<<endl;
        cout<<" To exit this help screen type in three moves"<<endl;


                cout <<"\n\n\n\n";
                cout <<"         0    1    2      \n"<<endl;
                cout <<"0"<< "       " << TicTac[0][0] << "  |  " << TicTac[0][1] << "  |  " << TicTac[0][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"1"<< "       " << TicTac[1][0] << "  |  " << TicTac[1][1] << "  |  " << TicTac[1][2] << endl;
				cout << "      -----+-----+-----" << endl;
				cout <<"2"<< "       " << TicTac[2][0] << "  |  " << TicTac[2][1] << "  |  " << TicTac[2][2] << endl;
                //cout <<moves;
                cout << "\n\n\n\n";
                string x, sub1, sub2;

                //cout<<moves<<endl;
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
               else {
                cout<<"not a valid move\n\n";
               }

               TicTac[row][colum] = "X";
               moves++;

               if(moves == 3){
                    cls();
                    welcome();
                    }

    }






}


