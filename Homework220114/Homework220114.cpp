#include <iostream>

//��ǥ�� �ҹ��ڸ� �빮�ڷ� �ٲٱ�. �빮�ڿ� ���ڴ� �״�� �ΰ� �ҹ��ڸ� ã�� �ٲ��ִ� ���.

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