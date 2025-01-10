#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
stringstream ss(str);
string word;
cin>>word;
string w;
while(ss>>w){
    if(w==word){
        cout<<"Present";
        break;
    }
    else{
        cout<<"Absent";
    }
}


}
