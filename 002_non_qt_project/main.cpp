#include <iostream>
#include <stdlib.h> // srand rand
#include <ctime>

using namespace std;

// Gues My Number

int main()
{
    std::srand(std::time(nullptr));

    int random = std::rand();
    int guess_number;
    int result;

    cout << "Enter your guess: " << endl;

    cin >> guess_number;

    result = random%10 + 1;

    cout << "number: " << result << endl;
    cout << "rand max: " << RAND_MAX << endl;

    if(guess_number == result)
    {
        cout << "Success" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
