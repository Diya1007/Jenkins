#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int main(){
    int a,b;
    cout<<"Hello Jenkins!!";
    cin>>a>>b;
    if(add(a,b)==5)
    {
        cout<<"Test passed";
        return 0;
    }
    else
    cout<< add(a,b);

}
