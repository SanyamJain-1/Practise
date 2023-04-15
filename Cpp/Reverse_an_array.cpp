#include<iostream>
using namespace std;

void print(int a[], int n){

    cout << "Array :-" << endl;

    for( int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}


void reverse(int a[], int n){
    
    int temp;

    for(int i=0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }


}


int main(){
    
    int a[9];

    cout << "Enter array :-" << endl;
    for(int i=0; i<9; i++){
        cout << "Enter an element ::";
        cin >> a[i];
    }

    reverse(a,9);
    print(a,9);

    return 0;
}