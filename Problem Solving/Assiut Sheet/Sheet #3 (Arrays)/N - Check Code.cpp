#include <iostream>

using namespace std;

int main()
{
    int numberOne;cin>>numberOne; // 3
    int numberTwo;cin>>numberTwo; // 3

    string code;cin>>code; // 269-665

    int counter = 0;

    if(((numberOne + numberTwo + 1) != code.size()) || (code[numberOne] != '-')) {

        cout<<"No"<<endl;
        return 0;

    }

    for(int i=0;i<code.size();i++){

        if(code[i] >= 48 && code[i] <= 57 && i != numberOne){
            counter++;
        }

    }

    if(counter == numberOne+numberTwo)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



}
