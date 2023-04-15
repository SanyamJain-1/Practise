#include<iostream>
using namespace std;

int AP(int n){
    return ((3*n)+7);
}

int main(){
    int n;

    cout << "Enter the term ::";
    cin >> n;

    cout << AP(n);

    return 0;
}