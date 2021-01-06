
// 1. Arithmetic operators (Unary)
// ++, --
#include<iostream>
using namespace std;

int main(){

  int a = 1, b=2, c;

    //1 //2 //1(value of a will increment here)
  c = a + b + a++ + b++ + ++a + ++b;
                   //2  //3   //4

  cout<<"Incremented value of a: "<<a<<endl;
  cout<<"Incremental value of b: "<<b<<endl;
  cout<<"Addition is: "<<c;

  return 0;      
}

// pre-increment/decrement : ++a (value will change instantly) (value pehele increment/decrement karke use karenge)
// post-increment/decrement : a++ (default or updated value of a will be used and will incremented for next) (value pehele use karenge and then increment/decrement karenge)




// 2. Relational Operators (Boolean)
// ==, !=, >, <, >=, <=

// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter number: ";
//   cin>>a;

//   if(a<10){
//     cout<<a<<" is less than 10";
//   }
//   else if(a>10){
//     cout<<a<<" is greater than 10";
//   }
//   else{
//     cout<<a<<" is 10";
//   }

//   return 0;
// }




// 3. Logical Operators
// &&, ||, !
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter number: ";
//   cin>>a;

//   if( a%2 == 0 && a%3 == 0 ){
//     cout<<a<<" is divisible by both 2 and 3";
//   }
//   else if( a%2 == 0 ){
//     cout<<a<<" is divisble by 2";
//   }
//   else if( a%3 == 0 ){
//     cout<<a<<" is divisible by 3";
//   }
//   else{
//     cout<<a<<" is not divisible by 2 or 3";
//   }

//   return 0;
// }




// 4. Bitwise operators
// and "&&": both true then true
// or "||": any one value true then true
// xor "^": if both same then false otherwise true
// ones complement "~": true becomes false and vice versa
// left shift "<<": shift bits to left ( 4 = 0100 "<<": 1000 )   a<<n = a*2^n
// right shift ">>": shift bits to right ( 4 = 0100 ">>": 0010 )  a>>n = a/2^n




// 5. Assignment operators
// "=": a=10
// "+=": a+=b i.e. a = a+b
// "-=": a-=b i.e. a = a-b
// "*=": a*=b i.e. a = a*b
// "/=": a/=b i.e. a = a/b




// 6. Miscelleneous operators
// sizeof(): returns size of datatype
// conditional ?x:y: if else

// cast: convert one datatype into anther
// #include<iostream>
// using namespace std;

// int main(){
//   char ch = 'a';
//   int(ch) = 97;
// }

// comma ",": seperate values using commas | suppose a = (2,3,4) then last value will assigned to a i.e. a=4

// reference "&": gives the address of variable
// #include<iostream>
// using namespace std;
// int main(){
//   int a;
//   cout<<&(a);
//   return 0;
// }

// pointer "*": pointer to variable
// int *b = &a (here b is pointing to address of a)