#include<iostream>
using namespace std;

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}



int main(){

    int a[10];

    int ans = 0;

    cout << "Enter the array :-" << endl;
    for(int i=0; i<10; i++){
        cout << "Enter a Element :: ";
        cin >> a[i];
        ans += a[i];
    }

    print(a,10);

    cout << "Sum of array is :: " << ans;

    return 0;
}