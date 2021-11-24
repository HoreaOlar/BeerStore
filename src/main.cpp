#include<iostream>
#include "../includes/OnlineStore.hpp"

int main(){
	std::string name= ("Ciuc");
	Container container = pint;
	Beer *b= new Beer(name, container);
	Store *store= new Store(b);
	Store *store2=store;
	store=store;
	std::cout<<store2->getBeer()->getName()<<std::endl;
	std::cout<<store->getBeer()->getName()<<std::endl;

	OnlineStore  *os = new OnlineStore(b, "www.OnlineStore.com");
	OnlineStore  *os2 = os;
	std::cout<<os->getBeer()->getName()<<" "<<os->getURL()<<std::endl;
	std::cout<<os2->getBeer()->getName()<<" "<<os2->getURL()<<std::endl;
	return 0;
}
