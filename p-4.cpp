#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

         int no1,no2;
         //cout<<"ENTER the craet the array";
         cin>>no1;
         //cout<<"no of query";
         cin>>no2;

         for(int i=1;i<=no1;i++)
         {
             int a;
          //  cout<<"enter the arry fist element";
            cin>>a;
            int arri[a];
            arri[0]=a;
            for(int j=1;j<a;j++)
            {
                cin>>arri[j];
            }
        }
            for(int i=1;i<=no2;i++)
            {
                int argi[2];

             for(int j=0;j<2;j++)
             {
              cin>>argi[j];
             }
         }

        for(int i=1;i<=no2;i++)
         {
            cout<<argi[1];
         }

    return 0;
}

/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
5
9
*/
