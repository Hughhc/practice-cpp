#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "month.h"

void MonthInEnglish()
{
    // 在界面上输入数字的月份（1-12），输出对应月份的英文单词的全称，如果输入的数字不合法，给出提示。
    int month;
    cout << "请输入月份："; cin >> month;
    cout << "month:" << month << "月" << endl << endl;;

    // 用if … else if …实现。
    if (month==1)         cout << "if:January\n";
    else if (month==2)    cout << "if:February\n";
    else if (month == 3)  cout << "if:March\n";
    else if (month == 4)  cout << "if:April\n";
    else if (month == 5)  cout << "if:May\n";
    else if (month == 6)  cout << "if:June\n";
    else if (month == 7)  cout << "if:July\n";
    else if (month == 8)  cout << "if:August\n";
    else if (month == 9)  cout << "if:September\n";
    else if (month == 10) cout << "if:October\n";
    else if (month == 11) cout << "if:November\n";
    else if (month == 12) cout << "if:December\n";
    else  cout << "if:输入的数字不正确。\n";
    cout << endl;

    // switch实现。
    switch (month)
    {
        case 1:  cout << "switch:January\n"; break;
        case 2:  cout << "switch:February\n"; break;
        case 3:  cout << "switch:March\n"; break;
        case 4:  cout << "switch:April\n"; break;
        case 5:  cout << "switch:May\n"; break;
        case 6:  cout << "switch:June\n"; break;
        case 7:  cout << "switch:July\n"; break;
        case 8:  cout << "switch:August\n"; break;
        case 9:  cout << "switch:September\n"; break;
        case 10: cout << "switch:October\n"; break;
        case 11: cout << "switch:November\n"; break;
        case 12: cout << "switch:December\n"; break;
        default: cout << "switch:输入的数字不正确。\n";
    }
    cout << endl;

    // 用字符串数组（C风格和C++风格）实现。
    /*char montharr[12][10] = { "C风格:January","C风格:February","C风格:March","C风格:April","C风格:May",
        "C风格:June","C风格:July","C风格:August","C风格:September","C风格:October","C风格:November","C风格:December" };*/
    string montharr[12] = { "C++风格:January","C++风格:February","C++风格:March","C++风格:April","C++风格:May",
        "C++风格:June","C++风格:July","C++风格:August","C++风格:September","C++风格:October","C++风格:November","C++风格:December" };
    if (month >= 1 && month <= 12) cout << montharr[month - 1] << endl;
    else  cout << "C++风格:输入的数字不正确。\n";
}
