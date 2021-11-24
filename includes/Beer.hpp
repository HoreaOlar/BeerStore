#pragma once
#include<iostream>
#include<cstring>

enum Container{bottle, can, pint};

class Beer{
	private:
		Container container;
		std::string name;
    
	public:
	Beer(std::string name, Container container);

	

	std::string getName();
	
	Container getContainer();
		
};