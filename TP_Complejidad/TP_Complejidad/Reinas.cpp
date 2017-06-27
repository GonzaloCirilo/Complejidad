#include "Reinas.h"
using namespace TP_Complejidad;

[STAThread]
void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Reinas());

}
