#include <iostream>
#include "logger.h"

using namespace std;

int main()
{
    logger * logger1 = new logger();
    logger1->log("This message is from user1.");

    logger * logger2 = new logger();
    logger2->log("This message is from user2.");

    return 0;

}