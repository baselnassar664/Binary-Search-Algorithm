#include <iostream>
#include <string>
#include <cctype>
#include <functional>
#include <algorithm>
#include <fstream>
#include<sstream>
#include <vector>
#include <windows.h>
using namespace std;


int main(){

//liner search
int n,numberTOFind;
cin>>n>>numberTOFind;
int arr[n];
bool found=false;
for(int i=0;i<n;i++){
    cin >>arr[i];
}

for(int i=0;i<n;i++){
   if(arr[i]==numberTOFind){
     found=true;
    break;
   }

}
if(found==true)
    cout<<"number found"<<endl;
else
    cout<<"number not found";

    
//binary search
int n1,numberTOFindd;
cin>>n1>>numberTOFindd;
vector<int> vec(n);
for(int i=0;i<n1;i++){
    cin >>vec[i];
}
sort(vec.begin(),vec.end());
int l=0,r=n1-1,m;
bool foundd=false;
while(l<=r){
  m=(l+r)/2;
  if(vec[m]==numberTOFindd){
    foundd=true;
    break;
  }
  else if(vec[m]>numberTOFindd){
    r=m-1;
  }
  else if(vec[m]<numberTOFindd){
    l=m+1;
  }

}
if(foundd==true)
    cout<<"number found"<<endl;
else
    cout<<"number not found";
return 0;
};












