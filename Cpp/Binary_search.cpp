#include<iostream>
using namespace std;

int b_search(int *arr,int key){
    int start = 0, end = 4;
    int mid = start + (end - start)/2;
    while(start <= end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout << "Enter an Element ::";
        cin >> arr[i];
    }
    int key;
    cout<<"\n\nEnter Key to search :";
    cin>>key;
    int index = b_search(&arr[0], key);
    cout<<"Key index ::"<<index;
    return 0;
}