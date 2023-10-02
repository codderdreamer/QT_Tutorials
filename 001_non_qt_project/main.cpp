#include <iostream>

using namespace std;

int main()
{
    cout << "Hellooo ilk dersime hos geldimm" << endl;
    cerr << "error" << endl;
    clog << "log" << endl;

    std::string name;

    cout << "Please enter a string" << endl;
    cin >> name;

    cout << "your string " << name << endl;

    return 0;
}
