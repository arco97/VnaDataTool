#ifndef TOUCHSTONEV20_H
#define TOUCHSTONEV20_H
/**
 * @file touchstoneV20.h
 * @author André Höhne
 * @brief A c++ class to read and write touchstone filse in version 2.0
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

class VNADATALIB_EXPORT TouchstoneV20{
    
public:
    TouchstoneV20();
    virtual ~TouchstoneV20();
};
#endif