#include <iostream>

//��ǥ�� �ҹ��ڸ� �빮�ڷ� �ٲٱ�. �빮�ڿ� ���ڴ� �״�� �ΰ� �ҹ��ڸ� ã�� �ٲ��ִ� ���.

void ToUpper(const char* _Left, char* _Right)
			//const char* _Left���� pP1231dcwsec��, char* _Right���� Text�� ���Եȴ�.
{
	for (int i = 0; i < 100; i++)
			//0���� 100����
	{
		if ('97' <= _Left[i] && '122' >= _Left[i])
			//�ƽ�Ű�ڵ��� a�� 97, z�� 122�̴�.
			_Right[i] = _Left[i] - 32;
			//�빮�� ���ĺ��� �ҹ��� ���ĺ��� (A 65, a 97) 32��ŭ�� ���̰� �����Ƿ� �ҹ��ڸ� �빮�ڷ�
			//�ٲ��ֱ� ���ؼ� -32�� �ϸ� �ȴ�. 

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