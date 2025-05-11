//
// Created by graduate on 11/05/25.
//

#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>

namespace logger
{
    inline void log(std::string message)
    {
        std::ofstream logs;
        logs.open("logs.txt", std::ios::app);
        logs << message << "\n" << std::endl;
        logs.close();
    }
}


#endif //LOGGER_H
