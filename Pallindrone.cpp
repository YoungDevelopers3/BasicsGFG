#include<bits/stdc++.h>
using namespace std;
int main(){
int num=0;
cin>>num;
int rev=0;
int n=num;
while(n>0){
    int d=n%10;
    rev=10*rev+d;
     n=n/10;
}
if(rev==num){
    cout<<"True";
}
else{
    cout<<"False";
}
}
