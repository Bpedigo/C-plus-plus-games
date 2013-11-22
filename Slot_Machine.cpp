#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;
/*GLOBALS*************/
string wheels[10] = {"Queen", "Jack","King","Ace","Star","Triangle","Square","Mickey","Club","Heart"};
/********************/
/**this function is for for clearing the screen. NOTE THIS IS FOR WINDOWS ONLY!*/
int cls ()
{
    system("cls");
}
/*this function is for pauseing the game. NOTE THIS IS FOR WINDOWS ONLY!*/
int stop ()
{
    system("pause");
}

/***this function is for seting the srand so that when we call for our randRange we get random #'s. ONLY CALL THIS ONCE IN THE BEGIN OF MAIN!*/
int seed()
{
srand( time(NULL));
}
/**we can call this function to turn out random numbers in range we set. be sure that seed is called before this functions*/
int randRange (int low, int high)
{
  return rand() % (high - low + 1) + low;
}
/*this function should have alot of art as it is the front of the slot machince. This function is eye candy only*/
void spiner()
{
    for(int i=0; i<2; i++)
    {
      for(int j = 0; j<6; j++)
      {
          for(int k=0; k<5;k++)
          {
cout<<"\n\n\n\n";
cout<<"   _________  "<< "   _________   "<< " ___________ \n";
cout<<"  |         |  "<< " |         |   "<<"|           |  \n";
cout<<"     "<<wheels[k]<<"         "<< "   "<<wheels[j]<<"    "<<"  "<<wheels[k]<<"\n";
cout<<"  |        | "<< "   |         |  "<<" |           |  \n";
cout<<"  |        | "<< "   |         |  "<<" |           |  \n";
cout<<"  |        | "<< "   |         |  "<<" |           |  \n";
cout<<"  |________| "<< "   |_________|  "<<" |___________|  \n";
             Sleep(50);
             cls();
          }
      }
    }
   cout<<"LETS SEE WHAT YOU GOT!\n";
   stop();
}
/* this function is for seeing if the player won!*/
void winner()
{
    int temp1 = randRange(0,9);
    int temp2 = randRange(0,9);
    int temp3 = randRange(0,9);
    cls();
    cout<<"  R  E  S  U  L  T  S\n\n";
    cout<<"  "<< wheels[temp1]<<"   "<< wheels[temp2]<<"   "<<wheels[temp3]<<"\n\n";
    if(wheels[temp1] == wheels[temp2] && wheels[temp2]== wheels[temp3])
    {
        cout<<" J  A  C  K   P  O   T   **********!!!!!!\n\n\n";
    }
    else
    {
        cout<<" Y  O  U   L  O S  E !!\n\n\n";
    }
}
/***Ask the player if they want to play**/
void prompt()
{
    string open = "open";
    string answer;
    while( open == "open")
    {
    cout<<"W E L C O M E  T O  T H E  C++  S L O T  M A C H I N E\n\n\n";
    cout<< " By Brain Pedigo Nov 2013\n\n\n\n\n";
    cout<< "Would you like to play (y/n)";
    cin>>answer;
    if(answer == "Y")
    {
        open = "Closed";
        break;
    }
    else
    {
        exit(0);
    }
    }
}
/**this is the main function of the game*/
void slots ()
{
    string open ="open";
    string answer;
    while(open == "open")
    {
        cls();
        cout<<"Pull the handel or quit the slot machine (P/Q):";
        cin>>answer;
        if(answer == "P")
        {
          spiner();
          winner();
          stop();
        }
        else
        {
            exit(0);
        }
    }
}
/*the engine*/
int main()
{
    seed();
    prompt();
    slots();
}
