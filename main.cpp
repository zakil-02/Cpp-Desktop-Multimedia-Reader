//
// main.cpp
// Created on 21/01/2024
//

#include <iostream>
#include <string>
#include "multimediaObject.h"
using namespace std;

int main(int argc, const char* argv[])
{
    std::cout << "Testing the base class \n ---------------------------------" << std::endl;
    MultimediaObject* myObject = new MultimediaObject("MyObject", "C:/Users/akilh/OneDrive/Bureau/TELECOM 2A/UE_Electives_crD/INF224-ParadigmesDeProgrammation/MyObject");
    myObject->afficher(cout);

    myObject->setName("multimedia01");
    myObject->afficher(cout);
    return 0;
}