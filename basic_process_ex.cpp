#include<iostream>
#include<systemc>

void basic_process_ex::my_thread_process(void){
	cout<<"my_thread_process executes within"<<name()//Returns SC_MODULE name
		<<endl;
}


