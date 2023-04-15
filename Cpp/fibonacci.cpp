#include<iostream>
using namespace std;

void fib(int n){
    int next,a = 0,b = 1;

    if(n==0){
        cout << "Enter a number greater than 0";
        return ;
    }

    if(n==1){
        cout << a << " ";
        return ;
    }

    if(n >= 2){
        cout << a << endl << b << endl;
    }

    for(int i=2; i<n; i++){
        next = a+b;

        cout << next << endl;

        a = b;
        b = next;
    }

}

int main(){
    int n;

    cout << "Enter the number of terms ::";
    cin >> n;

    fib(n);

    return 0;
    
}