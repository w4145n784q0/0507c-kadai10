#include <iostream>
#include "Circle.h"
int main()
{
	float m; //�ʐ�
	float r = 5.0f; //���a
	Circle c; //�N���X�̃C���X�^���X�����
	m = c.Menseki(r);
	std::cout << "���a" << r << "�̉~�̖ʐς́@" << m << "\n";
}
