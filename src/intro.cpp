#include "intro.h"
#include<iostream>
enum NumeJucator
{
    wizard = 1,
    warrior = 2,
    rogue = 3

};
intro::intro()
{ 

}

intro::~intro()
{

}

void intro::AlegeJucator( int jucator)
{
    std::cout<<"Alege jucatorul dorit : \n 1 = Wizard \n 2 = Warrior \n 3 = Rogue;\n"; 
    std::cin>>jucator;
    if(jucator= 1)
    {
        std::cout<<"Ai ales Wizard\n";
    }
    if(jucator =2 )
    {
        std::cout<<"Ai ales Warrior\n";
    }
    if(jucator=3)
    {
         std::cout<<"Ai ales Rogue\n";
    }
    
}