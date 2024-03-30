//#include <iostream>
//#include"Question 03.h"
//#include"Question 03 implementation.cpp"
//
//using namespace std;
//
//// Function to check if parentheses in the expression are balanced
//string checkBalancedParentheses(const string& expression) {
//    const long int Length = expression.length(); // I used built-in function here lengrh()
//    Stack<char, 100> parenthesesStack; // a generic object created <object type, size> 
//
//    for (int i = 0; i < Length; i++) {
//        char ch = expression[i]; //store the value of expression[i] into ch
//        if (ch == '(') {
//            parenthesesStack.push(ch); //store ( in the stack
//        }
//        else if (ch == ')') {
//            if (parenthesesStack.empty()) { //return -1
//                return "not balanced";
//            }
//            parenthesesStack.pop(); //retrive the value from the stack
//        }
//    }
//
//    return parenthesesStack.empty() ? "balanced" : "not balanced"; //ternary operators
//}
//
//int main() {
//    // Test cases
//    cout << "sample input: (a+b+c)\noutput: " << checkBalancedParentheses("(a+b+c)") << endl;
//    cout << "sample input: (a+b\noutput: " << checkBalancedParentheses("(a+b") << endl;
//    cout << "sample input: ((a+c)+b\noutput: " << checkBalancedParentheses("((a+c)+b") << endl;
//    cout << "sample input: ((a+c)+b)))\noutput: " << checkBalancedParentheses("((a+c)+b)))") << endl;
//
//    return 0;
//}
//
///*
//-->Algorithm Description :
//
//->The algorithm to determine whether the parentheses in a given expression are balanced can be 
//implemented using a stack.Here's a step-by-step description of the algorithm:
//
//1..Initialize an empty stack to store opening parentheses.
//2..Iterate through each character in the expression.
//3..If the current character is an opening parenthesis('('), push it onto the stack.
//4..If the current character is a closing parenthesis(')') :
//   . If the stack is empty, return "not balanced" since there's no corresponding opening 
//   . parenthesis.
//   . If the stack is not empty, pop the top element from the stack.
//5..After iterating through all characters in the expression, if the stack is empty, return 
//"balanced"; otherwise, return "not balanced".
//*/