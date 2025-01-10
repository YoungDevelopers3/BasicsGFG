#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
int n=0;
cout<<"Enter the size of the array :";
cin>>n;
for(int i=0;i<n;i++){
    int num=0;
    cin>>num;
    v.push_back(num);
}
int s=0;
for(int i:v){
    s=s+i;
}
cout<<s/n;


}
