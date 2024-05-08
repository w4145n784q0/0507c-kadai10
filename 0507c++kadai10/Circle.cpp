#include "Circle.h"

Circle::Circle()
    :PI(3.14)
{
}
/// <summary>
/// ‰~‚Ì–ÊÏ‚ğ‹‚ß‚éŠÖ”
/// </summary>
/// <param name="_r">”¼Œa</param>
/// <returns>–ÊÏ</returns>
float Circle::Menseki(float r)
{
    return r * r * PI;
}
