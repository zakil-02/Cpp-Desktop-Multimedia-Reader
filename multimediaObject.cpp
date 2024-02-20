#include <iostream>
#include "multimediaObject.h"
#include <string>
using namespace std;

//constructors
MultimediaObject::MultimediaObject()
{
    name = " ";
    path = " ";
}

MultimediaObject::MultimediaObject(string name, string path)
{
    this->name = name;
    this->path = path;
}

//destructor
MultimediaObject::~MultimediaObject()
{
    cout << "MultimediaObject destructor called" << endl;
}

//getters
string MultimediaObject::getName()
{
    return name;
}

string MultimediaObject::getPath()
{
    return path;
}

//setters
void MultimediaObject::setName(string name)
{
    this->name = name;
}

void MultimediaObject::setPath(string path)
{
    this->path = path;
}

//Print the object information
void MultimediaObject::afficher(std::ostream& stream) const{
    stream << "name : " << name << "\n"
           << "path: " << path << std::endl;   
}

