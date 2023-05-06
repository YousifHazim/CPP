#include<bits/stdc++.h>
#include <string>


using namespace std;


string Spaced(string userString)
{
   string spacedString;

   for (auto itr : userString)
   {
      spacedString += itr;
      spacedString += ' ';
   }

   return spacedString;
}

int main()
{
    int number;cin>>number;

    for(int i=0;i<number;i++){

        string digit;cin>>digit;
        reverse(digit.begin() , digit.end());

        cout<<Spaced(digit)<<endl;
    }
    return 0;
}
