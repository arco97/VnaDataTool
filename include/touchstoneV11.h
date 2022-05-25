#ifndef TOUCHSTONEV11_H
#define TOUCHSTONEV11_H

/**
 * @file touchstoneV11.h
 * @author André Höhne
 * @brief A c++ class to read and write touchstone filse in version 1.1
 * @version 1.0
 * @date 2022-05-06
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "polar.h"
#include "libsetting.h"
#include "typedef.h"
#include "fileexception.h"
class VNADATALIB_EXPORT TouchstoneV11
{
public:
    TouchstoneV11();
    virtual ~TouchstoneV11();
    static touchstone_t readFile(const std::string &strPathFile);
    static void writeFile(const std::string &StrPathFile, const touchstone_t &touch);
};
#endif