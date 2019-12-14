#include "MyForm.h"
#include "header.h"
using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectOne::MyForm form;
	Application::Run(%form);
}
