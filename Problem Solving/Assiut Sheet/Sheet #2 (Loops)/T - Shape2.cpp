#include <iostream>

using namespace std;

int main()
{
    int number;cin>>number;
    int x = number;
    int y = 1;
    for(int i=1;i<=number;i++){


            for(int j=x-1;j>0;j--){
                cout<<" ";
            }

            for(int j=0;j<y;j++){
                cout<<'*';
            }
            y = y + 2;
            x--;
        cout<<endl;
    }
    return 0;
}
