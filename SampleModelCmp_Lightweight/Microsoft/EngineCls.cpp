/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: akocatas
	Component	: SampleModelCmp 
	Configuration 	: Microsoft
	Model Element	: EngineCls
//!	Generated Date	: Fri, 1, May 2015  
	File Path	: SampleModelCmp\Microsoft\EngineCls.cpp
*********************************************************************/

//## auto_generated
#include "EngineCls.h"
//## package SampleModel

//## class EngineCls
EngineCls::EngineCls() {
    // Aselsan: autogenerated:
    initRelations();
    
}

EngineCls::~EngineCls() {
}

void EngineCls::Ignite() {
    //#[ operation Ignite()
    //#]
}

EcuCls* EngineCls::getEcu() const {
    return (EcuCls*) &Ecu;
}

ThrottleCls* EngineCls::getThrottle() const {
    return (ThrottleCls*) &Throttle;
}

void EngineCls::setItsep_IRpmGauge(IRpmGauge * ifc) {
    // Generated for required interface IRpmGauge of port ep
    Itsep_IRpmGauge = ifc;
    
    // Generated for required interface IRpmGauge of relay port ep
    Ecu.setItsep2_IRpmGauge(ifc);
    
}

IIgnition * EngineCls::getItsip_IIgnition() {
    return this;
    
}

IThrottle * EngineCls::getItsep_IThrottle() {
    return Throttle.getItstp2_IThrottle();
    
}

void EngineCls::initRelations() {
    
    
    // Start: Link: Ecu_Throttle
    // Connect Throttle.tp1 required interfaces to Ecu.ep1 provided interfaces 
    {
      IThrottleEcu* ifc = Ecu.getItsep1_IThrottleEcu();
      Throttle.setItstp1_IThrottleEcu(ifc);
    
    }
    // End: Link: Ecu_Throttle
    
    
}

/*********************************************************************
	File Path	: SampleModelCmp\Microsoft\EngineCls.cpp
*********************************************************************/
