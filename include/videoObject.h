#ifndef VIDEO_H
#define VIDEO_H

#include "multimediaObject.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Video : public MultimediaObject {
private:
    int duration;

public:
    // Constructors
    Video() : MultimediaObject(), duration(0) {}

    Video(string name, string path, int duration)
        : MultimediaObject(name, path), duration(duration) {}

    // Getters
    int getDuration() const { return duration; }

    // Setters
    void setDuration(int duration) { this->duration = duration; }

    // Print the object information
    void afficher(ostream& stream) const override {
        MultimediaObject::afficher(stream);
        stream << "Duration: " << duration << " seconds" << endl;
    }

    // Play the video
    void play(string sys) const override {
        if (sys == "linux") {
            string command = "mpv " + getPath() + " &";
            system(command.c_str());
            return;
        }else if (sys == "windows") {
            string command = "start " + getPath() + " &";
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

#endif // VIDEO_H
