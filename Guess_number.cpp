#include <cstdlib>
#include <ctime>
#include <iostream>
#include <windows.h>

using namespace std;

/**Global Variable **/

int RandomNumber;

/*****functions**/
void My();
void seed();
int randRange();
void cls();
void stop();
void guess();
void winner();
void computer();
void number();
/** End **/

void seed()
{
srand( time(NULL));
}
/* to use this function you give your range in the parameter of High, low*/
int randRange (int low, int high)
{
  return rand() % (high - low + 1) + low;
}

void cls ()
{
    system("cls");
}

void stop ()
{
    system("pause");
}

void guess()
{
   string status = "Go";
   while(status != "Stop")
   {
       string response;
       cout<<" W E L C O M E   T O  T H E  C++  G U E S S  N U M B E R!\n\n\n\n";
       cout<< "              by Brain Pedigo Nov 2013\n\n\n\n\n";
       cout<<" would you like to to play? (Y/N)";
       cin>>response;
       if( response == "Y")
       {
           status = "Stop";
           break;
       }
       else
       {
           status = "Stop";
           exit(0);
        }
}
}
void winner()
{

     cls();
     string response2;
     cout<<"   T H E  S E C E R T  N U M B E R  W A S\n\n";
     cout<<"               "<<RandomNumber<<"\n\n\n";
     cout<<"   G E A R T  G U E S S  Y O U\n\n\n";
     cout<<"             W  I  N\n\n\n\n\n\n    ";
     stop();
     cls();
     cout<<"Would you like to play again? (Y/N)";
     cin>>response2;
     if(response2 == "Y")
     {
        My();
     }
     else
     {
      exit(0);


     }

}




void computer()
{
    cls();
    seed();

    int computersguess = randRange(1,100);

    string status = "Go";
    RandomNumber = randRange(1,100);
    while (status != "Go");
    {
     cout<<"Please make your guess!\n";
     Sleep(500);
     if(computersguess>RandomNumber)
     {
         for(int i=computersguess; i>=RandomNumber; i--)
       {
        Sleep(100);
        cout <<i<<"\n";
       }
     }

     if(computersguess<RandomNumber)
     {
         for(int i=computersguess; i<=RandomNumber; i++)
         {
        Sleep(100);
        cout<<i<<"\n";
         }
     }
     }
    }



void computer2()
{
    cls();
    seed();

    cout<<"Please Pick a random number for the computer to guess\n";
    cout<<"Warning this can take a long time if you pick really larg numbers!\n";
    cin>>RandomNumber;


    string status = "Go";
    int computersguess = randRange(1,100);
    while (status != "Go");
    {
     cls();
     cout<<"The computer guesses the following numbers!\n";
     Sleep(500);
     if(computersguess>RandomNumber)
     {
         for(int i=computersguess; i>=RandomNumber; i--)
       {
        Sleep(100);
        cout <<i<<"\n";
       }
     }

     if(computersguess<RandomNumber)
     {
         for(int i=computersguess; i<=RandomNumber; i++)
         {
        Sleep(100);
        cout<<i<<"\n";
         }
     }
     }
    }


void My ()
{
    string go = "Go";
    cls();
    seed();
    int response;
    while( go != "Stop")
    {
    cout<<"Pick a number range to guess with in or have the computer play!\n";
    cout<<"1.) 1 to 10\n";
    cout<<"2.) 1 to 50\n";
    cout<<"3.) 1 to 100\n";
    cout<<"4.) have the computer guess at the random number!\n";
    cout<<"5.) have the computer guess a number you pick!\n";
    cin>>response;
    switch( response )
    {
    case 1:
       RandomNumber = randRange(1,10);
       go = "Stop";
       break;

    case 2:
       RandomNumber = randRange(1,50);
       go = "Stop";
       break;

     case 3:
       RandomNumber = randRange(1,100);
       go = "Stop";
       break;

     case 4:
       computer();
       winner();
       break;

     case 5:
        computer2();
        winner();
        break;

    }
}
}

void number()
{
    string play ="Go";
    cls();
    while(play != "Stop")
    {
        int response;
        cls();
            /*this line is for debuging only remove before you play cout<<RandomNumber<<"\n"; */
        cout<<"Please make your guess!\n";
        cout<<"(if you want give enter 0)\n";
        cin>>response;
        if( response == 0)
        {
            play = "stop";
            break;
        }
        else if ( response > RandomNumber)
        {
            cls();
            cout<<"Your Guess was to high!  \n";
            stop();
        }
        else if( response < RandomNumber)
        {
            cls();
            cout<<"Your Guess was to low!  \n";
            stop();
        }
        else
        {
        winner();
        }
    }

}



int main()
{
guess();
My();
number();
}
