#include "Child.h"
#include <iostream>
#include <time.h>

using namespace std;

enum choice { exitL, confirm, deny };

int main()
{
	srand(time(NULL));
	choice menu = confirm;
	int i;

	while (menu != exitL)
	{

		switch (rand() % 2)
		{
		case 0:
			cout << "Do you slap your kids?" << endl;
			cin >> i;
			if (i == 1)
			{

			}
			break;
		case 1:
			cout << "Do you hug your kids?" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}