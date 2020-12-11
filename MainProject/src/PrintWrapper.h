#pragma once
#include <string>

/// <summary>	A simple print wrapper. </summary>
///
/// <remarks>	Kage, 11.12.2020. </remarks>

class PrintWrapper
{
	int var = 42;
public:

	/// <summary>	Simple wrapper for print your text. </summary>
	///
	/// <remarks>	Kage, 11.12.2020. </remarks>
	///
	/// <param name="text">	expend to "Your text: %s". </param>
	///
	/// <returns>	true if the text is not empty. </returns>

	static bool printText(std::string text);
};

