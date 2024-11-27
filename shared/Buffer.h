#pragma once
#include <string>
#include <WinSock2.h>

#pragma comment(lib,"ws2_32.lib")

struct FBuffer
{
	sockaddr_in addr;
	std::string message = "";
	bool success = false;
};