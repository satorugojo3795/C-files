//given an array of length n; output sum of each subarray of the given array
#include<iostream>
using namespace std;

void sumofsubarray(int arr[], int n){
    // int numOfSubarrays = n*(n+1)/2;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum + arr[j];
            cout<<sum<<"\t";
        }
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
    sumofsubarray(arr,n);
}