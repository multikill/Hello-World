#pragma once
#include <string>

/// <summary>	A simple print wrapper. </summary>
///
/// <remarks>	Kage, 11.12.2020. </remarks>

class PrintWrapper
{
	int var = 42;
public:
	static bool printText(std::string text);
};

