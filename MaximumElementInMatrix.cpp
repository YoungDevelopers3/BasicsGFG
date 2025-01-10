#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>>outer={{9, 8, 7, 6},{5, 4, 3, 2},{1, 0, 12, 45}};
vector<int>result;
for(vector<int>inner :outer){
    sort(inner.rbegin(),inner.rend());
    result.push_back(inner[0]);
}
sort(result.rbegin(),result.rend());
cout<<result[0];
}
