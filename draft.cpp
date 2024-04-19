#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "draft.h"

struct st_girl {
    int age = 18;    // 年龄
    int height = 170; // 身高
    char sc[31] = "火辣";  // 身材，C风格字符串。
    bool yz = 1;	// 颜值，true-漂亮；false-一般。
};

void Draft_Practice()
{
    // 创建并初始化结构体
    Stgirl girl;
    memset(&girl, 0, sizeof(Stgirl));

    // 输入全部的数据项
    cout << "请输入年龄(18-40)："; cin >> girl.age;
    cout << "请输入身高(155-178)："; cin >> girl.height;
    cout << "请输入身材(火辣/普通/飞机场)："; cin >> girl.sc;
    cout << "请输入颜值(true/false)："; cin >> girl.yz;

    // 显示输入的信息
    cout << "age=" << girl.age << ",height=" << girl.height << ",sc=" << girl.sc
        << ",yz=" << girl.yz << endl;

    // 妃子：1）年龄18-25岁；2）身高165-178cm；3）身材火辣；4）颜值漂亮。
    if (girl.age >= 18 && girl.age <= 25 && girl.height >= 165 && girl.height <= 178 && girl.sc == "火辣" && girl.yz == true)
    {
        cout << "妃子\n";
    }

    // 宫女：1）年龄18-30岁；2）身高160-165cm；3）身材火辣或者普通；4）颜值漂亮。
    if (girl.age >= 18 && girl.age <= 30 && girl.height >= 160 && girl.height <= 165 && girl.sc == "火辣" || girl.sc == "普通" && girl.yz == true)
    {
        cout << "宫女\n";
    }

    // 嬷嬷：1）年龄35-40岁；2）身高155-165cm；3）身材普通或者飞机场；4）颜值一般。
    if (girl.age >= 35 && girl.age <= 40 && girl.height >= 155 && girl.height <= 165 && girl.sc == "普通" || girl.sc == "飞机场" && girl.yz == false)
    {
        cout << "嬷嬷\n";
    }
}
