#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;


//*******function
void cls();
int seed();
void setup_deck();
void draw1();
void draw2();
void draw3();
void draw4();
void opening();
void dealers_table();
int computer_draws();
//*******end of functions


//******Global variables
static int x = 0;
static int y = 0;
static int z = 0;
bool play;
string a;
string b;
string c;
string d;
string e;
string f;
string g;
string h;
string m;
string n;
int o =45;
int playershand;
int computershand;
vector<int> fullDeck;
int plus_one;
//*****End of Globals

void cls ()
{
    system("cls");
}

void Shuffle_Deck()
{
     for(int i = 0 ; i<52; i++)
    {
     fullDeck.push_back(i);
    }
    random_shuffle(fullDeck.begin(), fullDeck.end());
   }


   struct buildDeck
   {
       int vaule;
       string face;
       string suite;
   };

buildDeck card[52];

//**** all cards in a deck are listed with all it info//
void setup_deck()
{
    int values[13]= {2,3,4,5,6,7,8,9,10,10,10,10,11};
    string faces[13] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
//building all the hearts
     for(int i = 0; i<13; i++)
 {
     card[i].vaule = values[i];
     card[i].face = faces[i];
     card[i].suite ="HEARTS";
 }
//building all the spades
    for(int j =13; j<26; j++)
 {
     card[j].vaule =values[x];
     card[j].face = faces[x];
     card[j].suite ="SPADES";
     x++;
 }
//building all the diamonds
for(int k=26; k<39; k++)
{
    card[k].vaule=values[y];
    card[k].face = faces[y];
    card[k].suite ="DIAMONDS";
    y++;
}
//building all the clubs
for(int l=39; l<52; l++)
{
    card[l].vaule=values[z];
    card[l].face = faces[z];
    card[l].suite="CLUBS";
    z++;
}
}

//*****Used only once in main!!!!
int seed()
{
srand( time(NULL));
}
void the_deal()
{
 a = card[fullDeck[0]].face; //first starting card
 b = card[fullDeck[0]].suite;
 c = card[fullDeck[1]].face; //second card
 d = card[fullDeck[1]].suite;
 e = card[fullDeck[45]].face; //computers cards
 f = card[fullDeck[45]].suite; //computers cards
 g = card[fullDeck[2]].face; //thrid card
 h = card[fullDeck[2]].suite;//thrid card
 m = card[fullDeck[3]].face;
 n = card[fullDeck[3]].suite;
computershand = card[fullDeck[45]].vaule;
//put a if statment here to check for aces!!
//put a functions check for aces and have it return the a total for players hand!
playershand = card[fullDeck[0]].vaule + card[fullDeck[1]].vaule;
}

int computer_draws()
{
    return card[fullDeck[o++]].vaule;
}

void check_results()
{
    string tempary;
    cls();
    while (play = true)
    {
        if(21<computershand)
    {
        cout<<" The Dealer had  "<<computershand<<"\n";
        cout<<" You had  "<<playershand<<"\n";
        cout<<" DEALER BUSTED YOU WIN!!!\n\n\n\n";
        cout<<" Would you like to play again? (Y/N)";
        cin>>tempary;
        if(tempary == "Y")
        {
            Shuffle_Deck();
            the_deal();
            plus_one=1;
            dealers_table();
        }
            else{
            play = false;
            exit(0);
            }
    }


    else if(playershand>21)
    {
        cout<<" The Dealer had  "<<computershand<<"\n";
        cout<<" You had  "<<playershand<<"\n";
        cout<<" YOU BUSTED YOU LOSS!!!\n\n\n\n";
        cout<<" Would you like to play again? (Y/N)";
        cin>>tempary;
        if(tempary == "Y")
        {
            Shuffle_Deck();
            the_deal();
            plus_one=1;
            dealers_table();
        }
            else{
            play = false;
            exit(0);
            }
    }


     else if(playershand>computershand)
    {
        cout<<" The Dealer had  "<<computershand<<"\n";
        cout<<" You had  "<<playershand<<"\n";
        cout<<" YOU WIN!!!\n\n\n\n";
        cout<<" Would you like to play again? (Y/N)";
        cin>>tempary;
        if(tempary == "Y")
        {
            Shuffle_Deck();
            the_deal();
            plus_one=1;
            dealers_table();
        }
            else{
            play = false;
            exit(0);
            }
    }
    else if(playershand<computershand)
    {
       cout<<" The Dealer had  "<<computershand<<"\n";
       cout<<" You had  "<<playershand<<"\n";
       cout<<" YOU LOSS!!!\n";
       cout<<" Would you like to play again? (Y/N)";
        cin>>tempary;
        if(tempary == "Y")
        {
            Shuffle_Deck();
            the_deal();
            plus_one=1;
            dealers_table();
        }
            else{
            play = false;
            exit(0);
            }
    }
    else if(playershand == computershand)
    {
        cout<<" The Dealer had  "<<computershand<<"\n";
        cout<<" You had  "<<playershand<<"\n";
        cout<<" YOU TIED WITH THE DEALER!!\n";
        cout<<" Would you like to play again? (Y/N)";
        cin>>tempary;
        if(tempary == "Y")
        {
            Shuffle_Deck();
            the_deal();
            plus_one=1;
            dealers_table();
        }
            else{
            play = false;
            exit(0);
            }
    }
}
}

