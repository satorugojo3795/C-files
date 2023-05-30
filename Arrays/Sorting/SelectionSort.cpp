#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    selectionsort(arr,n);
}