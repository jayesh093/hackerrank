#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       int size;
     //  cout<<"enter the array size"<<endl;
       cin>>size;
       int arr[size];
       // enter the array elements
       for(int i=0;i<size;i++)
       {
           cin>>arr[i];
       }
       for(int i=size-1;i>=0;i--)
       {
           cout<<arr[i]<<" ";
       }
    return 0;
}

