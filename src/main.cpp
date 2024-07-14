//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "..\include\multimediaObject.h"
#include "..\include\photoObject.h"
#include "..\include\videoObject.h"
#include "..\include\filmObject.h"

using namespace std;

int main(int argc, const char* argv[])
{
    cout << "Test" << std::endl;
    cout << "----------------" << std::endl;
    /*
    cout << "----------------" << std::endl;

    MultimediaObject* obj = new MultimediaObject("Object1", "Path1");
    obj->afficher(cout);
    */

    vector<shared_ptr<MultimediaObject>> mediaList;

    Photo photo("Mee", "C:/Users/akilh/OneDrive/Bureau/TELECOM_2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/pdp.jpg", 48.8584, 2.2945);
    Video video("Street Video", "C:/Users/akilh/OneDrive/Bureau/TELECOM_2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/street.mp4", 120);
    Film film("Film", "C:/Users/akilh/OneDrive/Bureau/TELECOM_2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/marra.mp4", 31, new int[4]{2, 4, 6, 19}, 4);

    mediaList.push_back(make_shared<Photo>(photo));
    mediaList.push_back(make_shared<Video>(video));
    mediaList.push_back(make_shared<Film>(film));

    for (auto& media : mediaList) {
        cout << "----------------" << endl;
        media->afficher(cout);
        media->play("windows");
    }
    return 0;
}
