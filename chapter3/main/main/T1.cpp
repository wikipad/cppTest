#include "T1.h"



T1::T1()
{
}


T1::~T1()
{
}

int T1::cov()
{
	using namespace std;
	cout << "�����ߣ�Ӣ�磩:" ;
	int in = 0;
	cin >> in;
	cout << "�����ߣ�Ӣ�ߣ�:" << (float)in / COV << endl;
	return 0;
}
