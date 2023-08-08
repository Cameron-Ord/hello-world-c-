#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza
}