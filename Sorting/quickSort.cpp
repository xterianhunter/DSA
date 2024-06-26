#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return (i+1);
}
void quickSort(int arr[], int start, int end){
    if(start<end){
        int p = partition(arr, start, end);

        quickSort(arr, start, p-1);
        quickSort(arr, p+1, end);
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
    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: "<<arr[i]<<"\n";
    }


    return 0;
}