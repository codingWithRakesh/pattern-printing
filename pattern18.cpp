#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        for(int s1 = n - i-1; s1 > 0; s1--){
            cout << " ";
        }
        for(int s2 = n - i-1; s2 > 0; s2--){
            cout << " ";
        }
        for(int k = 0; k < i+1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        for(int s1 = 0; s1 < i; s1++){
            cout << " ";
        }
        for(int s2 = 0; s2 < i; s2++){
            cout << " ";
        }
        for(int k = 0; k < n-i; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}