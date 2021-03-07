#define VITALFLEA_EXTERNAL
#define VITALFLEA_INTERNAL

#include "../Include/Vitalflea.hpp"

#include <Windows.h>
#include <stdio.h>

namespace vitalflea {

	void OpenConsole() {

#ifdef _DEBUG
		AllocConsole();

		FILE* l_fs_console{ nullptr };
		freopen_s(&l_fs_console, "CONOUT$", "w", stdout);
		freopen_s(&l_fs_console, "CONOUT$", "w", stderr);
		freopen_s(&l_fs_console, "CONIN$", "r", stdin);
#endif
	}

	void CloseConsole() {
#ifdef _DEBUG
		FreeConsole();
#endif
	}
}
