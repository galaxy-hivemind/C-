#include<iostream>
using namespace std;
int main () {
    float marks;
    cout<< "Enter you marks: ";
    cin>>marks;
//If greater than 90 then grade A 

if (marks>90 || marks<10 || (marks>40 && marks<60)){
    cout<<"You got A grade, congratulations!!!" <<endl;


    
}
 if (marks>80 && marks<90){
    if (marks<85)
    {cout<<"You got B1 grade, it's okkay!!!" <<endl;}
    else { cout<<"You got B2 grade" <<endl;}
 }


// else {
//     cout<<"You failed the examination, congratulations!!!" <<endl;
// }








  return 0;
}