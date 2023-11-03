/*
* Author: sudo-trinity
* Name :  (71) A. Way Too Long Words
* Reference: https://codeforces.com/contest/71/problem/A
* status :accepted
*/

#include <iostream>
#include <string>

using namespace std ;



int main()
{

    int num ;
    
    cin >> num ;

    string input [100] ;

    for (int i {0} ; i < num ; i++) // i = 1 / num = 3
    {

        cin >> input[i] ;
        

    }

    for (int i {0} ; i < num ; i++)
    {

        if (input[i].length() > 10)
        {
            
            cout << input[i][0] << input[i].length() - 2 << input[i][input[i].length() - 1] << endl ;

        } else {
            cout << input[i] << endl ;
        }


    }

    return 0;
}