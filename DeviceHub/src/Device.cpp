#include "../Device.h"



DeviceHub::Device::Device(io_service& input_output_service)
	: io(input_output_service)
{

}


DeviceHub::Device::~Device()
{
}
