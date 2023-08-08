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

    cout << &food << "\n"; //outputs memory address

    // refs and pointers are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance. //
}