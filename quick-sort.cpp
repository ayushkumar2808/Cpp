#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int low, int high){
  // int pivot = arr[low];
  // int count = 0;
  // for(int i=low+1;i<=high;i++){
  //   if(arr[i]<=pivot){
  //     count++;
  //   }
  // }

  // //place pivot at right place
  // int pivotIdx = low+count;

  // swap(arr[pivotIdx],arr[low]);
  // int l = low;
  // int h = high;

  // while(l<pivotIdx && h>pivotIdx){
  //   while (arr[l]<=pivot)
  //   {
  //    l++;
  //   }
  //   while(arr[h]>pivot){
  //     h--;
  //   }
  //   if(l<pivotIdx && h>pivotIdx){
  //   swap(arr[l++],arr[h--]);

  //   }
    
  // }
  // int i = low;
  // int h = high;
  // while(i<h){
  //   do{
  //     i++;
  //   }
  //   while (arr[i]<=pivot);
  
  // do
  // {
  //   h--;
  // } while (arr[h]>pivot);
  // if(i<h){
  //   swap(arr[i],arr[h]);
  // }
    
  // }
  // swap(arr[low],arr[h]);
  // return pivot;

   int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[low], arr[i - 1]);
    return i - 1; 
}

void mergesort(int arr[],int low, int high){

if(low>=high){
  return;
}
int pivot  = partition(arr,low,high);

mergesort(arr,low,pivot-1);
mergesort(arr,pivot+1,high);

}
int main(){

  int arr[5] = {5,3,1,43,6};
  int n =5;

  mergesort(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}