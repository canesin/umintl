/* ===========================
  Copyright (c) 2013 Philippe Tillet
  UMinTL - Unconstrained Minimization Template Library

  License : MIT X11 - See the LICENSE file in the root folder
 * ===========================*/


#ifndef UMINTL_STOPPING_CRITERION_FORWARDS_H
#define UMINTL_STOPPING_CRITERION_FORWARDS_H


#include "umintl/utils.hpp"

namespace umintl{

template<class BackendType>
struct stopping_criterion{
    virtual ~stopping_criterion(){ }
    virtual void init(optimization_context<BackendType> &){ }
    virtual void clean(optimization_context<BackendType> &){ }
    virtual bool operator()(optimization_context<BackendType> & context) = 0;
};



}

#endif
