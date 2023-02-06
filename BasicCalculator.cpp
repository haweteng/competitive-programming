class Solution {
public:
	int calculate(string s)
	{
		int ret = 0;
		int num = 0;
		int lastSign = 1;
		bool hasMultiplicationOrDivision = false;
		bool isMultiplication = false;
		int lastNumForDivisionOrMultiplication = 0;
		for (int index = 0; index < s.length();)
		{
			switch (s[index])
			{
			case '+':
				ret += lastSign *num;
				index++;
				num = 0;
				lastSign = 1;
				break;
			case '-':
				ret += lastSign *num;
				num = 0;
				index++;
				lastSign = -1;
				break;
			case ' ':
				index++;
				break;
			default:
			{
					   if (s[index] != '*' && s[index] != '/')
					   {
						   num *= 10;
						   num += s[index] - '0';
						   if (index + 1 == s.length() || (s[index + 1] < '0' || s[index + 1] >'9'))
						   {
							   if (hasMultiplicationOrDivision)
							   {
								   if (isMultiplication)
								   {
									   num = lastNumForDivisionOrMultiplication * num;
								   }
								   else
									   num = lastNumForDivisionOrMultiplication / num;
							   }

							   hasMultiplicationOrDivision = false;
						   }
					   }
					   else
					   {

						   if (s[index] == '*')
							   isMultiplication = true;
						   else
							   isMultiplication = false;
						   lastNumForDivisionOrMultiplication = num;
						   hasMultiplicationOrDivision = true;
						   num = 0;
					   }
					   index++;
			}
			}
		}
		if (num != 0)
			ret += lastSign * num;
		return ret;
	}
};
