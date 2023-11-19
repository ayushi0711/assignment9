#include<iostream>
using namespace std;
void odd(int a,int b){
    if(a>b){
        odd(b,a);
        return;
    }
    for(int i=a; i<=b; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
       
    }
     cout<<endl;
   
}
int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
    return 0;
   
   
}