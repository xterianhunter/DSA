#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int size){
    for(int i=0; i<size; i++){
        if(n==arr[i]){
            return i;
        }
    }
    return -1;
}

int main (){
    int n;
    cout<<"Enter number to be searched: ";
    cin>>n;
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = linearSearch(arr, n, size);
    if(k!= -1){
        cout<<"Number is present at index \""<< k <<"\" in the array."; 
    }else{
        cout<<"Number is not present in the array";
    }
    return 0;
}