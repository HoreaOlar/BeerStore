#include<iostream>
#include "../includes/Store.hpp"

Store::Store(Beer *br){
	b=br;
}

Beer* Store::getBeer(){
	return b;
}

Store& Store::operator=(const Store& s){
	Beer *bOrig = b;
	b= new Beer(*s.b);
	delete bOrig;
	return *this;
}

Store::Store(const Store& s){
	this->b = s.b;
}