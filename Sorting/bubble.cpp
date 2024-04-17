#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main (){
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<n; i++){
        cout<<"enter arr["<<i<<"]: ";
        cin>>arr[i];
    }

    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: "<<arr[i]<<"\n";
    }

    return 0;
}