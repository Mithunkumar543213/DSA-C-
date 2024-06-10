// Your First C++ Program

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello World!";
    
// }


//decimal to binary conversion

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the decimal number " <<endl;
//     cin >> n;
     
//      int i=0;
//      int res=0;
//      int place=1;

//     while(n!=0){
//         int bit= n & 1;

//         res=( bit * place ) + res;

//         n=n>>1;

//         place=place*10;

//         i++;

//     }

//     cout<<"the binary number =" << res;


// }

// reverse of number by taking care of int number range that is -2power31 to 2power31 - 1

#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    
 int n;
 cout<<"enter the number which you want to revere"<<endl;
 cin>>n;


int ans=0;
 while(n!=0){
   int bit=n%10;

   if(ans>(INT_MAX/10) || ans<(INT_MIN/10)){
    return 0;
   }

   ans=(ans*10)+bit;

   n=n/10;
   


 }

 cout<<"reverse number ="<<ans;


}
