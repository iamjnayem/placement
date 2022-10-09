#include<iostream>
 
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b){
        if(a > c){
            cout << a << endl;
        }else{
            cout << c << endl;
        }
    }else{
        if( b > c){
            cout << b << endl;
        }else{
            cout << c << endl;
        }
    }

    //even-odd check

    int n;
    cin >> n;

    if(!(n % 2)){
        cout << n << " Even" << endl;
    }else{
        cout << n << " Odd" << endl;
    }
    return 0;
}
   