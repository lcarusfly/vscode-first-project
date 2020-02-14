#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 89;
    int b = a++;
    char buf[10] ;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "cmake Hello world";
    cin.get();  //防止闪屏
    return 0;
}