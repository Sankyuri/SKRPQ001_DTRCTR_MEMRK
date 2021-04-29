#pragma once
#include <crtdbg.h>
#include "MyMain.h"


int main(){
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	MyMain::init();
	MyMain::release();
}



