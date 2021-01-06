// #include<iostream>
// using namespace std;

// int main(){

//   int money;
//   cout<<"enter money: ";
//   cin>>money;

//   for(int date=1; date<=31; date++){
//     if(date%2 == 0){
//       continue;
//     }
//     if(money == 0){
//       break;
//     }
//     cout<<date<<" jan: money available"<<endl;
//     money = money - 300;
//   }

//   return 0;
// }



// numbers not divisible by 3 till 100
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter number: ";
//   cin>>a;

//   for( int i=1; i<=a; i++ ){
//     if( i%3 == 0 ){
//       continue;
//     }
//     cout<<i<<" is not divisible by 3"<<endl;
//   }

//   return 0;
// }



// prime or not
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter number: ";
//   cin>>a;

//   int i;
//   for( i=2; i<a; i++ ){
//     if( a%i ==0 ){
//       cout<<a<<" is a composite number"<<endl;
//       break;
//     }
//   }

//   if(i==a){
//       cout<<a<<" is a prime number"<<endl;
//   }

//   return 0;
// }


// prime nos between a and b
#include<iostream>
using namespace std;

int main(){

  int a,b;

  cout<<"Enter first no: ";
  cin>>a;

  cout<<"Enter second no:";
  cin>>b;

  int i;
  for( int num=a; num<=b; num++){

    for(i=2; i<num; i++){
      if(num%i == 0){
        // cout<<num<<" is composite"<<endl; // if you want to print both composite and prime nos.
        break;
      }
    }

    if(num == i){
      cout<<num<<" is prime"<<endl;
    }
  }

  return 0;
}
