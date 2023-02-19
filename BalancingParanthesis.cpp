#include<bits/stdc++.h>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

bool areBracketsBalanced(string exp){
	stack<char>temp;
	for(int i=0;i<exp.length();i++)
	{
		if(temp.empty())
		{
			
			temp.push(exp[i]);
		}
		else if ((temp.top()=='('&& exp[i]==')')
		||(temp.top()=='{'&& exp[i]=='}')
		||(temp.top()=='['&& exp[i]==']')){
		temp.pop();
				
		}
		else
		{
			temp.push(exp[i]);
		}
	}
	
	if(temp.empty())
	{
		return true;
	}
	return false;
}
int main()
{
	//string exp="{()}[]";
	//if (areBracketsBalanced(exp))
		
string exp;
cout << "\n Enter a element:";
cin >> exp;
if (areBracketsBalanced(exp))
cout << "Balanced";
else
cout << "Not Balanced";
return 0;

}
	
	
	
