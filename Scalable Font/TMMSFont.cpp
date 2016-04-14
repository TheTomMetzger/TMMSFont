//
//  TMMSFont.cpp
//  Scalable Font
//
//  Created by Tom Metzger & Micah Stewart on 4/14/16.
//  Copyright © 2016 Tom Metzger. All rights reserved.
//

#ifndef TMMSFont_CPP
#define TMMSFont_CPP



#include "TMMSFont.h"





TMMSFont()
{
    
}




string createA(int fontSize, char charToDrawWith)
{
    if (fontSize == 1)
    {
        return charToDrawWith;
    }
    else if (fontSize == 2)
    {
        return " "+charToDrawWith+"\n"+charToDrawWith+charToDrawWith;
    }
    else if (fontSize == 3)
    {
        return " "+charToDrawWith+" "+"\n"+charToDrawWith+charToDrawWith+charToDrawWith+"\n"+charToDrawWith+" "+charToDrawWith;
    }
}

----
 **
****
*   *
*   *
----


#endif