
/*
* Author: sudo-trinity
* Name :  (231) A. Team
* Reference: https://codeforces.com/contest/231/problem/A
* status :accepted
*/

#include <iostream>

using namespace std;

int main()
{
    
    int n {}, p {}, v {}, t {}, solvable {} ;

    cin >> n ;

    while (n--) 
    {
        cin >> p >> v >> t ;

        if ( p + v + t >= 2 )
        {
            solvable += 1 ;
        } 

    } 

    cout << solvable << endl ;

    return 0;
}
