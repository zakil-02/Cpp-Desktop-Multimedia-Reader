// filmObject.h
#ifndef FILMOBJECT_H
#define FILMOBJECT_H

#include "videoObject.h"
#include <iostream>
#include <cstring> // for memcpy

using namespace std;
class Film : public Video {
private:
    int* chapters = nullptr;
    int numChapters = 0;

public:
    // Constructor
    Film(string name = "", string path = "", int duration = 0, int* chapters = nullptr, int numChapters = 0)
        : Video(name, path, duration), numChapters(numChapters) {
        if (numChapters > 0) {
            this->chapters = new int[numChapters];
            memcpy(this->chapters, chapters, numChapters * sizeof(int));
        }
    }

    // Copy constructor
    Film(const Film& other) : Video(other) {
        numChapters = other.numChapters;
        if (numChapters > 0) {
            chapters = new int[numChapters];
            memcpy(chapters, other.chapters, numChapters * sizeof(int));
        }
    }

    // Destructor
    ~Film() {
        delete[] chapters;
    }

    // Modifier
    void setChapters(int* chapters, int numChapters) {
        delete[] this->chapters;
        this->numChapters = numChapters;
        if (numChapters > 0) {
            this->chapters = new int[numChapters];
            memcpy(this->chapters, chapters, numChapters * sizeof(int));
        } else {
            this->chapters = nullptr;
        }
    }

    // Accessors
    const int* getChapters() const {
        return chapters;
    }

    int getNumChapters() const {
        return numChapters;
    }

    // Display method
    void afficher(ostream& stream) const override {
        Video::afficher(stream);
        stream << "Number of chapters: " << numChapters << endl;
        for (int i = 0; i < numChapters; ++i) {
            stream << "Chapter " << i + 1 << " duration: " << chapters[i] << " seconds" << endl;
        }
    }
};

#endif // FILMOBJECT_H
