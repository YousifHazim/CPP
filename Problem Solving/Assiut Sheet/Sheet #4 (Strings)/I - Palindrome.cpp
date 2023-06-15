#include <iostream>

using namespace std;

int main()
{
    string word;cin>>word;
    bool isPalindrome = true;
    int sizeOfString = word.length()-1;

    for(int i=0;i<word.length()/2;i++){

        if(word[i] != word[sizeOfString--])
            isPalindrome = false;

    }

    if(isPalindrome)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
