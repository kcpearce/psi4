#ifndef P86_C_functional_h
#define P86_C_functional_h
/**********************************************************
* P86_C_functional.h: declarations for P86_C_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 25-May-2011
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class P86_C_Functional : public Functional {
public:
    P86_C_Functional(int npoints, int deriv);
    virtual ~P86_C_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<Properties> prop);
};
}}
#endif

