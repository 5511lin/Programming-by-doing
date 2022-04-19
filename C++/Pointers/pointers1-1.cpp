#include <iostream>

#include <string>


using namespace std;
void sayHello(string name){
    cout<<"Hello "<<name;
}
//create a void that prints out "Hello World"
void sayHi(string &name){
    cout<<"Hi "<<name;
}
//create a void that prints out "Hi World"

int * larger(int *x, int *y){
    //create pointer larger(pointer x, pointer y)
    if(*x>*y) return x;
    //if pointer x value greater than pointer y, then return x
    else return y;
    //else return y
}

int main()
{
    string name = "World";
    sayHello(name);
    //run sayHello using "World"
    cout<<endl;
    
    string *pName = &name;
    //pointer pName = address of name
    sayHi(*pName);
    //run sayHi using "World"
    int a = 5;
    int b = 1;
    int *pNum = larger(&a,&b);
    //pointer pNum = larger(address a, address b)
    cout<<"\n"<<*pNum<<" is larger"<<endl;
    //print pointer pNum " is larger"
    return 0;
}