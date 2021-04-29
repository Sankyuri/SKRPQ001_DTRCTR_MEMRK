#pragma once
#include "Base.h"
#include "Datas.h"


class Child : public Base {
public:
    Child();
    virtual ~Child();

    void virtdummy() override;


    Datas m_datas;


};



