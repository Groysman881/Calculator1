#include <iostream>
#include"stack.h"
#include"queue.h"
#include"calculator.h"
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    Calculator calc;
    bool continiue = 1;
    while(continiue){
        cout<<"Enter expression : ";
        char* expr = new char[50];
        //fgets(expr,50,stdin);
        gets(expr);
        cout<<expr<<endl;
        cout<<strlen(expr)<<endl;
        calc.getPostfix(expr);
        calc.getAST();
        int a = calc.calculate(calc.get_tree_root());
        cout<<a<<endl;
        cout<<"Next expression?: 1 - Yes 0 - No"<<endl;
        char* buf = new char[1];
        gets(buf);
        if(strcmp(buf,"0") == 0){
            continiue = 0;
        }
        else if(strcmp(buf,"1") != 0){
            cout<<"Incorrect enter"<<endl;
            exit(0);
        }
    }
    return 0;
}
