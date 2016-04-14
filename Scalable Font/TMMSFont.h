//
//  TMMSFont.hpp
//  Scalable Font
//
//  Created by Tom Metzger & Micah Stewart on 4/14/16.
//  Copyright © 2016 Tom Metzger. All rights reserved.
//

#ifndef TMMSFont_H
#define TMMSFont_H



#include <stdio.h>
#include <iostream>
#include <cstring>


using namespace std;




class TMMSFont
{
    public:
        TMMSFont();
        ~TMMSFont();
    
        char charToDrawWith;
        int fontSize;
    
    
    
    private:
        //Create Capital Letters A-Z
        string createA(int fontSize, char charToDrawWith);
        string createB(int fontSize, char charToDrawWith);
        string createC(int fontSize, char charToDrawWith);
        string createD(int fontSize, char charToDrawWith);
        string createE(int fontSize, char charToDrawWith);
        string createF(int fontSize, char charToDrawWith);
        string createG(int fontSize, char charToDrawWith);
        string createH(int fontSize, char charToDrawWith);
        string createI(int fontSize, char charToDrawWith);
        string createJ(int fontSize, char charToDrawWith);
        string createK(int fontSize, char charToDrawWith);
        string createL(int fontSize, char charToDrawWith);
        string createM(int fontSize, char charToDrawWith);
        string createN(int fontSize, char charToDrawWith);
        string createO(int fontSize, char charToDrawWith);
        string createP(int fontSize, char charToDrawWith);
        string createQ(int fontSize, char charToDrawWith);
        string createR(int fontSize, char charToDrawWith);
        string createS(int fontSize, char charToDrawWith);
        string createT(int fontSize, char charToDrawWith);
        string createU(int fontSize, char charToDrawWith);
        string createV(int fontSize, char charToDrawWith);
        string createW(int fontSize, char charToDrawWith);
        string createX(int fontSize, char charToDrawWith);
        string createY(int fontSize, char charToDrawWith);
        string createZ(int fontSize, char charToDrawWith);
        
        //Create Numbers 0-9
        string create0(int fontSize, char charToDrawWith);
        string create1(int fontSize, char charToDrawWith);
        string create2(int fontSize, char charToDrawWith);
        string create3(int fontSize, char charToDrawWith);
        string create4(int fontSize, char charToDrawWith);
        string create5(int fontSize, char charToDrawWith);
        string create6(int fontSize, char charToDrawWith);
        string create7(int fontSize, char charToDrawWith);
        string create8(int fontSize, char charToDrawWith);
        string create9(int fontSize, char charToDrawWith);
        
        //Create Space Character
        string createSpace(int fontSize);
        
        //Create Punction Marks
        string createPeriod(int fontSize, char charToDrawWith);
        string createExclamation(int fontSize, char charToDrawWith);
};





#endif
