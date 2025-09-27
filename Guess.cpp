/*
 * Programming Project 2: Number Guessing Game
 * Author: Pratik Acharya
 * Date: September 27, 2025
 * Description: A simple number guessing game that generates a random number
 *              between 1 and 100 and prompts the user to guess it, providing
 *              feedback on whether the guess is too high or too low.
 */

#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main()
{
    default_random_engine rng((unsigned)(chrono::system_clock::now().time_since_epoch().count()));
    uniform_int_distribution<int> range(1, 100);
    int target = range(rng);
    
    int guess;
    
    do {
        cout << "Please guess a number between 1 and 100: ";
        cin >> guess;
        
        if (guess == 0) {
            break;
        }
        
        if (guess == target) {
            cout << "You win!" << endl;
            return 0;
        }
        else if (guess < target) {
            cout << "You have guessed low, try again..." << endl;
        }
        else if (guess > target) {
            cout << "You have guessed high, try again..." << endl;
        }
        
    } while (true);
    
    return 0;
}