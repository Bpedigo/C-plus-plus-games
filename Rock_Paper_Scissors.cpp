//C++ rock paper sissors game
//by Brian Pedigo Jan 2014
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

//functions
void stop();
string get_winner(string Player, string cpu);
string get_cpu_move();
string ask_Player( string prompt);
char ask_Text(string promt);
void welcome();
void cls();
//end of functinos


int main()
{
    welcome();
    int pwins = 0;
    int cwins = 0;

    bool play_game = true;
    while(play_game = true)
    {


        cls();
        cout<<"Pick your move or press Q to quit!\n";
        cout<<"====================================\n";
        cout<<"R.) Rock"<<endl;
        cout<<"P.) Paper"<<endl;
        cout<<"S.) Scissors"<<endl;
        cout<<"Q.) Quit\n"<<endl;
        cout<<"===================================\n";
        string player = ask_Player("What is your Choice?: ");
        string cpu = get_cpu_move();
        if(player == "Q"){exit(0);}
        else if(player == "Invalid")
        {
                cls();
                cout<<"Invalid choise"<<endl;
                stop();
                continue;
        }
        else{
        cls();
        string winner = get_winner(player, cpu);
        if(winner == "Player"){ pwins++;}
        else if(winner == "CPU"){ cwins++;}
        cout<<"==========Results=================\n";
        cout<<"your pick was: "<<player<<endl;
        cout<<"comp pick was: "<<cpu<<endl;
        cout<<"total player wins: "<<pwins<<endl;
        cout<<"total cpu wins: "<<cwins<<endl;
        cout<<"==================================\n\n";
        cout<<"The winner is: "<<winner<<"\n\n\n\n";
        stop();
        player = " ";
        cpu = " ";
        winner = " ";
        continue;
        }
    }
    return 0;
}

string get_winner(string Player, string cpu)
{
         if(Player == "Paper" && cpu == "Rock") {return "Player";}
    else if(Player == "Scissors" && cpu == "Paper") {return "Player";}
    else if(Player == "Rock" && cpu == "Scissors") {return "Player";}
    else if(Player == "Paper" && cpu == "Scissors") {return "CPU";}
    else if(Player == "Scissors" && cpu == "Rock") {return "CPU";}
    else if(Player == "Rock" && cpu == "Paper") {return "CPU";}
    else if(Player == cpu) {return "Tie";}
}

string get_cpu_move()
{
         const int NUM = 3;
         srand( time(NULL));
	     int bam = (rand() % NUM+1);
         if(bam == 1) {return "Rock";}
	else if(bam == 2) {return "Paper";}
	else if(bam == 3) {return "Scissors";}
}


string ask_Player(string prompt)
{
    char temp;
    cout<<prompt;
    cin>>temp;
    temp = toupper(temp);
         if(temp == 'R') {return "Rock";}
    else if(temp == 'P') {return "Paper";}
    else if(temp == 'S') {return "Scissors";}
    else if(temp == 'Q') {return "Q";}
    else{return "Invalid"; }

}

char ask_Text(string prompt)
{
    char temp;
    cout<<prompt;
    cin>>temp;
    temp = toupper(temp);
    if(temp == 'Y'){return 'Y';}
    if(temp == 'N'){return 'N';}
    else{ cls(); cout<<"ivalid response"; Sleep(1000); cls();}

}

void welcome()
{
bool go = true;
do {
cout<<"        Welcome to the C++ Game\n\n   ";
cout<<"     ( R )ock ( P )aper ( S )cissors   ";
cout<<"\n\n\n";
char YesNo = ask_Text("Would you like to play?(Y/N): ");
if(YesNo == 'Y'){cls(); go = false; break;}
if(YesNo == 'N'){exit(0);}
}while(go = true);
}

void cls ()
{
    system("cls");
}

void stop ()
{
    system("pause");
}



