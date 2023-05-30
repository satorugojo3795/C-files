//given an array find the length of the longest contiguous subarray
//not completed
#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int contSubarray(int arr[], int n){
    int maxLength = 0;
    int length = 1;
    int commonDiff = arr[1] - arr[0];
    for(int i=1;i<n-1;i++){
        if(arr[i+1]-arr[i]==commonDiff){
            length = length+1;
        }
        else{
            maxLength = max(maxLength,length);
            commonDiff = arr[i+1] - arr[i];
            length = 1;
        }
    }
    return length;
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
    cout<<contSubarray(arr,n);  
}