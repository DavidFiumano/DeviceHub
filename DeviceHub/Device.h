#pragma once
#include "io_service.h"


namespace DeviceHub {
	
	class Device
	{
	private:
		io_service& io;
	
	public:
		Device(io_service& io); // sets io equal to a reference of some io_service object
		~Device();

		
	};

}