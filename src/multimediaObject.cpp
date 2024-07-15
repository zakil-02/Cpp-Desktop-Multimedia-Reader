#include <iostream>
#include <string>
#include "..\include\multimediaObject.h"

using namespace std;

//constructors

MultimediaObject::MultimediaObject()
{
    name = "";
    path = "";
}

MultimediaObject::MultimediaObject(string name, string path){
    this->name = name;
    this->path = path;
}

//destructor
MultimediaObject::~MultimediaObject(){
    cout << "MultimediaObject " << name << " deleted" << endl;
}

//getters
string MultimediaObject::getName() const{
    return name;
}

string MultimediaObject::getPath() const{
    return path;
}

//setters

void MultimediaObject::setName(string name){
    this->name = name;
}

void MultimediaObject::setPath(string path){
    this->path = path;
}

//Print the object information
void MultimediaObject::afficher(ostream& stream) const{
    stream << "Name: " << name << endl;
    stream << "Path: " << path << endl;
}