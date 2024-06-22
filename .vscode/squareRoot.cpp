#include<iostream>
using namespace std;

int findsqrt(int sqrt){
    int last = sqrt;
    int first= 0;
    int ans=-1;

    int mid = first + (last-first)/2;
    
    while(first<=last){
     
    int sq= mid*mid;

    if(sq==sqrt){
        return mid;
    }

    else if (sq>sqrt){
       last=mid-1;
    }

    else if(sq<sqrt){
        ans=mid;
        first=mid+1;
    }

    mid = first + (last-first)/2;

    }
return ans;

}


int main(){
    cout << "Enter the value which we want to find the squr root ";
    int sqrt;
    cin >> sqrt;

    cout<< "squre root of the given number is = "<< findsqrt(sqrt);



}