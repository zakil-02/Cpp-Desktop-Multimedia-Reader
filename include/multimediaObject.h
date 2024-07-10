
#ifndef MULTIMEDIA_H 
#define MULTIMEDIA_H

#include <iostream>
#include <string>
using namespace std;

class MultimediaObject{
public:
    //constructors
    MultimediaObject();
    MultimediaObject(string name, string path);

    //destructor
    ~MultimediaObject();

    //getters
    string getName();
    string getPath();

    //setters
    void setName(string name);
    void setPath(string path);

    //Print the object information
    void afficher(ostream& stream) const;
    
private:
    string name;
    string path;    
};

#endif //MULTIMEDIA_H