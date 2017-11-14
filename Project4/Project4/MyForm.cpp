#include "MyForm1.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;




[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm1 form;
	Application::Run(%form);

	return 0;
}
