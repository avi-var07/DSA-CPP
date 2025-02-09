/*


*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*



*/





#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of rows: "<<endl;

    cin>>n;
    /* 
    Strivers Approach
    for(int i=1;i<=2*n-1;i++){
        int stars = i;  //stars 1,2,3,4...n


        if(stars>n) stars = 2*n-i;  //n=5, for 6th row stars are 4, 7th row stars are 3, 8th row stars are 2, for 9th it is  1

        for(int j=1;j<=stars;j++)
        cout<<"*";

        cout<<endl;


    }
    */

   //My Approach
   for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"* ";

    cout<<endl;
   }
   n--;
   for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++)
        cout<<"* ";


    cout<<endl;
   }
   
    return 0;
}