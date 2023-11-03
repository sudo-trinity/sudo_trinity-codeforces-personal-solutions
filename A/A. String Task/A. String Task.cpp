/*
* Author: sudo-trinity
* Name :  (118) A. String Task
* Reference: http://codeforces.com/contest/118/problem/A
* status :accepted
*/

#include <iostream>
#include <string>

using namespace std ;

string word {} ;

bool vowel (char i)
{
    switch (i)
    {
        case 'a':
        case 'A':
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :
        case 'y' :
        case 'Y' :
        return true;

        default: 
        return false ;
    }
}

int main()
{

    cin >> word ;

    for (int i {0} ; i < static_cast <int> (word.length()) ; i++)
    {

        if (!vowel(word[i]))
        {
            {
                word[i] = tolower (word[i]) ;
            }

            cout << '.' << word[i] ;
        }
        
    }

    cout << endl ;
    

    return 0;
}