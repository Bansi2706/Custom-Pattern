// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1


#include <iostream>
using namespace std;

int main(){

    int i,j,k,m;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5-i+1; j++)
        {
            cout << j << " ";
        }

        for (m = 2; m <= i; m++)
        {
            cout << "    "; 
        }
        
        for (k = 5-i+1; k >= 1; k--)
        {
            cout << k << " ";
        }

        cout << endl;
        
    }

    return 0;
    
}