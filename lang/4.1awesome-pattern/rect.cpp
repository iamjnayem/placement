#include<iostream>
 
using namespace std;
 
int main(){
    int row, col;
    while(true){
        cout << "Input your row: ";
        cin >> row;

        cout << "Input your column: ";
        cin >> col;

        for(int i = 0 ; i < row; i++){
            for(int j = 0;  j < col; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}
