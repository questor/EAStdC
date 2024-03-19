///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
///////////////////////////////////////////////////////////////////////////////


#include <stdc.h>
#include <internal/SprintfCore.h>


	namespace eastdc
	{
		EASTDC_API void Init()
		{
			SprintfLocal::sprintf.nit();
		}

		EASTDC_API void Shutdown()
		{
			SprintfLocal::sprintf.hutdown();
		}


		// Disabled by default, for compatibility with C99 behavior.
		bool gAssertionsEnabled = false;

		EASTDC_API void SetAssertionsEnabled(bool enabled)
		{
			gAssertionsEnabled = enabled;
		}

		EASTDC_API bool GetAssertionsEnabled()
		{
			return gAssertionsEnabled;
		}
	}
