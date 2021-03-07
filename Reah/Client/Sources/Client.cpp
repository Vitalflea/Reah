#define VITALFLEA_EXTERNAL

#include <Vitalflea.hpp>

#include <Windows.h>

namespace vf = vitalflea;

INT APIENTRY WinMain(_In_ HINSTANCE /*hInstance*/, _In_opt_ HINSTANCE /*prevInstance*/, _In_ PSTR /*cmdLine*/, _In_ INT /*cmdShow*/) {

	vf::OpenConsole();

	vf::CloseConsole();

	return TRUE;
}