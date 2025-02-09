/*

                *        *
                **      **   
                ***    ***
                ****  ****
                **********
                ****  ****
                ***    ***
                **      **
                *        *


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    int space = 2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";  //stars
        for(int j=1;j<=space;j++)
        cout<<" ";  //space
        for(int j=1;j<=i;j++)
        cout<<"*";  //stars

        space-=2;
        cout<<endl;
    }
    space+=4;   //space will come out of loop as -2, we need spacce at first time as 2 so -2+4=2;

    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--)
        cout<<"*";  //stars
        for(int j=1;j<=space;j++)
        cout<<" ";  //space
        for(int j=i;j>0;j--)
        cout<<"*";  //stars

        space+=2;
        cout<<endl;
    }
    return 0;
}
