#include <iostream>
using namespace std;

using namespace std;

int main()
{
    for (int i = 1; i<=5; i++){
        for (int j= 1; j<=6; j ++){
                cout<<"*";
                if (i == 2 && j == 2){
                    break;

                }else if (i == 4 && j == 2){
                    break;
                }
        }
        cout<<endl;
    }
    return 0;
}
