#include<bits/stdc++.h>
using namespace std;

int liner_search(int arr[],int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
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
    cin>> x;
    int result = liner_search(arr,n,x);
    cout << "The element "<< x <<" is found at" << result << " index of the given array.";
    return 0;
}
