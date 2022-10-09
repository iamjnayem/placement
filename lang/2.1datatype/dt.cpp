#include<iostream>
 
using namespace std;
 
int main(){
    int a;
    a = 12;
    cout << "size of int: " << sizeof(a) << endl; 

    float b;
    b = 3.14;
    cout << "size of float: " << sizeof(b) << endl;

    char c;
    c = '3';
    cout << "size of char: " << sizeof(c) << endl;

    bool d;
    d = true;
    cout << "size of bool: " << sizeof(d) << endl;


    short int si;
    cout << "size of short int: " << sizeof(si) << endl;

    long int li;
    cout << "size of long int: " << sizeof(li) << endl;




    return 0;
}
