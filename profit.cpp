#include<iostream>
using namespace std;
int main () {
    float cp,sp;
    cin>>cp>>sp;
  cout<<"Profit%: " <<(sp-cp)/cp*100 << endl;
  cout<<"Profit: " <<(sp-cp) << endl;
// This is a comment
if (cp<sp){
    cout<<"There was a profit of: " <<sp-cp <<endl;


}
else if (cp==sp){
    cout<<"No profit or loss"<<endl;
}
else {
    cout<<"There was a loss of: " <<cp-sp <<endl;
}







  return 0;
}