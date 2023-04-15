#include<iostream>
using namespace std;

int setbit(int a, int b){

    int ans = 0;

    while ( a!=0 ){
        if(a&1){
            ans += 1;
        }

        a = a>>1;

    }

    while ( b!=0 ){
        if(b&1){
            ans += 1;
        }

        b = b>>1 ;

    }

    return ans;

}

int main(){
    int a,b;

    cout << "Enter 1st Number ::";
    cin >> a;

    cout << "Enter 2nd Number ::";
    cin >> b;

    cout << "Total set bits ::" << setbit(a,b);
    
    return 0;
}