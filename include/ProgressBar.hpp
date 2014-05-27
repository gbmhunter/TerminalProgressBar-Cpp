//!
//! @file 			ProgressBar.hpp
//! @author 		Geoffrey Hunter <gbmhunter@gmail.com> ()
//! @created		2014/05/15
//! @last-modified 	2014/05/27
//! @brief			Contains the progress bar object and it's code.
//! @details
//!					See README.rst in repo root dir for more info.

// Header guard
#ifndef PROGRESS_BAR_NS_PROGRESS_BAR_H
#define PROGRESS_BAR_NS_PROGRESS_BAR_H

// System headers


// User headers


namespace ProgressBarNs
{


	//! @brief
	class ProgressBar
	{

	public:

		//! @brief		Constructor
		ProgressBar(uint32_t barWidth);

		//! @brief		Simplified constructor
		ProgressBar();

		//! @brief		Destructor
		virtual ~ProgressBar();

		//! @brief		Draws a progress bar.
		//! @param		progress		A value between 0 and 1 which indicates how far through the operation the computer is at.
		//! @throws		n/a
		void Draw(double progress);

		//! @brief		Call once you have finished with the progress bar.
		void Finish();

	private:

		//! @brief		The bar width, measured in characters.
		//! @note		Defaults to 70.
		uint32_t barWidth;

		//! @brief		General initialisation code, called by all constructors.
		void Init(uint32_t barWidth);

	};

} // namespace ProgressBarNs

#endif // #ifndef PROGRESS_BAR_NS_PROGRESS_BAR_H
