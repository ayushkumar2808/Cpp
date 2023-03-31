#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
int start=0;
int end = size-1;
int mid = start+(end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]>key){
        end=mid-1;

    }
    else{
        start=mid+1;
    }
    mid = start+(end-start)/2;
}
return 0;

}



int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5]= {3,8,11,14,16};
 

    int index= binarysearch(odd,5,8);
    if(index==0){
        cout<<"Not present";
    }
    else{
        cout<<"present";
    }
    return 0;
}