#pragma once
#include<iostream>
#include "Beer.hpp"

class Store{
	private: 
		Beer *b;

    public:
		Store(Beer *b);
		Store(const Store& s);
		Beer* getBeer();
		Store& operator=(const Store& s);   
};