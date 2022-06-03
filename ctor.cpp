#include<iostream>
#include<systemc>

SC_MODULE(module_name){
	SC_CTOR(module_name)
	SC_THREAD(process_name);//Must be inside Constructor
		:Initialization // C++ Initialization
	{
	//	Subdesign_Allocation
	//	Subdesign_Connectivity
	//	Process_Registration
	//	Miscellaneous_Setup
	}
};

//Below is a basic example of SC_THREAD
//
SC_MODULE(basic_process_ex){
	SC_CTOR(basic_process_ex){
		SC_THREAD(my_thread_process);
	}
	void my_thread_process(void);
};
