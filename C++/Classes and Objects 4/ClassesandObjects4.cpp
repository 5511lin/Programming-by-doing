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
    Planet solarSystem[32] = {
        Planet("Mercury", 69.592, 0.33, 4879.4, 0, Moon("NO NOON",0,0,0),Moon("NO NOON",0,0,0),Moon("NO NOON",0,0,0)),
        Planet("Venus",4.87,12104,108.2,0,Moon("NO MOON"),Moon("NO MOON"),Moon("NO MOON")),
        Planet("Earth",5.97,12756,149.6,1,Moon("Moon",378000,0.07346,3476.2),Moon("NO MOON"),Moon("NO MOON")),
        Planet("Mars",0.642,6792,227.9,2,Moon("Phobos",9270,22.5,10.6),Moon("Deimos", 23460,12.4,2.4),Moon("NO MOON")),
        Planet("Saturn",568,120536,1433.5,82,Moon("Titan",1221850,5150,1345.5),Moon("Mimas",185520,398,0.379),Moon("Rhea",527040,1528,23.1)),
        Planet("Uranus",86.8,51118,2872.5,27,Moon("Umbriel",265970,1190,12.2),Moon("Ariel",191240,1160,12.9),Moon("Miranda",129780,472,0.66)),
        Planet("Neptune",102,49528,4495.1,14,Moon("Neso",47279670,60,0.002),Moon("Sao",22337190,38,0.001),Moon("Naiad",48200,50,0.002)),
        Planet("Jupiter", 745.39, 1998.13, 193820, 79, Moon("Io",421600,3629,893.2),Moon("Europa",670900,3126,480),Moon("Callisto",1883000,4800,1075))
    };
    cout<< "Distance area:= " <<distanceP(solarSystem[0],solarSystem[1]) <<endl;
    return 0;
};
