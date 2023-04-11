#include<bits/stdc++.h>
using namespace std;

int selection_sort(int arr[], int n){
    int index_min, temp,i,j;
    for(i=0; i<n-1; i++){
        index_min=i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[index_min]){
                index_min=j;
            }
        }
        if(index_min != i){
        temp = arr[i];
        arr[i]=arr[index_min];
        arr[index_min]=temp;
    }
}

    for(int i=0; i<n; i++){
        cout<< arr[i] << "  " ;
    }
}

int main(){
    int arr[100], n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    selection_sort(arr, n);
    return 0;
}
