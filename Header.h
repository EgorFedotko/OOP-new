#pragma once
#include <chrono>
#include <iostream>

using namespace std;


//���������� ��������� ������
class PrintTime
{
public:
	PrintTime();
	~PrintTime();
private:
	chrono::time_point < chrono::steady_clock> start, end;

};

