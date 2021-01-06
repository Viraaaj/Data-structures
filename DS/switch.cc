// // simple calculator
// #include<iostream>
// using namespace std;

// int main(){

//   float a,b;

//   cout<<"enter first number: ";
//   cin>>a;

//   cout<<"enter second number: ";
//   cin>>b;

//   char op;
//   cout<<"enter the operator: ";
//   cin>>op;

//   switch (op){
//     case '+':
//       cout<<"sum of "<<a<<" and "<<b<<" is: "<<(a+b)<<endl;
//       break;

//     case '-':
//       cout<<"difference of "<<a<<" and "<<b<<" is: "<<(a-b)<<endl;
//       break;

//     case '*':
//       cout<<"multiplication of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
//       break;

//     case '/':
//       cout<<"division of "<<a<<" and "<<b<<" is: "<<(a/b)<<endl;
//       break;

//     default:
//       cout<<"Invalid operator";
//       break;
//   }
  
//   return 0;
// }

#include<iostream>
using namespace std;

int main(){

  char a;
  cout<<"enter character: ";
  cin>>a;

  switch(a){
    case 'b':
      cout<<"input was hello";
      break;

    case 'c':
      cout<<"input was hello";
      break;

    case 'd':
      cout<<"input was hello";
      break;

    case 'e':
      cout<<"input was hello";
      break;

    default: 
      cout<<"Idk about your input";
      break;
     
  }

  return 0;
}