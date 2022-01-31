#pragma once
#include <chrono>
#include <iostream>

using namespace std;


//Обьявления заголовка класса
class PrintTime
{
public:
	PrintTime();
	~PrintTime();
private:
	chrono::time_point < chrono::steady_clock> start, end;

};

