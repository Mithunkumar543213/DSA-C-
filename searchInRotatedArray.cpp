#include<iostream>
using namespace std;

int getPivatElement(int arr[],int size){
    int first=0;
    int last=size-1;
    int mid= first+(last-first)/2;

    while(first<last){
        if(arr[mid]>=arr[0]){
            first=mid+1;
        }
        else{
            last=mid;
        }
        mid=first+(last-first)/2;
    }
    return last;
}

int getBinarySearch( int first,int last ,int arr[],int key ){

    int mid = first+(last-first)/2;
    

    while(first<=last){
       if(arr[mid]==key){
        return mid;
       }

        if(arr[mid]<key){
            first=mid+1;
        }
        else{
            last=mid-1;
        }

        mid = first+(last-first)/2;

    } 
}

int searchigInRoatedArray(int arr[], int size,int key){
    int first=0;
    int last=size-1;

int pivat = getPivatElement(arr,size);
if(arr[pivat]<=key && arr[last]>=key){
return getBinarySearch(pivat,last,arr,key);

}
else{
    return getBinarySearch(first,pivat-1,arr,key);
}

}


int main(){
int arr[5] = {7,8,1,2,5};

cout << searchigInRoatedArray(arr,5,8);

}