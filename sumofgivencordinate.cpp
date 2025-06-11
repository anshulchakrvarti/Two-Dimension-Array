#include<iostream>
using namespace std;
int main(){
int arr[5][4];
for (int i = 0; i < 5; i++)
{
     for (int j = 0; j<4; j++)
     {
        cin>>arr[i][j];
     }
     
}
cout<<endl;
int sum=0;
for (int i = 1; i < 4; i++)
{
     for (int j = 1; j<3; j++)
     {
         sum=sum+arr[i][j];
     }
     
}
cout<<"sum of all element "<<sum;
    return 0;
}
