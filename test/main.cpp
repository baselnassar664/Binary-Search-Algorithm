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
int n,numberTOFind;
cin>>n>>numberTOFind;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin >>arr[i];
}
sort(arr.begin(),arr.end());
int l=0,r=n-1,m;
bool found=false;
while(l<=r){
  m=(l+r)/2;
  if(arr[m]==numberTOFind){
    found=true;
    break;
  }
  else if(arr[m]>numberTOFind){
    r=m-1;
  }
  else if(arr[m]<numberTOFind){
    l=m+1;
  }

}
if(found==true)
    cout<<"number found"<<endl;
else
    cout<<"number not found";
return 0;
};












