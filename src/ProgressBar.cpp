//!
//! @file 			ProgressBar.cpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> ()
//! @created		2014/05/15
//! @last-modified 	2014/05/27
//! @brief			Contains the progress bar object and it's code.
//! @details
//!					See README.rst in repo root dir for more info.

#include <iostream>
#include <cstdint>

#include "../include/Config.hpp"
#include "../include/ProgressBar.hpp"

namespace ProgressBarNs
{

	ProgressBar::ProgressBar(uint32_t barWidth)
	{
		this->Init(barWidth);
	}

	ProgressBar::ProgressBar()
	{
		// Initialise with default progress bar width
		this->Init(config_DEFAULT_PROGRESS_BAR_WIDTH_CHAR);
	}

	void ProgressBar::Init(uint32_t barWidth)
	{
		this->barWidth = barWidth;
	}

	ProgressBar::~ProgressBar()
	{

	}

	void ProgressBar::Draw(double progress)
	{

		std::cout << "[";
		int32_t pos = this->barWidth * progress;
		for (int32_t i = 0; i < this->barWidth; ++i)
		{
			if (i < pos)
				// The bit that has already been completed
				std::cout << "=";
			else if (i == pos)
				// The bit which has yet to be completed
				std::cout << ">";
			else
				// The end
				std::cout << " ";
		}

		std::cout << "] " << int32_t(progress * 100.0) << " %\r";
		std::cout.flush();
	}

	void ProgressBar::Finish()
	{
		// Move to the next line
		std::cout << std::endl;
	}

} // namespace ProgressBarNs
