#include<iostream>
using namespace std;
int main(){

	char choice;
	int a,b;
	do{
		cin>>choice;
		if(choice=='+'){
			cin>>a;
			cin>>b;
			cout<<a+b<<endl;
		}
		else if(choice=='-'){
			cin>>a;
			cin>>b;
			cout<<a-b<<endl;
		}
		else if(choice=='*'){
			cin>>a;
			cin>>b;
			cout<<a*b<<endl;
		}
		else if(choice=='/'){
			cin>>a;
			cin>>b;
			cout<<a/b<<endl;
		}
		else if(choice=='%'){
			cin>>a;
			cin>>b;
			cout<<a%b<<endl;
		}
        else if(choice=='x'|| choice=='X'){
            // break;
        }
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}
	} while(choice!='x'&& choice!='X');
	


	return 0;
}