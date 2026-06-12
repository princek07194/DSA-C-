include <iostream>
using namespace std;

int main() {
    int n = 7;  // fixed size for your pattern

    for (int i = 0; i < n; i++) {        // rows
        for (int j = 0; j < n; j++) {    // columns
            
            if (i == 0 && j >= n/2)          // top row half
                cout << "* ";
            else if (j == 0 && i <= n/2)     // left col half
                cout << "* ";
            else if (i == n-1 && j <= n/2)   // bottom row half
                cout << "* ";
            else if (j == n-1 && i >= n/2)   // right col half
                cout << "* ";
            else if (i == n/2)               // middle row
                cout << "* ";
            else if (j == n/2)               // middle col
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
