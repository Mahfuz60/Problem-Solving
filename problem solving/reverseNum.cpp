#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter  number:";
  cin>>n;
  int reverse=0;
  while(n>0){
    int lastDight=n%10;
    reverse=reverse*10+lastDight;
    n=n/10;
  }

  cout<<"reverse number:"<<reverse<<endl;



  return 0;
}