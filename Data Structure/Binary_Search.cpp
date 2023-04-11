#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x){
    int left, right, mid;
    left = 0;
    right = n-1;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[100], n, x;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cin>>x;
    int result = binary_search(arr, n, x);
    cout << "Index = "<< result << endl;
    cout << "Value = "<< x;
    return 0;
}
