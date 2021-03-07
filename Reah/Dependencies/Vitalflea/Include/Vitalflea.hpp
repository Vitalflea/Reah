#pragma once

#if !defined(VITALFLEA_INTERNAL) && !defined(VITALFLEA_EXTERNAL)
#error Please define either VITALFLEA_INTERNAL or VITALFLEA_EXTERNAL
#endif

namespace vitalflea {

#if defined(VITALFLEA_INTERNAL)
	class VMemory {

	};
#elif defined(VITALFLEA_EXTERNAL)
	class VMemory {

	};
#endif

	void OpenConsole();
	void CloseConsole();
}