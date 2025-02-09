/* 



                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *


*/





#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    for(int i=0;i<n;i++){       // for rows

        for(int j=0;j<n-i-1;j++)
        cout<<" ";        //for space

        for(int k=0;k<2*i+1;k++)
        cout<<"*";         //for star   


        for(int l=0;l<n-i-1;l++)
        cout<<" ";   //for space

        cout<<endl;
    }
    return 0;
}