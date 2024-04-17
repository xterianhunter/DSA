#include<iostream>
using namespace std;

int linearSearch(int arr[], int k, int size){
    for(int i= 0; i<size; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int l, int r, int k){
    while(l<=r){
    int m = l + (r-l) / 2;
    if(arr[m]==k){
        return m;
    if(arr[m]<k){
        r = m-1;
    }
    if(arr[m]>k){
        l = m+1;
    }
    }


    }
    return -1;

}
int main (){
    int arr[5] = {5,4,3,2,1};
    int k = 3;
    int size = 5;

    // int ans = linearSearch(arr, k, size);
    int ans = binarySearch(arr, 0, 4, 3);
    cout<<"ans: "<<ans;

    return 0;
}