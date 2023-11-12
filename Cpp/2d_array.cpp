#include<iostream>
using namespace std;


//Linear Search
pair<int,int> keySearch(int a[][3],int size, int key){
    pair<int,int> p = {-1,-1};

    for(int i=0; i<size ; i++){
        for( int j=0 ; j<size ; j++){
            if(a[i][j] == key){
                p.first = i;
                p.second = j;
                return p;
            }
        }
    }
    return p;
}


//Row-wise Sum
int rowSum(int a[][3], int size){

    int sum[3] = {0} ;
    
    for(int i = 0; i<size ; i++){
        for(int j=0 ; j<size; j++){
            sum[i] += a[i][j];
        }
    }

    for(int i=0; i<size; i++){
        cout<< "Sum of row" <<i+1 << "is ::" <<sum[i]<<endl;
    }

    return 0;
}


//Sum of both diagonals
pair<int,int> diagonalSum(int a[][3], int size){
    pair<int,int> sum = {0,0};

    for(int i=0 ; i<size; i++){
        sum.first += a[i][i];
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i+j+1 == size){
                sum.second += a[i][j];
            }
        }
    }

    return sum;

}

int main(){

    int a[3][3] = {{1,2,10},{4,54,6},{7,8,9}};

    //Input

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<"Enter a number ::";
    //         cin>>a[i][j];
    //     }
    // }

    //Array Output

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            cout<<a[i][j]<<"   ";
        cout<<endl<<endl;
    }

    //Sum of diagonals
    pair<int,int> sum = diagonalSum(a, 3);

    cout<<"Sum of Diagonal is :: "<< sum.first << endl;
    cout<<"Sum of another Diagonal is :: "<< sum.second << endl;


    //Sum of Each Row
    rowSum(a, 3);
    
    //Search for Key

    // int key;
    // pair<int,int> p;
    // cout<<"Enter a value to search ::";
    // cin>>key;

    // p = keySearch(a , 3, key);
    // if(p.first == -1){
    //     cout<<"Element not Present .";
    //     return 0;
    // }
    // cout<<endl<<"Element Fond at :: ("<<p.first<<","<<p.second<<")";

    return 0;
}
