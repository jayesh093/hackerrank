#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
     char arr[10][10]={"one","two","three","four","five","six","seven","eight","nine","\0"};
    if(b<=9)
    {
    for(int i=a-1;i<b;i++)
    {
        for(int j=0;j<10;j++)
        {
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    }
    else
    {
        for(int i=a-1;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
        cout<<arr[i][j];
        }
        cout<<endl;
    }
    if(b>9)
    {
    for(int i=10;i<=b;i++)
    {
        if(i%2==0)cout<<"even"<<endl;
       else cout<<"odd"<<endl;
    }
    }
    }
    return 0;
}
