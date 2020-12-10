#include "tinyformat.h"

int main()
{
	tfm::printfln("Hello World");

	std::string str = tfm::format("I'm a simple string %i", 42);

	tfm::printfln(str.c_str());

	tfm::printfln("Appveyor test2");

	return 0;
}