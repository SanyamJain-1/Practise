#include<iostream>
using namespace std;

bool power(int a){
    
    if( a&1 ){
        return 0;
    }

    int bits = 0;
    a = a>>1;

    while(a!=0){
        
        if( a&1 ){
            bits++;
        }

        if( bits>1 ){
            return 0;
        }

        a = a>>1;
    }

    return 1;
}

int main(){
    
    int a;

    cout << "Enter a Number :: " ;
    cin >> a;

    cout << "Checked ::" << power(a);

    return 0;
}