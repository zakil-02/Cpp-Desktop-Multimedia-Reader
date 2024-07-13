//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <string>
#include "..\include\multimediaObject.h"
#include "..\include\photoObject.h"
#include "..\include\videoObject.h"

using namespace std;

int main(int argc, const char* argv[])
{
    cout << "Test" << std::endl;
    /*
    cout << "----------------" << std::endl;

    MultimediaObject* obj = new MultimediaObject("Object1", "Path1");
    obj->afficher(cout);
    */
    cout << "----------------" << std::endl;

    Photo photo("Mee", "C:/Users/akilh/OneDrive/Bureau/TELECOM_2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/pdp.jpg", 48.8584, 2.2945);
    cout << "Photo object:" << endl;
    photo.afficher(cout);
    photo.play("windows");

    cout << "----------------" << std::endl;
    
    Video video("Street Video", "C:/Users/akilh/OneDrive/Bureau/TELECOM_2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/street.mp4", 120);
    cout << "Video object:" << endl;
    video.afficher(cout);
    video.play("windows");
    return 0;
}
