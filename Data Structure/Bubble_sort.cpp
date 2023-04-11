#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}

int main(){
    int arr[100], n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    return 0;
}
