#pragma once


class Base {
public:
    int m_data;
    void dummy() { m_data = 0; }

    virtual void virtdummy() = 0;

};



