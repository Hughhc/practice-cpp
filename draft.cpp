#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "draft.h"

struct st_girl {
    int age = 18;    // ����
    int height = 170; // ���
    char sc[31] = "����";  // ��ģ�C����ַ�����
    bool yz = 1;	// ��ֵ��true-Ư����false-һ�㡣
};

void Draft_Practice()
{
    // ��������ʼ���ṹ��
    Stgirl girl;
    memset(&girl, 0, sizeof(Stgirl));

    // ����ȫ����������
    cout << "����������(18-40)��"; cin >> girl.age;
    cout << "���������(155-178)��"; cin >> girl.height;
    cout << "���������(����/��ͨ/�ɻ���)��"; cin >> girl.sc;
    cout << "��������ֵ(true/false)��"; cin >> girl.yz;

    // ��ʾ�������Ϣ
    cout << "age=" << girl.age << ",height=" << girl.height << ",sc=" << girl.sc
        << ",yz=" << girl.yz << endl;

    // ���ӣ�1������18-25�ꣻ2�����165-178cm��3����Ļ�����4����ֵƯ����
    if (girl.age >= 18 && girl.age <= 25 && girl.height >= 165 && girl.height <= 178 && girl.sc == "����" && girl.yz == true)
    {
        cout << "����\n";
    }

    // ��Ů��1������18-30�ꣻ2�����160-165cm��3����Ļ���������ͨ��4����ֵƯ����
    if (girl.age >= 18 && girl.age <= 30 && girl.height >= 160 && girl.height <= 165 && girl.sc == "����" || girl.sc == "��ͨ" && girl.yz == true)
    {
        cout << "��Ů\n";
    }

    // ���֣�1������35-40�ꣻ2�����155-165cm��3�������ͨ���߷ɻ�����4����ֵһ�㡣
    if (girl.age >= 35 && girl.age <= 40 && girl.height >= 155 && girl.height <= 165 && girl.sc == "��ͨ" || girl.sc == "�ɻ���" && girl.yz == false)
    {
        cout << "����\n";
    }
}
