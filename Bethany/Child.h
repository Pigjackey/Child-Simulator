#pragma once
#include <string>
#include <sstream>

using namespace std;

enum personality { bold, shy };
enum mood { angry = -2, sad, neutral, happy, overjoyed};

class Child
{
	protected:
		string name;
		int age;
		personality per;
		mood moo;

	public:
		Child(string nameIn)
		{
			name = nameIn;
			age = 0;
			
			switch(rand() % 2)
			{
			case 0: per = shy; break;
			case 1: per = bold; break;
			}

			moo = neutral;
		}
		~Child() {}

		string toString();

		void ageUp();

		void moodDown();

		void moodUp();
};