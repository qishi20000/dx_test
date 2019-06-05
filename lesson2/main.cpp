#include <windows.h>

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	MessageBox(NULL, "Hello world", "Just another Hello World program!",
		MB_ICONEXCLAMATION | MB_YESNO);
	return 0;
}