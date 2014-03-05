// Hal 2001
// Simulates caring for your computer
// using classes

#include <windows.h>
#include <iostream>

using namespace std;

void cls();
void stop();

class hal
{
public:
    hal(int hunger = 10, int boredom = 10);
    void talk();
    void eat(int food =4);
    void play(int fun =4);
    void eye(int mood);
    int getmood() const;
    int ask(string prompt);

private:
    int m_hunger;
    int m_boredom;
    void PassTime(int time = 5);
};

hal::hal(int hunger, int boredom):
    m_hunger(hunger),
    m_boredom(boredom)
    {}

inline int hal::getmood() const
{
    return(m_hunger - m_boredom);
}

void hal::PassTime(int time)
{
    m_hunger += time;
    m_boredom += time;
}

void hal::talk()
{
    cout<<"I am Hal 2001 and I am currently  ";

    int mood = getmood();

    if(mood>15)
    {
        cout<<"Starving!!\n\n\n\n";
    }
    else if(mood>10)
    {
        cout<<"hungery.\n\n\n\n";
    }
    else if(mood>5)
    {
        cout<<"Okay. \n\n\n\n";
    }
    else
    {
        cout<<"Happy.\n\n\n\n";
    }

    PassTime();

}

void hal::eye(int mood)
{

    if(mood>15)
    {
        system( "color 0C");


     cout<<"    ______________               \n";
     cout<<"   |  __________  |              \n";
     cout<<"   | |          | |              \n";
     cout<<"   | |  >< ><   | |              \n";
     cout<<"   | |    (     | |              \n";
     cout<<"   | |  :```:   | |              \n";
     cout<<"   | !__________! |              \n";
     cout<<"   |  ,           |              \n";
     cout<<"   | (c    =====. |              \n";
     cout<<"   |              |_______       \n";
     cout<<"   |--------------|       )      \n";
     cout<<"   !______________!      (       \n";
     cout<<"  ____________________    ___    \n";
     cout<<" |[][][][][][][][][][]|  |[_]|   \n";
     cout<<" |[][][][][][][][][][]|  |   |   \n";
     cout<<" |[][][][______][][][]|  |___|   \n";
     cout<<" !____________________!          \n";
    }
    else if(mood>10)
    {
        system( "color 0D" );

     cout<<"    ______________               \n";
     cout<<"   |  __________  |              \n";
     cout<<"   | |          | |              \n";
     cout<<"   | |   O  O   | |              \n";
     cout<<"   | |    (     | |              \n";
     cout<<"   | |    ~~    | |              \n";
     cout<<"   | !__________! |              \n";
     cout<<"   |  ,           |              \n";
     cout<<"   | (c    =====. |              \n";
     cout<<"   |              |_______       \n";
     cout<<"   |--------------|       )      \n";
     cout<<"   !______________!      (       \n";
     cout<<"  ____________________    ___    \n";
     cout<<" |[][][][][][][][][][]|  |[_]|   \n";
     cout<<" |[][][][][][][][][][]|  |   |   \n";
     cout<<" |[][][][______][][][]|  |___|   \n";
     cout<<" !____________________!          \n";

    }
    else if(mood>5)
    {
     system ( "color 02" );
     cout<<"    ______________               \n";
     cout<<"   |  __________  |              \n";
     cout<<"   | |          | |              \n";
     cout<<"   | |   O  O   | |              \n";
     cout<<"   | |    (     | |              \n";
     cout<<"   | |    ==    | |              \n";
     cout<<"   | !__________! |              \n";
     cout<<"   |  ,           |              \n";
     cout<<"   | (c    =====. |              \n";
     cout<<"   |              |_______       \n";
     cout<<"   |--------------|       )      \n";
     cout<<"   !______________!      (       \n";
     cout<<"  ____________________    ___    \n";
     cout<<" |[][][][][][][][][][]|  |[_]|   \n";
     cout<<" |[][][][][][][][][][]|  |   |   \n";
     cout<<" |[][][][______][][][]|  |___|   \n";
     cout<<" !____________________!          \n";



    }
    else
    {
        system("color 03");
     cout<<"    ______________               \n";
     cout<<"   |  __________  |              \n";
     cout<<"   | |          | |              \n";
     cout<<"   | |   O  O   | |              \n";
     cout<<"   | |    (     | |              \n";
     cout<<"   | |  :...:   | |              \n";
     cout<<"   | !__________! |              \n";
     cout<<"   |  ,           |              \n";
     cout<<"   | (c    =====. |              \n";
     cout<<"   |              |_______       \n";
     cout<<"   |--------------|       )      \n";
     cout<<"   !______________!      (       \n";
     cout<<"  ____________________    ___    \n";
     cout<<" |[][][][][][][][][][]|  |[_]|   \n";
     cout<<" |[][][][][][][][][][]|  |   |   \n";
     cout<<" |[][][][______][][][]|  |___|   \n";
     cout<<" !____________________!          \n";
    }

}



void hal::eat(int food)
{
    cout<<"Brrrruppp.\n";
    m_hunger -=food;
    if(m_hunger<0)
    {
        m_hunger = 0;
    }
    PassTime();

}

void hal::play(int fun)
{
    cout<<"WHEEE!\n";

    m_boredom -= fun;

    if(m_boredom<0)
    {
        m_boredom = 0;
    }
    PassTime();
}

inline void cls () {system("cls");}

inline void stop() {system("pause");}

int hal::ask(string prompt)
{
    int answer;
    cout<<prompt;
    cin>>answer;
    return answer;
}

int main()
{

    hal hal_2001; // Hal gets consturcted


    int choice;
    do
    {

        int mood = hal_2001.getmood();

        hal_2001.eye(mood);
        cout<< "\nI am Hal 2001 What would you like to do?\n\n";
        cout<< "(0) Quit\n";
        cout<< "(1) Listen to Hal's feelings\n";
        cout<< "(2) Feed your computer\n";
        cout<< "(3) Play with your computer\n\n";
        choice = hal_2001.ask("choice: ");

        switch(choice)
        {
        case 0:
            cls();
            cout<<"Good Bye Dave!!.\n\n\n";
            stop();
            break;

        case 1:
            cls();
            hal_2001.talk();
            stop();
            break;

        case 2:
            cls();
            hal_2001.eat();
            stop();
            break;

        case 3:
            cls();
            hal_2001.play();
            stop();
            break;
        default:
            cout<<"\nSorry, but"<<choice<<" isn't a valid choice.\n";
        }
    }while(choice !=0);


        }


