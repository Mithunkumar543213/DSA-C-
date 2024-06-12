#include<iostream>
using namespace std;

int peakIndex(int arr[],int size){
    int first=0;
    int last=size-1;
    int mid=first+(last-first)/2;

    while(first<last){
        if(arr[mid]<arr[mid+1]){
            first=mid+1;
        }
        else{
            last=mid;
        }
        mid=first+(last-first)/2;
    }
    return first;
}

int main(){
    int arr[3]={0,1,0};
    cout<<peakIndex(arr,3);
}