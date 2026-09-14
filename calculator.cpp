#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int main(){
    cout<<"Hello Jenkins!!";
    if(add(2,3)==5)
    {
        cout<<"Test passed";
        return 0;
    }
    else
    return 1;

}
