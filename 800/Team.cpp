//Start 28-09-21
//End 28-09-21 
#include <iostream>
using namespace std;

int main(){
int numberOfContests, petya, vasya, tonya,total,able ;

able=0;
numberOfContests=0;

    cin>>numberOfContests;
    for(int i=0;i<numberOfContests;i++)
    {
        cin>>petya>>vasya>>tonya;
        total=petya+vasya+tonya;
        if(total>1)
        {
            able+=1;

        }




    }
    cout<<able;
}