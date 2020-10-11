#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    if(c=='+'||c=='*'||c=='/'||c=='-'){
        return true;
    }
    return false;
}

string prefixToInfixExpression(string prefixExp){
    stack<string> s;
    for(int i=prefixExp.size()-1;i>=0;i--){
        if(isOperator(prefixExp[i])){
            string operand1=s.top();
            s.pop();
            string operand2=s.top();
            s.pop();
            string evaluatedSubExpression="("+operand1+prefixExp[i]+operand2+")";
            s.push(evaluatedSubExpression);
        }else{
            s.push(string(1,prefixExp[i]));
        }
    }
    return s.top();
}

string prefixToPostfixExpression(string prefixExp){
    stack<string> s;
    for(int i=prefixExp.size()-1;i>=0;i--){
        if(isOperator(prefixExp[i])){
            string operand1=s.top();
            s.pop();
            string operand2=s.top();
            s.pop();
            string evaluatedSubExpression=operand1+operand2+prefixExp[i];
            s.push(evaluatedSubExpression);
        }else{
            s.push(string(1,prefixExp[i]));
        }
    }
    return s.top();
}

string postfixToInfixExpression(string postfixExp){
    stack<string> s;
    for(int i=0;i<postfixExp.size();i++){
        if(isOperator(postfixExp[i])){
            string operand2=s.top();
            s.pop();
            string operand1=s.top();
            s.pop();
            string evaluatedSubString="("+operand1+postfixExp[i]+operand2+")";
            s.push(evaluatedSubString);
        }else{
            s.push(string(1,postfixExp[i]));
        }
    }
    return s.top();
}

string postfixToPrefixExpression(string postfixExp){
    stack<string> s;
    for(int i=0;i<postfixExp.size();i++){
        if(isOperator(postfixExp[i])){
            string operand2=s.top();
            s.pop();
            string operand1=s.top();
            s.pop();
            string evaluatedSubString=postfixExp[i]+operand1+operand2;
            s.push(evaluatedSubString);
        }else{
            s.push(string(1,postfixExp[i]));
        }
    }
    return s.top();
}

int main(){
    string prefixExp="*-A/BC-/AKL",postfixExp="ABC/-AK/L-*";

    cout<<prefixToInfixExpression(prefixExp)<<endl;
    cout<<prefixToPostfixExpression(prefixExp)<<endl;

    cout<<postfixToInfixExpression(postfixExp)<<endl;
    cout<<postfixToPrefixExpression(postfixExp)<<endl;
    return 0;
}
