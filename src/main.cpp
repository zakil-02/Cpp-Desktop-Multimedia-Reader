//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <string>
#include "..\include\multimediaObject.h"

using namespace std;

int main(int argc, const char* argv[])
{
    cout << "Hello brave new world" << std::endl;

    MultimediaObject* obj = new MultimediaObject("Object1", "Path1");
    obj->afficher(cout);
    return 0;
}
