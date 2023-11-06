/*
* Author: sudo-trinity
* Name :  (41) A. Translation
* Reference: https://codeforces.com/contest/41/problem/A
* status :accepted
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std ;

int main ()
{

    string word ;
    string word1 ;

    getline (cin, word) ;
    getline (cin, word1) ;

    string reversed = word ;

    reverse(reversed.begin(), reversed.end()) ;

    if (reversed.compare(word1) != 0)
    {
        cout << "NO" << endl ;
    }
    else
    {
        cout << "YES" << endl ;
    }

    cout << endl ;

    return 0 ;
}