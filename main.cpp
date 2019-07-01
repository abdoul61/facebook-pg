#include <iostream>
#include <iomanip>
using namespace std;

void total(int , int , int);

int main()
{
    int value1, value2, value3 ;
    cout<<" enter tree number and i will give you ";
    cout<<" the total somme \n"<<endl;
    cin>>value1>>value2>>value3;
    total(value1 ,value2 ,value3);
    return 0;
}

void total(int value1, int value2 ,int value3)
{
    cout<<" the total of your tree number is :" << value1 + value2 + value3<< endl;
}
















