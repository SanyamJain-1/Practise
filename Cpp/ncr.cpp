#include<iostream>
using namespace std;

int fact(int a){
    int ans = 1;
    for( int i=2 ; i <= a ; i++){
        ans*=i;
    }
    return ans;
}

int ncr(int n, int r){
    int num = fact(n);
    int denom = fact(r)*fact(n-r);
    int ans = num/denom;
    return ans;
}

int main(){
    
    int n , r ;
    
    cout << "Enter n ::";
    cin >> n;
    
    cout << "Enter r ::";
    cin >> r;

    cout << "Answer is :: " << ncr(n,r);

    return 0;
}
