#include "PrintWrapper.h"
#include "tinyformat.h"

/// <summary>	Simple wrapper for print your text. </summary>
///
/// <remarks>	Kage, 11.12.2020. </remarks>
///
/// <param name="text">	expend to "Your text: %s". </param>
///
/// <returns>	true if the text is not empty. </returns>

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
