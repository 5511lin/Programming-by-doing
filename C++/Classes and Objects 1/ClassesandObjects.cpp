#include <iostream>
#include <list>

using namespace std;

class Dog{
    public:
    double weight;
    int age;
    //list<string> favoriteFoods;  

     Dog(int dage, double dweight){
        weight = dweight;
        age = dage;
    }

    void GetInfo(){
        cout<<"Weight:= "<<weight<<endl;
        cout<<"Age:= "<<age<<endl;
        // for(string food:favoriteFoods){
        //     cout<<food<<endl;
        // }
    }
};

int main(){

    Dog pet(2,20.8);
    pet.GetInfo();
    return 0;


};