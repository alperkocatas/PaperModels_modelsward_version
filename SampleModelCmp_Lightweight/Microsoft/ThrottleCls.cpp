/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: ThrottleCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.cpp
*********************************************************************/

//## auto_generated
#include "ThrottleCls.h"
//## package SampleModel

//## class ThrottleCls
ThrottleCls::ThrottleCls() {
}

ThrottleCls::~ThrottleCls() {
}

void ThrottleCls::RequestThrottle() {
    //#[ operation RequestThrottle()
    //#]
}

void ThrottleCls::setItstp1_IThrottleEcu(IThrottleEcu * ifc) {
    // Generated for required interface IThrottleEcu of port tp1
    Itstp1_IThrottleEcu = ifc;
    
}

IThrottle * ThrottleCls::getItstp2_IThrottle() {
    return this;
    
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\ThrottleCls.cpp
*********************************************************************/
