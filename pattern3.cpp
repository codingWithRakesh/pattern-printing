#include <iostream>
using namespace std;

int main(){
    int n = 4;
    char a = 'A';
    int b = a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << (char)('A' + j);
        }
        cout << endl;
    }

    return 0;
}