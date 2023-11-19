#include<iostream>
using namespace std;
int square(int n){
    int square=1;
    for(int i=1; i<=n; i++){
       square=i*i;
    }
    return square;
}
int main(){
    int n;
    cin>>n;
  for(int i=1; i<=n; i++){
 cout<<square(i)<<endl;
 }

}