#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{    
        string letters[2][3][2] = {
        {
            { "A", "A" },
            { "A", "A" },
            { "A", "A" },
        },
        {
            { "A", "A" },
            { "A", "A" },
            { "A", "A" },
        }
        };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "Enter a letter: ";
                cin >> letters[i][j][k];
            }
        }
    }

    cout << "Updated letters:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << letters[i][j][k] << "\n";
            }
        }
    }


}