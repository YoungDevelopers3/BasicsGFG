#include<bits/stdc++.h>
using namespace std;

void inserting(vector<int>& arr,int temp){
    
if(arr.size()==0 or arr[arr.size()-1]<=temp){
    arr.push_back(temp);
    return;
}

int val=arr.back();
arr.pop_back();
inserting(arr,temp);
arr.push_back(val);
    
}
void sorting(vector<int> &arr){

  if(arr.size()<=1){
   return; 
   }
   
   int temp=arr.back();
   arr.pop_back();
   sorting(arr);
    
    inserting(arr,temp);
    
    
    
}
int main(){

vector<int>arr={5,2,1,3,7,4};

sorting(arr);

for(int i:arr){
    cout<<i<<endl;
}
    
 }
