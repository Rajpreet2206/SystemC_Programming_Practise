#include<iostream>
#include<systemc>

#define SC_MODULE() struct module_name: public sc_module
//However, this way is not preferred.

class module_name: public sc_module{
	public:
		//MODULE_BODY
};
SC_MODULE(module_name){
	//MODULE_BODY
	
};
