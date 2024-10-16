#include <iostream>
#include "stacktype.cpp"
using namespace std;

bool CheckBalanced(string input)
{
	stackType<char> s;

	for(int i =0;i<input.length();i++)
	{
	    //Opening braces are Pushed into the stack
		if(input[i] == '(' || input[i] == '{' || input[i] == '[')
			s.Push(input[i]);

        //For Closing braces if the stack is empty OR if the last
        //char from the stack is a different type of brace then it
        //returns false Otherwise it Pops the last char from the stack
		else if(input[i] == ')')
		{
			if(s.IsEmpty() || s.Top() != '(')
				return false;
			else
				s.Pop();
		}
		else if(input[i] == '}')
		{
			if(s.IsEmpty() || s.Top() != '{')
				return false;
			else
				s.Pop();
		}
		else if(input[i] == ']')
		{
			if(s.IsEmpty() || s.Top() != '[')
				return false;
			else
				s.Pop();
		}
	}

	//Stack must be empty if there are no unbalanced parenthesis left
	return (s.IsEmpty());
}

int main()
{
    //Taking the string input
	string parentheses;
	cout<<"Enter the String: ";
	cin>>parentheses;

	//Checking if the given string is Balanced
	if(CheckBalanced(parentheses))
		cout<<"Balanced";
	else
		cout<<"Not Balanced";

    return 0;
}
