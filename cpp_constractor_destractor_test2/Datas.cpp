#include "Datas.h"
#include <iostream>


Datas::Datas() :
    m_dat(new int[DATA_SIZE])
{
	std::cout << "Datas �̃R���X�g���N�^" << std::endl;
}


Datas::~Datas() {
	std::cout << "Datas �̃R���X�g���N�^" << std::endl;
}



