#include "Log.h"
#include <exception>

// Class test

int main()
{
	Log::InitConsole();
	Log::InitFile();
	// w przypadku bezsensownej nazwy pokroju "dawdawdawdg" logger zostanie wy��czony,
	// ale w��czy go ponownie kolejne poprawne ustawienie poziomu
	Log::SetConsoleLevel("adawdawdawd");
	Log::SetConsoleLevel("trace"); // z ma�ych!
	LOG_TRACE("Hello world");
	int errorVal = 13;
	LOG_INFO("Everything is {1} {0}", "so far", "fine");
	LOG_ERROR("Error, the val is {}", errorVal);
	LOG_CRITICAL("The system is about to dump");
	LOG_CRITICAL(false);
	Log::SetFileLevel("trace");
	LOG_TRACE("A teraz zapisujemy do pliku");
	FILE_TRACE("Dupa123");
	FILE_INFO("Kolork�w w pliku chyba nie b�dzie");
	FILE_CRITICAL("�azik straci� po��czenie");
}