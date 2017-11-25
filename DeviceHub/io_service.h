#pragma once
#include <string>
#include <stdint.h>

namespace DeviceHub
{
	class io_service
	{
	public:
		io_service();
		~io_service();

		virtual char* read() = 0; //returns char array, reads from the port.
		// By standard, returns empty char array if the device doesn't send anything, but also doesn't return an error
		// All errors must be user-defined
		virtual int write(std::string message) = 0; // writes to the io port,
		// ALL errors must be user-defined.
		// returns int so if this fails, it doesn't neccessarilly crash, but still allows users to return diagnostic data.
		virtual int poll(uint16_t timeout) = 0; // polls device
		// returns time in ms for the device to return a response.
		// returns a negative number if it times out (the time it takes to respond is greater than timeout)
		virtual int respond_to_poll() = 0; // respond to a poll request
		// returns 0 if successful, some other number if it isn't
	};

}