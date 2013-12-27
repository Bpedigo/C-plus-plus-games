//hang man game by Brian Pedigo
//                   2013
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

//**** Global Variables
bool play = false, next = false ;

//***  End of Globals


//**** Functions
void stop();
void start_game();
void cls();
int get_new();
void splash_screen();
void gallows();
void gallows1();
void gallows2();
void gallows3();
void gallows4();
void gallows5();
void gallows6();
void gallows7(); // this function is not in use but it aviable if you want use it in the future
void game_play();
void play_again();
//**** End of functions

void stop ()
{
    system("pause");
}


void start_game()
{

    string query;
    do {
    cout<<"\n";
    cout<<"       |/|                            \n";
    cout<<"       |/|                            \n";
    cout<<"       |/|                            \n";
    cout<<"       |/|                            \n";
    cout<<"       |/|            WECLOME TO THE C++ HANGMAN                \n";
    cout<<"       |/|                            \n";
    cout<<"       |/| /¯)                        \n";
    cout<<"       |/|/\\/                        \n";
    cout<<"       |/|\\/                         \n";
    cout<<"      (¯¯¯)                           \n";
    cout<<"      (¯¯¯)                           \n";
    cout<<"      (¯¯¯)                           \n";
    cout<<"      (¯¯¯)                           \n";
    cout<<"      (¯¯¯)                           \n";
    cout<<"      /¯¯/\\                          \n";
    cout<<"     / ,^./\\                         \n";
    cout<<"    / /   \\/\\                       \n";
    cout<<"   / /     \\/\\                      \n";
    cout<<"  ( (       )/)                       \n";
    cout<<"  | |       |/|                       \n";
    cout<<"  | |       |/|                       \n";
    cout<<"  | |       |/|                       \n";
    cout<<"  ( (       )/)                       \n";
    cout<<"   \\ \\     / /                      \n";
    cout<<"    \\ `---' /                        \n";
    cout<<"     `-----'                          \n";
    cout<<"                     Would you like to Play (Y/N):";
    cin>>query;                                 // Note: could switch query to char type use guery = toupper(query) and skiped the or startments
    if(query == "N" || query == "n")
    {
        exit(0);
    }
    else if(query == "Y" || query == "y")
    {
        play = true;
        next = true;
    }
    else
    {
        cls();
        cout<<"invalid response\n";
        stop();
    };
    }while (next != true);


}

void cls ()
{
    system("cls");
}

void splash_screen()
{
    cout<<"\n\n\n\n";
    cout<<"           W E L C O M E  T O  H A N G M A N\n\n\n\n";
    cout<<"                          by\n";
    cout<<"                     Brain Pedigo\n";
    cout<<"                          2013";
    Sleep(1000);
    cls();

}

string get_new(string choice)
{


enum fields {secertWord, Def, num_field};
const int NUM_WORDS = 15;
const string WORDS[NUM_WORDS][num_field] =
    {
        {"axiom", "A self-evident or universally recognized truth"},
        {"logic", "The study of principles of reasoning"},
        {"control", "To exercise restraint or direction over"},
        {"reliance", "confident or trustful dependence"},
        {"diference", "an instance or point of unlikeness or dissimilarity"},
        {"point", "To indicate a position or direction"},
        {"array", "to place in proper or desired order"},
        {"vector", "a quantity possissing both magnitude and direction"},
        {"construct", "To build or form by putthing togehter parts"},
        {"function", "the purpose for which something is designed or exists"},
        {"string", "A slender cord or thing thread used for binding or tying"},
        {"enumeration", "a catalog or list"},
        {"switch", "to shift or exchange"},
        {"branch", "to divide into separate parts or subdivisions"},
        {"program", "a plan of action to accomplish a specified end"}
    };
    srand( time(NULL));
	int pik = (rand() % NUM_WORDS);
    if(choice == "word")
    {
        string i = WORDS[pik][secertWord];
        return i;
    }
    if(choice == "hint")
    {
        string j = WORDS[pik][Def];
        return j;
    }

};


void gallows()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows1()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows2()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows3()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||             |---                "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows4()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||          ---|---                "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows5()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||          ---|---                "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||            /                    "<<"\n";
 cout<<"         | ||           /                    "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows6()
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||          ---|---                "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||            / \\                 "<<"\n";
 cout<<"         | ||           /   \\                "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}

