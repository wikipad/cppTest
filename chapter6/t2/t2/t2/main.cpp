#include <iostream>
#include <array>
#include <cctype>
#include <string>

using namespace std;

bool isNotDigit(string abt);
int OutLine(array<double,10> *ti,int);

int main()
{
	array<double, 10> inArray;
	string tmp;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		cin>> tmp;
		if (isNotDigit(tmp)){
			break;
		}
		inArray[i] = atof(tmp.c_str());
		count++;
	}
	OutLine(&inArray,count);
	system("pause");

}

bool isNotDigit(string abt)
{
	for (int i = 0; i < abt.length(); i++)
	{
		if (isalpha((char)abt.at(i))) {
			return true;
		}
	}
	return false;
}

int OutLine(array<double, 10> *ti ,int c)
{
	double sum=0;
	int cu=0;
	if (c == 0) {
		cout << "至少输入一个数据" << endl;
		return 1;
	}
	for (int j = 0; j < c; j++) {
		sum += ti->at(j);
	}
	double avg = sum / c;

	for (int k = 0; k < c; k++) {
		if(ti->at(k)>avg){
			cu++;
		}
	}
	cout << "您输入了" << c << "个数字，他们的平均数为" << avg <<"，其中有"<<cu<<"个数大于平均数"<< endl;
	return 0;
}
