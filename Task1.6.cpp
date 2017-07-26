#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

	//initializing variables
    char run;
    int randN;
    int guessN;

    //Startup Banner
    cout << "Welcome to Guess the Number!!!\n";
    cout << "--------------------------------------------\n";

    //do loop to always run game the first time
    do

    {

    	//getting a new random number every round
        srand(time(NULL));
        randN = (rand()%15) +1;

        //for loop to limit game to 3 attempts
        for (int i = 0; i < 3; ++i) {

			//request and input for guessing game
            cout << "\nGuess the SECRET number: ";
            cin >> guessN;

            //condition for winning game
            if (guessN == randN){
                cout << "That's correct, you Win!\n";
                break;
            }


            if (i ==2){
                cout << "Oops you're out of tries. Game Over.";
            }

            else if (guessN < randN ){
                cout << "Guess Higher...\n";
            }
            else if (guessN > randN){
                cout << "Guess Lower...\n";
            }

        }

        cout << "\nDo you want to restart game(Y/N)?";
        cin >> run;


    }while(run == 'Y' || run == 'y');

    cout << "\nThanks for playing. Bye!";

    return 0;
}
