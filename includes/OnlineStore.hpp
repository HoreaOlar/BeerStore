#pragma once
#include<iostream>
#include "Store.hpp"

class OnlineStore : public Store{
	private: 
		std::string URL;

    public:
	    OnlineStore(Beer *b, std::string URL);
        OnlineStore(const OnlineStore& s);
		OnlineStore& operator=(const OnlineStore& s);
        std::string getURL();
};