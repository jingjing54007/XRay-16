///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#include "gvPS3Audio.h"
#include "gvPS3Headset.h"

#if !defined(_PS3)
#error This file should only be used with the PlayStation3
#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// starts up the devices
GVBool gviHardwareStartup(void)
{
	return gviPS3HeadsetStartup();
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// cleans up the devices
void gviHardwareCleanup(void)
{
	gviPS3HeadsetCleanup();
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// should be called every once in a while
void gviHardwareThink(void)
{
	gviPS3HeadsetThink();
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// lists the connected devices
int gviHardwareListDevices(GVDeviceInfo devices[], int maxDevices, GVDeviceType types)
{
	return gviPS3HeadsetListDevices(devices, maxDevices, types);
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// initializes a new device
GVDevice gviHardwareNewDevice(GVDeviceID deviceID, GVDeviceType type)
{
	return gviPS3HeadsetNewDevice(deviceID, type);
}