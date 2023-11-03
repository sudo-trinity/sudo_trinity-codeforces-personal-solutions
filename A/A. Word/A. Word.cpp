/*
* Author: sudo-trinity
* Name :  (59) A. Word
* Reference: https://codeforces.com/contest/59/problem/A
* status :accepted
*/

#include <iostream>
#include <string>

using namespace std ;

int main()
{

    string word {} ;

    cin >> word ;

    int capital {}, small {} ;

    for (int i {0} ; i < static_cast <int> (word.length()) ; i++)
    {

        if (isupper(word[i]))
        {
            capital++ ;
        }

        else 
        {
            small++ ;
        }

       
    }

        if (capital > small) 
        {
            for (int i {0} ; i < static_cast <int> (word.length()); i++)
            {
                cout << static_cast <char> (toupper(word[i])) ;
            }
        }

        else 
        {
            for (int i {0} ; i < static_cast <int> (word.length()); i++)
            {
                cout << static_cast <char> (tolower(word[i])) ;
            }
        }

        cout << endl ;
    

    return 0;
}