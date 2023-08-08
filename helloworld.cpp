#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> msg{"hello", "C++", "World", "from", "vsCode!", "and the C++ extension"};

    for(const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}