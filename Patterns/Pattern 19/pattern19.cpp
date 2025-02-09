/*

            **********
            ****  ****
            ***    ***
            **      **
            *        *
            *        *
            **      **
            ***    ***
            ****  ****
            **********


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    int space =0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)
        cout<<"*";  //stars
        for(int j=0;j<space;j++)
        cout<<" ";  //space
        for(int j=1;j<=n-i;j++)
        cout<<"*";  //stars

        cout<<endl;
        space+=2;
    }
        space-=2;   //space is 10 here
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        cout<<"*";  //stars
        for(int j=1;j<=space;j++)
        cout<<" ";  //space
        for(int j=0;j<=i;j++)
        cout<<"*";  //stars

        cout<<endl;
        space-=2;
    }


    return 0;
}
