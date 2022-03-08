#include <iostream>
#include <cmath>

using namespace std;

class Moon{
    private:
    string name;
    double distance;
    double mass;
    double diameter;
    public:
    Moon(){}
    Moon(string mname, double mdistance, double mmass, double mdiameter){
        name = mname;
        distance = mdistance;
        mass = mmass;
        diameter = mdiameter;
    }
};

class Planet{
    private:
    string name;
    double distance;
    double mass;
    double diameter;
    int numMoons;
    Moon Topmoons[3];
    public:
    Planet(){}
Planet(string pName, double pDistance, double pMass, double pDiameter, int pNumMoons, Moon pTM1, Moon pTM2, Moon pTM3){
    name = pName;
    distance = pDistance;
    mass = pMass;
    diameter = pDiameter;
    numMoons = pNumMoons;
    Topmoons[0]=pTM1;
    Topmoons[1]=pTM2;
    Topmoons[2]=pTM3;
}

double getDistance(){
    return distance;
}

};

double distanceP(Planet a, Planet b){
    return abs(a.getDistance()-b.getDistance());
}

int main(){
    Planet solarSystem[8] = {
        Planet("Mercury", 69.592, 0.33, 4879.4, 0, Moon("NO NOON",0,0,0),Moon("NO NOON",0,0,0),Moon("NO NOON",0,0,0)),
        Planet("Jupiter", 745.39, 1998.13, 193820, 79, Moon("Io",421600,3629,893.2),Moon("Europa",670900,3126,480),Moon("Callisto",1883000,4800,1075))
    };
    cout<< "Distance area:= " <<distanceP(solarSystem[0],solarSystem[1]) <<endl;
    return 0;
};