void opening()
{
    string response;
    cout<<"          ?????????????????????????????????????? . ############################"<<"\n";
    cout<<"                                     ??????????  %  ###########################"<<"\n";
    cout<<"          WELCOME TO BLACK JACK      ?????????  %*:  ##########################"<<"\n";
    cout<<"                by                   ????????  %#*?:  #########################"<<"\n";
    cout<<"            Brian Pedigo             ??????  ,%##*??:.  #######################"<<"\n";
    cout<<"                                     ????  ,%##*?*#*??:.  #####################"<<"\n";
    cout<<"          ?????????????????????????????  ,%###*??*##*???:.  ###################"<<"\n";
    cout<<"          ???????????????????????????  ,%####*???*###*????:.  #################"<<"\n";
    cout<<"          ?????????????????????????  ,%####**????*####**????:.  ###############"<<"\n";
    cout<<"          ???????????????????????  ,%#####**?????*#####**?????:.  #############"<<"\n";
    cout<<"          ??????????????????????  %######**??????*######**??????:  ############"<<"\n";
    cout<<"          ?????????????????????  %######**???????*#######**??????:  ###########"<<"\n";
    cout<<"          ????????????????????  %######***???????*#######***??????:  ##########"<<"\n";
    cout<<"          ????????????????????  %######***???????*#######***??????:  ##########"<<"\n";
    cout<<"          ????????????????????  %######***???????*#######***??????:  ##########"<<"\n";
    cout<<"          ?????????????????????  %######**??????***######**??????:  ###########"<<"\n";
    cout<<"          ??????????????????????  '%######****:^%*:^%****??????:'  ############"<<"\n";
    cout<<"          ????????????????????????   '%####*:'  %*:  '%*????:'   ##############"<<"\n";
    cout<<"          ??????????????????????????           %#*?:           ################"<<"\n";
    cout<<"          ?????????????????????????????????  ,%##*??:.  #######################"<<"\n";
    cout<<"          ???????????????????????????????  .%###***???:.  #####################"<<"\n";
    cout<<"          ??????????????????????????????                   ####################"<<"\n";
    cout<<"          ???????????????????????????????????????*#############################"<<"\n\n";
    cout<<"          Would you like to play cards? (Y/N)";
    cin>>response;
    if(response == "Y")
    {
        play = true;
    }
    else {exit(0);}
}

void draw1()
{
cls();

 cout<<"         DEALERS HAND           "<<"\n";
 cout<<"         _________   _________  "<<"\n";
 cout<<"        |"<<e<<"                "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        | "<<f<<"               "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |    "<<e<<"            "<<"\n";
 cout<<"        |_________| |_________| "<<"\n";
 cout<<"         Hand Total=  "<<computershand<<"\n\n\n";
 cout<<"         PLAYERS HAND            "<<"\n";
 cout<<"         _________   _________   "<<"\n";
 cout<<"        |"<<a<<"       "<<c<<"   "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        | "<<b<<"      "<<d<<"   "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        |         | |         |  "<<"\n";
 cout<<"        |    "<<a<<"      "<<c<<"\n";
 cout<<"        |_________| |_________|  "<<"\n";
 cout<<"         Hand Total=  "<<playershand;
 if(playershand>21){check_results();}


}

