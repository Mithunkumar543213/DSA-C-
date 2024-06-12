#include <iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int first=0;
    int end=size-1;

    int mid = first +(end-first)/2;

    int ans =-1;

    while (first<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid]){
            first=mid+1;
        }

        else if(key<arr[mid]){
            end=mid-1;
        }
         
         mid = first +(end-first)/2;

    }
    return ans;
    
}

int SecondOcc(int arr[],int size,int key){
    int first=0;
    int end=size-1;

    int mid = first +(end-first)/2;

    int ans =-1;

    while (first<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            first=mid+1;
        }

        else if(key>arr[mid]){
            first=mid+1;
        }

        else if(key<arr[mid]){
            end=mid-1;
        }
         
         mid = first +(end-first)/2;

    }
    return ans;
    
}

int main(){

int arr[8]={0, 0, 1, 1, 2 ,2 ,2, 2};

 int res=firstOcc(arr,8,2);

 int res1=SecondOcc(arr,8,2);

 cout<< res <<" " << res1;


}