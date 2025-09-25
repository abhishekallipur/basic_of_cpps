#include <iostream>
using namespace std;
int main()
{
    cout << "helloworld" << endl;
    int num1 = 10;
    int &num2 = num1;
    cout << num2 << endl<< num1<<endl;
    //typecasting 
    float var=2.3;
    cout<<int(var);
}