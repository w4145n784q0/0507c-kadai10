#include "Circle.h"

Circle::Circle()
    :PI(3.14)
{
}
/// <summary>
/// �~�̖ʐς����߂�֐�
/// </summary>
/// <param name="_r">���a</param>
/// <returns>�ʐ�</returns>
float Circle::Menseki(float r)
{
    return r * r * PI;
}
