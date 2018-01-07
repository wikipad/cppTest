#include <cctype>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	string in;
	int tmp=0;
	cin >> in;
	const char* Stop = "@";

	while ((int)in.at(tmp)!=(int)(*Stop))
	{
		if (tmp == in.length())
		{
			break;
		}
		if (!isdigit(in.at(tmp))) {
			if (islower(in.at(tmp)))
			{
				cout << (char)toupper(in.at(tmp));
			}
			else if (isupper(in.at(tmp))) {
				cout << (char)tolower(in.at(tmp));
			}
		}
		
		tmp++;
	}
	cout << endl;
	system("pause");
	return 0;
}