#include<iostream>
#include<memory>
#include "../includes/OnlineStore.hpp"


void f1(){
	std::unique_ptr<Beer> pB1(new Beer("Timisoreana", pint));
	//std::unique_ptr<Beer> pB2(); // eroare compilare
	//pB2=pB1; // eroare compilare
	//std::unique_ptr<Beer> pB2 = std::move(pB1); // segmentation fault
	std::cout<<pB1->getName()<<std::endl;
	//std::cout<<pB2->getName();
}

void f2(){
	std::shared_ptr<Beer> pB1(new Beer("Ursus", pint));
	std::shared_ptr<Beer> pB2(pB1);
	std::cout<<pB1->getName()<<std::endl;
	std::cout<<pB2->getName()<<std::endl;
	pB1->setName("Silva");
	std::cout<<pB1->getName()<<std::endl;
	std::cout<<pB2->getName()<<std::endl;
}

int main(){
	f1();
	f2();

	
	return 0;
}
