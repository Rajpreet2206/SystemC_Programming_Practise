#include<systemC>
SC_MODULE(Hello_SystemC){//declare module class
	SC_CTOR(Hello_SystemC){  //creating a constructor
		SC_THREAD(main_thread);//registering a process
	}//ending the constructor
	
	void main_thread(void){
		SC_REPORT_INFO("Hello System World!");
	}
};

int sc_main(int sc_argc, char* sc_argv[]){
//Creating an instance of the SystemC module
	Hello_SystemC HelloWorld_i("HelloWorld_i");

	sc_start();//Invoking the simulator
	return 0;
}

