#include <iostream>
using namespace std;

int main(){
  int n,i,key;
  cout<<"enter size: ";
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter element you want to search: ";
  cin>>key;
  for(i=0;i<n;i++){
    if(arr[i]==key){
      cout<<"element found at: "<<i;
      break;
    }
  }
    if(i==n){
      cout<<"element not found ";
    }
  return 0;
}