void gallows7()  // this function is here in case you want to add another guess to the player!
{

 cout<<"           _______________,,.                 "<<"\n";
 cout<<"          /_____________.;;'/|                "<<"\n";
 cout<<"         | ____  _______;;;]/                 "<<"\n";
 cout<<"         | || //'          ;                  "<<"\n";
 cout<<"         | ||//'          ;                   "<<"\n";
 cout<<"         | |//'           ;                   "<<"\n";
 cout<<"         |  /'            $                   "<<"\n";
 cout<<"         | ||             $                   "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||             0                   "<<"\n";
 cout<<"         | ||          ---|---                "<<"\n";
 cout<<"         | ||             |                   "<<"\n";
 cout<<"         | ||            / \\                 "<<"\n";
 cout<<"         | ||           /   \\                "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||                                 "<<"\n";
 cout<<"         | ||    _________________________    "<<"\n";
 cout<<"         | ||   /                        /    "<<"\n";
 cout<<"         | ||  /                        /|    "<<"\n";
 cout<<"         | || /          _____         / /    "<<"\n";
 cout<<"         | ||/          /|___/        / /     "<<"\n";
 cout<<"         | ||          / |  /        / /      "<<"\n";
 cout<<"         |_|/         /    /        / /       "<<"\n";
 cout<<"          /           *****        / /        "<<"\n";
 cout<<"         /                        / /         "<<"\n";
 cout<<"        /                        / /          "<<"\n";
 cout<<"       *************************| /           "<<"\n";
 cout<<"      |_________________________|             "<<"\n";



}



void game_play()
{
    const int wrong_limit = 6;
    string guess_word = get_new("word");
    string hint_word = get_new("hint");
    string guessed_letters(guess_word.size(),'-');
    string used;
    int wrong = 0;
    char response;
    while(play == true)
    {
        int a = (wrong_limit - wrong);
        switch(a)
        {
        case 6:
            cls();
            gallows();
            break;
        case 5:
            cls();
            gallows1();
            break;
        case 4:
            cls();
            gallows2();
            break;
        case 3:
            cls();
            gallows3();
            break;
        case 2:
            cls();
            gallows4();
            break;
        case 1:
            cls();
            gallows5();
            break;
        case 0:
            cls();
            gallows6();
            break;
        case 123:   // I left this here in case I want to give more chances
            cls();
            gallows7();
            break;
        }
        //cout<<guess_word<<endl; this line is for debuging only
        cout<<"\n\n1.) You have "<<a<<" guesses left\n\n";
        cout<<"2.) You've used the following letters: "<<used<<"\n\n";
        cout<<"3.) For a hint type '?' but it will cost you!\n\n";
        cout<<"4.) The letters in the secert word are :  "<<guessed_letters;
        cout<<"\n\nGuess a letter : ";
        cin>>response;
        response = tolower(response);

         if ( guessed_letters == guess_word)
        {
            cls();
            cout<<"\n\n\n\n\n\n\n                              Y O U    W O N  ! ! !\n\n\n\n\n\n\n\n\n\n\n\n ";
            stop();
            play_again();
            continue;
        }

         else if( response == '?')
        {
            cls();
            cout<<"Your hint is :  ";
            cout<<hint_word<<"\n\n\n\n\n\n\n";
            wrong++;
            stop();
            response = NULL;
            continue;
        }



        else if (a == 0)
        {
            cout<<" You have been hung!\n";
            stop();
            play_again();
            continue;
        }

        else if (guess_word.find(response)!= string::npos)
        {
            for( int i = 0; i<guess_word.length(); ++i)
            {
                if(guess_word[i] == response)
                {
                    guessed_letters[i] = response;
                    used += response;
                }
            }
            response = NULL;
            continue;
        }
        else
        {
            used += response;
            wrong++;
            response = NULL;
            cout<<"That letter is not in the secert word, Try again!\n";
            stop();
            continue;
        }
    }
}


void play_again()
{
    cls();
    do {
    string query;
    cout<<"Thanks for Playing hang man!\n\n\n\n";
    cout<<"Would you like to Play again? (Y/N):";
    cin>>query;                                 // Note: could switch query to char type use guery = toupper(query) and skiped the or startments
    if(query == "N" || query == "n")
    {
        next = true;
        exit(0);
    }
    else if(query == "Y" || query == "y")
    {
        game_play();
    }
    else
    {
        cls();
        cout<<"invalid response\n";
        stop();
    };
    }while (next != true);
}












int main()
{

    splash_screen();
    start_game();
    game_play();
    return 0;
}
