// Write a Program to print the below pattern using nested for loop.
// * * * * * 
// *       
// * * * * * 
//         *
// * * * * * 


#include <iostream>
using namespace std;

int main(){

    int i,j;

    for (i = 1; i <= 5; i++)
    {
       for (j = 1; j <= 5; j++)
       {
         if (i == 1 || i == 3 || i == 5 || (i == 2 && j ==1) || (i == 4 && j == 5))
         {
            cout << "*" << " ";
         }
         else{
            cout << "  ";
         }
       }
    
       cout << endl;
       
    }
    
}
