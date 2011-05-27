#ifndef B97_2_functional_h
#define B97_2_functional_h
/**********************************************************
* B97_2_functional.h: declarations for B97_2_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 25-May-2011
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class B97_2_Functional : public Functional {
public:
    B97_2_Functional(int npoints, int deriv);
    virtual ~B97_2_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<Properties> prop);
};
}}
#endif

