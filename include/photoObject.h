#ifndef PHOTO_H
#define PHOTO_H

#include "multimediaObject.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Photo : public MultimediaObject {
private:
    double latitude;
    double longitude;

public:
    // Constructors
    Photo() : MultimediaObject(), latitude(0.0), longitude(0.0) {}

    Photo(string name, string path, double latitude, double longitude)
        : MultimediaObject(name, path), latitude(latitude), longitude(longitude) {}

    // Getters
    double getLatitude() const { return latitude; }
    double getLongitude() const { return longitude; }

    // Setters
    void setLatitude(double latitude) { this->latitude = latitude; }
    void setLongitude(double longitude) { this->longitude = longitude; }

    // Print the object information
    void afficher(ostream& stream) const override {
        MultimediaObject::afficher(stream);
        stream << "Latitude: " << latitude << endl;
        stream << "Longitude: " << longitude << endl;
    }

    // Play the photo
    void play(string sys) const override {
        if (sys == "linux") {
            string command = "imagej " + getPath() + " &";
            system(command.c_str());
            return;
        }else if (sys == "windows") {
            string command = "mspaint " + getPath() + " &";
            system(command.c_str());
            return;
        }else if (sys == "mac") {
            string command = "open " + getPath() + " &";
            system(command.c_str());
            return;
        }else {
            cerr << "Unsupported system" << endl;
            return;
        }
    }
};

#endif // PHOTO_H

