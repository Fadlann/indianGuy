#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1025;
    int* p = &a;
    cout<<"Integer"<<endl;
    cout<<"size of an integer in bytes is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"adress = "<<p<<", with value = "<<*p<<endl;
    cout<<"adress + 1 = "<<p+1<<", with value = "<<*p<<endl;

    cout<<endl;

    cout<<"TypeCasted to char"<<endl;
    char* p0;
    p0 = (char*)p; // typecasting
    cout<<"size of a char in bytes is "<<sizeof(char)<<" bytes"<<endl;
    cout<<"adress = "<<(int*)p0<<", with value = "<<(int)*p0<<endl;
    cout<<"adress + 1 = "<<(int*)(p0 + 1)<<", with value = "<<(int)(*p0+1)<<endl;
    return 0;
}
