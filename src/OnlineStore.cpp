#include<iostream>
#include "../includes/OnlineStore.hpp"

OnlineStore::OnlineStore(Beer *br, std::string URL):Store(br){
    this->URL=URL;
}

OnlineStore& OnlineStore::operator=(const OnlineStore& s){
	Store::operator=(s);
    URL=s.URL;
	return *this;
}

OnlineStore::OnlineStore(const OnlineStore& s):Store(s){
	URL=s.URL;
}

std::string OnlineStore::getURL(){
    return URL;
}