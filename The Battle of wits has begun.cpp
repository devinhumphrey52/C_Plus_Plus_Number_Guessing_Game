// The Battle of wits has begun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Game & Player Intro
    cout << "\n";
    cout << "\n";
    cout << "\t\t\t    !!!!!    \n";
    cout << "\t\t\t   | 0 0 |   \n";
    cout << "\t\t\t  |   $   |  \n";
    cout << "\t\t\t   | === |   \n";
    cout << "\t\t\t   -------   \n";
    cout << "\n";
    cout << "\tWelcome to the number quessing game!\n";
    cout << "\n";
    string charactersName;
    cout << "\tPlease enter your desired character's name.\n";
    cout << "\n";
    getline(cin, charactersName);
    cout << "\n";

    //Game Objective
    cout << "\t" + charactersName + ", The object of this game is to guess a number from 1 to 10.\n";
    cout << "\n";
    cout << "\tIf your guess is correct, you obtain points!\n";
    cout << "\n";
    cout << "\tOnce you achieve 100 points you win the game.\n";
    cout << "\n";
    cout << "\tEach correct guess awards you with 25 points.\n";
    cout << "\n";
    int playerCorrectAnswer = 25;

    //Game Loop based on point count
    int playersPointCount = 0;
    int playersGuess;
    while (playersPointCount < 25)
    {
        //First Guess
        cout << "\tPlease guess a number from 1 to 10! ";
        cin >> playersGuess;
        if (playersGuess == 5)
        {
            cout << "\t" + charactersName + " congrats, 25 points has been added to your score?\n";
            playersPointCount = 25;
            cout << "\n";
        }
        else
        {
            cout << "\tSorry, Your guess was incorect. Please try again!\n";
            cout << "\n";
            continue;
        }
    }
    while (playersPointCount < 50)
    {
        //Second Guess
        cout << "\tPlease guess a number from 1 to 10! ";
        cin >> playersGuess;
        if (playersGuess == 2)
        {
            cout << "\t" + charactersName + " congrats, 25 more points has been added to your score?\n";
            cout << "\n";
            playersPointCount = 50;
            cout << "\t" + charactersName + " you now have ";
            cout << playersPointCount;
            cout << " points!\n";
            cout << "\n";
        }
        else
        {
            cout << "\tSorry, Your guess was incorect. Please try again!\n";
            cout << "\n";
            continue;
        }
    }
    while (playersPointCount < 75)
    {
        //Third Guess
        cout << "\tPlease guess a number from 1 to 10! ";
        cin >> playersGuess;
        if (playersGuess == 8)
        {
            cout << "\t" + charactersName + " congrats, 25 more points has been added to your score?\n";
            cout << "\n";
            playersPointCount = 75;
            cout << "\t" + charactersName + " you now have ";
            cout << playersPointCount;
            cout << " points!\n";
            cout << "\n";
            cout << "\tWOW, " + charactersName + " one more correct guess to win it all!\n";
            cout << "\n";
        }
        else
        {
            cout << "\tSorry, Your guess was incorect. Please try again!\n";
            cout << "\n";
            continue;
        }
    }
    while (playersPointCount < 100)
    {
        //Fourth Guess
        cout << "\tPlease guess a number from 1 to 10! ";
        cin >> playersGuess;
        if (playersGuess == 10)
        {
            cout << "\t" + charactersName + " congrats, 25 more points has been added to your score?\n";
            cout << "\n";
            playersPointCount = 100;
            cout << "\t" + charactersName + " you now have ";
            cout << playersPointCount;
            cout << " points!\n";
            cout << "\n";
            cout << "\tWOW, " + charactersName + " you are the Champion!";
            cout << "\n";
            cout << "\n";
            cout << "\t\t\t    !!!!!    \n";
            cout << "\t\t\t   | 0 0 |   \n";
            cout << "\t\t\t  |   $   |  \n";
            cout << "\t\t\t   | === |   \n";
            cout << "\t\t\t   -------   \n";
            cout << "\n";
            system("PAUSE");
        }
        else
        {
            cout << "\tSorry, Your guess was incorect. Please try again!\n";
            cout << "\n";
            continue;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
