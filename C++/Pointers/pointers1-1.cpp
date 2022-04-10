
#include <iostream>

#include <string>


using namespace std;
void sayHello(string name){
    cout<<"Hello "<<name;
}
void sayHi(string &name){
    cout<<"Hi "<<name;
}

int * larger(int *x, int *y){
    if(*x>*y) return x;
    else return y;
}

int main()
{
    string name = "World";
    sayHello(name);
    cout<<endl;
    
    string *pName = &name;
    sayHi(*pName);
    int a = 5;
    int b = 1;
    int *pNum = larger(&a,&b);
    cout<<"\n"<<*pNum<<" is larger"<<endl;
    return 0;
}