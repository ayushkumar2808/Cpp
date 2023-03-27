#include <iostream>
using namespace std;

int firstoccur(int arr[],int size,int key){

    int start=0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;

        }
        else{
            end = mid-1;

        }
         mid = start+(end-start)/2;
    }
    return ans;

}
int lastoccur(int arr[],int size,int key){

    int start=0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;

        }
        else if(key>arr[mid]){
            start = mid+1;

        }
         mid = start+(end-start)/2;
    }
    return ans;

}



int main(){
    int even[8] = {1,5,5,5,5,8,9,9,};

    cout<<"first occurence is "<<firstoccur(even,8,5)<<endl;
    cout<<"last occurence is "<<lastoccur(even,8,5);
   
}