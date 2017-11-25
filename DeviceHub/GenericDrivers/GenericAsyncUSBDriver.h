#pragma once
#include "../io_service.h"

namespace DeviceHub
{

	class GenericAsyncUSBDriver : public io_service
	{
	public:
		GenericAsyncUSBDriver();
		~GenericAsyncUSBDriver();
	};

}