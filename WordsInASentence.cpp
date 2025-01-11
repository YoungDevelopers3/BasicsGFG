#include<bits/stdc++.h>
using namespace std;
int main(){
vector<string>words={"GeeksforGeeks”, “FreeCodeCamp”, “StackOverFlow”,  “MyCodeSchool”};
map<int ,string>stlen;
for(string word:words){
    stlen[word.size()]=word;
}
cout<<stlen.rbegin()->second;

}
