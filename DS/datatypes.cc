#include<iostream>
using namespace std;

int main(){

  int a; //initialization
  a = 10; //Declaration
  cout<<"Size of integer a: "<< sizeof(a)<<endl; //sizeof() used to get the size

  float b;
  cout<<"size of float: "<<sizeof(b)<<endl;

  char c;
  cout<<"Size of character: "<<sizeof(c)<<endl;

  bool d;
  cout<<"size of boolean: "<<sizeof(d)<<endl;

  //signed
  //unsigned
  //long
  //short
  //using these we can change the range (not size)

  short int e;
  cout<<"Size of short int: "<<sizeof(e)<<endl;

  long int f;
  cout<<"Size of long int : "<<sizeof(f)<<endl;

  long long int g;
  cout<<"Size of long long int : "<<sizeof(g)<<endl;

  return 0;

}