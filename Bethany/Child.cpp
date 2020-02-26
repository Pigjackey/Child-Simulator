#include "Child.h"

string Child::toString()
{
	stringstream ss;
	string me;

	switch (moo)
	{
	case angry: me = "angry"; break;
	case sad: me = "sad"; break;
	case neutral: me = "neutral"; break;
	case happy: me = "happy"; break;
	case overjoyed: me = "overjoyed"; break;
	}

	ss << name << " is " << age << " years old and is " << me;

	return ss.str();
}

void Child::ageUp()
{
	age++;
}

void Child::moodDown()
{
	switch(moo)
	{
	case angry: moo = angry; break;
	case sad: moo = angry; break;
	case neutral: moo = sad; break;
	case happy: moo = neutral; break;
	case overjoyed: moo = happy; break;
	}
}

void Child::moodUp()
{
	switch (moo)
	{
	case angry: moo = sad; break;
	case sad: moo = neutral; break;
	case neutral: moo = happy; break;
	case happy: moo = overjoyed; break;
	case overjoyed: moo = overjoyed; break;
	}
}