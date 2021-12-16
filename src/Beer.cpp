#include<iostream>
#include "../includes/Beer.hpp"

Beer::Beer(std::string name, Container container){
	this->container = container;
	this->name=name;
}
	
std::string Beer::getName(){
	return name;
}

Container Beer::getContainer(){
	return container;
}

Beer* CreateBeer(std::string name, Container container){	
	return new Beer(name, container);
}

void Beer::setName(std::string name){
	this->name = name;
}
