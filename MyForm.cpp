#include "MyForm.h"
#include "Meniu.h"
#include "MeniuNewGame.h"
#include "MeniuCreateUser.h"
#include "MeniuHowManyAI.h"
#include "MeniuHowManyAI2.h"
#include "MeniuHowManyAI3.h"
#include "MeniuHowManyAI4.h"
#include "MeniuMyScore.h"
#include "MeniuMode.h"
#include "MeniuFun.h"
#include "MeniuFun2.h"
#include "MeniuFun3.h"
#include "MeniuFun4.h"
#include "MeniuAssignPlayerNames.h"
#include "MeniuAssignPlayerNames2.h"
#include "MeniuAssignPlayerNames3.h"
#include "MeniuRegulamentClassicMode.h"
#include "MeniuRegulamentClassicMode2.h"
#include "MeniuRegulamentClassicMode3.h"
#include "MeniuRegulamentClassicMode4.h"
#include "MeniuRegulamentClassicMode5.h"
#include "MeniuRegulamentClassicMode6.h"
#include "MeniuRegulamentClassicMode7.h"
#include "MeniuRegulamentClassicMode8.h"
#include "MeniuRegulamentClassicMode9.h"
#include "MeniuStartGame.h"
#include "MeniuLogin.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MBBMonopoly::MeniuLogin form;
	Application::Run(%form);
}
