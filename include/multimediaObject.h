
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
    virtual ~MultimediaObject();

    //getters
    string getName() const;
    string getPath() const;

    //setters
    void setName(string name);
    void setPath(string path);

    //Print the object information
    virtual void afficher(ostream& stream) const;

    // Pure virtual function to play the multimedia object
    virtual void play() const = 0;
private:
    string name;
    string path;    
};

#endif //MULTIMEDIA_H