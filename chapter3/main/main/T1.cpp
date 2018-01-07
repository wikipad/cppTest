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
	cout << "你的身高（英寸）:" ;
	int in = 0;
	cin >> in;
	cout << "你的身高（英尺）:" << (float)in / COV << endl;
	return 0;
}
