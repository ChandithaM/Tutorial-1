#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    char run;
    int randN;
    int randS;
    int guessN;
    cout << "Welcome to Guess the Number!!!\n";


    do{
        cout << "Enter random number to start game: ";
        cin >> randS;
        srand(randS);
        randN = (rand()%15) +1;

        for (int i = 0; i < 3; ++i) {
            cout << "\nGuess the SECRET number: ";
            cin >> guessN;

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


    }while(run == 'Y' || 'y');
    return 0;
}