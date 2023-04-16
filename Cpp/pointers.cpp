#include<iostream>
using namespace std;

int main(){

    int i=0;
    int *p = &i;

    cout << "i -> " << i;
    cout << endl << "*p->" << *p << endl;
    cout << "p-> " << p << endl;
    cout << "&p-> " << &p << endl;

    int **p1 = &p;

    cout << "**p1-> " << **p1 << endl;
    cout << "*p1->" << *p1 << endl;
    cout << "p1->" << p1 << endl;
    cout << "&p1->" << &p1 << endl;


    // int a[3] = {1,4,8};
    // int *p = a;

    // cout << *(p+1);

    // cout << "Array :: " << *(a);

    return 0;
}