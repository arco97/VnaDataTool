#ifndef TYPEDEF_H
#define TYPEDEF_H
#include "polar.h"
#include <complex>
#include <vector>
#include <string>
#include "libsetting.h"
/**
 * @brief specifies the unit of frequency. Legal values are GHz, MHz, KHz, Hz. The default value is GHz.
 */
typedef enum {Hz = 0,KHz = 3,MHz = 6,GHz = 9}freqUnit_t;
/**
 * @brief specifies what kind of network parameter data is contained in the file. The default value is S
 */
typedef enum {
    ///Scattering parameters
    S,
    ///Admittance parameters
    Y,
    ///Impedance parameters
    Z,
    ///Hybrid-h parameters
    H,
    ///Hybrid-g parameters
    G
}param_t;
/**
 * \brief specifies the format of the network parameter data pairs. Angles are given in degrees. Note that this format does not apply to noise parameters. (Refer to the “Adding Noise Parameters” section at the end of this document). The default value is MA. 
 */
typedef enum {
    ///for dB-angle (dB = 20*log10|magnitude|)
    DB,
    ///for magnitude-angle
    MA,
    ///for real-imaginary
    RI
}form_t;

/**
 * @brief contain all data of the touchstone file in one structure
 * 
 */
typedef struct touchstone_t
{
    /// contains all scattering Paramter in its complex representation
    /// S11 is spezifiert as sparm.at(0).at(0).at(<frequency point>)
    /// S21 is spezifiert as sparm.at(1).at(0).at(<frequency point>)
    std::vector<std::vector<std::vector<std::complex<double>>>> sparm;
    /// contains all noise Paramter
    /// S11 is spezifiert as sparm.at(0).at(0).at(<frequency point>)
    /// S21 is spezifiert as sparm.at(1).at(0).at(<frequency point>)
    std::vector<std::vector<std::vector<std::complex<double>>>> noise;
    /// contains all frequency points
    std::vector<double> freq;
    /// all comment as one string
    std::string comment;
    ///number of network ports of the device or interconnect being described
    int port;
    /// specifies the reference resistance in ohms, where n
    ///is a positive number of ohms (the real impedance to
    ///which the parameters are normalized). 
    ///The default reference resistance is 50 ohms
    double resistor;
}touchstone_t;



#endif