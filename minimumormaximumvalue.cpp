#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[3][4];
for (int i = 0; i <3; i++)
{
    for (int j = 0; j <4; j++)
{
    cin>>arr[i][j];
}
}
cout<<endl;
int x=INT_MAX;
int y=INT_MIN;
for (int i = 0; i <3; i++)
{
    for (int j = 0; j <4; j++)
{
     if (arr[i][j]<x)
     { // this is find minimum value 
        x=arr[i][j];
     }
     if (arr[i][j]>y)
     { // this is find maximum value
         y=arr[i][j];
     }
     
}
}
cout<<"this minimum value:"<<x;
cout<<"\nthis maximum value:"<<y;
    return 0;
}