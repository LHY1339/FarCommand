#pragma once
#include <string>
#include <WinSock2.h>
#include "Define.h"

#pragma comment(lib,"ws2_32.lib")

struct FUser
{
	std::string ip="127.0.0.1";
	std::string port="1000";
	std::string name="USER_NAME";
	sockaddr_in addr;
	int connection = MAX_CONNECTION;
};