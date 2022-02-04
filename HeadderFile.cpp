#include "MyForm.h"
#include <Windows.h>

using namespace name; // Name of project

int main()
{
	int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int);
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew MyForm);
		return 0;
	}

}
