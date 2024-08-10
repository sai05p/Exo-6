//Riddhi Musale
//PRN 23070123108
//Exp 6 For loop inside while loop
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i <= 5) {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t"; 
        }
        cout << endl; 
        i++;
    }
    return 0;
}
