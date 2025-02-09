/*


        E
        E D
        E D C
        E D C B
        E D C B A


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    for(int i=0;i<n;i++){
        for(char ch = ('A'+n-1)-i;ch<=('A'+n-1);ch++)   //important line to underastand
        cout<<ch<<" ";

        cout<<endl;
    }
    return 0;
}
