#include <iostream>
#include <cmath>
#include "coord3d.h"
#include "funcs.h"

// add functions here
//task A
double length(Coord3D *p){
    return sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
}//end length function

//Task B
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) > length(p2)){
        return p1;
    }else{
        return p2;
    }//end else condition
}//end fartherFromOrigin function

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    (*ppos).x = (*ppos).x + (*pvel).x * dt;
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
}//end move function

//Task E
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *newobject = new Coord3D; 
    (*newobject).x = x;
    (*newobject).y = y;
    (*newobject).z = z;
    return newobject;
}//end createCoord3D function

void deleteCoord3D(Coord3D *p){
    delete p;
}//end deleteCoord3D function

bool compare(Coord3D *p1, Coord3D *p2){

if((*p1).x == (*p2).x && (*p1).y == (*p2).y && (*p1).z == (*p2).z){
    return true;
}else{
    return false;
}//end else condition

}//end compare function


