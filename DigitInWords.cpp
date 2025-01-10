#include<bits/stdc++.h>
using namespace std;
int main(){
string num;
cin>>num;
map<char, string>m{{'0',"Zero"},{'1',"One"},{'2',"two"},{'3',"three"},{'4',"four"},{'5',"five"},{'6',"six"},{'7',"seven"},{'8',"eigth"},{'9',"nine"}};

for(char ch:num){
     cout<<m[ch]<<" ";
}


}
