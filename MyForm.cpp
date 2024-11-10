#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using System::Math;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MatrixcalculatorLyuzhinas211::MyForm form;
	Application::Run(% form);
}