void draw2()
{
cls();

playershand += card[fullDeck[2]].vaule;;
 cout<<"         DEALERS HAND           "<<"\n";
 cout<<"         _________   _________  "<<"\n";
 cout<<"        |"<<e<<"                "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        | "<<f<<"               "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |    "<<e<<"            "<<"\n";
 cout<<"        |_________| |_________| "<<"\n";
 cout<<"         Hand Total=  "<<computershand<<"\n\n\n";
 cout<<"         PLAYERS HAND                         "<<"\n";
 cout<<"         _________   _________   _________    "<<"\n";
 cout<<"        |"<<a<<"       "<<c<<"        "<<g<<"             "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        | "<<b<<"      "<<d<<"      "<<h<<"             "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        |         | |         | |         |   "<<"\n";
 cout<<"        |    "<<a<<"      "<<c<<"         "<<g<<"          "<<"\n";
 cout<<"        |_________| |_________| |_________|   "<<"\n";
 cout<<"         Hand Total=  "<<playershand;
 if(playershand>21){check_results();}


}

void draw3()
{
cls();
playershand += card[fullDeck[3]].vaule;
 cout<<"         DEALERS HAND           "<<"\n";
 cout<<"         _________   _________  "<<"\n";
 cout<<"        |"<<e<<"                "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        | "<<f<<"               "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |    "<<e<<"            "<<"\n";
 cout<<"        |_________| |_________| "<<"\n";
 cout<<"         Hand Total=  "<<computershand<<"\n\n\n";
 cout<<"         PLAYERS HAND                                   "<<"\n";
 cout<<"         _________   _________   _________   __________ "<<"\n";
 cout<<"        |"<<a<<"         "<<c<<"      "<<g<<"       "<<m<<"                           "<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        | "<<b<<"    "<<d<<"      "<<h<<"      "<<n<<"                        "<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |    "<<a<<"    "<<c<<"           "<<g<<"         "<<m<<"               "<<"\n";
 cout<<"        |_________| |_________| |_________| |__________|"<<"\n";
 cout<<"         Hand Total=  "<<playershand;
if(playershand>21){check_results();}

}

/* this is the fouth drawing add a fith card to make this work.
void draw4()
{
cls();
string a = card[fullDeck[0]].face; //first starting card
string b = card[fullDeck[0]].suite;
string c = card[fullDeck[1]].face; //second card
string d = card[fullDeck[1]].suite;
string e = card[fullDeck[45]].face; //computers cards
string f = card[fullDeck[45]].suite; //computers cards
computershand =card[fullDeck[45]].vaule;
playershand= card[fullDeck[0]].vaule + card[fullDeck[1]].vaule;
 cout<<"         DEALERS HAND           "<<"\n";
 cout<<"         _________   _________  "<<"\n";
 cout<<"        |"<<e<<"                "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        | "<<f<<"               "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |         | |@@@@@@@@@| "<<"\n";
 cout<<"        |    "<<e<<"            "<<"\n";
 cout<<"        |_________| |_________| "<<"\n";
 cout<<"         Hand Total=  "<<computershand<<"\n\n\n";
 cout<<"         PLAYERS HAND                                   "<<"\n";
 cout<<"         _________   _________   _________   __________ "<<"\n";
 cout<<"        |"<<a<<"       "<<c<<"                                   "<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        | "<<b<<"      "<<d<<"                                  "<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |         | |         | |         | |          |"<<"\n";
 cout<<"        |    "<<a<<"      "<<c<<"                                "<<"\n";
 cout<<"        |_________| |_________| |_________| |__________|"<<"\n";
 cout<<"         Hand Total=  "<<playershand;


}
*/




//the dealers table is were all the functions pull together.
void dealers_table()
{

    string answer;
    while (play == true)
    {

    switch(plus_one)
    {
    case 1:
        draw1();
        break;

    case 2:
        draw2();
        break;

    case 3:
        draw3();
        break;
    }

    cout<<"\n\n\n   Would you like to hit or stay? (H/S)";
    cin>>answer;

    if(answer == "H")
    {
        plus_one++;
    }
    else if(answer == "S")
    {
        while(computershand <17)
        {
            computershand += computer_draws();

        }
        check_results();

    }

    else {
            cls();
            cout<<" INVALIAD RESPONSE!";
            Sleep(1000);
    }
    }
}


int main()
{
opening();
seed();
setup_deck();
Shuffle_Deck();
the_deal();
plus_one=1;
dealers_table();

}
