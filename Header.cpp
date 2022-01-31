#include "Header.h"

// ����� ������� ������� ����� ���������� ������ ���� (����������)
PrintTime::PrintTime()
{
	start = chrono::high_resolution_clock::now();
}

PrintTime::~PrintTime()
{
	end = chrono::high_resolution_clock::now();
	chrono::duration<float> duratin = end - start;
	std::cout <<"Code execution time      "<< duratin.count() << "   s" << endl;
}
