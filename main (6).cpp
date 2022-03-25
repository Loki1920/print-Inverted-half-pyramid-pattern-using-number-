// print Inverted half pyramid pattern using number 
#include<iostream>
using namespace std;

int main()
{
  int row,column;
  cout<<"enter row:";
  cin>>row;

  for(int i=row;i>=1;i--){
      for(int j=1;j<=i;j++){
        cout<<j<<" ";
      }
  cout<<endl;
    }
  return 0;
  
}