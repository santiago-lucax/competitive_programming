#include <iostream>
using namespace std;

int main() {
    int n; string str;
    cin >> n >> str;
    
    int i = 0; string complement;
    while (i++ < n - str.length()) complement += 'o';
    cout << complement + str << "\n";

    return 0;
}
