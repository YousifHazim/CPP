#include <iostream>

using namespace std;

int main()
{
    int testcases;cin>>testcases;
    string word;

    for(int i=0;i<testcases;i++){

        cin>>word;

        if(word.length() <= 10){
            cout<<word<<endl;
        }else{

        cout<<word[0]<<(word.length())-2<<word[word.length()-1]<<endl;

        }
    }
    return 0;
}
