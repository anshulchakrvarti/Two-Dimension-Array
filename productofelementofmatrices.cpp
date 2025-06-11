#include<iostream>
using namespace std;
int main(){
int arr[2][5];
for (int i = 0; i < 2; i++)
{
     for (int j = 0; j<5; j++)
     {
        cin>>arr[i][j];
     }
     
}
cout<<endl;
int product=1;
for (int i = 0; i < 2; i++)
{
     for (int j = 0; j<5; j++)
     {
         product=product*arr[i][j];
     }
     
}
cout<<"sum of all element "<<product;
    return 0;
}