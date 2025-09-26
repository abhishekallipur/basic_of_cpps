#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
               continue;
            cout << "hello world" <<i<<endl;
        }   
        cout << "hi abhishek" <<i<<endl;
    }
    return 0;
}