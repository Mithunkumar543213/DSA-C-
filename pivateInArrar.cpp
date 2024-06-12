#include <iostream>
using namespace std;

 int pivatInArray(int arr[],int size){
    int first = 0;
    int last = size-1;
    int mid = first + (last-first)/2;

    while(first<last){
        if(arr[mid]>=arr[0]){
            first=mid+1;
        }
        else{
            last=mid;
        }
     mid = first +(last-first)/2;

    }
    return first;  //we can return any of the value like first or last beacause at last both are in same place

 }

int main(){

int arr[5]={7,9,1,2,3};

int res = pivatInArray(arr,5);
cout << "pivate is  =" << res;

}
