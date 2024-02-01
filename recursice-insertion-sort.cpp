#include<iostream>
using namespace std;

void insertion_sort(int arr[], int i, int n){

    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

int main(){
  int arr[10] = {10,133, 332, 43, 5656,565,563,2,4,24};
   int n = sizeof(arr) / sizeof(arr[0]);
 insertion_sort(arr, 0, n);
   for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}

