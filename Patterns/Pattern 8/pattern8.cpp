/* 


              * * * * * * * * *
                * * * * * * * 
                 * * * * *  
                  * * *
                    *   


*/





#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    for(int i=n-1;i>=0;i--){       // for rows

        for(int j=0;j<n-i-1;j++)
        cout<<" ";        //for space

        for(int k=0;k<2*i+1;k++)
        cout<<"*";         //for star   

        cout<<endl;
    }
    return 0;
}