/*
 * ConfigHandler.cpp
 * Definition of PListHandler class
 * Copyright (C) 2006 Lorenz Pretterhofer
 */

#ifndef USERDEFSHANDLER_H
#define USERDEFSHANDLER_H

#include "Platform/ConfigHandler.h"

#import "Foundation/NSDictionary.h"

class UserDefsHandler: public ConfigHandler
{
public:
	virtual ~UserDefsHandler();
	virtual void SetInt(std::string name, int value);
	virtual void SetString(std::string name, std::string value);
	virtual std::string GetString(std::string name, std::string def);
	virtual int GetInt(std::string name, int def);
	virtual float GetFloat(const std::string& name, const float def);
private:
};

#endif // USERDEFSHANDLER_H
