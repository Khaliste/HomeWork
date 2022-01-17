#include <iostream>

//목표는 소문자를 대문자로 바꾸기. 대문자와 숫자는 그대로 두고 소문자만 찾아 바꿔주는 방식.

void ToUpper(const char* _Left, char* _Right)
			//const char* _Left에는 pP1231dcwsec가, char* _Right에는 Text가 들어가게된다.
{
	for (int i = 0; i < 100; i++)
			//0부터 100까지
	{
		if ('97' <= _Left[i] && '122' >= _Left[i])
			//아스키코드의 a는 97, z는 122이다.
			_Right[i] = _Left[i] - 32;
			//대문자 알파벳과 소문자 알파벳은 (A 65, a 97) 32만큼의 차이가 있으므로 소문자를 대문자로
			//바꿔주기 위해선 -32를 하면 된다. 

		else
			_Right[i] = _Left[i];

	}
}


int main()
{
	{
		char Text[5];

		ToUpper("pP1231dcwsec", Text);
		//      "PP1231DCWSEC"
		printf_s(Text);
	}

	{
		char Text[100];

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}
}