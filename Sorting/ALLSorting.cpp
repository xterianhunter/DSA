#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int size){
    int min_idx;
    for(int i=0; i<size-1; i++){
        min_idx = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
        swap(arr[i], arr[min_idx]);
        }
    }
}

void insertionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j = j-1;
        }
        arr[j+1] = key;
    }
}

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return (i+1);
}

void quickSort(int arr[], int start, int end){
    if(start<end){
        int p= partition(arr, start, end);
        quickSort(arr, start, p-1);
        quickSort(arr, p+1, end);
    }
}

int main (){
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    // bubbleSort(arr,size);
    // selectionSort(arr,size);
    // insertionSort(arr,size);
    quickSort(arr, 0, size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}