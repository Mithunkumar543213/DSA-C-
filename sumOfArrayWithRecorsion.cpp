#include <iostream>
using namespace std;

int SumOfArray(int arr[],int size){
     int index =size-1;
    //base case
    int ans=0;
    if(index==-1){
        return 0;
    } 
     ans =arr[index] +SumOfArray(arr,size-1);
     return ans;
    
}

int main(){
    int arr[5]={1,2,3,4,5};

    int ans =SumOfArray(arr,5);

    cout<<"sum of array is"<<ans<<endl;
}