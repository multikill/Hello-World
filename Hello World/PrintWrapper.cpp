#include "PrintWrapper.h"
#include "tinyformat.h"


bool PrintWrapper::printText(std::string text)
{
	{
		if (text.empty())
		{
			tfm::printfln("text is empty");
			return false;
		}

		std::string res = tfm::format("Your text: %s", text);
		tfm::printfln("%s", res);

		return true;
	}
}
