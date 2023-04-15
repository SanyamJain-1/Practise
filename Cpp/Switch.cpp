#include<iostream>
using namespace std;

int main(){

    int total;

    cout<<"Enter the amount";
    cin>>total;
    
    int num = 1;
    
    int a,b,c,d,rem;
    switch (1)
    {
    case 1:
        /* code */
        a= total/100;
        rem = total%100;
        b= rem/50;
        rem = rem%50;
        c= rem/20;
        rem%= 20;
        d = rem/1;
    
    default:
        break;
    }

    cout<<"Rupee 100 notes ::"<<a<<endl;
    cout<<"Rupee 50 notes ::"<<b<<endl;
    cout<<"Rupee 20 notes ::"<<c<<endl;
    cout<<"Rupee 1 notes ::"<<d<<endl;


    return 0;
}