// C++ program to check for balanced parenthesis string expression.

/*
Sample Input/Output- 

1. Input = {()[]}
   Output =  Balanced Parenthesis Expression
2. Input = {[(){}]}[{}]
   Output =  Balanced Parenthesis Expression
3. Input = {[()])}[)  
   Output =  Not a Balanced Parenthesis Expression
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to check if brackets are balanced
bool isBalanced(string s)
{
	// Declare a stack to hold the previous brackets.
	stack<char> temp;
	for (int i = 0; i < s.length(); i++) {
		if (temp.empty()) {
			
			// If the stack is empty push the current bracket
			temp.push(s[i]);
		}
		else if ((temp.top() == '(' && s[i] == ')') || (temp.top() == '[' && s[i] == ']') || (temp.top() == '{' && s[i] == '}')) {
			
			// If we found any complete pair of bracket then pop
			temp.pop();
		}
		else {
			temp.push(s[i]);
		}
	}
	if (temp.empty()) {
		
		// If stack is empty return true
		return true;
	}
	return false;
}

int main()
{
	string s;
    cin>>s;

	if (isBalanced(s))
		cout << "Balanced Parenthesis Expression";
	else
		cout << "Not a Balanced Parenthesis Expression";
	return 0;
}
