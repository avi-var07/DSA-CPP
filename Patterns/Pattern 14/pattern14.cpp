/*


        A
        A B
        A B C
        A B C D
        A B C D E


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    for(int i=0;i<n;i++){
        for(char j = 'A';j<='A'+i;j++)
        cout<<j<<" ";

        cout<<endl;
    }
    return 0;
}
