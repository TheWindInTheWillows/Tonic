//
//  MonoToStereoPanner.cpp
//  TonicDemo
//
//  Created by Morgan Packard on 3/7/13.
//  Copyright (c) 2013 Morgan Packard. All rights reserved.
//

#include "MonoToStereoPanner.h"

namespace Tonic{

  namespace Tonic_{
  
    MonoToStereoPanner_::MonoToStereoPanner_(){
      setIsStereo(true);
      panFrames.resize(kSynthesisBlockSize, 1);
    }
    MonoToStereoPanner_::~MonoToStereoPanner_(){}
  
    void MonoToStereoPanner_::setPan(ControlGenerator panArg){
      panControlGen = panArg;
    }
  }

}
