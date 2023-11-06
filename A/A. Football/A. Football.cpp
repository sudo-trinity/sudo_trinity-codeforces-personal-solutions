/*
* Author: sudo-trinity
* Name :  (96) A. Football
* Reference: https://codeforces.com/contest/96/problem/A
* status :accepted
*/

#include <iostream>
#include <string>

using namespace std ;

int main ()
{

    string word ;
    string sequence1 { "0000000" } ;
    string sequence2 { "1111111" } ;

    cin >> word ;

    if (word.find(sequence1) != string::npos || word.find(sequence2) != string::npos)
    {
        cout << "YES" << endl ;
    }
    else 
    {
        cout << "NO" << endl ;
    }

    cout << endl ;

    return 0 ;
}