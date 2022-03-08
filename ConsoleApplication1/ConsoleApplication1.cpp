#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int nSecret, nGuess;
    srand(time(0));
    nSecret = rand() % 10 + 1;
    do
    {
        cout << "Guess number 1 to 10: ";
        cin >> nGuess;

        if (nSecret < nGuess)
            cout << "the secret number is lower: " << endl;
        else if (nSecret > nGuess)
            cout << "the secret number is higher: " << endl;
    
    } 
    while (nSecret != nGuess);
    cout << "correct" << endl;
    return 0;
   
}