#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
void digit(int n){
  int count=0;
  while(n>0){
    n/=10;
    count++;
  }
  cout<<count<<endl;
  
   
}
int main(){
    int n;
    cin>>n;
    digit(n);
    cout<<square(n);
    return 0;
   
   
}