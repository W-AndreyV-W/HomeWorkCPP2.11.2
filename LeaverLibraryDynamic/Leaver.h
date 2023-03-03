#pragma once
#include <iostream>

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllimport)
#endif


class Leaver {
public:
	LEAVERLIBRARYDYNAMIC_API Leaver(std::string name);
	LEAVERLIBRARYDYNAMIC_API void leave();
private:
	std::string _name;
};