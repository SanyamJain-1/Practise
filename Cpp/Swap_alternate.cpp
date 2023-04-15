#include<iostream>
using namespace std;

void swapp(int a[], int n){

    int temp;

    for(int i = 0; i<n; i+=2){

        // temp = a[i];
        // a[i] = a[i+1];
        // a[i+1] = temp;

        swap(a[i],a[i+1]);
    }
}

void print(int a[], int n){
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

}

int main(){

    int a[10];

    cout << "Enter Array :-" << endl;
    for(int i=0; i<6; i++){
        cout << "Enter a element :: ";
        cin >> a[i];
    }

    int size = 6;

    print(a,size);
    
    swapp(a,size);
    print(a,size);

    return 0;

}