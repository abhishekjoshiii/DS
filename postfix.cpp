#include<iostream>
using namespace std;


class Evaluation
{
	public:int st[50];
	int top;
	char str[50];
			Evaluation()
			 {
				top = -1;
			 }
	void push(int val) 
	{
		top++;
		st[top] = val;
	}
		int pop() 
		{
		int val = st[top];
		top--;
		return val;
		}
int operation(int a,int b,char opr) 
{
		switch(opr) {
						case '+':return a+b;
						case '-':return a-b;
						case '*':return a*b;
						case '/':return a/b;
						default: return 0;
					}
}
	int calculatePostfix();
};
	int Evaluation::calculatePostfix() 
{
	int index = 0;

	while(str[index]!='\0') 
	{
		if(isdigit(str[index]))
		 {
			push(str[index]-'0');
		 }
			else 
		{
			int x = pop();
			
			int y = pop();
			int result = operation(y,x,str[index]);
			push(result);
		}
	index++;
 }
return pop();
}
int main() 
{
		Evaluation eval;
		cout << "Enter The POSTFIX: ";
		cin >> eval.str;
		int result = eval.calculatePostfix();
		cout << "The result Is " << result;
		return 0;
}
