#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        for(int s = n-i; s > 0; s-- ){
            cout << " ";
        }

        for(int j = 0; j < i+1; j++){
            cout << j+1;
        }

        for(int k = i; k > 0; k--){
            cout << k;
        }

        cout << endl;
    }

    return 0;
}