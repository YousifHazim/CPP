#include <iostream>

using namespace std;

int main()
{
    int num1,num2;cin>>num1>>num2; // 4  20
    int flag = 0;
    bool notLuckyNumber;

    for(int i=num1;i<=num2;i++){ // 47

        int x = i; //47
        notLuckyNumber = false;

        while(x){

            if( x%10 != 4 && x%10 != 7)
                notLuckyNumber = true;

            x /= 10;

        }

        if(notLuckyNumber == false){
            cout<<i<<" ";
            flag++;
        }

    }

        if(flag == 0)
            cout<<-1<<endl;

    return 0;
}
