#include <iostream>
#include <string>
using namespace std;

int main(){
    int a=5;
    string b="A";
    string &c=b;
    int *x=&a;
    string *y=&b;
    int *z=x;
    cout << a <<" "<< b <<" "<< c <<" "<< x <<" "<< y <<" "<< z <<"\n";
    cout << &a <<" "<< &b <<" "<< &c <<" "<< &x <<" "<< &y <<" "<< &z <<"\n";
    b="F";
    cout << a <<" "<< b <<" "<< c <<" "<< x <<" "<< y <<" "<< z <<"\n";
    b="W";
    cout << a <<" "<< b <<" "<< c <<" "<< x <<" "<< y <<" "<< z <<"\n";
    a=6;
    cout << a <<" "<< b <<" "<< c <<" "<< x <<" "<< y <<" "<< z <<"\n";
    a=7;
    cout << a <<" "<< b <<" "<< c <<" "<< x <<" "<< y <<" "<< z <<"\n";
	return 0;
}