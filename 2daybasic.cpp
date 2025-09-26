#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
               continue;//break and continue
            cout << "hello world" <<i<<endl;
        }
        cout << "hi abhishek" <<i<<endl;
    }
    // this pointer
    
    int a = 10;//this int 
    int *b = &a;//where b store the address of the a 
    cout << "this address of the a " << b << endl;//this print the address of a 
    cout << "this is actual value of " << *b;//this * is used for print thr actual value of a 
    return 0;
}   