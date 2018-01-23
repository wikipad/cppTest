#include <iostream>

using namespace std;

int main (){
	cout<<"Please enter one of the following choices:\n\tc)carnivore\n\tp)pianist\n\tt)tree\n\tg)game\n"<<endl;
menu:
	switch (cin.get()){
		case ('c'):
			break;
		case ('p'):
			break;
		case ('t'):
			break;
		case ('g'):
			cout<<"game"<<endl;
			break;
		default :
			cout<<"Please enter a c ,p t:"<<endl;
			goto menu;

	}

}
