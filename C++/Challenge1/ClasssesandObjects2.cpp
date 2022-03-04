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
    srand (time(NULL));
    double area, side1, side2, side3;
    int r1 = rand()%10+1;
    int r2 = rand()%10+1;
    int r3 = rand()%10+1;
    int r4 = rand()%10+1;
    int r5 = rand()%10+1;
    int r6 = rand()%10+1;
    triangle shape(r1, r2, r3, r4, r5, r6); 
    cout<<"The triangle has sides of "<< shape.getSide1()<< " "<< shape.getSide2()<<" "<< shape.getSide3()<<" and an area of " << shape.getArea();

};