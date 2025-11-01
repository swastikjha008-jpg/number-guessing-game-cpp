#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand((unsigned int) time(NULL));
    int number = (rand() % 100) + 1;
    int guess = 0, tries = 0;

    cout << "welcome to number guessing game!" << endl;
    cout << "Try guessing the number between 1 - 100." << endl;

    do
    {
        cout <<"Enter guess(1-100):";
        cin >> guess;
        tries++;

        if(guess > number)
        cout << "Guess lower!" << endl;
        
        else if (guess < number)
        cout << "Guess higher!" << endl;
        else
        cout << "You won in" << tries << "tries!" << endl; 
        /* code */
        
    } while (guess != number);
    
    cout << "You won!" << endl;
    cout <<" Thanks for playing !" << endl;

    return 0;
}
    


