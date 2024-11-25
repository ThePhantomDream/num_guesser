#include <iostream>
#include <string>
using namespace std;

int guess;

int main()
{
    int choice;
    string diff[3] = {"Easy", "Medium", "Hard"};
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "You have 5 chances to guess the correct number." << endl;

    cout << "\n\nPlease select the difficulty level:" << endl;
    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (5 chances)" << endl;
    cout << "3. Hard (2 chances)" << endl;

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    int chances;
    int attempts;
    int random = 1 + (rand() % 100);

    switch (choice)
    {
    case 1:
        chances = 10;
        break;
    case 2:
        chances = 5;
        break;
    case 3:
        chances = 2;
        break;
    }

    cout << "\nGreat you have selected the " << diff[choice - 1] << " difficulty level.";

    do
    {
        cout << "\nEnter your guess:";
        cin >> guess;

        if (guess == random)
        {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
            break;
        }
        else if (guess < random)
        {
            cout << "Incorrect!, the number is greater than " << guess << endl;
            attempts++;
            chances--;
            cout << "There is " << chances << " chances left\n"
                 << endl;
        }
        else if (guess > random)
        {
            cout << "Incorrect!, the number is less than " << guess << endl;
            attempts++;
            chances--;
            cout << "There is " << chances << " chances left\n"
                 << endl;
        }
        else
        {
            cout << "Invalid input!" << endl;
            attempts++;
            chances--;
            cout << "There is " << chances << " chances left\n"
                 << endl;
        }

        if (chances == 0)
        {
            cout << "That unfortunate, you didnt guess the number!";
            break;
        }
    } while (chances != 0);
}