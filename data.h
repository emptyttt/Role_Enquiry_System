#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person {
public:
	string const name;
	person(string name, string const Init_personality, string const Init_status, int const num, string const introduction);
	
	string const Init_personality;
	string const Init_status;
	int const num;
	string const introduction;

	virtual int growth(int a) = 0;  // 纯虚函数
};

// 贾家族类，继承自 person
class jia_family : public person {
public:
	const int jia_growth_value = 400;

	using person::person;  // 继承构造函数
};

// 王家族类，继承自 person
class wang_family : public person {
public:
	const int wang_growth_value = 200;

	using person::person;  // 继承构造函数
};

// 王家仆人类，继承自 wang_family
class wang_servant : public wang_family {
public:
	int growth(int b);  // 重写 growth 函数

	using wang_family::wang_family;  // 继承构造函数
};

// 王家主人类，继承自 wang_family
class wang_host : public wang_family {
public:
	int growth(int b);  // 重写 growth 函数

	using wang_family::wang_family;  // 继承构造函数
};

// 贾家仆人类，继承自 jia_family
class jia_servant : public jia_family {
public:
	int growth(int b);  // 重写 growth 函数

	using jia_family::jia_family;  // 继承构造函数
};

// 贾家主人类，继承自 jia_family
class jia_host : public jia_family {
public:
	int growth(int b);  // 重写 growth 函数

	using jia_family::jia_family;  // 继承构造函数
};

// 数据表，存储所有人物实例
extern person* table[];

extern

// 查找指定人物的编号
vector<int> find_name(string name);

// 设置人物的成长值
int setup_growth_value(string name, int init_value);
