#include "../include/touchstoneV11.h"
#include "fstream"
/*
wenn compiler auf debug :)
 #if !NDEBUG
int64_t test = 2;
#endif
*/


TouchstoneV11::TouchstoneV11(){}
TouchstoneV11::~TouchstoneV11(){}

touchstone_t TouchstoneV11::readFile(const std::string &strFilePath){
    touchstone_t touch;
    std::fstream file;

    //open file
    file.open(strFilePath.c_str(),std::ios::in | std::ios::out);
    //check if file is open
    if(!file.is_open())throw fileexception("file could not open \""+strFilePath+"\"");
    std::string strRawLine, strOptionLine;
    std::vector<std::string> vstrFile;
    while (!file.eof()){
        getline(file,strRawLine);
        if(!strRawLine.find("!"))touch.comment += strRawLine+"\n";
        else if(!strRawLine.find("#") && strOptionLine.empty()) strOptionLine = strRawLine;
        else{
            vstrFile.push_back(strRawLine);
        }
        strRawLine.clear();
    }
    if(strOptionLine.empty()) throw fileexception("no option line was found");
    std::string strFreqencyUnit, strParameter, strFormat;
    double dResistotr;
    sscanf(strOptionLine.c_str(),"# %s  %s %s  R %f ",strFreqencyUnit,strParameter,strFormat,&dResistotr);





    return touchstone_t(touch);
}

void TouchstoneV11::writeFile(const std::string & strFilePath,const touchstone_t &touch){
    
}
