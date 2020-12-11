/// <file>	Hello World\main.cpp </file>
///
/// <copyright file="main.cpp" company="MyCompany.com">
/// Copyright (c) 2020 MyCompany.com. All rights reserved.
/// </copyright>
///
/// <summary>	Implements the main class. </summary>

#include "tinyformat.h"
#include "PrintWrapper.h"

/// <summary>	Funcs. </summary>
///
/// <remarks>	Kage, 11.12.2020. </remarks>
///
/// <param name="a">	An int to process. </param>
///
/// <returns>	An int. </returns>

int func(int a)
{
	return 0;
}

/// <summary>	Main entry-point for this application. </summary>
///
/// <remarks>	Kage, 11.12.2020. </remarks>
///
/// <param name="argc">	The number of command-line arguments provided. </param>
/// <param name="argv">	An array of command-line argument strings. </param>
///
/// <returns>	Exit-code for the process - 0 for success, else an error code. </returns>

int main(int argc, char* argv[])
{

	tfm::printfln("Hello World");

	std::string str = tfm::format("I'm a simple string %s", 42);

	tfm::printfln(str.c_str());

	tfm::printfln("Appveyor test2");

	PrintWrapper::printText("my text");

	return 0;
}