#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "month.h"

void MonthInEnglish()
{
    // �ڽ������������ֵ��·ݣ�1-12���������Ӧ�·ݵ�Ӣ�ĵ��ʵ�ȫ�ƣ������������ֲ��Ϸ���������ʾ��
    int month;
    cout << "�������·ݣ�"; cin >> month;
    cout << "month:" << month << "��" << endl << endl;;

    // ��if �� else if ��ʵ�֡�
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
    else  cout << "if:��������ֲ���ȷ��\n";
    cout << endl;

    // switchʵ�֡�
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
        default: cout << "switch:��������ֲ���ȷ��\n";
    }
    cout << endl;

    // ���ַ������飨C����C++���ʵ�֡�
    /*char montharr[12][10] = { "C���:January","C���:February","C���:March","C���:April","C���:May",
        "C���:June","C���:July","C���:August","C���:September","C���:October","C���:November","C���:December" };*/
    string montharr[12] = { "C++���:January","C++���:February","C++���:March","C++���:April","C++���:May",
        "C++���:June","C++���:July","C++���:August","C++���:September","C++���:October","C++���:November","C++���:December" };
    if (month >= 1 && month <= 12) cout << montharr[month - 1] << endl;
    else  cout << "C++���:��������ֲ���ȷ��\n";
}
