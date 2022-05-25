#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <exception>
#include <string>
#include "libsetting.h"

class VNADATALIB_EXPORT fileexception :public std::exception{

public:
    fileexception(const std::string &error = "")
    :m_strErrorMsg(error){};
    const char* what() const noexcept override{return m_strErrorMsg.c_str();}
    const std::string& getError() const {return m_strErrorMsg;}
private:
    const std::string m_strErrorMsg;

};

#endif