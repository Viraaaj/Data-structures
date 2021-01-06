
// for loop : used when we have  number of iterations (till this)
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter number: ";
//   cin>>a;

//   int sum = 0;

//   for( int i=1; i<=a; i++ ){
//     sum = sum + i;
//   }

//   cout<<sum<<" is the sum of all numbers till "<<a;
//   return 0;
// }



// While loop: used when we have conditionn (will run untill this is true)
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"enter number: ";
//   cin>>a;
  
//   if(a < 0){
//     cout<<a<<" is a negative number, please enter positive number";
//   }

//   while( a > 0 ){
//     cout<<"Enter number: ";
//     cin>>a;
//   }

//   return 0;
// }



// do while loop

#include<iostream>
using namespace std;

int main(){

  int a;
  cout<<"enter number: ";
  cin>>a;

  do{
    cout<<"Enter positive number: ";
    cin>>a;
  }
  while(a > 0);
  
  return 0;
}

