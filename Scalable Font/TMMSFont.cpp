//
//  TMMSFont.cpp
//  Scalable Font
//
//  Created by Tom Metzger & Micah Stewart on 4/14/16.
//  Copyright © 2016 Tom Metzger. All rights reserved.
//

#ifndef TMMSFont_CPP
#define TMMSFont_CPP



#include <stdio.h>
#include <iostream>
#include <cstring>

#include "TMMSFont.h"


using namespace std;





TMMSFont::TMMSFont()
{
    
}




string TMMSFont::createA(int fontSize, char charToDrawWith)
{
    if (fontSize == 1)
    {
        return string(&charToDrawWith);
    }
    else if (fontSize == 2)
    {
        return " "+string(&charToDrawWith)+"\n"+string(&charToDrawWith)+string(&charToDrawWith);
    }
    else if (fontSize == 3)
    {
        return " "+string(&charToDrawWith)+" "+"\n"+string(&charToDrawWith)+string(&charToDrawWith)+"\n"+string(&charToDrawWith)+" "+string(&charToDrawWith);
    }
}

//----
// **
//****
//*   *
//*   *
//----


#endif