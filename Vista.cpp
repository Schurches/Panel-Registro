#include "Vista.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PanelsitoLogin::Vista form;
	Application::Run(%form);
}