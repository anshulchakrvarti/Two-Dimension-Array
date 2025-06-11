#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"enter the element of first matrices:\n";
    for (int i = 0; i <2; i++)
    {   
     for (int j= 0; j <3; j++)
     {
       cin>> arr[i][j];
     }
    }
     int brr[2][3];
    cout<<"enter the element of second matrices:\n";
    for (int i = 0; i <2; i++)
    {   
     for (int j= 0; j <3; j++)
     {
        cin>>brr[i][j];
     }
    }
    cout<<"\n";
      for (int i = 0; i<2; i++)
    { // sum of array one and array two
     for (int j = 0; j<3; j++)
     { arr[i][j]=arr[i][j]+brr[i][j];
       cout<<arr[i][j]<<" ";
     } 
     cout<<endl;
    }
cout<<"\n";
for (int i = 0; i <3; i++)
{  //sum array row change column or column change row
     for (int j = 0; j <2; j++)
     { 
        cout<<arr[j][i]<<" ";
     }
     cout<<"\n";
}

return 0;
}