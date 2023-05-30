#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j+1]<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;

    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<"\t";
    }
}

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
}