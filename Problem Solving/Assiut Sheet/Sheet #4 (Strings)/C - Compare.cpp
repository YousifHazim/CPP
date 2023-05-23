#include <iostream>

using namespace std;

int main()
{
    string one;cin>>one;
    string two;cin>>two;
    int comparee,flag=0;

    if(one.length() >= two.length())
        comparee = one.length();
    else
        comparee = two.length();

    for(int i=0;i<comparee;i++){



        if(one[i] < two[i]){
            cout<<one<<endl;
            flag++;
            break;
        }else if(one[i] > two[i]){
            cout<<two<<endl;
            flag++;
            break;
        }

    }

    if(flag == 0)
        cout<<one<<endl;



    return 0;
}
