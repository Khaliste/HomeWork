#include <iostream>

//목표는 소문자를 대문자로 바꾸기. 대문자와 숫자는 그대로 두고 소문자만 찾아 바꿔주는 방식.

int StringCount(const char* _Left)
{
	int Count = 0;
	while (0 != _Left[Count])
	{
		Count += 1;
	}
}

void ToUpper(const char* _Left, char* _Right)
{
	int LeftCount = StringCount(_Left);

		int iCount = 0;
		for (int i = 0; i < LeftCount; i++)
		{
			char LeftValue = _Left[i];

			if ('97' <= _Left[i] && '122' >= _Left[i])
			{
				_Right[i] = _Left[i] - ('a' - 'A');

				char RightValue = _Right[i];
			}
			else
			{
				_Right[i] = _Left[i];
			}

		}
}

int main()
{
	char Text[100];
	ToUpper("12abCcEee", Text);
	//      "12ABCCEEE"
	printf_s(Text);
}