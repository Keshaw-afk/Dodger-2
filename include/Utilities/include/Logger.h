//
// Created by graduate on 11/05/25.
//

#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <chrono>
#include <ctime>

namespace logger
{
    inline void log(std::string message)
    {
        std::ofstream logs;
        logs.open("logs.txt", std::ios::app);
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        logs << std::ctime(&now_time) <<message << "\n" << std::endl;
        logs.close();
    }
}


#endif //LOGGER_H
