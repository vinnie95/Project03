#include <iostream>
#include "logger.h"

using namespace std;

logger::logger()
{
    cout<<"New instance created." << endl;
}

void logger::log(string msg)
{
    cout << msg << endl;
    
}