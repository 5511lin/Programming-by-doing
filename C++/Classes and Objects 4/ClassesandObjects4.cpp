#include <iostream>
#include <string>
using namespace std;

class Moon{
    private:
    string name; //name of moon
    double distance; //distance from the planet it is the moon of
    double mass; // mass of moon
    double diameter; //diameter of moon

    public:
    Moon () {};

    Moon (string n, double d, double m, double dia){ //constructor
        name = n;
        distance = d;
        mass = m;
        diameter = dia;
    }

    string getName(){
        return name;
    }

    double getDistance(){
        return distance;
    }

    double getMass(){
        return mass;
    }

    double getDiameter(){
        return diameter;
    }



};

class Planet{
    private:
    string name; //name of planet
    double distance; //distance from sun
    double mass; //mass of planet
    double diameter; // diameter of planet
    int numMoons; //number of moons
    Moon TopMoons[3] ; //top 3 moons of the planet

    public:
    Planet () {};

    Planet(string n, double d, double m, double dia, int mn, Moon a, Moon b, Moon c){
        name = n;
        distance = d;
        mass = m;
        diameter = dia;
        numMoons = mn;
    }

    void setMoons(Moon a, Moon b, Moon c){
        TopMoons[0] = a;
        TopMoons[1] = b;    
        TopMoons[2] = c;
    }

    string getName (){
        return name;
    }

    double getDistance (){
        return distance;
    }

    double getMass(){
        return mass;
    }

    double getDiameter(){
        return diameter;
    }

    double getNMoons(){
        return numMoons;
    }
};

int main (){
    Moon moonlist [] = {
        //Moon (string name, double distance, double mass(10^15 kg), double diameter)
        Moon ("Phobos", 11.4, 10.6, 9.1*2),
        Moon ("Deimos", 6.0, 2.4, 5.1*2),
        
    };


    Planet solarSystem [8] = {
        //Planet(string n, double d, double m, double dia, int mn) //10^24 kg
        Planet ("Venus",4.87,12104,108.2,0,Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0)),
        Planet("Mars",0.642,6792,227.9,2,Moon("Phobos",9270,22.5,10.6),Moon("Deimos", 23460,12.4,2.4),Moon("NO MOON",0,0,0)),
        Planet("Jupiter",1898,142984,778.6,79,Moon("Io",421600,3629,893.2),Moon("Europa",670900,3126,480),Moon("Callisto",1883000,4800,1075.9)),
        Planet("Saturn",568,120536,1433.5,82,Moon("Titan",1221850,5150,1345.5),Moon("Mimas",185520,398,0.379),Moon("Rhea",527040,1528,23.1)),
        Planet("Uranus",86.8,51118,2872.5,27,Moon("Umbriel",265970,1190,12.2),Moon("Ariel",191240,1160,12.9),Moon("Miranda",129780,472,0.66)),
        Planet("Neptune",102,49528,4495.1,14,Moon("Neso",47279670,60,0.002),Moon("Sao",22337190,38,0.001),Moon("Naiad",48200,50,0.002)),
        Planet ("Venus",4.87,12104,108.2,0,Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0)),
        Planet("Mercury",0.33,4879,57.9,0,Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0),Moon("NO MOON",0,0,0))
    };




    return 0;
}