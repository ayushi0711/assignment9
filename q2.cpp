#include<iostream>
using namespace std;
int area(float r){
    float area=1;
    area=3.14*r*r;
   
   return  area;

}
int main(){
    int n;
    cin>>n;
 
   cout<<area(n)<<endl;
 
 }

