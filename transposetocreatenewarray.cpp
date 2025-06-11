#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"enter the element:\n";
    for (int i = 0; i <2; i++)
    {   
     for (int j= 0; j <3; j++)
     {
        cin>>arr[i][j];
     }
    }
    cout<<"\n";
int brr[3][2];
      for (int i = 0; i<3; i++)
    { 
     for (int j = 0; j<2; j++)
     {
        brr[i][j]=arr[j][i];
     }  
     cout<<endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <2; j++)
        {
             cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}