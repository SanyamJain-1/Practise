#include<iostream>
using namespace std;

int rdup(int *a, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^a[i];
        if(i+1 < n){
            ans ^= (i+1);
        }
    }

    return ans;
}

int main(){

    int a[5];
    int n=5;
    for(int i=0; i<n; i++){
        cout << "Enter an Element :: ";
        cin >> a[i];
        cout << endl;
    }

    int ans = rdup(a,n);
    cout << "Answer ::" << ans;

    return 0;
}