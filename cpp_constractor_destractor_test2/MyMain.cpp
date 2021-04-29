#include "MyMain.h"


Base *MyMain::m_obj = nullptr;


void MyMain::init() {
	m_obj = new Child();
}


void MyMain::release() {
	{ if (m_obj) { delete m_obj; m_obj = nullptr; } }
}



