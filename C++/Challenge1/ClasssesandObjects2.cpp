#include <iostream>
#include <list>

using namespace std;

class Triangle{
    public:
    int x1;
    int y1;
    int x2;
    int y2;
    int x3; 
    int y3;
    double side1;
    double side2;
    double side3;
    double area;

    Triangle(int tx1, int ty1, int tx2, int ty2, int tx3, int ty3){
        x1 = tx1;
        y1 = ty1;
        x2 = tx2;
        y2 = ty2;
        x3 = tx3;
        y3 = ty3;
    }
    
    void GetInfo(){
        cout<<"x1:= "<<x1<<endl;
        cout<<"y1:= "<<y1<<endl;
        cout<<"x2:= "<<x2<<endl;
        cout<<"y2:= "<<y2<<endl;
        cout<<"x3:= "<<x3<<endl;
        cout<<"y3:= "<<y3<<endl;
        // for(string food:favoriteFoods){
        //     cout<<food<<endl;
        // }
    }
};

int main(){

    Triangle pet(2,20.8);
    pet.GetInfo();
    return 0;


};