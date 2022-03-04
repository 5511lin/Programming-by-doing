#include <iostream>

using namespace std;

class Moon{
    private:
    string name;
    double distance;
    double mass;
    double diameter;
    public:
};

class Planet{
    private:
    string name;
    double distance;
    double mass;
    double diameter;
    int numMoons;
    Moon Topmoons [3];
    public:
Planet(string pName, double pDistance, double pMass, double pDiameter, int pNumMoons, Moon pTM1, Moon pTM2, Moon pTM3){
    name = pName;
    distance = pDistance;
    mass = pMass;
    diameter = pDiameter;
    numMoons = pNumMoons;
    TopMoons[0]=pTM1;
    TopMoons[1]=pTM2;
    TopMoons[2]=pTM3;
}
};

double distanceP(Plant a, Planet b){
    return abs(a.getDistance(), b.getDistance());
}

int main({
    Planet solarSystem[8] = {
        Planet("Mercury", 69.592, 0.33, 4879.4, 0, Moon("NO NOON",0,0,0), Moon("NO NOON",0,0,0)),
        Planet("Jupiter", 745.39, 1998.13, 193820, 79, Moon("Io",421600,3629,893.2),Moon("Europa",670900,3126,480),Moon("Callisto",1883000,4800,1075)),

    }
    return 0;
})
