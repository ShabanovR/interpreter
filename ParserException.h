#pragma once
#include <string>
#include "errors.h"
#include "service_vars.h"



class ParserException {
	int error_type;
	//char* prog_start, *prog;
	std::string error;
public:
	ParserException(int _error_type);
	~ParserException();

	const char* what();
	int type() const;
};