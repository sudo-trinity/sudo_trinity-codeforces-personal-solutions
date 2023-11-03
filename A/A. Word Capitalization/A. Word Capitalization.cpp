/*
* Author: sudo-trinity
* Name :  (281) A. Word Capitalization
* Reference: https://codeforces.com/contest/281/problem/A
* status :accepted
*/

#include <iostream>
#include <string>

using namespace std ;

int main ()
{

  string word;

  cin >> word;

  for (size_t i = 0 ; i < word.length(); i++)
  {
    if (islower(word[0]))
    {
      word[0] = toupper(word[0]);
    }
  }
    cout << word;

  cout << endl;

  return 0;
}



// #include <iostream>
// #include <string>

// using namespace std ;

// int main ()
// {

//   char word [1000] ;

//   cin >> word ;

//   if (islower(word[0]))
//   {
//     word[0] = toupper(word[0]) ;
//   }

//   cout << word ;

//   return 0;
// }
