#include<iostream>
using namespace std;

int main(){

  int savings;
  cout<<"Enter savings amt: ";
  cin>>savings;
  
  if(savings < 5000){
    if(savings < 1000){
      cout<<"Stayinng home";
    }
    else{
      cout<<"Random Hangout\n";
    }
  }
  else if(savings > 5000 && savings < 10000){
    cout<<"going out at resonable place";
}
  else{
    cout<<"Party harrdd!!";
  }

  return 0;
}



// Exercises: 


// 1. Max of three nos.
// #include<iostream>
// using namespace std;

// int main(){

//   int a,b,c;

//   cout<<"enter first no.: ";
//   cin>>a;

//   cout<<"enter second no.: ";
//   cin>>b;

//   cout<<"enter third no.: ";
//   cin>>c;

//   if(a==b && a==c){
//     cout<<"All nos. are same";
//   }
//   else if(a>b && a>c){
//     cout<<a<<" is maximum";
//   }
//   else if(b>a && b>c){
//     cout<<b<<" is maximum";
//   }
//   else{
//     cout<<c<<" is maximum";
//   }

//   return 0;
// }




// 2. Odd or Even 
// #include<iostream>
// using namespace std;

// int main(){

//   int a;
//   cout<<"Enter any number: ";
//   cin>>a;

//   if(a%2 == 0){
//     cout<<a<<" is a even number";
//   }
//   else{
//     cout<<a<<" is a odd number";
//   }

//   return 0;
// }