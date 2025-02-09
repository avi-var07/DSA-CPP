/*



        1            1
        1 2        2 1
        1 2 3    3 2 1
        1 2 3 4 4 3 2 1    


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    int space = 2*(n-1);    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<j;    //for numbers, do not write cout<<j<<" "; it will change the output

        for(int j=1;j<=space;j++)
        cout<<" ";  //for space

        for(int j=i;j>=1;j--)
        cout<<j;    //for numbers but in reverse order

        cout<<endl;
        
        space-=2;
    }
    return 0;
}
